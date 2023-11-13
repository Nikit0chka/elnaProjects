FUNCTION_BLOCK fb_RashodAlg

VAR_INPUT
	P_gasIn : struct_AI;
END_VAR

VAR_IN_OUT
	StrAi : struct_AI;
END_VAR

VAR_INPUT
	T_gasIn : struct_AI;
	dP_konf : struct_AI;
	K : struct_AnalogParametr;
	A : struct_AnalogParametr;
	y0 : struct_AnalogParametr;
END_VAR

VAR
	num : LREAL;
	den : LREAL;
	_statusAi : TYPE_StatusAi;
END_VAR

VAR CONSTANT
	P0 : LREAL         := 0.1033;
	T0 : LREAL         := 293.0;
END_VAR

















strAI.opcCommandsDisabled := strAI.inopcCommandsDisabled ;

IF (P_gasIn.interval < _statusAi.normal) OR
   (T_gasIn.interval < _statusAi.normal) OR
   (dP_konf.interval < _statusAi.normal) THEN
	StrAi.interval := _statusAi.NOTRELIABLE;
          strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21) 
	OR BYTE_TO_DWORD(strAI.interval);	             
	RETURN;
END_IF;


IF (P_gasIn.value <0.3) THEN
	StrAi.interval := _statusAi.normal;
	StrAi.value:= 0.0;
          strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21) 
	OR BYTE_TO_DWORD(strAI.interval);	           
	RETURN;
END_IF;


StrAi.interval:= _statusAi.normal;

num:= (dP_konf.Value/1000.0)*(T_gasIn.value+273.0)*P0*735.56*K.Value;
den:= y0.Value*P_gasIn.value*T0 ;

StrAi.value:= A.Value*SQRT(num/den);

strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21) (* Управление в ВУ заблокировано *)
		OR BYTE_TO_DWORD(strAI.interval);	              (* интервал *)