TYPE
AiConfig : STRUCT (*Входные аналоговые параметры*)
	Tstali_statora_kanal_1 : struct_AI; (*Резерв (A1-14:1)*)
	Tstali_statora_kanal_2 : struct_AI; (*Резерв (A1-14:2)*)
	Tstali_statora_kanal_3 : struct_AI; (*Резерв (A1-14:3)*)
	Tmedi_statora_kanal_1 : struct_AI; (*Резерв (A1-14:4)*)
	Tmedi_statora_kanal_2 : struct_AI; (*Резерв (A1-14:5)*)
	Tmedi_statora_kanal_3 : struct_AI; (*Резерв (A1-14:6)*)
	Toporno_podshipnika_EDT_1 : struct_AI; (*Резерв (A1-14:7)*)
	Toy_podshipnika_EDT_2 : struct_AI; (*Резерв (A1-14:8)*)
	Toy_podshipnika_kol_EDT_3 : struct_AI;
	Toy_podshipnika_kol_EDT_4 : struct_AI;
	Toy_podshipnika_shest_red_EDT_5 : struct_AI;
	Ty_podshipnika_red_EDT_6 : struct_AI;
	Ty_podshipnika_nagnet_EDT_7_1 : struct_AI;
	Ty_podshipnika_nagnet_EDT_7_2 : struct_AI;
	Toy_podshipnika_svobod_konca_EDT_8_1 : struct_AI;
	Toy_podshipnika_svobod_konca_EDT_8_2 : struct_AI;
	Toy_podshipnika_rab_kol_EDT_9_1 : struct_AI;
	Toy_podshipnika_rab_kol_EDT_9_2 : struct_AI;
	Toy_podshipnika_nerab_kol_EDT_10_1 : struct_AI;
	Toy_podshipnika_nerab_kol_EDT_10_2 : struct_AI;
	Tholodnogo_vozduha_ED_kanal_1 : struct_AI;
	Tholodnogo_vozduha_ED_kanal_2 : struct_AI;
	Tgorjachego_vozduha_ED_kanal_1 : struct_AI;
	Tgorjachego_vozduha_ED_kanal_2 : struct_AI;
	Tnarujnogo_vozduha : struct_AI;
	Tgaza_na_vhode_H : struct_AI;
	Tgaza_na_vyhode_H : struct_AI;
	Tmasla_do_AVOM : struct_AI;
	Tmasla_posle_AVOM : struct_AI;
	Tmasla_MB : struct_AI;
	Tmasla_MB_TEN : struct_AI;
	Tshu : struct_AI;
	Pmaslo_sm_nizkoe : struct_AI;
	Pmaslo_sm_vysokoe : struct_AI;
	Pmasla_posle_GNS : struct_AI;
	Pmasla_posle_NU : struct_AI;
	Pgaza_na_vhode_nagnetatelia : struct_AI;
	Pgaza_na_vyhode_nagnetatelia : struct_AI;
	Pimpuls_gaz : struct_AI;
	dPgaza_na_maslo_filtre : struct_AI;
	dPgaza_na_konfuzore : struct_AI;
	dPmaslo_gaz : struct_AI;
	Os_sdvig_nagnetatelja_plus : struct_AI;
	Os_sdvig_nagnetatelja_minus : struct_AI;
	Yroven_masla_MB : struct_AI;
	Kontrol_per_220V : struct_AI;
	Kontrol_post_220V : struct_AI;
	Tok_statora : struct_AI;
	Vibro_skorost_OPED_T1 : struct_AI;
	Vibro_skorost_OYPED_T2 : struct_AI;
	Vibro_skorost_OYP_kolesa_ED_T3 : struct_AI;
	Vibro_skorost_OP_kolesa_RH_T4 : struct_AI;
	Vibro_skorost_OP_shesterni_RED_T5 : struct_AI;
	Vibro_skorost_OP_shesterni_RED_T6 : struct_AI;
END_STRUCT;
END_TYPE
