FUNCTION analogsNS : BOOL

VAR_INPUT
	ai : AiConfig;
END_VAR

VAR
	statusAi : TYPE_StatusAi;
END_VAR

analogsNS:= 
  ((ai.Tstali_statora_kanal_1.Interval < statusAi.Normal) AND NOT ai.Tstali_statora_kanal_1.remont)
OR((ai.Tstali_statora_kanal_2.Interval < statusAi.Normal) AND NOT ai.Tstali_statora_kanal_2.remont)
OR((ai.Tstali_statora_kanal_3.Interval < statusAi.Normal) AND NOT ai.Tstali_statora_kanal_3.remont)
OR((ai.Tmedi_statora_kanal_1.Interval < statusAi.Normal) AND NOT ai.Tmedi_statora_kanal_1.remont)
OR((ai.Tmedi_statora_kanal_2.Interval < statusAi.Normal) AND NOT ai.Tmedi_statora_kanal_2.remont)
OR((ai.Tmedi_statora_kanal_3.Interval < statusAi.Normal) AND NOT ai.Tmedi_statora_kanal_3.remont)
OR((ai.Toporno_podshipnika_EDT_1.Interval < statusAi.Normal) AND NOT ai.Toporno_podshipnika_EDT_1.remont)
OR((ai.Toy_podshipnika_EDT_2.Interval < statusAi.Normal) AND NOT ai.Toy_podshipnika_EDT_2.remont)
OR((ai.Toy_podshipnika_kol_EDT_3.Interval < statusAi.Normal) AND NOT ai.Toy_podshipnika_kol_EDT_3.remont)
OR((ai.Toy_podshipnika_kol_EDT_4.Interval < statusAi.Normal) AND NOT ai.Toy_podshipnika_kol_EDT_4.remont)
OR((ai.Toy_podshipnika_shest_red_EDT_5.Interval < statusAi.Normal) AND NOT ai.Toy_podshipnika_shest_red_EDT_5.remont)
OR((ai.Ty_podshipnika_red_EDT_6.Interval < statusAi.Normal) AND NOT ai.Ty_podshipnika_red_EDT_6.remont)
OR((ai.Ty_podshipnika_nagnet_EDT_7_1.Interval < statusAi.Normal) AND NOT ai.Ty_podshipnika_nagnet_EDT_7_1.remont)
OR((ai.Ty_podshipnika_nagnet_EDT_7_2.Interval < statusAi.Normal) AND NOT ai.Ty_podshipnika_nagnet_EDT_7_2.remont)
OR((ai.Toy_podshipnika_svobod_konca_EDT_8_1.Interval < statusAi.Normal) AND NOT ai.Toy_podshipnika_svobod_konca_EDT_8_1.remont)
OR((ai.Toy_podshipnika_svobod_konca_EDT_8_2.Interval < statusAi.Normal) AND NOT ai.Toy_podshipnika_svobod_konca_EDT_8_2.remont)
OR((ai.Tholodnogo_vozduha_ED_kanal_1.Interval < statusAi.Normal) AND NOT ai.Tholodnogo_vozduha_ED_kanal_1.remont)
OR((ai.Tholodnogo_vozduha_ED_kanal_2.Interval < statusAi.Normal) AND NOT ai.Tholodnogo_vozduha_ED_kanal_2.remont)
OR((ai.Tgorjachego_vozduha_ED_kanal_1.Interval < statusAi.Normal) AND NOT ai.Tgorjachego_vozduha_ED_kanal_1.remont)
OR((ai.Tgorjachego_vozduha_ED_kanal_2.Interval < statusAi.Normal) AND NOT ai.Tgorjachego_vozduha_ED_kanal_2.remont)
OR((ai.Tnarujnogo_vozduha.Interval < statusAi.Normal) AND NOT ai.Tnarujnogo_vozduha.remont)
OR((ai.Tgaza_na_vhode_H.Interval < statusAi.Normal) AND NOT ai.Tgaza_na_vhode_H.remont)
OR((ai.Tgaza_na_vyhode_H.Interval < statusAi.Normal) AND NOT ai.Tgaza_na_vyhode_H.remont)
OR((ai.Tmasla_posle_AVOM.Interval < statusAi.Normal) AND NOT ai.Tmasla_posle_AVOM.remont)
OR((ai.Tgorjachego_vozduha_ED_kanal_2.Interval < statusAi.Normal) AND NOT ai.Tgorjachego_vozduha_ED_kanal_2.remont)
OR((ai.Tmasla_MB.Interval < statusAi.Normal) AND NOT ai.Tmasla_MB.remont)
OR((ai.dPgaza_na_konfuzore.Interval < statusAi.Normal) AND NOT ai.dPgaza_na_konfuzore.remont)
OR((ai.Pmaslo_sm_nizkoe.Interval < statusAi.Normal) AND NOT ai.Pmaslo_sm_nizkoe.remont)
OR((ai.dPgaza_na_maslo_filtre.Interval < statusAi.Normal) AND NOT ai.dPgaza_na_maslo_filtre.remont)
OR((ai.Pmaslo_sm_vysokoe.Interval < statusAi.Normal) AND NOT ai.Pmaslo_sm_vysokoe.remont)
OR((ai.Pmasla_posle_GNS.Interval < statusAi.Normal) AND NOT ai.Pmasla_posle_GNS.remont)
OR((ai.Pmasla_posle_NU.Interval < statusAi.Normal) AND NOT ai.Pmasla_posle_NU.remont)
OR((ai.Os_sdvig_nagnetatelja_plus.Interval < statusAi.Normal) AND NOT ai.Os_sdvig_nagnetatelja_plus.remont)
OR((ai.Os_sdvig_nagnetatelja_minus.Interval < statusAi.Normal) AND NOT ai.Os_sdvig_nagnetatelja_minus.remont)
OR((ai.dPmaslo_gaz.Interval < statusAi.Normal) AND NOT ai.dPmaslo_gaz.remont)
OR((ai.Pgaza_na_vhode_nagnetatelia.Interval < statusAi.Normal) AND NOT ai.Pgaza_na_vhode_nagnetatelia.remont)
OR((ai.Pgaza_na_vyhode_nagnetatelia.Interval < statusAi.Normal) AND NOT ai.Pgaza_na_vyhode_nagnetatelia.remont)
OR((ai.Pimpuls_gaz.Interval < statusAi.Normal) AND NOT ai.Pimpuls_gaz.remont)
OR((ai.Yroven_masla_MB.Interval < statusAi.Normal) AND NOT ai.Yroven_masla_MB.remont)
OR((ai.Kontrol_per_220V.Interval < statusAi.Normal) AND NOT ai.Kontrol_per_220V.remont)
OR((ai.Kontrol_post_220V.Interval < statusAi.Normal) AND NOT ai.Kontrol_post_220V.remont)
OR((ai.Kontrol_post_220V.Interval < statusAi.Normal) AND NOT ai.Kontrol_post_220V.remont)
OR((ai.Vibro_skorost_OPED_T1.Interval < statusAi.Normal) AND NOT ai.Vibro_skorost_OPED_T1.remont)
OR((ai.Vibro_skorost_OYP_kolesa_ED_T3.Interval < statusAi.Normal) AND NOT ai.Vibro_skorost_OYP_kolesa_ED_T3.remont)
OR((ai.Vibro_skorost_OP_kolesa_RH_T4.Interval < statusAi.Normal) AND NOT ai.Vibro_skorost_OP_kolesa_RH_T4.remont);