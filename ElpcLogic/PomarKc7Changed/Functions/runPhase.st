FUNCTION runPhase : BOOL

VAR_IN_OUT
	ph : struct_PhaseAlgoritm;
END_VAR


















IF NOT ph.start THEN
                    ph.run:=TRUE;                   
END_IF;

