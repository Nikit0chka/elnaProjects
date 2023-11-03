TYPE
  TItemAIN : STRUCT
    wFlags : UINT := 0;
    wReserved : UINT := 0;
    dblValue : LREAL := 0.0;
    nanosec : ULINT := 0;
    reserve : ULINT := 0;
  END_STRUCT;
  TYPE_ReliableBit : STRUCT
    value : BOOL;
    reliability : BOOL;
    _inversed : BOOL;
  END_STRUCT;
  TItemDIN : STRUCT
    wFlags : UINT := 0;
    wValue : UINT := 0;
    nanosec : ULINT := 0;
    reserve : ULINT := 0;
  END_STRUCT;
  struct_DI : STRUCT
    imit : BOOL;
    value : WORD;
    reliability : WORD;
    bits : ARRAY [0..15] OF TYPE_ReliableBit;
    blConnect : BOOL;
  END_STRUCT;
  TYPE_StatusAi : STRUCT
    NOTDEFINED : BYTE := 0;
    LL : BYTE := 1;
    HL : BYTE := 2;
    NOTRELIABLE : BYTE := 3;
    normal : BYTE := 4;
    LW : BYTE := 5;
    HW : BYTE := 6;
    LA : BYTE := 7;
    HA : BYTE := 8;
  END_STRUCT;
  TWordData : STRUCT
    wFlags : UINT := 0;
    wValue : UINT := 0;
  END_STRUCT;
  TDoubleData : STRUCT
    wFlags : UINT := 0;
    dblValue : LREAL := 0.0;
  END_STRUCT;
  TYPE_statusDualInput : STRUCT
    STATUS_NOTDEFINED : BYTE := 0;
    STATUS_ON : BYTE := 1;
    STATUS_OFF : BYTE := 2;
    STATUS_TRANSITIONAL : BYTE := 3;
    STATUS_ERROR : BYTE := 4;
  END_STRUCT;
  TYPE_CommandAnalog : STRUCT
    cmd_SetUstavki : WORD := 1;
    cmd_SetRemont : WORD := 2;
    cmd_ResetRemont : WORD := 3;
    cmd_kvitNotReliable : WORD := 4;
  END_STRUCT;
  struct_AI : STRUCT
    value : LREAL;
    status : DWORD;
    interval : BYTE;
    inCommand : WORD;
    blConnect : BOOL;
    dLL : LREAL;
    dHL : LREAL;
    dLA : LREAL;
    dHA : LREAL;
    dLW : LREAL;
    dHW : LREAL;
    LL : LREAL;
    HL : LREAL;
    LA : LREAL;
    HA : LREAL;
    LW : LREAL;
    HW : LREAL;
    ISVALIDREF_LA : BOOL;
    ISVALIDREF_HA : BOOL;
    ISVALIDREF_LW : BOOL;
    ISVALIDREF_HW : BOOL;
    inpLL : LREAL;
    inpHL : LREAL;
    CurrentShotCircuit : LREAL;
    CurrentBreakCircuit : LREAL;
    maxChangeSpeed : LREAL;
    maxChangeSpeedDown : LREAL;
    ChangeSpeed : LREAL;
    histeresis : LREAL;
    aperturFilter : LREAL;
    exponentialFilter : LREAL;
    rassoglasovanie : LREAL;
    OpcCommandsDisabled : BOOL;
    Disabled_LA : BOOL;
    Disabled_HA : BOOL;
    Disabled_LW : BOOL;
    Disabled_HW : BOOL;
    delayLA : TIME;
    delayLW : TIME;
    delayHW : TIME;
    delayHA : TIME;
    minValue_ISVALIDREF : BOOL;
    maxValue_ISVALIDREF : BOOL;
    minValue : LREAL;
    maxValue : LREAL;
    inOpcCommandsDisabled : BOOL;
    imit : BOOL;
    remont : BOOL;
    NS : BOOL;
    NS_Min : BOOL;
    NS_Max : BOOL;
    inCommand_Alg : WORD;
    inCommand_ARM : WORD;
    dMaxChangeSpeed : LREAL;
    dMaxChangeSpeedDown : LREAL;
  END_STRUCT;
  AiConfig : STRUCT
    Tstali_statora_kanal_1 : struct_AI;
    Tstali_statora_kanal_2 : struct_AI;
    Tstali_statora_kanal_3 : struct_AI;
    Tmedi_statora_kanal_1 : struct_AI;
    Tmedi_statora_kanal_2 : struct_AI;
    Tmedi_statora_kanal_3 : struct_AI;
    Toporno_podshipnika_EDT_1 : struct_AI;
    Toporno_ypornogo_podshipnika_EDT_2 : struct_AI;
    Toporno_ypornogo_podshipnika_kolesa_red_EDT_3 : struct_AI;
    Toporno_ypornogo_podshipnika_kolesa_red_HT_4 : struct_AI;
    Toporno_podshipnika_shesterni_reduktora_T_5 : struct_AI;
    Toporno_podshipnika_reduktora_HT_6 : struct_AI;
    Toporno_ypornogo_podshipnika_nagnetatelja_T_7_1 : struct_AI;
    Toporno_ypornogo_podshipnika_nagnetatelja_T_7_2 : struct_AI;
    Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_1 : struct_AI;
    Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_2 : struct_AI;
    Typornogo_podshipnika_rav_kolodok_HT_9_1 : struct_AI;
    Typornogo_podshipnika_rav_kolodok_HT_9_2 : struct_AI;
    Typornogo_podshipnika_nerab_kolodok_HT_10_1 : struct_AI;
    Typornogo_podshipnika_nerab_kolodok_HT_10_2 : struct_AI;
    Tholodnogo_vozduha_ED_kanal_1 : struct_AI;
    Tholodnogo_vozduha_ED_kanal_2 : struct_AI;
    Tgorjachego_vozduha_ED_kanal_1 : struct_AI;
    Tgorjachego_vozduha_ED_kanal_2 : struct_AI;
    Tnarujnogo_vozduha : struct_AI;
    Tgaza_na_vhode_H : struct_AI;
    Tgaza_na_vyhode_H : struct_AI;
    Tmasla_do_AVOM : struct_AI;
    Tmasla_posle_AVOM : struct_AI;
    Tmasla_MB : struct_AI;
    Tmasla_MB_TEN : struct_AI;
    Tshu : struct_AI;
    Pmaslo_sm_nizkoe : struct_AI;
    Pmaslo_sm_vysokoe : struct_AI;
    Pmasla_posle_GNS : struct_AI;
    Pmasla_posle_NU : struct_AI;
    Pgaza_na_vhode_nagnetatelia : struct_AI;
    Pgaza_na_vyhode_nagnetatelia : struct_AI;
    Pimpuls_gaz : struct_AI;
    dPgaza_na_maslo_filtre : struct_AI;
    dPgaza_na_konfuzore : struct_AI;
    dPmaslo_gaz : struct_AI;
    Os_sdvig_nagnetatelja_plus : struct_AI;
    Os_sdvig_nagnetatelja_minus : struct_AI;
    Yroven_masla_MB : struct_AI;
    Kontrol_per_220V : struct_AI;
    Kontrol_post_220V : struct_AI;
    Tok_statora : struct_AI;
    Vibro_skorost_OPED_T1 : struct_AI;
    Vibro_skorost_OYPED_T2 : struct_AI;
    Vibro_skorost_OYP_kolesa_ED_T3 : struct_AI;
    Vibro_skorost_OP_kolesa_RH_T4 : struct_AI;
    Vibro_skorost_OP_shesterni_RED_T5 : struct_AI;
    Vibro_skorost_OP_shesterni_reduktora_H_T6 : struct_AI;
  END_STRUCT;
  TYPE_AnalogLimitFlags : STRUCT
    NONE : BYTE := 0;
    LL : BYTE := 16#1;
    LW : BYTE := 16#2;
    HW : BYTE := 16#4;
    LA : BYTE := 16#8;
    HA : BYTE := 16#10;
    HL : BYTE := 16#20;
    SipUP : BYTE := 16#40;
    SipDown : BYTE := 16#80;
  END_STRUCT;
  DiConfig : STRUCT
    di_0 : struct_DI;
    di_1 : struct_DI;
    di_2 : struct_DI;
    di_3 : struct_DI;
    di_4 : struct_DI;
    di_5 : struct_DI;
    di_6 : struct_DI;
    di_7 : struct_DI;
    di_8 : struct_DI;
    di_9 : struct_DI;
    di_10 : struct_DI;
    di_11 : struct_DI;
    di_12 : struct_DI;
    di_13 : struct_DI;
    di_14 : struct_DI;
    di_15 : struct_DI;
    di_16 : struct_DI;
    di_17 : struct_DI;
    di_18 : struct_DI;
    di_19 : struct_DI;
    di_20 : struct_DI;
    di_21 : struct_DI;
  END_STRUCT;
  TYPE_commandDualInput : STRUCT
    CMD_ON : BYTE := 1;
    CMD_OFF : BYTE := 2;
    CMD_RESET : BYTE := 3;
  END_STRUCT;
  struct_DO : STRUCT
    imit : BOOL;
    blConnect : BOOL;
    value : WORD;
    bits : ARRAY [0..15] OF BOOL;
  END_STRUCT;
  DOconfig : STRUCT
    do_0 : struct_DO;
    do_1 : struct_DO;
    do_2 : struct_DO;
    do_3 : struct_DO;
    do_4 : struct_DO;
    gpio_out : struct_DO;
  END_STRUCT;
  struct_AO : STRUCT
    nValue : LREAL;
    blConnect : BOOL;
    outLL : LREAL;
    outHL : LREAL;
    newLL : LREAL;
    newHL : LREAL;
    newLL_ISVALIDREF : BOOL;
    newHL_ISVALIDREF : BOOL;
    inCommand : WORD;
    Value : LREAL;
    status : DWORD;
    LL : LREAL;
    HL : LREAL;
    OpcCommandsDisabled : BOOL;
  END_STRUCT;
  AOConfig : STRUCT
    Reserv_AO_1 : struct_AO;
    Reserv_AO_2 : struct_AO;
  END_STRUCT;
  struct_singleSignal : STRUCT
    reliability : BOOL;
    inverse : BOOL;
    DelayOn : TIME;
    DelayOff : TIME;
    Q : BOOL;
    status : DWORD;
    Disabled_Sig : BOOL;
  END_STRUCT;
  IM_singleSignals : STRUCT
    dP_maslo_gaz_Less100 : struct_singleSignal;
    dp_kran1_Less100 : struct_singleSignal;
    Razreshenie_zagruzki_dvig : struct_singleSignal;
    Vozbud_gotovnost : struct_singleSignal;
    Vozbud_neispr_tsepey_upr_AVR_pit : struct_singleSignal;
    Vozbud_neispravnost : struct_singleSignal;
    SHAVR1_v_rabote : struct_singleSignal;
    SHAVR2_v_rabote : struct_singleSignal;
    Avariinoe_otkluch_vikluchatelya : struct_singleSignal;
    Assinhronnii_hod_peregruzka : struct_singleSignal;
    SHU_v_GPA_vkluch : struct_singleSignal;
    SHP_v_GPA_vkluch : struct_singleSignal;
    QF1_on : struct_singleSignal;
    QF2_on : struct_singleSignal;
    QF23_on : struct_singleSignal;
    QF4_QF5_on : struct_singleSignal;
    QF6_QF7_on : struct_singleSignal;
    QF8_QF9_on : struct_singleSignal;
    QF10_QF11_on : struct_singleSignal;
    QF12_QF13_on : struct_singleSignal;
    QF14_QF15_on : struct_singleSignal;
    QF22_on : struct_singleSignal;
    NS_G1_G2 : struct_singleSignal;
    NS_G3_G4 : struct_singleSignal;
    NS_G15_G16 : struct_singleSignal;
    NS_G17 : struct_singleSignal;
    NS_G5_G6 : struct_singleSignal;
    NS_G7_G8 : struct_singleSignal;
    NS_G18_G19 : struct_singleSignal;
    NS_G10_G11 : struct_singleSignal;
    NS_G13_G14 : struct_singleSignal;
    Uroven_masla_akkum : struct_singleSignal;
    NKU1_GPA_on : struct_singleSignal;
    NKU2_GPA_on : struct_singleSignal;
    AO_KC_ot_SHKS : struct_singleSignal;
    AO_GPA_ot_SHU : struct_singleSignal;
    BEAO_srabotal : struct_singleSignal;
    Chastotny_pusk : struct_singleSignal;
    Neuspesh_chastotny_pusk : struct_singleSignal;
    Rezhim_ruchnogo_regulirovaniya : struct_singleSignal;
    Osnovnoy_regul_off : struct_singleSignal;
    Voltage_sekcii_norm : struct_singleSignal;
    Reactorny_pusk : struct_singleSignal;
    NO_GPA_ot_SHU : struct_singleSignal;
    AO_GPA_ot_PRU : struct_singleSignal;
    Nalichie_BP1 : struct_singleSignal;
    Nalichie_BP2 : struct_singleSignal;
    Nalichie_BP3 : struct_singleSignal;
    Nalichie_BP4 : struct_singleSignal;
    Nalichie_BP5 : struct_singleSignal;
    Nalichie_BP6 : struct_singleSignal;
    Nalichie_BP7_BP8 : struct_singleSignal;
    Nalichie_BP9_BP10 : struct_singleSignal;
    Nalichie_cepei_upravlen_mv : struct_singleSignal;
    Nalichie_220BEAO : struct_singleSignal;
    Nalichie_per_220_na_vhode : struct_singleSignal;
    Nalichie_post_220_na_vhode : struct_singleSignal;
    Nalichie_BP11 : struct_singleSignal;
    Nalichie_BP12 : struct_singleSignal;
    Dver_SHU_pered_otkrita : struct_singleSignal;
    Dver_SHU_zad_otkrita : struct_singleSignal;
    EO_GPA_ot_knopki_SHU : struct_singleSignal;
    EO_EGPA_ot_PRY : struct_singleSignal;
    Synchroniz_rezhima_K1 : struct_singleSignal;
    Potok_ms_posle_AVOM : struct_singleSignal;
  END_STRUCT;
  struct_singleOutput : STRUCT
    wait_time : TIME;
    inCommand : WORD;
    inOpcCommandsDisabled : BOOL;
    Q : BOOL;
    status : DWORD;
    OpcCommandsDisabled : BOOL;
    inCommand_Alg : WORD;
    inCommand_ARM : WORD;
  END_STRUCT;
  IM_singleOutputs : STRUCT
    Rabota_EGPA : struct_singleOutput;
    Neispr_EGPA : struct_singleOutput;
    Avary_EGPA : struct_singleOutput;
    U_lamp_SHU : struct_singleOutput;
    AO_knopka_ind : struct_singleOutput;
    Pusk_SHUP : struct_singleOutput;
    Stop_SHUP : struct_singleOutput;
    NO_fonar : struct_singleOutput;
    PC_fonar : struct_singleOutput;
    AC_fonar : struct_singleOutput;
    Kr1_smazka : struct_singleOutput;
    Kr2_smazka : struct_singleOutput;
    Kr4_open_from_alg : struct_singleOutput;
    Synch_rej_K1 : struct_singleOutput;
  END_STRUCT;
  struct_Kran : STRUCT
    inCommand : WORD;
    status : DWORD;
    onStatus : BYTE;
    inOpcCommandsDisabled : BOOL;
    sdvig : BOOL;
    Ns : BOOL;
    Dp : BOOL;
    CommandFault : BOOL;
    Accident : BOOL;
    Auto : BOOL;
    Manual : BOOL;
    Local : BOOL;
    Distance : BOOL;
    ErrorPowerOff : BOOL;
    ErrorBlock : BOOL;
    So : BOOL;
    Sz : BOOL;
    OpcCommandsDisabled : BOOL;
    lastCmdIsOn : BOOL;
    ISVALIDREF_statOn : BOOL;
    ISVALIDREF_statOff : BOOL;
    ISVALIDREF_cmdOn : BOOL;
    ISVALIDREF_cmdOff : BOOL;
    ISVALIDREF_inSo : BOOL;
    ISVALIDREF_inSz : BOOL;
    ISVALIDREF_inDp : BOOL;
    continueHoldCommand : TIME;
    inCommand_Alg : WORD;
    inCommand_ARM : WORD;
    cmdOn : BOOL;
    cmdOff : BOOL;
    reliability : BOOL;
  END_STRUCT;
  struct_OilPump : STRUCT
    inCommand : WORD;
    inCommand_Alg : WORD;
    inCommand_ARM : WORD;
    status : DWORD;
    onStatus : BYTE;
    inOpcCommandsDisabled : BOOL;
    sdvig : BOOL;
    Ns : BOOL;
    CommandFault : BOOL;
    Accident : BOOL;
    Local : BOOL;
    Distance : BOOL;
    BreakCmdOn : BOOL;
    BreakCmdOff : BOOL;
    OpcCommandsDisabled : BOOL;
    lastCmdIsOn : BOOL;
    ISVALIDREF_statOn : BOOL;
    ISVALIDREF_statOff : BOOL;
    ISVALIDREF_cmdOn : BOOL;
    ISVALIDREF_cmdOff : BOOL;
    ISVALIDREF_inBreakCmdOn : BOOL;
    ISVALIDREF_inBreakCmdOff : BOOL;
    inBlocked : BOOL;
    Blocked : BOOL;
    Osnovnoy : BOOL;
    Rezervny : BOOL;
    cmdOn : BOOL;
    cmdOff : BOOL;
    reliability : BOOL;
  END_STRUCT;
  struct_Switch : STRUCT
    inCommand : WORD;
    status : DWORD;
    onStatus : BYTE;
    inOpcCommandsDisabled : BOOL;
    sdvig : BOOL;
    Ns : BOOL;
    CommandFault : BOOL;
    Accident : BOOL;
    Auto : BOOL;
    Manual : BOOL;
    Local : BOOL;
    Distance : BOOL;
    ErrorPowerOff : BOOL;
    ErrorBlock : BOOL;
    BreakCmdOn : BOOL;
    BreakCmdOff : BOOL;
    OpcCommandsDisabled : BOOL;
    lastCmdIsOn : BOOL;
    ISVALIDREF_statOn : BOOL;
    ISVALIDREF_statOff : BOOL;
    ISVALIDREF_cmdOn : BOOL;
    ISVALIDREF_cmdOff : BOOL;
    ISVALIDREF_inBreakCmdOn : BOOL;
    ISVALIDREF_inBreakCmdOff : BOOL;
    inCommand_Alg : WORD;
    inCommand_ARM : WORD;
    cmdOn : BOOL;
    cmdOff : BOOL;
    reliability : BOOL;
  END_STRUCT;
  struct_SectionSwitch : STRUCT
    inCommand : WORD;
    status : DWORD;
    onStatus : BYTE;
    inOpcCommandsDisabled : BOOL;
    sdvig : BOOL;
    Ns : BOOL;
    CommandFault : BOOL;
    Accident : BOOL;
    Local : BOOL;
    Distance : BOOL;
    OpcCommandsDisabled : BOOL;
    lastCmdIsOn : BOOL;
    offKNA : BOOL;
    basketStatus : BYTE;
    ISVALIDREF_statOn : BOOL;
    ISVALIDREF_statOff : BOOL;
    ISVALIDREF_cmdOn : BOOL;
    ISVALIDREF_cmdOff : BOOL;
    ISVALIDREF_inBreakCmdOn : BOOL;
    ISVALIDREF_inBreakCmdOff : BOOL;
    BreakCmdOn : BOOL;
    BreakCmdOff : BOOL;
    ISVALIDREF_basketRolledIn : BOOL;
    ISVALIDREF_basketRolledOut : BOOL;
    ISVALIDREF_basketTest : BOOL;
    inCommand_Alg : WORD;
    inCommand_ARM : WORD;
    cmdOn : BOOL;
    cmdOff : BOOL;
    reliability : BOOL;
  END_STRUCT;
  struct_ReserveIM : STRUCT
    var1 : BOOL;
    var2 : BOOL;
  END_STRUCT;
  struct_ReserveIM2 : STRUCT
    var1 : BOOL;
    var2 : BOOL;
  END_STRUCT;
  ImConfig : STRUCT
    Kran1 : struct_Kran;
    Kran2 : struct_Kran;
    Kran3 : struct_Kran;
    Kran3b : struct_Kran;
    Kran4 : struct_Kran;
    Kran5 : struct_Kran;
    Kran6 : struct_Kran;
    nu1 : struct_OilPump;
    nu2 : struct_OilPump;
    pns : struct_Switch;
    v1_Avom : struct_Switch;
    v2_Avom : struct_Switch;
    v3_Avom : struct_Switch;
    v4_Avom : struct_Switch;
    mv : struct_SectionSwitch;
    Reserve_IM1 : struct_ReserveIM;
    Reserve_IM2 : struct_ReserveIM2;
    SingleSignals : IM_singleSignals;
    SingleOutputs : IM_singleOutputs;
    KaloriferAVOM : struct_Switch;
    CMN : struct_Switch;
    TEN_kollectora : struct_Switch;
    TEN_MB : struct_Switch;
  END_STRUCT;
  struct_DualStateIm : STRUCT
    inCommand : WORD;
    status : DWORD;
    onStatus : BYTE;
    inOpcCommandsDisabled : BOOL;
    sdvig : BOOL;
    Ns : BOOL;
    CommandFault : BOOL;
    Accident : BOOL;
    OpcCommandsDisabled : BOOL;
    lastCmdIsOn : BOOL;
    ISVALIDREF_statOn : BOOL;
    ISVALIDREF_statOff : BOOL;
    ISVALIDREF_cmdOn : BOOL;
    ISVALIDREF_cmdOff : BOOL;
    inCommand_Alg : WORD;
    inCommand_ARM : WORD;
    cmdOn : BOOL;
    cmdOff : BOOL;
    reliability : BOOL;
  END_STRUCT;
  TYPE_ProtectionTags : STRUCT
    NOTHING : BYTE := 0;
    AOB : BYTE := 1;
    AOS : BYTE := 2;
    AOPOJ : BYTE := 3;
  END_STRUCT;
  TYPE_basketStats : STRUCT
    BASKET_NOTDEFINED : BYTE := 0;
    BASKET_ROLLEDIN : BYTE := 1;
    BASKET_ROLLEDOUT : BYTE := 2;
    BASKET_TRANSITIONAL : BYTE := 3;
    BASKET_ERROR : BYTE := 4;
    BASKET_TEST : BYTE := 5;
  END_STRUCT;
  struct_AnalogParametr : STRUCT
    inCommand : WORD;
    inCommand_Alg : WORD;
    inCommand_ARM : WORD;
    status : DWORD;
    newValue : LREAL;
    currentValue : LREAL;
    minVal : LREAL;
    maxVal : LREAL;
    maxStep : LREAL;
    minVal_ISVALIDREF : BOOL;
    maxVal_ISVALIDREF : BOOL;
    maxStep_ISVALIDREF : BOOL;
    inOpcCommandsDisabled : BOOL;
    Value : LREAL;
    isValidValue : BOOL;
    OpcCommandsDisabled : BOOL;
  END_STRUCT;
  struct_DiscretParametr : STRUCT
    newValue : UINT;
    currentValue : UINT;
    inOpcCommandsDisabled : BOOL;
    inCommand : WORD;
    inCommand_Alg : WORD;
    inCommand_ARM : WORD;
    status : DWORD;
    OpcCommandsDisabled : BOOL;
    Value : UINT;
  END_STRUCT;
  struct_AiProtection : STRUCT
    controlLimit : BYTE;
    delay : TIME;
    inTag : BYTE;
    inRunOnStart : BOOL;
    inCanRun : BOOL;
    inOpcCommandsDisabled : BOOL;
    inCommand : WORD;
    inCommand_Alg : WORD;
    inCommand_ARM : WORD;
    Tag : BYTE;
    status : DWORD;
    CanRun : BOOL;
    OpcCommandsDisabled : BOOL;
    isRunning : BOOL;
    HasError : BOOL;
    isEnded : BOOL;
    Remont : BOOL;
    Check : BOOL;
    Signaling : BOOL;
    SignalingTP : BOOL;
    RunOnStart : BOOL;
  END_STRUCT;
  struct_DiProtection : STRUCT
    delay : TIME;
    inTag : BYTE;
    inRunOnStart : BOOL;
    inCanRun : BOOL;
    inOpcCommandsDisabled : BOOL;
    inCommand : WORD;
    inCommand_Alg : WORD;
    inCommand_ARM : WORD;
    Tag : BYTE;
    status : DWORD;
    CanRun : BOOL;
    OpcCommandsDisabled : BOOL;
    isRunning : BOOL;
    HasError : BOOL;
    isEnded : BOOL;
    Remont : BOOL;
    Check : BOOL;
    Signaling : BOOL;
    SignalingTP : BOOL;
    RunOnStart : BOOL;
  END_STRUCT;
  ProtectionsConfig : STRUCT
    Topornogo_podshipnika_EDT_1 : struct_AiProtection;
    Toporno_ypornogo_podshipnika_EDT_2 : struct_AiProtection;
    Toporno_ypornogo_podshipnika_kolesa_red_EDT_3 : struct_AiProtection;
    Toporno_ypornogo_podshipnika_kolesa_red_HT_4 : struct_AiProtection;
    Topornogo_podshipnika_shesterni_reduktora_T_5 : struct_AiProtection;
    Topornogo_podshipnika_reduktora_HT_6 : struct_AiProtection;
    Toporno_ypornogo_podshipnika_nagnetatelja_T_7 : struct_AiProtection;
    Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8 : struct_AiProtection;
    Typornogo_podshipnika_rav_kolodok_HT_9 : struct_AiProtection;
    Typornogo_podshipnika_nerab_kolodok_HT_10 : struct_AiProtection;
    Tgaza_na_vyhode_H : struct_AiProtection;
    Os_sdvig_nagnetatelja_plus : struct_AiProtection;
    Os_sdvig_nagnetatelja_minus : struct_AiProtection;
    Pgaza_na_vyhode_nagnetatelia_GPA_STOP : struct_AiProtection;
    Pgaza_na_vhode_nagnetatelia_GPA_STOP : struct_AiProtection;
    Pgaza_na_vyhode_nagnetatelia : struct_AiProtection;
    dPmaslo_gaz : struct_AiProtection;
    Pmaslo_sm_nizkoe : struct_AiProtection;
    Pmaslo_sm_vysokoe : struct_AiProtection;
    Vibro_skorost_OPED_T1 : struct_AiProtection;
    Vibro_skorost_OPED_T2 : struct_AiProtection;
    Vibro_skorost_OYP_kolesa_ED_T3 : struct_AiProtection;
    Vibro_skorost_OP_kolesa_RH_T4 : struct_AiProtection;
    Vibro_skorost_OP_shesterni_RED_T5 : struct_AiProtection;
    Vibro_skorost_OP_shesterni_reduktora_H_T6 : struct_AiProtection;
    dPmaslo_gaz_less100 : struct_DiProtection;
    Reg_vozb_off : struct_DiProtection;
    Fail_chastotnii_pusk : struct_DiProtection;
    Off_avar_vikluchatel : struct_DiProtection;
    AOKC_SHKC : struct_DiProtection;
    AO_PRU : struct_DiProtection;
    AO_ot_SHU : struct_DiProtection;
    mvOff : struct_DiProtection;
    Kran1_sdvig : struct_DiProtection;
    Kran2_sdvig : struct_DiProtection;
  END_STRUCT;
  TYPE_ModeGpa : STRUCT
    MODE_NOTDEFINED : UINT := 0;
    MODE_REMONT : UINT := 1;
    MODE_STOP : UINT := 2;
    MODE_READY : UINT := 3;
    MODE_PUSKV : UINT := 4;
    MODE_PUSKK : UINT := 5;
    MODE_TESTDPMG : UINT := 6;
    MODE_TESTPMS : UINT := 7;
    MODE_APUSK : UINT := 8;
    MODE_MPUSK : UINT := 9;
    MODE_WORK_Ring : UINT := 10;
    MODE_WORK_Line : UINT := 11;
    MODE_NO : UINT := 12;
    MODE_AO : UINT := 13;
    MODE_EO : UINT := 14;
    MODE_TESTIM : UINT := 15;
    MODE_TESTAZ : UINT := 16;
    MODE_PUSK_FIRST_FAZA1 : UINT := 17;
    MODE_PUSK_FIRST_FAZA2 : UINT := 18;
  END_STRUCT;
  TYPE_DualStateImAction : (_on, _off) := _on;
  TYPE_PhaseAlgoritmAction : (_run, _reset) := _run;
  TYPE_Answers : STRUCT
    ANS_NONE : UINT := 0;
    ANS_YES : UINT := 1;
    ANS_NO : UINT := 2;
    ANS_CANCEL : UINT := 4;
    ANS_RETRY : UINT := 8;
  END_STRUCT;
  struct_Alg : STRUCT
    inRunOnStart : BOOL;
    inCanRun : BOOL;
    inHasError : BOOL;
    inEnded : BOOL;
    inOpcCommandsDisabled : BOOL;
    inCommand : WORD;
    inCommand_ARM : WORD;
    inCommand_Alg : WORD;
    status : DWORD;
    CanRun : BOOL;
    OpcCommandsDisabled : BOOL;
    isRuning : BOOL;
    HasError : BOOL;
    isEnded : BOOL;
    RunOnStart : BOOL;
    Start : DWORD;
    Error : DWORD;
    Top : DWORD;
  END_STRUCT;
  AlgoritmsConfig : STRUCT
    autoNu : struct_Alg;
    AutoPns : struct_Alg;
    AutoAvom : struct_Alg;
    AutoTen : struct_Alg;
    AntiPompag : struct_Alg;
    testIm : struct_Alg;
    TestProtection : struct_Alg;
    Remont : struct_Alg;
    ppu : struct_Alg;
    puskOilSystem : struct_Alg;
    engineRun : struct_Alg;
    filling : struct_Alg;
    LineToRing : struct_Alg;
    RingToLine : struct_Alg;
    Apusk : struct_Alg;
    SemiAutoPusk : struct_Alg;
    no : struct_Alg;
    vibegPNS : struct_Alg;
    ao : struct_Alg;
    testPms : struct_Alg;
    testdPmg : struct_Alg;
    puskV : struct_Alg;
    puskK : struct_Alg;
    Pusk_F_faza1 : struct_Alg;
    Pusk_F_faza2 : struct_Alg;
    Pusk_TH_faza : struct_Alg;
  END_STRUCT;
  TYPE_CommandsPotectionsManager : STRUCT
    RestartAllSignaling : BYTE := 1;
    RestartAllProtections : BYTE := 2;
    CheckProtections : BYTE := 3;
    ResetAllProtections : BYTE := 4;
  END_STRUCT;
  struct_ProtectionsManager : STRUCT
    inCommand : BYTE;
    protectionInRemont : BOOL;
  END_STRUCT;
  struct_AlgoritmsManager : STRUCT
    mode : UINT;
    narabotka : UINT;
    nMode : UINT;
    AnalogsPs : BOOL;
    DiscretPS : BOOL;
    ProtectionSignaling : BOOL;
  END_STRUCT;
  struct_AlgTimers : STRUCT
    AutoPns_OffTimer : UINT;
    AutoPns_OnTimer : UINT;
    vibegPNS_Timer : UINT;
    NO_waitCloseKran : UINT;
    AO_waitKran : UINT;
    testPms_BreakTest : UINT;
    testdPmg_BreakTest : UINT;
    puskOilSystem_BreakPuskTimer_Poil : UINT;
    engineRun_BreakPuskTimer : UINT;
    filling_BreakPuskTimer : UINT;
    filling_waitAfterKran4 : UINT;
    filling_waitAfterKran5 : UINT;
    puskK_wait720 : UINT;
    puskV_wait600 : UINT;
    No_wait120 : UINT;
    No_wait600 : UINT;
    No_wait5 : UINT;
  END_STRUCT;
  struct_PhaseAlgoritm : STRUCT
    run : BOOL;
    reset : BOOL;
    start : BOOL;
    error : BOOL;
    top : BOOL;
    startStatus : DWORD;
    errorStatus : DWORD;
    topStatus : DWORD;
  END_STRUCT;
  struct_Question : STRUCT
    AnswerVariants : UINT;
    inCommand : WORD;
    ask : BOOL;
    reset : BOOL;
    status : DWORD;
    answer : UINT;
    OpcCommandsDisabled : BOOL;
    inOpcCommandsDisabled : BOOL;
  END_STRUCT;
  AlgoritmsQuestions : STRUCT
    vibegPNS_algContinue : struct_Question;
    testPms_algContinue : struct_Question;
    testdPmg_algContinue : struct_Question;
    puskK_questionFilling : struct_Question;
    puskK_questionUnload : struct_Question;
    puskV_questionEngine : struct_Question;
    puskV_questionMVoff : struct_Question;
    SemiAutoPusk_cmdRun1ph : struct_Question;
    SemiAutoPusk_cmdRun2ph : struct_Question;
    SemiAutoPusk_cmdRun3ph : struct_Question;
    SemiAutoPusk_cmdRun4ph : struct_Question;
  END_STRUCT;
  TYPE_TableRec : STRUCT
    x : REAL;
    y : REAL;
  END_STRUCT;
END_TYPE

FUNCTION_BLOCK fb_Timings
  VAR_EXTERNAL CONSTANT
    req_Cycle : REAL;
  END_VAR
  VAR_EXTERNAL
    gF_T_100mSec : BOOL;
    gT_1Sec : BOOL;
    gF_T_1Sec : BOOL;
    gT_1Min : BOOL;
    gR_T_1Min : BOOL;
    gF_T_1Min : BOOL;
    del_T : REAL;
    cur_Cycle : REAL;
  END_VAR
  VAR
    Tmr_100_ms : REAL;
  END_VAR
  VAR_EXTERNAL
    T_1SEC : REAL;
  END_VAR
  VAR
    Tmr_1_s : REAL;
    Tmr_1_min : REAL;
  END_VAR

  (* Обработка времени. *)
  Tmr_100_ms := Tmr_100_ms + cur_Cycle;
  gF_T_100mSec := FALSE; 
  IF Tmr_100_ms >= 0.1 THEN Tmr_100_ms := 0.0; gF_T_100mSec := TRUE; END_IF;

  Tmr_1_s := Tmr_1_s + cur_Cycle;
  gF_T_1Sec := FALSE; 
  IF Tmr_1_s >= 1.0 THEN Tmr_1_s := 0.0; gF_T_1Sec := TRUE; END_IF;

  T_1SEC := T_1SEC + cur_Cycle;
  gT_1Sec := FALSE;
  IF T_1SEC >= 2.0 THEN T_1SEC := 0.0;
    ELSIF T_1SEC >= 1.0 THEN gT_1Sec := TRUE; END_IF;

  IF Tmr_1_min > 60.0 THEN
      Tmr_1_min := 0.0; gF_T_1Min := gT_1Min; gT_1Min := NOT gT_1Min; gR_T_1Min := gT_1Min;
    ELSE
      Tmr_1_min := Tmr_1_min + cur_Cycle; gR_T_1Min := FALSE; gF_T_1Min := FALSE;
  END_IF;
  del_T:= cur_Cycle;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AI_Init
  VAR_INPUT
    data_Ini : BOOL;
    dLL : LREAL;
    dHL : LREAL;
    dLA : LREAL;
    dHA : LREAL;
    dLW : LREAL;
    dHW : LREAL;
    ISVALIDREF_LA : BOOL := False;
    ISVALIDREF_HA : BOOL := False;
    ISVALIDREF_LW : BOOL := False;
    ISVALIDREF_HW : BOOL := False;
    delayLA : TIME := T#0S;
    delayLW : TIME := T#0S;
    delayHW : TIME := T#0S;
    delayHA : TIME := T#0S;
    inpLL : LREAL := 4000.0;
    inpHL : LREAL := 20000.0;
    CurrentShotCircuit : LREAL := 21000.0;
    CurrentBreakCircuit : LREAL := 3700.0;
    dMaxChangeSpeed : LREAL;
    dMaxChangeSpeedDown : LREAL;
    histeresis : LREAL;
    aperturFilter : LREAL;
    exponentialFilter : LREAL;
    rassoglasovanie : LREAL;
    inOpcCommandsDisabled : BOOL;
  END_VAR
  VAR_IN_OUT
    strAI : struct_AI;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры-дескриптора канала аналогового ввода.            *****)
       Init := false;


      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          strAI.dLL                := dLL;
          strAI.dHL                := dHL;
          strAI.dLA                := dLA;
          strAI.dHA                := dHA;
          strAI.dLW                := dLW;
          strAI.dHW                := dHW;
          strAI.ISVALIDREF_LA      := ISVALIDREF_LA;
          strAI.ISVALIDREF_HA      := ISVALIDREF_HA;
          strAI.ISVALIDREF_LW      := ISVALIDREF_LW;
          strAI.ISVALIDREF_HW      := ISVALIDREF_HW;
          strAI.delayLA            := delayLA;
          strAI.delayLW            := delayLW;
          strAI.delayHW            := delayHW;
          strAI.delayHA            := delayHA;
          strAI.inpLL              := inpLL;
          strAI.inpHL              := inpHL;
          strAI.CurrentShotCircuit := CurrentShotCircuit;
          strAI.CurrentBreakCircuit:= CurrentBreakCircuit;
          strAI.dMaxChangeSpeed     := dMaxChangeSpeed;
          strAI.dMaxChangeSpeedDown := dMaxChangeSpeedDown;
          strAI.histeresis         := histeresis;
          strAI.aperturFilter      := aperturFilter;
          strAI.exponentialFilter  := exponentialFilter;
          strAI.rassoglasovanie    := rassoglasovanie;
          strAI.rassoglasovanie    := rassoglasovanie;

          data_Ini:=false;
          Init := TRUE;
       END_IF; 
    IF Init THEN     
          dLL:= 0.0;
          dHL:= 0.0;
          dLA:= 0.0;
          dHA:= 0.0;
          dLW:= 0.0;
          dHW:= 0.0;
          inpLL:= 4000.0;
          inpHL:= 20000.0;
          CurrentShotCircuit:= 21000.0;
          CurrentBreakCircuit:= 3700.0;
          ISVALIDREF_LA:= false;
          ISVALIDREF_HA:= false;
          ISVALIDREF_LW:= false;
          ISVALIDREF_HW:= false;
          delayLA:= T#0S;
          delayLW:= T#0S;
          delayHW:= T#0S;
          delayHA:= T#0S; 
          dMaxChangeSpeed:= 0.0;
          dMaxChangeSpeedDown:= 0.0;
          histeresis:= 0.0;
          aperturFilter:= 0.0;
          exponentialFilter:= 0.0;
          rassoglasovanie:= 0.0;
        END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_AI_Init
  VAR_INPUT
    init : BOOL;
  END_VAR
  VAR
    stAI_Ini : fb_AI_Init;
    inits : UINT;
  END_VAR
  VAR_INPUT
    initiales : UINT;
  END_VAR
  VAR_EXTERNAL
    ai : AiConfig;
  END_VAR

  inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)

  (********************************************* Модуль A2-14 ******************************************************)
  (* [A2-14, AI0-0] TStalisStatoraKanal1 *)
  stAI_Ini(data_Ini := TRUE, dLL := 0.0, dHL := 150.0,
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.Tstali_statora_kanal_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-14, AI0-1] TStalisStatoraKanal2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0, 
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.Tstali_statora_kanal_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-14, AI0-2] TStalisStatoraKanal3 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL :=150.0,
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.Tstali_statora_kanal_3);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-14, AI0-3] TMediStatoraKanal1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.Tmedi_statora_kanal_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A2-15 ******************************************************)

  (* [A2-15, AI1-0] TMediStatoraKanal2 *)
  stAI_Ini(data_Ini :=TRUE,  dLL := 0.0, dHL := 150.0,
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.Tmedi_statora_kanal_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-15, AI1-1] TMediStatoraKanal3 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.Tmedi_statora_kanal_3);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-15, AI1-2] TOpornogoPodshipnikaEDT_1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Toporno_podshipnika_EDT_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-15, AI1-3]  TOpornoYpornogoPodshipnikaEDT_2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Toporno_ypornogo_podshipnika_EDT_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-1 ******************************************************)

  (* [A3-1, AI2-0]  TOpornoYpornogoPodshipnikaKolesaRedEDT_3 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-1, AI2-1] TOpornoYpornogoPodshipnikaKolesaRedHT_4 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Toporno_ypornogo_podshipnika_kolesa_red_HT_4);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-1, AI2-2] TOpornogoPodshipnikaShesterniReduktoraT_5 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Toporno_podshipnika_shesterni_reduktora_T_5);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-1, AI2-3] TOpornogoPodshipnikaReduktoraHT_6 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Toporno_podshipnika_reduktora_HT_6);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-2 ******************************************************)

  (* [A3-2, AI3-01]  TOpornoYpornogoPodshipnikaNagnetateljaT_7_1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-2, AI3-01]  TOpornoYpornogoPodshipnikaNagnetateljaT_7_2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);


  (* [A3-2, AI3-2]  TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-2, AI3-2]  TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-3 ******************************************************)

  (* [A3-3, AI4-1]  TYpornogoPodshipnikaRavKolodokHT_9_1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Typornogo_podshipnika_rav_kolodok_HT_9_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-3, AI4-1]  TYpornogoPodshipnikaRavKolodokHT_9_2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Typornogo_podshipnika_rav_kolodok_HT_9_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-3, AI4-3] TYpornogoPodshipnikaNerabKolodokHT_10_1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Typornogo_podshipnika_nerab_kolodok_HT_10_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-3, AI4-3] TYpornogoPodshipnikaNerabKolodokHT_10_2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Typornogo_podshipnika_nerab_kolodok_HT_10_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-4 ******************************************************)
  (* [A3-4, AI5-0] THolodnogoVozduhaEDKanall *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 60.0, aperturFilter:= 0.5,
  strAI := ai.Tholodnogo_vozduha_ED_kanal_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-4, AI5-1] THolodnogoVozduhaEDKanal2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 60.0, aperturFilter:= 0.5,
  strAI := ai.Tholodnogo_vozduha_ED_kanal_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-4, AI5-2]  TGorjachegoVozduhaEDKanall *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 70.0, aperturFilter:= 0.5,
  strAI := ai.Tgorjachego_vozduha_ED_kanal_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-4, AI5-3] TGorjachegoVozduhaEDKanal2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 70.0, aperturFilter:= 0.5,
  strAI := ai.Tgorjachego_vozduha_ED_kanal_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-5 ******************************************************)

  (* [A3-5, AI6-0] TNArujnogoVozduha *)
  stAI_Ini(data_Ini := TRUE,  dLL := -50.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 70.0, aperturFilter:= 0.5,
  strAI := ai.Tnarujnogo_vozduha);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-5, AI6-1]  TgazaNaVhodeH *)
  stAI_Ini(data_Ini := TRUE,  dLL := -50.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 80.0, aperturFilter:= 0.5,
  strAI := ai.Tgaza_na_vhode_H);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-5, AI6-2] TgazaNaVyhodeH *)
  stAI_Ini(data_Ini := TRUE,  dLL := -50.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHa :=90.0, dHW := 80.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Tgaza_na_vyhode_H);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);


  (********************************************* Модуль A3-6 ******************************************************)
  (* [A3-6, AI7-0] TMasladoAVOM *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
  ISVALIDREF_HW := TRUE, dHW := 55.0, aperturFilter:= 0.5,
  strAI := ai.Tgorjachego_vozduha_ED_kanal_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-6, AI7-1] TMaslaPosleAVOM *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
  ISVALIDREF_HW := TRUE, dHW := 55.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Tmasla_posle_AVOM);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);
  (********************************************* Модуль A3-8 ******************************************************)
  (* [A3-8, AI9-0]  TMaslaMB *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
  ISVALIDREF_LW := TRUE, dLW := 25.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Tmasla_MB);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-6, AI7-2] TMaslaMB_TEN *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 50.0, aperturFilter:= 0.5, dMaxChangeSpeed := 10.0,
  strAI := ai.Tmasla_MB_TEN);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-8, AI9-1]  TEmperatura_v_SHU *)
  stAI_Ini(data_Ini := TRUE,  dLL := -40.0, dHL := 100.0, CurrentShotCircuit := 20320.0, CurrentBreakCircuit := 3680.0, 
  aperturFilter:= 0.5, strAI := ai.Tshu);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-8, AI9-2]  DavlenijaMasloSmNizkoe *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0,
  ISVALIDREF_LW := TRUE, ISVALIDREF_LA := TRUE, dLW := 50.0, dLA := 25.0,  CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,  aperturFilter:= 0.5,
  strAI := ai.Pmaslo_sm_nizkoe);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-8, AI9-3]  PerepadDavlenieNaMasloFiltre *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0,
  ISVALIDREF_HW := TRUE, dHW := 150.0, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0, aperturFilter:= 0.5, 
  strAI := ai.dPgaza_na_maslo_filtre);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-9 ******************************************************)
  (* [A3-9, AI10-0]  DavlenijaMasloSmVysokoe *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
  ISVALIDREF_LW := TRUE, ISVALIDREF_LA := TRUE, dLW := 300.0, dLA := 250.0, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0, aperturFilter:= 0.5, 
  strAI := ai.Pmaslo_sm_vysokoe);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-9, AI10-1]  DavlenijaMaslaPosleGNS *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0, aperturFilter:= 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  ISVALIDREF_LW := TRUE, ISVALIDREF_HW := TRUE,
  dLW := 187.0, dHW := 242.0,
  strAI := ai.Pmasla_posle_GNS);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-9, AI10-2] DavlenijaMaslaPosleNU *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0, aperturFilter:= 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  ISVALIDREF_LW := TRUE, dLW := 3.0,
  strAI := ai.Pmasla_posle_NU);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-10 ******************************************************)
  (* [A3-10, AI11-0] PerepadDavlenieNaKonfuzore *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0,
  ISVALIDREF_LW := TRUE, dLW := 15.0, aperturFilter:= 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.dPgaza_na_konfuzore);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-10, AI11-1] OsSdvigNagnetatelja_Plus *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHW := 200.0, dHA := 300.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Os_sdvig_nagnetatelja_plus);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-10, AI11-2] OsSdvigNagnetatelja_Minus *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1600.0,
  ISVALIDREF_LW := TRUE, dLW := 150.0, ISVALIDREF_LA := TRUE, dLA := 100.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Os_sdvig_nagnetatelja_minus);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-10, AI11-3] PerepadDavlenieMasloGaz *)
  stAI_Ini(data_Ini := TRUE, dLL := 0.0, dHL := 1600.0, 
  ISVALIDREF_LW := TRUE, ISVALIDREF_LA := TRUE, dLW := 150.0, dLa := 100.0, aperturFilter:= 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.dPmaslo_gaz);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-11 ******************************************************)
  (* [A3-11, AI12-0]  DGazaNaVhodeNagnetatelja *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0,
  ISVALIDREF_LW := TRUE, dLW := 4.895, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0, (*ISVALIDREF_LA := TRUE, dLA := 4.589,*)
  strAI := ai.Pgaza_na_vhode_nagnetatelia);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-11, AI12-1]  DGazaNaVyhodeNagnetatelja *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dLA := 7.653, dHW := 7.55, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Pgaza_na_vyhode_nagnetatelia);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-11, AI12-3]  DavlenieImpulsGaz *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0, 
  ISVALIDREF_LW := TRUE, dLW := 5.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Pimpuls_gaz);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-12 ******************************************************)
  (* [A3-12, AI13-0] YrovenMaslaMB *)
  stAI_Ini(data_Ini := TRUE,  dLL := 190.0, dHL := 885.0,
  ISVALIDREF_LW := TRUE, dLW := 530.0, aperturFilter := 0.5,  CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Yroven_masla_MB);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-13 ******************************************************)
  (* [A3-13, AI14-0]  Kontrol_per220V *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0,
  ISVALIDREF_LW := TRUE, ISVALIDREF_HW := TRUE, dLW := 187.0, dHW := 242.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Kontrol_per_220V);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-13, AI14-1]  Kontrol_post220V *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_LW := TRUE, dHW := 242.0, dLW := 187.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Kontrol_post_220V);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-13, AI14-2]  VibroSkorostOPED_T1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Kontrol_post_220V);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-13, AI14-3]  VibroSkorostOYPED_T2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Vibro_skorost_OPED_T1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-14 ******************************************************)
  (* [A3-14, AI15-0]  VibroSkorostOYPKolesaED_T3 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Vibro_skorost_OYP_kolesa_ED_T3);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-14, AI15-1]  VibroSkorostOPKolesaRH_T4 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Vibro_skorost_OP_kolesa_RH_T4);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-11, AI12-2]  VibroSkorostOPShesterniRED_T5 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Vibro_skorost_OP_shesterni_RED_T5);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-11, AI12-2]  VibroSkorostOPShesterniRED_T5 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Vibro_skorost_OP_shesterni_reduktora_H_T6);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-11, AI12-2]  VibroSkorostOPShesterniRED_T5 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
  ISVALIDREF_LW := TRUE, dLW := 300.0, aperturFilter := 0.5, CurrentShotCircuit := 20240.0, CurrentBreakCircuit := 3760.0,
  strAI := ai.Tok_statora);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  initiales := 0;
  IF init THEN initiales := inits; END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_sunpackerCommand
  VAR_INPUT
    command : WORD;
  END_VAR
  VAR_OUTPUT
    source : BYTE;
    parametr : BYTE;
    cmd : BYTE;
  END_VAR

  cmd := WORD_TO_BYTE(command and 16#7);
  parametr := WORD_TO_BYTE(SHR((command and 16#1FF8), 3));
  source := WORD_TO_BYTE(SHR(command, 13));
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AiSourceMlp
  VAR_INPUT
    arAIN : TItemAIN;
    err_mod : TItemDIN;
  END_VAR
  VAR_IN_OUT
    strAI : struct_AI;
  END_VAR
  VAR
    _statusAi : TYPE_StatusAi;
    _commandAnalog : TYPE_CommandAnalog;
    _sunpackerCommand : fb_sunpackerCommand;
    _AnalogLimitFlags : TYPE_AnalogLimitFlags;
    notReliable : BOOL;
    _lastValue : LREAL;
    resetCmdTimer : TON;
    _LastValueTimer : TON;
    resetCmdTimerPriznak : BOOL;
    k : LREAL;
    b : LREAL;
    ap : LREAL;
    raznitsa : LREAL;
    rABS : LREAL;
    h : LREAL;
    mismatch : LREAL;
    parametr : BYTE;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    onInit : BOOL;
    off_trig : R_TRIG;
    on_trig : R_TRIG;
    remont_trig : R_TRIG;
    LL_trig : R_TRIG;
    HL_trig : R_TRIG;
    Normal_trig : R_TRIG;
    Nedostover_trig : R_TRIG;
  END_VAR

  strAI.opcCommandsDisabled := strAI.inopcCommandsDisabled ;

  (* ---- При первом пуске принимаем значение уставок ---- *)
  IF NOT onInit THEN

            strAI.LL := strAI.dLL; 
            strAI.HL := strAI.dHL;

            strAI.MaxChangeSpeed     := strAI.dMaxChangeSpeed; 
            strAI.MaxChangeSpeedDown := strAI.dMaxChangeSpeedDown;

            IF strAI.ISVALIDREF_HA THEN strAI.HA := strAI.dHA; END_IF;

            IF strAI.ISVALIDREF_LA THEN strAI.LA := strAI.dLA; END_IF;

            IF strAI.ISVALIDREF_HW THEN strAI.HW := strAI.dHW; END_IF;

            IF strAI.ISVALIDREF_LW THEN strAI.LW := strAI.dLW; END_IF;	

  	onInit  := TRUE;
  END_IF;

  (* ---- пересчет тока в физ величину ---- *)
  k := (strAI.HL - strAI.LL)/(strAI.inpHl - strAI.inpLL);
  b := strAI.LL - k * strAI.inpLL;
  strAI.value := k * arAIN.dblValue + b;

  (* ---- определение обрыва и кз ----- *)

  strAI.blConnect :=(*(UINT_TO_WORD(arAIN.wFlags) = 1472) and*) (UINT_TO_WORD(err_mod.wValue) = 20) and (UINT_TO_WORD(err_mod.wFlags) = 192); 
  IF NOT strAI.blConnect THEN 
      strAI.interval := _statusAi.NOTDEFINED;
  ELSIF ((arAIN.dblValue < strAI.currentBreakCircuit) AND (strAI.currentBreakCircuit > 0.0)) OR ((strAI.interval = _statusAi.LL) AND (arAIN.dblValue < (strAI.currentBreakCircuit + 100.0))) THEN
      strAI.interval := _statusAi.LL;
  ELSIF ((arAIN.dblValue > strAI.currentShotCircuit) AND (strAI.currentShotCircuit > 0.0)) OR ((strAI.interval = _statusAi.HL) AND (arAIN.dblValue > (strAI.currentShotCircuit - 100.0))) THEN
      strAI.interval := _statusAi.HL;
  ELSE 
      strAI.interval := _statusAi.normal;
  END_IF;

  IF NOT strAI.imit THEN	
  	(* Расчет апертурного фильтра*)
  	ap := strAI.aperturFilter * 0.01 * (strAI.HL - strAI.LL);
  	IF strAI.aperturFilter <> 0.0 THEN raznitsa := strAI.value- _lastValue;
  		IF 	raznitsa < 0.0 	THEN 	rABS := -raznitsa; 		ELSE 	rABS := raznitsa; 		END_IF;
  		IF 	rABS > ap 	THEN 	strAI.value := strAI.value;	ELSE 	strAI.value := _lastValue; 	END_IF;
  	END_IF;

  	(* Расчет экпоненциального фильтра*)
  	IF strAI.exponentialFilter <> 0.0 THEN strAI.value := (strAI.exponentialFilter * strAI.value) + ((1.0 - strAI.exponentialFilter) * _lastValue); END_IF;
  ELSE
  	strAI.interval := _statusAi.normal;
  END_IF;

  IF notReliable THEN strAI.interval := _statusAi.NOTRELIABLE; END_IF;

  IF NOT notReliable THEN
  	IF strAI.interval >= _statusAi.normal THEN		
  		strAI.interval := _statusAi.NOTDEFINED;
  		h := strAI.histeresis* 0.01 * (strAI.HL-strAI.LL);
  		(*определение выхода за аппаратные границы вынесено в GetData.здесь только для нужд имитации*)
  		IF strAI.imit THEN
  			mismatch := strAI.rassoglasovanie * 0.01 * (strAI.HL - strAI.LL);	
  			IF ( strAI.value < strAI.LL - mismatch)   THEN strAI.interval := _statusAi.LL;
  			ELSIF  (strAI.value > strAI.Hl + mismatch) THEN strAI.interval := _statusAi.HL; END_IF;
  		ELSE
  			strAI.interval := _statusAi.normal;
  			IF strAI.ISVALIDREF_LA AND NOT strAI.Disabled_LA AND (strAI.interval = _statusAi.normal) THEN
  				IF (strAI.value  < strAI.LA) OR ((strAI.interval = _statusAi.LA)  AND ((strAI.value - h) < strAI.LA))  THEN 
  					strAI.interval := _statusAi.LA;
  				END_IF;
  			END_IF;
  			IF strAI.ISVALIDREF_HA  AND NOT strAI.Disabled_HA AND (strAI.interval = _statusAi.normal)  THEN
  				IF (strAI.value > strAI.HA) OR ((strAI.interval = _statusAi.HA)  AND ((strAI.value + h) > strAI.HA))  THEN 
  					strAI.interval := _statusAi.HA;
  				END_IF;
  			END_IF;
  			IF strAI.ISVALIDREF_LW AND NOT strAI.Disabled_LW AND (strAI.interval = _statusAi.normal)  THEN
  				IF (strAI.value < strAI.LW) OR ((strAI.interval = _statusAi.LW)  AND ((strAI.value - h) < strAI.LW)) THEN 
  					strAI.interval := _statusAi.LW;
  				END_IF;
  			END_IF;
  			IF strAI.ISVALIDREF_HW AND NOT strAI.Disabled_HW  AND (strAI.interval = _statusAi.normal) THEN
  				IF (strAI.value > strAI.HW)  OR ((strAI.interval = _statusAi.HW)  AND ((strAI.value + h) > strAI.HW))   THEN 
  					strAI.interval := _statusAi.HW;
  				END_IF;
  			END_IF;	
  		END_IF;
  	END_IF;
  ELSE
  	strAI.interval := _statusAi.NOTRELIABLE;
  END_IF;

  IF strAI.remont THEN strAI.interval := _statusAi.NOTDEFINED; END_IF;

  (* ---- Если управление с ВУ заблокировано, то  передаем команду из алгоритма ---- *)
  IF strAI.inOpcCommandsDisabled THEN
  	strAI.inCommand := strAI.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	strAI.inCommand := strAI.inCommand_ARM;
  END_IF;

  _sunpackerCommand(command := strAI.inCommand);
  	source := _sunpackerCommand.source;
  	parametr := _sunpackerCommand.parametr;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND lastCmd <> cmd and (((NOT strAI.opcCommandsDisabled) AND source > 0) OR source = 0) then
  	CASE BYTE_TO_INT(cmd) OF
  	(*cmd_SetUstavki*) 1 : 
  				IF ((parametr AND _AnalogLimitFlags.LL) <> 0)		             	THEN 	strAI.LL := strAI.dLL; END_IF;
  				IF ((parametr AND _AnalogLimitFlags.HL) <> 0)		 	          THEN	strAI.HL := strAI.dHL; END_IF;
  				IF ((parametr AND _AnalogLimitFlags.LA) <> 0) AND strAI.ISVALIDREF_LA 	THEN	strAI.LA := strAI.dLA; END_IF;
  				IF ((parametr AND _AnalogLimitFlags.HA) <> 0) AND strAI.ISVALIDREF_HA 	THEN	strAI.HA := strAI.dHA; END_IF;
  				IF ((parametr AND _AnalogLimitFlags.LW) <> 0) AND strAI.ISVALIDREF_LW 	THEN	strAI.LW := strAI.dLW; END_IF;
  				IF ((parametr AND _AnalogLimitFlags.HW) <> 0) AND strAI.ISVALIDREF_HW 	THEN	strAI.HW := strAI.dHW; END_IF;
                                          IF ((parametr AND _AnalogLimitFlags.SipUP) <> 0)                       	THEN	strAI.MaxChangeSpeed     := strAI.dMaxChangeSpeed;     END_IF;
  				IF ((parametr AND _AnalogLimitFlags.SipDown) <> 0)                      	THEN	strAI.MaxChangeSpeedDown := strAI.dMaxChangeSpeedDown; END_IF;

  	(*cmd_SetRemont*) 6 : 
  				strAI.remont := TRUE;
  	(*cmd_ResetRemont*) 7 : 
  				strAI.remont := FALSE;
  	(*cmd_kvitNotReliable*) 4 : 
  				notReliable := FALSE;
  	END_CASE;
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	command_error_for_Status := 0;
  	resetCmdTimer(IN := FALSE);
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

  strAI.NS_Min := (strAI.value < strAI.minValue) AND strAI.minValue_ISVALIDREF;
  strAI.NS_Max := (strAI.value > strAI.maxValue) AND strAI.maxValue_ISVALIDREF;

  strAI.NS := (strAI.interval <= _statusAi.normal) AND NOT strAI.remont;

  Normal_trig(CLK := strAI.interval >= _statusAi.normal);

  IF NOT Normal_trig.Q THEN
  	_LastValueTimer(PT := T#1S);
  	IF (strAI.value<>_lastValue) OR _LastValueTimer.Q THEN
  		IF (_LastValueTimer.ET>T#0MS) THEN
  			strAI.ChangeSpeed:=(strAI.value-_lastValue)/(TIME_TO_LREAL(_LastValueTimer.ET));
  		END_IF;
  		_LastValueTimer(IN:=FALSE);

  		_LastValueTimer(IN:=TRUE);
  	END_IF;
  END_IF;
  _lastValue := strAI.value;

  IF ((strAI.maxChangeSpeed<>0.0) OR  (strAI.maxChangeSpeedDown<>0.0)) AND ( strAI.interval>=_statusAi.normal) THEN	
  		IF (strAI.ChangeSpeed>0.0) THEN
  		    IF (strAI.ChangeSpeed > strAI.maxChangeSpeed) AND (strAI.maxChangeSpeed>0.0000001) THEN
  			 notReliable:=TRUE;
  		    END_IF;
  		ELSE
  		    IF (ABS(strAI.ChangeSpeed)>strAI.maxChangeSpeedDown) AND (strAI.maxChangeSpeedDown>0.0000001)  THEN
                                 notReliable:=TRUE; 
  		    END_IF;
  		END_IF;

  END_IF;

  strAI.status := SHL(BYTE_TO_DWORD(source_for_Status), 29) 		              (* Источник команды *)
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 	    (* Команда *)
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)   (* Ошибка команды *)
  			OR SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21) (* Управление в ВУ заблокировано *)
  			OR SHL(BOOL_TO_DWORD(strAI.Disabled_HA), 9)		    (* ВА исключена из формирования интервала *)
  			OR SHL(BOOL_TO_DWORD(strAI.Disabled_LA), 8)		    (* НА исключена из формирования интервала *)
  			OR SHL(BOOL_TO_DWORD(strAI.Disabled_HW), 7)		    (* ВП исключена из формирования интервала *)
  			OR SHL(BOOL_TO_DWORD(strAI.Disabled_LW), 6)	              (* НП исключена из формирования интервала *)
  			OR SHL(BOOL_TO_DWORD(strAI.NS), 5)			    (* неиспарвность сигнала *)
  			OR SHL(BOOL_TO_DWORD(strAI.remont), 4)	              (* Выведен в ремонт *)
  			OR BYTE_TO_DWORD(strAI.interval);	              (* интервал *)
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AiSourceMlp_timer
  VAR_INPUT
    arAIN : TItemAIN;
    err_mod : TItemDIN;
  END_VAR
  VAR_IN_OUT
    strAI : struct_AI;
  END_VAR
  VAR RETAIN
    retainLL : LREAL;
    retainHL : LREAL;
    retainLA : LREAL;
    retainHA : LREAL;
    retainLW : LREAL;
    retainHW : LREAL;
  END_VAR
  VAR
    _statusAi : TYPE_StatusAi;
    _commandAnalog : TYPE_CommandAnalog;
    _sunpackerCommand : fb_sunpackerCommand;
    _AnalogLimitFlags : TYPE_AnalogLimitFlags;
    notReliable : BOOL;
    _lastValue : LREAL;
    resetCmdTimer : TON;
    _LastValueTimer : TON;
    resetCmdTimerPriznak : BOOL;
    k : LREAL;
    b : LREAL;
    ap : LREAL;
    raznitsa : LREAL;
    rABS : LREAL;
    h : LREAL;
    mismatch : LREAL;
    parametr : BYTE;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    secondTakt : BOOL;
    off_trig : R_TRIG;
    on_trig : R_TRIG;
    remont_trig : R_TRIG;
    LL_trig : R_TRIG;
    HL_trig : R_TRIG;
    Normal_trig : R_TRIG;
    Nedostover_trig : R_TRIG;
    timerLA : TON;
    timerHA : TON;
    timerLW : TON;
    timerHW : TON;
  END_VAR

  strAI.opcCommandsDisabled := strAI.inopcCommandsDisabled ;

  (* ---- При первом пуске принимаем значение уставок ---- *)
  IF NOT secondTakt THEN
            IF (strAI.dLL <> retainLL) AND (retainLL <> 0.0) THEN  strAI.LL := retainLL;
            ELSE strAI.LL := strAI.dLL; END_IF;
  	IF (strAI.dHL <> retainHL) AND (retainHL <> 0.0) THEN  strAI.HL := retainHL;
            ELSE strAI.HL := strAI.dHL; END_IF;

            IF strAI.ISVALIDREF_HA AND (strAI.dHA <> retainHA) AND (retainHA <> 0.0) THEN  strAI.HA := retainHA;
            ELSE strAI.HA := strAI.dHA; END_IF;

            IF strAI.ISVALIDREF_LA AND (strAI.dLA <> retainLA) AND (retainLA <> 0.0) THEN  strAI.LA := retainLA;
            ELSE strAI.LA := strAI.dLA; END_IF;

            IF strAI.ISVALIDREF_HW AND (strAI.dHW <> retainHW) AND (retainHW <> 0.0) THEN  strAI.HW := retainHW;
            ELSE strAI.HW := strAI.dHW; END_IF;

            IF strAI.ISVALIDREF_LW AND (strAI.dLW <> retainLW) AND (retainLW <> 0.0) THEN  strAI.LW := retainLW;
            ELSE strAI.LW := strAI.dLW; END_IF;	

  	secondTakt  := TRUE;
  END_IF;

  (* ---- пересчет тока в физ величину ---- *)
  k := (strAI.HL - strAI.LL)/(strAI.inpHl - strAI.inpLL);
  b := strAI.LL - k * strAI.inpLL;
  strAI.value := k * arAIN.dblValue + b;

  (* ---- определение обрыва и кз ----- *)

  strAI.blConnect := true;(*(UINT_TO_WORD(arAIN.wFlags) = 1472) and (UINT_TO_WORD(err_mod.wValue) = 20) and (UINT_TO_WORD(err_mod.wFlags) = 192); *)
  IF NOT strAI.blConnect THEN 
      strAI.interval := _statusAi.NOTDEFINED;
  ELSIF ((arAIN.dblValue < strAI.currentBreakCircuit) AND (strAI.currentBreakCircuit > 0.0)) OR ((strAI.interval = _statusAi.LL) AND (arAIN.dblValue < (strAI.currentBreakCircuit + 100.0))) THEN
      strAI.interval := _statusAi.LL;
  ELSIF ((arAIN.dblValue > strAI.currentShotCircuit) AND (strAI.currentShotCircuit > 0.0)) OR ((strAI.interval = _statusAi.HL) AND (arAIN.dblValue > (strAI.currentShotCircuit - 100.0))) THEN
      strAI.interval := _statusAi.HL;
  ELSE 
      strAI.interval := _statusAi.normal;
  END_IF;

  IF NOT strAI.imit THEN	
  	(* Расчет апертурного фильтра*)
  	ap := strAI.aperturFilter * 0.01 * (strAI.HL - strAI.LL);
  	IF strAI.aperturFilter <> 0.0 THEN raznitsa := strAI.value- _lastValue;
  		IF 	raznitsa < 0.0 	THEN 	rABS := -raznitsa; 		ELSE 	rABS := raznitsa; 		END_IF;
  		IF 	rABS > ap 	THEN 	strAI.value := strAI.value;	ELSE 	strAI.value := _lastValue; 	END_IF;
  	END_IF;

  	(* Расчет экпоненциального фильтра*)
  	IF strAI.exponentialFilter <> 0.0 THEN strAI.value := (strAI.exponentialFilter * strAI.value) + ((1.0 - strAI.exponentialFilter) * _lastValue); END_IF;
  ELSE
  	strAI.interval := _statusAi.normal;
  END_IF;

  IF notReliable THEN strAI.interval := _statusAi.NOTRELIABLE; END_IF;

  IF NOT notReliable THEN
  	IF strAI.interval >= _statusAi.normal THEN		
  		strAI.interval := _statusAi.NOTDEFINED;
  		h := strAI.histeresis* 0.01 * (strAI.HL-strAI.LL);
  		(*определение выхода за аппаратные границы вынесено в GetData.здесь только для нужд имитации*)
  		IF strAI.imit THEN
  			mismatch := strAI.rassoglasovanie * 0.01 * (strAI.HL - strAI.LL);	
  			IF ( strAI.value < strAI.LL - mismatch)   THEN strAI.interval := _statusAi.LL;
  			ELSIF  (strAI.value > strAI.Hl + mismatch) THEN strAI.interval := _statusAi.HL; END_IF;
  		ELSE
  			strAI.interval := _statusAi.normal;
  			IF strAI.ISVALIDREF_LA AND NOT strAI.Disabled_LA AND (strAI.interval = _statusAi.normal) THEN
                                timerLA(IN:=(strAI.value  < strAI.LA) OR ((strAI.interval = _statusAi.LA)  AND ((strAI.value - h) < strAI.LA)), PT:=strAI.delayLA);
  				IF timerLA.Q  THEN 
  					strAI.interval := _statusAi.LA;
  				END_IF;
  			END_IF;
  			IF strAI.ISVALIDREF_HA  AND NOT strAI.Disabled_HA AND (strAI.interval = _statusAi.normal)  THEN
                                timerHA(IN:=(strAI.value > strAI.HA) OR ((strAI.interval = _statusAi.HA)  AND ((strAI.value + h) > strAI.HA)), PT:=strAI.delayHA);
  				IF timerHA.Q  THEN 
  					strAI.interval := _statusAi.HA;
  				END_IF;
  			END_IF;
  			IF strAI.ISVALIDREF_LW AND NOT strAI.Disabled_LW AND (strAI.interval = _statusAi.normal)  THEN
                                timerLW(IN:=(strAI.value < strAI.LW) OR ((strAI.interval = _statusAi.LW)  AND ((strAI.value - h) < strAI.LW)), PT:=strAI.delayLW);
  				IF timerLW.Q THEN 
  					strAI.interval := _statusAi.LW;
  				END_IF;
  			END_IF;
  			IF strAI.ISVALIDREF_HW AND NOT strAI.Disabled_HW  AND (strAI.interval = _statusAi.normal) THEN
                                timerHW(IN:=(strAI.value > strAI.HW)  OR ((strAI.interval = _statusAi.HW)  AND ((strAI.value + h) > strAI.HW)), PT:=strAI.delayHW);
  				IF  timerHW.Q  THEN 
  					strAI.interval := _statusAi.HW;
  				END_IF;
  			END_IF;	
  		END_IF;
  	END_IF;
  ELSE
  	strAI.interval := _statusAi.NOTRELIABLE;
  END_IF;

  IF strAI.remont THEN strAI.interval := _statusAi.NOTDEFINED; END_IF;

  _sunpackerCommand(command := strAI.inCommand);
  	source := _sunpackerCommand.source;
  	parametr := _sunpackerCommand.parametr;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND lastCmd <> cmd and (((NOT strAI.opcCommandsDisabled) AND source > 0) OR source = 0) then
  	CASE BYTE_TO_INT(cmd) OF
  	(*cmd_SetUstavki*) 1 : 
  				IF ((parametr AND _AnalogLimitFlags.LL) <> 0)		             	THEN 	strAI.LL := strAI.dLL; retainLL:= strAI.LL; END_IF;
  				IF ((parametr AND _AnalogLimitFlags.HL) <> 0)		 	          THEN	strAI.HL := strAI.dHL; retainHL:= strAI.HL; END_IF;
  				IF ((parametr AND _AnalogLimitFlags.LA) <> 0) AND strAI.ISVALIDREF_LA 	THEN	strAI.LA := strAI.dLA; retainLA:= strAI.LA; END_IF;
  				IF ((parametr AND _AnalogLimitFlags.HA) <> 0) AND strAI.ISVALIDREF_HA 	THEN	strAI.HA := strAI.dHA; retainHA:= strAI.HA; END_IF;
  				IF ((parametr AND _AnalogLimitFlags.LW) <> 0) AND strAI.ISVALIDREF_LW 	THEN	strAI.LW := strAI.dLW; retainLW:= strAI.LW; END_IF;
  				IF ((parametr AND _AnalogLimitFlags.HW) <> 0) AND strAI.ISVALIDREF_HW 	THEN	strAI.HW := strAI.dHW; retainHW:= strAI.HW; END_IF;
  	(*cmd_SetRemont*) 2 : 
  				strAI.remont := TRUE;
  	(*cmd_ResetRemont*) 3 : 
  				strAI.remont := FALSE;
  	(*cmd_kvitNotReliable*) 4 : 
  				notReliable := FALSE;
  	END_CASE;
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	command_error_for_Status := 0;
  	resetCmdTimer(IN := FALSE);
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

  strAI.NS_Min := (strAI.value < strAI.minValue) AND strAI.minValue_ISVALIDREF;
  strAI.NS_Max := (strAI.value > strAI.maxValue) AND strAI.maxValue_ISVALIDREF;

  strAI.NS := (strAI.interval <= _statusAi.normal) AND NOT strAI.remont;

  Normal_trig(CLK := strAI.interval >= _statusAi.normal);

  IF NOT Normal_trig.Q THEN
  	_LastValueTimer(PT := T#1S);
  	IF (strAI.value<>_lastValue) OR _LastValueTimer.Q THEN
  		IF (_LastValueTimer.ET>T#0MS) THEN
  			strAI.ChangeSpeed:=(strAI.value-_lastValue)/(TIME_TO_LREAL(_LastValueTimer.ET)/1000.0);
  		END_IF;
  		_LastValueTimer(IN:=FALSE);

  		_LastValueTimer(IN:=TRUE);
  	END_IF;
  END_IF;
  _lastValue := strAI.value;

  IF ((strAI.maxChangeSpeed<>0.0) OR  (strAI.maxChangeSpeedDown<>0.0)) AND ( strAI.interval>=_statusAi.normal) THEN	
  		IF (strAI.ChangeSpeed>0.0) THEN
  		    IF (strAI.ChangeSpeed > strAI.maxChangeSpeed) AND (strAI.maxChangeSpeed>0.0000001) THEN
  			 notReliable:=TRUE;
  		    END_IF;
  		ELSE
  		    IF (ABS(strAI.ChangeSpeed)>strAI.maxChangeSpeedDown) AND (strAI.maxChangeSpeedDown>0.0000001)  THEN
                                 notReliable:=TRUE; 
  		    END_IF;
  		END_IF;

  END_IF;

  strAI.status := SHL(BYTE_TO_DWORD(source_for_Status), 29) 		              (* Источник команды *)
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 	    (* Команда *)
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)   (* Ошибка команды *)
  			OR SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21) (* Управление в ВУ заблокировано *)
  			OR SHL(BOOL_TO_DWORD(strAI.Disabled_HA), 9)		    (* ВА исключена из формирования интервала *)
  			OR SHL(BOOL_TO_DWORD(strAI.Disabled_LA), 8)		    (* НА исключена из формирования интервала *)
  			OR SHL(BOOL_TO_DWORD(strAI.Disabled_HW), 7)		    (* ВП исключена из формирования интервала *)
  			OR SHL(BOOL_TO_DWORD(strAI.Disabled_LW), 6)	              (* НП исключена из формирования интервала *)
  			OR SHL(BOOL_TO_DWORD(strAI.NS), 5)			    (* неиспарвность сигнала *)
  			OR SHL(BOOL_TO_DWORD(strAI.remont), 4)	              (* Выведен в ремонт *)
  			OR BYTE_TO_DWORD(strAI.interval);	              (* интервал *)
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_AI
  VAR
    fb_TStalisStatoraKanal1 : fb_AiSourceMlp;
    fb_TStalisStatoraKanal2 : fb_AiSourceMlp;
    fb_TStalisStatoraKanal3 : fb_AiSourceMlp;
    fb_TMediStatoraKanal1 : fb_AiSourceMlp;
    fb_TMediStatoraKanal2 : fb_AiSourceMlp;
    fb_TMediStatoraKanal3 : fb_AiSourceMlp;
    fb_TOpornogoPodshipnikaEDT_1 : fb_AiSourceMlp;
    fb_TOpornoYpornogoPodshipnikaEDT_2 : fb_AiSourceMlp;
    fb_TOpornoYpornogoPodshipnikaKolesaRedEDT_3 : fb_AiSourceMlp;
    fb_TOpornoYpornogoPodshipnikaKolesaRedHT_4 : fb_AiSourceMlp;
    fb_TOpornogoPodshipnikaShesterniReduktoraT_5 : fb_AiSourceMlp;
    fb_TOpornogoPodshipnikaReduktoraHT_6 : fb_AiSourceMlp;
    fb_TOpornoYpornogoPodshipnikaNagnetateljaT_7_1 : fb_AiSourceMlp;
    fb_TOpornoYpornogoPodshipnikaNagnetateljaT_7_2 : fb_AiSourceMlp;
    fb_TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1 : fb_AiSourceMlp;
    fb_TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2 : fb_AiSourceMlp;
    fb_TYpornogoPodshipnikaRabKolodokHT_9_1 : fb_AiSourceMlp;
    fb_TYpornogoPodshipnikaRabKolodokHT_9_2 : fb_AiSourceMlp;
    fb_TYpornogoPodshipnikYstanKolodokHT_10_1 : fb_AiSourceMlp;
    fb_TYpornogoPodshipnikYstanKolodokHT_10_2 : fb_AiSourceMlp;
    fb_THolodnogoVozduhaEDKanall : fb_AiSourceMlp;
    fb_THolodnogoVozduhaEDKanal2 : fb_AiSourceMlp;
    fb_TGorjachegoVozduhaEDKanall : fb_AiSourceMlp;
    fb_TGorjachegoVozduhaEDKanal2 : fb_AiSourceMlp;
    fb_TNArujnogoVozduha : fb_AiSourceMlp;
    fb_TgazaNaVhodeH : fb_AiSourceMlp_timer;
    fb_TgazaNaVyhodeH : fb_AiSourceMlp;
    fb_TMasladoAVOM : fb_AiSourceMlp;
    fb_TMaslaPosleAVOM : fb_AiSourceMlp;
    fb_TMaslaMB : fb_AiSourceMlp;
    fb_TEmperatura_v_SHU : fb_AiSourceMlp_timer;
    fb_DavlenijaMasloSmNizkoe : fb_AiSourceMlp;
    fb_PerepadDavlenieNaMasloFiltre : fb_AiSourceMlp;
    fb_DavlenijaMasloSmVysokoe : fb_AiSourceMlp;
    fb_DavlenijaMaslaPosleGNS : fb_AiSourceMlp;
    fb_DavlenijaMaslaPosleNU : fb_AiSourceMlp;
    fb_PerepadDavlenieNaKonfuzore : fb_AiSourceMlp;
    fb_OsSdvigNagnetatelja_Plus : fb_AiSourceMlp;
    fb_OsSdvigNagnetatelja_Minus : fb_AiSourceMlp;
    fb_PerepadDavlenieMasloGaz : fb_AiSourceMlp;
    fb_VibroSkorostOYPKolesaED_T3 : fb_AiSourceMlp;
    fb_DGazaNaVhodeNagnetatelja : fb_AiSourceMlp;
    fb_DGazaNaVyhodeNagnetatelja : fb_AiSourceMlp;
    fb_DavlenieImpulsGaz : fb_AiSourceMlp;
    fb_YrovenMaslaMB : fb_AiSourceMlp;
    fb_Kontrol_per220V : fb_AiSourceMlp;
    fb_Kontrol_post220V : fb_AiSourceMlp;
    fb_TMaslaMB_TEN : fb_AiSourceMlp;
    fb_VibroSkorostOPED_T1 : fb_AiSourceMlp;
    fb_VibroSkorostOYPED_T2 : fb_AiSourceMlp;
    fb_VibroSkorostOPKolesaRH_T4 : fb_AiSourceMlp;
    fb_VibroSkorostOPShesterniRED_T5 : fb_AiSourceMlp;
    fb_VibroSkorostOPShesterniReduktoraH_T6 : fb_AiSourceMlp;
    fb_TokStatora : fb_AiSourceMlp;
  END_VAR
  VAR_EXTERNAL
    arAIN_0 : TItemAIN;
    arAIN_1 : TItemAIN;
    arAIN_2 : TItemAIN;
    arAIN_3 : TItemAIN;
    arAIN_4 : TItemAIN;
    arAIN_5 : TItemAIN;
    arAIN_6 : TItemAIN;
    arAIN_7 : TItemAIN;
    arAIN_8 : TItemAIN;
    arAIN_9 : TItemAIN;
    arAIN_10 : TItemAIN;
    arAIN_11 : TItemAIN;
    arAIN_12 : TItemAIN;
    arAIN_13 : TItemAIN;
    arAIN_14 : TItemAIN;
    arAIN_15 : TItemAIN;
    ai : AiConfig;
    arAIN_16 : TItemAIN;
    arAIN_17 : TItemAIN;
    arAIN_18 : TItemAIN;
    arAIN_19 : TItemAIN;
    arAIN_20 : TItemAIN;
    arAIN_21 : TItemAIN;
    arAIN_22 : TItemAIN;
    arAIN_23 : TItemAIN;
    arAIN_24 : TItemAIN;
    arAIN_25 : TItemAIN;
    arAIN_26 : TItemAIN;
    arAIN_27 : TItemAIN;
    arAIN_28 : TItemAIN;
    arAIN_29 : TItemAIN;
    arAIN_30 : TItemAIN;
    arAIN_31 : TItemAIN;
    arAIN_32 : TItemAIN;
    arAIN_33 : TItemAIN;
    arAIN_34 : TItemAIN;
    arAIN_35 : TItemAIN;
    arAIN_36 : TItemAIN;
    arAIN_37 : TItemAIN;
    arAIN_38 : TItemAIN;
    arAIN_39 : TItemAIN;
    arAIN_40 : TItemAIN;
    arAIN_41 : TItemAIN;
    arAIN_42 : TItemAIN;
    arAIN_43 : TItemAIN;
    arAIN_44 : TItemAIN;
    arAIN_45 : TItemAIN;
    arAIN_46 : TItemAIN;
    arAIN_47 : TItemAIN;
    arAIN_48 : TItemAIN;
    arAIN_49 : TItemAIN;
    arAIN_50 : TItemAIN;
    arAIN_51 : TItemAIN;
    arAIN_52 : TItemAIN;
    arAIN_53 : TItemAIN;
    arAIN_54 : TItemAIN;
    arAIN_55 : TItemAIN;
    arERR_3 : TItemDIN;
    arERR_4 : TItemDIN;
    arERR_5 : TItemDIN;
    arERR_6 : TItemDIN;
    arERR_7 : TItemDIN;
    arERR_8 : TItemDIN;
    arERR_9 : TItemDIN;
    A1_10_err_mode : UINT;
    A1_11_err_mode : UINT;
    A1_4_err_mode : UINT;
    A1_5_err_mode : UINT;
    A1_6_err_mode : UINT;
    A1_7_err_mode : UINT;
    A1_8_err_mode : UINT;
    A1_9_err_mode : UINT;
    A2_2_err_mode : UINT;
    A2_3_err_mode : UINT;
    AI_0_dblValue : LREAL;
    AI_10_dblValue : LREAL;
    AI_11_dblValue : LREAL;
    AI_12_dblValue : LREAL;
    AI_13_dblValue : LREAL;
    AI_14_dblValue : LREAL;
    AI_15_dblValue : LREAL;
    AI_16_dblValue : LREAL;
    AI_17_dblValue : LREAL;
    AI_18_dblValue : LREAL;
    AI_19_dblValue : LREAL;
    AI_1_dblValue : LREAL;
    AI_20_dblValue : LREAL;
    AI_21_dblValue : LREAL;
    AI_22_dblValue : LREAL;
    AI_23_dblValue : LREAL;
    AI_24_dblValue : LREAL;
    AI_25_dblValue : LREAL;
    AI_26_dblValue : LREAL;
    AI_27_dblValue : LREAL;
    AI_28_dblValue : LREAL;
    AI_29_dblValue : LREAL;
    AI_2_dblValue : LREAL;
    AI_30_dblValue : LREAL;
    AI_31_dblValue : LREAL;
    AI_32_dblValue : LREAL;
    AI_33_dblValue : LREAL;
    AI_34_dblValue : LREAL;
    AI_35_dblValue : LREAL;
    AI_36_dblValue : LREAL;
    AI_37_dblValue : LREAL;
    AI_38_dblValue : LREAL;
    AI_39_dblValue : LREAL;
    AI_3_dblValue : LREAL;
    AI_40_dblValue : LREAL;
    AI_41_dblValue : LREAL;
    AI_42_dblValue : LREAL;
    AI_43_dblValue : LREAL;
    AI_44_dblValue : LREAL;
    AI_45_dblValue : LREAL;
    AI_46_dblValue : LREAL;
    AI_47_dblValue : LREAL;
    AI_48_dblValue : LREAL;
    AI_49_dblValue : LREAL;
    AI_4_dblValue : LREAL;
    AI_50_dblValue : LREAL;
    AI_51_dblValue : LREAL;
    AI_52_dblValue : LREAL;
    AI_53_dblValue : LREAL;
    AI_54_dblValue : LREAL;
    AI_55_dblValue : LREAL;
    AI_56_dblValue : LREAL;
    AI_57_dblValue : LREAL;
    AI_58_dblValue : LREAL;
    AI_59_dblValue : LREAL;
    AI_5_dblValue : LREAL;
    AI_60_dblValue : LREAL;
    AI_61_dblValue : LREAL;
    AI_62_dblValue : LREAL;
    AI_63_dblValue : LREAL;
    AI_64_dblValue : LREAL;
    AI_65_dblValue : LREAL;
    AI_66_dblValue : LREAL;
    AI_67_dblValue : LREAL;
    AI_68_dblValue : LREAL;
    AI_69_dblValue : LREAL;
    AI_6_dblValue : LREAL;
    AI_70_dblValue : LREAL;
    AI_71_dblValue : LREAL;
    AI_72_dblValue : LREAL;
    AI_73_dblValue : LREAL;
    AI_74_dblValue : LREAL;
    AI_75_dblValue : LREAL;
    AI_76_dblValue : LREAL;
    AI_77_dblValue : LREAL;
    AI_78_dblValue : LREAL;
    AI_79_dblValue : LREAL;
    AI_7_dblValue : LREAL;
    AI_8_dblValue : LREAL;
    AI_9_dblValue : LREAL;
  END_VAR

  (* Циклический опрос. Входные аналоговые параметры *)

  (* [A1-9, AI5-4]  dР газа на конфузоре *)
  fb_PerepadDavlenieNaKonfuzore(arAIN := arAIN_0, strAI := ai.dPgaza_na_konfuzore, err_mod:=arERR_8);
  AI_0_dblValue := arAIN_0.dblValue;

  (* [A1-9, AI5-0] dР масла на масляном фильтре *)
  fb_PerepadDavlenieNaMasloFiltre(arAIN := arAIN_1, strAI := ai.dPgaza_na_maslo_filtre, err_mod:=arERR_8);
  AI_1_dblValue := arAIN_1.dblValue;

  (* [A1-9, AI5-7]  dР масло-газ *)
  fb_PerepadDavlenieMasloGaz(arAIN := arAIN_2, strAI := ai.dPmaslo_gaz, err_mod:=arERR_8);
  AI_2_dblValue := arAIN_2.dblValue;

  (* [A1-10, AI6-2] Р газа на входе нагнетателя *)
  fb_DGazaNaVhodeNagnetatelja(arAIN := arAIN_3, strAI := ai.Pgaza_na_vhode_nagnetatelia, err_mod:=arERR_9);
  AI_3_dblValue := arAIN_3.dblValue;

  (* [A1-10, AI6-3] Р газа на выходе нагнетателя *)
  fb_DGazaNaVyhodeNagnetatelja(arAIN := arAIN_4, strAI := ai.Pgaza_na_vyhode_nagnetatelia, err_mod:=arERR_9);
  AI_4_dblValue := arAIN_4.dblValue;

  (* [A1-9, AI5-3]  Р масла после НУ *)
  fb_DavlenijaMaslaPosleNU(arAIN := arAIN_5, strAI := ai.Pmasla_posle_NU, err_mod:=arERR_8);
  AI_5_dblValue := arAIN_5.dblValue;

  (* [A1-8, AI4-6]  Р масла смазки низкое) *)
  fb_DavlenijaMasloSmNizkoe(arAIN := arAIN_6, strAI := ai.Pmaslo_sm_nizkoe, err_mod:=arERR_7);
  AI_6_dblValue := arAIN_6.dblValue;

  (* [A1-9, AI5-2]  Р масла смазки после ГМНС *)
  fb_DavlenijaMaslaPosleGNS(arAIN := arAIN_7, strAI := ai.Pmasla_posle_GNS, err_mod:=arERR_8);
  AI_7_dblValue := arAIN_7.dblValue;

  (* [A1-9, AI5-1]  Р масла смазки высокое *)
  fb_DavlenijaMasloSmVysokoe(arAIN := arAIN_8, strAI := ai.Pmaslo_sm_vysokoe, err_mod:=arERR_8);
  AI_8_dblValue := arAIN_8.dblValue;

  (* [A1-7, AI3-2] Т наружного воздуха *)
  fb_TNArujnogoVozduha(arAIN := arAIN_9, strAI := ai.Tnarujnogo_vozduha, err_mod:=arERR_6);
  AI_9_dblValue := arAIN_9.dblValue;

  (* [A1-8, AI4-0]  Т газа на входе нагнетателя *)
  fb_TgazaNaVhodeH(arAIN := arAIN_10, strAI := ai.Tgaza_na_vhode_H, err_mod:=arERR_7);
  AI_10_dblValue := arAIN_10.dblValue;

  (* [A1-8, AI4-1] Т газа на выходе нагнетателя *)
  fb_TgazaNaVyhodeH(arAIN := arAIN_11, strAI := ai.Tgaza_na_vyhode_H, err_mod:=arERR_7);
  AI_11_dblValue := arAIN_11.dblValue;

  (* [A1-6, AI2-7]  Т горячего воздуха в ЭД, точка 1 *)
  fb_TGorjachegoVozduhaEDKanall(arAIN := arAIN_12, strAI := ai.Tgorjachego_vozduha_ED_kanal_1, err_mod:=arERR_5);
  AI_12_dblValue := arAIN_12.dblValue;

  (* [A1-7, AI3-0] Т горячего воздуха в ЭД, точка 2 *)
  fb_TGorjachegoVozduhaEDKanal2(arAIN := arAIN_13, strAI := ai.Tgorjachego_vozduha_ED_kanal_2, err_mod:=arERR_6);
  AI_13_dblValue := arAIN_13.dblValue;

  (* [A1-8, AI4-4] Т масла в маслобаке *)
  fb_TMaslaMB(arAIN := arAIN_14, strAI := ai.Tmasla_MB, err_mod:=arERR_7);
  AI_14_dblValue := arAIN_14.dblValue;

  (* [A1-8, AI4-4] Т масла в маслобаке над ТЭНом *)
  fb_TMaslaMB(arAIN := arAIN_15, strAI := ai.Tmasla_MB_TEN, err_mod:=arERR_7);
  AI_15_dblValue := arAIN_15.dblValue;

  (* [A1-8, AI4-2] Т масла до АВО М *)
  fb_TMasladoAVOM(arAIN := arAIN_16, strAI := ai.Tgorjachego_vozduha_ED_kanal_2, err_mod:=arERR_7);
  AI_16_dblValue := arAIN_16.dblValue;

  (* [A1-8, AI4-3] Т масла после АВО М *)
  fb_TMaslaPosleAVOM(arAIN := arAIN_17, strAI := ai.Tmasla_posle_AVOM, err_mod:=arERR_7);
  AI_17_dblValue := arAIN_17.dblValue;

  (* [A1-4, AI0-3] Т Т меди статора фаза 1 *)
  fb_TMediStatoraKanal1(arAIN := arAIN_18, strAI := ai.Tmedi_statora_kanal_1, err_mod:=arERR_3);
  AI_18_dblValue := arAIN_18.dblValue;

  (* [A1-4, AI0-4] Т обмотки фазы 3 канал *)
  fb_TMediStatoraKanal2(arAIN := arAIN_19, strAI := ai.Tmedi_statora_kanal_2, err_mod:=arERR_3);
  AI_19_dblValue := arAIN_19.dblValue;

  (* [A1-4, AI0-5] Т меди статора фаза 2 *)
  fb_TMediStatoraKanal3(arAIN := arAIN_20, strAI := ai.Tmedi_statora_kanal_3, err_mod:=arERR_3);
  AI_20_dblValue := arAIN_20.dblValue;

  (* [A1-4, AI0-6] Т ОП ЭД со стороны свободного конца (т.1) } *)
  fb_TOpornogoPodshipnikaEDT_1(arAIN := arAIN_21, strAI := ai.Toporno_podshipnika_EDT_1, err_mod:=arERR_3);
  AI_21_dblValue := arAIN_21.dblValue;

  (* [A1-5, AI1-0]  Т ОУП ЭД со стороны редуктора (т.2) *)
  fb_TOpornoYpornogoPodshipnikaEDT_2(arAIN := arAIN_22, strAI := ai.Toporno_ypornogo_podshipnika_EDT_2, err_mod:=arERR_4);
  AI_22_dblValue := arAIN_22.dblValue;

  (* [A1-5, AI1-1]  Т ОУП колеса редуктора со стороны ЭД (т.3) *)
  fb_TOpornoYpornogoPodshipnikaKolesaRedEDT_3(arAIN := arAIN_23, strAI := ai.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3, err_mod:=arERR_4);
  AI_23_dblValue := arAIN_23.dblValue;

  (* [A1-5, AI1-2]Т ОП колеса редуктора со стороны Н (т.4) *)
  fb_TOpornoYpornogoPodshipnikaKolesaRedHT_4(arAIN := arAIN_24, strAI := ai.Toporno_ypornogo_podshipnika_kolesa_red_HT_4, err_mod:=arERR_4);
  AI_24_dblValue := arAIN_24.dblValue;

  (* [A1-5, AI1-3] Т ОП шестерни редуктора со стороны ЭД (т.5) *)
  fb_TOpornogoPodshipnikaShesterniReduktoraT_5(arAIN := arAIN_25, strAI := ai.Toporno_podshipnika_shesterni_reduktora_T_5, err_mod:=arERR_4);
  AI_25_dblValue := arAIN_25.dblValue;

  (* [A1-5, AI1-4]  Т ОП шестерни редуктора со стороны Н (т.6) *)
  fb_TOpornogoPodshipnikaReduktoraHT_6(arAIN := arAIN_26, strAI := ai.Toporno_podshipnika_reduktora_HT_6, err_mod:=arERR_4);
  AI_26_dblValue := arAIN_26.dblValue;

  (* [A1-5, AI1-5]  Т ОП Н со стороны редуктора (т.7) *)
  fb_TOpornoYpornogoPodshipnikaNagnetateljaT_7_1(arAIN := arAIN_27, strAI := ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_1, err_mod:=arERR_4);
  AI_27_dblValue := arAIN_27.dblValue;

  (* [A1-5, AI1-5]  Т ОП Н со стороны редуктора (т.7) *)
  fb_TOpornoYpornogoPodshipnikaNagnetateljaT_7_2(arAIN := arAIN_28, strAI := ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_2, err_mod:=arERR_4);
  AI_28_dblValue := arAIN_28.dblValue;

  (* [A1-5, AI1-7]  Т ОП Н со стороны свободного вала (т.8) *)
  fb_TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1(arAIN := arAIN_28, strAI := ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_1, err_mod:=arERR_4);
  AI_29_dblValue := arAIN_29.dblValue;

  (* [A1-5, AI1-7]  Т ОП Н со стороны свободного вала (т.8) *)
  fb_TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2(arAIN := arAIN_28, strAI := ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_2, err_mod:=arERR_4);
  AI_30_dblValue := arAIN_30.dblValue;

  (* [A1-6, AI2-1]  Т УП рабочих колодок нагнетателя(т9) *)
  fb_TYpornogoPodshipnikaRabKolodokHT_9_1(arAIN := arAIN_29, strAI := ai.Typornogo_podshipnika_rav_kolodok_HT_9_1, err_mod:=arERR_5);
  AI_31_dblValue := arAIN_31.dblValue;

  (* [A1-6, AI2-1]  Т УП рабочих колодок нагнетателя(т9) *)
  fb_TYpornogoPodshipnikaRabKolodokHT_9_2(arAIN := arAIN_29, strAI := ai.Typornogo_podshipnika_rav_kolodok_HT_9_2, err_mod:=arERR_5);
  AI_32_dblValue := arAIN_32.dblValue;

  (* [A1-6, AI2-3]  Т ОП установочных колодок нагнетателя(т10) *)
  fb_TYpornogoPodshipnikYstanKolodokHT_10_1(arAIN := arAIN_30, strAI := ai.Typornogo_podshipnika_nerab_kolodok_HT_10_1, err_mod:=arERR_5);
  AI_33_dblValue := arAIN_33.dblValue;

  (* [A1-6, AI2-3]  Т ОП установочных колодок нагнетателя(т10) *)
  fb_TYpornogoPodshipnikYstanKolodokHT_10_2(arAIN := arAIN_30, strAI := ai.Typornogo_podshipnika_nerab_kolodok_HT_10_2, err_mod:=arERR_5);
  AI_34_dblValue := arAIN_34.dblValue;

  (* [A1-4, AI0-0] Т стали статора фаза 1 *)
  fb_TStalisStatoraKanal1(arAIN := arAIN_31, strAI := ai.Tstali_statora_kanal_1, err_mod:=arERR_3);
  AI_35_dblValue := arAIN_35.dblValue;

  (* [A1-4, AI0-1] Т стали статора фаза 2 *)
  fb_TStalisStatoraKanal2(arAIN := arAIN_32, strAI := ai.Tstali_statora_kanal_2, err_mod:=arERR_3);
  AI_36_dblValue := arAIN_36.dblValue;

  (* [A1-4, AI0-2] Т стали статора фаза 3 *)
  fb_TStalisStatoraKanal3(arAIN := arAIN_33, strAI := ai.Tstali_statora_kanal_3, err_mod:=arERR_3);
  AI_37_dblValue := arAIN_37.dblValue;

  (* [A1-6, AI2-5] Т холодного воздуха в ЭД, точка 1 *)
  fb_THolodnogoVozduhaEDKanall(arAIN := arAIN_34, strAI := ai.Tholodnogo_vozduha_ED_kanal_1, err_mod:=arERR_5);
  AI_38_dblValue := arAIN_38.dblValue;

  (* [A1-6, AI2-6] Т холодного воздуха в ЭД, точка 2 *)
  fb_THolodnogoVozduhaEDKanal2(arAIN := arAIN_35, strAI := ai.Tholodnogo_vozduha_ED_kanal_2, err_mod:=arERR_5);
  AI_39_dblValue := arAIN_39.dblValue;

  (* [A1-10, AI6-5] Уровень масла в маслобаке *)
  fb_YrovenMaslaMB(arAIN := arAIN_36, strAI := ai.Yroven_masla_MB, err_mod:=arERR_9);
  AI_40_dblValue := arAIN_40.dblValue;

  (* [A1-10, AI6-5] Уровень масла в маслобаке *)
  fb_VibroSkorostOPED_T1(arAIN := arAIN_37, strAI := ai.Kontrol_post_220V, err_mod:=arERR_9);
  AI_41_dblValue := arAIN_41.dblValue;

  (* [A1-10, AI6-5] Уровень масла в маслобаке *)
  fb_VibroSkorostOYPED_T2(arAIN := arAIN_38, strAI := ai.Vibro_skorost_OPED_T1, err_mod:=arERR_9);
  AI_42_dblValue := arAIN_42.dblValue;

  (* [A1-10, AI6-5] Уровень масла в маслобаке *)
  fb_VibroSkorostOPKolesaRH_T4(arAIN := arAIN_39, strAI := ai.Vibro_skorost_OP_kolesa_RH_T4, err_mod:=arERR_9);
  AI_43_dblValue := arAIN_43.dblValue;

  (* [A1-10, AI6-5] Уровень масла в маслобаке *)
  fb_VibroSkorostOPShesterniRED_T5(arAIN := arAIN_40, strAI := ai.Vibro_skorost_OP_shesterni_RED_T5, err_mod:=arERR_9);
  AI_44_dblValue := arAIN_44.dblValue;

  (* [A1-10, AI6-5] Уровень масла в маслобаке *)
  fb_VibroSkorostOPShesterniReduktoraH_T6(arAIN := arAIN_41, strAI := ai.Vibro_skorost_OP_shesterni_reduktora_H_T6, err_mod:=arERR_9);
  AI_45_dblValue := arAIN_45.dblValue;


  (**********************************************s Модуль A1-5 *********************************************************)
  A1_4_err_mode := arERR_3.wValue;
  A1_6_err_mode := arERR_5.wValue;
  A1_5_err_mode := arERR_4.wValue;
  A1_7_err_mode := arERR_6.wValue;

  (********************************************** Модуль A1-8 *********************************************************)
  (* [A1-8, AI4-5]  Температура в шкафу САУ *)
  fb_TEmperatura_v_SHU(arAIN := arAIN_42, strAI := ai.Tshu, err_mod:=arERR_7);
  AI_46_dblValue := arAIN_46.dblValue;

  (* [A1-9, AI5-5]  Вибрация ротора нагнетателя т.4 *)
  fb_OsSdvigNagnetatelja_Plus(arAIN := arAIN_43, strAI := ai.Os_sdvig_nagnetatelja_plus, err_mod:=arERR_8);
  AI_47_dblValue := arAIN_47.dblValue;

  (* [A1-9, AI5-6]  Осевой сдвиг ротора нагнетателя *)
  fb_OsSdvigNagnetatelja_Minus(arAIN := arAIN_44, strAI := ai.Os_sdvig_nagnetatelja_minus, err_mod:=arERR_8);
  AI_48_dblValue := arAIN_48.dblValue;

  A1_9_err_mode := arERR_8.wValue;


  (********************************************** Модуль A1-10 *********************************************************)
  (* [A1-10, AI6-0] Температура внутри шкафа *)
  fb_VibroSkorostOYPKolesaED_T3(arAIN := arAIN_45, strAI := ai.Vibro_skorost_OYP_kolesa_ED_T3, err_mod:=arERR_9);
  AI_49_dblValue := arAIN_49.dblValue;

  (* [A1-10, AI6-4] Активная мощность *)
  fb_DavlenieImpulsGaz(arAIN := arAIN_46, strAI := ai.Pimpuls_gaz, err_mod:=arERR_9);
  AI_50_dblValue := arAIN_50.dblValue;

  (* [A1-10, AI6-6]  Напряжение питания ШУ, основной ввод *)
  fb_Kontrol_per220V(arAIN := arAIN_47, strAI := ai.Kontrol_per_220V, err_mod:=arERR_9);
  AI_51_dblValue := arAIN_51.dblValue;

  (* [A1-10, AI6-7]  Напряжение питания ШУ, резервный ввод *)
  fb_Kontrol_post220V(arAIN := arAIN_48, strAI := ai.Kontrol_post_220V, err_mod:=arERR_9);
  AI_52_dblValue := arAIN_52.dblValue;


  A1_10_err_mode := arERR_9.wValue;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AO_Init
  VAR_INPUT
    data_Ini : BOOL;
    outLL : LREAL := 4000.0;
    outHL : LREAL := 20000.0;
    newLL : LREAL;
    newHL : LREAL;
    newLL_ISVALIDREF : BOOL;
    newHL_ISVALIDREF : BOOL;
  END_VAR
  VAR_IN_OUT
    strAO : struct_AO;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры-дескриптора канала аналогового ввода.            *****)

   Init := FALSE;

      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          strAO.outLL                := outLL;
          strAO.outHL                := outHL;
          strAO.newLL                := newLL;
          strAO.newHL                := newHL;
          strAO.newLL_ISVALIDREF     := newLL_ISVALIDREF;
          strAO.newHL_ISVALIDREF     := newHL_ISVALIDREF;
          data_Ini:=FALSE;    
          Init := TRUE;
      END_IF;
   IF Init THEN
         (* outLL:=0.0;*)
         (* outHL:=0.0;*)
          newLL:=0.0;
          newHL:=0.0;
          newLL_ISVALIDREF:= FALSE;
          newHL_ISVALIDREF:= FALSE;
   END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_AO_Init
  VAR_INPUT
    init : BOOL;
  END_VAR
  VAR
    stAO_Ini : fb_AO_Init;
    inits : UINT;
  END_VAR
  VAR_INPUT
    initiales : UINT;
  END_VAR
  VAR_EXTERNAL
    ao : AOConfig;
  END_VAR

  (* Инициализация начало. Входные аналоговые параметры *)

  inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)


  (* Модуль A10 *)
  (* [A10, AO0] Резерв (A) *)
  stAO_Ini(data_Ini := TRUE, (*outLL := 4000.0, outHL := 20000.0,*)
    newLL_ISVALIDREF := TRUE, newHL_ISVALIDREF := TRUE,  
    newLL := 0.0, newHL := 100.0,
    strAO := ao.Reserv_AO_1);
  inits := inits + BOOL_TO_UINT(stAO_Ini.Init);

  (* [A1-10, AO1] Резерв (A) *)
  stAO_Ini(data_Ini := TRUE, (*outLL := 4000.0, outHL := 20000.0,*)
    (*newLL_ISVALIDREF := TRUE, newHL_ISVALIDREF := TRUE,*)  
    (*newLL := 0.0, newHL := 100.0,*)
  strAO := ao.Reserv_AO_2);
  inits := inits + BOOL_TO_UINT(stAO_Ini.Init);



  initiales := 0;
  IF init THEN initiales := inits; END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AOSourceMlp
  VAR_IN_OUT
    OutCurrent : TDoubleData;
    strAO : struct_AO;
  END_VAR
  VAR_INPUT RETAIN
    retainLL : LREAL;
    retainHL : LREAL;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    source_for_Status : BYTE;
    cmd : BYTE;
    cmd_for_Status : BYTE;
    lastCmd : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
    secondTack : BOOL;
    inOpcCommandsDisabled : BOOL;
  END_VAR

  IF NOT secondTack THEN
            IF (strAO.newLL <> retainLL) AND (retainLL <> 0.0) THEN  strAO.LL := retainLL;
            ELSE strAO.LL:= strAO.newLL; END_IF;
  	IF (strAO.newHL <> retainHL) AND (retainHL <> 0.0) THEN  strAO.HL := retainHL;
            ELSE strAO.HL:= strAO.newHL; END_IF;

  	secondTack  := FALSE;
  END_IF;
  strAO.blConnect :=(UINT_TO_WORD(OutCurrent.wFlags) AND 16#0040) <> 0; 
  strAO.OpcCommandsDisabled := inOpcCommandsDisabled;

  _sunpackerCommand(command := strAO.inCommand);
  	source := _sunpackerCommand.source;
  	cmd := _sunpackerCommand.cmd;	

  IF cmd <> 0 AND lastCmd <> cmd and (((NOT strAO.opcCommandsDisabled) AND source > 0) OR source = 0) then
  	CASE BYTE_TO_INT(cmd) OF
  	(*cmd_ChangeValue*) 1 : 	IF ((NOT strAO.newLL_ISVALIDREF) OR (strAO.nValue >= strAO.LL)) AND
                                             ((NOT strAO.newHL_ISVALIDREF) OR (strAO.nValue <= strAO.HL) ) THEN
  					strAO.Value := strAO.nValue;
  				END_IF;
  	(*cmd_ChangeLimits*) 2 : 	strAO.LL := strAO.newLL; retainLL:= strAO.LL;
  				strAO.HL := strAO.newHL; retainHL:= strAO.HL;
  	END_CASE;
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	command_error_for_Status := 0;
  	resetCmdTimer(IN := FALSE);
  	resetCmdTimerPriznak := TRUE;
  END_IF;
  lastCmd := cmd;

  IF (strAO.HL <> strAO.LL) THEN
  	OutCurrent.dblValue := ((strAO.Value - strAO.LL) * (strAO.outHL-strAO.outLL)/(strAO.HL - strAO.LL )) + strAO.outLL;
  END_IF;

  resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
  IF resetCmdTimer.Q THEN
  	resetCmdTimerPriznak := FALSE;
  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF; 

  strAO.status := SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(strAO.OpcCommandsDisabled ), 21);
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_AO
  VAR
    fb_Reserv_AO_1 : fb_AOSourceMlp;
    fb_Reserv_AO_2 : fb_AOSourceMlp;
  END_VAR
  VAR_EXTERNAL
    ao : AOConfig;
    arAOUT_0 : TDoubleData;
    arAOUT_1 : TDoubleData;
  END_VAR

  (* Циклический опрос. Входные аналоговые параметры *)



  (* Модуль A10 *)

  (* [A10-1, AO0] Резерв (A10) *)
  fb_Reserv_AO_1(OutCurrent := arAOUT_0, strAO := ao.Reserv_AO_1);

  (* [A10-1, AO1] Резерв (A10) *)
  fb_Reserv_AO_2(OutCurrent := arAOUT_1, strAO := ao.Reserv_AO_2);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_DI_Init
  VAR_INPUT
    data_Ini : BOOL;
    imit : BOOL := FALSE;
  END_VAR
  VAR_IN_OUT
    strDI : struct_DI;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры-дескриптора канала дискретного ввода        *****)

   Init := FALSE;


      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          strDI.imit       := imit;
          data_Ini:=FALSE;
          Init := TRUE;
      END_IF;
    IF Init THEN 
  imit:=FALSE;
      END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_DI_Init
  VAR_INPUT
    init : BOOL;
  END_VAR
  VAR
    stDI_Ini : fb_DI_Init;
    inits : UINT;
  END_VAR
  VAR_INPUT
    initiales : UINT;
  END_VAR
  VAR_EXTERNAL
    di : DiConfig;
  END_VAR

  (* Инициализация начало. Входные дискретные параметры *)

  inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)


  (* Модуль A1-1 *)

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_0);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_1);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  (* Модуль A1-2 *)
  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_2);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_3);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  (* Модуль A1-3 *)
  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_4);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_5);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  (* Модуль A1-4 *)
  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_6);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_7);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  (* Модуль A1-5 *)
  stDI_Ini(data_Ini := true, imit:=FALSE,  strDI := di.di_8);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE,  strDI := di.di_9);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  (* Модуль A1-6 *)
  stDI_Ini(data_Ini := true, imit:=FALSE,  strDI := di.di_10);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE,  strDI := di.di_11);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  (* Модуль A1-7 *)
  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_12);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_13);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  (* Модуль A1-8 *)
  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_14);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_16);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_17);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_18);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_19);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_20);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_21);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  initiales := 0;
  IF init THEN initiales := inits; END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_DiSourceMlp
  VAR_INPUT
    arDIN : TItemDIN;
    err_mod : TItemDIN;
  END_VAR
  VAR_IN_OUT
    strDI : struct_DI;
  END_VAR
  VAR_OUTPUT
    Bounce : BOOL;
  END_VAR
  VAR
    _value : WORD;
    _reliability : BOOL;
    bitNumber : INT;
    bitNum : INT;
  END_VAR

  strDI.blConnect := (*((UINT_TO_WORD(arDIN.wFlags) = 1472) and*) (UINT_TO_WORD(err_mod.wValue) = 20) and (UINT_TO_WORD(err_mod.wFlags) = 192);
  Bounce := (UINT_TO_WORD(arDIN.wFlags) AND 16#0020) <> 0;

  If NOT strDI.imit THEN
  _value:=UINT_TO_WORD(arDIN.wValue);

      IF strDI.blConnect THEN
            strDI.reliability:=0;
            strDI.value:=0;
  	FOR bitNumber:=0 TO 7 BY 1 DO

  		_reliability:=WORD_TO_BOOL(SHR(_value, bitNumber*2) AND 16#2);
  		strDI.reliability:=strDI.reliability OR SHL(BOOL_TO_WORD(_reliability),bitNumber);
  		IF _reliability THEN
  			strDI.value:=strDI.value OR SHL((SHR(_value, bitNumber*2) AND 16#1),bitNumber);
  		END_IF;
  	END_FOR;
      ELSE
  	strDI.reliability := 0;
      END_IF;

      FOR bitNum:=0 TO 15 BY 1 DO
  	          strDI.bits[bitNum].reliability :=WORD_TO_BOOL(SHR(strDI.reliability, bitNum) AND 16#1);
  	IF strDI.bits[bitNum].reliability THEN
  		strDI.bits[bitNum].value :=WORD_TO_BOOL(SHR(strDI.value, bitNum) AND 16#1);
                      strDI.bits[bitNum]._inversed :=NOT strDI.bits[bitNum].value;
  	END_IF;
      END_FOR;



  END_IF;
END_FUNCTION_BLOCK

FUNCTION TwoUint_To_UDINT : UDINT
  VAR_INPUT
    val1 : UINT;
    val2 : UINT;
  END_VAR

  TwoUint_To_UDINT:= DWORD_TO_UDINT(UINT_TO_DWORD(val1) OR shl(UINT_TO_DWORD(val2), 16));
END_FUNCTION

FUNCTION_BLOCK proc_DI
  VAR
    di_0 : fb_DiSourceMlp;
    di_1 : fb_DiSourceMlp;
    di_2 : fb_DiSourceMlp;
    di_3 : fb_DiSourceMlp;
    di_4 : fb_DiSourceMlp;
    di_5 : fb_DiSourceMlp;
    di_6 : fb_DiSourceMlp;
    di_7 : fb_DiSourceMlp;
    di_8 : fb_DiSourceMlp;
    di_9 : fb_DiSourceMlp;
    di_10 : fb_DiSourceMlp;
    di_11 : fb_DiSourceMlp;
    di_12 : fb_DiSourceMlp;
    di_13 : fb_DiSourceMlp;
    di_14 : fb_DiSourceMlp;
    di_15 : fb_DiSourceMlp;
    di_16 : fb_DiSourceMlp;
    di_17 : fb_DiSourceMlp;
    di_18 : fb_DiSourceMlp;
    di_19 : fb_DiSourceMlp;
    di_20 : fb_DiSourceMlp;
    di_21 : fb_DiSourceMlp;
  END_VAR
  VAR_EXTERNAL
    arDIN_0 : TItemDIN;
    arDIN_1 : TItemDIN;
    arDIN_2 : TItemDIN;
    arDIN_3 : TItemDIN;
    arDIN_4 : TItemDIN;
    arDIN_5 : TItemDIN;
    arDIN_6 : TItemDIN;
    arDIN_7 : TItemDIN;
    arDIN_8 : TItemDIN;
    arDIN_9 : TItemDIN;
    arDIN_10 : TItemDIN;
    arDIN_11 : TItemDIN;
    arDIN_12 : TItemDIN;
    arDIN_13 : TItemDIN;
    arDIN_14 : TItemDIN;
    arDIN_15 : TItemDIN;
    arDIN_16 : TItemDIN;
    arDIN_17 : TItemDIN;
    arDIN_18 : TItemDIN;
    arDIN_19 : TItemDIN;
    arDIN_20 : TItemDIN;
    arDIN_21 : TItemDIN;
    di : DiConfig;
    DI_0_1_wValue : UDINT;
    DI_10_11_wValue : UDINT;
    DI_12_13_wValue : UDINT;
    DI_14_15_wValue : UDINT;
    DI_16_17_wValue : UDINT;
    DI_18_19_wValue : UDINT;
    DI_20_21_wValue : UDINT;
    DI_2_3_wValue : UDINT;
    DI_4_5_wValue : UDINT;
    DI_6_7_wValue : UDINT;
    DI_8_9_wValue : UDINT;
    A1_12_err_mode : UINT;
    A1_13_err_mode : UINT;
    A1_14_err_mode : UINT;
    A1_15_err_mode : UINT;
    A2_10_err_mode : UINT;
    A2_4_err_mode : UINT;
    A2_5_err_mode : UINT;
    A2_6_err_mode : UINT;
    A2_7_err_mode : UINT;
    A2_8_err_mode : UINT;
    A2_9_err_mode : UINT;
    arERR_11 : TItemDIN;
    arERR_12 : TItemDIN;
    arERR_13 : TItemDIN;
    arERR_14 : TItemDIN;
    arERR_18 : TItemDIN;
    arERR_19 : TItemDIN;
    arERR_20 : TItemDIN;
    arERR_21 : TItemDIN;
    arERR_22 : TItemDIN;
    arERR_23 : TItemDIN;
    arERR_24 : TItemDIN;
  END_VAR

  (* Циклический опрос. Входные дискретные параметры *)
  (* Модуль A1-12 *)
  di_0(arDIN := arDIN_0, strDI:=di.di_0, err_mod:=arERR_11);
  di_1(arDIN := arDIN_1, strDI:=di.di_1, err_mod:=arERR_11);
  DI_0_1_wValue:=TwoUint_To_UDINT(arDIN_0.wValue, arDIN_1.wValue);
  A1_12_err_mode:= arERR_11.wValue; 

  (* Модуль A1-13 *)
  di_2(arDIN := arDIN_2, strDI:=di.di_2,  err_mod:=arERR_12);
  di_3(arDIN := arDIN_3, strDI:=di.di_3,  err_mod:=arERR_12);
  DI_2_3_wValue:=TwoUint_To_UDINT(arDIN_2.wValue, arDIN_3.wValue);
  A1_13_err_mode:= arERR_12.wValue; 

  (* Модуль A1-14 *)
  di_4(arDIN := arDIN_4, strDI:=di.di_4,  err_mod:=arERR_13);
  di_5(arDIN := arDIN_5, strDI:=di.di_5,  err_mod:=arERR_13);
  DI_4_5_wValue:=TwoUint_To_UDINT(arDIN_4.wValue, arDIN_5.wValue);
  A1_14_err_mode:= arERR_13.wValue;

  (* Модуль A1-15 *)
  di_6(arDIN := arDIN_6, strDI:=di.di_6,  err_mod:=arERR_14);
  di_7(arDIN := arDIN_7, strDI:=di.di_7,  err_mod:=arERR_14);
  DI_6_7_wValue:=TwoUint_To_UDINT(arDIN_6.wValue, arDIN_7.wValue);
  A1_15_err_mode:= arERR_14.wValue;

  (* Модуль A2-4 *)
  di_8(arDIN := arDIN_8, strDI:=di.di_8,  err_mod:=arERR_18);
  di_9(arDIN := arDIN_9, strDI:=di.di_9,  err_mod:=arERR_18);
  DI_8_9_wValue:=TwoUint_To_UDINT(arDIN_8.wValue, arDIN_9.wValue);
  A2_4_err_mode:= arERR_18.wValue;

  (* Модуль A2-5 *)
  di_10(arDIN := arDIN_10, strDI:=di.di_10,  err_mod:=arERR_19);
  di_11(arDIN := arDIN_11, strDI:=di.di_11,  err_mod:=arERR_19);
  DI_10_11_wValue:=TwoUint_To_UDINT(arDIN_10.wValue, arDIN_11.wValue);
  A2_5_err_mode:= arERR_19.wValue;

  (* Модуль A2-6 *)
  di_12(arDIN := arDIN_12, strDI:=di.di_12,  err_mod:=arERR_20);
  di_13(arDIN := arDIN_13, strDI:=di.di_13,  err_mod:=arERR_20);
  DI_12_13_wValue:=TwoUint_To_UDINT(arDIN_12.wValue, arDIN_13.wValue);
  A2_6_err_mode:= arERR_20.wValue;

  (* Модуль A2-7 *)
  di_14(arDIN := arDIN_14, strDI:=di.di_14,  err_mod:=arERR_21);
  di_15(arDIN := arDIN_15, strDI:=di.di_15,  err_mod:=arERR_21);
  DI_14_15_wValue:=TwoUint_To_UDINT(arDIN_14.wValue, arDIN_15.wValue);
  A2_7_err_mode:= arERR_21.wValue;

  di_16(arDIN := arDIN_16, strDI:=di.di_16,  err_mod:=arERR_22);
  di_17(arDIN := arDIN_17, strDI:=di.di_17,  err_mod:=arERR_22);
  DI_16_17_wValue:=TwoUint_To_UDINT(arDIN_16.wValue, arDIN_17.wValue);
  A2_8_err_mode:= arERR_22.wValue;

  di_18(arDIN := arDIN_18, strDI:=di.di_18,  err_mod:=arERR_23);
  di_19(arDIN := arDIN_19, strDI:=di.di_19,  err_mod:=arERR_23);
  DI_18_19_wValue:=TwoUint_To_UDINT(arDIN_18.wValue, arDIN_19.wValue);
  A2_9_err_mode:= arERR_23.wValue;

  di_20(arDIN := arDIN_20, strDI:=di.di_20,  err_mod:=arERR_24);
  di_21(arDIN := arDIN_21, strDI:=di.di_21,  err_mod:=arERR_24);
  DI_20_21_wValue:=TwoUint_To_UDINT(arDIN_20.wValue, arDIN_21.wValue);
  A2_10_err_mode:= arERR_24.wValue;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_DO_Init
  VAR_INPUT
    data_Ini : BOOL;
    imit : BOOL := FALSE;
  END_VAR
  VAR_IN_OUT
    strDO : struct_DO;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры-дескриптора канала дискретного ввода.            *****)
   Init := FALSE;


      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          strDO.imit       := imit;
          data_Ini:=FALSE;
          Init := TRUE;
      END_IF;
    IF Init THEN  
  imit:=FALSE;
     END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_DO_Init
  VAR_INPUT
    init : BOOL;
  END_VAR
  VAR
    stDO_Ini : fb_DO_Init;
    inits : UINT;
  END_VAR
  VAR_INPUT
    initiales : UINT;
  END_VAR
  VAR_EXTERNAL
    od : DOconfig;
  END_VAR

  (* Инициализация начало. Входные дискретные параметры *)

  inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)


  (* Модуль A1-15 *)
  stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_0);
  inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

  (* Модуль A1-16 *)
  stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_1);
  inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

  (* Модуль A1-17 *)
  stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_2);
  inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

  (* Модуль A1-18 *)
  stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_3);
  inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

  (* Модуль A1-19 *)
  stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_4);
  inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

  (* Модуль A1-23 *)
  stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.gpio_out);
  inits := inits + BOOL_TO_UINT(stDO_Ini.Init);
  initiales := 0;

  IF init THEN initiales := inits; END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_DOSourceMlp
  VAR_IN_OUT
    arDout : TWordData;
  END_VAR
  VAR_INPUT
    err_mod : TItemDIN;
  END_VAR
  VAR_IN_OUT
    strDO : struct_DO;
  END_VAR
  VAR
    bitNumber : INT;
  END_VAR

  strDO.blConnect := ((UINT_TO_WORD(err_mod.wValue) = 20) and (UINT_TO_WORD(err_mod.wFlags) = 192));

  strDO.value:=0;

  FOR bitNumber:=0 TO 15 BY 1 DO
  	strDO.value:=strDO.value OR (SHL(BOOL_TO_WORD(strDO.bits[bitNumber]),bitNumber));
  END_FOR;

  IF NOT strDO.imit THEN
  	 arDout.wValue:= WORD_TO_UINT(strDO.value);
  END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_DO
  VAR
    do_0 : fb_DOSourceMlp;
    do_1 : fb_DOSourceMlp;
    do_2 : fb_DOSourceMlp;
    do_3 : fb_DOSourceMlp;
    do_4 : fb_DOSourceMlp;
    gpio_out : fb_DOSourceMlp;
  END_VAR
  VAR_EXTERNAL
    od : DOconfig;
    arDOUT_0 : TWordData;
    arDOUT_1 : TWordData;
    arDOUT_2 : TWordData;
    arDOUT_3 : TWordData;
    arDOUT_4 : TWordData;
    arERR_66 : TItemDIN;
    arDOUT_66 : TWordData;
    arERR_0 : TItemDIN;
    arERR_1 : TItemDIN;
    arERR_2 : TItemDIN;
    arERR_15 : TItemDIN;
    arERR_16 : TItemDIN;
    A1_1_err_mode : UINT;
    A1_2_err_mode : UINT;
    A1_3_err_mode : UINT;
    A2_1_err_mode : UINT;
    A2_4_err_mode : UINT;
    DO_0_wValue : UINT;
    DO_1_wValue : UINT;
    DO_2_wValue : UINT;
    DO_3_wValue : UINT;
    DO_4_wValue : UINT;
  END_VAR

  (* Циклический опрос. Входные дискретные параметры *)



  (* Модуль A1-1 *)
  do_0(arDout := arDOUT_0, strDO := od.do_0, err_mod:=arERR_0);
  DO_0_wValue:=arDOUT_0.wValue;
  A1_1_err_mode:= arERR_0.wValue; 

  (* Модуль A1-2 *)
  do_1(arDout := arDOUT_1, strDO := od.do_1, err_mod:=arERR_1);
  DO_1_wValue:=arDOUT_1.wValue;
  A1_2_err_mode:= arERR_1.wValue; 

  (* Модуль A1-3 *)
  do_2(arDout := arDOUT_2, strDO := od.do_2, err_mod:=arERR_2);
  DO_2_wValue:=arDOUT_2.wValue;
  A1_3_err_mode:= arERR_2.wValue; 

  (* Модуль A2-1 *)
  do_3(arDout := arDOUT_3, strDO := od.do_3, err_mod:=arERR_15);
  DO_3_wValue:=arDOUT_3.wValue;
  A2_1_err_mode:= arERR_15.wValue; 

  (* Модуль A2-1 *)
  do_4(arDout := arDOUT_4, strDO := od.do_4, err_mod:=arERR_15);
  DO_4_wValue:=arDOUT_4.wValue;
  A2_4_err_mode:= arERR_16.wValue;


  gpio_out(arDout := arDOUT_66, strDO := od.gpio_out, err_mod:=arERR_66);
END_FUNCTION_BLOCK

FUNCTION_BLOCK OPC_algoritms_set
  VAR_EXTERNAL
    algoritms : AlgoritmsConfig;
    algManager_Mode : UINT;
    algoritms_AutoAvom_status : UDINT;
    algoritms_AutoPns_OffTimer : UINT;
    algoritms_AutoPns_OnTimer : UINT;
    algoritms_AutoPns_status : UDINT;
    algoritms_AutoTen_status : UDINT;
    algoritms_Remont_status : UDINT;
    algoritms_TestProtection_status : UDINT;
    algoritms_autoNu_NotHasRezervNU : BOOL;
    algoritms_autoNu_status : UDINT;
    algoritms_puskOilSystem_Error : UDINT;
    algoritms_puskOilSystem_Start : UDINT;
    algoritms_puskOilSystem_Top : UDINT;
    algoritms_puskOilSystem_status : UDINT;
    algoritms_testIm_status : UDINT;
    algoritms_vibegPNS_Error : UDINT;
    algoritms_vibegPNS_Start : UDINT;
    algoritms_vibegPNS_Top : UDINT;
    algoritms_vibegPNS_algContinue_status : UDINT;
    algoritms_vibegPNS_status : UDINT;
    algoritms_vibegPNS_waitVibeg_timer : UINT;
    protectManager_protectionInRemont : BOOL;
    algManager : struct_AlgoritmsManager;
    protectManager : struct_ProtectionsManager;
    NotHasRezervNU : BOOL;
    AlgTimers : struct_AlgTimers;
    AlgQuestions : AlgoritmsQuestions;
    algoritms_Apusk_Error : UDINT;
    algoritms_Apusk_Start : UDINT;
    algoritms_Apusk_Top : UDINT;
    algoritms_Apusk_status : UDINT;
    algoritms_RingToLine_Error : UDINT;
    algoritms_RingToLine_Start : UDINT;
    algoritms_RingToLine_Top : UDINT;
    algoritms_RingToLine_status : UDINT;
    algoritms_SemiAutoPusk_Error : UDINT;
    algoritms_SemiAutoPusk_Start : UDINT;
    algoritms_SemiAutoPusk_Top : UDINT;
    algoritms_SemiAutoPusk_cmdRun1ph_status : UDINT;
    algoritms_SemiAutoPusk_cmdRun2ph_status : UDINT;
    algoritms_SemiAutoPusk_cmdRun3ph_status : UDINT;
    algoritms_SemiAutoPusk_cmdRun4ph_status : UDINT;
    algoritms_SemiAutoPusk_status : UDINT;
    algoritms_ao_Error : UDINT;
    algoritms_ao_Start : UDINT;
    algoritms_ao_Top : UDINT;
    algoritms_ao_status : UDINT;
    algoritms_ao_waitKran_timer : UINT;
    algoritms_engineRun_BreakPuskTimer_timer : UINT;
    algoritms_engineRun_Error : UDINT;
    algoritms_engineRun_Start : UDINT;
    algoritms_engineRun_Top : UDINT;
    algoritms_engineRun_status : UDINT;
    algoritms_filling_BreakPuskTimer_timer : UINT;
    algoritms_filling_Error : UDINT;
    algoritms_filling_Start : UDINT;
    algoritms_filling_Top : UDINT;
    algoritms_filling_status : UDINT;
    algoritms_filling_waitAfterKran4_timer : UINT;
    algoritms_filling_waitAfterKran5_timer : UINT;
    algoritms_no_Error : UDINT;
    algoritms_no_Start : UDINT;
    algoritms_no_Top : UDINT;
    algoritms_no_status : UDINT;
    algoritms_no_waitCloseKran_timer : UINT;
    algoritms_ppu_Error : UDINT;
    algoritms_ppu_Start : UDINT;
    algoritms_ppu_Top : UDINT;
    algoritms_ppu_status : UDINT;
    algoritms_puskK_Error : UDINT;
    algoritms_puskK_Start : UDINT;
    algoritms_puskK_Top : UDINT;
    algoritms_puskK_questionFilling_status : UDINT;
    algoritms_puskK_questionUnload_status : UDINT;
    algoritms_puskK_status : UDINT;
    algoritms_puskK_wait720_timer : UINT;
    algoritms_puskOilSystem_BreakPuskTimer_Poil_timer : UINT;
    algoritms_puskOilSystem_BreakPuskTimer_dPmg_timer : UINT;
    algoritms_puskV_Error : UDINT;
    algoritms_puskV_Start : UDINT;
    algoritms_puskV_Top : UDINT;
    algoritms_puskV_questionFilling_status : UDINT;
    algoritms_puskV_questionMVoff_status : UDINT;
    algoritms_puskV_status : UDINT;
    algoritms_puskV_wait600_timer : UINT;
    algoritms_testPms_BreakTest_timer : UINT;
    algoritms_testPms_Error : UDINT;
    algoritms_testPms_Start : UDINT;
    algoritms_testPms_Top : UDINT;
    algoritms_testPms_algContinue_status : UDINT;
    algoritms_testPms_status : UDINT;
    algoritms_testdPmg_BreakTest_timer : UINT;
    algoritms_testdPmg_Error : UDINT;
    algoritms_testdPmg_Start : UDINT;
    algoritms_testdPmg_Top : UDINT;
    algoritms_testdPmg_algContinue_status : UDINT;
    algoritms_testdPmg_status : UDINT;
  END_VAR

  (* OPC Set - algoritms. Запись текущих состояний тэгов _______________________________________________________*)

  algManager_Mode := algManager.mode;

  protectManager_protectionInRemont:= protectManager.protectionInRemont;

  algoritms_autoNu_NotHasRezervNU:= NotHasRezervNU;

  algoritms_no_Start	:= DWORD_TO_UDINT(algoritms.no.Start);
  algoritms_no_Error	:= DWORD_TO_UDINT(algoritms.no.Error);
  algoritms_no_Top	:= DWORD_TO_UDINT(algoritms.no.Top);
  algoritms_no_status	:= DWORD_TO_UDINT(algoritms.no.status);
  algoritms_no_waitCloseKran_timer	:= AlgTimers.NO_waitCloseKran;

  algoritms_ao_Start	:= DWORD_TO_UDINT(algoritms.ao.Start);
  algoritms_ao_Error	:= DWORD_TO_UDINT(algoritms.ao.Error);
  algoritms_ao_Top	:= DWORD_TO_UDINT(algoritms.ao.Top);
  algoritms_ao_status	:= DWORD_TO_UDINT(algoritms.ao.status);
  algoritms_ao_waitKran_timer	:= AlgTimers.AO_waitKran;

  algoritms_vibegPNS_Start		:= DWORD_TO_UDINT(algoritms.vibegPNS.Start);
  algoritms_vibegPNS_Error		:= DWORD_TO_UDINT(algoritms.vibegPNS.Error);
  algoritms_vibegPNS_Top		:= DWORD_TO_UDINT(algoritms.vibegPNS.Top);
  algoritms_vibegPNS_status		:= DWORD_TO_UDINT(algoritms.vibegPNS.status);
  algoritms_vibegPNS_waitVibeg_timer	:= AlgTimers.vibegPNS_Timer;
  algoritms_vibegPNS_algContinue_status	:= DWORD_TO_UDINT(AlgQuestions.vibegPNS_algContinue.status);

  algoritms_testPms_Start		:= DWORD_TO_UDINT(algoritms.testPms.Start);
  algoritms_testPms_Error		:= DWORD_TO_UDINT(algoritms.testPms.Error);
  algoritms_testPms_Top		:= DWORD_TO_UDINT(algoritms.testPms.Top);
  algoritms_testPms_status		:= DWORD_TO_UDINT(algoritms.testPms.status);
  algoritms_testPms_algContinue_status	:= DWORD_TO_UDINT(AlgQuestions.testPms_algContinue.status);
  algoritms_testPms_BreakTest_timer	:= AlgTimers.testPms_BreakTest;

  algoritms_testdPmg_Start		:= DWORD_TO_UDINT(algoritms.testdPmg.Start);
  algoritms_testdPmg_Error		:= DWORD_TO_UDINT(algoritms.testdPmg.Error);
  algoritms_testdPmg_Top		:= DWORD_TO_UDINT(algoritms.testdPmg.Top);
  algoritms_testdPmg_status		:= DWORD_TO_UDINT(algoritms.testdPmg.status);
  algoritms_testdPmg_algContinue_status	:= DWORD_TO_UDINT(AlgQuestions.testdPmg_algContinue.status);
  algoritms_testdPmg_BreakTest_timer	:= AlgTimers.testdPmg_BreakTest;

  algoritms_testIm_status	:= DWORD_TO_UDINT(algoritms.testIm.status);

  algoritms_ppu_status	:= DWORD_TO_UDINT(algoritms.ppu.status);
  algoritms_ppu_Start	          := DWORD_TO_UDINT(algoritms.ppu.Start);
  algoritms_ppu_Error	          := DWORD_TO_UDINT(algoritms.ppu.Error);
  algoritms_ppu_Top	          := DWORD_TO_UDINT(algoritms.ppu.Top);

  algoritms_puskOilSystem_status			:= DWORD_TO_UDINT(algoritms.puskOilSystem.status);
  algoritms_puskOilSystem_Start				:= DWORD_TO_UDINT(algoritms.puskOilSystem.Start);
  algoritms_puskOilSystem_Error				:= DWORD_TO_UDINT(algoritms.puskOilSystem.Error);
  algoritms_puskOilSystem_Top				:= DWORD_TO_UDINT(algoritms.puskOilSystem.Top);
  algoritms_puskOilSystem_BreakPuskTimer_Poil_timer	          := AlgTimers.puskOilSystem_BreakPuskTimer_Poil;

  algoritms_engineRun_status			:= DWORD_TO_UDINT(algoritms.engineRun.status);
  algoritms_engineRun_Start			:= DWORD_TO_UDINT(algoritms.engineRun.Start);
  algoritms_engineRun_Error			:= DWORD_TO_UDINT(algoritms.engineRun.Error);
  algoritms_engineRun_Top			:= DWORD_TO_UDINT(algoritms.engineRun.Top);
  algoritms_engineRun_BreakPuskTimer_timer	:= AlgTimers.engineRun_BreakPuskTimer;

  algoritms_filling_status		:= DWORD_TO_UDINT(algoritms.filling.status);
  algoritms_filling_Start		:= DWORD_TO_UDINT(algoritms.filling.Start);
  algoritms_filling_Error		:= DWORD_TO_UDINT(algoritms.filling.Error);
  algoritms_filling_Top		:= DWORD_TO_UDINT(algoritms.filling.Top);
  algoritms_filling_BreakPuskTimer_timer	:= AlgTimers.filling_BreakPuskTimer;
  algoritms_filling_waitAfterKran4_timer	:= AlgTimers.filling_waitAfterKran4;
  algoritms_filling_waitAfterKran5_timer	:= AlgTimers.filling_waitAfterKran5;

  algoritms_RingToLine_status	:= DWORD_TO_UDINT(algoritms.RingToLine.status);
  algoritms_RingToLine_Start	:= DWORD_TO_UDINT(algoritms.RingToLine.Start);
  algoritms_RingToLine_Error	:= DWORD_TO_UDINT(algoritms.RingToLine.Error);
  algoritms_RingToLine_Top	:= DWORD_TO_UDINT(algoritms.RingToLine.Top);

  algoritms_puskK_status	            := DWORD_TO_UDINT(algoritms.puskK.status);
  algoritms_puskK_Start	            := DWORD_TO_UDINT(algoritms.puskK.Start);
  algoritms_puskK_Error	            := DWORD_TO_UDINT(algoritms.puskK.Error);
  algoritms_puskK_Top	                      := DWORD_TO_UDINT(algoritms.puskK.Top);
  algoritms_puskK_wait720_timer	            := AlgTimers.puskK_wait720;
  algoritms_puskK_questionFilling_status	  := DWORD_TO_UDINT(AlgQuestions.puskK_questionFilling.status);
  algoritms_puskK_questionUnload_status	  := DWORD_TO_UDINT(AlgQuestions.puskK_questionUnload.status);

  algoritms_puskV_status	          := DWORD_TO_UDINT(algoritms.puskV.status);
  algoritms_puskV_Start	          := DWORD_TO_UDINT(algoritms.puskV.Start);
  algoritms_puskV_Error	          := DWORD_TO_UDINT(algoritms.puskV.Error);
  algoritms_puskV_Top	                    := DWORD_TO_UDINT(algoritms.puskV.Top);
  algoritms_puskV_wait600_timer	          := AlgTimers.puskV_wait600;
  algoritms_puskV_questionFilling_status	:= DWORD_TO_UDINT(AlgQuestions.puskV_questionEngine.status);
  algoritms_puskV_questionMVoff_status	:= DWORD_TO_UDINT(AlgQuestions.puskV_questionMVoff.status);

  algoritms_Apusk_status	:= DWORD_TO_UDINT(algoritms.Apusk.status);
  algoritms_Apusk_Start	:= DWORD_TO_UDINT(algoritms.Apusk.Start);
  algoritms_Apusk_Error	:= DWORD_TO_UDINT(algoritms.Apusk.Error);
  algoritms_Apusk_Top	          := DWORD_TO_UDINT(algoritms.Apusk.Top);

  algoritms_SemiAutoPusk_status	:= DWORD_TO_UDINT(algoritms.SemiAutoPusk.status);
  algoritms_SemiAutoPusk_Start	:= DWORD_TO_UDINT(algoritms.SemiAutoPusk.Start);
  algoritms_SemiAutoPusk_Error	:= DWORD_TO_UDINT(algoritms.SemiAutoPusk.Error);
  algoritms_SemiAutoPusk_Top	:= DWORD_TO_UDINT(algoritms.SemiAutoPusk.Top);
  algoritms_SemiAutoPusk_cmdRun1ph_status	:= DWORD_TO_UDINT(AlgQuestions.SemiAutoPusk_cmdRun1ph.status);
  algoritms_SemiAutoPusk_cmdRun2ph_status	:= DWORD_TO_UDINT(AlgQuestions.SemiAutoPusk_cmdRun2ph.status);
  algoritms_SemiAutoPusk_cmdRun3ph_status	:= DWORD_TO_UDINT(AlgQuestions.SemiAutoPusk_cmdRun3ph.status);
  algoritms_SemiAutoPusk_cmdRun4ph_status	:= DWORD_TO_UDINT(AlgQuestions.SemiAutoPusk_cmdRun4ph.status);

  algoritms_AutoPns_status	:= DWORD_TO_UDINT(algoritms.AutoPns.status);
  algoritms_AutoPns_OnTimer	:= AlgTimers.AutoPns_OnTimer;
  algoritms_AutoPns_OffTimer	:= AlgTimers.AutoPns_OffTimer;

  algoritms_autoNu_status	:= DWORD_TO_UDINT(algoritms.autoNu.status);

  algoritms_AutoAvom_status	:= DWORD_TO_UDINT(algoritms.AutoAvom.status);

  algoritms_TestProtection_status	:= DWORD_TO_UDINT(algoritms.TestProtection.status);

  algoritms_Remont_status	:= DWORD_TO_UDINT(algoritms.Remont.status);

  algoritms_AutoTen_status	:= DWORD_TO_UDINT(algoritms.AutoTen.status);
END_FUNCTION_BLOCK

FUNCTION_BLOCK OPC_algoritms_get
  VAR_EXTERNAL
    algoritms : AlgoritmsConfig;
    algoritms_AntiPompag_UgolVNA_inCommand_ARM : UINT;
    algoritms_AntiPompag_zapas_inCommand_ARM : UINT;
    algoritms_Apusk_inCommand_ARM : UINT;
    algoritms_AutoAvom_inCommand_ARM : UINT;
    algoritms_AutoPns_inCommand_ARM : UINT;
    algoritms_AutoTen_inCommand_ARM : UINT;
    algoritms_Remont_inCommand_ARM : UINT;
    algoritms_RingToLine_inCommand_ARM : UINT;
    algoritms_SemiAutoPusk_cmdRun1ph_inCommand_ARM : UINT;
    algoritms_SemiAutoPusk_cmdRun2ph_inCommand_ARM : UINT;
    algoritms_SemiAutoPusk_cmdRun3ph_inCommand_ARM : UINT;
    algoritms_SemiAutoPusk_cmdRun4ph_inCommand_ARM : UINT;
    algoritms_SemiAutoPusk_inCommand_ARM : UINT;
    algoritms_TestProtection_inCommand_ARM : UINT;
    algoritms_ao_inCommand_ARM : UINT;
    algoritms_engineRun_inCommand_ARM : UINT;
    algoritms_filling_inCommand_ARM : UINT;
    algoritms_no_inCommand_ARM : UINT;
    algoritms_ppu_inCommand_ARM : UINT;
    algoritms_puskK_inCommand_ARM : UINT;
    algoritms_puskK_questionFilling_inCommand_ARM : UINT;
    algoritms_puskK_questionUnload_inCommand_ARM : UINT;
    algoritms_puskOilSystem_Ust_dPmg_inCommand_ARM : UINT;
    algoritms_puskOilSystem_inCommand_ARM : UINT;
    algoritms_puskV_inCommand_ARM : UINT;
    algoritms_puskV_questionFilling_inCommand_ARM : UINT;
    algoritms_puskV_questionMVoff_inCommand_ARM : UINT;
    algoritms_testIm_TypeSwitch_inCommand_ARM : UINT;
    algoritms_testIm_inCommand_ARM : UINT;
    algoritms_testPms_algContinue_inCommand_ARM : UINT;
    algoritms_testPms_inCommand_ARM : UINT;
    algoritms_testdPmg_algContinue_inCommand_ARM : UINT;
    algoritms_testdPmg_inCommand_ARM : UINT;
    algoritms_vibegPNS_algContinue_inCommand_ARM : UINT;
    AlgQuestions : AlgoritmsQuestions;
    algoritms_autoNu_inCommand_ARM : UINT;
    algoritms_vibegPNS_inCommand_ARM : UINT;
  END_VAR

  (* OPC Get - algoritms. Чтение текущих состояний тэгов _______________________________________________________*)

  algoritms.ao.inCommand_ARM	:= UINT_TO_WORD(algoritms_ao_inCommand_ARM);

  algoritms.Apusk.inCommand_ARM	:= UINT_TO_WORD(algoritms_Apusk_inCommand_ARM);

  algoritms.AutoAvom.inCommand_ARM	:= UINT_TO_WORD(algoritms_AutoAvom_inCommand_ARM);


  algoritms.autoNu.inCommand_ARM	:= UINT_TO_WORD(algoritms_autoNu_inCommand_ARM);

  algoritms.AutoPns.inCommand_ARM	:= UINT_TO_WORD(algoritms_AutoPns_inCommand_ARM);

  algoritms.engineRun.inCommand_ARM	:= UINT_TO_WORD(algoritms_engineRun_inCommand_ARM);

  algoritms.filling.inCommand_ARM	:= UINT_TO_WORD(algoritms_filling_inCommand_ARM);

  algoritms.no.inCommand_ARM	:= UINT_TO_WORD(algoritms_no_inCommand_ARM);

  algoritms.ppu.inCommand_ARM	:= UINT_TO_WORD(algoritms_ppu_inCommand_ARM);

  AlgQuestions.puskK_questionFilling.inCommand	:= UINT_TO_WORD(algoritms_puskK_questionFilling_inCommand_ARM);
  AlgQuestions.puskK_questionUnload.inCommand	:= UINT_TO_WORD(algoritms_puskK_questionUnload_inCommand_ARM);
  algoritms.puskK.inCommand_ARM	:= UINT_TO_WORD(algoritms_puskK_inCommand_ARM);

  algoritms.puskOilSystem.inCommand_ARM	:= UINT_TO_WORD(algoritms_puskOilSystem_inCommand_ARM);

  AlgQuestions.puskV_questionEngine.inCommand	:= UINT_TO_WORD(algoritms_puskV_questionFilling_inCommand_ARM);
  AlgQuestions.puskV_questionMVoff.inCommand	:= UINT_TO_WORD(algoritms_puskV_questionMVoff_inCommand_ARM);
  algoritms.puskV.inCommand_ARM	:= UINT_TO_WORD(algoritms_puskV_inCommand_ARM);

  algoritms.Remont.inCommand_ARM	:= UINT_TO_WORD(algoritms_Remont_inCommand_ARM);

  algoritms.RingToLine.inCommand_ARM	:= UINT_TO_WORD(algoritms_RingToLine_inCommand_ARM);

  AlgQuestions.SemiAutoPusk_cmdRun1ph.inCommand	:= UINT_TO_WORD(algoritms_SemiAutoPusk_cmdRun1ph_inCommand_ARM);
  AlgQuestions.SemiAutoPusk_cmdRun2ph.inCommand	:= UINT_TO_WORD(algoritms_SemiAutoPusk_cmdRun2ph_inCommand_ARM);
  AlgQuestions.SemiAutoPusk_cmdRun3ph.inCommand	:= UINT_TO_WORD(algoritms_SemiAutoPusk_cmdRun3ph_inCommand_ARM);
  AlgQuestions.SemiAutoPusk_cmdRun4ph.inCommand	:= UINT_TO_WORD(algoritms_SemiAutoPusk_cmdRun4ph_inCommand_ARM);
  algoritms.SemiAutoPusk.inCommand_ARM	:= UINT_TO_WORD(algoritms_SemiAutoPusk_inCommand_ARM);

  AlgQuestions.testdPmg_algContinue.inCommand	:= UINT_TO_WORD(algoritms_testdPmg_algContinue_inCommand_ARM);
  algoritms.testdPmg.inCommand_ARM	:= UINT_TO_WORD(algoritms_testdPmg_inCommand_ARM);

  algoritms.testIm.inCommand_ARM	:= UINT_TO_WORD(algoritms_testIm_inCommand_ARM);

  AlgQuestions.testPms_algContinue.inCommand	:= UINT_TO_WORD(algoritms_testPms_algContinue_inCommand_ARM);
  algoritms.testPms.inCommand_ARM	:= UINT_TO_WORD(algoritms_testPms_inCommand_ARM);

  algoritms.TestProtection.inCommand_ARM	:= UINT_TO_WORD(algoritms_TestProtection_inCommand_ARM);

  AlgQuestions.vibegPNS_algContinue.inCommand	:= UINT_TO_WORD(algoritms_vibegPNS_algContinue_inCommand_ARM);
  algoritms.vibegPNS.inCommand_ARM	:= UINT_TO_WORD(algoritms_vibegPNS_inCommand_ARM);

  algoritms.AutoTen.inCommand_ARM	:= UINT_TO_WORD(algoritms_AutoTen_inCommand_ARM);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_Kran_Init
  VAR_INPUT
    data_Ini : BOOL;
    ISVALIDREF_statOn : BOOL;
    ISVALIDREF_statOff : BOOL;
    ISVALIDREF_cmdOn : BOOL;
    ISVALIDREF_cmdOff : BOOL;
    ISVALIDREF_inSo : BOOL;
    ISVALIDREF_inSz : BOOL;
    ISVALIDREF_inDp : BOOL := False;
    continueHoldCommand : TIME;
  END_VAR
  VAR_IN_OUT
    str_Kr : struct_Kran;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры  Kran          *****)

          Init := False;

      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          str_Kr.ISVALIDREF_statOn                := ISVALIDREF_statOn;
          str_Kr.ISVALIDREF_statOff               := ISVALIDREF_statOff;
          str_Kr.ISVALIDREF_cmdOn                 := ISVALIDREF_cmdOn;
          str_Kr.ISVALIDREF_cmdOff                := ISVALIDREF_cmdOff;
          str_Kr.ISVALIDREF_inSo                  := ISVALIDREF_inSo;
          str_Kr.ISVALIDREF_inSz                  := ISVALIDREF_inSz;     
          str_Kr.ISVALIDREF_inDp                  := ISVALIDREF_inDp;
          str_Kr.continueHoldCommand              := continueHoldCommand;     

          data_Ini:=False;
          Init := TRUE;
     END_IF; 
   IF Init THEN       
          ISVALIDREF_statOn:= false;
          ISVALIDREF_statOff:= false;
          ISVALIDREF_cmdOn:= false;
          ISVALIDREF_cmdOff:= false;
          ISVALIDREF_inSo:= false;
          ISVALIDREF_inSz:= false;     
          ISVALIDREF_inDp:= false;
          continueHoldCommand:= T#0S; 
    END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_Switch_Init
  VAR_INPUT
    data_Ini : BOOL;
    ISVALIDREF_statOn : BOOL;
    ISVALIDREF_statOff : BOOL;
    ISVALIDREF_cmdOn : BOOL;
    ISVALIDREF_cmdOff : BOOL;
    ISVALIDREF_inBreakCmdOn : BOOL;
    ISVALIDREF_inBreakCmdOff : BOOL;
  END_VAR
  VAR_IN_OUT
    str_Sw : struct_Switch;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры  Switch          *****)

   Init := FALSE;

      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          str_Sw.ISVALIDREF_statOn                := ISVALIDREF_statOn;
          str_Sw.ISVALIDREF_statOff               := ISVALIDREF_statOff;
          str_Sw.ISVALIDREF_cmdOn                 := ISVALIDREF_cmdOn;
          str_Sw.ISVALIDREF_cmdOff                := ISVALIDREF_cmdOff;
          str_Sw.ISVALIDREF_inBreakCmdOn          := ISVALIDREF_inBreakCmdOn;
          str_Sw.ISVALIDREF_inBreakCmdOff         := ISVALIDREF_inBreakCmdOff;      
          data_Ini:=FALSE;
          Init := TRUE;
      END_IF;
  IF Init THEN
          ISVALIDREF_statOn:= FALSE;
          ISVALIDREF_statOff:= FALSE;
          ISVALIDREF_cmdOn:= FALSE;
          ISVALIDREF_cmdOff:= FALSE;
          ISVALIDREF_inBreakCmdOn:= FALSE;
          ISVALIDREF_inBreakCmdOff:= FALSE;   
  END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_OilPump_Init
  VAR_INPUT
    data_Ini : BOOL;
    ISVALIDREF_statOn : BOOL;
    ISVALIDREF_statOff : BOOL;
    ISVALIDREF_cmdOn : BOOL;
    ISVALIDREF_cmdOff : BOOL;
    ISVALIDREF_inBreakCmdOn : BOOL;
    ISVALIDREF_inBreakCmdOff : BOOL;
  END_VAR
  VAR_IN_OUT
    str_Op : struct_OilPump;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры  НУ          *****)


   Init := FALSE;

      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          str_Op.ISVALIDREF_statOn                := ISVALIDREF_statOn;
          str_Op.ISVALIDREF_statOff               := ISVALIDREF_statOff;
          str_Op.ISVALIDREF_cmdOn                 := ISVALIDREF_cmdOn;
          str_Op.ISVALIDREF_cmdOff                := ISVALIDREF_cmdOff;
          str_Op.ISVALIDREF_inBreakCmdOn          := ISVALIDREF_inBreakCmdOn;
          str_Op.ISVALIDREF_inBreakCmdOff         := ISVALIDREF_inBreakCmdOff;      
          data_Ini:=FALSE;
          Init := TRUE;
      END_IF;

          ISVALIDREF_statOn:= FALSE;
          ISVALIDREF_statOff:= FALSE;
          ISVALIDREF_cmdOn:= FALSE;
          ISVALIDREF_cmdOff:= FALSE;
          ISVALIDREF_inBreakCmdOn:= FALSE;
          ISVALIDREF_inBreakCmdOff:= FALSE;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_SectionSwitch_Init
  VAR_INPUT
    data_Ini : BOOL;
    ISVALIDREF_statOn : BOOL;
    ISVALIDREF_statOff : BOOL;
    ISVALIDREF_cmdOn : BOOL;
    ISVALIDREF_cmdOff : BOOL;
    ISVALIDREF_inBreakCmdOn : BOOL;
    ISVALIDREF_inBreakCmdOff : BOOL;
    ISVALIDREF_basketRolledIn : BOOL;
    ISVALIDREF_basketRolledOut : BOOL;
    ISVALIDREF_basketTest : BOOL;
  END_VAR
  VAR_IN_OUT
    str_Sw : struct_SectionSwitch;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры  МВ          *****)

   Init := FALSE;

      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          str_Sw.ISVALIDREF_statOn                := ISVALIDREF_statOn;
          str_Sw.ISVALIDREF_statOff               := ISVALIDREF_statOff;
          str_Sw.ISVALIDREF_cmdOn                 := ISVALIDREF_cmdOn;
          str_Sw.ISVALIDREF_cmdOff                := ISVALIDREF_cmdOff;
          str_Sw.ISVALIDREF_inBreakCmdOn          := ISVALIDREF_inBreakCmdOn;
          str_Sw.ISVALIDREF_inBreakCmdOff         := ISVALIDREF_inBreakCmdOff;      
          str_Sw.ISVALIDREF_basketRolledIn        := ISVALIDREF_basketRolledIn;
          str_Sw.ISVALIDREF_basketRolledOut       := ISVALIDREF_basketRolledOut;   
          str_Sw.ISVALIDREF_basketTest            := ISVALIDREF_basketTest;
          data_Ini:=FALSE;
          Init := TRUE;
      END_IF;
  IF Init THEN 
          ISVALIDREF_statOn:= FALSE;
          ISVALIDREF_statOff:= FALSE;
          ISVALIDREF_cmdOn:= FALSE;
          ISVALIDREF_cmdOff:= FALSE;
          ISVALIDREF_inBreakCmdOn:= FALSE;
          ISVALIDREF_inBreakCmdOff:= FALSE;
          ISVALIDREF_basketRolledIn:= FALSE;
          ISVALIDREF_basketRolledOut:= FALSE;   
          ISVALIDREF_basketTest:= FALSE;
  END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AnalogParametr_Init
  VAR_INPUT
    data_Ini : BOOL;
    currentValue : LREAL;
    minVal : LREAL;
    maxVal : LREAL;
    maxStep : LREAL;
    minVal_ISVALIDREF : BOOL;
    maxVal_ISVALIDREF : BOOL;
    maxStep_ISVALIDREF : BOOL;
  END_VAR
  VAR_IN_OUT
    strAP : struct_AnalogParametr;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации Аналогового параметра.            *****)
       Init := false;


      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          strAP.currentValue          := currentValue;
          strAP.minVal                := minVal;
          strAP.maxVal                := maxVal;
          strAP.maxStep               := maxStep;
          strAP.minVal_ISVALIDREF     := minVal_ISVALIDREF;
          strAP.maxVal_ISVALIDREF     := maxVal_ISVALIDREF;
          strAP.maxStep_ISVALIDREF    := maxStep_ISVALIDREF;

          data_Ini:=false;
          Init := TRUE;
       END_IF; 
       IF Init THEN    
          currentValue:= 0.0;
          minVal:= 0.0;
          maxVal:= 0.0;
          maxStep:= 0.0;
          minVal_ISVALIDREF:= false;
          maxVal_ISVALIDREF:= false;
          maxStep_ISVALIDREF:= false;
       END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_DiscretParametr_Init
  VAR_INPUT
    data_Ini : BOOL;
    currentValue : UINT;
  END_VAR
  VAR_IN_OUT
    strDp : struct_DiscretParametr;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации дискретного параметра.          *****)

   Init := FALSE;


      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          strDp.currentValue       := currentValue;
          data_Ini:=FALSE;
          Init := TRUE;
      END_IF;
  IF Init THEN 
  currentValue:=0;
  END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_singleSignal_Init
  VAR_INPUT
    data_Ini : BOOL;
    inverse : BOOL;
    DelayOn : TIME;
    DelayOff : TIME;
  END_VAR
  VAR_IN_OUT
    str_SS : struct_singleSignal;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры  singleSignal          *****)
  Init := FALSE;


      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          str_SS.inverse                := inverse;
          str_SS.DelayOn                := DelayOn;
          str_SS.DelayOff               := DelayOff;

          data_Ini:=FALSE;
          Init := TRUE;
      END_IF;
   IF Init THEN 
          inverse := FALSE;
          DelayOn := T#0S;
          DelayOff:= T#0S;
   END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_singleOutput_Init
  VAR_INPUT
    data_Ini : BOOL;
    inOpcCommandsDisabled : BOOL;
    wait_time : TIME;
  END_VAR
  VAR_IN_OUT
    str_SO : struct_singleOutput;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры  singleOutput          *****)

  Init := FALSE;

      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          str_SO.inOpcCommandsDisabled    := inOpcCommandsDisabled;
          str_SO.wait_time                := wait_time;

           data_Ini:=FALSE;
          Init := TRUE;
      END_IF;
   IF Init THEN 
          inOpcCommandsDisabled := FALSE;
          wait_time := T#0S;
     END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_IM_Init
  VAR_INPUT
    init : BOOL;
  END_VAR
  VAR
    stKr_Ini : fb_Kran_Init;
    stSw_Ini : fb_Switch_Init;
    stOp_Ini : fb_OilPump_Init;
    stSSw_Ini : fb_SectionSwitch_Init;
    stAp_Ini : fb_AnalogParametr_Init;
    stDp_Ini : fb_DiscretParametr_Init;
    stSs_Ini : fb_singleSignal_Init;
    stSo_Ini : fb_singleOutput_Init;
    inits : UINT;
  END_VAR
  VAR_INPUT
    initiales : UINT;
  END_VAR
  VAR_EXTERNAL
    IM : ImConfig;
  END_VAR

  inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)
                                       (* Стартовая инициализация ИМ *)
  (* Кран 1 *)
  stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, ISVALIDREF_inDp:=true,
        ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true, 
        str_Kr := IM.Kran1);
  inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

  (* Кран 2 *)
  stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true,
        str_Kr := IM.Kran2);
  inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

  (* Кран 3 *)
  stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true,
        str_Kr := IM.Kran3);
  inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

  (* Кран 3b *)
  stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true, continueHoldCommand:=T#5S,
        str_Kr := IM.Kran3b);
  inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

  (* Кран 4 *)
  stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true, 
        str_Kr := IM.Kran4);
  inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

  (* Кран 5 *)
  stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true, continueHoldCommand:=T#5S,
        str_Kr := IM.Kran5);
  inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

  (* Кран 6 *)
  stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true,  
        str_Kr := IM.Kran6);
  inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

  (* НУ1 Насос уплотнения *)
  stOp_Ini(data_Ini := true, ISVALIDREF_statOn:=true, (*ISVALIDREF_statOff:=true,*) 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Op := IM.nu1);
  inits := inits + BOOL_TO_UINT(stOp_Ini.Init);

  (* НУ2 Насос уплотнения *)
  stOp_Ini(data_Ini := true, ISVALIDREF_statOn:=true, (*ISVALIDREF_statOff:=true,*) 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Op := IM.nu2);
  inits := inits + BOOL_TO_UINT(stOp_Ini.Init);

  (* ПНС Насос смазки *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, (*ISVALIDREF_statOff:=true,*) 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.pns);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* В1 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, (*ISVALIDREF_statOff:=true,*) 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.v1_Avom);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);


  (* В2 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, (*ISVALIDREF_statOff:=true,*) 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.v2_Avom);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* В3 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, (*ISVALIDREF_statOff:=true,*) 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.v3_Avom);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* В4 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, (*ISVALIDREF_statOff:=true,*) 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.v4_Avom);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* МВ масляный выключатель *)
  stSSw_Ini(data_Ini := true, (*ISVALIDREF_statOn:=true,*) ISVALIDREF_statOff:=true,
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        (*ISVALIDREF_inBreakCmdOn:=true,*) ISVALIDREF_inBreakCmdOff:=true,
        ISVALIDREF_basketRolledIn:=true, ISVALIDREF_basketRolledout:=true,
        str_Sw := IM.mv);
  inits := inits + BOOL_TO_UINT(stSSw_Ini.Init);

  (* В4 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, (*ISVALIDREF_statOff:=true,*) 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.KaloriferAVOM);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* В4 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, (*ISVALIDREF_statOff:=true,*) 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.CMN);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* В4 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, (*ISVALIDREF_statOff:=true,*) 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.TEN_kollectora);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* В4 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, (*ISVALIDREF_statOff:=true,*) 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.TEN_MB);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init); 


                                       (* Стартовая инициализация singleSignal *)    
      (* Перепад давления «газ-газ» на кране 1 ≤1 кгс/см² *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.dP_maslo_gaz_Less100);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

   (* Осевой сдвиг ротора вправо ≥3,7 кгс/см² *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.dp_kran1_Less100);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

      (* Пробой вентиля *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Vozbud_neispr_tsepey_upr_AVR_pit);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

      (* Работа схемы ресинхронизации *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Vozbud_gotovnost);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

      (* Контроль состояния возбудительного устройства  *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Vozbud_neispravnost);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

      (* Неисправность форсировки воз-буждения  *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.SHAVR1_v_rabote);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность возбудительного устройства  *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.SHAVR2_v_rabote);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Готовность включения БЭО по отказу контроллера  *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Avariinoe_otkluch_vikluchatelya);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Срабатывание БЭАО  *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Assinhronnii_hod_peregruzka);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Выключатель основного ввода питания QF1  в положении включен   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF1_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Выключатель резервного ввода питания QF2  в положении включен   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF2_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Выключатель питания кранов:  QF23 110 В в положении включен   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF23_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Выключатели группы 1: QF4, QF5 в положении включен   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF4_QF5_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Выключатели группы 2: QF6, QF7 в положении включен   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF6_QF7_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Выключатели группы 3: QF8, QF9 в положении включен   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF8_QF9_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Выключатели группы 4: QF10, QF11 в положении включен   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF10_QF11_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Выключатели группы 5: QF12, QF13 в положении включен   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF12_QF13_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Выключатели группы 6: QF14, QF15 в положении включен   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF14_QF15_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Выключатели группы : QF22 в положении включен   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.QF22_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания группы 1: G1, G2 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G1_G2);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания группы 2: G3, G4 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G3_G4);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания внутренних ПТС: G15, G16 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G15_G16);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источника питания аналоговых сигналов: G17 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G17);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания группы 3: G5, G6 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G5_G6);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания группы 4: G7, G8 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G7_G8);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания внешних цепей: G18, G19 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G18_G19);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания группы 5: G9, G10, G11, G12 (=110 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G10_G11);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания G13, G14 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NS_G13_G14);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

      (* Неисправность источников питания G13, G14 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Uroven_masla_akkum);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания G13, G14 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.BEAO_srabotal);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания G13, G14 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Chastotny_pusk);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания G13, G14 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neuspesh_chastotny_pusk);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания G13, G14 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Rezhim_ruchnogo_regulirovaniya);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания G13, G14 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.SHU_v_GPA_vkluch);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

    (* Неисправность источников питания G13, G14 (=24 В)   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.SHP_v_GPA_vkluch);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.NKU1_GPA_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.NKU2_GPA_on);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.AO_KC_ot_SHKS);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.AO_GPA_ot_SHU);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Razreshenie_zagruzki_dvig);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Osnovnoy_regul_off);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Voltage_sekcii_norm);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Reactorny_pusk);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.NO_GPA_ot_SHU);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.AO_GPA_ot_PRU);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP1);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP2);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP3);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP4);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP5);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP6);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP7_BP8);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP9_BP10);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_cepei_upravlen_mv);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_220BEAO);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_per_220_na_vhode);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_post_220_na_vhode);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP11);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_BP12);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Dver_SHU_pered_otkrita);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Dver_SHU_zad_otkrita);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.EO_GPA_ot_knopki_SHU);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.EO_EGPA_ot_PRY);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*wait_time:=T#0S,*) str_SS := IM.SingleSignals.Synchroniz_rezhima_K1);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);


                                       (* Стартовая инициализация singleOutput *)
  (* Идикация НО (подсветка кнопки на шкафу)   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Rabota_EGPA);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Взвод включения БЭАО по неисправности ПТС   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, wait_time:=T#0S, str_SO := IM.SingleOutputs.Neispr_EGPA);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Авария ЭГПА в КЦ   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Avary_EGPA);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Авария ЭГПА в КЦ   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.U_lamp_SHU);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Индикация ПС Фонарь   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.AO_knopka_ind);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Индикация АС Фонарь   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Pusk_SHUP);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Stop_SHUP);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.NO_fonar);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.PC_fonar);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.AC_fonar);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Kr1_smazka);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Kr2_smazka);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Kr4_open_from_alg);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Отключение МВ1 от КНА   *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*wait_time:=T#0S,*) str_SO := IM.SingleOutputs.Synch_rej_K1);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);
  initiales := 0;

  IF init THEN initiales := inits; END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_Kran
  VAR_INPUT
    statOn : BOOL;
    statOff : BOOL;
    statOn_reliability : BOOL;
    statOff_reliability : BOOL;
  END_VAR
  VAR_IN_OUT
    strKr : struct_Kran;
  END_VAR
  VAR_INPUT
    inNs : TYPE_ReliableBit;
    inAccident : TYPE_ReliableBit;
    inAuto : TYPE_ReliableBit;
    inManual : TYPE_ReliableBit;
    inLocal : TYPE_ReliableBit;
    inDistance : TYPE_ReliableBit;
    inErrorPowerOff : TYPE_ReliableBit;
    inErrorBlock : TYPE_ReliableBit;
    inSo : TYPE_ReliableBit;
    inSz : TYPE_ReliableBit;
    inDp : TYPE_ReliableBit;
  END_VAR
  VAR
    onInit : BOOL := FALSE;
    _statOn : BOOL;
    _statOff : BOOL;
    getSdvig : BOOL;
    lastOnStatus : BYTE;
    cmd : BYTE;
    source : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusDualInput : TYPE_statusDualInput;
    _commandDualInput : TYPE_commandDualInput;
    _commandErrorTimer : BOOL;
    resetErrorTimer : BOOL;
    _changWithoutCommand : BOOL;
    BlockedOpenControl : BOOL;
    errorCMDTimer : TON;
    _errorReset : TON;
    sdvigReset : TON;
    continueHoldCommandTimer : TON;
    outputsSets : TOF;
    dP_Trig : R_TRIG;
    dP_Trig_reliability : R_TRIG;
    resetBlockedOpenControl_Trig : R_TRIG;
  END_VAR
  VAR_IN_OUT
    cmdOn : BOOL;
    cmdOff : BOOL;
  END_VAR

  IF NOT onInit THEN
  IF strKr.ISVALIDREF_cmdOn XOR strKr.ISVALIDREF_cmdOff THEN
  	IF 	strKr.ISVALIDREF_cmdOn THEN
  		lastCmd:= 2; (*baseCmdOff*) 
  	ELSE
  		lastCmd:= 1; (*baseCmdOn*) 
  	END_IF;
  END_IF;
  onInit:=TRUE;
  END_IF;

  (* ---- Если управление с ВУ заблокировано, то в ИМ передаем команду из алгоритма ---- *)
  IF strKr.inOpcCommandsDisabled THEN
  	strKr.inCommand := strKr.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	strKr.inCommand := strKr.inCommand_ARM;
  END_IF;

  (* ---- Формирование состояния механизма ---- *)

  IF (strKr.ISVALIDREF_statOn) OR (strKr.ISVALIDREF_statOff) THEN
  	IF (strKr.ISVALIDREF_statOn) AND (strKr.ISVALIDREF_statOff) THEN
  	strKr.reliability:= statOn_reliability AND statOff_reliability;
  		_statOn  := statOn;
  		_statOff := statOff;
  	ELSIF (strKr.ISVALIDREF_statOn) THEN
                       strKr.reliability:= statOn_reliability;	
  		_statOn  := statOn;
  		_statOff := NOT statOn; 
  	ELSIF (strKr.ISVALIDREF_statOff) THEN
  		 strKr.reliability:= statOff_reliability;	
  		_statOn  := NOT statOff;
  		_statOff :=statOff; 
  	END_IF;

  	IF strKr.reliability THEN 
  		IF _statOn AND NOT _statOff 		THEN 	strKr.onStatus := _statusDualInput.STATUS_ON;
  		ELSIF _statOff AND NOT _statOn 	THEN 	strKr.onStatus := _statusDualInput.Status_OFF;
  		ELSIF NOT _statOn AND NOT _statOff 	THEN 	strKr.onStatus := _statusDualInput.STATUS_TRANSITIONAL;
  		ELSE					strKr.onStatus := _statusDualInput.STATUS_ERROR;
                      END_IF;

  	ELSE
  		strKr.onStatus := _statusDualInput.STATUS_NOTDEFINED; 

  	END_IF;
  ELSE
  	CASE BYTE_TO_INT(lastCmd) OF	
  		(*baseCmdOn*)  1: strKr.onStatus  := _statusDualInput.STATUS_ON; 
  		(*baseCmdOff*) 2: strKr.onStatus  := _statusDualInput.STATUS_OFF;

  	ELSE
  		 strKr.onStatus := _statusDualInput.STATUS_NOTDEFINED;

  	END_CASE;
  END_IF;


  strKr.Accident := inAccident.value AND inAccident.reliability;
  strKr.Ns := inNs.value AND inNs.reliability;
  strKr.Auto := inAuto.value AND inAuto.reliability;
  strKr.Manual := inManual.value AND inManual.reliability;
  strKr.Local := inLocal.value AND inLocal.reliability;
  strKr.Distance := inDistance.value AND inDistance.reliability;
  strKr.ErrorPowerOff := inErrorPowerOff.value AND inErrorPowerOff.reliability;
  strKr.ErrorBlock := inErrorBlock.value AND inErrorBlock.reliability;
  strKr.OpcCommandsDisabled := strKr.inOpcCommandsDisabled;

  (* ---- Формирование признака блокировки Открытия крана по высокому давлению ---- *)
  	IF strKr.ISVALIDREF_inDp THEN

  		strKr.Dp := NOT inDp.value AND inDp.reliability;

  		dP_Trig(CLK := strKr.Dp );
  		dP_Trig_reliability(CLK :=NOT inDp.reliability);

  		IF dP_Trig.Q OR dP_Trig_reliability.Q THEN  
  			BlockedOpenControl := TRUE; 
  		END_IF;
  		(* ---- автоматический сброс *)
  		resetBlockedOpenControl_Trig(CLK := (inDp.value) AND inDp.reliability);
  		IF resetBlockedOpenControl_Trig.Q THEN 
  			BlockedOpenControl := FALSE;
  		END_IF;
  	ELSE
  		strKr.Dp  := FALSE;
  		BlockedOpenControl := FALSE;
  	END_IF;

  (* ---- Формирование признака сдвига ---- *)	
  getSdvig := FALSE;
  IF (strKr.ISVALIDREF_cmdOn OR strKr.ISVALIDREF_cmdOff) AND NOT strKr.Local THEN
  	IF NOT (strKr.CmdOn OR strKr.CmdOff) THEN
  		IF (lastOnStatus <> strKr.onStatus AND 
  		(strKr.onStatus <> _statusDualInput.STATUS_NOTDEFINED AND strKr.onStatus <> _statusDualInput.STATUS_ERROR) AND
  		(lastOnStatus <> _statusDualInput.STATUS_NOTDEFINED AND lastOnStatus <> _statusDualInput.STATUS_ERROR)) THEN
  			strKr.sdvig   := TRUE;
  		END_IF;
  	END_IF;
  END_IF;

  IF getSdvig THEN strKr.sdvig:= TRUE; END_IF;

  sdvigReset(IN:=strKr.sdvig, PT:=T#15S);

  IF sdvigReset.Q THEN strKr.sdvig:=FALSE; END_IF;

  lastOnStatus := strKr.onStatus;

  (* ---- Распаковка команды ---- *)
  _sunpackerCommand(command := strKr.inCommand);
  	cmd := _sunpackerCommand.cmd;
  	source := _sunpackerCommand.source;

  (* ---- Обработка команды ---- *)
  IF cmd <> 0 AND lastCmd <> cmd and (((NOT strKr.opcCommandsDisabled) AND source > 0) OR source = 0) then
  	CASE BYTE_TO_INT(cmd) OF
  	(*cmd_open*) 1 : 
  			IF NOT BlockedOpenControl THEN
                                IF  strKr.ISVALIDREF_cmdOn THEN strKr.CmdOn := TRUE;
  				IF strKr.ISVALIDREF_cmdOff THEN strKr.CmdOff := FALSE; END_IF;
  			ELSIF  strKr.ISVALIDREF_cmdOff THEN strKr.CmdOff := FALSE;  END_IF;
  			errorCMDTimer(IN := false);

  			_commandErrorTimer := true;
  			strKr.lastCmdIsOn := true;
                                END_IF;
  	(*cmd_close*) 2 : 
  			IF strKr.ISVALIDREF_cmdOff THEN strKr.CmdOff := TRUE;
  				IF strKr.ISVALIDREF_cmdOn THEN strKr.CmdOn := FALSE; END_IF;
  			ELSIF strKr.ISVALIDREF_cmdOn THEN strKr.CmdOn := FALSE; END_IF;
  			errorCMDTimer(IN := false);

  			_commandErrorTimer := true;
  			strKr.lastCmdIsOn := false;
  	(*cmd_reset*) 3 :   IF (strKr.ISVALIDREF_statOn) OR (strKr.ISVALIDREF_statOff) THEN
  			strKr.CmdOn := FALSE;
  			strKr.CmdOff := FALSE;
                                lastCmd := 0;
  			_commandErrorTimer := false;
  			strKr.lastCmdIsOn := false;
                                END_IF;

  	END_CASE;	
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	command_error_for_Status := 0;
  END_IF;
  lastCmd := cmd;

  errorCMDTimer(In := _commandErrorTimer, PT :=T#90s);


  continueHoldCommandTimer(IN:=(strKr.onStatus = _statusDualInput.STATUS_ON) OR
  (strKr.onStatus = _statusDualInput.STATUS_OFF), PT:=strKr.continueHoldCommand);


  (* ---- алгоритм  для команды ВКЛючить ---- *)
  IF (strKr.onStatus = _statusDualInput.STATUS_ON) and strKr.lastCmdIsOn  then
  	IF strKr.ISVALIDREF_cmdOn AND strKr.ISVALIDREF_cmdOff then  
            IF continueHoldCommandTimer.Q THEN 
            strKr.cmdOn := false; END_IF;
            END_IF;
  	 errorCMDTimer(In := false); 
  	 _commandErrorTimer := false;
  	 cmd_for_Status := 0;
  	 source_for_Status := 0;
  END_IF;

  (* ---- off ---- *)
  IF (strKr.onStatus = _statusDualInput.STATUS_OFF) and  (NOT strKr.lastCmdIsOn) then
  	IF strKr.ISVALIDREF_cmdOn AND strKr.ISVALIDREF_cmdOff then
            IF continueHoldCommandTimer.Q THEN
            strKr.cmdOff := false; END_IF;
            END_IF;
  	 errorCMDTimer(In := false); 
  	 _commandErrorTimer := false;
  	 cmd_for_Status := 0;
  	 source_for_Status := 0;
  END_IF;

  (* ---- ошибка исполнения команды ---- *)
  if errorCMDTimer.Q and (cmd_for_Status <> 0) then
  	command_error_for_Status :=  cmd_for_Status;
  	_commandErrorTimer := false;
  	strKr.CmdOn := false;
  	strKr.CmdOff := false;
  	(*lastCmd := 0;*)
  END_IF;

  (* ---- сброс ошибки команды ---- *)
  strKr.CommandFault := command_error_for_Status <> 0;
  _errorReset(IN := command_error_for_Status <> 0, PT := T#5S);
  IF _errorReset.Q THEN
  	cmd_for_Status := 0;
  	source_for_Status := 0;
  	command_error_for_Status := 0;

  END_IF;

  outputsSets(in := (strKr.ISVALIDREF_cmdOn and strKr.cmdOn ) OR (strKr.ISVALIDREF_cmdOff and strKr.cmdOff), PT := T#2S);
  	IF NOT outputsSets.Q THEN
  		strKr.So := inSo._inversed AND inSo.reliability AND strKr.ISVALIDREF_inSo;
  		strKr.Sz := inSz._inversed AND inSz.reliability AND strKr.ISVALIDREF_inSz;
  	END_IF;

  cmdOn := strKr.cmdOn;
  cmdOff:= strKr.cmdOff;       

  (* ---- формирование зашифрованного статуса для АРМа ---- *)
  strKr.status := shl(BYTE_TO_DWORD(source_for_Status), 29) 
  		OR shl(BYTE_TO_DWORD(cmd_for_Status), 26) 
  		OR shl(BYTE_TO_DWORD(command_error_for_Status), 23)
  		OR shl(bool_to_DWORD(strKr.sdvig), 22)
  		OR shl(bool_to_DWORD(strKr.OpcCommandsDisabled), 21)
                      OR shl(bool_to_DWORD(strKr.Dp), 14) 
                      OR shl(BOOL_TO_DWORD(strKr.Sz), 13) 
  		OR shl(BOOL_TO_DWORD(strKr.So), 12)
  		OR shl(BOOL_TO_DWORD(strKr.ErrorBlock), 11) 
  		OR shl(BOOL_TO_DWORD(strKr.ErrorPowerOff), 10) 
  		OR shl(BOOL_TO_DWORD(strKr.Manual), 8) 
  		OR shl(BOOL_TO_DWORD(strKr.Auto), 7) 
  		OR shl(BOOL_TO_DWORD(strKr.Distance), 6) 
  		OR shl(BOOL_TO_DWORD(strKr.Local), 5) 
  		OR shl(BOOL_TO_DWORD(strKr.Ns), 4) 
                  	OR shl(BOOL_TO_DWORD(strKr.Accident ),3)
  		OR BYTE_TO_DWORD(strKr.onStatus);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_OilPump
  VAR_INPUT
    statOn : BOOL;
    statOff : BOOL;
    statOn_reliability : BOOL;
    statOff_reliability : BOOL;
  END_VAR
  VAR_IN_OUT
    StrSw : struct_OilPump;
  END_VAR
  VAR_INPUT
    inNs : TYPE_ReliableBit;
    inAccident : TYPE_ReliableBit;
    inLocal : TYPE_ReliableBit;
    inDistance : TYPE_ReliableBit;
    inBreakCmdOn : TYPE_ReliableBit;
    inBreakCmdOff : TYPE_ReliableBit;
  END_VAR
  VAR
    onInit : BOOL := FALSE;
    _statOn : BOOL;
    _statOff : BOOL;
    getSdvig : BOOL;
    lastOnStatus : BYTE;
    cmd : BYTE;
    source : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusDualInput : TYPE_statusDualInput;
    _commandDualInput : TYPE_commandDualInput;
    _commandErrorTimer : BOOL;
    resetErrorTimer : BOOL;
    _changWithoutCommand : BOOL;
    errorCMDTimer : TON;
    sdvigReset : TON;
    _errorReset : TON;
    outputsSets : TOF;
  END_VAR
  VAR_IN_OUT
    cmdOn : BOOL;
    cmdOff : BOOL;
  END_VAR

  IF NOT onInit THEN
  IF StrSw.ISVALIDREF_cmdOn XOR StrSw.ISVALIDREF_cmdOff THEN
  	IF 	StrSw.ISVALIDREF_cmdOn THEN
  		lastCmd:= 2; (*baseCmdOff*) 
  	ELSE
  		lastCmd:= 1; (*baseCmdOn*) 
  	END_IF;
  END_IF;
  onInit:=TRUE;
  END_IF;

  (* ---- Если управление с ВУ заблокировано, то в ИМ передаем команду из алгоритма ---- *)
  IF StrSw.inOpcCommandsDisabled THEN
  	StrSw.inCommand := StrSw.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	StrSw.inCommand := StrSw.inCommand_ARM;
  END_IF;

  (* ---- Формирование состояния механизма ---- *)

  IF (StrSw.ISVALIDREF_statOn) OR (StrSw.ISVALIDREF_statOff) THEN
  	IF (StrSw.ISVALIDREF_statOn) AND (StrSw.ISVALIDREF_statOff) THEN
  	StrSw.reliability:= statOn_reliability AND statOff_reliability;
  		_statOn  := statOn;
  		_statOff := statOff;
  	ELSIF (StrSw.ISVALIDREF_statOn) THEN
                       StrSw.reliability:= statOn_reliability;	
  		_statOn  := statOn;
  		_statOff := NOT statOn; 
  	ELSIF (StrSw.ISVALIDREF_statOff) THEN
  		 StrSw.reliability:= statOff_reliability;	
  		_statOn  := NOT statOff;
  		_statOff :=statOff; 
  	END_IF;

  	IF StrSw.reliability THEN
  		IF _statOn AND NOT _statOff 		THEN 	StrSw.onStatus := _statusDualInput.STATUS_ON;
  		ELSIF _statOff AND NOT _statOn 	THEN 	StrSw.onStatus := _statusDualInput.Status_OFF;
  		ELSIF NOT _statOn AND NOT _statOff 	THEN 	StrSw.onStatus := _statusDualInput.STATUS_TRANSITIONAL;
  		ELSE					StrSw.onStatus := _statusDualInput.STATUS_ERROR;
                      END_IF;

  	ELSE
  		StrSw.onStatus := _statusDualInput.STATUS_NOTDEFINED;

  	END_IF;
  ELSE
  	CASE BYTE_TO_INT(lastCmd) OF	
  		(*baseCmdOn*) 1: StrSw.onStatus  := _statusDualInput.STATUS_ON; 
  		(*baseCmdOff*) 2: StrSw.onStatus  := _statusDualInput.STATUS_OFF;

  	ELSE
  		 StrSw.onStatus := _statusDualInput.STATUS_NOTDEFINED;

  	END_CASE;
  END_IF;


  StrSw.Accident := inAccident.value AND inAccident.reliability;
  StrSw.Ns := inNs.value AND inNs.reliability;
  StrSw.Local := inLocal.value AND inLocal.reliability;
  StrSw.Distance := inDistance.value AND inDistance.reliability;
  StrSw.OpcCommandsDisabled := StrSw.inOpcCommandsDisabled;

  StrSw.Blocked:=StrSw.Accident OR StrSw.Local OR StrSw.breakCmdOn OR StrSw.breakCmdOff OR StrSw.inBlocked;

  StrSw.Rezervny:=NOT StrSw.Osnovnoy;

  (* ---- Формирование признака сдвига ---- *)

  getSdvig := FALSE;
  IF (StrSw.ISVALIDREF_cmdOn OR StrSw.ISVALIDREF_cmdOff) AND NOT StrSw.Local THEN
  	IF NOT (StrSw.CmdOn OR StrSw.CmdOff) THEN
                       IF (lastOnStatus <> StrSw.onStatus AND 
  		(StrSw.onStatus <> _statusDualInput.STATUS_NOTDEFINED AND
                       StrSw.onStatus <> _statusDualInput.STATUS_ERROR)     AND
  		(lastOnStatus <> _statusDualInput.STATUS_NOTDEFINED   AND
                       lastOnStatus <> _statusDualInput.STATUS_ERROR))      
                      THEN
  			getSdvig   := TRUE;
  		END_IF;
  	END_IF;
  END_IF;

  IF getSdvig THEN StrSw.sdvig:= TRUE; END_IF;

  sdvigReset(IN:=StrSw.sdvig, PT:=T#15S);

  IF sdvigReset.Q THEN StrSw.sdvig:=FALSE; END_IF;

  lastOnStatus := StrSw.onStatus;

  (* ---- Распаковка команды ---- *)
  _sunpackerCommand(command := StrSw.inCommand);
  	cmd := _sunpackerCommand.cmd;
  	source := _sunpackerCommand.source;

  (* ---- Обработка команды ---- *)
  IF cmd <> 0 AND lastCmd <> cmd and (((NOT StrSw.opcCommandsDisabled) AND source > 0) OR source = 0) then
  	CASE BYTE_TO_INT(cmd) OF
  	(*cmd_on*) 1 : 
  			IF  StrSw.ISVALIDREF_cmdOn THEN StrSw.CmdOn := TRUE;
  				IF StrSw.ISVALIDREF_cmdOff THEN StrSw.CmdOff := FALSE; END_IF;
  			ELSIF  StrSw.ISVALIDREF_cmdOff THEN StrSw.CmdOff := FALSE;  END_IF;
  			errorCMDTimer(IN := false);
  			_commandErrorTimer := true;
  			StrSw.lastCmdIsOn := true;
  	(*cmd_off*) 2 : 
  			IF StrSw.ISVALIDREF_cmdOff THEN StrSw.CmdOff := TRUE;
  				IF StrSw.ISVALIDREF_cmdOn THEN StrSw.CmdOn := FALSE; END_IF;
  			ELSIF StrSw.ISVALIDREF_cmdOn THEN StrSw.CmdOn := FALSE; END_IF;
  			errorCMDTimer(IN := false);

  			_commandErrorTimer := true;
  			StrSw.lastCmdIsOn := false;
  	(*cmd_reset*) 3 :    IF StrSw.ISVALIDREF_statOn OR StrSw.ISVALIDREF_statOff THEN
  			StrSw.CmdOn := FALSE;
  			StrSw.CmdOff := FALSE;
                                lastCmd := 0;
  			_commandErrorTimer := false;
  			StrSw.lastCmdIsOn := false;
                                 END_IF;
  	END_CASE;	
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	command_error_for_Status := 0;
  END_IF;

  lastCmd := cmd;
  errorCMDTimer(In := _commandErrorTimer, PT :=T#10s);

  (* ---- алгоритм  для команды ВКЛючить ---- *)
  IF (StrSw.onStatus = _statusDualInput.STATUS_ON) and StrSw.lastCmdIsOn then
  	IF StrSw.ISVALIDREF_cmdOn AND StrSw.ISVALIDREF_cmdOff then  StrSw.cmdOn := false; END_IF;

  	 errorCMDTimer(In := false); 
  	 _commandErrorTimer := false;
  	 cmd_for_Status := 0;
  	 source_for_Status := 0;
  END_IF;

  (* ---- off ---- *)
  IF (StrSw.onStatus = _statusDualInput.STATUS_OFF) and (NOT StrSw.lastCmdIsOn) then
  	IF StrSw.ISVALIDREF_cmdOn AND StrSw.ISVALIDREF_cmdOff then  StrSw.cmdOff := false; END_IF;

  	 errorCMDTimer(In := false); 
  	 _commandErrorTimer := false;
  	 cmd_for_Status := 0;
  	 source_for_Status := 0;
  END_IF;

  (* ---- ошибка исполнения команды ---- *)
  if errorCMDTimer.Q and (cmd_for_Status <> 0) then
  	command_error_for_Status :=  cmd_for_Status;
  	_commandErrorTimer := false;
  	StrSw.CmdOn := false;
  	StrSw.CmdOff := false;
  	lastCmd := 0;
  end_if;

  (* ---- сброс ошибки команды ---- *)
  StrSw.CommandFault := command_error_for_Status <> 0;
  _errorReset(IN := command_error_for_Status <> 0, PT := T#5S);
  IF _errorReset.Q THEN
  	cmd_for_Status := 0;
  	source_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF;

  outputsSets(in := (StrSw.ISVALIDREF_cmdOn and StrSw.cmdOn ) OR (StrSw.ISVALIDREF_cmdOff and StrSw.cmdOff), PT := T#2S);
  	IF NOT outputsSets.Q THEN
  		StrSw.BreakCmdOn := inBreakCmdOn._inversed AND inBreakCmdOn.reliability AND StrSw.ISVALIDREF_inBreakCmdOn;
  		StrSw.BreakCmdOff := inBreakCmdOff._inversed AND inBreakCmdOff.reliability AND StrSw.ISVALIDREF_inBreakCmdOff;
  	END_IF;

  cmdOn := StrSw.cmdOn;
  cmdOff:= StrSw.cmdOff;           

  (* ---- формирование зашифрованного статуса для АРМа ---- *)
  StrSw.status := shl(BYTE_TO_DWORD(source_for_Status), 29) 
  		OR shl(BYTE_TO_DWORD(cmd_for_Status), 26) 
  		OR shl(BYTE_TO_DWORD(command_error_for_Status), 23)
  		OR shl(bool_to_DWORD(StrSw.sdvig), 22)
  		OR shl(bool_to_DWORD(StrSw.OpcCommandsDisabled), 21)
                      OR shl(bool_to_DWORD(StrSw.lastCmdIsOn), 14)
                      OR shl(BOOL_TO_DWORD(StrSw.BreakCmdOff), 13) 
  		OR shl(BOOL_TO_DWORD(StrSw.BreakCmdOn), 12)
  		OR shl(BOOL_TO_DWORD(StrSw.Distance), 6) 
  		OR shl(BOOL_TO_DWORD(StrSw.Local), 5) 
  		OR shl(BOOL_TO_DWORD(StrSw.Ns), 4) 
                  	OR shl(BOOL_TO_DWORD(StrSw.Accident ),3)
  		OR BYTE_TO_DWORD(StrSw.onStatus);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_Switch
  VAR_INPUT
    statOn : BOOL;
    statOff : BOOL;
    statOn_reliability : BOOL;
    statOff_reliability : BOOL;
  END_VAR
  VAR_IN_OUT
    StrSw : struct_Switch;
  END_VAR
  VAR_INPUT
    inNs : TYPE_ReliableBit;
    inAccident : TYPE_ReliableBit;
    inAuto : TYPE_ReliableBit;
    inManual : TYPE_ReliableBit;
    inLocal : TYPE_ReliableBit;
    inDistance : TYPE_ReliableBit;
    inErrorPowerOff : TYPE_ReliableBit;
    inErrorBlock : TYPE_ReliableBit;
    inBreakCmdOn : TYPE_ReliableBit;
    inBreakCmdOff : TYPE_ReliableBit;
  END_VAR
  VAR
    onInit : BOOL := FALSE;
    _statOn : BOOL;
    _statOff : BOOL;
    lastOnStatus : BYTE;
    cmd : BYTE;
    source : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusDualInput : TYPE_statusDualInput;
    _commandDualInput : TYPE_commandDualInput;
    _commandErrorTimer : BOOL;
    resetErrorTimer : BOOL;
    getSdvig : BOOL;
    _changWithoutCommand : BOOL;
    errorCMDTimer : TON;
    sdvigReset : TON;
    _errorReset : TON;
    outputsSets : TOF;
  END_VAR
  VAR_IN_OUT
    cmdOn : BOOL;
    cmdOff : BOOL;
  END_VAR

  IF NOT onInit THEN
  IF StrSw.ISVALIDREF_cmdOn XOR StrSw.ISVALIDREF_cmdOff THEN
  	IF 	StrSw.ISVALIDREF_cmdOn THEN
  		lastCmd:= 2; (*baseCmdOff*) 
  	ELSE
  		lastCmd:= 1; (*baseCmdOn*) 
  	END_IF;
  END_IF;
  onInit:=TRUE;
  END_IF;

  (* ---- Если управление с ВУ заблокировано, то в ИМ передаем команду из алгоритма ---- *)
  IF StrSw.inOpcCommandsDisabled THEN
  	StrSw.inCommand := StrSw.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	StrSw.inCommand := StrSw.inCommand_ARM;
  END_IF;

  (* ---- Формирование состояния механизма ---- *)

  IF (StrSw.ISVALIDREF_statOn) OR (StrSw.ISVALIDREF_statOff) THEN
  	IF (StrSw.ISVALIDREF_statOn) AND (StrSw.ISVALIDREF_statOff) THEN
  	StrSw.reliability:= statOn_reliability AND statOff_reliability;
  		_statOn  := statOn;
  		_statOff := statOff;
  	ELSIF (StrSw.ISVALIDREF_statOn) THEN
                       StrSw.reliability:= statOn_reliability;	
  		_statOn  := statOn;
  		_statOff := NOT statOn; 
  	ELSIF (StrSw.ISVALIDREF_statOff) THEN
  		 StrSw.reliability:= statOff_reliability;	
  		_statOn  := NOT statOff;
  		_statOff :=statOff; 
  	END_IF;

  	IF StrSw.reliability THEN
  		IF _statOn AND NOT _statOff 		THEN 	StrSw.onStatus := _statusDualInput.STATUS_ON;
  		ELSIF _statOff AND NOT _statOn 	THEN 	StrSw.onStatus := _statusDualInput.Status_OFF;
  		ELSIF NOT _statOn AND NOT _statOff 	THEN 	StrSw.onStatus := _statusDualInput.STATUS_TRANSITIONAL;
  		ELSE					StrSw.onStatus := _statusDualInput.STATUS_ERROR;
                      END_IF;

  	ELSE
  		StrSw.onStatus := _statusDualInput.STATUS_NOTDEFINED;

  	END_IF;
  ELSE
  	CASE BYTE_TO_INT(lastCmd) OF	
  		(*baseCmdOn*) 1: StrSw.onStatus  := _statusDualInput.STATUS_ON; 
  		(*baseCmdOff*) 2: StrSw.onStatus  := _statusDualInput.STATUS_OFF;

  	ELSE
  		 StrSw.onStatus := _statusDualInput.STATUS_NOTDEFINED;

  	END_CASE;
  END_IF;


  StrSw.Accident := inAccident.value AND inAccident.reliability;
  StrSw.Ns := inNs.value AND inNs.reliability;
  StrSw.Auto := inAuto.value AND inAuto.reliability;
  StrSw.Manual := inManual.value AND inManual.reliability;
  StrSw.Local := inLocal.value AND inLocal.reliability;
  StrSw.Distance := inDistance.value AND inDistance.reliability;
  StrSw.ErrorPowerOff := inErrorPowerOff.value AND inErrorPowerOff.reliability;
  StrSw.ErrorBlock := inErrorBlock.value AND inErrorBlock.reliability;
  StrSw.OpcCommandsDisabled := StrSw.inOpcCommandsDisabled;

  (* ---- Формирование признака сдвига ---- *)	
  getSdvig := FALSE;
  IF (StrSw.ISVALIDREF_cmdOn OR StrSw.ISVALIDREF_cmdOff) AND NOT StrSw.Local THEN
  	IF NOT (StrSw.CmdOn OR StrSw.CmdOff) THEN
                       IF (lastOnStatus <> StrSw.onStatus AND 
  		(StrSw.onStatus <> _statusDualInput.STATUS_NOTDEFINED AND
                       StrSw.onStatus <> _statusDualInput.STATUS_ERROR)     AND
  		(lastOnStatus <> _statusDualInput.STATUS_NOTDEFINED   AND
                       lastOnStatus <> _statusDualInput.STATUS_ERROR))      
                      THEN
  			getSdvig   := TRUE;
  		END_IF;
  	END_IF;
  END_IF;

  IF getSdvig THEN StrSw.sdvig:= TRUE; END_IF;

  sdvigReset(IN:=StrSw.sdvig, PT:=T#15S);

  IF sdvigReset.Q THEN StrSw.sdvig:=FALSE; END_IF;

  lastOnStatus := StrSw.onStatus;

  (* ---- Распаковка команды ---- *)
  _sunpackerCommand(command := StrSw.inCommand);
  	cmd := _sunpackerCommand.cmd;
  	source := _sunpackerCommand.source;

  (* ---- Обработка команды ---- *)
  IF cmd <> 0 AND lastCmd <> cmd and (((NOT StrSw.opcCommandsDisabled) AND source > 0) OR source = 0) then
  	CASE BYTE_TO_INT(cmd) OF
  	(*cmd_open*) 1 : 
  			IF  StrSw.ISVALIDREF_cmdOn THEN StrSw.CmdOn := TRUE;
  				IF StrSw.ISVALIDREF_cmdOff THEN StrSw.CmdOff := FALSE; END_IF;
  			ELSIF  StrSw.ISVALIDREF_cmdOff THEN StrSw.CmdOff := FALSE;  END_IF;
                                lastCmd := cmd;
  			errorCMDTimer(IN := false);
  			_commandErrorTimer := true;
  			StrSw.lastCmdIsOn := true;
  	(*cmd_close*) 2 : 
  			IF StrSw.ISVALIDREF_cmdOff THEN StrSw.CmdOff := TRUE;
  				IF StrSw.ISVALIDREF_cmdOn THEN StrSw.CmdOn := FALSE; END_IF;
  			ELSIF StrSw.ISVALIDREF_cmdOn THEN StrSw.CmdOn := FALSE; END_IF;
                                lastCmd := cmd;
  			errorCMDTimer(IN := false);
  			_commandErrorTimer := true;
  			StrSw.lastCmdIsOn := false;
  	(*cmd_reset*) 3 :    IF StrSw.ISVALIDREF_statOn OR StrSw.ISVALIDREF_statOff THEN
  			StrSw.CmdOn := FALSE;
  			StrSw.CmdOff := FALSE;
                                lastCmd :=0;
  			_commandErrorTimer := false;
  			StrSw.lastCmdIsOn := false;
                                 END_IF;
  	END_CASE;	
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	command_error_for_Status := 0;
  END_IF;


  errorCMDTimer(In := _commandErrorTimer, PT :=T#10s);

  (* ---- алгоритм  для команды ВКЛючить ---- *)
  IF (StrSw.onStatus = _statusDualInput.STATUS_ON) and StrSw.lastCmdIsOn then
  	IF StrSw.ISVALIDREF_cmdOn AND StrSw.ISVALIDREF_cmdOff then  StrSw.cmdOn := false; END_IF;

  	 errorCMDTimer(In := false); 
  	 _commandErrorTimer := false;
  	 cmd_for_Status := 0;
  	 source_for_Status := 0;
  END_IF;

  (* ---- off ---- *)
  IF (StrSw.onStatus = _statusDualInput.STATUS_OFF) and (NOT StrSw.lastCmdIsOn) then
  	IF StrSw.ISVALIDREF_cmdOn AND StrSw.ISVALIDREF_cmdOff then  StrSw.cmdOff := false; END_IF;

  	 errorCMDTimer(In := false); 
  	 _commandErrorTimer := false;
  	 cmd_for_Status := 0;
  	 source_for_Status := 0;
  END_IF;

  (* ---- ошибка исполнения команды ---- *)
  if errorCMDTimer.Q and (cmd_for_Status <> 0) then
  	command_error_for_Status :=  cmd_for_Status;
  	_commandErrorTimer := false;
  	StrSw.CmdOn := false;
  	StrSw.CmdOff := false;
  	lastCmd := 0;
  end_if;

  (* ---- сброс ошибки команды ---- *)
  StrSw.CommandFault := command_error_for_Status <> 0;
  _errorReset(IN := command_error_for_Status <> 0, PT := T#5S);
  IF _errorReset.Q THEN
  	cmd_for_Status := 0;
  	source_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF;

  outputsSets(in := (StrSw.ISVALIDREF_cmdOn and StrSw.cmdOn ) OR (StrSw.ISVALIDREF_cmdOff and StrSw.cmdOff), PT := T#2S);
  	IF NOT outputsSets.Q THEN
  		StrSw.BreakCmdOn := inBreakCmdOn._inversed AND
                      inBreakCmdOn.reliability AND StrSw.ISVALIDREF_inBreakCmdOn;

  		StrSw.BreakCmdOff := inBreakCmdOff._inversed
                      AND inBreakCmdOff.reliability AND StrSw.ISVALIDREF_inBreakCmdOff;
  	END_IF;

  cmdOn := StrSw.cmdOn;
  cmdOff:= StrSw.cmdOff;  

  (* ---- формирование зашифрованного статуса для АРМа ---- *)
  StrSw.status := shl(BYTE_TO_DWORD(source_for_Status), 29) 
  		OR shl(BYTE_TO_DWORD(cmd_for_Status), 26) 
  		OR shl(BYTE_TO_DWORD(command_error_for_Status), 23)
  		OR shl(bool_to_DWORD(StrSw.sdvig), 22)
  		OR shl(bool_to_DWORD(StrSw.OpcCommandsDisabled), 21)
                      OR shl(bool_to_DWORD(StrSw.lastCmdIsOn), 14)
                      OR shl(BOOL_TO_DWORD(StrSw.BreakCmdOff), 13) 
  		OR shl(BOOL_TO_DWORD(StrSw.BreakCmdOn), 12)
  		OR shl(BOOL_TO_DWORD(StrSw.ErrorBlock), 11) 
  		OR shl(BOOL_TO_DWORD(StrSw.ErrorPowerOff), 10) 
  		OR shl(BOOL_TO_DWORD(StrSw.Manual), 8) 
  		OR shl(BOOL_TO_DWORD(StrSw.Auto), 7) 
  		OR shl(BOOL_TO_DWORD(StrSw.Distance), 6) 
  		OR shl(BOOL_TO_DWORD(StrSw.Local), 5) 
  		OR shl(BOOL_TO_DWORD(StrSw.Ns), 4) 
                  	OR shl(BOOL_TO_DWORD(StrSw.Accident ),3)
  		OR BYTE_TO_DWORD(StrSw.onStatus);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_SectionSwitch
  VAR_INPUT
    statOn : BOOL;
    statOff : BOOL;
    statOn_reliability : BOOL;
    statOff_reliability : BOOL;
  END_VAR
  VAR_IN_OUT
    StrSw : struct_SectionSwitch;
  END_VAR
  VAR_INPUT
    basketRolledIn : TYPE_ReliableBit;
    basketRolledOut : TYPE_ReliableBit;
    basketTest : TYPE_ReliableBit;
    inNs : TYPE_ReliableBit;
    inoffKNA : TYPE_ReliableBit;
    inAccident : TYPE_ReliableBit;
    inLocal : TYPE_ReliableBit;
    inDistance : TYPE_ReliableBit;
    inBreakCmdOn : TYPE_ReliableBit;
    inBreakCmdOff : TYPE_ReliableBit;
  END_VAR
  VAR
    onInit : BOOL := FALSE;
    _statOn : BOOL;
    _statOff : BOOL;
    getSdvig : BOOL;
    lastOnStatus : BYTE;
    cmd : BYTE;
    source : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    _basketRolledIn : TYPE_ReliableBit;
    _basketRolledOut : TYPE_ReliableBit;
    _basketTest : TYPE_ReliableBit;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusDualInput : TYPE_statusDualInput;
    _statusBasket : TYPE_basketStats;
    _commandDualInput : TYPE_commandDualInput;
    _commandErrorTimer : BOOL;
    resetErrorTimer : BOOL;
    _changWithoutCommand : BOOL;
    errorCMDTimer : TON;
    _errorReset : TON;
    sdvigReset : TON;
    outputsSets : TOF;
  END_VAR
  VAR_IN_OUT
    cmdOn : BOOL;
    cmdOff : BOOL;
  END_VAR

  IF NOT onInit THEN
  IF StrSw.ISVALIDREF_cmdOn XOR StrSw.ISVALIDREF_cmdOff THEN
  	IF 	StrSw.ISVALIDREF_cmdOn THEN
  		lastCmd:= 2; (*baseCmdOff*) 
  	ELSE
  		lastCmd:= 1; (*baseCmdOn*) 
  	END_IF;
  END_IF;
  onInit:=TRUE;
  END_IF;

  (* ---- Формирование состояния тележки ---- *)

  IF (NOT StrSw.ISVALIDREF_basketRolledIn) AND (NOT StrSw.ISVALIDREF_basketRolledOut) THEN
            StrSw.basketStatus:=_statusBasket.BASKET_NOTDEFINED;
  ELSE
  		IF StrSw.ISVALIDREF_basketTest THEN
  		_basketTest:=basketTest;
  	ELSE
  		_basketTest.reliability:=TRUE;
  		_basketTest.value :=FALSE;
  	END_IF;

  	IF StrSw.ISVALIDREF_basketRolledIn THEN
  		_basketRolledIn:=basketRolledIn;
  	ELSE
  		_basketRolledIn:=basketRolledOut;
  		IF StrSw.ISVALIDREF_basketTest THEN
  		_basketRolledIn.value:=NOT (_basketRolledIn.value OR _basketTest.value);	
  		ELSE
  		_basketRolledIn.value:= NOT _basketRolledIn.value;	
  		END_IF;

  	END_IF;

  	IF StrSw.ISVALIDREF_basketRolledOut THEN
  		_basketRolledOut:=basketRolledOut;
  	ELSE
  		_basketRolledOut:=basketRolledIn;
  		IF StrSw.ISVALIDREF_basketTest THEN
  		_basketRolledOut.value:= NOT (_basketRolledOut.value OR _basketTest.value );	
  		ELSE
  			_basketRolledOut.value := NOT _basketRolledout.value;	
  		END_IF;

  	END_IF;

  IF _basketRolledIn.reliability AND _basketRolledOut.reliability AND _basketTest.reliability THEN
  		IF (BOOL_TO_INT(_basketRolledIn.value)+BOOL_TO_INT(_basketRolledOut.value)+BOOL_TO_INT(_basketTest.value))=1 THEN
  			IF _basketRolledIn.value THEN
  				StrSw.basketStatus:=_statusBasket.BASKET_ROLLEDIN;
  			ELSIF _basketRolledOut.value THEN
  				StrSw.basketStatus:=_statusBasket.BASKET_ROLLEDOUT;
  			ELSIF _basketTest.value THEN
  				StrSw.basketStatus:=_statusBasket.BASKET_TEST;
  			END_IF;
  		ELSE			
  			StrSw.basketStatus:=_statusBasket.BASKET_ERROR;
  		END_IF;
  	ELSE
  		StrSw.basketStatus:=_statusBasket.BASKET_NOTDEFINED;
  	END_IF;
  END_IF;

  (* ---- Если управление с ВУ заблокировано, то в ИМ передаем команду из алгоритма ---- *)
  IF StrSw.inOpcCommandsDisabled THEN
  	StrSw.inCommand := StrSw.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	StrSw.inCommand := StrSw.inCommand_ARM;
  END_IF;

  (* ---- Формирование состояния механизма ---- *)

  IF (StrSw.ISVALIDREF_statOn) OR (StrSw.ISVALIDREF_statOff) THEN
  	IF (StrSw.ISVALIDREF_statOn) AND (StrSw.ISVALIDREF_statOff) THEN
  	StrSw.reliability:= statOn_reliability AND statOff_reliability;
  		_statOn  := statOn;
  		_statOff := statOff;
  	ELSIF (StrSw.ISVALIDREF_statOn) THEN
                       StrSw.reliability:= statOn_reliability;	
  		_statOn  := statOn;
  		_statOff := NOT statOn; 
  	ELSIF (StrSw.ISVALIDREF_statOff) THEN
  		 StrSw.reliability:= statOff_reliability;	
  		_statOn  := NOT statOff;
  		_statOff :=statOff; 
  	END_IF;

  	IF StrSw.reliability THEN
  		IF _statOn AND NOT _statOff 		THEN 	StrSw.onStatus := _statusDualInput.STATUS_ON;
  		ELSIF _statOff AND NOT _statOn 	THEN 	StrSw.onStatus := _statusDualInput.Status_OFF;
  		ELSIF NOT _statOn AND NOT _statOff 	THEN 	StrSw.onStatus := _statusDualInput.STATUS_TRANSITIONAL;
  		ELSE					StrSw.onStatus := _statusDualInput.STATUS_ERROR;
                      END_IF;

  	ELSE
  		StrSw.onStatus := _statusDualInput.STATUS_NOTDEFINED;

  	END_IF;
  ELSE
  	CASE BYTE_TO_INT(lastCmd) OF	
  		(*baseCmdOn*) 1: StrSw.onStatus  := _statusDualInput.STATUS_ON; 
  		(*baseCmdOff*) 2: StrSw.onStatus  := _statusDualInput.STATUS_OFF;

  	ELSE
  		 StrSw.onStatus := _statusDualInput.STATUS_NOTDEFINED;

  	END_CASE;
  END_IF;


  StrSw.Accident := inAccident.value AND inAccident.reliability;
  StrSw.Ns := inNs.value AND inNs.reliability;
  StrSw.Local := inLocal.value AND inLocal.reliability;
  StrSw.Distance := inDistance.value AND inDistance.reliability;
  StrSw.OpcCommandsDisabled := StrSw.inOpcCommandsDisabled;
  StrSw.offKNA := inoffKNA.value AND inoffKNA.reliability;

  (* ---- Формирование признака сдвига ---- *)

  getSdvig := FALSE;
  IF (StrSw.ISVALIDREF_cmdOn OR StrSw.ISVALIDREF_cmdOff) AND NOT StrSw.Local THEN
  	IF NOT (StrSw.CmdOn OR StrSw.CmdOff) THEN
                       IF (lastOnStatus <> StrSw.onStatus AND 
  		(StrSw.onStatus <> _statusDualInput.STATUS_NOTDEFINED AND
                       StrSw.onStatus <> _statusDualInput.STATUS_ERROR)     AND
  		(lastOnStatus <> _statusDualInput.STATUS_NOTDEFINED   AND
                       lastOnStatus <> _statusDualInput.STATUS_ERROR))      
                      THEN
  			getSdvig   := TRUE;
  		END_IF;
  	END_IF;
  END_IF;

  IF getSdvig THEN StrSw.sdvig:= TRUE; END_IF;

  sdvigReset(IN:=StrSw.sdvig, PT:=T#15S);

  IF sdvigReset.Q THEN StrSw.sdvig:=FALSE; END_IF;

  lastOnStatus := StrSw.onStatus;

  (* ---- Распаковка команды ---- *)
  _sunpackerCommand(command := StrSw.inCommand);
  	cmd := _sunpackerCommand.cmd;
  	source := _sunpackerCommand.source;

  (* ---- Обработка команды ---- *)
  IF cmd <> 0 AND lastCmd <> cmd and (((NOT StrSw.opcCommandsDisabled) AND source > 0) OR source = 0) then
  	CASE BYTE_TO_INT(cmd) OF
  	(*cmd_open*) 1 : 
  			IF  StrSw.ISVALIDREF_cmdOn THEN StrSw.CmdOn := TRUE;
  				IF StrSw.ISVALIDREF_cmdOff THEN StrSw.CmdOff := FALSE; END_IF;
  			ELSIF  StrSw.ISVALIDREF_cmdOff THEN StrSw.CmdOff := FALSE;  END_IF;
  			errorCMDTimer(IN := false);
  			_commandErrorTimer := true;
  			StrSw.lastCmdIsOn := true;
  	(*cmd_close*) 2 : 
  			IF StrSw.ISVALIDREF_cmdOff THEN StrSw.CmdOff := TRUE;
  				IF StrSw.ISVALIDREF_cmdOn THEN StrSw.CmdOn := FALSE; END_IF;
  			ELSIF StrSw.ISVALIDREF_cmdOn THEN StrSw.CmdOn := FALSE; END_IF;
  			errorCMDTimer(IN := false);
  			_commandErrorTimer := true;
  			StrSw.lastCmdIsOn := false;
  	(*cmd_reset*) 3 :    IF StrSw.ISVALIDREF_statOn OR StrSw.ISVALIDREF_statOff THEN
  			StrSw.CmdOn := FALSE;
  			StrSw.CmdOff := FALSE;
                                lastCmd := 0;
  			_commandErrorTimer := false;
  			StrSw.lastCmdIsOn := false;
                                 END_IF;
  	END_CASE;	
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	command_error_for_Status := 0;
  END_IF;
  lastCmd := cmd;

  errorCMDTimer(In := _commandErrorTimer, PT :=T#10s);

  (* ---- алгоритм  для команды ВКЛючить ---- *)
  IF (StrSw.onStatus = _statusDualInput.STATUS_ON) and (StrSw.lastCmdIsOn) then
  	IF StrSw.ISVALIDREF_cmdOn AND StrSw.ISVALIDREF_cmdOff then  StrSw.cmdOn := false; END_IF;

  	 errorCMDTimer(In := false); 
  	 _commandErrorTimer := false;
  	 cmd_for_Status := 0;
  	 source_for_Status := 0;
  END_IF;

  (* ---- off ---- *)
  IF (StrSw.onStatus = _statusDualInput.STATUS_OFF) and (NOT StrSw.lastCmdIsOn) then
  	IF StrSw.ISVALIDREF_cmdOn AND StrSw.ISVALIDREF_cmdOff then  StrSw.cmdOff := false; END_IF;

  	 errorCMDTimer(In := false); 
  	 _commandErrorTimer := false;
  	 cmd_for_Status := 0;
  	 source_for_Status := 0;
  END_IF;

  (* ---- ошибка исполнения команды ---- *)
  if errorCMDTimer.Q and (cmd_for_Status <> 0) then
  	command_error_for_Status :=  cmd_for_Status;
  	_commandErrorTimer := false;
  	StrSw.CmdOn := false;
  	StrSw.CmdOff := false;
  	lastCmd := 0;
  end_if;

  (* ---- сброс ошибки команды ---- *)
  StrSw.CommandFault := command_error_for_Status <> 0;
  _errorReset(IN := command_error_for_Status <> 0, PT := T#5S);
  IF _errorReset.Q THEN
  	cmd_for_Status := 0;
  	source_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF;

  outputsSets(in := (StrSw.ISVALIDREF_cmdOn and StrSw.cmdOn ) OR (StrSw.ISVALIDREF_cmdOff and StrSw.cmdOff), PT := T#2S);
  	IF NOT outputsSets.Q THEN
  		StrSw.BreakCmdOn := inBreakCmdOn._inversed AND inBreakCmdOn.reliability AND StrSw.ISVALIDREF_inBreakCmdOn;
  		StrSw.BreakCmdOff := inBreakCmdOff._inversed AND inBreakCmdOff.reliability AND StrSw.ISVALIDREF_inBreakCmdOff;
  	END_IF;

  cmdOn := StrSw.cmdOn;
  cmdOff:= StrSw.cmdOff;    

  (* ---- формирование зашифрованного статуса для АРМа ---- *)
  StrSw.status := shl(BYTE_TO_DWORD(source_for_Status), 29) 
  		OR shl(BYTE_TO_DWORD(cmd_for_Status), 26) 
  		OR shl(BYTE_TO_DWORD(command_error_for_Status), 23)
  		OR shl(bool_to_DWORD(StrSw.sdvig), 22)
  		OR shl(bool_to_DWORD(StrSw.OpcCommandsDisabled), 21)
                      OR shl(BOOL_TO_DWORD(StrSw.offKNA), 17)
                      OR shl(bool_to_DWORD(StrSw.lastCmdIsOn), 14) 
                      OR shl(BOOL_TO_DWORD(StrSw.BreakCmdOff), 13) 
  		OR shl(BOOL_TO_DWORD(StrSw.BreakCmdOn), 12)
                      OR shl(BYTE_TO_DWORD(StrSw.basketStatus), 8) 
  		OR shl(BOOL_TO_DWORD(StrSw.Distance), 6) 
  		OR shl(BOOL_TO_DWORD(StrSw.Local), 5) 
  		OR shl(BOOL_TO_DWORD(StrSw.Ns), 4) 
                  	OR shl(BOOL_TO_DWORD(StrSw.Accident ),3)
  		OR BYTE_TO_DWORD(StrSw.onStatus);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_meandr
  VAR
    _output : BOOL;
  END_VAR
  VAR_INPUT
    period : TIME := T#300MS;
  END_VAR
  VAR
    timer : TON;
    FALSE_val : BOOL := FALSE;
    TRUE_val : BOOL := TRUE;
  END_VAR
  VAR_IN_OUT
    output : BOOL;
  END_VAR

  timer(in:=NOT FALSE_val,PT:=period);

  IF timer.Q THEN
      _output:=_output XOR TRUE_val;
      timer(in:=FALSE);
  END_IF;

  output:=_output;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_singleSignal
  VAR_INPUT
    signal : TYPE_ReliableBit;
  END_VAR
  VAR_IN_OUT
    str_SS : struct_singleSignal;
  END_VAR
  VAR
    TimerOn : TON;
    TimerOff : TOF;
  END_VAR

  str_SS.reliability:=signal.reliability;

  IF NOT str_SS.inverse THEN
  TimerOn(IN:=(signal.value AND str_SS.reliability AND NOT str_SS.Disabled_Sig), PT:=str_SS.DelayOn);
  ELSE
  TimerOn(IN:=(signal._inversed AND str_SS.reliability AND NOT str_SS.Disabled_Sig), PT:=str_SS.DelayOn);	
  END_IF;

  TimerOff(IN:=TimerOn.Q, PT:=str_SS.DelayOff);

  str_SS.Q:=TimerOff.Q;

  str_SS.status:= SHL(BOOL_TO_DWORD(NOT str_SS.reliability), 15)
  	OR BOOL_TO_DWORD(str_SS.Q);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_singleOutput
  VAR_IN_OUT
    signal : BOOL;
    str_SO : struct_singleOutput;
  END_VAR
  VAR
    pulseTimer : TON;
    resetCmdTimer : TON;
    TON_Command : TON;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    pulseTimerPriznak : BOOL;
    resetCmdTimerPriznak : BOOL;
    _sunpackerCommand : fb_sunpackerCommand;
  END_VAR

  str_SO.OpcCommandsDisabled := str_SO.inOpcCommandsDisabled;

  (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
  IF str_SO.inOpcCommandsDisabled THEN
  	str_SO.inCommand := str_SO.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	str_SO.inCommand := str_SO.inCommand_ARM;
  END_IF;

  (*Распаковка команды*)
  _sunpackerCommand(command := str_SO.inCommand);
  	cmd := _sunpackerCommand.cmd;
  	source := _sunpackerCommand.source;

  (*Обработка команды*)
  IF cmd <> 0 AND lastCmd <> cmd and (((NOT str_SO.OpcCommandsDisabled) AND source > 0) OR source = 0) then
  	CASE BYTE_TO_INT(cmd) OF
  	(*cmd_on*) 1 : 
  			str_SO.Q := TRUE; 
  			pulseTimer(IN := FALSE);
  			pulseTimerPriznak := FALSE;
  			resetCmdTimer(IN := FALSE);
  			resetCmdTimerPriznak := TRUE;
  	(*cmd_off*) 2 : 
  			str_SO.Q := FALSE; 
  			pulseTimer(IN := FALSE);
  			pulseTimerPriznak := FALSE;
  			resetCmdTimer(IN := FALSE);
  			resetCmdTimerPriznak := TRUE;
  	(*cmd_pulse*) 3 :
  			str_SO.Q := TRUE;
                                pulseTimer(IN := FALSE); 
                                pulseTimerPriznak := TRUE;
  			resetCmdTimer(IN := FALSE);
                                resetCmdTimerPriznak := FALSE;
  	END_CASE;	
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	command_error_for_Status := 0;
  END_IF;
  lastCmd := cmd;

  pulseTimer(IN := pulseTimerPriznak, PT := str_SO.wait_time);
  pulseTimer();
  IF pulseTimer.Q THEN
  	pulseTimer(IN := FALSE);
  	pulseTimerPriznak := FALSE;

  	str_SO.Q := FALSE;

  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF;

  resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#10S);
  resetCmdTimer();
  IF resetCmdTimer.Q THEN
  	resetCmdTimer(IN := FALSE);
  	resetCmdTimerPriznak := FALSE;

  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF;

  signal:= str_SO.Q;

  (*TON_Command(IN:= (inCommand <> 0) AND (source = 0), PT:= T#2S);*)
      (*IF TON_Command.Q THEN*)
          (*inCommand := 0;*)
      (*END_IF;*)
  str_SO.status :=                           shl(BYTE_TO_DWORD(source_for_Status), 29) 
  				OR shl(BYTE_TO_DWORD(cmd_for_Status), 26) 
  				OR shl(BYTE_TO_DWORD(command_error_for_Status), 23)
  				OR shl(BOOL_TO_DWORD(str_SO.OpcCommandsDisabled), 21)		
  				OR BOOL_TO_DWORD(str_SO.Q);
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_IM
  VAR
    fb_Kran1 : fb_Kran;
    fb_Kran2 : fb_Kran;
    fb_Kran3 : fb_Kran;
    fb_Kran3b : fb_Kran;
    fb_Kran4 : fb_Kran;
    fb_Kran5 : fb_Kran;
    fb_Kran6 : fb_Kran;
    fb_nu1 : fb_OilPump;
    fb_nu2 : fb_OilPump;
    fb_pns : fb_Switch;
    fb_v1_Avom : fb_Switch;
    fb_v2_Avom : fb_Switch;
    fb_v3_Avom : fb_Switch;
    fb_v4_Avom : fb_Switch;
    fb_TEN_kollectora : fb_Switch;
    fb_KaloriferAVOM : fb_Switch;
    fb_CMN : fb_Switch;
    fb_TEN_MB : fb_Switch;
    fb_mv : fb_SectionSwitch;
    fb_PLC_Control : fb_meandr;
  END_VAR
  VAR_EXTERNAL
    di : DiConfig;
    od : DOconfig;
    IM : ImConfig;
  END_VAR
  VAR
    fb_dP_maslo_gaz_Less100 : fb_singleSignal;
    fb_dp_kran1_Less100 : fb_singleSignal;
    fb_QF1_on : fb_singleSignal;
    fb_QF2_on : fb_singleSignal;
    fb_QF23_on : fb_singleSignal;
    fb_QF4_QF5_on : fb_singleSignal;
    fb_QF6_QF7_on : fb_singleSignal;
    fb_QF8_QF9_on : fb_singleSignal;
    fb_QF10_QF11_on : fb_singleSignal;
    fb_QF12_QF13_on : fb_singleSignal;
    fb_QF14_QF15_on : fb_singleSignal;
    fb_QF22_on : fb_singleSignal;
    fb_NS_G1_G2 : fb_singleSignal;
    fb_NS_G3_G4 : fb_singleSignal;
    fb_NS_G15_G16 : fb_singleSignal;
    fb_NS_G17 : fb_singleSignal;
    fb_NS_G5_G6 : fb_singleSignal;
    fb_NS_G7_G8 : fb_singleSignal;
    fb_NS_G18_G19 : fb_singleSignal;
    fb_NS_G10_G11 : fb_singleSignal;
    fb_NS_G13_G14 : fb_singleSignal;
    fb_Vozbud_neispr_tsepey_upr_AVR_pit : fb_singleSignal;
    fb_Vozbud_gotovnost : fb_singleSignal;
    fb_Vozbud_neispravnost : fb_singleSignal;
    fb_SHAVR1_v_rabote : fb_singleSignal;
    fb_SHAVR2_v_rabote : fb_singleSignal;
    fb_Avariinoe_otkluch_vikluchatelya : fb_singleSignal;
    fb_Assinhronnii_hod_peregruzka : fb_singleSignal;
    fb_SHU_v_GPA_vkluch : fb_singleSignal;
    fb_SHP_v_GPA_vkluch : fb_singleSignal;
    fb_Uroven_masla_akkum : fb_singleSignal;
    fb_NKU1_GPA_on : fb_singleSignal;
    fb_NKU2_GPA_on : fb_singleSignal;
    fb_AO_KC_ot_SHKS : fb_singleSignal;
    fb_AO_GPA_ot_SHU : fb_singleSignal;
    fb_BEAO_srabotal : fb_singleSignal;
    fb_Chastotny_pusk : fb_singleSignal;
    fb_Neuspesh_chastotny_pusk : fb_singleSignal;
    fb_Rezhim_ruchnogo_regulirovaniya : fb_singleSignal;
    fb_Razreshenie_zagruzki_dvig : fb_singleSignal;
    fb_Osnovnoy_regul_off : fb_singleSignal;
    fb_Voltage_sekcii_norm : fb_singleSignal;
    fb_Reactorny_pusk : fb_singleSignal;
    fb_NO_GPA_ot_SHU : fb_singleSignal;
    fb_AO_GPA_ot_PRU : fb_singleSignal;
    fb_Nalichie_BP1 : fb_singleSignal;
    fb_Nalichie_BP2 : fb_singleSignal;
    fb_Nalichie_BP3 : fb_singleSignal;
    fb_Nalichie_BP4 : fb_singleSignal;
    fb_Nalichie_BP5 : fb_singleSignal;
    fb_Nalichie_BP6 : fb_singleSignal;
    fb_Nalichie_BP7_BP8 : fb_singleSignal;
    fb_Nalichie_BP9_BP10 : fb_singleSignal;
    fb_Nalichie_cepei_upravlen_mv : fb_singleSignal;
    fb_Nalichie_220BEAO : fb_singleSignal;
    fb_Nalichie_per_220_na_vhode : fb_singleSignal;
    fb_Nalichie_post_220_na_vhode : fb_singleSignal;
    fb_Nalichie_BP11 : fb_singleSignal;
    fb_Nalichie_BP12 : fb_singleSignal;
    fb_Dver_SHU_pered_otkrita : fb_singleSignal;
    fb_Dver_SHU_zad_otkrita : fb_singleSignal;
    fb_EO_GPA_ot_knopki_SHU : fb_singleSignal;
    fb_EO_EGPA_ot_PRY : fb_singleSignal;
    fb_Synchroniz_rezhima_K1 : fb_singleSignal;
    fb_Potok_ms_posle_AVOM : fb_singleSignal;
    fb_Avary_EGPA : fb_singleOutput;
    fb_U_lamp_SHU : fb_singleOutput;
    fb_AO_knopka_ind : fb_singleOutput;
    fb_Pusk : fb_singleOutput;
    fb_Stop_SHUP : fb_singleOutput;
    fb_NO_fonar : fb_singleOutput;
    fb_PC_fonar : fb_singleOutput;
    fb_AC_fonar : fb_singleOutput;
    fb_Kr1_smazka : fb_singleOutput;
    fb_Kr2_smazka : fb_singleOutput;
    fb_Kr4_open_from_alg : fb_singleOutput;
    fb_Synch_rej_K1 : fb_singleOutput;
    fb_Rabota_EGPA : fb_singleOutput;
    fb_Neispr_EGPA : fb_singleOutput;
  END_VAR

  (* Циклический опрос. ИМ *)

  (* GPIO *)
  fb_PLC_Control(output:=od.gpio_out.bits[0]);                              

  (* Кран 1 *)
  fb_Kran1(statOn := di.di_0.bits[0]._inversed, statOn_reliability:= di.di_0.bits[0].reliability,
           statOff := di.di_0.bits[1]._inversed, statOff_reliability:= di.di_0.bits[1].reliability,
           inSo := di.di_12.bits[0], inSz := di.di_12.bits[1],
           inDp:= di.di_2.bits[0],
           cmdOn:=od.do_0.bits[0], cmdOff:=od.do_0.bits[1],      
           strKr:= IM.Kran1  );

  (* Кран 2 *)
  fb_Kran2(statOn := di.di_0.bits[2]._inversed, statOn_reliability:= di.di_0.bits[2].reliability,
           statOff := di.di_0.bits[3]._inversed,  statOff_reliability:= di.di_0.bits[3].reliability,
           inSo := di.di_12.bits[2], inSz := di.di_12.bits[3],
           cmdOn:=od.do_0.bits[2], cmdOff:=od.do_0.bits[3],
           strKr:= IM.Kran2  );

  (* Кран 3 *)
  fb_Kran3(statOn := di.di_0.bits[2]._inversed, statOn_reliability:= di.di_0.bits[2].reliability,
           statOff := di.di_0.bits[3]._inversed,  statOff_reliability:= di.di_0.bits[3].reliability,
           inSo := di.di_12.bits[2], inSz := di.di_12.bits[3],
           cmdOn:=od.do_0.bits[2], cmdOff:=od.do_0.bits[3],
           strKr:= IM.Kran3  );

  (* Кран 3b *)
  fb_Kran3b(statOn := di.di_0.bits[4]._inversed, statOn_reliability:= di.di_0.bits[4].reliability,
           statOff := di.di_0.bits[5]._inversed,  statOff_reliability:= di.di_0.bits[5].reliability,
           inSo := di.di_12.bits[4], inSz := di.di_12.bits[5],
           cmdOn:=od.do_0.bits[4], cmdOff:=od.do_0.bits[5],
           strKr:= IM.Kran3b  );

  (* Кран 4 *)
  fb_Kran4(statOn := di.di_0.bits[6]._inversed, statOn_reliability:= di.di_0.bits[6].reliability,
           statOff := di.di_0.bits[7]._inversed,  statOff_reliability:= di.di_0.bits[7].reliability,
           inSo := di.di_12.bits[6], inSz := di.di_12.bits[7],
           cmdOn:=od.do_0.bits[6], cmdOff:=od.do_0.bits[7],
           strKr:= IM.Kran4  );

  (* Кран 5 *)
  fb_Kran5(statOn := di.di_1.bits[0]._inversed, statOn_reliability:= di.di_1.bits[0].reliability,
           statOff := di.di_1.bits[1]._inversed,  statOff_reliability:= di.di_1.bits[1].reliability,
           inSo := di.di_13.bits[0], inSz := di.di_13.bits[1],
           cmdOn:=od.do_0.bits[8], cmdOff:=od.do_0.bits[9],
           strKr:= IM.Kran5  );

  (* Кран 6НР *)
  fb_Kran6(statOn := di.di_1.bits[2].value, statOn_reliability:= di.di_1.bits[2].reliability,
           statOff := di.di_1.bits[3].value,  statOff_reliability:= di.di_1.bits[3].reliability,
           cmdOn:=od.do_1.bits[14], cmdOff:=od.do_1.bits[15],
           strKr:= IM.Kran6  );

  (*  НУ1 Насос уплотнения *)
  fb_nu1(statOn := di.di_2.bits[5].value, statOn_reliability:= di.di_2.bits[5].reliability,
           inBreakCmdOn := di.di_10.bits[2],
           cmdOn:=od.do_1.bits[2], cmdOff:=od.do_1.bits[3],
           StrSw:= IM.nu1  );

  (*  НУ2 Насос уплотнения *)
  fb_nu2(statOn := di.di_2.bits[6].value, statOn_reliability:= di.di_2.bits[6].reliability,
           inBreakCmdOn := di.di_10.bits[4],
           cmdOn:=od.do_1.bits[4], cmdOff:=od.do_1.bits[5],
           StrSw:= IM.nu2  );

  (*  ПНС Насос смазки *)
  fb_pns(statOn := di.di_2.bits[7].value, statOn_reliability:= di.di_2.bits[7].reliability,
           inBreakCmdOn := di.di_10.bits[0],
           cmdOn:=od.do_1.bits[0] , cmdOff:=od.do_1.bits[1],
           StrSw:= IM.pns  );

  (*  В1 АВОМ вентилятор охлаждения *)
  fb_v1_Avom(statOn := di.di_3.bits[0].value, statOn_reliability:= di.di_3.bits[0].reliability,
           inBreakCmdOn := di.di_10.bits[6],
           cmdOn:=od.do_1.bits[6] , cmdOff:=od.do_1.bits[7],
           StrSw:= IM.v1_Avom  );

  (*  В2 АВОМ вентилятор охлаждения *)
  fb_v2_Avom(statOn := di.di_3.bits[1].value, statOn_reliability:= di.di_3.bits[1].reliability,
           inBreakCmdOn := di.di_11.bits[0],
           cmdOn:=od.do_1.bits[8] , cmdOff:=od.do_1.bits[9],
           StrSw:= IM.v2_Avom  );

  (*  В3 АВОМ вентилятор охлаждения *)
  fb_v3_Avom(statOn := di.di_3.bits[1].value, statOn_reliability:= di.di_3.bits[1].reliability,
           inBreakCmdOn := di.di_11.bits[0],
           cmdOn:=od.do_1.bits[8] , cmdOff:=od.do_1.bits[9],
           StrSw:= IM.v3_Avom  );

  (*  В4 АВОМ вентилятор охлаждения *)
  fb_v4_Avom(statOn := di.di_3.bits[1].value, statOn_reliability:= di.di_3.bits[1].reliability,
           inBreakCmdOn := di.di_11.bits[0],
           cmdOn:=od.do_1.bits[8] , cmdOff:=od.do_1.bits[9],
           StrSw:= IM.v4_Avom  );

  (*  МВ масляный выключатель *)
  fb_mv(statOff := di.di_4.bits[7].value, statOff_reliability:= di.di_4.bits[7].reliability,
           inBreakCmdOff := di.di_11.bits[2], inoffKNA:= di.di_5.bits[2],
           basketRolledin:= di.di_5.bits[1], basketRolledout:= di.di_5.bits[0],
           cmdOn:=od.do_1.bits[10] , cmdOff:=od.do_1.bits[11],
           StrSw:= IM.mv  );

  (* Тен коллектора *)
  fb_TEN_kollectora(statOn := di.di_3.bits[1].value, statOn_reliability:= di.di_3.bits[1].reliability,
           inBreakCmdOn := di.di_11.bits[0],
           cmdOn:=od.do_1.bits[8] , cmdOff:=od.do_1.bits[9],
           StrSw:= IM.TEN_kollectora  );

  (* Калорифер АВОМ *)
  fb_KaloriferAVOM(statOn := di.di_3.bits[1].value, statOn_reliability:= di.di_3.bits[1].reliability,
           inBreakCmdOn := di.di_11.bits[0],
           cmdOn:=od.do_1.bits[8] , cmdOff:=od.do_1.bits[9],
           StrSw:= IM.KaloriferAVOM  ); 

  (* ЦМН *)
  fb_CMN(statOn := di.di_3.bits[1].value, statOn_reliability:= di.di_3.bits[1].reliability,
           inBreakCmdOn := di.di_11.bits[0],
           cmdOn:=od.do_1.bits[8] , cmdOff:=od.do_1.bits[9],
           StrSw:= IM.CMN);

  (* Тен маслобака *)
  fb_TEN_MB(statOn := di.di_3.bits[1].value, statOn_reliability:= di.di_3.bits[1].reliability,
           inBreakCmdOn := di.di_11.bits[0],
           cmdOn:=od.do_1.bits[8] , cmdOff:=od.do_1.bits[9],
           StrSw:= IM.TEN_MB);                         
  (*************************************************** singleSignals ********************************************)

  (* Перепад давления масло газ м*)
  fb_dP_maslo_gaz_Less100(signal :=di.di_2.bits[0], str_SS := IM.SingleSignals.dP_maslo_gaz_Less100);   

  (* Перепад давления кран 1 *)
  fb_dp_kran1_Less100(signal :=di.di_2.bits[1], str_SS := IM.SingleSignals.dp_kran1_Less100);   

  (* Неисправность цепей управления возбудителя *)
  fb_Vozbud_neispr_tsepey_upr_AVR_pit(signal :=di.di_2.bits[2], str_SS := IM.SingleSignals.Vozbud_neispr_tsepey_upr_AVR_pit);   

  (* Возбудитель готовность *)
  fb_Vozbud_gotovnost(signal :=di.di_2.bits[4], str_SS := IM.SingleSignals.Vozbud_gotovnost);   

  (* Возбудитель неисправность *)
  fb_Vozbud_neispravnost(signal :=di.di_3.bits[2], str_SS := IM.SingleSignals.Vozbud_neispravnost);   

  (* ЩАВР 1 в работе *)
  fb_SHAVR1_v_rabote(signal :=di.di_3.bits[3], str_SS := IM.SingleSignals.SHAVR1_v_rabote);   

  (* ЩАВР 2 в работе *)
  fb_SHAVR2_v_rabote(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.SHAVR2_v_rabote); 

  (* ЩАВР 2 в работе *)
  fb_Avariinoe_otkluch_vikluchatelya(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Avariinoe_otkluch_vikluchatelya);    

  (* ЩАВР 2 в работе *)
  fb_Assinhronnii_hod_peregruzka(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Assinhronnii_hod_peregruzka);    

  (* ЩАВР 2 в работе *)
  fb_SHU_v_GPA_vkluch(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.SHU_v_GPA_vkluch);    

  (* ЩАВР 2 в работе *)
  fb_SHP_v_GPA_vkluch(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.SHP_v_GPA_vkluch);    

  (* ЩАВР 2 в работе *)
  fb_Uroven_masla_akkum(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Uroven_masla_akkum);    

  (* ЩАВР 2 в работе *)
  fb_NKU1_GPA_on(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.NKU1_GPA_on);    

  (* ЩАВР 2 в работе *)
  fb_NKU2_GPA_on(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.NKU2_GPA_on);    

  (* ЩАВР 2 в работе *)
  fb_AO_KC_ot_SHKS(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.AO_KC_ot_SHKS);    

  (* ЩАВР 2 в работе *)
  fb_AO_GPA_ot_SHU(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.AO_GPA_ot_SHU);    

  (* ЩАВР 2 в работе *)
  fb_BEAO_srabotal(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.BEAO_srabotal);    

  (* ЩАВР 2 в работе *)
  fb_Chastotny_pusk(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Chastotny_pusk);    

  (* ЩАВР 2 в работе *)
  fb_Neuspesh_chastotny_pusk(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Neuspesh_chastotny_pusk);    

  (* ЩАВР 2 в работе *)
  fb_Rezhim_ruchnogo_regulirovaniya(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Rezhim_ruchnogo_regulirovaniya);    

  (* ЩАВР 2 в работе *)
  fb_Razreshenie_zagruzki_dvig(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Razreshenie_zagruzki_dvig);    

  (* ЩАВР 2 в работе *)
  fb_Osnovnoy_regul_off(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Osnovnoy_regul_off);    

  (* ЩАВР 2 в работе *)
  fb_Voltage_sekcii_norm(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Voltage_sekcii_norm);    

  (* ЩАВР 2 в работе *)
  fb_Reactorny_pusk(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Reactorny_pusk);    

  (* ЩАВР 2 в работе *)
  fb_NO_GPA_ot_SHU(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.NO_GPA_ot_SHU);    

  (* ЩАВР 2 в работе *)
  fb_AO_GPA_ot_PRU(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.AO_GPA_ot_PRU);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_BP1(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_BP1);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_BP2(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_BP2);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_BP3(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_BP3);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_BP4(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_BP4);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_BP5(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_BP5);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_BP6(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_BP6);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_BP7_BP8(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_BP7_BP8);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_BP9_BP10(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_BP9_BP10);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_cepei_upravlen_mv(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_cepei_upravlen_mv);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_220BEAO(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_220BEAO);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_per_220_na_vhode(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_per_220_na_vhode);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_post_220_na_vhode(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_post_220_na_vhode);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_BP11(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_BP11);    

  (* ЩАВР 2 в работе *)
  fb_Nalichie_BP12(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Nalichie_BP12);    

  (* ЩАВР 2 в работе *)
  fb_Dver_SHU_pered_otkrita(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Dver_SHU_pered_otkrita);    

  (* ЩАВР 2 в работе *)
  fb_Dver_SHU_zad_otkrita(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Dver_SHU_zad_otkrita);    

  (* ЩАВР 2 в работе *)
  fb_EO_GPA_ot_knopki_SHU(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.EO_GPA_ot_knopki_SHU);    

  (* ЩАВР 2 в работе *)
  fb_EO_EGPA_ot_PRY(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.EO_EGPA_ot_PRY);    

  (* ЩАВР 2 в работе *)
  fb_Synchroniz_rezhima_K1(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Synchroniz_rezhima_K1);

  (* ЩАВР 2 в работе *)
  fb_Potok_ms_posle_AVOM(signal :=di.di_3.bits[4], str_SS := IM.SingleSignals.Potok_ms_posle_AVOM);   

    (* Выключатель основного ввода питания QF1  в положении включен   *)
  fb_QF1_on(signal :=di.di_7.bits[6], str_SS := IM.SingleSignals.QF1_on);   

    (* Выключатель резервного ввода питания QF2  в положении включен   *)
  fb_QF2_on(signal :=di.di_7.bits[7], str_SS := IM.SingleSignals.QF2_on);   

    (* Выключатель питания кранов:  QF23 110 В в положении включен   *)
  fb_QF23_on(signal :=di.di_8.bits[0], str_SS := IM.SingleSignals.QF23_on);   

    (* Выключатели группы 1: QF4, QF5 в положении включен   *)
  fb_QF4_QF5_on(signal :=di.di_8.bits[1], str_SS := IM.SingleSignals.QF4_QF5_on);   

    (* Выключатели группы 2: QF6, QF7 в положении включен   *)
  fb_QF6_QF7_on(signal :=di.di_8.bits[2], str_SS := IM.SingleSignals.QF6_QF7_on);   

    (* Выключатели группы 3: QF8, QF9 в положении включен   *)
  fb_QF8_QF9_on(signal :=di.di_8.bits[3], str_SS := IM.SingleSignals.QF8_QF9_on);   

    (* Выключатели группы 4: QF10, QF11 в положении включен   *)
  fb_QF10_QF11_on(signal :=di.di_8.bits[4], str_SS := IM.SingleSignals.QF10_QF11_on);   

    (* Выключатели группы 5: QF12, QF13 в положении включен   *)
  fb_QF12_QF13_on(signal :=di.di_8.bits[5], str_SS := IM.SingleSignals.QF12_QF13_on);   

    (* Выключатели группы 6: QF14, QF15 в положении включен   *)
  fb_QF14_QF15_on(signal :=di.di_8.bits[6], str_SS := IM.SingleSignals.QF14_QF15_on);   

    (* Выключатели группы : QF22 в положении включен   *)
  fb_QF22_on(signal :=di.di_14.bits[2], str_SS := IM.SingleSignals.QF22_on);   

    (* Неисправность источников питания группы 1: G1, G2 (=24 В)   *)
  fb_NS_G1_G2(signal :=di.di_8.bits[7], str_SS := IM.SingleSignals.NS_G1_G2);   

    (* Неисправность источников питания группы 2: G3, G4 (=24 В)   *)
  fb_NS_G3_G4(signal :=di.di_9.bits[0], str_SS := IM.SingleSignals.NS_G3_G4);   

    (* Неисправность источников питания внутренних ПТС: G15, G16 (=24 В)   *)
  fb_NS_G15_G16(signal :=di.di_9.bits[1], str_SS := IM.SingleSignals.NS_G15_G16);   

    (* Неисправность источника питания аналоговых сигналов: G17 (=24 В)   *)
  fb_NS_G17(signal :=di.di_9.bits[2], str_SS := IM.SingleSignals.NS_G17);   

    (* Неисправность источников питания группы 3: G5, G6 (=24 В)   *)
  fb_NS_G5_G6(signal :=di.di_9.bits[3], str_SS := IM.SingleSignals.NS_G5_G6);   

    (* Неисправность источников питания группы 4: G7, G8 (=24 В)   *)
  fb_NS_G7_G8(signal :=di.di_9.bits[4], str_SS := IM.SingleSignals.NS_G7_G8);   

    (* Неисправность источников питания внешних цепей: G18, G19 (=24 В)   *)
  fb_NS_G18_G19(signal :=di.di_9.bits[5], str_SS := IM.SingleSignals.NS_G18_G19);   

    (* Неисправность источников питания группы 5: G9, G10, G11, G12 (=110 В)   *)
  fb_NS_G10_G11(signal :=di.di_9.bits[6], str_SS := IM.SingleSignals.NS_G10_G11);   

    (* Неисправность источников питания G13, G14 (=24 В)   *)
  fb_NS_G13_G14(signal :=di.di_9.bits[7], str_SS := IM.SingleSignals.NS_G13_G14); 


  (*************************************************** SingleOutputs ********************************************)

  (* Идикация НО (подсветка кнопки на шкафу)   *)
  fb_Rabota_EGPA(str_SO := IM.SingleOutputs.Rabota_EGPA, signal:=od.do_2.bits[11]);  

  (* Взвод включения БЭАО по неисправности ПТС   *)
  fb_Neispr_EGPA(str_SO := IM.SingleOutputs.Neispr_EGPA, signal:=od.do_2.bits[14]);  

  (* Авария ЭГПА в КЦ   *)
  fb_Avary_EGPA(str_SO := IM.SingleOutputs.Avary_EGPA, signal:=od.do_2.bits[0]);    

  (* Сброс включения БЭАО по неисправности ПТС   *)
  fb_U_lamp_SHU(str_SO := IM.SingleOutputs.U_lamp_SHU, signal:=od.do_2.bits[15]);   

  (* Индикация ПС Фонарь   *)
  fb_AO_knopka_ind(str_SO := IM.SingleOutputs.AO_knopka_ind, signal:=od.do_2.bits[13]);    

  (* Индикация АС Фонарь   *)
  fb_Pusk(str_SO := IM.SingleOutputs.Pusk_SHUP, signal:=od.do_2.bits[12]);   

  (* Отключение МВ1 от КНА   *)
  fb_Stop_SHUP(str_SO := IM.SingleOutputs.Stop_SHUP, signal:=od.do_1.bits[12]);   

  (* Отключение МВ1 от КНА   *)
  fb_NO_fonar(str_SO := IM.SingleOutputs.NO_fonar, signal:=od.do_1.bits[12]);   

  (* Отключение МВ1 от КНА   *)
  fb_PC_fonar(str_SO := IM.SingleOutputs.PC_fonar, signal:=od.do_1.bits[12]);   

  (* Отключение МВ1 от КНА   *)
  fb_AC_fonar(str_SO := IM.SingleOutputs.AC_fonar, signal:=od.do_1.bits[12]);   

  (* Отключение МВ1 от КНА   *)
  fb_Kr1_smazka(str_SO := IM.SingleOutputs.Kr1_smazka, signal:=od.do_1.bits[12]);   

  (* Отключение МВ1 от КНА   *)
  fb_Kr2_smazka(str_SO := IM.SingleOutputs.Kr2_smazka, signal:=od.do_1.bits[12]);   

  (* Отключение МВ1 от КНА   *)
  fb_Kr4_open_from_alg(str_SO := IM.SingleOutputs.Kr4_open_from_alg, signal:=od.do_1.bits[12]);   

  (* Отключение МВ1 от КНА   *)
  fb_Synch_rej_K1(str_SO := IM.SingleOutputs.Synch_rej_K1, signal:=od.do_1.bits[12]);   


   (**************************************** Аналоговые и Дискретные параметры ***********************************)
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_DiProtection_Init
  VAR_INPUT
    data_Ini : BOOL;
    delay : TIME;
    inTag : BYTE;
    inRunOnStart : BOOL;
  END_VAR
  VAR_IN_OUT
    str_DIp : struct_DiProtection;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры  AiProtection          *****)

   Init := FALSE;

      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          str_DIp.delay               := delay;
          str_DIp.inTag               := inTag;
          str_DIp.inRunOnStart        := inRunOnStart;

          data_Ini:=FALSE;
          Init := TRUE;
      END_IF;
      IF Init THEN
          delay:= T#0S;
          inTag:= 0;
          inRunOnStart:= FALSE;
      END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AiProtection_Init
  VAR_INPUT
    data_Ini : BOOL;
    controlLimit : BYTE;
    delay : TIME;
    inTag : BYTE;
    inRunOnStart : BOOL;
  END_VAR
  VAR_IN_OUT
    str_AIp : struct_AiProtection;
  END_VAR
  VAR_OUTPUT
    Init : BOOL := FALSE;
  END_VAR

  (*****            Функциональный блок переинициализации структуры  AiProtection          *****)

   Init := FALSE;

      IF data_Ini THEN                            (* Параметрам требуется переинициализация. *)
          str_AIp.controlLimit        := controlLimit;
          str_AIp.delay               := delay;
          str_AIp.inTag               := inTag;
          str_AIp.inRunOnStart        := inRunOnStart;

          data_Ini:=FALSE;
          Init := TRUE;
      END_IF;
      IF Init THEN
          controlLimit:= 0;
          delay:= T#0S;
          inTag:= 0;
          inRunOnStart:= FALSE;
      END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_Protections_Init
  VAR_INPUT
    init : BOOL;
  END_VAR
  VAR
    stDIp_Ini : fb_DiProtection_Init;
    stAIp_Ini : fb_AiProtection_Init;
    inits : UINT;
  END_VAR
  VAR_INPUT
    initiales : UINT;
  END_VAR
  VAR_EXTERNAL
    protections : ProtectionsConfig;
  END_VAR
  VAR
    _ProtectionTags : TYPE_ProtectionTags;
    _StatusAi : TYPE_StatusAi;
  END_VAR

  inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)

  (*************************************************Стартовая инициализация DiProtection ***************************************************)
  (* МВ отключен *)
  stDIp_Ini(data_Ini := true, delay:=T#03S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.Reg_vozb_off);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* МВ отключен 
  stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=FALSE, str_DIp := protections.Fail_chastotnii_pusk);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);*)

  (* МВ отключен *)
  stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.Off_avar_vikluchatel);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* МВ отключен *)
  stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.AOKC_SHKC);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* МВ отключен *)
  stDIp_Ini(data_Ini := true, delay:=T#0S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.AO_PRU);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* МВ отключен *)
  stDIp_Ini(data_Ini := true, delay:=T#0S, inTag:=_ProtectionTags.AOS, inRunOnStart:=FALSE, str_DIp := protections.AO_ot_SHU);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* МВ отключен *)
  stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=FALSE, str_DIp := protections.mvOff);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* МВ отключен *)
  stDIp_Ini(data_Ini := true, delay:=T#10S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.Kran1_sdvig);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* МВ отключен *)
  stDIp_Ini(data_Ini := true, delay:=T#10S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.Kran2_sdvig);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* МВ отключен *)
  stDIp_Ini(data_Ini := true, delay:=T#20S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.dPmaslo_gaz_less100);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (*************************************************Стартовая инициализация AiProtection ***************************************************)
  (* Температура переднего опорного подшипника двигателя, т.1 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Topornogo_podshipnika_EDT_1);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура заднего опорного подшипника двигателя, т.2 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Toporno_ypornogo_podshipnika_EDT_2);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура подшипника редуктора, т1 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура подшипника редуктора, т2 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура подшипника редуктора, т3 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Topornogo_podshipnika_shesterni_reduktora_T_5);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура подшипника редуктора, т4 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Topornogo_podshipnika_reduktora_HT_6);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура опорного подшипника нагнетателя, т1 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура опорного подшипника нагнетателя, т2 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура опорного подшипника нагнетателя, т3 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Typornogo_podshipnika_rav_kolodok_HT_9);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура упорно опорного подшипника нагнетателя, т4 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Typornogo_podshipnika_nerab_kolodok_HT_10);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Tgaza_na_vyhode_H);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Os_sdvig_nagnetatelja_plus);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Os_sdvig_nagnetatelja_minus);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Pgaza_na_vyhode_nagnetatelia);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#20S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.dPmaslo_gaz);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#16S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Pmaslo_sm_nizkoe);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#16S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Pmaslo_sm_vysokoe);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

   (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OPED_T1);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

   (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OPED_T2);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

   (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OYP_kolesa_ED_T3);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

   (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OP_kolesa_RH_T4);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

   (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OP_shesterni_RED_T5);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

   (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OP_shesterni_reduktora_H_T6);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

   (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OYP_kolesa_ED_T3);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

   (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OYP_kolesa_ED_T3);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

   (* Температура газа на выходе нагнетателя *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibro_skorost_OYP_kolesa_ED_T3);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  IF init THEN initiales := inits; END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_MvProtection
  VAR_INPUT
    sw : struct_SectionSwitch;
  END_VAR
  VAR_IN_OUT
    StrDIp : struct_DiProtection;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    statusDualInput : TYPE_statusDualInput;
    _ProtectionTags : TYPE_ProtectionTags;
    _signalingTp : TOF;
    timer : TON;
    SignalingTrig : R_TRIG;
    SignalingFTrig : F_TRIG;
    SignalingDi : BOOL;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
    signalinTimer : TON;
    runOnStart_Trig : R_TRIG;
  END_VAR

  timer(IN := (sw.onStatus = statusDualInput.STATUS_OFF) AND StrDIp.isRunning  , PT := StrDIp.delay);
  SignalingTrig(CLK := timer.Q);
  IF SignalingTrig.Q THEN
  	SignalingDi := TRUE;
  END_IF;
  SignalingFTrig(CLK := timer.Q);
  IF SignalingFTrig.Q THEN
  	SignalingDi := FALSE;
  END_IF;

  StrDIp.Tag := StrDIp.inTag;
  StrDIp.RunOnStart := StrDIp.inRunOnStart;

  StrDIp.CanRun := StrDIp.inCanRun;

  StrDIp.OpcCommandsDisabled := StrDIp.inOpcCommandsDisabled;

  (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
  IF StrDIp.inOpcCommandsDisabled THEN
  	StrDIp.inCommand := StrDIp.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	StrDIp.inCommand := StrDIp.inCommand_ARM;
  END_IF;

  _sunpackerCommand(command := StrDIp.inCommand);
  	source := _sunpackerCommand.source;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrDIp.opcCommandsDisabled) AND source > 0) OR source = 0) then	
  	CASE BYTE_TO_INT(cmd) OF
  	        (*cmdRun*) 1: 	IF        NOT StrDIp.Remont THEN
  					StrDIp.isEnded := FALSE;
  					StrDIp.hasError 	:= FALSE;
  					StrDIp.isRunning := TRUE;
  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrDIp.isRunning := FALSE;
  					StrDIp.isEnded := FALSE;
  					StrDIp.hasError 	:= FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
                                          StrDIp.inOpcCommandsDisabled:=FALSE;

                  (*cmdReset*) 2: 	StrDIp.isRunning := FALSE;
  				StrDIp.isEnded := FALSE;
  				StrDIp.hasError 	:= FALSE;
  				SignalingDi:= FALSE;
  				StrDIp.Check := FALSE;
  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
                                          StrDIp.inOpcCommandsDisabled:=FALSE;

  	(*cmd_setRemont*) 4 :	StrDIp.Remont := TRUE;
  				(*StrDIp.isRunning := FALSE;*)

  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;

          (*cmd_resetRemont*) 5 : 	(*IF (sw.onStatus = statusDualInput.STATUS_OFF) THEN
  					cmd_for_Status := 0;
  					source_for_Status := 0;
  					command_error_for_Status := cmd;
  				ELSE*)
  					StrDIp.Remont := FALSE;
  					(*StrDIp.isRunning := TRUE;*)

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				(*END_IF;*)

  	(*cmd_setCheck*) 6 : 	StrDIp.Check := TRUE;

  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
  	END_CASE;			
  	resetCmdTimer(IN := false);
  	resetCmdTimerPriznak := TRUE;
  END_IF;
  lastCmd := cmd;

  resetCmdTimer(IN := resetCmdTimerPriznak);
  IF resetCmdTimer.Q THEN
  	resetCmdTimerPriznak := FALSE;
  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF; 

  IF StrDIp.isRunning AND  NOT StrDIp.Remont AND NOT StrDIp.Check THEN
  	StrDIp.Signaling := SignalingDi;
  	StrDIp.SignalingTP := _signalingTp.Q;
  ELSE
  	StrDIp.Signaling := 0;
  	StrDIp.SignalingTP := 0;
  END_IF;

  _signalingTp(in := StrDIp.Signaling, PT := T#1s);


  StrDIp.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrDIp.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrDIp.Signaling), 16)
  			OR SHL(BOOL_TO_DWORD(StrDIp.RunOnStart ), 15)
  			OR SHL(BOOL_TO_DWORD(StrDIp.remont), 6)
  			OR SHL(BOOL_TO_DWORD(StrDIp.Check), 5)
  			OR SHL(BOOL_TO_DWORD(StrDIp.hasError), 4)
  			OR SHL(BOOL_TO_DWORD(StrDIp.SignalingTP), 3)
  			OR SHL(BOOL_TO_DWORD(StrDIp.CanRun), 2)
  			OR SHL(BOOL_TO_DWORD(StrDIp.isEnded), 1)
  			OR BOOL_TO_DWORD(StrDIp.isRunning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_DiProtection
  VAR_INPUT
    di : struct_singleSignal;
  END_VAR
  VAR_IN_OUT
    StrDIp : struct_DiProtection;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    _ProtectionTags : TYPE_ProtectionTags;
    _signalingTp : TOF;
    timer : TON;
    SignalingTrig : R_TRIG;
    SignalingFTrig : F_TRIG;
    SignalingDi : BOOL;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
    signalinTimer : TON;
    runOnStart_Trig : R_TRIG;
  END_VAR

  timer(IN := di.Q AND StrDIp.isRunning  , PT := StrDIp.delay);
  SignalingTrig(CLK := timer.Q);
  IF SignalingTrig.Q THEN
  	SignalingDi := TRUE;
  END_IF;
  SignalingFTrig(CLK := timer.Q);
  IF SignalingFTrig.Q THEN
  	SignalingDi := FALSE;
  END_IF;

  StrDIp.Tag := StrDIp.inTag;
  StrDIp.RunOnStart := StrDIp.inRunOnStart;

  StrDIp.CanRun := StrDIp.inCanRun;

  StrDIp.OpcCommandsDisabled := StrDIp.inOpcCommandsDisabled;

  (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
  IF StrDIp.inOpcCommandsDisabled THEN
  	StrDIp.inCommand := StrDIp.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	StrDIp.inCommand := StrDIp.inCommand_ARM;
  END_IF;

  _sunpackerCommand(command := StrDIp.inCommand);
  	source := _sunpackerCommand.source;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrDIp.opcCommandsDisabled) AND source > 0) OR source = 0) then

  	CASE BYTE_TO_INT(cmd) OF
  	        (*cmdRun*) 1: 	IF        NOT StrDIp.Remont THEN
  					StrDIp.isEnded := FALSE;
  					StrDIp.hasError 	:= FALSE;
  					StrDIp.isRunning := TRUE;
  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrDIp.isRunning := FALSE;
  					StrDIp.isEnded := FALSE;
  					StrDIp.hasError 	:= FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
                                          StrDIp.inOpcCommandsDisabled:=FALSE;

                  (*cmdReset*) 2: 	StrDIp.isRunning := FALSE;
  				StrDIp.isEnded := FALSE;
  				StrDIp.hasError 	:= FALSE;
  				SignalingDi:= FALSE;
  				StrDIp.Check := FALSE;
  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
                                         StrDIp.inOpcCommandsDisabled:=FALSE;	

  	(*cmd_setRemont*) 4 :	StrDIp.Remont := TRUE;
  				(*StrDIp.isRunning := FALSE;*)

  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
          (*cmd_resetRemont*) 5 : 	(*IF di.Q THEN
  					cmd_for_Status := 0;
  					source_for_Status := 0;
  					command_error_for_Status := cmd;
  				ELSE*)
  					StrDIp.Remont := FALSE;
  					(*StrDIp.isRunning := TRUE;*)

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				(*END_IF;*)
  	(*cmd_setCheck*) 6 : 	StrDIp.Check := TRUE;

  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
  	END_CASE;			
  	resetCmdTimer(IN := false);
  	resetCmdTimerPriznak := TRUE;
  END_IF;
  lastCmd := cmd;

  resetCmdTimer(IN := resetCmdTimerPriznak);
  IF resetCmdTimer.Q THEN
  	resetCmdTimerPriznak := FALSE;
  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF; 

  IF StrDIp.isRunning AND NOT StrDIp.Remont AND NOT StrDIp.Check THEN
  	StrDIp.Signaling := SignalingDi;
  	StrDIp.SignalingTP := _signalingTp.Q;
  ELSE
  	StrDIp.Signaling := 0;
  	StrDIp.SignalingTP := 0;
  END_IF;

  _signalingTp(in := StrDIp.Signaling, PT := T#1s);



  StrDIp.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrDIp.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrDIp.Signaling), 16)
  			OR SHL(BOOL_TO_DWORD(StrDIp.RunOnStart ), 15)
  			OR SHL(BOOL_TO_DWORD(StrDIp.remont), 6)
  			OR SHL(BOOL_TO_DWORD(StrDIp.Check), 5)
  			OR SHL(BOOL_TO_DWORD(StrDIp.hasError), 4)
  			OR SHL(BOOL_TO_DWORD(StrDIp.SignalingTP), 3)
  			OR SHL(BOOL_TO_DWORD(StrDIp.CanRun), 2)
  			OR SHL(BOOL_TO_DWORD(StrDIp.isEnded), 1)
  			OR BOOL_TO_DWORD(StrDIp.isRunning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_KranOpenProtection
  VAR_INPUT
    im : struct_Kran;
  END_VAR
  VAR_IN_OUT
    StrDIp : struct_DiProtection;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    statusDualInput : TYPE_statusDualInput;
    _ProtectionTags : TYPE_ProtectionTags;
    _signalingTp : TOF;
    timer : TON;
    SignalingTrig : R_TRIG;
    SignalingFTrig : F_TRIG;
    SignalingDi : BOOL;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
    signalinTimer : TON;
    runOnStart_Trig : R_TRIG;
  END_VAR

  timer(IN := (im.onStatus<>statusDualInput.STATUS_ON) AND StrDIp.isRunning  , PT := StrDIp.delay);
  SignalingTrig(CLK := timer.Q);
  IF SignalingTrig.Q THEN
  	SignalingDi := TRUE;
  END_IF;
  SignalingFTrig(CLK := timer.Q);
  IF SignalingFTrig.Q THEN
  	SignalingDi := FALSE;
  END_IF;

  StrDIp.Tag := StrDIp.inTag;
  StrDIp.RunOnStart := StrDIp.inRunOnStart;

  StrDIp.CanRun := StrDIp.inCanRun;

  StrDIp.OpcCommandsDisabled := StrDIp.inOpcCommandsDisabled;

  (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
  IF StrDIp.inOpcCommandsDisabled THEN
  	StrDIp.inCommand := StrDIp.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	StrDIp.inCommand := StrDIp.inCommand_ARM;
  END_IF;

  _sunpackerCommand(command := StrDIp.inCommand);
  	source := _sunpackerCommand.source;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrDIp.opcCommandsDisabled) AND source > 0) OR source = 0) then	
  	CASE BYTE_TO_INT(cmd) OF
  	        (*cmdRun*) 1: 	IF        NOT StrDIp.Remont THEN
  					StrDIp.isEnded := FALSE;
  					StrDIp.hasError 	:= FALSE;
  					StrDIp.isRunning := TRUE;
  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrDIp.isRunning := FALSE;
  					StrDIp.isEnded := FALSE;
  					StrDIp.hasError 	:= FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
                                          StrDIp.inOpcCommandsDisabled:=FALSE;

                  (*cmdReset*) 2: 	StrDIp.isRunning := FALSE;
  				StrDIp.isEnded := FALSE;
  				StrDIp.hasError 	:= FALSE;
  				SignalingDi:= FALSE;
  				StrDIp.Check := FALSE;
  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
                                          StrDIp.inOpcCommandsDisabled:=FALSE;

  	(*cmd_setRemont*) 4 :	StrDIp.Remont := TRUE;
  				(*StrDIp.isRunning := FALSE;*)

  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;

          (*cmd_resetRemont*) 5 : 	(*IF (im.onStatus<>statusDualInput.STATUS_ON) THEN
  					cmd_for_Status := 0;
  					source_for_Status := 0;
  					command_error_for_Status := cmd;
  				ELSE*)
  					StrDIp.Remont := FALSE;
  					(*StrDIp.isRunning := TRUE;*)

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				(*END_IF;*)

  	(*cmd_setCheck*) 6 : 	StrDIp.Check := TRUE;

  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
  	END_CASE;			
  	resetCmdTimer(IN := false);
  	resetCmdTimerPriznak := TRUE;
  END_IF;
  lastCmd := cmd;

  resetCmdTimer(IN := resetCmdTimerPriznak);
  IF resetCmdTimer.Q THEN
  	resetCmdTimerPriznak := FALSE;
  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF; 

  IF StrDIp.isRunning AND  NOT StrDIp.Remont AND NOT StrDIp.Check THEN
  	StrDIp.Signaling := SignalingDi;
  	StrDIp.SignalingTP := _signalingTp.Q;
  ELSE
  	StrDIp.Signaling := 0;
  	StrDIp.SignalingTP := 0;
  END_IF;

  _signalingTp(in := StrDIp.Signaling, PT := T#1s);


  StrDIp.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrDIp.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrDIp.Signaling), 16)
  			OR SHL(BOOL_TO_DWORD(StrDIp.RunOnStart ), 15)
  			OR SHL(BOOL_TO_DWORD(StrDIp.remont), 6)
  			OR SHL(BOOL_TO_DWORD(StrDIp.Check), 5)
  			OR SHL(BOOL_TO_DWORD(StrDIp.hasError), 4)
  			OR SHL(BOOL_TO_DWORD(StrDIp.SignalingTP), 3)
  			OR SHL(BOOL_TO_DWORD(StrDIp.CanRun), 2)
  			OR SHL(BOOL_TO_DWORD(StrDIp.isEnded), 1)
  			OR BOOL_TO_DWORD(StrDIp.isRunning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AiProtection
  VAR_INPUT
    ai : struct_AI;
  END_VAR
  VAR_IN_OUT
    StrAIp : struct_AiProtection;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    _signalingTp : TOF;
    _statusAi : TYPE_StatusAi;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
    signalinTimer : TON;
    timer : TON;
    SignalingTrig : R_TRIG;
    SignalingFTrig : F_TRIG;
    SignalingAi : BOOL;
  END_VAR

  timer(IN :=(ai.interval=StrAIp.controlLimit) AND (ai.interval >= _statusAi.normal) AND StrAIp.isRunning, PT :=StrAIp.delay);
  SignalingTrig(CLK := timer.Q);
  IF SignalingTrig.Q THEN
  	SignalingAi := TRUE;
  END_IF;
  SignalingFTrig(CLK := timer.Q);
  IF SignalingFTrig.Q THEN
  	SignalingAi := FALSE;
  END_IF;

  StrAIp.Tag := StrAIp.inTag;
  StrAIp.RunOnStart := StrAIp.inRunOnStart;

  StrAIp.CanRun := StrAIp.inCanRun;

  StrAIp.OpcCommandsDisabled := StrAIp.inOpcCommandsDisabled;

  (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
  IF StrAIp.inOpcCommandsDisabled THEN
  	StrAIp.inCommand := StrAIp.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	StrAIp.inCommand := StrAIp.inCommand_ARM;
  END_IF;

  _sunpackerCommand(command := StrAIp.inCommand);
  	source := _sunpackerCommand.source;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrAIp.opcCommandsDisabled) AND source > 0) OR source = 0) then

  	CASE BYTE_TO_INT(cmd) OF
  		(*cmdRun*) 1: 	IF        NOT StrAIp.Remont THEN
  					StrAIp.isEnded := FALSE;
  					StrAIp.hasError 	:= FALSE;
  					StrAIp.isRunning := TRUE;

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrAIp.isRunning := FALSE;
  					StrAIp.isEnded := FALSE;
  					StrAIp.hasError 	:= FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
                                          StrAIp.inopcCommandsDisabled:=FALSE;

  		(*cmdReset*) 2: 	StrAIp.isRunning := FALSE;
  				StrAIp.isEnded := FALSE;
  				StrAIp.hasError 	:= FALSE;
  				SignalingAi := FALSE;
  				StrAIp.Check := FALSE;
                                          (*StrAIp.Remont := FALSE;*)
  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
                                          StrAIp.inopcCommandsDisabled:=FALSE; 

  	(*cmd_setRemont*) 4 :	StrAIp.Remont := TRUE;
  				(*StrAIp.isRunning := FALSE;*)

  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
  	(*cmd_resetRemont*) 5 : 	(*IF (ai.interval=StrAIp.controlLimit) THEN
  					cmd_for_Status := 0;
  					source_for_Status := 0;
  					command_error_for_Status := cmd;
  				ELSE*)
  					StrAIp.Remont := FALSE;
  					(*StrAIp.isRunning := TRUE;*)

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				(*END_IF;*)
  	(*cmd_setCheck*) 6 : 	StrAIp.Check := TRUE;

  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
  	END_CASE;			
  	resetCmdTimer(IN := false);
  	resetCmdTimerPriznak := TRUE;
  END_IF;
  lastCmd := cmd;


  resetCmdTimer(IN := resetCmdTimerPriznak);
  IF resetCmdTimer.Q THEN
  	resetCmdTimerPriznak := FALSE;
  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF; 

  IF StrAIp.isRunning AND NOT StrAIp.Remont AND NOT StrAIp.Check THEN
  	StrAIp.Signaling := SignalingAi;
  	StrAIp.SignalingTP := _signalingTp.Q;
  ELSE
  	StrAIp.Signaling := 0;
  	StrAIp.SignalingTP := 0;
  END_IF;

  _signalingTp(in := StrAIp.Signaling, PT := T#1s);




  StrAIp.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAIp.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAIp.Signaling), 16)
  			OR SHL(BOOL_TO_DWORD(StrAIp.RunOnStart ), 15)
  			OR SHL(BOOL_TO_DWORD(StrAIp.remont), 6)
  			OR SHL(BOOL_TO_DWORD(StrAIp.Check), 5)
  			OR SHL(BOOL_TO_DWORD(StrAIp.hasError), 4)
  			OR SHL(BOOL_TO_DWORD(StrAIp.SignalingTP), 3)
  			OR SHL(BOOL_TO_DWORD(StrAIp.CanRun), 2)
  			OR SHL(BOOL_TO_DWORD(StrAIp.isEnded), 1)
  			OR BOOL_TO_DWORD(StrAIp.isRunning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_Protection
  VAR
    fb_mvOff : fb_MvProtection;
    fb_dPmaslo_gaz_Less100 : fb_DiProtection;
    fb_Reg_vozb_off : fb_DiProtection;
    fb_Fail_chastotnii_pusk : fb_DiProtection;
    fb_Off_avar_vikluchatel : fb_DiProtection;
    fb_AOKC_SHKC : fb_DiProtection;
    fb_AO_PRU : fb_DiProtection;
    fb_AO_ot_SHU : fb_DiProtection;
    fb_Kran1_sdvig : fb_KranOpenProtection;
    fb_Kran2_sdvig : fb_KranOpenProtection;
    fb_Toporno_podshipnika_EDT_1 : fb_AiProtection;
    fb_Toporno_ypornogo_podshipnika_EDT_2 : fb_AiProtection;
    fb_Toporno_ypornogo_podshipnika_kolesa_red_EDT_3 : fb_AiProtection;
    fb_Toporno_ypornogo_podshipnika_kolesa_red_HT_4 : fb_AiProtection;
    fb_Toporno_podshipnika_shesterni_reduktora_T_5 : fb_AiProtection;
    fb_Toporno_podshipnika_reduktora_HT_6 : fb_AiProtection;
    fb_Toporno_ypornogo_podshipnika_nagnetatelja_T_7_1 : fb_AiProtection;
    fb_Toporno_ypornogo_podshipnika_nagnetatelja_T_7_2 : fb_AiProtection;
    fb_Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_1 : fb_AiProtection;
    fb_Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_2 : fb_AiProtection;
    fb_Typornogo_podshipnika_rav_kolodok_HT_9_1 : fb_AiProtection;
    fb_Typornogo_podshipnika_rav_kolodok_HT_9_2 : fb_AiProtection;
    fb_Typornogo_podshipnika_nerab_kolodok_HT_10_1 : fb_AiProtection;
    fb_Typornogo_podshipnika_nerab_kolodok_HT_10_2 : fb_AiProtection;
    fb_Tgaza_na_vhode_H : fb_AiProtection;
    fb_Tgaza_na_vyhode_H : fb_AiProtection;
    fb_Tmasla_v_mb : fb_AiProtection;
    fb_Tmasla_v_mb_nad_ten : fb_AiProtection;
    fb_Tgorjachego_vozduha_ED_kanal_1 : fb_AiProtection;
    fb_Tgorjachego_vozduha_ED_kanal_2 : fb_AiProtection;
    fb_Tmasla_do_AVOM : fb_AiProtection;
    fb_Tmasla_posle_AVOM : fb_AiProtection;
    fb_Tmedi_statora_kanal_1 : fb_AiProtection;
    fb_Tmedi_statora_kanal_2 : fb_AiProtection;
    fb_Tmedi_statora_kanal_3 : fb_AiProtection;
    fb_Tstali_statora_kanal_1 : fb_AiProtection;
    fb_Tstali_statora_kanal_2 : fb_AiProtection;
    fb_Tstali_statora_kanal_3 : fb_AiProtection;
    fb_Tholodnogo_vozduha_ED_kanal_1 : fb_AiProtection;
    fb_Tholodnogo_vozduha_ED_kanal_2 : fb_AiProtection;
    fb_Pmaslo_sm_nizkoe : fb_AiProtection;
    fb_Pmaslo_sm_vysokoe : fb_AiProtection;
    fb_Pgaza_na_vhode_nagnetatelia : fb_AiProtection;
    fb_Pgaza_na_vyhode_nagnetatelia : fb_AiProtection;
    fb_Pmasla_posle_NU : fb_AiProtection;
    fb_Pmasla_smazki_posle_gns : fb_AiProtection;
    fb_Pimpuls_gaz : fb_AiProtection;
    fb_dPmaslo_gaz : fb_AiProtection;
    fb_dP_maslo_na_filtre : fb_AiProtection;
    fb_Os_sdvig_nagnetatelja_plus : fb_AiProtection;
    fb_Os_sdvig_nagnetatelja_minus : fb_AiProtection;
    fb_Vibro_skorost_OPED_T1 : fb_AiProtection;
    fb_Vibro_skorost_OPED_T2 : fb_AiProtection;
    fb_Vibro_skorost_OYP_kolesa_ED_T3 : fb_AiProtection;
    fb_Vibro_skorost_OP_kolesa_RH_T4 : fb_AiProtection;
    fb_Vibro_skorost_OP_shesterni_RED_T5 : fb_AiProtection;
    fb_Vibro_skorost_OP_shesterni_reduktora_H_T6 : fb_AiProtection;
    fb_Vibroperemesh_vala_N_T7 : fb_AiProtection;
    fb_Vibroperemesh_vala_N_T8 : fb_AiProtection;
    fb_Uroven_masla_v_mb : fb_AiProtection;
    fb_Tok_statora : fb_AiProtection;
    fb_Kontrol_per_220V_less187 : fb_AiProtection;
    fb_Kontrol_per_220V_high242 : fb_AiProtection;
    fb_Kontrol_post_220V_less187 : fb_AiProtection;
    fb_Kontrol_post_220V_high242 : fb_AiProtection;
  END_VAR
  VAR_EXTERNAL
    protections : ProtectionsConfig;
    ai : AiConfig;
    IM : ImConfig;
  END_VAR

  (************************************************************* DiProtection ************************************************************)
  (* МВ отключен 
  fb_mvOff(sw:=IM.mv, StrDIp := protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);*)

  (* Неисправность возбудительного устройства *)
  fb_dPmaslo_gaz_Less100(di := IM.SingleSignals.dP_maslo_gaz_Less100, StrDIp := protections.dPmaslo_gaz_less100);

  (* Сдвиг крана №2 *)
  fb_Reg_vozb_off(di:=IM.SingleSignals.Vozbud_neispravnost, StrDIp := protections.Reg_vozb_off);

  (* Сдвиг крана №2 *)
  fb_Fail_chastotnii_pusk(di:=IM.SingleSignals.Neuspesh_chastotny_pusk, StrDIp := protections.Fail_chastotnii_pusk);

  (* Сдвиг крана №2 *)
  fb_Off_avar_vikluchatel(di:=IM.SingleSignals.Avariinoe_otkluch_vikluchatelya, StrDIp := protections.Off_avar_vikluchatel);

  (* Сдвиг крана №2 *)
  fb_AOKC_SHKC(di:=IM.SingleSignals.AO_KC_ot_SHKS, StrDIp := protections.AOKC_SHKC);

  (* Сдвиг крана №2 *)
  fb_AO_PRU(di:=IM.SingleSignals.AO_GPA_ot_PRU, StrDIp := protections.AO_PRU);

  (* Сдвиг крана №2 *)
  fb_AO_ot_SHU(di:=IM.SingleSignals.AO_GPA_ot_SHU, StrDIp := protections.AO_ot_SHU);

  (* Сдвиг крана №2 *)
  fb_Kran1_sdvig(im:=IM.Kran1, StrDIp := protections.Kran1_sdvig);

  (* Сдвиг крана №2 *)
  fb_Kran2_sdvig(im:=IM.Kran2, StrDIp := protections.Kran2_sdvig);

  (************************************************************* AiProtection ************************************************************)


  (* Температура переднего опорного подшипника двигателя, т.1 *)
  fb_Toporno_podshipnika_EDT_1(ai := ai.Toporno_podshipnika_EDT_1, StrAIp := protections.Topornogo_podshipnika_EDT_1);

  (* Температура заднего опорного подшипника двигателя, т.2 *)
  fb_Toporno_ypornogo_podshipnika_EDT_2(ai := ai.Toporno_ypornogo_podshipnika_EDT_2, StrAIp := protections.Toporno_ypornogo_podshipnika_EDT_2);

  (* Температура подшипника редуктора, т1 *)
  fb_Toporno_ypornogo_podshipnika_kolesa_red_EDT_3(ai := ai.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3, StrAIp := protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3);

  (* Температура подшипника редуктора, т2 *)
  fb_Toporno_ypornogo_podshipnika_kolesa_red_HT_4(ai := ai.Toporno_ypornogo_podshipnika_kolesa_red_HT_4, StrAIp := protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4);

  (* Температура подшипника редуктора, т3 *)
  fb_Toporno_podshipnika_shesterni_reduktora_T_5(ai := ai.Toporno_podshipnika_shesterni_reduktora_T_5, StrAIp := protections.Topornogo_podshipnika_shesterni_reduktora_T_5);

  (* Температура подшипника редуктора, т4 *)
  fb_Toporno_podshipnika_reduktora_HT_6(ai := ai.Toporno_podshipnika_reduktora_HT_6, StrAIp := protections.Topornogo_podshipnika_reduktora_HT_6);

  (* Температура опорного подшипника нагнетателя, т1 *)
  fb_Toporno_ypornogo_podshipnika_nagnetatelja_T_7_1(ai := ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_1, StrAIp := protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7);

  (* Температура опорного подшипника нагнетателя, т1 *)
  fb_Toporno_ypornogo_podshipnika_nagnetatelja_T_7_2(ai := ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_2, StrAIp := protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7);

  (* Температура опорного подшипника нагнетателя, т2 *)
  fb_Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_1(ai := ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_1, StrAIp := protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8);

  (* Температура опорного подшипника нагнетателя, т2 *)
  fb_Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_2(ai := ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_2, StrAIp := protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8);

  (* Температура опорного подшипника нагнетателя, т3 *)
  fb_Typornogo_podshipnika_rav_kolodok_HT_9_1(ai := ai.Typornogo_podshipnika_rav_kolodok_HT_9_1, StrAIp := protections.Typornogo_podshipnika_rav_kolodok_HT_9);

  (* Температура опорного подшипника нагнетателя, т3 *)
  fb_Typornogo_podshipnika_rav_kolodok_HT_9_2(ai := ai.Typornogo_podshipnika_rav_kolodok_HT_9_2, StrAIp := protections.Typornogo_podshipnika_rav_kolodok_HT_9);

  (* Температура упорно опорного подшипника нагнетателя, т4 *)
  fb_Typornogo_podshipnika_nerab_kolodok_HT_10_1(ai := ai.Typornogo_podshipnika_nerab_kolodok_HT_10_1, StrAIp := protections.Typornogo_podshipnika_nerab_kolodok_HT_10);

  (* Температура упорно опорного подшипника нагнетателя, т4 *)
  fb_Typornogo_podshipnika_nerab_kolodok_HT_10_2(ai := ai.Typornogo_podshipnika_nerab_kolodok_HT_10_2, StrAIp := protections.Typornogo_podshipnika_nerab_kolodok_HT_10);

  (* Температура газа на выходе нагнетателя *)
  fb_Tgaza_na_vyhode_H(ai := ai.Tgaza_na_vhode_H, StrAIp := protections.Tgaza_na_vyhode_H);

  (* Температура газа на выходе нагнетателя *)
  fb_Os_sdvig_nagnetatelja_plus(ai := ai.Os_sdvig_nagnetatelja_plus, StrAIp := protections.Os_sdvig_nagnetatelja_plus);

  (* Температура газа на выходе нагнетателя *)
  fb_Os_sdvig_nagnetatelja_minus(ai := ai.Os_sdvig_nagnetatelja_minus, StrAIp := protections.Os_sdvig_nagnetatelja_minus);

  (* Температура газа на выходе нагнетателя *)
  fb_Pgaza_na_vyhode_nagnetatelia(ai := ai.Pgaza_na_vyhode_nagnetatelia, StrAIp := protections.Pgaza_na_vyhode_nagnetatelia);

  (* Температура газа на выходе нагнетателя *)
  fb_dPmaslo_gaz(ai := ai.dPmaslo_gaz, StrAIp := protections.dPmaslo_gaz);

  (* Температура газа на выходе нагнетателя *)
  fb_Pmaslo_sm_nizkoe(ai := ai.Pmaslo_sm_nizkoe, StrAIp := protections.Pmaslo_sm_nizkoe);

  (* Температура газа на выходе нагнетателя *)
  fb_Pmaslo_sm_vysokoe(ai := ai.Pmaslo_sm_vysokoe, StrAIp := protections.Pmaslo_sm_vysokoe);

  (* Температура газа на выходе нагнетателя *)
  fb_Vibro_skorost_OPED_T1(ai := ai.Vibro_skorost_OPED_T1, StrAIp := protections.Vibro_skorost_OPED_T1);

  (* Температура газа на выходе нагнетателя *)
  fb_Vibro_skorost_OPED_T2(ai := ai.Vibro_skorost_OYPED_T2, StrAIp := protections.Vibro_skorost_OPED_T2);

  (* Температура газа на выходе нагнетателя *)
  fb_Vibro_skorost_OYP_kolesa_ED_T3(ai := ai.Vibro_skorost_OYP_kolesa_ED_T3, StrAIp := protections.Vibro_skorost_OYP_kolesa_ED_T3);

  (* Температура газа на выходе нагнетателя *)
  fb_Vibro_skorost_OP_kolesa_RH_T4(ai := ai.Vibro_skorost_OP_kolesa_RH_T4, StrAIp := protections.Vibro_skorost_OP_kolesa_RH_T4);

  (* Температура газа на выходе нагнетателя *)
  fb_Vibro_skorost_OP_shesterni_RED_T5(ai := ai.Vibro_skorost_OP_shesterni_RED_T5, StrAIp := protections.Vibro_skorost_OP_shesterni_RED_T5);

  (* Температура газа на выходе нагнетателя *)
  fb_Vibro_skorost_OP_shesterni_reduktora_H_T6(ai := ai.Vibro_skorost_OP_shesterni_reduktora_H_T6, StrAIp := protections.Vibro_skorost_OP_shesterni_reduktora_H_T6);
END_FUNCTION_BLOCK

FUNCTION resetDiProtection : BOOL
  VAR_IN_OUT
    protection : struct_DiProtection;
  END_VAR
  VAR CONSTANT
    cmdReset : WORD := 2;
  END_VAR

  IF protection.isRunning THEN
                      protection.inOpcCommandsDisabled:=TRUE;
  		protection.inCommand_Alg:=cmdReset;
  END_IF;
END_FUNCTION

FUNCTION resetAiProtection : BOOL
  VAR_IN_OUT
    protection : struct_AiProtection;
  END_VAR
  VAR CONSTANT
    cmdReset : WORD := 2;
  END_VAR

  IF protection.isRunning THEN
                      protection.inOpcCommandsDisabled:=TRUE;
  		protection.inCommand_Alg:=cmdReset;
  END_IF;
END_FUNCTION

FUNCTION resetAllProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  resetAiProtection(protections.Topornogo_podshipnika_EDT_1);
  resetAiProtection(protections.Toporno_ypornogo_podshipnika_EDT_2);
  resetAiProtection(protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3);
  resetAiProtection(protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4);
  resetAiProtection(protections.Topornogo_podshipnika_shesterni_reduktora_T_5);
  resetAiProtection(protections.Topornogo_podshipnika_reduktora_HT_6);
  resetAiProtection(protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7);
  resetAiProtection(protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8);
  resetAiProtection(protections.Typornogo_podshipnika_rav_kolodok_HT_9);
  resetAiProtection(protections.Typornogo_podshipnika_nerab_kolodok_HT_10);
  resetAiProtection(protections.Tgaza_na_vyhode_H);
  resetAiProtection(protections.Os_sdvig_nagnetatelja_plus);
  resetAiProtection(protections.Os_sdvig_nagnetatelja_minus);
  resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
  resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
  resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
  resetAiProtection(protections.dPmaslo_gaz);
  resetAiProtection(protections.Pmaslo_sm_nizkoe);
  resetAiProtection(protections.Pmaslo_sm_vysokoe);
  resetAiProtection(protections.Vibro_skorost_OPED_T1);
  resetAiProtection(protections.Vibro_skorost_OPED_T2);
  resetAiProtection(protections.Vibro_skorost_OYP_kolesa_ED_T3);
  resetAiProtection(protections.Vibro_skorost_OP_kolesa_RH_T4);
  resetAiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5);
  resetAiProtection(protections.Vibro_skorost_OP_shesterni_reduktora_H_T6);


  resetDiProtection(protections.dPmaslo_gaz_less100);
  resetDiProtection(protections.Reg_vozb_off);
  resetDiProtection(protections.Fail_chastotnii_pusk);
  resetDiProtection(protections.Off_avar_vikluchatel);
  resetDiProtection(protections.AOKC_SHKC);
  resetDiProtection(protections.AO_PRU);
  resetDiProtection(protections.AO_ot_SHU);
  resetDiProtection(protections.mvOff);
  resetDiProtection(protections.Kran1_sdvig);
  resetDiProtection(protections.Reg_vozb_off);
  resetDiProtection(protections.Kran2_sdvig);
END_FUNCTION

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
END_FUNCTION

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
END_FUNCTION

FUNCTION_BLOCK RemontAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
  END_VAR
  VAR_EXTERNAL
    protectManager : struct_ProtectionsManager;
    algManager : struct_AlgoritmsManager;
    ModeGpa : TYPE_ModeGpa;
    PMcommand : TYPE_CommandsPotectionsManager;
    IM : ImConfig;
  END_VAR

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
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
  					StrAlg.hasError 	:= FALSE;
                                               (*****************       OnRun       *****************)
                                                        algManager.nMode:=ModeGpa.MODE_REMONT;
                                                        protectManager.inCommand:=PMcommand.ResetAllProtections;
  					    UnBlockAllIM(IM);
                                                    (*StrAlg.inOpcCommandsDisabled:=FALSE;*)		
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
                                                    BlockAllIM(IM);
                                                    protectManager.inCommand:=PMcommand.RestartAllProtections;
                                                    algManager.nMode:=ModeGpa.MODE_STOP;

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


  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION EnableAiLimits : BOOL
  VAR_IN_OUT
    ai : AiConfig;
  END_VAR

  ai.Pmasla_posle_GNS.Disabled_LA:=FALSE;
   ai.Pmasla_posle_GNS.Disabled_LW:=FALSE;
   ai.Pmasla_posle_NU.Disabled_LW:=FALSE;
   ai.Tmasla_MB.Disabled_LA:=FALSE;
   ai.Tmasla_MB.Disabled_LW:=FALSE;
END_FUNCTION

FUNCTION DisableAiLimits : BOOL
  VAR_IN_OUT
    ai : AiConfig;
  END_VAR

  ai.Pmasla_posle_GNS.Disabled_LA:=TRUE;
   ai.Pmasla_posle_GNS.Disabled_LW:=TRUE;
   ai.Pmasla_posle_NU.Disabled_LW:=TRUE;
   ai.Tmasla_MB.Disabled_LA:=TRUE;
   ai.Tmasla_MB.Disabled_LW:=TRUE;
END_FUNCTION

FUNCTION_BLOCK TestProtectionAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
  END_VAR
  VAR_EXTERNAL
    ai : AiConfig;
    protectManager : struct_ProtectionsManager;
    algManager : struct_AlgoritmsManager;
    ModeGpa : TYPE_ModeGpa;
    PMcommand : TYPE_CommandsPotectionsManager;
    IM : ImConfig;
  END_VAR

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
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
  					StrAlg.hasError 	:= FALSE;
                                               (*****************       OnRun       *****************)
                                                        algManager.nMode:=ModeGpa.MODE_TESTAZ;
                                                        protectManager.inCommand:=PMcommand.CheckProtections;
  					    EnableAiLimits(ai);
                                                        (*IM.SingleSignals.P_oil_low.Disabled_Sig:=FALSE;*)
                                                        (*IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=FALSE;*)
                                                    (*StrAlg.inOpcCommandsDisabled:=FALSE;*)		
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
                                                    DisableAiLimits(ai);
                                                    (*IM.SingleSignals.P_oil_low.Disabled_Sig:=TRUE;
                                                    IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=TRUE;*)
                                                    protectManager.inCommand:=PMcommand.RestartAllProtections;
                                                    algManager.nMode:=ModeGpa.MODE_STOP;

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


  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK TestImAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
  END_VAR
  VAR_EXTERNAL
    protectManager : struct_ProtectionsManager;
    algManager : struct_AlgoritmsManager;
    ModeGpa : TYPE_ModeGpa;
    PMcommand : TYPE_CommandsPotectionsManager;
    IM : ImConfig;
  END_VAR

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
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
  					StrAlg.hasError 	:= FALSE;
                                               (*****************       OnRun       *****************)

                                                        algManager.nMode:=ModeGpa.MODE_TESTIM;
  					    UnBlockAllIM(IM);

                                                    (*StrAlg.inOpcCommandsDisabled:=FALSE;*)		
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
                                                    BlockAllIM(IM);
                                                    algManager.nMode:=ModeGpa.MODE_STOP;

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


  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AutoTenAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
    PNS : struct_Switch;
    TEN : struct_Switch;
  END_VAR
  VAR_INPUT
    T_masla : struct_AI;
    Uroven_masla : struct_AI;
    offTemperature : struct_AnalogParametr;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    _statusAi : TYPE_StatusAi;
    _statusDualInput : TYPE_statusDualInput;
    _commandDualInput : TYPE_commandDualInput;
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

  IF NOT onInit THEN
  StrAlg.inCanRun:=TRUE;
  onInit:=TRUE;
  END_IF;



  IF StrAlg.isRuning THEN

  IF ((T_masla.interval >= _statusAi.normal) AND (T_masla.value > offTemperature.Value)) OR
  ((Uroven_masla.interval >= _statusAi.normal) AND (Uroven_masla.value < Uroven_masla.LA)) OR
  (PNS.onStatus=_statusDualInput.STATUS_OFF) THEN

        TEN.inOpcCommandsDisabled:=TRUE;

  	IF TEN.onStatus = _statusDualInput.STATUS_ON THEN
            TEN.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);
  	END_IF;

  ELSIF PNS.onStatus = _statusDualInput.STATUS_ON THEN
        TEN.inOpcCommandsDisabled:=FALSE;
  END_IF;

  END_IF;



  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.hasError := TEN.CommandFault OR (T_masla.interval < _statusAi.normal) OR (Uroven_masla.interval < _statusAi.normal);


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
  		(*cmdRun*) 1: 	IF StrAlg.CanRun AND NOT StrAlg.hasError THEN
  					StrAlg.isRuning := TRUE;
  					StrAlg.isEnded := FALSE;
  					(*StrAlg.hasError := FALSE;*)

                                                    (*****************       OnRun       *****************)
                                                    IF StrAlg.inOpcCommandsDisabled THEN
  		                              StrAlg.inOpcCommandsDisabled:=FALSE;
                                                    END_IF;
  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrAlg.isRuning := FALSE;
  					StrAlg.isEnded := FALSE;
  					(*StrAlg.hasError 	:= FALSE;*)

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
  		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
  				StrAlg.isEnded := FALSE;
  				(*StrAlg.hasError 	:= FALSE;*)

                                          (*****************       OnReset       *****************)
                                          TEN.inOpcCommandsDisabled:=TRUE;
                                          TEN.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);

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

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AutoPnsAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
    Nasos : struct_Switch;
  END_VAR
  VAR_INPUT
    diPlow : struct_singleSignal;
    Poil : struct_AI;
    Ust_Run : struct_AnalogParametr;
    Ust_Stop : struct_AnalogParametr;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    _statusAi : TYPE_StatusAi;
    _statusDualInput : TYPE_statusDualInput;
    _commandDualInput : TYPE_commandDualInput;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
    onInit : BOOL;
    onTrig : R_TRIG;
    offTrig : R_TRIG;
    waitOn : TON;
    waitOff : TON;
  END_VAR
  VAR_EXTERNAL
    AlgTimers : struct_AlgTimers;
  END_VAR

  IF NOT onInit THEN
  StrAlg.inOpcCommandsDisabled:=TRUE;
  StrAlg.inCanRun:=TRUE;
  onInit:=TRUE;
  END_IF;



  IF StrAlg.isRuning THEN

  StrAlg.hasError := Nasos.CommandFault OR (Poil.interval < _statusAi.normal OR NOT diPlow.reliability);

      IF (Poil.Interval >= _statusAi.normal) THEN
      waitOn(IN:=Poil.Value <= Ust_Run.value OR diPlow.q, PT := T#1S);
      waitOff(IN:= Poil.Value >= Ust_Stop.value, PT := T#300S);

      ELSE 
      waitOn(IN:=diPlow.Q, PT := T#1S);
      END_IF;

  onTrig(CLK:=waitOn.Q);
  offTrig(CLK:=waitOff.Q);
      IF (Poil.Value>=Ust_Stop.value) AND Nasos.inopcCommandsDisabled THEN
          Nasos.inopcCommandsDisabled:=FALSE;
      END_IF;

      IF onTrig.Q THEN
      Nasos.inopcCommandsDisabled:=TRUE;
      Nasos.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_ON);
      END_IF;


      IF offTrig.Q THEN
          IF NOT (Nasos.onStatus=_statusDualInput.STATUS_OFF) THEN
          Nasos.inopcCommandsDisabled:=TRUE;
          Nasos.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);
          END_IF;
      END_IF;



  AlgTimers.AutoPns_OnTimer:=UDINT_TO_UINT(TIME_TO_UDINT(waitOn.PT - waitOn.ET)/1000);
  AlgTimers.AutoPns_OffTimer:=UDINT_TO_UINT(TIME_TO_UDINT(waitOff.PT -waitOff.ET)/1000);  

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
                                          waitOn(in:=FALSE);
                                          waitOff(in:=FALSE);
                                          AlgTimers.AutoPns_OffTimer:=UDINT_TO_UINT(TIME_TO_UDINT(waitOff.pt -waitOff.ET)/1000);

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

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AutoAvomAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
    im1 : struct_Switch;
    im2 : struct_Switch;
  END_VAR
  VAR_INPUT
    ai : struct_AI;
  END_VAR
  VAR_IN_OUT
    on1Temperature : struct_AnalogParametr;
    on2Temperature : struct_AnalogParametr;
    hystereses : struct_AnalogParametr;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    _statusAi : TYPE_StatusAi;
    _statusDualInput : TYPE_statusDualInput;
    _commandDualInput : TYPE_commandDualInput;
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

  (*
  IF NOT onInit THEN
  StrAlg.inCanRun:=TRUE;
  onInit:=TRUE;
  END_IF;
  *)


  IF StrAlg.isRuning THEN

  StrAlg.hasError := im1.CommandFault OR im2.CommandFault OR (ai.interval<_statusAi.normal);

      IF (ai.interval>=_statusAi.normal) THEN

            IF (ai.value>= on1Temperature.Value) THEN
                IF im1.onStatus <> _statusDualInput.STATUS_ON THEN    
  	       im1.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_ON); (*cmd_on*)
                END_IF;
            END_IF;

            IF  ai.value < (on1Temperature.Value - hystereses.Value) THEN
                IF im1.onStatus <> _statusDualInput.STATUS_OFF THEN    
  	       im1.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF); 
                END_IF;
            END_IF;

             IF (ai.value>= on2Temperature.Value) THEN
                IF im2.onStatus <> _statusDualInput.STATUS_ON THEN    
  	       im2.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_ON); (*cmd_on*)
                END_IF;
            END_IF;

            IF  ai.value < (on2Temperature.Value - hystereses.Value) THEN
                IF im2.onStatus <> _statusDualInput.STATUS_OFF THEN    
  	       im2.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF); 
                END_IF;
            END_IF;
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
                                                    StrAlg.inOpcCommandsDisabled:=FALSE;
  					im1.inOpcCommandsDisabled:=TRUE;
                                                    im2.inOpcCommandsDisabled:=TRUE;		
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
                                          StrAlg.inOpcCommandsDisabled:=FALSE;
                                          im1.inOpcCommandsDisabled:=FALSE;
                                          im2.inOpcCommandsDisabled:=FALSE;
                                          im1.inCommand_Alg:=0;
                                          im2.inCommand_Alg:=0;
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

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION resetIfRunning : BOOL
  VAR_IN_OUT
    alg : struct_Alg;
  END_VAR
  VAR CONSTANT
    cmdReset : WORD := 2;
  END_VAR

  IF alg.isRuning THEN
                      alg.inOpcCommandsDisabled:=TRUE;
  		alg.inCommand_Alg:=cmdReset;
  END_IF;
END_FUNCTION

FUNCTION runIfNotRunning : BOOL
  VAR_IN_OUT
    alg : struct_Alg;
  END_VAR
  VAR CONSTANT
    cmdRun : WORD := 1;
  END_VAR

  IF NOT alg.isRuning THEN
                      alg.inOpcCommandsDisabled:=TRUE;
                      alg.inCanRun:=TRUE;
  		alg.inCommand_Alg:=cmdRun;
  END_IF;
END_FUNCTION

FUNCTION_BLOCK fb_ph_algoritm
  VAR_IN_OUT
    alg : struct_Alg;
  END_VAR
  VAR_INPUT
    act : TYPE_PhaseAlgoritmAction;
    PhaseNumber : UINT;
    waitCompletion : BOOL;
  END_VAR
  VAR_IN_OUT
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR
    CommandFault_Trig : R_TRIG;
    reset_Trig : R_TRIG;
    _statusDualInput : TYPE_statusDualInput;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;
            StrPh.run:=FALSE;

  	CASE act OF
  		(*PhaseAlgoritmAction.run*)    _run : runIfNotRunning(alg); (*cmd_run*)
  		(*PhaseAlgoritmAction.reset*)_reset : resetIfRunning(alg); (*cmd_reset*)
  	END_CASE;	
  END_IF;


  IF StrPh.start AND NOT StrPh.top THEN
                      CommandFault_Trig(CLK := alg.hasError);
                      IF CommandFault_Trig.Q THEN
  	          StrPh.error := TRUE;
                      END_IF;

  		CASE act OF
  		(*PhaseAlgoritmAction.run*)    _run:
                                                          IF waitCompletion THEN
  		                                	StrPh.top:=alg.isEnded;
  		                                    ELSE
  			                              StrPh.top:=alg.isRuning;			
  		                                    END_IF;

  		(*PhaseAlgoritmAction.reset*) _reset:   StrPh.top := NOT alg.isRuning;
  		END_CASE;

  END_IF;

  IF StrPh.top THEN
  StrPh.error := FALSE;
  END_IF;

  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
            IF waitCompletion THEN
            resetIfRunning(alg);
            END_IF;
  	StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.run:=FALSE;
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_ph_Timer
  VAR_INPUT
    delay : TIME;
    PhaseNumber : UINT;
  END_VAR
  VAR_IN_OUT
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR
    CommandFault_Trig : R_TRIG;
    reset_Trig : R_TRIG;
  END_VAR
  VAR_IN_OUT
    timer : UINT;
  END_VAR
  VAR
    _timer : TON;
    _statusDualInput : TYPE_statusDualInput;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;
            StrPh.run:=FALSE;

  END_IF;

  _timer(IN:=StrPh.start, PT:=delay);

  timer:=TIME_TO_UINT(delay -_timer.ET);

  IF StrPh.start AND NOT StrPh.top THEN
  StrPh.top:=_timer.Q;
  END_IF;

  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
  	StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.run:=FALSE;
            (*timer:=TIME_TO_UINT(delay -_timer.ET);*)
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_Question
  VAR_IN_OUT
    StrQ : struct_Question;
  END_VAR
  VAR
    Asked : UINT;
    _answers : TYPE_Answers;
  END_VAR
  VAR CONSTANT
    cmd_answer : UINT := 1;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    parametr : BYTE;
    lastParametr : BYTE;
    cmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
    reset_Trig : R_TRIG;
  END_VAR

  StrQ.OpcCommandsDisabled := StrQ.inopcCommandsDisabled;

  IF StrQ.ask THEN
  StrQ.inopcCommandsDisabled:=FALSE;
      IF Asked=0 THEN
  	Asked:=StrQ.AnswerVariants;
  	StrQ.answer:=_answers.ANS_NONE;	
      END_IF;




      _sunpackerCommand(command := StrQ.inCommand);
  	source := _sunpackerCommand.source;
            parametr := _sunpackerCommand.parametr;
  	cmd := _sunpackerCommand.cmd;

      IF cmd <> 0 AND lastParametr <> parametr AND ((NOT StrQ.OpcCommandsDisabled) AND source > 0)  then
  	CASE BYTE_TO_INT(cmd) OF
  	                               1 :

  				IF Asked<>0 THEN
                                             (* CASE BYTE_TO_INT(parametr) OF
                                              1: answer:=_answers.ANS_YES;
                                              2: answer:=_answers.ANS_NO;
                                              4: answer:=_answers.ANS_CANCEL;
                                              8: answer:=_answers.ANS_RETRY;
  	                                  END_CASE;*)
                                          StrQ.answer:=BYTE_TO_UINT(parametr);
                                          command_error_for_Status := 0;	
                                          ELSE
  	                              command_error_for_Status := cmd;
                                          END_IF;
  	END_CASE;	
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	resetCmdTimer(IN := FALSE);
  	resetCmdTimerPriznak := TRUE;
      END_IF;

      lastParametr := parametr;

      resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
      IF resetCmdTimer.Q THEN
  	resetCmdTimerPriznak := FALSE;
  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
      END_IF; 
  END_IF;


  reset_Trig(CLK := StrQ.reset);
  IF reset_Trig.Q THEN
  	Asked:=0;
  	StrQ.answer:=0;
            StrQ.ask:=FALSE;
            StrQ.reset:=FALSE;
  	StrQ.inopcCommandsDisabled:=TRUE;
  END_IF;

  StrQ.status := SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrQ.OpcCommandsDisabled ), 21);
  IF StrQ.answer = 0 THEN
      StrQ.status := StrQ.status  OR SHL(UINT_TO_DWORD(asked), 6);
  ELSE
      StrQ.status := StrQ.status  OR SHL(UINT_TO_DWORD(StrQ.answer), 6);
  END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_ph_Switch
  VAR_IN_OUT
    im : struct_Switch;
  END_VAR
  VAR_INPUT
    act : TYPE_DualStateImAction;
    PhaseNumber : UINT;
  END_VAR
  VAR_IN_OUT
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR
    CommandFault_Trig : R_TRIG;
    reset_Trig : R_TRIG;
    _statusDualInput : TYPE_statusDualInput;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;
            StrPh.run:=FALSE;

  	CASE act OF
  		(*DualStateImAction.on*)   _on :im.inOpcCommandsDisabled:=TRUE; 
                                                      im.inCommand_Alg := 1; (*cmd_open*)
  		(*DualStateImAction.off*) _off :im.inOpcCommandsDisabled:=TRUE; 
                                                      im.inCommand_Alg := 2; (*cmd_close*)
  	END_CASE;	
  END_IF;


  IF StrPh.start AND NOT StrPh.top THEN
                      CommandFault_Trig(CLK := im.CommandFault);
                      IF CommandFault_Trig.Q THEN
  	          StrPh.error := TRUE;
                      END_IF;

  		CASE act OF
  		(*_DualStateImAction.on*)    _on: StrPh.top := im.onStatus = _statusDualInput.STATUS_ON;
  		(*_DualStateImAction.off*)  _off: StrPh.top := im.onStatus = _statusDualInput.STATUS_OFF;
  		END_CASE;

  END_IF;

  IF StrPh.top THEN
  StrPh.error := FALSE;
  END_IF;

  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
  	StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.run:=FALSE;
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_ph_CustomPhase
  VAR_INPUT
    PhaseNumber : UINT;
  END_VAR
  VAR_IN_OUT
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR
    CommandFault_Trig : R_TRIG;
    reset_Trig : R_TRIG;
    _statusDualInput : TYPE_statusDualInput;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;
            StrPh.run:=FALSE;
  END_IF;


  IF StrPh.top THEN StrPh.error := FALSE; END_IF;


  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
  	StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.run:=FALSE;
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION runPhase : BOOL
  VAR_IN_OUT
    ph : struct_PhaseAlgoritm;
  END_VAR

  IF NOT ph.start THEN
                      ph.run:=TRUE;                   
  END_IF;
END_FUNCTION

FUNCTION resetPhase : BOOL
  VAR_IN_OUT
    ph : struct_PhaseAlgoritm;
  END_VAR

  IF ph.start OR ph.top THEN
                      ph.reset:=TRUE;                 
  END_IF;
END_FUNCTION

FUNCTION askQuestion : BOOL
  VAR_IN_OUT
    StrQ : struct_Question;
  END_VAR

  IF NOT StrQ.ask THEN
                      StrQ.inOpcCommandsDisabled:=FALSE;
                      StrQ.ask:=TRUE;                   
  END_IF;
END_FUNCTION

FUNCTION resetQuestion : BOOL
  VAR_IN_OUT
    StrQ : struct_Question;
  END_VAR

  IF StrQ.ask THEN
                      StrQ.inOpcCommandsDisabled:=TRUE;
                      StrQ.reset:=TRUE;                   
  END_IF;
END_FUNCTION

FUNCTION_BLOCK fb_vibegPNSAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    autoPnsOff : struct_PhaseAlgoritm;
    waitVibeg : struct_PhaseAlgoritm;
    pnsOff : struct_PhaseAlgoritm;
    vibegEnd : struct_PhaseAlgoritm;
  END_VAR
  VAR_IN_OUT
    algContinue : struct_Question;
  END_VAR
  VAR
    fb_autoPnsOff : fb_ph_algoritm;
    fb_waitVibeg : fb_ph_Timer;
    fb_algContinue : fb_Question;
    fb_pnsOff : fb_ph_Switch;
    fb_vibegEnd : fb_ph_CustomPhase;
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
   fb_autoPnsOff(phaseNumber:=0, act:=_reset, waitCompletion:=FALSE);
    fb_waitVibeg(phaseNumber:=1, delay:=T#300S);
       algContinue.AnswerVariants:=_Answers.ANS_YES;
       fb_pnsOff(phaseNumber:=2, act:=_off);
     fb_vibegEnd(phaseNumber:=14);
  onInit:=TRUE;
  END_IF;

   fb_autoPnsOff(StrPh:=autoPnsOff, alg:=algoritms.autoPns);
    fb_waitVibeg(StrPh:=waitVibeg, timer:=AlgTimers.vibegPNS_Timer);
  fb_algContinue(StrQ:=algContinue);
       fb_pnsOff(StrPh:=pnsOff, Im:=IM.pns);
     fb_vibegEnd(StrPh:=vibegEnd);


  IF StrAlg.isRuning THEN


  StrAlg.hasError := autoPnsOff.error OR pnsOff.error;

      IF IM.pns.onStatus = _statusDualInput.STATUS_ON AND NOT vibegEnd.top THEN

  	runPhase(vibegEnd);
            runPhase(waitVibeg);
            askQuestion(algContinue);

      END_IF;


      IF waitVibeg.top OR (algContinue.answer = _Answers.ANS_YES) THEN
  	vibegEnd.top:=TRUE;
  	resetPhase(waitVibeg);
            resetQuestion(algContinue);

            resetAiProtection(protections.Os_sdvig_nagnetatelja_minus);
            (*resetDiProtection(protections.Vibro_skorost_OP_shesterni_reduktora_H_T6);*)

  	(*IM.SingleSignals.P_oil_low.Disabled_Sig:=TRUE;*)
  	ai.Pmasla_posle_GNS.Disabled_LA:=TRUE;
            ai.Pmasla_posle_GNS.Disabled_LW:=TRUE;
            ai.Pmasla_posle_NU.Disabled_LW:=TRUE;
  	runPhase(pnsOff);
      END_IF;

      StrAlg.isEnded:=pnsOff.top; 

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
                                                    runPhase(autoPnsOff);         

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
                                         resetPhase(autoPnsOff);
                                         resetPhase(waitVibeg);
                                         resetPhase(vibegEnd);
                                         resetPhase(pnsOff);
                                         resetQuestion(algContinue);

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

  StrAlg.Start:= autoPnsOff.startStatus
              OR waitVibeg.startStatus
              OR pnsOff.startStatus
              OR vibegEnd.startStatus;

  StrAlg.Error:= autoPnsOff.errorStatus
              OR waitVibeg.errorStatus
              OR pnsOff.errorStatus
              OR vibegEnd.errorStatus;

  StrAlg.Top:=   autoPnsOff.topStatus
              OR waitVibeg.topStatus
              OR pnsOff.topStatus
              OR vibegEnd.topStatus;                                   

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION setValue : BOOL
  VAR_IN_OUT
    StrDP : struct_DiscretParametr;
  END_VAR
  VAR_INPUT
    newValue : UINT;
  END_VAR
  VAR
    cmd_ChangeValue : WORD := 1;
  END_VAR

  StrDP.newValue:=newValue;
  StrDP.inOpcCommandsDisabled:=TRUE;
  StrDP.inCommand_Alg:=cmd_ChangeValue;
END_FUNCTION

FUNCTION_BLOCK fb_AutoNUAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
    nu1 : struct_OilPump;
    nu2 : struct_OilPump;
  END_VAR
  VAR_INPUT
    dPoil : struct_AI;
  END_VAR
  VAR_IN_OUT
    mainNU : struct_DiscretParametr;
    Lowdp_di : struct_singleSignal;
    Ust_Swap : struct_AnalogParametr;
  END_VAR
  VAR
    _prevMainNU : UINT;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusAi : TYPE_StatusAi;
    _statusDualInput : TYPE_statusDualInput;
    _commandDualInput : TYPE_commandDualInput;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    waitPressure : TON;
    waitPressureTrig : R_TRIG;
    resetCmdTimerPriznak : BOOL;
    onInit : BOOL;
    onStart : BOOL;
  END_VAR
  VAR_EXTERNAL
    NotHasRezervNU : BOOL;
    Reset_HasNU : BOOL;
  END_VAR

  IF NOT onInit THEN
  StrAlg.inCanRun:=TRUE;
  StrAlg.inOpcCommandsDisabled:=TRUE;
  (*nu1.Osnovnoy:=TRUE; nu2.Osnovnoy:=FALSE;*)
  onInit:=TRUE;
  END_IF;


  IF Reset_HasNU THEN
  nu1.inBlocked:=FALSE;
  nu2.inBlocked:=FALSE;
  END_IF;

  NotHasRezervNU:=(nu1.Blocked OR nu2.Blocked); 

  IF StrAlg.isRuning THEN

  StrAlg.hasError := nu1.CommandFault OR nu2.CommandFault OR (dPoil.interval<_statusAi.normal);



   IF mainNU.value<>_prevMainNU OR NOT onStart THEN

          CASE mainNU.value OF 
  	0: nu1.Osnovnoy:=TRUE; nu2.Osnovnoy:=FALSE;
  	1: nu1.Osnovnoy:=FALSE; nu2.Osnovnoy:=TRUE;

          END_CASE;    


      IF  nu1.Osnovnoy AND NOT nu1.Blocked THEN
          nu1.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_ON);
      ELSIF NOT NotHasRezervNU THEN
          nu1.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);
      END_IF;  

      IF  nu2.Osnovnoy AND NOT nu2.Blocked THEN
          nu2.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_ON);
       ELSIF NOT NotHasRezervNU THEN
          nu2.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);
      END_IF;
        onStart:=TRUE;
       _prevMainNU:=mainNU.value;                     
   END_IF;



    (*IF (nu1.onStatus = _statusDualInput.STATUS_On) OR (nu2.onStatus = _statusDualInput.STATUS_On) THEN*)
      (*Если через 5С насос не нагнал 100кПа масла - он сломался и надо переключить насос*)
      IF dPoil.interval>= _statusAi.NORMAL THEN
            waitPressure(IN:=(dPoil.value<Ust_Swap.Value OR LowdP_DI.q) AND NOT NotHasRezervNU, PT:= T#5S);
      ELSE
  	waitPressure(IN:=(FALSE));
      END_IF;

      waitPressureTrig(CLK:=waitPressure.Q);
      IF waitPressureTrig.Q THEN
  	(*IF nu1.onStatus = _statusDualInput.STATUS_ON THEN*)
             IF mainNU.value = 0 THEN
  		nu1.inBlocked:=TRUE;
                      nu1.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);
  			(*IF 	mainNU.value = 0 THEN*)
                                          setValue(mainNU, 1);
  			(*END_IF;*)
  	END_IF;

  	(*IF nu2.onStatus = _statusDualInput.STATUS_ON THEN*)
            IF mainNU.value = 1 THEN
  		nu2.inBlocked:=TRUE;
                      nu2.inCommand_Alg:=BYTE_TO_WORD(_commandDualInput.CMD_OFF);	
  			(*IF 	mainNU.value = 1 THEN*)
  				setValue(mainNU, 0);
  			(*END_IF;*)
  	END_IF;	
      END_IF;
   (* END_IF;*)       


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
  					nu1.inOpcCommandsDisabled:=TRUE;
                                                    nu2.inOpcCommandsDisabled:=TRUE;


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
                                          waitPressure(IN:=(FALSE));
                                          onStart:=FALSE;

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

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
                                OR SHL(BOOL_TO_DWORD(NotHasRezervNU), 15)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_ph_WaitAnalogValue
  VAR_IN_OUT
    ai : struct_AI;
  END_VAR
  VAR_INPUT
    more : LREAL;
    less : LREAL;
    PhaseNumber : UINT;
  END_VAR
  VAR_IN_OUT
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR
    CommandFault_Trig : R_TRIG;
    reset_Trig : R_TRIG;
    _statusAi : TYPE_StatusAi;
    _statusDualInput : TYPE_statusDualInput;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;
            StrPh.run:=FALSE;
  END_IF;

  IF StrPh.start AND NOT StrPh.top THEN
                      IF ai.interval < _statusAi.normal THEN
  	              StrPh.error := TRUE;
                          StrPh.top:=FALSE;
                      ELSE
                              IF (more<>0.0) OR (less<>0.0) THEN
                              StrPh.top:=TRUE;
  	                    IF more<>0.0 THEN StrPh.top:=StrPh.top AND (ai.value > more); END_IF;
  	                    IF less<>0.0 THEN StrPh.top:=StrPh.top AND (ai.value < less); END_IF;	
                              ELSE
  	                  StrPh.top:=TRUE;
                              END_IF;
                     END_IF;
  END_IF;

  IF StrPh.top THEN
  StrPh.error := FALSE;
  END_IF;

  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
  	StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.run:=FALSE;
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_ph_OilPump
  VAR_IN_OUT
    im : struct_OilPump;
  END_VAR
  VAR_INPUT
    act : TYPE_DualStateImAction;
    PhaseNumber : UINT;
  END_VAR
  VAR_IN_OUT
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR
    CommandFault_Trig : R_TRIG;
    reset_Trig : R_TRIG;
    _statusDualInput : TYPE_statusDualInput;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;

  	CASE act OF
  		(*DualStateImAction.on*)   _on :im.inOpcCommandsDisabled:=TRUE;  
                                                      im.inCommand_Alg := 1; (*cmd_open*)
  		(*DualStateImAction.off*) _off :im.inOpcCommandsDisabled:=TRUE;  
                                                      im.inCommand_Alg := 2; (*cmd_close*)
  	END_CASE;	
  END_IF;

  IF StrPh.start OR StrPh.reset THEN
      StrPh.run:=FALSE;
  END_IF;

  IF StrPh.start AND NOT StrPh.top THEN
                      CommandFault_Trig(CLK := im.CommandFault);
                      IF CommandFault_Trig.Q THEN
  	          StrPh.error := TRUE;
                      END_IF;

  		CASE act OF
  		(*_DualStateImAction.on*)    _on: StrPh.top := im.onStatus = _statusDualInput.STATUS_ON;
  		(*_DualStateImAction.off*)  _off: StrPh.top := im.onStatus = _statusDualInput.STATUS_OFF;
  		END_CASE;

  END_IF;

  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
  	StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION resetAndDisable : BOOL
  VAR_IN_OUT
    alg : struct_Alg;
  END_VAR
  VAR CONSTANT
    cmdReset : WORD := 2;
  END_VAR

  IF alg.isRuning THEN
                      alg.inOpcCommandsDisabled:=TRUE;
  		alg.inCommand_Alg:=cmdReset;                   
  END_IF;

   alg.inCanRun:=FALSE;
END_FUNCTION

FUNCTION runDiProtection : BOOL
  VAR_IN_OUT
    protection : struct_DiProtection;
  END_VAR
  VAR CONSTANT
    cmdRun : WORD := 1;
  END_VAR

  IF NOT protection.isRunning THEN
                      protection.inOpcCommandsDisabled:=TRUE;
  		protection.inCommand_Alg:=cmdRun;
  END_IF;
END_FUNCTION

FUNCTION runAiProtection : BOOL
  VAR_IN_OUT
    protection : struct_AiProtection;
  END_VAR
  VAR CONSTANT
    cmdRun : WORD := 1;
  END_VAR

  IF NOT protection.isRunning THEN
                      protection.inOpcCommandsDisabled:=TRUE;
  		protection.inCommand_Alg:=cmdRun;
  END_IF;
END_FUNCTION

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
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_TableValue_Min
  VAR_INPUT
    parametr : REAL;
  END_VAR
  VAR
    _table : ARRAY [0..8] OF TYPE_TableRec;
  END_VAR
  VAR_INPUT
    inverse : BOOL := FALSE;
  END_VAR
  VAR_IN_OUT
    actualValue : REAL;
  END_VAR
  VAR
    indexLess : INT := -1;
    indexMore : INT := -1;
  END_VAR
  VAR CONSTANT
    maxTableLength : INT := 9;
  END_VAR
  VAR
    Vali : REAL;
    i : INT;
    moreDistance : REAL;
    lessDistance : REAL;
    onInit : BOOL;
    _prevParam : REAL := 50.0;
  END_VAR

  IF NOT onInit THEN
  _table[0].x:=-35.0;  _table[0].y:=130.0;
  _table[1].x:=-25.0;  _table[1].y:=124.0;
  _table[2].x:=-15.0;  _table[2].y:=118.0;
  _table[3].x:= -5.0;  _table[3].y:=112.0;
  _table[4].x:=  0.0;  _table[4].y:=108.0;
  _table[5].x:=  5.0;  _table[5].y:=106.0;
  _table[6].x:= 15.0;  _table[6].y:=104.0;
  _table[7].x:= 25.0;  _table[7].y:=102.0;
  _table[8].x:= 35.0;  _table[8].y:= 97.0;

  onInit:=TRUE;
  END_IF;


  IF parametr <> _prevParam THEN
  indexLess:=-1;
  indexMore:=-1;
  lessDistance:=0.0;
  moreDistance:=0.0;
  FOR i:=0 TO maxTableLength-1 DO
  	IF NOT inverse THEN
  		Vali:=_table[i].x;
  	ELSE
  		Vali:=_table[i].y;
  	END_IF;

  	IF (Vali=parametr) THEN
  		indexLess:=i;
  		indexMore:=i;
  	ELSIF ((Vali<parametr) AND ((lessDistance>parametr-Vali) OR (indexLess<0))) THEN
  		indexLess:=i;
  		lessDistance:=parametr-Vali;
  	ELSIF ((Vali>parametr) AND ((moreDistance>Vali-parametr) OR (indexMore<0))) THEN
  		indexMore:=i;
  		moreDistance:=parametr-Vali;
  	END_IF;
  END_FOR;
  (*
  IF indexLess<0 THEN
  	indexLess:=indexMore;
  END_IF;

  IF indexMore<0 THEN
  	indexMore:=indexLess;
  END_IF;
  *)
    IF (_table[indexMore].x<>_table[indexLess].x) THEN
    actualValue:=_table[indexLess].y+((_table[indexMore].y-_table[indexLess].y)/(_table[indexMore].x-_table[indexLess].x))*(parametr-_table[indexLess].x);
    ELSE
    actualValue:=_table[indexLess].y;
    END_IF;
     _prevParam:= parametr;
  END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_TableValue_Max
  VAR_INPUT
    parametr : REAL;
  END_VAR
  VAR
    _table : ARRAY [0..8] OF TYPE_TableRec;
  END_VAR
  VAR_INPUT
    inverse : BOOL := FALSE;
  END_VAR
  VAR_IN_OUT
    actualValue : REAL;
  END_VAR
  VAR
    indexLess : INT := -1;
    indexMore : INT := -1;
  END_VAR
  VAR CONSTANT
    maxTableLength : INT := 9;
  END_VAR
  VAR
    Vali : REAL;
    i : INT;
    moreDistance : REAL;
    lessDistance : REAL;
    onInit : BOOL;
    _prevParam : REAL := 50.0;
  END_VAR

  IF NOT onInit THEN
  _table[0].x:=-35.0;  _table[0].y:=320.0;
  _table[1].x:=-25.0;  _table[1].y:=315.0;
  _table[2].x:=-15.0;  _table[2].y:=310.0;
  _table[3].x:= -5.0;  _table[3].y:=305.0;
  _table[4].x:=  0.0;  _table[4].y:=300.0;
  _table[5].x:=  5.0;  _table[5].y:=295.0;
  _table[6].x:= 15.0;  _table[6].y:=290.0;
  _table[7].x:= 25.0;  _table[7].y:=285.0;
  _table[8].x:= 35.0;  _table[8].y:=280.0;

  onInit:=TRUE;
  END_IF;



  IF parametr <> _prevParam THEN
  indexLess:=-1;
  indexMore:=-1;
  lessDistance:=0.0;
  moreDistance:=0.0;
  FOR i:=0 TO maxTableLength-1 DO
  	IF NOT inverse THEN
  		Vali:=_table[i].x;
  	ELSE
  		Vali:=_table[i].y;
  	END_IF;

  	IF (Vali=parametr) THEN
  		indexLess:=i;
  		indexMore:=i;
  	ELSIF ((Vali<parametr) AND ((lessDistance>parametr-Vali) OR (indexLess<0))) THEN
  		indexLess:=i;
  		lessDistance:=parametr-Vali;
  	ELSIF ((Vali>parametr) AND ((moreDistance>Vali-parametr) OR (indexMore<0))) THEN
  		indexMore:=i;
  		moreDistance:=parametr-Vali;
  	END_IF;
  END_FOR;
  (*
  IF indexLess<0 THEN
  	indexLess:=indexMore;
  END_IF;

  IF indexMore<0 THEN
  	indexMore:=indexLess;
  END_IF;
  *)
    IF (_table[indexMore].x<>_table[indexLess].x) THEN
    actualValue:=_table[indexLess].y+((_table[indexMore].y-_table[indexLess].y)/(_table[indexMore].x-_table[indexLess].x))*(parametr-_table[indexLess].x);
    ELSE
    actualValue:=_table[indexLess].y;
    END_IF;
     _prevParam:= parametr;
  END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_RashodAlg
  VAR_INPUT
    P_gasIn : struct_AI;
  END_VAR
  VAR_IN_OUT
    StrAi : struct_AI;
  END_VAR
  VAR_INPUT
    T_gasIn : struct_AI;
    dP_konf : struct_AI;
    K : struct_AnalogParametr;
    A : struct_AnalogParametr;
    y0 : struct_AnalogParametr;
  END_VAR
  VAR CONSTANT
    P0 : LREAL := 0.1033;
    T0 : LREAL := 293.0;
  END_VAR
  VAR
    num : LREAL;
    den : LREAL;
    _statusAi : TYPE_StatusAi;
  END_VAR

  strAI.opcCommandsDisabled := strAI.inopcCommandsDisabled ;

  IF (P_gasIn.interval < _statusAi.normal) OR
     (T_gasIn.interval < _statusAi.normal) OR
     (dP_konf.interval < _statusAi.normal) THEN
  	StrAi.interval := _statusAi.NOTRELIABLE;
            strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21) 
  	OR BYTE_TO_DWORD(strAI.interval);	             
  	RETURN;
  END_IF;


  IF (P_gasIn.value <0.3) THEN
  	StrAi.interval := _statusAi.normal;
  	StrAi.value:= 0.0;
            strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21) 
  	OR BYTE_TO_DWORD(strAI.interval);	           
  	RETURN;
  END_IF;


  StrAi.interval:= _statusAi.normal;

  num:= (dP_konf.Value/1000.0)*(T_gasIn.value+273.0)*P0*735.56*K.Value;
  den:= y0.Value*P_gasIn.value*T0 ;

  StrAi.value:= A.Value*SQRT(num/den);

  strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21) (* Управление в ВУ заблокировано *)
  		OR BYTE_TO_DWORD(strAI.interval);	              (* интервал *)
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_ZapasAlg
  VAR_INPUT
    Q_actual : struct_AI;
  END_VAR
  VAR_IN_OUT
    StrAi : struct_AI;
  END_VAR
  VAR_INPUT
    Q_min : LREAL;
    Q_max : LREAL;
  END_VAR
  VAR
    _statusAi : TYPE_StatusAi;
  END_VAR

  IF (Q_actual.interval < _statusAi.normal) THEN
  	StrAi.interval := _statusAi.NOTRELIABLE;
            strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21)
  		OR BYTE_TO_DWORD(strAI.interval);
  	RETURN;
  END_IF;


  IF (Q_actual.value <10.0) THEN
  	StrAi.interval := _statusAi.normal;
  	StrAi.value:= 100.0;
            strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21)
  		OR BYTE_TO_DWORD(strAI.interval);
  	RETURN;
  END_IF;

  strAI.opcCommandsDisabled := strAI.inopcCommandsDisabled ;
  StrAi.interval:= _statusAi.normal;


  StrAi.value:= ((Q_actual.value - Q_min)/(Q_max-Q_min))*100.0;

  strAI.status := 	SHL(BOOL_TO_DWORD(strAI.OpcCommandsDisabled ), 21) (* Управление в ВУ заблокировано *)
  		OR BYTE_TO_DWORD(strAI.interval);	              (* интервал *)
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AntiPompagAlg
  VAR
    tableQ_min : fb_TableValue_Min;
    tableQ_max : fb_TableValue_Max;
    fb_Rashod : fb_RashodAlg;
    fb_Zapas : fb_ZapasAlg;
  END_VAR
  VAR_IN_OUT
    Kran6 : struct_Kran;
    StrAlg : struct_Alg;
    Rashod : struct_AI;
    Zapas : struct_AI;
  END_VAR
  VAR_INPUT
    P_gasIn : struct_AI;
    T_gasIn : struct_AI;
    dP_konf : struct_AI;
    UgolVNA : struct_AnalogParametr;
    K : struct_AnalogParametr;
    A : struct_AnalogParametr;
    y0 : struct_AnalogParametr;
  END_VAR
  VAR
    Q_max : LREAL;
    Q_min : LREAL;
    pompaj : BOOL;
    _statusAi : TYPE_StatusAi;
    _statusDualInput : TYPE_statusDualInput;
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
  END_VAR

  tableQ_min(parametr:=LREAL_TO_REAL(UgolVNA.Value));

  tableQ_max(parametr:=LREAL_TO_REAL(UgolVNA.Value));

  Q_min:=REAL_TO_LREAL(tableQ_min.actualValue);

  Q_max:=REAL_TO_LREAL(tableQ_max.actualValue);

  fb_Rashod(StrAi:=Rashod, P_gasIn:=P_gasIn, T_gasIn:=T_gasIn, dP_konf:=dP_konf, K:=K, A:=A, y0:=y0);

  fb_Zapas(StrAi:=Zapas, Q_actual:=Rashod, Q_min:=Q_min, Q_max:=Q_max);




  StrAlg.CanRun := StrAlg.inCanRun;



  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

  StrAlg.hasError := (Rashod.interval < _statusAi.normal);

  pompaj:= (Rashod.interval>=_statusAi.normal) AND (Rashod.value <= Q_min);

  IF pompaj THEN
            Kran6.inOpcCommandsDisabled:=TRUE;
  	Kran6.inCommand_Alg := 1;  (*cmd_open*)
  END_IF;

  StrAlg.isEnded := Kran6.onStatus = _statusDualInput.STATUS_ON ;

  END_IF;

  (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
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
  					StrAlg.hasError 	:= FALSE;

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

                                                    pompaj:= FALSE;
                                                    Kran6.inOpcCommandsDisabled:=FALSE;
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


  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_ph_Kran
  VAR_IN_OUT
    im : struct_Kran;
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR_INPUT
    act : TYPE_DualStateImAction;
    PhaseNumber : UINT;
  END_VAR
  VAR
    CommandFault_Trig : R_TRIG;
    reset_Trig : R_TRIG;
    _statusDualInput : TYPE_statusDualInput;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;
            StrPh.run:=FALSE;

  	CASE act OF
  		(*DualStateImAction.on*)   _on: im.inOpcCommandsDisabled:=TRUE; 
                                                      im.inCommand_Alg := 1; (*cmd_open*)
  		(*DualStateImAction.off*) _off: im.inOpcCommandsDisabled:=TRUE; 
                                                      im.inCommand_Alg := 2; (*cmd_close*)
  	END_CASE;	
  END_IF;

  IF StrPh.start AND NOT StrPh.top THEN
                      CommandFault_Trig(CLK := im.CommandFault);
                      IF CommandFault_Trig.Q THEN
  	          StrPh.error := TRUE;
                      END_IF;

  		CASE act OF
  		(*_DualStateImAction.on*)    _on: StrPh.top := im.onStatus = _statusDualInput.STATUS_ON;
  		(*_DualStateImAction.off*)  _off: StrPh.top := im.onStatus = _statusDualInput.STATUS_OFF;
  		END_CASE;

  END_IF;

  IF StrPh.top THEN
  StrPh.error := FALSE;
  END_IF;

  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
  	StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.run:=FALSE;
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_ph_SectionSwitch
  VAR_IN_OUT
    im : struct_SectionSwitch;
  END_VAR
  VAR_INPUT
    act : TYPE_DualStateImAction;
    PhaseNumber : UINT;
  END_VAR
  VAR_IN_OUT
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR
    CommandFault_Trig : R_TRIG;
    reset_Trig : R_TRIG;
    _statusDualInput : TYPE_statusDualInput;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;
            StrPh.run:=FALSE;

  	CASE act OF
  		(*DualStateImAction.on*)   _on : im.inOpcCommandsDisabled:=TRUE;  
                                                       im.inCommand_Alg := 1; (*cmd_open*)
  		(*DualStateImAction.off*) _off : im.inOpcCommandsDisabled:=TRUE; 
                                                       im.inCommand_Alg := 2; (*cmd_close*)
  	END_CASE;	
  END_IF;


  IF StrPh.start AND NOT StrPh.top THEN
                      CommandFault_Trig(CLK := im.CommandFault);
                      IF CommandFault_Trig.Q THEN
  	          StrPh.error := TRUE;
                      END_IF;

  		CASE act OF
  		(*_DualStateImAction.on*)    _on: StrPh.top := im.onStatus = _statusDualInput.STATUS_ON;
  		(*_DualStateImAction.off*)  _off: StrPh.top := im.onStatus = _statusDualInput.STATUS_OFF;
  		END_CASE;

  END_IF;

  IF StrPh.top THEN
  StrPh.error := FALSE;
  END_IF;

  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
  	StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.run:=FALSE;
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION runIfNotRunningSO : BOOL
  VAR_IN_OUT
    so : struct_singleOutput;
  END_VAR
  VAR CONSTANT
    cmdRun : WORD := 1;
  END_VAR

  IF NOT so.Q THEN
                      so.inOpcCommandsDisabled:=TRUE;
  		so.inCommand_Alg:=cmdRun;
  END_IF;
END_FUNCTION

FUNCTION resetIfRunningSO : BOOL
  VAR_IN_OUT
    so : struct_singleOutput;
  END_VAR
  VAR CONSTANT
    cmdReset : WORD := 2;
  END_VAR

  IF so.Q THEN
                      so.inOpcCommandsDisabled:=TRUE;
  		so.inCommand_Alg:=cmdReset;
  END_IF;
END_FUNCTION

FUNCTION impulseSO : BOOL
  VAR_IN_OUT
    so : struct_singleOutput;
  END_VAR
  VAR CONSTANT
    cmdImpulse : WORD := 3;
  END_VAR

  IF NOT so.Q THEN
      so.inOpcCommandsDisabled:=TRUE;
      so.inCommand_Alg:=cmdImpulse;
  END_IF;
END_FUNCTION

FUNCTION_BLOCK NOAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    timer120 : struct_PhaseAlgoritm;
    kran6Open : struct_PhaseAlgoritm;
    pnsOn : struct_PhaseAlgoritm;
    kran4Close : struct_PhaseAlgoritm;
    kran3bOpen : struct_PhaseAlgoritm;
    mvOff : struct_PhaseAlgoritm;
    kran1Close : struct_PhaseAlgoritm;
    kran2Close : struct_PhaseAlgoritm;
    kran3Close : struct_PhaseAlgoritm;
    kran5Open : struct_PhaseAlgoritm;
    error_Krans : struct_PhaseAlgoritm;
    autoPnsOff : struct_PhaseAlgoritm;
    Pg_VhodLessThen300 : struct_PhaseAlgoritm;
    Pg_VyhodLessThen300 : struct_PhaseAlgoritm;
    nu1off : struct_PhaseAlgoritm;
    nu2off : struct_PhaseAlgoritm;
    AutoNU_Off : struct_PhaseAlgoritm;
    timer600 : struct_PhaseAlgoritm;
    pnsOff : struct_PhaseAlgoritm;
    Avom1Off : struct_PhaseAlgoritm;
    Avom2Off : struct_PhaseAlgoritm;
    Avom3Off : struct_PhaseAlgoritm;
    Avom4Off : struct_PhaseAlgoritm;
    autoAVOMOff : struct_PhaseAlgoritm;
    timer5 : struct_PhaseAlgoritm;
    klapan1 : struct_PhaseAlgoritm;
    klapan2 : struct_PhaseAlgoritm;
    nu_On : struct_PhaseAlgoritm;
    fb_timer120 : fb_ph_Timer;
    fb_kran6Open : fb_ph_Kran;
    fb_pnsOn : fb_ph_Switch;
    fb_kran4Close : fb_ph_Kran;
    fb_kran3bOpen : fb_ph_Kran;
    fb_mvOff : fb_ph_SectionSwitch;
    fb_kran1Close : fb_ph_Kran;
    fb_kran2Close : fb_ph_Kran;
    fb_kran3Close : fb_ph_Kran;
    fb_kran5Open : fb_ph_Kran;
    fb_error_Krans : fb_ph_CustomPhase;
    fb_autoPnsOff : fb_ph_algoritm;
    fb_Pg_VhodLessThen300 : fb_ph_CustomPhase;
    fb_Pg_VyhodLessThen300 : fb_ph_CustomPhase;
    fb_nu1Off : fb_ph_OilPump;
    fb_nu2Off : fb_ph_OilPump;
    fb_autoNuOff : fb_ph_algoritm;
    fb_timer600 : fb_ph_Timer;
    fb_pnsOff : fb_ph_Switch;
    fb_Avom1Off : fb_ph_Switch;
    fb_Avom2Off : fb_ph_Switch;
    fb_Avom3Off : fb_ph_Switch;
    fb_Avom4Off : fb_ph_Switch;
    fb_autoAVOMOff : fb_ph_algoritm;
    fb_timer5 : fb_ph_Timer;
    fb_klapan1 : fb_ph_CustomPhase;
    fb_klapan2 : fb_ph_CustomPhase;
    fb_nu_On : fb_ph_CustomPhase;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusAi : TYPE_StatusAi;
    _Answers : TYPE_Answers;
    _statusDualInput : TYPE_statusDualInput;
    _commandDualInput : TYPE_commandDualInput;
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
  END_VAR
  VAR CONSTANT
    Ust_Pgaza : LREAL := 0.3;
  END_VAR
  VAR
    onInit : BOOL;
    waitReset : TON;
  END_VAR
  VAR_EXTERNAL
    IM : ImConfig;
    algoritms : AlgoritmsConfig;
    ai : AiConfig;
    protections : ProtectionsConfig;
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    AlgTimers : struct_AlgTimers;
  END_VAR

  IF NOT onInit THEN
      fb_timer120(phaseNumber:=1, delay:=T#120S);
      fb_kran6Open(phaseNumber:=2, act:=_on);
      fb_kran4Close(phaseNumber:=3, act:=_off);
      fb_kran3bOpen(phaseNumber:=4, act:=_off);
      fb_mvOff(phaseNumber:=5, act:=_off);
      fb_kran1Close(phaseNumber:=6, act:=_off);
      fb_kran2Close(phaseNumber:=7, act:=_off);
      fb_kran3Close(phaseNumber:=8, act:=_off);
      fb_kran5Open(phaseNumber:=9, act:=_on);
      fb_error_Krans(phaseNumber:=10);
      fb_autoPnsOff(phaseNumber:=11, act:=_reset, waitCompletion:=FALSE);
      fb_pnsOn(phaseNumber:=12, act:=_on);
      fb_Pg_VhodLessThen300(phaseNumber:=13);
      fb_Pg_VyhodLessThen300(phaseNumber:=14);
      fb_nu1Off(phaseNumber:=15, act:=_off);           
      fb_nu2Off(phaseNumber:=16, act:=_off);
      fb_autoNuOff(phaseNumber:=17, act:=_reset, waitCompletion:=FALSE);
      fb_timer600(phaseNumber:=18, delay:=T#600S);
      fb_pnsOff(phaseNumber:=19, act:=_off);
      fb_Avom1Off(phaseNumber:=20, act:=_off);
      fb_Avom2Off(phaseNumber:=21, act:=_off);
      fb_Avom3Off(phaseNumber:=22, act:=_off);
      fb_Avom4Off(phaseNumber:=23, act:=_off);
      fb_autoAVOMOff(phaseNumber:=24, act:=_reset, waitCompletion:=FALSE);
      fb_timer5(phaseNumber:=25, delay:=T#5S);
      fb_klapan1(phaseNumber:=26);
      fb_klapan2(phaseNumber:=27);
      fb_nu_On(phaseNumber:=28);

  onInit:=TRUE;
  END_IF;

  fb_timer120(StrPh:=timer120, timer:=AlgTimers.No_wait120);
  fb_kran6Open(StrPh:=kran6Open, Im:=Im.kran6);
  fb_pnsOn(StrPh:=pnsOn, Im:=Im.pns);
  fb_kran4Close(StrPh:=kran4Close, Im:=Im.kran4);
  fb_kran3bOpen(StrPh:=kran3bOpen, Im:=Im.kran3b);
  fb_mvOff(StrPh:=mvOff, Im:=Im.mv);
  fb_kran1Close(StrPh:=kran1Close, Im:=Im.kran1);
  fb_kran2Close(StrPh:=kran2Close, Im:=Im.Kran2);
  fb_kran3Close(StrPh:=kran3Close, Im:=Im.Kran3);
  fb_kran5Open(StrPh:=kran5Open, Im:=Im.Kran5);
  fb_error_Krans(StrPh:=error_Krans);
  fb_autoPnsOff(StrPh:=autoPnsOff, alg:=algoritms.autoPns);
  fb_Pg_VhodLessThen300(StrPh:=Pg_VhodLessThen300);
  fb_Pg_VyhodLessThen300(StrPh:=Pg_VyhodLessThen300);
  fb_nu1Off(StrPh:=nu1off, Im:=Im.nu1);           
  fb_nu2Off(StrPh:=nu2off, Im:=Im.nu2);
  fb_autoNuOff(StrPh:=AutoNU_Off, alg:=algoritms.autoNu);
  fb_timer600(StrPh:=timer600, timer:=AlgTimers.No_wait600);
  fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
  fb_Avom1Off(StrPh:=Avom1Off, Im:=Im.v1_Avom);
  fb_Avom2Off(StrPh:=Avom2Off, Im:=Im.v2_Avom);
  fb_Avom3Off(StrPh:=Avom3Off, Im:=Im.v3_Avom);
  fb_Avom4Off(StrPh:=Avom4Off, Im:=Im.v4_Avom);
  fb_autoAVOMOff(StrPh:=autoAVOMOff, alg:=algoritms.AutoAvom);
  fb_timer5(StrPh:=timer5, timer:=AlgTimers.No_wait5);
  fb_klapan1(StrPh:=klapan1);
  fb_klapan2(StrPh:=klapan2);
  fb_nu_On(StrPh:=nu_On);

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN
      (* кран 6 не открыт - запуск таймера *)
      IF NOT kran6Open.top AND NOT timer120.top  THEN 
  	runPhase(timer120);
      ELSE
      (* счетчик отработал и кран 6 не открыт - ошибка *)
          IF timer120.top AND NOT kran6Open.top THEN 
              error_Krans.error := TRUE;
          END_IF;
      END_IF;

      (* старт смазки кранов *)
      IF (*algoritms.F3.Smazka_1_2 OR *)IM.kran1.onStatus = _statusDualInput.STATUS_ON OR IM.kran1.onStatus = _statusDualInput.STATUS_TRANSITIONAL
  	OR IM.kran2.onStatus = _statusDualInput.STATUS_ON OR IM.kran2.onStatus = _statusDualInput.STATUS_TRANSITIONAL  THEN
          IF (*(algoritms.F3.Smazka_1_2 OR *)IM.kran1.onStatus = _statusDualInput.STATUS_ON OR IM.kran1.onStatus = _statusDualInput.STATUS_TRANSITIONAL AND NOT klapan1.start AND NOT kran1Close.top THEN
              runPhase(klapan1);
          END_IF;
          IF (*(algoritms.F3.Smazka_1_2 OR *)IM.kran2.onStatus = _statusDualInput.STATUS_ON OR IM.kran2.onStatus = _statusDualInput.STATUS_TRANSITIONAL AND NOT klapan2.start AND NOT kran2Close.top THEN
              runPhase(klapan2);
          END_IF;
      (*algoritms.F3.Smazka_1_2:=FALSE;*)
      END_IF;

      (* открыть кран 6 кран 4 *)
      runPhase(kran6Open);
      runPhase(kran4Close);

      (*не понимаю
      IF kran4Close.top THEN
          ystavki.Block_kr4_alg.setValue (0);
      END_IF;*)

      (* кран 6 открыт *)
      IF kran6Open.top THEN
  	runPhase(kran3bOpen);
  	resetPhase(timer120); 
  	(*error_Krans.top := FALSE;
  	error_Krans.error := FALSE;*)
  	(*algoritms.S_Vibr.CanRun:=FALSE;
  	algoritms.S_Vibr.reset (); net takogo alg*)
      END_IF;
      IF kran3bOpen.top AND NOT mvoff.start THEN
  	resetDiProtection(protections.mvOff);
  	resetDiProtection(protections.Off_avar_vikluchatel);
  	resetDiProtection(protections.Reg_vozb_off);
  	runPhase(mvOff); 
      END_IF;

      IF mvOff.top (*AND NOT flag1*) THEN 
          algoritms.AutoPns.inCanRun :=FALSE;
          (*algoritms.AutoPNS_Start.reset (); nichego ne ponimau
          algoritms.AutoPns.inCanRun :=FALSE;*)
          runPhase(autoPnsOff);
          runPhase(pnsOn);
          resetDiProtection(protections.Kran1_sdvig);
          resetDiProtection(protections.Kran2_sdvig);
          runPhase(kran1Close);
          runPhase(kran2Close);
          runPhase(kran3Close);
          runPhase(nu_On);

          (*тут запустить насосы уплотнения *)

          (*algoritms.autoNu.inCanRun:=FALSE;
          algoritms.autoNu_2.reset ();
          algoritms.autoNu_1.inCanRun:=TRUE;
          algoritms.autoNu_1.run ();
          flag1:=TRUE; что тут происходит?*)
      END_IF;
      IF ((IM.nu1.onStatus =_statusDualInput.STATUS_ON) OR (IM.nu2.onStatus =_statusDualInput.STATUS_ON)) AND nu_On.start AND NOT nu_On.top THEN
          nu_On.top:=TRUE;
      END_IF;

      (* выдача смазки *)
      IF klapan1.start AND kran1Close.top THEN
          (*IM.Kr1_Smazka.impulse(); не понимаю((((((((*)
          klapan1.top:=TRUE;
      END_IF;

      IF klapan2.start AND kran2Close.top THEN
  	(*IM.Kr2_Smazka.impulse(); не понимаю *)
  	klapan2.top:=TRUE;
      END_IF;

      (* кран 1 кран 2 кран 3 кран 4 закрыты - открыть кран 5 *)
      IF kran1Close.top AND kran2Close.top AND kran3Close.top AND kran4Close.top THEN
          runPhase(kran5Open);
          resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
      END_IF;

      IF kran5Open.top THEN
          runPhase(Pg_VhodLessThen300);
          runPhase(Pg_VyhodLessThen300); 
      END_IF;

      IF Pg_VhodLessThen300.start AND NOT Pg_VhodLessThen300.top THEN
          IF (ai.Pgaza_na_vhode_nagnetatelia.interval>= _statusAi.NORMAL) AND (ai.Pgaza_na_vhode_nagnetatelia.value < 0.3) THEN
              Pg_VhodLessThen300.top:=TRUE;
          END_IF;
      END_IF;

      IF Pg_VyhodLessThen300.start AND NOT Pg_VyhodLessThen300.top THEN
          IF (ai.Pgaza_na_vyhode_nagnetatelia.interval>=_statusAi.NORMAL) AND (ai.Pgaza_na_vyhode_nagnetatelia.value < 0.3) THEN
              Pg_VyhodLessThen300.top:=TRUE;
          END_IF;
      END_IF;

      IF Pg_VhodLessThen300.top AND Pg_VyhodLessThen300.top AND pnsOn.top AND nu_On.top AND mvOff.top  THEN 
          runphase(nu1Off);
          runphase(nu2Off);

          resetAiProtection(protections.dPmaslo_gaz);
          resetDiProtection(protections.dPmaslo_gaz_less100);


          runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
          runAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
          algoritms.autoNu.CanRun:=FALSE;
          AutoNU_Off.top:=TRUE;
          (*algoritms.autoNu_1.reset(); кого, чего куда*)
      END_IF;

      IF nu1Off.top THEN
          IF (*NOT algManager.reg_V AND кто чего*) NOT pnsoff.start THEN
              runPhase(timer600);
          END_IF;
          (*IF NOT pnsoff.start THEN
              sbrosVibeg.ask();
          END_IF; kto chego?*)
      END_IF;

      IF timer600.top (*OR sbrosVibeg.answer=Answers.ANS_YES kto chto *)THEN
  	runPhase(pnsOff);
  	resetAiProtection(protections.Pmaslo_sm_nizkoe);
  	resetAiProtection(protections.Pmaslo_sm_vysokoe);
  	(*sbrosVibeg.reset (); pomogite *)
  	resetPhase(timer600);
  	(*algoritms.F2_Ch.autoAVOM_canrun_flag:=FALSE;
  	algoritms.F2_R.autoAVOM_canrun_flag:=FALSE;*)
      END_IF;
      IF (*(NOT algoritms.F2_Ch.autoAVOM_canrun_flag) AND (NOT algoritms.F2_R.autoAVOM_canrun_flag) AND*)pnsoff.start THEN
  	runPhase(Avom1Off);
  	runPhase(Avom2Off);
  	runPhase(Avom3Off);
  	runPhase(Avom4Off);

  	(*algoritms.R_AutoAVOM.CanRun:=FALSE; 
  	algoritms.R_AutoAVOM.reset();
  	algoritms.S_AutoAVOM.CanRun:=FALSE;
  	algoritms.S_AutoAVOM.reset();
  	algoritms.Auto_Avom_.CanRun:=FALSE;*)
  	runPhase(autoAVOMOff);
      END_IF;

      IF pnsOff.top AND Avom1Off.top AND Avom2Off.top AND Avom3Off.top AND Avom4Off.top AND autoAVOMOff.top  THEN 
          runPhase(timer5);
      END_IF;

      IF timer5.top THEN
  	resetPhase(timer5);
      END_IF;
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

                                                    algManager.nMode:=ModeGpa.MODE_NO;
                                                    (*runIfNotRunningSO(IM.SingleOutputs.Lampa_NO);*)

                                                    runPhase(kran4Close);
                                                    runPhase(timer120);         
                                                    runPhase(nu1Off);
                                                    runPhase(timer600); 

                                                   (* resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
                                                    resetAiProtection(protections.dPmaslo_gaz);
                                                    resetAiProtection(protections.Pmaslo_sm_nizkoe);
                                                    resetAiProtection(protections.Pmaslo_sm_vysokoe);
                                                    resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia);
                                                    resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
                                                    resetDiProtection(protections.Reg_vozb_off);
                                                    resetDiProtection(protections.Fail_chastotnii_pusk);*)

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
                                          (*resetIfRunningSO(IM.SingleOutputs.Lampa_NO);*)
                                          resetIfRunning(algoritms.vibegPNS);
                                          (*impulseSO(Im.SingleOutputs.SbrosBREO);*)

                                          resetPhase(timer120);
                                          resetPhase(kran6Open);
                                          resetPhase(pnsOn);
                                          resetPhase(kran4Close);
                                          resetPhase(kran3bOpen);
                                          resetPhase(mvOff);
                                          resetPhase(kran1Close);
                                          resetPhase(kran2Close);
                                          resetPhase(kran3Close);
                                          resetPhase(kran5Open);
  	                              resetPhase(error_Krans);
                                          resetPhase(autoPnsOff);
                                          resetPhase(pnsOn);
                                          resetPhase(Pg_VhodLessThen300);
                                          resetPhase(Pg_VyhodLessThen300);
                                          resetPhase(nu2Off);
                                          resetPhase(nu1Off);
                                          resetPhase(AutoNU_Off);
                                          resetPhase(timer600);

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

  StrAlg.Start:= timer120.startStatus
              OR kran6Open.startStatus
              OR pnsOn.startStatus
              OR kran4Close.startStatus
              OR kran3bOpen.startStatus
              OR mvOff.startStatus
              OR kran1Close.startStatus
              OR kran2Close.startStatus
              OR kran3Close.startStatus
              OR kran5Open.startStatus
              OR error_Krans.startStatus
              OR autoPnsOff.startStatus
              OR pnsOn.startStatus
              OR Pg_VhodLessThen300.startStatus
              OR Pg_VyhodLessThen300.startStatus
              OR nu2Off.startStatus
              OR nu1Off.startStatus
              OR AutoNU_Off.startStatus
              OR timer600.startStatus;


  StrAlg.Error:= timer120.errorStatus
              OR kran6Open.errorStatus
              OR pnsOn.errorStatus
              OR kran4Close.errorStatus
              OR kran3bOpen.errorStatus
              OR mvOff.errorStatus
              OR kran1Close.errorStatus
              OR kran2Close.errorStatus
              OR kran3Close.errorStatus
              OR kran5Open.errorStatus
              OR error_Krans.errorStatus
              OR autoPnsOff.errorStatus
              OR pnsOn.errorStatus
              OR Pg_VhodLessThen300.errorStatus
              OR Pg_VyhodLessThen300.errorStatus
              OR nu2Off.errorStatus
              OR nu1Off.errorStatus
              OR AutoNU_Off.errorStatus
              OR timer600.errorStatus;


  StrAlg.Top:=   timer120.topStatus
              OR kran6Open.topStatus
              OR pnsOn.topStatus
              OR kran4Close.topStatus
              OR kran3bOpen.topStatus
              OR mvOff.topStatus
              OR kran1Close.topStatus
              OR kran2Close.topStatus
              OR kran3Close.topStatus
              OR kran5Open.topStatus
              OR error_Krans.topStatus
              OR autoPnsOff.topStatus
              OR pnsOn.topStatus
              OR Pg_VhodLessThen300.topStatus
              OR Pg_VyhodLessThen300.topStatus
              OR nu2Off.topStatus
              OR nu1Off.topStatus
              OR AutoNU_Off.topStatus
              OR timer600.topStatus;                           

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK AOAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    kran6Open : struct_PhaseAlgoritm;
    kran4Close : struct_PhaseAlgoritm;
    kran3bOpen : struct_PhaseAlgoritm;
    mvOff : struct_PhaseAlgoritm;
    kran1Close : struct_PhaseAlgoritm;
    kran2Close : struct_PhaseAlgoritm;
    kran3Close : struct_PhaseAlgoritm;
    kran5Open : struct_PhaseAlgoritm;
    autoPnsOff : struct_PhaseAlgoritm;
    pnsOn : struct_PhaseAlgoritm;
    Pg_VhodLessThen300 : struct_PhaseAlgoritm;
    Pg_VyhodLessThen300 : struct_PhaseAlgoritm;
    nu1off : struct_PhaseAlgoritm;
    nu2off : struct_PhaseAlgoritm;
    AutoNU_Off : struct_PhaseAlgoritm;
    timer600 : struct_PhaseAlgoritm;
    pnsOff : struct_PhaseAlgoritm;
    Avom1Off : struct_PhaseAlgoritm;
    Avom2Off : struct_PhaseAlgoritm;
    Avom3Off : struct_PhaseAlgoritm;
    Avom4Off : struct_PhaseAlgoritm;
    autoAVOMOff : struct_PhaseAlgoritm;
    timer5 : struct_PhaseAlgoritm;
    klapan1 : struct_PhaseAlgoritm;
    klapan2 : struct_PhaseAlgoritm;
    nu_On : struct_PhaseAlgoritm;
    Start_AO_From : struct_PhaseAlgoritm;
    fb_kran6Open : fb_ph_Kran;
    fb_pnsOn : fb_ph_Switch;
    fb_kran4Close : fb_ph_Kran;
    fb_kran3bOpen : fb_ph_Kran;
    fb_mvOff : fb_ph_SectionSwitch;
    fb_kran1Close : fb_ph_Kran;
    fb_kran2Close : fb_ph_Kran;
    fb_kran3Close : fb_ph_Kran;
    fb_kran5Open : fb_ph_Kran;
    fb_autoPnsOff : fb_ph_algoritm;
    fb_Pg_VhodLessThen300 : fb_ph_CustomPhase;
    fb_Pg_VyhodLessThen300 : fb_ph_CustomPhase;
    fb_nu1Off : fb_ph_OilPump;
    fb_nu2Off : fb_ph_OilPump;
    fb_autoNuOff : fb_ph_algoritm;
    fb_timer600 : fb_ph_Timer;
    fb_pnsOff : fb_ph_Switch;
    fb_Avom1Off : fb_ph_Switch;
    fb_Avom2Off : fb_ph_Switch;
    fb_Avom3Off : fb_ph_Switch;
    fb_Avom4Off : fb_ph_Switch;
    fb_autoAVOMOff : fb_ph_algoritm;
    fb_timer5 : fb_ph_Timer;
    fb_klapan1 : fb_ph_CustomPhase;
    fb_klapan2 : fb_ph_CustomPhase;
    fb_nu_On : fb_ph_CustomPhase;
    fb_Start_AO_From : fb_ph_CustomPhase;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusAi : TYPE_StatusAi;
    _Answers : TYPE_Answers;
    _statusDualInput : TYPE_statusDualInput;
    _commandDualInput : TYPE_commandDualInput;
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
  END_VAR
  VAR CONSTANT
    Ust_Pgaza : LREAL := 0.3;
  END_VAR
  VAR
    onInit : BOOL;
    waitReset : TON;
  END_VAR
  VAR_EXTERNAL
    IM : ImConfig;
    algoritms : AlgoritmsConfig;
    ai : AiConfig;
    protections : ProtectionsConfig;
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    AlgTimers : struct_AlgTimers;
  END_VAR

  IF NOT onInit THEN    
      fb_kran6Open(phaseNumber:=1, act:=_on);
      fb_kran4Close(phaseNumber:=2, act:=_off);
      fb_kran3bOpen(phaseNumber:=3, act:=_off);
      fb_mvOff(phaseNumber:=4, act:=_off);
      fb_kran1Close(phaseNumber:=5, act:=_off);
      fb_kran2Close(phaseNumber:=6, act:=_off);
      fb_kran3Close(phaseNumber:=7, act:=_off);
      fb_kran5Open(phaseNumber:=8, act:=_on);
      fb_autoPnsOff(phaseNumber:=9, act:=_reset, waitCompletion:=FALSE);
      fb_pnsOn(phaseNumber:=10, act:=_on);
      fb_Pg_VhodLessThen300(phaseNumber:=11);
      fb_Pg_VyhodLessThen300(phaseNumber:=12);
      fb_nu1Off(phaseNumber:=13, act:=_off);           
      fb_nu2Off(phaseNumber:=14, act:=_off);
      fb_autoNuOff(phaseNumber:=15, act:=_reset, waitCompletion:=FALSE);
      fb_timer600(phaseNumber:=16, delay:=T#600S);
      fb_pnsOff(phaseNumber:=17, act:=_off);
      fb_Avom1Off(phaseNumber:=18, act:=_off);
      fb_Avom2Off(phaseNumber:=19, act:=_off);
      fb_Avom3Off(phaseNumber:=20, act:=_off);
      fb_Avom4Off(phaseNumber:=21, act:=_off);
      fb_autoAVOMOff(phaseNumber:=22, act:=_reset, waitCompletion:=FALSE);
      fb_timer5(phaseNumber:=23, delay:=T#5S);
      fb_klapan1(phaseNumber:=24);
      fb_klapan2(phaseNumber:=25);
      fb_nu_On(phaseNumber:=26);
      fb_Start_AO_From(phaseNumber:=27);  
  onInit:=TRUE;
  END_IF;

  fb_kran6Open(StrPh:=kran6Open, Im:=Im.kran6);
  fb_pnsOn(StrPh:=pnsOn, Im:=Im.pns);
  fb_kran4Close(StrPh:=kran4Close, Im:=Im.kran4);
  fb_kran3bOpen(StrPh:=kran3bOpen, Im:=Im.kran3b);
  fb_mvOff(StrPh:=mvOff, Im:=Im.mv);
  fb_kran1Close(StrPh:=kran1Close, Im:=Im.kran1);
  fb_kran2Close(StrPh:=kran2Close, Im:=Im.Kran2);
  fb_kran3Close(StrPh:=kran3Close, Im:=Im.Kran3);
  fb_kran5Open(StrPh:=kran5Open, Im:=Im.Kran5);
  fb_autoPnsOff(StrPh:=autoPnsOff, alg:=algoritms.autoPns);
  fb_Pg_VhodLessThen300(StrPh:=Pg_VhodLessThen300);
  fb_Pg_VyhodLessThen300(StrPh:=Pg_VyhodLessThen300);
  fb_nu1Off(StrPh:=nu1off, Im:=Im.nu1);           
  fb_nu2Off(StrPh:=nu2off, Im:=Im.nu2);
  fb_autoNuOff(StrPh:=AutoNU_Off, alg:=algoritms.autoNu);
  fb_timer600(StrPh:=timer600, timer:=AlgTimers.No_wait600);
  fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
  fb_Avom1Off(StrPh:=Avom1Off, Im:=Im.v1_Avom);
  fb_Avom2Off(StrPh:=Avom2Off, Im:=Im.v2_Avom);
  fb_Avom3Off(StrPh:=Avom3Off, Im:=Im.v3_Avom);
  fb_Avom4Off(StrPh:=Avom4Off, Im:=Im.v4_Avom);
  fb_autoAVOMOff(StrPh:=autoAVOMOff, alg:=algoritms.AutoAvom);
  fb_timer5(StrPh:=timer5, timer:=AlgTimers.No_wait5);
  fb_klapan1(StrPh:=klapan1);
  fb_klapan2(StrPh:=klapan2);
  fb_nu_On(StrPh:=nu_On);
  fb_Start_AO_From(StrPh:=Start_AO_From);  

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

      IF	(*algoritms.F3.Smazka_1_2 OR*) IM.kran1.onStatus = _statusDualInput.STATUS_ON OR IM.kran1.onStatus = _statusDualInput.STATUS_TRANSITIONAL
  	    OR IM.kran2.onStatus = _statusDualInput.STATUS_ON OR IM.kran2.onStatus = _statusDualInput.STATUS_TRANSITIONAL  THEN
  	    IF (*(algoritms.F3.Smazka_1_2 OR*) IM.kran1.onStatus = _statusDualInput.STATUS_ON OR IM.kran1.onStatus = _statusDualInput.STATUS_TRANSITIONAL AND NOT klapan1.start AND NOT kran1Close.top THEN
  		    runPhase(klapan1);
  	    END_IF;
  	    IF (*algoritms.F3.Smazka_1_2 OR*) IM.kran2.onStatus = _statusDualInput.STATUS_ON OR IM.kran2.onStatus = _statusDualInput.STATUS_TRANSITIONAL AND NOT klapan2.start AND NOT kran2Close.top THEN
  		    runPhase(klapan2);
      	END_IF;
  	(*algoritms.F3.Smazka_1_2:=FALSE; у меня нет такой штуки*)
      END_IF;


     (* IF NOT kran6Open.start THEN
  	    ystavki.Block_kr6_alg.setValue (1);
  	    IF IM.kran6._cmdreset.IN = FALSE THEN
  		    ystavki.Block_kr6_alg.setValue (0); такой штуки тоже нет
  		        runPhase(kran6Open);
  	    END_IF;
      END_IF;*)

      (*IF NOT kran4Close.start THEN
  	    ystavki.Block_kr4_alg.setValue (1);
  	    IF IM.kran4._cmdreset.IN = FALSE THEN
  		    ystavki.Block_kr4_alg.setValue (0);
  		    kran4Close.run(); 
  	    END_IF;
      END_IF;*)

      (*IF NOT kran3bOpen.start THEN
  	    ystavki.Block_kr3b_alg.setValue (1);
  	    IF IM.kran3b._cmdreset.IN = FALSE THEN
  		    ystavki.Block_kr3b_alg.setValue (0);
  		    runPhase(kran3bOpen);
  	    END_IF;
      END_IF;*)

      resetDiProtection(protections.mvOff);
      resetDiProtection(protections.Off_avar_vikluchatel);
      resetDiProtection(protections.Reg_vozb_off);
      resetDiProtection(protections.Kran1_sdvig);
      resetDiProtection(protections.Kran2_sdvig);
      runPhase(mvOff);

      (*IF NOT kran1Close.start THEN
  	ystavki.Block_kr1_alg.setValue (1);*)
  	    (*IF IM.kran1._cmdreset.IN = FALSE THEN
  		    ystavki.Block_kr1_alg.setValue (0);
  		    runPhase(kran1Close);
  	    END_IF;
      END_IF;*)

      (*IF NOT kran2Close.start THEN
  	    ystavki.Block_kr2_alg.setValue (1);
  	    IF IM.kran2._cmdreset.IN = FALSE THEN
  		    ystavki.Block_kr2_alg.setValue (0);
  		    runPhase(kran2Close); 
  	    END_IF;
      END_IF;*)

      (*IF NOT kran3Close.start THEN
  	    ystavki.Block_kr3_alg.setValue (1);
  	    IF	IM.kran3._cmdreset.IN = FALSE THEN
  		    ystavki.Block_kr3_alg.setValue (0);
  		    runPhase(kran3Close);
  	    END_IF;
      END_IF;*)

      (*IF kran6Open.top THEN
  	    algoritms.S_Vibr.CanRun:=FALSE;
  	    algoritms.S_Vibr.reset ();
      END_IF;*)

      IF klapan1.start AND kran1Close.top THEN
  	    (*IM.Kr1_Smazka.impulse();*)
  	    klapan1.top:=TRUE;
      END_IF;
      IF	klapan2.start AND kran2Close.top THEN
  	    (*zIM.Kr2_Smazka.impulse();*)
  	    klapan2.top:=TRUE;
      END_IF;

      (*IF 	kran1Close.top AND kran2Close.top AND kran3Close.top AND kran4Close.top AND NOT kran5Open.top THEN
  	    IF	NOT	kran5Open.start THEN
              ystavki.Block_kr5_alg.setValue (1);
  		    IF	IM.kran5._cmdreset.IN = FALSE THEN
  			    ystavki.Block_kr5_alg.setValue (0);
  			    runPhase(kran5Open);
  		    END_IF;
  	    END_IF;

  	    resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
      END_IF; *)

      IF mvOff.top (*AND NOT flag1*) THEN
  	    (*algoritms.AutoPNS_Start.canrun :=FALSE;
  	    algoritms.AutoPNS_Start.reset ();*)
  	    algoritms.autoPns.canrun :=FALSE;
  	    runPhase(autoPnsOff);
  	    runPhase(pnsOn);
  	    runPhase(nu_On);
  	    (*vkluchit nasosi*)
  	    algoritms.autoNu.canrun:=FALSE;
  	    (*algoritms.autoNu_2.reset ();
  	    algoritms.autoNu_1.canrun:=TRUE;
  	    algoritms.autoNu_1.run ();
  	    flag1:=TRUE;*)
      END_IF;

      IF	IM.nu1.onStatus =_statusDualInput.STATUS_ON OR IM.nu2.onStatus =_statusDualInput.STATUS_ON AND nu_On.start AND NOT nu_On.top THEN
  	    nu_On.top:=TRUE;
      END_IF;

      IF kran5Open.top THEN 
  	    runPhase(Pg_VhodLessThen300);
  	    runPhase(Pg_VyhodLessThen300); 
  	END_IF; 

      IF Pg_VhodLessThen300.start AND NOT Pg_VhodLessThen300.top THEN
  	    IF ai.Pgaza_na_vhode_nagnetatelia.interval >= _statusAi.NORMAL AND ai.Pgaza_na_vhode_nagnetatelia.value < 0.3 THEN
  		    Pg_VhodLessThen300.top:=TRUE;
  	    END_IF;
      END_IF;

      IF Pg_VyhodLessThen300.start AND NOT Pg_VyhodLessThen300.top THEN
  	    IF ai.Pgaza_na_vyhode_nagnetatelia.interval>=_statusAi.NORMAL AND ai.Pgaza_na_vyhode_nagnetatelia.value < 0.3 THEN
  		    Pg_VyhodLessThen300.top:=TRUE;
  	    END_IF;
      END_IF;

      IF Pg_VhodLessThen300.top AND Pg_VyhodLessThen300.top AND pnsOn.top AND nu_On.top AND mvOff.top THEN 
  	    runPhase(nu1Off);
      	    resetAiProtection(protections.dPmaslo_gaz);
  	    resetDiProtection(protections.dPmaslo_gaz_less100);
  	    runAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
  	    runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
  	    AutoNU_Off.top:=TRUE;
      	(*algoritms.autoNu_1.CanRun:=FALSE;
  	    algoritms.autoNu_1.reset ();*)
      END_IF;

      (*IF nuOff.top THEN
  	    IF NOT algmanager.reg_V AND NOT pnsoff.start THEN
  		    runPhase(timer600);
  	    END_IF;
  	    IF	NOT pnsoff.start THEN
  		    sbrosVibeg.ask();
  	    END_IF;
      END_IF;*)

      IF timer600.top (*OR sbrosVibeg.answer=Answers.ANS_YES*)  THEN
  	    runPhase(pnsOff);
  	    resetAiProtection(protections.Pmaslo_sm_nizkoe);
  	    resetAiProtection(protections.Pmaslo_sm_vysokoe);
  	    (*resetPhase(sbrosVibeg);*)
  	    resetPhase(timer600);
  	    (*algoritms.F2_Ch.autoAVOM_canrun_flag:=FALSE;
  	    algoritms.F2_R.autoAVOM_canrun_flag:=FALSE;*)
      END_IF;

      IF (*NOT algoritms.F2_Ch.autoAVOM_canrun_flag AND NOT algoritms.F2_R.autoAVOM_canrun_flag AND*) pnsoff.start THEN
  	    runPhase(Avom1Off);
  	    runPhase(Avom2Off);
  	    runPhase(Avom3Off);
  	    runPhase(Avom4Off);
  	    (*algoritms.R_AutoAVOM.CanRun:=FALSE;
  	    algoritms.R_AutoAVOM.reset();
  	    algoritms.S_AutoAVOM.CanRun:=FALSE;
  	    algoritms.S_AutoAVOM.reset();
  	    algoritms.Auto_Avom_.CanRun:=FALSE;*)
  	    runPhase(autoAVOMOff);
      END_IF;

      IF pnsOff.top AND Avom1Off.top AND Avom2Off.top AND Avom3Off.top AND Avom4Off.top AND autoAVOMOff.top  THEN
  	    runPhase(timer5);
      END_IF;

      IF timer5.top THEN
  	    runPhase(timer5);
      END_IF;
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

                                                    algManager.nMode:=ModeGpa.MODE_NO;
                                                    (*runIfNotRunningSO(IM.SingleOutputs.Lampa_NO);*)

                                                    runPhase(kran4Close);
                                                    (*runPhase(timer120);*)         
                                                    runPhase(nu1Off);
                                                    runPhase(timer600); 

                                                   (* resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
                                                    resetAiProtection(protections.dPmaslo_gaz);
                                                    resetAiProtection(protections.Pmaslo_sm_nizkoe);
                                                    resetAiProtection(protections.Pmaslo_sm_vysokoe);
                                                    resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia);
                                                    resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
                                                    resetDiProtection(protections.Reg_vozb_off);
                                                    resetDiProtection(protections.Fail_chastotnii_pusk);*)

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
                                          (*resetIfRunningSO(IM.SingleOutputs.Lampa_NO);*)
                                          resetIfRunning(algoritms.vibegPNS);
                                          (*impulseSO(Im.SingleOutputs.SbrosBREO);*)

                                          (*resetPhase(timer120);*)
                                          resetPhase(kran6Open);
                                          resetPhase(pnsOn);
                                          resetPhase(kran4Close);
                                          resetPhase(kran3bOpen);
                                          resetPhase(mvOff);
                                          resetPhase(kran1Close);
                                          resetPhase(kran2Close);
                                          resetPhase(kran3Close);
                                          resetPhase(kran5Open);
  	                              (*resetPhase(error_Krans);*)
                                          resetPhase(autoPnsOff);
                                          resetPhase(pnsOn);
                                          resetPhase(Pg_VhodLessThen300);
                                          resetPhase(Pg_VyhodLessThen300);
                                          resetPhase(nu2Off);
                                          resetPhase(nu1Off);
                                          resetPhase(AutoNU_Off);
                                          resetPhase(timer600);

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

  StrAlg.Start:= kran6Open.startStatus
              OR pnsOn.startStatus
              OR kran4Close.startStatus
              OR kran3bOpen.startStatus
              OR mvOff.startStatus
              OR kran1Close.startStatus
              OR kran2Close.startStatus
              OR kran3Close.startStatus
              OR kran5Open.startStatus
              OR Pg_VhodLessThen300.startStatus
              OR nu1off.startStatus
              OR nu2off.startStatus
              OR Pg_VyhodLessThen300.startStatus
              OR AutoNU_Off.startStatus
              OR timer600.startStatus
              OR pnsOff.startStatus
              OR Avom1Off.startStatus
              OR Avom2Off.startStatus
              OR Avom3Off.startStatus
              OR Avom4Off.startStatus
              OR autoAVOMOff.startStatus
              OR timer5.startStatus
              OR klapan1.startStatus
              OR klapan2.startStatus
              OR nu_On.startStatus
              OR Start_AO_From.startStatus;            

  StrAlg.Error:= kran6Open.errorStatus
              OR pnsOn.errorStatus
              OR kran4Close.errorStatus
              OR kran3bOpen.errorStatus
              OR mvOff.errorStatus
              OR kran1Close.errorStatus
              OR kran2Close.errorStatus
              OR kran3Close.errorStatus
              OR kran5Open.errorStatus
              OR Pg_VhodLessThen300.errorStatus
              OR nu1off.errorStatus
              OR nu2off.errorStatus
              OR Pg_VyhodLessThen300.errorStatus
              OR AutoNU_Off.errorStatus
              OR timer600.errorStatus
              OR pnsOff.errorStatus
              OR Avom1Off.errorStatus
              OR Avom2Off.errorStatus
              OR Avom3Off.errorStatus
              OR Avom4Off.errorStatus
              OR autoAVOMOff.errorStatus
              OR timer5.errorStatus
              OR klapan1.errorStatus
              OR klapan2.errorStatus
              OR nu_On.errorStatus
              OR Start_AO_From.errorStatus;


  StrAlg.Top:= kran6Open.topStatus
              OR pnsOn.topStatus
              OR kran4Close.topStatus
              OR kran3bOpen.topStatus
              OR mvOff.topStatus
              OR kran1Close.topStatus
              OR kran2Close.topStatus
              OR kran3Close.topStatus
              OR kran5Open.topStatus
              OR Pg_VhodLessThen300.topStatus
              OR nu1off.topStatus
              OR nu2off.topStatus
              OR Pg_VyhodLessThen300.topStatus
              OR AutoNU_Off.topStatus
              OR timer600.topStatus
              OR pnsOff.topStatus
              OR Avom1Off.topStatus
              OR Avom2Off.topStatus
              OR Avom3Off.topStatus
              OR Avom4Off.topStatus
              OR autoAVOMOff.topStatus
              OR timer5.topStatus
              OR klapan1.topStatus
              OR klapan2.topStatus
              OR nu_On.topStatus
              OR Start_AO_From.topStatus;                                      

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION anyProtectionSignaling : BOOL
  VAR_INPUT
    protections : ProtectionsConfig;
  END_VAR

  anyProtectionSignaling:=
  protections.Topornogo_podshipnika_EDT_1.Signaling OR
  protections.Toporno_ypornogo_podshipnika_EDT_2.Signaling OR
  protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3.Signaling OR
  protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4.Signaling OR
  protections.Topornogo_podshipnika_shesterni_reduktora_T_5.Signaling OR
  protections.Topornogo_podshipnika_reduktora_HT_6.Signaling OR
  protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7.Signaling OR
  protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8.Signaling OR
  protections.Typornogo_podshipnika_rav_kolodok_HT_9.Signaling OR
  protections.Typornogo_podshipnika_nerab_kolodok_HT_10.Signaling OR
  protections.Tgaza_na_vyhode_H.Signaling OR
  protections.Os_sdvig_nagnetatelja_plus.Signaling OR
  protections.Os_sdvig_nagnetatelja_minus.Signaling OR
  protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP.Signaling OR
  protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP.Signaling OR
  protections.Pgaza_na_vyhode_nagnetatelia.Signaling OR
  protections.dPmaslo_gaz.Signaling OR
  protections.Pmaslo_sm_nizkoe.Signaling OR
  protections.Pmaslo_sm_vysokoe.Signaling OR
  protections.Vibro_skorost_OPED_T1.Signaling OR
  protections.Vibro_skorost_OPED_T2.Signaling OR
  protections.Vibro_skorost_OYP_kolesa_ED_T3.Signaling OR
  protections.Vibro_skorost_OP_kolesa_RH_T4.Signaling OR
  protections.Vibro_skorost_OP_shesterni_RED_T5.Signaling OR
  protections.Vibro_skorost_OP_shesterni_reduktora_H_T6.Signaling OR
  protections.dPmaslo_gaz_less100.Signaling OR
  protections.Reg_vozb_off.Signaling OR
  protections.Fail_chastotnii_pusk.Signaling OR
  protections.Off_avar_vikluchatel.Signaling OR
  protections.AOKC_SHKC.Signaling OR
  protections.AO_PRU.Signaling OR
  protections.AO_ot_SHU.Signaling OR
  protections.mvOff.Signaling OR
  protections.Kran1_sdvig.Signaling OR
  protections.Kran2_sdvig.Signaling OR
  protections.Tgaza_na_vyhode_H.Signaling;
END_FUNCTION

FUNCTION anyAnalogsPs : BOOL
  VAR_INPUT
    ai : AiConfig;
  END_VAR
  VAR
    statusAi : TYPE_StatusAi;
  END_VAR

  anyAnalogsPs:=
  ai.Toporno_podshipnika_EDT_1.interval= statusAi.HW OR
  ai.Toporno_podshipnika_EDT_1.interval= statusAi.LW OR
  ai.Toporno_ypornogo_podshipnika_EDT_2.interval= statusAi.HW OR
  ai.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3.interval= statusAi.HW OR
  ai.Toporno_podshipnika_reduktora_HT_6.interval= statusAi.HW OR
  ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_1.interval= statusAi.HW OR
  ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_2.interval= statusAi.HW OR
  ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_1.interval= statusAi.HW OR
  ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_2.interval= statusAi.HW OR
  ai.Tholodnogo_vozduha_ED_kanal_1.interval= statusAi.HW OR
  ai.Tholodnogo_vozduha_ED_kanal_2.interval= statusAi.HW OR
  ai.Tgorjachego_vozduha_ED_kanal_1.interval= statusAi.HW OR
  ai.Tgaza_na_vyhode_H.interval= statusAi.HW OR
  ai.Tmasla_MB.interval= statusAi.LW OR
  ai.Pmasla_posle_GNS.interval= statusAi.LW OR
  ai.Pmasla_posle_NU.interval= statusAi.LW OR
  ai.dPgaza_na_konfuzore.interval= statusAi.HW OR 
  ai.Os_sdvig_nagnetatelja_plus.interval= statusAi.HW OR 
  ai.Os_sdvig_nagnetatelja_minus.interval= statusAi.HW OR 
  ai.dPmaslo_gaz.interval= statusAi.HW OR 
  ai.Pgaza_na_vhode_nagnetatelia.interval= statusAi.HW OR 
  ai.Pgaza_na_vyhode_nagnetatelia.interval= statusAi.HW OR 
  ai.Pimpuls_gaz.interval= statusAi.HW OR 
  ai.Pimpuls_gaz.interval= statusAi.LW OR 
  ai.Yroven_masla_MB.interval= statusAi.HW OR 
  ai.Yroven_masla_MB.interval= statusAi.LW OR
  ai.Tmasla_MB_TEN.interval= statusAi.HW OR 
  ai.Tmasla_MB_TEN.interval= statusAi.LW OR 
  ai.Vibro_skorost_OYP_kolesa_ED_T3.interval= statusAi.HW OR 
  ai.Vibro_skorost_OYP_kolesa_ED_T3.interval= statusAi.LW OR 
  ai.Vibro_skorost_OP_kolesa_RH_T4.interval= statusAi.HW OR 
  ai.Vibro_skorost_OP_kolesa_RH_T4.interval= statusAi.LW;
END_FUNCTION

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
END_FUNCTION

FUNCTION analogsNS : BOOL
  VAR_INPUT
    ai : AiConfig;
  END_VAR
  VAR
    statusAi : TYPE_StatusAi;
  END_VAR

  analogsNS:= 
    ((ai.Tstali_statora_kanal_1.Interval < statusAi.Normal) AND NOT ai.Tstali_statora_kanal_1.remont)
  OR((ai.Tstali_statora_kanal_2.Interval < statusAi.Normal) AND NOT ai.Tstali_statora_kanal_2.remont)
  OR((ai.Tstali_statora_kanal_3.Interval < statusAi.Normal) AND NOT ai.Tstali_statora_kanal_3.remont)
  OR((ai.Tmedi_statora_kanal_1.Interval < statusAi.Normal) AND NOT ai.Tmedi_statora_kanal_1.remont)
  OR((ai.Tmedi_statora_kanal_2.Interval < statusAi.Normal) AND NOT ai.Tmedi_statora_kanal_2.remont)
  OR((ai.Tmedi_statora_kanal_3.Interval < statusAi.Normal) AND NOT ai.Tmedi_statora_kanal_3.remont)
  OR((ai.Toporno_podshipnika_EDT_1.Interval < statusAi.Normal) AND NOT ai.Toporno_podshipnika_EDT_1.remont)
  OR((ai.Toporno_ypornogo_podshipnika_EDT_2.Interval < statusAi.Normal) AND NOT ai.Toporno_ypornogo_podshipnika_EDT_2.remont)
  OR((ai.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3.Interval < statusAi.Normal) AND NOT ai.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3.remont)
  OR((ai.Toporno_ypornogo_podshipnika_kolesa_red_HT_4.Interval < statusAi.Normal) AND NOT ai.Toporno_ypornogo_podshipnika_kolesa_red_HT_4.remont)
  OR((ai.Toporno_podshipnika_shesterni_reduktora_T_5.Interval < statusAi.Normal) AND NOT ai.Toporno_podshipnika_shesterni_reduktora_T_5.remont)
  OR((ai.Toporno_podshipnika_reduktora_HT_6.Interval < statusAi.Normal) AND NOT ai.Toporno_podshipnika_reduktora_HT_6.remont)
  OR((ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_1.Interval < statusAi.Normal) AND NOT ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_1.remont)
  OR((ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_2.Interval < statusAi.Normal) AND NOT ai.Toporno_ypornogo_podshipnika_nagnetatelja_T_7_2.remont)
  OR((ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_1.Interval < statusAi.Normal) AND NOT ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_1.remont)
  OR((ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_2.Interval < statusAi.Normal) AND NOT ai.Toporno_ypornogo_podshipnika_svobodnogo_konca_NT_8_2.remont)
  OR((ai.Tholodnogo_vozduha_ED_kanal_1.Interval < statusAi.Normal) AND NOT ai.Tholodnogo_vozduha_ED_kanal_1.remont)
  OR((ai.Tholodnogo_vozduha_ED_kanal_2.Interval < statusAi.Normal) AND NOT ai.Tholodnogo_vozduha_ED_kanal_2.remont)
  OR((ai.Tgorjachego_vozduha_ED_kanal_1.Interval < statusAi.Normal) AND NOT ai.Tgorjachego_vozduha_ED_kanal_1.remont)
  OR((ai.Tgorjachego_vozduha_ED_kanal_2.Interval < statusAi.Normal) AND NOT ai.Tgorjachego_vozduha_ED_kanal_2.remont)
  OR((ai.Tnarujnogo_vozduha.Interval < statusAi.Normal) AND NOT ai.Tnarujnogo_vozduha.remont)
  OR((ai.Tgaza_na_vhode_H.Interval < statusAi.Normal) AND NOT ai.Tgaza_na_vhode_H.remont)
  OR((ai.Tgaza_na_vyhode_H.Interval < statusAi.Normal) AND NOT ai.Tgaza_na_vyhode_H.remont)
  OR((ai.Tmasla_posle_AVOM.Interval < statusAi.Normal) AND NOT ai.Tmasla_posle_AVOM.remont)
  OR((ai.Tgorjachego_vozduha_ED_kanal_2.Interval < statusAi.Normal) AND NOT ai.Tgorjachego_vozduha_ED_kanal_2.remont)
  OR((ai.Tmasla_MB.Interval < statusAi.Normal) AND NOT ai.Tmasla_MB.remont)
  OR((ai.dPgaza_na_konfuzore.Interval < statusAi.Normal) AND NOT ai.dPgaza_na_konfuzore.remont)
  OR((ai.Pmaslo_sm_nizkoe.Interval < statusAi.Normal) AND NOT ai.Pmaslo_sm_nizkoe.remont)
  OR((ai.dPgaza_na_maslo_filtre.Interval < statusAi.Normal) AND NOT ai.dPgaza_na_maslo_filtre.remont)
  OR((ai.Pmaslo_sm_vysokoe.Interval < statusAi.Normal) AND NOT ai.Pmaslo_sm_vysokoe.remont)
  OR((ai.Pmasla_posle_GNS.Interval < statusAi.Normal) AND NOT ai.Pmasla_posle_GNS.remont)
  OR((ai.Pmasla_posle_NU.Interval < statusAi.Normal) AND NOT ai.Pmasla_posle_NU.remont)
  OR((ai.Os_sdvig_nagnetatelja_plus.Interval < statusAi.Normal) AND NOT ai.Os_sdvig_nagnetatelja_plus.remont)
  OR((ai.Os_sdvig_nagnetatelja_minus.Interval < statusAi.Normal) AND NOT ai.Os_sdvig_nagnetatelja_minus.remont)
  OR((ai.dPmaslo_gaz.Interval < statusAi.Normal) AND NOT ai.dPmaslo_gaz.remont)
  OR((ai.Pgaza_na_vhode_nagnetatelia.Interval < statusAi.Normal) AND NOT ai.Pgaza_na_vhode_nagnetatelia.remont)
  OR((ai.Pgaza_na_vyhode_nagnetatelia.Interval < statusAi.Normal) AND NOT ai.Pgaza_na_vyhode_nagnetatelia.remont)
  OR((ai.Pimpuls_gaz.Interval < statusAi.Normal) AND NOT ai.Pimpuls_gaz.remont)
  OR((ai.Yroven_masla_MB.Interval < statusAi.Normal) AND NOT ai.Yroven_masla_MB.remont)
  OR((ai.Kontrol_per_220V.Interval < statusAi.Normal) AND NOT ai.Kontrol_per_220V.remont)
  OR((ai.Kontrol_post_220V.Interval < statusAi.Normal) AND NOT ai.Kontrol_post_220V.remont)
  OR((ai.Kontrol_post_220V.Interval < statusAi.Normal) AND NOT ai.Kontrol_post_220V.remont)
  OR((ai.Vibro_skorost_OPED_T1.Interval < statusAi.Normal) AND NOT ai.Vibro_skorost_OPED_T1.remont)
  OR((ai.Vibro_skorost_OYP_kolesa_ED_T3.Interval < statusAi.Normal) AND NOT ai.Vibro_skorost_OYP_kolesa_ED_T3.remont)
  OR((ai.Vibro_skorost_OP_kolesa_RH_T4.Interval < statusAi.Normal) AND NOT ai.Vibro_skorost_OP_kolesa_RH_T4.remont);
END_FUNCTION

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
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_ph_DIprotection
  VAR_IN_OUT
    StrDiP : struct_DiProtection;
  END_VAR
  VAR_INPUT
    act : TYPE_PhaseAlgoritmAction;
    PhaseNumber : UINT;
  END_VAR
  VAR_IN_OUT
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR
    CommandFault_Trig : R_TRIG;
    reset_Trig : R_TRIG;
    _statusDualInput : TYPE_statusDualInput;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;
            StrPh.run:=FALSE;

  	CASE act OF
  		(*PhaseAlgoritmAction.run*)    _run : runDiProtection(StrDiP); (*cmd_run*)
  		(*PhaseAlgoritmAction.reset*)_reset : resetDiProtection(StrDiP); (*cmd_reset*)
  	END_CASE;	
  END_IF;


  IF StrPh.start AND NOT StrPh.top THEN
                      CommandFault_Trig(CLK := StrDiP.hasError);
                      IF CommandFault_Trig.Q THEN
  	          StrPh.error := TRUE;
                      END_IF;

  		CASE act OF
  		(*PhaseAlgoritmAction.run*)    _run:    StrPh.top:=StrDiP.isRunning;			

  		(*PhaseAlgoritmAction.reset*) _reset:   StrPh.top := NOT StrDiP.isRunning;
  		END_CASE;

  END_IF;

  IF StrPh.top THEN
  StrPh.error := FALSE;
  END_IF;

  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
            StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.run:=FALSE;
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fillingAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    BreakPuskTimer : struct_PhaseAlgoritm;
    kran3bOpen : struct_PhaseAlgoritm;
    kran4Open : struct_PhaseAlgoritm;
    waitAfterKran4 : struct_PhaseAlgoritm;
    kran5Close : struct_PhaseAlgoritm;
    didPKran1 : struct_PhaseAlgoritm;
    kran1Open : struct_PhaseAlgoritm;
    kran2Open : struct_PhaseAlgoritm;
    kran3bClose : struct_PhaseAlgoritm;
    kran4Close : struct_PhaseAlgoritm;
    RunProtection_kr1 : struct_PhaseAlgoritm;
    RunProtection_kr2 : struct_PhaseAlgoritm;
    waitAfterKran5 : struct_PhaseAlgoritm;
    testUnsuccessfulFilling : struct_PhaseAlgoritm;
    fb_BreakPuskTimer : fb_ph_Timer;
    fb_kran3bOpen : fb_ph_Kran;
    fb_kran4Open : fb_ph_Kran;
    fb_waitAfterKran4 : fb_ph_Timer;
    fb_kran5Close : fb_ph_Kran;
    fb_didPKran1 : fb_ph_CustomPhase;
    fb_kran1Open : fb_ph_Kran;
    fb_kran2Open : fb_ph_Kran;
    fb_kran3bClose : fb_ph_Kran;
    fb_kran4Close : fb_ph_Kran;
    fb_RunProtection_kr1 : fb_ph_DIprotection;
    fb_RunProtection_kr2 : fb_ph_DIprotection;
    fb_waitAfterKran5 : fb_ph_Timer;
    fb_testUnsuccessfulFilling : fb_ph_CustomPhase;
    _sunpackerCommand : fb_sunpackerCommand;
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
    ai : AiConfig;
    protections : ProtectionsConfig;
    AlgTimers : struct_AlgTimers;
    algoritms : AlgoritmsConfig;
  END_VAR

  IF NOT onInit THEN

           fb_BreakPuskTimer(phaseNumber:=0, delay:=T#240S);
               fb_kran3bOpen(phaseNumber:=1, act:=_on);
                fb_kran4Open(phaseNumber:=2, act:=_on);
           fb_waitAfterKran4(phaseNumber:=3, delay:=T#10S);
               fb_kran5Close(phaseNumber:=4, act:=_off);
                fb_didPKran1(phaseNumber:=5);
                fb_kran1Open(phaseNumber:=7, act:=_on);
                fb_kran2Open(phaseNumber:=8, act:=_on);
              fb_kran3bClose(phaseNumber:=9, act:=_off);
               fb_kran4Close(phaseNumber:=10, act:=_off);
        fb_RunProtection_kr1(phaseNumber:=11, act:=_run);
        fb_RunProtection_kr2(phaseNumber:=12, act:=_run);
           fb_waitAfterKran5(phaseNumber:=13, delay:=T#60S);
  fb_testUnsuccessfulFilling(phaseNumber:=17);





  onInit:=TRUE;
  END_IF;

           fb_BreakPuskTimer(StrPh:=BreakPuskTimer, timer:=AlgTimers.filling_BreakPuskTimer);
               fb_kran3bOpen(StrPh:=kran3bOpen, Im:=Im.kran3b);
                fb_kran4Open(StrPh:=kran4Open, Im:=Im.kran4);
           fb_waitAfterKran4(StrPh:=waitAfterKran4, timer:=AlgTimers.filling_waitAfterKran4);
               fb_kran5Close(StrPh:=kran5Close, Im:=Im.kran5);
                fb_didPKran1(StrPh:=didPKran1);
                fb_kran1Open(StrPh:=kran1Open, Im:=Im.kran1);
                fb_kran2Open(StrPh:=kran2Open, Im:=Im.kran2);
              fb_kran3bClose(StrPh:=kran3bClose, Im:=Im.kran3b);
               fb_kran4Close(StrPh:=kran4Close, Im:=Im.kran4);
        fb_RunProtection_kr1(StrPh:=RunProtection_kr1 , StrDiP:=protections.Reg_vozb_off);
        fb_RunProtection_kr2(StrPh:=RunProtection_kr2 , StrDiP:=protections.Fail_chastotnii_pusk);
           fb_waitAfterKran5(StrPh:=waitAfterKran5, timer:=AlgTimers.filling_waitAfterKran5);
  fb_testUnsuccessfulFilling(StrPh:=testUnsuccessfulFilling);


  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN


      StrAlg.hasError := kran3bOpen.error OR kran4Open.error OR kran5Close.error OR kran5Close.error
      OR kran1Open.error OR kran2Open.error OR kran3bClose.error OR kran4Close.error OR testUnsuccessfulFilling.error;

      IF kran4Open.top THEN	
          runPhase(waitAfterKran4);
      END_IF;

      IF waitAfterKran4.top THEN
          runPhase(kran5Close);
      END_IF;

      IF kran3bOpen.top AND kran5Close.top THEN
         runPhase(waitAfterKran5);
         runPhase(didPKran1);
      END_IF;

      (*IF didPKran1.start AND NOT didPKran1.top THEN
      didPKran1.top:= im.singleSignals.dP_gazgaz_Kran1.Q;
      END_IF;*)

      IF waitAfterKran5.top AND didPKran1.top THEN
            runPhase(kran1Open); 
  	runPhase(kran2Open);
      END_IF;

      IF kran1Open.top AND kran2Open.top THEN
            runPhase(kran4Close); 
  	runPhase(kran3bClose);
      END_IF;

      IF kran4Close.top AND kran3bClose.top THEN

            runPhase(RunProtection_kr1);
            runPhase(RunProtection_kr2); 

            (*runAiProtection(protections.Pgaza_na_vhode_nagnetatelia);
            runAiProtection(protections.Pgaza_na_vhode_nagnetatelia);
            runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
            runAiProtection(protections.dPmaslo_gaz);
            runAiProtection(protections.Pmaslo_sm_nizkoe);
            runAiProtection(protections.Pmaslo_sm_vysokoe);*)

      END_IF;

      IF BreakPuskTimer.top AND NOT (RunProtection_kr1.top AND RunProtection_kr2.top ) THEN
  	testUnsuccessfulFilling.error:=TRUE;
      END_IF;

      IF RunProtection_kr1.top AND RunProtection_kr2.top THEN
            resetPhase(BreakPuskTimer);
  	waitReset(IN:=TRUE, PT:= T#2S);
      END_IF;

      IF waitReset.Q AND NOT (algoritms.Apusk.isRuning OR algoritms.SemiAutoPusk.isRuning) THEN
  	resetIfRunning(StrAlg);
      END_IF;

      StrAlg.isEnded:= RunProtection_kr1.top AND RunProtection_kr2.top;
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

                                                    runPhase(kran3bOpen);
                                                    runPhase(kran4Open);         
                                                    runPhase(BreakPuskTimer);
                                                    runPhase(testUnsuccessfulFilling); 

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
                                          StrAlg.inCanRun:=FALSE;
                                          waitReset(IN:=FALSE);

                                          resetPhase(BreakPuskTimer);
                                          resetPhase(kran3bOpen);
                                          resetPhase(kran4Open);
                                          resetPhase(waitAfterKran4);
                                          resetPhase(kran5Close);
                                          resetPhase(didPKran1);
                                          resetPhase(kran1Open);
                                          resetPhase(kran2Open);
                                          resetPhase(kran3bClose);
                                          resetPhase(kran4Close);
  	                              resetPhase(RunProtection_kr1);
                                          resetPhase(RunProtection_kr2);
                                          resetPhase(waitAfterKran5);
                                          resetPhase(testUnsuccessfulFilling);

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

  StrAlg.Start:= BreakPuskTimer.startStatus
              OR kran3bOpen.startStatus
              OR kran4Open.startStatus
              OR waitAfterKran4.startStatus
              OR kran5Close.startStatus
              OR didPKran1.startStatus
              OR kran1Open.startStatus
              OR kran2Open.startStatus
              OR kran3bClose.startStatus
              OR kran4Close.startStatus
              OR RunProtection_kr1.startStatus
              OR RunProtection_kr2.startStatus
              OR waitAfterKran5.startStatus
              OR testUnsuccessfulFilling.startStatus;


  StrAlg.Error:= BreakPuskTimer.errorStatus
              OR kran3bOpen.errorStatus
              OR kran4Open.errorStatus
              OR waitAfterKran4.errorStatus
              OR kran5Close.errorStatus
              OR didPKran1.errorStatus
              OR kran1Open.errorStatus
              OR kran2Open.errorStatus
              OR kran3bClose.errorStatus
              OR kran4Close.errorStatus
              OR RunProtection_kr1.errorStatus
              OR RunProtection_kr2.errorStatus
              OR waitAfterKran5.errorStatus
              OR testUnsuccessfulFilling.errorStatus;


  StrAlg.Top:=   BreakPuskTimer.topStatus
              OR kran3bOpen.topStatus
              OR kran4Open.topStatus
              OR waitAfterKran4.topStatus
              OR kran5Close.topStatus
              OR didPKran1.topStatus
              OR kran1Open.topStatus
              OR kran2Open.topStatus
              OR kran3bClose.topStatus
              OR kran4Close.topStatus
              OR RunProtection_kr1.topStatus
              OR RunProtection_kr2.topStatus
              OR waitAfterKran5.topStatus
              OR testUnsuccessfulFilling.topStatus;                           

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK engineRunAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    BreakPuskTimer : struct_PhaseAlgoritm;
    RunProtection_mvoff : struct_PhaseAlgoritm;
    LowOil_upStopust : struct_PhaseAlgoritm;
    mvOn : struct_PhaseAlgoritm;
    AutoPns_ph : struct_PhaseAlgoritm;
    AutoAvom_ph : struct_PhaseAlgoritm;
    pnsOff : struct_PhaseAlgoritm;
    testUnsuccessful : struct_PhaseAlgoritm;
    fb_BreakPuskTimer : fb_ph_Timer;
    fb_RunProtection_mvoff : fb_ph_DIprotection;
    fb_LowOil_upStopust : fb_ph_WaitAnalogValue;
    fb_mvOn : fb_ph_SectionSwitch;
    fb_AutoPns_ph : fb_ph_algoritm;
    fb_AutoAvom_ph : fb_ph_algoritm;
    fb_pnsOff : fb_ph_Switch;
    fb_testUnsuccessful : fb_ph_CustomPhase;
    _sunpackerCommand : fb_sunpackerCommand;
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

       fb_BreakPuskTimer(phaseNumber:=0, delay:=T#665S);
     fb_LowOil_upStopust(phaseNumber:=1);
                 fb_mvOn(phaseNumber:=2, act:=_on);
           fb_AutoPns_ph(phaseNumber:=3, act:=_run, waitCompletion:=FALSE);
          fb_AutoAvom_ph(phaseNumber:=4, act:=_run, waitCompletion:=FALSE);
               fb_pnsOff(phaseNumber:=5, act:=_off);
  fb_RunProtection_mvoff(phaseNumber:=7, act:=_run);
     fb_testUnsuccessful(phaseNumber:=17);

  onInit:=TRUE;
  END_IF;

          fb_BreakPuskTimer(StrPh:=BreakPuskTimer, timer:=AlgTimers.engineRun_BreakPuskTimer);
       (* fb_LowOil_upStopust(StrPh:=LowOil_upStopust, ai:=ai.Pmasla_posle_GNS, more:=im.AutoPns_UstStop.Value);*)
                    fb_mvOn(StrPh:=mvOn, Im:=Im.mv);
              fb_AutoPns_ph(StrPh:=AutoPns_ph, alg:=algoritms.AutoPns);
             fb_AutoAvom_ph(StrPh:=AutoAvom_ph, alg:=algoritms.AutoAvom);
                  fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
    (*fb_RunProtection_mvoff(StrPh:=RunProtection_mvoff, StrDiP:=protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);*)
        fb_testUnsuccessful(StrPh:=testUnsuccessful);          

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

      StrAlg.hasError := mvOn.error OR pnsOff.error OR testUnsuccessful.error;

      IF mvOn.top THEN	
          runPhase(RunProtection_mvoff);
          runPhase(AutoAvom_ph);
          runPhase(LowOil_upStopust);
      END_IF;
      (*
      IF AutoAvom_ph.top THEN
          algoritms.AutoAvom.inOpcCommandsDisabled:=FALSE;
      END_IF;
      *)
      IF LowOil_upStopust.top THEN
          runPhase(pnsOff);
      END_IF;

      IF pnsOff.top THEN
         runPhase(AutoPns_ph);
      END_IF;

      IF BreakPuskTimer.top AND NOT AutoPns_ph.top THEN
            testUnsuccessful.error:=TRUE;
      END_IF;

      IF AutoPns_ph.top THEN
            resetPhase(BreakPuskTimer);
  	waitReset(IN:=TRUE, PT:= T#2S);
      END_IF;

      IF waitReset.Q AND NOT (algoritms.Apusk.isRuning OR algoritms.SemiAutoPusk.isRuning) THEN
  	resetIfRunning(StrAlg);
      END_IF;

      StrAlg.isEnded:= AutoPns_ph.top;
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

                                                    runPhase(mvOn);         
                                                    runPhase(BreakPuskTimer);
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
                                          StrAlg.inCanRun:=FALSE;
                                          waitReset(IN:=FALSE);

                                          resetPhase(BreakPuskTimer);
                                          resetPhase(RunProtection_mvoff);
                                          resetPhase(LowOil_upStopust);
                                          resetPhase(mvOn);
                                          resetPhase(AutoPns_ph);
                                          resetPhase(AutoAvom_ph);
                                          resetPhase(pnsOff);
                                          resetPhase(testUnsuccessful);

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

  StrAlg.Start:= BreakPuskTimer.startStatus
              OR RunProtection_mvoff.startStatus
              OR LowOil_upStopust.startStatus
              OR mvOn.startStatus
              OR AutoPns_ph.startStatus
              OR AutoAvom_ph.startStatus
              OR pnsOff.startStatus
              OR testUnsuccessful.startStatus;

  StrAlg.Error:= BreakPuskTimer.errorStatus
              OR RunProtection_mvoff.errorStatus
              OR LowOil_upStopust.errorStatus
              OR mvOn.errorStatus
              OR AutoPns_ph.errorStatus
              OR AutoAvom_ph.errorStatus
              OR pnsOff.errorStatus
              OR testUnsuccessful.errorStatus;


  StrAlg.Top:=   BreakPuskTimer.topStatus
              OR RunProtection_mvoff.topStatus
              OR LowOil_upStopust.topStatus
              OR mvOn.topStatus
              OR AutoPns_ph.topStatus
              OR AutoAvom_ph.topStatus
              OR pnsOff.topStatus
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
END_FUNCTION_BLOCK

FUNCTION_BLOCK puskKalg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    puskOilSystem : struct_PhaseAlgoritm;
  END_VAR
  VAR_IN_OUT
    questionFilling : struct_Question;
  END_VAR
  VAR
    filling : struct_PhaseAlgoritm;
  END_VAR
  VAR_IN_OUT
    questionUnload : struct_Question;
  END_VAR
  VAR
    kran3bOpen : struct_PhaseAlgoritm;
    kran4Close : struct_PhaseAlgoritm;
    kran1Close : struct_PhaseAlgoritm;
    kran2Close : struct_PhaseAlgoritm;
    kran5open : struct_PhaseAlgoritm;
    wait720 : struct_PhaseAlgoritm;
    noGasInPipe : struct_PhaseAlgoritm;
    AutoNUoff : struct_PhaseAlgoritm;
    nu1Off : struct_PhaseAlgoritm;
    nu2Off : struct_PhaseAlgoritm;
    pnsWaitOff : struct_PhaseAlgoritm;
    testUnsuccessfulUnfill : struct_PhaseAlgoritm;
    fb_puskOilSystem : fb_ph_algoritm;
    fb_questionFilling : fb_Question;
    fb_filling : fb_ph_algoritm;
    fb_questionUnload : fb_Question;
    fb_kran3bOpen : fb_ph_Kran;
    fb_kran4Close : fb_ph_CustomPhase;
    fb_kran1Close : fb_ph_Kran;
    fb_kran2Close : fb_ph_Kran;
    fb_kran5open : fb_ph_Kran;
    fb_wait720 : fb_ph_Timer;
    fb_noGasInPipe : fb_ph_CustomPhase;
    fb_AutoNUoff : fb_ph_algoritm;
    fb_nu1Off : fb_ph_OilPump;
    fb_nu2Off : fb_ph_OilPump;
    fb_pnsWaitOff : fb_ph_algoritm;
    fb_testUnsuccessfulUnfill : fb_ph_CustomPhase;
    _sunpackerCommand : fb_sunpackerCommand;
    _DualStateImAction : TYPE_DualStateImAction;
    _Answers : TYPE_Answers;
    _statusDualInput : TYPE_statusDualInput;
    _StatusAi : TYPE_StatusAi;
    _PhaseAlgoritmAction : TYPE_PhaseAlgoritmAction;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
  END_VAR
  VAR CONSTANT
    Ust_Pgaza : LREAL := 0.3;
  END_VAR
  VAR
    OpcCommandsKransEnabled : BOOL;
    OpcCommandsKransDisabled : BOOL;
    _resetQuestion1 : BOOL;
    _resetQuestion2 : BOOL;
    onInit : BOOL;
    waitReset : TON;
  END_VAR
  VAR_EXTERNAL
    IM : ImConfig;
    algoritms : AlgoritmsConfig;
    ai : AiConfig;
    AlgTimers : struct_AlgTimers;
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    protections : ProtectionsConfig;
  END_VAR

  IF NOT onInit THEN

            fb_puskOilSystem(phaseNumber:=0, act:=_run, waitCompletion:=TRUE);
        questionFilling.AnswerVariants:=_Answers.ANS_YES;
                  fb_filling(phaseNumber:=1, act:=_run, waitCompletion:=TRUE);
      questionUnload.AnswerVariants:=_Answers.ANS_YES;
               fb_kran3bOpen(phaseNumber:=3, act:=_on);
               fb_kran4Close(phaseNumber:=4);
               fb_kran1Close(phaseNumber:=5, act:=_off);
               fb_kran2Close(phaseNumber:=6, act:=_off);
                fb_kran5open(phaseNumber:=7, act:=_on);
                  fb_wait720(phaseNumber:=8, delay:=T#720S);
              fb_noGasInPipe(phaseNumber:=9);
                fb_AutoNUoff(phaseNumber:=10, act:=_reset, waitCompletion:=FALSE);
                   fb_nu1Off(phaseNumber:=11, act:=_off);
                   fb_nu2Off(phaseNumber:=12, act:=_off);
               fb_pnsWaitOff(phaseNumber:=15, act:=_run, waitCompletion:=TRUE);
   fb_testUnsuccessfulUnfill(phaseNumber:=18);       

  onInit:=TRUE;
  END_IF;

            fb_puskOilSystem(StrPh:=puskOilSystem, alg:=algoritms.puskOilSystem);
          fb_questionFilling(StrQ:=questionFilling);
                  fb_filling(StrPh:=filling, alg:=algoritms.filling);
           fb_questionUnload(StrQ:=questionUnload);
               fb_kran3bOpen(StrPh:=kran3bOpen, Im:=Im.kran3b);
               fb_kran4Close(StrPh:=kran4Close);
               fb_kran1Close(StrPh:=kran1Close, Im:=Im.kran1);
               fb_kran2Close(StrPh:=kran2Close, Im:=Im.kran2);
                fb_kran5open(StrPh:=kran5open, Im:=Im.kran5);
                  fb_wait720(StrPh:=wait720, timer:=AlgTimers.puskK_wait720);
              fb_noGasInPipe(StrPh:=noGasInPipe);
                fb_AutoNUoff(StrPh:=AutoNUoff, alg:=algoritms.autoNu);
                   fb_nu1Off(StrPh:=nu1Off, Im:=Im.nu1);
                   fb_nu2Off(StrPh:=nu2Off, Im:=Im.nu2);
               fb_pnsWaitOff(StrPh:=pnsWaitOff, alg:=algoritms.vibegPNS);
   fb_testUnsuccessfulUnfill(StrPh:=testUnsuccessfulUnfill);                                 

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

      StrAlg.hasError := kran3bOpen.error OR kran1Close.error OR kran2Close.error OR kran5open.error OR testUnsuccessfulUnfill.error;

      IF puskOilSystem.top THEN
           IF NOT _resetQuestion1 THEN		
           askQuestion(questionFilling);
           _resetQuestion1:=TRUE;
           END_IF;
      END_IF;

      IF questionFilling.answer = _Answers.ANS_YES THEN
          runPhase(filling);
          resetQuestion(questionFilling);
      END_IF;

      IF filling.top THEN
         OpcCommandsKransEnabled:=TRUE;
         resetDiProtection(protections.Reg_vozb_off);
         (*resetDiProtection(protections.Fail_chastotnii_pusk);*)
         IF NOT _resetQuestion2 THEN
         askQuestion(questionUnload);
         _resetQuestion2:=TRUE;
         END_IF;
      END_IF;

       IF questionUnload.answer = _Answers.ANS_YES THEN
          OpcCommandsKransDisabled:=TRUE;
          runPhase(kran3bOpen);
          runPhase(wait720);
          resetQuestion(questionUnload);
      END_IF;

      IF kran3bOpen.top THEN
            resetDiProtection(protections.Reg_vozb_off);
            resetDiProtection(protections.Fail_chastotnii_pusk);

            runPhase(kran1Close);
            runPhase(kran2Close);
            runPhase(kran4Close);
      END_IF;

       IF kran4Close.start AND NOT kran4Close.top THEN
  	kran4Close.top:= Im.kran4.onStatus = _statusDualInput.STATUS_OFF;
      END_IF;

      IF kran1Close.top AND kran2Close.top AND kran4Close.top THEN
  	runPhase(kran5open);
      END_IF;

      IF kran5open.top THEN
  	runPhase(noGasInPipe);
      END_IF;

      IF noGasInPipe.start AND (NOT noGasInPipe.top) THEN
  	noGasInPipe.top:=  (ai.dPgaza_na_maslo_filtre.interval >= _statusAi.NORMAL
                           AND  ai.dPgaza_na_maslo_filtre.value< Ust_Pgaza )
                           AND (ai.Pmaslo_sm_vysokoe.interval >= _statusAi.NORMAL
                           AND  ai.Pmaslo_sm_vysokoe.value< Ust_Pgaza); 
      END_IF;

      IF noGasInPipe.top THEN

            ai.Tmasla_MB.Disabled_LA:=TRUE;
            ai.Tmasla_MB.Disabled_LW:=TRUE;
            (*IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=TRUE;*)
            resetAiProtection(protections.Os_sdvig_nagnetatelja_plus);
           (* resetDiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5);*)
  	runPhase(AutoNUoff);

      END_IF;

       IF autoNuOff.top THEN
  	runPhase(nu1off);
            runPhase(nu2off);  
      END_IF;

      IF nu1Off.top AND nu2Off.top THEN
  	runPhase(pnsWaitOff);
      END_IF;

      IF wait720.top AND NOT (pnsWaitOff.top) THEN
            testUnsuccessfulUnfill.error:=TRUE;
      END_IF;

      IF pnsWaitOff.top THEN
            resetPhase(wait720);
  	waitReset(IN:=TRUE, PT:= T#3S);
      END_IF;

      IF waitReset.Q THEN
          resetIfRunning(algoritms.vibegPNS);
          algManager.nMode:=ModeGpa.MODE_STOP;
          resetIfRunning(StrAlg);
      END_IF;

      StrAlg.isEnded:= pnsWaitOff.top;

      IF OpcCommandsKransEnabled AND NOT OpcCommandsKransDisabled THEN
  	IF      (im.pns.onStatus = _statusDualInput.STATUS_ON)
                AND (im.nu1.onStatus = _statusDualInput.STATUS_ON OR im.nu2.onStatus = _statusDualInput.STATUS_ON)
  	    AND (ai.Tmasla_MB.interval >= _statusAi.normal)
                (*AND (ai.Tmasla_MB.value > im.PuskOilSystem_UstdPmg.Value)*)
            THEN
  	    IM.Kran3b.inOpcCommandsDisabled:=FALSE;
  	    Im.kran4.inOpcCommandsDisabled:=FALSE;
  	    Im.kran5.inOpcCommandsDisabled:=FALSE;
  		(*IF	Im.SingleSignals.dP_gazgaz_Kran1.q THEN
  			Im.kran1.inOpcCommandsDisabled:=FALSE; 
  			Im.kran2.inOpcCommandsDisabled:=FALSE;
  		ELSE
  			Im.kran1.inOpcCommandsDisabled:=TRUE; 
  			Im.kran2.inOpcCommandsDisabled:=TRUE;
  		END_IF;*)
            ELSE
  	    Im.kran1.inOpcCommandsDisabled:=TRUE; 
  	    Im.kran2.inOpcCommandsDisabled:=TRUE; 
  	    Im.kran3b.inOpcCommandsDisabled:=TRUE; 
  	    Im.kran4.inOpcCommandsDisabled:=TRUE; 
  	    Im.kran5.inOpcCommandsDisabled:=TRUE;      
            END_IF;

      ELSE
  	Im.kran1.inOpcCommandsDisabled:=TRUE;   
  	Im.kran2.inOpcCommandsDisabled:=TRUE; 
  	Im.kran3b.inOpcCommandsDisabled:=TRUE;  
  	Im.kran4.inOpcCommandsDisabled:=TRUE; 
  	Im.kran5.inOpcCommandsDisabled:=TRUE;  
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

                                                    algManager.nMode:=ModeGpa.MODE_PUSKK;
                                                    resetAndDisable(alg:=algoritms.ppu);
                                                    algoritms.puskOilSystem.inCanRun:= TRUE;
                                                    algoritms.filling.inCanRun:= TRUE;
                                                    runPhase(puskOilSystem); 

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
                                          OpcCommandsKransEnabled:=FALSE;
                                          OpcCommandsKransDisabled:=FALSE;
                                          waitReset(IN:=FALSE);
                                          _resetQuestion1:=FALSE;
                                          _resetQuestion2:=FALSE;
                                          resetPhase(puskOilSystem);
                                          resetPhase(filling);
                                          resetPhase(kran3bOpen);
                                          resetPhase(kran4Close);
                                          resetPhase(kran1Close);
                                          resetPhase(kran2Close);
                                          resetPhase(kran5open);
                                          resetPhase(wait720);
                                          resetPhase(noGasInPipe);
                                          resetPhase(AutoNUoff);
                                          resetPhase(nu1Off);
                                          resetPhase(nu2Off);
                                          resetPhase(pnsWaitOff);
                                          resetPhase(testUnsuccessfulUnfill);
                                          BlockAllIM(IM); 
                                          resetQuestion(questionFilling);      
                                          resetQuestion(questionUnload);

                                          StrAlg.inOpcCommandsDisabled:=FALSE;

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

  StrAlg.Start:= puskOilSystem.startStatus
              OR filling.startStatus
              OR kran3bOpen.startStatus
              OR kran4Close.startStatus
              OR kran1Close.startStatus
              OR kran2Close.startStatus
              OR kran5open.startStatus
              OR wait720.startStatus
              OR noGasInPipe.startStatus
              OR AutoNUoff.startStatus
              OR nu1Off.startStatus
              OR nu2Off.startStatus
              OR pnsWaitOff.startStatus
              OR testUnsuccessfulUnfill.startStatus;

  StrAlg.Error:=  puskOilSystem.errorStatus
              OR filling.errorStatus
              OR kran3bOpen.errorStatus
              OR kran4Close.errorStatus
              OR kran1Close.errorStatus
              OR kran2Close.errorStatus
              OR kran5open.errorStatus
              OR wait720.errorStatus
              OR noGasInPipe.errorStatus
              OR AutoNUoff.errorStatus
              OR nu1Off.errorStatus
              OR nu2Off.errorStatus
              OR pnsWaitOff.errorStatus
              OR testUnsuccessfulUnfill.errorStatus;


  StrAlg.Top:=   puskOilSystem.topStatus
              OR filling.topStatus
              OR kran3bOpen.topStatus
              OR kran4Close.topStatus
              OR kran1Close.topStatus
              OR kran2Close.topStatus
              OR kran5open.topStatus
              OR wait720.topStatus
              OR noGasInPipe.topStatus
              OR AutoNUoff.topStatus
              OR nu1Off.topStatus
              OR nu2Off.topStatus
              OR pnsWaitOff.topStatus
              OR testUnsuccessfulUnfill.topStatus;                          

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK puskValg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    puskOilSystem : struct_PhaseAlgoritm;
  END_VAR
  VAR_IN_OUT
    questionEngine : struct_Question;
  END_VAR
  VAR
    runningEngine : struct_PhaseAlgoritm;
  END_VAR
  VAR_IN_OUT
    questionMVoff : struct_Question;
  END_VAR
  VAR
    mvOff : struct_PhaseAlgoritm;
    pnsOn : struct_PhaseAlgoritm;
    wait600 : struct_PhaseAlgoritm;
    AutoNUoff : struct_PhaseAlgoritm;
    nu1Off : struct_PhaseAlgoritm;
    nu2Off : struct_PhaseAlgoritm;
    autoAvomOff : struct_PhaseAlgoritm;
    Avom1Off : struct_PhaseAlgoritm;
    Avom2Off : struct_PhaseAlgoritm;
    pnsWaitOff : struct_PhaseAlgoritm;
    testUnsuccessful : struct_PhaseAlgoritm;
    fb_puskOilSystem : fb_ph_algoritm;
    fb_questionEngine : fb_Question;
    fb_runningEngine : fb_ph_algoritm;
    fb_questionMVoff : fb_Question;
    fb_mvOff : fb_ph_SectionSwitch;
    fb_pnsOn : fb_ph_Switch;
    fb_wait600 : fb_ph_Timer;
    fb_AutoNUoff : fb_ph_algoritm;
    fb_nu1Off : fb_ph_OilPump;
    fb_nu2Off : fb_ph_OilPump;
    fb_autoAvomOff : fb_ph_algoritm;
    fb_Avom1Off : fb_ph_Switch;
    fb_Avom2Off : fb_ph_Switch;
    fb_pnsWaitOff : fb_ph_algoritm;
    fb_testUnsuccessful : fb_ph_CustomPhase;
    _sunpackerCommand : fb_sunpackerCommand;
    _DualStateImAction : TYPE_DualStateImAction;
    _Answers : TYPE_Answers;
    _statusDualInput : TYPE_statusDualInput;
    _StatusAi : TYPE_StatusAi;
    _PhaseAlgoritmAction : TYPE_PhaseAlgoritmAction;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
  END_VAR
  VAR CONSTANT
    Ust_Pgaza : LREAL := 0.3;
  END_VAR
  VAR
    onInit : BOOL;
    _resetQuestion1 : BOOL;
    _resetQuestion2 : BOOL;
    waitReset : TON;
  END_VAR
  VAR_EXTERNAL
    IM : ImConfig;
    algoritms : AlgoritmsConfig;
    ai : AiConfig;
    AlgTimers : struct_AlgTimers;
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    protections : ProtectionsConfig;
  END_VAR

  IF NOT onInit THEN

            fb_puskOilSystem(phaseNumber:=0, act:=_run, waitCompletion:=TRUE);
         questionEngine.AnswerVariants:=_Answers.ANS_YES;
            fb_runningEngine(phaseNumber:=1, act:=_run, waitCompletion:=TRUE);
          questionMVoff.AnswerVariants:=_Answers.ANS_YES;
                    fb_mvOff(phaseNumber:=3, act:=_off);
                    fb_pnsOn(phaseNumber:=4, act:=_on);
                  fb_wait600(phaseNumber:=8, delay:=T#600S);
                fb_AutoNUoff(phaseNumber:=10, act:=_reset, waitCompletion:=FALSE);
                   fb_nu1Off(phaseNumber:=11, act:=_off);
                   fb_nu2Off(phaseNumber:=12, act:=_off);
               fb_pnsWaitOff(phaseNumber:=15, act:=_run, waitCompletion:=TRUE);
              fb_autoAvomOff(phaseNumber:=7, act:=_reset, waitCompletion:=FALSE);
                 fb_Avom1Off(phaseNumber:=5, act:=_off);
                 fb_Avom2Off(phaseNumber:=6, act:=_off);
         fb_testUnsuccessful(phaseNumber:=17);     

  onInit:=TRUE;
  END_IF;

            fb_puskOilSystem(StrPh:=puskOilSystem, alg:=algoritms.puskOilSystem);
           fb_questionEngine(StrQ:=questionEngine);
            fb_runningEngine(StrPh:=runningEngine, alg:=algoritms.engineRun);
            fb_questionMVoff(StrQ:=questionMVoff);
                    fb_mvOff(StrPh:=mvOff, Im:=Im.mv);
                    fb_pnsOn(StrPh:=pnsOn, Im:=Im.pns);
                  fb_wait600(StrPh:=wait600, timer:=AlgTimers.puskV_wait600);
                fb_AutoNUoff(StrPh:=AutoNUoff, alg:=algoritms.autoNu);
                   fb_nu1Off(StrPh:=nu1Off, Im:=Im.nu1);
                   fb_nu2Off(StrPh:=nu2Off, Im:=Im.nu2);
               fb_pnsWaitOff(StrPh:=pnsWaitOff, alg:=algoritms.vibegPNS);
              fb_autoAvomOff(StrPh:=autoAvomOff, alg:=algoritms.AutoAvom);
                 fb_Avom1Off(StrPh:=Avom1Off, Im:=Im.v1_Avom);
                 fb_Avom2Off(StrPh:=Avom2Off, Im:=Im.v2_Avom);
         fb_testUnsuccessful(StrPh:=testUnsuccessful);                               

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

      StrAlg.hasError := mvOff.error OR pnsOn.error OR testUnsuccessful.error;

      IF puskOilSystem.top THEN
           IF NOT _resetQuestion1 THEN	
           askQuestion(questionEngine);
           _resetQuestion1:=TRUE;
           END_IF;
      END_IF;

      IF questionEngine.answer = _Answers.ANS_YES THEN
          runPhase(runningEngine);
          resetQuestion(questionEngine);
      END_IF;

      IF runningEngine.top THEN
         IF NOT _resetQuestion2 THEN
         askQuestion(questionMVoff);
         _resetQuestion2:=TRUE;
         END_IF;
      END_IF;

       IF questionMVoff.answer = _Answers.ANS_YES THEN

          (*resetDiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
         *) resetIfRunning(algoritms.AutoPns);
          runPhase(mvOff);
          runPhase(wait600);
          resetQuestion(questionMVoff);
       END_IF;

      IF mvOff.top THEN
          runPhase(pnsOn);
      END_IF;

      IF pnsOn.top THEN

            ai.Tmasla_MB.Disabled_LA:=TRUE;
            ai.Tmasla_MB.Disabled_LW:=TRUE;
            (*IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=TRUE;*)
            (*resetAiProtection(protections.Os_sdvig_nagnetatelja_plus)*)
           (* resetDiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5);*)
  	runPhase(AutoNUoff);

      END_IF;

       IF autoNuOff.top THEN
  	runPhase(nu1off);
            runPhase(nu2off);  
      END_IF;

      IF nu1Off.top AND nu2Off.top THEN
  	runPhase(pnsWaitOff);
      END_IF;

      IF wait600.top AND NOT (pnsWaitOff.top) THEN
            testUnsuccessful.error:=TRUE;
      END_IF;

      IF pnsWaitOff.top THEN
            resetPhase(wait600);
            runPhase(autoAvomOff);
  	waitReset(IN:=TRUE, PT:= T#3S);
      END_IF;

      IF autoAvomOff.top THEN
            runPhase(Avom1Off);
            runPhase(Avom2Off);
      END_IF;

      IF waitReset.Q THEN
          resetIfRunning(algoritms.vibegPNS);
          algManager.nMode:=ModeGpa.MODE_STOP;
          resetIfRunning(StrAlg);
      END_IF;

      StrAlg.isEnded:= pnsWaitOff.top;

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

                                                    algManager.nMode:=ModeGpa.MODE_PUSKV;
                                                    resetAndDisable(alg:=algoritms.ppu);
                                                    algoritms.puskOilSystem.inCanRun:= TRUE;
                                                    algoritms.engineRun.inCanRun:= TRUE;
                                                    runPhase(puskOilSystem); 

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
                                          _resetQuestion1:=FALSE;
                                          _resetQuestion2:=FALSE;
                                          resetPhase(puskOilSystem);
                                          resetPhase(runningEngine);
                                          resetPhase(mvOff);
                                          resetPhase(pnsOn);
                                          resetPhase(wait600);
                                          resetPhase(AutoNUoff);
                                          resetPhase(nu1Off);
                                          resetPhase(nu2Off);
                                          resetPhase(pnsWaitOff);
  	                              resetPhase(autoAvomOff);
                                          resetPhase(Avom1Off);
                                          resetPhase(Avom2Off);
                                          resetPhase(testUnsuccessful);

                                          resetQuestion(questionEngine);      
                                          resetQuestion(questionMVoff);

                                          StrAlg.inOpcCommandsDisabled:=FALSE;

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

  StrAlg.Start:= puskOilSystem.startStatus
              OR runningEngine.startStatus
              OR mvOff.startStatus
              OR pnsOn.startStatus
              OR wait600.startStatus
              OR AutoNUoff.startStatus
              OR nu1Off.startStatus
              OR nu2Off.startStatus
              OR pnsWaitOff.startStatus
              OR testUnsuccessful.startStatus;

  StrAlg.Error:=  puskOilSystem.errorStatus
              OR runningEngine.errorStatus
              OR mvOff.errorStatus
              OR pnsOn.errorStatus
              OR wait600.errorStatus
              OR AutoNUoff.errorStatus
              OR nu1Off.errorStatus
              OR nu2Off.errorStatus
              OR pnsWaitOff.errorStatus
              OR testUnsuccessful.errorStatus;


  StrAlg.Top:=   puskOilSystem.topStatus
              OR runningEngine.topStatus
              OR mvOff.topStatus
              OR pnsOn.topStatus
              OR wait600.topStatus
              OR AutoNUoff.topStatus
              OR nu1Off.topStatus
              OR nu2Off.topStatus
              OR pnsWaitOff.topStatus
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
END_FUNCTION_BLOCK

FUNCTION_BLOCK testdPmgAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    puskOilSystem : struct_PhaseAlgoritm;
  END_VAR
  VAR_IN_OUT
    algContinue : struct_Question;
  END_VAR
  VAR
    nuOff : struct_PhaseAlgoritm;
    dPmgAi : struct_PhaseAlgoritm;
    dPmgDi : struct_PhaseAlgoritm;
    nuOn : struct_PhaseAlgoritm;
    noRezrv : struct_PhaseAlgoritm;
    BreakTest : struct_PhaseAlgoritm;
    testUnsuccessful : struct_PhaseAlgoritm;
    pnsOff : struct_PhaseAlgoritm;
    stopANU : struct_PhaseAlgoritm;
    Ust_dPLow : struct_PhaseAlgoritm;
    nu1Off : struct_PhaseAlgoritm;
    nu2Off : struct_PhaseAlgoritm;
    stopNU1 : struct_PhaseAlgoritm;
    stopNU2 : struct_PhaseAlgoritm;
    fb_puskOilSystem : fb_ph_algoritm;
    fb_algContinue : fb_Question;
    fb_nuOff : fb_ph_CustomPhase;
    fb_dPmgAi : fb_ph_WaitAnalogValue;
    fb_dPmgDi : fb_ph_CustomPhase;
    fb_nuOn : fb_ph_CustomPhase;
    fb_noRezrv : fb_ph_CustomPhase;
    fb_BreakTest : fb_ph_Timer;
    fb_testUnsuccessful : fb_ph_CustomPhase;
    fb_pnsOff : fb_ph_Switch;
    fb_stopANU : fb_ph_CustomPhase;
    fb_nu1Off : fb_ph_OilPump;
    fb_nu2Off : fb_ph_OilPump;
    fb_stopNU1 : fb_ph_OilPump;
    fb_stopNU2 : fb_ph_OilPump;
    _sunpackerCommand : fb_sunpackerCommand;
    _DualStateImAction : TYPE_DualStateImAction;
    _Answers : TYPE_Answers;
    _statusDualInput : TYPE_statusDualInput;
    _StatusAi : TYPE_StatusAi;
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
    _resetQuestion : BOOL;
    waitReset : TON;
    WaitOnNU : TON;
  END_VAR
  VAR_EXTERNAL
    IM : ImConfig;
    algoritms : AlgoritmsConfig;
    ai : AiConfig;
    AlgTimers : struct_AlgTimers;
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    protections : ProtectionsConfig;
    NotHasRezervNU : BOOL;
  END_VAR

  IF NOT onInit THEN

      fb_puskOilSystem(phaseNumber:=0, act:=_run, waitCompletion:=TRUE);
          algContinue.AnswerVariants:=_Answers.ANS_YES;
              fb_nuOff(phaseNumber:=1);
             fb_dPmgAi(phaseNumber:=2);
             fb_dPmgDi(phaseNumber:=3);
               fb_nuOn(phaseNumber:=4);
            fb_noRezrv(phaseNumber:=5);
   fb_testUnsuccessful(phaseNumber:=6);
          fb_BreakTest(phaseNumber:=7, delay:=T#10S);
             fb_pnsOff(phaseNumber:=8, act:=_off);
            fb_stopANU(phaseNumber:=9);
             fb_nu1Off(phaseNumber:=11, act:=_off);
             fb_nu2Off(phaseNumber:=12, act:=_off);
            fb_stopNU1(phaseNumber:=15, act:=_off);     
            fb_stopNU2(phaseNumber:=16, act:=_off);
  onInit:=TRUE;
  END_IF;

      fb_puskOilSystem(StrPh:=puskOilSystem, alg:=algoritms.puskOilSystem);
        fb_algContinue(StrQ:=algContinue);
              fb_nuOff(StrPh:=nuOff);
             (*fb_dPmgAi(StrPh:=dPmgAi, ai:=ai.Tmasla_MB, less:=im.testdPmg_Ust_dPLow.Value);*)
             fb_dPmgDi(StrPh:=dPmgDi);
               fb_nuOn(StrPh:=nuOn);
            fb_noRezrv(StrPh:=noRezrv);
   fb_testUnsuccessful(StrPh:=testUnsuccessful);
          fb_BreakTest(StrPh:=BreakTest, timer:=AlgTimers.testdPmg_BreakTest);
             fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
            fb_stopANU(StrPh:=stopANU);
             fb_nu1Off(StrPh:=nu1Off, Im:=Im.nu1);
             fb_nu2Off(StrPh:=nu2Off, Im:=Im.nu2);
            fb_stopNU1(StrPh:=stopNU1, Im:=Im.nu1);
            fb_stopNU2(StrPh:=stopNU2, Im:=Im.nu2);                                   

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

      StrAlg.hasError := pnsOff.error OR nu1Off.error OR nu2Off.error
      OR stopNU1.error OR stopNU2.error OR testUnsuccessful.error;

      IF puskOilSystem.top THEN
           IF NOT _resetQuestion THEN		
           askQuestion(algContinue);
            _resetQuestion:=TRUE;
           END_IF;
      END_IF;

      IF algContinue.answer = _Answers.ANS_YES AND NOT nuOff.top THEN 

          runPhase(nuOff);

          IF Im.nu1.onStatus = _statusDualInput.STATUS_ON THEN
  		runPhase(nu1Off); 
          END_IF;

          IF Im.nu2.onStatus = _statusDualInput.STATUS_ON THEN
  		runPhase(nu2Off);	
          END_IF;

          resetQuestion(algContinue);

      END_IF;          

      IF nuOff.start AND NOT nuOff.top THEN
            runPhase(BreakTest); 
  	nuOff.top:= Im.nu1.onStatus = _statusDualInput.STATUS_Off
                    AND Im.nu2.onStatus = _statusDualInput.STATUS_Off;
      END_IF;                     

      IF nuOff.top THEN

          runPhase(dPmgAi);
          runPhase(dPmgDi);
      END_IF;

      (*IF dPmgDi.start AND NOT dPmgDi.top THEN 
          dPmgDi.top:=Im.SingleSignals.dP_oilgaz_low.q;
      END_IF;*)

      IF dPmgAi.top AND dPmgDi.top THEN
          runPhase(nuOn);    
          runPhase(noRezrv);
      END_IF;

      IF noRezrv.start AND NOT noRezrv.top THEN 
          noRezrv.top:=NotHasRezervNU;
      END_IF;

       IF nuOn.start AND (NOT WaitOnNU.Q) THEN
          WaitOnNU(IN:=Im.nu1.onStatus = _statusDualInput.STATUS_On OR
              Im.nu2.onStatus = _statusDualInput.STATUS_On, PT:=T#2S);  
          nuOn.top:=Im.nu1.onStatus = _statusDualInput.STATUS_On OR
              Im.nu2.onStatus = _statusDualInput.STATUS_On;
      END_IF;   

      IF  WaitOnNU.Q AND noRezrv.top THEN
          ai.Tmasla_MB.Disabled_LA:=TRUE;
          ai.Tmasla_MB.Disabled_LW:=TRUE;
          (*IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=TRUE;
          IM.SingleSignals.P_oil_low.Disabled_Sig:=TRUE;*)
          ai.Pmasla_posle_GNS.Disabled_LA:=TRUE;
          ai.Pmasla_posle_GNS.Disabled_LW:=TRUE;
          ai.Pmasla_posle_NU.Disabled_LW:=TRUE;

          resetAiProtection(protections.Os_sdvig_nagnetatelja_minus);
          (*resetDiProtection(protections.Vibro_skorost_OP_shesterni_reduktora_H_T6);*)
          resetAiProtection(protections.Os_sdvig_nagnetatelja_plus);
          (*resetDiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5);*)

          resetIfRunning(algoritms.autoNu);
          resetIfRunning(algoritms.AutoPns);

          runPhase(stopANU);
          runPhase(pnsOff);

          runPhase(stopNU1);
          runPhase(stopNU2);

      END_IF; 

      IF stopANU.start AND NOT stopANU.top THEN

  	stopANU.top:= Im.nu1.onStatus = _statusDualInput.STATUS_Off AND
                          Im.nu2.onStatus = _statusDualInput.STATUS_Off;
      END_IF; 

      IF BreakTest.top AND NOT pnsOff.top THEN
  	testUnsuccessful.error:=TRUE;
      END_IF; 

      IF pnsOff.top AND stopANU.top THEN
            resetPhase(BreakTest);
  	waitReset(IN:=TRUE, PT:= T#3S);
      END_IF;

      IF waitReset.Q THEN
          algManager.nMode:=ModeGpa.MODE_STOP;
          resetIfRunning(StrAlg);
      END_IF;

      StrAlg.isEnded:= pnsOff.top AND stopANU.top;

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

                                                    algManager.nMode:=ModeGpa.MODE_TESTDPMG;
                                                    resetAndDisable(alg:=algoritms.ppu);
                                                    algoritms.puskOilSystem.inCanRun:= TRUE;
                                                    runPhase(puskOilSystem); 

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
                                          WaitOnNU(IN:=FALSE);
                                          _resetQuestion:=FALSE;
                                          ai.Pmasla_posle_GNS.Disabled_LA:=TRUE;
                                          ai.Pmasla_posle_GNS.Disabled_LW:=TRUE;
                                          ai.Pmasla_posle_NU.Disabled_LW:=TRUE;
                                          (*IM.SingleSignals.P_oil_low.Disabled_Sig:=TRUE;
                                          IM.SingleSignals.dP_oilgaz_low.Disabled_Sig:=TRUE;*)
                                          ai.Tmasla_MB.Disabled_LA:=TRUE;
                                          ai.Tmasla_MB.Disabled_LW:=TRUE;
                                          resetAiProtection(protections.Os_sdvig_nagnetatelja_minus);
                                          (*resetDiProtection(protections.Vibro_skorost_OP_shesterni_reduktora_H_T6);*)
                                          resetAiProtection(protections.Os_sdvig_nagnetatelja_plus);
                                          (*resetDiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5);*)

                                          resetPhase(puskOilSystem);
                                          resetPhase(nuOff);
                                          resetPhase(dPmgAi);
                                          resetPhase(dPmgDi);
                                          resetPhase(nuOn);
                                          resetPhase(noRezrv);
                                          resetPhase(BreakTest);
                                          resetPhase(testUnsuccessful);
                                          resetPhase(pnsOff);
                                          resetPhase(stopANU);
                                          resetPhase(nu1Off);
                                          resetPhase(nu2Off);
                                          resetPhase(stopNU1);
                                          resetPhase(stopNU2);

                                          resetQuestion(algContinue);      

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  StrAlg.Start:= puskOilSystem.startStatus
              OR nuOff.startStatus
              OR dPmgAi.startStatus
              OR dPmgDi.startStatus
              OR nuOn.startStatus
              OR noRezrv.startStatus
              OR BreakTest.startStatus
              OR testUnsuccessful.startStatus
              OR pnsOff.startStatus
              OR stopANU.startStatus
              OR nu1Off.startStatus
              OR nu2Off.startStatus;

  StrAlg.Error:=  puskOilSystem.errorStatus
              OR nuOff.errorStatus
              OR dPmgAi.errorStatus
              OR dPmgDi.errorStatus
              OR nuOn.errorStatus
              OR noRezrv.errorStatus
              OR BreakTest.errorStatus
              OR testUnsuccessful.errorStatus
              OR pnsOff.errorStatus
              OR stopANU.errorStatus
              OR nu1Off.errorStatus
              OR nu2Off.errorStatus;


  StrAlg.Top:=   puskOilSystem.topStatus
              OR nuOff.topStatus
              OR dPmgAi.topStatus
              OR dPmgDi.topStatus
              OR nuOn.topStatus
              OR noRezrv.topStatus
              OR BreakTest.topStatus
              OR testUnsuccessful.topStatus
              OR pnsOff.topStatus
              OR stopANU.topStatus
              OR nu1Off.topStatus
              OR nu2Off.topStatus;                     

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_ph_AIprotection
  VAR_IN_OUT
    StrAiP : struct_AiProtection;
  END_VAR
  VAR_INPUT
    act : TYPE_PhaseAlgoritmAction;
    PhaseNumber : UINT;
  END_VAR
  VAR_IN_OUT
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR
    CommandFault_Trig : R_TRIG;
    reset_Trig : R_TRIG;
    _statusDualInput : TYPE_statusDualInput;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;
            StrPh.run:=FALSE;

  	CASE act OF
  		(*PhaseAlgoritmAction.run*)    _run : runAiProtection(StrAiP); (*cmd_run*)
  		(*PhaseAlgoritmAction.reset*)_reset : resetAiProtection(StrAiP); (*cmd_reset*)
  	END_CASE;	
  END_IF;


  IF StrPh.start AND NOT StrPh.top THEN
                      CommandFault_Trig(CLK := StrAiP.hasError);
                      IF CommandFault_Trig.Q THEN
  	          StrPh.error := TRUE;
                      END_IF;

  		CASE act OF
  		(*PhaseAlgoritmAction.run*)    _run:    StrPh.top:=StrAiP.isRunning;			

  		(*PhaseAlgoritmAction.reset*) _reset:   StrPh.top := NOT StrAiP.isRunning;
  		END_CASE;

  END_IF;

  IF StrPh.top THEN
  StrPh.error := FALSE;
  END_IF;

  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
            StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.run:=FALSE;
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION_BLOCK testPmsAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
    algContinue : struct_Question;
  END_VAR
  VAR
    pnsOn : struct_PhaseAlgoritm;
    PmsUp : struct_PhaseAlgoritm;
    runProtecrionAi : struct_PhaseAlgoritm;
    pnsOff : struct_PhaseAlgoritm;
    BreakTest : struct_PhaseAlgoritm;
    LowOilPS : struct_PhaseAlgoritm;
    LowOilAS : struct_PhaseAlgoritm;
    testUnsuccessful : struct_PhaseAlgoritm;
    fb_pnsOn : fb_ph_Switch;
    fb_PmsUp : fb_ph_WaitAnalogValue;
    fb_algContinue : fb_Question;
    fb_runProtecrionAi : fb_ph_AIprotection;
    fb_pnsOff : fb_ph_Switch;
    fb_BreakTest : fb_ph_Timer;
    fb_LowOilPS : fb_ph_CustomPhase;
    fb_LowOilAS : fb_ph_CustomPhase;
    fb_testUnsuccessful : fb_ph_CustomPhase;
    _sunpackerCommand : fb_sunpackerCommand;
    _DualStateImAction : TYPE_DualStateImAction;
    _Answers : TYPE_Answers;
    _statusDualInput : TYPE_statusDualInput;
    _StatusAi : TYPE_StatusAi;
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
    _resetQuestion : BOOL;
    waitReset : TON;
  END_VAR
  VAR_EXTERNAL
    IM : ImConfig;
    algoritms : AlgoritmsConfig;
    ai : AiConfig;
    AlgTimers : struct_AlgTimers;
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    protections : ProtectionsConfig;
  END_VAR

  IF NOT onInit THEN

                     fb_pnsOn(phaseNumber:=0, act:=_on);
          algContinue.AnswerVariants:=_Answers.ANS_YES;
                     fb_PmsUp(phaseNumber:=1);
           fb_runProtecrionAi(phaseNumber:=3, act:=_run);
                    fb_pnsOff(phaseNumber:=4, act:=_off);
                 fb_BreakTest(phaseNumber:=5, delay:=T#120S);
                  fb_LowOilPS(phaseNumber:=6);
                  fb_LowOilAS(phaseNumber:=7);
          fb_testUnsuccessful(phaseNumber:=8);

  onInit:=TRUE;
  END_IF;

              fb_pnsOn(StrPh:=pnsOn, Im:=IM.pns);
        fb_algContinue(StrQ:=algContinue);
              fb_PmsUp(StrPh:=PmsUp, ai:=ai.Pmasla_posle_GNS, more:=ai.Pmasla_posle_GNS.LW);
    fb_runProtecrionAi(StrPh:=runProtecrionAi, StrAiP:=protections.Os_sdvig_nagnetatelja_minus);
             fb_pnsOff(StrPh:=pnsOff, Im:=IM.pns);
          fb_BreakTest(StrPh:=BreakTest, timer:=AlgTimers.testPms_BreakTest);
           fb_LowOilPS(StrPh:=LowOilPS);
           fb_LowOilAS(StrPh:=LowOilAS);
   fb_testUnsuccessful(StrPh:=testUnsuccessful);                                  

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

      StrAlg.hasError := pnsOn.error OR pnsOff.error OR testUnsuccessful.error;


      IF pnsOn.top THEN	
           runPhase(PmsUp);
      END_IF;

      IF PmsUp.top THEN	
           runPhase(runProtecrionAi);
      END_IF;

      IF runProtecrionAi.top THEN
           (*IM.SingleSignals.P_oil_low.Disabled_Sig:=FALSE;*)
           ai.Pmasla_posle_GNS.Disabled_LA:=FALSE;
           ai.Pmasla_posle_GNS.Disabled_LW:=FALSE;
           ai.Pmasla_posle_NU.Disabled_LW:=FALSE;
               IF NOT _resetQuestion THEN	
                   askQuestion(algContinue);
                   _resetQuestion:=TRUE;
               END_IF;
      END_IF;

      IF algContinue.answer = _Answers.ANS_YES THEN 

          runPhase(BreakTest);
          runPhase(pnsOff);
          runPhase(LowOilPS);
          runPhase(LowOilAS);
          resetQuestion(algContinue);

      END_IF;

      IF 	LowOilPS.start AND NOT LowOilPS.top THEN
  	LowOilPS.top:= ai.Pmasla_posle_GNS.interval = _statusAi.LW;	
      END_IF;	
      IF 	LowOilAS.start AND NOT LowOilAS.top THEN
  	LowOilAS.top:= ai.Pmasla_posle_GNS.interval = _statusAi.LA;
      END_IF;          

      IF LowOilPS.top AND LowOilAS.top THEN
            resetPhase(BreakTest); 
            waitReset(IN:=TRUE, PT:= T#3S);
      END_IF;                     

      IF BreakTest.top AND StrAlg.isEnded THEN
  	testUnsuccessful.error:=TRUE;
      END_IF; 

      IF waitReset.Q THEN
          algManager.nMode:=ModeGpa.MODE_STOP;
          resetIfRunning(StrAlg);
      END_IF;

      StrAlg.isEnded:= LowOilPS.top AND LowOilAS.top;

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

                                                    algManager.nMode:=ModeGpa.MODE_TESTPMS;
                                                    resetAndDisable(alg:=algoritms.ppu);
                                                    runPhase(pnsOn); 

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
                                          _resetQuestion:=FALSE;
                                          ai.Pmasla_posle_GNS.Disabled_LA:=TRUE;
                                          ai.Pmasla_posle_GNS.Disabled_LW:=TRUE;
                                          ai.Pmasla_posle_NU.Disabled_LW:=TRUE;
                                         (* IM.SingleSignals.P_oil_low.Disabled_Sig:=TRUE;*)
                                          resetAiProtection(protections.Os_sdvig_nagnetatelja_minus);

                                          resetPhase(pnsOn);
                                          resetPhase(PmsUp);
                                          resetPhase(runProtecrionAi);
                                          resetPhase(pnsOff);
                                          resetPhase(BreakTest);
                                          resetPhase(LowOilPS);
                                          resetPhase(LowOilAS);
                                          resetPhase(testUnsuccessful);

                                          resetQuestion(algContinue);      

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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
              OR PmsUp.startStatus
              OR runProtecrionAi.startStatus
              OR pnsOff.startStatus
              OR BreakTest.startStatus
              OR LowOilPS.startStatus
              OR LowOilAS.startStatus
              OR testUnsuccessful.startStatus;

  StrAlg.Error:= pnsOn.errorStatus
              OR PmsUp.errorStatus
              OR runProtecrionAi.errorStatus
              OR pnsOff.errorStatus
              OR BreakTest.errorStatus
              OR LowOilPS.errorStatus
              OR LowOilAS.errorStatus
              OR testUnsuccessful.errorStatus;            

  StrAlg.Top:=   pnsOn.topStatus
              OR PmsUp.topStatus
              OR runProtecrionAi.topStatus
              OR pnsOff.topStatus
              OR BreakTest.topStatus
              OR LowOilPS.topStatus
              OR LowOilAS.topStatus
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
END_FUNCTION_BLOCK

FUNCTION_BLOCK ApuskAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    runOilsystem : struct_PhaseAlgoritm;
    runEngine : struct_PhaseAlgoritm;
    filling : struct_PhaseAlgoritm;
    fb_runOilsystem : fb_ph_algoritm;
    fb_runEngine : fb_ph_algoritm;
    fb_filling : fb_ph_algoritm;
    _sunpackerCommand : fb_sunpackerCommand;
    _PhaseAlgoritmAction : TYPE_PhaseAlgoritmAction;
    _statusDualInput : TYPE_statusDualInput;
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
    algoritms : AlgoritmsConfig;
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    IM : ImConfig;
  END_VAR

  IF NOT onInit THEN

           fb_runOilsystem(phaseNumber:=0, act:=_run, waitCompletion:=TRUE);
              fb_runEngine(phaseNumber:=1, act:=_run, waitCompletion:=TRUE);
                fb_filling(phaseNumber:=2, act:=_run, waitCompletion:=TRUE);


  onInit:=TRUE;
  END_IF;

           fb_runOilsystem(StrPh:=runOilsystem, alg:=algoritms.puskOilSystem);
              fb_runEngine(StrPh:=runEngine, alg:=algoritms.engineRun);
                fb_filling(StrPh:=filling, alg:=algoritms.filling);


  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

      StrAlg.hasError := runOilsystem.error OR runEngine.error OR filling.error;

      IF runOilsystem.top THEN	
           runPhase(runEngine);
      END_IF;

      IF runEngine.top THEN	
           runPhase(filling);
      END_IF;

      IF filling.top THEN
            waitReset(IN:=TRUE, PT:= T#2S);
      END_IF;

      IF waitReset.Q THEN

          IF Im.kran6.onStatus = _statusDualInput.STATUS_On THEN
  	algManager.nMode:= ModeGpa.MODE_WORK_Ring;
          END_IF;
          IF Im.kran6.onStatus = _statusDualInput.STATUS_Off THEN
  	algManager.nMode:= ModeGpa.MODE_WORK_Line;
          END_IF;

          resetIfRunning(StrAlg);
      END_IF;

      StrAlg.isEnded:= filling.top;

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

                                                    algoritms.puskOilSystem.inCanRun:= TRUE	;
                                                    algoritms.filling.inCanRun:= TRUE	;
                                                    algoritms.engineRun.inCanRun:= TRUE	;	


                                                    algManager.nMode:=ModeGpa.MODE_APUSK;
                                                    (*impulseSO(Im.SingleOutputs.VzvodBREO);*)
                                                    runPhase(runOilsystem); 

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
                                          StrAlg.inCanRun:=FALSE;

                                          resetPhase(runOilsystem);
                                          resetPhase(runEngine);
                                          resetPhase(filling);

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  StrAlg.Start:= runOilsystem.startStatus
              OR runEngine.startStatus
              OR filling.startStatus;

  StrAlg.Error:= runOilsystem.errorStatus
              OR runEngine.errorStatus
              OR filling.errorStatus;          

  StrAlg.Top:=   runOilsystem.topStatus
              OR runEngine.topStatus
              OR filling.topStatus;

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK SemiAutoPuskAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    runOilsystem : struct_PhaseAlgoritm;
    runEngine : struct_PhaseAlgoritm;
    filling : struct_PhaseAlgoritm;
  END_VAR
  VAR_IN_OUT
    cmdRun1ph : struct_Question;
    cmdRun2ph : struct_Question;
    cmdRun3ph : struct_Question;
  END_VAR
  VAR
    fb_runOilsystem : fb_ph_algoritm;
    fb_runEngine : fb_ph_algoritm;
    fb_filling : fb_ph_algoritm;
    fb_cmdRun1ph : fb_Question;
    fb_cmdRun2ph : fb_Question;
    fb_cmdRun3ph : fb_Question;
    _sunpackerCommand : fb_sunpackerCommand;
    _PhaseAlgoritmAction : TYPE_PhaseAlgoritmAction;
    _statusDualInput : TYPE_statusDualInput;
    _Answers : TYPE_Answers;
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
    algoritms : AlgoritmsConfig;
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    IM : ImConfig;
  END_VAR

  IF NOT onInit THEN
                 cmdRun1ph.AnswerVariants:=_Answers.ANS_YES;
           fb_runOilsystem(phaseNumber:=0, act:=_run, waitCompletion:=TRUE);
                 cmdRun2ph.AnswerVariants:=_Answers.ANS_YES;
              fb_runEngine(phaseNumber:=1, act:=_run, waitCompletion:=TRUE);
                 cmdRun3ph.AnswerVariants:=_Answers.ANS_YES;
                fb_filling(phaseNumber:=2, act:=_run, waitCompletion:=TRUE);


  onInit:=TRUE;
  END_IF;
              fb_cmdRun1ph(StrQ:=cmdRun1ph);
           fb_runOilsystem(StrPh:=runOilsystem, alg:=algoritms.puskOilSystem);
              fb_cmdRun2ph(StrQ:=cmdRun2ph);
              fb_runEngine(StrPh:=runEngine, alg:=algoritms.engineRun);
              fb_cmdRun3ph(StrQ:=cmdRun3ph);
                fb_filling(StrPh:=filling, alg:=algoritms.filling);


  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

      StrAlg.hasError := runOilsystem.error OR runEngine.error OR filling.error;

      IF cmdRun1ph.answer = _Answers.ANS_YES THEN
  	runPhase(runOilsystem);
            resetQuestion(cmdRun1ph);
      END_IF;

      IF runOilsystem.top AND NOT runEngine.start THEN
           askQuestion(cmdRun2ph);	
      END_IF;

      IF cmdRun2ph.answer = _Answers.ANS_YES THEN
           runPhase(runEngine);
           resetQuestion(cmdRun2ph);	
      END_IF;

      IF runEngine.top AND NOT filling.start THEN	
           askQuestion(cmdRun3ph);
      END_IF;

      IF cmdRun3ph.answer = _Answers.ANS_YES THEN	
           runPhase(filling);
           resetQuestion(cmdRun3ph);
      END_IF;

      IF filling.top THEN
            waitReset(IN:=TRUE, PT:= T#2S);
      END_IF;

      IF waitReset.Q THEN

          IF Im.kran6.onStatus = _statusDualInput.STATUS_On THEN
  	algManager.nMode:= ModeGpa.MODE_WORK_Ring;
          END_IF;
          IF Im.kran6.onStatus = _statusDualInput.STATUS_Off THEN
  	algManager.nMode:= ModeGpa.MODE_WORK_Line;
          END_IF;

          resetIfRunning(StrAlg);
      END_IF;

      StrAlg.isEnded:= filling.top;

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

                                                    algoritms.puskOilSystem.inCanRun:= TRUE	;
                                                    algoritms.filling.inCanRun:= TRUE	;
                                                    algoritms.engineRun.inCanRun:= TRUE	;	


                                                    algManager.nMode:=ModeGpa.MODE_MPUSK;
                                                    (*impulseSO(Im.SingleOutputs.VzvodBREO);*)
                                                    askQuestion(cmdRun1ph);

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
                                          StrAlg.inCanRun:=FALSE;

                                          resetPhase(runOilsystem);
                                          resetPhase(runEngine);
                                          resetPhase(filling);

                                          resetQuestion(cmdRun1ph); 
                                          resetQuestion(cmdRun2ph); 
                                          resetQuestion(cmdRun3ph);                                        

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  StrAlg.Start:= runOilsystem.startStatus
              OR runEngine.startStatus
              OR filling.startStatus;

  StrAlg.Error:= runOilsystem.errorStatus
              OR runEngine.errorStatus
              OR filling.errorStatus;          

  StrAlg.Top:=   runOilsystem.topStatus
              OR runEngine.topStatus
              OR filling.topStatus;

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_algoritms
  VAR
    fb_RemontAlg : RemontAlg;
    fb_TestProtectionAlg : TestProtectionAlg;
    fb_TestImAlg : TestImAlg;
    fb_AutoTen : fb_AutoTenAlg;
    fb_AutoPns : fb_AutoPnsAlg;
    fb_AutoAvom : fb_AutoAvomAlg;
    fb_vibegPNS : fb_vibegPNSAlg;
    fb_AutoNU : fb_AutoNUAlg;
    fb_puskOilSystem : fb_puskOilSystemAlg;
    fb_AntiPompag : fb_AntiPompagAlg;
    fb_NOAlg : NOAlg;
    fb_AOAlg : AOAlg;
    fb_ppuALG : ppuAlg;
    fb_fillingAlg : fillingAlg;
    fb_engineRunAlg : engineRunAlg;
    fb_puskKalg : puskKalg;
    fb_puskValg : puskValg;
    fb_testdPmgAlg : testdPmgAlg;
    fb_testPmsAlg : testPmsAlg;
    fb_ApuskAlg : ApuskAlg;
    fb_SemiAutoPuskAlg : SemiAutoPuskAlg;
  END_VAR
  VAR_EXTERNAL
    algoritms : AlgoritmsConfig;
    AlgQuestions : AlgoritmsQuestions;
    ai : AiConfig;
    IM : ImConfig;
    AlgTimers : struct_AlgTimers;
  END_VAR

  fb_RemontAlg(StrAlg:=algoritms.Remont);

  fb_TestProtectionAlg(StrAlg:=algoritms.TestProtection);

  fb_TestImAlg(StrAlg:=algoritms.testIm);

  (*fb_AutoTen(StrAlg:= algoritms.AutoTen,
  T_masla:= ai.Toporno_podshipnika_EDT_1,
  Uroven_masla:= ai.Yroven_masla_MB,
  offTemperature:= Im.AutoTen_offTemperature,
  TEN:= Im.Ten,
  PNS:= Im.pns);*)

  (*fb_AutoPns(StrAlg:= algoritms.AutoPns,
  Poil:= ai.Pmasla_posle_GNS,
  Ust_Run:= Im.AutoPns_UstRun,
  Ust_Stop:= Im.AutoPns_UstStop,
  Nasos:= Im.pns,
  diPlow:= Im.SingleSignals.P_oil_low);*)

  (*fb_AutoAvom(StrAlg:= algoritms.AutoAvom,
  im1:= Im.v1_Avom,
  im2:= Im.v2_Avom,
  on1Temperature:= Im.AutoAvom_onTemp1,
  on2Temperature:= Im.AutoAvom_onTemp2,
  hystereses:= Im.AutoAvom_hysteresis,
  ai:= ai.Tnarujnogo_vozduha);*)

  fb_vibegPNS(StrAlg:=algoritms.vibegPNS,
  algContinue:=AlgQuestions.vibegPNS_algContinue
  );

  (*fb_AutoNU(StrAlg:=algoritms.autoNu,
  nu1:=Im.nu1,
  nu2:=Im.nu2,
  Ust_Swap:= Im.AutoNU_Ust_Swap,
  mainNU:= Im.AutoNU_mainNU,
  dPoil:=ai.Tmasla_MB,
  Lowdp_di:=Im.SingleSignals.dP_oilgaz_low
  );*)

  fb_puskOilSystem(StrAlg:=algoritms.puskOilSystem);

  (*fb_AntiPompag(StrAlg:=algoritms.AntiPompag,
  Rashod:= ai.Vibro_skorost_OP_shesterni_reduktora_H_T6,
  Zapas:= ai.Vibro_skorost_OP_shesterni_RED_T5,
  P_gasIn:=ai.dPgaza_na_maslo_filtre,
  T_gasIn:=ai.Tgaza_na_vhode_H,
  dP_konf:=ai.dPgaza_na_konfuzore,
  Kran6:= im.Kran6,
  UgolVNA:= im.AntiPompag_UgolVNA,
  K:=im.AntiPompag_K,
  A:=im.AntiPompag_A,
  y0:=im.AntiPompag_y0);*)

  fb_NOAlg(StrAlg:=algoritms.no);

  fb_AOAlg(StrAlg:=algoritms.ao);

  fb_ppuAlg(StrAlg:=algoritms.ppu);

  fb_fillingAlg(StrAlg:=algoritms.filling);

  fb_engineRunAlg(StrAlg:=algoritms.engineRun);

  fb_puskKalg(StrAlg:=algoritms.puskK,
  questionFilling:=AlgQuestions.puskK_questionFilling,
   questionUnload:=AlgQuestions.puskK_questionUnload
  );

  fb_puskValg(StrAlg:=algoritms.puskV,
   questionEngine:=AlgQuestions.puskV_questionEngine,
    questionMVoff:=AlgQuestions.puskV_questionMVoff
  );

  fb_testdPmgAlg(StrAlg:=algoritms.testdPmg,
   algContinue:=AlgQuestions.testdPmg_algContinue
  );

  fb_testPmsAlg(StrAlg:=algoritms.testPms,
   algContinue:=AlgQuestions.testPms_algContinue
  );

  fb_ApuskAlg(StrAlg:=algoritms.Apusk);

  fb_SemiAutoPuskAlg(StrAlg:=algoritms.SemiAutoPusk,
   cmdRun1ph:=AlgQuestions.SemiAutoPusk_cmdRun1ph,
   cmdRun2ph:=AlgQuestions.SemiAutoPusk_cmdRun2ph,
   cmdRun3ph:=AlgQuestions.SemiAutoPusk_cmdRun3ph
  );
END_FUNCTION_BLOCK

FUNCTION anyDiscretPS : BOOL
  VAR_INPUT
    im : ImConfig;
  END_VAR

  anyDiscretPS:= TRUE;
      (*Im.SingleSignals.BEAO_srabotal.Q                     OR 
      Im.SingleSignals.Vozb_ProboiVentila.Q	 OR
      Im.SingleSignals.Vozb_AsinchHod.Q	           OR
      Im.SingleSignals.NS_ForsingVozbugdenia.Q       OR
      Im.SingleSignals.Vozb_AutoUprVozbuditela_off.Q OR
      Im.SingleSignals.Vozb_KontaktorON.Q*)
END_FUNCTION

FUNCTION UnBlockAllProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  protections.Topornogo_podshipnika_EDT_1.inOpcCommandsDisabled:=FALSE;
  protections.Toporno_ypornogo_podshipnika_EDT_2.inOpcCommandsDisabled:=FALSE;
  protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3.inOpcCommandsDisabled:=FALSE;
  protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4.inOpcCommandsDisabled:=FALSE;
  protections.Topornogo_podshipnika_shesterni_reduktora_T_5.inOpcCommandsDisabled:=FALSE;
  protections.Topornogo_podshipnika_reduktora_HT_6.inOpcCommandsDisabled:=FALSE;
  protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7.inOpcCommandsDisabled:=FALSE;
  protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8.inOpcCommandsDisabled:=FALSE;
  protections.Typornogo_podshipnika_rav_kolodok_HT_9.inOpcCommandsDisabled:=FALSE;
  protections.Typornogo_podshipnika_nerab_kolodok_HT_10.inOpcCommandsDisabled:=FALSE;
  protections.Tgaza_na_vyhode_H.inOpcCommandsDisabled:=FALSE;
  protections.Os_sdvig_nagnetatelja_plus.inOpcCommandsDisabled:=FALSE;
  protections.Os_sdvig_nagnetatelja_minus.inOpcCommandsDisabled:=FALSE;
  protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP.inOpcCommandsDisabled:=FALSE;
  protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP.inOpcCommandsDisabled:=FALSE;
  protections.Pgaza_na_vyhode_nagnetatelia.inOpcCommandsDisabled:=FALSE;
  protections.dPmaslo_gaz.inOpcCommandsDisabled:=FALSE;
  protections.Pmaslo_sm_nizkoe.inOpcCommandsDisabled:=FALSE;
  protections.Pmaslo_sm_vysokoe.inOpcCommandsDisabled:=FALSE;
  protections.Vibro_skorost_OPED_T1.inOpcCommandsDisabled:=FALSE;
  protections.Vibro_skorost_OPED_T2.inOpcCommandsDisabled:=FALSE;
  protections.Vibro_skorost_OYP_kolesa_ED_T3.inOpcCommandsDisabled:=FALSE;
  protections.Vibro_skorost_OP_kolesa_RH_T4.inOpcCommandsDisabled:=FALSE;
  protections.Vibro_skorost_OP_shesterni_RED_T5.inOpcCommandsDisabled:=FALSE;
  protections.Vibro_skorost_OP_shesterni_reduktora_H_T6.inOpcCommandsDisabled:=FALSE;
  protections.dPmaslo_gaz_less100.inOpcCommandsDisabled:=FALSE;
  protections.Reg_vozb_off.inOpcCommandsDisabled:=FALSE;
  protections.Fail_chastotnii_pusk.inOpcCommandsDisabled:=FALSE;
  protections.Off_avar_vikluchatel.inOpcCommandsDisabled:=FALSE;
  protections.AOKC_SHKC.inOpcCommandsDisabled:=FALSE;
  protections.AO_PRU.inOpcCommandsDisabled:=FALSE;
  protections.AO_ot_SHU.inOpcCommandsDisabled:=FALSE;
  protections.mvOff.inOpcCommandsDisabled:=FALSE;
  protections.Kran1_sdvig.inOpcCommandsDisabled:=FALSE;
  protections.Kran2_sdvig.inOpcCommandsDisabled:=FALSE;
END_FUNCTION

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
END_FUNCTION

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
END_FUNCTION_BLOCK

FUNCTION anyProtectionInRemont : BOOL
  VAR_INPUT
    protections : ProtectionsConfig;
  END_VAR

  anyProtectioninRemont:=
  protections.Topornogo_podshipnika_EDT_1.Remont OR
  protections.Toporno_ypornogo_podshipnika_EDT_2.Remont OR
  protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3.remont OR
  protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4.Remont OR
  protections.Topornogo_podshipnika_shesterni_reduktora_T_5.Remont OR
  protections.Topornogo_podshipnika_reduktora_HT_6.Remont OR
  protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7.Remont OR
  protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8.Remont OR
  protections.Typornogo_podshipnika_rav_kolodok_HT_9.Remont OR
  protections.Typornogo_podshipnika_nerab_kolodok_HT_10.Remont OR
  protections.Tgaza_na_vyhode_H.Remont OR
  protections.Os_sdvig_nagnetatelja_plus.Remont OR
  protections.Os_sdvig_nagnetatelja_minus.Remont OR
  protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP.Remont OR
  protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP.Remont OR
  protections.Pgaza_na_vyhode_nagnetatelia.Remont OR
  protections.dPmaslo_gaz.Remont OR
  protections.Pmaslo_sm_nizkoe.Remont OR
  protections.Pmaslo_sm_vysokoe.Remont OR
  protections.Vibro_skorost_OPED_T1.Remont OR
  protections.Vibro_skorost_OPED_T2.Remont OR
  protections.Vibro_skorost_OYP_kolesa_ED_T3.Remont OR
  protections.Vibro_skorost_OP_kolesa_RH_T4.Remont OR
  protections.Vibro_skorost_OP_shesterni_RED_T5.Remont OR
  protections.Vibro_skorost_OP_shesterni_reduktora_H_T6.Remont OR
  protections.dPmaslo_gaz_less100.Remont OR
  protections.Reg_vozb_off.Remont OR
  protections.Fail_chastotnii_pusk.Remont OR
  protections.Off_avar_vikluchatel.Remont OR
  protections.AOKC_SHKC.Remont OR
  protections.AO_PRU.Remont OR
  protections.AO_ot_SHU.Remont OR
  protections.mvOff.Remont OR
  protections.Kran1_sdvig.Remont OR
  protections.Kran2_sdvig.Remont;
END_FUNCTION

FUNCTION runAllProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  runAiProtection(protections.Topornogo_podshipnika_EDT_1);
  runAiProtection(protections.Toporno_ypornogo_podshipnika_EDT_2);
  runAiProtection(protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3);
  runAiProtection(protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4);
  runAiProtection(protections.Topornogo_podshipnika_shesterni_reduktora_T_5);
  runAiProtection(protections.Topornogo_podshipnika_reduktora_HT_6);
  runAiProtection(protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7);
  runAiProtection(protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8);
  runAiProtection(protections.Typornogo_podshipnika_rav_kolodok_HT_9);
  runAiProtection(protections.Typornogo_podshipnika_nerab_kolodok_HT_10);
  runAiProtection(protections.Tgaza_na_vyhode_H);
  runAiProtection(protections.Os_sdvig_nagnetatelja_plus);
  runAiProtection(protections.Os_sdvig_nagnetatelja_minus);
  runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
  runAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
  runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
  runAiProtection(protections.dPmaslo_gaz);
  runAiProtection(protections.Pmaslo_sm_nizkoe);
  runAiProtection(protections.Pmaslo_sm_vysokoe);
  runAiProtection(protections.Vibro_skorost_OPED_T1);
  runAiProtection(protections.Vibro_skorost_OPED_T2);
  runAiProtection(protections.Vibro_skorost_OYP_kolesa_ED_T3);
  runAiProtection(protections.Vibro_skorost_OP_kolesa_RH_T4);
  runAiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5);
  runAiProtection(protections.Vibro_skorost_OP_shesterni_reduktora_H_T6);

  runDiProtection(protections.dPmaslo_gaz_less100);
  runDiProtection(protections.Reg_vozb_off);
  runDiProtection(protections.Fail_chastotnii_pusk);
  runDiProtection(protections.Off_avar_vikluchatel);
  runDiProtection(protections.AOKC_SHKC);
  runDiProtection(protections.AO_PRU);
  runDiProtection(protections.AO_ot_SHU);
  runDiProtection(protections.mvOff);
  runDiProtection(protections.Kran1_sdvig);
  runDiProtection(protections.Kran2_sdvig);
END_FUNCTION

FUNCTION ResetAllSignaling : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  IF protections.Topornogo_podshipnika_EDT_1.Signaling THEN
      resetAiProtection(protections.Topornogo_podshipnika_EDT_1);  END_IF;

  IF protections.Toporno_ypornogo_podshipnika_EDT_2.Signaling THEN
      resetAiProtection(protections.Toporno_ypornogo_podshipnika_EDT_2); END_IF;

  IF protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3.Signaling THEN
      resetAiProtection(protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3); END_IF;

  IF protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4.Signaling THEN
      resetAiProtection(protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4); END_IF;

  IF protections.Topornogo_podshipnika_shesterni_reduktora_T_5.Signaling THEN
      resetAiProtection(protections.Topornogo_podshipnika_shesterni_reduktora_T_5); END_IF;

  IF protections.Topornogo_podshipnika_reduktora_HT_6.Signaling THEN
      resetAiProtection(protections.Topornogo_podshipnika_reduktora_HT_6); END_IF;

  IF protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7.Signaling THEN
      resetAiProtection(protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7); END_IF;

  IF protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8.Signaling THEN
      resetAiProtection(protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8); END_IF;

  IF protections.Typornogo_podshipnika_rav_kolodok_HT_9.Signaling THEN
      resetAiProtection(protections.Typornogo_podshipnika_rav_kolodok_HT_9); END_IF;

  IF protections.Typornogo_podshipnika_nerab_kolodok_HT_10.Signaling THEN
      resetAiProtection(protections.Typornogo_podshipnika_nerab_kolodok_HT_10); END_IF;

  IF protections.Tgaza_na_vyhode_H.Signaling THEN
      resetAiProtection(protections.Tgaza_na_vyhode_H); END_IF;

  IF protections.Os_sdvig_nagnetatelja_plus.Signaling THEN
     resetAiProtection(protections.Os_sdvig_nagnetatelja_plus); END_IF;

  IF protections.Os_sdvig_nagnetatelja_minus.Signaling THEN
      resetAiProtection(protections.Os_sdvig_nagnetatelja_minus); END_IF;

  IF protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP.Signaling THEN
      resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP); END_IF;

  IF protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP.Signaling THEN
      resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP); END_IF;

  IF protections.Pgaza_na_vyhode_nagnetatelia.Signaling THEN
      resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia); END_IF;

  IF protections.dPmaslo_gaz.Signaling THEN
      resetAiProtection(protections.dPmaslo_gaz); END_IF;

  IF protections.Pmaslo_sm_nizkoe.Signaling THEN
      resetAiProtection(protections.Pmaslo_sm_nizkoe); END_IF;

  IF protections.Pmaslo_sm_vysokoe.Signaling THEN
      resetAiProtection(protections.Pmaslo_sm_vysokoe); END_IF;

  IF protections.Vibro_skorost_OPED_T1.Signaling THEN
      resetAiProtection(protections.Vibro_skorost_OPED_T1); END_IF;

  IF protections.Vibro_skorost_OPED_T2.Signaling THEN
      resetAiProtection(protections.Vibro_skorost_OPED_T2); END_IF;

  IF protections.Vibro_skorost_OYP_kolesa_ED_T3.Signaling THEN
      resetAiProtection(protections.Vibro_skorost_OYP_kolesa_ED_T3); END_IF;

  IF protections.Vibro_skorost_OP_kolesa_RH_T4.Signaling THEN
      resetAiProtection(protections.Vibro_skorost_OP_kolesa_RH_T4); END_IF;

  IF protections.Vibro_skorost_OP_shesterni_RED_T5.Signaling THEN
      resetAiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5); END_IF;

  IF protections.Vibro_skorost_OP_shesterni_reduktora_H_T6.Signaling THEN
      resetAiProtection(protections.Vibro_skorost_OP_shesterni_reduktora_H_T6); END_IF;

  IF protections.dPmaslo_gaz_less100.Signaling THEN
      resetDiProtection(protections.dPmaslo_gaz_less100); END_IF;

  IF protections.Reg_vozb_off.Signaling THEN
      resetDiProtection(protections.Reg_vozb_off); END_IF;

  IF protections.Fail_chastotnii_pusk.Signaling THEN
      resetDiProtection(protections.Fail_chastotnii_pusk); END_IF;

  IF protections.Off_avar_vikluchatel.Signaling THEN
      resetDiProtection(protections.Off_avar_vikluchatel); END_IF;

  IF protections.AOKC_SHKC.Signaling THEN
      resetDiProtection(protections.AOKC_SHKC); END_IF;

  IF protections.AO_PRU.Signaling THEN
      resetDiProtection(protections.AO_PRU); END_IF;

  IF protections.AO_ot_SHU.Signaling THEN
      resetDiProtection(protections.AO_ot_SHU); END_IF;

  IF protections.mvOff.Signaling THEN
      resetDiProtection(protections.mvOff); END_IF;

  IF protections.Kran1_sdvig.Signaling THEN
      resetDiProtection(protections.Kran1_sdvig); END_IF;

  IF protections.Kran2_sdvig.Signaling THEN
      resetDiProtection(protections.Kran2_sdvig); END_IF;
END_FUNCTION

FUNCTION autoRunProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  runAiProtection(protections.Topornogo_podshipnika_EDT_1); 

      runAiProtection(protections.Toporno_ypornogo_podshipnika_EDT_2);

      runAiProtection(protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3);

      runAiProtection(protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4);

      runAiProtection(protections.Topornogo_podshipnika_shesterni_reduktora_T_5);

      runAiProtection(protections.Topornogo_podshipnika_reduktora_HT_6);

      runAiProtection(protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7);

      runAiProtection(protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8);

      runAiProtection(protections.Typornogo_podshipnika_rav_kolodok_HT_9);

      runAiProtection(protections.Typornogo_podshipnika_nerab_kolodok_HT_10);

      runAiProtection(protections.Tgaza_na_vyhode_H);

      runAiProtection(protections.Os_sdvig_nagnetatelja_plus);

      runAiProtection(protections.Os_sdvig_nagnetatelja_minus);

      runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);

      runAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);

      runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);

      runAiProtection(protections.dPmaslo_gaz);

      runAiProtection(protections.Pmaslo_sm_nizkoe);

      runAiProtection(protections.Pmaslo_sm_vysokoe);

      runAiProtection(protections.Vibro_skorost_OPED_T1);

      runAiProtection(protections.Vibro_skorost_OPED_T2);    

      runAiProtection(protections.Vibro_skorost_OYP_kolesa_ED_T3);

      runAiProtection(protections.Vibro_skorost_OP_kolesa_RH_T4);

      runAiProtection(protections.Vibro_skorost_OP_shesterni_RED_T5);

      runAiProtection(protections.Vibro_skorost_OP_shesterni_reduktora_H_T6);    


      runDiProtection(protections.dPmaslo_gaz_less100);

      runDiProtection(protections.AO_PRU);

      runDiProtection(protections.Reg_vozb_off);

      runDiProtection(protections.Fail_chastotnii_pusk);

      runDiProtection(protections.AOKC_SHKC);

      runDiProtection(protections.mvOff);

      runDiProtection(protections.AO_ot_SHU);

      runDiProtection(protections.Off_avar_vikluchatel);

      runDiProtection(protections.Kran1_sdvig);

      runDiProtection(protections.Kran2_sdvig);
END_FUNCTION

FUNCTION_BLOCK fb_ProtectionsManager
  VAR
    cmd : BYTE;
  END_VAR
  VAR_IN_OUT
    str_PM : struct_ProtectionsManager;
  END_VAR
  VAR
    lastCmd : BYTE;
    autoRunPriznak : BOOL;
    onInit : BOOL;
  END_VAR
  VAR_EXTERNAL
    protections : ProtectionsConfig;
  END_VAR
  VAR
    timerUnBlock : TON;
    timerAutoRun : TON;
    UnBlockPriznak : BOOL;
  END_VAR

  IF NOT onInit THEN

      autoRunProtections(protections);     
  onInit:=TRUE;
  END_IF;

  str_PM.protectionInRemont:=anyProtectioninRemont(protections);

  cmd := str_PM.inCommand;

  IF cmd <> 0 AND lastCmd <> cmd then
                UnBlockPriznak:=TRUE;
  	CASE BYTE_TO_INT(cmd) OF

  		(*RestartAllSignaling*) 1: 	ResetAllSignaling(protections);
  				          autoRunPriznak:=TRUE;

  	        (*RestartAllProtections*) 2: 	ResetAllProtections(protections);
                                                    autoRunPriznak:=TRUE;

                        (*CheckProtections*)  3: 	RunAllProtections(protections);

  	         (*ResetAllProtections*)  4: 	ResetAllProtections(protections);

  	END_CASE;			

  END_IF;
  lastCmd := cmd;
  timerUnBlock(IN:=UnBlockPriznak, PT:=T#1S);
  timerAutoRun(IN:=autoRunPriznak, PT:=T#500MS);

  IF timerAutoRun.Q THEN autoRunProtections(protections);
  END_IF;

  IF timerUnBlock.Q THEN
  lastCmd:= 0;
  str_PM.inCommand:=0;
  autoRunPriznak:=FALSE;
  UnBlockPriznak:=FALSE;
  END_IF;
END_FUNCTION_BLOCK

PROGRAM program0
  VAR
    SysTime : LREAL;
    preSysTime : LREAL;
    tmpCycle : LREAL;
    preSys_s : ULINT;
    preSys_ns : ULINT;
  END_VAR
  VAR
    systime_ns AT %IL0.10.11 : ULINT;
    systime_s AT %IL0.10.10 : ULINT;
  END_VAR
  VAR_EXTERNAL
    cur_Cycle : REAL;
    gStart_Tmr : REAL;
  END_VAR
  VAR
    Timings : fb_Timings;
    _init : BOOL := TRUE;
    life_count : UINT;
    AI_structs_ini : proc_AI_Init;
    AI_Proc : proc_AI;
    AO_structs_ini : proc_AO_Init;
    AO_Proc : proc_AO;
    DI_structs_ini : proc_DI_Init;
    DI_Proc : proc_DI;
    DO_structs_ini : proc_DO_Init;
    DO_Proc : proc_DO;
    Get_algoritms_OPC : OPC_algoritms_set;
    Set_algoritms_OPC : OPC_algoritms_get;
    IM_structs_ini : proc_IM_Init;
    IM_Proc : proc_IM;
    Protections_structs_ini : proc_Protections_Init;
    Protections_Proc : proc_Protection;
    Algoritms_Proc : proc_algoritms;
    AlgoritmsManager : fb_AlgoritmsManager;
    ProtectionsManager : fb_ProtectionsManager;
  END_VAR
  VAR_EXTERNAL
    algManager : struct_AlgoritmsManager;
    protectManager : struct_ProtectionsManager;
  END_VAR

  (* Обработка времени. *)
  SysTime := ULINT_TO_LREAL(systime_s) + (1.0E-9 * ULINT_TO_LREAL(systime_ns));
  preSysTime := SysTime;
  tmpCycle := ULINT_TO_LREAL(systime_s - preSys_s) + 1.0E-9 * (ULINT_TO_LREAL(systime_ns) - ULINT_TO_LREAL(preSys_ns));
  cur_Cycle := LREAL_TO_REAL(tmpCycle);
  preSys_s := systime_s;
  preSys_ns := systime_ns;
  IF gStart_Tmr < 99999.9 THEN gStart_Tmr := gStart_Tmr + cur_Cycle; END_IF;
  Timings();


  IF  _init (*or external_init_ai *) then           (* Требуется инициализация структур и ФБ. *)
    (* Инициализация аналоговых входов. *)
      AI_structs_ini(init := TRUE);
      AI_Proc((*init := FALSE*));

    (* Инициализация дискретных входов. *)
      DI_structs_ini(init := TRUE);
      DI_Proc((*init := FALSE*));

      (* Инициализация аналоговых выходов. *)
  (*     AO_structs_ini(init := TRUE);
         AO_Proc(init := TRUE);*)

    (* Инициализация дискретных выходов. *)
      DO_structs_ini(init := TRUE);
      DO_Proc((*init := FALSE*));

     (* Инициализация ИМ. *)
      IM_structs_ini(init := TRUE);
      IM_Proc();

     (* Инициализация Защит *)
      Protections_structs_ini(init := TRUE);
      (*Protections_Proc();*)

       (* Стартовая инициализация OPC-тэгов элементами канальных структур. *)
          (*___________________AI______________________________________________________________________________*)
      (*ini_AI_OPC();*)

      _init := FALSE;

    ELSE                         (* Завершена инициализация структур и ФБ. *)


  (* Перенос OPC-тэгов в элементы структур каналов. *)
        (*___________________________________________AI________________________________________________*)
      (*Get_AI_OPC(); *)
       Get_algoritms_OPC();


     (* Пересчёт защит САУ. *)
     ProtectionsManager(protectManager);

       (* Пересчёт алгоритмов САУ. *)
     AlgoritmsManager(algManager);

      (****               Опрос входов.              ****)
          (* Опрос аналоговых входов. *)
      AI_Proc((*init := FALSE*));

          (* Опрос дискретных входов. *)
      DI_Proc((*init := FALSE*));

      (****              Запись выходов.             ****)
          (* Запись аналоговых выходов. *)
  (*    AO_Proc(init := FALSE);*)

       (* Запись дискретных выходов. *)
      DO_Proc((*init := FALSE*));

      (****               Опрос ИМ              ****)
      IM_Proc();

      (****            Опрос Защит              ****)
      Protections_Proc();

      Algoritms_Proc();

  END_IF;


  (* Передача информации на верхний уровень по OPC UA протоколу. *)
    (* Передача состояний каналов AI. *)
  (*Set_AI_OPC();)*
  (* Передача состояний каналов ИМ. *)
  (* Передача состояний защит. *)
  (* Передача состояний алгоритмов. *)
  Set_algoritms_OPC();
END_PROGRAM

FUNCTION_BLOCK fb_DualStateIm
  VAR_INPUT
    statOn : BOOL;
    statOff : BOOL;
  END_VAR
  VAR_IN_OUT
    StrDs : struct_DualStateIm;
  END_VAR
  VAR_INPUT
    statOn_reliability : BOOL;
    statOff_reliability : BOOL;
    inNs : TYPE_ReliableBit;
    inAccident : TYPE_ReliableBit;
    inCommand : WORD;
  END_VAR
  VAR
    _statOn : BOOL;
    _statOff : BOOL;
    getSdvig : BOOL;
    lastOnStatus : BYTE;
    cmd : BYTE;
    source : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusDualInput : TYPE_statusDualInput;
    _commandDualInput : TYPE_commandDualInput;
    _commandErrorTimer : BOOL;
    onInit : BOOL := FALSE;
    resetErrorTimer : BOOL;
    _changWithoutCommand : BOOL;
    errorCMDTimer : TON;
    sdvigReset : TON;
    _errorReset : TON;
  END_VAR
  VAR_IN_OUT
    cmdOn : BOOL;
  END_VAR
  VAR_OUTPUT
    cmdOff : BOOL;
  END_VAR

  IF NOT onInit THEN
  IF StrDs.ISVALIDREF_cmdOn XOR StrDs.ISVALIDREF_cmdOff THEN
  	IF 	StrDs.ISVALIDREF_cmdOn THEN
  		lastCmd:= 2; (*baseCmdOff*) 
  	ELSE
  		lastCmd:= 1; (*baseCmdOn*) 
  	END_IF;
  END_IF;
  onInit:=TRUE;
  END_IF;

  (* ---- Если управление с ВУ заблокировано, то в ИМ передаем команду из алгоритма ---- *)
  IF StrDs.inOpcCommandsDisabled THEN
  	StrDs.inCommand := StrDs.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	StrDs.inCommand := StrDs.inCommand_ARM;
  END_IF;

  (* ---- Формирование состояния механизма ---- *)

  IF (StrDs.ISVALIDREF_statOn) OR (StrDs.ISVALIDREF_statOff) THEN
  	IF (StrDs.ISVALIDREF_statOn) AND (StrDs.ISVALIDREF_statOff) THEN
  	StrDs.reliability:= statOn_reliability AND statOff_reliability;
  		_statOn  := statOn;
  		_statOff := statOff;
  	ELSIF (StrDs.ISVALIDREF_statOn) THEN
                       StrDs.reliability:= statOn_reliability;	
  		_statOn  := statOn;
  		_statOff := NOT statOn; 
  	ELSIF (StrDs.ISVALIDREF_statOff) THEN
  		 StrDs.reliability:= statOff_reliability;	
  		_statOn  := NOT statOff;
  		_statOff :=statOff; 
  	END_IF;

  	IF StrDs.reliability THEN
  		IF _statOn AND NOT _statOff 		THEN 	StrDs.onStatus := _statusDualInput.STATUS_ON;
  		ELSIF _statOff AND NOT _statOn 	THEN 	StrDs.onStatus := _statusDualInput.Status_OFF;
  		ELSIF NOT _statOn AND NOT _statOff 	THEN 	StrDs.onStatus := _statusDualInput.STATUS_TRANSITIONAL;
  		ELSE					StrDs.onStatus := _statusDualInput.STATUS_ERROR;
                      END_IF;

  	ELSE
  		StrDs.onStatus := _statusDualInput.STATUS_NOTDEFINED;

  	END_IF;
  ELSE
  	CASE BYTE_TO_INT(lastCmd) OF	
  		(*baseCmdOn*) 1: StrDs.onStatus  := _statusDualInput.STATUS_ON; 
  		(*baseCmdOff*) 2: StrDs.onStatus  := _statusDualInput.STATUS_OFF;

  	ELSE
  		 StrDs.onStatus := _statusDualInput.STATUS_NOTDEFINED;

  	END_CASE;
  END_IF;

  (* ---- Формирование признака сдвига ---- *)	
  getSdvig := FALSE;
  IF (StrDs.ISVALIDREF_cmdOn OR StrDs.ISVALIDREF_cmdOff) THEN
  	IF NOT (StrDs.CmdOn OR StrDs.CmdOff) THEN
                       IF (lastOnStatus <> StrDs.onStatus AND 
  		(StrDs.onStatus <> _statusDualInput.STATUS_NOTDEFINED AND
                       StrDs.onStatus <> _statusDualInput.STATUS_ERROR)     AND
  		(lastOnStatus <> _statusDualInput.STATUS_NOTDEFINED   AND
                       lastOnStatus <> _statusDualInput.STATUS_ERROR))      
                      THEN
  			getSdvig   := TRUE;
  		END_IF;
  	END_IF;
  END_IF;

  IF getSdvig THEN StrDs.sdvig:= TRUE; END_IF;

  sdvigReset(IN:=StrDs.sdvig, PT:=T#15S);

  IF sdvigReset.Q THEN StrDs.sdvig:=FALSE; END_IF;

  lastOnStatus := StrDs.onStatus;


  StrDs.Accident := inAccident.value AND inAccident.reliability;
  StrDs.Ns := inNs.value AND inNs.reliability;
  StrDs.OpcCommandsDisabled := StrDs.inOpcCommandsDisabled;



  (* ---- Распаковка команды ---- *)
  _sunpackerCommand(command := StrDs.inCommand);
  	cmd := _sunpackerCommand.cmd;
  	source := _sunpackerCommand.source;

  (* ---- Обработка команды ---- *)
  IF cmd <> 0 AND lastCmd <> cmd and (((NOT StrDs.opcCommandsDisabled) AND source > 0) OR source = 0) then
  	CASE BYTE_TO_INT(cmd) OF
  	(*cmd_open*) 1 : 
  			IF  StrDs.ISVALIDREF_cmdOn THEN StrDs.CmdOn := TRUE;
  				IF StrDs.ISVALIDREF_cmdOff THEN StrDs.CmdOff := FALSE; END_IF;
  			ELSIF  StrDs.ISVALIDREF_cmdOff THEN StrDs.CmdOff := FALSE;  END_IF;
  			errorCMDTimer(IN := false);
  			_commandErrorTimer := true;
  			StrDs.lastCmdIsOn := true;
  	(*cmd_close*) 2 : 
  			IF StrDs.ISVALIDREF_cmdOff THEN StrDs.CmdOff := TRUE;
  				IF StrDs.ISVALIDREF_cmdOn THEN StrDs.CmdOn := FALSE; END_IF;
  			ELSIF StrDs.ISVALIDREF_cmdOn THEN StrDs.CmdOn := FALSE; END_IF;
  			errorCMDTimer(IN := false);
  			_commandErrorTimer := true;
  			StrDs.lastCmdIsOn := false;
  	(*cmd_reset*) 3 :    IF StrDs.ISVALIDREF_statOn OR StrDs.ISVALIDREF_statOff THEN
  			StrDs.CmdOn := FALSE;
  			StrDs.CmdOff := FALSE;
                                lastCmd :=0;
  			_commandErrorTimer := false;
  			StrDs.lastCmdIsOn := false;
                                END_IF;
  	END_CASE;	
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	command_error_for_Status := 0;
  END_IF;

  lastCmd := cmd;
  errorCMDTimer(In := _commandErrorTimer, PT :=T#10s);

  (* ---- алгоритм  для команды ВКЛючить ---- *)
  IF (StrDs.onStatus = _statusDualInput.STATUS_ON) and (lastCmd = _commandDualInput.CMD_ON) then
  	IF StrDs.ISVALIDREF_cmdOn AND StrDs.ISVALIDREF_cmdOff then  StrDs.cmdOn := false; END_IF;

  	 errorCMDTimer(In := false); 
  	 _commandErrorTimer := false;
  	 cmd_for_Status := 0;
  	 source_for_Status := 0;
  END_IF;

  (* ---- off ---- *)
  IF (StrDs.onStatus = _statusDualInput.STATUS_OFF) and (lastCmd = _commandDualInput.CMD_OFF) then
  	IF StrDs.ISVALIDREF_cmdOn AND StrDs.ISVALIDREF_cmdOff then  StrDs.cmdOff := false; END_IF;

  	 errorCMDTimer(In := false); 
  	 _commandErrorTimer := false;
  	 cmd_for_Status := 0;
  	 source_for_Status := 0;
  END_IF;

  (* ---- ошибка исполнения команды ---- *)
  if errorCMDTimer.Q and (cmd_for_Status <> 0) then
  	command_error_for_Status :=  cmd_for_Status;
  	_commandErrorTimer := false;
  	StrDs.CmdOn := false;
  	StrDs.CmdOff := false;
  	lastCmd := 0;
  end_if;

  (* ---- сброс ошибки команды ---- *)
  StrDs.CommandFault := command_error_for_Status <> 0;
  _errorReset(IN := command_error_for_Status <> 0, PT := T#15S);
  IF _errorReset.Q THEN
  	cmd_for_Status := 0;
  	source_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF;

  cmdOn := StrDs.cmdOn;
  cmdOff:= StrDs.cmdOff; 

  (* ---- формирование зашифрованного статуса для АРМа ---- *)
  StrDs.status := shl(BYTE_TO_DWORD(source_for_Status), 29) 
  		OR shl(BYTE_TO_DWORD(cmd_for_Status), 26) 
  		OR shl(BYTE_TO_DWORD(command_error_for_Status), 23)
  		OR shl(bool_to_DWORD(StrDs.sdvig), 22)
  		OR shl(bool_to_DWORD(StrDs.OpcCommandsDisabled), 21)
  		OR shl(BOOL_TO_DWORD(StrDs.Ns), 4) 
                  	OR shl(BOOL_TO_DWORD(StrDs.Accident ),3)
  		OR BYTE_TO_DWORD(StrDs.onStatus);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AnalogParametr
  VAR_IN_OUT
    StrAP : struct_AnalogParametr;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    cmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
    secondTact : BOOL;
    inp : LREAL;
    rABS : LREAL;
  END_VAR

  IF NOT secondTact THEN
  	StrAP.Value := StrAP.currentValue;
  	secondTact := true;
  END_IF;

  StrAP.OpcCommandsDisabled := StrAP.inOpcCommandsDisabled;

   (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
  IF StrAP.inOpcCommandsDisabled THEN
  	StrAP.inCommand := StrAP.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	StrAP.inCommand := StrAP.inCommand_ARM;
  END_IF;                                                                                         

  _sunpackerCommand(command := StrAP.inCommand);
  	source := _sunpackerCommand.source;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND StrAP.newValue <> StrAP.Value and (((NOT StrAP.opcCommandsDisabled) AND source > 0) OR source = 0) then
  	CASE BYTE_TO_INT(cmd) OF
  	(*cmd_ChangeValue*) 1 :
  				StrAP.isValidValue := TRUE;
  				IF StrAP.minVal_ISVALIDREF AND StrAP.isValidValue THEN
  					IF StrAP.newValue < StrAP.minVal THEN
  						StrAP.isValidValue := FALSE;
  					END_IF;
  				END_IF;
  				IF StrAP.maxVal_ISVALIDREF AND StrAP.isValidValue THEN
  					IF StrAP.newValue > StrAP.maxVal THEN
  						StrAP.isValidValue := FALSE;
  					END_IF;
  				END_IF;
  				IF StrAP.maxStep_ISVALIDREF AND StrAP.isValidValue  THEN
  					inp := StrAP.Value - StrAP.newValue;
  					IF inp < 0.0 THEN
  						rABS := -inp;
  					ELSE
  						rABS := inp;
  					END_IF;
  					IF rABS > StrAP.maxStep THEN
  						StrAP.isValidValue := FALSE;
  					END_IF;
  				END_IF;
  				IF StrAP.isValidValue THEN
  					StrAP.Value := StrAP.newValue;
  					command_error_for_Status := 0;
  				ELSE
  					command_error_for_Status := cmd;
  				END_IF;
  	END_CASE;	
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	resetCmdTimer(IN := FALSE);
  	resetCmdTimerPriznak := TRUE;
  END_IF;

  resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
  IF resetCmdTimer.Q THEN
  	resetCmdTimerPriznak := FALSE;
  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF; 

  StrAP.status := SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAP.OpcCommandsDisabled ), 21);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_BaseProtection
  VAR_INPUT
    inSignaling : BOOL;
    inTag : BYTE;
    inRunOnStart : BOOL;
    inCanRun : BOOL;
    inHasError : BOOL;
    inEnded : BOOL;
    inOpcCommandsDisabled : BOOL;
    inCommand : WORD;
  END_VAR
  VAR_OUTPUT
    Tag : BYTE;
    status : DWORD;
    CanRun : BOOL;
    OpcCommandsDisabled : BOOL;
    isRunning : BOOL;
    HasError : BOOL;
    isEnded : BOOL;
    Remont : BOOL;
    Check : BOOL;
    Signaling : BOOL;
    SignalingTP : BOOL;
    RunOnStart : BOOL;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    _ProtectionTags : TYPE_ProtectionTags;
    _signalingTp : TOF;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
    signalinTimer : TON;
    runOnStart_Trig : R_TRIG;
  END_VAR

  Tag := inTag;
  RunOnStart := inRunOnStart;

  CanRun := inCanRun;
  hasError := inHasError;
  isEnded := inEnded;

  OpcCommandsDisabled := inOpcCommandsDisabled;

  _sunpackerCommand(command := inCommand);
  	source := _sunpackerCommand.source;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND lastCmd <> cmd AND (((NOT opcCommandsDisabled) AND source > 0) OR source = 0) then	
  	CASE BYTE_TO_INT(cmd) OF
  		(*cmdRun*) 1: 	IF CanRun AND NOT Remont THEN
  					isEnded := FALSE;
  					hasError 	:= FALSE;
  					isRunning := TRUE;
  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					isRunning := FALSE;
  					isEnded := FALSE;
  					hasError 	:= FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
  		(*cmdReset*) 2: 	isRunning := FALSE;
  				isEnded := FALSE;
  				hasError 	:= FALSE;
  				inSignaling := FALSE;
  				Check := FALSE;
  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;	
  	(*cmd_setRemont*) 4 :	Remont := TRUE;
  				isRunning := FALSE;

  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
  	(*cmd_resetRemont*) 5 : 	IF inSignaling THEN
  					cmd_for_Status := 0;
  					source_for_Status := 0;
  					command_error_for_Status := cmd;
  				ELSE
  					Remont := FALSE;
  					isRunning := TRUE;

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				END_IF;
  	(*cmd_setCheck*) 6 : 	Check := TRUE;

  				cmd_for_Status := cmd;
  				source_for_Status := source;
  				command_error_for_Status := 0;
  	END_CASE;			
  	resetCmdTimer(IN := false);
  	resetCmdTimerPriznak := TRUE;
  END_IF;
  lastCmd := cmd;


  resetCmdTimer(IN := resetCmdTimerPriznak);
  IF resetCmdTimer.Q THEN
  	resetCmdTimerPriznak := FALSE;
  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF; 

  IF isRunning THEN
  	Signaling := inSignaling;
  	SignalingTP := _signalingTp.Q;
  ELSE
  	Signaling := 0;
  	SignalingTP := 0;
  END_IF;

  IF NOT Remont AND NOT Check THEN
  	_signalingTp(in := Signaling, PT := T#1s);
  ELSE
  	_signalingTp(in := FALSE);
  END_IF;


  status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(Signaling), 16)
  			OR SHL(BOOL_TO_DWORD(RunOnStart ), 15)
  			OR SHL(BOOL_TO_DWORD(remont), 6)
  			OR SHL(BOOL_TO_DWORD(Check), 5)
  			OR SHL(BOOL_TO_DWORD(hasError), 4)
  			OR SHL(BOOL_TO_DWORD(SignalingTP), 3)
  			OR SHL(BOOL_TO_DWORD(CanRun), 2)
  			OR SHL(BOOL_TO_DWORD(isEnded), 1)
  			OR BOOL_TO_DWORD(isRunning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_BaseAlgoritm
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    cmd : BYTE;
    lastCmd : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
  END_VAR

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.hasError := StrAlg.inHasError OR (command_error_for_Status <> 0);
  StrAlg.isEnded := StrAlg.inEnded;

  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
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
  					StrAlg.hasError 	:= FALSE;

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


  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_DiscretParametr
  VAR_IN_OUT
    StrDP : struct_DiscretParametr;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    cmd : BYTE;
    parametr : BYTE;
    lastParametr : BYTE;
    source_for_Status : BYTE;
    cmd_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    resetCmdTimerPriznak : BOOL;
    secondTact : BOOL;
  END_VAR

  IF NOT secondTact THEN
  	StrDP.Value := StrDP.currentValue;
  	secondTact := true;
  END_IF;

  StrDP.OpcCommandsDisabled := StrDP.inOpcCommandsDisabled;

  (* ---- Если управление с ВУ заблокировано, то передаем команду из алгоритма ---- *)
  IF StrDP.inOpcCommandsDisabled THEN
  	StrDP.inCommand := StrDP.inCommand_Alg;
  ELSE (* иначе передаем команду с АРМа*)
  	StrDP.inCommand := StrDP.inCommand_ARM;
  END_IF;                                                                                           

  _sunpackerCommand(command := StrDP.inCommand);
  	source := _sunpackerCommand.source;
            parametr := _sunpackerCommand.parametr;
  	cmd := _sunpackerCommand.cmd;

  IF NOT StrDP.inOpcCommandsDisabled THEN         
  StrDP.newValue:= BYTE_TO_UINT(parametr);
  END_IF;

  IF cmd <> 0 AND StrDP.Value <> StrDP.newValue AND (((NOT StrDP.opcCommandsDisabled) AND source > 0) OR source = 0) then
  	CASE BYTE_TO_INT(cmd) OF
  	(*cmd_ChangeValue*) 1 : 
                                    StrDP.Value := StrDP.newValue;
                                    StrDP.opcCommandsDisabled:=FALSE;				
  	END_CASE;	
  	source_for_Status := source;
  	cmd_for_Status := cmd;
  	resetCmdTimer(IN := FALSE);
  	resetCmdTimerPriznak := TRUE;
  END_IF;

  lastParametr := parametr;

  StrDP.status := SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrDP.OpcCommandsDisabled ), 21)
                                OR SHL(UINT_TO_DWORD(StrDP.Value), 5);


  resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
  IF resetCmdTimer.Q THEN
  	resetCmdTimerPriznak := FALSE;
  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
  END_IF;
END_FUNCTION_BLOCK

FUNCTION remontAllProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR
  VAR CONSTANT
    cmdRemont : WORD := 4;
  END_VAR

  protections.Topornogo_podshipnika_EDT_1.inCommand_Alg:=cmdRemont;
  protections.Toporno_ypornogo_podshipnika_EDT_2.inCommand_Alg:=cmdRemont; 
  protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3.inCommand_Alg:=cmdRemont; 
  protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4.inCommand_Alg:=cmdRemont;
  protections.Topornogo_podshipnika_shesterni_reduktora_T_5.inCommand_Alg:=cmdRemont;
  protections.Topornogo_podshipnika_reduktora_HT_6.inCommand_Alg:=cmdRemont;
  protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7.inCommand_Alg:=cmdRemont;
  protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8.inCommand_Alg:=cmdRemont;
  protections.Typornogo_podshipnika_rav_kolodok_HT_9.inCommand_Alg:=cmdRemont;
  protections.Typornogo_podshipnika_nerab_kolodok_HT_10.inCommand_Alg:=cmdRemont;
  protections.Tgaza_na_vyhode_H.inCommand_Alg:=cmdRemont;
  protections.Os_sdvig_nagnetatelja_plus.inCommand_Alg:=cmdRemont;
  protections.Os_sdvig_nagnetatelja_minus.inCommand_Alg:=cmdRemont;
  protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP.inCommand_Alg:=cmdRemont;
  protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP.inCommand_Alg:=cmdRemont;
  protections.Pgaza_na_vyhode_nagnetatelia.inCommand_Alg:=cmdRemont;
  protections.dPmaslo_gaz.inCommand_Alg:=cmdRemont;
  protections.Pmaslo_sm_nizkoe.inCommand_Alg:=cmdRemont;
  protections.Pmaslo_sm_vysokoe.inCommand_Alg:=cmdRemont;
  protections.Vibro_skorost_OPED_T1.inCommand_Alg:=cmdRemont;
  protections.Vibro_skorost_OPED_T2.inCommand_Alg:=cmdRemont;
  protections.Vibro_skorost_OYP_kolesa_ED_T3.inCommand_Alg:=cmdRemont;
  protections.Vibro_skorost_OP_kolesa_RH_T4.inCommand_Alg:=cmdRemont;
  protections.Vibro_skorost_OP_shesterni_RED_T5.inCommand_Alg:=cmdRemont;
  protections.Vibro_skorost_OP_shesterni_reduktora_H_T6.inCommand_Alg:=cmdRemont;
  protections.dPmaslo_gaz_less100.inCommand_Alg:=cmdRemont;
  protections.Reg_vozb_off.inCommand_Alg:=cmdRemont;
  protections.Fail_chastotnii_pusk.inCommand_Alg:=cmdRemont;
  protections.Off_avar_vikluchatel.inCommand_Alg:=cmdRemont;
  protections.AOKC_SHKC.inCommand_Alg:=cmdRemont;
  protections.AO_PRU.inCommand_Alg:=cmdRemont;
  protections.AO_ot_SHU.inCommand_Alg:=cmdRemont;
  protections.mvOff.inCommand_Alg:=cmdRemont;
  protections.Kran1_sdvig.inCommand_Alg:=cmdRemont;
  protections.Kran2_sdvig.inCommand_Alg:=cmdRemont;
END_FUNCTION

FUNCTION BlockAllProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  protections.Topornogo_podshipnika_EDT_1.inOpcCommandsDisabled:=TRUE;
  protections.Toporno_ypornogo_podshipnika_EDT_2.inOpcCommandsDisabled:=TRUE;
  protections.Toporno_ypornogo_podshipnika_kolesa_red_EDT_3.inOpcCommandsDisabled:=TRUE;
  protections.Toporno_ypornogo_podshipnika_kolesa_red_HT_4.inOpcCommandsDisabled:=TRUE;
  protections.Topornogo_podshipnika_shesterni_reduktora_T_5.inOpcCommandsDisabled:=TRUE;
  protections.Topornogo_podshipnika_reduktora_HT_6.inOpcCommandsDisabled:=TRUE;
  protections.TOporno_ypornogo_podshipnika_Nagnetatelja_T_7.inOpcCommandsDisabled:=TRUE;
  protections.Topporno_ypornogo_podshipnika_svobodnogo_konca_NT_8.inOpcCommandsDisabled:=TRUE;
  protections.Typornogo_podshipnika_rav_kolodok_HT_9.inOpcCommandsDisabled:=TRUE;
  protections.Typornogo_podshipnika_nerab_kolodok_HT_10.inOpcCommandsDisabled:=TRUE;
  protections.Tgaza_na_vyhode_H.inOpcCommandsDisabled:=TRUE;
  protections.Os_sdvig_nagnetatelja_plus.inOpcCommandsDisabled:=TRUE;
  protections.Os_sdvig_nagnetatelja_minus.inOpcCommandsDisabled:=TRUE;
  protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP.inOpcCommandsDisabled:=TRUE;
  protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP.inOpcCommandsDisabled:=TRUE;
  protections.Pgaza_na_vyhode_nagnetatelia.inOpcCommandsDisabled:=TRUE;
  protections.dPmaslo_gaz.inOpcCommandsDisabled:=TRUE;
  protections.Pmaslo_sm_nizkoe.inOpcCommandsDisabled:=TRUE;
  protections.Pmaslo_sm_vysokoe.inOpcCommandsDisabled:=TRUE;
  protections.Vibro_skorost_OPED_T1.inOpcCommandsDisabled:=TRUE;
  protections.Vibro_skorost_OPED_T2.inOpcCommandsDisabled:=TRUE;
  protections.Vibro_skorost_OYP_kolesa_ED_T3.inOpcCommandsDisabled:=TRUE;
  protections.Vibro_skorost_OP_kolesa_RH_T4.inOpcCommandsDisabled:=TRUE;
  protections.Vibro_skorost_OP_shesterni_RED_T5.inOpcCommandsDisabled:=TRUE;
  protections.Vibro_skorost_OP_shesterni_reduktora_H_T6.inOpcCommandsDisabled:=TRUE;
  protections.dPmaslo_gaz_less100.inOpcCommandsDisabled:=TRUE;
  protections.Reg_vozb_off.inOpcCommandsDisabled:=TRUE;
  protections.Fail_chastotnii_pusk.inOpcCommandsDisabled:=TRUE;
  protections.Off_avar_vikluchatel.inOpcCommandsDisabled:=TRUE;
  protections.AOKC_SHKC.inOpcCommandsDisabled:=TRUE;
  protections.AO_PRU.inOpcCommandsDisabled:=TRUE;
  protections.AO_ot_SHU.inOpcCommandsDisabled:=TRUE;
  protections.mvOff.inOpcCommandsDisabled:=TRUE;
  protections.Kran1_sdvig.inOpcCommandsDisabled:=TRUE;
  protections.Kran2_sdvig.inOpcCommandsDisabled:=TRUE;
END_FUNCTION

FUNCTION_BLOCK ph_SingleOutput
  VAR_IN_OUT
    im : struct_singleOutput;
  END_VAR
  VAR_INPUT
    WhatCanIdo : BOOL;
    PhaseNumber : UINT;
  END_VAR
  VAR_IN_OUT
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR
    reset_Trig : R_TRIG;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;
            StrPh.run:=FALSE;

  	IF (WhatCanIdo) THEN
  	runIfNotRunningSO(im);
            ELSE
  	resetIfRunningSO(im);
            END_IF;
  END_IF;


  IF StrPh.start AND NOT StrPh.top THEN
  StrPh.top := (im.Q = WhatCanIdo);		
  END_IF;

  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
  	StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.run:=FALSE;
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION_BLOCK ph_SingleSignal
  VAR_IN_OUT
    im : struct_singleSignal;
  END_VAR
  VAR_INPUT
    expectedValue : BOOL := TRUE;
    PhaseNumber : UINT;
  END_VAR
  VAR_IN_OUT
    StrPh : struct_PhaseAlgoritm;
  END_VAR
  VAR
    reset_Trig : R_TRIG;
  END_VAR

  IF StrPh.run AND NOT StrPh.start THEN
  	StrPh.start := TRUE;
  	StrPh.top := FALSE;
  	StrPh.error := FALSE;
            StrPh.run:=FALSE;
  END_IF;


  IF StrPh.start AND NOT StrPh.top THEN
  StrPh.error:= NOT Im.reliability;
  StrPh.top := (Im.Q = expectedValue) AND (Im.reliability);		
  END_IF;


  reset_Trig(CLK := StrPh.reset);
  IF reset_Trig.Q THEN
  	StrPh.start := FALSE;
  	StrPh.error := FALSE;
  	StrPh.top := FALSE;
            StrPh.run:=FALSE;
            StrPh.reset:=FALSE;
  END_IF;


  StrPh.startStatus := SHL(BOOL_TO_DWORD(StrPh.start), PhaseNumber);
  StrPh.errorStatus := SHL(BOOL_TO_DWORD(StrPh.error), PhaseNumber);
  StrPh.topStatus := SHL(BOOL_TO_DWORD(StrPh.top), PhaseNumber);
END_FUNCTION_BLOCK

FUNCTION NapryageniaOK : BOOL
  VAR_INPUT
    im : ImConfig;
  END_VAR

  NapryageniaOK:=
  NOT (Im.SingleSignals.NS_G1_G2.Q
  OR Im.SingleSignals.NS_G10_G11.Q
  OR Im.SingleSignals.NS_G13_G14.Q
  OR Im.SingleSignals.NS_G15_G16.Q
  OR Im.SingleSignals.NS_G17.Q
  OR Im.SingleSignals.NS_G18_G19.Q
  OR Im.SingleSignals.NS_G3_G4.Q
  OR Im.SingleSignals.NS_G5_G6.Q
  OR Im.SingleSignals.NS_G7_G8.Q
  OR im.SingleSignals.QF1_on.Q
  OR Im.SingleSignals.QF2_on.Q
  OR Im.SingleSignals.QF23_on.Q
  OR Im.SingleSignals.QF4_QF5_on.Q
  OR Im.SingleSignals.QF6_QF7_on.Q
  OR Im.SingleSignals.QF8_QF9_on.Q
  OR Im.SingleSignals.QF10_QF11_on.Q
  OR im.SingleSignals.QF12_QF13_on.Q
  OR im.SingleSignals.QF22_on.Q
  OR Im.SingleSignals.QF14_QF15_on.Q);
END_FUNCTION

FUNCTION discretNS : BOOL
  VAR_INPUT
    di : DiConfig;
  END_VAR

  discretNS:=  ((di.di_0.reliability <> 255)
                OR (di.di_1.reliability <> 255)
                OR (di.di_2.reliability <> 255)
                OR (di.di_3.reliability <> 255)
                OR (di.di_4.reliability <> 255)
                OR (di.di_5.reliability <> 255)
                OR (di.di_6.reliability <> 255)
                OR (di.di_7.reliability <> 255)
                OR (di.di_8.reliability <> 255)
                OR (di.di_9.reliability <> 255)
                OR (di.di_10.reliability <> 255)
                OR (di.di_11.reliability <> 255)
                OR (di.di_12.reliability <> 255)
                OR (di.di_13.reliability <> 255)
                OR (di.di_14.reliability <> 255));
               (* OR (di.di_15.reliability <> 255)); *)
END_FUNCTION

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
END_FUNCTION

FUNCTION_BLOCK ExtNarabotka
  VAR
    saveInterval : TIME := T#30S;
    narabotka : UDINT;
    timer : RTC;
    saveTimer : TON;
  END_VAR
  VAR_IN_OUT
    retain_narabotka : UDINT;
  END_VAR
  VAR
    initialized : BOOL;
  END_VAR
  VAR_INPUT
    started : BOOL;
    reset : BOOL;
  END_VAR

  IF NOT initialized THEN	
  	narabotka:=retain_narabotka;
  	initialized:=TRUE;
  END_IF;

  timer();

  IF timer.Q THEN
  	narabotka:=DT_TO_UDINT( timer.CDT);

  END_IF;
  saveTimer(IN:=TRUE, PT:=saveInterval);
  IF saveTimer.Q THEN
  	retain_narabotka:=narabotka;
  	saveTimer(IN:=FALSE);
  END_IF;



  IF started THEN
  	IF NOT timer.Q THEN
  		timer.PDT:=UDINT_TO_DT(narabotka);
                      timer.IN:=TRUE;
  	END_IF;
  ELSE
  	IF timer.Q THEN
  		timer.IN:=FALSE;
                      saveTimer.IN:=FALSE;
  	END_IF;
  END_IF;

  IF reset THEN
  timer.PDT:=UINT_TO_DT(0);
  IF timer.IN THEN
  	timer(IN:=FALSE);
  	timer(IN:=TRUE);
  END_IF;
  narabotka:=0;
  reset:=FALSE;
  END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK Pusk_first_faza1
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    timer240 : struct_PhaseAlgoritm;
    pmsMore50 : struct_PhaseAlgoritm;
    pnsOn : struct_PhaseAlgoritm;
    pmsMore300 : struct_PhaseAlgoritm;
    Protection_Pms : struct_PhaseAlgoritm;
    Error_Alg : struct_PhaseAlgoritm;
    fb_timer240 : fb_ph_Timer;
    fb_PnmMore50 : fb_ph_algoritm;
    fb_PnsOn : fb_ph_Switch;
    fb_PmsMore300 : fb_ph_algoritm;
    fb_Protection_Pms : fb_ph_algoritm;
    fb_Error_Alg : fb_ph_algoritm;
    _sunpackerCommand : fb_sunpackerCommand;
    _PhaseAlgoritmAction : TYPE_PhaseAlgoritmAction;
    _statusDualInput : TYPE_statusDualInput;
    _Answers : TYPE_Answers;
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
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    IM : ImConfig;
    protections : ProtectionsConfig;
    _statusAi : TYPE_StatusAi;
    ai : AiConfig;
  END_VAR

  IF NOT onInit THEN

           fb_timer240(phaseNumber:=0, delay:=T#240S);
           fb_PnmMore50(phaseNumber:=1);
           fb_PnsOn(phaseNumber:=2, act:=_on);
           fb_PmsMore300(phaseNumber:=3);
           fb_Protection_Pms(phaseNumber:=4);              
           fb_Error_Alg(phaseNumber:=5);

  onInit:=TRUE;
  END_IF;

  fb_timer240(StrPh:=timer240);
  fb_PnmMore50(StrPh:=pmsMore50);
  fb_PnsOn(StrPh:=pnsOn, IM := Im.pns);
  fb_PmsMore300(StrPh:=pmsMore300);
  fb_Protection_Pms(StrPh:=Protection_Pms);              
  fb_Error_Alg(StrPh:=Error_Alg);                               

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

      StrAlg.hasError := pnsOn.error;

      (* не взведены защиты - запуск таймера *)
      IF NOT Protection_Pms.top THEN
  	runPhase(timer240); 
      END_IF;

      (* не начался запуск пнс - запуск пнс *)
      IF NOT pnsOn.start THEN
  	runPhase(pnsOn);
      END_IF;

      (* запуск пнс завершен - запус защит *)
      IF pnsOn.top THEN
           runPhase(pmsMore50);
           runPhase(pmsMore300);
      END_IF;   


      (* не завершился запуск защиты 50 - проверка давления 50 *)
      IF pmsMore50.start AND (NOT pmsMore50.top) THEN
  	IF ai.Pmaslo_sm_nizkoe.interval = _statusAi.NORMAL AND ai.Pmaslo_sm_nizkoe.value > 50.0  THEN
  	   pmsMore50.top := TRUE;
            END_IF;
      END_IF;


      (* не завершился запуск защиты 300 - проверка давления 300 *)
      IF  pmsMore300.start AND (NOT pmsMore300.top) THEN
  	IF ai.Pmaslo_sm_vysokoe.interval = _statusAi.NORMAL AND ai.Pmaslo_sm_vysokoe.value > 300.0  THEN
  	    pmsMore300.top := TRUE;
  	END_IF;
      END_IF;

      (* давление было проверено - запуск защит *)     
      IF pmsMore50.top AND pmsMore300.top THEN
          runPhase(Protection_Pms);
      END_IF;

      (* запуск защит не завршен - запуск защит *)
      IF Protection_Pms.start AND (NOT Protection_Pms.top) THEN
  	runAiProtection(protections.Pmaslo_sm_nizkoe);
            runAiProtection(protections.Pmaslo_sm_vysokoe);
            Protection_Pms.top := TRUE;
      END_IF;

      (* таймер завершился до запуска защит - ошибка *)
      IF timer240.top THEN 
          Error_Alg.ERROR := TRUE; (*не понятное куда его сунуть и нужен ли он*)
      ELSE
          Error_Alg.ERROR := FALSE;	
      END_IF;

      (* защиты выствалены до завршения таймера - сброс таймера *)
      IF Protection_Pms.top THEN
  	resetPhase(timer240);
      END_IF;

      StrAlg.isEnded:= pnsOn.Top AND Protection_Pms.Top (*Как будто нужно таймер *);
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
                                                    algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA1;

                                                    runPhase(pnsOn);
                                                    resetAiProtection(protections.Pmaslo_sm_nizkoe);                                                  
                                                    resetAiProtection(protections.Pmaslo_sm_vysokoe);

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrAlg.isRuning := FALSE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
  		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
  				StrAlg.isEnded := FALSE;
  				StrAlg.hasError 	:= FALSE;

                                           (*****************       OnReset       *****************)
                                          waitReset(IN:=FALSE);
                                          StrAlg.inCanRun:=FALSE;

                                          resetPhase(timer240);
                                          resetPhase(pmsMore50);
                                          resetPhase(pnsOn);
                                          resetPhase(pmsMore300);
                                          resetPhase(Protection_Pms);
                                          resetPhase(Error_Alg);

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  StrAlg.Start:= timer240.startStatus
              OR pmsMore50.startStatus
              OR pnsOn.startStatus
              OR Error_Alg.startStatus
              OR pmsMore300.startStatus
              OR Protection_Pms.startStatus;


  StrAlg.Error := timer240.errorStatus
              OR pmsMore50.errorStatus
              OR pnsOn.errorStatus
              OR Error_Alg.errorStatus
              OR pmsMore300.errorStatus
              OR Protection_Pms.errorStatus;          

  StrAlg.Top := timer240.topStatus
              OR pmsMore50.topStatus
              OR pnsOn.topStatus
              OR Error_Alg.topStatus
              OR pmsMore300.topStatus
              OR Protection_Pms.topStatus;  

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK Pusk_first_faza2
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    nu1On : struct_PhaseAlgoritm;
    nu2On : struct_PhaseAlgoritm;
    timer240 : struct_PhaseAlgoritm;
    dPmg_more100 : struct_PhaseAlgoritm;
    Auto_NU1 : struct_PhaseAlgoritm;
    Error_Alg : struct_PhaseAlgoritm;
    fb_timer240 : fb_ph_Timer;
    fb_nu1On : fb_ph_OilPump;
    fb_nu2On : fb_ph_OilPump;
    fb_dPmg_more100 : fb_ph_algoritm;
    fb_Auto_NU1 : fb_ph_algoritm;
    fb_Error_Alg : fb_ph_algoritm;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusDualInput : TYPE_statusDualInput;
    _Answers : TYPE_Answers;
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
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    IM : ImConfig;
    protections : ProtectionsConfig;
    algoritms : AlgoritmsConfig;
    ai : AiConfig;
    statusAi : TYPE_StatusAi;
  END_VAR

  IF NOT onInit THEN         
           fb_nu1On(phaseNumber:=1, act:=_on );
           fb_nu2On(phaseNumber:=2, act:=_on);
           fb_dPmg_more100(phaseNumber:=3);
           fb_Error_Alg(phaseNumber:=4);
           fb_Auto_NU1(phaseNumber:=5);       
  onInit:=TRUE;
  END_IF;

  fb_timer240(StrPh:=timer240);
  fb_nu1On(StrPh:= nu1On,Im:=Im.nu1);
  fb_nu2On(StrPh:= nu2On,Im:=Im.nu2);
  fb_dPmg_more100(StrPh:=dPmg_more100);
  fb_Auto_NU1(StrPh:=Auto_NU1, alg:=algoritms.autoNu); (*komu ono nujno to blat *)
  fb_Error_Alg(StrPh:=Error_Alg);             

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

      StrAlg.hasError := nu1On.error AND nu2On.error AND Auto_NU1.error;

      (* защита не возведена - запускаем таймер *)
      IF NOT dPmg_more100.top THEN
  	runPhase(timer240);
      END_IF;

      (* носос 1 не включен - включаем насос*)
      IF NOT nu1On.start THEN
  	runPhase(nu1On);
      END_IF;

      (* носос 2 не включен - включаем насос*)
      IF NOT nu2On.start THEN
  	runPhase(nu2On);
      END_IF;   

      (* один из насосов включен - включение защиты *)
      IF ((IM.nu1.onStatus = _statusDualInput.status_on OR IM.nu2.onStatus = _statusDualInput.status_on) AND  (nu1On.start OR nu2On.Start)) THEN
  	runPhase(dPmg_more100); 
  	nu1On.top:=TRUE;
            nu2On.top:=TRUE;
      END_IF;

      (* фаза защиты активна - включение защиты *)
      IF dPmg_more100.start AND NOT dPmg_more100.top THEN
  	IF NOT IM.SingleSignals.dP_maslo_gaz_Less100.Q AND IM.SingleSignals.dP_maslo_gaz_Less100.status = 1 AND 
  	ai.dPmaslo_gaz.interval >= statusAi.normal AND ai.dPmaslo_gaz.value > 150.0 THEN
                dPmg_more100.top:=TRUE;
  	END_IF;
      END_IF;

      (*таймер завершился до возведения защит - ошибка *)
      IF timer240.top THEN 
  	Error_Alg.error := TRUE;
      ELSE
  	Error_Alg.error := FALSE;	
      END_IF;

      IF dPmg_more100.top AND nu1On.top AND nu2On.top THEN
  	Auto_NU1.top:=TRUE;
  	runAiProtection(protections.dPmaslo_gaz);
            runDiProtection(protections.dPmaslo_gaz_less100);
  	resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
  	resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
  	algoritms.autoNu.CanRun:=TRUE;
  	(*algoritms.autoNu.run ();ниче не ясно*)
  	resetPhase(timer240);
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
                                                    algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA2;

                                                    runPhase(timer240);
                                                    runPhase(nu1On);
                                                    runPhase(nu2On);
                                                    resetAiProtection(protections.dPmaslo_gaz);                                                  
                                                    resetDiProtection(protections.dPmaslo_gaz_less100);

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrAlg.isRuning := FALSE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
  		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
  				StrAlg.isEnded := FALSE;
  				StrAlg.hasError 	:= FALSE;

                                           (*****************       OnReset       *****************)
                                          waitReset(IN:=FALSE);
                                          StrAlg.inCanRun:=FALSE;

                                          resetPhase(nu1On);
                                          resetPhase(nu2On);
                                          resetPhase(timer240);
                                          resetPhase(dPmg_more100);
                                          resetPhase(Auto_NU1);
                                          resetPhase(Error_Alg);

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  StrAlg.Start:= timer240.startStatus
              OR nu1On.startStatus
              OR nu2On.startStatus
              OR dPmg_more100.startStatus
              OR Auto_NU1.startStatus
              OR Error_Alg.startStatus;


  StrAlg.Error := timer240.errorStatus
              OR nu1On.errorStatus
              OR nu2On.errorStatus
              OR dPmg_more100.errorStatus
              OR Auto_NU1.errorStatus
              OR Error_Alg.errorStatus;          

  StrAlg.Top := timer240.topStatus
              OR nu1On.topStatus
              OR nu2On.topStatus
              OR dPmg_more100.topStatus
              OR Auto_NU1.topStatus
              OR Error_Alg.topStatus;  

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK Pusk_second_faza_chastotny
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    timer120 : struct_PhaseAlgoritm;
    timer5 : struct_PhaseAlgoritm;
    Shup : struct_PhaseAlgoritm;
    Net_Chast : struct_PhaseAlgoritm;
    mvOn : struct_PhaseAlgoritm;
    pGNSmore04 : struct_PhaseAlgoritm;
    gotov_K_zagruzke : struct_PhaseAlgoritm;
    dPmg_Top : struct_PhaseAlgoritm;
    AutoPNS_Start : struct_PhaseAlgoritm;
    fb_timer120 : fb_ph_Timer;
    fb_timer5 : fb_ph_Timer;
    fb_Shup : fb_ph_OilPump;
    fb_Net_Chast : fb_ph_algoritm;
    fb_mvOn : fb_ph_SectionSwitch;
    fb_pGNSmore04 : fb_ph_algoritm;
    fb_gotov_K_zagruzke : fb_ph_algoritm;
    fb_dPmg_Top : fb_ph_algoritm;
    fb_AutoPNS_Start : fb_ph_algoritm;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusDualInput : TYPE_statusDualInput;
    _Answers : TYPE_Answers;
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
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    IM : ImConfig;
    protections : ProtectionsConfig;
    algoritms : AlgoritmsConfig;
    ai : AiConfig;
    statusAi : TYPE_StatusAi;
  END_VAR

  IF NOT onInit THEN         
           fb_timer120(phaseNumber:=1, delay:=T#120S);
           fb_timer5(phaseNumber:=2, delay:=T#5S);
           fb_Shup(phaseNumber:=3);
           fb_Net_Chast(phaseNumber:=4);
           fb_mvOn(phaseNumber:=5,  act:=_on); 
           fb_pGNSmore04(phaseNumber:=6); 
           fb_gotov_K_zagruzke(phaseNumber:=7); 
           fb_dPmg_Top(phaseNumber:=8); 
           fb_AutoPNS_Start(phaseNumber:=9, act:=_run, waitCompletion:=FALSE);       
  onInit:=TRUE;
  END_IF;

  fb_timer120(StrPh:=timer120);
  fb_timer5(StrPh:= timer5);
  fb_Shup(StrPh:= Shup);
  fb_Net_Chast(StrPh:=Net_Chast);
  fb_mvOn(StrPh:=mvOn, Im:=IM.mv);
  fb_pGNSmore04(StrPh:=pGNSmore04); 
  fb_gotov_K_zagruzke(StrPh:=gotov_K_zagruzke);  
  fb_dPmg_Top(StrPh:=dPmg_Top);              
  fb_AutoPNS_Start(StrPh:=AutoPNS_Start, alg:=algoritms.autoPns);  

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN
      (* мв не включен - запуск таймера *)
      IF NOT mvOn.top THEN
  	runphase(timer120);
      END_IF;
      (* частотный пуск не совершен - запуск таймера *)
      IF NOT Net_Chast.top THEN
  	runphase(timer5);
      END_IF;

      (* ШУП не запущен - запуск *)
      IF NOT Shup.start THEN
  	runphase(Shup);
      END_IF;

      (* ШУП не завершился - запуск ШУПб МВ *)
      IF NOT Shup.top AND Shup.start THEN
  	runIfNotRunningSO(IM.SingleOutputs.Pusk_SHUP);
  	Shup.top:=TRUE;
  	runphase(mvOn);
      END_IF;

      (* частотный пуск не запущен - запуск *)
      IF NOT Net_Chast.start THEN
  	runphase(Net_Chast);
      END_IF;

      (* частотный пуск не завершился - запуск *)
      IF Net_Chast.start AND (NOT Net_Chast.top) THEN
  	IF (NOT IM.SingleSignals.Chastotny_pusk.Q) AND (IM.SingleSignals.Chastotny_pusk.status = 1) THEN
  		Net_Chast.top:=TRUE;
  		resetPhase(timer5);
  	END_IF;
      END_IF;

      (* таймер не истек и мв не включен - вовзедение защиты *)
      IF (NOT timer120.top) AND (NOT mvOn.top) THEN
  	runDiProtection(protections.Fail_chastotnii_pusk);
      ELSE
  	resetDiProtection(protections.Fail_chastotnii_pusk);
      END_IF;

      (* мв не завершился - включение мв *)
      IF mvOn.start AND NOT mvOn.top THEN
  	IF IM.mv.onStatus = _statusDualInput.STATUS_ON THEN
                mvOn.top:=TRUE;
  	END_IF;
      END_IF;

      (* мв завершился - что-то делаем *)
      IF mvOn.top THEN 
  	IF NOT pGNSmore04.start (*AND (algManager.mode = ModeGpa.MODE_PUSKPP_Ch OR algManager.mode = ModeGpa.MODE_PUSKAP_Ch)какой режим *) THEN
  		runphase(pGNSmore04); 
  	END_IF;
           (* IF NOT autoAVOM_canrun_flag THEN
                algoritms.AutoAvom.CanRun:=TRUE;
  	    autoAVOM_canrun_flag:=TRUE; kto ti
  	END_IF;*)
  	resetPhase(timer120);
  	runphase(gotov_K_zagruzke);

            IF NOT dPmg_Top.start (* AND ((algManager.mode = modegpa.MODE_PUSKAP_Ch) OR (algManager.mode = modegpa.MODE_PUSKPP_Ch))*) THEN
                runphase(dPmg_Top);
  	END_IF;

            runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
  	runDiProtection(protections.Off_avar_vikluchatel);
  	runDiProtection(protections.Reg_vozb_off);
      END_IF;


      IF dPmg_Top.start AND NOT dPmg_Top.top THEN
  	IF NOT IM.SingleSignals.dP_maslo_gaz_Less100.Q AND IM.SingleSignals.dP_maslo_gaz_Less100.status = 1 AND ai.dPmaslo_gaz.value > 150.0 THEN 
  		dPmg_Top.top:=TRUE;
  		runAiProtection(protections.dPmaslo_gaz);
  		runDiProtection(protections.dPmaslo_gaz_less100);
  		resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
  		resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
  		algoritms.autoNu.CanRun:=TRUE;
  		(*algoritms.autoNu.run(); кого чего, ничего не понимаю *)
  	END_IF;
      END_IF;

      IF pGNSmore04.start AND NOT pGNSmore04.top THEN 
  	IF ai.Pmasla_posle_GNS.interval (*почему интервал, если есть статус *) >= statusAi.NORMAL AND ai.Pmasla_posle_GNS.value > 400.0 THEN
  	  	pGNSmore04.top:=TRUE; 
  	END_IF;
      END_IF;

      IF (pGNSmore04.top AND gotov_K_zagruzke.top AND dPmg_Top.top )(*AND (algManager.mode = modegpa.MODE_PUSKAP_Ch OR (algManager.mode = modegpa.MODE_PUSKPP_Ch) *)OR 
  	(gotov_K_zagruzke.top) (*AND (algManager.mode = modegpa.MODE_PUSKV_Ch OR algManager.mode = modegpa.MODE_I))*) AND NOT AutoPNS_Start.top  THEN 
  	algoritms.AutoPns.CanRun :=TRUE;
  	(*algoritms.AutoPns;*)
  	AutoPNS_Start.top:=TRUE;
      END_IF;

      IF (NOT Net_Chast.top AND timer5.top) OR (timer120.top AND NOT mvOn.top) THEN
  	algoritms.ao.CanRun:=TRUE;
  	(*algoritms.ao.run ();*)
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
                                                    algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA2;

                                                    runPhase(timer120);
                                                    runPhase(timer5);
                                                    runPhase(Shup);
                                                    resetAiProtection(protections.dPmaslo_gaz);                                                  
                                                    resetDiProtection(protections.dPmaslo_gaz_less100);

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrAlg.isRuning := FALSE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
  		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
  				StrAlg.isEnded := FALSE;
  				StrAlg.hasError 	:= FALSE;

                                           (*****************       OnReset       *****************)
                                          waitReset(IN:=FALSE);
                                          StrAlg.inCanRun:=FALSE;

                                          resetPhase(timer5);
                                          resetPhase(Shup);
                                          resetPhase(timer120);
                                          resetPhase(Net_Chast);
                                          resetPhase(mvOn);
                                          resetPhase(pGNSmore04);
                                          resetPhase(gotov_K_zagruzke);
                                          resetPhase(dPmg_Top);
                                          resetPhase(AutoPNS_Start);

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  StrAlg.Start:= timer120.startStatus
              OR timer5.startStatus
              OR Shup.startStatus
              OR Net_Chast.startStatus
              OR mvOn.startStatus
              OR pGNSmore04.startStatus
              OR gotov_K_zagruzke.startStatus
              OR dPmg_Top.startStatus
              OR AutoPNS_Start.startStatus;


  StrAlg.Error := timer120.errorStatus
              OR timer5.errorStatus
              OR Shup.errorStatus
              OR Net_Chast.errorStatus
              OR mvOn.errorStatus
              OR pGNSmore04.errorStatus
              OR gotov_K_zagruzke.errorStatus
              OR dPmg_Top.errorStatus
              OR AutoPNS_Start.errorStatus;          

  StrAlg.Top := timer120.topStatus
              OR timer5.topStatus
              OR Shup.topStatus
              OR Net_Chast.topStatus
              OR mvOn.topStatus
              OR gotov_K_zagruzke.topStatus
              OR dPmg_Top.topStatus
              OR AutoPNS_Start.topStatus
              OR pGNSmore04.topStatus;  

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK Pusk_second_faza_reactor
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    timer25 : struct_PhaseAlgoritm;
    timer3 : struct_PhaseAlgoritm;
    mvOn : struct_PhaseAlgoritm;
    pGNSmore04 : struct_PhaseAlgoritm;
    gotov_K_zagruzke : struct_PhaseAlgoritm;
    dPmg_Top : struct_PhaseAlgoritm;
    Mv_Error : struct_PhaseAlgoritm;
    AutoPNS_Start : struct_PhaseAlgoritm;
    fb_timer25 : fb_ph_Timer;
    fb_timer3 : fb_ph_Timer;
    fb_Mv_Error : fb_ph_algoritm;
    fb_mvOn : fb_ph_SectionSwitch;
    fb_pGNSmore04 : fb_ph_algoritm;
    fb_gotov_K_zagruzke : fb_ph_algoritm;
    fb_dPmg_Top : fb_ph_algoritm;
    fb_AutoPNS_Start : fb_ph_algoritm;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusDualInput : TYPE_statusDualInput;
    _Answers : TYPE_Answers;
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
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    IM : ImConfig;
    protections : ProtectionsConfig;
    algoritms : AlgoritmsConfig;
    ai : AiConfig;
    statusAi : TYPE_StatusAi;
  END_VAR

  IF NOT onInit THEN         
           fb_timer25(phaseNumber:=1, delay:=T#25S);
           fb_timer3(phaseNumber:=2, delay:=T#3S);
           fb_mvOn(phaseNumber:=3, act:=_on);
           fb_pGNSmore04(phaseNumber:=4);
           fb_gotov_K_zagruzke(phaseNumber:=5); 
           fb_dPmg_Top(phaseNumber:=6); 
           fb_Mv_Error(phaseNumber:=7); 
           fb_AutoPNS_start(phaseNumber:=8, act:=_run, waitCompletion:=FALSE); 

  onInit:=TRUE;
  END_IF;

  fb_timer25(StrPh:=timer25);
  fb_timer3(StrPh:= timer3);
  fb_mvOn(StrPh:= mvOn, Im:=IM.mv);
  fb_pGNSmore04(StrPh:=pGNSmore04);
  fb_gotov_K_zagruzke(StrPh:=gotov_K_zagruzke);
  fb_dPmg_Top(StrPh:=dPmg_Top); 
  fb_Mv_Error(StrPh:=Mv_Error);  
  fb_AutoPNS_start(StrPh:=AutoPNS_start, alg:=algoritms.autoPns);              

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;
  IF StrAlg.isRuning THEN
      (* если мв не завершен - включаем таймер *)
      IF NOT mvOn.top THEN
          runPhase(timer25); 
      END_IF;

      (* если мв не заврешен - включаем таймер *)
      IF NOT mvOn.top THEN
          runPhase(timer3); 
      END_IF;

      (* мв не запущен - запускаем мв *)
      IF NOT mvOn.start THEN
          runPhase(mvOn);
      END_IF;

      (* мв завершен *)
      IF mvOn.top  THEN 
      (*если проверка пгнс не включена - включаем *)
          IF NOT pGNSmore04.start (*AND ((algManager.mode = modegpa.MODE_PUSKAP_R) OR (algManager.mode = modegpa.MODE_PUSKPP_R))*) THEN
              runPhase(pGNSmore04); 
          END_IF;

          (*kakoito flag, hz zachem on 
          IF NOT autoAVOM_canrun_flag THEN
              algoritms.S_AutoAVOM.CanRun:=TRUE;
              autoAVOM_canrun_flag:=TRUE;
          END_IF;*)
          resetPhase(timer3);
          resetPhase(timer25);
          Mv_Error.error := FALSE;
          runPhase(gotov_K_zagruzke);
          IF NOT dPmg_Top.start (*AND ((algManager.mode = modegpa.MODE_PUSKAP_R) OR (algManager.mode = modegpa.MODE_PUSKPP_R))*) THEN
              runPhase(dPmg_Top);
          END_IF;

          runDiProtection(protections.mvOff); 
          runDiProtection(protections.Off_avar_vikluchatel);
          runDiProtection(protections.Reg_vozb_off);
          ELSIF NOT mvOn.top AND timer3.top THEN
  		Mv_Error.error := TRUE;
      END_IF;

      IF	dPmg_Top.start AND NOT dPmg_Top.top THEN
  	    IF	NOT IM.SingleSignals.dP_maslo_gaz_Less100.Q AND IM.SingleSignals.dP_maslo_gaz_Less100.status = 1 AND ai.dPmaslo_gaz.value > 150.0	THEN
  		    dPmg_Top.top:=TRUE;
  		    runAiProtection(protections.dPmaslo_gaz);
  		    runDiProtection(protections.dPmaslo_gaz_less100);
  		    resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
  		    resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
  		    (*algoritms.autoNu_2.CanRun:=TRUE;
  		    algoritms.autoNu_2.run (); не понимаю*)
  	    END_IF;
      END_IF;

      IF	pGNSmore04.start AND NOT pGNSmore04.top THEN 
  	    IF 	ai.Pmasla_posle_GNS.interval	>=statusAi.NORMAL AND ai.Pmasla_posle_GNS.value	 > 400.0 THEN
  	  	    pGNSmore04.top:=TRUE; 
  	    END_IF;
      END_IF;

      IF	pGNSmore04.top AND gotov_K_zagruzke.top AND dPmg_Top.top (*AND algManager.mode = modegpa.MODE_PUSKAP_R) OR (algManager.mode = modegpa.MODE_PUSKPP_R)))*) OR 
  	    gotov_K_zagruzke.top (*AND ((algManager.mode = modegpa.MODE_PUSKV_R) OR (algManager.mode = modegpa.MODE_I))))*) AND NOT AutoPNS_start.top  THEN 
  	    algoritms.AutoPns.CanRun :=TRUE;
  	   (*algoritms.AutoPNS_Start.run();*)
  	    AutoPNS_start.top:=TRUE;
      END_IF;
      IF	timer25.top AND Mv_Error.error THEN
  	algoritms.ao.CanRun:=TRUE;
  	(*algoritms.ao.run ();*)
      END_IF;

      (*StrAlg.isEnded:= avom1cmdOff.top AND avom2cmdOff.top;*)
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
                                                    algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA2;

                                                    (*runPhase(timer120);
                                                    runPhase(timer5);
                                                    runPhase(Shup);
                                                    resetAiProtection(protections.dPmaslo_gaz);                                                  
                                                    resetDiProtection(protections.dPmaslo_gaz_less100);*)

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrAlg.isRuning := FALSE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
  		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
  				StrAlg.isEnded := FALSE;
  				StrAlg.hasError 	:= FALSE;

                                           (*****************       OnReset       *****************)
                                          waitReset(IN:=FALSE);
                                          StrAlg.inCanRun:=FALSE;

                                          (*resetPhase(timer5);
                                          resetPhase(Shup);
                                          resetPhase(timer120);
                                          resetPhase(Net_Chast);
                                          resetPhase(mvOn);
                                          resetPhase(pGNSmore04);
                                          resetPhase(gotov_K_zagruzke);
                                          resetPhase(dPmg_Top);
                                          resetPhase(AutoPNS_Start);*)

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  StrAlg.Start:= timer25.errorStatus
              OR timer3.errorStatus
              OR mvOn.errorStatus
              OR pGNSmore04.errorStatus
              OR gotov_K_zagruzke.errorStatus
              OR dPmg_Top.errorStatus
              OR Mv_Error.errorStatus
              OR AutoPNS_Start.errorStatus;






  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK Pusk_third_faza
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    timer480 : struct_PhaseAlgoritm;
    kran4Open : struct_PhaseAlgoritm;
    waitAfterKran4 : struct_PhaseAlgoritm;
    kran5Close : struct_PhaseAlgoritm;
    kran3bOpen : struct_PhaseAlgoritm;
    dP_kr1less100 : struct_PhaseAlgoritm;
    Pvh_vyhMore5 : struct_PhaseAlgoritm;
    kran1Open : struct_PhaseAlgoritm;
    kran2Open : struct_PhaseAlgoritm;
    kran3Open : struct_PhaseAlgoritm;
    kran3bClose : struct_PhaseAlgoritm;
    Err_ALG : struct_PhaseAlgoritm;
    fb_timer480 : fb_ph_Timer;
    fb_kran4Open : fb_ph_Kran;
    fb_waitAfterKran4 : fb_ph_Timer;
    fb_kran5Close : fb_ph_Kran;
    fb_kran3bOpen : fb_ph_Kran;
    fb_dP_kr1less100 : fb_ph_algoritm;
    fb_Pvh_vyhMore5 : fb_ph_algoritm;
    fb_kran1Open : fb_ph_Kran;
    fb_kran2Open : fb_ph_Kran;
    fb_kran3Open : fb_ph_Kran;
    fb_kran3bClose : fb_ph_Kran;
    fb_Err_ALG : fb_ph_algoritm;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusDualInput : TYPE_statusDualInput;
    _Answers : TYPE_Answers;
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
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
    IM : ImConfig;
    protections : ProtectionsConfig;
    algoritms : AlgoritmsConfig;
    ai : AiConfig;
    statusAi : TYPE_StatusAi;
  END_VAR

  IF NOT onInit THEN         
           fb_timer480(phaseNumber:=1, delay:=T#480S);
           fb_kran4Open(phaseNumber:=2, act:=_on);
           fb_waitAfterKran4(phaseNumber:=3, delay:=T#10S);
           fb_kran5Close(phaseNumber:=4, act:=_off);
           fb_kran3bOpen(phaseNumber:=5, act:=_on); 
           fb_dP_kr1less100(phaseNumber:=6); 
           fb_Pvh_vyhMore5(phaseNumber:=7); 
           fb_kran1Open(phaseNumber:=8, act:=_on); 
           fb_kran2Open(phaseNumber:=9, act:=_on);       
           fb_kran3Open(phaseNumber:=10, act:=_on);
           fb_kran3bClose(phaseNumber:=11, act:=_off);
           fb_Err_ALG(phaseNumber:=12);
  onInit:=TRUE;
  END_IF;

  fb_timer480(StrPh:=timer480);
  fb_kran4Open(StrPh:= kran4Open, Im:=Im.kran4);
  fb_waitAfterKran4(StrPh:= waitAfterKran4);
  fb_kran5Close(StrPh:=kran5Close, Im:=Im.kran5);
  fb_kran3bOpen(StrPh:=kran3bOpen, Im:=Im.kran3b);
  fb_dP_kr1less100(StrPh:=dP_kr1less100); 
  fb_Pvh_vyhMore5(StrPh:=Pvh_vyhMore5);  
  fb_kran1Open(StrPh:=kran1Open, Im:=Im.kran1);              
  fb_kran2Open(StrPh:=kran2Open, Im:=Im.kran2);  
  fb_kran3Open(StrPh:=kran3Open, Im:=Im.kran3);  
  fb_kran3bClose(StrPh:=kran3bClose, Im:=Im.kran3b);  
  fb_Err_ALG(StrPh:=Err_ALG); 

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;


  IF StrAlg.isRuning THEN
      (* запуск таймера *)
      IF NOT (kran3bClose.top) THEN
  	    runPhase(timer480);
      END_IF;

      (*если кран1 не открыт - октрыть кран 4*)
      IF	NOT kran1Open.top (*AND IM.kran4._cmdreset.IN = FALSE*)  THEN
  	    runIfNotRunningSO(IM.SingleOutputs.Kr4_open_from_alg);
  	    runPhase(kran4Open);
      END_IF;
      IF	kran4Open.start AND NOT kran4Open.top THEN
  	    IF	IM.kran4.onStatus = _statusDualInput.STATUS_ON THEN
  		    kran4Open.top:=TRUE;
  	    END_IF;
      END_IF;

      (* продувка крана *)
      IF kran4Open.top THEN 
          runPhase(waitAfterKran4);
      END_IF;

      (* кран продулся - закрытие кран 5*)
      IF waitAfterKran4.top THEN
  	    runPhase(kran5Close);
      END_IF;

      (* кран 5 закрыт - открытие крана 3б проверка перепада давление*)
      IF	kran5Close.top THEN
  	    runPhase(kran3bOpen);
  	    runPhase(dP_kr1less100); 
  	    runPhase(Pvh_vyhMore5);
      END_IF;

      (* проверка давления крана *)
      IF	Pvh_vyhMore5.start AND NOT Pvh_vyhMore5.top THEN 
  	    IF	(ai.Pgaza_na_vhode_nagnetatelia.interval >=statusAi.NORMAL) AND (ai.Pgaza_na_vhode_nagnetatelia.value	 >= 4.0) AND 
  		    (ai.Pgaza_na_vyhode_nagnetatelia.interval >=statusAi.NORMAL) AND (ai.Pgaza_na_vyhode_nagnetatelia.value	 >= 4.0) THEN
  		        Pvh_vyhMore5.top := TRUE;
      		    runAiProtection(protections.Pgaza_na_vyhode_nagnetatelia);
  	    END_IF;
      END_IF;

      (* проверка открытия крана 3б *)
      IF	kran3bOpen.start AND NOT kran3bOpen.top THEN
  	    IF	IM.kran3b.onStatus=_statusDualInput.STATUS_ON THEN
  		    kran3bOpen.top :=TRUE;	
  	    END_IF;
      END_IF;
      IF	kran3bOpen.top AND	kran5Close.top AND dP_kr1less100.top AND Pvh_vyhMore5.top THEN
  	    runPhase(kran1Open);
  	    runPhase(kran2Open);    
  	    runPhase(kran3Open);
  	    (*Smazka_1_2:=TRUE; нет такого *)
      END_IF;
      IF	kran1Open.top THEN
  	    resetIfRunningSO(IM.SingleOutputs.Kr4_open_from_alg);
  	    (*ystavki.Block_kr4_alg.setValue (0);что такое уставки*)
      END_IF;

      (* закрытие крана 3бис *)
      IF kran1Open.top AND kran2Open.top AND kran3Open.top THEN 
  	    runPhase(kran3bClose); 
      END_IF;
      IF 	kran3bClose.top THEN
  	    Err_ALG.error :=FALSE;
  	    resetPhase(timer480);
      ELSIF NOT kran3bClose.top AND timer480.top THEN
  		Err_ALG.error :=TRUE;
      END_IF;
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
                                                    algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA2;

                                                    (*runPhase(timer120);
                                                    runPhase(timer5);
                                                    runPhase(Shup);
                                                    resetAiProtection(protections.dPmaslo_gaz);                                                  
                                                    resetDiProtection(protections.dPmaslo_gaz_less100);*)

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrAlg.isRuning := FALSE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
  		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
  				StrAlg.isEnded := FALSE;
  				StrAlg.hasError 	:= FALSE;

                                           (*****************       OnReset       *****************)
                                          waitReset(IN:=FALSE);
                                          StrAlg.inCanRun:=FALSE;

                                          (*resetPhase(timer5);
                                          resetPhase(Shup);
                                          resetPhase(timer120);
                                          resetPhase(Net_Chast);
                                          resetPhase(mvOn);
                                          resetPhase(pGNSmore04);
                                          resetPhase(gotov_K_zagruzke);
                                          resetPhase(dPmg_Top);
                                          resetPhase(AutoPNS_Start);*)

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  StrAlg.Start:= timer480.startStatus
              OR kran4Open.startStatus
              OR waitAfterKran4.startStatus
              OR kran5Close.startStatus
              OR kran3bOpen.startStatus
              OR dP_kr1less100.startStatus
              OR Pvh_vyhMore5.startStatus
              OR kran1Open.startStatus
              OR kran2Open.startStatus
              OR kran3Open.startStatus
              OR kran3bClose.startStatus
              OR Err_ALG.startStatus;


  StrAlg.Error := timer480.errorStatus
              OR kran4Open.errorStatus
              OR waitAfterKran4.errorStatus
              OR kran5Close.errorStatus
              OR kran3bOpen.errorStatus
              OR dP_kr1less100.errorStatus
              OR Pvh_vyhMore5.errorStatus
              OR kran1Open.errorStatus
              OR kran2Open.errorStatus
              OR kran3Open.errorStatus
              OR kran3bClose.errorStatus
              OR Err_ALG.errorStatus;                 

  StrAlg.Top := timer480.topStatus
              OR kran4Open.topStatus
              OR waitAfterKran4.topStatus
              OR kran5Close.topStatus
              OR kran3bOpen.topStatus
              OR dP_kr1less100.topStatus
              OR Pvh_vyhMore5.topStatus
              OR kran1Open.topStatus
              OR kran2Open.topStatus
              OR kran3Open.topStatus
              OR kran3bClose.topStatus
              OR Err_ALG.topStatus;  

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK Prov_dP_mg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    nu1Off : struct_PhaseAlgoritm;
    nu2Off : struct_PhaseAlgoritm;
    pnsOff : struct_PhaseAlgoritm;
    timer120 : struct_PhaseAlgoritm;
    dPmg_less_100 : struct_PhaseAlgoritm;
    nu1On : struct_PhaseAlgoritm;
    nu2On : struct_PhaseAlgoritm;
    pnsOn : struct_PhaseAlgoritm;
    Error_Alg : struct_PhaseAlgoritm;
    dPmg_more_100 : struct_PhaseAlgoritm;
    fb_nu1Off : fb_ph_OilPump;
    fb_nu2Off : fb_ph_OilPump;
    fb_pnsOff : fb_ph_Switch;
    fb_timer120 : fb_ph_Timer;
    fb_dPmg_less_100 : fb_ph_algoritm;
    fb_nu1On : fb_ph_OilPump;
    fb_nu2On : fb_ph_OilPump;
    fb_pnsOn : fb_ph_Switch;
    fb_Error_Alg : fb_ph_algoritm;
    fb_dPmg_more_100 : fb_ph_algoritm;
    onInit : BOOL;
  END_VAR
  VAR_EXTERNAL
    Im : ImConfig;
    ai : AiConfig;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    cmd : BYTE;
    _statusDualInput : TYPE_statusDualInput;
    lastCmd : BYTE;
    _Answers : TYPE_Answers;
  END_VAR
  VAR_EXTERNAL
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
  END_VAR
  VAR
    cmd_for_Status : BYTE;
    source_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    waitReset : TON;
    resetCmdTimerPriznak : BOOL;
  END_VAR

  IF NOT onInit THEN      
      fb_nu1Off(phaseNumber:=1, act:=_off);
      fb_nu2Off(phaseNumber:=2, act:=_off);
      fb_pnsOff(phaseNumber:=3, act:=_off);
      fb_timer120(phaseNumber:=4, delay:=T#120S);
      fb_dPmg_less_100(phaseNumber:=5);
      fb_nu1On(phaseNumber:=6, act:=_on);
      fb_nu2On(phaseNumber:=7, act:=_on);
      fb_pnsOn(phaseNumber:=8, act:=_on);
      fb_Error_Alg(phaseNumber:=9);
      fb_dPmg_more_100(phaseNumber:=10);
      onInit:=TRUE;
  END_IF;


  fb_nu1Off(StrPh:=nu1Off, Im:=Im.nu1);
  fb_nu2Off(StrPh:=nu2Off, Im:=Im.nu2);
  fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
  fb_timer120(StrPh:=timer120);
  fb_dPmg_less_100(StrPh:=dPmg_less_100);
  fb_nu1On(StrPh:=nu1On, Im:=Im.nu1);
  fb_nu2On(StrPh:=nu2On, Im:=Im.nu2);
  fb_pnsOn(StrPh:=pnsOn, Im:=Im.pns);
  fb_Error_Alg(StrPh:=Error_Alg);
  fb_dPmg_more_100(StrPh:=dPmg_more_100);

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;


      IF StrAlg.isRuning THEN
      (* kto takoi ask 
          IF	NOT nuOff.start THEN
  	    NU_OFF_Ask.ask ();
      END_IF;*)

      (*
      IF	(nu_OFF_Ask.answer=Answers.ANS_YES) THEN
  	    runPhase(nu1Off);
  	    runPhase(nu2Off);
          runPhase(pnsOff);
  	    NU_OFF_Ask.reset ();
  	    runPhase(timer120);
      END_IF;*)

      (*насосы выключены - запуск проверки *)
      IF	nu1Off.top AND nu2Off.top THEN
  	    runPhase(dPmg_less_100);
      END_IF;

      (*проверка перепада маслогаз по аналогу и дискрету*)
      IF	dPmg_less_100.start AND NOT dPmg_less_100.top THEN
          IF 	Im.SingleSignals.dP_maslo_gaz_Less100.Q AND ai.dPmaslo_gaz.value < 150.0 THEN
  	  	    dPmg_less_100.top:=TRUE;
  		    runPhase(nu1On);
              runPhase(nu2On);
              runPhase(pnsOn);
  	    END_IF;
      END_IF;


      IF	Im.nu1.onStatus = _statusDualInput.STATUS_ON OR Im.nu2.onStatus = _statusDualInput.STATUS_ON  AND nu1On.start  AND nu2On.start AND NOT nu1On.top AND NOT nu2On.top THEN
  	    nu1On.top := TRUE;
          nu2On.top := TRUE;
      END_IF;

      (*ошибка завершения по таймеру*)
      IF	timer120.top THEN 
  	    Error_Alg.ERROR := TRUE;
      ELSE
  	    Error_Alg.ERROR := FALSE;	
      END_IF;

      (*ыва*)
      IF	nu1On.top AND nu2On.top AND pnsOn.top THEN
  	    runPhase(dPmg_more_100);
      END_IF;

      (**)
      IF	dPmg_more_100.start AND NOT dPmg_more_100.top (*AND NOT algoritms.autoNu_1.flag1 OR algoritms.autoNu_1.flag2*) THEN 
  	    IF 	NOT Im.SingleSignals.dP_maslo_gaz_Less100.Q AND Im.SingleSignals.dP_maslo_gaz_Less100.status = 1 AND  ai.dPmaslo_gaz.value > 150.0 THEN
      		dPmg_more_100.top :=TRUE;
  		    resetPhase(timer120);
  	    END_IF;
      END_IF;
  END_IF;

  _sunpackerCommand(command := StrAlg.inCommand);
  	source := _sunpackerCommand.source;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrAlg.opcCommandsDisabled) AND source > 0) OR source = 0) then	
  	CASE BYTE_TO_INT(cmd) OF
  		(*cm dRun*) 1: 	IF (StrAlg.CanRun) THEN
  					StrAlg.isRuning := TRUE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;
  					(*****************       OnRun       *****************)
                                                    algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA2;

                                                    (*runPhase(timer120);
                                                    runPhase(timer5);
                                                    runPhase(Shup);
                                                    resetAiProtection(protections.dPmaslo_gaz);                                                  
                                                    resetDiProtection(protections.dPmaslo_gaz_less100);*)

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrAlg.isRuning := FALSE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
  		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
  				StrAlg.isEnded := FALSE;
  				StrAlg.hasError 	:= FALSE;

                                           (*****************       OnReset       *****************)
                                          waitReset(IN:=FALSE);
                                          StrAlg.inCanRun:=FALSE;

                                          (*resetPhase(timer5);
                                          resetPhase(Shup);
                                          resetPhase(timer120);
                                          resetPhase(Net_Chast);
                                          resetPhase(mvOn);
                                          resetPhase(pGNSmore04);
                                          resetPhase(gotov_K_zagruzke);
                                          resetPhase(dPmg_Top);
                                          resetPhase(AutoPNS_Start);*)

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  StrAlg.Start:= nu1Off.startStatus
              OR nu2Off.startStatus
              OR pnsOff.startStatus
              OR timer120.startStatus
              OR dPmg_less_100.startStatus
              OR nu1On.startStatus
              OR nu2On.startStatus
              OR pnsOn.startStatus;


  StrAlg.Top := nu1Off.topStatus
              OR nu2Off.topStatus
              OR pnsOff.topStatus
              OR timer120.topStatus
              OR dPmg_less_100.topStatus
              OR nu1On.topStatus
              OR nu2On.topStatus
              OR pnsOn.topStatus;                   

  StrAlg.Error := nu1Off.errorStatus
              OR nu2Off.errorStatus
              OR pnsOff.errorStatus
              OR timer120.errorStatus
              OR dPmg_less_100.errorStatus
              OR nu1On.errorStatus
              OR nu2On.errorStatus
              OR pnsOn.errorStatus;

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK Prov_PMS
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    pnsOff : struct_PhaseAlgoritm;
    timer120 : struct_PhaseAlgoritm;
    Pms_less_25 : struct_PhaseAlgoritm;
    Pms_less_250 : struct_PhaseAlgoritm;
    Error_Alg : struct_PhaseAlgoritm;
    fb_Pms_less_25 : fb_ph_algoritm;
    fb_Pms_less_250 : fb_ph_algoritm;
    fb_pnsOff : fb_ph_Switch;
    fb_timer120 : fb_ph_Timer;
    fb_Error_Alg : fb_ph_algoritm;
    onInit : BOOL;
  END_VAR
  VAR_EXTERNAL
    Im : ImConfig;
    ai : AiConfig;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    cmd : BYTE;
    _statusDualInput : TYPE_statusDualInput;
    lastCmd : BYTE;
    _Answers : TYPE_Answers;
  END_VAR
  VAR_EXTERNAL
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
  END_VAR
  VAR
    cmd_for_Status : BYTE;
    source_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    waitReset : TON;
    resetCmdTimerPriznak : BOOL;
    _statusAi : TYPE_StatusAi;
  END_VAR

  IF NOT onInit THEN      
      fb_pnsOff(phaseNumber:=1, act:=_off);
      fb_timer120(phaseNumber:=2, delay:=T#120S);
      fb_Pms_less_25(phaseNumber:=3);
      fb_Pms_less_250(phaseNumber:=4);
      fb_Error_Alg(phaseNumber:=5);
      onInit:=TRUE;
  END_IF;

  fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
  fb_timer120(StrPh:=timer120);
  fb_Pms_less_25(StrPh:=Pms_less_25);
  fb_Pms_less_250(StrPh:=Pms_less_250);
  fb_Error_Alg(StrPh:=Error_Alg);


  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN
     (*IF NOT pnsOff.start THEN
  	    PNS_OFF_Ask.ask ();
      END_IF;
      IF	(PNS_OFF_Ask.answer=Answers.ANS_YES) THEN
  	    runPhase(pnsOff);
          PNS_OFF_Ask.reset ();
  	    IF NOT (Pms_less_250.top AND Pms_less_25.top) THEN
  	    	runPhase(timer120);
  	    END_IF;
      END_IF;*)

      (*запуск проверок давления*)
      IF	pnsOff.top  THEN 
          runPhase(Pms_less_25);
  	    runPhase(Pms_less_250);
      END_IF;

      (*проверка давления масла низкое*)
      IF	Pms_less_25.start AND NOT Pms_less_25.top THEN 
  	    IF 	ai.Pmaslo_sm_nizkoe.interval>=_statusAi.NORMAL AND ai.Pmaslo_sm_nizkoe.value < 25.0 THEN
  	  	    Pms_less_25.top:=TRUE;
  	    END_IF;
      END_IF;

      IF	Pms_less_250.start AND NOT Pms_less_250.top THEN
  	    IF	ai.Pmaslo_sm_vysokoe.interval>=_statusAi.NORMAL AND ai.Pmaslo_sm_vysokoe.value < 250.0 THEN
  	  	    Pms_less_250.top:=TRUE;
  	    END_IF;
      END_IF;

      (*ошибка заврешия алгоритма по таймеру*)
      IF	timer120.top THEN 
  	    Error_Alg.ERROR := TRUE;
      ELSE
  	    Error_Alg.ERROR := FALSE;	
      END_IF;

      (*если проверка прошла - сброс таймера *)
      IF	Pms_less_250.top AND Pms_less_25.top  THEN 
          resetPhase(timer120);
      END_IF;
  END_IF;

  _sunpackerCommand(command := StrAlg.inCommand);
  	source := _sunpackerCommand.source;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrAlg.opcCommandsDisabled) AND source > 0) OR source = 0) then	
  	CASE BYTE_TO_INT(cmd) OF
  		(*cm dRun*) 1: 	IF (StrAlg.CanRun) THEN
  					StrAlg.isRuning := TRUE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;
  					(*****************       OnRun       *****************)
                                                    algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA2;

                                                    (*runPhase(timer120);
                                                    runPhase(timer5);
                                                    runPhase(Shup);
                                                    resetAiProtection(protections.dPmaslo_gaz);                                                  
                                                    resetDiProtection(protections.dPmaslo_gaz_less100);*)

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrAlg.isRuning := FALSE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
  		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
  				StrAlg.isEnded := FALSE;
  				StrAlg.hasError 	:= FALSE;

                                           (*****************       OnReset       *****************)
                                          waitReset(IN:=FALSE);
                                          StrAlg.inCanRun:=FALSE;

                                          (*resetPhase(timer5);
                                          resetPhase(Shup);
                                          resetPhase(timer120);
                                          resetPhase(Net_Chast);
                                          resetPhase(mvOn);
                                          resetPhase(pGNSmore04);
                                          resetPhase(gotov_K_zagruzke);
                                          resetPhase(dPmg_Top);
                                          resetPhase(AutoPNS_Start);*)

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  StrAlg.Start:= pnsOff.startStatus
              OR timer120.startStatus
              OR Pms_less_25.startStatus
              OR Pms_less_250.startStatus;


  StrAlg.Top :=  pnsOff.topStatus
              OR timer120.topStatus
              OR Pms_less_25.topStatus
              OR Pms_less_250.topStatus;                  

  StrAlg.Error :=  pnsOff.errorStatus
              OR timer120.errorStatus
              OR Pms_less_25.errorStatus
              OR Pms_less_250.errorStatus; 

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK Prov_opressovka
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    OPC_Control : struct_PhaseAlgoritm;
    Pms_more_50 : struct_PhaseAlgoritm;
    Pms_more_300 : struct_PhaseAlgoritm;
    dPmg_more_100 : struct_PhaseAlgoritm;
    P_zad : struct_PhaseAlgoritm;
    kran5Open : struct_PhaseAlgoritm;
    kran4Open : struct_PhaseAlgoritm;
    kran5Close : struct_PhaseAlgoritm;
    kran4Close : struct_PhaseAlgoritm;
    timer10 : struct_PhaseAlgoritm;
    P_vh_vyh_more_zad : struct_PhaseAlgoritm;
    Zapoln_Norm : struct_PhaseAlgoritm;
    First_Step : struct_PhaseAlgoritm;
    MaxZapolnenie_izm : REAL;
    Opressovka_Start : struct_Question;
    PNS_NU_ON_Ask : struct_Question;
    Zapolnit_kontur : struct_Question;
    fb_OPC_Control : fb_ph_algoritm;
    fb_Pms_more_50 : fb_ph_algoritm;
    fb_Pms_more_300 : fb_ph_algoritm;
    fb_dPmg_more_100 : fb_ph_algoritm;
    fb_P_zad : fb_ph_algoritm;
    fb_kran5Open : fb_ph_Kran;
    fb_kran4Open : fb_ph_Kran;
    fb_kran5Close : fb_ph_Kran;
    fb_kran4Close : fb_ph_Kran;
    fb_timer10 : fb_ph_Timer;
    fb_P_vh_vyh_more_zad : fb_ph_algoritm;
    fb_Zapoln_Norm : fb_ph_algoritm;
    fb_First_Step : fb_ph_algoritm;
    fb_Opressovka_Start : fb_Question;
    fb_PNS_NU_ON_Ask : fb_Question;
    fb_Zapolnit_kontur : fb_Question;
    onInit : BOOL;
  END_VAR
  VAR_EXTERNAL
    Im : ImConfig;
    ai : AiConfig;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    cmd : BYTE;
    _statusDualInput : TYPE_statusDualInput;
    lastCmd : BYTE;
    _Answers : TYPE_Answers;
  END_VAR
  VAR_EXTERNAL
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
  END_VAR
  VAR
    cmd_for_Status : BYTE;
    source_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    waitReset : TON;
    resetCmdTimerPriznak : BOOL;
    _statusAi : TYPE_StatusAi;
    protections : ProtectionsConfig;
  END_VAR

  IF NOT onInit THEN      
      fb_OPC_Control(phaseNumber:=1);
      fb_Pms_more_50(phaseNumber:=2);
      fb_Pms_more_300(phaseNumber:=3);
      fb_dPmg_more_100(phaseNumber:=4);
      fb_P_zad(phaseNumber:=5);
      fb_kran5Open(phaseNumber:=6, act:=_on);
      fb_kran4Open(phaseNumber:=7, act:=_on);
      fb_kran5Close(phaseNumber:=8, act:=_off);
      fb_kran4Close(phaseNumber:=9, act:=_off);
      fb_timer10(phaseNumber:=10, delay:=T#10S);
      fb_P_vh_vyh_more_zad(phaseNumber:=11);
      fb_Zapoln_Norm(phaseNumber:=12);
      fb_First_Step(phaseNumber:=13);
      Opressovka_Start.AnswerVariants:=_Answers.ANS_YES + _Answers.ANS_NO;
      PNS_NU_ON_Ask.AnswerVariants:=_Answers.ANS_YES;
      Zapolnit_kontur.AnswerVariants:=_Answers.ANS_YES;
      onInit:=TRUE;
  END_IF;

  fb_OPC_Control(StrPh:=OPC_Control);
  fb_Pms_more_50(StrPh:=Pms_more_50);
  fb_Pms_more_300(StrPh:=Pms_more_300);
  fb_dPmg_more_100(StrPh:=dPmg_more_100);
  fb_P_zad(StrPh:=P_zad);
  fb_kran5Open(StrPh:=kran5Open, Im:=Im.Kran5);
  fb_kran4Open(StrPh:=kran4Open, Im:=Im.Kran4);
  fb_kran5Close(StrPh:=kran5Close, Im:=Im.Kran5);
  fb_kran4Close(StrPh:=kran4Close, Im:=Im.Kran4);
  fb_timer10(StrPh:=timer10);
  fb_P_vh_vyh_more_zad(StrPh:=P_vh_vyh_more_zad);
  fb_Zapoln_Norm(StrPh:=Zapoln_Norm);
  fb_First_Step(StrPh:=First_Step);
  fb_Opressovka_Start(StrQ:=Opressovka_Start);
  fb_PNS_NU_ON_Ask(StrQ:=PNS_NU_ON_Ask);
  fb_Zapolnit_kontur(StrQ:=Zapolnit_kontur);

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN
     (*IF	algManager.mode <> ModeGpa.MODE_O THEN
  	    askQuestion(Opressovka_Start);
      END_IF;*)

      IF	Opressovka_Start.answer=_Answers.ANS_YES THEN
  	    askQuestion(Opressovka_Start);
  	    Im.kran6.inOpcCommandsDisabled := FALSE;
  	    (*algManager.setMode(nMode:=ModeGpa.MODE_O);*)
  	    runPhase(OPC_Control);
  	    resetAiProtection(protections.Pgaza_na_vyhode_nagnetatelia_GPA_STOP);
  	    resetAiProtection(protections.Pgaza_na_vhode_nagnetatelia_GPA_STOP);
          ELSIF Opressovka_Start.answer=_Answers.ANS_no THEN
                resetQuestion(Opressovka_Start);
      END_IF;

      IF	OPC_Control.start AND NOT OPC_Control.top THEN
  	    askQuestion(PNS_NU_ON_Ask);
      END_IF;
      IF	(PNS_NU_ON_Ask.answer=_Answers.ANS_YES) AND NOT OPC_Control.top THEN
  	    OPC_Control.top:=TRUE;
  	    resetQuestion(PNS_NU_ON_Ask);
      END_IF;

      IF	OPC_Control.top AND NOT Pms_more_50.start  THEN
  	    Im.pns.inOpcCommandsDisabled := FALSE;
  	    Im.kran6.inOpcCommandsDisabled := FALSE;
  	    runPhase(Pms_more_50);
  	    runPhase(Pms_more_300);
      END_IF;
      IF	OPC_Control.top AND Im.pns.onStatus = _statusDualInput.STATUS_On AND NOT dPmg_more_100.start THEN
  	    Im.nu1.inOpcCommandsDisabled := FALSE;
  	    Im.nu2.inOpcCommandsDisabled := FALSE;
  	    runPhase(dPmg_more_100);
      END_IF;

      IF	Im.nu1.onStatus = _statusDualInput.STATUS_On OR Im.nu2.onStatus = _statusDualInput.STATUS_On AND dPmg_more_100.start AND NOT dPmg_more_100.top THEN
  	    IF ai.dPmaslo_gaz.interval	>=	_statusAi.NORMAL AND 
  		    ai.dPmaslo_gaz.value > 150.0 AND Im.SingleSignals.dP_maslo_gaz_Less100.reliability = TRUE AND NOT Im.SingleSignals.dP_maslo_gaz_Less100.Q THEN
  		    dPmg_more_100.top:=TRUE;
  		    runAiProtection(protections.dPmaslo_gaz);
  		    runDiProtection(protections.dPmaslo_gaz_less100);
  	    END_IF;
      END_IF;

      IF	Im.pns.onStatus = _statusDualInput.STATUS_On AND Pms_more_50.start AND NOT Pms_more_50.top THEN
  	        IF	ai.Pmaslo_sm_nizkoe.interval	>=	_statusAi.NORMAL AND 
  		        ai.Pmaslo_sm_nizkoe.value > 50.0 THEN
  		        Pms_more_50.top:=TRUE;
                  runAiProtection(protections.Pmaslo_sm_nizkoe);
  	    END_IF;
      END_IF;

      IF	Im.pns.onStatus = _statusDualInput.STATUS_On AND Pms_more_300.start AND NOT Pms_more_300.top THEN
  	    IF	ai.Pmaslo_sm_vysokoe.interval	>=	_statusAi.NORMAL AND 
  		    ai.Pmaslo_sm_vysokoe.value > 300.0 THEN
  		    Pms_more_300.top:=TRUE;
  		    runAiProtection(protections.Pmaslo_sm_vysokoe);
  	    END_IF;
      END_IF;

      (*IF	dPmg_more_100.top AND Pms_more_50.top AND Pms_more_300.top THEN
  	    CASE	Auto.value OF
  	    0:	Im.kran3.inOpcCommandsDisabled := FALSE;
  		Im.kran4.inOpcCommandsDisabled := FALSE;
  		Im.kran5.inOpcCommandsDisabled := FALSE;
  		Im.kran3b.inOpcCommandsDisabled := FALSE;
  		resetPhase(Zapolnit_kontur);
  		IF	Im.PerepadDavlenieKran1_Less100.Q THEN
  			Im.kran1.inOpcCommandsDisabled := FALSE;
  			Im.kran2.inOpcCommandsDisabled := FALSE;
  		ELSE
  			Im.kran1.inOpcCommandsDisabled := TRUE;
  			Im.kran2.inOpcCommandsDisabled := TRUE;
  		END_IF
  		resetPhase(P_vh_vyh_more_zad);
  		resetPhase(kran5Open);
  		resetPhase(kran4Open);
  		resetPhase(timer10);
  		resetPhase(kran5Close);
  		resetPhase(P_zad);
  		resetPhase(First_Step);
  		resetPhase(kran4Close);
  		(*MaxZapolnenie_izm:=0;
  		MaxZapolnenie.setValue (0);
  	1:	
  		Zapoln_Norm.top:= MaxZapolnenie.value - MaxZapolnenie_izm > 0.4 AND MaxZapolnenie.value >= 0.4 AND MaxZapolnenie.value <= 10 AND 
  			ai.DGazaNaVhodeNagnetatelja.interval >= _statusAi.NORMAL AND MaxZapolnenie.value - ai.DGazaNaVhodeNagnetatelja.value > 0.4 AND 
  			ai.DGazaNaVyhodeNagnetatelja.interval >= _statusAi.NORMAL AND MaxZapolnenie.value - ai.DGazaNaVyhodeNagnetatelja.value > 0.4 *)
  		IF	kran4Close.top AND Zapoln_Norm.top AND NOT P_zad.start THEN
  			resetPhase(P_vh_vyh_more_zad);
  			resetPhase(kran5Open);
  			resetPhase(kran4Open);
  			resetPhase(timer10);
  			resetPhase(kran5Close);
  			resetPhase(kran4Close);
  		END_IF;
  		IF	NOT kran4Close.top OR kran4Close.top AND Zapoln_Norm.top AND NOT P_zad.start THEN
  		 	runPhase(P_zad);			
  		END_IF;
  		IF NOT P_zad.top AND P_zad.start AND Zapoln_Norm.top THEN
  			askQuestion(Zapolnit_kontur);
  			Im.kran3.inOpcCommandsDisabled := TRUE;
  			Im.kran4.inOpcCommandsDisabled := TRUE;
  			Im.kran5.inOpcCommandsDisabled := TRUE;
  			Im.kran3b.inOpcCommandsDisabled := TRUE;
  			Im.kran1.inOpcCommandsDisabled := TRUE;
  			Im.kran2.inOpcCommandsDisabled := TRUE;


  		ELSIF NOT Zapoln_Norm.top AND NOT P_zad.top THEN
  				resetQuestion(Zapolnit_kontur);
  		END_IF;

          IF	(Zapolnit_kontur.answer=_Answers.ANS_YES) AND P_zad.start THEN
  			(*MaxZapolnenie_izm:= MaxZapolnenie.value;*)
  			IF 	NOT First_Step.top THEN
  				runPhase(kran5Open);
  			ELSE
  				runPhase(kran4Open);
  			END_IF;
  			resetQuestion(Zapolnit_kontur);
  			P_zad.top:=TRUE;
  		END_IF;
                      (*

  		IF	P_zad.top AND NOT kran4Close.top THEN
  			MaxZapolnenie.newvalue:=MaxZapolnenie_izm;
  		ELSE
  			MaxZapolnenie.newvalue:= MaxZapolnenie.newvalue; 
  		END_IF;*)

  		IF	kran5Open.top AND NOT First_Step.top THEN
  			runPhase(kran4Open);
  		END_IF;

          IF 	kran4Open.top AND NOT timer10.top AND NOT First_Step.top THEN
  			runPhase(timer10);
  		END_IF;

  		IF	timer10.top AND NOT First_Step.top THEN
  			runPhase(kran5Close);
  		END_IF;

  		IF	kran5Close.top OR First_Step.top AND kran4Open.top THEN
  			runPhase(P_vh_vyh_more_zad);
          END_IF;

  		IF	ai.Pgaza_na_vhode_nagnetatelia.interval >= _statusAi.NORMAL (*AND ai.Pgaza_na_vhode_nagnetatelia.value >= MaxZapolnenie.value*) AND 
  			ai.Pgaza_na_vyhode_nagnetatelia.interval >= _statusAi.NORMAL (*AND ai.Pgaza_na_vyhode_nagnetatelia.value >= MaxZapolnenie.value*) AND  P_vh_vyh_more_zad.start AND NOT P_vh_vyh_more_zad.top THEN
  			runPhase(kran4Close);
  			P_vh_vyh_more_zad.top:=TRUE;
  		END_IF;

  		IF	kran4Close.top THEN
  			First_Step.top:=TRUE;
  			Im.kran3.inOpcCommandsDisabled := FALSE;
  			Im.kran4.inOpcCommandsDisabled := FALSE;
  			Im.kran5.inOpcCommandsDisabled := FALSE;
  			Im.kran3b.inOpcCommandsDisabled := FALSE;

              IF	Zapoln_Norm.top THEN
  				resetPhase(P_zad);
  			END_IF;

              IF	Im.SingleSignals.dp_kran1_Less100.Q THEN
  				Im.kran1.inOpcCommandsDisabled := FALSE;
  				Im.kran2.inOpcCommandsDisabled := FALSE;	
  			ELSE
  				Im.kran1.inOpcCommandsDisabled := TRUE;
  				Im.kran2.inOpcCommandsDisabled := TRUE;
  			END_IF;
  		ELSE
  			Im.kran1.inOpcCommandsDisabled := TRUE;
  			Im.kran2.inOpcCommandsDisabled := TRUE;
  	    END_IF;
          END_IF;
          (*END_CASE;    
  END_IF;*)

  _sunpackerCommand(command := StrAlg.inCommand);
  	source := _sunpackerCommand.source;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrAlg.opcCommandsDisabled) AND source > 0) OR source = 0) then	
  	CASE BYTE_TO_INT(cmd) OF
  		(*cm dRun*) 1: 	IF (StrAlg.CanRun) THEN
  					StrAlg.isRuning := TRUE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;
  					(*****************       OnRun       *****************)
                                                    algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA2;

                                                    (*runPhase(timer120);
                                                    runPhase(timer5);
                                                    runPhase(Shup);
                                                    resetAiProtection(protections.dPmaslo_gaz);                                                  
                                                    resetDiProtection(protections.dPmaslo_gaz_less100);*)

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrAlg.isRuning := FALSE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
  		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
  				StrAlg.isEnded := FALSE;
  				StrAlg.hasError 	:= FALSE;

                                           (*****************       OnReset       *****************)
                                          waitReset(IN:=FALSE);
                                          StrAlg.inCanRun:=FALSE;

                                          (*resetPhase(timer5);
                                          resetPhase(Shup);
                                          resetPhase(timer120);
                                          resetPhase(Net_Chast);
                                          resetPhase(mvOn);
                                          resetPhase(pGNSmore04);
                                          resetPhase(gotov_K_zagruzke);
                                          resetPhase(dPmg_Top);
                                          resetPhase(AutoPNS_Start);*)

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  StrAlg.Start:= OPC_Control.startStatus
              OR Pms_more_50.startStatus
              OR Pms_more_300.startStatus
              OR dPmg_more_100.startStatus
              OR P_zad.startStatus
              OR kran5Open.startStatus
              OR kran4Open.startStatus
              OR kran5Close.startStatus
              OR kran4Close.startStatus
              OR timer10.startStatus
              OR P_vh_vyh_more_zad.startStatus
              OR Zapoln_Norm.startStatus
              OR First_Step.startStatus;


  StrAlg.Top :=  OPC_Control.topStatus
              OR Pms_more_50.topStatus
              OR Pms_more_300.topStatus
              OR dPmg_more_100.topStatus
              OR P_zad.topStatus
              OR kran5Open.topStatus
              OR kran4Open.topStatus
              OR kran5Close.topStatus
              OR kran4Close.topStatus
              OR timer10.topStatus
              OR P_vh_vyh_more_zad.topStatus
              OR Zapoln_Norm.topStatus
              OR First_Step.topStatus;                   

  StrAlg.Error :=  OPC_Control.errorStatus
              OR Pms_more_50.errorStatus
              OR Pms_more_300.errorStatus
              OR dPmg_more_100.errorStatus
              OR P_zad.errorStatus
              OR kran5Open.errorStatus
              OR kran4Open.errorStatus
              OR kran5Close.errorStatus
              OR kran4Close.errorStatus
              OR timer10.errorStatus
              OR P_vh_vyh_more_zad.errorStatus
              OR Zapoln_Norm.errorStatus
              OR First_Step.errorStatus;  

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK

FUNCTION_BLOCK Prov_K
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    F1_1_start : struct_PhaseAlgoritm;
    F1_2_start : struct_PhaseAlgoritm;
    F3_start : struct_PhaseAlgoritm;
    F4_Start : struct_PhaseAlgoritm;
    Start_Prov_Pusk : struct_Question;
    F4_Start_Q : struct_Question;
    fb_F1_1_start : fb_ph_algoritm;
    fb_F1_2_start : fb_ph_algoritm;
    fb_F3_start : fb_ph_algoritm;
    fb_F4_Start : fb_ph_Kran;
    algoritms : AlgoritmsConfig;
    fb_Start_Prov_Pusk : fb_Question;
    fb_F4_Start_Q : fb_Question;
    fb_kran4Open : fb_ph_Kran;
    fb_kran5Close : fb_ph_Kran;
    fb_kran4Close : fb_ph_Kran;
    fb_timer10 : fb_ph_Timer;
    fb_P_vh_vyh_more_zad : fb_ph_algoritm;
    fb_Zapoln_Norm : fb_ph_algoritm;
    fb_First_Step : fb_ph_algoritm;
    fb_Opressovka_Start : fb_Question;
    fb_PNS_NU_ON_Ask : fb_Question;
    fb_Zapolnit_kontur : fb_Question;
    onInit : BOOL;
  END_VAR
  VAR_EXTERNAL
    Im : ImConfig;
    ai : AiConfig;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    source : BYTE;
    cmd : BYTE;
    _statusDualInput : TYPE_statusDualInput;
    lastCmd : BYTE;
    _Answers : TYPE_Answers;
  END_VAR
  VAR_EXTERNAL
    ModeGpa : TYPE_ModeGpa;
    algManager : struct_AlgoritmsManager;
  END_VAR
  VAR
    cmd_for_Status : BYTE;
    source_for_Status : BYTE;
    command_error_for_Status : BYTE;
    resetCmdTimer : TON;
    waitReset : TON;
    resetCmdTimerPriznak : BOOL;
    _statusAi : TYPE_StatusAi;
    protections : ProtectionsConfig;
  END_VAR

  IF NOT onInit THEN      
      fb_F1_1_start(phaseNumber:=1, act:=_run);
      fb_F1_2_start(phaseNumber:=2, act:=_run);
      fb_F3_start(phaseNumber:=3, act:=_run);
      fb_F4_Start(phaseNumber:=4, act:=_on);
      Start_Prov_Pusk.AnswerVariants:=_Answers.ANS_YES + _Answers.ANS_NO;
      F4_Start_Q.AnswerVariants:=_Answers.ANS_YES;
      onInit:=TRUE;
  END_IF;

  fb_F1_1_start(StrPh:=F1_1_start, alg := algoritms.Pusk_F_faza1);
  fb_F1_2_start(StrPh:=F1_2_start, alg := algoritms.Pusk_F_faza2);
  fb_F3_start(StrPh:=F3_start, alg := algoritms.Pusk_TH_faza);
  fb_F4_Start(StrPh:=F4_Start, Im:=Im.Kran6);
  fb_Start_Prov_Pusk(StrQ:=Start_Prov_Pusk);
  fb_F4_Start_Q(StrQ:=F4_Start_Q);

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN
      IF NOT F1_1_start.start THEN
  	askQuestion(Start_Prov_Pusk);
      END_IF;
      IF Start_Prov_Pusk.answer = _Answers.ANS_YES THEN
  	(*algoritms.F1_1.CanRun :=TRUE;*)
  	runPhase(F1_1_start);
  	resetQuestion(Start_Prov_Pusk);
  	(*algManager.setMode(nMode:=ModeGpa.MODE_PUSKK);*)
      ELSIF	Start_Prov_Pusk.answer=_Answers.ANS_NO THEN
  		resetQuestion(Start_Prov_Pusk);
  		(*algoritms.F1_1.CanRun :=FALSE;*)
      END_IF;
      IF F1_1_start.top THEN
  	(*algoritms.F1_2.CanRun :=TRUE;*)
  	runPhase(F1_2_start);
      END_IF;
      IF 	F1_2_start.top (*AND algoritms.ppu.ppuThird*)THEN
  	(*algoritms.F3.CanRun :=TRUE;*)
  	runPhase(F3_start);
      END_IF;
      IF F3_start.top AND (*algoritms.ppu.ppuForth AND*) NOT F4_Start.start  THEN
  	askQuestion(F4_Start_Q);
      ELSE
  	resetQuestion(F4_Start_Q);
      END_IF;
      IF F4_Start_Q.answer = _Answers.ANS_YES THEN
  	resetQuestion(F4_Start_Q);
  	(*algoritms.F4.CanRun :=TRUE;*)
  	runPhase(F4_Start);
      END_IF;
  END_IF;

  _sunpackerCommand(command := StrAlg.inCommand);
  	source := _sunpackerCommand.source;
  	cmd := _sunpackerCommand.cmd;

  IF cmd <> 0 AND lastCmd <> cmd AND (((NOT StrAlg.opcCommandsDisabled) AND source > 0) OR source = 0) then	
  	CASE BYTE_TO_INT(cmd) OF
  		(*cm dRun*) 1: 	IF (StrAlg.CanRun) THEN
  					StrAlg.isRuning := TRUE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;
  					(*****************       OnRun       *****************)
                                                    algManager.nMode:=ModeGpa.MODE_PUSK_FIRST_FAZA2;

                                                    (*runPhase(timer120);
                                                    runPhase(timer5);
                                                    runPhase(Shup);
                                                    resetAiProtection(protections.dPmaslo_gaz);                                                  
                                                    resetDiProtection(protections.dPmaslo_gaz_less100);*)

  					cmd_for_Status := cmd;
  					source_for_Status := source;
  					command_error_for_Status := 0;
  				ELSE
  					StrAlg.isRuning := FALSE;
  					StrAlg.isEnded := FALSE;
  					StrAlg.hasError := FALSE;

  					cmd_for_Status := 0;
  					source_for_Status := source;
  					command_error_for_Status := cmd;
  				END_IF;
  		(*cmdReset*) 2: 	StrAlg.isRuning := FALSE;
  				StrAlg.isEnded := FALSE;
  				StrAlg.hasError 	:= FALSE;

                                           (*****************       OnReset       *****************)
                                          waitReset(IN:=FALSE);
                                          StrAlg.inCanRun:=FALSE;

                                          (*resetPhase(timer5);
                                          resetPhase(Shup);
                                          resetPhase(timer120);
                                          resetPhase(Net_Chast);
                                          resetPhase(mvOn);
                                          resetPhase(pGNSmore04);
                                          resetPhase(gotov_K_zagruzke);
                                          resetPhase(dPmg_Top);
                                          resetPhase(AutoPNS_Start);*)

                                          StrAlg.inOpcCommandsDisabled:=FALSE;                

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

  (*StrAlg.Start:= OPC_Control.startStatus
              OR Pms_more_50.startStatus
              OR Pms_more_300.startStatus
              OR dPmg_more_100.startStatus
              OR P_zad.startStatus
              OR kran5Open.startStatus
              OR kran4Open.startStatus
              OR kran5Close.startStatus
              OR kran4Close.startStatus
              OR timer10.startStatus
              OR P_vh_vyh_more_zad.startStatus
              OR Zapoln_Norm.startStatus
              OR First_Step.startStatus;


  StrAlg.Top :=  OPC_Control.topStatus
              OR Pms_more_50.topStatus
              OR Pms_more_300.topStatus
              OR dPmg_more_100.topStatus
              OR P_zad.topStatus
              OR kran5Open.topStatus
              OR kran4Open.topStatus
              OR kran5Close.topStatus
              OR kran4Close.topStatus
              OR timer10.topStatus
              OR P_vh_vyh_more_zad.topStatus
              OR Zapoln_Norm.topStatus
              OR First_Step.topStatus;                   

  StrAlg.Error :=  OPC_Control.errorStatus
              OR Pms_more_50.errorStatus
              OR Pms_more_300.errorStatus
              OR dPmg_more_100.errorStatus
              OR P_zad.errorStatus
              OR kran5Open.errorStatus
              OR kran4Open.errorStatus
              OR kran5Close.errorStatus
              OR kran4Close.errorStatus
              OR timer10.errorStatus
              OR P_vh_vyh_more_zad.errorStatus
              OR Zapoln_Norm.errorStatus
              OR First_Step.errorStatus;*)

  (*TODO: TYPE PROGRAM CODE HERE*)
  StrAlg.status :=  SHL(BYTE_TO_DWORD(source_for_Status), 29) 
  			OR SHL(BYTE_TO_DWORD(cmd_for_Status), 26) 
  			OR SHL(BYTE_TO_DWORD(command_error_for_Status), 23)
  			OR SHL(BOOL_TO_DWORD(StrAlg.OpcCommandsDisabled ), 21)
  			OR SHL(BOOL_TO_DWORD(StrAlg.hasError),4)
  			OR SHL(BOOL_TO_DWORD(StrAlg.CanRun),2)
  			OR SHL(BOOL_TO_DWORD(StrAlg.isEnded),1)
  			OR BOOL_TO_DWORD(StrAlg.isRuning);
END_FUNCTION_BLOCK


CONFIGURATION config1
  VAR_GLOBAL
    systime_s AT %IL0.10.10 : ULINT;
    systime_ns AT %IL0.10.11 : ULINT;
    current_retrieve_us AT %IL0.10.12 : ULINT;
    current_config_us AT %IL0.10.13 : ULINT;
    current_publish_us AT %IL0.10.14 : ULINT;
    current_run_us AT %IL0.10.15 : ULINT;
    max_retrieve_us AT %QL0.10.16 : ULINT;
    max_config_us AT %QL0.10.17 : ULINT;
    max_publish_us AT %QL0.10.18 : ULINT;
    plc_run_number AT %IL0.10.19 : ULINT;
    arAIN_0 : TItemAIN;
    arAIN_1 : TItemAIN;
    arAIN_2 : TItemAIN;
    arAIN_3 : TItemAIN;
    arAIN_4 : TItemAIN;
    arAIN_5 : TItemAIN;
    arAIN_6 : TItemAIN;
    arAIN_7 : TItemAIN;
    arAIN_8 : TItemAIN;
    arAIN_9 : TItemAIN;
    arAIN_10 : TItemAIN;
    arAIN_11 : TItemAIN;
    arAIN_12 : TItemAIN;
    arAIN_13 : TItemAIN;
    arAIN_14 : TItemAIN;
    arAIN_15 : TItemAIN;
    arAIN_16 : TItemAIN;
    arAIN_17 : TItemAIN;
    arAIN_18 : TItemAIN;
    arAIN_19 : TItemAIN;
    arAIN_20 : TItemAIN;
    arAIN_21 : TItemAIN;
    arAIN_22 : TItemAIN;
    arAIN_23 : TItemAIN;
    arAIN_24 : TItemAIN;
    arAIN_25 : TItemAIN;
    arAIN_26 : TItemAIN;
    arAIN_27 : TItemAIN;
    arAIN_28 : TItemAIN;
    arAIN_29 : TItemAIN;
    arAIN_30 : TItemAIN;
    arAIN_31 : TItemAIN;
    arAIN_32 : TItemAIN;
    arAIN_33 : TItemAIN;
    arAIN_34 : TItemAIN;
    arAIN_35 : TItemAIN;
    arAIN_36 : TItemAIN;
    arAIN_37 : TItemAIN;
    arAIN_38 : TItemAIN;
    arAIN_39 : TItemAIN;
    arAIN_40 : TItemAIN;
    arAIN_41 : TItemAIN;
    arAIN_42 : TItemAIN;
    arAIN_43 : TItemAIN;
    arAIN_44 : TItemAIN;
    arAIN_45 : TItemAIN;
    arAIN_46 : TItemAIN;
    arAIN_47 : TItemAIN;
    arAIN_48 : TItemAIN;
    arAIN_49 : TItemAIN;
    arAIN_50 : TItemAIN;
    arAIN_51 : TItemAIN;
    arAIN_52 : TItemAIN;
    arAIN_53 : TItemAIN;
    arAIN_54 : TItemAIN;
    arAIN_55 : TItemAIN;
    arAIN_56 : TItemAIN;
    arAIN_57 : TItemAIN;
    arAIN_58 : TItemAIN;
    arAIN_59 : TItemAIN;
    arAIN_60 : TItemAIN;
    arAIN_61 : TItemAIN;
    arAIN_62 : TItemAIN;
    arAIN_63 : TItemAIN;
    arAIN_64 : TItemAIN;
    arAIN_65 : TItemAIN;
    arAIN_66 : TItemAIN;
    arAIN_67 : TItemAIN;
    arAIN_68 : TItemAIN;
    arAIN_69 : TItemAIN;
    arAIN_70 : TItemAIN;
    arAIN_71 : TItemAIN;
    arAIN_72 : TItemAIN;
    arAIN_73 : TItemAIN;
    arAIN_74 : TItemAIN;
    arAIN_75 : TItemAIN;
    arAIN_76 : TItemAIN;
    arAIN_77 : TItemAIN;
    arAIN_78 : TItemAIN;
    arAIN_79 : TItemAIN;
    arDIN_0 : TItemDIN;
    arDIN_1 : TItemDIN;
    arDIN_2 : TItemDIN;
    arDIN_3 : TItemDIN;
    arDIN_4 : TItemDIN;
    arDIN_5 : TItemDIN;
    arDIN_6 : TItemDIN;
    arDIN_7 : TItemDIN;
    arDIN_8 : TItemDIN;
    arDIN_9 : TItemDIN;
    arDIN_10 : TItemDIN;
    arDIN_11 : TItemDIN;
    arDIN_12 : TItemDIN;
    arDIN_13 : TItemDIN;
    arDIN_14 : TItemDIN;
    arDIN_15 : TItemDIN;
    arDIN_16 : TItemDIN;
    arDIN_17 : TItemDIN;
    arDIN_18 : TItemDIN;
    arDIN_19 : TItemDIN;
    arDIN_20 : TItemDIN;
    arDIN_21 : TItemDIN;
    arAOUT_0 : TDoubleData;
    arAOUT_1 : TDoubleData;
    arDOUT_0 : TWordData;
    arDOUT_1 : TWordData;
    arDOUT_2 : TWordData;
    arDOUT_3 : TWordData;
    arDOUT_4 : TWordData;
    arDOUT_66 : TWordData;
    arERR_0 : TItemDIN;
    arERR_1 : TItemDIN;
    arERR_2 : TItemDIN;
    arERR_3 : TItemDIN;
    arERR_4 : TItemDIN;
    arERR_5 : TItemDIN;
    arERR_6 : TItemDIN;
    arERR_7 : TItemDIN;
    arERR_8 : TItemDIN;
    arERR_9 : TItemDIN;
    arERR_10 : TItemDIN;
    arERR_11 : TItemDIN;
    arERR_12 : TItemDIN;
    arERR_13 : TItemDIN;
    arERR_14 : TItemDIN;
    arERR_15 : TItemDIN;
    arERR_16 : TItemDIN;
    arERR_17 : TItemDIN;
    arERR_18 : TItemDIN;
    arERR_19 : TItemDIN;
    arERR_20 : TItemDIN;
    arERR_21 : TItemDIN;
    arERR_22 : TItemDIN;
    arERR_23 : TItemDIN;
    arERR_24 : TItemDIN;
    arERR_66 : TItemDIN;
    arRelSt_0 : TItemDIN;
  END_VAR

  RESOURCE resource1 ON PLC
    VAR_GLOBAL CONSTANT
      gMaint_Time : REAL;
    END_VAR
    VAR_GLOBAL
      cur_Cycle : REAL;
      gStart_Tmr : REAL;
    END_VAR
    VAR_GLOBAL CONSTANT
      req_Cycle : REAL := 0.02;
    END_VAR
    VAR_GLOBAL
      gF_T_100mSec : BOOL;
      gT_1Sec : BOOL;
      gF_T_1Sec : BOOL;
      gT_1Min : BOOL;
      gR_T_1Min : BOOL;
      gF_T_1Min : BOOL;
      T_1SEC : REAL;
      del_T : REAL;
      ai : AiConfig;
      di : DiConfig;
      od : DOconfig;
      ao : AOConfig;
      IM : ImConfig;
      protections : ProtectionsConfig;
      algoritms : AlgoritmsConfig;
      algManager : struct_AlgoritmsManager;
      ModeGpa : TYPE_ModeGpa;
      protectManager : struct_ProtectionsManager;
      NotHasRezervNU : BOOL;
      Reset_HasNU : BOOL;
      AlgTimers : struct_AlgTimers;
      AlgQuestions : AlgoritmsQuestions;
      PMcommand : TYPE_CommandsPotectionsManager;
      AI_Aktivnaia_moshchnost_HL AT %QL0.2 : LREAL;
      AI_Aktivnaia_moshchnost_LL AT %QL0.3 : LREAL;
      AI_Aktivnaia_moshchnost_command AT %QW0.1 : UINT;
      AI_Aktivnaia_moshchnost_newHL AT %QL0.4 : LREAL;
      AI_Aktivnaia_moshchnost_newLL AT %QL0.5 : LREAL;
      AI_Aktivnaia_moshchnost_status AT %QD0.6 : UDINT;
      AI_Aktivnaia_moshchnost_value AT %QL0.7 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_HA AT %QL0.27 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_HL AT %QL0.28 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_HW AT %QL0.29 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_LA AT %QL0.30 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_LL AT %QL0.31 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_LW AT %QL0.32 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_command AT %QW0.26 : UINT;
      AI_Osevoi_sdvig_rotora_nagnetatelia_newHA AT %QL0.33 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_newHL AT %QL0.34 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_newHW AT %QL0.35 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_newLA AT %QL0.36 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_newLL AT %QL0.37 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_newLW AT %QL0.38 : LREAL;
      AI_Osevoi_sdvig_rotora_nagnetatelia_status AT %QD0.39 : UDINT;
      AI_Osevoi_sdvig_rotora_nagnetatelia_value AT %QL0.40 : LREAL;
      AI_P_gaza_na_vkhode_nagnetatelia_HL AT %QL0.42 : LREAL;
      AI_P_gaza_na_vkhode_nagnetatelia_LL AT %QL0.43 : LREAL;
      AI_P_gaza_na_vkhode_nagnetatelia_command AT %QW0.41 : UINT;
      AI_P_gaza_na_vkhode_nagnetatelia_newHL AT %QL0.44 : LREAL;
      AI_P_gaza_na_vkhode_nagnetatelia_newLL AT %QL0.45 : LREAL;
      AI_P_gaza_na_vkhode_nagnetatelia_status AT %QD0.46 : UDINT;
      AI_P_gaza_na_vkhode_nagnetatelia_value AT %QL0.47 : LREAL;
      AI_P_gaza_na_vykhode_nagnetatelia_HL AT %QL0.49 : LREAL;
      AI_P_gaza_na_vykhode_nagnetatelia_LL AT %QL0.50 : LREAL;
      AI_P_gaza_na_vykhode_nagnetatelia_command AT %QW0.48 : UINT;
      AI_P_gaza_na_vykhode_nagnetatelia_newHL AT %QL0.51 : LREAL;
      AI_P_gaza_na_vykhode_nagnetatelia_newLL AT %QL0.52 : LREAL;
      AI_P_gaza_na_vykhode_nagnetatelia_status AT %QD0.53 : UDINT;
      AI_P_gaza_na_vykhode_nagnetatelia_value AT %QL0.54 : LREAL;
      AI_P_masla_smazki_nizkoe_HL AT %QL0.56 : LREAL;
      AI_P_masla_smazki_nizkoe_LA AT %QL0.57 : LREAL;
      AI_P_masla_smazki_nizkoe_LL AT %QL0.58 : LREAL;
      AI_P_masla_smazki_nizkoe_LW AT %QL0.59 : LREAL;
      AI_P_masla_smazki_nizkoe_command AT %QW0.55 : UINT;
      AI_P_masla_smazki_nizkoe_newHL AT %QL0.60 : LREAL;
      AI_P_masla_smazki_nizkoe_newLA AT %QL0.61 : LREAL;
      AI_P_masla_smazki_nizkoe_newLL AT %QL0.62 : LREAL;
      AI_P_masla_smazki_nizkoe_newLW AT %QL0.63 : LREAL;
      AI_P_masla_smazki_nizkoe_status AT %QD0.64 : UDINT;
      AI_P_masla_smazki_nizkoe_value AT %QL0.65 : LREAL;
      AI_P_masla_smazki_srednee_posle_nasosov_HL AT %QL0.67 : LREAL;
      AI_P_masla_smazki_srednee_posle_nasosov_LL AT %QL0.68 : LREAL;
      AI_P_masla_smazki_srednee_posle_nasosov_LW AT %QL0.69 : LREAL;
      AI_P_masla_smazki_srednee_posle_nasosov_command AT %QW0.66 : UINT;
      AI_P_masla_smazki_srednee_posle_nasosov_newHL AT %QL0.70 : LREAL;
      AI_P_masla_smazki_srednee_posle_nasosov_newLL AT %QL0.71 : LREAL;
      AI_P_masla_smazki_srednee_posle_nasosov_newLW AT %QL0.72 : LREAL;
      AI_P_masla_smazki_srednee_posle_nasosov_status AT %QD0.73 : UDINT;
      AI_P_masla_smazki_srednee_posle_nasosov_value AT %QL0.74 : LREAL;
      AI_P_masla_uplotneniia_HL AT %QL0.76 : LREAL;
      AI_P_masla_uplotneniia_LL AT %QL0.77 : LREAL;
      AI_P_masla_uplotneniia_command AT %QW0.75 : UINT;
      AI_P_masla_uplotneniia_newHL AT %QL0.78 : LREAL;
      AI_P_masla_uplotneniia_newLL AT %QL0.79 : LREAL;
      AI_P_masla_uplotneniia_status AT %QD0.80 : UDINT;
      AI_P_masla_uplotneniia_value AT %QL0.81 : LREAL;
      AI_Reaktivnaia_moshchnost_HL AT %QL0.83 : LREAL;
      AI_Reaktivnaia_moshchnost_LL AT %QL0.84 : LREAL;
      AI_Reaktivnaia_moshchnost_command AT %QW0.82 : UINT;
      AI_Reaktivnaia_moshchnost_newHL AT %QL0.85 : LREAL;
      AI_Reaktivnaia_moshchnost_newLL AT %QL0.86 : LREAL;
      AI_Reaktivnaia_moshchnost_status AT %QD0.87 : UDINT;
      AI_Reaktivnaia_moshchnost_value AT %QL0.88 : LREAL;
      AI_T_aktivnogo_zheleza_statora_1_k_HL AT %QL0.90 : LREAL;
      AI_T_aktivnogo_zheleza_statora_1_k_LL AT %QL0.91 : LREAL;
      AI_T_aktivnogo_zheleza_statora_1_k_command AT %QW0.89 : UINT;
      AI_T_aktivnogo_zheleza_statora_1_k_newHL AT %QL0.92 : LREAL;
      AI_T_aktivnogo_zheleza_statora_1_k_newLL AT %QL0.93 : LREAL;
      AI_T_aktivnogo_zheleza_statora_1_k_status AT %QD0.94 : UDINT;
      AI_T_aktivnogo_zheleza_statora_1_k_value AT %QL0.95 : LREAL;
      AI_T_aktivnogo_zheleza_statora_2_k_HL AT %QL0.97 : LREAL;
      AI_T_aktivnogo_zheleza_statora_2_k_LL AT %QL0.98 : LREAL;
      AI_T_aktivnogo_zheleza_statora_2_k_command AT %QW0.96 : UINT;
      AI_T_aktivnogo_zheleza_statora_2_k_newHL AT %QL0.99 : LREAL;
      AI_T_aktivnogo_zheleza_statora_2_k_newLL AT %QL0.100 : LREAL;
      AI_T_aktivnogo_zheleza_statora_2_k_status AT %QD0.101 : UDINT;
      AI_T_aktivnogo_zheleza_statora_2_k_value AT %QL0.102 : LREAL;
      AI_T_aktivnogo_zheleza_statora_3_k_HL AT %QL0.104 : LREAL;
      AI_T_aktivnogo_zheleza_statora_3_k_LL AT %QL0.105 : LREAL;
      AI_T_aktivnogo_zheleza_statora_3_k_command AT %QW0.103 : UINT;
      AI_T_aktivnogo_zheleza_statora_3_k_newHL AT %QL0.106 : LREAL;
      AI_T_aktivnogo_zheleza_statora_3_k_newLL AT %QL0.107 : LREAL;
      AI_T_aktivnogo_zheleza_statora_3_k_status AT %QD0.108 : UDINT;
      AI_T_aktivnogo_zheleza_statora_3_k_value AT %QL0.109 : LREAL;
      AI_T_clodAir_dvigatelia_t1_HL AT %QL0.111 : LREAL;
      AI_T_clodAir_dvigatelia_t1_LL AT %QL0.112 : LREAL;
      AI_T_clodAir_dvigatelia_t1_command AT %QW0.110 : UINT;
      AI_T_clodAir_dvigatelia_t1_newHL AT %QL0.113 : LREAL;
      AI_T_clodAir_dvigatelia_t1_newLL AT %QL0.114 : LREAL;
      AI_T_clodAir_dvigatelia_t1_status AT %QD0.115 : UDINT;
      AI_T_clodAir_dvigatelia_t1_value AT %QL0.116 : LREAL;
      AI_T_gaz_in_nagnetatelia_HL AT %QL0.118 : LREAL;
      AI_T_gaz_in_nagnetatelia_LL AT %QL0.119 : LREAL;
      AI_T_gaz_in_nagnetatelia_command AT %QW0.117 : UINT;
      AI_T_gaz_in_nagnetatelia_newHL AT %QL0.120 : LREAL;
      AI_T_gaz_in_nagnetatelia_newLL AT %QL0.121 : LREAL;
      AI_T_gaz_in_nagnetatelia_status AT %QD0.122 : UDINT;
      AI_T_gaz_in_nagnetatelia_value AT %QL0.123 : LREAL;
      AI_T_gaz_out_nagnetatelia_HA AT %QL0.125 : LREAL;
      AI_T_gaz_out_nagnetatelia_HL AT %QL0.126 : LREAL;
      AI_T_gaz_out_nagnetatelia_HW AT %QL0.127 : LREAL;
      AI_T_gaz_out_nagnetatelia_LL AT %QL0.128 : LREAL;
      AI_T_gaz_out_nagnetatelia_command AT %QW0.124 : UINT;
      AI_T_gaz_out_nagnetatelia_newHA AT %QL0.129 : LREAL;
      AI_T_gaz_out_nagnetatelia_newHL AT %QL0.130 : LREAL;
      AI_T_gaz_out_nagnetatelia_newHW AT %QL0.131 : LREAL;
      AI_T_gaz_out_nagnetatelia_newLL AT %QL0.132 : LREAL;
      AI_T_gaz_out_nagnetatelia_status AT %QD0.133 : UDINT;
      AI_T_gaz_out_nagnetatelia_value AT %QL0.134 : LREAL;
      AI_T_hotAir_dvigatelia_t1_HL AT %QL0.136 : LREAL;
      AI_T_hotAir_dvigatelia_t1_LL AT %QL0.137 : LREAL;
      AI_T_hotAir_dvigatelia_t1_command AT %QW0.135 : UINT;
      AI_T_hotAir_dvigatelia_t1_newHL AT %QL0.138 : LREAL;
      AI_T_hotAir_dvigatelia_t1_newLL AT %QL0.139 : LREAL;
      AI_T_hotAir_dvigatelia_t1_status AT %QD0.140 : UDINT;
      AI_T_hotAir_dvigatelia_t1_value AT %QL0.141 : LREAL;
      AI_T_masla_do_AVOM_HL AT %QL0.143 : LREAL;
      AI_T_masla_do_AVOM_LL AT %QL0.144 : LREAL;
      AI_T_masla_do_AVOM_command AT %QW0.142 : UINT;
      AI_T_masla_do_AVOM_newHL AT %QL0.145 : LREAL;
      AI_T_masla_do_AVOM_newLL AT %QL0.146 : LREAL;
      AI_T_masla_do_AVOM_status AT %QD0.147 : UDINT;
      AI_T_masla_do_AVOM_value AT %QL0.148 : LREAL;
      AI_T_masla_na_slive_perednego_opornogo_podshipnika_dvigatelia_HL AT %QL0.150 : LREAL;
      AI_T_masla_na_slive_perednego_opornogo_podshipnika_dvigatelia_LL AT %QL0.151 : LREAL;
      AI_T_masla_na_slive_perednego_opornogo_podshipnika_dvigatelia_command AT %QW0.149 : UINT;
      AI_T_masla_na_slive_perednego_opornogo_podshipnika_dvigatelia_newHL AT %QL0.152 : LREAL;
      AI_T_masla_na_slive_perednego_opornogo_podshipnika_dvigatelia_newLL AT %QL0.153 : LREAL;
      AI_T_masla_na_slive_perednego_opornogo_podshipnika_dvigatelia_status AT %QD0.154 : UDINT;
      AI_T_masla_na_slive_perednego_opornogo_podshipnika_dvigatelia_value AT %QL0.155 : LREAL;
      AI_T_masla_na_slive_zadnego_opornogo_podshipnika_dvigatelia_HL AT %QL0.157 : LREAL;
      AI_T_masla_na_slive_zadnego_opornogo_podshipnika_dvigatelia_LL AT %QL0.158 : LREAL;
      AI_T_masla_na_slive_zadnego_opornogo_podshipnika_dvigatelia_command AT %QW0.156 : UINT;
      AI_T_masla_na_slive_zadnego_opornogo_podshipnika_dvigatelia_newHL AT %QL0.159 : LREAL;
      AI_T_masla_na_slive_zadnego_opornogo_podshipnika_dvigatelia_newLL AT %QL0.160 : LREAL;
      AI_T_masla_na_slive_zadnego_opornogo_podshipnika_dvigatelia_status AT %QD0.161 : UDINT;
      AI_T_masla_na_slive_zadnego_opornogo_podshipnika_dvigatelia_value AT %QL0.162 : LREAL;
      AI_T_masla_posle_AVOM_HL AT %QL0.164 : LREAL;
      AI_T_masla_posle_AVOM_LL AT %QL0.165 : LREAL;
      AI_T_masla_posle_AVOM_command AT %QW0.163 : UINT;
      AI_T_masla_posle_AVOM_newHL AT %QL0.166 : LREAL;
      AI_T_masla_posle_AVOM_newLL AT %QL0.167 : LREAL;
      AI_T_masla_posle_AVOM_status AT %QD0.168 : UDINT;
      AI_T_masla_posle_AVOM_value AT %QL0.169 : LREAL;
      AI_T_masla_v_maslobake_HL AT %QL0.171 : LREAL;
      AI_T_masla_v_maslobake_HW AT %QL0.172 : LREAL;
      AI_T_masla_v_maslobake_LL AT %QL0.173 : LREAL;
      AI_T_masla_v_maslobake_LW AT %QL0.174 : LREAL;
      AI_T_masla_v_maslobake_command AT %QW0.170 : UINT;
      AI_T_masla_v_maslobake_newHL AT %QL0.175 : LREAL;
      AI_T_masla_v_maslobake_newHW AT %QL0.176 : LREAL;
      AI_T_masla_v_maslobake_newLL AT %QL0.177 : LREAL;
      AI_T_masla_v_maslobake_newLW AT %QL0.178 : LREAL;
      AI_T_masla_v_maslobake_status AT %QD0.179 : UDINT;
      AI_T_masla_v_maslobake_value AT %QL0.180 : LREAL;
      AI_T_obmotki_fazy_1_k_HL AT %QL0.182 : LREAL;
      AI_T_obmotki_fazy_1_k_LL AT %QL0.183 : LREAL;
      AI_T_obmotki_fazy_1_k_command AT %QW0.181 : UINT;
      AI_T_obmotki_fazy_1_k_newHL AT %QL0.184 : LREAL;
      AI_T_obmotki_fazy_1_k_newLL AT %QL0.185 : LREAL;
      AI_T_obmotki_fazy_1_k_status AT %QD0.186 : UDINT;
      AI_T_obmotki_fazy_1_k_value AT %QL0.187 : LREAL;
      AI_T_obmotki_fazy_2_k_HL AT %QL0.189 : LREAL;
      AI_T_obmotki_fazy_2_k_LL AT %QL0.190 : LREAL;
      AI_T_obmotki_fazy_2_k_command AT %QW0.188 : UINT;
      AI_T_obmotki_fazy_2_k_newHL AT %QL0.191 : LREAL;
      AI_T_obmotki_fazy_2_k_newLL AT %QL0.192 : LREAL;
      AI_T_obmotki_fazy_2_k_status AT %QD0.193 : UDINT;
      AI_T_obmotki_fazy_2_k_value AT %QL0.194 : LREAL;
      AI_T_obmotki_fazy_3_k_HL AT %QL0.196 : LREAL;
      AI_T_obmotki_fazy_3_k_LL AT %QL0.197 : LREAL;
      AI_T_obmotki_fazy_3_k_command AT %QW0.195 : UINT;
      AI_T_obmotki_fazy_3_k_newHL AT %QL0.198 : LREAL;
      AI_T_obmotki_fazy_3_k_newLL AT %QL0.199 : LREAL;
      AI_T_obmotki_fazy_3_k_status AT %QD0.200 : UDINT;
      AI_T_obmotki_fazy_3_k_value AT %QL0.201 : LREAL;
      AI_T_oporno_upornogo_podshipnika_nagnetatelia_t4_HA AT %QL0.203 : LREAL;
      AI_T_oporno_upornogo_podshipnika_nagnetatelia_t4_HL AT %QL0.204 : LREAL;
      AI_T_oporno_upornogo_podshipnika_nagnetatelia_t4_HW AT %QL0.205 : LREAL;
      AI_T_oporno_upornogo_podshipnika_nagnetatelia_t4_LL AT %QL0.206 : LREAL;
      AI_T_oporno_upornogo_podshipnika_nagnetatelia_t4_command AT %QW0.202 : UINT;
      AI_T_oporno_upornogo_podshipnika_nagnetatelia_t4_newHA AT %QL0.207 : LREAL;
      AI_T_oporno_upornogo_podshipnika_nagnetatelia_t4_newHL AT %QL0.208 : LREAL;
      AI_T_oporno_upornogo_podshipnika_nagnetatelia_t4_newHW AT %QL0.209 : LREAL;
      AI_T_oporno_upornogo_podshipnika_nagnetatelia_t4_newLL AT %QL0.210 : LREAL;
      AI_T_oporno_upornogo_podshipnika_nagnetatelia_t4_status AT %QD0.211 : UDINT;
      AI_T_oporno_upornogo_podshipnika_nagnetatelia_t4_value AT %QL0.212 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t1_HA AT %QL0.214 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t1_HL AT %QL0.215 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t1_HW AT %QL0.216 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t1_LL AT %QL0.217 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t1_command AT %QW0.213 : UINT;
      AI_T_opornogo_podshipnika_nagnetatelia_t1_newHA AT %QL0.218 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t1_newHL AT %QL0.219 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t1_newHW AT %QL0.220 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t1_newLL AT %QL0.221 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t1_status AT %QD0.222 : UDINT;
      AI_T_opornogo_podshipnika_nagnetatelia_t1_value AT %QL0.223 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t2_HA AT %QL0.225 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t2_HL AT %QL0.226 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t2_HW AT %QL0.227 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t2_LL AT %QL0.228 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t2_command AT %QW0.224 : UINT;
      AI_T_opornogo_podshipnika_nagnetatelia_t2_newHA AT %QL0.229 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t2_newHL AT %QL0.230 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t2_newHW AT %QL0.231 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t2_newLL AT %QL0.232 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t2_status AT %QD0.233 : UDINT;
      AI_T_opornogo_podshipnika_nagnetatelia_t2_value AT %QL0.234 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t3_HA AT %QL0.236 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t3_HL AT %QL0.237 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t3_HW AT %QL0.238 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t3_LL AT %QL0.239 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t3_command AT %QW0.235 : UINT;
      AI_T_opornogo_podshipnika_nagnetatelia_t3_newHA AT %QL0.240 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t3_newHL AT %QL0.241 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t3_newHW AT %QL0.242 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t3_newLL AT %QL0.243 : LREAL;
      AI_T_opornogo_podshipnika_nagnetatelia_t3_status AT %QD0.244 : UDINT;
      AI_T_opornogo_podshipnika_nagnetatelia_t3_value AT %QL0.245 : LREAL;
      AI_T_perednego_opornogo_podshipnika_dvigatelia_t1_HA AT %QL0.247 : LREAL;
      AI_T_perednego_opornogo_podshipnika_dvigatelia_t1_HL AT %QL0.248 : LREAL;
      AI_T_perednego_opornogo_podshipnika_dvigatelia_t1_HW AT %QL0.249 : LREAL;
      AI_T_perednego_opornogo_podshipnika_dvigatelia_t1_LL AT %QL0.250 : LREAL;
      AI_T_perednego_opornogo_podshipnika_dvigatelia_t1_command AT %QW0.246 : UINT;
      AI_T_perednego_opornogo_podshipnika_dvigatelia_t1_newHA AT %QL0.251 : LREAL;
      AI_T_perednego_opornogo_podshipnika_dvigatelia_t1_newHL AT %QL0.252 : LREAL;
      AI_T_perednego_opornogo_podshipnika_dvigatelia_t1_newHW AT %QL0.253 : LREAL;
      AI_T_perednego_opornogo_podshipnika_dvigatelia_t1_newLL AT %QL0.254 : LREAL;
      AI_T_perednego_opornogo_podshipnika_dvigatelia_t1_status AT %QD0.255 : UDINT;
      AI_T_perednego_opornogo_podshipnika_dvigatelia_t1_value AT %QL0.256 : LREAL;
      AI_T_podshipnika_reduktora_t1_HA AT %QL0.258 : LREAL;
      AI_T_podshipnika_reduktora_t1_HL AT %QL0.259 : LREAL;
      AI_T_podshipnika_reduktora_t1_HW AT %QL0.260 : LREAL;
      AI_T_podshipnika_reduktora_t1_LL AT %QL0.261 : LREAL;
      AI_T_podshipnika_reduktora_t1_command AT %QW0.257 : UINT;
      AI_T_podshipnika_reduktora_t1_newHA AT %QL0.262 : LREAL;
      AI_T_podshipnika_reduktora_t1_newHL AT %QL0.263 : LREAL;
      AI_T_podshipnika_reduktora_t1_newHW AT %QL0.264 : LREAL;
      AI_T_podshipnika_reduktora_t1_newLL AT %QL0.265 : LREAL;
      AI_T_podshipnika_reduktora_t1_status AT %QD0.266 : UDINT;
      AI_T_podshipnika_reduktora_t1_value AT %QL0.267 : LREAL;
      AI_T_podshipnika_reduktora_t2_HA AT %QL0.269 : LREAL;
      AI_T_podshipnika_reduktora_t2_HL AT %QL0.270 : LREAL;
      AI_T_podshipnika_reduktora_t2_HW AT %QL0.271 : LREAL;
      AI_T_podshipnika_reduktora_t2_LL AT %QL0.272 : LREAL;
      AI_T_podshipnika_reduktora_t2_command AT %QW0.268 : UINT;
      AI_T_podshipnika_reduktora_t2_newHA AT %QL0.273 : LREAL;
      AI_T_podshipnika_reduktora_t2_newHL AT %QL0.274 : LREAL;
      AI_T_podshipnika_reduktora_t2_newHW AT %QL0.275 : LREAL;
      AI_T_podshipnika_reduktora_t2_newLL AT %QL0.276 : LREAL;
      AI_T_podshipnika_reduktora_t2_status AT %QD0.277 : UDINT;
      AI_T_podshipnika_reduktora_t2_value AT %QL0.278 : LREAL;
      AI_T_podshipnika_reduktora_t3_HA AT %QL0.280 : LREAL;
      AI_T_podshipnika_reduktora_t3_HL AT %QL0.281 : LREAL;
      AI_T_podshipnika_reduktora_t3_HW AT %QL0.282 : LREAL;
      AI_T_podshipnika_reduktora_t3_LL AT %QL0.283 : LREAL;
      AI_T_podshipnika_reduktora_t3_command AT %QW0.279 : UINT;
      AI_T_podshipnika_reduktora_t3_newHA AT %QL0.284 : LREAL;
      AI_T_podshipnika_reduktora_t3_newHL AT %QL0.285 : LREAL;
      AI_T_podshipnika_reduktora_t3_newHW AT %QL0.286 : LREAL;
      AI_T_podshipnika_reduktora_t3_newLL AT %QL0.287 : LREAL;
      AI_T_podshipnika_reduktora_t3_status AT %QD0.288 : UDINT;
      AI_T_podshipnika_reduktora_t3_value AT %QL0.289 : LREAL;
      AI_T_podshipnika_reduktora_t4_HA AT %QL0.291 : LREAL;
      AI_T_podshipnika_reduktora_t4_HL AT %QL0.292 : LREAL;
      AI_T_podshipnika_reduktora_t4_HW AT %QL0.293 : LREAL;
      AI_T_podshipnika_reduktora_t4_LL AT %QL0.294 : LREAL;
      AI_T_podshipnika_reduktora_t4_command AT %QW0.290 : UINT;
      AI_T_podshipnika_reduktora_t4_newHA AT %QL0.295 : LREAL;
      AI_T_podshipnika_reduktora_t4_newHL AT %QL0.296 : LREAL;
      AI_T_podshipnika_reduktora_t4_newHW AT %QL0.297 : LREAL;
      AI_T_podshipnika_reduktora_t4_newLL AT %QL0.298 : LREAL;
      AI_T_podshipnika_reduktora_t4_status AT %QD0.299 : UDINT;
      AI_T_podshipnika_reduktora_t4_value AT %QL0.300 : LREAL;
      AI_T_zadnego_opornogo_podshipnika_dvigatelia_t2_HA AT %QL0.302 : LREAL;
      AI_T_zadnego_opornogo_podshipnika_dvigatelia_t2_HL AT %QL0.303 : LREAL;
      AI_T_zadnego_opornogo_podshipnika_dvigatelia_t2_HW AT %QL0.304 : LREAL;
      AI_T_zadnego_opornogo_podshipnika_dvigatelia_t2_LL AT %QL0.305 : LREAL;
      AI_T_zadnego_opornogo_podshipnika_dvigatelia_t2_command AT %QW0.301 : UINT;
      AI_T_zadnego_opornogo_podshipnika_dvigatelia_t2_newHA AT %QL0.306 : LREAL;
      AI_T_zadnego_opornogo_podshipnika_dvigatelia_t2_newHL AT %QL0.307 : LREAL;
      AI_T_zadnego_opornogo_podshipnika_dvigatelia_t2_newHW AT %QL0.308 : LREAL;
      AI_T_zadnego_opornogo_podshipnika_dvigatelia_t2_newLL AT %QL0.309 : LREAL;
      AI_T_zadnego_opornogo_podshipnika_dvigatelia_t2_status AT %QD0.310 : UDINT;
      AI_T_zadnego_opornogo_podshipnika_dvigatelia_t2_value AT %QL0.311 : LREAL;
      AI_Tok_statora_elektrodvigatelia_HL AT %QL0.313 : LREAL;
      AI_Tok_statora_elektrodvigatelia_LL AT %QL0.314 : LREAL;
      AI_Tok_statora_elektrodvigatelia_command AT %QW0.312 : UINT;
      AI_Tok_statora_elektrodvigatelia_newHL AT %QL0.315 : LREAL;
      AI_Tok_statora_elektrodvigatelia_newLL AT %QL0.316 : LREAL;
      AI_Tok_statora_elektrodvigatelia_status AT %QD0.317 : UDINT;
      AI_Tok_statora_elektrodvigatelia_value AT %QL0.318 : LREAL;
      AI_Tok_vozbuzhdeniia_vozbuditelia_HL AT %QL0.320 : LREAL;
      AI_Tok_vozbuzhdeniia_vozbuditelia_LL AT %QL0.321 : LREAL;
      AI_Tok_vozbuzhdeniia_vozbuditelia_command AT %QW0.319 : UINT;
      AI_Tok_vozbuzhdeniia_vozbuditelia_newHL AT %QL0.322 : LREAL;
      AI_Tok_vozbuzhdeniia_vozbuditelia_newLL AT %QL0.323 : LREAL;
      AI_Tok_vozbuzhdeniia_vozbuditelia_status AT %QD0.324 : UDINT;
      AI_Tok_vozbuzhdeniia_vozbuditelia_value AT %QL0.325 : LREAL;
      AI_Uroven_masla_v_maslobake_HL AT %QL0.327 : LREAL;
      AI_Uroven_masla_v_maslobake_HW AT %QL0.328 : LREAL;
      AI_Uroven_masla_v_maslobake_LA AT %QL0.329 : LREAL;
      AI_Uroven_masla_v_maslobake_LL AT %QL0.330 : LREAL;
      AI_Uroven_masla_v_maslobake_LW AT %QL0.331 : LREAL;
      AI_Uroven_masla_v_maslobake_command AT %QW0.326 : UINT;
      AI_Uroven_masla_v_maslobake_newHL AT %QL0.332 : LREAL;
      AI_Uroven_masla_v_maslobake_newHW AT %QL0.333 : LREAL;
      AI_Uroven_masla_v_maslobake_newLA AT %QL0.334 : LREAL;
      AI_Uroven_masla_v_maslobake_newLL AT %QL0.335 : LREAL;
      AI_Uroven_masla_v_maslobake_newLW AT %QL0.336 : LREAL;
      AI_Uroven_masla_v_maslobake_status AT %QD0.337 : UDINT;
      AI_Uroven_masla_v_maslobake_value AT %QL0.338 : LREAL;
      AI_Vibratciia_STD_t1_HA AT %QL0.384 : LREAL;
      AI_Vibratciia_STD_t1_HL AT %QL0.385 : LREAL;
      AI_Vibratciia_STD_t1_HW AT %QL0.386 : LREAL;
      AI_Vibratciia_STD_t1_LL AT %QL0.387 : LREAL;
      AI_Vibratciia_STD_t1_command AT %QW0.383 : UINT;
      AI_Vibratciia_STD_t1_newHA AT %QL0.388 : LREAL;
      AI_Vibratciia_STD_t1_newHL AT %QL0.389 : LREAL;
      AI_Vibratciia_STD_t1_newHW AT %QL0.390 : LREAL;
      AI_Vibratciia_STD_t1_newLL AT %QL0.391 : LREAL;
      AI_Vibratciia_STD_t1_status AT %QD0.392 : UDINT;
      AI_Vibratciia_STD_t1_value AT %QL0.393 : LREAL;
      AI_Vibratciia_STD_t2_HA AT %QL0.395 : LREAL;
      AI_Vibratciia_STD_t2_HL AT %QL0.396 : LREAL;
      AI_Vibratciia_STD_t2_HW AT %QL0.397 : LREAL;
      AI_Vibratciia_STD_t2_LL AT %QL0.398 : LREAL;
      AI_Vibratciia_STD_t2_command AT %QW0.394 : UINT;
      AI_Vibratciia_STD_t2_newHA AT %QL0.399 : LREAL;
      AI_Vibratciia_STD_t2_newHL AT %QL0.400 : LREAL;
      AI_Vibratciia_STD_t2_newHW AT %QL0.401 : LREAL;
      AI_Vibratciia_STD_t2_newLL AT %QL0.402 : LREAL;
      AI_Vibratciia_STD_t2_status AT %QD0.403 : UDINT;
      AI_Vibratciia_STD_t2_value AT %QL0.404 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t1_HA AT %QL0.340 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t1_HL AT %QL0.341 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t1_HW AT %QL0.342 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t1_LL AT %QL0.343 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t1_command AT %QW0.339 : UINT;
      AI_Vibratciia_rotora_nagnetatelia_t1_newHA AT %QL0.344 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t1_newHL AT %QL0.345 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t1_newHW AT %QL0.346 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t1_newLL AT %QL0.347 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t1_status AT %QD0.348 : UDINT;
      AI_Vibratciia_rotora_nagnetatelia_t1_value AT %QL0.349 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t2_HA AT %QL0.351 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t2_HL AT %QL0.352 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t2_HW AT %QL0.353 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t2_LL AT %QL0.354 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t2_command AT %QW0.350 : UINT;
      AI_Vibratciia_rotora_nagnetatelia_t2_newHA AT %QL0.355 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t2_newHL AT %QL0.356 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t2_newHW AT %QL0.357 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t2_newLL AT %QL0.358 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t2_status AT %QD0.359 : UDINT;
      AI_Vibratciia_rotora_nagnetatelia_t2_value AT %QL0.360 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t3_HA AT %QL0.362 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t3_HL AT %QL0.363 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t3_HW AT %QL0.364 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t3_LL AT %QL0.365 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t3_command AT %QW0.361 : UINT;
      AI_Vibratciia_rotora_nagnetatelia_t3_newHA AT %QL0.366 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t3_newHL AT %QL0.367 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t3_newHW AT %QL0.368 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t3_newLL AT %QL0.369 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t3_status AT %QD0.370 : UDINT;
      AI_Vibratciia_rotora_nagnetatelia_t3_value AT %QL0.371 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t4_HA AT %QL0.373 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t4_HL AT %QL0.374 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t4_HW AT %QL0.375 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t4_LL AT %QL0.376 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t4_command AT %QW0.372 : UINT;
      AI_Vibratciia_rotora_nagnetatelia_t4_newHA AT %QL0.377 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t4_newHL AT %QL0.378 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t4_newHW AT %QL0.379 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t4_newLL AT %QL0.380 : LREAL;
      AI_Vibratciia_rotora_nagnetatelia_t4_status AT %QD0.381 : UDINT;
      AI_Vibratciia_rotora_nagnetatelia_t4_value AT %QL0.382 : LREAL;
      AI_VoltageSHU_osnovnoi_vvod_HL AT %QL0.406 : LREAL;
      AI_VoltageSHU_osnovnoi_vvod_HW AT %QL0.407 : LREAL;
      AI_VoltageSHU_osnovnoi_vvod_LL AT %QL0.408 : LREAL;
      AI_VoltageSHU_osnovnoi_vvod_LW AT %QL0.409 : LREAL;
      AI_VoltageSHU_osnovnoi_vvod_command AT %QW0.405 : UINT;
      AI_VoltageSHU_osnovnoi_vvod_newHL AT %QL0.410 : LREAL;
      AI_VoltageSHU_osnovnoi_vvod_newHW AT %QL0.411 : LREAL;
      AI_VoltageSHU_osnovnoi_vvod_newLL AT %QL0.412 : LREAL;
      AI_VoltageSHU_osnovnoi_vvod_newLW AT %QL0.413 : LREAL;
      AI_VoltageSHU_osnovnoi_vvod_status AT %QD0.414 : UDINT;
      AI_VoltageSHU_osnovnoi_vvod_value AT %QL0.415 : LREAL;
      AI_VoltageSHU_rezervnyi_vvod_HL AT %QL0.417 : LREAL;
      AI_VoltageSHU_rezervnyi_vvod_HW AT %QL0.418 : LREAL;
      AI_VoltageSHU_rezervnyi_vvod_LL AT %QL0.419 : LREAL;
      AI_VoltageSHU_rezervnyi_vvod_LW AT %QL0.420 : LREAL;
      AI_VoltageSHU_rezervnyi_vvod_command AT %QW0.416 : UINT;
      AI_VoltageSHU_rezervnyi_vvod_newHL AT %QL0.421 : LREAL;
      AI_VoltageSHU_rezervnyi_vvod_newHW AT %QL0.422 : LREAL;
      AI_VoltageSHU_rezervnyi_vvod_newLL AT %QL0.423 : LREAL;
      AI_VoltageSHU_rezervnyi_vvod_newLW AT %QL0.424 : LREAL;
      AI_VoltageSHU_rezervnyi_vvod_status AT %QD0.425 : UDINT;
      AI_VoltageSHU_rezervnyi_vvod_value AT %QL0.426 : LREAL;
      AI_dP_gaza_na_konfuzore_nagnetatelia_HL AT %QL0.9 : LREAL;
      AI_dP_gaza_na_konfuzore_nagnetatelia_LL AT %QL0.10 : LREAL;
      AI_dP_gaza_na_konfuzore_nagnetatelia_command AT %QW0.8 : UINT;
      AI_dP_gaza_na_konfuzore_nagnetatelia_newHL AT %QL0.11 : LREAL;
      AI_dP_gaza_na_konfuzore_nagnetatelia_newLL AT %QL0.12 : LREAL;
      AI_dP_gaza_na_konfuzore_nagnetatelia_status AT %QD0.13 : UDINT;
      AI_dP_gaza_na_konfuzore_nagnetatelia_value AT %QL0.14 : LREAL;
      AI_dPmaslo_gaz_HL AT %QL0.16 : LREAL;
      AI_dPmaslo_gaz_LA AT %QL0.17 : LREAL;
      AI_dPmaslo_gaz_LL AT %QL0.18 : LREAL;
      AI_dPmaslo_gaz_LW AT %QL0.19 : LREAL;
      AI_dPmaslo_gaz_command AT %QW0.15 : UINT;
      AI_dPmaslo_gaz_newHL AT %QL0.20 : LREAL;
      AI_dPmaslo_gaz_newLA AT %QL0.21 : LREAL;
      AI_dPmaslo_gaz_newLL AT %QL0.22 : LREAL;
      AI_dPmaslo_gaz_newLW AT %QL0.23 : LREAL;
      AI_dPmaslo_gaz_status AT %QD0.24 : UDINT;
      AI_dPmaslo_gaz_value AT %QL0.25 : LREAL;
      IM_SingleSignals_DverShkafaOtkryta_status AT %QD0.456 : UDINT;
      IM_SingleSignals_KZ_10kv_status AT %QD0.457 : UDINT;
      IM_SingleSignals_NOGPA_knopkaSHU_status AT %QD0.453 : UDINT;
      IM_SingleSignals_NS_G10_G11_status AT %QD0.481 : UDINT;
      IM_SingleSignals_NS_G13_G14_status AT %QD0.482 : UDINT;
      IM_SingleSignals_NS_G15_G16_status AT %QD0.483 : UDINT;
      IM_SingleSignals_NS_G17_status AT %QD0.484 : UDINT;
      IM_SingleSignals_NS_G18_G19_status AT %QD0.485 : UDINT;
      IM_SingleSignals_NS_G1_G2_status AT %QD0.477 : UDINT;
      IM_SingleSignals_NS_G3_G4_status AT %QD0.478 : UDINT;
      IM_SingleSignals_NS_G5_G6_status AT %QD0.479 : UDINT;
      IM_SingleSignals_NS_G7_G8_status AT %QD0.480 : UDINT;
      IM_SingleSignals_OsevoiSdvig_levo_status AT %QD0.458 : UDINT;
      IM_SingleSignals_OsevoiSdvig_pravo_status AT %QD0.459 : UDINT;
      IM_SingleSignals_P_oil_low_status AT %QD0.455 : UDINT;
      IM_SingleSignals_QF10_QF11_on_status AT %QD0.463 : UDINT;
      IM_SingleSignals_QF12_QF13_on_status AT %QD0.464 : UDINT;
      IM_SingleSignals_QF14_QF15_on_status AT %QD0.465 : UDINT;
      IM_SingleSignals_QF1_on_status AT %QD0.466 : UDINT;
      IM_SingleSignals_QF22_on_status AT %QD0.476 : UDINT;
      IM_SingleSignals_QF23_on_status AT %QD0.468 : UDINT;
      IM_SingleSignals_QF2_on_status AT %QD0.467 : UDINT;
      IM_SingleSignals_QF4_QF5_on_status AT %QD0.460 : UDINT;
      IM_SingleSignals_QF6_QF7_on_status AT %QD0.461 : UDINT;
      IM_SingleSignals_QF8_QF9_on_status AT %QD0.462 : UDINT;
      IM_SingleSignals_Vozb_AsinchHod_status AT %QD0.469 : UDINT;
      IM_SingleSignals_Vozb_ControlVozbuditela_status AT %QD0.470 : UDINT;
      IM_SingleSignals_Vozb_KontaktorON_status AT %QD0.471 : UDINT;
      IM_SingleSignals_Vozb_Overload_status AT %QD0.472 : UDINT;
      IM_SingleSignals_Vozb_ProboiVentila_status AT %QD0.473 : UDINT;
      IM_SingleSignals_Vozb_ReSynchronize_status AT %QD0.474 : UDINT;
      IM_SingleSignals_dP_gazgaz_Kran1_status AT %QD0.454 : UDINT;
      IM_SingleSignals_dP_oilgaz_low_status AT %QD0.475 : UDINT;
      IM_Ten_inCommand_ARM AT %QW0.447 : UINT;
      IM_Ten_status AT %QD0.448 : UDINT;
      IM_kran1_inCommand_ARM AT %QW0.427 : UINT;
      IM_kran1_status AT %QD0.428 : UDINT;
      IM_kran2_inCommand_ARM AT %QW0.429 : UINT;
      IM_kran2_status AT %QD0.430 : UDINT;
      IM_kran3b_inCommand_ARM AT %QW0.431 : UINT;
      IM_kran3b_status AT %QD0.432 : UDINT;
      IM_kran4_inCommand_ARM AT %QW0.433 : UINT;
      IM_kran4_status AT %QD0.434 : UDINT;
      IM_kran5_inCommand_ARM AT %QW0.435 : UINT;
      IM_kran5_status AT %QD0.436 : UDINT;
      IM_kran6_inCommand_ARM AT %QW0.437 : UINT;
      IM_kran6_status AT %QD0.438 : UDINT;
      IM_mv_inCommand_ARM AT %QW0.439 : UINT;
      IM_mv_status AT %QD0.440 : UDINT;
      IM_nu1_inCommand_ARM AT %QW0.441 : UINT;
      IM_nu1_status AT %QD0.442 : UDINT;
      IM_nu2_inCommand_ARM AT %QW0.443 : UINT;
      IM_nu2_status AT %QD0.444 : UDINT;
      IM_pns_inCommand_ARM AT %QW0.445 : UINT;
      IM_pns_status AT %QD0.446 : UDINT;
      IM_v1_Avom_inCommand_ARM AT %QW0.449 : UINT;
      IM_v1_Avom_status AT %QD0.450 : UDINT;
      IM_v2_Avom_inCommand_ARM AT %QW0.451 : UINT;
      IM_v2_Avom_status AT %QD0.452 : UDINT;
      algManager_Mode AT %QW0.732 : UINT;
      algoritms_AntiPompag_UgolVNA_Value AT %QL0.726 : LREAL;
      algoritms_AntiPompag_UgolVNA_inCommand_ARM AT %QW0.605 : UINT;
      algoritms_AntiPompag_UgolVNA_newValue AT %QL0.606 : LREAL;
      algoritms_AntiPompag_UgolVNA_status AT %QD0.725 : UDINT;
      algoritms_AntiPompag_q_Value AT %QL0.724 : LREAL;
      algoritms_AntiPompag_q_inCommand_ARM AT %QW0.604 : UINT;
      algoritms_AntiPompag_q_status AT %QD0.723 : UDINT;
      algoritms_AntiPompag_zapas_Value AT %QL0.728 : LREAL;
      algoritms_AntiPompag_zapas_inCommand_ARM AT %QW0.607 : UINT;
      algoritms_AntiPompag_zapas_status AT %QD0.727 : UDINT;
      algoritms_Apusk_Error AT %QD0.689 : UDINT;
      algoritms_Apusk_Start AT %QD0.688 : UDINT;
      algoritms_Apusk_Top AT %QD0.690 : UDINT;
      algoritms_Apusk_inCommand_ARM AT %QW0.555 : UINT;
      algoritms_Apusk_status AT %QD0.687 : UDINT;
      algoritms_AutoAvom_hysteresis_Value AT %QL0.716 : LREAL;
      algoritms_AutoAvom_hysteresis_inCommand_ARM AT %QW0.556 : UINT;
      algoritms_AutoAvom_hysteresis_newValue AT %QL0.557 : LREAL;
      algoritms_AutoAvom_hysteresis_status AT %QD0.715 : UDINT;
      algoritms_AutoAvom_inCommand_ARM AT %QW0.562 : UINT;
      algoritms_AutoAvom_on1Temperature_Value AT %QL0.712 : LREAL;
      algoritms_AutoAvom_on1Temperature_inCommand_ARM AT %QW0.558 : UINT;
      algoritms_AutoAvom_on1Temperature_newValue AT %QL0.559 : LREAL;
      algoritms_AutoAvom_on1Temperature_status AT %QD0.711 : UDINT;
      algoritms_AutoAvom_on2Temperature_Value AT %QL0.714 : LREAL;
      algoritms_AutoAvom_on2Temperature_inCommand_ARM AT %QW0.560 : UINT;
      algoritms_AutoAvom_on2Temperature_newValue AT %QL0.561 : LREAL;
      algoritms_AutoAvom_on2Temperature_status AT %QD0.713 : UDINT;
      algoritms_AutoAvom_status AT %QD0.710 : UDINT;
      algoritms_AutoPns_OffTimer AT %QW0.701 : UINT;
      algoritms_AutoPns_OnTimer AT %QW0.700 : UINT;
      algoritms_AutoPns_Ust_Run_Value AT %QL0.703 : LREAL;
      algoritms_AutoPns_Ust_Run_inCommand_ARM AT %QW0.567 : UINT;
      algoritms_AutoPns_Ust_Run_newValue AT %QL0.568 : LREAL;
      algoritms_AutoPns_Ust_Run_status AT %QD0.702 : UDINT;
      algoritms_AutoPns_Ust_Stop_Value AT %QL0.705 : LREAL;
      algoritms_AutoPns_Ust_Stop_inCommand_ARM AT %QW0.569 : UINT;
      algoritms_AutoPns_Ust_Stop_newValue AT %QL0.570 : LREAL;
      algoritms_AutoPns_Ust_Stop_status AT %QD0.704 : UDINT;
      algoritms_AutoPns_inCommand_ARM AT %QW0.571 : UINT;
      algoritms_AutoPns_status AT %QD0.699 : UDINT;
      algoritms_AutoTen_inCommand_ARM AT %QW0.610 : UINT;
      algoritms_AutoTen_offTemperature_Value AT %QL0.721 : LREAL;
      algoritms_AutoTen_offTemperature_inCommand_ARM AT %QW0.608 : UINT;
      algoritms_AutoTen_offTemperature_newValue AT %QL0.609 : LREAL;
      algoritms_AutoTen_offTemperature_status AT %QD0.720 : UDINT;
      algoritms_AutoTen_status AT %QD0.719 : UDINT;
      algoritms_Remont_inCommand_ARM AT %QW0.585 : UINT;
      algoritms_Remont_status AT %QD0.718 : UDINT;
      algoritms_RingToLine_Error AT %QD0.667 : UDINT;
      algoritms_RingToLine_Start AT %QD0.666 : UDINT;
      algoritms_RingToLine_Top AT %QD0.668 : UDINT;
      algoritms_RingToLine_inCommand_ARM AT %QW0.586 : UINT;
      algoritms_RingToLine_status AT %QD0.665 : UDINT;
      algoritms_SemiAutoPusk_Error AT %QD0.693 : UDINT;
      algoritms_SemiAutoPusk_Start AT %QD0.692 : UDINT;
      algoritms_SemiAutoPusk_Top AT %QD0.694 : UDINT;
      algoritms_SemiAutoPusk_cmdRun1ph_inCommand_ARM AT %QW0.587 : UINT;
      algoritms_SemiAutoPusk_cmdRun1ph_status AT %QD0.695 : UDINT;
      algoritms_SemiAutoPusk_cmdRun2ph_inCommand_ARM AT %QW0.588 : UINT;
      algoritms_SemiAutoPusk_cmdRun2ph_status AT %QD0.696 : UDINT;
      algoritms_SemiAutoPusk_cmdRun3ph_inCommand_ARM AT %QW0.589 : UINT;
      algoritms_SemiAutoPusk_cmdRun3ph_status AT %QD0.697 : UDINT;
      algoritms_SemiAutoPusk_cmdRun4ph_inCommand_ARM AT %QW0.590 : UINT;
      algoritms_SemiAutoPusk_cmdRun4ph_status AT %QD0.698 : UDINT;
      algoritms_SemiAutoPusk_inCommand_ARM AT %QW0.591 : UINT;
      algoritms_SemiAutoPusk_status AT %QD0.691 : UDINT;
      algoritms_TestProtection_inCommand_ARM AT %QW0.600 : UINT;
      algoritms_TestProtection_status AT %QD0.717 : UDINT;
      algoritms_ao_Error AT %QD0.617 : UDINT;
      algoritms_ao_Start AT %QD0.616 : UDINT;
      algoritms_ao_Top AT %QD0.618 : UDINT;
      algoritms_ao_inCommand_ARM AT %QW0.554 : UINT;
      algoritms_ao_status AT %QD0.619 : UDINT;
      algoritms_ao_waitKran_timer AT %QW0.620 : UINT;
      algoritms_autoNu_NotHasRezervNU AT %QX0.729 : BOOL;
      algoritms_autoNu_Ust_Swap_Value AT %QL0.708 : LREAL;
      algoritms_autoNu_Ust_Swap_inCommand_ARM AT %QW0.563 : UINT;
      algoritms_autoNu_Ust_Swap_newValue AT %QL0.564 : LREAL;
      algoritms_autoNu_Ust_Swap_status AT %QD0.707 : UDINT;
      algoritms_autoNu_inCommand_ARM AT %QW0.566 : UINT;
      algoritms_autoNu_mainNU_inCommand_ARM AT %QW0.565 : UINT;
      algoritms_autoNu_mainNU_status AT %QD0.722 : UDINT;
      algoritms_autoNu_status AT %QD0.706 : UDINT;
      algoritms_engineRun_BreakPuskTimer_timer AT %QW0.657 : UINT;
      algoritms_engineRun_Error AT %QD0.655 : UDINT;
      algoritms_engineRun_Start AT %QD0.654 : UDINT;
      algoritms_engineRun_Top AT %QD0.656 : UDINT;
      algoritms_engineRun_inCommand_ARM AT %QW0.572 : UINT;
      algoritms_engineRun_status AT %QD0.653 : UDINT;
      algoritms_filling_BreakPuskTimer_timer AT %QW0.662 : UINT;
      algoritms_filling_Error AT %QD0.660 : UDINT;
      algoritms_filling_Start AT %QD0.659 : UDINT;
      algoritms_filling_Top AT %QD0.661 : UDINT;
      algoritms_filling_inCommand_ARM AT %QW0.573 : UINT;
      algoritms_filling_status AT %QD0.658 : UDINT;
      algoritms_filling_waitAfterKran4_timer AT %QW0.663 : UINT;
      algoritms_filling_waitAfterKran5_timer AT %QW0.664 : UINT;
      algoritms_no_Error AT %QD0.612 : UDINT;
      algoritms_no_Start AT %QD0.611 : UDINT;
      algoritms_no_Top AT %QD0.613 : UDINT;
      algoritms_no_inCommand_ARM AT %QW0.574 : UINT;
      algoritms_no_status AT %QD0.614 : UDINT;
      algoritms_no_waitCloseKran_timer AT %QW0.615 : UINT;
      algoritms_ppu_Error AT %QD0.643 : UDINT;
      algoritms_ppu_Start AT %QD0.642 : UDINT;
      algoritms_ppu_Top AT %QD0.644 : UDINT;
      algoritms_ppu_inCommand_ARM AT %QW0.575 : UINT;
      algoritms_ppu_status AT %QD0.641 : UDINT;
      algoritms_puskK_Error AT %QD0.673 : UDINT;
      algoritms_puskK_Start AT %QD0.672 : UDINT;
      algoritms_puskK_Top AT %QD0.674 : UDINT;
      algoritms_puskK_inCommand_ARM AT %QW0.578 : UINT;
      algoritms_puskK_questionFilling_inCommand_ARM AT %QW0.576 : UINT;
      algoritms_puskK_questionFilling_status AT %QD0.677 : UDINT;
      algoritms_puskK_questionUnload_inCommand_ARM AT %QW0.577 : UINT;
      algoritms_puskK_questionUnload_status AT %QD0.678 : UDINT;
      algoritms_puskK_status AT %QD0.671 : UDINT;
      algoritms_puskK_wait720_timer AT %QW0.676 : UINT;
      algoritms_puskOilSystem_BreakPuskTimer_Poil_timer AT %QW0.649 : UINT;
      algoritms_puskOilSystem_BreakPuskTimer_dPmg_timer AT %QW0.650 : UINT;
      algoritms_puskOilSystem_Error AT %QD0.647 : UDINT;
      algoritms_puskOilSystem_Start AT %QD0.646 : UDINT;
      algoritms_puskOilSystem_Top AT %QD0.648 : UDINT;
      algoritms_puskOilSystem_Ust_dPmg_Value AT %QL0.652 : LREAL;
      algoritms_puskOilSystem_Ust_dPmg_inCommand_ARM AT %QW0.579 : UINT;
      algoritms_puskOilSystem_Ust_dPmg_newValue AT %QL0.580 : LREAL;
      algoritms_puskOilSystem_Ust_dPmg_status AT %QD0.651 : UDINT;
      algoritms_puskOilSystem_inCommand_ARM AT %QW0.581 : UINT;
      algoritms_puskOilSystem_status AT %QD0.645 : UDINT;
      algoritms_puskV_Error AT %QD0.681 : UDINT;
      algoritms_puskV_Start AT %QD0.680 : UDINT;
      algoritms_puskV_Top AT %QD0.682 : UDINT;
      algoritms_puskV_inCommand_ARM AT %QW0.584 : UINT;
      algoritms_puskV_questionFilling_inCommand_ARM AT %QW0.582 : UINT;
      algoritms_puskV_questionFilling_status AT %QD0.685 : UDINT;
      algoritms_puskV_questionMVoff_inCommand_ARM AT %QW0.583 : UINT;
      algoritms_puskV_questionMVoff_status AT %QD0.686 : UDINT;
      algoritms_puskV_status AT %QD0.679 : UDINT;
      algoritms_puskV_wait600_timer AT %QW0.684 : UINT;
      algoritms_testIm_TypeSwitch_inCommand_ARM AT %QW0.596 : UINT;
      algoritms_testIm_TypeSwitch_status AT %QD0.640 : UDINT;
      algoritms_testIm_inCommand_ARM AT %QW0.597 : UINT;
      algoritms_testIm_status AT %QD0.639 : UDINT;
      algoritms_testPms_BreakTest_timer AT %QW0.631 : UINT;
      algoritms_testPms_Error AT %QD0.628 : UDINT;
      algoritms_testPms_Start AT %QD0.627 : UDINT;
      algoritms_testPms_Top AT %QD0.629 : UDINT;
      algoritms_testPms_algContinue_inCommand_ARM AT %QW0.598 : UINT;
      algoritms_testPms_algContinue_status AT %QD0.669 : UDINT;
      algoritms_testPms_inCommand_ARM AT %QW0.599 : UINT;
      algoritms_testPms_status AT %QD0.630 : UDINT;
      algoritms_testdPmg_BreakTest_timer AT %QW0.636 : UINT;
      algoritms_testdPmg_Error AT %QD0.633 : UDINT;
      algoritms_testdPmg_Start AT %QD0.632 : UDINT;
      algoritms_testdPmg_Top AT %QD0.634 : UDINT;
      algoritms_testdPmg_Ust_dPLow_Value AT %QL0.638 : LREAL;
      algoritms_testdPmg_Ust_dPLow_inCommand_ARM AT %QW0.593 : UINT;
      algoritms_testdPmg_Ust_dPLow_newValue AT %QL0.594 : LREAL;
      algoritms_testdPmg_Ust_dPLow_status AT %QD0.637 : UDINT;
      algoritms_testdPmg_algContinue_inCommand_ARM AT %QW0.592 : UINT;
      algoritms_testdPmg_algContinue_status AT %QD0.670 : UDINT;
      algoritms_testdPmg_inCommand_ARM AT %QW0.595 : UINT;
      algoritms_testdPmg_status AT %QD0.635 : UDINT;
      algoritms_vibegPNS_Error AT %QD0.622 : UDINT;
      algoritms_vibegPNS_Start AT %QD0.621 : UDINT;
      algoritms_vibegPNS_Top AT %QD0.623 : UDINT;
      algoritms_vibegPNS_algContinue_inCommand_ARM AT %QW0.601 : UINT;
      algoritms_vibegPNS_algContinue_status AT %QD0.626 : UDINT;
      algoritms_vibegPNS_inCommand_ARM AT %QW0.602 : UINT;
      algoritms_vibegPNS_status AT %QD0.624 : UDINT;
      algoritms_vibegPNS_waitVibeg_timer AT %QW0.625 : UINT;
      protectManager_protectionInRemont AT %QX0.733 : BOOL;
      protections_AO_KC_inCommand_ARM AT %QW0.486 : UINT;
      protections_AO_KC_status AT %QD0.520 : UDINT;
      protections_AO_PRU_inCommand_ARM AT %QW0.487 : UINT;
      protections_AO_PRU_status AT %QD0.521 : UDINT;
      protections_AO_SHU_inCommand_ARM AT %QW0.488 : UINT;
      protections_AO_SHU_status AT %QD0.522 : UDINT;
      protections_BEAO_knSHU_inCommand_ARM AT %QW0.489 : UINT;
      protections_BEAO_knSHU_status AT %QD0.523 : UDINT;
      protections_DavlenieMaslaSmazkiDi_inCommand_ARM AT %QW0.490 : UINT;
      protections_DavlenieMaslaSmazkiDi_status AT %QD0.524 : UDINT;
      protections_EAO_PRU_inCommand_ARM AT %QW0.493 : UINT;
      protections_EAO_PRU_status AT %QD0.528 : UDINT;
      protections_Kran1sdvig_inCommand_ARM AT %QW0.517 : UINT;
      protections_Kran1sdvig_status AT %QD0.552 : UDINT;
      protections_Kran2sdvig_inCommand_ARM AT %QW0.518 : UINT;
      protections_Kran2sdvig_status AT %QD0.553 : UDINT;
      protections_Osevoi_sdvig_rotora_nagnetatelia_HA_inCommand_ARM AT %QW0.495 : UINT;
      protections_Osevoi_sdvig_rotora_nagnetatelia_HA_status AT %QD0.532 : UDINT;
      protections_OsevojSdvigLevyjDi_inCommand_ARM AT %QW0.496 : UINT;
      protections_OsevojSdvigLevyjDi_status AT %QD0.530 : UDINT;
      protections_OsevojSdvigPravyjDi_inCommand_ARM AT %QW0.497 : UINT;
      protections_OsevojSdvigPravyjDi_status AT %QD0.531 : UDINT;
      protections_P_masla_smazki_nizkoe_LA_inCommand_ARM AT %QW0.519 : UINT;
      protections_P_masla_smazki_nizkoe_LA_status AT %QD0.525 : UDINT;
      protections_Srab_BEAO_inCommand_ARM AT %QW0.498 : UINT;
      protections_Srab_BEAO_status AT %QD0.534 : UDINT;
      protections_T_gaza_na_vykhode_nagnetatelia_HA_inCommand_ARM AT %QW0.499 : UINT;
      protections_T_gaza_na_vykhode_nagnetatelia_HA_status AT %QD0.533 : UDINT;
      protections_T_opornogo_podshipnika_nagnetatelia_t1_HA_inCommand_ARM AT %QW0.500 : UINT;
      protections_T_opornogo_podshipnika_nagnetatelia_t1_HA_status AT %QD0.535 : UDINT;
      protections_T_opornogo_podshipnika_nagnetatelia_t2_HA_inCommand_ARM AT %QW0.501 : UINT;
      protections_T_opornogo_podshipnika_nagnetatelia_t2_HA_status AT %QD0.536 : UDINT;
      protections_T_opornogo_podshipnika_nagnetatelia_t3_HA_inCommand_ARM AT %QW0.502 : UINT;
      protections_T_opornogo_podshipnika_nagnetatelia_t3_HA_status AT %QD0.537 : UDINT;
      protections_T_opornoupornogo_podshipnika_nagnetatelia_t4_HA_inCommand_ARM AT %QW0.503 : UINT;
      protections_T_opornoupornogo_podshipnika_nagnetatelia_t4_HA_status AT %QD0.538 : UDINT;
      protections_T_perednego_opornogo_podshipnika_dvigatelia_t1_HA_inCommand_ARM AT %QW0.504 : UINT;
      protections_T_perednego_opornogo_podshipnika_dvigatelia_t1_HA_status AT %QD0.539 : UDINT;
      protections_T_podshipnika_reduktora_t1_HA_inCommand_ARM AT %QW0.505 : UINT;
      protections_T_podshipnika_reduktora_t1_HA_status AT %QD0.541 : UDINT;
      protections_T_podshipnika_reduktora_t2_HA_inCommand_ARM AT %QW0.506 : UINT;
      protections_T_podshipnika_reduktora_t2_HA_status AT %QD0.542 : UDINT;
      protections_T_podshipnika_reduktora_t3_HA_inCommand_ARM AT %QW0.507 : UINT;
      protections_T_podshipnika_reduktora_t3_HA_status AT %QD0.543 : UDINT;
      protections_T_podshipnika_reduktora_t4_HA_inCommand_ARM AT %QW0.508 : UINT;
      protections_T_podshipnika_reduktora_t4_HA_status AT %QD0.544 : UDINT;
      protections_T_zadnego_opornogo_podshipnika_dvigatelia_t2_HA_inCommand_ARM AT %QW0.509 : UINT;
      protections_T_zadnego_opornogo_podshipnika_dvigatelia_t2_HA_status AT %QD0.540 : UDINT;
      protections_Uroven_masla_v_maslobake_LA_inCommand_ARM AT %QW0.510 : UINT;
      protections_Uroven_masla_v_maslobake_LA_status AT %QD0.545 : UDINT;
      protections_Vibratciia_STD_t1_HA_inCommand_ARM AT %QW0.515 : UINT;
      protections_Vibratciia_STD_t1_HA_status AT %QD0.550 : UDINT;
      protections_Vibratciia_STD_t2_HA_inCommand_ARM AT %QW0.516 : UINT;
      protections_Vibratciia_STD_t2_HA_status AT %QD0.551 : UDINT;
      protections_Vibratciia_rotora_nagnetatelia_t1_HA_inCommand_ARM AT %QW0.511 : UINT;
      protections_Vibratciia_rotora_nagnetatelia_t1_HA_status AT %QD0.546 : UDINT;
      protections_Vibratciia_rotora_nagnetatelia_t2_HA_inCommand_ARM AT %QW0.512 : UINT;
      protections_Vibratciia_rotora_nagnetatelia_t2_HA_status AT %QD0.547 : UDINT;
      protections_Vibratciia_rotora_nagnetatelia_t3_HA_inCommand_ARM AT %QW0.513 : UINT;
      protections_Vibratciia_rotora_nagnetatelia_t3_HA_status AT %QD0.548 : UDINT;
      protections_Vibratciia_rotora_nagnetatelia_t4_HA_inCommand_ARM AT %QW0.514 : UINT;
      protections_Vibratciia_rotora_nagnetatelia_t4_HA_status AT %QD0.549 : UDINT;
      protections_dP_masloGaz_LowDI_inCommand_ARM AT %QW0.492 : UINT;
      protections_dP_masloGaz_LowDI_status AT %QD0.527 : UDINT;
      protections_dP_maslogaz_LA_inCommand_ARM AT %QW0.491 : UINT;
      protections_dP_maslogaz_LA_status AT %QD0.526 : UDINT;
      protections_mvOff_inCommand_ARM AT %QW0.494 : UINT;
      protections_mvOff_status AT %QD0.529 : UDINT;
      algoritms_autoNu_Reset_HasNU AT %QX0.731 : BOOL;
      A1_10_err_mode AT %QW0.825 : UINT;
      A1_11_err_mode AT %QW0.826 : UINT;
      A1_12_err_mode AT %QW0.827 : UINT;
      A1_13_err_mode AT %QW0.828 : UINT;
      A1_14_err_mode AT %QW0.829 : UINT;
      A1_15_err_mode AT %QW0.830 : UINT;
      A1_1_err_mode AT %QW0.816 : UINT;
      A1_2_err_mode AT %QW0.817 : UINT;
      A1_3_err_mode AT %QW0.818 : UINT;
      A1_4_err_mode AT %QW0.819 : UINT;
      A1_5_err_mode AT %QW0.820 : UINT;
      A1_6_err_mode AT %QW0.821 : UINT;
      A1_7_err_mode AT %QW0.822 : UINT;
      A1_8_err_mode AT %QW0.823 : UINT;
      A1_9_err_mode AT %QW0.824 : UINT;
      A2_10_err_mode AT %QW0.840 : UINT;
      A2_11_err_mode AT %QW0.841 : UINT;
      A2_12_err_mode AT %QW0.842 : UINT;
      A2_13_err_mode AT %QW0.843 : UINT;
      A2_14_err_mode AT %QW0.844 : UINT;
      A2_15_err_mode AT %QW0.845 : UINT;
      A2_1_err_mode AT %QW0.831 : UINT;
      A2_2_err_mode AT %QW0.832 : UINT;
      A2_3_err_mode AT %QW0.833 : UINT;
      A2_4_err_mode AT %QW0.834 : UINT;
      A2_5_err_mode AT %QW0.835 : UINT;
      A2_6_err_mode AT %QW0.836 : UINT;
      A2_7_err_mode AT %QW0.837 : UINT;
      A2_8_err_mode AT %QW0.838 : UINT;
      A2_9_err_mode AT %QW0.839 : UINT;
      AI_0_dblValue AT %QL0.736 : LREAL;
      AI_10_dblValue AT %QL0.746 : LREAL;
      AI_11_dblValue AT %QL0.747 : LREAL;
      AI_12_dblValue AT %QL0.748 : LREAL;
      AI_13_dblValue AT %QL0.749 : LREAL;
      AI_14_dblValue AT %QL0.750 : LREAL;
      AI_15_dblValue AT %QL0.751 : LREAL;
      AI_16_dblValue AT %QL0.752 : LREAL;
      AI_17_dblValue AT %QL0.753 : LREAL;
      AI_18_dblValue AT %QL0.754 : LREAL;
      AI_19_dblValue AT %QL0.755 : LREAL;
      AI_1_dblValue AT %QL0.737 : LREAL;
      AI_20_dblValue AT %QL0.756 : LREAL;
      AI_21_dblValue AT %QL0.757 : LREAL;
      AI_22_dblValue AT %QL0.758 : LREAL;
      AI_23_dblValue AT %QL0.759 : LREAL;
      AI_24_dblValue AT %QL0.760 : LREAL;
      AI_25_dblValue AT %QL0.761 : LREAL;
      AI_26_dblValue AT %QL0.762 : LREAL;
      AI_27_dblValue AT %QL0.763 : LREAL;
      AI_28_dblValue AT %QL0.764 : LREAL;
      AI_29_dblValue AT %QL0.765 : LREAL;
      AI_2_dblValue AT %QL0.738 : LREAL;
      AI_30_dblValue AT %QL0.766 : LREAL;
      AI_31_dblValue AT %QL0.767 : LREAL;
      AI_32_dblValue AT %QL0.768 : LREAL;
      AI_33_dblValue AT %QL0.769 : LREAL;
      AI_34_dblValue AT %QL0.770 : LREAL;
      AI_35_dblValue AT %QL0.771 : LREAL;
      AI_36_dblValue AT %QL0.772 : LREAL;
      AI_37_dblValue AT %QL0.773 : LREAL;
      AI_38_dblValue AT %QL0.774 : LREAL;
      AI_39_dblValue AT %QL0.775 : LREAL;
      AI_3_dblValue AT %QL0.739 : LREAL;
      AI_40_dblValue AT %QL0.776 : LREAL;
      AI_41_dblValue AT %QL0.777 : LREAL;
      AI_42_dblValue AT %QL0.778 : LREAL;
      AI_43_dblValue AT %QL0.779 : LREAL;
      AI_44_dblValue AT %QL0.780 : LREAL;
      AI_45_dblValue AT %QL0.781 : LREAL;
      AI_46_dblValue AT %QL0.782 : LREAL;
      AI_47_dblValue AT %QL0.783 : LREAL;
      AI_48_dblValue AT %QL0.784 : LREAL;
      AI_49_dblValue AT %QL0.785 : LREAL;
      AI_4_dblValue AT %QL0.740 : LREAL;
      AI_50_dblValue AT %QL0.786 : LREAL;
      AI_51_dblValue AT %QL0.787 : LREAL;
      AI_52_dblValue AT %QL0.788 : LREAL;
      AI_53_dblValue AT %QL0.789 : LREAL;
      AI_54_dblValue AT %QL0.790 : LREAL;
      AI_55_dblValue AT %QL0.791 : LREAL;
      AI_56_dblValue AT %QL0.792 : LREAL;
      AI_57_dblValue AT %QL0.793 : LREAL;
      AI_58_dblValue AT %QL0.794 : LREAL;
      AI_59_dblValue AT %QL0.795 : LREAL;
      AI_5_dblValue AT %QL0.741 : LREAL;
      AI_60_dblValue AT %QL0.796 : LREAL;
      AI_61_dblValue AT %QL0.797 : LREAL;
      AI_62_dblValue AT %QL0.798 : LREAL;
      AI_63_dblValue AT %QL0.799 : LREAL;
      AI_64_dblValue AT %QL0.800 : LREAL;
      AI_65_dblValue AT %QL0.801 : LREAL;
      AI_66_dblValue AT %QL0.802 : LREAL;
      AI_67_dblValue AT %QL0.803 : LREAL;
      AI_68_dblValue AT %QL0.804 : LREAL;
      AI_69_dblValue AT %QL0.805 : LREAL;
      AI_6_dblValue AT %QL0.742 : LREAL;
      AI_70_dblValue AT %QL0.806 : LREAL;
      AI_71_dblValue AT %QL0.807 : LREAL;
      AI_72_dblValue AT %QL0.808 : LREAL;
      AI_73_dblValue AT %QL0.809 : LREAL;
      AI_74_dblValue AT %QL0.810 : LREAL;
      AI_75_dblValue AT %QL0.811 : LREAL;
      AI_76_dblValue AT %QL0.812 : LREAL;
      AI_77_dblValue AT %QL0.813 : LREAL;
      AI_78_dblValue AT %QL0.814 : LREAL;
      AI_79_dblValue AT %QL0.815 : LREAL;
      AI_7_dblValue AT %QL0.743 : LREAL;
      AI_8_dblValue AT %QL0.744 : LREAL;
      AI_9_dblValue AT %QL0.745 : LREAL;
      BS_Core1 AT %QD0.603 : REAL;
      BS_Core2 AT %QD0.675 : REAL;
      BS_Core3 AT %QD0.683 : REAL;
      BS_Core4 AT %QD0.709 : REAL;
      BS_FreeMemory AT %QD0.730 : REAL;
      BS_Temp1 AT %QD0.734 : REAL;
      BS_Temp2 AT %QD0.735 : REAL;
      DI_0_1_wValue AT %QD0.852 : UDINT;
      DI_10_11_wValue AT %QD0.857 : UDINT;
      DI_12_13_wValue AT %QD0.858 : UDINT;
      DI_14_15_wValue AT %QD0.859 : UDINT;
      DI_16_17_wValue AT %QD0.860 : UDINT;
      DI_18_19_wValue AT %QD0.861 : UDINT;
      DI_20_21_wValue AT %QD0.862 : UDINT;
      DI_2_3_wValue AT %QD0.853 : UDINT;
      DI_4_5_wValue AT %QD0.854 : UDINT;
      DI_6_7_wValue AT %QD0.855 : UDINT;
      DI_8_9_wValue AT %QD0.856 : UDINT;
      DO_0_wValue AT %QW0.846 : UINT;
      DO_1_wValue AT %QW0.847 : UINT;
      DO_2_wValue AT %QW0.848 : UINT;
      DO_3_wValue AT %QW0.849 : UINT;
      DO_4_wValue AT %QW0.850 : UINT;
      DO_5_wValue AT %QW0.851 : UINT;
      AI_T_vnytri_shkafa_HL AT %QL0.866 : LREAL;
      AI_T_vnytri_shkafa_HW AT %QL0.870 : LREAL;
      AI_T_vnytri_shkafa_LL AT %QL0.867 : LREAL;
      AI_T_vnytri_shkafa_LW AT %QL0.872 : LREAL;
      AI_T_vnytri_shkafa_command AT %QW0.863 : UINT;
      AI_T_vnytri_shkafa_newHL AT %QL0.868 : LREAL;
      AI_T_vnytri_shkafa_newHW AT %QL0.871 : LREAL;
      AI_T_vnytri_shkafa_newLL AT %QL0.869 : LREAL;
      AI_T_vnytri_shkafa_newLW AT %QL0.873 : LREAL;
      AI_T_vnytri_shkafa_status AT %QD0.864 : UDINT;
      AI_T_vnytri_shkafa_value AT %QL0.865 : LREAL;
      AI_dPmaslo_gaz_MaxChangeDown AT %QL0.877 : LREAL;
      AI_dPmaslo_gaz_MaxChangeUP AT %QL0.876 : LREAL;
      AI_dPmaslo_gaz_newMaxChangeDown AT %QL0.875 : LREAL;
      AI_dPmaslo_gaz_newMaxChangeUP AT %QL0.874 : LREAL;
    END_VAR
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
