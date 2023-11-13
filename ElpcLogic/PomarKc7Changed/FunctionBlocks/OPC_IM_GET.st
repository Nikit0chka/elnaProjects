FUNCTION_BLOCK OPC_IM_GET

VAR_EXTERNAL
	im : ImConfig	
	IM_Kran1_command : UDINT;
	IM_Kran2_command : UDINT;
	IM_Kran3_command : UDINT;
	IM_Kran3b_command : UDINT;
	IM_Kran4_command : UDINT;
	IM_Kran5_command : UDINT;
	IM_Kran6_command : UDINT;
	IM_nu1_command : UDINT;
	IM_nu2_command : UDINT;
	IM_pns_command : UDINT;
	IM_v1_Avom_command : UDINT;
	IM_v2_Avom_command : UDINT;
	IM_v3_Avom_command : UDINT;
	IM_v4_Avom_command : UDINT;
	IM_mv_command : UDINT;
	IM_Reserve_IM1_command : UDINT;
	IM_Reserve_IM2_command : UDINT;
	IM_SingleSignals_command : UDINT;
	IM_SingleOutputs_command : UDINT;
	IM_KaloriferAVOM_command : UDINT;
	IM_CMN_command : UDINT;
	IM_TEN_kollectora_command : UDINT;
	IM_TEN_MB_command : UDINT;
END_VAR
im.Kran1.inCommand_ARM := UINT_TO_WORD(IM_Kran1_command);

im.Kran2.inCommand_ARM := UINT_TO_WORD(IM_Kran2_command);

im.Kran3.inCommand_ARM := UINT_TO_WORD(IM_Kran3_command);

im.Kran3b.inCommand_ARM := UINT_TO_WORD(IM_Kran3b_command);

im.Kran4.inCommand_ARM := UINT_TO_WORD(IM_Kran4_command);

im.Kran5.inCommand_ARM := UINT_TO_WORD(IM_Kran5_command);

im.Kran6.inCommand_ARM := UINT_TO_WORD(IM_Kran6_command);

im.nu1.inCommand_ARM := UINT_TO_WORD(IM_nu1_command);

im.nu2.inCommand_ARM := UINT_TO_WORD(IM_nu2_command);

im.pns.inCommand_ARM := UINT_TO_WORD(IM_pns_command);

im.v1_Avom.inCommand_ARM := UINT_TO_WORD(IM_v1_Avom_command);

im.v2_Avom.inCommand_ARM := UINT_TO_WORD(IM_v2_Avom_command);

im.v3_Avom.inCommand_ARM := UINT_TO_WORD(IM_v3_Avom_command);

im.v4_Avom.inCommand_ARM := UINT_TO_WORD(IM_v4_Avom_command);

im.mv.inCommand_ARM := UINT_TO_WORD(IM_mv_command);

im.KaloriferAVOM.inCommand_ARM := UINT_TO_WORD(IM_KaloriferAVOM_command);

im.CMN.inCommand_ARM := UINT_TO_WORD(IM_CMN_command);

im.TEN_kollectora.inCommand_ARM := UINT_TO_WORD(IM_TEN_kollectora_command);

im.TEN_MB.inCommand_ARM := UINT_TO_WORD(IM_TEN_MB_command);
