FUNCTION resetAndDisable : BOOL

VAR_IN_OUT
	alg : struct_Alg;
END_VAR

VAR CONSTANT
	cmdReset : WORD          := 2;
END_VAR

IF alg.isRuning THEN
                    alg.inOpcCommandsDisabled:=TRUE;
		alg.inCommand_Alg:=cmdReset;                   
END_IF;

 alg.inCanRun:=FALSE;
