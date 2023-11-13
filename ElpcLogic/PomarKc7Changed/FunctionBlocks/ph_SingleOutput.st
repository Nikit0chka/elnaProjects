FUNCTION_BLOCK ph_SingleOutput

VAR_IN_OUT
	im : struct_singleOutput;
END_VAR

VAR_INPUT
	WhatCanIdo : BOOL;
	PhaseNumber : UINT;
END_VAR

VAR_IN_OUT
	StrPh : struct_PhaseAlgoritm;
END_VAR

VAR
	reset_Trig : R_TRIG;
END_VAR











IF StrPh.run AND NOT StrPh.start THEN
	StrPh.start := TRUE;
	StrPh.top := FALSE;
	StrPh.error := FALSE;
          StrPh.run:=FALSE;
	
	IF (WhatCanIdo) THEN
	runIfNotRunningSO(im);
          ELSE
	resetIfRunningSO(im);
          END_IF;
END_IF;


IF StrPh.start AND NOT StrPh.top THEN
StrPh.top := (im.Q = WhatCanIdo);		
END_IF;

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
