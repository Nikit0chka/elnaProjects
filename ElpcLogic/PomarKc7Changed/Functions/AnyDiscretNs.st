FUNCTION AnyDiscretNs : BOOL

VAR_INPUT
	Di : DiConfig;
END_VAR

AnyDiscretNs := 
((Di.Di.reliability <> 255));