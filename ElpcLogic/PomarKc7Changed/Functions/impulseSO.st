FUNCTION impulseSO : BOOL

VAR_IN_OUT
	so : struct_singleOutput;
END_VAR

VAR CONSTANT
	cmdImpulse : WORD         := 3;
END_VAR

















IF NOT so.Q THEN
    so.inOpcCommandsDisabled:=TRUE;
    so.inCommand_Alg:=cmdImpulse;
END_IF;
