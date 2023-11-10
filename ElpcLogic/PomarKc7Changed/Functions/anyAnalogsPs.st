FUNCTION anyAnalogsPs : BOOL

VAR_INPUT
	ai : AiConfig;
END_VAR

VAR
	statusAi : TYPE_StatusAi;
END_VAR





anyAnalogsPs:=
ai.Toporno_podshipnika_EDT_1.interval= statusAi.HW OR
ai.Toporno_podshipnika_EDT_1.interval= statusAi.LW OR
ai.Toy_podshipnika_EDT_2.interval= statusAi.HW OR
ai.Toy_podshipnika_kol_EDT_3.interval= statusAi.HW OR
ai.Ty_podshipnika_red_EDT_6.interval= statusAi.HW OR
ai.Ty_podshipnika_nagnet_EDT_7_1.interval= statusAi.HW OR
ai.Ty_podshipnika_nagnet_EDT_7_2.interval= statusAi.HW OR
ai.Toy_podshipnika_svobod_konca_EDT_8_1.interval= statusAi.HW OR
ai.Toy_podshipnika_svobod_konca_EDT_8_2.interval= statusAi.HW OR
ai.Tholodnogo_vozduha_ED_kanal_1.interval= statusAi.HW OR
ai.Tholodnogo_vozduha_ED_kanal_2.interval= statusAi.HW OR
ai.Tgorjachego_vozduha_ED_kanal_1.interval= statusAi.HW OR
ai.Tgaza_na_vyhode_H.interval= statusAi.HW OR
ai.Tmasla_MB.interval= statusAi.LW OR
ai.Pmasla_posle_GNS.interval= statusAi.LW OR
ai.Pmasla_posle_NU.interval= statusAi.LW OR
ai.dPgaza_na_konfuzore.interval= statusAi.HW OR 
ai.Os_sdvig_nagnetatelja_plus.interval= statusAi.HW OR 
ai.Os_sdvig_nagnetatelja_minus.interval= statusAi.HW OR 
ai.dPmaslo_gaz.interval= statusAi.HW OR 
ai.Pgaza_na_vhode_nagnetatelia.interval= statusAi.HW OR 
ai.Pgaza_na_vyhode_nagnetatelia.interval= statusAi.HW OR 
ai.Pimpuls_gaz.interval= statusAi.HW OR 
ai.Pimpuls_gaz.interval= statusAi.LW OR 
ai.Yroven_masla_MB.interval= statusAi.HW OR 
ai.Yroven_masla_MB.interval= statusAi.LW OR
ai.Tmasla_MB_TEN.interval= statusAi.HW OR 
ai.Tmasla_MB_TEN.interval= statusAi.LW OR 
ai.Vibro_skorost_OYP_kolesa_ED_T3.interval= statusAi.HW OR 
ai.Vibro_skorost_OYP_kolesa_ED_T3.interval= statusAi.LW OR 
ai.Vibro_skorost_OP_kolesa_RH_T4.interval= statusAi.HW OR 
ai.Vibro_skorost_OP_kolesa_RH_T4.interval= statusAi.LW;