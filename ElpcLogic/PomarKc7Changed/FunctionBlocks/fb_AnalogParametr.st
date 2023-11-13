FUNCTION_BLOCK fb_AnalogParametr

VAR_IN_OUT
	StrAP : struct_AnalogParametr;
END_VAR

VAR
	_sunpackerCommand : fb_sunpackerCommand;
	source : BYTE;
	cmd : BYTE;
	source_for_Status : BYTE;
	cmd_for_Status : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	resetCmdTimerPriznak : BOOL;
	secondTact : BOOL;
	inp : LREAL;
	rABS : LREAL;
END_VAR

















IF NOT secondTact THEN
	StrAP.Value := StrAP.currentValue;
	secondTact := true;
END_IF;

StrAP.OpcCommandsDisabled := StrAP.inOpcCommandsDisabled;

 (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
IF StrAP.inOpcCommandsDisabled THEN
	StrAP.inCommand := StrAP.inCommand_Alg;
ELSE (* иначе передаем команду с АРМа*)
	StrAP.inCommand := StrAP.inCommand_ARM;
END_IF;                                                                                         
                                                                                                                                                                                    									
_sunpackerCommand(command := StrAP.inCommand);
	source := _sunpackerCommand.source;
	cmd := _sunpackerCommand.cmd;
	
IF cmd <> 0 AND StrAP.newValue <> StrAP.Value and (((NOT StrAP.opcCommandsDisabled) AND source > 0) OR source = 0) then
	CASE BYTE_TO_INT(cmd) OF
	(*cmd_ChangeValue*) 1 :
				StrAP.isValidValue := TRUE;
				IF StrAP.minVal_ISVALIDREF AND StrAP.isValidValue THEN
					IF StrAP.newValue < StrAP.minVal THEN
						StrAP.isValidValue := FALSE;
					END_IF;
				END_IF;
				IF StrAP.maxVal_ISVALIDREF AND StrAP.isValidValue THEN
					IF StrAP.newValue > StrAP.maxVal THEN
						StrAP.isValidValue := FALSE;
					END_IF;
				END_IF;
				IF StrAP.maxStep_ISVALIDREF AND StrAP.isValidValue  THEN
					inp := StrAP.Value - StrAP.newValue;
					IF inp < 0.0 THEN
						rABS := -inp;
					ELSE
						rABS := inp;
					END_IF;
					IF rABS > StrAP.maxStep THEN
						StrAP.isValidValue := FALSE;
					END_IF;
				END_IF;
				IF StrAP.isValidValue THEN
					StrAP.Value := StrAP.newValue;
					command_error_for_Status := 0;
				ELSE
					command_error_for_Status := cmd;
				END_IF;
	END_CASE;	
	source_for_Status := source;
	cmd_for_Status := cmd;
	resetCmdTimer(IN := FALSE);
	resetCmdTimerPriznak := TRUE;
END_IF;

resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
IF resetCmdTimer.Q THEN
	resetCmdTimerPriznak := FALSE;
	source_for_Status := 0;
	cmd_for_Status := 0;
	command_error_for_Status := 0;
END_IF; 

StrAP.status := SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAP.OpcCommandsDisabled ), 21);

