FUNCTION DisableAiLimits : BOOL

VAR_IN_OUT
	ai : AiConfig;
END_VAR

 ai.Pmasla_posle_GNS.Disabled_LA:=TRUE;
 ai.Pmasla_posle_GNS.Disabled_LW:=TRUE;
 ai.Pmasla_posle_NU.Disabled_LW:=TRUE;
 ai.Tmasla_MB.Disabled_LA:=TRUE;
 ai.Tmasla_MB.Disabled_LW:=TRUE;