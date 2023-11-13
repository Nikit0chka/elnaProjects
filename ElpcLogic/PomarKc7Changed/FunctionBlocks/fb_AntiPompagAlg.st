FUNCTION_BLOCK fb_AntiPompagAlg

VAR
	tableQ_min : fb_TableValue_Min;
	tableQ_max : fb_TableValue_Max;
	fb_Rashod : fb_RashodAlg;
	fb_Zapas : fb_ZapasAlg;
END_VAR

VAR_IN_OUT
	Kran6 : struct_Kran;
	StrAlg : struct_Alg;
	Rashod : struct_AI;
	Zapas : struct_AI;
END_VAR

VAR_INPUT
	P_gasIn : struct_AI;
	T_gasIn : struct_AI;
	dP_konf : struct_AI;
	UgolVNA : struct_AnalogParametr;
	K : struct_AnalogParametr;
	A : struct_AnalogParametr;
	y0 : struct_AnalogParametr;
END_VAR

VAR
	Q_max : LREAL;
	Q_min : LREAL;
	pompaj : BOOL;
	_statusAi : TYPE_StatusAi;
	_statusDualInput : TYPE_statusDualInput;
	_sunpackerCommand : fb_sunpackerCommand;
	source : BYTE;
	cmd : BYTE;
	lastCmd : BYTE;
	source_for_Status : BYTE;
	cmd_for_Status : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	resetCmdTimerPriznak : BOOL;
END_VAR


















tableQ_min(parametr:=LREAL_TO_REAL(UgolVNA.Value));

tableQ_max(parametr:=LREAL_TO_REAL(UgolVNA.Value));

Q_min:=REAL_TO_LREAL(tableQ_min.actualValue);

Q_max:=REAL_TO_LREAL(tableQ_max.actualValue);

fb_Rashod(StrAi:=Rashod, P_gasIn:=P_gasIn, T_gasIn:=T_gasIn, dP_konf:=dP_konf, K:=K, A:=A, y0:=y0);

fb_Zapas(StrAi:=Zapas, Q_actual:=Rashod, Q_min:=Q_min, Q_max:=Q_max);




StrAlg.CanRun := StrAlg.inCanRun;



StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

IF StrAlg.isRuning THEN

StrAlg.hasError := (Rashod.interval < _statusAi.normal);

pompaj:= (Rashod.interval>=_statusAi.normal) AND (Rashod.value <= Q_min);

IF pompaj THEN
          Kran6.inOpcCommandsDisabled:=TRUE;
	Kran6.inCommand_Alg := 1;  (*cmd_open*)
END_IF;

StrAlg.isEnded := Kran6.onStatus = _statusDualInput.STATUS_ON ;

END_IF;

(* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
IF StrAlg.inOpcCommandsDisabled THEN
	StrAlg.inCommand := StrAlg.inCommand_Alg;
ELSE (* иначе передаем команду с АРМа*)
	StrAlg.inCommand := StrAlg.inCommand_ARM;
END_IF;

_sunpackerCommand(command := StrAlg.inCommand);
	source := _sunpackerCommand.source;
	cmd := _sunpackerCommand.cmd;
          
IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrAlg.opcCommandsDisabled) AND source > 0) OR source = 0) then	
	CASE BYTE_TO_INT(cmd) OF
		(*cmdRun*) 1: 	IF (StrAlg.CanRun) THEN
					StrAlg.isRuning := TRUE;
					StrAlg.isEnded := FALSE;
					StrAlg.hasError 	:= FALSE;
                                                  
                                                  (*****************       OnRun       *****************)
					
                                                                      		
					cmd_for_Status := cmd;
					source_for_Status := source;
					command_error_for_Status := 0;
				ELSE
					StrAlg.isRuning := FALSE;
					StrAlg.isEnded := FALSE;
					StrAlg.hasError 	:= FALSE;
                                                  
                                                   
					cmd_for_Status := 0;
					source_for_Status := source;
					command_error_for_Status := cmd;
				END_IF;
		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
				StrAlg.isEnded := FALSE;
				StrAlg.hasError 	:= FALSE;
                                        (*****************       OnReset       *****************)
                                                  
                                                  pompaj:= FALSE;
                                                  Kran6.inOpcCommandsDisabled:=FALSE;
				cmd_for_Status := cmd;
				source_for_Status := source;
				command_error_for_Status := 0;
	END_CASE;			
	resetCmdTimer(IN := false);
	resetCmdTimerPriznak := TRUE;
END_IF;
lastCmd := cmd;

resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
IF resetCmdTimer.Q THEN
	resetCmdTimerPriznak := FALSE;
	source_for_Status := 0;
	cmd_for_Status := 0;
	command_error_for_Status := 0;
END_IF; 


StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);