FUNCTION_BLOCK fb_ZapasAlg

VAR_INPUT
	Q_actual : struct_AI;
END_VAR

VAR_IN_OUT
	StrAi : struct_AI;
END_VAR

VAR_INPUT
	Q_min : LREAL;
	Q_max : LREAL;
END_VAR

VAR
	_statusAi : TYPE_StatusAi;
END_VAR


IF (Q_actual.interval < _statusAi.normal) THEN
	StrAi.interval := _statusAi.NOTRELIABLE;
          strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21)
		OR BYTE_TO_DWORD(strAI.interval);
	RETURN;
END_IF;


IF (Q_actual.value <10.0) THEN
	StrAi.interval := _statusAi.normal;
	StrAi.value:= 100.0;
          strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21)
		OR BYTE_TO_DWORD(strAI.interval);
	RETURN;
END_IF;

strAI.opcCommandsDisabled := strAI.inopcCommandsDisabled ;
StrAi.interval:= _statusAi.normal;


StrAi.value:= ((Q_actual.value - Q_min)/(Q_max-Q_min))*100.0;

strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21) (* Управление в ВУ заблокировано *)
		OR BYTE_TO_DWORD(strAI.interval);	              (* интервал *)