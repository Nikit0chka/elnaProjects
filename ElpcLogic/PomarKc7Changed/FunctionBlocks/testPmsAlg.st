FUNCTION_BLOCK testPmsAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
	algContinue : struct_Question;
END_VAR

VAR
	pnsOn : struct_PhaseAlgoritm;
	PmsUp : struct_PhaseAlgoritm;
	runProtecrionAi : struct_PhaseAlgoritm;
	pnsOff : struct_PhaseAlgoritm;
	BreakTest : struct_PhaseAlgoritm;
	LowOilPS : struct_PhaseAlgoritm;
	LowOilAS : struct_PhaseAlgoritm;
	testUnsuccessful : struct_PhaseAlgoritm;
	fb_pnsOn : fb_ph_Switch;
	fb_PmsUp : fb_ph_WaitAnalogValue;
	fb_algContinue : fb_Question;
	fb_runProtecrionAi : fb_ph_AIprotection;
	fb_pnsOff : fb_ph_Switch;
	fb_BreakTest : fb_ph_Timer;
	fb_LowOilPS : fb_ph_CustomPhase;
	fb_LowOilAS : fb_ph_CustomPhase;
	fb_testUnsuccessful : fb_ph_CustomPhase;
	_sunpackerCommand : fb_sunpackerCommand;
	_DualStateImAction : TYPE_DualStateImAction;
	_Answers : TYPE_Answers;
	_statusDualInput : TYPE_statusDualInput;
	_StatusAi : TYPE_StatusAi;
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
	_resetQuestion : BOOL;
	waitReset : TON;
END_VAR

VAR_EXTERNAL
	IM : ImConfig;
	algoritms : AlgoritmsConfig;
	ai : AiConfig;
	AlgTimers : struct_AlgTimers;
	ModeGpa : TYPE_ModeGpa;
	algManager : struct_AlgoritmsManager;
	protections : ProtectionsConfig;
END_VAR

IF NOT onInit THEN

                   fb_pnsOn(phaseNumber:=0, act:=_on);
        algContinue.AnswerVariants:=_Answers.ANS_YES;
                   fb_PmsUp(phaseNumber:=1);
         fb_runProtecrionAi(phaseNumber:=3, act:=_run);
                  fb_pnsOff(phaseNumber:=4, act:=_off);
               fb_BreakTest(phaseNumber:=5, delay:=T#120S);
                fb_LowOilPS(phaseNumber:=6);
                fb_LowOilAS(phaseNumber:=7);
        fb_testUnsuccessful(phaseNumber:=8);

onInit:=TRUE;
END_IF;
       
            fb_pnsOn(StrPh:=pnsOn, Im:=IM.pns);
      fb_algContinue(StrQ:=algContinue);
            fb_PmsUp(StrPh:=PmsUp, ai:=ai.Pmasla_posle_GNS, more:=ai.Pmasla_posle_GNS.LW);
  fb_runProtecrionAi(StrPh:=runProtecrionAi, StrAiP:=protections.Os_sdvig_nagnetatelja_minus);
           fb_pnsOff(StrPh:=pnsOff, Im:=IM.pns);
        fb_BreakTest(StrPh:=BreakTest, timer:=AlgTimers.testPms_BreakTest);
         fb_LowOilPS(StrPh:=LowOilPS);
         fb_LowOilAS(StrPh:=LowOilAS);
 fb_testUnsuccessful(StrPh:=testUnsuccessful);                                  
       
StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
         
IF StrAlg.isRuning THEN

    StrAlg.hasError := pnsOn.error OR pnsOff.error OR testUnsuccessful.error;
    
    
    IF pnsOn.top THEN	
         runPhase(PmsUp);
    END_IF;
    
    IF PmsUp.top THEN	
         runPhase(runProtecrionAi);
    END_IF;
    
    IF runProtecrionAi.top THEN
         (*IM.SingleSignals.P_oil_low.Disabled_Sig:=FALSE;*)
         ai.Pmasla_posle_GNS.Disabled_LA:=FALSE;
         ai.Pmasla_posle_GNS.Disabled_LW:=FALSE;
         ai.Pmasla_posle_NU.Disabled_LW:=FALSE;
             IF NOT _resetQuestion THEN	
                 askQuestion(algContinue);
                 _resetQuestion:=TRUE;
             END_IF;
    END_IF;

    IF algContinue.answer = _Answers.ANS_YES THEN 
        
        runPhase(BreakTest);
        runPhase(pnsOff);
        runPhase(LowOilPS);
        runPhase(LowOilAS);
        resetQuestion(algContinue);

    END_IF;
    
    IF 	LowOilPS.start AND NOT LowOilPS.top THEN
	LowOilPS.top:= ai.Pmasla_posle_GNS.interval = _statusAi.LW;	
    END_IF;	
    IF 	LowOilAS.start AND NOT LowOilAS.top THEN
	LowOilAS.top:= ai.Pmasla_posle_GNS.interval = _statusAi.LA;
    END_IF;          
    
    IF LowOilPS.top AND LowOilAS.top THEN
          resetPhase(BreakTest); 
          waitReset(IN:=TRUE, PT:= T#3S);
    END_IF;                     
                                  
    IF BreakTest.top AND StrAlg.isEnded THEN
	testUnsuccessful.error:=TRUE;
    END_IF; 
             
    IF waitReset.Q THEN
        algManager.nMode:=ModeGpa.MODE_STOP;
        resetIfRunning(StrAlg);
    END_IF;
    
    StrAlg.isEnded:= LowOilPS.top AND LowOilAS.top;
    
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
                                                  
                                                  algManager.nMode:=ModeGpa.MODE_TESTPMS;
                                                  resetAndDisable(alg:=algoritms.ppu);
                                                  runPhase(pnsOn); 
                                                    	
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
                                        _resetQuestion:=FALSE;
                                        ai.Pmasla_posle_GNS.Disabled_LA:=TRUE;
                                        ai.Pmasla_posle_GNS.Disabled_LW:=TRUE;
                                        ai.Pmasla_posle_NU.Disabled_LW:=TRUE;
                                       (* IM.SingleSignals.P_oil_low.Disabled_Sig:=TRUE;*)
                                        resetAiProtection(protections.Os_sdvig_nagnetatelja_minus);
                                        
                                        resetPhase(pnsOn);
                                        resetPhase(PmsUp);
                                        resetPhase(runProtecrionAi);
                                        resetPhase(pnsOff);
                                        resetPhase(BreakTest);
                                        resetPhase(LowOilPS);
                                        resetPhase(LowOilAS);
                                        resetPhase(testUnsuccessful);
                                        
                                        resetQuestion(algContinue);      
                                        
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

StrAlg.Start:= pnsOn.startStatus
            OR PmsUp.startStatus
            OR runProtecrionAi.startStatus
            OR pnsOff.startStatus
            OR BreakTest.startStatus
            OR LowOilPS.startStatus
            OR LowOilAS.startStatus
            OR testUnsuccessful.startStatus;
            
StrAlg.Error:= pnsOn.errorStatus
            OR PmsUp.errorStatus
            OR runProtecrionAi.errorStatus
            OR pnsOff.errorStatus
            OR BreakTest.errorStatus
            OR LowOilPS.errorStatus
            OR LowOilAS.errorStatus
            OR testUnsuccessful.errorStatus;            
            
StrAlg.Top:=   pnsOn.topStatus
            OR PmsUp.topStatus
            OR runProtecrionAi.topStatus
            OR pnsOff.topStatus
            OR BreakTest.topStatus
            OR LowOilPS.topStatus
            OR LowOilAS.topStatus
            OR testUnsuccessful.topStatus;   

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);