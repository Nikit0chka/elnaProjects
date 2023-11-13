FUNCTION_BLOCK fb_ph_CustomPhase

VAR_INPUT
	PhaseNumber : UINT;
END_VAR

VAR_IN_OUT
	StrPh : struct_PhaseAlgoritm;
END_VAR

VAR
	CommandFault_Trig : R_TRIG;
	reset_Trig : R_TRIG;
	_statusDualInput : TYPE_statusDualInput;
END_VAR



















IF StrPh.run AND NOT StrPh.start THEN
	StrPh.start := TRUE;
	StrPh.top := FALSE;
	StrPh.error := FALSE;
          StrPh.run:=FALSE;
END_IF;


IF StrPh.top THEN StrPh.error := FALSE; END_IF;


reset_Trig(CLK := StrPh.reset);
IF reset_Trig.Q THEN
	StrPh.start := FALSE;
	StrPh.error := FALSE;
	StrPh.top := FALSE;
          StrPh.run:=FALSE;
          StrPh.reset:=FALSE;
END_IF;


StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
