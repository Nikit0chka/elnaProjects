FUNCTION setValue : BOOL

VAR_IN_OUT
	StrDP : struct_DiscretParametr;
END_VAR

VAR_INPUT
	newValue : UINT;
END_VAR

VAR
	cmd_ChangeValue : WORD := 1;
END_VAR

StrDP.newValue:=newValue;
StrDP.inOpcCommandsDisabled:=TRUE;
StrDP.inCommand_Alg:=cmd_ChangeValue;