FUNCTION_BLOCK engineRunAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	BreakPuskTimer : struct_PhaseAlgoritm;
	RunProtection_mvoff : struct_PhaseAlgoritm;
	LowOil_upStopust : struct_PhaseAlgoritm;
	mvOn : struct_PhaseAlgoritm;
	AutoPns_ph : struct_PhaseAlgoritm;
	AutoAvom_ph : struct_PhaseAlgoritm;
	pnsOff : struct_PhaseAlgoritm;
	testUnsuccessful : struct_PhaseAlgoritm;
	fb_BreakPuskTimer : fb_ph_Timer;
	fb_RunProtection_mvoff : fb_ph_DIprotection;
	fb_LowOil_upStopust : fb_ph_WaitAnalogValue;
	fb_mvOn : fb_ph_SectionSwitch;
	fb_AutoPns_ph : fb_ph_algoritm;
	fb_AutoAvom_ph : fb_ph_algoritm;
	fb_pnsOff : fb_ph_Switch;
	fb_testUnsuccessful : fb_ph_CustomPhase;
	_sunpackerCommand : fb_sunpackerCommand;
	_DualStateImAction : TYPE_DualStateImAction;
	_PhaseAlgoritmAction : TYPE_PhaseAlgoritmAction;
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
	IM : ImConfig;
	algoritms : AlgoritmsConfig;
	ai : AiConfig;
	protections : ProtectionsConfig;
	AlgTimers : struct_AlgTimers;
END_VAR


















IF NOT onInit THEN

     fb_BreakPuskTimer(phaseNumber:=0, delay:=T#665S);
   fb_LowOil_upStopust(phaseNumber:=1);
               fb_mvOn(phaseNumber:=2, act:=_on);
         fb_AutoPns_ph(phaseNumber:=3, act:=_run, waitCompletion:=FALSE);
        fb_AutoAvom_ph(phaseNumber:=4, act:=_run, waitCompletion:=FALSE);
             fb_pnsOff(phaseNumber:=5, act:=_off);
fb_RunProtection_mvoff(phaseNumber:=7, act:=_run);
   fb_testUnsuccessful(phaseNumber:=17);

onInit:=TRUE;
END_IF;

        fb_BreakPuskTimer(StrPh:=BreakPuskTimer, timer:=AlgTimers.engineRun_BreakPuskTimer);
     (* fb_LowOil_upStopust(StrPh:=LowOil_upStopust, ai:=ai.Pmasla_posle_GNS, more:=im.AutoPns_UstStop.Value);*)
                  fb_mvOn(StrPh:=mvOn, Im:=Im.mv);
            fb_AutoPns_ph(StrPh:=AutoPns_ph, alg:=algoritms.AutoPns);
           fb_AutoAvom_ph(StrPh:=AutoAvom_ph, alg:=algoritms.AutoAvom);
                fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
  (*fb_RunProtection_mvoff(StrPh:=RunProtection_mvoff, StrDiP:=protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);*)
      fb_testUnsuccessful(StrPh:=testUnsuccessful);          

StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
         
IF StrAlg.isRuning THEN

    StrAlg.hasError := mvOn.error OR pnsOff.error OR testUnsuccessful.error;
    
    IF mvOn.top THEN	
        runPhase(RunProtection_mvoff);
        runPhase(AutoAvom_ph);
        runPhase(LowOil_upStopust);
    END_IF;
    (*
    IF AutoAvom_ph.top THEN
        algoritms.AutoAvom.inOpcCommandsDisabled:=FALSE;
    END_IF;
    *)
    IF LowOil_upStopust.top THEN
        runPhase(pnsOff);
    END_IF;

    IF pnsOff.top THEN
       runPhase(AutoPns_ph);
    END_IF;
  
    IF BreakPuskTimer.top AND NOT AutoPns_ph.top THEN
          testUnsuccessful.error:=TRUE;
    END_IF;
    
    IF AutoPns_ph.top THEN
          resetPhase(BreakPuskTimer);
	waitReset(IN:=TRUE, PT:= T#2S);
    END_IF;
     
    IF waitReset.Q AND NOT (algoritms.Apusk.isRuning OR algoritms.SemiAutoPusk.isRuning) THEN
	resetIfRunning(StrAlg);
    END_IF;
    
    StrAlg.isEnded:= AutoPns_ph.top;
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
                                                  
                                                  runPhase(mvOn);         
                                                  runPhase(BreakPuskTimer);
                                                  runPhase(testUnsuccessful); 
                                                    	
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
                                        StrAlg.inCanRun:=FALSE;
                                        waitReset(IN:=FALSE);
                                        
                                        resetPhase(BreakPuskTimer);
                                        resetPhase(RunProtection_mvoff);
                                        resetPhase(LowOil_upStopust);
                                        resetPhase(mvOn);
                                        resetPhase(AutoPns_ph);
                                        resetPhase(AutoAvom_ph);
                                        resetPhase(pnsOff);
                                        resetPhase(testUnsuccessful);
                                              
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

StrAlg.Start:= BreakPuskTimer.startStatus
            OR RunProtection_mvoff.startStatus
            OR LowOil_upStopust.startStatus
            OR mvOn.startStatus
            OR AutoPns_ph.startStatus
            OR AutoAvom_ph.startStatus
            OR pnsOff.startStatus
            OR testUnsuccessful.startStatus;
            
StrAlg.Error:= BreakPuskTimer.errorStatus
            OR RunProtection_mvoff.errorStatus
            OR LowOil_upStopust.errorStatus
            OR mvOn.errorStatus
            OR AutoPns_ph.errorStatus
            OR AutoAvom_ph.errorStatus
            OR pnsOff.errorStatus
            OR testUnsuccessful.errorStatus;
            
            
StrAlg.Top:=   BreakPuskTimer.topStatus
            OR RunProtection_mvoff.topStatus
            OR LowOil_upStopust.topStatus
            OR mvOn.topStatus
            OR AutoPns_ph.topStatus
            OR AutoAvom_ph.topStatus
            OR pnsOff.topStatus
            OR testUnsuccessful.topStatus;                          

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);