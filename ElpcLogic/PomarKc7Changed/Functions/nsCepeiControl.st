FUNCTION nsCepeiControl : BOOL

VAR_INPUT
	im : ImConfig;
END_VAR









nsCepeiControl:= NOT (
	im.kran1.reliability OR
	im.kran2.reliability OR 
	im.kran4.reliability OR 
	im.kran5.reliability OR 
	im.kran6.reliability OR 
	im.kran3b.reliability OR 
	im.pns.reliability OR
	im.nu1.reliability OR
	im.nu2.reliability OR
	im.PNS.reliability OR
          im.v1_Avom.reliability OR
          im.v2_Avom.reliability OR
          (*im.Ten.reliability OR*)
	im.mv.reliability);
	