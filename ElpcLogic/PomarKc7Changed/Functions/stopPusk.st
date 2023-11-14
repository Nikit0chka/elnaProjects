FUNCTION stopPusk : BOOL

VAR_IN_OUT
	algoritms : AlgoritmsConfig;
END_VAR

resetAndDisable(alg:=algoritms.Apusk);
resetAndDisable(alg:=algoritms.SemiAutoPusk);
resetAndDisable(alg:=algoritms.testPms);
resetAndDisable(alg:=algoritms.puskV);		
resetAndDisable(alg:=algoritms.puskK);	
resetAndDisable(alg:=algoritms.testdPmg);
resetAndDisable(alg:=algoritms.ppu);
resetAndDisable(alg:=algoritms.puskOilSystem);
resetAndDisable(alg:=algoritms.filling);
resetAndDisable(alg:=algoritms.engineRun);
resetAndDisable(alg:=algoritms.RingToLine);
resetAndDisable(alg:=algoritms.LineToRing);

