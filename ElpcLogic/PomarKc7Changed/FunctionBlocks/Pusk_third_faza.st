FUNCTION_BLOCK Pusk_third_faza

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	timer480 : struct_PhaseAlgoritm;
	kran4Open : struct_PhaseAlgoritm;
	waitAfterKran4 : struct_PhaseAlgoritm;
	kran5Close : struct_PhaseAlgoritm;
	kran3bOpen : struct_PhaseAlgoritm;
	dP_kr1less100 : struct_PhaseAlgoritm;
	Pvh_vyhMore5 : struct_PhaseAlgoritm;
	kran1Open : struct_PhaseAlgoritm;
	kran2Open : struct_PhaseAlgoritm;
	kran3Open : struct_PhaseAlgoritm;
	kran3bClose : struct_PhaseAlgoritm;
	Err_ALG : struct_PhaseAlgoritm;
	fb_timer480 : fb_ph_Timer;
	fb_kran4Open : fb_ph_Kran;
	fb_waitAfterKran4 : fb_ph_Timer;
	fb_kran5Close : fb_ph_Kran;
	fb_kran3bOpen : fb_ph_Kran;
	fb_dP_kr1less100 : fb_ph_algoritm;
	fb_Pvh_vyhMore5 : fb_ph_algoritm;
	fb_kran1Open : fb_ph_Kran;
	fb_kran2Open : fb_ph_Kran;
	fb_kran3Open : fb_ph_Kran;
	fb_kran3bClose : fb_ph_Kran;
	fb_Err_ALG : fb_ph_algoritm;
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
         fb_timer480(phaseNumber:=1, delay:=T#480S);
         fb_kran4Open(phaseNumber:=2, act:=_on);
         fb_waitAfterKran4(phaseNumber:=3, delay:=T#10S);
         fb_kran5Close(phaseNumber:=4, act:=_off);
         fb_kran3bOpen(phaseNumber:=5, act:=_on); 
         fb_dP_kr1less100(phaseNumber:=6); 
         fb_Pvh_vyhMore5(phaseNumber:=7); 
         fb_kran1Open(phaseNumber:=8, act:=_on); 
         fb_kran2Open(phaseNumber:=9, act:=_on);       
         fb_kran3Open(phaseNumber:=10, act:=_on);
         fb_kran3bClose(phaseNumber:=11, act:=_off);
         fb_Err_ALG(phaseNumber:=12);
onInit:=TRUE;
END_IF;
       
fb_timer480(StrPh:=timer480);
fb_kran4Open(StrPh:= kran4Open, Im:=Im.kran4);
fb_waitAfterKran4(StrPh:= waitAfterKran4);
fb_kran5Close(StrPh:=kran5Close, Im:=Im.kran5);
fb_kran3bOpen(StrPh:=kran3bOpen, Im:=Im.kran3b);
fb_dP_kr1less100(StrPh:=dP_kr1less100); 
fb_Pvh_vyhMore5(StrPh:=Pvh_vyhMore5);  
fb_kran1Open(StrPh:=kran1Open, Im:=Im.kran1);              
fb_kran2Open(StrPh:=kran2Open, Im:=Im.kran2);  
fb_kran3Open(StrPh:=kran3Open, Im:=Im.kran3);  
fb_kran3bClose(StrPh:=kran3bClose, Im:=Im.kran3b);  
fb_Err_ALG(StrPh:=Err_ALG); 
      
StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;


IF StrAlg.isRuning THEN
    (* запуск таймера *)
    IF NOT (kran3bClose.top) THEN
	    runPhase(timer480);
    END_IF;

    (*если кран1 не открыт - октрыть кран 4*)
    IF	NOT kran1Open.top (*AND IM.kran4._cmdreset.IN = FALSE*)  THEN
	    runIfNotRunningSO(IM.SingleOutputs.Kr4_open_from_alg);
	    runPhase(kran4Open);
    END_IF;
    IF	kran4Open.start AND NOT kran4Open.top THEN
	    IF	IM.kran4.onStatus = _statusDualInput.STATUS_ON THEN
		    kran4Open.top:=TRUE;
	    END_IF;
    END_IF;

    (* продувка крана *)
    IF kran4Open.top THEN 
        runPhase(waitAfterKran4);
    END_IF;

    (* кран продулся - закрытие кран 5*)
    IF waitAfterKran4.top THEN
	    runPhase(kran5Close);
    END_IF;

    (* кран 5 закрыт - открытие крана 3б проверка перепада давление*)
    IF	kran5Close.top THEN
	    runPhase(kran3bOpen);
	    runPhase(dP_kr1less100); 
	    runPhase(Pvh_vyhMore5);
    END_IF;

    (* проверка давления крана *)
    IF	Pvh_vyhMore5.start AND NOT Pvh_vyhMore5.top THEN 
	    IF	(ai.Pgaza_na_vhode_nagnetatelia.interval >=statusAi.NORMAL) AND (ai.Pgaza_na_vhode_nagnetatelia.value	 >= 4.0) AND 
		    (ai.Pgaza_na_vyhode_nagnetatelia.interval >=statusAi.NORMAL) AND (ai.Pgaza_na_vyhode_nagnetatelia.value	 >= 4.0) THEN
		        Pvh_vyhMore5.top := TRUE;
    		    runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
	    END_IF;
    END_IF;

    (* проверка открытия крана 3б *)
    IF	kran3bOpen.start AND NOT kran3bOpen.top THEN
	    IF	IM.kran3b.onStatus=_statusDualInput.STATUS_ON THEN
		    kran3bOpen.top :=TRUE;	
	    END_IF;
    END_IF;
    IF	kran3bOpen.top AND	kran5Close.top AND dP_kr1less100.top AND Pvh_vyhMore5.top THEN
	    runPhase(kran1Open);
	    runPhase(kran2Open);    
	    runPhase(kran3Open);
	    (*Smazka_1_2:=TRUE; нет такого *)
    END_IF;
    IF	kran1Open.top THEN
	    resetIfRunningSO(IM.SingleOutputs.Kr4_open_from_alg);
	    (*ystavki.Block_kr4_alg.setValue (0);что такое уставки*)
    END_IF;
    
    (* закрытие крана 3бис *)
    IF kran1Open.top AND kran2Open.top AND kran3Open.top THEN 
	    runPhase(kran3bClose); 
    END_IF;
    IF 	kran3bClose.top THEN
	    Err_ALG.error :=FALSE;
	    resetPhase(timer480);
    ELSIF NOT kran3bClose.top AND timer480.top THEN
		Err_ALG.error :=TRUE;
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

StrAlg.Start:= timer480.startStatus
            OR kran4Open.startStatus
            OR waitAfterKran4.startStatus
            OR kran5Close.startStatus
            OR kran3bOpen.startStatus
            OR dP_kr1less100.startStatus
            OR Pvh_vyhMore5.startStatus
            OR kran1Open.startStatus
            OR kran2Open.startStatus
            OR kran3Open.startStatus
            OR kran3bClose.startStatus
            OR Err_ALG.startStatus;
            

StrAlg.Error := timer480.errorStatus
            OR kran4Open.errorStatus
            OR waitAfterKran4.errorStatus
            OR kran5Close.errorStatus
            OR kran3bOpen.errorStatus
            OR dP_kr1less100.errorStatus
            OR Pvh_vyhMore5.errorStatus
            OR kran1Open.errorStatus
            OR kran2Open.errorStatus
            OR kran3Open.errorStatus
            OR kran3bClose.errorStatus
            OR Err_ALG.errorStatus;                 
            
StrAlg.Top := timer480.topStatus
            OR kran4Open.topStatus
            OR waitAfterKran4.topStatus
            OR kran5Close.topStatus
            OR kran3bOpen.topStatus
            OR dP_kr1less100.topStatus
            OR Pvh_vyhMore5.topStatus
            OR kran1Open.topStatus
            OR kran2Open.topStatus
            OR kran3Open.topStatus
            OR kran3bClose.topStatus
            OR Err_ALG.topStatus;  
             
(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);