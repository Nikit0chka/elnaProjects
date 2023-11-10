FUNCTION_BLOCK puskKalg

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	puskOilSystem : struct_PhaseAlgoritm;
END_VAR

VAR_IN_OUT
	questionFilling : struct_Question;
END_VAR

VAR
	filling : struct_PhaseAlgoritm;
END_VAR

VAR_IN_OUT
	questionUnload : struct_Question;
END_VAR

VAR
	kran3bOpen : struct_PhaseAlgoritm;
	kran4Close : struct_PhaseAlgoritm;
	kran1Close : struct_PhaseAlgoritm;
	kran2Close : struct_PhaseAlgoritm;
	kran5open : struct_PhaseAlgoritm;
	wait720 : struct_PhaseAlgoritm;
	noGasInPipe : struct_PhaseAlgoritm;
	AutoNUoff : struct_PhaseAlgoritm;
	nu1Off : struct_PhaseAlgoritm;
	nu2Off : struct_PhaseAlgoritm;
	pnsWaitOff : struct_PhaseAlgoritm;
	testUnsuccessfulUnfill : struct_PhaseAlgoritm;
	fb_puskOilSystem : fb_ph_algoritm;
	fb_questionFilling : fb_Question;
	fb_filling : fb_ph_algoritm;
	fb_questionUnload : fb_Question;
	fb_kran3bOpen : fb_ph_Kran;
	fb_kran4Close : fb_ph_CustomPhase;
	fb_kran1Close : fb_ph_Kran;
	fb_kran2Close : fb_ph_Kran;
	fb_kran5open : fb_ph_Kran;
	fb_wait720 : fb_ph_Timer;
	fb_noGasInPipe : fb_ph_CustomPhase;
	fb_AutoNUoff : fb_ph_algoritm;
	fb_nu1Off : fb_ph_OilPump;
	fb_nu2Off : fb_ph_OilPump;
	fb_pnsWaitOff : fb_ph_algoritm;
	fb_testUnsuccessfulUnfill : fb_ph_CustomPhase;
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
	OpcCommandsKransEnabled : BOOL;
	OpcCommandsKransDisabled : BOOL;
	_resetQuestion1 : BOOL;
	_resetQuestion2 : BOOL;
	onInit : BOOL;
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
	Ust_Pgaza : LREAL   := 0.3;
END_VAR






IF NOT onInit THEN

          fb_puskOilSystem(phaseNumber:=0, act:=_run, waitCompletion:=TRUE);
      questionFilling.AnswerVariants:=_Answers.ANS_YES;
                fb_filling(phaseNumber:=1, act:=_run, waitCompletion:=TRUE);
    questionUnload.AnswerVariants:=_Answers.ANS_YES;
             fb_kran3bOpen(phaseNumber:=3, act:=_on);
             fb_kran4Close(phaseNumber:=4);
             fb_kran1Close(phaseNumber:=5, act:=_off);
             fb_kran2Close(phaseNumber:=6, act:=_off);
              fb_kran5open(phaseNumber:=7, act:=_on);
                fb_wait720(phaseNumber:=8, delay:=T#720S);
            fb_noGasInPipe(phaseNumber:=9);
              fb_AutoNUoff(phaseNumber:=10, act:=_reset, waitCompletion:=FALSE);
                 fb_nu1Off(phaseNumber:=11, act:=_off);
                 fb_nu2Off(phaseNumber:=12, act:=_off);
             fb_pnsWaitOff(phaseNumber:=15, act:=_run, waitCompletion:=TRUE);
 fb_testUnsuccessfulUnfill(phaseNumber:=18);       

onInit:=TRUE;
END_IF;
                            
          fb_puskOilSystem(StrPh:=puskOilSystem, alg:=algoritms.puskOilSystem);
        fb_questionFilling(StrQ:=questionFilling);
                fb_filling(StrPh:=filling, alg:=algoritms.filling);
         fb_questionUnload(StrQ:=questionUnload);
             fb_kran3bOpen(StrPh:=kran3bOpen, Im:=Im.kran3b);
             fb_kran4Close(StrPh:=kran4Close);
             fb_kran1Close(StrPh:=kran1Close, Im:=Im.kran1);
             fb_kran2Close(StrPh:=kran2Close, Im:=Im.kran2);
              fb_kran5open(StrPh:=kran5open, Im:=Im.kran5);
                fb_wait720(StrPh:=wait720, timer:=AlgTimers.puskK_wait720);
            fb_noGasInPipe(StrPh:=noGasInPipe);
              fb_AutoNUoff(StrPh:=AutoNUoff, alg:=algoritms.autoNu);
                 fb_nu1Off(StrPh:=nu1Off, Im:=Im.nu1);
                 fb_nu2Off(StrPh:=nu2Off, Im:=Im.nu2);
             fb_pnsWaitOff(StrPh:=pnsWaitOff, alg:=algoritms.vibegPNS);
 fb_testUnsuccessfulUnfill(StrPh:=testUnsuccessfulUnfill);                                 
       
StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
         
IF StrAlg.isRuning THEN

    StrAlg.hasError := kran3bOpen.error OR kran1Close.error OR kran2Close.error OR kran5open.error OR testUnsuccessfulUnfill.error;
    
    IF puskOilSystem.top THEN
         IF NOT _resetQuestion1 THEN		
         askQuestion(questionFilling);
         _resetQuestion1:=TRUE;
         END_IF;
    END_IF;

    IF questionFilling.answer = _Answers.ANS_YES THEN
        runPhase(filling);
        resetQuestion(questionFilling);
    END_IF;

    IF filling.top THEN
       OpcCommandsKransEnabled:=TRUE;
       resetDiProtection(protections.Reg_vozb_off);
       (*resetDiProtection(protections.Fail_chastotnii_pusk);*)
       IF NOT _resetQuestion2 THEN
       askQuestion(questionUnload);
       _resetQuestion2:=TRUE;
       END_IF;
    END_IF;
    
     IF questionUnload.answer = _Answers.ANS_YES THEN
        OpcCommandsKransDisabled:=TRUE;
        runPhase(kran3bOpen);
        runPhase(wait720);
        resetQuestion(questionUnload);
    END_IF;
 
    IF kran3bOpen.top THEN
          resetDiProtection(protections.Reg_vozb_off);
          resetDiProtection(protections.Fail_chastotnii_pusk);
          
          runPhase(kran1Close);
          runPhase(kran2Close);
          runPhase(kran4Close);
    END_IF;
    
     IF kran4Close.start AND NOT kran4Close.top THEN
	kran4Close.top:= Im.kran4.onStatus = _statusDualInput.STATUS_OFF;
    END_IF;
    
    IF kran1Close.top AND kran2Close.top AND kran4Close.top THEN
	runPhase(kran5open);
    END_IF;
    
    IF kran5open.top THEN
	runPhase(noGasInPipe);
    END_IF;
    
    IF noGasInPipe.start AND (NOT noGasInPipe.top) THEN
	noGasInPipe.top:=  (ai.dPgaza_na_maslo_filtre.interval >= _statusAi.NORMAL
                         AND  ai.dPgaza_na_maslo_filtre.value< Ust_Pgaza )
                         AND (ai.Pmaslo_sm_vysokoe.interval >= _statusAi.NORMAL
                         AND  ai.Pmaslo_sm_vysokoe.value< Ust_Pgaza); 
    END_IF;
    
    IF noGasInPipe.top THEN
    
          ai.Tmasla_MB.Disabled_LA:=TRUE;
          ai.Tmasla_MB.Disabled_LW:=TRUE;
          (*IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=TRUE;*)
          resetAiProtection(protections.Os_sdvig_nagnetatelja_plus);
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
    
    IF wait720.top AND NOT (pnsWaitOff.top) THEN
          testUnsuccessfulUnfill.error:=TRUE;
    END_IF;
       
    IF pnsWaitOff.top THEN
          resetPhase(wait720);
	waitReset(IN:=TRUE, PT:= T#3S);
    END_IF;
             
    IF waitReset.Q THEN
        resetIfRunning(algoritms.vibegPNS);
        algManager.nMode:=ModeGpa.MODE_STOP;
        resetIfRunning(StrAlg);
    END_IF;
    
    StrAlg.isEnded:= pnsWaitOff.top;
    
    IF OpcCommandsKransEnabled AND NOT OpcCommandsKransDisabled THEN
	IF      (im.pns.onStatus = _statusDualInput.STATUS_ON)
              AND (im.nu1.onStatus = _statusDualInput.STATUS_ON OR im.nu2.onStatus = _statusDualInput.STATUS_ON)
	    AND (ai.Tmasla_MB.interval >= _statusAi.normal)
              (*AND (ai.Tmasla_MB.value > im.PuskOilSystem_UstdPmg.Value)*)
          THEN
	    IM.Kran3b.inOpcCommandsDisabled:=FALSE;
	    Im.kran4.inOpcCommandsDisabled:=FALSE;
	    Im.kran5.inOpcCommandsDisabled:=FALSE;
		(*IF	Im.SingleSignals.dP_gazgaz_Kran1.q THEN
			Im.kran1.inOpcCommandsDisabled:=FALSE; 
			Im.kran2.inOpcCommandsDisabled:=FALSE;
		ELSE
			Im.kran1.inOpcCommandsDisabled:=TRUE; 
			Im.kran2.inOpcCommandsDisabled:=TRUE;
		END_IF;*)
          ELSE
	    Im.kran1.inOpcCommandsDisabled:=TRUE; 
	    Im.kran2.inOpcCommandsDisabled:=TRUE; 
	    Im.kran3b.inOpcCommandsDisabled:=TRUE; 
	    Im.kran4.inOpcCommandsDisabled:=TRUE; 
	    Im.kran5.inOpcCommandsDisabled:=TRUE;      
          END_IF;
	
    ELSE
	Im.kran1.inOpcCommandsDisabled:=TRUE;   
	Im.kran2.inOpcCommandsDisabled:=TRUE; 
	Im.kran3b.inOpcCommandsDisabled:=TRUE;  
	Im.kran4.inOpcCommandsDisabled:=TRUE; 
	Im.kran5.inOpcCommandsDisabled:=TRUE;  
    END_IF;
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
                                                  
                                                  algManager.nMode:=ModeGpa.MODE_PUSKK;
                                                  resetAndDisable(alg:=algoritms.ppu);
                                                  algoritms.puskOilSystem.inCanRun:= TRUE;
                                                  algoritms.filling.inCanRun:= TRUE;
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
                                        OpcCommandsKransEnabled:=FALSE;
                                        OpcCommandsKransDisabled:=FALSE;
                                        waitReset(IN:=FALSE);
                                        _resetQuestion1:=FALSE;
                                        _resetQuestion2:=FALSE;
                                        resetPhase(puskOilSystem);
                                        resetPhase(filling);
                                        resetPhase(kran3bOpen);
                                        resetPhase(kran4Close);
                                        resetPhase(kran1Close);
                                        resetPhase(kran2Close);
                                        resetPhase(kran5open);
                                        resetPhase(wait720);
                                        resetPhase(noGasInPipe);
                                        resetPhase(AutoNUoff);
                                        resetPhase(nu1Off);
                                        resetPhase(nu2Off);
                                        resetPhase(pnsWaitOff);
                                        resetPhase(testUnsuccessfulUnfill);
                                        BlockAllIM(IM); 
                                        resetQuestion(questionFilling);      
                                        resetQuestion(questionUnload);
                                        
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
            OR filling.startStatus
            OR kran3bOpen.startStatus
            OR kran4Close.startStatus
            OR kran1Close.startStatus
            OR kran2Close.startStatus
            OR kran5open.startStatus
            OR wait720.startStatus
            OR noGasInPipe.startStatus
            OR AutoNUoff.startStatus
            OR nu1Off.startStatus
            OR nu2Off.startStatus
            OR pnsWaitOff.startStatus
            OR testUnsuccessfulUnfill.startStatus;
            
StrAlg.Error:=  puskOilSystem.errorStatus
            OR filling.errorStatus
            OR kran3bOpen.errorStatus
            OR kran4Close.errorStatus
            OR kran1Close.errorStatus
            OR kran2Close.errorStatus
            OR kran5open.errorStatus
            OR wait720.errorStatus
            OR noGasInPipe.errorStatus
            OR AutoNUoff.errorStatus
            OR nu1Off.errorStatus
            OR nu2Off.errorStatus
            OR pnsWaitOff.errorStatus
            OR testUnsuccessfulUnfill.errorStatus;
            
            
StrAlg.Top:=   puskOilSystem.topStatus
            OR filling.topStatus
            OR kran3bOpen.topStatus
            OR kran4Close.topStatus
            OR kran1Close.topStatus
            OR kran2Close.topStatus
            OR kran5open.topStatus
            OR wait720.topStatus
            OR noGasInPipe.topStatus
            OR AutoNUoff.topStatus
            OR nu1Off.topStatus
            OR nu2Off.topStatus
            OR pnsWaitOff.topStatus
            OR testUnsuccessfulUnfill.topStatus;                          

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);