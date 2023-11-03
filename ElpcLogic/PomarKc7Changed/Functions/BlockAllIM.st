FUNCTION BlockAllIM : BOOL

VAR_IN_OUT
	IM : ImConfig;
END_VAR

IF NOT IM.Kran1.inOpcCommandsDisabled   THEN IM.Kran1.inOpcCommandsDisabled:=TRUE; END_IF;
IF NOT IM.Kran2.inOpcCommandsDisabled   THEN IM.Kran2.inOpcCommandsDisabled:=TRUE; END_IF;
IF NOT IM.Kran3b.inOpcCommandsDisabled  THEN IM.Kran3b.inOpcCommandsDisabled:=TRUE; END_IF;
IF NOT IM.Kran4.inOpcCommandsDisabled   THEN IM.Kran4.inOpcCommandsDisabled:=TRUE; END_IF;
IF NOT IM.Kran5.inOpcCommandsDisabled   THEN IM.Kran5.inOpcCommandsDisabled:=TRUE; END_IF;
(*IF NOT IM.Kran6.inOpcCommandsDisabled   THEN IM.Kran6.inOpcCommandsDisabled:=TRUE; END_IF;*)

IF NOT IM.nu1.inOpcCommandsDisabled     THEN IM.nu1.inOpcCommandsDisabled:=TRUE; END_IF;
IF NOT IM.nu2.inOpcCommandsDisabled     THEN IM.nu2.inOpcCommandsDisabled:=TRUE; END_IF;
IF NOT IM.pns.inOpcCommandsDisabled     THEN IM.pns.inOpcCommandsDisabled:=TRUE; END_IF;
IF NOT IM.v1_Avom.inOpcCommandsDisabled THEN IM.v1_Avom.inOpcCommandsDisabled:=TRUE; END_IF;
IF NOT IM.v2_Avom.inOpcCommandsDisabled THEN IM.v2_Avom.inOpcCommandsDisabled:=TRUE; END_IF;
(*IF NOT IM.Ten.inOpcCommandsDisabled     THEN IM.Ten.inOpcCommandsDisabled:=TRUE; END_IF;*)
IF NOT IM.mv.inOpcCommandsDisabled      THEN IM.mv.inOpcCommandsDisabled:=TRUE; END_IF;
