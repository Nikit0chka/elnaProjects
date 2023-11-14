FUNCTION resetQuestion : BOOL

VAR_IN_OUT
	StrQ : struct_Question;
END_VAR

IF StrQ.ask THEN
                    StrQ.inOpcCommandsDisabled:=TRUE;
                    StrQ.reset:=TRUE;                   
END_IF;

