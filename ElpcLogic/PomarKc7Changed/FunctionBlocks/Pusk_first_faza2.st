FUNCTION_BLOCK Pusk_first_faza2

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	nu1On : struct_PhaseAlgoritm;
	nu2On : struct_PhaseAlgoritm;
	timer240 : struct_PhaseAlgoritm;
	dPmg_more100 : struct_PhaseAlgoritm;
	Auto_NU1 : struct_PhaseAlgoritm;
	Error_Alg : struct_PhaseAlgoritm;
	fb_timer240 : fb_ph_Timer;
	fb_nu1On : fb_ph_OilPump;
	fb_nu2On : fb_ph_OilPump;
	fb_dPmg_more100 : fb_ph_algoritm;
	fb_Auto_NU1 : fb_ph_algoritm;
	fb_Error_Alg : fb_ph_algoritm;
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
         fb_nu1On(phaseNumber:=1, act:=_on );
         fb_nu2On(phaseNumber:=2, act:=_on);
         fb_dPmg_more100(phaseNumber:=3);
         fb_Error_Alg(phaseNumber:=4);
         fb_Auto_NU1(phaseNumber:=5);       
onInit:=TRUE;
END_IF;
       
fb_timer240(StrPh:=timer240);
fb_nu1On(StrPh:= nu1On,Im:=Im.nu1);
fb_nu2On(StrPh:= nu2On,Im:=Im.nu2);
fb_dPmg_more100(StrPh:=dPmg_more100);
fb_Auto_NU1(StrPh:=Auto_NU1, alg:=algoritms.autoNu); (*komu ono nujno to blat *)
fb_Error_Alg(StrPh:=Error_Alg);             
       
StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
         
IF StrAlg.isRuning THEN

    StrAlg.hasError := nu1On.error AND nu2On.error AND Auto_NU1.error;
    
    (* защита не возведена - запускаем таймер *)
    IF NOT dPmg_more100.top THEN
	runPhase(timer240);
    END_IF;
    
    (* носос 1 не включен - включаем насос*)
    IF NOT nu1On.start THEN
	runPhase(nu1On);
    END_IF;
    
    (* носос 2 не включен - включаем насос*)
    IF NOT nu2On.start THEN
	runPhase(nu2On);
    END_IF;   
    
    (* один из насосов включен - включение защиты *)
    IF ((IM.nu1.onStatus = _statusDualInput.status_on OR IM.nu2.onStatus = _statusDualInput.status_on) AND  (nu1On.start OR nu2On.Start)) THEN
	runPhase(dPmg_more100); 
	nu1On.top:=TRUE;
          nu2On.top:=TRUE;
    END_IF;

    (* фаза защиты активна - включение защиты *)
    IF dPmg_more100.start AND NOT dPmg_more100.top THEN
	IF NOT IM.SingleSignals.dP_maslo_gaz_Less100.Q AND IM.SingleSignals.dP_maslo_gaz_Less100.status = 1 AND 
	ai.dPmaslo_gaz.interval >= statusAi.normal AND ai.dPmaslo_gaz.value > 150.0 THEN
              dPmg_more100.top:=TRUE;
	END_IF;
    END_IF;
    
    (*таймер завершился до возведения защит - ошибка *)
    IF timer240.top THEN 
	Error_Alg.error := TRUE;
    ELSE
	Error_Alg.error := FALSE;	
    END_IF;

    IF dPmg_more100.top AND nu1On.top AND nu2On.top THEN
	Auto_NU1.top:=TRUE;
	runAiProtection(protections.dPmaslo_gaz);
          runDiProtection(protections.dPmaslo_gaz_less100);
	resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
	resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
	algoritms.autoNu.CanRun:=TRUE;
	(*algoritms.autoNu.run ();ниче не ясно*)
	resetPhase(timer240);
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
                                                  
                                                  runPhase(timer240);
                                                  runPhase(nu1On);
                                                  runPhase(nu2On);
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
                                                                       
                                        resetPhase(nu1On);
                                        resetPhase(nu2On);
                                        resetPhase(timer240);
                                        resetPhase(dPmg_more100);
                                        resetPhase(Auto_NU1);
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
            OR nu1On.startStatus
            OR nu2On.startStatus
            OR dPmg_more100.startStatus
            OR Auto_NU1.startStatus
            OR Error_Alg.startStatus;
            

StrAlg.Error := timer240.errorStatus
            OR nu1On.errorStatus
            OR nu2On.errorStatus
            OR dPmg_more100.errorStatus
            OR Auto_NU1.errorStatus
            OR Error_Alg.errorStatus;          
            
StrAlg.Top := timer240.topStatus
            OR nu1On.topStatus
            OR nu2On.topStatus
            OR dPmg_more100.topStatus
            OR Auto_NU1.topStatus
            OR Error_Alg.topStatus;  
             
(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);