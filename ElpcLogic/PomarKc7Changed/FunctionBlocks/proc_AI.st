FUNCTION_BLOCK proc_AI

VAR
	fb_TStalisStatoraKanal1 : fb_AiSourceMlp; (*[A1-14:1, AI0] Резерв*)
	fb_TStalisStatoraKanal2 : fb_AiSourceMlp; (*[A1-14:2, AI1] Резерв*)
	fb_TStalisStatoraKanal3 : fb_AiSourceMlp; (*[A1-14:3, AI2] Резерв*)
	fb_TMediStatoraKanal1 : fb_AiSourceMlp; (*[A1-14:4, AI3] Резерв*)
	fb_TMediStatoraKanal2 : fb_AiSourceMlp; (*[A1-14:5, AI4] Резерв*)
	fb_TMediStatoraKanal3 : fb_AiSourceMlp; (*[A1-14:6, AI5] Резерв*)
	fb_TOpornogoPodshipnikaEDT_1 : fb_AiSourceMlp; (*[A1-14:7, AI6] Резерв*)
	fb_TOpornoYpornogoPodshipnikaEDT_2 : fb_AiSourceMlp; (*[A1-14:8, AI7] Резерв*)
	fb_TOpornoYpornogoPodshipnikaKolesaRedEDT_3 : fb_AiSourceMlp;
	fb_TOpornoYpornogoPodshipnikaKolesaRedHT_4 : fb_AiSourceMlp;
	fb_TOpornogoPodshipnikaShesterniReduktoraT_5 : fb_AiSourceMlp;
	fb_TOpornogoPodshipnikaReduktoraHT_6 : fb_AiSourceMlp;
	fb_TOpornoYpornogoPodshipnikaNagnetateljaT_7_1 : fb_AiSourceMlp;
	fb_TOpornoYpornogoPodshipnikaNagnetateljaT_7_2 : fb_AiSourceMlp;
	fb_TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1 : fb_AiSourceMlp;
	fb_TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2 : fb_AiSourceMlp;
	fb_TYpornogoPodshipnikaRabKolodokHT_9_1 : fb_AiSourceMlp;
	fb_TYpornogoPodshipnikaRabKolodokHT_9_2 : fb_AiSourceMlp;
	fb_TYpornogoPodshipnikYstanKolodokHT_10_1 : fb_AiSourceMlp;
	fb_TYpornogoPodshipnikYstanKolodokHT_10_2 : fb_AiSourceMlp;
	fb_THolodnogoVozduhaEDKanall : fb_AiSourceMlp;
	fb_THolodnogoVozduhaEDKanal2 : fb_AiSourceMlp;
	fb_TGorjachegoVozduhaEDKanall : fb_AiSourceMlp;
	fb_TGorjachegoVozduhaEDKanal2 : fb_AiSourceMlp;
	fb_TNArujnogoVozduha : fb_AiSourceMlp;
	fb_TgazaNaVhodeH : fb_AiSourceMlp_timer;
	fb_TgazaNaVyhodeH : fb_AiSourceMlp;
	fb_TMasladoAVOM : fb_AiSourceMlp;
	fb_TMaslaPosleAVOM : fb_AiSourceMlp;
	fb_TMaslaMB : fb_AiSourceMlp;
	fb_TEmperatura_v_SHU : fb_AiSourceMlp_timer;
	fb_DavlenijaMasloSmNizkoe : fb_AiSourceMlp;
	fb_PerepadDavlenieNaMasloFiltre : fb_AiSourceMlp;
	fb_DavlenijaMasloSmVysokoe : fb_AiSourceMlp;
	fb_DavlenijaMaslaPosleGNS : fb_AiSourceMlp;
	fb_DavlenijaMaslaPosleNU : fb_AiSourceMlp;
	fb_PerepadDavlenieNaKonfuzore : fb_AiSourceMlp;
	fb_OsSdvigNagnetatelja_Plus : fb_AiSourceMlp;
	fb_OsSdvigNagnetatelja_Minus : fb_AiSourceMlp;
	fb_PerepadDavlenieMasloGaz : fb_AiSourceMlp;
	fb_VibroSkorostOYPKolesaED_T3 : fb_AiSourceMlp;
	fb_DGazaNaVhodeNagnetatelja : fb_AiSourceMlp;
	fb_DGazaNaVyhodeNagnetatelja : fb_AiSourceMlp;
	fb_DavlenieImpulsGaz : fb_AiSourceMlp;
	fb_YrovenMaslaMB : fb_AiSourceMlp;
	fb_Kontrol_per220V : fb_AiSourceMlp;
	fb_Kontrol_post220V : fb_AiSourceMlp;
	fb_TMaslaMB_TEN : fb_AiSourceMlp;
	fb_VibroSkorostOPED_T1 : fb_AiSourceMlp;
	fb_VibroSkorostOYPED_T2 : fb_AiSourceMlp;
	fb_VibroSkorostOPKolesaRH_T4 : fb_AiSourceMlp;
	fb_VibroSkorostOPShesterniRED_T5 : fb_AiSourceMlp;
	fb_VibroSkorostOPShesterniReduktoraH_T6 : fb_AiSourceMlp;
	fb_TokStatora : fb_AiSourceMlp;
END_VAR

VAR_EXTERNAL
	arAIN_0 : TItemAIN;
	arAIN_1 : TItemAIN;
	arAIN_2 : TItemAIN;
	arAIN_3 : TItemAIN;
	arAIN_4 : TItemAIN;
	arAIN_5 : TItemAIN;
	arAIN_6 : TItemAIN;
	arAIN_7 : TItemAIN;
	arAIN_8 : TItemAIN;
	arAIN_9 : TItemAIN;
	arAIN_10 : TItemAIN;
	arAIN_11 : TItemAIN;
	arAIN_12 : TItemAIN;
	arAIN_13 : TItemAIN;
	arAIN_14 : TItemAIN;
	arAIN_15 : TItemAIN;
	ai : AiConfig;
	arAIN_16 : TItemAIN;
	arAIN_17 : TItemAIN;
	arAIN_18 : TItemAIN;
	arAIN_19 : TItemAIN;
	arAIN_20 : TItemAIN;
	arAIN_21 : TItemAIN;
	arAIN_22 : TItemAIN;
	arAIN_23 : TItemAIN;
	arAIN_24 : TItemAIN;
	arAIN_25 : TItemAIN;
	arAIN_26 : TItemAIN;
	arAIN_27 : TItemAIN;
	arAIN_28 : TItemAIN;
	arAIN_29 : TItemAIN;
	arAIN_30 : TItemAIN;
	arAIN_31 : TItemAIN;
	arAIN_32 : TItemAIN;
	arAIN_33 : TItemAIN;
	arAIN_34 : TItemAIN;
	arAIN_35 : TItemAIN;
	arAIN_36 : TItemAIN;
	arAIN_37 : TItemAIN;
	arAIN_38 : TItemAIN;
	arAIN_39 : TItemAIN;
	arAIN_40 : TItemAIN;
	arAIN_41 : TItemAIN;
	arAIN_42 : TItemAIN;
	arAIN_43 : TItemAIN;
	arAIN_44 : TItemAIN;
	arAIN_45 : TItemAIN;
	arAIN_46 : TItemAIN;
	arAIN_47 : TItemAIN;
	arAIN_48 : TItemAIN;
	arAIN_49 : TItemAIN;
	arAIN_50 : TItemAIN;
	arAIN_51 : TItemAIN;
	arAIN_52 : TItemAIN;
	arAIN_53 : TItemAIN;
	arAIN_54 : TItemAIN;
	arAIN_55 : TItemAIN;
	arERR_3 : TItemDIN;
	arERR_4 : TItemDIN;
	arERR_5 : TItemDIN;
	arERR_6 : TItemDIN;
	arERR_7 : TItemDIN;
	arERR_8 : TItemDIN;
	arERR_9 : TItemDIN;
	A1_10_err_mode : UINT;
	A1_11_err_mode : UINT;
	A1_4_err_mode : UINT;
	A1_5_err_mode : UINT;
	A1_6_err_mode : UINT;
	A1_7_err_mode : UINT;
	A1_8_err_mode : UINT;
	A1_9_err_mode : UINT;
	A2_2_err_mode : UINT;
	A2_3_err_mode : UINT;
	AI_0_dblValue : LREAL;
	AI_10_dblValue : LREAL;
	AI_11_dblValue : LREAL;
	AI_12_dblValue : LREAL;
	AI_13_dblValue : LREAL;
	AI_14_dblValue : LREAL;
	AI_15_dblValue : LREAL;
	AI_16_dblValue : LREAL;
	AI_17_dblValue : LREAL;
	AI_18_dblValue : LREAL;
	AI_19_dblValue : LREAL;
	AI_1_dblValue : LREAL;
	AI_20_dblValue : LREAL;
	AI_21_dblValue : LREAL;
	AI_22_dblValue : LREAL;
	AI_23_dblValue : LREAL;
	AI_24_dblValue : LREAL;
	AI_25_dblValue : LREAL;
	AI_26_dblValue : LREAL;
	AI_27_dblValue : LREAL;
	AI_28_dblValue : LREAL;
	AI_29_dblValue : LREAL;
	AI_2_dblValue : LREAL;
	AI_30_dblValue : LREAL;
	AI_31_dblValue : LREAL;
	AI_32_dblValue : LREAL;
	AI_33_dblValue : LREAL;
	AI_34_dblValue : LREAL;
	AI_35_dblValue : LREAL;
	AI_36_dblValue : LREAL;
	AI_37_dblValue : LREAL;
	AI_38_dblValue : LREAL;
	AI_39_dblValue : LREAL;
	AI_3_dblValue : LREAL;
	AI_40_dblValue : LREAL;
	AI_41_dblValue : LREAL;
	AI_42_dblValue : LREAL;
	AI_43_dblValue : LREAL;
	AI_44_dblValue : LREAL;
	AI_45_dblValue : LREAL;
	AI_46_dblValue : LREAL;
	AI_47_dblValue : LREAL;
	AI_48_dblValue : LREAL;
	AI_49_dblValue : LREAL;
	AI_4_dblValue : LREAL;
	AI_50_dblValue : LREAL;
	AI_51_dblValue : LREAL;
	AI_52_dblValue : LREAL;
	AI_53_dblValue : LREAL;
	AI_54_dblValue : LREAL;
	AI_55_dblValue : LREAL;
	AI_56_dblValue : LREAL;
	AI_57_dblValue : LREAL;
	AI_58_dblValue : LREAL;
	AI_59_dblValue : LREAL;
	AI_5_dblValue : LREAL;
	AI_60_dblValue : LREAL;
	AI_61_dblValue : LREAL;
	AI_62_dblValue : LREAL;
	AI_63_dblValue : LREAL;
	AI_64_dblValue : LREAL;
	AI_65_dblValue : LREAL;
	AI_66_dblValue : LREAL;
	AI_67_dblValue : LREAL;
	AI_68_dblValue : LREAL;
	AI_69_dblValue : LREAL;
	AI_6_dblValue : LREAL;
	AI_70_dblValue : LREAL;
	AI_71_dblValue : LREAL;
	AI_72_dblValue : LREAL;
	AI_73_dblValue : LREAL;
	AI_74_dblValue : LREAL;
	AI_75_dblValue : LREAL;
	AI_76_dblValue : LREAL;
	AI_77_dblValue : LREAL;
	AI_78_dblValue : LREAL;
	AI_79_dblValue : LREAL;
	AI_7_dblValue : LREAL;
	AI_8_dblValue : LREAL;
	AI_9_dblValue : LREAL;
END_VAR

(* Циклический опрос. Входные аналоговые параметры *)

(* [A1-9, AI5-4]  dР газа на конфузоре *)
fb_PerepadDavlenieNaKonfuzore(arAIN := arAIN_0, strAI := ai.dPgaza_na_konfuzore, err_mod:=arERR_8);
AI_0_dblValue := arAIN_0.dblValue;

(* [A1-9, AI5-0] dР масла на масляном фильтре *)
fb_PerepadDavlenieNaMasloFiltre(arAIN := arAIN_1, strAI := ai.dPgaza_na_maslo_filtre, err_mod:=arERR_8);
AI_1_dblValue := arAIN_1.dblValue;

(* [A1-9, AI5-7]  dР масло-газ *)
fb_PerepadDavlenieMasloGaz(arAIN := arAIN_2, strAI := ai.dPmaslo_gaz, err_mod:=arERR_8);
AI_2_dblValue := arAIN_2.dblValue;

(* [A1-10, AI6-2] Р газа на входе нагнетателя *)
fb_DGazaNaVhodeNagnetatelja(arAIN := arAIN_3, strAI := ai.Pgaza_na_vhode_nagnetatelia, err_mod:=arERR_9);
AI_3_dblValue := arAIN_3.dblValue;

(* [A1-10, AI6-3] Р газа на выходе нагнетателя *)
fb_DGazaNaVyhodeNagnetatelja(arAIN := arAIN_4, strAI := ai.Pgaza_na_vyhode_nagnetatelia, err_mod:=arERR_9);
AI_4_dblValue := arAIN_4.dblValue;

(* [A1-9, AI5-3]  Р масла после НУ *)
fb_DavlenijaMaslaPosleNU(arAIN := arAIN_5, strAI := ai.Pmasla_posle_NU, err_mod:=arERR_8);
AI_5_dblValue := arAIN_5.dblValue;

(* [A1-8, AI4-6]  Р масла смазки низкое) *)
fb_DavlenijaMasloSmNizkoe(arAIN := arAIN_6, strAI := ai.Pmaslo_sm_nizkoe, err_mod:=arERR_7);
AI_6_dblValue := arAIN_6.dblValue;

(* [A1-9, AI5-2]  Р масла смазки после ГМНС *)
fb_DavlenijaMaslaPosleGNS(arAIN := arAIN_7, strAI := ai.Pmasla_posle_GNS, err_mod:=arERR_8);
AI_7_dblValue := arAIN_7.dblValue;

(* [A1-9, AI5-1]  Р масла смазки высокое *)
fb_DavlenijaMasloSmVysokoe(arAIN := arAIN_8, strAI := ai.Pmaslo_sm_vysokoe, err_mod:=arERR_8);
AI_8_dblValue := arAIN_8.dblValue;

(* [A1-7, AI3-2] Т наружного воздуха *)
fb_TNArujnogoVozduha(arAIN := arAIN_9, strAI := ai.Tnarujnogo_vozduha, err_mod:=arERR_6);
AI_9_dblValue := arAIN_9.dblValue;

(* [A1-8, AI4-0]  Т газа на входе нагнетателя *)
fb_TgazaNaVhodeH(arAIN := arAIN_10, strAI := ai.Tgaza_na_vhode_H, err_mod:=arERR_7);
AI_10_dblValue := arAIN_10.dblValue;

(* [A1-8, AI4-1] Т газа на выходе нагнетателя *)
fb_TgazaNaVyhodeH(arAIN := arAIN_11, strAI := ai.Tgaza_na_vyhode_H, err_mod:=arERR_7);
AI_11_dblValue := arAIN_11.dblValue;

(* [A1-6, AI2-7]  Т горячего воздуха в ЭД, точка 1 *)
fb_TGorjachegoVozduhaEDKanall(arAIN := arAIN_12, strAI := ai.Tgorjachego_vozduha_ED_kanal_1, err_mod:=arERR_5);
AI_12_dblValue := arAIN_12.dblValue;

(* [A1-7, AI3-0] Т горячего воздуха в ЭД, точка 2 *)
fb_TGorjachegoVozduhaEDKanal2(arAIN := arAIN_13, strAI := ai.Tgorjachego_vozduha_ED_kanal_2, err_mod:=arERR_6);
AI_13_dblValue := arAIN_13.dblValue;

(* [A1-8, AI4-4] Т масла в маслобаке *)
fb_TMaslaMB(arAIN := arAIN_14, strAI := ai.Tmasla_MB, err_mod:=arERR_7);
AI_14_dblValue := arAIN_14.dblValue;

(* [A1-8, AI4-4] Т масла в маслобаке над ТЭНом *)
fb_TMaslaMB(arAIN := arAIN_15, strAI := ai.Tmasla_MB_TEN, err_mod:=arERR_7);
AI_15_dblValue := arAIN_15.dblValue;

(* [A1-8, AI4-2] Т масла до АВО М *)
fb_TMasladoAVOM(arAIN := arAIN_16, strAI := ai.Tgorjachego_vozduha_ED_kanal_2, err_mod:=arERR_7);
AI_16_dblValue := arAIN_16.dblValue;

(* [A1-8, AI4-3] Т масла после АВО М *)
fb_TMaslaPosleAVOM(arAIN := arAIN_17, strAI := ai.Tmasla_posle_AVOM, err_mod:=arERR_7);
AI_17_dblValue := arAIN_17.dblValue;

(* [A1-4, AI0-3] Т Т меди статора фаза 1 *)
fb_TMediStatoraKanal1(arAIN := arAIN_18, strAI := ai.Tmedi_statora_kanal_1, err_mod:=arERR_3);
AI_18_dblValue := arAIN_18.dblValue;

(* [A1-4, AI0-4] Т обмотки фазы 3 канал *)
fb_TMediStatoraKanal2(arAIN := arAIN_19, strAI := ai.Tmedi_statora_kanal_2, err_mod:=arERR_3);
AI_19_dblValue := arAIN_19.dblValue;

(* [A1-4, AI0-5] Т меди статора фаза 2 *)
fb_TMediStatoraKanal3(arAIN := arAIN_20, strAI := ai.Tmedi_statora_kanal_3, err_mod:=arERR_3);
AI_20_dblValue := arAIN_20.dblValue;

(* [A1-4, AI0-6] Т ОП ЭД со стороны свободного конца (т.1) } *)
fb_TOpornogoPodshipnikaEDT_1(arAIN := arAIN_21, strAI := ai.Toporno_podshipnika_EDT_1, err_mod:=arERR_3);
AI_21_dblValue := arAIN_21.dblValue;

(* [A1-5, AI1-0]  Т ОУП ЭД со стороны редуктора (т.2) *)
fb_TOpornoYpornogoPodshipnikaEDT_2(arAIN := arAIN_22, strAI := ai.Toporno_ypornogo_podshipnika_EDT_2, err_mod:=arERR_4);
AI_22_dblValue := arAIN_22.dblValue;

(* [A1-5, AI1-1]  Т ОУП колеса редуктора со стороны ЭД (т.3) *)
fb_TOpornoYpornogoPodshipnikaKolesaRedEDT_3(arAIN := arAIN_23, strAI := ai.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3, err_mod:=arERR_4);
AI_23_dblValue := arAIN_23.dblValue;

(* [A1-5, AI1-2]Т ОП колеса редуктора со стороны Н (т.4) *)
fb_TOpornoYpornogoPodshipnikaKolesaRedHT_4(arAIN := arAIN_24, strAI := ai.Toporno_ypornogo_podshipnika_kolesa_red_HT_4, err_mod:=arERR_4);
AI_24_dblValue := arAIN_24.dblValue;

(* [A1-5, AI1-3] Т ОП шестерни редуктора со стороны ЭД (т.5) *)
fb_TOpornogoPodshipnikaShesterniReduktoraT_5(arAIN := arAIN_25, strAI := ai.Toporno_podshipnika_shesterni_reduktora_T_5, err_mod:=arERR_4);
AI_25_dblValue := arAIN_25.dblValue;

(* [A1-5, AI1-4]  Т ОП шестерни редуктора со стороны Н (т.6) *)
fb_TOpornogoPodshipnikaReduktoraHT_6(arAIN := arAIN_26, strAI := ai.Toporno_podshipnika_reduktora_HT_6, err_mod:=arERR_4);
AI_26_dblValue := arAIN_26.dblValue;

(* [A1-5, AI1-5]  Т ОП Н со стороны редуктора (т.7) *)
fb_TOpornoYpornogoPodshipnikaNagnetateljaT_7_1(arAIN := arAIN_27, strAI := ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_1, err_mod:=arERR_4);
AI_27_dblValue := arAIN_27.dblValue;

(* [A1-5, AI1-5]  Т ОП Н со стороны редуктора (т.7) *)
fb_TOpornoYpornogoPodshipnikaNagnetateljaT_7_2(arAIN := arAIN_28, strAI := ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_2, err_mod:=arERR_4);
AI_28_dblValue := arAIN_28.dblValue;

(* [A1-5, AI1-7]  Т ОП Н со стороны свободного вала (т.8) *)
fb_TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1(arAIN := arAIN_28, strAI := ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_1, err_mod:=arERR_4);
AI_29_dblValue := arAIN_29.dblValue;

(* [A1-5, AI1-7]  Т ОП Н со стороны свободного вала (т.8) *)
fb_TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2(arAIN := arAIN_28, strAI := ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_2, err_mod:=arERR_4);
AI_30_dblValue := arAIN_30.dblValue;

(* [A1-6, AI2-1]  Т УП рабочих колодок нагнетателя(т9) *)
fb_TYpornogoPodshipnikaRabKolodokHT_9_1(arAIN := arAIN_29, strAI := ai.Typornogo_podshipnika_rav_kolodok_HT_9_1, err_mod:=arERR_5);
AI_31_dblValue := arAIN_31.dblValue;

(* [A1-6, AI2-1]  Т УП рабочих колодок нагнетателя(т9) *)
fb_TYpornogoPodshipnikaRabKolodokHT_9_2(arAIN := arAIN_29, strAI := ai.Typornogo_podshipnika_rav_kolodok_HT_9_2, err_mod:=arERR_5);
AI_32_dblValue := arAIN_32.dblValue;

(* [A1-6, AI2-3]  Т ОП установочных колодок нагнетателя(т10) *)
fb_TYpornogoPodshipnikYstanKolodokHT_10_1(arAIN := arAIN_30, strAI := ai.Typornogo_podshipnika_nerab_kolodok_HT_10_1, err_mod:=arERR_5);
AI_33_dblValue := arAIN_33.dblValue;

(* [A1-6, AI2-3]  Т ОП установочных колодок нагнетателя(т10) *)
fb_TYpornogoPodshipnikYstanKolodokHT_10_2(arAIN := arAIN_30, strAI := ai.Typornogo_podshipnika_nerab_kolodok_HT_10_2, err_mod:=arERR_5);
AI_34_dblValue := arAIN_34.dblValue;

(* [A1-4, AI0-0] Т стали статора фаза 1 *)
fb_TStalisStatoraKanal1(arAIN := arAIN_31, strAI := ai.Tstali_statora_kanal_1, err_mod:=arERR_3);
AI_35_dblValue := arAIN_35.dblValue;

(* [A1-4, AI0-1] Т стали статора фаза 2 *)
fb_TStalisStatoraKanal2(arAIN := arAIN_32, strAI := ai.Tstali_statora_kanal_2, err_mod:=arERR_3);
AI_36_dblValue := arAIN_36.dblValue;

(* [A1-4, AI0-2] Т стали статора фаза 3 *)
fb_TStalisStatoraKanal3(arAIN := arAIN_33, strAI := ai.Tstali_statora_kanal_3, err_mod:=arERR_3);
AI_37_dblValue := arAIN_37.dblValue;

(* [A1-6, AI2-5] Т холодного воздуха в ЭД, точка 1 *)
fb_THolodnogoVozduhaEDKanall(arAIN := arAIN_34, strAI := ai.Tholodnogo_vozduha_ED_kanal_1, err_mod:=arERR_5);
AI_38_dblValue := arAIN_38.dblValue;

(* [A1-6, AI2-6] Т холодного воздуха в ЭД, точка 2 *)
fb_THolodnogoVozduhaEDKanal2(arAIN := arAIN_35, strAI := ai.Tholodnogo_vozduha_ED_kanal_2, err_mod:=arERR_5);
AI_39_dblValue := arAIN_39.dblValue;

(* [A1-10, AI6-5] Уровень масла в маслобаке *)
fb_YrovenMaslaMB(arAIN := arAIN_36, strAI := ai.Yroven_masla_MB, err_mod:=arERR_9);
AI_40_dblValue := arAIN_40.dblValue;

(* [A1-10, AI6-5] Уровень масла в маслобаке *)
fb_VibroSkorostOPED_T1(arAIN := arAIN_37, strAI := ai.Kontrol_post_220V, err_mod:=arERR_9);
AI_41_dblValue := arAIN_41.dblValue;

(* [A1-10, AI6-5] Уровень масла в маслобаке *)
fb_VibroSkorostOYPED_T2(arAIN := arAIN_38, strAI := ai.Vibro_skorost_OPED_T1, err_mod:=arERR_9);
AI_42_dblValue := arAIN_42.dblValue;

(* [A1-10, AI6-5] Уровень масла в маслобаке *)
fb_VibroSkorostOPKolesaRH_T4(arAIN := arAIN_39, strAI := ai.Vibro_skorost_OP_kolesa_RH_T4, err_mod:=arERR_9);
AI_43_dblValue := arAIN_43.dblValue;

(* [A1-10, AI6-5] Уровень масла в маслобаке *)
fb_VibroSkorostOPShesterniRED_T5(arAIN := arAIN_40, strAI := ai.Vibro_skorost_OP_shesterni_RED_T5, err_mod:=arERR_9);
AI_44_dblValue := arAIN_44.dblValue;

(* [A1-10, AI6-5] Уровень масла в маслобаке *)
fb_VibroSkorostOPShesterniReduktoraH_T6(arAIN := arAIN_41, strAI := ai.Vibro_skorost_OP_shesterni_reduktora_H_T6, err_mod:=arERR_9);
AI_45_dblValue := arAIN_45.dblValue;


(**********************************************s Модуль A1-5 *********************************************************)
A1_4_err_mode := arERR_3.wValue;
A1_6_err_mode := arERR_5.wValue;
A1_5_err_mode := arERR_4.wValue;
A1_7_err_mode := arERR_6.wValue;

(********************************************** Модуль A1-8 *********************************************************)
(* [A1-8, AI4-5]  Температура в шкафу САУ *)
fb_TEmperatura_v_SHU(arAIN := arAIN_42, strAI := ai.Tshu, err_mod:=arERR_7);
AI_46_dblValue := arAIN_46.dblValue;

(* [A1-9, AI5-5]  Вибрация ротора нагнетателя т.4 *)
fb_OsSdvigNagnetatelja_Plus(arAIN := arAIN_43, strAI := ai.Os_sdvig_nagnetatelja_plus, err_mod:=arERR_8);
AI_47_dblValue := arAIN_47.dblValue;

(* [A1-9, AI5-6]  Осевой сдвиг ротора нагнетателя *)
fb_OsSdvigNagnetatelja_Minus(arAIN := arAIN_44, strAI := ai.Os_sdvig_nagnetatelja_minus, err_mod:=arERR_8);
AI_48_dblValue := arAIN_48.dblValue;

A1_9_err_mode := arERR_8.wValue;


(********************************************** Модуль A1-10 *********************************************************)
(* [A1-10, AI6-0] Температура внутри шкафа *)
fb_VibroSkorostOYPKolesaED_T3(arAIN := arAIN_45, strAI := ai.Vibro_skorost_OYP_kolesa_ED_T3, err_mod:=arERR_9);
AI_49_dblValue := arAIN_49.dblValue;

(* [A1-10, AI6-4] Активная мощность *)
fb_DavlenieImpulsGaz(arAIN := arAIN_46, strAI := ai.Pimpuls_gaz, err_mod:=arERR_9);
AI_50_dblValue := arAIN_50.dblValue;

(* [A1-10, AI6-6]  Напряжение питания ШУ, основной ввод *)
fb_Kontrol_per220V(arAIN := arAIN_47, strAI := ai.Kontrol_per_220V, err_mod:=arERR_9);
AI_51_dblValue := arAIN_51.dblValue;

(* [A1-10, AI6-7]  Напряжение питания ШУ, резервный ввод *)
fb_Kontrol_post220V(arAIN := arAIN_48, strAI := ai.Kontrol_post_220V, err_mod:=arERR_9);
AI_52_dblValue := arAIN_52.dblValue;


A1_10_err_mode := arERR_9.wValue;
