FUNCTION_BLOCK OPC_algoritms_get

VAR_EXTERNAL
	algoritms_autoNu : UINT;
	algoritms_AutoPns : UINT;
	algoritms_AutoAvom : UINT;
	algoritms_AutoTen : UINT;
	algoritms_AntiPompag : UINT;
	algoritms_testIm : UINT;
	algoritms_TestProtection : UINT;
	algoritms_Remont : UINT;
	algoritms_ppu : UINT;
	algoritms_puskOilSystem : UINT;
	algoritms_engineRun : UINT;
	algoritms_filling : UINT;
	algoritms_LineToRing : UINT;
	algoritms_RingToLine : UINT;
	algoritms_Apusk : UINT;
	algoritms_SemiAutoPusk : UINT;
	algoritms_no : UINT;
	algoritms_vibegPNS : UINT;
	algoritms_ao : UINT;
	algoritms_testPms : UINT;
	algoritms_testdPmg : UINT;
	algoritms_puskV : UINT;
	algoritms_puskK : UINT;
	algoritms_Pusk_F_faza1 : UINT;
	algoritms_Pusk_F_faza2 : UINT;
	algoritms_Pusk_TH_faza : UINT;
	algoritms_Prov_PMS_ALG : UINT;
	algoritms_Prov_opressovka_ALG : UINT;
	algoritms_Pusk_SEC_faza_chastotny : UINT;
	algoritms_Pusk_SEC_faza_reactor : UINT;
	algoritms : AlgoritmsConfig;
END_VAR



algoritms.autoNu.inCommand_ARM := UINT_TO_WORD(algoritms_autoNu);

algoritms.AutoPns.inCommand_ARM := UINT_TO_WORD(algoritms_AutoPns);

algoritms.AutoAvom.inCommand_ARM := UINT_TO_WORD(algoritms_AutoAvom);

algoritms.AutoTen.inCommand_ARM := UINT_TO_WORD(algoritms_AutoTen);

algoritms.AntiPompag.inCommand_ARM := UINT_TO_WORD(algoritms_AntiPompag);

algoritms.testIm.inCommand_ARM := UINT_TO_WORD(algoritms_testIm);

algoritms.TestProtection.inCommand_ARM := UINT_TO_WORD(algoritms_TestProtection);

algoritms.Remont.inCommand_ARM := UINT_TO_WORD(algoritms_Remont);

algoritms.ppu.inCommand_ARM := UINT_TO_WORD(algoritms_ppu);

algoritms.puskOilSystem.inCommand_ARM := UINT_TO_WORD(algoritms_puskOilSystem);

algoritms.engineRun.inCommand_ARM := UINT_TO_WORD(algoritms_engineRun);

algoritms.filling.inCommand_ARM := UINT_TO_WORD(algoritms_filling);

algoritms.LineToRing.inCommand_ARM := UINT_TO_WORD(algoritms_LineToRing);

algoritms.RingToLine.inCommand_ARM := UINT_TO_WORD(algoritms_RingToLine);

algoritms.Apusk.inCommand_ARM := UINT_TO_WORD(algoritms_Apusk);

algoritms.SemiAutoPusk.inCommand_ARM := UINT_TO_WORD(algoritms_SemiAutoPusk);

algoritms.no.inCommand_ARM := UINT_TO_WORD(algoritms_no);

algoritms.vibegPNS.inCommand_ARM := UINT_TO_WORD(algoritms_vibegPNS);

algoritms.ao.inCommand_ARM := UINT_TO_WORD(algoritms_ao);

algoritms.testPms.inCommand_ARM := UINT_TO_WORD(algoritms_testPms);

algoritms.testdPmg.inCommand_ARM := UINT_TO_WORD(algoritms_testdPmg);

algoritms.puskV.inCommand_ARM := UINT_TO_WORD(algoritms_puskV);

algoritms.puskK.inCommand_ARM := UINT_TO_WORD(algoritms_puskK);

algoritms.Pusk_F_faza1.inCommand_ARM := UINT_TO_WORD(algoritms_Pusk_F_faza1);

algoritms.Pusk_F_faza2.inCommand_ARM := UINT_TO_WORD(algoritms_Pusk_F_faza2);

algoritms.Pusk_TH_faza.inCommand_ARM := UINT_TO_WORD(algoritms_Pusk_TH_faza);

algoritms.Prov_PMS_ALG.inCommand_ARM := UINT_TO_WORD(algoritms_Prov_PMS_ALG);

algoritms.Prov_opressovka_ALG.inCommand_ARM := UINT_TO_WORD(algoritms_Prov_opressovka_ALG);

algoritms.Pusk_SEC_faza_chastotny.inCommand_ARM := UINT_TO_WORD(algoritms_Pusk_SEC_faza_chastotny);

algoritms.Pusk_SEC_faza_reactor.inCommand_ARM := UINT_TO_WORD(algoritms_Pusk_SEC_faza_reactor);