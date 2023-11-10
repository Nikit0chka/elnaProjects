FUNCTION nsCepeiUpravlenya : BOOL

VAR_INPUT
	im : ImConfig;
END_VAR





nsCepeiUpravlenya:=
	im.kran1.So OR im.kran1.Sz OR
	im.kran2.So OR im.kran2.Sz OR
	im.kran4.So OR im.kran4.Sz OR
	im.kran5.So OR im.kran5.Sz OR
	(*im.kran6.So OR im.kran6.Sz OR*)
	im.kran3b.So OR im.kran3b.Sz OR
	im.pns.breakCmdOn OR
	im.nu1.breakCmdOn OR
	im.nu2.breakCmdOn OR
	im.PNS.breakCmdOn OR
          im.v1_Avom.breakCmdOn OR
          im.v2_Avom.breakCmdOn OR
          (*im.Ten.breakCmdOn OR*)
	im.mv.breakCmdOff;
	