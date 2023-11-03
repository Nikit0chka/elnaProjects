FUNCTION_BLOCK fb_puskOilSystemAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	pnsOn : struct_PhaseAlgoritm;
	LowOil : struct_PhaseAlgoritm;
	BreakPuskTimer_Poil : struct_PhaseAlgoritm;
	Poil_DefenseActive : struct_PhaseAlgoritm;
	autoNuOn : struct_PhaseAlgoritm;
	nuOn : struct_PhaseAlgoritm;
	nu1On : struct_PhaseAlgoritm;
	nu2On : struct_PhaseAlgoritm;
	di_dPmg : struct_PhaseAlgoritm;
	dP_oilGas100 : struct_PhaseAlgoritm;
	runProtect_dP : struct_PhaseAlgoritm;
	testUnsuccessful : struct_PhaseAlgoritm;
	fb_pnsOn : fb_ph_Switch;
	fb_LowOil : fb_ph_WaitAnalogValue;
	fb_BreakPuskTimer_Poil : fb_ph_Timer;
	fb_Poil_DefenseActive : fb_ph_CustomPhase;
	fb_nuOn : fb_ph_CustomPhase;
	fb_nu1On : fb_ph_OilPump;
	fb_nu2On : fb_ph_OilPump;
	fb_autoNuOn : fb_ph_algoritm;
	fb_di_dPmg : fb_ph_CustomPhase;
	fb_dP_oilGas100 : fb_ph_WaitAnalogValue;
	fb_runProtect_dP : fb_ph_CustomPhase;
	fb_testUnsuccessful : fb_ph_CustomPhase;
	_sunpackerCommand : fb_sunpackerCommand;
	_statusAi : TYPE_StatusAi;
	_Answers : TYPE_Answers;
	_statusDualInput : TYPE_statusDualInput;
	_DualStateImAction : TYPE_DualStateImAction;
	_PhaseAlgoritmAction : TYPE_PhaseAlgoritmAction;
	source : BYTE;
	cmd : BYTE;
	lastCmd : BYTE;
	source_for_Status : BYTE;
	cmd_for_Status : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	resetCmdTimerPriznak : BOOL;
	onInit : BOOL;
	waitReset : TON;
END_VAR

VAR_EXTERNAL
	IM : ImConfig;
	algoritms : AlgoritmsConfig;
	ai : AiConfig;
	protections : ProtectionsConfig;
	AlgTimers : struct_AlgTimers;
END_VAR


IF NOT onInit THEN
               fb_pnsOn(phaseNumber:=0, act:=_on);
              fb_LowOil(phaseNumber:=1);
 fb_BreakPuskTimer_Poil(phaseNumber:=3, delay:=T#240S);
  fb_Poil_DefenseActive(phaseNumber:=5);
                fb_nuOn(phaseNumber:=6);
               fb_nu1On(phaseNumber:=11, act:=_on);
               fb_nu2On(phaseNumber:=12, act:=_on);
            fb_autoNuOn(phaseNumber:=7, act:=_run, waitCompletion:=FALSE);
             fb_di_dPmg(phaseNumber:=8);
        fb_dP_oilGas100(phaseNumber:=9);
       fb_runProtect_dP(phaseNumber:=10);
    fb_testUnsuccessful(phaseNumber:=17);
   
   
   
   
onInit:=TRUE;
END_IF;

              fb_pnsOn(StrPh:=pnsOn, Im:=IM.pns);
             (*fb_LowOil(StrPh:=LowOil, ai:=ai.Pmasla_posle_GNS, more:=im.AutoPns_UstRun.Value);*)
fb_BreakPuskTimer_Poil(StrPh:=BreakPuskTimer_Poil, timer:=AlgTimers.puskOilSystem_BreakPuskTimer_Poil);
 fb_Poil_DefenseActive(StrPh:=Poil_DefenseActive);
               fb_nuOn(StrPh:=nuOn);
              fb_nu1On(StrPh:=nu1On, Im:=Im.nu1);
              fb_nu2On(StrPh:=nu2On, Im:=Im.nu2);
           fb_autoNuOn(StrPh:=autoNuOn, alg:=algoritms.autoNu);  
            fb_di_dPmg(StrPh:=di_dPmg);
       (*fb_dP_oilGas100(StrPh:=dP_oilGas100, ai:=ai.Tmasla_MB, more:=im.PuskOilSystem_UstdPmg.Value);*)
      fb_runProtect_dP(StrPh:=runProtect_dP);
   fb_testUnsuccessful(StrPh:=testUnsuccessful);
   
IF StrAlg.isRuning THEN


    StrAlg.hasError := LowOil.error OR dP_oilGas100.error OR pnsOn.error OR testUnsuccessful.error;

    IF pnsOn.top THEN	
        runPhase(LowOil);
    END_IF;

    IF LowOil.top THEN
        runAiProtection(protections.Os_sdvig_nagnetatelja_minus);
        (*runDiProtection(protections.Vibro_skorost_OP_shesterni_reduktora_H_T6);*)
        runPhase(Poil_DefenseActive);
        (*IM.SingleSignals.P_oil_low.Disabled_Sig:=FALSE;*)
        ai.Pmasla_posle_GNS.Disabled_LA:=FALSE;
        ai.Pmasla_posle_GNS.Disabled_LW:=FALSE;
        ai.Pmasla_posle_NU.Disabled_LW:=FALSE;
    END_IF;

    IF Poil_DefenseActive.start AND NOT Poil_DefenseActive.top THEN
       Poil_DefenseActive.top:=protections.Os_sdvig_nagnetatelja_minus.isRunning AND protections.Vibro_skorost_OP_shesterni_reduktora_H_T6.isRunning;
    END_IF;

    IF Poil_DefenseActive.top THEN
       (* runPhase(autoNuOn);*)
	runPhase(nuOn);
    END_IF;
    
    
    IF nuOn.start AND NOT nuOn.top THEN
       (* IF IM.SingleOutputs.Value = 0 THEN
            runPhase(nu1On);
        END_IF;
    
        IF IM.SingleOutputs.Value = 1 THEN
            runPhase(nu2On);
        END_IF;*)
       nuOn.top:= Im.nu1.onStatus = _statusDualInput.STATUS_ON OR Im.nu2.onStatus = _statusDualInput.STATUS_ON;
    END_IF;	
	
    IF nuOn.top THEN
	runPhase(di_dPmg);
          runPhase(dP_oilGas100);
    END_IF;	

    (*IF di_dPmg.start AND NOT di_dPmg.top THEN
       di_dPmg.top:= NOT IM.SingleSignals.dP_oilgaz_low.Q;
    END_IF;*)

    IF dP_oilGas100.top AND di_dPmg.top THEN
          runPhase(autoNuOn);
	runPhase(runProtect_dP);
	runAiProtection(protections.Os_sdvig_nagnetatelja_plus);
          (*runDiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5);
          IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=FALSE;
          ai.Tmasla_MB.Disabled_LA:=FALSE;
          ai.Tmasla_MB.Disabled_LW:=FALSE;*)
    END_IF;

    IF runProtect_dP.start AND NOT runProtect_dP.top THEN
       runProtect_dP.top:= protections.Os_sdvig_nagnetatelja_plus.isRunning AND protections.Vibro_skorost_OP_shesterni_RED_T5.isRunning;
    END_IF;

    IF BreakPuskTimer_Poil.top AND (NOT runProtect_dP.top) THEN
	testUnsuccessful.error:=TRUE;
    END_IF;

    IF runProtect_dP.top THEN
          resetPhase(BreakPuskTimer_Poil);
	waitReset(IN:=TRUE);
    END_IF;
    
    IF waitReset.Q AND NOT (algoritms.Apusk.isRuning OR algoritms.SemiAutoPusk.isRuning) THEN
    resetAndDisable(StrAlg);
    END_IF;
    
    StrAlg.isEnded:=runProtect_dP.top; 
END_IF;



StrAlg.CanRun := StrAlg.inCanRun;
StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

(* ---- Если управление с ВУ заблокировано, то  передаем команду из алгоритма ---- *)
IF StrAlg.inOpcCommandsDisabled THEN
	StrAlg.inCommand := StrAlg.inCommand_Alg;
ELSE (* иначе передаем команду с АРМа*)
	StrAlg.inCommand := StrAlg.inCommand_ARM;
END_IF;

_sunpackerCommand(command := StrAlg.inCommand);
	source := _sunpackerCommand.source;
	cmd := _sunpackerCommand.cmd;
          
IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrAlg.opcCommandsDisabled) AND source > 0) OR source = 0) then	
	CASE BYTE_TO_INT(cmd) OF
		(*cmdRun*) 1: 	IF (StrAlg.CanRun) THEN
					StrAlg.isRuning := TRUE;
					StrAlg.isEnded := FALSE;
					StrAlg.hasError := FALSE;
					(*****************       OnRun       *****************)
                                                  runPhase(pnsOn);         
                                                  runPhase(BreakPuskTimer_Poil);
                                                  runPhase(testUnsuccessful);                     	
					cmd_for_Status := cmd;
					source_for_Status := source;
					command_error_for_Status := 0;
				ELSE
					StrAlg.isRuning := FALSE;
					StrAlg.isEnded := FALSE;
					StrAlg.hasError 	:= FALSE;

					cmd_for_Status := 0;
					source_for_Status := source;
					command_error_for_Status := cmd;
				END_IF;
		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
				StrAlg.isEnded := FALSE;
				StrAlg.hasError 	:= FALSE;
                                        
                                         (*****************       OnReset       *****************)
                                        waitReset(IN:=FALSE);
                                        resetPhase(pnsOn);
                                        resetPhase(LowOil);
                                        resetPhase(BreakPuskTimer_Poil);
                                        resetPhase(Poil_DefenseActive);
                                        resetPhase(autoNuOn);
                                        resetPhase(nu1On);
                                        resetPhase(nu2On);
                                        resetPhase(nuOn);
                                        resetPhase(di_dPmg);
                                        resetPhase(dP_oilGas100);
                                        resetPhase(runProtect_dP);
                                        resetPhase(testUnsuccessful);
	                              (*protections.Os_sdvig_nagnetatelja_minus.inOpcCommandsDisabled:=FALSE;
                                        protections.Vibro_skorost_OP_shesterni_reduktora_H_T6.inOpcCommandsDisabled:=FALSE; 
                                        protections.Os_sdvig_nagnetatelja_plus.inOpcCommandsDisabled:=FALSE;
                                        protections.Vibro_skorost_OP_shesterni_RED_T5.inOpcCommandsDisabled:=FALSE;*) 
                                           
				cmd_for_Status := cmd;
				source_for_Status := source;
				command_error_for_Status := 0;
	END_CASE;			
	resetCmdTimer(IN := false);
	resetCmdTimerPriznak := TRUE;
END_IF;
lastCmd := cmd;

resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
IF resetCmdTimer.Q THEN
	resetCmdTimerPriznak := FALSE;
	source_for_Status := 0;
	cmd_for_Status := 0;
	command_error_for_Status := 0;
END_IF; 

StrAlg.Start:= pnsOn.startStatus
            OR LowOil.startStatus
            OR BreakPuskTimer_Poil.startStatus
            OR Poil_DefenseActive.startStatus
            OR nuOn.startStatus
            OR di_dPmg.startStatus
            OR dP_oilGas100.startStatus
            OR runProtect_dP.startStatus
            OR testUnsuccessful.startStatus;
            
            
StrAlg.Error:= pnsOn.errorStatus
            OR LowOil.errorStatus
            OR BreakPuskTimer_Poil.errorStatus
            OR Poil_DefenseActive.errorStatus
            OR nuOn.errorStatus
            OR di_dPmg.errorStatus
            OR dP_oilGas100.errorStatus
            OR runProtect_dP.errorStatus
            OR testUnsuccessful.errorStatus;
            
StrAlg.Top:=   pnsOn.topStatus
            OR LowOil.topStatus
            OR BreakPuskTimer_Poil.topStatus
            OR Poil_DefenseActive.topStatus
            OR nuOn.topStatus
            OR di_dPmg.topStatus
            OR dP_oilGas100.topStatus
            OR runProtect_dP.topStatus
            OR testUnsuccessful.topStatus;                              

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);