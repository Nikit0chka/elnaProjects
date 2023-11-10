FUNCTION_BLOCK fb_AOSourceMlp

VAR_IN_OUT
	OutCurrent : TDoubleData; (*Данные для модуля AO.*)
	strAO : struct_AO; (*Текущие параметры канала AO*)
END_VAR

VAR
	_sunpackerCommand : fb_sunpackerCommand;
	source : BYTE;
	source_for_Status : BYTE;
	cmd : BYTE;
	cmd_for_Status : BYTE;
	lastCmd : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	resetCmdTimerPriznak : BOOL;
	secondTack : BOOL;
	inOpcCommandsDisabled : BOOL;
END_VAR

VAR_INPUT RETAIN
	retainLL : LREAL;
	retainHL : LREAL;
END_VAR





IF NOT secondTack THEN
          IF (strAO.newLL <> retainLL) AND (retainLL <> 0.0) THEN  strAO.LL := retainLL;
          ELSE strAO.LL:= strAO.newLL; END_IF;
	IF (strAO.newHL <> retainHL) AND (retainHL <> 0.0) THEN  strAO.HL := retainHL;
          ELSE strAO.HL:= strAO.newHL; END_IF;
	
	secondTack  := FALSE;
END_IF;
strAO.blConnect :=(UINT_TO_WORD(OutCurrent.wFlags) AND 16#0040) <> 0; 
strAO.OpcCommandsDisabled := inOpcCommandsDisabled;

_sunpackerCommand(command := strAO.inCommand);
	source := _sunpackerCommand.source;
	cmd := _sunpackerCommand.cmd;	

IF cmd <> 0 AND lastCmd <> cmd and (((NOT strAO.opcCommandsDisabled) AND source > 0) OR source = 0) then
	CASE BYTE_TO_INT(cmd) OF
	(*cmd_ChangeValue*) 1 : 	IF ((NOT strAO.newLL_ISVALIDREF) OR (strAO.nValue >= strAO.LL)) AND
                                           ((NOT strAO.newHL_ISVALIDREF) OR (strAO.nValue <= strAO.HL) ) THEN
					strAO.Value := strAO.nValue;
				END_IF;
	(*cmd_ChangeLimits*) 2 : 	strAO.LL := strAO.newLL; retainLL:= strAO.LL;
				strAO.HL := strAO.newHL; retainHL:= strAO.HL;
	END_CASE;
	source_for_Status := source;
	cmd_for_Status := cmd;
	command_error_for_Status := 0;
	resetCmdTimer(IN := FALSE);
	resetCmdTimerPriznak := TRUE;
END_IF;
lastCmd := cmd;

IF (strAO.HL <> strAO.LL) THEN
	OutCurrent.dblValue := ((strAO.Value - strAO.LL) * (strAO.outHL-strAO.outLL)/(strAO.HL - strAO.LL )) + strAO.outLL;
END_IF;

resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
IF resetCmdTimer.Q THEN
	resetCmdTimerPriznak := FALSE;
	source_for_Status := 0;
	cmd_for_Status := 0;
	command_error_for_Status := 0;
END_IF; 

strAO.status := SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(strAO.OpcCommandsDisabled ), 21);
