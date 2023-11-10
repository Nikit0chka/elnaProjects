FUNCTION_BLOCK Pusk_first_faza1

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	timer240 : struct_PhaseAlgoritm;
	pmsMore50 : struct_PhaseAlgoritm;
	pnsOn : struct_PhaseAlgoritm;
	pmsMore300 : struct_PhaseAlgoritm;
	Protection_Pms : struct_PhaseAlgoritm;
	Error_Alg : struct_PhaseAlgoritm;
	fb_timer240 : fb_ph_Timer;
	fb_PnmMore50 : fb_ph_algoritm;
	fb_PnsOn : fb_ph_Switch;
	fb_PmsMore300 : fb_ph_algoritm;
	fb_Protection_Pms : fb_ph_algoritm;
	fb_Error_Alg : fb_ph_algoritm;
	_sunpackerCommand : fb_sunpackerCommand;
	_PhaseAlgoritmAction : TYPE_PhaseAlgoritmAction;
	_statusDualInput : TYPE_statusDualInput;
	_Answers : TYPE_Answers;
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
	ModeGpa : TYPE_ModeGpa;
	algManager : struct_AlgoritmsManager;
	IM : ImConfig;
	protections : ProtectionsConfig;
	_statusAi : TYPE_StatusAi;
	ai : AiConfig;
END_VAR





IF NOT onInit THEN

         fb_timer240(phaseNumber:=0, delay:=T#240S);
         fb_PnmMore50(phaseNumber:=1);
         fb_PnsOn(phaseNumber:=2, act:=_on);
         fb_PmsMore300(phaseNumber:=3);
         fb_Protection_Pms(phaseNumber:=4);              
         fb_Error_Alg(phaseNumber:=5);
       
onInit:=TRUE;
END_IF;
       
fb_timer240(StrPh:=timer240);
fb_PnmMore50(StrPh:=pmsMore50);
fb_PnsOn(StrPh:=pnsOn, IM := Im.pns);
fb_PmsMore300(StrPh:=pmsMore300);
fb_Protection_Pms(StrPh:=Protection_Pms);              
fb_Error_Alg(StrPh:=Error_Alg);                               
       
StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
         
IF StrAlg.isRuning THEN

    StrAlg.hasError := pnsOn.error;
    
    (* не взведены защиты - запуск таймера *)
    IF NOT Protection_Pms.top THEN
	runPhase(timer240); 
    END_IF;
    
    (* не начался запуск пнс - запуск пнс *)
    IF NOT pnsOn.start THEN
	runPhase(pnsOn);
    END_IF;
    
    (* запуск пнс завершен - запус защит *)
    IF pnsOn.top THEN
         runPhase(pmsMore50);
         runPhase(pmsMore300);
    END_IF;   
    
    
    (* не завершился запуск защиты 50 - проверка давления 50 *)
    IF pmsMore50.start AND (NOT pmsMore50.top) THEN
	IF ai.Pmaslo_sm_nizkoe.interval = _statusAi.NORMAL AND ai.Pmaslo_sm_nizkoe.value > 50.0  THEN
	   pmsMore50.top := TRUE;
          END_IF;
    END_IF;
   
    
    (* не завершился запуск защиты 300 - проверка давления 300 *)
    IF  pmsMore300.start AND (NOT pmsMore300.top) THEN
	IF ai.Pmaslo_sm_vysokoe.interval = _statusAi.NORMAL AND ai.Pmaslo_sm_vysokoe.value > 300.0  THEN
	    pmsMore300.top := TRUE;
	END_IF;
    END_IF;

    (* давление было проверено - запуск защит *)     
    IF pmsMore50.top AND pmsMore300.top THEN
        runPhase(Protection_Pms);
    END_IF;
    
    (* запуск защит не завршен - запуск защит *)
    IF Protection_Pms.start AND (NOT Protection_Pms.top) THEN
	runAiProtection(protections.Pmaslo_sm_nizkoe);
          runAiProtection(protections.Pmaslo_sm_vysokoe);
          Protection_Pms.top := TRUE;
    END_IF;
    
    (* таймер завершился до запуска защит - ошибка *)
    IF timer240.top THEN 
        Error_Alg.ERROR := TRUE; (*не понятное куда его сунуть и нужен ли он*)
    ELSE
        Error_Alg.ERROR := FALSE;	
    END_IF;
    
    (* защиты выствалены до завршения таймера - сброс таймера *)
    IF Protection_Pms.top THEN
	resetPhase(timer240);
    END_IF;
    
    StrAlg.isEnded:= pnsOn.Top AND Protection_Pms.Top (*Как будто нужно таймер *);
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
                                                  algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA1;
                                                  
                                                  runPhase(pnsOn);
                                                  resetAiProtection(protections.Pmaslo_sm_nizkoe);                                                  
                                                  resetAiProtection(protections.Pmaslo_sm_vysokoe);
                                                    	
					cmd_for_Status := cmd;
					source_for_Status := source;
					command_error_for_Status := 0;
				ELSE
					StrAlg.isRuning := FALSE;
					StrAlg.isEnded := FALSE;
					StrAlg.hasError := FALSE;

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
                                                                       
                                        resetPhase(timer240);
                                        resetPhase(pmsMore50);
                                        resetPhase(pnsOn);
                                        resetPhase(pmsMore300);
                                        resetPhase(Protection_Pms);
                                        resetPhase(Error_Alg);
                                        
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

StrAlg.Start:= timer240.startStatus
            OR pmsMore50.startStatus
            OR pnsOn.startStatus
            OR Error_Alg.startStatus
            OR pmsMore300.startStatus
            OR Protection_Pms.startStatus;
            

StrAlg.Error := timer240.errorStatus
            OR pmsMore50.errorStatus
            OR pnsOn.errorStatus
            OR Error_Alg.errorStatus
            OR pmsMore300.errorStatus
            OR Protection_Pms.errorStatus;          
            
StrAlg.Top := timer240.topStatus
            OR pmsMore50.topStatus
            OR pnsOn.topStatus
            OR Error_Alg.topStatus
            OR pmsMore300.topStatus
            OR Protection_Pms.topStatus;  
             
(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);