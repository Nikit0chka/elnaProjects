FUNCTION_BLOCK ExtNarabotka

VAR
	saveInterval : TIME := T#30S;
	narabotka : UDINT;
	timer : RTC;
	saveTimer : TON;
END_VAR

VAR_IN_OUT
	retain_narabotka : UDINT;
END_VAR

VAR
	initialized : BOOL;
END_VAR

VAR_INPUT
	started : BOOL;
	reset : BOOL;
END_VAR

IF NOT initialized THEN	
	narabotka:=retain_narabotka;
	initialized:=TRUE;
END_IF;

timer();

IF timer.Q THEN
	narabotka:=DT_TO_UDINT( timer.CDT);

END_IF;
saveTimer(IN:=TRUE, PT:=saveInterval);
IF saveTimer.Q THEN
	retain_narabotka:=narabotka;
	saveTimer(IN:=FALSE);
END_IF;



IF started THEN
	IF NOT timer.Q THEN
		timer.PDT:=UDINT_TO_DT(narabotka);
                    timer.IN:=TRUE;
	END_IF;
ELSE
	IF timer.Q THEN
		timer.IN:=FALSE;
                    saveTimer.IN:=FALSE;
	END_IF;
END_IF;

IF reset THEN
timer.PDT:=UINT_TO_DT(0);
IF timer.IN THEN
	timer(IN:=FALSE);
	timer(IN:=TRUE);
END_IF;
narabotka:=0;
reset:=FALSE;
END_IF;