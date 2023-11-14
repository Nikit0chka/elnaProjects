FUNCTION_BLOCK OPC_AI_GET

VAR_EXTERNAL
	ai : aiConfig;
	AI_Tstali_statora_kanal_1_HL : LREAL;
	AI_Tstali_statora_kanal_1_LL : LREAL;
	AI_Tstali_statora_kanal_1_command : UINT;
	AI_Tstali_statora_kanal_1_newHL : LREAL;
	AI_Tstali_statora_kanal_1_newLL : LREAL;
	AI_Tstali_statora_kanal_1_status : UDINT;
	AI_Tstali_statora_kanal_1_value : LREAL;
	AI_Tstali_statora_kanal_1_HW : LREAL;
	AI_Tstali_statora_kanal_1_newHW : LREAL;
	AI_Tstali_statora_kanal_2_HL : LREAL;
	AI_Tstali_statora_kanal_2_LL : LREAL;
	AI_Tstali_statora_kanal_2_command : UINT;
	AI_Tstali_statora_kanal_2_newHL : LREAL;
	AI_Tstali_statora_kanal_2_newLL : LREAL;
	AI_Tstali_statora_kanal_2_status : UDINT;
	AI_Tstali_statora_kanal_2_value : LREAL;
	AI_Tstali_statora_kanal_2_HW : LREAL;
	AI_Tstali_statora_kanal_2_newHW : LREAL;
	AI_Tstali_statora_kanal_3_HL : LREAL;
	AI_Tstali_statora_kanal_3_LL : LREAL;
	AI_Tstali_statora_kanal_3_command : UINT;
	AI_Tstali_statora_kanal_3_newHL : LREAL;
	AI_Tstali_statora_kanal_3_newLL : LREAL;
	AI_Tstali_statora_kanal_3_status : UDINT;
	AI_Tstali_statora_kanal_3_value : LREAL;
	AI_Tstali_statora_kanal_3_HW : LREAL;
	AI_Tstali_statora_kanal_3_newHW : LREAL;
	AI_Tmedi_statora_kanal_1_HL : LREAL;
	AI_Tmedi_statora_kanal_1_LL : LREAL;
	AI_Tmedi_statora_kanal_1_command : UINT;
	AI_Tmedi_statora_kanal_1_newHL : LREAL;
	AI_Tmedi_statora_kanal_1_newLL : LREAL;
	AI_Tmedi_statora_kanal_1_status : UDINT;
	AI_Tmedi_statora_kanal_1_value : LREAL;
	AI_Tmedi_statora_kanal_1_HW : LREAL;
	AI_Tmedi_statora_kanal_1_newHW : LREAL;
	AI_Tmedi_statora_kanal_2_HL : LREAL;
	AI_Tmedi_statora_kanal_2_LL : LREAL;
	AI_Tmedi_statora_kanal_2_command : UINT;
	AI_Tmedi_statora_kanal_2_newHL : LREAL;
	AI_Tmedi_statora_kanal_2_newLL : LREAL;
	AI_Tmedi_statora_kanal_2_status : UDINT;
	AI_Tmedi_statora_kanal_2_value : LREAL;
	AI_Tmedi_statora_kanal_2_HW : LREAL;
	AI_Tmedi_statora_kanal_2_newHW : LREAL;
	AI_Tmedi_statora_kanal_3_HL : LREAL;
	AI_Tmedi_statora_kanal_3_LL : LREAL;
	AI_Tmedi_statora_kanal_3_command : UINT;
	AI_Tmedi_statora_kanal_3_newHL : LREAL;
	AI_Tmedi_statora_kanal_3_newLL : LREAL;
	AI_Tmedi_statora_kanal_3_status : UDINT;
	AI_Tmedi_statora_kanal_3_value : LREAL;
	AI_Tmedi_statora_kanal_3_HW : LREAL;
	AI_Tmedi_statora_kanal_3_newHW : LREAL;
	AI_Toporno_podshipnika_EDT_1_HL : LREAL;
	AI_Toporno_podshipnika_EDT_1_LL : LREAL;
	AI_Toporno_podshipnika_EDT_1_command : UINT;
	AI_Toporno_podshipnika_EDT_1_newHL : LREAL;
	AI_Toporno_podshipnika_EDT_1_newLL : LREAL;
	AI_Toporno_podshipnika_EDT_1_status : UDINT;
	AI_Toporno_podshipnika_EDT_1_value : LREAL;
	AI_Toporno_podshipnika_EDT_1_HW : LREAL;
	AI_Toporno_podshipnika_EDT_1_newHW : LREAL;
	AI_Toporno_podshipnika_EDT_1_HA : LREAL;
	AI_Toporno_podshipnika_EDT_1_newHA : LREAL;
	AI_Toy_podshipnika_EDT_2_HL : LREAL;
	AI_Toy_podshipnika_EDT_2_LL : LREAL;
	AI_Toy_podshipnika_EDT_2_command : UINT;
	AI_Toy_podshipnika_EDT_2_newHL : LREAL;
	AI_Toy_podshipnika_EDT_2_newLL : LREAL;
	AI_Toy_podshipnika_EDT_2_status : UDINT;
	AI_Toy_podshipnika_EDT_2_value : LREAL;
	AI_Toy_podshipnika_EDT_2_HW : LREAL;
	AI_Toy_podshipnika_EDT_2_newHW : LREAL;
	AI_Toy_podshipnika_EDT_2_HA : LREAL;
	AI_Toy_podshipnika_EDT_2_newHA : LREAL;
	AI_Toy_podshipnika_kol_EDT_3_HL : LREAL;
	AI_Toy_podshipnika_kol_EDT_3_LL : LREAL;
	AI_Toy_podshipnika_kol_EDT_3_command : UINT;
	AI_Toy_podshipnika_kol_EDT_3_newHL : LREAL;
	AI_Toy_podshipnika_kol_EDT_3_newLL : LREAL;
	AI_Toy_podshipnika_kol_EDT_3_status : UDINT;
	AI_Toy_podshipnika_kol_EDT_3_value : LREAL;
	AI_Toy_podshipnika_kol_EDT_3_HW : LREAL;
	AI_Toy_podshipnika_kol_EDT_3_newHW : LREAL;
	AI_Toy_podshipnika_kol_EDT_3_HA : LREAL;
	AI_Toy_podshipnika_kol_EDT_3_newHA : LREAL;
	AI_Toy_podshipnika_kol_EDT_4_HL : LREAL;
	AI_Toy_podshipnika_kol_EDT_4_LL : LREAL;
	AI_Toy_podshipnika_kol_EDT_4_command : UINT;
	AI_Toy_podshipnika_kol_EDT_4_newHL : LREAL;
	AI_Toy_podshipnika_kol_EDT_4_newLL : LREAL;
	AI_Toy_podshipnika_kol_EDT_4_status : UDINT;
	AI_Toy_podshipnika_kol_EDT_4_value : LREAL;
	AI_Toy_podshipnika_kol_EDT_4_HW : LREAL;
	AI_Toy_podshipnika_kol_EDT_4_newHW : LREAL;
	AI_Toy_podshipnika_kol_EDT_4_HA : LREAL;
	AI_Toy_podshipnika_kol_EDT_4_newHA : LREAL;
	AI_Toy_podshipnika_shest_red_EDT_5_HL : LREAL;
	AI_Toy_podshipnika_shest_red_EDT_5_LL : LREAL;
	AI_Toy_podshipnika_shest_red_EDT_5_command : UINT;
	AI_Toy_podshipnika_shest_red_EDT_5_newHL : LREAL;
	AI_Toy_podshipnika_shest_red_EDT_5_newLL : LREAL;
	AI_Toy_podshipnika_shest_red_EDT_5_status : UDINT;
	AI_Toy_podshipnika_shest_red_EDT_5_value : LREAL;
	AI_Toy_podshipnika_shest_red_EDT_5_HW : LREAL;
	AI_Toy_podshipnika_shest_red_EDT_5_newHW : LREAL;
	AI_Toy_podshipnika_shest_red_EDT_5_HA : LREAL;
	AI_Toy_podshipnika_shest_red_EDT_5_newHA : LREAL;
	AI_Ty_podshipnika_red_EDT_6_HL : LREAL;
	AI_Ty_podshipnika_red_EDT_6_LL : LREAL;
	AI_Ty_podshipnika_red_EDT_6_command : UINT;
	AI_Ty_podshipnika_red_EDT_6_newHL : LREAL;
	AI_Ty_podshipnika_red_EDT_6_newLL : LREAL;
	AI_Ty_podshipnika_red_EDT_6_status : UDINT;
	AI_Ty_podshipnika_red_EDT_6_value : LREAL;
	AI_Ty_podshipnika_red_EDT_6_HW : LREAL;
	AI_Ty_podshipnika_red_EDT_6_newHW : LREAL;
	AI_Ty_podshipnika_red_EDT_6_HA : LREAL;
	AI_Ty_podshipnika_red_EDT_6_newHA : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_1_HL : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_1_LL : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_1_command : UINT;
	AI_Ty_podshipnika_nagnet_EDT_7_1_newHL : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_1_newLL : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_1_status : UDINT;
	AI_Ty_podshipnika_nagnet_EDT_7_1_value : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_1_HW : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_1_newHW : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_1_HA : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_1_newHA : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_2_HL : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_2_LL : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_2_command : UINT;
	AI_Ty_podshipnika_nagnet_EDT_7_2_newHL : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_2_newLL : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_2_status : UDINT;
	AI_Ty_podshipnika_nagnet_EDT_7_2_value : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_2_HW : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_2_newHW : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_2_HA : LREAL;
	AI_Ty_podshipnika_nagnet_EDT_7_2_newHA : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_1_HL : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_1_LL : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_1_command : UINT;
	AI_Toy_podshipnika_svobod_konca_EDT_8_1_newHL : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_1_newLL : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_1_status : UDINT;
	AI_Toy_podshipnika_svobod_konca_EDT_8_1_value : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_1_HW : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_1_newHW : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_1_HA : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_1_newHA : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_2_HL : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_2_LL : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_2_command : UINT;
	AI_Toy_podshipnika_svobod_konca_EDT_8_2_newHL : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_2_newLL : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_2_status : UDINT;
	AI_Toy_podshipnika_svobod_konca_EDT_8_2_value : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_2_HW : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_2_newHW : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_2_HA : LREAL;
	AI_Toy_podshipnika_svobod_konca_EDT_8_2_newHA : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_1_HL : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_1_LL : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_1_command : UINT;
	AI_Toy_podshipnika_rab_kol_EDT_9_1_newHL : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_1_newLL : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_1_status : UDINT;
	AI_Toy_podshipnika_rab_kol_EDT_9_1_value : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_1_HW : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_1_newHW : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_1_HA : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_1_newHA : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_2_HL : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_2_LL : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_2_command : UINT;
	AI_Toy_podshipnika_rab_kol_EDT_9_2_newHL : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_2_newLL : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_2_status : UDINT;
	AI_Toy_podshipnika_rab_kol_EDT_9_2_value : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_2_HW : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_2_newHW : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_2_HA : LREAL;
	AI_Toy_podshipnika_rab_kol_EDT_9_2_newHA : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_1_HL : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_1_LL : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_1_command : UINT;
	AI_Toy_podshipnika_nerab_kol_EDT_10_1_newHL : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_1_newLL : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_1_status : UDINT;
	AI_Toy_podshipnika_nerab_kol_EDT_10_1_value : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_1_HW : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_1_newHW : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_1_HA : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_1_newHA : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_2_HL : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_2_LL : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_2_command : UINT;
	AI_Toy_podshipnika_nerab_kol_EDT_10_2_newHL : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_2_newLL : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_2_status : UDINT;
	AI_Toy_podshipnika_nerab_kol_EDT_10_2_value : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_2_HW : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_2_newHW : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_2_HA : LREAL;
	AI_Toy_podshipnika_nerab_kol_EDT_10_2_newHA : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_1_HL : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_1_LL : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_1_command : UINT;
	AI_Tholodnogo_vozduha_ED_kanal_1_newHL : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_1_newLL : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_1_status : UDINT;
	AI_Tholodnogo_vozduha_ED_kanal_1_value : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_1_HW : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_1_newHW : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_2_HL : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_2_LL : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_2_command : UINT;
	AI_Tholodnogo_vozduha_ED_kanal_2_newHL : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_2_newLL : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_2_status : UDINT;
	AI_Tholodnogo_vozduha_ED_kanal_2_value : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_2_HW : LREAL;
	AI_Tholodnogo_vozduha_ED_kanal_2_newHW : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_1_HL : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_1_LL : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_1_command : UINT;
	AI_Tgorjachego_vozduha_ED_kanal_1_newHL : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_1_newLL : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_1_status : UDINT;
	AI_Tgorjachego_vozduha_ED_kanal_1_value : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_1_HW : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_1_newHW : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_2_HL : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_2_LL : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_2_command : UINT;
	AI_Tgorjachego_vozduha_ED_kanal_2_newHL : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_2_newLL : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_2_status : UDINT;
	AI_Tgorjachego_vozduha_ED_kanal_2_value : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_2_HW : LREAL;
	AI_Tgorjachego_vozduha_ED_kanal_2_newHW : LREAL;
	AI_Tnarujnogo_vozduha_HL : LREAL;
	AI_Tnarujnogo_vozduha_LL : LREAL;
	AI_Tnarujnogo_vozduha_command : UINT;
	AI_Tnarujnogo_vozduha_newHL : LREAL;
	AI_Tnarujnogo_vozduha_newLL : LREAL;
	AI_Tnarujnogo_vozduha_status : UDINT;
	AI_Tnarujnogo_vozduha_value : LREAL;
	AI_Tnarujnogo_vozduha_HW : LREAL;
	AI_Tnarujnogo_vozduha_newHW : LREAL;
	AI_Tgaza_na_vhode_H_HL : LREAL;
	AI_Tgaza_na_vhode_H_LL : LREAL;
	AI_Tgaza_na_vhode_H_command : UINT;
	AI_Tgaza_na_vhode_H_newHL : LREAL;
	AI_Tgaza_na_vhode_H_newLL : LREAL;
	AI_Tgaza_na_vhode_H_status : UDINT;
	AI_Tgaza_na_vhode_H_value : LREAL;
	AI_Tgaza_na_vhode_H_HW : LREAL;
	AI_Tgaza_na_vhode_H_newHW : LREAL;
	AI_Tgaza_na_vyhode_H_HL : LREAL;
	AI_Tgaza_na_vyhode_H_LL : LREAL;
	AI_Tgaza_na_vyhode_H_command : UINT;
	AI_Tgaza_na_vyhode_H_newHL : LREAL;
	AI_Tgaza_na_vyhode_H_newLL : LREAL;
	AI_Tgaza_na_vyhode_H_status : UDINT;
	AI_Tgaza_na_vyhode_H_value : LREAL;
	AI_Tgaza_na_vyhode_H_HW : LREAL;
	AI_Tgaza_na_vyhode_H_newHW : LREAL;
	AI_Tgaza_na_vyhode_H_HA : LREAL;
	AI_Tgaza_na_vyhode_H_newHA : LREAL;
	AI_Tmasla_do_AVOM_HL : LREAL;
	AI_Tmasla_do_AVOM_LL : LREAL;
	AI_Tmasla_do_AVOM_command : UINT;
	AI_Tmasla_do_AVOM_newHL : LREAL;
	AI_Tmasla_do_AVOM_newLL : LREAL;
	AI_Tmasla_do_AVOM_status : UDINT;
	AI_Tmasla_do_AVOM_value : LREAL;
	AI_Tmasla_do_AVOM_HW : LREAL;
	AI_Tmasla_do_AVOM_newHW : LREAL;
	AI_Tmasla_posle_AVOM_HL : LREAL;
	AI_Tmasla_posle_AVOM_LL : LREAL;
	AI_Tmasla_posle_AVOM_command : UINT;
	AI_Tmasla_posle_AVOM_newHL : LREAL;
	AI_Tmasla_posle_AVOM_newLL : LREAL;
	AI_Tmasla_posle_AVOM_status : UDINT;
	AI_Tmasla_posle_AVOM_value : LREAL;
	AI_Tmasla_posle_AVOM_HW : LREAL;
	AI_Tmasla_posle_AVOM_newHW : LREAL;
	AI_Tmasla_MB_HL : LREAL;
	AI_Tmasla_MB_LL : LREAL;
	AI_Tmasla_MB_command : UINT;
	AI_Tmasla_MB_newHL : LREAL;
	AI_Tmasla_MB_newLL : LREAL;
	AI_Tmasla_MB_status : UDINT;
	AI_Tmasla_MB_value : LREAL;
	AI_Tmasla_MB_HW : LREAL;
	AI_Tmasla_MB_newHW : LREAL;
	AI_Tmasla_MB_TEN_HL : LREAL;
	AI_Tmasla_MB_TEN_LL : LREAL;
	AI_Tmasla_MB_TEN_command : UINT;
	AI_Tmasla_MB_TEN_newHL : LREAL;
	AI_Tmasla_MB_TEN_newLL : LREAL;
	AI_Tmasla_MB_TEN_status : UDINT;
	AI_Tmasla_MB_TEN_value : LREAL;
	AI_Tmasla_MB_TEN_HW : LREAL;
	AI_Tmasla_MB_TEN_newHW : LREAL;
	AI_Tshu_HL : LREAL;
	AI_Tshu_LL : LREAL;
	AI_Tshu_command : UINT;
	AI_Tshu_newHL : LREAL;
	AI_Tshu_newLL : LREAL;
	AI_Tshu_status : UDINT;
	AI_Tshu_value : LREAL;
	AI_Pmaslo_sm_nizkoe_HL : LREAL;
	AI_Pmaslo_sm_nizkoe_LL : LREAL;
	AI_Pmaslo_sm_nizkoe_command : UINT;
	AI_Pmaslo_sm_nizkoe_newHL : LREAL;
	AI_Pmaslo_sm_nizkoe_newLL : LREAL;
	AI_Pmaslo_sm_nizkoe_status : UDINT;
	AI_Pmaslo_sm_nizkoe_value : LREAL;
	AI_Pmaslo_sm_nizkoe_LW : LREAL;
	AI_Pmaslo_sm_nizkoe_newLW : LREAL;
	AI_Pmaslo_sm_nizkoe_LA : LREAL;
	AI_Pmaslo_sm_nizkoe_newLA : LREAL;
	AI_Pmaslo_sm_vysokoe_HL : LREAL;
	AI_Pmaslo_sm_vysokoe_LL : LREAL;
	AI_Pmaslo_sm_vysokoe_command : UINT;
	AI_Pmaslo_sm_vysokoe_newHL : LREAL;
	AI_Pmaslo_sm_vysokoe_newLL : LREAL;
	AI_Pmaslo_sm_vysokoe_status : UDINT;
	AI_Pmaslo_sm_vysokoe_value : LREAL;
	AI_Pmaslo_sm_vysokoe_LW : LREAL;
	AI_Pmaslo_sm_vysokoe_newLW : LREAL;
	AI_Pmaslo_sm_vysokoe_LA : LREAL;
	AI_Pmaslo_sm_vysokoe_newLA : LREAL;
	AI_Pmasla_posle_GNS_HL : LREAL;
	AI_Pmasla_posle_GNS_LL : LREAL;
	AI_Pmasla_posle_GNS_command : UINT;
	AI_Pmasla_posle_GNS_newHL : LREAL;
	AI_Pmasla_posle_GNS_newLL : LREAL;
	AI_Pmasla_posle_GNS_status : UDINT;
	AI_Pmasla_posle_GNS_value : LREAL;
	AI_Pmasla_posle_GNS_HW : LREAL;
	AI_Pmasla_posle_GNS_newHW : LREAL;
	AI_Pmasla_posle_GNS_LW : LREAL;
	AI_Pmasla_posle_GNS_newLW : LREAL;
	AI_Pmasla_posle_NU_HL : LREAL;
	AI_Pmasla_posle_NU_LL : LREAL;
	AI_Pmasla_posle_NU_command : UINT;
	AI_Pmasla_posle_NU_newHL : LREAL;
	AI_Pmasla_posle_NU_newLL : LREAL;
	AI_Pmasla_posle_NU_status : UDINT;
	AI_Pmasla_posle_NU_value : LREAL;
	AI_Pmasla_posle_NU_LW : LREAL;
	AI_Pmasla_posle_NU_newLW : LREAL;
	AI_Pgaza_na_vhode_nagnetatelia_HL : LREAL;
	AI_Pgaza_na_vhode_nagnetatelia_LL : LREAL;
	AI_Pgaza_na_vhode_nagnetatelia_command : UINT;
	AI_Pgaza_na_vhode_nagnetatelia_newHL : LREAL;
	AI_Pgaza_na_vhode_nagnetatelia_newLL : LREAL;
	AI_Pgaza_na_vhode_nagnetatelia_status : UDINT;
	AI_Pgaza_na_vhode_nagnetatelia_value : LREAL;
	AI_Pgaza_na_vhode_nagnetatelia_LW : LREAL;
	AI_Pgaza_na_vhode_nagnetatelia_newLW : LREAL;
	AI_Pgaza_na_vyhode_nagnetatelia_HL : LREAL;
	AI_Pgaza_na_vyhode_nagnetatelia_LL : LREAL;
	AI_Pgaza_na_vyhode_nagnetatelia_command : UINT;
	AI_Pgaza_na_vyhode_nagnetatelia_newHL : LREAL;
	AI_Pgaza_na_vyhode_nagnetatelia_newLL : LREAL;
	AI_Pgaza_na_vyhode_nagnetatelia_status : UDINT;
	AI_Pgaza_na_vyhode_nagnetatelia_value : LREAL;
	AI_Pgaza_na_vyhode_nagnetatelia_LW : LREAL;
	AI_Pgaza_na_vyhode_nagnetatelia_newLW : LREAL;
	AI_Pgaza_na_vyhode_nagnetatelia_HA : LREAL;
	AI_Pgaza_na_vyhode_nagnetatelia_newHA : LREAL;
	AI_Pimpuls_gaz_HL : LREAL;
	AI_Pimpuls_gaz_LL : LREAL;
	AI_Pimpuls_gaz_command : UINT;
	AI_Pimpuls_gaz_newHL : LREAL;
	AI_Pimpuls_gaz_newLL : LREAL;
	AI_Pimpuls_gaz_status : UDINT;
	AI_Pimpuls_gaz_value : LREAL;
	AI_Pimpuls_gaz_LW : LREAL;
	AI_Pimpuls_gaz_newLW : LREAL;
	AI_dPgaza_na_maslo_filtre_HL : LREAL;
	AI_dPgaza_na_maslo_filtre_LL : LREAL;
	AI_dPgaza_na_maslo_filtre_command : UINT;
	AI_dPgaza_na_maslo_filtre_newHL : LREAL;
	AI_dPgaza_na_maslo_filtre_newLL : LREAL;
	AI_dPgaza_na_maslo_filtre_status : UDINT;
	AI_dPgaza_na_maslo_filtre_value : LREAL;
	AI_dPgaza_na_maslo_filtre_HW : LREAL;
	AI_dPgaza_na_maslo_filtre_newHW : LREAL;
	AI_dPgaza_na_konfuzore_HL : LREAL;
	AI_dPgaza_na_konfuzore_LL : LREAL;
	AI_dPgaza_na_konfuzore_command : UINT;
	AI_dPgaza_na_konfuzore_newHL : LREAL;
	AI_dPgaza_na_konfuzore_newLL : LREAL;
	AI_dPgaza_na_konfuzore_status : UDINT;
	AI_dPgaza_na_konfuzore_value : LREAL;
	AI_dPgaza_na_konfuzore_LW : LREAL;
	AI_dPgaza_na_konfuzore_newLW : LREAL;
	AI_dPmaslo_gaz_HL : LREAL;
	AI_dPmaslo_gaz_LL : LREAL;
	AI_dPmaslo_gaz_command : UINT;
	AI_dPmaslo_gaz_newHL : LREAL;
	AI_dPmaslo_gaz_newLL : LREAL;
	AI_dPmaslo_gaz_status : UDINT;
	AI_dPmaslo_gaz_value : LREAL;
	AI_dPmaslo_gaz_LW : LREAL;
	AI_dPmaslo_gaz_newLW : LREAL;
	AI_dPmaslo_gaz_LA : LREAL;
	AI_dPmaslo_gaz_newLA : LREAL;
	AI_Os_sdvig_nagnetatelja_plus_HL : LREAL;
	AI_Os_sdvig_nagnetatelja_plus_LL : LREAL;
	AI_Os_sdvig_nagnetatelja_plus_command : UINT;
	AI_Os_sdvig_nagnetatelja_plus_newHL : LREAL;
	AI_Os_sdvig_nagnetatelja_plus_newLL : LREAL;
	AI_Os_sdvig_nagnetatelja_plus_status : UDINT;
	AI_Os_sdvig_nagnetatelja_plus_value : LREAL;
	AI_Os_sdvig_nagnetatelja_plus_HW : LREAL;
	AI_Os_sdvig_nagnetatelja_plus_newHW : LREAL;
	AI_Os_sdvig_nagnetatelja_plus_HA : LREAL;
	AI_Os_sdvig_nagnetatelja_plus_newHA : LREAL;
	AI_Os_sdvig_nagnetatelja_minus_HL : LREAL;
	AI_Os_sdvig_nagnetatelja_minus_LL : LREAL;
	AI_Os_sdvig_nagnetatelja_minus_command : UINT;
	AI_Os_sdvig_nagnetatelja_minus_newHL : LREAL;
	AI_Os_sdvig_nagnetatelja_minus_newLL : LREAL;
	AI_Os_sdvig_nagnetatelja_minus_status : UDINT;
	AI_Os_sdvig_nagnetatelja_minus_value : LREAL;
	AI_Os_sdvig_nagnetatelja_minus_LW : LREAL;
	AI_Os_sdvig_nagnetatelja_minus_newLW : LREAL;
	AI_Os_sdvig_nagnetatelja_minus_LA : LREAL;
	AI_Os_sdvig_nagnetatelja_minus_newLA : LREAL;
	AI_Yroven_masla_MB_HL : LREAL;
	AI_Yroven_masla_MB_LL : LREAL;
	AI_Yroven_masla_MB_command : UINT;
	AI_Yroven_masla_MB_newHL : LREAL;
	AI_Yroven_masla_MB_newLL : LREAL;
	AI_Yroven_masla_MB_status : UDINT;
	AI_Yroven_masla_MB_value : LREAL;
	AI_Yroven_masla_MB_LW : LREAL;
	AI_Yroven_masla_MB_newLW : LREAL;
	AI_Kontrol_per_220V_HL : LREAL;
	AI_Kontrol_per_220V_LL : LREAL;
	AI_Kontrol_per_220V_command : UINT;
	AI_Kontrol_per_220V_newHL : LREAL;
	AI_Kontrol_per_220V_newLL : LREAL;
	AI_Kontrol_per_220V_status : UDINT;
	AI_Kontrol_per_220V_value : LREAL;
	AI_Kontrol_per_220V_HW : LREAL;
	AI_Kontrol_per_220V_newHW : LREAL;
	AI_Kontrol_per_220V_LW : LREAL;
	AI_Kontrol_per_220V_newLW : LREAL;
	AI_Kontrol_post_220V_HL : LREAL;
	AI_Kontrol_post_220V_LL : LREAL;
	AI_Kontrol_post_220V_command : UINT;
	AI_Kontrol_post_220V_newHL : LREAL;
	AI_Kontrol_post_220V_newLL : LREAL;
	AI_Kontrol_post_220V_status : UDINT;
	AI_Kontrol_post_220V_value : LREAL;
	AI_Kontrol_post_220V_HW : LREAL;
	AI_Kontrol_post_220V_newHW : LREAL;
	AI_Kontrol_post_220V_LW : LREAL;
	AI_Kontrol_post_220V_newLW : LREAL;
	AI_Tok_statora_HL : LREAL;
	AI_Tok_statora_LL : LREAL;
	AI_Tok_statora_command : UINT;
	AI_Tok_statora_newHL : LREAL;
	AI_Tok_statora_newLL : LREAL;
	AI_Tok_statora_status : UDINT;
	AI_Tok_statora_value : LREAL;
	AI_Tok_statora_LW : LREAL;
	AI_Tok_statora_newLW : LREAL;
	AI_Vibro_skorost_OPED_T1_HL : LREAL;
	AI_Vibro_skorost_OPED_T1_LL : LREAL;
	AI_Vibro_skorost_OPED_T1_command : UINT;
	AI_Vibro_skorost_OPED_T1_newHL : LREAL;
	AI_Vibro_skorost_OPED_T1_newLL : LREAL;
	AI_Vibro_skorost_OPED_T1_status : UDINT;
	AI_Vibro_skorost_OPED_T1_value : LREAL;
	AI_Vibro_skorost_OPED_T1_HW : LREAL;
	AI_Vibro_skorost_OPED_T1_newHW : LREAL;
	AI_Vibro_skorost_OPED_T1_HA : LREAL;
	AI_Vibro_skorost_OPED_T1_newHA : LREAL;
	AI_Vibro_skorost_OYPED_T2_HL : LREAL;
	AI_Vibro_skorost_OYPED_T2_LL : LREAL;
	AI_Vibro_skorost_OYPED_T2_command : UINT;
	AI_Vibro_skorost_OYPED_T2_newHL : LREAL;
	AI_Vibro_skorost_OYPED_T2_newLL : LREAL;
	AI_Vibro_skorost_OYPED_T2_status : UDINT;
	AI_Vibro_skorost_OYPED_T2_value : LREAL;
	AI_Vibro_skorost_OYPED_T2_HW : LREAL;
	AI_Vibro_skorost_OYPED_T2_newHW : LREAL;
	AI_Vibro_skorost_OYPED_T2_HA : LREAL;
	AI_Vibro_skorost_OYPED_T2_newHA : LREAL;
	AI_Vibro_skorost_OYP_kolesa_ED_T3_HL : LREAL;
	AI_Vibro_skorost_OYP_kolesa_ED_T3_LL : LREAL;
	AI_Vibro_skorost_OYP_kolesa_ED_T3_command : UINT;
	AI_Vibro_skorost_OYP_kolesa_ED_T3_newHL : LREAL;
	AI_Vibro_skorost_OYP_kolesa_ED_T3_newLL : LREAL;
	AI_Vibro_skorost_OYP_kolesa_ED_T3_status : UDINT;
	AI_Vibro_skorost_OYP_kolesa_ED_T3_value : LREAL;
	AI_Vibro_skorost_OYP_kolesa_ED_T3_HW : LREAL;
	AI_Vibro_skorost_OYP_kolesa_ED_T3_newHW : LREAL;
	AI_Vibro_skorost_OYP_kolesa_ED_T3_HA : LREAL;
	AI_Vibro_skorost_OYP_kolesa_ED_T3_newHA : LREAL;
	AI_Vibro_skorost_OP_kolesa_RH_T4_HL : LREAL;
	AI_Vibro_skorost_OP_kolesa_RH_T4_LL : LREAL;
	AI_Vibro_skorost_OP_kolesa_RH_T4_command : UINT;
	AI_Vibro_skorost_OP_kolesa_RH_T4_newHL : LREAL;
	AI_Vibro_skorost_OP_kolesa_RH_T4_newLL : LREAL;
	AI_Vibro_skorost_OP_kolesa_RH_T4_status : UDINT;
	AI_Vibro_skorost_OP_kolesa_RH_T4_value : LREAL;
	AI_Vibro_skorost_OP_kolesa_RH_T4_HW : LREAL;
	AI_Vibro_skorost_OP_kolesa_RH_T4_newHW : LREAL;
	AI_Vibro_skorost_OP_kolesa_RH_T4_HA : LREAL;
	AI_Vibro_skorost_OP_kolesa_RH_T4_newHA : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T5_HL : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T5_LL : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T5_command : UINT;
	AI_Vibro_skorost_OP_shesterni_RED_T5_newHL : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T5_newLL : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T5_status : UDINT;
	AI_Vibro_skorost_OP_shesterni_RED_T5_value : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T5_HW : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T5_newHW : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T5_HA : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T5_newHA : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T6_HL : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T6_LL : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T6_command : UINT;
	AI_Vibro_skorost_OP_shesterni_RED_T6_newHL : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T6_newLL : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T6_status : UDINT;
	AI_Vibro_skorost_OP_shesterni_RED_T6_value : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T6_HW : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T6_newHW : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T6_HA : LREAL;
	AI_Vibro_skorost_OP_shesterni_RED_T6_newHA : LREAL;
END_VAR

ai.Tstali_statora_kanal_1.inCommand_ARM := UINT_TO_WORD(AI_Tstali_statora_kanal_1_command);
ai.Tstali_statora_kanal_1.dHL := AI_Tstali_statora_kanal_1_newHL;
ai.Tstali_statora_kanal_1.dLL := AI_Tstali_statora_kanal_1_newLL;
ai.Tstali_statora_kanal_1.dHW := AI_Tstali_statora_kanal_1_newHW;


ai.Tstali_statora_kanal_2.inCommand_ARM := UINT_TO_WORD(AI_Tstali_statora_kanal_2_command);
ai.Tstali_statora_kanal_2.dHL := AI_Tstali_statora_kanal_2_newHL;
ai.Tstali_statora_kanal_2.dLL := AI_Tstali_statora_kanal_2_newLL;
ai.Tstali_statora_kanal_2.dHW := AI_Tstali_statora_kanal_2_newHW;


ai.Tstali_statora_kanal_3.inCommand_ARM := UINT_TO_WORD(AI_Tstali_statora_kanal_3_command);
ai.Tstali_statora_kanal_3.dHL := AI_Tstali_statora_kanal_3_newHL;
ai.Tstali_statora_kanal_3.dLL := AI_Tstali_statora_kanal_3_newLL;
ai.Tstali_statora_kanal_3.dHW := AI_Tstali_statora_kanal_3_newHW;


ai.Tmedi_statora_kanal_1.inCommand_ARM := UINT_TO_WORD(AI_Tmedi_statora_kanal_1_command);
ai.Tmedi_statora_kanal_1.dHL := AI_Tmedi_statora_kanal_1_newHL;
ai.Tmedi_statora_kanal_1.dLL := AI_Tmedi_statora_kanal_1_newLL;
ai.Tmedi_statora_kanal_1.dHW := AI_Tmedi_statora_kanal_1_newHW;


ai.Tmedi_statora_kanal_2.inCommand_ARM := UINT_TO_WORD(AI_Tmedi_statora_kanal_2_command);
ai.Tmedi_statora_kanal_2.dHL := AI_Tmedi_statora_kanal_2_newHL;
ai.Tmedi_statora_kanal_2.dLL := AI_Tmedi_statora_kanal_2_newLL;
ai.Tmedi_statora_kanal_2.dHW := AI_Tmedi_statora_kanal_2_newHW;


ai.Tmedi_statora_kanal_3.inCommand_ARM := UINT_TO_WORD(AI_Tmedi_statora_kanal_3_command);
ai.Tmedi_statora_kanal_3.dHL := AI_Tmedi_statora_kanal_3_newHL;
ai.Tmedi_statora_kanal_3.dLL := AI_Tmedi_statora_kanal_3_newLL;
ai.Tmedi_statora_kanal_3.dHW := AI_Tmedi_statora_kanal_3_newHW;


ai.Toporno_podshipnika_EDT_1.inCommand_ARM := UINT_TO_WORD(AI_Toporno_podshipnika_EDT_1_command);
ai.Toporno_podshipnika_EDT_1.dHL := AI_Toporno_podshipnika_EDT_1_newHL;
ai.Toporno_podshipnika_EDT_1.dLL := AI_Toporno_podshipnika_EDT_1_newLL;
ai.Toporno_podshipnika_EDT_1.dHW := AI_Toporno_podshipnika_EDT_1_newHW;
ai.Toporno_podshipnika_EDT_1.dHA := AI_Toporno_podshipnika_EDT_1_newHA;


ai.Toy_podshipnika_EDT_2.inCommand_ARM := UINT_TO_WORD(AI_Toy_podshipnika_EDT_2_command);
ai.Toy_podshipnika_EDT_2.dHL := AI_Toy_podshipnika_EDT_2_newHL;
ai.Toy_podshipnika_EDT_2.dLL := AI_Toy_podshipnika_EDT_2_newLL;
ai.Toy_podshipnika_EDT_2.dHW := AI_Toy_podshipnika_EDT_2_newHW;
ai.Toy_podshipnika_EDT_2.dHA := AI_Toy_podshipnika_EDT_2_newHA;


ai.Toy_podshipnika_kol_EDT_3.inCommand_ARM := UINT_TO_WORD(AI_Toy_podshipnika_kol_EDT_3_command);
ai.Toy_podshipnika_kol_EDT_3.dHL := AI_Toy_podshipnika_kol_EDT_3_newHL;
ai.Toy_podshipnika_kol_EDT_3.dLL := AI_Toy_podshipnika_kol_EDT_3_newLL;
ai.Toy_podshipnika_kol_EDT_3.dHW := AI_Toy_podshipnika_kol_EDT_3_newHW;
ai.Toy_podshipnika_kol_EDT_3.dHA := AI_Toy_podshipnika_kol_EDT_3_newHA;


ai.Toy_podshipnika_kol_EDT_4.inCommand_ARM := UINT_TO_WORD(AI_Toy_podshipnika_kol_EDT_4_command);
ai.Toy_podshipnika_kol_EDT_4.dHL := AI_Toy_podshipnika_kol_EDT_4_newHL;
ai.Toy_podshipnika_kol_EDT_4.dLL := AI_Toy_podshipnika_kol_EDT_4_newLL;
ai.Toy_podshipnika_kol_EDT_4.dHW := AI_Toy_podshipnika_kol_EDT_4_newHW;
ai.Toy_podshipnika_kol_EDT_4.dHA := AI_Toy_podshipnika_kol_EDT_4_newHA;


ai.Toy_podshipnika_shest_red_EDT_5.inCommand_ARM := UINT_TO_WORD(AI_Toy_podshipnika_shest_red_EDT_5_command);
ai.Toy_podshipnika_shest_red_EDT_5.dHL := AI_Toy_podshipnika_shest_red_EDT_5_newHL;
ai.Toy_podshipnika_shest_red_EDT_5.dLL := AI_Toy_podshipnika_shest_red_EDT_5_newLL;
ai.Toy_podshipnika_shest_red_EDT_5.dHW := AI_Toy_podshipnika_shest_red_EDT_5_newHW;
ai.Toy_podshipnika_shest_red_EDT_5.dHA := AI_Toy_podshipnika_shest_red_EDT_5_newHA;


ai.Ty_podshipnika_red_EDT_6.inCommand_ARM := UINT_TO_WORD(AI_Ty_podshipnika_red_EDT_6_command);
ai.Ty_podshipnika_red_EDT_6.dHL := AI_Ty_podshipnika_red_EDT_6_newHL;
ai.Ty_podshipnika_red_EDT_6.dLL := AI_Ty_podshipnika_red_EDT_6_newLL;
ai.Ty_podshipnika_red_EDT_6.dHW := AI_Ty_podshipnika_red_EDT_6_newHW;
ai.Ty_podshipnika_red_EDT_6.dHA := AI_Ty_podshipnika_red_EDT_6_newHA;


ai.Ty_podshipnika_nagnet_EDT_7_1.inCommand_ARM := UINT_TO_WORD(AI_Ty_podshipnika_nagnet_EDT_7_1_command);
ai.Ty_podshipnika_nagnet_EDT_7_1.dHL := AI_Ty_podshipnika_nagnet_EDT_7_1_newHL;
ai.Ty_podshipnika_nagnet_EDT_7_1.dLL := AI_Ty_podshipnika_nagnet_EDT_7_1_newLL;
ai.Ty_podshipnika_nagnet_EDT_7_1.dHW := AI_Ty_podshipnika_nagnet_EDT_7_1_newHW;
ai.Ty_podshipnika_nagnet_EDT_7_1.dHA := AI_Ty_podshipnika_nagnet_EDT_7_1_newHA;


ai.Ty_podshipnika_nagnet_EDT_7_2.inCommand_ARM := UINT_TO_WORD(AI_Ty_podshipnika_nagnet_EDT_7_2_command);
ai.Ty_podshipnika_nagnet_EDT_7_2.dHL := AI_Ty_podshipnika_nagnet_EDT_7_2_newHL;
ai.Ty_podshipnika_nagnet_EDT_7_2.dLL := AI_Ty_podshipnika_nagnet_EDT_7_2_newLL;
ai.Ty_podshipnika_nagnet_EDT_7_2.dHW := AI_Ty_podshipnika_nagnet_EDT_7_2_newHW;
ai.Ty_podshipnika_nagnet_EDT_7_2.dHA := AI_Ty_podshipnika_nagnet_EDT_7_2_newHA;


ai.Toy_podshipnika_svobod_konca_EDT_8_1.inCommand_ARM := UINT_TO_WORD(AI_Toy_podshipnika_svobod_konca_EDT_8_1_command);
ai.Toy_podshipnika_svobod_konca_EDT_8_1.dHL := AI_Toy_podshipnika_svobod_konca_EDT_8_1_newHL;
ai.Toy_podshipnika_svobod_konca_EDT_8_1.dLL := AI_Toy_podshipnika_svobod_konca_EDT_8_1_newLL;
ai.Toy_podshipnika_svobod_konca_EDT_8_1.dHW := AI_Toy_podshipnika_svobod_konca_EDT_8_1_newHW;
ai.Toy_podshipnika_svobod_konca_EDT_8_1.dHA := AI_Toy_podshipnika_svobod_konca_EDT_8_1_newHA;


ai.Toy_podshipnika_svobod_konca_EDT_8_2.inCommand_ARM := UINT_TO_WORD(AI_Toy_podshipnika_svobod_konca_EDT_8_2_command);
ai.Toy_podshipnika_svobod_konca_EDT_8_2.dHL := AI_Toy_podshipnika_svobod_konca_EDT_8_2_newHL;
ai.Toy_podshipnika_svobod_konca_EDT_8_2.dLL := AI_Toy_podshipnika_svobod_konca_EDT_8_2_newLL;
ai.Toy_podshipnika_svobod_konca_EDT_8_2.dHW := AI_Toy_podshipnika_svobod_konca_EDT_8_2_newHW;
ai.Toy_podshipnika_svobod_konca_EDT_8_2.dHA := AI_Toy_podshipnika_svobod_konca_EDT_8_2_newHA;


ai.Toy_podshipnika_rab_kol_EDT_9_1.inCommand_ARM := UINT_TO_WORD(AI_Toy_podshipnika_rab_kol_EDT_9_1_command);
ai.Toy_podshipnika_rab_kol_EDT_9_1.dHL := AI_Toy_podshipnika_rab_kol_EDT_9_1_newHL;
ai.Toy_podshipnika_rab_kol_EDT_9_1.dLL := AI_Toy_podshipnika_rab_kol_EDT_9_1_newLL;
ai.Toy_podshipnika_rab_kol_EDT_9_1.dHW := AI_Toy_podshipnika_rab_kol_EDT_9_1_newHW;
ai.Toy_podshipnika_rab_kol_EDT_9_1.dHA := AI_Toy_podshipnika_rab_kol_EDT_9_1_newHA;


ai.Toy_podshipnika_rab_kol_EDT_9_2.inCommand_ARM := UINT_TO_WORD(AI_Toy_podshipnika_rab_kol_EDT_9_2_command);
ai.Toy_podshipnika_rab_kol_EDT_9_2.dHL := AI_Toy_podshipnika_rab_kol_EDT_9_2_newHL;
ai.Toy_podshipnika_rab_kol_EDT_9_2.dLL := AI_Toy_podshipnika_rab_kol_EDT_9_2_newLL;
ai.Toy_podshipnika_rab_kol_EDT_9_2.dHW := AI_Toy_podshipnika_rab_kol_EDT_9_2_newHW;
ai.Toy_podshipnika_rab_kol_EDT_9_2.dHA := AI_Toy_podshipnika_rab_kol_EDT_9_2_newHA;


ai.Toy_podshipnika_nerab_kol_EDT_10_1.inCommand_ARM := UINT_TO_WORD(AI_Toy_podshipnika_nerab_kol_EDT_10_1_command);
ai.Toy_podshipnika_nerab_kol_EDT_10_1.dHL := AI_Toy_podshipnika_nerab_kol_EDT_10_1_newHL;
ai.Toy_podshipnika_nerab_kol_EDT_10_1.dLL := AI_Toy_podshipnika_nerab_kol_EDT_10_1_newLL;
ai.Toy_podshipnika_nerab_kol_EDT_10_1.dHW := AI_Toy_podshipnika_nerab_kol_EDT_10_1_newHW;
ai.Toy_podshipnika_nerab_kol_EDT_10_1.dHA := AI_Toy_podshipnika_nerab_kol_EDT_10_1_newHA;


ai.Toy_podshipnika_nerab_kol_EDT_10_2.inCommand_ARM := UINT_TO_WORD(AI_Toy_podshipnika_nerab_kol_EDT_10_2_command);
ai.Toy_podshipnika_nerab_kol_EDT_10_2.dHL := AI_Toy_podshipnika_nerab_kol_EDT_10_2_newHL;
ai.Toy_podshipnika_nerab_kol_EDT_10_2.dLL := AI_Toy_podshipnika_nerab_kol_EDT_10_2_newLL;
ai.Toy_podshipnika_nerab_kol_EDT_10_2.dHW := AI_Toy_podshipnika_nerab_kol_EDT_10_2_newHW;
ai.Toy_podshipnika_nerab_kol_EDT_10_2.dHA := AI_Toy_podshipnika_nerab_kol_EDT_10_2_newHA;


ai.Tholodnogo_vozduha_ED_kanal_1.inCommand_ARM := UINT_TO_WORD(AI_Tholodnogo_vozduha_ED_kanal_1_command);
ai.Tholodnogo_vozduha_ED_kanal_1.dHL := AI_Tholodnogo_vozduha_ED_kanal_1_newHL;
ai.Tholodnogo_vozduha_ED_kanal_1.dLL := AI_Tholodnogo_vozduha_ED_kanal_1_newLL;
ai.Tholodnogo_vozduha_ED_kanal_1.dHW := AI_Tholodnogo_vozduha_ED_kanal_1_newHW;


ai.Tholodnogo_vozduha_ED_kanal_2.inCommand_ARM := UINT_TO_WORD(AI_Tholodnogo_vozduha_ED_kanal_2_command);
ai.Tholodnogo_vozduha_ED_kanal_2.dHL := AI_Tholodnogo_vozduha_ED_kanal_2_newHL;
ai.Tholodnogo_vozduha_ED_kanal_2.dLL := AI_Tholodnogo_vozduha_ED_kanal_2_newLL;
ai.Tholodnogo_vozduha_ED_kanal_2.dHW := AI_Tholodnogo_vozduha_ED_kanal_2_newHW;


ai.Tgorjachego_vozduha_ED_kanal_1.inCommand_ARM := UINT_TO_WORD(AI_Tgorjachego_vozduha_ED_kanal_1_command);
ai.Tgorjachego_vozduha_ED_kanal_1.dHL := AI_Tgorjachego_vozduha_ED_kanal_1_newHL;
ai.Tgorjachego_vozduha_ED_kanal_1.dLL := AI_Tgorjachego_vozduha_ED_kanal_1_newLL;
ai.Tgorjachego_vozduha_ED_kanal_1.dHW := AI_Tgorjachego_vozduha_ED_kanal_1_newHW;


ai.Tgorjachego_vozduha_ED_kanal_2.inCommand_ARM := UINT_TO_WORD(AI_Tgorjachego_vozduha_ED_kanal_2_command);
ai.Tgorjachego_vozduha_ED_kanal_2.dHL := AI_Tgorjachego_vozduha_ED_kanal_2_newHL;
ai.Tgorjachego_vozduha_ED_kanal_2.dLL := AI_Tgorjachego_vozduha_ED_kanal_2_newLL;
ai.Tgorjachego_vozduha_ED_kanal_2.dHW := AI_Tgorjachego_vozduha_ED_kanal_2_newHW;


ai.Tnarujnogo_vozduha.inCommand_ARM := UINT_TO_WORD(AI_Tnarujnogo_vozduha_command);
ai.Tnarujnogo_vozduha.dHL := AI_Tnarujnogo_vozduha_newHL;
ai.Tnarujnogo_vozduha.dLL := AI_Tnarujnogo_vozduha_newLL;
ai.Tnarujnogo_vozduha.dHW := AI_Tnarujnogo_vozduha_newHW;


ai.Tgaza_na_vhode_H.inCommand_ARM := UINT_TO_WORD(AI_Tgaza_na_vhode_H_command);
ai.Tgaza_na_vhode_H.dHL := AI_Tgaza_na_vhode_H_newHL;
ai.Tgaza_na_vhode_H.dLL := AI_Tgaza_na_vhode_H_newLL;
ai.Tgaza_na_vhode_H.dHW := AI_Tgaza_na_vhode_H_newHW;


ai.Tgaza_na_vyhode_H.inCommand_ARM := UINT_TO_WORD(AI_Tgaza_na_vyhode_H_command);
ai.Tgaza_na_vyhode_H.dHL := AI_Tgaza_na_vyhode_H_newHL;
ai.Tgaza_na_vyhode_H.dLL := AI_Tgaza_na_vyhode_H_newLL;
ai.Tgaza_na_vyhode_H.dHW := AI_Tgaza_na_vyhode_H_newHW;
ai.Tgaza_na_vyhode_H.dHA := AI_Tgaza_na_vyhode_H_newHA;


ai.Tmasla_do_AVOM.inCommand_ARM := UINT_TO_WORD(AI_Tmasla_do_AVOM_command);
ai.Tmasla_do_AVOM.dHL := AI_Tmasla_do_AVOM_newHL;
ai.Tmasla_do_AVOM.dLL := AI_Tmasla_do_AVOM_newLL;
ai.Tmasla_do_AVOM.dHW := AI_Tmasla_do_AVOM_newHW;


ai.Tmasla_posle_AVOM.inCommand_ARM := UINT_TO_WORD(AI_Tmasla_posle_AVOM_command);
ai.Tmasla_posle_AVOM.dHL := AI_Tmasla_posle_AVOM_newHL;
ai.Tmasla_posle_AVOM.dLL := AI_Tmasla_posle_AVOM_newLL;
ai.Tmasla_posle_AVOM.dHW := AI_Tmasla_posle_AVOM_newHW;


ai.Tmasla_MB.inCommand_ARM := UINT_TO_WORD(AI_Tmasla_MB_command);
ai.Tmasla_MB.dHL := AI_Tmasla_MB_newHL;
ai.Tmasla_MB.dLL := AI_Tmasla_MB_newLL;
ai.Tmasla_MB.dHW := AI_Tmasla_MB_newHW;


ai.Tmasla_MB_TEN.inCommand_ARM := UINT_TO_WORD(AI_Tmasla_MB_TEN_command);
ai.Tmasla_MB_TEN.dHL := AI_Tmasla_MB_TEN_newHL;
ai.Tmasla_MB_TEN.dLL := AI_Tmasla_MB_TEN_newLL;
ai.Tmasla_MB_TEN.dHW := AI_Tmasla_MB_TEN_newHW;


ai.Tshu.inCommand_ARM := UINT_TO_WORD(AI_Tshu_command);
ai.Tshu.dHL := AI_Tshu_newHL;
ai.Tshu.dLL := AI_Tshu_newLL;


ai.Pmaslo_sm_nizkoe.inCommand_ARM := UINT_TO_WORD(AI_Pmaslo_sm_nizkoe_command);
ai.Pmaslo_sm_nizkoe.dHL := AI_Pmaslo_sm_nizkoe_newHL;
ai.Pmaslo_sm_nizkoe.dLL := AI_Pmaslo_sm_nizkoe_newLL;
ai.Pmaslo_sm_nizkoe.dLW := AI_Pmaslo_sm_nizkoe_newLW;
ai.Pmaslo_sm_nizkoe.dLA := AI_Pmaslo_sm_nizkoe_newLA;


ai.Pmaslo_sm_vysokoe.inCommand_ARM := UINT_TO_WORD(AI_Pmaslo_sm_vysokoe_command);
ai.Pmaslo_sm_vysokoe.dHL := AI_Pmaslo_sm_vysokoe_newHL;
ai.Pmaslo_sm_vysokoe.dLL := AI_Pmaslo_sm_vysokoe_newLL;
ai.Pmaslo_sm_vysokoe.dLW := AI_Pmaslo_sm_vysokoe_newLW;
ai.Pmaslo_sm_vysokoe.dLA := AI_Pmaslo_sm_vysokoe_newLA;


ai.Pmasla_posle_GNS.inCommand_ARM := UINT_TO_WORD(AI_Pmasla_posle_GNS_command);
ai.Pmasla_posle_GNS.dHL := AI_Pmasla_posle_GNS_newHL;
ai.Pmasla_posle_GNS.dLL := AI_Pmasla_posle_GNS_newLL;
ai.Pmasla_posle_GNS.dHW := AI_Pmasla_posle_GNS_newHW;
ai.Pmasla_posle_GNS.dLW := AI_Pmasla_posle_GNS_newLW;


ai.Pmasla_posle_NU.inCommand_ARM := UINT_TO_WORD(AI_Pmasla_posle_NU_command);
ai.Pmasla_posle_NU.dHL := AI_Pmasla_posle_NU_newHL;
ai.Pmasla_posle_NU.dLL := AI_Pmasla_posle_NU_newLL;
ai.Pmasla_posle_NU.dLW := AI_Pmasla_posle_NU_newLW;


ai.Pgaza_na_vhode_nagnetatelia.inCommand_ARM := UINT_TO_WORD(AI_Pgaza_na_vhode_nagnetatelia_command);
ai.Pgaza_na_vhode_nagnetatelia.dHL := AI_Pgaza_na_vhode_nagnetatelia_newHL;
ai.Pgaza_na_vhode_nagnetatelia.dLL := AI_Pgaza_na_vhode_nagnetatelia_newLL;
ai.Pgaza_na_vhode_nagnetatelia.dLW := AI_Pgaza_na_vhode_nagnetatelia_newLW;


ai.Pgaza_na_vyhode_nagnetatelia.inCommand_ARM := UINT_TO_WORD(AI_Pgaza_na_vyhode_nagnetatelia_command);
ai.Pgaza_na_vyhode_nagnetatelia.dHL := AI_Pgaza_na_vyhode_nagnetatelia_newHL;
ai.Pgaza_na_vyhode_nagnetatelia.dLL := AI_Pgaza_na_vyhode_nagnetatelia_newLL;
ai.Pgaza_na_vyhode_nagnetatelia.dLW := AI_Pgaza_na_vyhode_nagnetatelia_newLW;
ai.Pgaza_na_vyhode_nagnetatelia.dHA := AI_Pgaza_na_vyhode_nagnetatelia_newHA;


ai.Pimpuls_gaz.inCommand_ARM := UINT_TO_WORD(AI_Pimpuls_gaz_command);
ai.Pimpuls_gaz.dHL := AI_Pimpuls_gaz_newHL;
ai.Pimpuls_gaz.dLL := AI_Pimpuls_gaz_newLL;
ai.Pimpuls_gaz.dLW := AI_Pimpuls_gaz_newLW;


ai.dPgaza_na_maslo_filtre.inCommand_ARM := UINT_TO_WORD(AI_dPgaza_na_maslo_filtre_command);
ai.dPgaza_na_maslo_filtre.dHL := AI_dPgaza_na_maslo_filtre_newHL;
ai.dPgaza_na_maslo_filtre.dLL := AI_dPgaza_na_maslo_filtre_newLL;
ai.dPgaza_na_maslo_filtre.dHW := AI_dPgaza_na_maslo_filtre_newHW;


ai.dPgaza_na_konfuzore.inCommand_ARM := UINT_TO_WORD(AI_dPgaza_na_konfuzore_command);
ai.dPgaza_na_konfuzore.dHL := AI_dPgaza_na_konfuzore_newHL;
ai.dPgaza_na_konfuzore.dLL := AI_dPgaza_na_konfuzore_newLL;
ai.dPgaza_na_konfuzore.dLW := AI_dPgaza_na_konfuzore_newLW;


ai.dPmaslo_gaz.inCommand_ARM := UINT_TO_WORD(AI_dPmaslo_gaz_command);
ai.dPmaslo_gaz.dHL := AI_dPmaslo_gaz_newHL;
ai.dPmaslo_gaz.dLL := AI_dPmaslo_gaz_newLL;
ai.dPmaslo_gaz.dLW := AI_dPmaslo_gaz_newLW;
ai.dPmaslo_gaz.dLA := AI_dPmaslo_gaz_newLA;


ai.Os_sdvig_nagnetatelja_plus.inCommand_ARM := UINT_TO_WORD(AI_Os_sdvig_nagnetatelja_plus_command);
ai.Os_sdvig_nagnetatelja_plus.dHL := AI_Os_sdvig_nagnetatelja_plus_newHL;
ai.Os_sdvig_nagnetatelja_plus.dLL := AI_Os_sdvig_nagnetatelja_plus_newLL;
ai.Os_sdvig_nagnetatelja_plus.dHW := AI_Os_sdvig_nagnetatelja_plus_newHW;
ai.Os_sdvig_nagnetatelja_plus.dHA := AI_Os_sdvig_nagnetatelja_plus_newHA;


ai.Os_sdvig_nagnetatelja_minus.inCommand_ARM := UINT_TO_WORD(AI_Os_sdvig_nagnetatelja_minus_command);
ai.Os_sdvig_nagnetatelja_minus.dHL := AI_Os_sdvig_nagnetatelja_minus_newHL;
ai.Os_sdvig_nagnetatelja_minus.dLL := AI_Os_sdvig_nagnetatelja_minus_newLL;
ai.Os_sdvig_nagnetatelja_minus.dLW := AI_Os_sdvig_nagnetatelja_minus_newLW;
ai.Os_sdvig_nagnetatelja_minus.dLA := AI_Os_sdvig_nagnetatelja_minus_newLA;


ai.Yroven_masla_MB.inCommand_ARM := UINT_TO_WORD(AI_Yroven_masla_MB_command);
ai.Yroven_masla_MB.dHL := AI_Yroven_masla_MB_newHL;
ai.Yroven_masla_MB.dLL := AI_Yroven_masla_MB_newLL;
ai.Yroven_masla_MB.dLW := AI_Yroven_masla_MB_newLW;


ai.Kontrol_per_220V.inCommand_ARM := UINT_TO_WORD(AI_Kontrol_per_220V_command);
ai.Kontrol_per_220V.dHL := AI_Kontrol_per_220V_newHL;
ai.Kontrol_per_220V.dLL := AI_Kontrol_per_220V_newLL;
ai.Kontrol_per_220V.dHW := AI_Kontrol_per_220V_newHW;
ai.Kontrol_per_220V.dLW := AI_Kontrol_per_220V_newLW;


ai.Kontrol_post_220V.inCommand_ARM := UINT_TO_WORD(AI_Kontrol_post_220V_command);
ai.Kontrol_post_220V.dHL := AI_Kontrol_post_220V_newHL;
ai.Kontrol_post_220V.dLL := AI_Kontrol_post_220V_newLL;
ai.Kontrol_post_220V.dHW := AI_Kontrol_post_220V_newHW;
ai.Kontrol_post_220V.dLW := AI_Kontrol_post_220V_newLW;


ai.Tok_statora.inCommand_ARM := UINT_TO_WORD(AI_Tok_statora_command);
ai.Tok_statora.dHL := AI_Tok_statora_newHL;
ai.Tok_statora.dLL := AI_Tok_statora_newLL;
ai.Tok_statora.dLW := AI_Tok_statora_newLW;


ai.Vibro_skorost_OPED_T1.inCommand_ARM := UINT_TO_WORD(AI_Vibro_skorost_OPED_T1_command);
ai.Vibro_skorost_OPED_T1.dHL := AI_Vibro_skorost_OPED_T1_newHL;
ai.Vibro_skorost_OPED_T1.dLL := AI_Vibro_skorost_OPED_T1_newLL;
ai.Vibro_skorost_OPED_T1.dHW := AI_Vibro_skorost_OPED_T1_newHW;
ai.Vibro_skorost_OPED_T1.dHA := AI_Vibro_skorost_OPED_T1_newHA;


ai.Vibro_skorost_OYPED_T2.inCommand_ARM := UINT_TO_WORD(AI_Vibro_skorost_OYPED_T2_command);
ai.Vibro_skorost_OYPED_T2.dHL := AI_Vibro_skorost_OYPED_T2_newHL;
ai.Vibro_skorost_OYPED_T2.dLL := AI_Vibro_skorost_OYPED_T2_newLL;
ai.Vibro_skorost_OYPED_T2.dHW := AI_Vibro_skorost_OYPED_T2_newHW;
ai.Vibro_skorost_OYPED_T2.dHA := AI_Vibro_skorost_OYPED_T2_newHA;


ai.Vibro_skorost_OYP_kolesa_ED_T3.inCommand_ARM := UINT_TO_WORD(AI_Vibro_skorost_OYP_kolesa_ED_T3_command);
ai.Vibro_skorost_OYP_kolesa_ED_T3.dHL := AI_Vibro_skorost_OYP_kolesa_ED_T3_newHL;
ai.Vibro_skorost_OYP_kolesa_ED_T3.dLL := AI_Vibro_skorost_OYP_kolesa_ED_T3_newLL;
ai.Vibro_skorost_OYP_kolesa_ED_T3.dHW := AI_Vibro_skorost_OYP_kolesa_ED_T3_newHW;
ai.Vibro_skorost_OYP_kolesa_ED_T3.dHA := AI_Vibro_skorost_OYP_kolesa_ED_T3_newHA;


ai.Vibro_skorost_OP_kolesa_RH_T4.inCommand_ARM := UINT_TO_WORD(AI_Vibro_skorost_OP_kolesa_RH_T4_command);
ai.Vibro_skorost_OP_kolesa_RH_T4.dHL := AI_Vibro_skorost_OP_kolesa_RH_T4_newHL;
ai.Vibro_skorost_OP_kolesa_RH_T4.dLL := AI_Vibro_skorost_OP_kolesa_RH_T4_newLL;
ai.Vibro_skorost_OP_kolesa_RH_T4.dHW := AI_Vibro_skorost_OP_kolesa_RH_T4_newHW;
ai.Vibro_skorost_OP_kolesa_RH_T4.dHA := AI_Vibro_skorost_OP_kolesa_RH_T4_newHA;


ai.Vibro_skorost_OP_shesterni_RED_T5.inCommand_ARM := UINT_TO_WORD(AI_Vibro_skorost_OP_shesterni_RED_T5_command);
ai.Vibro_skorost_OP_shesterni_RED_T5.dHL := AI_Vibro_skorost_OP_shesterni_RED_T5_newHL;
ai.Vibro_skorost_OP_shesterni_RED_T5.dLL := AI_Vibro_skorost_OP_shesterni_RED_T5_newLL;
ai.Vibro_skorost_OP_shesterni_RED_T5.dHW := AI_Vibro_skorost_OP_shesterni_RED_T5_newHW;
ai.Vibro_skorost_OP_shesterni_RED_T5.dHA := AI_Vibro_skorost_OP_shesterni_RED_T5_newHA;


ai.Vibro_skorost_OP_shesterni_RED_T6.inCommand_ARM := UINT_TO_WORD(AI_Vibro_skorost_OP_shesterni_RED_T6_command);
ai.Vibro_skorost_OP_shesterni_RED_T6.dHL := AI_Vibro_skorost_OP_shesterni_RED_T6_newHL;
ai.Vibro_skorost_OP_shesterni_RED_T6.dLL := AI_Vibro_skorost_OP_shesterni_RED_T6_newLL;
ai.Vibro_skorost_OP_shesterni_RED_T6.dHW := AI_Vibro_skorost_OP_shesterni_RED_T6_newHW;
ai.Vibro_skorost_OP_shesterni_RED_T6.dHA := AI_Vibro_skorost_OP_shesterni_RED_T6_newHA;


