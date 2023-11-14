FUNCTION_BLOCK proc_IM

VAR
	fb_Kran1 : fb_Kran; (*[A1-14:1, AI0] Резерв*)
	fb_Kran2 : fb_Kran; (*[A1-14:2, AI1] Резерв*)
	fb_Kran3 : fb_Kran;
	fb_Kran3b : fb_Kran;
	fb_Kran4 : fb_Kran;
	fb_Kran5 : fb_Kran;
	fb_Kran6 : fb_Kran;
	fb_nu1 : fb_OilPump;
	fb_nu2 : fb_OilPump;
	fb_pns : fb_Switch;
	fb_v1_Avom : fb_Switch;
	fb_v2_Avom : fb_Switch;
	fb_v3_Avom : fb_Switch;
	fb_v4_Avom : fb_Switch;
	fb_TEN_kollectora : fb_Switch;
	fb_KaloriferAVOM : fb_Switch;
	fb_CMN : fb_Switch;
	fb_TEN_MB : fb_Switch;
	fb_mv : fb_SectionSwitch;
	fb_PLC_Control : fb_meandr;
END_VAR

VAR_EXTERNAL
	di : DiConfig;
	od : DOconfig;
	IM : ImConfig;
END_VAR

VAR
	fb_dP_maslo_gaz_Less100 : fb_singleSignal;
	fb_dp_kran1_Less100 : fb_singleSignal;
	fb_QF1_on : fb_singleSignal;
	fb_QF2_on : fb_singleSignal;
	fb_QF23_on : fb_singleSignal;
	fb_QF4_QF5_on : fb_singleSignal;
	fb_QF6_QF7_on : fb_singleSignal;
	fb_QF8_QF9_on : fb_singleSignal;
	fb_QF10_QF11_on : fb_singleSignal;
	fb_QF12_QF13_on : fb_singleSignal;
	fb_QF14_QF15_on : fb_singleSignal;
	fb_QF22_on : fb_singleSignal;
	fb_NS_G1_G2 : fb_singleSignal;
	fb_NS_G3_G4 : fb_singleSignal;
	fb_NS_G15_G16 : fb_singleSignal;
	fb_NS_G17 : fb_singleSignal;
	fb_NS_G5_G6 : fb_singleSignal;
	fb_NS_G7_G8 : fb_singleSignal;
	fb_NS_G18_G19 : fb_singleSignal;
	fb_NS_G10_G11 : fb_singleSignal;
	fb_NS_G13_G14 : fb_singleSignal;
	fb_Vozbud_neispr_tsepey_upr_AVR_pit : fb_singleSignal;
	fb_Vozbud_gotovnost : fb_singleSignal;
	fb_Vozbud_neispravnost : fb_singleSignal;
	fb_SHAVR1_v_rabote : fb_singleSignal;
	fb_SHAVR2_v_rabote : fb_singleSignal;
	fb_Avariinoe_otkluch_vikluchatelya : fb_singleSignal;
	fb_Assinhronnii_hod_peregruzka : fb_singleSignal;
	fb_SHU_v_GPA_vkluch : fb_singleSignal;
	fb_SHP_v_GPA_vkluch : fb_singleSignal;
	fb_Uroven_masla_akkum : fb_singleSignal;
	fb_NKU1_GPA_on : fb_singleSignal;
	fb_NKU2_GPA_on : fb_singleSignal;
	fb_AO_KC_ot_SHKS : fb_singleSignal;
	fb_AO_GPA_ot_SHU : fb_singleSignal;
	fb_BEAO_srabotal : fb_singleSignal;
	fb_Chastotny_pusk : fb_singleSignal;
	fb_Neuspesh_chastotny_pusk : fb_singleSignal;
	fb_Rezhim_ruchnogo_regulirovaniya : fb_singleSignal;
	fb_Razreshenie_zagruzki_dvig : fb_singleSignal;
	fb_Osnovnoy_regul_off : fb_singleSignal;
	fb_Voltage_sekcii_norm : fb_singleSignal;
	fb_Reactorny_pusk : fb_singleSignal;
	fb_NO_GPA_ot_SHU : fb_singleSignal;
	fb_AO_GPA_ot_PRU : fb_singleSignal;
	fb_Nalichie_BP1 : fb_singleSignal;
	fb_Nalichie_BP2 : fb_singleSignal;
	fb_Nalichie_BP3 : fb_singleSignal;
	fb_Nalichie_BP4 : fb_singleSignal;
	fb_Nalichie_BP5 : fb_singleSignal;
	fb_Nalichie_BP6 : fb_singleSignal;
	fb_Nalichie_BP7_BP8 : fb_singleSignal;
	fb_Nalichie_BP9_BP10 : fb_singleSignal;
	fb_Nalichie_cepei_upravlen_mv : fb_singleSignal;
	fb_Nalichie_220BEAO : fb_singleSignal;
	fb_Nalichie_per_220_na_vhode : fb_singleSignal;
	fb_Nalichie_post_220_na_vhode : fb_singleSignal;
	fb_Nalichie_BP11 : fb_singleSignal;
	fb_Nalichie_BP12 : fb_singleSignal;
	fb_Dver_SHU_pered_otkrita : fb_singleSignal;
	fb_Dver_SHU_zad_otkrita : fb_singleSignal;
	fb_EO_GPA_ot_knopki_SHU : fb_singleSignal;
	fb_EO_EGPA_ot_PRY : fb_singleSignal;
	fb_Synchroniz_rezhima_K1 : fb_singleSignal;
	fb_Potok_ms_posle_AVOM : fb_singleSignal;
	fb_Avary_EGPA : fb_singleOutput;
	fb_U_lamp_SHU : fb_singleOutput;
	fb_AO_knopka_ind : fb_singleOutput;
	fb_Pusk : fb_singleOutput;
	fb_Stop_SHUP : fb_singleOutput;
	fb_NO_fonar : fb_singleOutput;
	fb_PC_fonar : fb_singleOutput;
	fb_AC_fonar : fb_singleOutput;
	fb_Kr1_smazka : fb_singleOutput;
	fb_Kr2_smazka : fb_singleOutput;
	fb_Kr4_open_from_alg : fb_singleOutput;
	fb_Synch_rej_K1 : fb_singleOutput;
	fb_Rabota_EGPA : fb_singleOutput;
	fb_Neispr_EGPA : fb_singleOutput;
END_VAR

(* Циклический опрос. ИМ *)

(* GPIO *)
fb_PLC_Control(output:=od.gpio_out.bits[0]);                              

(* Кран 1 *)
fb_Kran1(statOn := di.di_20.bits[5]._inversed, 
         statOff := di.di_20.bits[4]._inversed,
         inSo := di.di_16.bits[0], inSz := di.di_16.bits[1],
         cmdOn:=od.do_0.bits[0], cmdOff:=od.do_0.bits[1],      
         strKr:= IM.Kran1  );
         
(* Кран 2 *)
fb_Kran2(statOn := di.di_21.bits[0]._inversed, 
         statOff := di.di_20.bits[7]._inversed,
         inSo := di.di_16.bits[2], inSz := di.di_16.bits[3],
         cmdOn:=od.do_0.bits[2], cmdOff:=od.do_0.bits[3],  
         strKr:= IM.Kran2  );

(* Кран 3 *)
fb_Kran3(statOn := di.di_0.bits[5]._inversed, 
         statOff := di.di_0.bits[4]._inversed,
         inSo := di.di_16.bits[4], inSz := di.di_16.bits[5],
         cmdOn:=od.do_0.bits[4], cmdOff:=od.do_0.bits[5],  
         strKr:= IM.Kran3  );

(* Кран 3b *)
fb_Kran3b(statOn := di.di_0.bits[7]._inversed, 
         statOff := di.di_0.bits[6]._inversed,
         inSo := di.di_16.bits[6], inSz := di.di_16.bits[7],
         cmdOn:=od.do_0.bits[6], cmdOff:=od.do_0.bits[7],  
         strKr:= IM.Kran3b  );

(* Кран 4 *)
fb_Kran4(statOn := di.di_1.bits[1]._inversed, 
         statOff := di.di_1.bits[0]._inversed,
         inSo := di.di_17.bits[0], inSz := di.di_17.bits[1],
         cmdOn:=od.do_0.bits[8], cmdOff:=od.do_0.bits[9],  
         strKr:= IM.Kran4  );
         
(* Кран 5 *)
fb_Kran5(statOn := di.di_1.bits[3]._inversed, 
         statOff := di.di_1.bits[2]._inversed,
         inSo := di.di_17.bits[2], inSz := di.di_17.bits[3],
         cmdOn:=od.do_0.bits[10], cmdOff:=od.do_0.bits[11],  
         strKr:= IM.Kran5  );

(* Кран 6НР *)
fb_Kran6(statOn := di.di_1.bits[5]._inversed, 
         statOff := di.di_1.bits[4]._inversed,
         inSo := di.di_17.bits[4], inSz := di.di_17.bits[5],
         cmdOn:=od.do_0.bits[12], cmdOff:=od.do_0.bits[13],  
         strKr:= IM.Kran6  );

(*  НУ1 Насос уплотнения *)
fb_nu1(statOn := di.di_5.bits[1].value, statOff := di.di_5.bits[1]._inversed,
         cmdOn:=od.do_1.bits[4], cmdOff:=od.do_1.bits[5],
         StrSw:= IM.nu1  );

(*  НУ2 Насос уплотнения *)
fb_nu2(statOn := di.di_5.bits[2].value, statOff := di.di_5.bits[2]._inversed,
         cmdOn:=od.do_1.bits[6], cmdOff:=od.do_1.bits[7],
         StrSw:= IM.nu2  );
         
(*  ПНС Насос смазки *)
fb_pns(statOn := di.di_5.bits[0].value, statOff := di.di_5.bits[0]._inversed,
         cmdOn:=od.do_1.bits[0], cmdOff:=od.do_1.bits[1],
         StrSw:= IM.pns  );
         
(*  В1 АВОМ вентилятор охлаждения *)
fb_v1_Avom(statOn := di.di_5.bits[3].value, statOff := di.di_5.bits[3]._inversed,
         cmdOn:=od.do_1.bits[8], cmdOff:=od.do_1.bits[9],
         StrSw:= IM.v1_Avom  );
                 
(*  В2 АВОМ вентилятор охлаждения *)
fb_v2_Avom(statOn := di.di_5.bits[4].value, statOff := di.di_5.bits[4]._inversed,
         cmdOn:=od.do_1.bits[10], cmdOff:=od.do_1.bits[11],
         StrSw:= IM.v2_Avom  );
         
(*  В3 АВОМ вентилятор охлаждения *)
fb_v3_Avom(statOn := di.di_5.bits[5].value, statOff := di.di_5.bits[5]._inversed,
         cmdOn:=od.do_1.bits[12], cmdOff:=od.do_1.bits[13],
         StrSw:= IM.v3_Avom  );
         
(*  В4 АВОМ вентилятор охлаждения *)
fb_v4_Avom(statOn := di.di_5.bits[6].value, statOff := di.di_5.bits[6]._inversed,
         cmdOn:=od.do_1.bits[14], cmdOff:=od.do_1.bits[15],
         StrSw:= IM.v4_Avom  );
         
(*  МВ масляный выключатель *)
fb_mv(statOn := di.di_7.bits[0].value, statOff := di.di_20.bits[3].value,
         basketRolledin:= di.di_7.bits[2], basketRolledout:= di.di_7.bits[2],
         cmdOn:=od.do_4.bits[6] , cmdOff:=od.do_4.bits[7],
         StrSw:= IM.mv  );

(* Тен коллектора *)
fb_TEN_kollectora(statOn := di.di_10.bits[1].value, statOff := di.di_10.bits[1]._inversed,
         cmdOn:=od.do_2.bits[6], cmdOff:=od.do_2.bits[6],
         StrSw:= IM.TEN_kollectora  );

(* Калорифер АВОМ *)
fb_KaloriferAVOM(statOn := di.di_10.bits[2].value, statOff := di.di_10.bits[2]._inversed,
         cmdOn:=od.do_2.bits[0], cmdOff:=od.do_2.bits[1],
         StrSw:= IM.KaloriferAVOM  ); 

(* ЦМН *)
fb_CMN(statOn := di.di_10.bits[3].value, statOff := di.di_10.bits[3]._inversed,
         cmdOn:=od.do_2.bits[4], cmdOff:=od.do_2.bits[5],
         StrSw:= IM.CMN);

(* Тен маслобака *)
fb_TEN_MB(statOn := di.di_10.bits[0].value, statOff := di.di_10.bits[0]._inversed,
         cmdOn:=od.do_2.bits[2], cmdOff:=od.do_2.bits[3],
         StrSw:= IM.TEN_MB);                         
(*************************************************** singleSignals ********************************************)

(* Перепад давления масло газ м*)
fb_dP_maslo_gaz_Less100(signal :=di.di_20.bits[6], str_SS := IM.SingleSignals.dP_maslo_gaz_Less100);   

(* Перепад давления кран 1 *)
fb_dp_kran1_Less100(signal :=di.di_4.bits[1], str_SS := IM.SingleSignals.dp_kran1_Less100);   

(* Неисправность цепей управления возбудителя *)
fb_Vozbud_neispr_tsepey_upr_AVR_pit(signal :=di.di_6.bits[4], str_SS := IM.SingleSignals.Vozbud_neispr_tsepey_upr_AVR_pit);   

(* Возбудитель готовность *)
fb_Vozbud_gotovnost(signal :=di.di_6.bits[0], str_SS := IM.SingleSignals.Vozbud_gotovnost);   
                                
(* Возбудитель неисправность *)
fb_Vozbud_neispravnost(signal :=di.di_21.bits[7], str_SS := IM.SingleSignals.Vozbud_neispravnost);   
                               
(* ЩАВР 1 в работе *)
fb_SHAVR1_v_rabote(signal :=di.di_13.bits[6], str_SS := IM.SingleSignals.SHAVR1_v_rabote);   
                                
(* ЩАВР 2 в работе *)
fb_SHAVR2_v_rabote(signal :=di.di_13.bits[7], str_SS := IM.SingleSignals.SHAVR2_v_rabote); 

(* ЩАВР 2 в работе *)
fb_Avariinoe_otkluch_vikluchatelya(signal :=di.di_8.bits[0], str_SS := IM.SingleSignals.Avariinoe_otkluch_vikluchatelya);    
  
(* ЩАВР 2 в работе *)
fb_Assinhronnii_hod_peregruzka(signal :=di.di_8.bits[1], str_SS := IM.SingleSignals.Assinhronnii_hod_peregruzka);    
 
(* ЩАВР 2 в работе *)
fb_SHU_v_GPA_vkluch(signal :=di.di_8.bits[2], str_SS := IM.SingleSignals.SHU_v_GPA_vkluch);    
 
(* ЩАВР 2 в работе *)
fb_SHP_v_GPA_vkluch(signal :=di.di_8.bits[3], str_SS := IM.SingleSignals.SHP_v_GPA_vkluch);    
 
(* ЩАВР 2 в работе *)
fb_Uroven_masla_akkum(signal :=di.di_4.bits[2], str_SS := IM.SingleSignals.Uroven_masla_akkum);    
 
(* ЩАВР 2 в работе *)
fb_NKU1_GPA_on(signal :=di.di_10.bits[4], str_SS := IM.SingleSignals.NKU1_GPA_on);    
 
(* ЩАВР 2 в работе *)
fb_NKU2_GPA_on(signal :=di.di_10.bits[5], str_SS := IM.SingleSignals.NKU2_GPA_on);    
 
(* ЩАВР 2 в работе *)
fb_AO_KC_ot_SHKS(signal :=di.di_20.bits[0], str_SS := IM.SingleSignals.AO_KC_ot_SHKS);    
 
(* ЩАВР 2 в работе *)
fb_AO_GPA_ot_SHU(signal :=di.di_21.bits[2], str_SS := IM.SingleSignals.AO_GPA_ot_SHU);    
 
(* ЩАВР 2 в работе *)
fb_BEAO_srabotal(signal :=di.di_18.bits[1], str_SS := IM.SingleSignals.BEAO_srabotal);    
 
(* ЩАВР 2 в работе *)
fb_Chastotny_pusk(signal :=di.di_9.bits[0], str_SS := IM.SingleSignals.Chastotny_pusk);    
 
(* ЩАВР 2 в работе *)
fb_Neuspesh_chastotny_pusk(signal :=di.di_9.bits[1], str_SS := IM.SingleSignals.Neuspesh_chastotny_pusk);    
 
(* ЩАВР 2 в работе *)
fb_Rezhim_ruchnogo_regulirovaniya(signal :=di.di_9.bits[2], str_SS := IM.SingleSignals.Rezhim_ruchnogo_regulirovaniya);    
 
(* ЩАВР 2 в работе *)
fb_Razreshenie_zagruzki_dvig(signal :=di.di_6.bits[1], str_SS := IM.SingleSignals.Razreshenie_zagruzki_dvig);    
 
(* ЩАВР 2 в работе *)
fb_Osnovnoy_regul_off(signal :=di.di_6.bits[3], str_SS := IM.SingleSignals.Osnovnoy_regul_off);    
 
(* ЩАВР 2 в работе *)
fb_Voltage_sekcii_norm(signal :=di.di_8.bits[4], str_SS := IM.SingleSignals.Voltage_sekcii_norm);    
 
(* ЩАВР 2 в работе *)
fb_Reactorny_pusk(signal :=di.di_8.bits[5], str_SS := IM.SingleSignals.Reactorny_pusk);    
 
(* ЩАВР 2 в работе *)
fb_NO_GPA_ot_SHU(signal :=di.di_21.bits[1], str_SS := IM.SingleSignals.NO_GPA_ot_SHU);    
 
(* ЩАВР 2 в работе *)
fb_AO_GPA_ot_PRU(signal :=di.di_21.bits[3], str_SS := IM.SingleSignals.AO_GPA_ot_PRU);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_BP1(signal :=di.di_11.bits[0], str_SS := IM.SingleSignals.Nalichie_BP1);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_BP2(signal :=di.di_11.bits[1], str_SS := IM.SingleSignals.Nalichie_BP2);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_BP3(signal :=di.di_11.bits[2], str_SS := IM.SingleSignals.Nalichie_BP3);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_BP4(signal :=di.di_11.bits[3], str_SS := IM.SingleSignals.Nalichie_BP4);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_BP5(signal :=di.di_11.bits[4], str_SS := IM.SingleSignals.Nalichie_BP5);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_BP6(signal :=di.di_11.bits[5], str_SS := IM.SingleSignals.Nalichie_BP6);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_BP7_BP8(signal :=di.di_11.bits[6], str_SS := IM.SingleSignals.Nalichie_BP7_BP8);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_BP9_BP10(signal :=di.di_11.bits[7], str_SS := IM.SingleSignals.Nalichie_BP9_BP10);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_cepei_upravlen_mv(signal :=di.di_12.bits[0], str_SS := IM.SingleSignals.Nalichie_cepei_upravlen_mv);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_220BEAO(signal :=di.di_12.bits[1], str_SS := IM.SingleSignals.Nalichie_220BEAO);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_per_220_na_vhode(signal :=di.di_12.bits[2], str_SS := IM.SingleSignals.Nalichie_per_220_na_vhode);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_post_220_na_vhode(signal :=di.di_12.bits[3], str_SS := IM.SingleSignals.Nalichie_post_220_na_vhode);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_BP11(signal :=di.di_12.bits[4], str_SS := IM.SingleSignals.Nalichie_BP11);    
 
(* ЩАВР 2 в работе *)
fb_Nalichie_BP12(signal :=di.di_12.bits[4], str_SS := IM.SingleSignals.Nalichie_BP12);    
 
(* ЩАВР 2 в работе *)
fb_Dver_SHU_pered_otkrita(signal :=di.di_13.bits[0], str_SS := IM.SingleSignals.Dver_SHU_pered_otkrita);    
 
(* ЩАВР 2 в работе *)
fb_Dver_SHU_zad_otkrita(signal :=di.di_13.bits[1], str_SS := IM.SingleSignals.Dver_SHU_zad_otkrita);    
 
(* ЩАВР 2 в работе *)
fb_EO_GPA_ot_knopki_SHU(signal :=di.di_14.bits[0], str_SS := IM.SingleSignals.EO_GPA_ot_knopki_SHU);    
 
(* ЩАВР 2 в работе *)
fb_EO_EGPA_ot_PRY(signal :=di.di_14.bits[1], str_SS := IM.SingleSignals.EO_EGPA_ot_PRY);    
 
(* ЩАВР 2 в работе *)
fb_Synchroniz_rezhima_K1(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Synchroniz_rezhima_K1);

(* ЩАВР 2 в работе *)
fb_Potok_ms_posle_AVOM(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Potok_ms_posle_AVOM);   

  (* Выключатель основного ввода питания QF1  в положении включен   *)
fb_QF1_on(signal :=di.di_7.bits[6], str_SS := IM.SingleSignals.QF1_on);   

  (* Выключатель резервного ввода питания QF2  в положении включен   *)
fb_QF2_on(signal :=di.di_7.bits[7], str_SS := IM.SingleSignals.QF2_on);   

  (* Выключатель питания кранов:  QF23 110 В в положении включен   *)
fb_QF23_on(signal :=di.di_8.bits[0], str_SS := IM.SingleSignals.QF23_on);   

  (* Выключатели группы 1: QF4, QF5 в положении включен   *)
fb_QF4_QF5_on(signal :=di.di_8.bits[1], str_SS := IM.SingleSignals.QF4_QF5_on);   

  (* Выключатели группы 2: QF6, QF7 в положении включен   *)
fb_QF6_QF7_on(signal :=di.di_8.bits[2], str_SS := IM.SingleSignals.QF6_QF7_on);   

  (* Выключатели группы 3: QF8, QF9 в положении включен   *)
fb_QF8_QF9_on(signal :=di.di_8.bits[3], str_SS := IM.SingleSignals.QF8_QF9_on);   

  (* Выключатели группы 4: QF10, QF11 в положении включен   *)
fb_QF10_QF11_on(signal :=di.di_8.bits[4], str_SS := IM.SingleSignals.QF10_QF11_on);   

  (* Выключатели группы 5: QF12, QF13 в положении включен   *)
fb_QF12_QF13_on(signal :=di.di_8.bits[5], str_SS := IM.SingleSignals.QF12_QF13_on);   

  (* Выключатели группы 6: QF14, QF15 в положении включен   *)
fb_QF14_QF15_on(signal :=di.di_8.bits[6], str_SS := IM.SingleSignals.QF14_QF15_on);   

  (* Выключатели группы : QF22 в положении включен   *)
fb_QF22_on(signal :=di.di_14.bits[2], str_SS := IM.SingleSignals.QF22_on);   

  (* Неисправность источников питания группы 1: G1, G2 (=24 В)   *)
fb_NS_G1_G2(signal :=di.di_8.bits[7], str_SS := IM.SingleSignals.NS_G1_G2);   

  (* Неисправность источников питания группы 2: G3, G4 (=24 В)   *)
fb_NS_G3_G4(signal :=di.di_9.bits[0], str_SS := IM.SingleSignals.NS_G3_G4);   

  (* Неисправность источников питания внутренних ПТС: G15, G16 (=24 В)   *)
fb_NS_G15_G16(signal :=di.di_9.bits[1], str_SS := IM.SingleSignals.NS_G15_G16);   

  (* Неисправность источника питания аналоговых сигналов: G17 (=24 В)   *)
fb_NS_G17(signal :=di.di_9.bits[2], str_SS := IM.SingleSignals.NS_G17);   

  (* Неисправность источников питания группы 3: G5, G6 (=24 В)   *)
fb_NS_G5_G6(signal :=di.di_9.bits[3], str_SS := IM.SingleSignals.NS_G5_G6);   

  (* Неисправность источников питания группы 4: G7, G8 (=24 В)   *)
fb_NS_G7_G8(signal :=di.di_9.bits[4], str_SS := IM.SingleSignals.NS_G7_G8);   

  (* Неисправность источников питания внешних цепей: G18, G19 (=24 В)   *)
fb_NS_G18_G19(signal :=di.di_9.bits[5], str_SS := IM.SingleSignals.NS_G18_G19);   

  (* Неисправность источников питания группы 5: G9, G10, G11, G12 (=110 В)   *)
fb_NS_G10_G11(signal :=di.di_9.bits[6], str_SS := IM.SingleSignals.NS_G10_G11);   

  (* Неисправность источников питания G13, G14 (=24 В)   *)
fb_NS_G13_G14(signal :=di.di_9.bits[7], str_SS := IM.SingleSignals.NS_G13_G14); 


(*************************************************** SingleOutputs ********************************************)

(* Идикация НО (подсветка кнопки на шкафу)   *)
fb_Rabota_EGPA(str_SO := IM.SingleOutputs.Rabota_EGPA, signal:=od.do_4.bits[2]);  

(* Взвод включения БЭАО по неисправности ПТС   *)
fb_Neispr_EGPA(str_SO := IM.SingleOutputs.Neispr_EGPA, signal:=od.do_4.bits[0]);  

(* Авария ЭГПА в КЦ   
fb_Avary_EGPA(str_SO := IM.SingleOutputs.Avary_EGPA, signal:=od.do_4.bits[1);  *)  

(* Сброс включения БЭАО по неисправности ПТС   *)
fb_U_lamp_SHU(str_SO := IM.SingleOutputs.U_lamp_SHU, signal:=od.do_4.bits[3]);   

(* Индикация ПС Фонарь   *)
fb_AO_knopka_ind(str_SO := IM.SingleOutputs.AO_knopka_ind, signal:=od.do_4.bits[4]);    

(* Индикация АС Фонарь   *)
fb_Pusk(str_SO := IM.SingleOutputs.Pusk_SHUP, signal:=od.do_4.bits[8]);   

(* Отключение МВ1 от КНА   *)
fb_Stop_SHUP(str_SO := IM.SingleOutputs.Stop_SHUP, signal:=od.do_4.bits[9]);   

(* Отключение МВ1 от КНА   *)
fb_NO_fonar(str_SO := IM.SingleOutputs.NO_fonar, signal:=od.do_3.bits[10]);   

(* Отключение МВ1 от КНА   *)
fb_PC_fonar(str_SO := IM.SingleOutputs.PC_fonar, signal:=od.do_3.bits[9]);   

(* Отключение МВ1 от КНА   *)
fb_AC_fonar(str_SO := IM.SingleOutputs.AC_fonar, signal:=od.do_3.bits[8]);   

(* Отключение МВ1 от КНА   *)
fb_Kr1_smazka(str_SO := IM.SingleOutputs.Kr1_smazka, signal:=od.do_0.bits[14]);   

(* Отключение МВ1 от КНА   *)
fb_Kr2_smazka(str_SO := IM.SingleOutputs.Kr2_smazka, signal:=od.do_0.bits[15]);   

(* Отключение МВ1 от КНА   *)
fb_Kr4_open_from_alg(str_SO := IM.SingleOutputs.Kr4_open_from_alg, signal:=od.do_0.bits[8]);   

(* Отключение МВ1 от КНА   *)
fb_Synch_rej_K1(str_SO := IM.SingleOutputs.Synch_rej_K1, signal:=od.do_3.bits[13]);   


 (**************************************** Аналоговые и Дискретные параметры ***********************************)                                                                    