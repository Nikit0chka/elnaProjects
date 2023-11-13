FUNCTION_BLOCK fb_BaseProtection

VAR_INPUT
	inSignaling : BOOL;
	inTag : BYTE;
	inRunOnStart : BOOL;
	inCanRun : BOOL;
	inHasError : BOOL;
	inEnded : BOOL;
	inOpcCommandsDisabled : BOOL;
	inCommand : WORD;
END_VAR

VAR_OUTPUT
	Tag : BYTE;
	status : DWORD;
	CanRun : BOOL;
	OpcCommandsDisabled : BOOL;
	isRunning : BOOL;
	HasError : BOOL;
	isEnded : BOOL;
	Remont : BOOL;
	Check : BOOL;
	Signaling : BOOL;
	SignalingTP : BOOL;
	RunOnStart : BOOL;
END_VAR

VAR
	_sunpackerCommand : fb_sunpackerCommand;
	_ProtectionTags : TYPE_ProtectionTags;
	_signalingTp : TOF;
	source : BYTE;
	cmd : BYTE;
	lastCmd : BYTE;
	source_for_Status : BYTE;
	cmd_for_Status : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	resetCmdTimerPriznak : BOOL;
	signalinTimer : TON;
	runOnStart_Trig : R_TRIG;
END_VAR

















Tag := inTag;
RunOnStart := inRunOnStart;

CanRun := inCanRun;
hasError := inHasError;
isEnded := inEnded;

OpcCommandsDisabled := inOpcCommandsDisabled;

_sunpackerCommand(command := inCommand);
	source := _sunpackerCommand.source;
	cmd := _sunpackerCommand.cmd;

IF cmd <> 0 AND lastCmd <> cmd AND (((NOT opcCommandsDisabled) AND source > 0) OR source = 0) then	
	CASE BYTE_TO_INT(cmd) OF
		(*cmdRun*) 1: 	IF CanRun AND NOT Remont THEN
					isEnded := FALSE;
					hasError 	:= FALSE;
					isRunning := TRUE;
					cmd_for_Status := cmd;
					source_for_Status := source;
					command_error_for_Status := 0;
				ELSE
					isRunning := FALSE;
					isEnded := FALSE;
					hasError 	:= FALSE;

					cmd_for_Status := 0;
					source_for_Status := source;
					command_error_for_Status := cmd;
				END_IF;
		(*cmdReset*) 2: 	isRunning := FALSE;
				isEnded := FALSE;
				hasError 	:= FALSE;
				inSignaling := FALSE;
				Check := FALSE;
				cmd_for_Status := cmd;
				source_for_Status := source;
				command_error_for_Status := 0;	
	(*cmd_setRemont*) 4 :	Remont := TRUE;
				isRunning := FALSE;
	
				cmd_for_Status := cmd;
				source_for_Status := source;
				command_error_for_Status := 0;
	(*cmd_resetRemont*) 5 : 	IF inSignaling THEN
					cmd_for_Status := 0;
					source_for_Status := 0;
					command_error_for_Status := cmd;
				ELSE
					Remont := FALSE;
					isRunning := TRUE;
	
					cmd_for_Status := cmd;
					source_for_Status := source;
					command_error_for_Status := 0;
				END_IF;
	(*cmd_setCheck*) 6 : 	Check := TRUE;
	
				cmd_for_Status := cmd;
				source_for_Status := source;
				command_error_for_Status := 0;
	END_CASE;			
	resetCmdTimer(IN := false);
	resetCmdTimerPriznak := TRUE;
END_IF;
lastCmd := cmd;


resetCmdTimer(IN := resetCmdTimerPriznak);
IF resetCmdTimer.Q THEN
	resetCmdTimerPriznak := FALSE;
	source_for_Status := 0;
	cmd_for_Status := 0;
	command_error_for_Status := 0;
END_IF; 

IF isRunning THEN
	Signaling := inSignaling;
	SignalingTP := _signalingTp.Q;
ELSE
	Signaling := 0;
	SignalingTP := 0;
END_IF;

IF NOT Remont AND NOT Check THEN
	_signalingTp(in := Signaling, PT := T#1s);
ELSE
	_signalingTp(in := FALSE);
END_IF;


status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(Signaling), 16)
			OR SHL(BOOL_TO_DWORD(RunOnStart ), 15)
			OR SHL(BOOL_TO_DWORD(remont), 6)
			OR SHL(BOOL_TO_DWORD(Check), 5)
			OR SHL(BOOL_TO_DWORD(hasError), 4)
			OR SHL(BOOL_TO_DWORD(SignalingTP), 3)
			OR SHL(BOOL_TO_DWORD(CanRun), 2)
			OR SHL(BOOL_TO_DWORD(isEnded), 1)
			OR BOOL_TO_DWORD(isRunning);


