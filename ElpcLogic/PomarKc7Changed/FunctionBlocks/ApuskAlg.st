FUNCTION_BLOCK ApuskAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	runOilsystem : struct_PhaseAlgoritm;
	runEngine : struct_PhaseAlgoritm;
	filling : struct_PhaseAlgoritm;
	fb_runOilsystem : fb_ph_algoritm;
	fb_runEngine : fb_ph_algoritm;
	fb_filling : fb_ph_algoritm;
	_sunpackerCommand : fb_sunpackerCommand;
	_PhaseAlgoritmAction : TYPE_PhaseAlgoritmAction;
	_statusDualInput : TYPE_statusDualInput;
	source : BYTE;
	cmd : BYTE;
	lastCmd : BYTE;
	source_for_Status : BYTE;
	cmd_for_Status : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	resetCmdTimerPriznak : BOOL;
	onInit : BOOL;
	waitReset : TON;
END_VAR

VAR_EXTERNAL
	algoritms : AlgoritmsConfig;
	ModeGpa : TYPE_ModeGpa;
	algManager : struct_AlgoritmsManager;
	IM : ImConfig;
END_VAR






IF NOT onInit THEN

         fb_runOilsystem(phaseNumber:=0, act:=_run, waitCompletion:=TRUE);
            fb_runEngine(phaseNumber:=1, act:=_run, waitCompletion:=TRUE);
              fb_filling(phaseNumber:=2, act:=_run, waitCompletion:=TRUE);
       

onInit:=TRUE;
END_IF;
       
         fb_runOilsystem(StrPh:=runOilsystem, alg:=algoritms.puskOilSystem);
            fb_runEngine(StrPh:=runEngine, alg:=algoritms.engineRun);
              fb_filling(StrPh:=filling, alg:=algoritms.filling);
                               
       
StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
         
IF StrAlg.isRuning THEN

    StrAlg.hasError := runOilsystem.error OR runEngine.error OR filling.error;
    
    IF runOilsystem.top THEN	
         runPhase(runEngine);
    END_IF;
    
    IF runEngine.top THEN	
         runPhase(filling);
    END_IF;
    
    IF filling.top THEN
          waitReset(IN:=TRUE, PT:= T#2S);
    END_IF;
             
    IF waitReset.Q THEN
    
        IF Im.kran6.onStatus = _statusDualInput.STATUS_On THEN
	algManager.nMode:= ModeGpa.MODE_WORK_Ring;
        END_IF;
        IF Im.kran6.onStatus = _statusDualInput.STATUS_Off THEN
	algManager.nMode:= ModeGpa.MODE_WORK_Line;
        END_IF;

        resetIfRunning(StrAlg);
    END_IF;
    
    StrAlg.isEnded:= filling.top;
    
END_IF;



StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

(* ---- Если управление с ВУ заблокировано, то  передаем команду из алгоритма ---- *)
IF StrAlg.inOpcCommandsDisabled THEN
	StrAlg.inCommand := StrAlg.inCommand_Alg;
ELSE (* иначе передаем команду с АРМа*)
	StrAlg.inCommand := StrAlg.inCommand_ARM;
END_IF;

_sunpackerCommand(command := StrAlg.inCommand);
	source := _sunpackerCommand.source;
	cmd := _sunpackerCommand.cmd;
          
IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrAlg.opcCommandsDisabled) AND source > 0) OR source = 0) then	
	CASE BYTE_TO_INT(cmd) OF
		(*cmdRun*) 1: 	IF (StrAlg.CanRun) THEN
					StrAlg.isRuning := TRUE;
					StrAlg.isEnded := FALSE;
					StrAlg.hasError := FALSE;
					(*****************       OnRun       *****************)
                                                  
                                                  algoritms.puskOilSystem.inCanRun:= TRUE	;
                                                  algoritms.filling.inCanRun:= TRUE	;
                                                  algoritms.engineRun.inCanRun:= TRUE	;	
                                                

                                                  algManager.nMode:=ModeGpa.MODE_APUSK;
                                                  (*impulseSO(Im.SingleOutputs.VzvodBREO);*)
                                                  runPhase(runOilsystem); 
                                                    	
					cmd_for_Status := cmd;
					source_for_Status := source;
					command_error_for_Status := 0;
				ELSE
					StrAlg.isRuning := FALSE;
					StrAlg.isEnded := FALSE;
					StrAlg.hasError 	:= FALSE;

					cmd_for_Status := 0;
					source_for_Status := source;
					command_error_for_Status := cmd;
				END_IF;
		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
				StrAlg.isEnded := FALSE;
				StrAlg.hasError 	:= FALSE;
                                        
                                         (*****************       OnReset       *****************)
                                        waitReset(IN:=FALSE);
                                        StrAlg.inCanRun:=FALSE;
                                                                       
                                        resetPhase(runOilsystem);
                                        resetPhase(runEngine);
                                        resetPhase(filling);
                                        
                                        StrAlg.inOpcCommandsDisabled:=FALSE;                
                                                                                        
				cmd_for_Status := cmd;
				source_for_Status := source;
				command_error_for_Status := 0;
	END_CASE;			
	resetCmdTimer(IN := false);
	resetCmdTimerPriznak := TRUE;
END_IF;
lastCmd := cmd;

resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
IF resetCmdTimer.Q THEN
	resetCmdTimerPriznak := FALSE;
	source_for_Status := 0;
	cmd_for_Status := 0;
	command_error_for_Status := 0;
END_IF; 

StrAlg.Start:= runOilsystem.startStatus
            OR runEngine.startStatus
            OR filling.startStatus;
            
StrAlg.Error:= runOilsystem.errorStatus
            OR runEngine.errorStatus
            OR filling.errorStatus;          
            
StrAlg.Top:=   runOilsystem.topStatus
            OR runEngine.topStatus
            OR filling.topStatus;

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);