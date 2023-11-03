FUNCTION_BLOCK proc_Protections_Init

VAR_INPUT
	init : BOOL; (*Флаг необходимости инициализации структур-дескрипторов.*)
END_VAR

VAR
	stDIp_Ini : fb_DiProtection_Init; (*ФБ инициализации DiProtection*)
	stAIp_Ini : fb_AiProtection_Init; (*ФБ инициализации AiProtection*)
	inits : UINT; (*Текущее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_INPUT
	initiales : UINT; (*Общее количество успешно проинициализированных структур-дескрипторов.*)
END_VAR

VAR_EXTERNAL
	protections : ProtectionsConfig;
END_VAR

VAR
	_ProtectionTags : TYPE_ProtectionTags;
	_StatusAi : TYPE_StatusAi;
END_VAR

inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)
     
(*************************************************Стартовая инициализация DiProtection ***************************************************)
(* МВ отключен *)
stDIp_Ini(data_Ini := true, delay:=T#03S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.Reg_vozb_off);
inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

(* МВ отключен 
stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=FALSE, str_DIp := protections.Fail_chastotnii_pusk);
inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);*)

(* МВ отключен *)
stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.Off_avar_vikluchatel);
inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

(* МВ отключен *)
stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.AOKC_SHKC);
inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

(* МВ отключен *)
stDIp_Ini(data_Ini := true, delay:=T#0S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.AO_PRU);
inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

(* МВ отключен *)
stDIp_Ini(data_Ini := true, delay:=T#0S, inTag:=_ProtectionTags.AOS, inRunOnStart:=FALSE, str_DIp := protections.AO_ot_SHU);
inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

(* МВ отключен *)
stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=FALSE, str_DIp := protections.mvOff);
inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

(* МВ отключен *)
stDIp_Ini(data_Ini := true, delay:=T#10S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.Kran1_sdvig);
inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

(* МВ отключен *)
stDIp_Ini(data_Ini := true, delay:=T#10S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.Kran2_sdvig);
inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

(* МВ отключен *)
stDIp_Ini(data_Ini := true, delay:=T#20S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.dPmaslo_gaz_less100);
inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

(*************************************************Стартовая инициализация AiProtection ***************************************************)
(* Температура переднего опорного подшипника двигателя, т.1 *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Topornogo_podshipnika_EDT_1);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура заднего опорного подшипника двигателя, т.2 *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Toporno_ypornogo_podshipnika_EDT_2);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура подшипника редуктора, т1 *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура подшипника редуктора, т2 *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура подшипника редуктора, т3 *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Topornogo_podshipnika_shesterni_reduktora_T_5);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура подшипника редуктора, т4 *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Topornogo_podshipnika_reduktora_HT_6);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура опорного подшипника нагнетателя, т1 *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура опорного подшипника нагнетателя, т2 *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура опорного подшипника нагнетателя, т3 *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Typornogo_podshipnika_rav_kolodok_HT_9);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура упорно опорного подшипника нагнетателя, т4 *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Typornogo_podshipnika_nerab_kolodok_HT_10);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Tgaza_na_vyhode_H);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Os_sdvig_nagnetatelja_plus);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Os_sdvig_nagnetatelja_minus);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Pgaza_na_vyhode_nagnetatelia);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#20S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.dPmaslo_gaz);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#16S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Pmaslo_sm_nizkoe);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

(* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#16S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Pmaslo_sm_vysokoe);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);
 
 (* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OPED_T1);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);
 
 (* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OPED_T2);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);
 
 (* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OYP_kolesa_ED_T3);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

 (* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OP_kolesa_RH_T4);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

 (* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OP_shesterni_RED_T5);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

 (* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OP_shesterni_reduktora_H_T6);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

 (* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OYP_kolesa_ED_T3);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

 (* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OYP_kolesa_ED_T3);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

 (* Температура газа на выходе нагнетателя *)
stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OYP_kolesa_ED_T3);
inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

IF init THEN initiales := inits; END_IF;