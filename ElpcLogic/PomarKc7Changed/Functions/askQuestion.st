FUNCTION askQuestion : BOOL

VAR_IN_OUT
	StrQ : struct_Question;
END_VAR


IF NOT StrQ.ask THEN
                    StrQ.inOpcCommandsDisabled:=FALSE;
                    StrQ.ask:=TRUE;                   
END_IF;

