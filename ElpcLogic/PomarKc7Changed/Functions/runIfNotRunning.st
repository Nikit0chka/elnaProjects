FUNCTION runIfNotRunning : BOOL

VAR_IN_OUT
	alg : struct_Alg;
END_VAR

VAR CONSTANT
	cmdRun : WORD         := 1;
END_VAR


















IF NOT alg.isRuning THEN
                    alg.inOpcCommandsDisabled:=TRUE;
                    alg.inCanRun:=TRUE;
		alg.inCommand_Alg:=cmdRun;
END_IF;
