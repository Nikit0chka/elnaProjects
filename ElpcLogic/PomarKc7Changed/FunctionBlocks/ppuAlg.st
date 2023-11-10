FUNCTION_BLOCK ppuAlg

VAR_IN_OUT
	StrAlg : struct_Alg;
END_VAR

VAR
	BMP_Err : struct_PhaseAlgoritm;
	Level_masla_Norm : struct_PhaseAlgoritm;
	T_masla_Norm : struct_PhaseAlgoritm;
	Krans_ready_to_move : struct_PhaseAlgoritm;
END_VAR

VAR_IN_OUT
	Krans_Poloj : struct_PhaseAlgoritm;
	Net_AO_KC_SHKS04M : struct_PhaseAlgoritm;
	EGPA_Stop : struct_PhaseAlgoritm;
	Avt_SHU_vkl : struct_PhaseAlgoritm;
	All_IM_Off : struct_PhaseAlgoritm;
	Nalichie220_SHU_Ai : struct_PhaseAlgoritm;
	BP_Norm : struct_PhaseAlgoritm;
	Naprajenie_U_IM : struct_PhaseAlgoritm;
	MV_Poloj_RolledON : struct_PhaseAlgoritm;
	MV_Poloj_RolledOFF : struct_PhaseAlgoritm;
	NOTAnalogNS : struct_PhaseAlgoritm;
	Net_ASPS_Analogs : struct_PhaseAlgoritm;
	Not_AS : struct_PhaseAlgoritm;
	Gotov_Vozb : struct_PhaseAlgoritm;
	Reactornyi_P : struct_PhaseAlgoritm;
	Chastotnyi_P : struct_PhaseAlgoritm;
	dP_kr1 : struct_PhaseAlgoritm;
	Auto_Rej : struct_PhaseAlgoritm;
	CK_IM_Norm : struct_PhaseAlgoritm;
	HAnd_Mode : struct_PhaseAlgoritm;
	Impuls_Gaz : struct_PhaseAlgoritm;
END_VAR

VAR
	fb_BMP_Err : fb_ph_CustomPhase;
	fb_Level_masla_Norm : fb_ph_CustomPhase;
	fb_T_masla_Norm : fb_ph_CustomPhase;
	fb_Krans_ready_to_move : fb_ph_CustomPhase;
	fb_Krans_Poloj : fb_ph_CustomPhase;
	fb_Net_AO_KC_SHKS04M : fb_ph_CustomPhase;
	fb_EGPA_Stop : fb_ph_CustomPhase;
	fb_Avt_SHU_vkl : fb_ph_CustomPhase;
	fb_All_IM_Off : fb_ph_CustomPhase;
	fb_Nalichie220_SHU_Ai : fb_ph_CustomPhase;
	fb_BP_Norm : fb_ph_CustomPhase;
	fb_Naprajenie_U_IM : fb_ph_CustomPhase;
	fb_MV_Poloj_RolledON : fb_ph_CustomPhase;
	fb_MV_Poloj_RolledOFF : fb_ph_CustomPhase;
	fb_NOTAnalogNS : fb_ph_CustomPhase;
	fb_Net_ASPS_Analogs : fb_ph_CustomPhase;
	fb_Not_AS : fb_ph_CustomPhase;
	fb_Gotov_Vozb : fb_ph_CustomPhase;
	fb_Reactornyi_P : fb_ph_CustomPhase;
	fb_Chastotnyi_P : fb_ph_CustomPhase;
	fb_dP_kr1 : fb_ph_CustomPhase;
	fb_Auto_Rej : fb_ph_CustomPhase;
	fb_CK_IM_Norm : fb_ph_CustomPhase;
	fb_HAnd_Mode : fb_ph_CustomPhase;
	fb_Impuls_Gaz : fb_ph_CustomPhase;
	_sunpackerCommand : fb_sunpackerCommand;
	modeR_Trig : R_TRIG;
	modeF_Trig : F_TRIG;
	_statusAi : TYPE_StatusAi;
	_Answers : TYPE_Answers;
	_statusDualInput : TYPE_statusDualInput;
	_DualStateImAction : TYPE_DualStateImAction;
	_PhaseAlgoritmAction : TYPE_PhaseAlgoritmAction;
	_basketStats : TYPE_basketStats;
END_VAR

VAR_OUTPUT
	puskAllowed : BOOL;
	testAllowed : BOOL;
END_VAR

VAR
	ppuDone : BOOL;
	source : BYTE;
	cmd : BYTE;
	lastCmd : BYTE;
	source_for_Status : BYTE;
	cmd_for_Status : BYTE;
	command_error_for_Status : BYTE;
	resetCmdTimer : TON;
	resetCmdTimerPriznak : BOOL;
	onInit : BOOL;
END_VAR

VAR_EXTERNAL
	IM : ImConfig;
	ai : AiConfig;
	di : DiConfig;
	algManager : struct_AlgoritmsManager;
	protectManager : struct_ProtectionsManager;
	NotHasRezervNU : BOOL;
	ModeGpa : TYPE_ModeGpa;
	algoritms : AlgoritmsConfig;
END_VAR





IF NOT onInit THEN

    fb_BMP_Err(phaseNumber:=0);
    fb_Level_masla_Norm(phaseNumber:=1);
    fb_T_masla_Norm(phaseNumber:=2);
    fb_Krans_ready_to_move(phaseNumber:=5);
    fb_Krans_Poloj(phaseNumber:=6);
    fb_Net_AO_KC_SHKS04M(phaseNumber:=7);
    fb_EGPA_Stop(phaseNumber:=9);
    fb_Avt_SHU_vkl(phaseNumber:=10);
    fb_All_IM_Off(phaseNumber:=11);
    fb_Nalichie220_SHU_Ai(phaseNumber:=12);
    fb_BP_Norm(phaseNumber:=13);
    fb_Naprajenie_U_IM(phaseNumber:=14);
    fb_MV_Poloj_RolledON(phaseNumber:=15);
    fb_MV_Poloj_RolledOFF(phaseNumber:=16);
    fb_NOTAnalogNS(phaseNumber:=17);
    fb_Net_ASPS_Analogs(phaseNumber:=18);
    fb_Not_AS(phaseNumber:=19);
    fb_Gotov_Vozb(phaseNumber:=20);
    fb_Reactornyi_P(phaseNumber:=21);
    fb_Chastotnyi_P(phaseNumber:=22);
    fb_dP_kr1(phaseNumber:=23);
    fb_Auto_Rej(phaseNumber:=24);
    fb_CK_IM_Norm(phaseNumber:=25);
    fb_HAnd_Mode(phaseNumber:=26);
    fb_Impuls_Gaz(phaseNumber:=27);                                

onInit:=TRUE;
END_IF;

fb_BMP_Err(StrPh:=BMP_Err);
fb_Level_masla_Norm(StrPh:=Level_masla_Norm);
fb_T_masla_Norm(StrPh:=T_masla_Norm);
fb_Krans_ready_to_move(StrPh:=Krans_ready_to_move);
fb_Krans_Poloj(StrPh:=Krans_Poloj);
fb_Net_AO_KC_SHKS04M(StrPh:=Net_AO_KC_SHKS04M);
fb_EGPA_Stop(StrPh:=EGPA_Stop);
fb_Avt_SHU_vkl(StrPh:=Avt_SHU_vkl);
fb_All_IM_Off(StrPh:=All_IM_Off);
fb_Nalichie220_SHU_Ai(StrPh:=Nalichie220_SHU_Ai);
fb_BP_Norm(StrPh:=BP_Norm);
fb_Naprajenie_U_IM(StrPh:=Naprajenie_U_IM);
fb_MV_Poloj_RolledON(StrPh:=MV_Poloj_RolledON);
fb_MV_Poloj_RolledOFF(StrPh:=MV_Poloj_RolledOFF);
fb_NOTAnalogNS(StrPh:=NOTAnalogNS);
fb_Net_ASPS_Analogs(StrPh:=Net_ASPS_Analogs);
fb_Not_AS(StrPh:=Not_AS);
fb_Gotov_Vozb(StrPh:=Gotov_Vozb);
fb_Reactornyi_P(StrPh:=Reactornyi_P);
fb_Chastotnyi_P(StrPh:=Chastotnyi_P);
fb_dP_kr1(StrPh:=dP_kr1);
fb_Auto_Rej(StrPh:=Auto_Rej);
fb_CK_IM_Norm(StrPh:=CK_IM_Norm);
fb_HAnd_Mode(StrPh:=HAnd_Mode);
fb_Impuls_Gaz(StrPh:=Impuls_Gaz);

IF StrAlg.isRuning THEN

    (*BMP_Err.top:= ((BMPERR_k = 0) OR (kontroller.imit)); надо разобраться кто такой BMPERR_k*)
    (*уровень масла в норме*)
    Level_masla_Norm.top := (ai.Yroven_masla_MB.interval = _statusAi.normal);
    
    (*температура масла в норме*)
    T_masla_Norm.top:= (ai.Tmasla_MB.interval = _statusAi.normal); 
    
    (*kраны готовы к управлению*)
    Krans_ready_to_move.top:= NOT (IM.Kran1.So OR IM.Kran1.Sz OR IM.Kran2.So OR IM.Kran2.Sz OR IM.Kran3.So OR
                                   IM.Kran3.Sz OR IM.Kran3b.So OR IM.Kran3b.Sz OR IM.Kran4.So OR IM.Kran4.Sz OR
			     IM.Kran5.So OR IM.Kran5.Sz OR IM.Kran6.So OR IM.Kran6.Sz); 
    
    (*положение кранов верное*)
    Krans_Poloj.top:= (Im.Kran1.onStatus=_statusDualInput.STATUS_OFF) AND
		  (Im.Kran2.onStatus=_statusDualInput.STATUS_OFF) AND
		  (Im.Kran3.onStatus=_statusDualInput.STATUS_OFF) AND
		  (Im.Kran3b.onStatus=_statusDualInput.STATUS_ON) AND
		  (Im.Kran4.onStatus=_statusDualInput.STATUS_OFF) AND
		  (Im.Kran5.onStatus=_statusDualInput.STATUS_ON) AND 
                      (Im.Kran6.onStatus=_statusDualInput.STATUS_ON); 
    (*Нет АО от ШКС
    Net_AO_KC_SHKS04M.top:= haveAlarms(); кто такой haveAlarms*)
    
    (*Режим ЭГПА остановлен *)
    EGPA_Stop.top := (algManager.mode = ModeGpa.MODE_STOP);
    
    (*Автомат ШУ включен *)
    Avt_SHU_vkl.top := IM.SingleSignals.SHU_v_GPA_vkluch.Q;                                                                                  
    
    (*Все исполнительные механизмы выключены *)
    All_IM_Off.top := (IM.mv.onStatus=_statusDualInput.STATUS_OFF) AND (IM.pns.onStatus=_statusDualInput.STATUS_OFF) AND
                      (IM.nu1.onStatus=_statusDualInput.STATUS_OFF) AND (IM.nu2.onStatus=_statusDualInput.STATUS_OFF) AND
                      (IM.v1_Avom.onStatus=_statusDualInput.STATUS_OFF) AND (IM.v2_Avom.onStatus=_statusDualInput.STATUS_OFF) AND
		  (IM.v3_Avom.onStatus=_statusDualInput.STATUS_OFF)AND (IM.v4_Avom.onStatus=_statusDualInput.STATUS_OFF) AND
                      (IM.CMN.onStatus=_statusDualInput.STATUS_OFF) AND (IM.TEN_MB.onStatus=_statusDualInput.STATUS_OFF) AND
                      (IM.TEN_kollectora.onStatus=_statusDualInput.STATUS_OFF) AND (IM.KaloriferAVOM.onStatus=_statusDualInput.STATUS_OFF); 
    
    (*Наличие 220 в шу*)
    Nalichie220_SHU_Ai.top :=	(ai.Kontrol_per_220V.interval = _statusAi.normal)	 AND (ai.Kontrol_post_220V.interval = _statusAi.normal);				
    
    (*Блоки питания норм*)
    BP_Norm.top:= 
		(IM.SingleSignals.Nalichie_BP1.Q AND
		IM.SingleSignals.Nalichie_BP2.Q AND	
		IM.SingleSignals.Nalichie_BP3.Q AND
		IM.SingleSignals.Nalichie_BP4.Q AND
		IM.SingleSignals.Nalichie_BP5.Q AND
		IM.SingleSignals.Nalichie_BP6.Q AND
		IM.SingleSignals.Nalichie_BP7_BP8.Q AND
		IM.SingleSignals.Nalichie_BP9_BP10.Q AND
		
		IM.SingleSignals.Nalichie_220BEAO.Q AND
		IM.SingleSignals.Nalichie_per_220_na_vhode.Q AND
		IM.SingleSignals.Nalichie_post_220_na_vhode.Q AND
		IM.SingleSignals.Nalichie_BP11.Q AND
		IM.SingleSignals.Nalichie_BP12.Q);
    
    (*Напряжение исполнительниых механизмов                
    Naprajenie_U_IM.top := IM.NalichieU_CMN.q AND IM.NalichieU_NU1.Q AND IM.Nalichie_CU_MV.Q  AND IM.NalichieU_NU2.Q AND 
						IM.NalichieU_PNS.Q; нет сигналов таких *)
    
    (* положение тележки мв вкачена *)                
    MV_Poloj_RolledON.top:= IM.mv.basketStatus = _basketStats.BASKET_ROLLEDIN;

    (* положение тележки мв выкачена *)  
    MV_Poloj_RolledOFF.top:= IM.mv.basketStatus = _basketStats.BASKET_ROLLEDOUT;

    (* нет неисправных аналоговых сигналов *)
    NOTAnalogNS.top :=  NOT analogsNS(); 

    (* нет аварийных/предупредительных сигнализаций аналоговых сигналов *)
    Net_ASPS_Analogs.top := anyAnalogsPs(); (*Не понял где посмотреть наличие ас аналогов *)    

    (* нет сработанных защит *)
    Not_AS.top := NOT anyProtectionSignaling();

    (* готовность возбудителя *)
    Gotov_Vozb.top:= IM.SingleSignals.Vozbud_gotovnost.Q;

    (* реакторный пуск *)
    (*Reactornyi_P.top := IM.SingleSignals.Reaktornii_pusk_perek.Q AND NOT IM.SingleSignals.Chastotny_pusk.Q;*)
    
    (* частотный пуск *)
   (* Chastotnyi_P.top:=IM.SingleSignals.Chastotny_pusk.Q AND NOT IM.SingleSignals.Reaktornii_pusk_perek.Q;*)
                                                                
    (* нет перепада давления на кране 1 *)                                                                                                
    dP_kr1.top:= NOT IM.SingleSignals.dp_kran1_Less100.Q (*AND (IM.PerepadDavlenieKran1_CK.status = 1))*);

    (* в автоматическом ли режиме исполнительные механизмы *)                                                                                                                                                                
    (*Auto_Rej.top := im.NU1_Automat.Q AND im.PNS_Automat.Q AND im.NU2_Automat.Q;*)

    (* есть наряжение в цепях управления ИМ *)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    CK_IM_Norm.top := nsCepeiUpravlenya();

    (* ручной режим *)
    HAnd_Mode.top:= NOT im.SingleSignals.Rezhim_ruchnogo_regulirovaniya.Q;

    (* импульсный газ *)
    Impuls_Gaz.top:= ai.Pimpuls_gaz.interval=_statusAi.normal;
    
    ppuDone := BMP_Err.top AND
	     Level_masla_Norm.top AND
               T_masla_Norm.top AND
	     Krans_ready_to_move.top AND
	     Krans_Poloj.top AND
	     Net_AO_KC_SHKS04M.top AND
	     EGPA_Stop.top AND
               Avt_SHU_vkl.top AND
               All_IM_Off.top AND
               Nalichie220_SHU_Ai.top AND
               BP_Norm.top AND
               Naprajenie_U_IM.top AND
               MV_Poloj_RolledON.top AND
               MV_Poloj_RolledOFF.top AND 
               NOTAnalogNS.top AND 
               Net_ASPS_Analogs.top AND 
               Not_AS.top AND 
               Gotov_Vozb.top AND
               Reactornyi_P.top AND
               Chastotnyi_P.top AND
               dP_kr1.top AND
               Auto_Rej.top AND
               CK_IM_Norm.top AND
               HAnd_Mode.top AND
               Impuls_Gaz.top;


    puskAllowed:= ppuDone AND Im.mv.basketStatus = _basketStats.BASKET_ROLLEDIN;
    testAllowed:= ppuDone AND Im.mv.basketStatus = _basketStats.BASKET_ROLLEDOUT;

    modeR_Trig(CLK:=puskAllowed);
    modeF_Trig(CLK:=puskAllowed);

    IF modeR_Trig.Q THEN
	algManager.nMode:= ModeGpa.MODE_READY;
    END_IF;
    IF modeF_Trig.Q THEN
	algManager.nMode:= ModeGpa.MODE_STOP;
    END_IF;

    IF puskAllowed THEN
        algoritms.Apusk.inCanRun:= TRUE;	
        algoritms.SemiAutoPusk.inCanRun:= TRUE;		
    ELSE
        algoritms.Apusk.inCanRun:= FALSE;	
        algoritms.SemiAutoPusk.inCanRun:= FALSE;	
    END_IF;


    IF testAllowed THEN
        algoritms.testPms.inCanRun:=  TRUE;
        algoritms.testdPmg.inCanRun:= TRUE;
        algoritms.puskK.inCanRun:=    TRUE;	
        algoritms.puskV.inCanRun:=    TRUE;
    ELSE	
        algoritms.testPms.inCanRun:=  FALSE;
        algoritms.testdPmg.inCanRun:= FALSE;
        algoritms.puskK.inCanRun:=    FALSE;	
        algoritms.puskV.inCanRun:=    FALSE;
    END_IF;

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
                                        
                                                  resetPhase(BMP_Err); 
                                                  resetPhase(Level_masla_Norm);
                                                  resetPhase(T_masla_Norm);
                                                  resetPhase(Krans_ready_to_move);
                                                  resetPhase(Krans_Poloj);
                                                  resetPhase(Net_AO_KC_SHKS04M);
                                                  resetPhase(EGPA_Stop);
                                                  resetPhase(Avt_SHU_vkl);
                                                  resetPhase(All_IM_Off);
                                                  resetPhase(Nalichie220_SHU_Ai);
                                                  resetPhase(BP_Norm);
                                                  resetPhase(Naprajenie_U_IM);
                                                  resetPhase(MV_Poloj_RolledON);
                                                  resetPhase(MV_Poloj_RolledOFF);
                                                  resetPhase(NOTAnalogNS);
                                                  resetPhase(Net_ASPS_Analogs);
                                                  resetPhase(Not_AS);
                                                  resetPhase(Gotov_Vozb);
                                                  resetPhase(Reactornyi_P);
                                                  resetPhase(Chastotnyi_P);
                                                  resetPhase(dP_kr1);
                                                  resetPhase(Auto_Rej);  
                                                  resetPhase(CK_IM_Norm);
                                                  resetPhase(HAnd_Mode);
                                                  resetPhase(Impuls_Gaz);
                                                  
                                                  algoritms.testPms.inCanRun:=  FALSE;
                                                  algoritms.testdPmg.inCanRun:= FALSE;
                                                  algoritms.puskK.inCanRun:=    FALSE;	
                                                  algoritms.puskV.inCanRun:=    FALSE;
                                                  
                                        StrAlg.inCanRun:=FALSE;
                                        puskAllowed:=FALSE;
                                        testAllowed:=FALSE;
                                        modeR_Trig(CLK:=FALSE);
                                        modeF_Trig(CLK:=FALSE);
                                         
                                           
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

StrAlg.Start:= BMP_Err.startStatus
            OR Level_masla_Norm.startStatus
            OR T_masla_Norm.startStatus
            OR Krans_ready_to_move.startStatus
            OR Krans_Poloj.startStatus
            OR Net_AO_KC_SHKS04M.startStatus
            OR EGPA_Stop.startStatus
            OR Avt_SHU_vkl.startStatus
            OR All_IM_Off.startStatus
            OR Nalichie220_SHU_Ai.startStatus
            OR BP_Norm.startStatus
            OR Naprajenie_U_IM.startStatus
            OR MV_Poloj_RolledON.startStatus
            OR MV_Poloj_RolledOFF.startStatus
            OR NOTAnalogNS.startStatus
            OR Net_ASPS_Analogs.startStatus
            OR Not_AS.startStatus
            OR Gotov_Vozb.startStatus
            OR Reactornyi_P.startStatus
            OR Chastotnyi_P.startStatus
            OR dP_kr1.startStatus
            OR Auto_Rej.startStatus
            OR CK_IM_Norm.startStatus
            OR HAnd_Mode.startStatus
            OR Impuls_Gaz.startStatus;
            
StrAlg.Error:= BMP_Err.errorStatus
            OR Level_masla_Norm.errorStatus
            OR T_masla_Norm.errorStatus
            OR Krans_ready_to_move.errorStatus
            OR Krans_Poloj.errorStatus
            OR Net_AO_KC_SHKS04M.errorStatus
            OR EGPA_Stop.errorStatus
            OR Avt_SHU_vkl.errorStatus
            OR All_IM_Off.errorStatus
            OR Nalichie220_SHU_Ai.errorStatus
            OR BP_Norm.errorStatus
            OR Naprajenie_U_IM.errorStatus
            OR MV_Poloj_RolledON.errorStatus
            OR MV_Poloj_RolledOFF.errorStatus
            OR NOTAnalogNS.errorStatus
            OR Net_ASPS_Analogs.errorStatus
            OR Not_AS.errorStatus
            OR Gotov_Vozb.errorStatus
            OR Reactornyi_P.errorStatus
            OR Chastotnyi_P.errorStatus
            OR dP_kr1.errorStatus
            OR Auto_Rej.errorStatus
            OR CK_IM_Norm.errorStatus
            OR HAnd_Mode.errorStatus
            OR Impuls_Gaz.errorStatus;
            
StrAlg.Top:=   BMP_Err.topStatus
            OR Level_masla_Norm.topStatus
            OR T_masla_Norm.topStatus
            OR Krans_ready_to_move.topStatus
            OR Krans_Poloj.topStatus
            OR Net_AO_KC_SHKS04M.topStatus
            OR EGPA_Stop.topStatus
            OR Avt_SHU_vkl.topStatus
            OR All_IM_Off.topStatus
            OR Nalichie220_SHU_Ai.topStatus
            OR BP_Norm.topStatus
            OR Naprajenie_U_IM.topStatus
            OR MV_Poloj_RolledON.topStatus
            OR MV_Poloj_RolledOFF.topStatus
            OR NOTAnalogNS.topStatus
            OR Net_ASPS_Analogs.topStatus
            OR Not_AS.topStatus
            OR Gotov_Vozb.topStatus
            OR Reactornyi_P.topStatus
            OR Chastotnyi_P.topStatus
            OR dP_kr1.topStatus
            OR Auto_Rej.topStatus
            OR CK_IM_Norm.topStatus
            OR HAnd_Mode.topStatus
            OR Impuls_Gaz.topStatus;
                                 

(*TODO: TYPE PROGRAM CODE HERE*)
StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
                              OR SHL(BOOL_TO_DWORD(testAllowed),16)
                              OR SHL(BOOL_TO_DWORD(puskAllowed),15)
			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
			OR BOOL_TO_DWORD(StrAlg.isRuning);