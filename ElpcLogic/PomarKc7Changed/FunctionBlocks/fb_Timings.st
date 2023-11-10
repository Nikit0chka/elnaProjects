FUNCTION_BLOCK fb_Timings

VAR_EXTERNAL CONSTANT
	req_Cycle : REAL;
END_VAR

VAR_EXTERNAL
	gF_T_100mSec : BOOL;
	gT_1Sec : BOOL;
	gF_T_1Sec : BOOL;
	gT_1Min : BOOL;
	gR_T_1Min : BOOL;
	gF_T_1Min : BOOL;
	del_T : REAL;
	cur_Cycle : REAL;
END_VAR

VAR
	Tmr_100_ms : REAL; (*Таймер меток времени 100 мс .*)
END_VAR

VAR_EXTERNAL
	T_1SEC : REAL;
END_VAR

VAR
	Tmr_1_s : REAL; (*Таймер меток времени 1 с .*)
	Tmr_1_min : REAL; (*Таймер меток времени 1 мин .*)
END_VAR





(* Обработка времени. *)
Tmr_100_ms := Tmr_100_ms + cur_Cycle;
gF_T_100mSec := FALSE; 
IF Tmr_100_ms >= 0.1 THEN Tmr_100_ms := 0.0; gF_T_100mSec := TRUE; END_IF;

Tmr_1_s := Tmr_1_s + cur_Cycle;
gF_T_1Sec := FALSE; 
IF Tmr_1_s >= 1.0 THEN Tmr_1_s := 0.0; gF_T_1Sec := TRUE; END_IF;

T_1SEC := T_1SEC + cur_Cycle;
gT_1Sec := FALSE;
IF T_1SEC >= 2.0 THEN T_1SEC := 0.0;
  ELSIF T_1SEC >= 1.0 THEN gT_1Sec := TRUE; END_IF;

IF Tmr_1_min > 60.0 THEN
    Tmr_1_min := 0.0; gF_T_1Min := gT_1Min; gT_1Min := NOT gT_1Min; gR_T_1Min := gT_1Min;
  ELSE
    Tmr_1_min := Tmr_1_min + cur_Cycle; gR_T_1Min := FALSE; gF_T_1Min := FALSE;
END_IF;
del_T:= cur_Cycle; 

