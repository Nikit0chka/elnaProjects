FUNCTION UnBlockAllIM : BOOL

VAR_IN_OUT
	IM : ImConfig;
END_VAR






(*IF IM.TypeSwitch.Value = 1 THEN*)

IF IM.Kran1.inOpcCommandsDisabled   THEN IM.Kran1.inOpcCommandsDisabled:=FALSE; END_IF;
IF IM.Kran2.inOpcCommandsDisabled   THEN IM.Kran2.inOpcCommandsDisabled:=FALSE; END_IF;
IF IM.Kran3b.inOpcCommandsDisabled  THEN IM.Kran3b.inOpcCommandsDisabled:=FALSE; END_IF;
IF IM.Kran4.inOpcCommandsDisabled   THEN IM.Kran4.inOpcCommandsDisabled:=FALSE; END_IF;
IF IM.Kran5.inOpcCommandsDisabled   THEN IM.Kran5.inOpcCommandsDisabled:=FALSE; END_IF;
(*IF IM.Kran6.inOpcCommandsDisabled   THEN IM.Kran6.inOpcCommandsDisabled:=FALSE; END_IF;*)
(*END_IF;*)


IF IM.nu1.inOpcCommandsDisabled     THEN IM.nu1.inOpcCommandsDisabled:=FALSE; END_IF;
IF IM.nu2.inOpcCommandsDisabled     THEN IM.nu2.inOpcCommandsDisabled:=FALSE; END_IF;
IF IM.pns.inOpcCommandsDisabled     THEN IM.pns.inOpcCommandsDisabled:=FALSE; END_IF;
IF IM.v1_Avom.inOpcCommandsDisabled THEN IM.v1_Avom.inOpcCommandsDisabled:=FALSE; END_IF;
IF IM.v2_Avom.inOpcCommandsDisabled THEN IM.v2_Avom.inOpcCommandsDisabled:=FALSE; END_IF;
(*IF IM.Ten.inOpcCommandsDisabled     THEN IM.Ten.inOpcCommandsDisabled:=FALSE; END_IF;*)
IF IM.mv.inOpcCommandsDisabled      THEN IM.mv.inOpcCommandsDisabled:=FALSE; END_IF;
