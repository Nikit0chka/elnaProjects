FUNCTION_BLOCK OPC_IM_SET

VAR_EXTERNAL
	Im : ImConfig;
	IM_Kran1_status : UDINT;
	IM_Kran1_inCommand_ARM : UINT;
	IM_Kran2_status : UDINT;
	IM_Kran2_inCommand_ARM : UINT;
	IM_Kran3_status : UDINT;
	IM_Kran3_inCommand_ARM : UINT;
	IM_Kran3b_status : UDINT;
	IM_Kran3b_inCommand_ARM : UINT;
	IM_Kran4_status : UDINT;
	IM_Kran4_inCommand_ARM : UINT;
	IM_Kran5_status : UDINT;
	IM_Kran5_inCommand_ARM : UINT;
	IM_Kran6_status : UDINT;
	IM_Kran6_inCommand_ARM : UINT;
	IM_nu1_status : UDINT;
	IM_nu1_inCommand_ARM : UINT;
	IM_nu2_status : UDINT;
	IM_nu2_inCommand_ARM : UINT;
	IM_pns_status : UDINT;
	IM_pns_inCommand_ARM : UINT;
	IM_v1_Avom_status : UDINT;
	IM_v1_Avom_inCommand_ARM : UINT;
	IM_v2_Avom_status : UDINT;
	IM_v2_Avom_inCommand_ARM : UINT;
	IM_v3_Avom_status : UDINT;
	IM_v3_Avom_inCommand_ARM : UINT;
	IM_v4_Avom_status : UDINT;
	IM_v4_Avom_inCommand_ARM : UINT;
	IM_mv_status : UDINT;
	IM_mv_inCommand_ARM : UINT;
	IM_KaloriferAVOM_status : UDINT;
	IM_KaloriferAVOM_inCommand_ARM : UINT;
	IM_CMN_status : UDINT;
	IM_CMN_inCommand_ARM : UINT;
	IM_TEN_kollectora_status : UDINT;
	IM_TEN_kollectora_inCommand_ARM : UINT;
	IM_TEN_MB_status : UDINT;
	IM_TEN_MB_inCommand_ARM : UINT;
	IM_SingleSignals_dP_maslo_gaz_Less100_status : UDINT;
	IM_SingleSignals_dp_kran1_Less100_status : UDINT;
	IM_SingleSignals_Razreshenie_zagruzki_dvig_status : UDINT;
	IM_SingleSignals_Vozbud_gotovnost_status : UDINT;
	IM_SingleSignals_Vozbud_neispr_tsepey_upr_AVR_pit_status : UDINT;
	IM_SingleSignals_Vozbud_neispravnost_status : UDINT;
	IM_SingleSignals_SHAVR1_v_rabote_status : UDINT;
	IM_SingleSignals_SHAVR2_v_rabote_status : UDINT;
	IM_SingleSignals_Avariinoe_otkluch_vikluchatelya_status : UDINT;
	IM_SingleSignals_Assinhronnii_hod_peregruzka_status : UDINT;
	IM_SingleSignals_SHU_v_GPA_vkluch_status : UDINT;
	IM_SingleSignals_SHP_v_GPA_vkluch_status : UDINT;
	IM_SingleSignals_QF1_on_status : UDINT;
	IM_SingleSignals_QF2_on_status : UDINT;
	IM_SingleSignals_QF23_on_status : UDINT;
	IM_SingleSignals_QF4_QF5_on_status : UDINT;
	IM_SingleSignals_QF6_QF7_on_status : UDINT;
	IM_SingleSignals_QF8_QF9_on_status : UDINT;
	IM_SingleSignals_QF10_QF11_on_status : UDINT;
	IM_SingleSignals_QF12_QF13_on_status : UDINT;
	IM_SingleSignals_QF14_QF15_on_status : UDINT;
	IM_SingleSignals_QF22_on_status : UDINT;
	IM_SingleSignals_NS_G1_G2_status : UDINT;
	IM_SingleSignals_NS_G3_G4_status : UDINT;
	IM_SingleSignals_NS_G15_G16_status : UDINT;
	IM_SingleSignals_NS_G17_status : UDINT;
	IM_SingleSignals_NS_G5_G6_status : UDINT;
	IM_SingleSignals_NS_G7_G8_status : UDINT;
	IM_SingleSignals_NS_G18_G19_status : UDINT;
	IM_SingleSignals_NS_G10_G11_status : UDINT;
	IM_SingleSignals_NS_G13_G14_status : UDINT;
	IM_SingleSignals_Uroven_masla_akkum_status : UDINT;
	IM_SingleSignals_NKU1_GPA_on_status : UDINT;
	IM_SingleSignals_NKU2_GPA_on_status : UDINT;
	IM_SingleSignals_AO_KC_ot_SHKS_status : UDINT;
	IM_SingleSignals_AO_GPA_ot_SHU_status : UDINT;
	IM_SingleSignals_BEAO_srabotal_status : UDINT;
	IM_SingleSignals_Chastotny_pusk_status : UDINT;
	IM_SingleSignals_Neuspesh_chastotny_pusk_status : UDINT;
	IM_SingleSignals_Rezhim_ruchnogo_regulirovaniya_status : UDINT;
	IM_SingleSignals_Osnovnoy_regul_off_status : UDINT;
	IM_SingleSignals_Voltage_sekcii_norm_status : UDINT;
	IM_SingleSignals_Reactorny_pusk_status : UDINT;
	IM_SingleSignals_NO_GPA_ot_SHU_status : UDINT;
	IM_SingleSignals_AO_GPA_ot_PRU_status : UDINT;
	IM_SingleSignals_Nalichie_BP1_status : UDINT;
	IM_SingleSignals_Nalichie_BP2_status : UDINT;
	IM_SingleSignals_Nalichie_BP3_status : UDINT;
	IM_SingleSignals_Nalichie_BP4_status : UDINT;
	IM_SingleSignals_Nalichie_BP5_status : UDINT;
	IM_SingleSignals_Nalichie_BP6_status : UDINT;
	IM_SingleSignals_Nalichie_BP7_BP8_status : UDINT;
	IM_SingleSignals_Nalichie_BP9_BP10_status : UDINT;
	IM_SingleSignals_Nalichie_cepei_upravlen_mv_status : UDINT;
	IM_SingleSignals_Nalichie_220BEAO_status : UDINT;
	IM_SingleSignals_Nalichie_per_220_na_vhode_status : UDINT;
	IM_SingleSignals_Nalichie_post_220_na_vhode_status : UDINT;
	IM_SingleSignals_Nalichie_BP11_status : UDINT;
	IM_SingleSignals_Nalichie_BP12_status : UDINT;
	IM_SingleSignals_Dver_SHU_pered_otkrita_status : UDINT;
	IM_SingleSignals_Dver_SHU_zad_otkrita_status : UDINT;
	IM_SingleSignals_EO_GPA_ot_knopki_SHU_status : UDINT;
	IM_SingleSignals_EO_EGPA_ot_PRY_status : UDINT;
	IM_SingleSignals_Synchroniz_rezhima_K1_status : UDINT;
	IM_SingleSignals_Potok_ms_posle_AVOM_status : UDINT;
END_VAR

IM_SingleSignals_dP_maslo_gaz_Less100_status := DWORD_TO_UDINT(Im.SingleSignals.dP_maslo_gaz_Less100.status);

IM_SingleSignals_dp_kran1_Less100_status := DWORD_TO_UDINT(Im.SingleSignals.dp_kran1_Less100.status);

IM_SingleSignals_Razreshenie_zagruzki_dvig_status := DWORD_TO_UDINT(Im.SingleSignals.Razreshenie_zagruzki_dvig.status);

IM_SingleSignals_Vozbud_gotovnost_status := DWORD_TO_UDINT(Im.SingleSignals.Vozbud_gotovnost.status);

IM_SingleSignals_Vozbud_neispr_tsepey_upr_AVR_pit_status := DWORD_TO_UDINT(Im.SingleSignals.Vozbud_neispr_tsepey_upr_AVR_pit.status);

IM_SingleSignals_Vozbud_neispravnost_status := DWORD_TO_UDINT(Im.SingleSignals.Vozbud_neispravnost.status);

IM_SingleSignals_SHAVR1_v_rabote_status := DWORD_TO_UDINT(Im.SingleSignals.SHAVR1_v_rabote.status);

IM_SingleSignals_SHAVR2_v_rabote_status := DWORD_TO_UDINT(Im.SingleSignals.SHAVR2_v_rabote.status);

IM_SingleSignals_Avariinoe_otkluch_vikluchatelya_status := DWORD_TO_UDINT(Im.SingleSignals.Avariinoe_otkluch_vikluchatelya.status);

IM_SingleSignals_Assinhronnii_hod_peregruzka_status := DWORD_TO_UDINT(Im.SingleSignals.Assinhronnii_hod_peregruzka.status);

IM_SingleSignals_SHU_v_GPA_vkluch_status := DWORD_TO_UDINT(Im.SingleSignals.SHU_v_GPA_vkluch.status);

IM_SingleSignals_SHP_v_GPA_vkluch_status := DWORD_TO_UDINT(Im.SingleSignals.SHP_v_GPA_vkluch.status);

IM_SingleSignals_QF1_on_status := DWORD_TO_UDINT(Im.SingleSignals.QF1_on.status);

IM_SingleSignals_QF2_on_status := DWORD_TO_UDINT(Im.SingleSignals.QF2_on.status);

IM_SingleSignals_QF23_on_status := DWORD_TO_UDINT(Im.SingleSignals.QF23_on.status);

IM_SingleSignals_QF4_QF5_on_status := DWORD_TO_UDINT(Im.SingleSignals.QF4_QF5_on.status);

IM_SingleSignals_QF6_QF7_on_status := DWORD_TO_UDINT(Im.SingleSignals.QF6_QF7_on.status);

IM_SingleSignals_QF8_QF9_on_status := DWORD_TO_UDINT(Im.SingleSignals.QF8_QF9_on.status);

IM_SingleSignals_QF10_QF11_on_status := DWORD_TO_UDINT(Im.SingleSignals.QF10_QF11_on.status);

IM_SingleSignals_QF12_QF13_on_status := DWORD_TO_UDINT(Im.SingleSignals.QF12_QF13_on.status);

IM_SingleSignals_QF14_QF15_on_status := DWORD_TO_UDINT(Im.SingleSignals.QF14_QF15_on.status);

IM_SingleSignals_QF22_on_status := DWORD_TO_UDINT(Im.SingleSignals.QF22_on.status);

IM_SingleSignals_NS_G1_G2_status := DWORD_TO_UDINT(Im.SingleSignals.NS_G1_G2.status);

IM_SingleSignals_NS_G3_G4_status := DWORD_TO_UDINT(Im.SingleSignals.NS_G3_G4.status);

IM_SingleSignals_NS_G15_G16_status := DWORD_TO_UDINT(Im.SingleSignals.NS_G15_G16.status);

IM_SingleSignals_NS_G17_status := DWORD_TO_UDINT(Im.SingleSignals.NS_G17.status);

IM_SingleSignals_NS_G5_G6_status := DWORD_TO_UDINT(Im.SingleSignals.NS_G5_G6.status);

IM_SingleSignals_NS_G7_G8_status := DWORD_TO_UDINT(Im.SingleSignals.NS_G7_G8.status);

IM_SingleSignals_NS_G18_G19_status := DWORD_TO_UDINT(Im.SingleSignals.NS_G18_G19.status);

IM_SingleSignals_NS_G10_G11_status := DWORD_TO_UDINT(Im.SingleSignals.NS_G10_G11.status);

IM_SingleSignals_NS_G13_G14_status := DWORD_TO_UDINT(Im.SingleSignals.NS_G13_G14.status);

IM_SingleSignals_Uroven_masla_akkum_status := DWORD_TO_UDINT(Im.SingleSignals.Uroven_masla_akkum.status);

IM_SingleSignals_NKU1_GPA_on_status := DWORD_TO_UDINT(Im.SingleSignals.NKU1_GPA_on.status);

IM_SingleSignals_NKU2_GPA_on_status := DWORD_TO_UDINT(Im.SingleSignals.NKU2_GPA_on.status);

IM_SingleSignals_AO_KC_ot_SHKS_status := DWORD_TO_UDINT(Im.SingleSignals.AO_KC_ot_SHKS.status);

IM_SingleSignals_AO_GPA_ot_SHU_status := DWORD_TO_UDINT(Im.SingleSignals.AO_GPA_ot_SHU.status);

IM_SingleSignals_BEAO_srabotal_status := DWORD_TO_UDINT(Im.SingleSignals.BEAO_srabotal.status);

IM_SingleSignals_Chastotny_pusk_status := DWORD_TO_UDINT(Im.SingleSignals.Chastotny_pusk.status);

IM_SingleSignals_Neuspesh_chastotny_pusk_status := DWORD_TO_UDINT(Im.SingleSignals.Neuspesh_chastotny_pusk.status);

IM_SingleSignals_Rezhim_ruchnogo_regulirovaniya_status := DWORD_TO_UDINT(Im.SingleSignals.Rezhim_ruchnogo_regulirovaniya.status);

IM_SingleSignals_Osnovnoy_regul_off_status := DWORD_TO_UDINT(Im.SingleSignals.Osnovnoy_regul_off.status);

IM_SingleSignals_Voltage_sekcii_norm_status := DWORD_TO_UDINT(Im.SingleSignals.Voltage_sekcii_norm.status);

IM_SingleSignals_Reactorny_pusk_status := DWORD_TO_UDINT(Im.SingleSignals.Reactorny_pusk.status);

IM_SingleSignals_NO_GPA_ot_SHU_status := DWORD_TO_UDINT(Im.SingleSignals.NO_GPA_ot_SHU.status);

IM_SingleSignals_AO_GPA_ot_PRU_status := DWORD_TO_UDINT(Im.SingleSignals.AO_GPA_ot_PRU.status);

IM_SingleSignals_Nalichie_BP1_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_BP1.status);

IM_SingleSignals_Nalichie_BP2_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_BP2.status);

IM_SingleSignals_Nalichie_BP3_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_BP3.status);

IM_SingleSignals_Nalichie_BP4_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_BP4.status);

IM_SingleSignals_Nalichie_BP5_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_BP5.status);

IM_SingleSignals_Nalichie_BP6_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_BP6.status);

IM_SingleSignals_Nalichie_BP7_BP8_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_BP7_BP8.status);

IM_SingleSignals_Nalichie_BP9_BP10_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_BP9_BP10.status);

IM_SingleSignals_Nalichie_cepei_upravlen_mv_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_cepei_upravlen_mv.status);

IM_SingleSignals_Nalichie_220BEAO_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_220BEAO.status);

IM_SingleSignals_Nalichie_per_220_na_vhode_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_per_220_na_vhode.status);

IM_SingleSignals_Nalichie_post_220_na_vhode_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_post_220_na_vhode.status);

IM_SingleSignals_Nalichie_BP11_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_BP11.status);

IM_SingleSignals_Nalichie_BP12_status := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_BP12.status);

IM_SingleSignals_Dver_SHU_pered_otkrita_status := DWORD_TO_UDINT(Im.SingleSignals.Dver_SHU_pered_otkrita.status);

IM_SingleSignals_Dver_SHU_zad_otkrita_status := DWORD_TO_UDINT(Im.SingleSignals.Dver_SHU_zad_otkrita.status);

IM_SingleSignals_EO_GPA_ot_knopki_SHU_status := DWORD_TO_UDINT(Im.SingleSignals.EO_GPA_ot_knopki_SHU.status);

IM_SingleSignals_EO_EGPA_ot_PRY_status := DWORD_TO_UDINT(Im.SingleSignals.EO_EGPA_ot_PRY.status);

IM_SingleSignals_Synchroniz_rezhima_K1_status := DWORD_TO_UDINT(Im.SingleSignals.Synchroniz_rezhima_K1.status);

IM_SingleSignals_Potok_ms_posle_AVOM_status := DWORD_TO_UDINT(Im.SingleSignals.Potok_ms_posle_AVOM.status);

IM_Kran1_status := DWORD_TO_UDINT(Im.Kran1.status);

IM_Kran2_status := DWORD_TO_UDINT(Im.Kran2.status);

IM_Kran3_status := DWORD_TO_UDINT(Im.Kran3.status);

IM_Kran3b_status := DWORD_TO_UDINT(Im.Kran3b.status);

IM_Kran4_status := DWORD_TO_UDINT(Im.Kran4.status);

IM_Kran5_status := DWORD_TO_UDINT(Im.Kran5.status);

IM_Kran6_status := DWORD_TO_UDINT(Im.Kran6.status);

IM_nu1_status := DWORD_TO_UDINT(Im.nu1.status);

IM_nu2_status := DWORD_TO_UDINT(Im.nu2.status);

IM_pns_status := DWORD_TO_UDINT(Im.pns.status);

IM_v1_Avom_status := DWORD_TO_UDINT(Im.v1_Avom.status);

IM_v2_Avom_status := DWORD_TO_UDINT(Im.v2_Avom.status);

IM_v3_Avom_status := DWORD_TO_UDINT(Im.v3_Avom.status);

IM_v4_Avom_status := DWORD_TO_UDINT(Im.v4_Avom.status);

IM_mv_status := DWORD_TO_UDINT(Im.mv.status);

IM_KaloriferAVOM_status := DWORD_TO_UDINT(Im.KaloriferAVOM.status);

IM_CMN_status := DWORD_TO_UDINT(Im.CMN.status);

IM_TEN_kollectora_status := DWORD_TO_UDINT(Im.TEN_kollectora.status);

IM_TEN_MB_status := DWORD_TO_UDINT(Im.TEN_MB.status);

