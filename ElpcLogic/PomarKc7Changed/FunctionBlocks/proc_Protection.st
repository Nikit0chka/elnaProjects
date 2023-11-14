FUNCTION_BLOCK proc_Protection

VAR
	fb_mvOff : fb_MvProtection;
	fb_dPmaslo_gaz_Less100 : fb_DiProtection; (*[A1-14:1, AI0] Резерв*)
	fb_Reg_vozb_off : fb_DiProtection; (*[A1-14:2, AI1] Резерв*)
	fb_Fail_chastotnii_pusk : fb_DiProtection;
	fb_Off_avar_vikluchatel : fb_DiProtection;
	fb_AOKC_SHKC : fb_DiProtection;
	fb_AO_PRU : fb_DiProtection;
	fb_AO_ot_SHU : fb_DiProtection;
	fb_Kran1_sdvig : fb_KranOpenProtection;
	fb_Kran2_sdvig : fb_KranOpenProtection;
	fb_Toporno_podshipnika_EDT_1 : fb_AiProtection;
	fb_Toy_podshipnika_EDT_2 : fb_AiProtection;
	fb_Toy_podshipnika_kol_EDT_3 : fb_AiProtection;
	fb_Toy_podshipnika_kol_EDT_4 : fb_AiProtection;
	fb_Toy_podshipnika_shest_red_EDT_5 : fb_AiProtection;
	fb_Ty_podshipnika_red_EDT_6 : fb_AiProtection;
	fb_Ty_podshipnika_nagnet_EDT_7_1 : fb_AiProtection;
	fb_Ty_podshipnika_nagnet_EDT_7_2 : fb_AiProtection;
	fb_Toy_podshipnika_svobod_konca_EDT_8_1 : fb_AiProtection;
	fb_Toy_podshipnika_svobod_konca_EDT_8_2 : fb_AiProtection;
	fb_Toy_podshipnika_rab_kol_EDT_9_1 : fb_AiProtection;
	fb_Toy_podshipnika_rab_kol_EDT_9_2 : fb_AiProtection;
	fb_Toy_podshipnika_nerab_kol_EDT_10_1 : fb_AiProtection;
	fb_Toy_podshipnika_nerab_kol_EDT_10_2 : fb_AiProtection;
	fb_Tgaza_na_vhode_H : fb_AiProtection;
	fb_Tgaza_na_vyhode_H : fb_AiProtection;
	fb_Tmasla_v_mb : fb_AiProtection;
	fb_Tmasla_v_mb_nad_ten : fb_AiProtection;
	fb_Tgorjachego_vozduha_ED_kanal_1 : fb_AiProtection;
	fb_Tgorjachego_vozduha_ED_kanal_2 : fb_AiProtection;
	fb_Tmasla_do_AVOM : fb_AiProtection;
	fb_Tmasla_posle_AVOM : fb_AiProtection;
	fb_Tmedi_statora_kanal_1 : fb_AiProtection;
	fb_Tmedi_statora_kanal_2 : fb_AiProtection;
	fb_Tmedi_statora_kanal_3 : fb_AiProtection;
	fb_Tstali_statora_kanal_1 : fb_AiProtection;
	fb_Tstali_statora_kanal_2 : fb_AiProtection;
	fb_Tstali_statora_kanal_3 : fb_AiProtection;
	fb_Tholodnogo_vozduha_ED_kanal_1 : fb_AiProtection;
	fb_Tholodnogo_vozduha_ED_kanal_2 : fb_AiProtection;
	fb_Pmaslo_sm_nizkoe : fb_AiProtection;
	fb_Pmaslo_sm_vysokoe : fb_AiProtection;
	fb_Pgaza_na_vhode_nagnetatelia : fb_AiProtection;
	fb_Pgaza_na_vyhode_nagnetatelia : fb_AiProtection;
	fb_Pmasla_posle_NU : fb_AiProtection;
	fb_Pmasla_smazki_posle_gns : fb_AiProtection;
	fb_Pimpuls_gaz : fb_AiProtection;
	fb_dPmaslo_gaz : fb_AiProtection;
	fb_dP_maslo_na_filtre : fb_AiProtection;
	fb_Os_sdvig_nagnetatelja_plus : fb_AiProtection;
	fb_Os_sdvig_nagnetatelja_minus : fb_AiProtection;
	fb_Vibro_skorost_OPED_T1 : fb_AiProtection;
	fb_Vibro_skorost_OPED_T2 : fb_AiProtection;
	fb_Vibro_skorost_OYP_kolesa_ED_T3 : fb_AiProtection;
	fb_Vibro_skorost_OP_kolesa_RH_T4 : fb_AiProtection;
	fb_Vibro_skorost_OP_shesterni_RED_T5 : fb_AiProtection;
	fb_Vibro_skorost_OP_shesterni_RED_T6 : fb_AiProtection;
	fb_Vibroperemesh_vala_N_T7 : fb_AiProtection;
	fb_Vibroperemesh_vala_N_T8 : fb_AiProtection;
	fb_Uroven_masla_v_mb : fb_AiProtection;
	fb_Tok_statora : fb_AiProtection;
	fb_Kontrol_per_220V_less187 : fb_AiProtection;
	fb_Kontrol_per_220V_high242 : fb_AiProtection;
	fb_Kontrol_post_220V_less187 : fb_AiProtection;
	fb_Kontrol_post_220V_high242 : fb_AiProtection;
END_VAR

VAR_EXTERNAL
	protections : ProtectionsConfig;
	ai : AiConfig;
	IM : ImConfig;
END_VAR

(************************************************************* DiProtection ************************************************************)
(* МВ отключен 
fb_mvOff(sw:=IM.mv, StrDIp := protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);*)

(* Неисправность возбудительного устройства *)
fb_dPmaslo_gaz_Less100(di := IM.SingleSignals.dP_maslo_gaz_Less100, StrDIp := protections.dPmaslo_gaz_less100);

(* Сдвиг крана №2 *)
fb_Reg_vozb_off(di:=IM.SingleSignals.Vozbud_neispravnost, StrDIp := protections.Reg_vozb_off);

(* Сдвиг крана №2 *)
fb_Fail_chastotnii_pusk(di:=IM.SingleSignals.Neuspesh_chastotny_pusk, StrDIp := protections.Fail_chastotnii_pusk);

(* Сдвиг крана №2 *)
fb_Off_avar_vikluchatel(di:=IM.SingleSignals.Avariinoe_otkluch_vikluchatelya, StrDIp := protections.Off_avar_vikluchatel);

(* Сдвиг крана №2 *)
fb_AOKC_SHKC(di:=IM.SingleSignals.AO_KC_ot_SHKS, StrDIp := protections.AOKC_SHKC);

(* Сдвиг крана №2 *)
fb_AO_PRU(di:=IM.SingleSignals.AO_GPA_ot_PRU, StrDIp := protections.AO_PRU);

(* Сдвиг крана №2 *)
fb_AO_ot_SHU(di:=IM.SingleSignals.AO_GPA_ot_SHU, StrDIp := protections.AO_ot_SHU);

(* Сдвиг крана №2 *)
fb_Kran1_sdvig(im:=IM.Kran1, StrDIp := protections.Kran1_sdvig);

(* Сдвиг крана №2 *)
fb_Kran2_sdvig(im:=IM.Kran2, StrDIp := protections.Kran2_sdvig);

(************************************************************* AiProtection ************************************************************)


(* Температура переднего опорного подшипника двигателя, т.1 *)
fb_Toporno_podshipnika_EDT_1(ai := ai.Toporno_podshipnika_EDT_1, StrAIp := protections.Topornogo_podshipnika_EDT_1);

(* Температура заднего опорного подшипника двигателя, т.2 *)
fb_Toy_podshipnika_EDT_2(ai := ai.Toy_podshipnika_EDT_2, StrAIp := protections.Toy_podshipnika_EDT_2);

(* Температура подшипника редуктора, т1 *)
fb_Toy_podshipnika_kol_EDT_3(ai := ai.Toy_podshipnika_kol_EDT_3, StrAIp := protections.Toy_podshipnika_kol_EDT_3);

(* Температура подшипника редуктора, т2 *)
fb_Toy_podshipnika_kol_EDT_4(ai := ai.Toy_podshipnika_kol_EDT_4, StrAIp := protections.Toy_podshipnika_kol_EDT_4);

(* Температура подшипника редуктора, т3 *)
fb_Toy_podshipnika_shest_red_EDT_5(ai := ai.Toy_podshipnika_shest_red_EDT_5, StrAIp := protections.To_podshipnika_shest_red_EDT_5);

(* Температура подшипника редуктора, т4 *)
fb_Ty_podshipnika_red_EDT_6(ai := ai.Ty_podshipnika_red_EDT_6, StrAIp := protections.To_podshipnika_shest_red_EDT_6);

(* Температура опорного подшипника нагнетателя, т1 *)
fb_Ty_podshipnika_nagnet_EDT_7_1(ai := ai.Ty_podshipnika_nagnet_EDT_7_1, StrAIp := protections.To_podshipnika_N_EDT_7);

(* Температура опорного подшипника нагнетателя, т1 *)
fb_Ty_podshipnika_nagnet_EDT_7_2(ai := ai.Ty_podshipnika_nagnet_EDT_7_2, StrAIp := protections.To_podshipnika_N_EDT_7);

(* Температура опорного подшипника нагнетателя, т2 *)
fb_Toy_podshipnika_svobod_konca_EDT_8_1(ai := ai.Toy_podshipnika_svobod_konca_EDT_8_1, StrAIp := protections.To_podshipnika_svob_konca_EDT_8);

(* Температура опорного подшипника нагнетателя, т2 *)
fb_Toy_podshipnika_svobod_konca_EDT_8_2(ai := ai.Toy_podshipnika_svobod_konca_EDT_8_2, StrAIp := protections.To_podshipnika_svob_konca_EDT_8);

(* Температура опорного подшипника нагнетателя, т3 *)
fb_Toy_podshipnika_rab_kol_EDT_9_1(ai := ai.Toy_podshipnika_rab_kol_EDT_9_1, StrAIp := protections.Ty_podshipnika_rab_kol_EDT_9);

(* Температура опорного подшипника нагнетателя, т3 *)
fb_Toy_podshipnika_rab_kol_EDT_9_2(ai := ai.Toy_podshipnika_rab_kol_EDT_9_2, StrAIp := protections.Ty_podshipnika_rab_kol_EDT_9);

(* Температура упорно опорного подшипника нагнетателя, т4 *)
fb_Toy_podshipnika_nerab_kol_EDT_10_1(ai := ai.Toy_podshipnika_nerab_kol_EDT_10_1, StrAIp := protections.Typornogo_podshipnika_nerab_kolodok_HT_10);

(* Температура упорно опорного подшипника нагнетателя, т4 *)
fb_Toy_podshipnika_nerab_kol_EDT_10_2(ai := ai.Toy_podshipnika_nerab_kol_EDT_10_2, StrAIp := protections.Typornogo_podshipnika_nerab_kolodok_HT_10);

(* Температура газа на выходе нагнетателя *)
fb_Tgaza_na_vyhode_H(ai := ai.Tgaza_na_vhode_H, StrAIp := protections.Tgaza_na_vyhode_H);

(* Температура газа на выходе нагнетателя *)
fb_Os_sdvig_nagnetatelja_plus(ai := ai.Os_sdvig_nagnetatelja_plus, StrAIp := protections.Os_sdvig_nagnetatelja_plus);

(* Температура газа на выходе нагнетателя *)
fb_Os_sdvig_nagnetatelja_minus(ai := ai.Os_sdvig_nagnetatelja_minus, StrAIp := protections.Os_sdvig_nagnetatelja_minus);

(* Температура газа на выходе нагнетателя *)
fb_Pgaza_na_vyhode_nagnetatelia(ai := ai.Pgaza_na_vyhode_nagnetatelia, StrAIp := protections.Pgaza_na_vyhode_nagnetatelia);

(* Температура газа на выходе нагнетателя *)
fb_dPmaslo_gaz(ai := ai.dPmaslo_gaz, StrAIp := protections.dPmaslo_gaz);

(* Температура газа на выходе нагнетателя *)
fb_Pmaslo_sm_nizkoe(ai := ai.Pmaslo_sm_nizkoe, StrAIp := protections.Pmaslo_sm_nizkoe);

(* Температура газа на выходе нагнетателя *)
fb_Pmaslo_sm_vysokoe(ai := ai.Pmaslo_sm_vysokoe, StrAIp := protections.Pmaslo_sm_vysokoe);

(* Температура газа на выходе нагнетателя *)
fb_Vibro_skorost_OPED_T1(ai := ai.Vibro_skorost_OPED_T1, StrAIp := protections.Vibro_skorost_OPED_T1);

(* Температура газа на выходе нагнетателя *)
fb_Vibro_skorost_OPED_T2(ai := ai.Vibro_skorost_OYPED_T2, StrAIp := protections.Vibro_skorost_OPED_T2);

(* Температура газа на выходе нагнетателя *)
fb_Vibro_skorost_OYP_kolesa_ED_T3(ai := ai.Vibro_skorost_OYP_kolesa_ED_T3, StrAIp := protections.Vibro_skorost_OYP_kolesa_ED_T3);

(* Температура газа на выходе нагнетателя *)
fb_Vibro_skorost_OP_kolesa_RH_T4(ai := ai.Vibro_skorost_OP_kolesa_RH_T4, StrAIp := protections.Vibro_skorost_OP_kolesa_RH_T4);

(* Температура газа на выходе нагнетателя *)
fb_Vibro_skorost_OP_shesterni_RED_T5(ai := ai.Vibro_skorost_OP_shesterni_RED_T5, StrAIp := protections.Vibro_skorost_OP_shesterni_RED_T5);

(* Температура газа на выходе нагнетателя *)
fb_Vibro_skorost_OP_shesterni_RED_T6(ai := ai.Vibro_skorost_OP_shesterni_RED_T6, StrAIp := protections.Vibro_skorost_OP_shesterni_RED_T6);
