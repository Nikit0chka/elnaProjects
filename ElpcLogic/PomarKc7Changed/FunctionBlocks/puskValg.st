FUNCTION_BLOCK puskValg

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	puskOilSystem : struct_PhaseAlgoritm;
END_VAR

VAR_IN_OUT
	questionEngine : struct_Question;
END_VAR

VAR
	runningEngine : struct_PhaseAlgoritm;
END_VAR

VAR_IN_OUT
	questionMVoff : struct_Question;
END_VAR

VAR
	mvOff : struct_PhaseAlgoritm;
	pnsOn : struct_PhaseAlgoritm;
	wait600 : struct_PhaseAlgoritm;
	AutoNUoff : struct_PhaseAlgoritm;
	nu1Off : struct_PhaseAlgoritm;
	nu2Off : struct_PhaseAlgoritm;
	autoAvomOff : struct_PhaseAlgoritm;
	Avom1Off : struct_PhaseAlgoritm;
	Avom2Off : struct_PhaseAlgoritm;
	pnsWaitOff : struct_PhaseAlgoritm;
	testUnsuccessful : struct_PhaseAlgoritm;
	fb_puskOilSystem : fb_ph_algoritm;
	fb_questionEngine : fb_Question;
	fb_runningEngine : fb_ph_algoritm;
	fb_questionMVoff : fb_Question;
	fb_mvOff : fb_ph_SectionSwitch;
	fb_pnsOn : fb_ph_Switch;
	fb_wait600 : fb_ph_Timer;
	fb_AutoNUoff : fb_ph_algoritm;
	fb_nu1Off : fb_ph_OilPump;
	fb_nu2Off : fb_ph_OilPump;
	fb_autoAvomOff : fb_ph_algoritm;
	fb_Avom1Off : fb_ph_Switch;
	fb_Avom2Off : fb_ph_Switch;
	fb_pnsWaitOff : fb_ph_algoritm;
	fb_testUnsuccessful : fb_ph_CustomPhase;
	_sunpackerCommand : fb_sunpackerCommand;
	_DualStateImAction : TYPE_DualStateImAction;
	_Answers : TYPE_Answers;
	_statusDualInput : TYPE_statusDualInput;
	_StatusAi : TYPE_StatusAi;
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
	_resetQuestion1 : BOOL;
	_resetQuestion2 : BOOL;
	waitReset : TON;
END_VAR

VAR_EXTERNAL
	IM : ImConfig;
	algoritms : AlgoritmsConfig;
	ai : AiConfig;
	AlgTimers : struct_AlgTimers;
	ModeGpa : TYPE_ModeGpa;
	algManager : struct_AlgoritmsManager;
	protections : ProtectionsConfig;
END_VAR

VAR CONSTANT
	Ust_Pgaza : LREAL          := 0.3;
END_VAR




















IF NOT onInit THEN

          fb_puskOilSystem(phaseNumber:=0, act:=_run, waitCompletion:=TRUE);
       questionEngine.AnswerVariants:=_Answers.ANS_YES;
          fb_runningEngine(phaseNumber:=1, act:=_run, waitCompletion:=TRUE);
        questionMVoff.AnswerVariants:=_Answers.ANS_YES;
                  fb_mvOff(phaseNumber:=3, act:=_off);
                  fb_pnsOn(phaseNumber:=4, act:=_on);
                fb_wait600(phaseNumber:=8, delay:=T#600S);
              fb_AutoNUoff(phaseNumber:=10, act:=_reset, waitCompletion:=FALSE);
                 fb_nu1Off(phaseNumber:=11, act:=_off);
                 fb_nu2Off(phaseNumber:=12, act:=_off);
             fb_pnsWaitOff(phaseNumber:=15, act:=_run, waitCompletion:=TRUE);
            fb_autoAvomOff(phaseNumber:=7, act:=_reset, waitCompletion:=FALSE);
               fb_Avom1Off(phaseNumber:=5, act:=_off);
               fb_Avom2Off(phaseNumber:=6, act:=_off);
       fb_testUnsuccessful(phaseNumber:=17);     

onInit:=TRUE;
END_IF;
                            
          fb_puskOilSystem(StrPh:=puskOilSystem, alg:=algoritms.puskOilSystem);
         fb_questionEngine(StrQ:=questionEngine);
          fb_runningEngine(StrPh:=runningEngine, alg:=algoritms.engineRun);
          fb_questionMVoff(StrQ:=questionMVoff);
                  fb_mvOff(StrPh:=mvOff, Im:=Im.mv);
                  fb_pnsOn(StrPh:=pnsOn, Im:=Im.pns);
                fb_wait600(StrPh:=wait600, timer:=AlgTimers.puskV_wait600);
              fb_AutoNUoff(StrPh:=AutoNUoff, alg:=algoritms.autoNu);
                 fb_nu1Off(StrPh:=nu1Off, Im:=Im.nu1);
                 fb_nu2Off(StrPh:=nu2Off, Im:=Im.nu2);
             fb_pnsWaitOff(StrPh:=pnsWaitOff, alg:=algoritms.vibegPNS);
            fb_autoAvomOff(StrPh:=autoAvomOff, alg:=algoritms.AutoAvom);
               fb_Avom1Off(StrPh:=Avom1Off, Im:=Im.v1_Avom);
               fb_Avom2Off(StrPh:=Avom2Off, Im:=Im.v2_Avom);
       fb_testUnsuccessful(StrPh:=testUnsuccessful);                               
       
StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
         
IF StrAlg.isRuning THEN

    StrAlg.hasError := mvOff.error OR pnsOn.error OR testUnsuccessful.error;
    
    IF puskOilSystem.top THEN
         IF NOT _resetQuestion1 THEN	
         askQuestion(questionEngine);
         _resetQuestion1:=TRUE;
         END_IF;
    END_IF;

    IF questionEngine.answer = _Answers.ANS_YES THEN
        runPhase(runningEngine);
        resetQuestion(questionEngine);
    END_IF;

    IF runningEngine.top THEN
       IF NOT _resetQuestion2 THEN
       askQuestion(questionMVoff);
       _resetQuestion2:=TRUE;
       END_IF;
    END_IF;
    
     IF questionMVoff.answer = _Answers.ANS_YES THEN
     
        (*resetDiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
       *) resetIfRunning(algoritms.AutoPns);
        runPhase(mvOff);
        runPhase(wait600);
        resetQuestion(questionMVoff);
     END_IF;
 
    IF mvOff.top THEN
        runPhase(pnsOn);
    END_IF;
     
    IF pnsOn.top THEN
    
          ai.Tmasla_MB.Disabled_LA:=TRUE;
          ai.Tmasla_MB.Disabled_LW:=TRUE;
          (*IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=TRUE;*)
          (*resetAiProtection(protections.Os_sdvig_nagnetatelja_plus)*)
         (* resetDiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5);*)
	runPhase(AutoNUoff);
          
    END_IF;
    
     IF autoNuOff.top THEN
	runPhase(nu1off);
          runPhase(nu2off);  
    END_IF;
    
    IF nu1Off.top AND nu2Off.top THEN
	runPhase(pnsWaitOff);
    END_IF;
    
    IF wait600.top AND NOT (pnsWaitOff.top) THEN
          testUnsuccessful.error:=TRUE;
    END_IF;
       
    IF pnsWaitOff.top THEN
          resetPhase(wait600);
          runPhase(autoAvomOff);
	waitReset(IN:=TRUE, PT:= T#3S);
    END_IF;
    
    IF autoAvomOff.top THEN
          runPhase(Avom1Off);
          runPhase(Avom2Off);
    END_IF;
                               
    IF waitReset.Q THEN
        resetIfRunning(algoritms.vibegPNS);
        algManager.nMode:=ModeGpa.MODE_STOP;
        resetIfRunning(StrAlg);
    END_IF;
    
    StrAlg.isEnded:= pnsWaitOff.top;
    
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
                                                  
                                                  algManager.nMode:=ModeGpa.MODE_PUSKV;
                                                  resetAndDisable(alg:=algoritms.ppu);
                                                  algoritms.puskOilSystem.inCanRun:= TRUE;
                                                  algoritms.engineRun.inCanRun:= TRUE;
                                                  runPhase(puskOilSystem); 
                                                    	
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
                                        _resetQuestion1:=FALSE;
                                        _resetQuestion2:=FALSE;
                                        resetPhase(puskOilSystem);
                                        resetPhase(runningEngine);
                                        resetPhase(mvOff);
                                        resetPhase(pnsOn);
                                        resetPhase(wait600);
                                        resetPhase(AutoNUoff);
                                        resetPhase(nu1Off);
                                        resetPhase(nu2Off);
                                        resetPhase(pnsWaitOff);
	                              resetPhase(autoAvomOff);
                                        resetPhase(Avom1Off);
                                        resetPhase(Avom2Off);
                                        resetPhase(testUnsuccessful);
                                        
                                        resetQuestion(questionEngine);      
                                        resetQuestion(questionMVoff);
                                        
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

StrAlg.Start:= puskOilSystem.startStatus
            OR runningEngine.startStatus
            OR mvOff.startStatus
            OR pnsOn.startStatus
            OR wait600.startStatus
            OR AutoNUoff.startStatus
            OR nu1Off.startStatus
            OR nu2Off.startStatus
            OR pnsWaitOff.startStatus
            OR testUnsuccessful.startStatus;
            
StrAlg.Error:=  puskOilSystem.errorStatus
            OR runningEngine.errorStatus
            OR mvOff.errorStatus
            OR pnsOn.errorStatus
            OR wait600.errorStatus
            OR AutoNUoff.errorStatus
            OR nu1Off.errorStatus
            OR nu2Off.errorStatus
            OR pnsWaitOff.errorStatus
            OR testUnsuccessful.errorStatus;
            
            
StrAlg.Top:=   puskOilSystem.topStatus
            OR runningEngine.topStatus
            OR mvOff.topStatus
            OR pnsOn.topStatus
            OR wait600.topStatus
            OR AutoNUoff.topStatus
            OR nu1Off.topStatus
            OR nu2Off.topStatus
            OR pnsWaitOff.topStatus
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