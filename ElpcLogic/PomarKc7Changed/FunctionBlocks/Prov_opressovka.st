FUNCTION_BLOCK Prov_opressovka

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	OPC_Control : struct_PhaseAlgoritm;
	Pms_more_50 : struct_PhaseAlgoritm;
	Pms_more_300 : struct_PhaseAlgoritm;
	dPmg_more_100 : struct_PhaseAlgoritm;
	P_zad : struct_PhaseAlgoritm;
	kran5Open : struct_PhaseAlgoritm;
	kran4Open : struct_PhaseAlgoritm;
	kran5Close : struct_PhaseAlgoritm;
	kran4Close : struct_PhaseAlgoritm;
	timer10 : struct_PhaseAlgoritm;
	P_vh_vyh_more_zad : struct_PhaseAlgoritm;
	Zapoln_Norm : struct_PhaseAlgoritm;
	First_Step : struct_PhaseAlgoritm;
	MaxZapolnenie_izm : REAL;
	Opressovka_Start : struct_Question;
	PNS_NU_ON_Ask : struct_Question;
	Zapolnit_kontur : struct_Question;
	fb_OPC_Control : fb_ph_algoritm;
	fb_Pms_more_50 : fb_ph_algoritm;
	fb_Pms_more_300 : fb_ph_algoritm;
	fb_dPmg_more_100 : fb_ph_algoritm;
	fb_P_zad : fb_ph_algoritm;
	fb_kran5Open : fb_ph_Kran;
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
    fb_OPC_Control(phaseNumber:=1);
    fb_Pms_more_50(phaseNumber:=2);
    fb_Pms_more_300(phaseNumber:=3);
    fb_dPmg_more_100(phaseNumber:=4);
    fb_P_zad(phaseNumber:=5);
    fb_kran5Open(phaseNumber:=6, act:=_on);
    fb_kran4Open(phaseNumber:=7, act:=_on);
    fb_kran5Close(phaseNumber:=8, act:=_off);
    fb_kran4Close(phaseNumber:=9, act:=_off);
    fb_timer10(phaseNumber:=10, delay:=T#10S);
    fb_P_vh_vyh_more_zad(phaseNumber:=11);
    fb_Zapoln_Norm(phaseNumber:=12);
    fb_First_Step(phaseNumber:=13);
    Opressovka_Start.AnswerVariants:=_Answers.ANS_YES + _Answers.ANS_NO;
    PNS_NU_ON_Ask.AnswerVariants:=_Answers.ANS_YES;
    Zapolnit_kontur.AnswerVariants:=_Answers.ANS_YES;
    onInit:=TRUE;
END_IF;

fb_OPC_Control(StrPh:=OPC_Control);
fb_Pms_more_50(StrPh:=Pms_more_50);
fb_Pms_more_300(StrPh:=Pms_more_300);
fb_dPmg_more_100(StrPh:=dPmg_more_100);
fb_P_zad(StrPh:=P_zad);
fb_kran5Open(StrPh:=kran5Open, Im:=Im.Kran5);
fb_kran4Open(StrPh:=kran4Open, Im:=Im.Kran4);
fb_kran5Close(StrPh:=kran5Close, Im:=Im.Kran5);
fb_kran4Close(StrPh:=kran4Close, Im:=Im.Kran4);
fb_timer10(StrPh:=timer10);
fb_P_vh_vyh_more_zad(StrPh:=P_vh_vyh_more_zad);
fb_Zapoln_Norm(StrPh:=Zapoln_Norm);
fb_First_Step(StrPh:=First_Step);
fb_Opressovka_Start(StrQ:=Opressovka_Start);
fb_PNS_NU_ON_Ask(StrQ:=PNS_NU_ON_Ask);
fb_Zapolnit_kontur(StrQ:=Zapolnit_kontur);

StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

IF StrAlg.isRuning THEN
   (*IF	algManager.mode <> ModeGpa.MODE_O THEN
	    askQuestion(Opressovka_Start);
    END_IF;*)

    IF	Opressovka_Start.answer=_Answers.ANS_YES THEN
	    askQuestion(Opressovka_Start);
	    Im.kran6.inOpcCommandsDisabled := FALSE;
	    (*algManager.setMode(nMode:=ModeGpa.MODE_O);*)
	    runPhase(OPC_Control);
	    resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
	    resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
        ELSIF Opressovka_Start.answer=_Answers.ANS_no THEN
              resetQuestion(Opressovka_Start);
    END_IF;

    IF	OPC_Control.start AND NOT OPC_Control.top THEN
	    askQuestion(PNS_NU_ON_Ask);
    END_IF;
    IF	(PNS_NU_ON_Ask.answer=_Answers.ANS_YES) AND NOT OPC_Control.top THEN
	    OPC_Control.top:=TRUE;
	    resetQuestion(PNS_NU_ON_Ask);
    END_IF;
    
    IF	OPC_Control.top AND NOT Pms_more_50.start  THEN
	    Im.pns.inOpcCommandsDisabled := FALSE;
	    Im.kran6.inOpcCommandsDisabled := FALSE;
	    runPhase(Pms_more_50);
	    runPhase(Pms_more_300);
    END_IF;
    IF	OPC_Control.top AND Im.pns.onStatus = _statusDualInput.STATUS_On AND NOT dPmg_more_100.start THEN
	    Im.nu1.inOpcCommandsDisabled := FALSE;
	    Im.nu2.inOpcCommandsDisabled := FALSE;
	    runPhase(dPmg_more_100);
    END_IF;

    IF	Im.nu1.onStatus = _statusDualInput.STATUS_On OR Im.nu2.onStatus = _statusDualInput.STATUS_On AND dPmg_more_100.start AND NOT dPmg_more_100.top THEN
	    IF ai.dPmaslo_gaz.interval	>=	_statusAi.NORMAL AND 
		    ai.dPmaslo_gaz.value > 150.0 AND Im.SingleSignals.dP_maslo_gaz_Less100.reliability = TRUE AND NOT Im.SingleSignals.dP_maslo_gaz_Less100.Q THEN
		    dPmg_more_100.top:=TRUE;
		    runAiProtection(protections.dPmaslo_gaz);
		    runDiProtection(protections.dPmaslo_gaz_less100);
	    END_IF;
    END_IF;

    IF	Im.pns.onStatus = _statusDualInput.STATUS_On AND Pms_more_50.start AND NOT Pms_more_50.top THEN
	        IF	ai.Pmaslo_sm_nizkoe.interval	>=	_statusAi.NORMAL AND 
		        ai.Pmaslo_sm_nizkoe.value > 50.0 THEN
		        Pms_more_50.top:=TRUE;
                runAiProtection(protections.Pmaslo_sm_nizkoe);
	    END_IF;
    END_IF;

    IF	Im.pns.onStatus = _statusDualInput.STATUS_On AND Pms_more_300.start AND NOT Pms_more_300.top THEN
	    IF	ai.Pmaslo_sm_vysokoe.interval	>=	_statusAi.NORMAL AND 
		    ai.Pmaslo_sm_vysokoe.value > 300.0 THEN
		    Pms_more_300.top:=TRUE;
		    runAiProtection(protections.Pmaslo_sm_vysokoe);
	    END_IF;
    END_IF;
    
    (*IF	dPmg_more_100.top AND Pms_more_50.top AND Pms_more_300.top THEN
	    CASE	Auto.value OF
	    0:	Im.kran3.inOpcCommandsDisabled := FALSE;
		Im.kran4.inOpcCommandsDisabled := FALSE;
		Im.kran5.inOpcCommandsDisabled := FALSE;
		Im.kran3b.inOpcCommandsDisabled := FALSE;
		resetPhase(Zapolnit_kontur);
		IF	Im.PerepadDavlenieKran1_Less100.Q THEN
			Im.kran1.inOpcCommandsDisabled := FALSE;
			Im.kran2.inOpcCommandsDisabled := FALSE;
		ELSE
			Im.kran1.inOpcCommandsDisabled := TRUE;
			Im.kran2.inOpcCommandsDisabled := TRUE;
		END_IF
		resetPhase(P_vh_vyh_more_zad);
		resetPhase(kran5Open);
		resetPhase(kran4Open);
		resetPhase(timer10);
		resetPhase(kran5Close);
		resetPhase(P_zad);
		resetPhase(First_Step);
		resetPhase(kran4Close);
		(*MaxZapolnenie_izm:=0;
		MaxZapolnenie.setValue (0);
	1:	
		Zapoln_Norm.top:= MaxZapolnenie.value - MaxZapolnenie_izm > 0.4 AND MaxZapolnenie.value >= 0.4 AND MaxZapolnenie.value <= 10 AND 
			ai.DGazaNaVhodeNagnetatelja.interval >= _statusAi.NORMAL AND MaxZapolnenie.value - ai.DGazaNaVhodeNagnetatelja.value > 0.4 AND 
			ai.DGazaNaVyhodeNagnetatelja.interval >= _statusAi.NORMAL AND MaxZapolnenie.value - ai.DGazaNaVyhodeNagnetatelja.value > 0.4 *)
		IF	kran4Close.top AND Zapoln_Norm.top AND NOT P_zad.start THEN
			resetPhase(P_vh_vyh_more_zad);
			resetPhase(kran5Open);
			resetPhase(kran4Open);
			resetPhase(timer10);
			resetPhase(kran5Close);
			resetPhase(kran4Close);
		END_IF;
		IF	NOT kran4Close.top OR kran4Close.top AND Zapoln_Norm.top AND NOT P_zad.start THEN
		 	runPhase(P_zad);			
		END_IF;
		IF NOT P_zad.top AND P_zad.start AND Zapoln_Norm.top THEN
			askQuestion(Zapolnit_kontur);
			Im.kran3.inOpcCommandsDisabled := TRUE;
			Im.kran4.inOpcCommandsDisabled := TRUE;
			Im.kran5.inOpcCommandsDisabled := TRUE;
			Im.kran3b.inOpcCommandsDisabled := TRUE;
			Im.kran1.inOpcCommandsDisabled := TRUE;
			Im.kran2.inOpcCommandsDisabled := TRUE;
			
			
		ELSIF NOT Zapoln_Norm.top AND NOT P_zad.top THEN
				resetQuestion(Zapolnit_kontur);
		END_IF;
		
        IF	(Zapolnit_kontur.answer=_Answers.ANS_YES) AND P_zad.start THEN
			(*MaxZapolnenie_izm:= MaxZapolnenie.value;*)
			IF 	NOT First_Step.top THEN
				runPhase(kran5Open);
			ELSE
				runPhase(kran4Open);
			END_IF;
			resetQuestion(Zapolnit_kontur);
			P_zad.top:=TRUE;
		END_IF;
                    (*
        
		IF	P_zad.top AND NOT kran4Close.top THEN
			MaxZapolnenie.newvalue:=MaxZapolnenie_izm;
		ELSE
			MaxZapolnenie.newvalue:= MaxZapolnenie.newvalue; 
		END_IF;*)

		IF	kran5Open.top AND NOT First_Step.top THEN
			runPhase(kran4Open);
		END_IF;
		
        IF 	kran4Open.top AND NOT timer10.top AND NOT First_Step.top THEN
			runPhase(timer10);
		END_IF;

		IF	timer10.top AND NOT First_Step.top THEN
			runPhase(kran5Close);
		END_IF;

		IF	kran5Close.top OR First_Step.top AND kran4Open.top THEN
			runPhase(P_vh_vyh_more_zad);
        END_IF;
		
		IF	ai.Pgaza_na_vhode_nagnetatelia.interval >= _statusAi.NORMAL (*AND ai.Pgaza_na_vhode_nagnetatelia.value >= MaxZapolnenie.value*) AND 
			ai.Pgaza_na_vyhode_nagnetatelia.interval >= _statusAi.NORMAL (*AND ai.Pgaza_na_vyhode_nagnetatelia.value >= MaxZapolnenie.value*) AND  P_vh_vyh_more_zad.start AND NOT P_vh_vyh_more_zad.top THEN
			runPhase(kran4Close);
			P_vh_vyh_more_zad.top:=TRUE;
		END_IF;

		IF	kran4Close.top THEN
			First_Step.top:=TRUE;
			Im.kran3.inOpcCommandsDisabled := FALSE;
			Im.kran4.inOpcCommandsDisabled := FALSE;
			Im.kran5.inOpcCommandsDisabled := FALSE;
			Im.kran3b.inOpcCommandsDisabled := FALSE;
			
            IF	Zapoln_Norm.top THEN
				resetPhase(P_zad);
			END_IF;
			
            IF	Im.SingleSignals.dp_kran1_Less100.Q THEN
				Im.kran1.inOpcCommandsDisabled := FALSE;
				Im.kran2.inOpcCommandsDisabled := FALSE;	
			ELSE
				Im.kran1.inOpcCommandsDisabled := TRUE;
				Im.kran2.inOpcCommandsDisabled := TRUE;
			END_IF;
		ELSE
			Im.kran1.inOpcCommandsDisabled := TRUE;
			Im.kran2.inOpcCommandsDisabled := TRUE;
	    END_IF;
        END_IF;
        (*END_CASE;    
END_IF;*)

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

StrAlg.Start:= OPC_Control.startStatus
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
            OR First_Step.errorStatus;  
            
(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);      