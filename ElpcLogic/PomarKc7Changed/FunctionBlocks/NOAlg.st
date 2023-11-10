FUNCTION_BLOCK NOAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	timer120 : struct_PhaseAlgoritm;
	kran6Open : struct_PhaseAlgoritm;
	pnsOn : struct_PhaseAlgoritm;
	kran4Close : struct_PhaseAlgoritm;
	kran3bOpen : struct_PhaseAlgoritm;
	mvOff : struct_PhaseAlgoritm;
	kran1Close : struct_PhaseAlgoritm;
	kran2Close : struct_PhaseAlgoritm;
	kran3Close : struct_PhaseAlgoritm;
	kran5Open : struct_PhaseAlgoritm;
	error_Krans : struct_PhaseAlgoritm;
	autoPnsOff : struct_PhaseAlgoritm;
	Pg_VhodLessThen300 : struct_PhaseAlgoritm;
	Pg_VyhodLessThen300 : struct_PhaseAlgoritm;
	nu1off : struct_PhaseAlgoritm;
	nu2off : struct_PhaseAlgoritm;
	AutoNU_Off : struct_PhaseAlgoritm;
	timer600 : struct_PhaseAlgoritm;
	pnsOff : struct_PhaseAlgoritm;
	Avom1Off : struct_PhaseAlgoritm;
	Avom2Off : struct_PhaseAlgoritm;
	Avom3Off : struct_PhaseAlgoritm;
	Avom4Off : struct_PhaseAlgoritm;
	autoAVOMOff : struct_PhaseAlgoritm;
	timer5 : struct_PhaseAlgoritm;
	klapan1 : struct_PhaseAlgoritm;
	klapan2 : struct_PhaseAlgoritm;
	nu_On : struct_PhaseAlgoritm;
	fb_timer120 : fb_ph_Timer;
	fb_kran6Open : fb_ph_Kran;
	fb_pnsOn : fb_ph_Switch;
	fb_kran4Close : fb_ph_Kran;
	fb_kran3bOpen : fb_ph_Kran;
	fb_mvOff : fb_ph_SectionSwitch;
	fb_kran1Close : fb_ph_Kran;
	fb_kran2Close : fb_ph_Kran;
	fb_kran3Close : fb_ph_Kran;
	fb_kran5Open : fb_ph_Kran;
	fb_error_Krans : fb_ph_CustomPhase;
	fb_autoPnsOff : fb_ph_algoritm;
	fb_Pg_VhodLessThen300 : fb_ph_CustomPhase;
	fb_Pg_VyhodLessThen300 : fb_ph_CustomPhase;
	fb_nu1Off : fb_ph_OilPump;
	fb_nu2Off : fb_ph_OilPump;
	fb_autoNuOff : fb_ph_algoritm;
	fb_timer600 : fb_ph_Timer;
	fb_pnsOff : fb_ph_Switch;
	fb_Avom1Off : fb_ph_Switch;
	fb_Avom2Off : fb_ph_Switch;
	fb_Avom3Off : fb_ph_Switch;
	fb_Avom4Off : fb_ph_Switch;
	fb_autoAVOMOff : fb_ph_algoritm;
	fb_timer5 : fb_ph_Timer;
	fb_klapan1 : fb_ph_CustomPhase;
	fb_klapan2 : fb_ph_CustomPhase;
	fb_nu_On : fb_ph_CustomPhase;
	_sunpackerCommand : fb_sunpackerCommand;
	_statusAi : TYPE_StatusAi;
	_Answers : TYPE_Answers;
	_statusDualInput : TYPE_statusDualInput;
	_commandDualInput : TYPE_commandDualInput;
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
	ModeGpa : TYPE_ModeGpa;
	algManager : struct_AlgoritmsManager;
	AlgTimers : struct_AlgTimers;
END_VAR

VAR CONSTANT
	Ust_Pgaza : LREAL   := 0.3;
END_VAR





IF NOT onInit THEN
    fb_timer120(phaseNumber:=1, delay:=T#120S);
    fb_kran6Open(phaseNumber:=2, act:=_on);
    fb_kran4Close(phaseNumber:=3, act:=_off);
    fb_kran3bOpen(phaseNumber:=4, act:=_off);
    fb_mvOff(phaseNumber:=5, act:=_off);
    fb_kran1Close(phaseNumber:=6, act:=_off);
    fb_kran2Close(phaseNumber:=7, act:=_off);
    fb_kran3Close(phaseNumber:=8, act:=_off);
    fb_kran5Open(phaseNumber:=9, act:=_on);
    fb_error_Krans(phaseNumber:=10);
    fb_autoPnsOff(phaseNumber:=11, act:=_reset, waitCompletion:=FALSE);
    fb_pnsOn(phaseNumber:=12, act:=_on);
    fb_Pg_VhodLessThen300(phaseNumber:=13);
    fb_Pg_VyhodLessThen300(phaseNumber:=14);
    fb_nu1Off(phaseNumber:=15, act:=_off);           
    fb_nu2Off(phaseNumber:=16, act:=_off);
    fb_autoNuOff(phaseNumber:=17, act:=_reset, waitCompletion:=FALSE);
    fb_timer600(phaseNumber:=18, delay:=T#600S);
    fb_pnsOff(phaseNumber:=19, act:=_off);
    fb_Avom1Off(phaseNumber:=20, act:=_off);
    fb_Avom2Off(phaseNumber:=21, act:=_off);
    fb_Avom3Off(phaseNumber:=22, act:=_off);
    fb_Avom4Off(phaseNumber:=23, act:=_off);
    fb_autoAVOMOff(phaseNumber:=24, act:=_reset, waitCompletion:=FALSE);
    fb_timer5(phaseNumber:=25, delay:=T#5S);
    fb_klapan1(phaseNumber:=26);
    fb_klapan2(phaseNumber:=27);
    fb_nu_On(phaseNumber:=28);
  
onInit:=TRUE;
END_IF;

fb_timer120(StrPh:=timer120, timer:=AlgTimers.No_wait120);
fb_kran6Open(StrPh:=kran6Open, Im:=Im.kran6);
fb_pnsOn(StrPh:=pnsOn, Im:=Im.pns);
fb_kran4Close(StrPh:=kran4Close, Im:=Im.kran4);
fb_kran3bOpen(StrPh:=kran3bOpen, Im:=Im.kran3b);
fb_mvOff(StrPh:=mvOff, Im:=Im.mv);
fb_kran1Close(StrPh:=kran1Close, Im:=Im.kran1);
fb_kran2Close(StrPh:=kran2Close, Im:=Im.Kran2);
fb_kran3Close(StrPh:=kran3Close, Im:=Im.Kran3);
fb_kran5Open(StrPh:=kran5Open, Im:=Im.Kran5);
fb_error_Krans(StrPh:=error_Krans);
fb_autoPnsOff(StrPh:=autoPnsOff, alg:=algoritms.autoPns);
fb_Pg_VhodLessThen300(StrPh:=Pg_VhodLessThen300);
fb_Pg_VyhodLessThen300(StrPh:=Pg_VyhodLessThen300);
fb_nu1Off(StrPh:=nu1off, Im:=Im.nu1);           
fb_nu2Off(StrPh:=nu2off, Im:=Im.nu2);
fb_autoNuOff(StrPh:=AutoNU_Off, alg:=algoritms.autoNu);
fb_timer600(StrPh:=timer600, timer:=AlgTimers.No_wait600);
fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
fb_Avom1Off(StrPh:=Avom1Off, Im:=Im.v1_Avom);
fb_Avom2Off(StrPh:=Avom2Off, Im:=Im.v2_Avom);
fb_Avom3Off(StrPh:=Avom3Off, Im:=Im.v3_Avom);
fb_Avom4Off(StrPh:=Avom4Off, Im:=Im.v4_Avom);
fb_autoAVOMOff(StrPh:=autoAVOMOff, alg:=algoritms.AutoAvom);
fb_timer5(StrPh:=timer5, timer:=AlgTimers.No_wait5);
fb_klapan1(StrPh:=klapan1);
fb_klapan2(StrPh:=klapan2);
fb_nu_On(StrPh:=nu_On);
  
StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
         
IF StrAlg.isRuning THEN
    (* кран 6 не открыт - запуск таймера *)
    IF NOT kran6Open.top AND NOT timer120.top  THEN 
	runPhase(timer120);
    ELSE
    (* счетчик отработал и кран 6 не открыт - ошибка *)
        IF timer120.top AND NOT kran6Open.top THEN 
            error_Krans.error := TRUE;
        END_IF;
    END_IF;
    
    (* старт смазки кранов *)
    IF (*algoritms.F3.Smazka_1_2 OR *)IM.kran1.onStatus = _statusDualInput.STATUS_ON OR IM.kran1.onStatus = _statusDualInput.STATUS_TRANSITIONAL
	OR IM.kran2.onStatus = _statusDualInput.STATUS_ON OR IM.kran2.onStatus = _statusDualInput.STATUS_TRANSITIONAL  THEN
        IF (*(algoritms.F3.Smazka_1_2 OR *)IM.kran1.onStatus = _statusDualInput.STATUS_ON OR IM.kran1.onStatus = _statusDualInput.STATUS_TRANSITIONAL AND NOT klapan1.start AND NOT kran1Close.top THEN
            runPhase(klapan1);
        END_IF;
        IF (*(algoritms.F3.Smazka_1_2 OR *)IM.kran2.onStatus = _statusDualInput.STATUS_ON OR IM.kran2.onStatus = _statusDualInput.STATUS_TRANSITIONAL AND NOT klapan2.start AND NOT kran2Close.top THEN
            runPhase(klapan2);
        END_IF;
    (*algoritms.F3.Smazka_1_2:=FALSE;*)
    END_IF;
    
    (* открыть кран 6 кран 4 *)
    runPhase(kran6Open);
    runPhase(kran4Close);
    
    (*не понимаю
    IF kran4Close.top THEN
        ystavki.Block_kr4_alg.setValue (0);
    END_IF;*)
    
    (* кран 6 открыт *)
    IF kran6Open.top THEN
	runPhase(kran3bOpen);
	resetPhase(timer120); 
	(*error_Krans.top := FALSE;
	error_Krans.error := FALSE;*)
	(*algoritms.S_Vibr.CanRun:=FALSE;
	algoritms.S_Vibr.reset (); net takogo alg*)
    END_IF;
    IF kran3bOpen.top AND NOT mvoff.start THEN
	resetDiProtection(protections.mvOff);
	resetDiProtection(protections.Off_avar_vikluchatel);
	resetDiProtection(protections.Reg_vozb_off);
	runPhase(mvOff); 
    END_IF;
    
    IF mvOff.top (*AND NOT flag1*) THEN 
        algoritms.AutoPns.inCanRun :=FALSE;
        (*algoritms.AutoPNS_Start.reset (); nichego ne ponimau
        algoritms.AutoPns.inCanRun :=FALSE;*)
        runPhase(autoPnsOff);
        runPhase(pnsOn);
        resetDiProtection(protections.Kran1_sdvig);
        resetDiProtection(protections.Kran2_sdvig);
        runPhase(kran1Close);
        runPhase(kran2Close);
        runPhase(kran3Close);
        runPhase(nu_On);
        
        (*тут запустить насосы уплотнения *)
        
        (*algoritms.autoNu.inCanRun:=FALSE;
        algoritms.autoNu_2.reset ();
        algoritms.autoNu_1.inCanRun:=TRUE;
        algoritms.autoNu_1.run ();
        flag1:=TRUE; что тут происходит?*)
    END_IF;
    IF ((IM.nu1.onStatus =_statusDualInput.STATUS_ON) OR (IM.nu2.onStatus =_statusDualInput.STATUS_ON)) AND nu_On.start AND NOT nu_On.top THEN
        nu_On.top:=TRUE;
    END_IF;
    
    (* выдача смазки *)
    IF klapan1.start AND kran1Close.top THEN
        (*IM.Kr1_Smazka.impulse(); не понимаю((((((((*)
        klapan1.top:=TRUE;
    END_IF;
    
    IF klapan2.start AND kran2Close.top THEN
	(*IM.Kr2_Smazka.impulse(); не понимаю *)
	klapan2.top:=TRUE;
    END_IF;

    (* кран 1 кран 2 кран 3 кран 4 закрыты - открыть кран 5 *)
    IF kran1Close.top AND kran2Close.top AND kran3Close.top AND kran4Close.top THEN
        runPhase(kran5Open);
        resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
    END_IF;

    IF kran5Open.top THEN
        runPhase(Pg_VhodLessThen300);
        runPhase(Pg_VyhodLessThen300); 
    END_IF;
    
    IF Pg_VhodLessThen300.start AND NOT Pg_VhodLessThen300.top THEN
        IF (ai.Pgaza_na_vhode_nagnetatelia.interval>= _statusAi.NORMAL) AND (ai.Pgaza_na_vhode_nagnetatelia.value < 0.3) THEN
            Pg_VhodLessThen300.top:=TRUE;
        END_IF;
    END_IF;
    
    IF Pg_VyhodLessThen300.start AND NOT Pg_VyhodLessThen300.top THEN
        IF (ai.Pgaza_na_vyhode_nagnetatelia.interval>=_statusAi.NORMAL) AND (ai.Pgaza_na_vyhode_nagnetatelia.value < 0.3) THEN
            Pg_VyhodLessThen300.top:=TRUE;
        END_IF;
    END_IF;
    
    IF Pg_VhodLessThen300.top AND Pg_VyhodLessThen300.top AND pnsOn.top AND nu_On.top AND mvOff.top  THEN 
        runphase(nu1Off);
        runphase(nu2Off);
          
        resetAiProtection(protections.dPmaslo_gaz);
        resetDiProtection(protections.dPmaslo_gaz_less100);
        
        	
        runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
        runAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
        algoritms.autoNu.CanRun:=FALSE;
        AutoNU_Off.top:=TRUE;
        (*algoritms.autoNu_1.reset(); кого, чего куда*)
    END_IF;
    
    IF nu1Off.top THEN
        IF (*NOT algManager.reg_V AND кто чего*) NOT pnsoff.start THEN
            runPhase(timer600);
        END_IF;
        (*IF NOT pnsoff.start THEN
            sbrosVibeg.ask();
        END_IF; kto chego?*)
    END_IF;

    IF timer600.top (*OR sbrosVibeg.answer=Answers.ANS_YES kto chto *)THEN
	runPhase(pnsOff);
	resetAiProtection(protections.Pmaslo_sm_nizkoe);
	resetAiProtection(protections.Pmaslo_sm_vysokoe);
	(*sbrosVibeg.reset (); pomogite *)
	resetPhase(timer600);
	(*algoritms.F2_Ch.autoAVOM_canrun_flag:=FALSE;
	algoritms.F2_R.autoAVOM_canrun_flag:=FALSE;*)
    END_IF;
    IF (*(NOT algoritms.F2_Ch.autoAVOM_canrun_flag) AND (NOT algoritms.F2_R.autoAVOM_canrun_flag) AND*)pnsoff.start THEN
	runPhase(Avom1Off);
	runPhase(Avom2Off);
	runPhase(Avom3Off);
	runPhase(Avom4Off);
          
	(*algoritms.R_AutoAVOM.CanRun:=FALSE; 
	algoritms.R_AutoAVOM.reset();
	algoritms.S_AutoAVOM.CanRun:=FALSE;
	algoritms.S_AutoAVOM.reset();
	algoritms.Auto_Avom_.CanRun:=FALSE;*)
	runPhase(autoAVOMOff);
    END_IF;

    IF pnsOff.top AND Avom1Off.top AND Avom2Off.top AND Avom3Off.top AND Avom4Off.top AND autoAVOMOff.top  THEN 
        runPhase(timer5);
    END_IF;
    
    IF timer5.top THEN
	resetPhase(timer5);
    END_IF;
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
                                                  
                                                  algManager.nMode:=ModeGpa.MODE_NO;
                                                  (*runIfNotRunningSO(IM.SingleOutputs.Lampa_NO);*)
                                                  
                                                  runPhase(kran4Close);
                                                  runPhase(timer120);         
                                                  runPhase(nu1Off);
                                                  runPhase(timer600); 
                                                  
                                                 (* resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
                                                  resetAiProtection(protections.dPmaslo_gaz);
                                                  resetAiProtection(protections.Pmaslo_sm_nizkoe);
                                                  resetAiProtection(protections.Pmaslo_sm_vysokoe);
                                                  resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia);
                                                  resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
                                                  resetDiProtection(protections.Reg_vozb_off);
                                                  resetDiProtection(protections.Fail_chastotnii_pusk);*)
                                                                                                    	
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
                                        (*resetIfRunningSO(IM.SingleOutputs.Lampa_NO);*)
                                        resetIfRunning(algoritms.vibegPNS);
                                        (*impulseSO(Im.SingleOutputs.SbrosBREO);*)
                                        
                                        resetPhase(timer120);
                                        resetPhase(kran6Open);
                                        resetPhase(pnsOn);
                                        resetPhase(kran4Close);
                                        resetPhase(kran3bOpen);
                                        resetPhase(mvOff);
                                        resetPhase(kran1Close);
                                        resetPhase(kran2Close);
                                        resetPhase(kran3Close);
                                        resetPhase(kran5Open);
	                              resetPhase(error_Krans);
                                        resetPhase(autoPnsOff);
                                        resetPhase(pnsOn);
                                        resetPhase(Pg_VhodLessThen300);
                                        resetPhase(Pg_VyhodLessThen300);
                                        resetPhase(nu2Off);
                                        resetPhase(nu1Off);
                                        resetPhase(AutoNU_Off);
                                        resetPhase(timer600);
                                              
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

StrAlg.Start:= timer120.startStatus
            OR kran6Open.startStatus
            OR pnsOn.startStatus
            OR kran4Close.startStatus
            OR kran3bOpen.startStatus
            OR mvOff.startStatus
            OR kran1Close.startStatus
            OR kran2Close.startStatus
            OR kran3Close.startStatus
            OR kran5Open.startStatus
            OR error_Krans.startStatus
            OR autoPnsOff.startStatus
            OR pnsOn.startStatus
            OR Pg_VhodLessThen300.startStatus
            OR Pg_VyhodLessThen300.startStatus
            OR nu2Off.startStatus
            OR nu1Off.startStatus
            OR AutoNU_Off.startStatus
            OR timer600.startStatus;
            
            
StrAlg.Error:= timer120.errorStatus
            OR kran6Open.errorStatus
            OR pnsOn.errorStatus
            OR kran4Close.errorStatus
            OR kran3bOpen.errorStatus
            OR mvOff.errorStatus
            OR kran1Close.errorStatus
            OR kran2Close.errorStatus
            OR kran3Close.errorStatus
            OR kran5Open.errorStatus
            OR error_Krans.errorStatus
            OR autoPnsOff.errorStatus
            OR pnsOn.errorStatus
            OR Pg_VhodLessThen300.errorStatus
            OR Pg_VyhodLessThen300.errorStatus
            OR nu2Off.errorStatus
            OR nu1Off.errorStatus
            OR AutoNU_Off.errorStatus
            OR timer600.errorStatus;
            
            
StrAlg.Top:=   timer120.topStatus
            OR kran6Open.topStatus
            OR pnsOn.topStatus
            OR kran4Close.topStatus
            OR kran3bOpen.topStatus
            OR mvOff.topStatus
            OR kran1Close.topStatus
            OR kran2Close.topStatus
            OR kran3Close.topStatus
            OR kran5Open.topStatus
            OR error_Krans.topStatus
            OR autoPnsOff.topStatus
            OR pnsOn.topStatus
            OR Pg_VhodLessThen300.topStatus
            OR Pg_VyhodLessThen300.topStatus
            OR nu2Off.topStatus
            OR nu1Off.topStatus
            OR AutoNU_Off.topStatus
            OR timer600.topStatus;                           

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);