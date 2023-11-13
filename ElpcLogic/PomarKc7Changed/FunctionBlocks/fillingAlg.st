FUNCTION_BLOCK fillingAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	BreakPuskTimer : struct_PhaseAlgoritm;
	kran3bOpen : struct_PhaseAlgoritm;
	kran4Open : struct_PhaseAlgoritm;
	waitAfterKran4 : struct_PhaseAlgoritm;
	kran5Close : struct_PhaseAlgoritm;
	didPKran1 : struct_PhaseAlgoritm;
	kran1Open : struct_PhaseAlgoritm;
	kran2Open : struct_PhaseAlgoritm;
	kran3bClose : struct_PhaseAlgoritm;
	kran4Close : struct_PhaseAlgoritm;
	RunProtection_kr1 : struct_PhaseAlgoritm;
	RunProtection_kr2 : struct_PhaseAlgoritm;
	waitAfterKran5 : struct_PhaseAlgoritm;
	testUnsuccessfulFilling : struct_PhaseAlgoritm;
	fb_BreakPuskTimer : fb_ph_Timer;
	fb_kran3bOpen : fb_ph_Kran;
	fb_kran4Open : fb_ph_Kran;
	fb_waitAfterKran4 : fb_ph_Timer;
	fb_kran5Close : fb_ph_Kran;
	fb_didPKran1 : fb_ph_CustomPhase;
	fb_kran1Open : fb_ph_Kran;
	fb_kran2Open : fb_ph_Kran;
	fb_kran3bClose : fb_ph_Kran;
	fb_kran4Close : fb_ph_Kran;
	fb_RunProtection_kr1 : fb_ph_DIprotection;
	fb_RunProtection_kr2 : fb_ph_DIprotection;
	fb_waitAfterKran5 : fb_ph_Timer;
	fb_testUnsuccessfulFilling : fb_ph_CustomPhase;
	_sunpackerCommand : fb_sunpackerCommand;
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
	ai : AiConfig;
	protections : ProtectionsConfig;
	AlgTimers : struct_AlgTimers;
	algoritms : AlgoritmsConfig;
END_VAR


















IF NOT onInit THEN

         fb_BreakPuskTimer(phaseNumber:=0, delay:=T#240S);
             fb_kran3bOpen(phaseNumber:=1, act:=_on);
              fb_kran4Open(phaseNumber:=2, act:=_on);
         fb_waitAfterKran4(phaseNumber:=3, delay:=T#10S);
             fb_kran5Close(phaseNumber:=4, act:=_off);
              fb_didPKran1(phaseNumber:=5);
              fb_kran1Open(phaseNumber:=7, act:=_on);
              fb_kran2Open(phaseNumber:=8, act:=_on);
            fb_kran3bClose(phaseNumber:=9, act:=_off);
             fb_kran4Close(phaseNumber:=10, act:=_off);
      fb_RunProtection_kr1(phaseNumber:=11, act:=_run);
      fb_RunProtection_kr2(phaseNumber:=12, act:=_run);
         fb_waitAfterKran5(phaseNumber:=13, delay:=T#60S);
fb_testUnsuccessfulFilling(phaseNumber:=17);
          
   
   
   
   
onInit:=TRUE;
END_IF;

         fb_BreakPuskTimer(StrPh:=BreakPuskTimer, timer:=AlgTimers.filling_BreakPuskTimer);
             fb_kran3bOpen(StrPh:=kran3bOpen, Im:=Im.kran3b);
              fb_kran4Open(StrPh:=kran4Open, Im:=Im.kran4);
         fb_waitAfterKran4(StrPh:=waitAfterKran4, timer:=AlgTimers.filling_waitAfterKran4);
             fb_kran5Close(StrPh:=kran5Close, Im:=Im.kran5);
              fb_didPKran1(StrPh:=didPKran1);
              fb_kran1Open(StrPh:=kran1Open, Im:=Im.kran1);
              fb_kran2Open(StrPh:=kran2Open, Im:=Im.kran2);
            fb_kran3bClose(StrPh:=kran3bClose, Im:=Im.kran3b);
             fb_kran4Close(StrPh:=kran4Close, Im:=Im.kran4);
      fb_RunProtection_kr1(StrPh:=RunProtection_kr1 , StrDiP:=protections.Reg_vozb_off);
      fb_RunProtection_kr2(StrPh:=RunProtection_kr2 , StrDiP:=protections.Fail_chastotnii_pusk);
         fb_waitAfterKran5(StrPh:=waitAfterKran5, timer:=AlgTimers.filling_waitAfterKran5);
fb_testUnsuccessfulFilling(StrPh:=testUnsuccessfulFilling);
          

StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
         
IF StrAlg.isRuning THEN


    StrAlg.hasError := kran3bOpen.error OR kran4Open.error OR kran5Close.error OR kran5Close.error
    OR kran1Open.error OR kran2Open.error OR kran3bClose.error OR kran4Close.error OR testUnsuccessfulFilling.error;

    IF kran4Open.top THEN	
        runPhase(waitAfterKran4);
    END_IF;

    IF waitAfterKran4.top THEN
        runPhase(kran5Close);
    END_IF;

    IF kran3bOpen.top AND kran5Close.top THEN
       runPhase(waitAfterKran5);
       runPhase(didPKran1);
    END_IF;
    
    (*IF didPKran1.start AND NOT didPKran1.top THEN
    didPKran1.top:= im.singleSignals.dP_gazgaz_Kran1.Q;
    END_IF;*)
    
    IF waitAfterKran5.top AND didPKran1.top THEN
          runPhase(kran1Open); 
	runPhase(kran2Open);
    END_IF;
    
    IF kran1Open.top AND kran2Open.top THEN
          runPhase(kran4Close); 
	runPhase(kran3bClose);
    END_IF;
   
    IF kran4Close.top AND kran3bClose.top THEN
          
          runPhase(RunProtection_kr1);
          runPhase(RunProtection_kr2); 
          
          (*runAiProtection(protections.Pgaza_na_vhode_nagnetatelia);
          runAiProtection(protections.Pgaza_na_vhode_nagnetatelia);
          runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
          runAiProtection(protections.dPmaslo_gaz);
          runAiProtection(protections.Pmaslo_sm_nizkoe);
          runAiProtection(protections.Pmaslo_sm_vysokoe);*)
    
    END_IF;
    
    IF BreakPuskTimer.top AND NOT (RunProtection_kr1.top AND RunProtection_kr2.top ) THEN
	testUnsuccessfulFilling.error:=TRUE;
    END_IF;
    
    IF RunProtection_kr1.top AND RunProtection_kr2.top THEN
          resetPhase(BreakPuskTimer);
	waitReset(IN:=TRUE, PT:= T#2S);
    END_IF;
    
    IF waitReset.Q AND NOT (algoritms.Apusk.isRuning OR algoritms.SemiAutoPusk.isRuning) THEN
	resetIfRunning(StrAlg);
    END_IF;
    
    StrAlg.isEnded:= RunProtection_kr1.top AND RunProtection_kr2.top;
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

                                                  runPhase(kran3bOpen);
                                                  runPhase(kran4Open);         
                                                  runPhase(BreakPuskTimer);
                                                  runPhase(testUnsuccessfulFilling); 
                                                    	
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
                                        StrAlg.inCanRun:=FALSE;
                                        waitReset(IN:=FALSE);
                                        
                                        resetPhase(BreakPuskTimer);
                                        resetPhase(kran3bOpen);
                                        resetPhase(kran4Open);
                                        resetPhase(waitAfterKran4);
                                        resetPhase(kran5Close);
                                        resetPhase(didPKran1);
                                        resetPhase(kran1Open);
                                        resetPhase(kran2Open);
                                        resetPhase(kran3bClose);
                                        resetPhase(kran4Close);
	                              resetPhase(RunProtection_kr1);
                                        resetPhase(RunProtection_kr2);
                                        resetPhase(waitAfterKran5);
                                        resetPhase(testUnsuccessfulFilling);
                                              
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

StrAlg.Start:= BreakPuskTimer.startStatus
            OR kran3bOpen.startStatus
            OR kran4Open.startStatus
            OR waitAfterKran4.startStatus
            OR kran5Close.startStatus
            OR didPKran1.startStatus
            OR kran1Open.startStatus
            OR kran2Open.startStatus
            OR kran3bClose.startStatus
            OR kran4Close.startStatus
            OR RunProtection_kr1.startStatus
            OR RunProtection_kr2.startStatus
            OR waitAfterKran5.startStatus
            OR testUnsuccessfulFilling.startStatus;
            
            
StrAlg.Error:= BreakPuskTimer.errorStatus
            OR kran3bOpen.errorStatus
            OR kran4Open.errorStatus
            OR waitAfterKran4.errorStatus
            OR kran5Close.errorStatus
            OR didPKran1.errorStatus
            OR kran1Open.errorStatus
            OR kran2Open.errorStatus
            OR kran3bClose.errorStatus
            OR kran4Close.errorStatus
            OR RunProtection_kr1.errorStatus
            OR RunProtection_kr2.errorStatus
            OR waitAfterKran5.errorStatus
            OR testUnsuccessfulFilling.errorStatus;
            
            
StrAlg.Top:=   BreakPuskTimer.topStatus
            OR kran3bOpen.topStatus
            OR kran4Open.topStatus
            OR waitAfterKran4.topStatus
            OR kran5Close.topStatus
            OR didPKran1.topStatus
            OR kran1Open.topStatus
            OR kran2Open.topStatus
            OR kran3bClose.topStatus
            OR kran4Close.topStatus
            OR RunProtection_kr1.topStatus
            OR RunProtection_kr2.topStatus
            OR waitAfterKran5.topStatus
            OR testUnsuccessfulFilling.topStatus;                           

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);