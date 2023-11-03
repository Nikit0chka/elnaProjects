FUNCTION_BLOCK proc_AO

VAR
	fb_Reserv_AO_1 : fb_AOSourceMlp; (*[A1-14:1, AI0] Резерв*)
	fb_Reserv_AO_2 : fb_AOSourceMlp; (*[A1-14:2, AI1] Резерв*)
END_VAR

VAR_EXTERNAL
	ao : AOConfig;
	arAOUT_0 : TDoubleData;
	arAOUT_1 : TDoubleData;
END_VAR

(* Циклический опрос. Входные аналоговые параметры *)



(* Модуль A10 *)

(* [A10-1, AO0] Резерв (A10) *)
fb_Reserv_AO_1(OutCurrent := arAOUT_0, strAO := ao.Reserv_AO_1);

(* [A10-1, AO1] Резерв (A10) *)
fb_Reserv_AO_2(OutCurrent := arAOUT_1, strAO := ao.Reserv_AO_2);




