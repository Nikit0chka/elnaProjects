FUNCTION_BLOCK fb_Question

VAR_IN_OUT
	StrQ : struct_Question;
END_VAR

VAR
	Asked : UINT;
	_answers : TYPE_Answers;
	_sunpackerCommand : fb_sunpackerCommand;
	source : BYTE;
	parametr : BYTE;
	lastParametr : BYTE;
	cmd : BYTE;
	source_for_Status : BYTE;
	cmd_for_Status : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	resetCmdTimerPriznak : BOOL;
	reset_Trig : R_TRIG;
END_VAR

VAR CONSTANT
	cmd_answer : UINT          := 1;
END_VAR

StrQ.OpcCommandsDisabled := StrQ.inopcCommandsDisabled;

IF StrQ.ask THEN
StrQ.inopcCommandsDisabled:=FALSE;
    IF Asked=0 THEN
	Asked:=StrQ.AnswerVariants;
	StrQ.answer:=_answers.ANS_NONE;	
    END_IF;




    _sunpackerCommand(command := StrQ.inCommand);
	source := _sunpackerCommand.source;
          parametr := _sunpackerCommand.parametr;
	cmd := _sunpackerCommand.cmd;
	
    IF cmd <> 0 AND lastParametr <> parametr AND ((NOT StrQ.OpcCommandsDisabled) AND source > 0)  then
	CASE BYTE_TO_INT(cmd) OF
	                               1 :
				
				IF Asked<>0 THEN
                                           (* CASE BYTE_TO_INT(parametr) OF
                                            1: answer:=_answers.ANS_YES;
                                            2: answer:=_answers.ANS_NO;
                                            4: answer:=_answers.ANS_CANCEL;
                                            8: answer:=_answers.ANS_RETRY;
	                                  END_CASE;*)
                                        StrQ.answer:=BYTE_TO_UINT(parametr);
                                        command_error_for_Status := 0;	
                                        ELSE
	                              command_error_for_Status := cmd;
                                        END_IF;
	END_CASE;	
	source_for_Status := source;
	cmd_for_Status := cmd;
	resetCmdTimer(IN := FALSE);
	resetCmdTimerPriznak := TRUE;
    END_IF;

    lastParametr := parametr;

    resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
    IF resetCmdTimer.Q THEN
	resetCmdTimerPriznak := FALSE;
	source_for_Status := 0;
	cmd_for_Status := 0;
	command_error_for_Status := 0;
    END_IF; 
END_IF;


reset_Trig(CLK := StrQ.reset);
IF reset_Trig.Q THEN
	Asked:=0;
	StrQ.answer:=0;
          StrQ.ask:=FALSE;
          StrQ.reset:=FALSE;
	StrQ.inopcCommandsDisabled:=TRUE;
END_IF;

StrQ.status := SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrQ.OpcCommandsDisabled ), 21);
IF StrQ.answer = 0 THEN
    StrQ.status := StrQ.status  OR SHL(UINT_TO_DWORD(asked), 6);
ELSE
    StrQ.status := StrQ.status  OR SHL(UINT_TO_DWORD(StrQ.answer), 6);
END_IF; 