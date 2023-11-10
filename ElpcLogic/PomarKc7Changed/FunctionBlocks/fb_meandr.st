FUNCTION_BLOCK fb_meandr

VAR
	_output : BOOL;
END_VAR

VAR_INPUT
	period : TIME   := T#300MS;
END_VAR

VAR
	timer : TON;
	FALSE_val : BOOL   := FALSE;
	TRUE_val : BOOL   := TRUE;
END_VAR

VAR_IN_OUT
	output : BOOL;
END_VAR






timer(in:=NOT FALSE_val,PT:=period);

IF timer.Q THEN
    _output:=_output XOR TRUE_val;
    timer(in:=FALSE);
END_IF;

output:=_output;