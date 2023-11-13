FUNCTION_BLOCK fb_ph_OilPump

VAR_IN_OUT
	im : struct_OilPump;
END_VAR

VAR_INPUT
	act : TYPE_DualStateImAction;
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
	
	CASE act OF
		(*DualStateImAction.on*)   _on :im.inOpcCommandsDisabled:=TRUE;  
                                                    im.inCommand_Alg := 1; (*cmd_open*)
		(*DualStateImAction.off*) _off :im.inOpcCommandsDisabled:=TRUE;  
                                                    im.inCommand_Alg := 2; (*cmd_close*)
	END_CASE;	
END_IF;

IF StrPh.start OR StrPh.reset THEN
    StrPh.run:=FALSE;
END_IF;

IF StrPh.start AND NOT StrPh.top THEN
                    CommandFault_Trig(CLK := im.CommandFault);
                    IF CommandFault_Trig.Q THEN
	          StrPh.error := TRUE;
                    END_IF;
                    
		CASE act OF
		(*_DualStateImAction.on*)    _on: StrPh.top := im.onStatus = _statusDualInput.STATUS_ON;
		(*_DualStateImAction.off*)  _off: StrPh.top := im.onStatus = _statusDualInput.STATUS_OFF;
		END_CASE;

END_IF;

reset_Trig(CLK := StrPh.reset);
IF reset_Trig.Q THEN
	StrPh.start := FALSE;
	StrPh.error := FALSE;
	StrPh.top := FALSE;
          StrPh.reset:=FALSE;
END_IF;


StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
