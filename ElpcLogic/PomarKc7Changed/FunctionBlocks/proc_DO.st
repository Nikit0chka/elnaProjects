FUNCTION_BLOCK proc_DO

VAR
	do_0 : fb_DOSourceMlp;
	do_1 : fb_DOSourceMlp;
	do_2 : fb_DOSourceMlp;
	do_3 : fb_DOSourceMlp;
	do_4 : fb_DOSourceMlp;
	gpio_out : fb_DOSourceMlp;
END_VAR

VAR_EXTERNAL
	od : DOconfig;
	arDOUT_0 : TWordData;
	arDOUT_1 : TWordData;
	arDOUT_2 : TWordData;
	arDOUT_3 : TWordData;
	arDOUT_4 : TWordData;
	arERR_66 : TItemDIN;
	arDOUT_66 : TWordData;
	arERR_0 : TItemDIN;
	arERR_1 : TItemDIN;
	arERR_2 : TItemDIN;
	arERR_15 : TItemDIN;
	arERR_16 : TItemDIN;
	A1_1_err_mode : UINT;
	A1_2_err_mode : UINT;
	A1_3_err_mode : UINT;
	A2_1_err_mode : UINT;
	A2_4_err_mode : UINT;
	DO_0_wValue : UINT;
	DO_1_wValue : UINT;
	DO_2_wValue : UINT;
	DO_3_wValue : UINT;
	DO_4_wValue : UINT;
END_VAR

















(* Циклический опрос. Входные дискретные параметры *)



(* Модуль A1-1 *)
do_0(arDout := arDOUT_0, strDO := od.do_0, err_mod:=arERR_0);
DO_0_wValue:=arDOUT_0.wValue;
A1_1_err_mode:= arERR_0.wValue; 

(* Модуль A1-2 *)
do_1(arDout := arDOUT_1, strDO := od.do_1, err_mod:=arERR_1);
DO_1_wValue:=arDOUT_1.wValue;
A1_2_err_mode:= arERR_1.wValue; 

(* Модуль A1-3 *)
do_2(arDout := arDOUT_2, strDO := od.do_2, err_mod:=arERR_2);
DO_2_wValue:=arDOUT_2.wValue;
A1_3_err_mode:= arERR_2.wValue; 

(* Модуль A2-1 *)
do_3(arDout := arDOUT_3, strDO := od.do_3, err_mod:=arERR_15);
DO_3_wValue:=arDOUT_3.wValue;
A2_1_err_mode:= arERR_15.wValue; 

(* Модуль A2-1 *)
do_4(arDout := arDOUT_4, strDO := od.do_4, err_mod:=arERR_15);
DO_4_wValue:=arDOUT_4.wValue;
A2_4_err_mode:= arERR_16.wValue;


gpio_out(arDout := arDOUT_66, strDO := od.gpio_out, err_mod:=arERR_66);
