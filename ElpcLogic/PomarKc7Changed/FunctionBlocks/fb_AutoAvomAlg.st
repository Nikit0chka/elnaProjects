FUNCTION_BLOCK fb_AutoAvomAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
	im1 : struct_Switch;
	im2 : struct_Switch;
END_VAR

VAR_INPUT
	ai : struct_AI;
END_VAR

VAR_IN_OUT
	on1Temperature : struct_AnalogParametr;
	on2Temperature : struct_AnalogParametr;
	hystereses : struct_AnalogParametr;
END_VAR

VAR
	_sunpackerCommand : fb_sunpackerCommand;
	_statusAi : TYPE_StatusAi;
	_statusDualInput : TYPE_statusDualInput;
	_commandDualInput : TYPE_commandDualInput;
	source : BYTE;
	cmd : BYTE;
	lastCmd : BYTE;
	source_for_Status : BYTE;
	cmd_for_Status : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	resetCmdTimerPriznak : BOOL;
	onInit : BOOL;
END_VAR









(*
IF NOT onInit THEN
StrAlg.inCanRun:=TRUE;
onInit:=TRUE;
END_IF;
*)


IF StrAlg.isRuning THEN

StrAlg.hasError := im1.CommandFault OR im2.CommandFault OR (ai.interval<_statusAi.normal);

    IF (ai.interval>=_statusAi.normal) THEN

          IF (ai.value>= on1Temperature.Value) THEN
              IF im1.onStatus <> _statusDualInput.STATUS_ON THEN    
	       im1.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_ON); (*cmd_on*)
              END_IF;
          END_IF;

          IF  ai.value < (on1Temperature.Value - hystereses.Value) THEN
              IF im1.onStatus <> _statusDualInput.STATUS_OFF THEN    
	       im1.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF); 
              END_IF;
          END_IF;
          
           IF (ai.value>= on2Temperature.Value) THEN
              IF im2.onStatus <> _statusDualInput.STATUS_ON THEN    
	       im2.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_ON); (*cmd_on*)
              END_IF;
          END_IF;

          IF  ai.value < (on2Temperature.Value - hystereses.Value) THEN
              IF im2.onStatus <> _statusDualInput.STATUS_OFF THEN    
	       im2.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF); 
              END_IF;
          END_IF;
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
                                                  StrAlg.inOpcCommandsDisabled:=FALSE;
					im1.inOpcCommandsDisabled:=TRUE;
                                                  im2.inOpcCommandsDisabled:=TRUE;		
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
                                        StrAlg.inOpcCommandsDisabled:=FALSE;
                                        im1.inOpcCommandsDisabled:=FALSE;
                                        im2.inOpcCommandsDisabled:=FALSE;
                                        im1.inCommand_Alg:=0;
                                        im2.inCommand_Alg:=0;
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

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);