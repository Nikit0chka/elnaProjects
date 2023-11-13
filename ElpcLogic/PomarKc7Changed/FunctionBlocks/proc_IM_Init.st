FUNCTION_BLOCK proc_IM_Init

VAR_INPUT
	init : BOOL; (*Флаг необходимости инициализации структур-дескрипторов.*)
END_VAR

VAR
	stKr_Ini : fb_Kran_Init; (*ФБ инициализации кранов*)
	stSw_Ini : fb_Switch_Init; (*ФБ инициализации Switchs*)
	stOp_Ini : fb_OilPump_Init; (*ФБ инициализации НУ*)
	stSSw_Ini : fb_SectionSwitch_Init; (*ФБ инициализации МВ*)
	stAp_Ini : fb_AnalogParametr_Init; (*ФБ инициализации Аналогового параметра*)
	stDp_Ini : fb_DiscretParametr_Init; (*ФБ инициализации Дискретного параметра*)
	stSs_Ini : fb_singleSignal_Init; (*ФБ инициализации singleSignal*)
	stSo_Ini : fb_singleOutput_Init; (*ФБ инициализации singleOutput*)
	inits : UINT; (*Текущее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_INPUT
	initiales : UINT; (*Общее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_EXTERNAL
	IM : ImConfig;
END_VAR









inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)
                                     (* Стартовая инициализация ИМ *)
(* Кран 1 *)
stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true,
      ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true, 
      str_Kr := IM.Kran1);
inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

(* Кран 2 *)
stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true,
      str_Kr := IM.Kran2);
inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

(* Кран 3 *)
stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true,
      str_Kr := IM.Kran3);
inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

(* Кран 3b *)
stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true,
      str_Kr := IM.Kran3b);
inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

(* Кран 4 *)
stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true, 
      str_Kr := IM.Kran4);
inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

(* Кран 5 *)
stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true, continueHoldCommand:=T#5S,
      str_Kr := IM.Kran5);
inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

(* Кран 6 *)
stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true,  
      str_Kr := IM.Kran6);
inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

(* НУ1 Насос уплотнения *)
stOp_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true,
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      str_Op := IM.nu1);
inits := inits + BOOL_TO_UINT(stOp_Ini.Init);

(* НУ2 Насос уплотнения *)
stOp_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true,
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      str_Op := IM.nu2);
inits := inits + BOOL_TO_UINT(stOp_Ini.Init);

(* ПНС Насос смазки *)
stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      str_Sw := IM.pns);
inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

(* В1 АВОМ вентилятор охлаждения *)
stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true,
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true,
      str_Sw := IM.v1_Avom);
inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

(* В2 АВОМ вентилятор охлаждения *)
stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true,
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true,
      str_Sw := IM.v2_Avom);
inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

(* В3 АВОМ вентилятор охлаждения *)
stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true,
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true,
      str_Sw := IM.v3_Avom);
inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

(* В4 АВОМ вентилятор охлаждения *)
stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true,
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true,
      str_Sw := IM.v4_Avom);
inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

(* МВ масляный выключатель *)
stSSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true,
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      ISVALIDREF_basketRolledIn:=true, ISVALIDREF_basketRolledout:=true,
      str_Sw := IM.mv);
inits := inits + BOOL_TO_UINT(stSSw_Ini.Init);

(* В4 АВОМ вентилятор охлаждения *)
stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      str_Sw := IM.KaloriferAVOM);
inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

(* В4 АВОМ вентилятор охлаждения *)
stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true,
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      str_Sw := IM.CMN);
inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

(* В4 АВОМ вентилятор охлаждения *)
stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true,
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      str_Sw := IM.TEN_kollectora);
inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

(* В4 АВОМ вентилятор охлаждения *)
stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true,
      ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
      str_Sw := IM.TEN_MB);
inits := inits + BOOL_TO_UINT(stSw_Ini.Init); 

                                                                      
                                     (* Стартовая инициализация singleSignal *)    
    (* Перепад давления «газ-газ» на кране 1 ≤1 кгс/см² *)
stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.dP_maslo_gaz_Less100);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

 (* Осевой сдвиг ротора вправо ≥3,7 кгс/см² *)
stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.dp_kran1_Less100);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Пробой вентиля *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Vozbud_neispr_tsepey_upr_AVR_pit);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);
                                 
    (* Работа схемы ресинхронизации *)
stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Vozbud_gotovnost);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);
                                
    (* Контроль состояния возбудительного устройства  *)
stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Vozbud_neispravnost);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);
                               
    (* Неисправность форсировки воз-буждения  *)
stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.SHAVR1_v_rabote);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность возбудительного устройства  *)
stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.SHAVR2_v_rabote);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Готовность включения БЭО по отказу контроллера  *)
stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Avariinoe_otkluch_vikluchatelya);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Срабатывание БЭАО  *)
stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Assinhronnii_hod_peregruzka);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Выключатель основного ввода питания QF1  в положении включен   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF1_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Выключатель резервного ввода питания QF2  в положении включен   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF2_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Выключатель питания кранов:  QF23 110 В в положении включен   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF23_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Выключатели группы 1: QF4, QF5 в положении включен   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF4_QF5_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Выключатели группы 2: QF6, QF7 в положении включен   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF6_QF7_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Выключатели группы 3: QF8, QF9 в положении включен   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF8_QF9_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Выключатели группы 4: QF10, QF11 в положении включен   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF10_QF11_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Выключатели группы 5: QF12, QF13 в положении включен   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF12_QF13_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Выключатели группы 6: QF14, QF15 в положении включен   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF14_QF15_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Выключатели группы : QF22 в положении включен   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF22_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания группы 1: G1, G2 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G1_G2);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания группы 2: G3, G4 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G3_G4);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания внутренних ПТС: G15, G16 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G15_G16);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источника питания аналоговых сигналов: G17 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G17);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания группы 3: G5, G6 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G5_G6);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания группы 4: G7, G8 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G7_G8);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания внешних цепей: G18, G19 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G18_G19);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания группы 5: G9, G10, G11, G12 (=110 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G10_G11);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания G13, G14 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G13_G14);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания G13, G14 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Uroven_masla_akkum);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания G13, G14 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.BEAO_srabotal);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания G13, G14 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Chastotny_pusk);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания G13, G14 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neuspesh_chastotny_pusk);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания G13, G14 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Rezhim_ruchnogo_regulirovaniya);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания G13, G14 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.SHU_v_GPA_vkluch);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Неисправность источников питания G13, G14 (=24 В)   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.SHP_v_GPA_vkluch);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.NKU1_GPA_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.NKU2_GPA_on);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.AO_KC_ot_SHKS);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.AO_GPA_ot_SHU);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Razreshenie_zagruzki_dvig);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Osnovnoy_regul_off);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Voltage_sekcii_norm);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Reactorny_pusk);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.NO_GPA_ot_SHU);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.AO_GPA_ot_PRU);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP1);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP2);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP3);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP4);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP5);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP6);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP7_BP8);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP9_BP10);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_cepei_upravlen_mv);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_220BEAO);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_per_220_na_vhode);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_post_220_na_vhode);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP11);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP12);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Dver_SHU_pered_otkrita);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Dver_SHU_zad_otkrita);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.EO_GPA_ot_knopki_SHU);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.EO_EGPA_ot_PRY);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Synchroniz_rezhima_K1);   
inits := inits + BOOL_TO_UINT(stSs_Ini.Init);


                                     (* Стартовая инициализация singleOutput *)
(* Идикация НО (подсветка кнопки на шкафу)   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Rabota_EGPA);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Взвод включения БЭАО по неисправности ПТС   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, wait_time:=T#0S, str_SO := IM.SingleOutputs.Neispr_EGPA);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Авария ЭГПА в КЦ   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Avary_EGPA);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Авария ЭГПА в КЦ   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.U_lamp_SHU);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Индикация ПС Фонарь   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.AO_knopka_ind);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Индикация АС Фонарь   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Pusk_SHUP);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Stop_SHUP);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.NO_fonar);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.PC_fonar);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.AC_fonar);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Kr1_smazka);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Kr2_smazka);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Kr4_open_from_alg);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

(* Отключение МВ1 от КНА   *)
stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Synch_rej_K1);   
inits := inits + BOOL_TO_UINT(stSo_Ini.Init);
initiales := 0;

IF init THEN initiales := inits; END_IF;