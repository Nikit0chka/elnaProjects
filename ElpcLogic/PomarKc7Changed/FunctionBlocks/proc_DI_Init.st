FUNCTION_BLOCK proc_DI_Init

VAR_INPUT
	init : BOOL; (*Флаг необходимости инициализации структур-дескрипторов.*)
END_VAR

VAR
	stDI_Ini : fb_DI_Init; (*ФБ инициализации структуры-дескриптора канала DI.*)
	inits : UINT; (*Текущее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_INPUT
	initiales : UINT; (*Общее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_EXTERNAL
	di : DiConfig; (*Входные дискретные сигналы*)
END_VAR









(* Инициализация начало. Входные дискретные параметры *)

inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)


(* Модуль A1-1 *)

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_0);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_1);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

(* Модуль A1-2 *)
stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_2);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_3);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

(* Модуль A1-3 *)
stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_4);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_5);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

(* Модуль A1-4 *)
stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_6);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_7);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

(* Модуль A1-5 *)
stDI_Ini(data_Ini := true, imit:=FALSE,  strDI := di.di_8);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE,  strDI := di.di_9);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

(* Модуль A1-6 *)
stDI_Ini(data_Ini := true, imit:=FALSE,  strDI := di.di_10);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE,  strDI := di.di_11);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

(* Модуль A1-7 *)
stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_12);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_13);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

(* Модуль A1-8 *)
stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_14);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_16);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_17);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_18);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_19);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_20);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_21);
inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

initiales := 0;
IF init THEN initiales := inits; END_IF;