FUNCTION_BLOCK proc_DO_Init

VAR_INPUT
	init : BOOL; (*Флаг необходимости инициализации структур-дескрипторов.*)
END_VAR

VAR
	stDO_Ini : fb_DO_Init; (*ФБ инициализации структуры-дескриптора канала DO.*)
	inits : UINT; (*Текущее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_INPUT
	initiales : UINT; (*Общее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_EXTERNAL
	od : DOconfig; (*Выходные дискретные сигналы*)
END_VAR









(* Инициализация начало. Входные дискретные параметры *)

inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)


(* Модуль A1-15 *)
stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_0);
inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

(* Модуль A1-16 *)
stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_1);
inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

(* Модуль A1-17 *)
stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_2);
inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

(* Модуль A1-18 *)
stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_3);
inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

(* Модуль A1-19 *)
stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_4);
inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

(* Модуль A1-23 *)
stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.gpio_out);
inits := inits + BOOL_TO_UINT(stDO_Ini.Init);
initiales := 0;

IF init THEN initiales := inits; END_IF;