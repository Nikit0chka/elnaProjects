FUNCTION_BLOCK fb_ph_AIprotection

VAR_IN_OUT
	StrAiP : struct_AiProtection;
END_VAR

VAR_INPUT
	act : TYPE_PhaseAlgoritmAction;
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
	
	CASE act OF
		(*PhaseAlgoritmAction.run*)    _run : runAiProtection(StrAiP); (*cmd_run*)
		(*PhaseAlgoritmAction.reset*)_reset : resetAiProtection(StrAiP); (*cmd_reset*)
	END_CASE;	
END_IF;


IF StrPh.start AND NOT StrPh.top THEN
                    CommandFault_Trig(CLK := StrAiP.hasError);
                    IF CommandFault_Trig.Q THEN
	          StrPh.error := TRUE;
                    END_IF;
                    
		CASE act OF
		(*PhaseAlgoritmAction.run*)    _run:    StrPh.top:=StrAiP.isRunning;			

		(*PhaseAlgoritmAction.reset*) _reset:   StrPh.top := NOT StrAiP.isRunning;
		END_CASE;

END_IF;

IF StrPh.top THEN
StrPh.error := FALSE;
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
