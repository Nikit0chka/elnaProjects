PROGRAM program0

VAR
	SysTime : LREAL;
	systime_ns : ULINT; (*Unix время до запуска текущего цикла(ns).*)
	systime_s : ULINT; (*Unix время до запуска текущего цикла(s).*)
	preSysTime : LREAL;
	tmpCycle : LREAL;
	preSys_s : ULINT;
	preSys_ns : ULINT;
END_VAR

VAR_EXTERNAL
	cur_Cycle : REAL;
	gStart_Tmr : REAL;
END_VAR

VAR
	Timings : fb_Timings;
	_init : BOOL   := TRUE; (*Инициализация (первый цикл)*)
	life_count : UINT;
	AI_structs_ini : proc_AI_Init;
	AI_Proc : proc_AI;
	AO_structs_ini : proc_AO_Init;
	AO_Proc : proc_AO;
	DI_structs_ini : proc_DI_Init;
	DI_Proc : proc_DI;
	DO_structs_ini : proc_DO_Init;
	DO_Proc : proc_DO;
	Get_algoritms_OPC : OPC_algoritms_set;
	Set_algoritms_OPC : OPC_algoritms_get;
	IM_structs_ini : proc_IM_Init;
	IM_Proc : proc_IM;
	Protections_structs_ini : proc_Protections_Init;
	Protections_Proc : proc_Protection;
	Algoritms_Proc : proc_algoritms;
	AlgoritmsManager : fb_AlgoritmsManager;
	ProtectionsManager : fb_ProtectionsManager;
END_VAR

VAR_EXTERNAL
	algManager : struct_AlgoritmsManager;
	protectManager : struct_ProtectionsManager;
END_VAR





(* Обработка времени. *)
SysTime := ULINT_TO_LREAL(systime_s) + (1.0E-9 * ULINT_TO_LREAL(systime_ns));
preSysTime := SysTime;
tmpCycle := ULINT_TO_LREAL(systime_s - preSys_s) + 1.0E-9 * (ULINT_TO_LREAL(systime_ns) - ULINT_TO_LREAL(preSys_ns));
cur_Cycle := LREAL_TO_REAL(tmpCycle);
preSys_s := systime_s;
preSys_ns := systime_ns;
IF gStart_Tmr < 99999.9 THEN gStart_Tmr := gStart_Tmr + cur_Cycle; END_IF;
Timings();


IF  _init (*or external_init_ai *) then           (* Требуется инициализация структур и ФБ. *)
  (* Инициализация аналоговых входов. *)
    AI_structs_ini(init := TRUE);
    AI_Proc((*init := FALSE*));

  (* Инициализация дискретных входов. *)
    DI_structs_ini(init := TRUE);
    DI_Proc((*init := FALSE*));
    
    (* Инициализация аналоговых выходов. *)
(*     AO_structs_ini(init := TRUE);
       AO_Proc(init := TRUE);*)

  (* Инициализация дискретных выходов. *)
    DO_structs_ini(init := TRUE);
    DO_Proc((*init := FALSE*));
    
   (* Инициализация ИМ. *)
    IM_structs_ini(init := TRUE);
    IM_Proc();
    
   (* Инициализация Защит *)
    Protections_structs_ini(init := TRUE);
    (*Protections_Proc();*)
    
     (* Стартовая инициализация OPC-тэгов элементами канальных структур. *)
        (*___________________AI______________________________________________________________________________*)
    (*ini_AI_OPC();*)
      
    _init := FALSE;

  ELSE                         (* Завершена инициализация структур и ФБ. *)


(* Перенос OPC-тэгов в элементы структур каналов. *)
      (*___________________________________________AI________________________________________________*)
    (*Get_AI_OPC(); *)
     Get_algoritms_OPC();
   
   
   (* Пересчёт защит САУ. *)
   ProtectionsManager(protectManager);

     (* Пересчёт алгоритмов САУ. *)
   AlgoritmsManager(algManager);
   
    (****               Опрос входов.              ****)
        (* Опрос аналоговых входов. *)
    AI_Proc((*init := FALSE*));

        (* Опрос дискретных входов. *)
    DI_Proc((*init := FALSE*));
   
    (****              Запись выходов.             ****)
        (* Запись аналоговых выходов. *)
(*    AO_Proc(init := FALSE);*)

     (* Запись дискретных выходов. *)
    DO_Proc((*init := FALSE*));
    
    (****               Опрос ИМ              ****)
    IM_Proc();
    
    (****            Опрос Защит              ****)
    Protections_Proc();
    
    Algoritms_Proc();
    
END_IF;


(* Передача информации на верхний уровень по OPC UA протоколу. *)
  (* Передача состояний каналов AI. *)
(*Set_AI_OPC();)*
(* Передача состояний каналов ИМ. *)
(* Передача состояний защит. *)
(* Передача состояний алгоритмов. *)
Set_algoritms_OPC();