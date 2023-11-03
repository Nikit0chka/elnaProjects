FUNCTION_BLOCK proc_DI

VAR
	di_0 : fb_DiSourceMlp;
	di_1 : fb_DiSourceMlp;
	di_2 : fb_DiSourceMlp;
	di_3 : fb_DiSourceMlp;
	di_4 : fb_DiSourceMlp;
	di_5 : fb_DiSourceMlp;
	di_6 : fb_DiSourceMlp;
	di_7 : fb_DiSourceMlp;
	di_8 : fb_DiSourceMlp;
	di_9 : fb_DiSourceMlp;
	di_10 : fb_DiSourceMlp;
	di_11 : fb_DiSourceMlp;
	di_12 : fb_DiSourceMlp;
	di_13 : fb_DiSourceMlp;
	di_14 : fb_DiSourceMlp;
	di_15 : fb_DiSourceMlp;
	di_16 : fb_DiSourceMlp;
	di_17 : fb_DiSourceMlp;
	di_18 : fb_DiSourceMlp;
	di_19 : fb_DiSourceMlp;
	di_20 : fb_DiSourceMlp;
	di_21 : fb_DiSourceMlp;
END_VAR

VAR_EXTERNAL
	arDIN_0 : TItemDIN;
	arDIN_1 : TItemDIN;
	arDIN_2 : TItemDIN;
	arDIN_3 : TItemDIN;
	arDIN_4 : TItemDIN;
	arDIN_5 : TItemDIN;
	arDIN_6 : TItemDIN;
	arDIN_7 : TItemDIN;
	arDIN_8 : TItemDIN;
	arDIN_9 : TItemDIN;
	arDIN_10 : TItemDIN;
	arDIN_11 : TItemDIN;
	arDIN_12 : TItemDIN;
	arDIN_13 : TItemDIN;
	arDIN_14 : TItemDIN;
	arDIN_15 : TItemDIN;
	arDIN_16 : TItemDIN;
	arDIN_17 : TItemDIN;
	arDIN_18 : TItemDIN;
	arDIN_19 : TItemDIN;
	arDIN_20 : TItemDIN;
	arDIN_21 : TItemDIN;
	di : DiConfig;
	DI_0_1_wValue : UDINT;
	DI_10_11_wValue : UDINT;
	DI_12_13_wValue : UDINT;
	DI_14_15_wValue : UDINT;
	DI_16_17_wValue : UDINT;
	DI_18_19_wValue : UDINT;
	DI_20_21_wValue : UDINT;
	DI_2_3_wValue : UDINT;
	DI_4_5_wValue : UDINT;
	DI_6_7_wValue : UDINT;
	DI_8_9_wValue : UDINT;
	A1_12_err_mode : UINT;
	A1_13_err_mode : UINT;
	A1_14_err_mode : UINT;
	A1_15_err_mode : UINT;
	A2_10_err_mode : UINT;
	A2_4_err_mode : UINT;
	A2_5_err_mode : UINT;
	A2_6_err_mode : UINT;
	A2_7_err_mode : UINT;
	A2_8_err_mode : UINT;
	A2_9_err_mode : UINT;
	arERR_11 : TItemDIN;
	arERR_12 : TItemDIN;
	arERR_13 : TItemDIN;
	arERR_14 : TItemDIN;
	arERR_18 : TItemDIN;
	arERR_19 : TItemDIN;
	arERR_20 : TItemDIN;
	arERR_21 : TItemDIN;
	arERR_22 : TItemDIN;
	arERR_23 : TItemDIN;
	arERR_24 : TItemDIN;
END_VAR

(* Циклический опрос. Входные дискретные параметры *)
(* Модуль A1-12 *)
di_0(arDIN := arDIN_0, strDI:=di.di_0, err_mod:=arERR_11);
di_1(arDIN := arDIN_1, strDI:=di.di_1, err_mod:=arERR_11);
DI_0_1_wValue:=TwoUint_To_UDINT(arDIN_0.wValue, arDIN_1.wValue);
A1_12_err_mode:= arERR_11.wValue; 

(* Модуль A1-13 *)
di_2(arDIN := arDIN_2, strDI:=di.di_2,  err_mod:=arERR_12);
di_3(arDIN := arDIN_3, strDI:=di.di_3,  err_mod:=arERR_12);
DI_2_3_wValue:=TwoUint_To_UDINT(arDIN_2.wValue, arDIN_3.wValue);
A1_13_err_mode:= arERR_12.wValue; 

(* Модуль A1-14 *)
di_4(arDIN := arDIN_4, strDI:=di.di_4,  err_mod:=arERR_13);
di_5(arDIN := arDIN_5, strDI:=di.di_5,  err_mod:=arERR_13);
DI_4_5_wValue:=TwoUint_To_UDINT(arDIN_4.wValue, arDIN_5.wValue);
A1_14_err_mode:= arERR_13.wValue;

(* Модуль A1-15 *)
di_6(arDIN := arDIN_6, strDI:=di.di_6,  err_mod:=arERR_14);
di_7(arDIN := arDIN_7, strDI:=di.di_7,  err_mod:=arERR_14);
DI_6_7_wValue:=TwoUint_To_UDINT(arDIN_6.wValue, arDIN_7.wValue);
A1_15_err_mode:= arERR_14.wValue;

(* Модуль A2-4 *)
di_8(arDIN := arDIN_8, strDI:=di.di_8,  err_mod:=arERR_18);
di_9(arDIN := arDIN_9, strDI:=di.di_9,  err_mod:=arERR_18);
DI_8_9_wValue:=TwoUint_To_UDINT(arDIN_8.wValue, arDIN_9.wValue);
A2_4_err_mode:= arERR_18.wValue;

(* Модуль A2-5 *)
di_10(arDIN := arDIN_10, strDI:=di.di_10,  err_mod:=arERR_19);
di_11(arDIN := arDIN_11, strDI:=di.di_11,  err_mod:=arERR_19);
DI_10_11_wValue:=TwoUint_To_UDINT(arDIN_10.wValue, arDIN_11.wValue);
A2_5_err_mode:= arERR_19.wValue;

(* Модуль A2-6 *)
di_12(arDIN := arDIN_12, strDI:=di.di_12,  err_mod:=arERR_20);
di_13(arDIN := arDIN_13, strDI:=di.di_13,  err_mod:=arERR_20);
DI_12_13_wValue:=TwoUint_To_UDINT(arDIN_12.wValue, arDIN_13.wValue);
A2_6_err_mode:= arERR_20.wValue;

(* Модуль A2-7 *)
di_14(arDIN := arDIN_14, strDI:=di.di_14,  err_mod:=arERR_21);
di_15(arDIN := arDIN_15, strDI:=di.di_15,  err_mod:=arERR_21);
DI_14_15_wValue:=TwoUint_To_UDINT(arDIN_14.wValue, arDIN_15.wValue);
A2_7_err_mode:= arERR_21.wValue;

di_16(arDIN := arDIN_16, strDI:=di.di_16,  err_mod:=arERR_22);
di_17(arDIN := arDIN_17, strDI:=di.di_17,  err_mod:=arERR_22);
DI_16_17_wValue:=TwoUint_To_UDINT(arDIN_16.wValue, arDIN_17.wValue);
A2_8_err_mode:= arERR_22.wValue;

di_18(arDIN := arDIN_18, strDI:=di.di_18,  err_mod:=arERR_23);
di_19(arDIN := arDIN_19, strDI:=di.di_19,  err_mod:=arERR_23);
DI_18_19_wValue:=TwoUint_To_UDINT(arDIN_18.wValue, arDIN_19.wValue);
A2_9_err_mode:= arERR_23.wValue;

di_20(arDIN := arDIN_20, strDI:=di.di_20,  err_mod:=arERR_24);
di_21(arDIN := arDIN_21, strDI:=di.di_21,  err_mod:=arERR_24);
DI_20_21_wValue:=TwoUint_To_UDINT(arDIN_20.wValue, arDIN_21.wValue);
A2_10_err_mode:= arERR_24.wValue;