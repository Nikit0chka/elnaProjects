FUNCTION remontAllProtections : BOOL

VAR_IN_OUT
	protections : ProtectionsConfig;
END_VAR

VAR CONSTANT
	cmdRemont : WORD          := 4;
END_VAR

protections.Topornogo_podshipnika_EDT_1.inCommand_Alg:=cmdRemont;
protections.Toy_podshipnika_EDT_2.inCommand_Alg:=cmdRemont; 
protections.Toy_podshipnika_kol_EDT_3.inCommand_Alg:=cmdRemont; 
protections.Toy_podshipnika_kol_EDT_4.inCommand_Alg:=cmdRemont;
protections.To_podshipnika_shest_red_EDT_5.inCommand_Alg:=cmdRemont;
protections.To_podshipnika_shest_red_EDT_6.inCommand_Alg:=cmdRemont;
protections.To_podshipnika_N_EDT_7.inCommand_Alg:=cmdRemont;
protections.To_podshipnika_svob_konca_EDT_8.inCommand_Alg:=cmdRemont;
protections.Ty_podshipnika_rab_kol_EDT_9.inCommand_Alg:=cmdRemont;
protections.Typornogo_podshipnika_nerab_kolodok_HT_10.inCommand_Alg:=cmdRemont;
protections.Tgaza_na_vyhode_H.inCommand_Alg:=cmdRemont;
protections.Os_sdvig_nagnetatelja_plus.inCommand_Alg:=cmdRemont;
protections.Os_sdvig_nagnetatelja_minus.inCommand_Alg:=cmdRemont;
protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP.inCommand_Alg:=cmdRemont;
protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP.inCommand_Alg:=cmdRemont;
protections.Pgaza_na_vyhode_nagnetatelia.inCommand_Alg:=cmdRemont;
protections.dPmaslo_gaz.inCommand_Alg:=cmdRemont;
protections.Pmaslo_sm_nizkoe.inCommand_Alg:=cmdRemont;
protections.Pmaslo_sm_vysokoe.inCommand_Alg:=cmdRemont;
protections.Vibro_skorost_OPED_T1.inCommand_Alg:=cmdRemont;
protections.Vibro_skorost_OPED_T2.inCommand_Alg:=cmdRemont;
protections.Vibro_skorost_OYP_kolesa_ED_T3.inCommand_Alg:=cmdRemont;
protections.Vibro_skorost_OP_kolesa_RH_T4.inCommand_Alg:=cmdRemont;
protections.Vibro_skorost_OP_shesterni_RED_T5.inCommand_Alg:=cmdRemont;
protections.Vibro_skorost_OP_shesterni_RED_T6.inCommand_Alg:=cmdRemont;
protections.dPmaslo_gaz_less100.inCommand_Alg:=cmdRemont;
protections.Reg_vozb_off.inCommand_Alg:=cmdRemont;
protections.Fail_chastotnii_pusk.inCommand_Alg:=cmdRemont;
protections.Off_avar_vikluchatel.inCommand_Alg:=cmdRemont;
protections.AOKC_SHKC.inCommand_Alg:=cmdRemont;
protections.AO_PRU.inCommand_Alg:=cmdRemont;
protections.AO_ot_SHU.inCommand_Alg:=cmdRemont;
protections.mvOff.inCommand_Alg:=cmdRemont;
protections.Kran1_sdvig.inCommand_Alg:=cmdRemont;
protections.Kran2_sdvig.inCommand_Alg:=cmdRemont;