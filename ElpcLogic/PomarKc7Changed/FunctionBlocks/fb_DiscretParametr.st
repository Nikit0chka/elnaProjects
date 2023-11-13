FUNCTION_BLOCK fb_DiscretParametr

VAR_IN_OUT
	StrDP : struct_DiscretParametr;
END_VAR

VAR
	_sunpackerCommand : fb_sunpackerCommand;
	source : BYTE;
	cmd : BYTE;
	parametr : BYTE;
	lastParametr : BYTE;
	source_for_Status : BYTE;
	cmd_for_Status : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	resetCmdTimerPriznak : BOOL;
	secondTact : BOOL;
END_VAR









IF NOT secondTact THEN
	StrDP.Value := StrDP.currentValue;
	secondTact := true;
END_IF;

StrDP.OpcCommandsDisabled := StrDP.inOpcCommandsDisabled;

(* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
IF StrDP.inOpcCommandsDisabled THEN
	StrDP.inCommand := StrDP.inCommand_Alg;
ELSE (* иначе передаем команду с АРМа*)
	StrDP.inCommand := StrDP.inCommand_ARM;
END_IF;                                                                                           
                                                                                                                                                                                    									
_sunpackerCommand(command := StrDP.inCommand);
	source := _sunpackerCommand.source;
          parametr := _sunpackerCommand.parametr;
	cmd := _sunpackerCommand.cmd;

IF NOT StrDP.inOpcCommandsDisabled THEN         
StrDP.newValue:= BYTE_TO_UINT(parametr);
END_IF;
	
IF cmd <> 0 AND StrDP.Value <> StrDP.newValue AND (((NOT StrDP.opcCommandsDisabled) AND source > 0) OR source = 0) then
	CASE BYTE_TO_INT(cmd) OF
	(*cmd_ChangeValue*) 1 : 
                                  StrDP.Value := StrDP.newValue;
                                  StrDP.opcCommandsDisabled:=FALSE;				
	END_CASE;	
	source_for_Status := source;
	cmd_for_Status := cmd;
	resetCmdTimer(IN := FALSE);
	resetCmdTimerPriznak := TRUE;
END_IF;

lastParametr := parametr;

StrDP.status := SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrDP.OpcCommandsDisabled ), 21)
                              OR SHL(UINT_TO_DWORD(StrDP.Value), 5);
                              
                              
resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
IF resetCmdTimer.Q THEN
	resetCmdTimerPriznak := FALSE;
	source_for_Status := 0;
	cmd_for_Status := 0;
	command_error_for_Status := 0;
END_IF; 