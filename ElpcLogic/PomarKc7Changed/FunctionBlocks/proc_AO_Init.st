FUNCTION_BLOCK proc_AO_Init

VAR_INPUT
	init : BOOL; (*Флаг необходимости инициализации структур-дескрипторов.*)
END_VAR

VAR
	stAO_Ini : fb_AO_Init; (*ФБ инициализации структуры-дескриптора для канала AI.*)
	inits : UINT; (*Текущее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_INPUT
	initiales : UINT; (*Общее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_EXTERNAL
	ao : AOConfig;
END_VAR

(* Инициализация начало. Входные аналоговые параметры *)

inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)


(* Модуль A10 *)
(* [A10, AO0] Резерв (A) *)
stAO_Ini(data_Ini := TRUE, (*outLL := 4000.0, outHL := 20000.0,*)
  newLL_ISVALIDREF := TRUE, newHL_ISVALIDREF := TRUE,  
  newLL := 0.0, newHL := 100.0,
  strAO := ao.Reserv_AO_1);
inits := inits + BOOL_TO_UINT(stAO_Ini.Init);

(* [A1-10, AO1] Резерв (A) *)
stAO_Ini(data_Ini := TRUE, (*outLL := 4000.0, outHL := 20000.0,*)
  (*newLL_ISVALIDREF := TRUE, newHL_ISVALIDREF := TRUE,*)  
  (*newLL := 0.0, newHL := 100.0,*)
strAO := ao.Reserv_AO_2);
inits := inits + BOOL_TO_UINT(stAO_Ini.Init);



initiales := 0;
IF init THEN initiales := inits; END_IF;