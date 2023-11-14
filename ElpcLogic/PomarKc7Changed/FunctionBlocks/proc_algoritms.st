FUNCTION_BLOCK proc_algoritms

VAR
	fb_RemontAlg : RemontAlg;
	fb_TestProtectionAlg : TestProtectionAlg;
	fb_TestImAlg : TestImAlg;
	fb_AutoTen : fb_AutoTenAlg;
	fb_AutoPns : fb_AutoPnsAlg;
	fb_AutoAvom : fb_AutoAvomAlg;
	fb_vibegPNS : fb_vibegPNSAlg;
	fb_AutoNU : fb_AutoNUAlg;
	fb_puskOilSystem : fb_puskOilSystemAlg;
	fb_AntiPompag : fb_AntiPompagAlg;
	fb_NOAlg : NOAlg;
	fb_AOAlg : AOAlg;
	fb_ppuALG : ppuAlg;
	fb_fillingAlg : fillingAlg;
	fb_engineRunAlg : engineRunAlg;
	fb_puskKalg : puskKalg;
	fb_puskValg : puskValg;
	fb_testdPmgAlg : testdPmgAlg;
	fb_testPmsAlg : testPmsAlg;
	fb_ApuskAlg : ApuskAlg;
	fb_SemiAutoPuskAlg : SemiAutoPuskAlg;
	fb_Pusk_first_faza1 : Pusk_first_faza1;
	fb_Pusk_first_faza2 : Pusk_first_faza2;
	fb_Pusk_third_faza : Pusk_third_faza;
	fb_Pusk_Prov_PMS : Prov_PMS;
	fb_Prov_opressovka : Prov_opressovka;
	fb_Pusk_second_faza_chastotny : Pusk_second_faza_chastotny;
	fb_Pusk_second_faza_reactor : Pusk_second_faza_reactor;
END_VAR

VAR_EXTERNAL
	algoritms : AlgoritmsConfig;
	AlgQuestions : AlgoritmsQuestions;
	ai : AiConfig;
	IM : ImConfig;
	AlgTimers : struct_AlgTimers;
END_VAR

fb_RemontAlg(StrAlg:=algoritms.Remont);

fb_TestProtectionAlg(StrAlg:=algoritms.TestProtection);

fb_TestImAlg(StrAlg:=algoritms.testIm);

(*fb_AutoTen(StrAlg:= algoritms.AutoTen,
T_masla:= ai.Toporno_podshipnika_EDT_1,
Uroven_masla:= ai.Yroven_masla_MB,
offTemperature:= Im.AutoTen_offTemperature,
TEN:= Im.Ten,
PNS:= Im.pns);*)

(*fb_AutoPns(StrAlg:= algoritms.AutoPns,
Poil:= ai.Pmasla_posle_GNS,
Ust_Run:= Im.AutoPns_UstRun,
Ust_Stop:= Im.AutoPns_UstStop,
Nasos:= Im.pns,
diPlow:= Im.SingleSignals.P_oil_low);*)

(*fb_AutoAvom(StrAlg:= algoritms.AutoAvom,
im1:= Im.v1_Avom,
im2:= Im.v2_Avom,
on1Temperature:= Im.AutoAvom_onTemp1,
on2Temperature:= Im.AutoAvom_onTemp2,
hystereses:= Im.AutoAvom_hysteresis,
ai:= ai.Tnarujnogo_vozduha);*)

fb_vibegPNS(StrAlg:=algoritms.vibegPNS,
algContinue:=AlgQuestions.vibegPNS_algContinue
);

(*fb_AutoNU(StrAlg:=algoritms.autoNu,
nu1:=Im.nu1,
nu2:=Im.nu2,
Ust_Swap:= Im.AutoNU_Ust_Swap,
mainNU:= Im.AutoNU_mainNU,
dPoil:=ai.Tmasla_MB,
Lowdp_di:=Im.SingleSignals.dP_oilgaz_low
);*)

fb_puskOilSystem(StrAlg:=algoritms.puskOilSystem);

(*fb_AntiPompag(StrAlg:=algoritms.AntiPompag,
Rashod:= ai.Vibro_skorost_OP_shesterni_RED_T6,
Zapas:= ai.Vibro_skorost_OP_shesterni_RED_T5,
P_gasIn:=ai.dPgaza_na_maslo_filtre,
T_gasIn:=ai.Tgaza_na_vhode_H,
dP_konf:=ai.dPgaza_na_konfuzore,
Kran6:= im.Kran6,
UgolVNA:= im.AntiPompag_UgolVNA,
K:=im.AntiPompag_K,
A:=im.AntiPompag_A,
y0:=im.AntiPompag_y0);*)

fb_NOAlg(StrAlg:=algoritms.no);

fb_AOAlg(StrAlg:=algoritms.ao);

fb_ppuAlg(StrAlg:=algoritms.ppu);

fb_fillingAlg(StrAlg:=algoritms.filling);

fb_engineRunAlg(StrAlg:=algoritms.engineRun);

fb_puskKalg(StrAlg:=algoritms.puskK,
questionFilling:=AlgQuestions.puskK_questionFilling,
 questionUnload:=AlgQuestions.puskK_questionUnload
);

fb_puskValg(StrAlg:=algoritms.puskV,
 questionEngine:=AlgQuestions.puskV_questionEngine,
  questionMVoff:=AlgQuestions.puskV_questionMVoff
);

fb_testdPmgAlg(StrAlg:=algoritms.testdPmg,
 algContinue:=AlgQuestions.testdPmg_algContinue
);

fb_testPmsAlg(StrAlg:=algoritms.testPms,
 algContinue:=AlgQuestions.testPms_algContinue
);

fb_ApuskAlg(StrAlg:=algoritms.Apusk);

fb_SemiAutoPuskAlg(StrAlg:=algoritms.SemiAutoPusk,
 cmdRun1ph:=AlgQuestions.SemiAutoPusk_cmdRun1ph,
 cmdRun2ph:=AlgQuestions.SemiAutoPusk_cmdRun2ph,
 cmdRun3ph:=AlgQuestions.SemiAutoPusk_cmdRun3ph
);


fb_Pusk_first_faza1(Stralg:=algoritms.Pusk_F_faza1);

fb_Pusk_first_faza2(Stralg:=algoritms.Pusk_F_faza2);

fb_Pusk_third_faza(Stralg:=algoritms.Pusk_TH_faza);

fb_Pusk_Prov_PMS(Stralg:=algoritms.Prov_PMS_ALG);

fb_Prov_opressovka(Stralg:=algoritms.Prov_opressovka_ALG);

fb_Pusk_second_faza_chastotny(Stralg:=algoritms.Pusk_SEC_faza_chastotny);

fb_Pusk_second_faza_reactor(Stralg:=algoritms.Pusk_SEC_faza_reactor);