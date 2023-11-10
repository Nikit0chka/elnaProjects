FUNCTION_BLOCK Pusk_second_faza_reactor

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	timer25 : struct_PhaseAlgoritm;
	timer3 : struct_PhaseAlgoritm;
	mvOn : struct_PhaseAlgoritm;
	pGNSmore04 : struct_PhaseAlgoritm;
	gotov_K_zagruzke : struct_PhaseAlgoritm;
	dPmg_Top : struct_PhaseAlgoritm;
	Mv_Error : struct_PhaseAlgoritm;
	AutoPNS_Start : struct_PhaseAlgoritm;
	fb_timer25 : fb_ph_Timer;
	fb_timer3 : fb_ph_Timer;
	fb_Mv_Error : fb_ph_algoritm;
	fb_mvOn : fb_ph_SectionSwitch;
	fb_pGNSmore04 : fb_ph_algoritm;
	fb_gotov_K_zagruzke : fb_ph_algoritm;
	fb_dPmg_Top : fb_ph_algoritm;
	fb_AutoPNS_Start : fb_ph_algoritm;
	_sunpackerCommand : fb_sunpackerCommand;
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
	algoritms : AlgoritmsConfig;
	ai : AiConfig;
	statusAi : TYPE_StatusAi;
END_VAR





IF NOT onInit THEN         
         fb_timer25(phaseNumber:=1, delay:=T#25S);
         fb_timer3(phaseNumber:=2, delay:=T#3S);
         fb_mvOn(phaseNumber:=3, act:=_on);
         fb_pGNSmore04(phaseNumber:=4);
         fb_gotov_K_zagruzke(phaseNumber:=5); 
         fb_dPmg_Top(phaseNumber:=6); 
         fb_Mv_Error(phaseNumber:=7); 
         fb_AutoPNS_start(phaseNumber:=8, act:=_run, waitCompletion:=FALSE); 
      
onInit:=TRUE;
END_IF;
       
fb_timer25(StrPh:=timer25);
fb_timer3(StrPh:= timer3);
fb_mvOn(StrPh:= mvOn, Im:=IM.mv);
fb_pGNSmore04(StrPh:=pGNSmore04);
fb_gotov_K_zagruzke(StrPh:=gotov_K_zagruzke);
fb_dPmg_Top(StrPh:=dPmg_Top); 
fb_Mv_Error(StrPh:=Mv_Error);  
fb_AutoPNS_start(StrPh:=AutoPNS_start, alg:=algoritms.autoPns);              
      
StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
IF StrAlg.isRuning THEN
    (* если мв не завершен - включаем таймер *)
    IF NOT mvOn.top THEN
        runPhase(timer25); 
    END_IF;

    (* если мв не заврешен - включаем таймер *)
    IF NOT mvOn.top THEN
        runPhase(timer3); 
    END_IF;
    
    (* мв не запущен - запускаем мв *)
    IF NOT mvOn.start THEN
        runPhase(mvOn);
    END_IF;

    (* мв завершен *)
    IF mvOn.top  THEN 
    (*если проверка пгнс не включена - включаем *)
        IF NOT pGNSmore04.start (*AND ((algManager.mode = modegpa.MODE_PUSKAP_R) OR (algManager.mode = modegpa.MODE_PUSKPP_R))*) THEN
            runPhase(pGNSmore04); 
        END_IF;
        
        (*kakoito flag, hz zachem on 
        IF NOT autoAVOM_canrun_flag THEN
            algoritms.S_AutoAVOM.CanRun:=TRUE;
            autoAVOM_canrun_flag:=TRUE;
        END_IF;*)
        resetPhase(timer3);
        resetPhase(timer25);
        Mv_Error.error := FALSE;
        runPhase(gotov_K_zagruzke);
        IF NOT dPmg_Top.start (*AND ((algManager.mode = modegpa.MODE_PUSKAP_R) OR (algManager.mode = modegpa.MODE_PUSKPP_R))*) THEN
            runPhase(dPmg_Top);
        END_IF;
        
        runDiProtection(protections.mvOff); 
        runDiProtection(protections.Off_avar_vikluchatel);
        runDiProtection(protections.Reg_vozb_off);
        ELSIF NOT mvOn.top AND timer3.top THEN
		Mv_Error.error := TRUE;
    END_IF;

    IF	dPmg_Top.start AND NOT dPmg_Top.top THEN
	    IF	NOT IM.SingleSignals.dP_maslo_gaz_Less100.Q AND IM.SingleSignals.dP_maslo_gaz_Less100.status = 1 AND ai.dPmaslo_gaz.value > 150.0	THEN
		    dPmg_Top.top:=TRUE;
		    runAiProtection(protections.dPmaslo_gaz);
		    runDiProtection(protections.dPmaslo_gaz_less100);
		    resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
		    resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
		    (*algoritms.autoNu_2.CanRun:=TRUE;
		    algoritms.autoNu_2.run (); не понимаю*)
	    END_IF;
    END_IF;

    IF	pGNSmore04.start AND NOT pGNSmore04.top THEN 
	    IF 	ai.Pmasla_posle_GNS.interval	>=statusAi.NORMAL AND ai.Pmasla_posle_GNS.value	 > 400.0 THEN
	  	    pGNSmore04.top:=TRUE; 
	    END_IF;
    END_IF;

    IF	pGNSmore04.top AND gotov_K_zagruzke.top AND dPmg_Top.top (*AND algManager.mode = modegpa.MODE_PUSKAP_R) OR (algManager.mode = modegpa.MODE_PUSKPP_R)))*) OR 
	    gotov_K_zagruzke.top (*AND ((algManager.mode = modegpa.MODE_PUSKV_R) OR (algManager.mode = modegpa.MODE_I))))*) AND NOT AutoPNS_start.top  THEN 
	    algoritms.AutoPns.CanRun :=TRUE;
	   (*algoritms.AutoPNS_Start.run();*)
	    AutoPNS_start.top:=TRUE;
    END_IF;
    IF	timer25.top AND Mv_Error.error THEN
	algoritms.ao.CanRun:=TRUE;
	(*algoritms.ao.run ();*)
    END_IF;

    (*StrAlg.isEnded:= avom1cmdOff.top AND avom2cmdOff.top;*)
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

StrAlg.Start:= timer25.errorStatus
            OR timer3.errorStatus
            OR mvOn.errorStatus
            OR pGNSmore04.errorStatus
            OR gotov_K_zagruzke.errorStatus
            OR dPmg_Top.errorStatus
            OR Mv_Error.errorStatus
            OR AutoPNS_Start.errorStatus;
            

     
            

             
(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);