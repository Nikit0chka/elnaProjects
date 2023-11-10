FUNCTION_BLOCK proc_AI_Init

VAR_INPUT
	init : BOOL; (*Флаг необходимости инициализации структур-дескрипторов.*)
END_VAR

VAR
	stAI_Ini : fb_AI_Init; (*ФБ инициализации структуры-дескриптора для канала AI.*)
	inits : UINT; (*Текущее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_INPUT
	initiales : UINT; (*Общее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_EXTERNAL
	ai : AiConfig;
END_VAR





inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)

(********************************************* Модуль A2-14 ******************************************************)
(* [A2-14, AI0-0] TStalisStatoraKanal1 *)
stAI_Ini(data_Ini := TRUE, dLL := 0.0, dHL := 150.0,
ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
strAI := ai.Tstali_statora_kanal_1);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A2-14, AI0-1] TStalisStatoraKanal2 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0, 
ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
strAI := ai.Tstali_statora_kanal_2);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A2-14, AI0-2] TStalisStatoraKanal3 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL :=150.0,
ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
strAI := ai.Tstali_statora_kanal_3);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A2-14, AI0-3] TMediStatoraKanal1 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
strAI := ai.Tmedi_statora_kanal_1);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A2-15 ******************************************************)

(* [A2-15, AI1-0] TMediStatoraKanal2 *)
stAI_Ini(data_Ini :=TRUE,  dLL := 0.0, dHL := 150.0,
ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
strAI := ai.Tmedi_statora_kanal_2);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A2-15, AI1-1] TMediStatoraKanal3 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
strAI := ai.Tmedi_statora_kanal_3);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A2-15, AI1-2] TOpornogoPodshipnikaEDT_1 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Toporno_podshipnika_EDT_1);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A2-15, AI1-3]  TOpornoYpornogoPodshipnikaEDT_2 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Toy_podshipnika_EDT_2);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A3-1 ******************************************************)

(* [A3-1, AI2-0]  TOpornoYpornogoPodshipnikaKolesaRedEDT_3 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Toy_podshipnika_kol_EDT_3);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-1, AI2-1] TOpornoYpornogoPodshipnikaKolesaRedHT_4 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Toy_podshipnika_kol_EDT_4);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-1, AI2-2] TOpornogoPodshipnikaShesterniReduktoraT_5 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Toy_podshipnika_shest_red_EDT_5);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-1, AI2-3] TOpornogoPodshipnikaReduktoraHT_6 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Ty_podshipnika_red_EDT_6);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A3-2 ******************************************************)

(* [A3-2, AI3-01]  TOpornoYpornogoPodshipnikaNagnetateljaT_7_1 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Ty_podshipnika_nagnet_EDT_7_1);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-2, AI3-01]  TOpornoYpornogoPodshipnikaNagnetateljaT_7_2 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Ty_podshipnika_nagnet_EDT_7_2);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);


(* [A3-2, AI3-2]  TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Toy_podshipnika_svobod_konca_EDT_8_1);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-2, AI3-2]  TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Toy_podshipnika_svobod_konca_EDT_8_2);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A3-3 ******************************************************)

(* [A3-3, AI4-1]  TYpornogoPodshipnikaRavKolodokHT_9_1 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Toy_podshipnika_rab_kol_EDT_9_1);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-3, AI4-1]  TYpornogoPodshipnikaRavKolodokHT_9_2 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Toy_podshipnika_rab_kol_EDT_9_2);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-3, AI4-3] TYpornogoPodshipnikaNerabKolodokHT_10_1 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Toy_podshipnika_nerab_kol_EDT_10_1);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-3, AI4-3] TYpornogoPodshipnikaNerabKolodokHT_10_2 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Toy_podshipnika_nerab_kol_EDT_10_2);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A3-4 ******************************************************)
(* [A3-4, AI5-0] THolodnogoVozduhaEDKanall *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HW := TRUE, dHW := 60.0, aperturFilter:= 0.5,
strAI := ai.Tholodnogo_vozduha_ED_kanal_1);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-4, AI5-1] THolodnogoVozduhaEDKanal2 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HW := TRUE, dHW := 60.0, aperturFilter:= 0.5,
strAI := ai.Tholodnogo_vozduha_ED_kanal_2);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-4, AI5-2]  TGorjachegoVozduhaEDKanall *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HW := TRUE, dHW := 70.0, aperturFilter:= 0.5,
strAI := ai.Tgorjachego_vozduha_ED_kanal_1);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-4, AI5-3] TGorjachegoVozduhaEDKanal2 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HW := TRUE, dHW := 70.0, aperturFilter:= 0.5,
strAI := ai.Tgorjachego_vozduha_ED_kanal_2);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A3-5 ******************************************************)

(* [A3-5, AI6-0] TNArujnogoVozduha *)
stAI_Ini(data_Ini := TRUE,  dLL := -50.0, dHL := 100.0,
ISVALIDREF_HW := TRUE, dHW := 70.0, aperturFilter:= 0.5,
strAI := ai.Tnarujnogo_vozduha);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-5, AI6-1]  TgazaNaVhodeH *)
stAI_Ini(data_Ini := TRUE,  dLL := -50.0, dHL := 100.0,
ISVALIDREF_HW := TRUE, dHW := 80.0, aperturFilter:= 0.5,
strAI := ai.Tgaza_na_vhode_H);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-5, AI6-2] TgazaNaVyhodeH *)
stAI_Ini(data_Ini := TRUE,  dLL := -50.0, dHL := 100.0,
ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHa :=90.0, dHW := 80.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Tgaza_na_vyhode_H);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);


(********************************************* Модуль A3-6 ******************************************************)
(* [A3-6, AI7-0] TMasladoAVOM *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
ISVALIDREF_HW := TRUE, dHW := 55.0, aperturFilter:= 0.5,
strAI := ai.Tgorjachego_vozduha_ED_kanal_2);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-6, AI7-1] TMaslaPosleAVOM *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
ISVALIDREF_HW := TRUE, dHW := 55.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Tmasla_posle_AVOM);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);
(********************************************* Модуль A3-8 ******************************************************)
(* [A3-8, AI9-0]  TMaslaMB *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
ISVALIDREF_LW := TRUE, dLW := 25.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Tmasla_MB);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-6, AI7-2] TMaslaMB_TEN *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
ISVALIDREF_HW := TRUE, dHW := 50.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
strAI := ai.Tmasla_MB_TEN);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-8, AI9-1]  TEmperatura_v_SHU *)
stAI_Ini(data_Ini := TRUE,  dLL := -40.0, dHL := 100.0, CurrentShotCircuit := 20320.0, CurrentBreakCircuit := 3680.0, 
aperturFilter:= 0.5, strAI := ai.Tshu);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-8, AI9-2]  DavlenijaMasloSmNizkoe *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0,
ISVALIDREF_LW := TRUE, ISVALIDREF_LA := TRUE, dLW := 50.0, dLA := 25.0,  CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,  aperturFilter:= 0.5,
strAI := ai.Pmaslo_sm_nizkoe);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-8, AI9-3]  PerepadDavlenieNaMasloFiltre *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0,
ISVALIDREF_HW := TRUE, dHW := 150.0, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0, aperturFilter:= 0.5, 
strAI := ai.dPgaza_na_maslo_filtre);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A3-9 ******************************************************)
(* [A3-9, AI10-0]  DavlenijaMasloSmVysokoe *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
ISVALIDREF_LW := TRUE, ISVALIDREF_LA := TRUE, dLW := 300.0, dLA := 250.0, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0, aperturFilter:= 0.5, 
strAI := ai.Pmaslo_sm_vysokoe);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-9, AI10-1]  DavlenijaMaslaPosleGNS *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0, aperturFilter:= 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
ISVALIDREF_LW := TRUE, ISVALIDREF_HW := TRUE,
dLW := 187.0, dHW := 242.0,
strAI := ai.Pmasla_posle_GNS);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-9, AI10-2] DavlenijaMaslaPosleNU *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0, aperturFilter:= 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
ISVALIDREF_LW := TRUE, dLW := 3.0,
strAI := ai.Pmasla_posle_NU);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A3-10 ******************************************************)
(* [A3-10, AI11-0] PerepadDavlenieNaKonfuzore *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0,
ISVALIDREF_LW := TRUE, dLW := 15.0, aperturFilter:= 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.dPgaza_na_konfuzore);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-10, AI11-1] OsSdvigNagnetatelja_Plus *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHW := 200.0, dHA := 300.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Os_sdvig_nagnetatelja_plus);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-10, AI11-2] OsSdvigNagnetatelja_Minus *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1600.0,
ISVALIDREF_LW := TRUE, dLW := 150.0, ISVALIDREF_LA := TRUE, dLA := 100.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Os_sdvig_nagnetatelja_minus);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-10, AI11-3] PerepadDavlenieMasloGaz *)
stAI_Ini(data_Ini := TRUE, dLL := 0.0, dHL := 1600.0, 
ISVALIDREF_LW := TRUE, ISVALIDREF_LA := TRUE, dLW := 150.0, dLa := 100.0, aperturFilter:= 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.dPmaslo_gaz);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A3-11 ******************************************************)
(* [A3-11, AI12-0]  DGazaNaVhodeNagnetatelja *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0,
ISVALIDREF_LW := TRUE, dLW := 4.895, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0, (*ISVALIDREF_LA := TRUE, dLA := 4.589,*)
strAI := ai.Pgaza_na_vhode_nagnetatelia);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-11, AI12-1]  DGazaNaVyhodeNagnetatelja *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0,
ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dLA := 7.653, dHW := 7.55, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Pgaza_na_vyhode_nagnetatelia);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-11, AI12-3]  DavlenieImpulsGaz *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0, 
ISVALIDREF_LW := TRUE, dLW := 5.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Pimpuls_gaz);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A3-12 ******************************************************)
(* [A3-12, AI13-0] YrovenMaslaMB *)
stAI_Ini(data_Ini := TRUE,  dLL := 190.0, dHL := 885.0,
ISVALIDREF_LW := TRUE, dLW := 530.0, aperturFilter := 0.5,  CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Yroven_masla_MB);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A3-13 ******************************************************)
(* [A3-13, AI14-0]  Kontrol_per220V *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0,
ISVALIDREF_LW := TRUE, ISVALIDREF_HW := TRUE, dLW := 187.0, dHW := 242.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Kontrol_per_220V);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-13, AI14-1]  Kontrol_post220V *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0,
ISVALIDREF_HW := TRUE, ISVALIDREF_LW := TRUE, dHW := 242.0, dLW := 187.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Kontrol_post_220V);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-13, AI14-2]  VibroSkorostOPED_T1 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Kontrol_post_220V);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-13, AI14-3]  VibroSkorostOYPED_T2 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Vibro_skorost_OPED_T1);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(********************************************* Модуль A3-14 ******************************************************)
(* [A3-14, AI15-0]  VibroSkorostOYPKolesaED_T3 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Vibro_skorost_OYP_kolesa_ED_T3);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-14, AI15-1]  VibroSkorostOPKolesaRH_T4 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Vibro_skorost_OP_kolesa_RH_T4);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-11, AI12-2]  VibroSkorostOPShesterniRED_T5 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Vibro_skorost_OP_shesterni_RED_T5);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-11, AI12-2]  VibroSkorostOPShesterniRED_T5 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Vibro_skorost_OP_shesterni_RED_T6);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

(* [A3-11, AI12-2]  VibroSkorostOPShesterniRED_T5 *)
stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
ISVALIDREF_LW := TRUE, dLW := 300.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
strAI := ai.Tok_statora);
inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

initiales := 0;
IF init THEN initiales := inits; END_IF;