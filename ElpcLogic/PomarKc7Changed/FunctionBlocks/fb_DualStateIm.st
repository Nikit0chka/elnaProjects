FUNCTION_BLOCK fb_DualStateIm

VAR_INPUT
	statOn : BOOL;
	statOff : BOOL;
END_VAR

VAR_IN_OUT
	StrDs : struct_DualStateIm;
END_VAR

VAR_INPUT
	statOn_reliability : BOOL;
	statOff_reliability : BOOL;
	inNs : TYPE_ReliableBit;
	inAccident : TYPE_ReliableBit;
	inCommand : WORD;
END_VAR

VAR
	_statOn : BOOL;
	_statOff : BOOL;
	getSdvig : BOOL;
	lastOnStatus : BYTE;
	cmd : BYTE;
	source : BYTE;
	lastCmd : BYTE;
	source_for_Status : BYTE;
	cmd_for_Status : BYTE;
	command_error_for_Status : BYTE;
	_sunpackerCommand : fb_sunpackerCommand;
	_statusDualInput : TYPE_statusDualInput;
	_commandDualInput : TYPE_commandDualInput;
	_commandErrorTimer : BOOL;
	onInit : BOOL     := FALSE;
	resetErrorTimer : BOOL;
	_changWithoutCommand : BOOL;
	errorCMDTimer : TON;
	sdvigReset : TON;
	_errorReset : TON;
END_VAR

VAR_IN_OUT
	cmdOn : BOOL;
END_VAR

VAR_OUTPUT
	cmdOff : BOOL;
END_VAR









IF NOT onInit THEN
IF StrDs.ISVALIDREF_cmdOn XOR StrDs.ISVALIDREF_cmdOff THEN
	IF 	StrDs.ISVALIDREF_cmdOn THEN
		lastCmd:= 2; (*baseCmdOff*) 
	ELSE
		lastCmd:= 1; (*baseCmdOn*) 
	END_IF;
END_IF;
onInit:=TRUE;
END_IF;

(* ---- Если управление с ВУ заблокировано, то в ИМ передаем команду из алгоритма ---- *)
IF StrDs.inOpcCommandsDisabled THEN
	StrDs.inCommand := StrDs.inCommand_Alg;
ELSE (* иначе передаем команду с АРМа*)
	StrDs.inCommand := StrDs.inCommand_ARM;
END_IF;

(* ---- Формирование состояния механизма ---- *)

IF (StrDs.ISVALIDREF_statOn) OR (StrDs.ISVALIDREF_statOff) THEN
	IF (StrDs.ISVALIDREF_statOn) AND (StrDs.ISVALIDREF_statOff) THEN
	StrDs.reliability:= statOn_reliability AND statOff_reliability;
		_statOn  := statOn;
		_statOff := statOff;
	ELSIF (StrDs.ISVALIDREF_statOn) THEN
                     StrDs.reliability:= statOn_reliability;	
		_statOn  := statOn;
		_statOff := NOT statOn; 
	ELSIF (StrDs.ISVALIDREF_statOff) THEN
		 StrDs.reliability:= statOff_reliability;	
		_statOn  := NOT statOff;
		_statOff :=statOff; 
	END_IF;

	IF StrDs.reliability THEN
		IF _statOn AND NOT _statOff 		THEN 	StrDs.onStatus := _statusDualInput.STATUS_ON;
		ELSIF _statOff AND NOT _statOn 	THEN 	StrDs.onStatus := _statusDualInput.Status_OFF;
		ELSIF NOT _statOn AND NOT _statOff 	THEN 	StrDs.onStatus := _statusDualInput.STATUS_TRANSITIONAL;
		ELSE					StrDs.onStatus := _statusDualInput.STATUS_ERROR;
                    END_IF;
		
	ELSE
		StrDs.onStatus := _statusDualInput.STATUS_NOTDEFINED;
		
	END_IF;
ELSE
	CASE BYTE_TO_INT(lastCmd) OF	
		(*baseCmdOn*) 1: StrDs.onStatus  := _statusDualInput.STATUS_ON; 
		(*baseCmdOff*) 2: StrDs.onStatus  := _statusDualInput.STATUS_OFF;
		
	ELSE
		 StrDs.onStatus := _statusDualInput.STATUS_NOTDEFINED;
		
	END_CASE;
END_IF;

(* ---- Формирование признака сдвига ---- *)	
getSdvig := FALSE;
IF (StrDs.ISVALIDREF_cmdOn OR StrDs.ISVALIDREF_cmdOff) THEN
	IF NOT (StrDs.CmdOn OR StrDs.CmdOff) THEN
                     IF (lastOnStatus <> StrDs.onStatus AND 
		(StrDs.onStatus <> _statusDualInput.STATUS_NOTDEFINED AND
                     StrDs.onStatus <> _statusDualInput.STATUS_ERROR)     AND
		(lastOnStatus <> _statusDualInput.STATUS_NOTDEFINED   AND
                     lastOnStatus <> _statusDualInput.STATUS_ERROR))      
                    THEN
			getSdvig   := TRUE;
		END_IF;
	END_IF;
END_IF;

IF getSdvig THEN StrDs.sdvig:= TRUE; END_IF;

sdvigReset(IN:=StrDs.sdvig, PT:=T#15S);

IF sdvigReset.Q THEN StrDs.sdvig:=FALSE; END_IF;

lastOnStatus := StrDs.onStatus;


StrDs.Accident := inAccident.value AND inAccident.reliability;
StrDs.Ns := inNs.value AND inNs.reliability;
StrDs.OpcCommandsDisabled := StrDs.inOpcCommandsDisabled;



(* ---- Распаковка команды ---- *)
_sunpackerCommand(command := StrDs.inCommand);
	cmd := _sunpackerCommand.cmd;
	source := _sunpackerCommand.source;

(* ---- Обработка команды ---- *)
IF cmd <> 0 AND lastCmd <> cmd and (((NOT StrDs.opcCommandsDisabled) AND source > 0) OR source = 0) then
	CASE BYTE_TO_INT(cmd) OF
	(*cmd_open*) 1 : 
			IF  StrDs.ISVALIDREF_cmdOn THEN StrDs.CmdOn := TRUE;
				IF StrDs.ISVALIDREF_cmdOff THEN StrDs.CmdOff := FALSE; END_IF;
			ELSIF  StrDs.ISVALIDREF_cmdOff THEN StrDs.CmdOff := FALSE;  END_IF;
			errorCMDTimer(IN := false);
			_commandErrorTimer := true;
			StrDs.lastCmdIsOn := true;
	(*cmd_close*) 2 : 
			IF StrDs.ISVALIDREF_cmdOff THEN StrDs.CmdOff := TRUE;
				IF StrDs.ISVALIDREF_cmdOn THEN StrDs.CmdOn := FALSE; END_IF;
			ELSIF StrDs.ISVALIDREF_cmdOn THEN StrDs.CmdOn := FALSE; END_IF;
			errorCMDTimer(IN := false);
			_commandErrorTimer := true;
			StrDs.lastCmdIsOn := false;
	(*cmd_reset*) 3 :    IF StrDs.ISVALIDREF_statOn OR StrDs.ISVALIDREF_statOff THEN
			StrDs.CmdOn := FALSE;
			StrDs.CmdOff := FALSE;
                              lastCmd :=0;
			_commandErrorTimer := false;
			StrDs.lastCmdIsOn := false;
                              END_IF;
	END_CASE;	
	source_for_Status := source;
	cmd_for_Status := cmd;
	command_error_for_Status := 0;
END_IF;

lastCmd := cmd;
errorCMDTimer(In := _commandErrorTimer, PT :=T#10s);

(* ---- алгоритм  для команды ВКЛючить ---- *)
IF (StrDs.onStatus = _statusDualInput.STATUS_ON) and (lastCmd = _commandDualInput.CMD_ON) then
	IF StrDs.ISVALIDREF_cmdOn AND StrDs.ISVALIDREF_cmdOff then  StrDs.cmdOn := false; END_IF;
	 
	 errorCMDTimer(In := false); 
	 _commandErrorTimer := false;
	 cmd_for_Status := 0;
	 source_for_Status := 0;
END_IF;

(* ---- off ---- *)
IF (StrDs.onStatus = _statusDualInput.STATUS_OFF) and (lastCmd = _commandDualInput.CMD_OFF) then
	IF StrDs.ISVALIDREF_cmdOn AND StrDs.ISVALIDREF_cmdOff then  StrDs.cmdOff := false; END_IF;
	 
	 errorCMDTimer(In := false); 
	 _commandErrorTimer := false;
	 cmd_for_Status := 0;
	 source_for_Status := 0;
END_IF;

(* ---- ошибка исполнения команды ---- *)
if errorCMDTimer.Q and (cmd_for_Status <> 0) then
	command_error_for_Status :=  cmd_for_Status;
	_commandErrorTimer := false;
	StrDs.CmdOn := false;
	StrDs.CmdOff := false;
	lastCmd := 0;
end_if;

(* ---- сброс ошибки команды ---- *)
StrDs.CommandFault := command_error_for_Status <> 0;
_errorReset(IN := command_error_for_Status <> 0, PT := T#15S);
IF _errorReset.Q THEN
	cmd_for_Status := 0;
	source_for_Status := 0;
	command_error_for_Status := 0;
END_IF;

cmdOn := StrDs.cmdOn;
cmdOff:= StrDs.cmdOff; 

(* ---- формирование зашифрованного статуса для АРМа ---- *)
StrDs.status := shl(BYTE_TO_DWORD(source_for_Status), 29) 
		OR shl(BYTE_TO_DWORD(cmd_for_Status), 26) 
		OR shl(BYTE_TO_DWORD(command_error_for_Status), 23)
		OR shl(bool_to_DWORD(StrDs.sdvig), 22)
		OR shl(bool_to_DWORD(StrDs.OpcCommandsDisabled), 21)
		OR shl(BOOL_TO_DWORD(StrDs.Ns), 4) 
                	OR shl(BOOL_TO_DWORD(StrDs.Accident ),3)
		OR BYTE_TO_DWORD(StrDs.onStatus);
 
