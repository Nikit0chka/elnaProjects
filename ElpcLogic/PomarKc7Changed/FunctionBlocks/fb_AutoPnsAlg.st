FUNCTION_BLOCK fb_AutoPnsAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
	Nasos : struct_Switch;
END_VAR

VAR_INPUT
	diPlow : struct_singleSignal;
	Poil : struct_AI;
	Ust_Run : struct_AnalogParametr;
	Ust_Stop : struct_AnalogParametr;
END_VAR

VAR
	_sunpackerCommand : fb_sunpackerCommand;
	_statusAi : TYPE_StatusAi;
	_statusDualInput : TYPE_statusDualInput;
	_commandDualInput : TYPE_commandDualInput;
	source : BYTE;
	cmd : BYTE;
	lastCmd : BYTE;
	source_for_Status : BYTE;
	cmd_for_Status : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	resetCmdTimerPriznak : BOOL;
	onInit : BOOL;
	onTrig : R_TRIG;
	offTrig : R_TRIG;
	waitOn : TON;
	waitOff : TON;
END_VAR

VAR_EXTERNAL
	AlgTimers : struct_AlgTimers;
END_VAR






IF NOT onInit THEN
StrAlg.inOpcCommandsDisabled:=TRUE;
StrAlg.inCanRun:=TRUE;
onInit:=TRUE;
END_IF;



IF StrAlg.isRuning THEN

StrAlg.hasError := Nasos.CommandFault OR (Poil.interval < _statusAi.normal OR NOT diPlow.reliability);

    IF (Poil.Interval >= _statusAi.normal) THEN
    waitOn(IN:=Poil.Value <= Ust_Run.value OR diPlow.q, PT := T#1S);
    waitOff(IN:= Poil.Value >= Ust_Stop.value, PT := T#300S);

    ELSE 
    waitOn(IN:=diPlow.Q, PT := T#1S);
    END_IF;

onTrig(CLK:=waitOn.Q);
offTrig(CLK:=waitOff.Q);
    IF (Poil.Value>=Ust_Stop.value) AND Nasos.inopcCommandsDisabled THEN
        Nasos.inopcCommandsDisabled:=FALSE;
    END_IF;

    IF onTrig.Q THEN
    Nasos.inopcCommandsDisabled:=TRUE;
    Nasos.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_ON);
    END_IF;


    IF offTrig.Q THEN
        IF NOT (Nasos.onStatus=_statusDualInput.STATUS_OFF) THEN
        Nasos.inopcCommandsDisabled:=TRUE;
        Nasos.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);
        END_IF;
    END_IF;

    
        
AlgTimers.AutoPns_OnTimer:=UDINT_TO_UINT(TIME_TO_UDINT(waitOn.PT - waitOn.ET)/1000);
AlgTimers.AutoPns_OffTimer:=UDINT_TO_UINT(TIME_TO_UDINT(waitOff.PT -waitOff.ET)/1000);  

END_IF;



StrAlg.CanRun := StrAlg.inCanRun;



StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

(* ---- Если управление с ВУ заблокировано, то  передаем команду из алгоритма ---- *)
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
					StrAlg.hasError := FALSE;
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
                                        waitOn(in:=FALSE);
                                        waitOff(in:=FALSE);
                                        AlgTimers.AutoPns_OffTimer:=UDINT_TO_UINT(TIME_TO_UDINT(waitOff.pt -waitOff.ET)/1000);
                                        
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

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);