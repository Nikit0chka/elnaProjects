FUNCTION_BLOCK fb_AutoNUAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
	nu1 : struct_OilPump;
	nu2 : struct_OilPump;
END_VAR

VAR_INPUT
	dPoil : struct_AI;
END_VAR

VAR_IN_OUT
	mainNU : struct_DiscretParametr;
	Lowdp_di : struct_singleSignal;
	Ust_Swap : struct_AnalogParametr;
END_VAR

VAR
	_prevMainNU : UINT;
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
	waitPressure : TON;
	waitPressureTrig : R_TRIG;
	resetCmdTimerPriznak : BOOL;
	onInit : BOOL;
	onStart : BOOL;
END_VAR

VAR_EXTERNAL
	NotHasRezervNU : BOOL;
	Reset_HasNU : BOOL;
END_VAR










IF NOT onInit THEN
StrAlg.inCanRun:=TRUE;
StrAlg.inOpcCommandsDisabled:=TRUE;
(*nu1.Osnovnoy:=TRUE; nu2.Osnovnoy:=FALSE;*)
onInit:=TRUE;
END_IF;

            
IF Reset_HasNU THEN
nu1.inBlocked:=FALSE;
nu2.inBlocked:=FALSE;
END_IF;

NotHasRezervNU:=(nu1.Blocked OR nu2.Blocked); 

IF StrAlg.isRuning THEN

StrAlg.hasError := nu1.CommandFault OR nu2.CommandFault OR (dPoil.interval<_statusAi.normal);

   
    
 IF mainNU.value<>_prevMainNU OR NOT onStart THEN
          
        CASE mainNU.value OF 
	0: nu1.Osnovnoy:=TRUE; nu2.Osnovnoy:=FALSE;
	1: nu1.Osnovnoy:=FALSE; nu2.Osnovnoy:=TRUE;

        END_CASE;    


    IF  nu1.Osnovnoy AND NOT nu1.Blocked THEN
        nu1.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_ON);
    ELSIF NOT NotHasRezervNU THEN
        nu1.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);
    END_IF;  

    IF  nu2.Osnovnoy AND NOT nu2.Blocked THEN
        nu2.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_ON);
     ELSIF NOT NotHasRezervNU THEN
        nu2.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);
    END_IF;
      onStart:=TRUE;
     _prevMainNU:=mainNU.value;                     
 END_IF;
     

        
  (*IF (nu1.onStatus = _statusDualInput.STATUS_On) OR (nu2.onStatus = _statusDualInput.STATUS_On) THEN*)
    (*Если через 5С насос не нагнал 100кПа масла - он сломался и надо переключить насос*)
    IF dPoil.interval>= _statusAi.NORMAL THEN
          waitPressure(IN:=(dPoil.value<Ust_Swap.Value OR LowdP_DI.q) AND NOT NotHasRezervNU, PT:= T#5S);
    ELSE
	waitPressure(IN:=(FALSE));
    END_IF;
    
    waitPressureTrig(CLK:=waitPressure.Q);
    IF waitPressureTrig.Q THEN
	(*IF nu1.onStatus = _statusDualInput.STATUS_ON THEN*)
           IF mainNU.value = 0 THEN
		nu1.inBlocked:=TRUE;
                    nu1.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);
			(*IF 	mainNU.value = 0 THEN*)
                                        setValue(mainNU, 1);
			(*END_IF;*)
	END_IF;
          
	(*IF nu2.onStatus = _statusDualInput.STATUS_ON THEN*)
          IF mainNU.value = 1 THEN
		nu2.inBlocked:=TRUE;
                    nu2.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);	
			(*IF 	mainNU.value = 1 THEN*)
				setValue(mainNU, 0);
			(*END_IF;*)
	END_IF;	
    END_IF;
 (* END_IF;*)       
               

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
					nu1.inOpcCommandsDisabled:=TRUE;
                                                  nu2.inOpcCommandsDisabled:=TRUE;
                                                  
                                                                      		
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
                                        waitPressure(IN:=(FALSE));
                                        onStart:=FALSE;
                                        
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
                              OR SHL(BOOL_TO_DWORD(NotHasRezervNU), 15)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);