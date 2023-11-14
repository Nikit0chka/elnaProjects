FUNCTION_BLOCK OPC_PROTECTIONS_GET

VAR_EXTERNAL
	protections_Topornogo_podshipnika_EDT_1_inCommand_ARM : UINT;
	protections : ProtectionsConfig;
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

protections.Topornogo_podshipnika_EDT_1.inCommand_ARM := UINT_TO_WORD(protections_Topornogo_podshipnika_EDT_1_inCommand_ARM);

protections.Toy_podshipnika_EDT_2.inCommand_ARM := UINT_TO_WORD(protections_Toy_podshipnika_EDT_2_inCommand_ARM);

protections.Toy_podshipnika_kol_EDT_3.inCommand_ARM := UINT_TO_WORD(protections_Toy_podshipnika_kol_EDT_3_inCommand_ARM);

protections.Toy_podshipnika_kol_EDT_4.inCommand_ARM := UINT_TO_WORD(protections_Toy_podshipnika_kol_EDT_4_inCommand_ARM);

protections.To_podshipnika_shest_red_EDT_5.inCommand_ARM := UINT_TO_WORD(protections_To_podshipnika_shest_red_EDT_5_inCommand_ARM);

protections.To_podshipnika_shest_red_EDT_6.inCommand_ARM := UINT_TO_WORD(protections_To_podshipnika_shest_red_EDT_6_inCommand_ARM);

protections.To_podshipnika_N_EDT_7.inCommand_ARM := UINT_TO_WORD(protections_To_podshipnika_N_EDT_7_inCommand_ARM);

protections.To_podshipnika_svob_konca_EDT_8.inCommand_ARM := UINT_TO_WORD(protections_To_podshipnika_svob_konca_EDT_8_inCommand_ARM);

protections.Ty_podshipnika_rab_kol_EDT_9.inCommand_ARM := UINT_TO_WORD(protections_Ty_podshipnika_rab_kol_EDT_9_inCommand_ARM);

protections.Typornogo_podshipnika_nerab_kolodok_HT_10.inCommand_ARM := UINT_TO_WORD(protections_Typornogo_podshipnika_nerab_kolodok_HT_10_inCommand_ARM);

protections.Tgaza_na_vyhode_H.inCommand_ARM := UINT_TO_WORD(protections_Tgaza_na_vyhode_H_inCommand_ARM);

protections.Os_sdvig_nagnetatelja_plus.inCommand_ARM := UINT_TO_WORD(protections_Os_sdvig_nagnetatelja_plus_inCommand_ARM);

protections.Os_sdvig_nagnetatelja_minus.inCommand_ARM := UINT_TO_WORD(protections_Os_sdvig_nagnetatelja_minus_inCommand_ARM);

protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP.inCommand_ARM := UINT_TO_WORD(protections_Pgaza_na_vyhode_nagnetatelia_GPA_STOP_inCommand_ARM);

protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP.inCommand_ARM := UINT_TO_WORD(protections_Pgaza_na_vhode_nagnetatelia_GPA_STOP_inCommand_ARM);

protections.Pgaza_na_vyhode_nagnetatelia.inCommand_ARM := UINT_TO_WORD(protections_Pgaza_na_vyhode_nagnetatelia_inCommand_ARM);

protections.dPmaslo_gaz.inCommand_ARM := UINT_TO_WORD(protections_dPmaslo_gaz_inCommand_ARM);

protections.Pmaslo_sm_nizkoe.inCommand_ARM := UINT_TO_WORD(protections_Pmaslo_sm_nizkoe_inCommand_ARM);

protections.Pmaslo_sm_vysokoe.inCommand_ARM := UINT_TO_WORD(protections_Pmaslo_sm_vysokoe_inCommand_ARM);

protections.Vibro_skorost_OPED_T1.inCommand_ARM := UINT_TO_WORD(protections_Vibro_skorost_OPED_T1_inCommand_ARM);

protections.Vibro_skorost_OPED_T2.inCommand_ARM := UINT_TO_WORD(protections_Vibro_skorost_OPED_T2_inCommand_ARM);

protections.Vibro_skorost_OYP_kolesa_ED_T3.inCommand_ARM := UINT_TO_WORD(protections_Vibro_skorost_OYP_kolesa_ED_T3_inCommand_ARM);

protections.Vibro_skorost_OP_kolesa_RH_T4.inCommand_ARM := UINT_TO_WORD(protections_Vibro_skorost_OP_kolesa_RH_T4_inCommand_ARM);

protections.Vibro_skorost_OP_shesterni_RED_T5.inCommand_ARM := UINT_TO_WORD(protections_Vibro_skorost_OP_shesterni_RED_T5_inCommand_ARM);

protections.Vibro_skorost_OP_shesterni_RED_T6.inCommand_ARM := UINT_TO_WORD(protections_Vibro_skorost_OP_shesterni_RED_T6_inCommand_ARM);

protections.dPmaslo_gaz_less100.inCommand_ARM := UINT_TO_WORD(protections_dPmaslo_gaz_less100_inCommand_ARM);

protections.Reg_vozb_off.inCommand_ARM := UINT_TO_WORD(protections_Reg_vozb_off_inCommand_ARM);

protections.Fail_chastotnii_pusk.inCommand_ARM := UINT_TO_WORD(protections_Fail_chastotnii_pusk_inCommand_ARM);

protections.Off_avar_vikluchatel.inCommand_ARM := UINT_TO_WORD(protections_Off_avar_vikluchatel_inCommand_ARM);

protections.AOKC_SHKC.inCommand_ARM := UINT_TO_WORD(protections_AOKC_SHKC_inCommand_ARM);

protections.AO_PRU.inCommand_ARM := UINT_TO_WORD(protections_AO_PRU_inCommand_ARM);

protections.AO_ot_SHU.inCommand_ARM := UINT_TO_WORD(protections_AO_ot_SHU_inCommand_ARM);

protections.mvOff.inCommand_ARM := UINT_TO_WORD(protections_mvOff_inCommand_ARM);

protections.Kran1_sdvig.inCommand_ARM := UINT_TO_WORD(protections_Kran1_sdvig_inCommand_ARM);

protections.Kran2_sdvig.inCommand_ARM := UINT_TO_WORD(protections_Kran2_sdvig_inCommand_ARM);

