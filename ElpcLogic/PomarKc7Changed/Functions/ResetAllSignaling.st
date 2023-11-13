FUNCTION ResetAllSignaling : BOOL

VAR_IN_OUT
	protections : ProtectionsConfig;
END_VAR










IF protections.Topornogo_podshipnika_EDT_1.Signaling THEN
    resetAiProtection(protections.Topornogo_podshipnika_EDT_1);  END_IF;

IF protections.Toy_podshipnika_EDT_2.Signaling THEN
    resetAiProtection(protections.Toy_podshipnika_EDT_2); END_IF;
    
IF protections.Toy_podshipnika_kol_EDT_3.Signaling THEN
    resetAiProtection(protections.Toy_podshipnika_kol_EDT_3); END_IF;
    
IF protections.Toy_podshipnika_kol_EDT_4.Signaling THEN
    resetAiProtection(protections.Toy_podshipnika_kol_EDT_4); END_IF;
    
IF protections.To_podshipnika_shest_red_EDT_5.Signaling THEN
    resetAiProtection(protections.To_podshipnika_shest_red_EDT_5); END_IF;
    
IF protections.To_podshipnika_shest_red_EDT_6.Signaling THEN
    resetAiProtection(protections.To_podshipnika_shest_red_EDT_6); END_IF;
    
IF protections.To_podshipnika_N_EDT_7.Signaling THEN
    resetAiProtection(protections.To_podshipnika_N_EDT_7); END_IF;
    
IF protections.To_podshipnika_svob_konca_EDT_8.Signaling THEN
    resetAiProtection(protections.To_podshipnika_svob_konca_EDT_8); END_IF;
    
IF protections.Ty_podshipnika_rab_kol_EDT_9.Signaling THEN
    resetAiProtection(protections.Ty_podshipnika_rab_kol_EDT_9); END_IF;
    
IF protections.Typornogo_podshipnika_nerab_kolodok_HT_10.Signaling THEN
    resetAiProtection(protections.Typornogo_podshipnika_nerab_kolodok_HT_10); END_IF;
    
IF protections.Tgaza_na_vyhode_H.Signaling THEN
    resetAiProtection(protections.Tgaza_na_vyhode_H); END_IF;
    
IF protections.Os_sdvig_nagnetatelja_plus.Signaling THEN
   resetAiProtection(protections.Os_sdvig_nagnetatelja_plus); END_IF;
    
IF protections.Os_sdvig_nagnetatelja_minus.Signaling THEN
    resetAiProtection(protections.Os_sdvig_nagnetatelja_minus); END_IF;
    
IF protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP.Signaling THEN
    resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP); END_IF;
   
IF protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP.Signaling THEN
    resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP); END_IF;
       
IF protections.Pgaza_na_vyhode_nagnetatelia.Signaling THEN
    resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia); END_IF;
       
IF protections.dPmaslo_gaz.Signaling THEN
    resetAiProtection(protections.dPmaslo_gaz); END_IF;
       
IF protections.Pmaslo_sm_nizkoe.Signaling THEN
    resetAiProtection(protections.Pmaslo_sm_nizkoe); END_IF;
       
IF protections.Pmaslo_sm_vysokoe.Signaling THEN
    resetAiProtection(protections.Pmaslo_sm_vysokoe); END_IF;

IF protections.Vibro_skorost_OPED_T1.Signaling THEN
    resetAiProtection(protections.Vibro_skorost_OPED_T1); END_IF;
    
IF protections.Vibro_skorost_OPED_T2.Signaling THEN
    resetAiProtection(protections.Vibro_skorost_OPED_T2); END_IF;
    
IF protections.Vibro_skorost_OYP_kolesa_ED_T3.Signaling THEN
    resetAiProtection(protections.Vibro_skorost_OYP_kolesa_ED_T3); END_IF;
    
IF protections.Vibro_skorost_OP_kolesa_RH_T4.Signaling THEN
    resetAiProtection(protections.Vibro_skorost_OP_kolesa_RH_T4); END_IF;
    
IF protections.Vibro_skorost_OP_shesterni_RED_T5.Signaling THEN
    resetAiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5); END_IF;
    
IF protections.Vibro_skorost_OP_shesterni_RED_T6.Signaling THEN
    resetAiProtection(protections.Vibro_skorost_OP_shesterni_RED_T6); END_IF;
    
IF protections.dPmaslo_gaz_less100.Signaling THEN
    resetDiProtection(protections.dPmaslo_gaz_less100); END_IF;
    
IF protections.Reg_vozb_off.Signaling THEN
    resetDiProtection(protections.Reg_vozb_off); END_IF;
    
IF protections.Fail_chastotnii_pusk.Signaling THEN
    resetDiProtection(protections.Fail_chastotnii_pusk); END_IF;

IF protections.Off_avar_vikluchatel.Signaling THEN
    resetDiProtection(protections.Off_avar_vikluchatel); END_IF;

IF protections.AOKC_SHKC.Signaling THEN
    resetDiProtection(protections.AOKC_SHKC); END_IF;

IF protections.AO_PRU.Signaling THEN
    resetDiProtection(protections.AO_PRU); END_IF;

IF protections.AO_ot_SHU.Signaling THEN
    resetDiProtection(protections.AO_ot_SHU); END_IF;

IF protections.mvOff.Signaling THEN
    resetDiProtection(protections.mvOff); END_IF;
    
IF protections.Kran1_sdvig.Signaling THEN
    resetDiProtection(protections.Kran1_sdvig); END_IF;

IF protections.Kran2_sdvig.Signaling THEN
    resetDiProtection(protections.Kran2_sdvig); END_IF;