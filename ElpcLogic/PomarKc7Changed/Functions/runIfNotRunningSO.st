FUNCTION runIfNotRunningSO : BOOL

VAR_IN_OUT
	so : struct_singleOutput;
END_VAR

VAR CONSTANT
	cmdRun : WORD         := 1;
END_VAR


















IF NOT so.Q THEN
                    so.inOpcCommandsDisabled:=TRUE;
		so.inCommand_Alg:=cmdRun;
END_IF;
