FUNCTION_BLOCK testdPmgAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	puskOilSystem : struct_PhaseAlgoritm;
END_VAR

VAR_IN_OUT
	algContinue : struct_Question;
END_VAR

VAR
	nuOff : struct_PhaseAlgoritm;
	dPmgAi : struct_PhaseAlgoritm;
	dPmgDi : struct_PhaseAlgoritm;
	nuOn : struct_PhaseAlgoritm;
	noRezrv : struct_PhaseAlgoritm;
	BreakTest : struct_PhaseAlgoritm;
	testUnsuccessful : struct_PhaseAlgoritm;
	pnsOff : struct_PhaseAlgoritm;
	stopANU : struct_PhaseAlgoritm;
	Ust_dPLow : struct_PhaseAlgoritm;
	nu1Off : struct_PhaseAlgoritm;
	nu2Off : struct_PhaseAlgoritm;
	stopNU1 : struct_PhaseAlgoritm;
	stopNU2 : struct_PhaseAlgoritm;
	fb_puskOilSystem : fb_ph_algoritm;
	fb_algContinue : fb_Question;
	fb_nuOff : fb_ph_CustomPhase;
	fb_dPmgAi : fb_ph_WaitAnalogValue;
	fb_dPmgDi : fb_ph_CustomPhase;
	fb_nuOn : fb_ph_CustomPhase;
	fb_noRezrv : fb_ph_CustomPhase;
	fb_BreakTest : fb_ph_Timer;
	fb_testUnsuccessful : fb_ph_CustomPhase;
	fb_pnsOff : fb_ph_Switch;
	fb_stopANU : fb_ph_CustomPhase;
	fb_nu1Off : fb_ph_OilPump;
	fb_nu2Off : fb_ph_OilPump;
	fb_stopNU1 : fb_ph_OilPump;
	fb_stopNU2 : fb_ph_OilPump;
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
	_resetQuestion : BOOL;
	waitReset : TON;
	WaitOnNU : TON;
END_VAR

VAR_EXTERNAL
	IM : ImConfig;
	algoritms : AlgoritmsConfig;
	ai : AiConfig;
	AlgTimers : struct_AlgTimers;
	ModeGpa : TYPE_ModeGpa;
	algManager : struct_AlgoritmsManager;
	protections : ProtectionsConfig;
	NotHasRezervNU : BOOL;
END_VAR


















IF NOT onInit THEN

    fb_puskOilSystem(phaseNumber:=0, act:=_run, waitCompletion:=TRUE);
        algContinue.AnswerVariants:=_Answers.ANS_YES;
            fb_nuOff(phaseNumber:=1);
           fb_dPmgAi(phaseNumber:=2);
           fb_dPmgDi(phaseNumber:=3);
             fb_nuOn(phaseNumber:=4);
          fb_noRezrv(phaseNumber:=5);
 fb_testUnsuccessful(phaseNumber:=6);
        fb_BreakTest(phaseNumber:=7, delay:=T#10S);
           fb_pnsOff(phaseNumber:=8, act:=_off);
          fb_stopANU(phaseNumber:=9);
           fb_nu1Off(phaseNumber:=11, act:=_off);
           fb_nu2Off(phaseNumber:=12, act:=_off);
          fb_stopNU1(phaseNumber:=15, act:=_off);     
          fb_stopNU2(phaseNumber:=16, act:=_off);
onInit:=TRUE;
END_IF;
       
    fb_puskOilSystem(StrPh:=puskOilSystem, alg:=algoritms.puskOilSystem);
      fb_algContinue(StrQ:=algContinue);
            fb_nuOff(StrPh:=nuOff);
           (*fb_dPmgAi(StrPh:=dPmgAi, ai:=ai.Tmasla_MB, less:=im.testdPmg_Ust_dPLow.Value);*)
           fb_dPmgDi(StrPh:=dPmgDi);
             fb_nuOn(StrPh:=nuOn);
          fb_noRezrv(StrPh:=noRezrv);
 fb_testUnsuccessful(StrPh:=testUnsuccessful);
        fb_BreakTest(StrPh:=BreakTest, timer:=AlgTimers.testdPmg_BreakTest);
           fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
          fb_stopANU(StrPh:=stopANU);
           fb_nu1Off(StrPh:=nu1Off, Im:=Im.nu1);
           fb_nu2Off(StrPh:=nu2Off, Im:=Im.nu2);
          fb_stopNU1(StrPh:=stopNU1, Im:=Im.nu1);
          fb_stopNU2(StrPh:=stopNU2, Im:=Im.nu2);                                   
       
StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
         
IF StrAlg.isRuning THEN

    StrAlg.hasError := pnsOff.error OR nu1Off.error OR nu2Off.error
    OR stopNU1.error OR stopNU2.error OR testUnsuccessful.error;
    
    IF puskOilSystem.top THEN
         IF NOT _resetQuestion THEN		
         askQuestion(algContinue);
          _resetQuestion:=TRUE;
         END_IF;
    END_IF;

    IF algContinue.answer = _Answers.ANS_YES AND NOT nuOff.top THEN 
        
        runPhase(nuOff);

        IF Im.nu1.onStatus = _statusDualInput.STATUS_ON THEN
		runPhase(nu1Off); 
        END_IF;
    
        IF Im.nu2.onStatus = _statusDualInput.STATUS_ON THEN
		runPhase(nu2Off);	
        END_IF;
        
        resetQuestion(algContinue);
    
    END_IF;          
    
    IF nuOff.start AND NOT nuOff.top THEN
          runPhase(BreakTest); 
	nuOff.top:= Im.nu1.onStatus = _statusDualInput.STATUS_Off
                  AND Im.nu2.onStatus = _statusDualInput.STATUS_Off;
    END_IF;                     
                                  
    IF nuOff.top THEN

        runPhase(dPmgAi);
        runPhase(dPmgDi);
    END_IF;
     
    (*IF dPmgDi.start AND NOT dPmgDi.top THEN 
        dPmgDi.top:=Im.SingleSignals.dP_oilgaz_low.q;
    END_IF;*)
   
    IF dPmgAi.top AND dPmgDi.top THEN
        runPhase(nuOn);    
        runPhase(noRezrv);
    END_IF;
       
    IF noRezrv.start AND NOT noRezrv.top THEN 
        noRezrv.top:=NotHasRezervNU;
    END_IF;
    
     IF nuOn.start AND (NOT WaitOnNU.Q) THEN
        WaitOnNU(IN:=Im.nu1.onStatus = _statusDualInput.STATUS_On OR
            Im.nu2.onStatus = _statusDualInput.STATUS_On, PT:=T#2S);  
        nuOn.top:=Im.nu1.onStatus = _statusDualInput.STATUS_On OR
            Im.nu2.onStatus = _statusDualInput.STATUS_On;
    END_IF;   
    
    IF  WaitOnNU.Q AND noRezrv.top THEN
        ai.Tmasla_MB.Disabled_LA:=TRUE;
        ai.Tmasla_MB.Disabled_LW:=TRUE;
        (*IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=TRUE;
        IM.SingleSignals.P_oil_low.Disabled_Sig:=TRUE;*)
        ai.Pmasla_posle_GNS.Disabled_LA:=TRUE;
        ai.Pmasla_posle_GNS.Disabled_LW:=TRUE;
        ai.Pmasla_posle_NU.Disabled_LW:=TRUE;
        
        resetAiProtection(protections.Os_sdvig_nagnetatelja_minus);
        (*resetDiProtection(protections.Vibro_skorost_OP_shesterni_RED_T6);*)
        resetAiProtection(protections.Os_sdvig_nagnetatelja_plus);
        (*resetDiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5);*)
        
        resetIfRunning(algoritms.autoNu);
        resetIfRunning(algoritms.AutoPns);
        
        runPhase(stopANU);
        runPhase(pnsOff);
        
        runPhase(stopNU1);
        runPhase(stopNU2);

    END_IF; 
    
    IF stopANU.start AND NOT stopANU.top THEN

	stopANU.top:= Im.nu1.onStatus = _statusDualInput.STATUS_Off AND
                        Im.nu2.onStatus = _statusDualInput.STATUS_Off;
    END_IF; 
    
    IF BreakTest.top AND NOT pnsOff.top THEN
	testUnsuccessful.error:=TRUE;
    END_IF; 

    IF pnsOff.top AND stopANU.top THEN
          resetPhase(BreakTest);
	waitReset(IN:=TRUE, PT:= T#3S);
    END_IF;
             
    IF waitReset.Q THEN
        algManager.nMode:=ModeGpa.MODE_STOP;
        resetIfRunning(StrAlg);
    END_IF;
    
    StrAlg.isEnded:= pnsOff.top AND stopANU.top;
    
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
                                                  
                                                  algManager.nMode:=ModeGpa.MODE_TESTDPMG;
                                                  resetAndDisable(alg:=algoritms.ppu);
                                                  algoritms.puskOilSystem.inCanRun:= TRUE;
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
                                        WaitOnNU(IN:=FALSE);
                                        _resetQuestion:=FALSE;
                                        ai.Pmasla_posle_GNS.Disabled_LA:=TRUE;
                                        ai.Pmasla_posle_GNS.Disabled_LW:=TRUE;
                                        ai.Pmasla_posle_NU.Disabled_LW:=TRUE;
                                        (*IM.SingleSignals.P_oil_low.Disabled_Sig:=TRUE;
                                        IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=TRUE;*)
                                        ai.Tmasla_MB.Disabled_LA:=TRUE;
                                        ai.Tmasla_MB.Disabled_LW:=TRUE;
                                        resetAiProtection(protections.Os_sdvig_nagnetatelja_minus);
                                        (*resetDiProtection(protections.Vibro_skorost_OP_shesterni_RED_T6);*)
                                        resetAiProtection(protections.Os_sdvig_nagnetatelja_plus);
                                        (*resetDiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5);*)
                                        
                                        resetPhase(puskOilSystem);
                                        resetPhase(nuOff);
                                        resetPhase(dPmgAi);
                                        resetPhase(dPmgDi);
                                        resetPhase(nuOn);
                                        resetPhase(noRezrv);
                                        resetPhase(BreakTest);
                                        resetPhase(testUnsuccessful);
                                        resetPhase(pnsOff);
                                        resetPhase(stopANU);
                                        resetPhase(nu1Off);
                                        resetPhase(nu2Off);
                                        resetPhase(stopNU1);
                                        resetPhase(stopNU2);
                                        
                                        resetQuestion(algContinue);      
                                        
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
            OR nuOff.startStatus
            OR dPmgAi.startStatus
            OR dPmgDi.startStatus
            OR nuOn.startStatus
            OR noRezrv.startStatus
            OR BreakTest.startStatus
            OR testUnsuccessful.startStatus
            OR pnsOff.startStatus
            OR stopANU.startStatus
            OR nu1Off.startStatus
            OR nu2Off.startStatus;
            
StrAlg.Error:=  puskOilSystem.errorStatus
            OR nuOff.errorStatus
            OR dPmgAi.errorStatus
            OR dPmgDi.errorStatus
            OR nuOn.errorStatus
            OR noRezrv.errorStatus
            OR BreakTest.errorStatus
            OR testUnsuccessful.errorStatus
            OR pnsOff.errorStatus
            OR stopANU.errorStatus
            OR nu1Off.errorStatus
            OR nu2Off.errorStatus;
            
            
StrAlg.Top:=   puskOilSystem.topStatus
            OR nuOff.topStatus
            OR dPmgAi.topStatus
            OR dPmgDi.topStatus
            OR nuOn.topStatus
            OR noRezrv.topStatus
            OR BreakTest.topStatus
            OR testUnsuccessful.topStatus
            OR pnsOff.topStatus
            OR stopANU.topStatus
            OR nu1Off.topStatus
            OR nu2Off.topStatus;                     

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);