FUNCTION_BLOCK fb_AlgoritmsManager

VAR_IN_OUT
	str_AM : struct_AlgoritmsManager;
END_VAR

VAR
	onInit : BOOL;
END_VAR

VAR_EXTERNAL
	ai : AiConfig;
END_VAR

VAR
	EoTrig : R_TRIG;
	EoFTrig : F_TRIG;
	PsLampTrig : R_TRIG;
	PsLampFTrig : F_TRIG;
	Ring : R_TRIG;
	Line : R_TRIG;
	statusDualInput : TYPE_statusDualInput;
END_VAR

VAR_EXTERNAL
	IM : ImConfig;
	protections : ProtectionsConfig;
	algoritms : AlgoritmsConfig;
	ModeGpa : TYPE_ModeGpa;
END_VAR

IF NOT onInit THEN
          DisableAiLimits(ai);
          (*IM.SingleSignals.P_oil_low.Disabled_Sig:=TRUE;
          IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=TRUE;*)
          str_AM.nMode:=ModeGpa.MODE_STOP;
          BlockAllIM(IM);
          runIfNotRunning(algoritms.AutoTen);
onInit:=TRUE;
END_IF;

str_AM.DiscretPS:=anyDiscretPS(IM);
str_AM.AnalogsPs:=anyAnalogsPs(ai);
str_AM.ProtectionSignaling:=anyProtectionSignaling(protections);

(*EoTrig(CLK := IM.SingleSignals.BEO_Srabat.Q);*)
IF EoTrig.Q THEN
	stopPusk(algoritms);
	resetAndDisable(algoritms.Remont);
	resetAndDisable(algoritms.no);
	resetAndDisable(algoritms.ao);
	str_AM.nMode:=ModeGpa.MODE_EO;
END_IF;
(*EoFTrig(CLK := IM.SingleSignals.BEO_Srabat.Q);*)
IF EoFTrig.Q THEN
	str_AM.nMode:=ModeGpa.MODE_STOP;
	runIfNotRunning(algoritms.ao);
END_IF;

(*IF (str_AM.ProtectionSignaling OR Im.SingleSignals.AO_KC.Q OR Im.SingleSignals.AOGPA_knopkaSHU.Q OR Im.SingleSignals.AOGPA_PRU.Q ) 
	AND NOT((str_AM.mode=ModeGpa.MODE_AO) OR (str_AM.mode=ModeGpa.MODE_EO) OR IM.SingleOutputs.IndikicijaAS_fonar.Q
          OR (str_AM.mode=ModeGpa.MODE_TESTAZ) OR (str_AM.mode=ModeGpa.MODE_TESTDPMG) OR (str_AM.mode=ModeGpa.MODE_REMONT) OR
          (str_AM.mode=ModeGpa.MODE_TESTPMS))THEN
		runIfNotRunning(algoritms.ao);
	str_AM.nMode:=ModeGpa.MODE_AO;	
END_IF;
*)
(*IF Im.SingleSignals.NOGPA_knopkaSHU.Q  AND algoritms.no.CanRun THEN
	runIfNotRunning(algoritms.no);
          str_AM.nMode:=ModeGpa.MODE_NO;
END_IF;*)


PsLampTrig(CLK := str_AM.DiscretPS OR str_AM.AnalogsPs);
(*IF PsLampTrig.Q THEN
          runIfNotRunningSO(IM.SingleOutputs.IndikicijaPS_fonar);
END_IF;*)
PsLampFTrig(CLK := str_AM.DiscretPS OR str_AM.AnalogsPs);
(*IF PsLampFTrig.Q THEN
          resetIfRunningSO(IM.SingleOutputs.IndikicijaPS_fonar);
END_IF;*)

IF str_AM.mode = ModeGpa.MODE_WORK_Line OR str_AM.mode = ModeGpa.MODE_WORK_Ring  THEN

	Ring(CLK:=Im.kran6.onStatus=statusDualInput.STATUS_On);
	Line(CLK:=Im.kran6.onStatus=statusDualInput.STATUS_Off);
	
	IF Ring.Q AND str_AM.mode = ModeGpa.MODE_WORK_Line THEN
		str_AM.nMode:=ModeGpa.MODE_WORK_Ring;
	END_IF;
	IF Line.Q AND str_AM.mode = ModeGpa.MODE_WORK_Ring THEN
		str_AM.nMode:=ModeGpa.MODE_WORK_Line;
	END_IF;
	
	
END_IF;

IF str_AM.mode = ModeGpa.MODE_WORK_Line THEN
          runIfNotRunning(alg:=algoritms.AntiPompag);
	ELSE
          resetAndDisable(alg:=algoritms.AntiPompag);
END_IF;

IF str_AM.nMode<>str_AM.mode THEN
	str_AM.mode:=str_AM.nMode;
	CASE str_AM.mode OF
	(*ModeGpa.MODE_REMONT*)1:
		stopPusk(algoritms);		
		resetAndDisable(alg:=algoritms.no);
		resetAndDisable(alg:=algoritms.ao);
		resetAndDisable(alg:=algoritms.TestProtection);
                    resetAndDisable(alg:=algoritms.testIm);
                    

	(*ModeGpa.MODE_TESTAZ*)16:
		stopPusk(algoritms);
		resetAndDisable(alg:=algoritms.ao);
		resetAndDisable(alg:=algoritms.no);
                    resetAndDisable(alg:=algoritms.Remont);
                    resetAndDisable(alg:=algoritms.testIm);
                   
          (*ModeGpa.MODE_TESTIM*)15:
                    stopPusk(algoritms);
                    resetAndDisable(alg:=algoritms.Remont);
                    resetAndDisable(alg:=algoritms.TestProtection);
                    		
	(*ModeGpa.MODE_EO*)14:
		stopPusk(algoritms);		
		resetAndDisable(alg:=algoritms.no);
		resetAndDisable(alg:=algoritms.ao);
		resetAndDisable(alg:=algoritms.Remont);
                    resetAndDisable(alg:=algoritms.testIm);
                    resetAndDisable(alg:=algoritms.TestProtection);
	(*ModeGpa.MODE_AO*)13:
		(*//stopPusk();*)
		resetAndDisable(alg:=algoritms.no);
		resetAndDisable(alg:=algoritms.Remont);
                    resetAndDisable(alg:=algoritms.testIm);
                    resetAndDisable(alg:=algoritms.TestProtection);
                    algoritms.VibegPNS.inCanRun:=TRUE;
	(*ModeGpa.MODE_NO*)12:
		stopPusk(algoritms);
                    resetAndDisable(alg:=algoritms.testIm);
                    resetAndDisable(alg:=algoritms.Remont);
                    resetAndDisable(alg:=algoritms.TestProtection); 
                    algoritms.VibegPNS.inCanRun:=TRUE;	
		algoritms.ao.inCanRun:=TRUE;
	(*ModeGpa.MODE_APUSK*)8:
		resetAndDisable(alg:=algoritms.SemiAutoPusk);
		resetAndDisable(alg:=algoritms.puskV);		
		resetAndDisable(alg:=algoritms.puskK);	
		resetAndDisable(alg:=algoritms.testdPmg);
		resetAndDisable(alg:=algoritms.testPms);
		(*resetAndDisable(alg:=algoritms.testIm);
                    resetAndDisable(alg:=algoritms.TestProtection);
                    resetAndDisable(alg:=algoritms.Remont);*)
		resetAndDisable(alg:=algoritms.ppu);
		algoritms.no.inCanRun:=TRUE;
		algoritms.ao.inCanRun:=TRUE;
		
	(*ModeGpa.MODE_MPUSK*)9:
		resetAndDisable(alg:=algoritms.Apusk);
		resetAndDisable(alg:=algoritms.puskV);		
		resetAndDisable(alg:=algoritms.puskK);	
		resetAndDisable(alg:=algoritms.testdPmg);
		resetAndDisable(alg:=algoritms.testPms);
		(*resetAndDisable(alg:=algoritms.testIm);
                    resetAndDisable(alg:=algoritms.TestProtection);
                    resetAndDisable(alg:=algoritms.Remont);	*)	
		resetAndDisable(alg:=algoritms.ppu);
		algoritms.no.inCanRun:=TRUE;
                    algoritms.no.inOpcCommandsDisabled:=FALSE;
		algoritms.ao.inCanRun:=TRUE;
                    algoritms.ao.inOpcCommandsDisabled:=FALSE;
		
	(*ModeGpa.MODE_PUSKK*)5:
                    resetAndDisable(alg:=algoritms.ppu);
		resetAndDisable(alg:=algoritms.Apusk);
		resetAndDisable(alg:=algoritms.SemiAutoPusk);
		resetAndDisable(alg:=algoritms.TestProtection);
                    resetAndDisable(alg:=algoritms.Remont);
		resetAndDisable(alg:=algoritms.testIm	 );		
		algoritms.no.inCanRun:=TRUE;
                    algoritms.no.inOpcCommandsDisabled:=FALSE;
		algoritms.ao.inCanRun:=TRUE;
                    algoritms.ao.inOpcCommandsDisabled:=FALSE;
	(*ModeGpa.MODE_PUSKV*)4:
                    resetAndDisable(alg:=algoritms.ppu);
		resetAndDisable(alg:=algoritms.Apusk);
		resetAndDisable(alg:=algoritms.SemiAutoPusk);
		resetAndDisable(alg:=algoritms.TestProtection);
                    resetAndDisable(alg:=algoritms.Remont);
		resetAndDisable(alg:=algoritms.testIm	 );		
		algoritms.no.inCanRun:=TRUE;
                    algoritms.no.inOpcCommandsDisabled:=FALSE;
		algoritms.ao.inCanRun:=TRUE;
                    algoritms.ao.inOpcCommandsDisabled:=FALSE;

	(*ModeGpa.MODE_TESTDPMG*)6:
                    resetAndDisable(alg:=algoritms.ppu);
		resetAndDisable(alg:=algoritms.Apusk);
		resetAndDisable(alg:=algoritms.SemiAutoPusk);
		resetAndDisable(alg:=algoritms.TestProtection);
                    resetAndDisable(alg:=algoritms.Remont);
		resetAndDisable(alg:=algoritms.testIm	 );		
		algoritms.no.inCanRun:=TRUE;
                    algoritms.no.inOpcCommandsDisabled:=FALSE;
		algoritms.ao.inCanRun:=TRUE;
                    algoritms.ao.inOpcCommandsDisabled:=FALSE;
		
	(*ModeGpa.MODE_TESTPMS*)7:
                    resetAndDisable(alg:=algoritms.ppu);
		resetAndDisable(alg:=algoritms.Apusk);
		resetAndDisable(alg:=algoritms.SemiAutoPusk);
		resetAndDisable(alg:=algoritms.TestProtection);
                    resetAndDisable(alg:=algoritms.Remont);
		resetAndDisable(alg:=algoritms.testIm);		
		algoritms.no.inCanRun:=TRUE;
                    algoritms.no.inOpcCommandsDisabled:=FALSE;
		algoritms.ao.inCanRun:=TRUE;
                    algoritms.ao.inOpcCommandsDisabled:=FALSE;		
		
	(*ModeGpa.MODE_WORK_Ring*)10:
		resetAndDisable(alg:=algoritms.Apusk);
		resetAndDisable(alg:=algoritms.SemiAutoPusk);
		resetAndDisable(alg:=algoritms.puskV);		
		resetAndDisable(alg:=algoritms.puskK);
		resetAndDisable(alg:=algoritms.testdPmg);
		resetAndDisable(alg:=algoritms.testPms);		
		resetAndDisable(alg:=algoritms.ppu);		
		algoritms.no.inCanRun:=TRUE;
                    algoritms.no.inOpcCommandsDisabled:=FALSE;
		algoritms.ao.inCanRun:=TRUE;
                    algoritms.ao.inOpcCommandsDisabled:=FALSE;				
		
	(*ModeGpa.MODE_WORK_Line*)11:
		resetAndDisable(alg:=algoritms.Apusk);
		resetAndDisable(alg:=algoritms.SemiAutoPusk);
		resetAndDisable(alg:=algoritms.puskV);		
		resetAndDisable(alg:=algoritms.puskK);
		resetAndDisable(alg:=algoritms.testdPmg);
		resetAndDisable(alg:=algoritms.testPms);		
		resetAndDisable(alg:=algoritms.ppu);
		resetAndDisable(alg:=algoritms.testIm	 );		
		algoritms.no.inCanRun:=TRUE;
                    algoritms.no.inOpcCommandsDisabled:=FALSE;
		algoritms.ao.inCanRun:=TRUE;
                    algoritms.ao.inOpcCommandsDisabled:=FALSE;				
		
	(*ModeGpa.MODE_STOP*)2:
		algoritms.ppu.inCanRun:=TRUE;
                    runIfNotRunning(alg:=algoritms.ppu);
		algoritms.no.inCanRun:=TRUE;
                    algoritms.no.inOpcCommandsDisabled:=FALSE;
		algoritms.ao.inCanRun:=TRUE;
                    algoritms.ao.inOpcCommandsDisabled:=FALSE;
                    (*UnBlockAllProtections(protections);*) 
		BlockAllIM(IM);
		algoritms.Remont.inCanRun:=TRUE;
		algoritms.Remont.inOpcCommandsDisabled:=FALSE;
		algoritms.testim.inCanRun:=TRUE;
		algoritms.testim.inOpcCommandsDisabled:=FALSE;
		algoritms.TestProtection.inCanRun:=TRUE;
		algoritms.TestProtection.inOpcCommandsDisabled:=FALSE;
                    algoritms.VibegPNS.inCanRun:=FALSE;
                    algoritms.AutoAvom.inCanRun:=FALSE;
		(*resetAndDisable(alg:=algoritms.puskV);		
		resetAndDisable(alg:=algoritms.puskK);
		resetAndDisable(alg:=algoritms.testdPmg);
		resetAndDisable(alg:=algoritms.testPms);*)	
	(*ModeGpa.MODE_READY*)3: 
		resetAndDisable(alg:=algoritms.Remont);
		resetAndDisable(alg:=algoritms.testim);
		resetAndDisable(alg:=algoritms.TestProtection);
                    algoritms.Apusk.inCanRun:=TRUE;
                    algoritms.Apusk.inOpcCommandsDisabled:=FALSE;
		algoritms.SemiAutoPusk.inCanRun:=TRUE;
                    algoritms.SemiAutoPusk.inOpcCommandsDisabled:=FALSE;
	END_CASE;
END_IF;

