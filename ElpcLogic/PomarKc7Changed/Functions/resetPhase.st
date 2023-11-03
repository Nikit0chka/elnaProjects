FUNCTION resetPhase : BOOL

VAR_IN_OUT
	ph : struct_PhaseAlgoritm;
END_VAR


IF ph.start OR ph.top THEN
                    ph.reset:=TRUE;                 
END_IF;

