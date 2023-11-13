FUNCTION_BLOCK Prov_PMS

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	pnsOff : struct_PhaseAlgoritm;
	timer120 : struct_PhaseAlgoritm;
	Pms_less_25 : struct_PhaseAlgoritm;
	Pms_less_250 : struct_PhaseAlgoritm;
	Error_Alg : struct_PhaseAlgoritm;
	fb_Pms_less_25 : fb_ph_algoritm;
	fb_Pms_less_250 : fb_ph_algoritm;
	fb_pnsOff : fb_ph_Switch;
	fb_timer120 : fb_ph_Timer;
	fb_Error_Alg : fb_ph_algoritm;
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
	_statusAi : TYPE_StatusAi;
END_VAR

















IF NOT onInit THEN      
    fb_pnsOff(phaseNumber:=1, act:=_off);
    fb_timer120(phaseNumber:=2, delay:=T#120S);
    fb_Pms_less_25(phaseNumber:=3);
    fb_Pms_less_250(phaseNumber:=4);
    fb_Error_Alg(phaseNumber:=5);
    onInit:=TRUE;
END_IF;

fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
fb_timer120(StrPh:=timer120);
fb_Pms_less_25(StrPh:=Pms_less_25);
fb_Pms_less_250(StrPh:=Pms_less_250);
fb_Error_Alg(StrPh:=Error_Alg);


StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

IF StrAlg.isRuning THEN
   (*IF NOT pnsOff.start THEN
	    PNS_OFF_Ask.ask ();
    END_IF;
    IF	(PNS_OFF_Ask.answer=Answers.ANS_YES) THEN
	    runPhase(pnsOff);
        PNS_OFF_Ask.reset ();
	    IF NOT (Pms_less_250.top AND Pms_less_25.top) THEN
	    	runPhase(timer120);
	    END_IF;
    END_IF;*)

    (*запуск проверок давления*)
    IF	pnsOff.top  THEN 
        runPhase(Pms_less_25);
	    runPhase(Pms_less_250);
    END_IF;

    (*проверка давления масла низкое*)
    IF	Pms_less_25.start AND NOT Pms_less_25.top THEN 
	    IF 	ai.Pmaslo_sm_nizkoe.interval>=_statusAi.NORMAL AND ai.Pmaslo_sm_nizkoe.value < 25.0 THEN
	  	    Pms_less_25.top:=TRUE;
	    END_IF;
    END_IF;

    IF	Pms_less_250.start AND NOT Pms_less_250.top THEN
	    IF	ai.Pmaslo_sm_vysokoe.interval>=_statusAi.NORMAL AND ai.Pmaslo_sm_vysokoe.value < 250.0 THEN
	  	    Pms_less_250.top:=TRUE;
	    END_IF;
    END_IF;
    
    (*ошибка заврешия алгоритма по таймеру*)
    IF	timer120.top THEN 
	    Error_Alg.ERROR := TRUE;
    ELSE
	    Error_Alg.ERROR := FALSE;	
    END_IF;

    (*если проверка прошла - сброс таймера *)
    IF	Pms_less_250.top AND Pms_less_25.top  THEN 
        resetPhase(timer120);
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

StrAlg.Start:= pnsOff.startStatus
            OR timer120.startStatus
            OR Pms_less_25.startStatus
            OR Pms_less_250.startStatus;
            

StrAlg.Top :=  pnsOff.topStatus
            OR timer120.topStatus
            OR Pms_less_25.topStatus
            OR Pms_less_250.topStatus;                  
            
StrAlg.Error :=  pnsOff.errorStatus
            OR timer120.errorStatus
            OR Pms_less_25.errorStatus
            OR Pms_less_250.errorStatus; 
            
(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);      