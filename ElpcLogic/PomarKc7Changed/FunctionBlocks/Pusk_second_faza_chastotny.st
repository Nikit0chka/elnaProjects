FUNCTION_BLOCK Pusk_second_faza_chastotny

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	timer120 : struct_PhaseAlgoritm;
	timer5 : struct_PhaseAlgoritm;
	Shup : struct_PhaseAlgoritm;
	Net_Chast : struct_PhaseAlgoritm;
	mvOn : struct_PhaseAlgoritm;
	pGNSmore04 : struct_PhaseAlgoritm;
	gotov_K_zagruzke : struct_PhaseAlgoritm;
	dPmg_Top : struct_PhaseAlgoritm;
	AutoPNS_Start : struct_PhaseAlgoritm;
	fb_timer120 : fb_ph_Timer;
	fb_timer5 : fb_ph_Timer;
	fb_Shup : fb_ph_OilPump;
	fb_Net_Chast : fb_ph_algoritm;
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
END_VAR

VAR
	statusAi : TYPE_StatusAi;
END_VAR









IF NOT onInit THEN         
         fb_timer120(phaseNumber:=1, delay:=T#120S);
         fb_timer5(phaseNumber:=2, delay:=T#5S);
         fb_Shup(phaseNumber:=3);
         fb_Net_Chast(phaseNumber:=4);
         fb_mvOn(phaseNumber:=5,  act:=_on); 
         fb_pGNSmore04(phaseNumber:=6); 
         fb_gotov_K_zagruzke(phaseNumber:=7); 
         fb_dPmg_Top(phaseNumber:=8); 
         fb_AutoPNS_Start(phaseNumber:=9, act:=_run, waitCompletion:=FALSE);       
onInit:=TRUE;
END_IF;
       
fb_timer120(StrPh:=timer120);
fb_timer5(StrPh:= timer5);
fb_Shup(StrPh:= Shup);
fb_Net_Chast(StrPh:=Net_Chast);
fb_mvOn(StrPh:=mvOn, Im:=IM.mv);
fb_pGNSmore04(StrPh:=pGNSmore04); 
fb_gotov_K_zagruzke(StrPh:=gotov_K_zagruzke);  
fb_dPmg_Top(StrPh:=dPmg_Top);              
fb_AutoPNS_Start(StrPh:=AutoPNS_Start, alg:=algoritms.autoPns);  
      
StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
         
IF StrAlg.isRuning THEN
    (* мв не включен - запуск таймера *)
    IF NOT mvOn.top THEN
	runphase(timer120);
    END_IF;
    (* частотный пуск не совершен - запуск таймера *)
    IF NOT Net_Chast.top THEN
	runphase(timer5);
    END_IF;

    (* ШУП не запущен - запуск *)
    IF NOT Shup.start THEN
	runphase(Shup);
    END_IF;
    
    (* ШУП не завершился - запуск ШУПб МВ *)
    IF NOT Shup.top AND Shup.start THEN
	runIfNotRunningSO(IM.SingleOutputs.Pusk_SHUP);
	Shup.top:=TRUE;
	runphase(mvOn);
    END_IF;

    (* частотный пуск не запущен - запуск *)
    IF NOT Net_Chast.start THEN
	runphase(Net_Chast);
    END_IF;
    
    (* частотный пуск не завершился - запуск *)
    IF Net_Chast.start AND (NOT Net_Chast.top) THEN
	IF (NOT IM.SingleSignals.Chastotny_pusk.Q) AND (IM.SingleSignals.Chastotny_pusk.status = 1) THEN
		Net_Chast.top:=TRUE;
		resetPhase(timer5);
	END_IF;
    END_IF;
    
    (* таймер не истек и мв не включен - вовзедение защиты *)
    IF (NOT timer120.top) AND (NOT mvOn.top) THEN
	runDiProtection(protections.Fail_chastotnii_pusk);
    ELSE
	resetDiProtection(protections.Fail_chastotnii_pusk);
    END_IF;
    
    (* мв не завершился - включение мв *)
    IF mvOn.start AND NOT mvOn.top THEN
	IF IM.mv.onStatus = _statusDualInput.STATUS_ON THEN
              mvOn.top:=TRUE;
	END_IF;
    END_IF;

    (* мв завершился - что-то делаем *)
    IF mvOn.top THEN 
	IF NOT pGNSmore04.start (*AND (algManager.mode = ModeGpa.MODE_PUSKPP_Ch OR algManager.mode = ModeGpa.MODE_PUSKAP_Ch)какой режим *) THEN
		runphase(pGNSmore04); 
	END_IF;
         (* IF NOT autoAVOM_canrun_flag THEN
              algoritms.AutoAvom.CanRun:=TRUE;
	    autoAVOM_canrun_flag:=TRUE; kto ti
	END_IF;*)
	resetPhase(timer120);
	runphase(gotov_K_zagruzke);
	
          IF NOT dPmg_Top.start (* AND ((algManager.mode = modegpa.MODE_PUSKAP_Ch) OR (algManager.mode = modegpa.MODE_PUSKPP_Ch))*) THEN
              runphase(dPmg_Top);
	END_IF;
	
          runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
	runDiProtection(protections.Off_avar_vikluchatel);
	runDiProtection(protections.Reg_vozb_off);
    END_IF;

    
    IF dPmg_Top.start AND NOT dPmg_Top.top THEN
	IF NOT IM.SingleSignals.dP_maslo_gaz_Less100.Q AND IM.SingleSignals.dP_maslo_gaz_Less100.status = 1 AND ai.dPmaslo_gaz.value > 150.0 THEN 
		dPmg_Top.top:=TRUE;
		runAiProtection(protections.dPmaslo_gaz);
		runDiProtection(protections.dPmaslo_gaz_less100);
		resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
		resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
		algoritms.autoNu.CanRun:=TRUE;
		(*algoritms.autoNu.run(); кого чего, ничего не понимаю *)
	END_IF;
    END_IF;

    IF pGNSmore04.start AND NOT pGNSmore04.top THEN 
	IF ai.Pmasla_posle_GNS.interval (*почему интервал, если есть статус *) >= statusAi.NORMAL AND ai.Pmasla_posle_GNS.value > 400.0 THEN
	  	pGNSmore04.top:=TRUE; 
	END_IF;
    END_IF;

    IF (pGNSmore04.top AND gotov_K_zagruzke.top AND dPmg_Top.top )(*AND (algManager.mode = modegpa.MODE_PUSKAP_Ch OR (algManager.mode = modegpa.MODE_PUSKPP_Ch) *)OR 
	(gotov_K_zagruzke.top) (*AND (algManager.mode = modegpa.MODE_PUSKV_Ch OR algManager.mode = modegpa.MODE_I))*) AND NOT AutoPNS_Start.top  THEN 
	algoritms.AutoPns.CanRun :=TRUE;
	(*algoritms.AutoPns;*)
	AutoPNS_Start.top:=TRUE;
    END_IF;

    IF (NOT Net_Chast.top AND timer5.top) OR (timer120.top AND NOT mvOn.top) THEN
	algoritms.ao.CanRun:=TRUE;
	(*algoritms.ao.run ();*)
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
                                                  algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA2;
                                                  
                                                  runPhase(timer120);
                                                  runPhase(timer5);
                                                  runPhase(Shup);
                                                  resetAiProtection(protections.dPmaslo_gaz);                                                  
                                                  resetDiProtection(protections.dPmaslo_gaz_less100);
                                                    	
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
                                                                       
                                        resetPhase(timer5);
                                        resetPhase(Shup);
                                        resetPhase(timer120);
                                        resetPhase(Net_Chast);
                                        resetPhase(mvOn);
                                        resetPhase(pGNSmore04);
                                        resetPhase(gotov_K_zagruzke);
                                        resetPhase(dPmg_Top);
                                        resetPhase(AutoPNS_Start);
                                        
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

StrAlg.Start:= timer120.startStatus
            OR timer5.startStatus
            OR Shup.startStatus
            OR Net_Chast.startStatus
            OR mvOn.startStatus
            OR pGNSmore04.startStatus
            OR gotov_K_zagruzke.startStatus
            OR dPmg_Top.startStatus
            OR AutoPNS_Start.startStatus;
            

StrAlg.Error := timer120.errorStatus
            OR timer5.errorStatus
            OR Shup.errorStatus
            OR Net_Chast.errorStatus
            OR mvOn.errorStatus
            OR pGNSmore04.errorStatus
            OR gotov_K_zagruzke.errorStatus
            OR dPmg_Top.errorStatus
            OR AutoPNS_Start.errorStatus;          
            
StrAlg.Top := timer120.topStatus
            OR timer5.topStatus
            OR Shup.topStatus
            OR Net_Chast.topStatus
            OR mvOn.topStatus
            OR gotov_K_zagruzke.topStatus
            OR dPmg_Top.topStatus
            OR AutoPNS_Start.topStatus
            OR pGNSmore04.topStatus;  
             
(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);