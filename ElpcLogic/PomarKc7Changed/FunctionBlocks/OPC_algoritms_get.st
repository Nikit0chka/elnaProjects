FUNCTION_BLOCK OPC_algoritms_get

VAR_EXTERNAL
	AI_autoNu_command : UINT;
	AI_AutoPns_command : UINT;
	AI_AutoAvom_command : UINT;
	AI_AutoTen_command : UINT;
	AI_AntiPompag_command : UINT;
	AI_testIm_command : UINT;
	AI_TestProtection_command : UINT;
	AI_Remont_command : UINT;
	AI_ppu_command : UINT;
	AI_puskOilSystem_command : UINT;
	AI_engineRun_command : UINT;
	AI_filling_command : UINT;
	AI_LineToRing_command : UINT;
	AI_RingToLine_command : UINT;
	AI_Apusk_command : UINT;
	AI_SemiAutoPusk_command : UINT;
	AI_no_command : UINT;
	AI_vibegPNS_command : UINT;
	AI_ao_command : UINT;
	AI_testPms_command : UINT;
	AI_testdPmg_command : UINT;
	AI_puskV_command : UINT;
	AI_puskK_command : UINT;
	AI_Pusk_F_faza1_command : UINT;
	AI_Pusk_F_faza2_command : UINT;
	AI_Pusk_TH_faza_command : UINT;
	AI_Prov_PMS_ALG_command : UINT;
	AI_Prov_opressovka_ALG_command : UINT;
	AI_Pusk_SEC_faza_chastotny_command : UINT;
	AI_Pusk_SEC_faza_reactor_command : UINT;
	algoritms : AlgoritmsConfig;
END_VAR



algoritms.autoNu.inCommand_ARM := UINT_TO_WORD(AI_autoNu_command);

algoritms.AutoPns.inCommand_ARM := UINT_TO_WORD(AI_AutoPns_command);

algoritms.AutoAvom.inCommand_ARM := UINT_TO_WORD(AI_AutoAvom_command);

algoritms.AutoTen.inCommand_ARM := UINT_TO_WORD(AI_AutoTen_command);

algoritms.AntiPompag.inCommand_ARM := UINT_TO_WORD(AI_AntiPompag_command);

algoritms.testIm.inCommand_ARM := UINT_TO_WORD(AI_testIm_command);

algoritms.TestProtection.inCommand_ARM := UINT_TO_WORD(AI_TestProtection_command);

algoritms.Remont.inCommand_ARM := UINT_TO_WORD(AI_Remont_command);

algoritms.ppu.inCommand_ARM := UINT_TO_WORD(AI_ppu_command);

algoritms.puskOilSystem.inCommand_ARM := UINT_TO_WORD(AI_puskOilSystem_command);

algoritms.engineRun.inCommand_ARM := UINT_TO_WORD(AI_engineRun_command);

algoritms.filling.inCommand_ARM := UINT_TO_WORD(AI_filling_command);

algoritms.LineToRing.inCommand_ARM := UINT_TO_WORD(AI_LineToRing_command);

algoritms.RingToLine.inCommand_ARM := UINT_TO_WORD(AI_RingToLine_command);

algoritms.Apusk.inCommand_ARM := UINT_TO_WORD(AI_Apusk_command);

algoritms.SemiAutoPusk.inCommand_ARM := UINT_TO_WORD(AI_SemiAutoPusk_command);

algoritms.no.inCommand_ARM := UINT_TO_WORD(AI_no_command);

algoritms.vibegPNS.inCommand_ARM := UINT_TO_WORD(AI_vibegPNS_command);

algoritms.ao.inCommand_ARM := UINT_TO_WORD(AI_ao_command);

algoritms.testPms.inCommand_ARM := UINT_TO_WORD(AI_testPms_command);

algoritms.testdPmg.inCommand_ARM := UINT_TO_WORD(AI_testdPmg_command);

algoritms.puskV.inCommand_ARM := UINT_TO_WORD(AI_puskV_command);

algoritms.puskK.inCommand_ARM := UINT_TO_WORD(AI_puskK_command);

algoritms.Pusk_F_faza1.inCommand_ARM := UINT_TO_WORD(AI_Pusk_F_faza1_command);

algoritms.Pusk_F_faza2.inCommand_ARM := UINT_TO_WORD(AI_Pusk_F_faza2_command);

algoritms.Pusk_TH_faza.inCommand_ARM := UINT_TO_WORD(AI_Pusk_TH_faza_command);

algoritms.Prov_PMS_ALG.inCommand_ARM := UINT_TO_WORD(AI_Prov_PMS_ALG_command);

algoritms.Prov_opressovka_ALG.inCommand_ARM := UINT_TO_WORD(AI_Prov_opressovka_ALG_command);

algoritms.Pusk_SEC_faza_chastotny.inCommand_ARM := UINT_TO_WORD(AI_Pusk_SEC_faza_chastotny_command);

algoritms.Pusk_SEC_faza_reactor.inCommand_ARM := UINT_TO_WORD(AI_Pusk_SEC_faza_reactor_command);