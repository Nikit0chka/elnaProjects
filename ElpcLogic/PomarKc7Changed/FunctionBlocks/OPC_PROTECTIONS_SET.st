FUNCTION_BLOCK OPC_PROTECTIONS_SET

VAR_EXTERNAL
	protections : ProtectionsConfig;
	protections_Topornogo_podshipnika_EDT_1_inCommand_ARM : UINT;
	protections_Topornogo_podshipnika_EDT_1_status : UDINT;
	protections_Toy_podshipnika_EDT_2_inCommand_ARM : UINT;
	protections_Toy_podshipnika_EDT_2_status : UDINT;
	protections_Toy_podshipnika_kol_EDT_3_inCommand_ARM : UINT;
	protections_Toy_podshipnika_kol_EDT_3_status : UDINT;
	protections_Toy_podshipnika_kol_EDT_4_inCommand_ARM : UINT;
	protections_Toy_podshipnika_kol_EDT_4_status : UDINT;
	protections_To_podshipnika_shest_red_EDT_5_inCommand_ARM : UINT;
	protections_To_podshipnika_shest_red_EDT_5_status : UDINT;
	protections_To_podshipnika_shest_red_EDT_6_inCommand_ARM : UINT;
	protections_To_podshipnika_shest_red_EDT_6_status : UDINT;
	protections_To_podshipnika_N_EDT_7_inCommand_ARM : UINT;
	protections_To_podshipnika_N_EDT_7_status : UDINT;
	protections_To_podshipnika_svob_konca_EDT_8_inCommand_ARM : UINT;
	protections_To_podshipnika_svob_konca_EDT_8_status : UDINT;
	protections_Ty_podshipnika_rab_kol_EDT_9_inCommand_ARM : UINT;
	protections_Ty_podshipnika_rab_kol_EDT_9_status : UDINT;
	protections_Typornogo_podshipnika_nerab_kolodok_HT_10_inCommand_ARM : UINT;
	protections_Typornogo_podshipnika_nerab_kolodok_HT_10_status : UDINT;
	protections_Tgaza_na_vyhode_H_inCommand_ARM : UINT;
	protections_Tgaza_na_vyhode_H_status : UDINT;
	protections_Os_sdvig_nagnetatelja_plus_inCommand_ARM : UINT;
	protections_Os_sdvig_nagnetatelja_plus_status : UDINT;
	protections_Os_sdvig_nagnetatelja_minus_inCommand_ARM : UINT;
	protections_Os_sdvig_nagnetatelja_minus_status : UDINT;
	protections_Pgaza_na_vyhode_nagnetatelia_GPA_STOP_inCommand_ARM : UINT;
	protections_Pgaza_na_vyhode_nagnetatelia_GPA_STOP_status : UDINT;
	protections_Pgaza_na_vhode_nagnetatelia_GPA_STOP_inCommand_ARM : UINT;
	protections_Pgaza_na_vhode_nagnetatelia_GPA_STOP_status : UDINT;
	protections_Pgaza_na_vyhode_nagnetatelia_inCommand_ARM : UINT;
	protections_Pgaza_na_vyhode_nagnetatelia_status : UDINT;
	protections_dPmaslo_gaz_inCommand_ARM : UINT;
	protections_dPmaslo_gaz_status : UDINT;
	protections_Pmaslo_sm_nizkoe_inCommand_ARM : UINT;
	protections_Pmaslo_sm_nizkoe_status : UDINT;
	protections_Pmaslo_sm_vysokoe_inCommand_ARM : UINT;
	protections_Pmaslo_sm_vysokoe_status : UDINT;
	protections_Vibro_skorost_OPED_T1_inCommand_ARM : UINT;
	protections_Vibro_skorost_OPED_T1_status : UDINT;
	protections_Vibro_skorost_OPED_T2_inCommand_ARM : UINT;
	protections_Vibro_skorost_OPED_T2_status : UDINT;
	protections_Vibro_skorost_OYP_kolesa_ED_T3_inCommand_ARM : UINT;
	protections_Vibro_skorost_OYP_kolesa_ED_T3_status : UDINT;
	protections_Vibro_skorost_OP_kolesa_RH_T4_inCommand_ARM : UINT;
	protections_Vibro_skorost_OP_kolesa_RH_T4_status : UDINT;
	protections_Vibro_skorost_OP_shesterni_RED_T5_inCommand_ARM : UINT;
	protections_Vibro_skorost_OP_shesterni_RED_T5_status : UDINT;
	protections_Vibro_skorost_OP_shesterni_RED_T6_inCommand_ARM : UINT;
	protections_Vibro_skorost_OP_shesterni_RED_T6_status : UDINT;
	protections_dPmaslo_gaz_less100_inCommand_ARM : UINT;
	protections_dPmaslo_gaz_less100_status : UDINT;
	protections_Reg_vozb_off_inCommand_ARM : UINT;
	protections_Reg_vozb_off_status : UDINT;
	protections_Fail_chastotnii_pusk_inCommand_ARM : UINT;
	protections_Fail_chastotnii_pusk_status : UDINT;
	protections_Off_avar_vikluchatel_inCommand_ARM : UINT;
	protections_Off_avar_vikluchatel_status : UDINT;
	protections_AOKC_SHKC_inCommand_ARM : UINT;
	protections_AOKC_SHKC_status : UDINT;
	protections_AO_PRU_inCommand_ARM : UINT;
	protections_AO_PRU_status : UDINT;
	protections_AO_ot_SHU_inCommand_ARM : UINT;
	protections_AO_ot_SHU_status : UDINT;
	protections_mvOff_inCommand_ARM : UINT;
	protections_mvOff_status : UDINT;
	protections_Kran1_sdvig_inCommand_ARM : UINT;
	protections_Kran1_sdvig_status : UDINT;
	protections_Kran2_sdvig_inCommand_ARM : UINT;
	protections_Kran2_sdvig_status : UDINT;
END_VAR

    protections_Topornogo_podshipnika_EDT_1_status := DWORD_TO_UDINT(protections.Topornogo_podshipnika_EDT_1.status);

    protections_Toy_podshipnika_EDT_2_status := DWORD_TO_UDINT(protections.Toy_podshipnika_EDT_2.status);

    protections_Toy_podshipnika_kol_EDT_3_status := DWORD_TO_UDINT(protections.Toy_podshipnika_kol_EDT_3.status);

    protections_Toy_podshipnika_kol_EDT_4_status := DWORD_TO_UDINT(protections.Toy_podshipnika_kol_EDT_4.status);

    protections_To_podshipnika_shest_red_EDT_5_status := DWORD_TO_UDINT(protections.To_podshipnika_shest_red_EDT_5.status);

    protections_To_podshipnika_shest_red_EDT_6_status := DWORD_TO_UDINT(protections.To_podshipnika_shest_red_EDT_6.status);

    protections_To_podshipnika_N_EDT_7_status := DWORD_TO_UDINT(protections.To_podshipnika_N_EDT_7.status);

    protections_To_podshipnika_svob_konca_EDT_8_status := DWORD_TO_UDINT(protections.To_podshipnika_svob_konca_EDT_8.status);

    protections_Ty_podshipnika_rab_kol_EDT_9_status := DWORD_TO_UDINT(protections.Ty_podshipnika_rab_kol_EDT_9.status);

    protections_Typornogo_podshipnika_nerab_kolodok_HT_10_status := DWORD_TO_UDINT(protections.Typornogo_podshipnika_nerab_kolodok_HT_10.status);

    protections_Tgaza_na_vyhode_H_status := DWORD_TO_UDINT(protections.Tgaza_na_vyhode_H.status);

    protections_Os_sdvig_nagnetatelja_plus_status := DWORD_TO_UDINT(protections.Os_sdvig_nagnetatelja_plus.status);

    protections_Os_sdvig_nagnetatelja_minus_status := DWORD_TO_UDINT(protections.Os_sdvig_nagnetatelja_minus.status);

    protections_Pgaza_na_vyhode_nagnetatelia_GPA_STOP_status := DWORD_TO_UDINT(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP.status);

    protections_Pgaza_na_vhode_nagnetatelia_GPA_STOP_status := DWORD_TO_UDINT(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP.status);

    protections_Pgaza_na_vyhode_nagnetatelia_status := DWORD_TO_UDINT(protections.Pgaza_na_vyhode_nagnetatelia.status);

    protections_dPmaslo_gaz_status := DWORD_TO_UDINT(protections.dPmaslo_gaz.status);

    protections_Pmaslo_sm_nizkoe_status := DWORD_TO_UDINT(protections.Pmaslo_sm_nizkoe.status);

    protections_Pmaslo_sm_vysokoe_status := DWORD_TO_UDINT(protections.Pmaslo_sm_vysokoe.status);

    protections_Vibro_skorost_OPED_T1_status := DWORD_TO_UDINT(protections.Vibro_skorost_OPED_T1.status);

    protections_Vibro_skorost_OPED_T2_status := DWORD_TO_UDINT(protections.Vibro_skorost_OPED_T2.status);

    protections_Vibro_skorost_OYP_kolesa_ED_T3_status := DWORD_TO_UDINT(protections.Vibro_skorost_OYP_kolesa_ED_T3.status);

    protections_Vibro_skorost_OP_kolesa_RH_T4_status := DWORD_TO_UDINT(protections.Vibro_skorost_OP_kolesa_RH_T4.status);

    protections_Vibro_skorost_OP_shesterni_RED_T5_status := DWORD_TO_UDINT(protections.Vibro_skorost_OP_shesterni_RED_T5.status);

    protections_Vibro_skorost_OP_shesterni_RED_T6_status := DWORD_TO_UDINT(protections.Vibro_skorost_OP_shesterni_RED_T6.status);

    protections_dPmaslo_gaz_less100_status := DWORD_TO_UDINT(protections.dPmaslo_gaz_less100.status);

    protections_Reg_vozb_off_status := DWORD_TO_UDINT(protections.Reg_vozb_off.status);

    protections_Fail_chastotnii_pusk_status := DWORD_TO_UDINT(protections.Fail_chastotnii_pusk.status);

    protections_Off_avar_vikluchatel_status := DWORD_TO_UDINT(protections.Off_avar_vikluchatel.status);

    protections_AOKC_SHKC_status := DWORD_TO_UDINT(protections.AOKC_SHKC.status);

    protections_AO_PRU_status := DWORD_TO_UDINT(protections.AO_PRU.status);

    protections_AO_ot_SHU_status := DWORD_TO_UDINT(protections.AO_ot_SHU.status);

    protections_mvOff_status := DWORD_TO_UDINT(protections.mvOff.status);

    protections_Kran1_sdvig_status := DWORD_TO_UDINT(protections.Kran1_sdvig.status);

    protections_Kran2_sdvig_status := DWORD_TO_UDINT(protections.Kran2_sdvig.status);