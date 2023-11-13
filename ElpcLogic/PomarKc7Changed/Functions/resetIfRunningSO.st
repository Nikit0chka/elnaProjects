FUNCTION resetIfRunningSO : BOOL

VAR_IN_OUT
	so : struct_singleOutput;
END_VAR

VAR CONSTANT
	cmdReset : WORD         := 2;
END_VAR


















IF so.Q THEN
                    so.inOpcCommandsDisabled:=TRUE;
		so.inCommand_Alg:=cmdReset;
END_IF;
