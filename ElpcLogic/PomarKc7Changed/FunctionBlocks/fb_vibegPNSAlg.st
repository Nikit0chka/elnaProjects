FUNCTION_BLOCK fb_vibegPNSAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	autoPnsOff : struct_PhaseAlgoritm;
	waitVibeg : struct_PhaseAlgoritm;
	pnsOff : struct_PhaseAlgoritm;
	vibegEnd : struct_PhaseAlgoritm;
END_VAR

VAR_IN_OUT
	algContinue : struct_Question;
END_VAR

VAR
	fb_autoPnsOff : fb_ph_algoritm;
	fb_waitVibeg : fb_ph_Timer;
	fb_algContinue : fb_Question;
	fb_pnsOff : fb_ph_Switch;
	fb_vibegEnd : fb_ph_CustomPhase;
	_sunpackerCommand : fb_sunpackerCommand;
	_statusAi : TYPE_StatusAi;
	_Answers : TYPE_Answers;
	_statusDualInput : TYPE_statusDualInput;
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
	algoritms : AlgoritmsConfig;
	ai : AiConfig;
	protections : ProtectionsConfig;
	AlgTimers : struct_AlgTimers;
END_VAR










IF NOT onInit THEN
 fb_autoPnsOff(phaseNumber:=0, act:=_reset, waitCompletion:=FALSE);
  fb_waitVibeg(phaseNumber:=1, delay:=T#300S);
     algContinue.AnswerVariants:=_Answers.ANS_YES;
     fb_pnsOff(phaseNumber:=2, act:=_off);
   fb_vibegEnd(phaseNumber:=14);
onInit:=TRUE;
END_IF;

 fb_autoPnsOff(StrPh:=autoPnsOff, alg:=algoritms.autoPns);
  fb_waitVibeg(StrPh:=waitVibeg, timer:=AlgTimers.vibegPNS_Timer);
fb_algContinue(StrQ:=algContinue);
     fb_pnsOff(StrPh:=pnsOff, Im:=IM.pns);
   fb_vibegEnd(StrPh:=vibegEnd);


IF StrAlg.isRuning THEN


StrAlg.hasError := autoPnsOff.error OR pnsOff.error;

    IF IM.pns.onStatus = _statusDualInput.STATUS_ON AND NOT vibegEnd.top THEN

	runPhase(vibegEnd);
          runPhase(waitVibeg);
          askQuestion(algContinue);

    END_IF;


    IF waitVibeg.top OR (algContinue.answer = _Answers.ANS_YES) THEN
	vibegEnd.top:=TRUE;
	resetPhase(waitVibeg);
          resetQuestion(algContinue);
          
          resetAiProtection(protections.Os_sdvig_nagnetatelja_minus);
          (*resetDiProtection(protections.Vibro_skorost_OP_shesterni_RED_T6);*)
          
	(*IM.SingleSignals.P_oil_low.Disabled_Sig:=TRUE;*)
	ai.Pmasla_posle_GNS.Disabled_LA:=TRUE;
          ai.Pmasla_posle_GNS.Disabled_LW:=TRUE;
          ai.Pmasla_posle_NU.Disabled_LW:=TRUE;
	runPhase(pnsOff);
    END_IF;

    StrAlg.isEnded:=pnsOff.top; 

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
                                                  runPhase(autoPnsOff);         
                                                                      	
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
                                       resetPhase(autoPnsOff);
                                       resetPhase(waitVibeg);
                                       resetPhase(vibegEnd);
                                       resetPhase(pnsOff);
                                       resetQuestion(algContinue);
                                           
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

StrAlg.Start:= autoPnsOff.startStatus
            OR waitVibeg.startStatus
            OR pnsOff.startStatus
            OR vibegEnd.startStatus;
            
StrAlg.Error:= autoPnsOff.errorStatus
            OR waitVibeg.errorStatus
            OR pnsOff.errorStatus
            OR vibegEnd.errorStatus;
            
StrAlg.Top:=   autoPnsOff.topStatus
            OR waitVibeg.topStatus
            OR pnsOff.topStatus
            OR vibegEnd.topStatus;                                   

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);