FUNCTION_BLOCK OPC_algoritms_set

VAR_EXTERNAL
	algoritms : AlgoritmsConfig;
	algManager_Mode : UINT;
	algoritms_AutoAvom_status : UDINT;
	algoritms_AutoPns_OffTimer : UINT;
	algoritms_AutoPns_OnTimer : UINT;
	algoritms_AutoPns_status : UDINT;
	algoritms_AutoTen_status : UDINT;
	algoritms_Remont_status : UDINT;
	algoritms_TestProtection_status : UDINT;
	algoritms_autoNu_NotHasRezervNU : BOOL;
	algoritms_autoNu_status : UDINT;
	algoritms_Pusk_SEC_faza_reactor_Top : UDINT;
	algoritms_Pusk_SEC_faza_reactor_Error : UDINT;
	algoritms_Pusk_SEC_faza_reactor_Start : UDINT;
	algoritms_Pusk_SEC_faza_reactor_status : UDINT;
	algoritms_Pusk_SEC_faza_chastotny_Top : UDINT;
	algoritms_Pusk_SEC_faza_chastotny_Error : UDINT;
	algoritms_Pusk_SEC_faza_chastotny_Start : UDINT;
	algoritms_Pusk_SEC_faza_chastotny_status : UDINT;
	algoritms_Prov_opressovka_ALG_Top : UDINT;
	algoritms_Prov_opressovka_ALG_Error : UDINT;
	algoritms_Prov_opressovka_ALG_Start : UDINT;
	algoritms_Prov_opressovka_ALG_status : UDINT;
	algoritms_Prov_PMS_ALG_Top : UDINT;
	algoritms_Prov_PMS_ALG_Error : UDINT;
	algoritms_Prov_PMS_ALG_Start : UDINT;
	algoritms_Prov_PMS_ALG_status : UDINT;
	algoritms_Pusk_TH_faza_Top : UDINT;
	algoritms_Pusk_TH_faza_Error : UDINT;
	algoritms_Pusk_TH_faza_Start : UDINT;
	algoritms_Pusk_TH_faza_status : UDINT;
	algoritms_Pusk_F_faza2_Top : UDINT;
	algoritms_Pusk_F_faza2_Error : UDINT;
	algoritms_Pusk_F_faza2_Start : UDINT;
	algoritms_Pusk_F_faza2_status : UDINT;
	algoritms_Pusk_F_faza1_Top : UDINT;
	algoritms_Pusk_F_faza1_Error : UDINT;
	algoritms_Pusk_F_faza1_Start : UDINT;
	algoritms_Pusk_F_faza1_status : UDINT;
	algoritms_puskOilSystem_Error : UDINT;
	algoritms_puskOilSystem_Start : UDINT;
	algoritms_puskOilSystem_Top : UDINT;
	algoritms_puskOilSystem_status : UDINT;
	algoritms_testIm_status : UDINT;
	algoritms_vibegPNS_Error : UDINT;
	algoritms_vibegPNS_Start : UDINT;
	algoritms_vibegPNS_Top : UDINT;
	algoritms_vibegPNS_algContinue_status : UDINT;
	algoritms_vibegPNS_status : UDINT;
	algoritms_vibegPNS_waitVibeg_timer : UINT;
	protectManager_protectionInRemont : BOOL;
	algManager : struct_AlgoritmsManager;
	protectManager : struct_ProtectionsManager;
	NotHasRezervNU : BOOL;
	AlgTimers : struct_AlgTimers;
	AlgQuestions : AlgoritmsQuestions;
	algoritms_Apusk_Error : UDINT;
	algoritms_Apusk_Start : UDINT;
	algoritms_Apusk_Top : UDINT;
	algoritms_Apusk_status : UDINT;
	algoritms_RingToLine_Error : UDINT;
	algoritms_RingToLine_Start : UDINT;
	algoritms_RingToLine_Top : UDINT;
	algoritms_RingToLine_status : UDINT;
	algoritms_ao_Error : UDINT;
	algoritms_ao_Start : UDINT;
	algoritms_ao_Top : UDINT;
	algoritms_ao_status : UDINT;
	algoritms_ao_waitKran_timer : UINT;
	algoritms_engineRun_BreakPuskTimer_timer : UINT;
	algoritms_engineRun_Error : UDINT;
	algoritms_engineRun_Start : UDINT;
	algoritms_engineRun_Top : UDINT;
	algoritms_engineRun_status : UDINT;
	algoritms_filling_BreakPuskTimer_timer : UINT;
	algoritms_filling_Error : UDINT;
	algoritms_filling_Start : UDINT;
	algoritms_filling_Top : UDINT;
	algoritms_filling_status : UDINT;
	algoritms_filling_waitAfterKran4_timer : UINT;
	algoritms_filling_waitAfterKran5_timer : UINT;
	algoritms_no_Error : UDINT;
	algoritms_no_Start : UDINT;
	algoritms_no_Top : UDINT;
	algoritms_no_status : UDINT;
	algoritms_no_waitCloseKran_timer : UINT;
	algoritms_ppu_Error : UDINT;
	algoritms_ppu_Start : UDINT;
	algoritms_ppu_Top : UDINT;
	algoritms_ppu_status : UDINT;
	algoritms_puskK_Error : UDINT;
	algoritms_puskK_Start : UDINT;
	algoritms_puskK_Top : UDINT;
	algoritms_puskK_questionFilling_status : UDINT;
	algoritms_puskK_questionUnload_status : UDINT;
	algoritms_puskK_status : UDINT;
	algoritms_autoNu_Start : UDINT;
	algoritms_autoNu_Error : UDINT;
	algoritms_autoNu_Top : UDINT;
	algoritms_AutoAvom_Start : UDINT;
	algoritms_AutoAvom_Error : UDINT;
	algoritms_AutoAvom_Top : UDINT;
	algoritms_puskK_wait720_timer : UINT;
	algoritms_puskOilSystem_BreakPuskTimer_Poil_timer : UINT;
	algoritms_puskOilSystem_BreakPuskTimer_dPmg_timer : UINT;
	algoritms_testPms_BreakTest_timer : UINT;
	algoritms_testPms_Error : UDINT;
	algoritms_testPms_Start : UDINT;
	algoritms_testPms_Top : UDINT;
	algoritms_testPms_algContinue_status : UDINT;
	algoritms_testPms_status : UDINT;
	algoritms_testdPmg_BreakTest_timer : UINT;
	algoritms_testdPmg_Error : UDINT;
	algoritms_testdPmg_Start : UDINT;
	algoritms_testdPmg_Top : UDINT;
	algoritms_testdPmg_algContinue_status : UDINT;
	algoritms_testdPmg_status : UDINT;
END_VAR

(* OPC Set - algoritms. Запись текущих состояний тэгов _______________________________________________________*)

algManager_Mode := algManager.mode;

protectManager_protectionInRemont:= protectManager.protectionInRemont;

algoritms_autoNu_NotHasRezervNU:= NotHasRezervNU;

algoritms_no_Start	:= DWORD_TO_UDINT(algoritms.no.Start);
algoritms_no_Error	:= DWORD_TO_UDINT(algoritms.no.Error);
algoritms_no_Top	:= DWORD_TO_UDINT(algoritms.no.Top);
algoritms_no_status	:= DWORD_TO_UDINT(algoritms.no.status);
algoritms_no_waitCloseKran_timer	:= AlgTimers.NO_waitCloseKran;

algoritms_ao_Start	:= DWORD_TO_UDINT(algoritms.ao.Start);
algoritms_ao_Error	:= DWORD_TO_UDINT(algoritms.ao.Error);
algoritms_ao_Top	:= DWORD_TO_UDINT(algoritms.ao.Top);
algoritms_ao_status	:= DWORD_TO_UDINT(algoritms.ao.status);
algoritms_ao_waitKran_timer	:= AlgTimers.AO_waitKran;

algoritms_vibegPNS_Start		:= DWORD_TO_UDINT(algoritms.vibegPNS.Start);
algoritms_vibegPNS_Error		:= DWORD_TO_UDINT(algoritms.vibegPNS.Error);
algoritms_vibegPNS_Top		:= DWORD_TO_UDINT(algoritms.vibegPNS.Top);
algoritms_vibegPNS_status		:= DWORD_TO_UDINT(algoritms.vibegPNS.status);
algoritms_vibegPNS_waitVibeg_timer	:= AlgTimers.vibegPNS_Timer;
algoritms_vibegPNS_algContinue_status	:= DWORD_TO_UDINT(AlgQuestions.vibegPNS_algContinue.status);

algoritms_testPms_Start		:= DWORD_TO_UDINT(algoritms.testPms.Start);
algoritms_testPms_Error		:= DWORD_TO_UDINT(algoritms.testPms.Error);
algoritms_testPms_Top		:= DWORD_TO_UDINT(algoritms.testPms.Top);
algoritms_testPms_status		:= DWORD_TO_UDINT(algoritms.testPms.status);
algoritms_testPms_algContinue_status	:= DWORD_TO_UDINT(AlgQuestions.testPms_algContinue.status);
algoritms_testPms_BreakTest_timer	:= AlgTimers.testPms_BreakTest;

algoritms_testdPmg_Start		:= DWORD_TO_UDINT(algoritms.testdPmg.Start);
algoritms_testdPmg_Error		:= DWORD_TO_UDINT(algoritms.testdPmg.Error);
algoritms_testdPmg_Top		:= DWORD_TO_UDINT(algoritms.testdPmg.Top);
algoritms_testdPmg_status		:= DWORD_TO_UDINT(algoritms.testdPmg.status);
algoritms_testdPmg_algContinue_status	:= DWORD_TO_UDINT(AlgQuestions.testdPmg_algContinue.status);
algoritms_testdPmg_BreakTest_timer	:= AlgTimers.testdPmg_BreakTest;

algoritms_testIm_status	:= DWORD_TO_UDINT(algoritms.testIm.status);

algoritms_ppu_status	:= DWORD_TO_UDINT(algoritms.ppu.status);
algoritms_ppu_Start	          := DWORD_TO_UDINT(algoritms.ppu.Start);
algoritms_ppu_Error	          := DWORD_TO_UDINT(algoritms.ppu.Error);
algoritms_ppu_Top	          := DWORD_TO_UDINT(algoritms.ppu.Top);

algoritms_puskOilSystem_status			:= DWORD_TO_UDINT(algoritms.puskOilSystem.status);
algoritms_puskOilSystem_Start				:= DWORD_TO_UDINT(algoritms.puskOilSystem.Start);
algoritms_puskOilSystem_Error				:= DWORD_TO_UDINT(algoritms.puskOilSystem.Error);
algoritms_puskOilSystem_Top				:= DWORD_TO_UDINT(algoritms.puskOilSystem.Top);
algoritms_puskOilSystem_BreakPuskTimer_Poil_timer	          := AlgTimers.puskOilSystem_BreakPuskTimer_Poil;

algoritms_engineRun_status			:= DWORD_TO_UDINT(algoritms.engineRun.status);
algoritms_engineRun_Start			:= DWORD_TO_UDINT(algoritms.engineRun.Start);
algoritms_engineRun_Error			:= DWORD_TO_UDINT(algoritms.engineRun.Error);
algoritms_engineRun_Top			:= DWORD_TO_UDINT(algoritms.engineRun.Top);
algoritms_engineRun_BreakPuskTimer_timer	:= AlgTimers.engineRun_BreakPuskTimer;

algoritms_filling_status		:= DWORD_TO_UDINT(algoritms.filling.status);
algoritms_filling_Start		:= DWORD_TO_UDINT(algoritms.filling.Start);
algoritms_filling_Error		:= DWORD_TO_UDINT(algoritms.filling.Error);
algoritms_filling_Top		:= DWORD_TO_UDINT(algoritms.filling.Top);
algoritms_filling_BreakPuskTimer_timer	:= AlgTimers.filling_BreakPuskTimer;
algoritms_filling_waitAfterKran4_timer	:= AlgTimers.filling_waitAfterKran4;
algoritms_filling_waitAfterKran5_timer	:= AlgTimers.filling_waitAfterKran5;

algoritms_RingToLine_status	:= DWORD_TO_UDINT(algoritms.RingToLine.status);
algoritms_RingToLine_Start	:= DWORD_TO_UDINT(algoritms.RingToLine.Start);
algoritms_RingToLine_Error	:= DWORD_TO_UDINT(algoritms.RingToLine.Error);
algoritms_RingToLine_Top	:= DWORD_TO_UDINT(algoritms.RingToLine.Top);

algoritms_AutoPns_status	:= DWORD_TO_UDINT(algoritms.AutoPns.status);
algoritms_AutoPns_OnTimer	:= AlgTimers.AutoPns_OnTimer;
algoritms_AutoPns_OffTimer	:= AlgTimers.AutoPns_OffTimer;

algoritms_autoNu_status	:= DWORD_TO_UDINT(algoritms.autoNu.status);
algoritms_autoNu_Start	:= DWORD_TO_UDINT(algoritms.autoNu.Start);
algoritms_autoNu_Error	:= DWORD_TO_UDINT(algoritms.autoNu.Error);
algoritms_autoNu_Top	:= DWORD_TO_UDINT(algoritms.autoNu.Top);

algoritms_AutoAvom_status	:= DWORD_TO_UDINT(algoritms.AutoAvom.status);
algoritms_AutoAvom_Start	:= DWORD_TO_UDINT(algoritms.AutoAvom.Start);
algoritms_AutoAvom_Error	:= DWORD_TO_UDINT(algoritms.AutoAvom.Error);
algoritms_AutoAvom_Top	:= DWORD_TO_UDINT(algoritms.AutoAvom.Top);

algoritms_Pusk_F_faza1_status	:= DWORD_TO_UDINT(algoritms.Pusk_F_faza1.status);
algoritms_Pusk_F_faza1_Start	:= DWORD_TO_UDINT(algoritms.Pusk_F_faza1.Start);
algoritms_Pusk_F_faza1_Error	:= DWORD_TO_UDINT(algoritms.Pusk_F_faza1.Error);
algoritms_Pusk_F_faza1_Top	:= DWORD_TO_UDINT(algoritms.Pusk_F_faza1.Top);

algoritms_Pusk_F_faza2_status	:= DWORD_TO_UDINT(algoritms.Pusk_F_faza2.status);
algoritms_Pusk_F_faza2_Start	:= DWORD_TO_UDINT(algoritms.Pusk_F_faza2.Start);
algoritms_Pusk_F_faza2_Error	:= DWORD_TO_UDINT(algoritms.Pusk_F_faza2.Error);
algoritms_Pusk_F_faza2_Top	:= DWORD_TO_UDINT(algoritms.Pusk_F_faza2.Top);

algoritms_Pusk_TH_faza_status	:= DWORD_TO_UDINT(algoritms.Pusk_TH_faza.status);
algoritms_Pusk_TH_faza_Start	:= DWORD_TO_UDINT(algoritms.Pusk_TH_faza.Start);
algoritms_Pusk_TH_faza_Error	:= DWORD_TO_UDINT(algoritms.Pusk_TH_faza.Error);
algoritms_Pusk_TH_faza_Top	:= DWORD_TO_UDINT(algoritms.Pusk_TH_faza.Top);

algoritms_Prov_PMS_ALG_status	:= DWORD_TO_UDINT(algoritms.Prov_PMS_ALG.status);
algoritms_Prov_PMS_ALG_Start	:= DWORD_TO_UDINT(algoritms.Prov_PMS_ALG.Start);
algoritms_Prov_PMS_ALG_Error	:= DWORD_TO_UDINT(algoritms.Prov_PMS_ALG.Error);
algoritms_Prov_PMS_ALG_Top	:= DWORD_TO_UDINT(algoritms.Prov_PMS_ALG.Top);

algoritms_Prov_opressovka_ALG_status	:= DWORD_TO_UDINT(algoritms.Prov_opressovka_ALG.status);
algoritms_Prov_opressovka_ALG_Start	:= DWORD_TO_UDINT(algoritms.Prov_opressovka_ALG.Start);
algoritms_Prov_opressovka_ALG_Error	:= DWORD_TO_UDINT(algoritms.Prov_opressovka_ALG.Error);
algoritms_Prov_opressovka_ALG_Top	:= DWORD_TO_UDINT(algoritms.Prov_opressovka_ALG.Top);

algoritms_Pusk_SEC_faza_chastotny_status	:= DWORD_TO_UDINT(algoritms.Pusk_SEC_faza_chastotny.status);
algoritms_Pusk_SEC_faza_chastotny_Start	:= DWORD_TO_UDINT(algoritms.Pusk_SEC_faza_chastotny.Start);
algoritms_Pusk_SEC_faza_chastotny_Error	:= DWORD_TO_UDINT(algoritms.Pusk_SEC_faza_chastotny.Error);
algoritms_Pusk_SEC_faza_chastotny_Top	:= DWORD_TO_UDINT(algoritms.Pusk_SEC_faza_chastotny.Top);

algoritms_Pusk_SEC_faza_reactor_status	:= DWORD_TO_UDINT(algoritms.Pusk_SEC_faza_reactor.status);
algoritms_Pusk_SEC_faza_reactor_Start	:= DWORD_TO_UDINT(algoritms.Pusk_SEC_faza_reactor.Start);
algoritms_Pusk_SEC_faza_reactor_Error	:= DWORD_TO_UDINT(algoritms.Pusk_SEC_faza_reactor.Error);
algoritms_Pusk_SEC_faza_reactor_Top	:= DWORD_TO_UDINT(algoritms.Pusk_SEC_faza_reactor.Top);

algoritms_Remont_status	:= DWORD_TO_UDINT(algoritms.Remont.status);

algoritms_AutoTen_status	:= DWORD_TO_UDINT(algoritms.AutoTen.status);
