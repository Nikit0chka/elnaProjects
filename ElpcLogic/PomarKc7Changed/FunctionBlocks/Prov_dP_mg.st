FUNCTION_BLOCK Prov_dP_mg

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	nu1Off : struct_PhaseAlgoritm;
	nu2Off : struct_PhaseAlgoritm;
	pnsOff : struct_PhaseAlgoritm;
	timer120 : struct_PhaseAlgoritm;
	dPmg_less_100 : struct_PhaseAlgoritm;
	nu1On : struct_PhaseAlgoritm;
	nu2On : struct_PhaseAlgoritm;
	pnsOn : struct_PhaseAlgoritm;
	Error_Alg : struct_PhaseAlgoritm;
	dPmg_more_100 : struct_PhaseAlgoritm;
	fb_nu1Off : fb_ph_OilPump;
	fb_nu2Off : fb_ph_OilPump;
	fb_pnsOff : fb_ph_Switch;
	fb_timer120 : fb_ph_Timer;
	fb_dPmg_less_100 : fb_ph_algoritm;
	fb_nu1On : fb_ph_OilPump;
	fb_nu2On : fb_ph_OilPump;
	fb_pnsOn : fb_ph_Switch;
	fb_Error_Alg : fb_ph_algoritm;
	fb_dPmg_more_100 : fb_ph_algoritm;
	onInit : BOOL;
END_VAR

VAR_EXTERNAL
	Im : ImConfig;
	ai : AiConfig;
END_VAR

VAR
	_sunpackerCommand : fb_sunpackerCommand;
	source : BYTE;
	cmd : BYTE;
	_statusDualInput : TYPE_statusDualInput;
	lastCmd : BYTE;
	_Answers : TYPE_Answers;
END_VAR

VAR_EXTERNAL
	ModeGpa : TYPE_ModeGpa;
	algManager : struct_AlgoritmsManager;
END_VAR

VAR
	cmd_for_Status : BYTE;
	source_for_Status : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	waitReset : TON;
	resetCmdTimerPriznak : BOOL;
END_VAR





IF NOT onInit THEN      
    fb_nu1Off(phaseNumber:=1, act:=_off);
    fb_nu2Off(phaseNumber:=2, act:=_off);
    fb_pnsOff(phaseNumber:=3, act:=_off);
    fb_timer120(phaseNumber:=4, delay:=T#120S);
    fb_dPmg_less_100(phaseNumber:=5);
    fb_nu1On(phaseNumber:=6, act:=_on);
    fb_nu2On(phaseNumber:=7, act:=_on);
    fb_pnsOn(phaseNumber:=8, act:=_on);
    fb_Error_Alg(phaseNumber:=9);
    fb_dPmg_more_100(phaseNumber:=10);
    onInit:=TRUE;
END_IF;

    
fb_nu1Off(StrPh:=nu1Off, Im:=Im.nu1);
fb_nu2Off(StrPh:=nu2Off, Im:=Im.nu2);
fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
fb_timer120(StrPh:=timer120);
fb_dPmg_less_100(StrPh:=dPmg_less_100);
fb_nu1On(StrPh:=nu1On, Im:=Im.nu1);
fb_nu2On(StrPh:=nu2On, Im:=Im.nu2);
fb_pnsOn(StrPh:=pnsOn, Im:=Im.pns);
fb_Error_Alg(StrPh:=Error_Alg);
fb_dPmg_more_100(StrPh:=dPmg_more_100);

StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;


    IF StrAlg.isRuning THEN
    (* kto takoi ask 
        IF	NOT nuOff.start THEN
	    NU_OFF_Ask.ask ();
    END_IF;*)

    (*
    IF	(nu_OFF_Ask.answer=Answers.ANS_YES) THEN
	    runPhase(nu1Off);
	    runPhase(nu2Off);
        runPhase(pnsOff);
	    NU_OFF_Ask.reset ();
	    runPhase(timer120);
    END_IF;*)
    
    (*насосы выключены - запуск проверки *)
    IF	nu1Off.top AND nu2Off.top THEN
	    runPhase(dPmg_less_100);
    END_IF;

    (*проверка перепада маслогаз по аналогу и дискрету*)
    IF	dPmg_less_100.start AND NOT dPmg_less_100.top THEN
        IF 	Im.SingleSignals.dP_maslo_gaz_Less100.Q AND ai.dPmaslo_gaz.value < 150.0 THEN
	  	    dPmg_less_100.top:=TRUE;
		    runPhase(nu1On);
            runPhase(nu2On);
            runPhase(pnsOn);
	    END_IF;
    END_IF;


    IF	Im.nu1.onStatus = _statusDualInput.STATUS_ON OR Im.nu2.onStatus = _statusDualInput.STATUS_ON  AND nu1On.start  AND nu2On.start AND NOT nu1On.top AND NOT nu2On.top THEN
	    nu1On.top := TRUE;
        nu2On.top := TRUE;
    END_IF;

    (*ошибка завершения по таймеру*)
    IF	timer120.top THEN 
	    Error_Alg.ERROR := TRUE;
    ELSE
	    Error_Alg.ERROR := FALSE;	
    END_IF;
    
    (*ыва*)
    IF	nu1On.top AND nu2On.top AND pnsOn.top THEN
	    runPhase(dPmg_more_100);
    END_IF;

    (**)
    IF	dPmg_more_100.start AND NOT dPmg_more_100.top (*AND NOT algoritms.autoNu_1.flag1 OR algoritms.autoNu_1.flag2*) THEN 
	    IF 	NOT Im.SingleSignals.dP_maslo_gaz_Less100.Q AND Im.SingleSignals.dP_maslo_gaz_Less100.status = 1 AND  ai.dPmaslo_gaz.value > 150.0 THEN
    		dPmg_more_100.top :=TRUE;
		    resetPhase(timer120);
	    END_IF;
    END_IF;
END_IF;

_sunpackerCommand(command := StrAlg.inCommand);
	source := _sunpackerCommand.source;
	cmd := _sunpackerCommand.cmd;
          
IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrAlg.opcCommandsDisabled) AND source > 0) OR source = 0) then	
	CASE BYTE_TO_INT(cmd) OF
		(*cm dRun*) 1: 	IF (StrAlg.CanRun) THEN
					StrAlg.isRuning := TRUE;
					StrAlg.isEnded := FALSE;
					StrAlg.hasError := FALSE;
					(*****************       OnRun       *****************)
                                                  algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA2;
                                                  
                                                  (*runPhase(timer120);
                                                  runPhase(timer5);
                                                  runPhase(Shup);
                                                  resetAiProtection(protections.dPmaslo_gaz);                                                  
                                                  resetDiProtection(protections.dPmaslo_gaz_less100);*)
                                                    	
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
                                                                       
                                        (*resetPhase(timer5);
                                        resetPhase(Shup);
                                        resetPhase(timer120);
                                        resetPhase(Net_Chast);
                                        resetPhase(mvOn);
                                        resetPhase(pGNSmore04);
                                        resetPhase(gotov_K_zagruzke);
                                        resetPhase(dPmg_Top);
                                        resetPhase(AutoPNS_Start);*)
                                        
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

StrAlg.Start:= nu1Off.startStatus
            OR nu2Off.startStatus
            OR pnsOff.startStatus
            OR timer120.startStatus
            OR dPmg_less_100.startStatus
            OR nu1On.startStatus
            OR nu2On.startStatus
            OR pnsOn.startStatus;
            

StrAlg.Top := nu1Off.topStatus
            OR nu2Off.topStatus
            OR pnsOff.topStatus
            OR timer120.topStatus
            OR dPmg_less_100.topStatus
            OR nu1On.topStatus
            OR nu2On.topStatus
            OR pnsOn.topStatus;                   
            
StrAlg.Error := nu1Off.errorStatus
            OR nu2Off.errorStatus
            OR pnsOff.errorStatus
            OR timer120.errorStatus
            OR dPmg_less_100.errorStatus
            OR nu1On.errorStatus
            OR nu2On.errorStatus
            OR pnsOn.errorStatus;
             
(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);      