FUNCTION_BLOCK Prov_K

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	F1_1_start : struct_PhaseAlgoritm;
	F1_2_start : struct_PhaseAlgoritm;
	F3_start : struct_PhaseAlgoritm;
	F4_Start : struct_PhaseAlgoritm;
	Start_Prov_Pusk : struct_Question;
	F4_Start_Q : struct_Question;
	fb_F1_1_start : fb_ph_algoritm;
	fb_F1_2_start : fb_ph_algoritm;
	fb_F3_start : fb_ph_algoritm;
	fb_F4_Start : fb_ph_Kran;
	algoritms : AlgoritmsConfig;
	fb_Start_Prov_Pusk : fb_Question;
	fb_F4_Start_Q : fb_Question;
	fb_kran4Open : fb_ph_Kran;
	fb_kran5Close : fb_ph_Kran;
	fb_kran4Close : fb_ph_Kran;
	fb_timer10 : fb_ph_Timer;
	fb_P_vh_vyh_more_zad : fb_ph_algoritm;
	fb_Zapoln_Norm : fb_ph_algoritm;
	fb_First_Step : fb_ph_algoritm;
	fb_Opressovka_Start : fb_Question;
	fb_PNS_NU_ON_Ask : fb_Question;
	fb_Zapolnit_kontur : fb_Question;
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
	protections : ProtectionsConfig;
END_VAR

IF NOT onInit THEN      
    fb_F1_1_start(phaseNumber:=1, act:=_run);
    fb_F1_2_start(phaseNumber:=2, act:=_run);
    fb_F3_start(phaseNumber:=3, act:=_run);
    fb_F4_Start(phaseNumber:=4, act:=_on);
    Start_Prov_Pusk.AnswerVariants:=_Answers.ANS_YES + _Answers.ANS_NO;
    F4_Start_Q.AnswerVariants:=_Answers.ANS_YES;
    onInit:=TRUE;
END_IF;

fb_F1_1_start(StrPh:=F1_1_start, alg := algoritms.Pusk_F_faza1);
fb_F1_2_start(StrPh:=F1_2_start, alg := algoritms.Pusk_F_faza2);
fb_F3_start(StrPh:=F3_start, alg := algoritms.Pusk_TH_faza);
fb_F4_Start(StrPh:=F4_Start, Im:=Im.Kran6);
fb_Start_Prov_Pusk(StrQ:=Start_Prov_Pusk);
fb_F4_Start_Q(StrQ:=F4_Start_Q);

StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

IF StrAlg.isRuning THEN
    IF NOT F1_1_start.start THEN
	askQuestion(Start_Prov_Pusk);
    END_IF;
    IF Start_Prov_Pusk.answer = _Answers.ANS_YES THEN
	(*algoritms.F1_1.CanRun :=TRUE;*)
	runPhase(F1_1_start);
	resetQuestion(Start_Prov_Pusk);
	(*algManager.setMode(nMode:=ModeGpa.MODE_PUSKK);*)
    ELSIF	Start_Prov_Pusk.answer=_Answers.ANS_NO THEN
		resetQuestion(Start_Prov_Pusk);
		(*algoritms.F1_1.CanRun :=FALSE;*)
    END_IF;
    IF F1_1_start.top THEN
	(*algoritms.F1_2.CanRun :=TRUE;*)
	runPhase(F1_2_start);
    END_IF;
    IF 	F1_2_start.top (*AND algoritms.ppu.ppuThird*)THEN
	(*algoritms.F3.CanRun :=TRUE;*)
	runPhase(F3_start);
    END_IF;
    IF F3_start.top AND (*algoritms.ppu.ppuForth AND*) NOT F4_Start.start  THEN
	askQuestion(F4_Start_Q);
    ELSE
	resetQuestion(F4_Start_Q);
    END_IF;
    IF F4_Start_Q.answer = _Answers.ANS_YES THEN
	resetQuestion(F4_Start_Q);
	(*algoritms.F4.CanRun :=TRUE;*)
	runPhase(F4_Start);
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

(*StrAlg.Start:= OPC_Control.startStatus
            OR Pms_more_50.startStatus
            OR Pms_more_300.startStatus
            OR dPmg_more_100.startStatus
            OR P_zad.startStatus
            OR kran5Open.startStatus
            OR kran4Open.startStatus
            OR kran5Close.startStatus
            OR kran4Close.startStatus
            OR timer10.startStatus
            OR P_vh_vyh_more_zad.startStatus
            OR Zapoln_Norm.startStatus
            OR First_Step.startStatus;
            

StrAlg.Top :=  OPC_Control.topStatus
            OR Pms_more_50.topStatus
            OR Pms_more_300.topStatus
            OR dPmg_more_100.topStatus
            OR P_zad.topStatus
            OR kran5Open.topStatus
            OR kran4Open.topStatus
            OR kran5Close.topStatus
            OR kran4Close.topStatus
            OR timer10.topStatus
            OR P_vh_vyh_more_zad.topStatus
            OR Zapoln_Norm.topStatus
            OR First_Step.topStatus;                   
            
StrAlg.Error :=  OPC_Control.errorStatus
            OR Pms_more_50.errorStatus
            OR Pms_more_300.errorStatus
            OR dPmg_more_100.errorStatus
            OR P_zad.errorStatus
            OR kran5Open.errorStatus
            OR kran4Open.errorStatus
            OR kran5Close.errorStatus
            OR kran4Close.errorStatus
            OR timer10.errorStatus
            OR P_vh_vyh_more_zad.errorStatus
            OR Zapoln_Norm.errorStatus
            OR First_Step.errorStatus;*)  
            
(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);      