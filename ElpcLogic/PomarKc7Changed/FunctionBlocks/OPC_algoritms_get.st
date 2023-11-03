FUNCTION_BLOCK OPC_algoritms_get

VAR_EXTERNAL
	algoritms : AlgoritmsConfig;
	algoritms_AntiPompag_UgolVNA_inCommand_ARM : UINT;
	algoritms_AntiPompag_zapas_inCommand_ARM : UINT;
	algoritms_Apusk_inCommand_ARM : UINT;
	algoritms_AutoAvom_inCommand_ARM : UINT;
	algoritms_AutoPns_inCommand_ARM : UINT;
	algoritms_AutoTen_inCommand_ARM : UINT;
	algoritms_Remont_inCommand_ARM : UINT;
	algoritms_RingToLine_inCommand_ARM : UINT;
	algoritms_SemiAutoPusk_cmdRun1ph_inCommand_ARM : UINT;
	algoritms_SemiAutoPusk_cmdRun2ph_inCommand_ARM : UINT;
	algoritms_SemiAutoPusk_cmdRun3ph_inCommand_ARM : UINT;
	algoritms_SemiAutoPusk_cmdRun4ph_inCommand_ARM : UINT;
	algoritms_SemiAutoPusk_inCommand_ARM : UINT;
	algoritms_TestProtection_inCommand_ARM : UINT;
	algoritms_ao_inCommand_ARM : UINT;
	algoritms_engineRun_inCommand_ARM : UINT;
	algoritms_filling_inCommand_ARM : UINT;
	algoritms_no_inCommand_ARM : UINT;
	algoritms_ppu_inCommand_ARM : UINT;
	algoritms_puskK_inCommand_ARM : UINT;
	algoritms_puskK_questionFilling_inCommand_ARM : UINT;
	algoritms_puskK_questionUnload_inCommand_ARM : UINT;
	algoritms_puskOilSystem_Ust_dPmg_inCommand_ARM : UINT;
	algoritms_puskOilSystem_inCommand_ARM : UINT;
	algoritms_puskV_inCommand_ARM : UINT;
	algoritms_puskV_questionFilling_inCommand_ARM : UINT;
	algoritms_puskV_questionMVoff_inCommand_ARM : UINT;
	algoritms_testIm_TypeSwitch_inCommand_ARM : UINT;
	algoritms_testIm_inCommand_ARM : UINT;
	algoritms_testPms_algContinue_inCommand_ARM : UINT;
	algoritms_testPms_inCommand_ARM : UINT;
	algoritms_testdPmg_algContinue_inCommand_ARM : UINT;
	algoritms_testdPmg_inCommand_ARM : UINT;
	algoritms_vibegPNS_algContinue_inCommand_ARM : UINT;
	AlgQuestions : AlgoritmsQuestions;
	algoritms_autoNu_inCommand_ARM : UINT;
	algoritms_vibegPNS_inCommand_ARM : UINT;
END_VAR

(* OPC Get - algoritms. Чтение текущих состояний тэгов _______________________________________________________*)

algoritms.ao.inCommand_ARM	:= UINT_TO_WORD(algoritms_ao_inCommand_ARM);

algoritms.Apusk.inCommand_ARM	:= UINT_TO_WORD(algoritms_Apusk_inCommand_ARM);

algoritms.AutoAvom.inCommand_ARM	:= UINT_TO_WORD(algoritms_AutoAvom_inCommand_ARM);


algoritms.autoNu.inCommand_ARM	:= UINT_TO_WORD(algoritms_autoNu_inCommand_ARM);

algoritms.AutoPns.inCommand_ARM	:= UINT_TO_WORD(algoritms_AutoPns_inCommand_ARM);

algoritms.engineRun.inCommand_ARM	:= UINT_TO_WORD(algoritms_engineRun_inCommand_ARM);

algoritms.filling.inCommand_ARM	:= UINT_TO_WORD(algoritms_filling_inCommand_ARM);

algoritms.no.inCommand_ARM	:= UINT_TO_WORD(algoritms_no_inCommand_ARM);

algoritms.ppu.inCommand_ARM	:= UINT_TO_WORD(algoritms_ppu_inCommand_ARM);

AlgQuestions.puskK_questionFilling.inCommand	:= UINT_TO_WORD(algoritms_puskK_questionFilling_inCommand_ARM);
AlgQuestions.puskK_questionUnload.inCommand	:= UINT_TO_WORD(algoritms_puskK_questionUnload_inCommand_ARM);
algoritms.puskK.inCommand_ARM	:= UINT_TO_WORD(algoritms_puskK_inCommand_ARM);

algoritms.puskOilSystem.inCommand_ARM	:= UINT_TO_WORD(algoritms_puskOilSystem_inCommand_ARM);

AlgQuestions.puskV_questionEngine.inCommand	:= UINT_TO_WORD(algoritms_puskV_questionFilling_inCommand_ARM);
AlgQuestions.puskV_questionMVoff.inCommand	:= UINT_TO_WORD(algoritms_puskV_questionMVoff_inCommand_ARM);
algoritms.puskV.inCommand_ARM	:= UINT_TO_WORD(algoritms_puskV_inCommand_ARM);

algoritms.Remont.inCommand_ARM	:= UINT_TO_WORD(algoritms_Remont_inCommand_ARM);

algoritms.RingToLine.inCommand_ARM	:= UINT_TO_WORD(algoritms_RingToLine_inCommand_ARM);

AlgQuestions.SemiAutoPusk_cmdRun1ph.inCommand	:= UINT_TO_WORD(algoritms_SemiAutoPusk_cmdRun1ph_inCommand_ARM);
AlgQuestions.SemiAutoPusk_cmdRun2ph.inCommand	:= UINT_TO_WORD(algoritms_SemiAutoPusk_cmdRun2ph_inCommand_ARM);
AlgQuestions.SemiAutoPusk_cmdRun3ph.inCommand	:= UINT_TO_WORD(algoritms_SemiAutoPusk_cmdRun3ph_inCommand_ARM);
AlgQuestions.SemiAutoPusk_cmdRun4ph.inCommand	:= UINT_TO_WORD(algoritms_SemiAutoPusk_cmdRun4ph_inCommand_ARM);
algoritms.SemiAutoPusk.inCommand_ARM	:= UINT_TO_WORD(algoritms_SemiAutoPusk_inCommand_ARM);

AlgQuestions.testdPmg_algContinue.inCommand	:= UINT_TO_WORD(algoritms_testdPmg_algContinue_inCommand_ARM);
algoritms.testdPmg.inCommand_ARM	:= UINT_TO_WORD(algoritms_testdPmg_inCommand_ARM);

algoritms.testIm.inCommand_ARM	:= UINT_TO_WORD(algoritms_testIm_inCommand_ARM);

AlgQuestions.testPms_algContinue.inCommand	:= UINT_TO_WORD(algoritms_testPms_algContinue_inCommand_ARM);
algoritms.testPms.inCommand_ARM	:= UINT_TO_WORD(algoritms_testPms_inCommand_ARM);

algoritms.TestProtection.inCommand_ARM	:= UINT_TO_WORD(algoritms_TestProtection_inCommand_ARM);

AlgQuestions.vibegPNS_algContinue.inCommand	:= UINT_TO_WORD(algoritms_vibegPNS_algContinue_inCommand_ARM);
algoritms.vibegPNS.inCommand_ARM	:= UINT_TO_WORD(algoritms_vibegPNS_inCommand_ARM);

algoritms.AutoTen.inCommand_ARM	:= UINT_TO_WORD(algoritms_AutoTen_inCommand_ARM);