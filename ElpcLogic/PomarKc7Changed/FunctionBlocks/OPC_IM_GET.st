FUNCTION_BLOCK OPC_IM_GET

VAR_EXTERNAL
	IM : ImConfig;
	IM_Kran1_status : UDINT;
	IM_Kran1_inCommand_ARM : UINT;
	IM_Kran2_status : UDINT;
	IM_Kran2_inCommand_ARM : UINT;
	IM_Kran3_status : UDINT;
	IM_Kran3_inCommand_ARM : UINT;
	IM_Kran3b_status : UDINT;
	IM_Kran3b_inCommand_ARM : UINT;
	IM_Kran4_status : UDINT;
	IM_Kran4_inCommand_ARM : UINT;
	IM_Kran5_status : UDINT;
	IM_Kran5_inCommand_ARM : UINT;
	IM_Kran6_status : UDINT;
	IM_Kran6_inCommand_ARM : UINT;
	IM_nu1_status : UDINT;
	IM_nu1_inCommand_ARM : UINT;
	IM_nu2_status : UDINT;
	IM_nu2_inCommand_ARM : UINT;
	IM_pns_status : UDINT;
	IM_pns_inCommand_ARM : UINT;
	IM_v1_Avom_status : UDINT;
	IM_v1_Avom_inCommand_ARM : UINT;
	IM_v2_Avom_status : UDINT;
	IM_v2_Avom_inCommand_ARM : UINT;
	IM_v3_Avom_status : UDINT;
	IM_v3_Avom_inCommand_ARM : UINT;
	IM_v4_Avom_status : UDINT;
	IM_v4_Avom_inCommand_ARM : UINT;
	IM_mv_status : UDINT;
	IM_mv_inCommand_ARM : UINT;
	IM_KaloriferAVOM_status : UDINT;
	IM_KaloriferAVOM_inCommand_ARM : UINT;
	IM_CMN_status : UDINT;
	IM_CMN_inCommand_ARM : UINT;
	IM_TEN_kollectora_status : UDINT;
	IM_TEN_kollectora_inCommand_ARM : UINT;
	IM_TEN_MB_status : UDINT;
	IM_TEN_MB_inCommand_ARM : UINT;
END_VAR

IM.Kran1.inCommand_ARM := UINT_TO_WORD(IM_Kran1_inCommand_ARM);

IM.Kran2.inCommand_ARM := UINT_TO_WORD(IM_Kran2_inCommand_ARM);

IM.Kran3.inCommand_ARM := UINT_TO_WORD(IM_Kran3_inCommand_ARM);

IM.Kran3b.inCommand_ARM := UINT_TO_WORD(IM_Kran3b_inCommand_ARM);

IM.Kran4.inCommand_ARM := UINT_TO_WORD(IM_Kran4_inCommand_ARM);

IM.Kran5.inCommand_ARM := UINT_TO_WORD(IM_Kran5_inCommand_ARM);

IM.Kran6.inCommand_ARM := UINT_TO_WORD(IM_Kran6_inCommand_ARM);

IM.nu1.inCommand_ARM := UINT_TO_WORD(IM_nu1_inCommand_ARM);

IM.nu2.inCommand_ARM := UINT_TO_WORD(IM_nu2_inCommand_ARM);

IM.pns.inCommand_ARM := UINT_TO_WORD(IM_pns_inCommand_ARM);

IM.v1_Avom.inCommand_ARM := UINT_TO_WORD(IM_v1_Avom_inCommand_ARM);

IM.v2_Avom.inCommand_ARM := UINT_TO_WORD(IM_v2_Avom_inCommand_ARM);

IM.v3_Avom.inCommand_ARM := UINT_TO_WORD(IM_v3_Avom_inCommand_ARM);

IM.v4_Avom.inCommand_ARM := UINT_TO_WORD(IM_v4_Avom_inCommand_ARM);

IM.mv.inCommand_ARM := UINT_TO_WORD(IM_mv_inCommand_ARM);

IM.KaloriferAVOM.inCommand_ARM := UINT_TO_WORD(IM_KaloriferAVOM_inCommand_ARM);

IM.CMN.inCommand_ARM := UINT_TO_WORD(IM_CMN_inCommand_ARM);

IM.TEN_kollectora.inCommand_ARM := UINT_TO_WORD(IM_TEN_kollectora_inCommand_ARM);

IM.TEN_MB.inCommand_ARM := UINT_TO_WORD(IM_TEN_MB_inCommand_ARM);

