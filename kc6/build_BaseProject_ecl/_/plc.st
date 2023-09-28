TYPE
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
  TYPE_Answers : STRUCT
    ANS_NONE : UINT   := 0;
    ANS_YES : UINT   := 1;
    ANS_NO : UINT   := 2;
    ANS_CANCEL : UINT   := 4;
    ANS_RETRY : UINT   := 8;
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
    do_5 : struct_DO;
    do_6 : struct_DO;
    do_7 : struct_DO;
    do_8 : struct_DO;
    do_9 : struct_DO;
    gpio_out : struct_DO;
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
    puskV : BOOL;
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
    Neisparav_EGPA : struct_singleOutput;
    Avar_EGPA : struct_singleOutput;
    Indickaciya_PC_fonar : struct_singleOutput;
    Indickaciya_AC_fonar : struct_singleOutput;
  END_STRUCT;
  TItemDIN : STRUCT
    wFlags : UINT         := 0;
    wValue : UINT         := 0;
    nanosec : ULINT         := 0;
    reserve : ULINT         := 0;
  END_STRUCT;
  TItemAIN : STRUCT
    wFlags : UINT         := 0;
    wReserved : UINT         := 0;
    dblValue : LREAL         := 0.0;
    nanosec : ULINT         := 0;
    reserve : ULINT         := 0;
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
  TYPE_ReliableBit : STRUCT
    value : BOOL;
    reliability : BOOL;
    _inversed : BOOL;
  END_STRUCT;
  struct_DI : STRUCT
    imit : BOOL;
    value : WORD;
    reliability : WORD;
    bits : ARRAY [0..15] OF TYPE_ReliableBit;
    blConnect : BOOL;
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
  END_STRUCT;
  TYPE_commandDualInput : STRUCT
    CMD_ON : BYTE         := 1;
    CMD_OFF : BYTE         := 2;
    CMD_RESET : BYTE         := 3;
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
  struct_singleSignal : STRUCT
    reliability : BOOL;
    inverse : BOOL;
    DelayOn : TIME;
    DelayOff : TIME;
    Q : BOOL;
    status : DWORD;
    Disabled_Sig : BOOL;
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
  IM_singleSignals : STRUCT
    dP_maslo_gaz_menshe_100_kPa : struct_singleSignal;
    dP_gaza_kr_1 : struct_singleSignal;
    otklon_masla_v_akkym_yplot : struct_singleSignal;
    Potok_masla_posle_ABO_bolshe_85_L_min : struct_singleSignal;
    Razreshenie_zagryzki : struct_singleSignal;
    Gotovnosst_vozb : struct_singleSignal;
    Otkl_osn_regylyatora_neisprav : struct_singleSignal;
    ostanov_po_zashitam_vozb_avar : struct_singleSignal;
    NKY_vvod_1 : struct_singleSignal;
    NKY_vvod_2 : struct_singleSignal;
    Neisprav_cepei_ypr_AVR_pit_vozb : struct_singleSignal;
    SHAVR_1_v_rab : struct_singleSignal;
    SHAVR_2_v_rab : struct_singleSignal;
    Avar_otkl_viklychatelya : struct_singleSignal;
    Asinhron_xod_peregryz : struct_singleSignal;
    AO_KC_ot_SHKC_04M : struct_singleSignal;
    AO_EGPA_ot_PRY : struct_singleSignal;
    EAO_EGPA_ot_PRY : struct_singleSignal;
    Neisprav_BP_1 : struct_singleSignal;
    Neisprav_BP_2 : struct_singleSignal;
    Neisprav_BP_3 : struct_singleSignal;
    Neisprav_BP_4 : struct_singleSignal;
    Neisprav_BP_5 : struct_singleSignal;
    Neisprav_BP_6 : struct_singleSignal;
    Neisprav_BP_7 : struct_singleSignal;
    Neisprav_BP_8 : struct_singleSignal;
    Neisprav_BP_9 : struct_singleSignal;
    Neisprav_BP_10 : struct_singleSignal;
    Nalichie_220_perem_vhod_v_SHY : struct_singleSignal;
    Nalichie_220_post_vhod_v_SHY : struct_singleSignal;
    Nalichie_220_post_na_shinah_ypr_ZRY : struct_singleSignal;
    BEAO_vkl : struct_singleSignal;
    Net_10_kVt_UcmA_UcmC : struct_singleSignal;
    Net_10_kVt_UcmA_UcmB : struct_singleSignal;
    Srabotka_BREO : struct_singleSignal;
    Sbros_srabotki_BREO : struct_singleSignal;
    NO_GPA_na_SHY : struct_singleSignal;
    AO_GPA_na_SHY : struct_singleSignal;
    EAO_GPA_na_SHY : struct_singleSignal;
    Dver_shkafa_otkrita : struct_singleSignal;
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
  TYPE_basketStats : STRUCT
    BASKET_NOTDEFINED : BYTE        := 0;
    BASKET_ROLLEDIN : BYTE        := 1;
    BASKET_ROLLEDOUT : BYTE        := 2;
    BASKET_TRANSITIONAL : BYTE        := 3;
    BASKET_ERROR : BYTE        := 4;
    BASKET_TEST : BYTE        := 5;
  END_STRUCT;
  AiConfig : STRUCT
    TStalisStatoraKanal1 : struct_AI;
    TStalisStatoraKanal2 : struct_AI;
    TStalisStatoraKanal3 : struct_AI;
    TMediStatoraKanal1 : struct_AI;
    TMediStatoraKanal2 : struct_AI;
    TMediStatoraKanal3 : struct_AI;
    TOpornogoPodshipnikaEDT_1 : struct_AI;
    TOpornoYpornogoPodshipnikaEDT_2 : struct_AI;
    TOpornoYpornogoPodshipnikaKolesaRedEDT_3 : struct_AI;
    TOpornoYpornogoPodshipnikaKolesaRedHT_4 : struct_AI;
    TOpornogoPodshipnikaShesterniReduktoraT_5 : struct_AI;
    TOpornogoPodshipnikaReduktoraHT_6 : struct_AI;
    TOpornoYpornogoPodshipnikaNagnetateljaT_7_1 : struct_AI;
    TOpornoYpornogoPodshipnikaNagnetateljaT_7_2 : struct_AI;
    TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1 : struct_AI;
    TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2 : struct_AI;
    TYpornogoPodshipnikaRavKolodokHT_9_1 : struct_AI;
    TYpornogoPodshipnikaRavKolodokHT_9_2 : struct_AI;
    TYpornogoPodshipnikaNerabKolodokHT_10_1 : struct_AI;
    TYpornogoPodshipnikaNerabKolodokHT_10_2 : struct_AI;
    THolodnogoVozduhaEDKanall : struct_AI;
    THolodnogoVozduhaEDKanal2 : struct_AI;
    TGorjachegoVozduhaEDKanall : struct_AI;
    TGorjachegoVozduhaEDKanal2 : struct_AI;
    TNArujnogoVozduha : struct_AI;
    TgazaNaVhodeH : struct_AI;
    TgazaNaVyhodeH : struct_AI;
    T_masla_v_maslobake_nad_ten : struct_AI;
    T_naryjnogo_vozdyxa : struct_AI;
    Davlenie_impylsnogo_gaza : struct_AI;
    Yroven_masla_v_maslobake : struct_AI;
    Osevoi_sdvig_nagnetatelya_vpravo : struct_AI;
    Osevoi_sdvig_nagnetatelya_vlevo : struct_AI;
    Tok_statora : struct_AI;
    Kontrol_220_perem : struct_AI;
    Kontrol_220_post : struct_AI;
    Davlenie_gaza_na_vhode_nagnetatelya : struct_AI;
    Davlenie_gaza_na_vihode_nagnetatelya : struct_AI;
    Perepad_davleniya_maslo_gaz : struct_AI;
    Davlenie_masla_posle_nasosa_yplotneniya : struct_AI;
    Davlenie_masla_smazki_nizkoe : struct_AI;
    Davlenie_masla_smazki_visokoe : struct_AI;
    Davlenie_masla_smazki_posle_GNS : struct_AI;
    Perepad_davleniya_gaza_na_konfyzore : struct_AI;
    Perepad_davleniya_masla_na_maslyanom_filtre : struct_AI;
    Vibroskorost_OP_ED_t1 : struct_AI;
    Vibroskorost_OYP_ED_so_storony_redyctora_t2 : struct_AI;
    Vibroskorost_OYP_kolesa_ED_t3 : struct_AI;
    Vibroskorost_OP_kolesa_nagnetatelya_t4 : struct_AI;
    Vibroskorost_OP_shesterni_ED_t5 : struct_AI;
    Vibroskorost_OP_shesterni_nagnetatelya_t6 : struct_AI;
    T_vozduha_V_shkaf : struct_AI;
  END_STRUCT;
  TWordData : STRUCT
    wFlags : UINT         := 0;
    wValue : UINT         := 0;
  END_STRUCT;
  TYPE_AnalogLimitFlags : STRUCT
    NONE : BYTE         := 0;
    LL : BYTE         := 16#1;
    LW : BYTE         := 16#2;
    HW : BYTE         := 16#4;
    LA : BYTE         := 16#8;
    HA : BYTE         := 16#10;
    HL : BYTE         := 16#20;
    SipUP : BYTE := 16#40;
    SipDown : BYTE := 16#80;
  END_STRUCT;
  TDoubleData : STRUCT
    wFlags : UINT         := 0;
    dblValue : LREAL         := 0.0;
  END_STRUCT;
  TYPE_statusDualInput : STRUCT
    STATUS_NOTDEFINED : BYTE   := 0;
    STATUS_ON : BYTE   := 1;
    STATUS_OFF : BYTE   := 2;
    STATUS_TRANSITIONAL : BYTE   := 3;
    STATUS_ERROR : BYTE   := 4;
  END_STRUCT;
  TYPE_StatusAi : STRUCT
    NOTDEFINED : BYTE   := 0;
    LL : BYTE   := 1;
    HL : BYTE   := 2;
    NOTRELIABLE : BYTE   := 3;
    normal : BYTE   := 4;
    LW : BYTE   := 5;
    HW : BYTE   := 6;
    LA : BYTE   := 7;
    HA : BYTE   := 8;
  END_STRUCT;
  TYPE_CommandAnalog : STRUCT
    cmd_SetUstavki : WORD   := 1;
    cmd_SetRemont : WORD   := 2;
    cmd_ResetRemont : WORD   := 3;
    cmd_kvitNotReliable : WORD   := 4;
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
  struct_AlgoritmsManager : STRUCT
    mode : UINT;
    narabotka : UINT;
    nMode : UINT;
    AnalogsPs : BOOL;
    DiscretPS : BOOL;
    ProtectionSignaling : BOOL;
    puskV : BOOL;
  END_STRUCT;
  struct_ProtectionsManager : STRUCT
    inCommand : BYTE;
    protectionInRemont : BOOL;
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
  TYPE_ProtectionTags : STRUCT
    NOTHING : BYTE       := 0;
    AOB : BYTE       := 1;
    AOS : BYTE       := 2;
    AOPOJ : BYTE       := 3;
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
    controlValue : LREAL;
  END_STRUCT;
  TYPE_PhaseAlgoritmAction : (_run, _reset);
  TYPE_CommandsPotectionsManager : STRUCT
    RestartAllSignaling : BYTE    := 1;
    RestartAllProtections : BYTE    := 2;
    CheckProtections : BYTE    := 3;
    ResetAllProtections : BYTE    := 4;
  END_STRUCT;
  TYPE_DualStateImAction : (_on, _off);
  ProtectionsConfig : STRUCT
    T_OP_ED_t1_HA : struct_AiProtection;
    T_OYP_ED_so_storony_redyctora_t2_HA : struct_AiProtection;
    T_OYP_kolesa_ED_t3_HA : struct_AiProtection;
    T_OP_kolesa_nagnetatelya_t4_HA : struct_AiProtection;
    T_OP_shesterni_ED_t5_HA : struct_AiProtection;
    T_OP_redyctora_so_storony_nagnetatelya_t6_HA : struct_AiProtection;
    T_OYP_nagnetatelya_so_storony_redyctora_t7_HA : struct_AiProtection;
    T_OYP_svobodnogo_konca_nagnetatelya_t8_HA : struct_AiProtection;
    T_YP_rabochih_kolodok_nagnetatelya_t9_HA : struct_AiProtection;
    T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA : struct_AiProtection;
    T_gaz_out_nagnetatelia_HA : struct_AiProtection;
    Osevoi_sdvig_nagnetatelya_vpravo_HA : struct_AiProtection;
    Osevoi_sdvig_nagnetatelya_vlevo_HA : struct_AiProtection;
    Davlenie_gaza_na_vhode_nagnetatelya_HA : struct_AiProtection;
    Davlenie_gaza_na_vihode_nagnetatelya_HA : struct_AiProtection;
    Perepad_davleniya_maslo_gaz_LA : struct_AiProtection;
    Davlenie_masla_smazki_nizkoe_LA : struct_AiProtection;
    Davlenie_masla_smazki_visokoe_LA : struct_AiProtection;
    Vibroskorost_OP_ED_t1_HA : struct_AiProtection;
    Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA : struct_AiProtection;
    Vibroskorost_OYP_kolesa_ED_t3_HA : struct_AiProtection;
    Vibroskorost_OP_kolesa_nagnetatelya_t4_HA : struct_AiProtection;
    Vibroskorost_OP_shesterni_ED_t5_HA : struct_AiProtection;
    Vibroskorost_OP_shesterni_nagnetatelya_t6_HA : struct_AiProtection;
    dP_maslo_gaz_menshe_100_kPa_DI : struct_DiProtection;
    Avar_otkl_viklychatelya_DI : struct_DiProtection;
    Ostanov_po_zashitam_vozb_avar_DI : struct_DiProtection;
    AO_KC_ot_SHKC_04M_DI : struct_DiProtection;
    AO_EGPA_ot_PRY_DI : struct_DiProtection;
    AO_GPA_na_SHY_DI : struct_DiProtection;
    MB : struct_DiProtection;
    Kran1sdvig : struct_DiProtection;
    Kran2sdvig : struct_DiProtection;
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
    MODE_I : UINT := 17;
    MODE_O : UINT := 18;
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
    Q : BOOL;
    Auto : BOOL;
  END_STRUCT;
  ImConfig : STRUCT
    Kran1 : struct_Kran;
    Kran2 : struct_Kran;
    Kran3 : struct_Kran;
    Kran3b : struct_Kran;
    Kran4 : struct_Kran;
    Kran5 : struct_Kran;
    Kran6 : struct_Kran;
    MB : struct_SectionSwitch;
    v1_Avom : struct_Switch;
    v2_Avom : struct_Switch;
    v3_Avom : struct_Switch;
    v4_Avom : struct_Switch;
    Ten_MB : struct_Switch;
    Ten_kollect : struct_Switch;
    CMN_pump : struct_Switch;
    pns : struct_Switch;
    nu1 : struct_OilPump;
    nu2 : struct_OilPump;
    Kalorifer_ABO : struct_Switch;
    SingleSignals : IM_singleSignals;
    SingleOutputs : IM_singleOutputs;
    AutoAvom_hysteresis : struct_AnalogParametr;
    TypeSwitch : struct_DiscretParametr;
    testdPmg_Ust_dPLow : struct_AnalogParametr;
    AutoPns_UstRun : struct_AnalogParametr;
    AutoPns_UstStop : struct_AnalogParametr;
    PuskOilSystem_UstdPmg : struct_AnalogParametr;
    AntiPompag_UgolVNA : struct_AnalogParametr;
    AntiPompag_K : struct_AnalogParametr;
    AntiPompag_A : struct_AnalogParametr;
    AntiPompag_y0 : struct_AnalogParametr;
    AutoNU_mainNU : struct_DiscretParametr;
    AutoNU_Ust_Swap : struct_AnalogParametr;
    AutoTen_offTemperature : struct_AnalogParametr;
    AutoAvom_onTemp1 : struct_AnalogParametr;
    AutoAvom_onTemp2 : struct_AnalogParametr;
    Type_kranSdvig1_Protection : struct_DiscretParametr;
    Type_kranSdvig2_Protection : struct_DiscretParametr;
  END_STRUCT;
  ppu_permissions : STRUCT
    ppuFirst_for_Pusk : BOOL;
    ppuFirst_for_V : BOOL;
    ppuFirst_for_Pms_dPmg : BOOL;
    ppuFirst_for_K : BOOL;
    ppuFirst_for_I : BOOL;
    ppuSecond_V_Pusk : BOOL;
    ppuSecond_I : BOOL;
    ppuThird : BOOL;
    ppuForth : BOOL;
  END_STRUCT;
END_TYPE

FUNCTION_BLOCK fb_Timings
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
  VAR_EXTERNAL CONSTANT
    req_Cycle : REAL;
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

PROGRAM program0
  VAR
    SysTime : LREAL;
    systime_ns : ULINT;
    systime_s : ULINT;
    preSysTime : LREAL;
    tmpCycle : LREAL;
    preSys_s : ULINT;
    preSys_ns : ULINT;
  END_VAR
  VAR_EXTERNAL
    cur_Cycle : REAL;
    gStart_Tmr : REAL;
  END_VAR
  VAR
    Timings : fb_Timings;
    _init : BOOL         := TRUE;
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
END_PROGRAM

FUNCTION BlockAllIM : BOOL
  VAR_IN_OUT
    IM : ImConfig;
  END_VAR

  IF NOT IM.Kran1.inOpcCommandsDisabled   THEN IM.Kran1.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.Kran2.inOpcCommandsDisabled   THEN IM.Kran2.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.Kran3.inOpcCommandsDisabled   THEN IM.Kran3.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.Kran3b.inOpcCommandsDisabled  THEN IM.Kran3b.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.Kran4.inOpcCommandsDisabled   THEN IM.Kran4.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.Kran5.inOpcCommandsDisabled   THEN IM.Kran5.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.Kran6.inOpcCommandsDisabled   THEN IM.Kran6.inOpcCommandsDisabled:=TRUE; END_IF;

  IF NOT IM.nu1.inOpcCommandsDisabled     THEN IM.nu1.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.nu2.inOpcCommandsDisabled     THEN IM.nu2.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.pns.inOpcCommandsDisabled     THEN IM.pns.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.v1_Avom.inOpcCommandsDisabled THEN IM.v1_Avom.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.v2_Avom.inOpcCommandsDisabled THEN IM.v2_Avom.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.v3_Avom.inOpcCommandsDisabled THEN IM.v3_Avom.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.v4_Avom.inOpcCommandsDisabled THEN IM.v4_Avom.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.Ten_MB.inOpcCommandsDisabled     THEN IM.Ten_MB.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.Ten_kollect.inOpcCommandsDisabled     THEN IM.Ten_kollect.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.MB.inOpcCommandsDisabled      THEN IM.MB.inOpcCommandsDisabled:=TRUE; END_IF;

  IF NOT IM.CMN_pump.inOpcCommandsDisabled     THEN IM.CMN_pump.inOpcCommandsDisabled:=TRUE; END_IF;
  IF NOT IM.Kalorifer_ABO.inOpcCommandsDisabled      THEN IM.Kalorifer_ABO.inOpcCommandsDisabled:=TRUE; END_IF;
END_FUNCTION

FUNCTION BlockAllProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  protections.T_OP_ED_t1_HA.inOpcCommandsDisabled:=TRUE;
  protections.T_OYP_ED_so_storony_redyctora_t2_HA.inOpcCommandsDisabled:=TRUE;
  protections.T_OYP_kolesa_ED_t3_HA.inOpcCommandsDisabled:=TRUE;
  protections.T_OP_kolesa_nagnetatelya_t4_HA.inOpcCommandsDisabled:=TRUE;
  protections.T_OP_shesterni_ED_t5_HA.inOpcCommandsDisabled:=TRUE;
  protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA.inOpcCommandsDisabled:=TRUE;
  protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA.inOpcCommandsDisabled:=TRUE;
  protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA.inOpcCommandsDisabled:=TRUE;
  protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA.inOpcCommandsDisabled:=TRUE;
  protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA.inOpcCommandsDisabled:=TRUE;
  protections.T_gaz_out_nagnetatelia_HA.inOpcCommandsDisabled:=TRUE;
  protections.Osevoi_sdvig_nagnetatelya_vpravo_HA.inOpcCommandsDisabled:=TRUE;
  protections.Osevoi_sdvig_nagnetatelya_vlevo_HA.inOpcCommandsDisabled:=TRUE;
  protections.Davlenie_gaza_na_vhode_nagnetatelya_HA.inOpcCommandsDisabled:=TRUE;
  protections.Davlenie_gaza_na_vihode_nagnetatelya_HA.inOpcCommandsDisabled:=TRUE;
  protections.Perepad_davleniya_maslo_gaz_LA.inOpcCommandsDisabled:=TRUE;
  protections.Davlenie_masla_smazki_nizkoe_LA.inOpcCommandsDisabled:=TRUE;
  protections.Davlenie_masla_smazki_visokoe_LA.inOpcCommandsDisabled:=TRUE;
  protections.Vibroskorost_OP_ED_t1_HA.inOpcCommandsDisabled:=TRUE;
  protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA.inOpcCommandsDisabled:=TRUE;
  protections.Vibroskorost_OYP_kolesa_ED_t3_HA.inOpcCommandsDisabled:=TRUE;
  protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA.inOpcCommandsDisabled:=TRUE;
  protections.Vibroskorost_OP_shesterni_ED_t5_HA.inOpcCommandsDisabled:=TRUE;
  protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA.inOpcCommandsDisabled:=TRUE;
  protections.dP_maslo_gaz_menshe_100_kPa_DI.inOpcCommandsDisabled:=TRUE;
  protections.Avar_otkl_viklychatelya_DI.inOpcCommandsDisabled:=TRUE;
  protections.Ostanov_po_zashitam_vozb_avar_DI.inOpcCommandsDisabled:=TRUE;
  protections.AO_KC_ot_SHKC_04M_DI.inOpcCommandsDisabled:=TRUE;
  protections.AO_EGPA_ot_PRY_DI.inOpcCommandsDisabled:=TRUE;
  protections.AO_GPA_na_SHY_DI.inOpcCommandsDisabled:=TRUE;
  protections.MB.inOpcCommandsDisabled:=TRUE;
  protections.Kran1sdvig.inOpcCommandsDisabled:=TRUE;
  protections.Kran2sdvig.inOpcCommandsDisabled:=TRUE;
END_FUNCTION

FUNCTION DisableAiLimits : BOOL
  VAR_IN_OUT
    ai : AiConfig;
  END_VAR

  ai.Davlenie_masla_smazki_nizkoe.Disabled_LA:=TRUE;
   ai.Davlenie_masla_smazki_nizkoe.Disabled_LW:=TRUE;
   ai.Davlenie_masla_smazki_visokoe.Disabled_LW:=TRUE;
   (*ai.Perepad_davleniya_maslo_gaz_LA:=TRUE;
   ai.Perepad_davleniya_maslo_gaz_LW:=TRUE;*)
END_FUNCTION

FUNCTION EnableAiLimits : BOOL
  VAR_IN_OUT
    ai : AiConfig;
  END_VAR

  ai.Davlenie_gaza_na_vhode_nagnetatelya.Disabled_LA:=FALSE;
  ai.Davlenie_masla_smazki_nizkoe.Disabled_LA:=FALSE;
  ai.Davlenie_masla_smazki_visokoe.Disabled_LA:=FALSE;
  ai.Perepad_davleniya_maslo_gaz.Disabled_LA:=FALSE;
  ai.Davlenie_gaza_na_vhode_nagnetatelya.Disabled_LW:=FALSE;
  ai.Davlenie_impylsnogo_gaza.Disabled_LW:=FALSE;
  ai.Davlenie_masla_smazki_nizkoe.Disabled_LW:=FALSE;
  ai.Davlenie_masla_smazki_posle_GNS.Disabled_LW:=FALSE;
  ai.Davlenie_masla_smazki_visokoe.Disabled_LW:=FALSE;
  ai.Kontrol_220_perem.Disabled_LW:=FALSE;
  ai.Kontrol_220_post.Disabled_LW:=FALSE;
  ai.Perepad_davleniya_maslo_gaz.Disabled_LW:=FALSE;
  ai.TNArujnogoVozduha.Disabled_LW:=FALSE;
  ai.T_masla_v_maslobake.Disabled_LW:=FALSE;
  ai.T_naryjnogo_vozdyxa.Disabled_LW:=FALSE;
  ai.Tok_statora.Disabled_LW:=FALSE;
  ai.Yroven_masla_v_maslobake.Disabled_LW:=FALSE;
END_FUNCTION

FUNCTION NapryageniaOK : BOOL
  VAR_INPUT
    im : ImConfig;
  END_VAR

  NapryageniaOK:=
  NOT (Im.SingleSignals.Neisprav_BP_1.Q
  OR Im.SingleSignals.Neisprav_BP_2.Q
  OR Im.SingleSignals.Neisprav_BP_3.Q
  OR Im.SingleSignals.Neisprav_BP_4.Q
  OR Im.SingleSignals.Neisprav_BP_5.Q
  OR Im.SingleSignals.Neisprav_BP_6.Q
  OR Im.SingleSignals.Neisprav_BP_7.Q
  OR Im.SingleSignals.Neisprav_BP_8.Q
  OR Im.SingleSignals.Neisprav_BP_9.Q
  OR im.SingleSignals.Neisprav_BP_10.Q
  OR Im.SingleSignals.Nalichie_220_perem_vhod_v_SHY.Q
  OR Im.SingleSignals.Nalichie_220_post_vhod_v_SHY.Q
  OR Im.SingleSignals.BEAO_vkl.Q
  OR Im.SingleSignals.Nalichie_220_post_na_shinah_ypr_ZRY.Q);
END_FUNCTION

FUNCTION resetAiProtection : BOOL
  VAR_IN_OUT
    protection : struct_AiProtection;
  END_VAR
  VAR CONSTANT
    cmdReset : WORD       := 2;
  END_VAR

  IF protection.isRunning THEN
                      protection.inOpcCommandsDisabled:=TRUE;
  		protection.inCommand_Alg:=cmdReset;
  END_IF;
END_FUNCTION

FUNCTION resetDiProtection : BOOL
  VAR_IN_OUT
    protection : struct_DiProtection;
  END_VAR
  VAR CONSTANT
    cmdReset : WORD       := 2;
  END_VAR

  IF protection.isRunning THEN
                      protection.inOpcCommandsDisabled:=TRUE;
  		protection.inCommand_Alg:=cmdReset;
  END_IF;
END_FUNCTION

FUNCTION ResetAllSignaling : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  IF protections.T_OP_ED_t1_HA.Signaling THEN resetAiProtection(protections.T_OP_ED_t1_HA); END_IF;
  IF protections.T_OYP_ED_so_storony_redyctora_t2_HA.Signaling THEN resetAiProtection(protections.T_OYP_ED_so_storony_redyctora_t2_HA); END_IF;
  IF protections.T_OYP_kolesa_ED_t3_HA.Signaling THEN resetAiProtection(protections.T_OYP_kolesa_ED_t3_HA); END_IF;
  IF protections.T_OP_kolesa_nagnetatelya_t4_HA.Signaling THEN resetAiProtection(protections.T_OP_kolesa_nagnetatelya_t4_HA); END_IF;
  IF protections.T_OP_shesterni_ED_t5_HA.Signaling THEN resetAiProtection(protections.T_OP_shesterni_ED_t5_HA); END_IF;
  IF protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA.Signaling THEN resetAiProtection(protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA); END_IF;
  IF protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA.Signaling THEN resetAiProtection(protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA); END_IF;
  IF protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA.Signaling THEN resetAiProtection(protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA); END_IF;
  IF protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA.Signaling THEN resetAiProtection(protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA); END_IF;
  IF protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA.Signaling THEN resetAiProtection(protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA); END_IF;
  IF protections.T_gaz_out_nagnetatelia_HA.Signaling THEN resetAiProtection(protections.T_gaz_out_nagnetatelia_HA); END_IF;
  IF protections.Osevoi_sdvig_nagnetatelya_vpravo_HA.Signaling THEN resetAiProtection(protections.Osevoi_sdvig_nagnetatelya_vpravo_HA); END_IF;
  IF protections.Osevoi_sdvig_nagnetatelya_vlevo_HA.Signaling THEN resetAiProtection(protections.Osevoi_sdvig_nagnetatelya_vlevo_HA); END_IF;
  IF protections.Davlenie_gaza_na_vhode_nagnetatelya_HA.Signaling THEN resetAiProtection(protections.Davlenie_gaza_na_vhode_nagnetatelya_HA); END_IF;
  IF protections.Davlenie_gaza_na_vihode_nagnetatelya_HA.Signaling THEN resetAiProtection(protections.Davlenie_gaza_na_vihode_nagnetatelya_HA); END_IF;
  IF protections.Perepad_davleniya_maslo_gaz_LA.Signaling THEN resetAiProtection(protections.Perepad_davleniya_maslo_gaz_LA); END_IF;
  IF protections.Davlenie_masla_smazki_nizkoe_LA.Signaling THEN resetAiProtection(protections.Davlenie_masla_smazki_nizkoe_LA); END_IF;
  IF protections.Davlenie_masla_smazki_visokoe_LA.Signaling THEN resetAiProtection(protections.Davlenie_masla_smazki_visokoe_LA); END_IF;
  IF protections.Vibroskorost_OP_ED_t1_HA.Signaling THEN resetAiProtection(protections.Vibroskorost_OP_ED_t1_HA); END_IF;
  IF protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA.Signaling THEN resetAiProtection(protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA); END_IF;
  IF protections.Vibroskorost_OYP_kolesa_ED_t3_HA.Signaling THEN resetAiProtection(protections.Vibroskorost_OYP_kolesa_ED_t3_HA); END_IF;
  IF protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA.Signaling THEN resetAiProtection(protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA); END_IF;
  IF protections.Vibroskorost_OP_shesterni_ED_t5_HA.Signaling THEN resetAiProtection(protections.Vibroskorost_OP_shesterni_ED_t5_HA); END_IF;
  IF protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA.Signaling THEN resetAiProtection(protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA); END_IF;
  IF protections.dP_maslo_gaz_menshe_100_kPa_DI.Signaling THEN resetDiProtection(protections.dP_maslo_gaz_menshe_100_kPa_DI); END_IF;
  IF protections.Avar_otkl_viklychatelya_DI.Signaling THEN resetDiProtection(protections.Avar_otkl_viklychatelya_DI); END_IF;
  IF protections.Ostanov_po_zashitam_vozb_avar_DI.Signaling THEN resetDiProtection(protections.Ostanov_po_zashitam_vozb_avar_DI); END_IF;
  IF protections.AO_KC_ot_SHKC_04M_DI.Signaling THEN resetDiProtection(protections.AO_KC_ot_SHKC_04M_DI); END_IF;
  IF protections.AO_EGPA_ot_PRY_DI.Signaling THEN resetDiProtection(protections.AO_EGPA_ot_PRY_DI); END_IF;
  IF protections.AO_GPA_na_SHY_DI.Signaling THEN resetDiProtection(protections.AO_GPA_na_SHY_DI); END_IF;
  IF protections.MB.Signaling THEN resetDiProtection(protections.MB); END_IF;
  IF protections.Kran1sdvig.Signaling THEN resetDiProtection(protections.Kran1sdvig); END_IF;
  IF protections.Kran2sdvig.Signaling THEN resetDiProtection(protections.Kran2sdvig); END_IF;
END_FUNCTION

FUNCTION UnBlockAllIM : BOOL
  VAR_IN_OUT
    IM : ImConfig;
  END_VAR

  IF IM.TypeSwitch.Value = 1 THEN

  IF IM.Kran1.inOpcCommandsDisabled   THEN IM.Kran1.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.Kran2.inOpcCommandsDisabled   THEN IM.Kran2.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.Kran3.inOpcCommandsDisabled   THEN IM.Kran3.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.Kran3b.inOpcCommandsDisabled  THEN IM.Kran3b.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.Kran4.inOpcCommandsDisabled   THEN IM.Kran4.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.Kran5.inOpcCommandsDisabled   THEN IM.Kran5.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.Kran6.inOpcCommandsDisabled   THEN IM.Kran6.inOpcCommandsDisabled:=FALSE; END_IF;
  END_IF;


  IF IM.nu1.inOpcCommandsDisabled         THEN IM.nu1.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.nu2.inOpcCommandsDisabled         THEN IM.nu2.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.pns.inOpcCommandsDisabled         THEN IM.pns.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.v1_Avom.inOpcCommandsDisabled     THEN IM.v1_Avom.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.v2_Avom.inOpcCommandsDisabled     THEN IM.v2_Avom.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.v3_Avom.inOpcCommandsDisabled     THEN IM.v3_Avom.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.v4_Avom.inOpcCommandsDisabled     THEN IM.v4_Avom.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.Ten_MB.inOpcCommandsDisabled      THEN IM.Ten_MB.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.Ten_kollect.inOpcCommandsDisabled THEN IM.Ten_kollect.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.MB.inOpcCommandsDisabled          THEN IM.MB.inOpcCommandsDisabled:=FALSE; END_IF;


  IF IM.CMN_pump.inOpcCommandsDisabled         THEN IM.CMN_pump.inOpcCommandsDisabled:=FALSE; END_IF;
  IF IM.Kalorifer_ABO.inOpcCommandsDisabled    THEN IM.Kalorifer_ABO.inOpcCommandsDisabled:=FALSE; END_IF;
END_FUNCTION

FUNCTION UnBlockAllProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  protections.T_OP_ED_t1_HA.inOpcCommandsDisabled:=FALSE;
  protections.T_OYP_ED_so_storony_redyctora_t2_HA.inOpcCommandsDisabled:=FALSE;
  protections.T_OYP_kolesa_ED_t3_HA.inOpcCommandsDisabled:=FALSE;
  protections.T_OP_kolesa_nagnetatelya_t4_HA.inOpcCommandsDisabled:=FALSE;
  protections.T_OP_shesterni_ED_t5_HA.inOpcCommandsDisabled:=FALSE;
  protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA.inOpcCommandsDisabled:=FALSE;
  protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA.inOpcCommandsDisabled:=FALSE;
  protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA.inOpcCommandsDisabled:=FALSE;
  protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA.inOpcCommandsDisabled:=FALSE;
  protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA.inOpcCommandsDisabled:=FALSE;
  protections.T_gaz_out_nagnetatelia_HA.inOpcCommandsDisabled:=FALSE;
  protections.Osevoi_sdvig_nagnetatelya_vpravo_HA.inOpcCommandsDisabled:=FALSE;
  protections.Osevoi_sdvig_nagnetatelya_vlevo_HA.inOpcCommandsDisabled:=FALSE;
  protections.Davlenie_gaza_na_vhode_nagnetatelya_HA.inOpcCommandsDisabled:=FALSE;
  protections.Davlenie_gaza_na_vihode_nagnetatelya_HA.inOpcCommandsDisabled:=FALSE;
  protections.Perepad_davleniya_maslo_gaz_LA.inOpcCommandsDisabled:=FALSE;
  protections.Davlenie_masla_smazki_nizkoe_LA.inOpcCommandsDisabled:=FALSE;
  protections.Davlenie_masla_smazki_visokoe_LA.inOpcCommandsDisabled:=FALSE;
  protections.Vibroskorost_OP_ED_t1_HA.inOpcCommandsDisabled:=FALSE;
  protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA.inOpcCommandsDisabled:=FALSE;
  protections.Vibroskorost_OYP_kolesa_ED_t3_HA.inOpcCommandsDisabled:=FALSE;
  protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA.inOpcCommandsDisabled:=FALSE;
  protections.Vibroskorost_OP_shesterni_ED_t5_HA.inOpcCommandsDisabled:=FALSE;
  protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA.inOpcCommandsDisabled:=FALSE;
  protections.dP_maslo_gaz_menshe_100_kPa_DI.inOpcCommandsDisabled:=FALSE;
  protections.Avar_otkl_viklychatelya_DI.inOpcCommandsDisabled:=FALSE;
  protections.Ostanov_po_zashitam_vozb_avar_DI.inOpcCommandsDisabled:=FALSE;
  protections.AO_KC_ot_SHKC_04M_DI.inOpcCommandsDisabled:=FALSE;
  protections.AO_EGPA_ot_PRY_DI.inOpcCommandsDisabled:=FALSE;
  protections.AO_GPA_na_SHY_DI.inOpcCommandsDisabled:=FALSE;
  protections.MB.inOpcCommandsDisabled:=FALSE;
  protections.Kran1sdvig.inOpcCommandsDisabled:=FALSE;
  protections.Kran2sdvig.inOpcCommandsDisabled:=FALSE;
END_FUNCTION

FUNCTION analogsNS : BOOL
  VAR_INPUT
    ai : AiConfig;
  END_VAR
  VAR
    statusAi : TYPE_StatusAi;
  END_VAR

  analogsNS:=
  OR((ai.TStalisStatoraKanal1.interval<statusAi.Normal) AND NOT ai.TStalisStatoraKanal1.remont)
  OR((ai.TStalisStatoraKanal2.interval<statusAi.Normal) AND NOT ai.TStalisStatoraKanal2.remont)
  OR((ai.TStalisStatoraKanal3.interval<statusAi.Normal) AND NOT ai.TStalisStatoraKanal3.remont)
  OR((ai.TMediStatoraKanal1.interval<statusAi.Normal) AND NOT ai.TMediStatoraKanal1.remont)
  OR((ai.TMediStatoraKanal2.interval<statusAi.Normal) AND NOT ai.TMediStatoraKanal2.remont)
  OR((ai.TMediStatoraKanal3.interval<statusAi.Normal) AND NOT ai.TMediStatoraKanal3.remont)
  OR((ai.TOpornogoPodshipnikaEDT_1.interval<statusAi.Normal) AND NOT ai.TOpornogoPodshipnikaEDT_1.remont)
  OR((ai.TOpornoYpornogoPodshipnikaEDT_2.interval<statusAi.Normal) AND NOT ai.TOpornoYpornogoPodshipnikaEDT_2.remont)
  OR((ai.TOpornoYpornogoPodshipnikaKolesaRedEDT_3.interval<statusAi.Normal) AND NOT ai.TOpornoYpornogoPodshipnikaKolesaRedEDT_3.remont)
  OR((ai.TOpornoYpornogoPodshipnikaKolesaRedHT_4.interval<statusAi.Normal) AND NOT ai.TOpornoYpornogoPodshipnikaKolesaRedHT_4.remont)
  OR((ai.TOpornogoPodshipnikaShesterniReduktoraT_5.interval<statusAi.Normal) AND NOT ai.TOpornogoPodshipnikaShesterniReduktoraT_5.remont)
  OR((ai.TOpornogoPodshipnikaReduktoraHT_6.interval<statusAi.Normal) AND NOT ai.TOpornogoPodshipnikaReduktoraHT_6.remont)
  OR((ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_1.interval<statusAi.Normal) AND NOT ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_1.remont)
  OR((ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_2.interval<statusAi.Normal) AND NOT ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_2.remont)
  OR((ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1.interval<statusAi.Normal) AND NOT ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1.remont)
  OR((ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2.interval<statusAi.Normal) AND NOT ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2.remont)
  OR((ai.TYpornogoPodshipnikaRavKolodokHT_9_1.interval<statusAi.Normal) AND NOT ai.TYpornogoPodshipnikaRavKolodokHT_9_1.remont)
  OR((ai.TYpornogoPodshipnikaRavKolodokHT_9_2.interval<statusAi.Normal) AND NOT ai.TYpornogoPodshipnikaRavKolodokHT_9_2.remont)
  OR((ai.TYpornogoPodshipnikaNerabKolodokHT_10_1.interval<statusAi.Normal) AND NOT ai.TYpornogoPodshipnikaNerabKolodokHT_10_1.remont)
  OR((ai.TYpornogoPodshipnikaNerabKolodokHT_10_2.interval<statusAi.Normal) AND NOT ai.TYpornogoPodshipnikaNerabKolodokHT_10_2.remont)
  OR((ai.TYpornogoPodshipnikaRavKolodokHT_9_1.interval<statusAi.Normal) AND NOT ai.TYpornogoPodshipnikaRavKolodokHT_9_1.remont)
  OR((ai.THolodnogoVozduhaEDKanall.interval<statusAi.Normal) AND NOT ai.THolodnogoVozduhaEDKanall.remont)
  OR((ai.TGorjachegoVozduhaEDKanall.interval<statusAi.Normal) AND NOT ai.TGorjachegoVozduhaEDKanall.remont)
  OR((ai.TGorjachegoVozduhaEDKanal2.interval<statusAi.Normal) AND NOT ai.TGorjachegoVozduhaEDKanal2.remont)
  OR((ai.TNArujnogoVozduha.interval<statusAi.Normal) AND NOT ai.TNArujnogoVozduha.remont)
  OR((ai.TgazaNaVhodeH.interval<statusAi.Normal) AND NOT ai.TgazaNaVhodeH.remont)
  OR((ai.T_masla_v_maslobake.interval<statusAi.Normal) AND NOT ai.T_masla_v_maslobake.remont)
  OR((ai.T_masla_v_maslobake_nad_ten.interval<statusAi.Normal) AND NOT ai.T_masla_v_maslobake_nad_ten.remont)
  OR((ai.T_naryjnogo_vozdyxa.interval<statusAi.Normal) AND NOT ai.T_naryjnogo_vozdyxa.remont)
  OR((ai.Davlenie_impylsnogo_gaza.interval<statusAi.Normal) AND NOT ai.Davlenie_impylsnogo_gaza.remont)
  OR((ai.Yroven_masla_v_maslobake.interval<statusAi.Normal) AND NOT ai.Yroven_masla_v_maslobake.remont)
  OR((ai.Osevoi_sdvig_nagnetatelya_vpravo.interval<statusAi.Normal) AND NOT ai.Osevoi_sdvig_nagnetatelya_vpravo.remont)
  OR((ai.Osevoi_sdvig_nagnetatelya_vlevo.interval<statusAi.Normal) AND NOT ai.Osevoi_sdvig_nagnetatelya_vlevo.remont)
  OR((ai.Tok_statora.interval<statusAi.Normal) AND NOT ai.Tok_statora.remont)
  OR((ai.Kontrol_220_perem.interval<statusAi.Normal) AND NOT ai.Kontrol_220_perem.remont)
  OR((ai.Kontrol_220_post.interval<statusAi.Normal) AND NOT ai.Kontrol_220_post.remont)
  OR((ai.Davlenie_gaza_na_vhode_nagnetatelya.interval<statusAi.Normal) AND NOT ai.Davlenie_gaza_na_vhode_nagnetatelya.remont)
  OR((ai.Davlenie_gaza_na_vihode_nagnetatelya.interval<statusAi.Normal) AND NOT ai.Davlenie_gaza_na_vihode_nagnetatelya.remont)
  OR((ai.Perepad_davleniya_maslo_gaz.interval<statusAi.Normal) AND NOT ai.Perepad_davleniya_maslo_gaz.remont)
  OR((ai.Davlenie_masla_posle_nasosa_yplotneniya.interval<statusAi.Normal) AND NOT ai.Davlenie_masla_posle_nasosa_yplotneniya.remont)
  OR((ai.Davlenie_masla_smazki_nizkoe.interval<statusAi.Normal) AND NOT ai.Davlenie_masla_smazki_nizkoe.remont)
  OR((ai.Davlenie_masla_smazki_visokoe.interval<statusAi.Normal) AND NOT ai.Davlenie_masla_smazki_visokoe.remont)
  OR((ai.Davlenie_masla_smazki_posle_GNS.interval<statusAi.Normal) AND NOT ai.Davlenie_masla_smazki_posle_GNS.remont)
  OR((ai.Perepad_davleniya_gaza_na_konfyzore.interval<statusAi.Normal) AND NOT ai.Perepad_davleniya_gaza_na_konfyzore.remont)
  OR((ai.Perepad_davleniya_masla_na_maslyanom_filtre.interval<statusAi.Normal) AND NOT ai.Perepad_davleniya_masla_na_maslyanom_filtre.remont)
  OR((ai.Vibroskorost_OP_ED_t1.interval<statusAi.Normal) AND NOT ai.Vibroskorost_OP_ED_t1.remont)
  OR((ai.Vibroskorost_OYP_ED_so_storony_redyctora_t2.interval<statusAi.Normal) AND NOT ai.Vibroskorost_OYP_ED_so_storony_redyctora_t2.remont)
  OR((ai.Vibroskorost_OYP_kolesa_ED_t3.interval<statusAi.Normal) AND NOT ai.Vibroskorost_OYP_kolesa_ED_t3.remont)
  OR((ai.Vibroskorost_OP_kolesa_nagnetatelya_t4.interval<statusAi.Normal) AND NOT ai.Vibroskorost_OP_kolesa_nagnetatelya_t4.remont)
  OR((ai.Vibroskorost_OP_shesterni_ED_t5.interval<statusAi.Normal) AND NOT ai.Vibroskorost_OP_shesterni_ED_t5.remont)
  OR((ai.Vibroskorost_OP_shesterni_nagnetatelya_t6.interval<statusAi.Normal) AND NOT ai.Vibroskorost_OP_shesterni_nagnetatelya_t6.remont);
END_FUNCTION

FUNCTION anyAnalogsPs : BOOL
  VAR_INPUT
    ai : AiConfig;
  END_VAR
  VAR
    statusAi : TYPE_StatusAi;
  END_VAR

  anyAnalogsPs:=
  ai.TStalisStatoraKanal1.interval= statusAi.HW OR
  ai.TStalisStatoraKanal2.interval= statusAi.HW OR
  ai.TStalisStatoraKanal3.interval= statusAi.HW OR
  ai.TMediStatoraKanal1.interval= statusAi.HW OR
  ai.TMediStatoraKanal2.interval= statusAi.HW OR
  ai.TMediStatoraKanal3.interval= statusAi.HW OR
  ai.TOpornogoPodshipnikaEDT_1.interval= statusAi.HW OR
  ai.TOpornoYpornogoPodshipnikaEDT_2.interval= statusAi.HW OR
  ai.TOpornoYpornogoPodshipnikaKolesaRedEDT_3.interval= statusAi.HW OR
  ai.TOpornoYpornogoPodshipnikaKolesaRedHT_4.interval= statusAi.HW OR
  ai.TGorjachegoVozduhaEDKanall.interval= statusAi.HW OR
  ai.TGorjachegoVozduhaEDKanal2.interval= statusAi.HW OR
  ai.T_masla_v_maslobake.interval= statusAi.LW OR
  ai.T_masla_v_maslobake_nad_ten.interval= statusAi.HW OR
  ai.TNArujnogoVozduha.interval= statusAi.HW OR
  ai.TgazaNaVhodeH.interval= statusAi.HW OR
  ai.TOpornogoPodshipnikaShesterniReduktoraT_5.interval= statusAi.HW OR
  ai.TOpornogoPodshipnikaReduktoraHT_6.interval= statusAi.HW OR
  ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_1.interval= statusAi.HW OR
  ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_2.interval= statusAi.HW OR
  ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1.interval= statusAi.HW OR
  ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2.interval= statusAi.HW OR
  ai.TYpornogoPodshipnikaRavKolodokHT_9_1.interval= statusAi.HW OR
  ai.TYpornogoPodshipnikaRavKolodokHT_9_2.interval= statusAi.HW OR
  ai.TYpornogoPodshipnikaNerabKolodokHT_10_1.interval= statusAi.HW OR
  ai.TYpornogoPodshipnikaNerabKolodokHT_10_2.interval= statusAi.HW OR
  ai.TYpornogoPodshipnikaRavKolodokHT_9_1.interval= statusAi.HW OR
  ai.THolodnogoVozduhaEDKanall.interval= statusAi.HW OR
  ai.Yroven_masla_v_maslobake.interval= statusAi.LW OR
  ai.Tok_statora.interval= statusAi.LW OR
  ai.Osevoi_sdvig_nagnetatelya_vlevo.interval= statusAi.HW OR
  ai.Osevoi_sdvig_nagnetatelya_vpravo.interval= statusAi.HW OR
  ai.Davlenie_gaza_na_vhode_nagnetatelya.interval= statusAi.LW OR
  ai.Davlenie_gaza_na_vihode_nagnetatelya.interval= statusAi.HW OR
  ai.Davlenie_masla_smazki_posle_GNS.interval= statusAi.LW OR
  ai.Perepad_davleniya_maslo_gaz.interval= statusAi.LW OR
  ai.Perepad_davleniya_masla_na_maslyanom_filtre.interval= statusAi.HW OR
  ai.Davlenie_impylsnogo_gaza.interval= statusAi.LW OR
  ai.Vibroskorost_OP_ED_t1.interval= statusAi.HW OR
  ai.Vibroskorost_OYP_ED_so_storony_redyctora_t2.interval= statusAi.HW OR
  ai.Vibroskorost_OYP_kolesa_ED_t3.interval= statusAi.HW OR
  ai.Vibroskorost_OP_kolesa_nagnetatelya_t4.interval= statusAi.HW OR
  ai.Vibroskorost_OP_shesterni_ED_t5.interval= statusAi.HW OR
  ai.Vibroskorost_OP_shesterni_nagnetatelya_t6.interval= statusAi.HW;
END_FUNCTION

FUNCTION anyDiscretPS : BOOL
  VAR_INPUT
    im : ImConfig;
  END_VAR

  anyDiscretPS:=
      Im.SingleSignals.dP_gaza_kr_1.Q OR 
      Im.SingleSignals.otklon_masla_v_akkym_yplot.Q;
END_FUNCTION

FUNCTION anyProtectionInRemont : BOOL
  VAR_INPUT
    protections : ProtectionsConfig;
  END_VAR

  anyProtectioninRemont:=
  protections.T_OP_ED_t1_HA.Remont OR
  protections.T_OYP_ED_so_storony_redyctora_t2_HA.Remont OR
  protections.T_OYP_kolesa_ED_t3_HA.Remont OR
  protections.T_OP_kolesa_nagnetatelya_t4_HA.Remont OR
  protections.T_OP_shesterni_ED_t5_HA.Remont OR
  protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA.Remont OR
  protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA.Remont OR
  protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA.Remont OR
  protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA.Remont OR
  protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA.Remont OR
  protections.T_gaz_out_nagnetatelia_HA.Remont OR
  protections.Osevoi_sdvig_nagnetatelya_vpravo_HA.Remont OR
  protections.Osevoi_sdvig_nagnetatelya_vlevo_HA.Remont OR
  protections.Davlenie_gaza_na_vhode_nagnetatelya_HA.Remont OR
  protections.Davlenie_gaza_na_vihode_nagnetatelya_HA.Remont OR
  protections.Perepad_davleniya_maslo_gaz_LA.Remont OR
  protections.Davlenie_masla_smazki_nizkoe_LA.Remont OR
  protections.Davlenie_masla_smazki_visokoe_LA.Remont OR
  protections.Vibroskorost_OP_ED_t1_HA.Remont OR
  protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA.Remont OR
  protections.Vibroskorost_OYP_kolesa_ED_t3_HA.Remont OR
  protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA.Remont OR
  protections.Vibroskorost_OP_shesterni_ED_t5_HA.Remont OR
  protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA.Remont OR
  protections.dP_maslo_gaz_menshe_100_kPa_DI.Remont OR
  protections.Avar_otkl_viklychatelya_DI.Remont OR
  protections.Ostanov_po_zashitam_vozb_avar_DI.Remont OR
  protections.AO_KC_ot_SHKC_04M_DI.Remont OR
  protections.AO_EGPA_ot_PRY_DI.Remont OR
  protections.AO_GPA_na_SHY_DI.Remont OR
  protections.MB.Remont OR
  protections.Kran1sdvig.Remont OR
  protections.Kran2sdvig.Remont;
END_FUNCTION

FUNCTION anyProtectionSignaling : BOOL
  VAR_INPUT
    protections : ProtectionsConfig;
  END_VAR

  anyProtectionSignaling:=
  protections.T_OP_ED_t1_HA.Signaling OR
  protections.T_OYP_ED_so_storony_redyctora_t2_HA.Signaling OR
  protections.T_OYP_kolesa_ED_t3_HA.Signaling OR
  protections.T_OP_kolesa_nagnetatelya_t4_HA.Signaling OR
  protections.T_OP_shesterni_ED_t5_HA.Signaling OR
  protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA.Signaling OR
  protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA.Signaling OR
  protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA.Signaling OR
  protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA.Signaling OR
  protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA.Signaling OR
  protections.T_gaz_out_nagnetatelia_HA.Signaling OR
  protections.Osevoi_sdvig_nagnetatelya_vpravo_HA.Signaling OR
  protections.Osevoi_sdvig_nagnetatelya_vlevo_HA.Signaling OR
  protections.Davlenie_gaza_na_vhode_nagnetatelya_HA.Signaling OR
  protections.Davlenie_gaza_na_vihode_nagnetatelya_HA.Signaling OR
  protections.Perepad_davleniya_maslo_gaz_LA.Signaling OR
  protections.Davlenie_masla_smazki_nizkoe_LA.Signaling OR
  protections.Davlenie_masla_smazki_visokoe_LA.Signaling OR
  protections.Vibroskorost_OP_ED_t1_HA.Signaling OR
  protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA.Signaling OR
  protections.Vibroskorost_OYP_kolesa_ED_t3_HA.Signaling OR
  protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA.Signaling OR
  protections.Vibroskorost_OP_shesterni_ED_t5_HA.Signaling OR
  protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA.Signaling OR
  protections.dP_maslo_gaz_menshe_100_kPa_DI.Signaling OR
  protections.Avar_otkl_viklychatelya_DI.Signaling OR
  protections.Ostanov_po_zashitam_vozb_avar_DI.Signaling OR
  protections.AO_KC_ot_SHKC_04M_DI.Signaling OR
  protections.AO_EGPA_ot_PRY_DI.Signaling OR
  protections.AO_GPA_na_SHY_DI.Signaling OR
  protections.MB.Signaling OR
  protections.Kran1sdvig.Signaling OR
  protections.Kran2sdvig.Signaling;
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

FUNCTION runAiProtection : BOOL
  VAR_IN_OUT
    protection : struct_AiProtection;
  END_VAR
  VAR CONSTANT
    cmdRun : WORD       := 1;
  END_VAR

  IF NOT protection.isRunning THEN
                      protection.inOpcCommandsDisabled:=TRUE;
  		protection.inCommand_Alg:=cmdRun;
  END_IF;
END_FUNCTION

FUNCTION runDiProtection : BOOL
  VAR_IN_OUT
    protection : struct_DiProtection;
  END_VAR
  VAR CONSTANT
    cmdRun : WORD       := 1;
  END_VAR

  IF NOT protection.isRunning THEN
                      protection.inOpcCommandsDisabled:=TRUE;
  		protection.inCommand_Alg:=cmdRun;
  END_IF;
END_FUNCTION

FUNCTION autoRunProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  runAiProtection(protections.T_OP_ED_t1_HA); 
  runAiProtection(protections.T_OYP_ED_so_storony_redyctora_t2_HA);
  runAiProtection(protections.T_OYP_kolesa_ED_t3_HA);
  runAiProtection(protections.T_OP_kolesa_nagnetatelya_t4_HA);
  runAiProtection(protections.T_OP_shesterni_ED_t5_HA);
  runAiProtection(protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA);
  runAiProtection(protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA);
  runAiProtection(protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA);
  runAiProtection(protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA);
  runAiProtection(protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA);
  runAiProtection(protections.T_gaz_out_nagnetatelia_HA);
  runAiProtection(protections.Osevoi_sdvig_nagnetatelya_vpravo_HA);
  runAiProtection(protections.Osevoi_sdvig_nagnetatelya_vlevo_HA);
  runAiProtection(protections.Davlenie_gaza_na_vhode_nagnetatelya_HA);
  runAiProtection(protections.Davlenie_gaza_na_vihode_nagnetatelya_HA);
  runAiProtection(protections.Perepad_davleniya_maslo_gaz_LA);
  runAiProtection(protections.Davlenie_masla_smazki_nizkoe_LA);
  runAiProtection(protections.Davlenie_masla_smazki_visokoe_LA);
  runAiProtection(protections.Vibroskorost_OP_ED_t1_HA);
  runAiProtection(protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA);
  runAiProtection(protections.Vibroskorost_OYP_kolesa_ED_t3_HA);
  runAiProtection(protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA);
  runAiProtection(protections.Vibroskorost_OP_shesterni_ED_t5_HA);
  runAiProtection(protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA);
  runDiProtection(protections.dP_maslo_gaz_menshe_100_kPa_DI);
  runDiProtection(protections.Avar_otkl_viklychatelya_DI);
  runDiProtection(protections.Ostanov_po_zashitam_vozb_avar_DI);
  runDiProtection(protections.AO_KC_ot_SHKC_04M_DI);
  runDiProtection(protections.AO_EGPA_ot_PRY_DI);
  runDiProtection(protections.AO_GPA_na_SHY_DI);
  runDiProtection(protections.MB);
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
                OR (di.di_14.reliability <> 255)
                OR (di.di_15.reliability <> 255)
                OR (di.di_16.reliability <> 255)
                OR (di.di_17.reliability <> 255));
END_FUNCTION

FUNCTION impulseSO : BOOL
  VAR_IN_OUT
    so : struct_singleOutput;
  END_VAR
  VAR CONSTANT
    cmdImpulse : WORD       := 3;
  END_VAR

  IF NOT so.Q THEN
                      so.inOpcCommandsDisabled:=TRUE;
  		so.inCommand_Alg:=cmdImpulse;
  END_IF;
END_FUNCTION

FUNCTION nsCepeiControl : BOOL
  VAR_INPUT
    im : ImConfig;
  END_VAR

  nsCepeiControl:= NOT (
  	im.kran1.reliability OR
  	im.kran2.reliability OR 
            im.kran3.reliability OR 
  	im.kran4.reliability OR 
  	im.kran5.reliability OR 
  	im.kran6.reliability OR 
  	im.kran3b.reliability OR 
  	im.pns.reliability OR
  	im.nu1.reliability OR
  	im.nu2.reliability OR
  	im.MB.reliability OR
            im.v1_Avom.reliability OR
            im.v2_Avom.reliability OR
            im.v3_Avom.reliability OR
            im.v3_Avom.reliability OR
            im.Ten_MB.reliability OR
            im.Ten_kollect.reliability OR
            im.Kalorifer_ABO.reliability OR
  	im.CMN_pump.reliability);
END_FUNCTION

FUNCTION nsCepeiUpravlenya : BOOL
  VAR_INPUT
    im : ImConfig;
  END_VAR

  nsCepeiUpravlenya:=
  	im.kran1.So OR im.kran1.Sz OR
  	im.kran2.So OR im.kran2.Sz OR
            im.kran3.So OR im.kran3.Sz OR
  	im.kran4.So OR im.kran4.Sz OR
  	im.kran5.So OR im.kran5.Sz OR
  	im.kran6.So OR im.kran6.Sz OR
  	im.kran3b.So OR im.kran3b.Sz OR
  	im.pns.breakCmdOn OR
  	im.nu1.breakCmdOn OR
  	im.nu2.breakCmdOn OR
  	im.CMN_pump.breakCmdOn OR
            im.v1_Avom.breakCmdOn OR
            im.v2_Avom.breakCmdOn OR
            im.v3_Avom.breakCmdOn OR
            im.v4_Avom.breakCmdOn OR
            im.Ten_MB.breakCmdOn OR
            im.Ten_kollect.breakCmdOn OR
            im.Kalorifer_ABO.breakCmdOn OR
  	im.MB.breakCmdOff;
END_FUNCTION

FUNCTION remontAllProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR
  VAR CONSTANT
    cmdRemont : WORD       := 4;
  END_VAR

  protections.T_OP_ED_t1_HA.inCommand_Alg:=cmdRemont;
  protections.T_OYP_ED_so_storony_redyctora_t2_HA.inCommand_Alg:=cmdRemont;
  protections.T_OYP_kolesa_ED_t3_HA.inCommand_Alg:=cmdRemont;
  protections.T_OP_kolesa_nagnetatelya_t4_HA.inCommand_Alg:=cmdRemont;
  protections.T_OP_shesterni_ED_t5_HA.inCommand_Alg:=cmdRemont;
  protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA.inCommand_Alg:=cmdRemont;
  protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA.inCommand_Alg:=cmdRemont;
  protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA.inCommand_Alg:=cmdRemont;
  protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA.inCommand_Alg:=cmdRemont;
  protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA.inCommand_Alg:=cmdRemont;
  protections.T_gaz_out_nagnetatelia_HA.inCommand_Alg:=cmdRemont;
  protections.Osevoi_sdvig_nagnetatelya_vpravo_HA.inCommand_Alg:=cmdRemont;
  protections.Osevoi_sdvig_nagnetatelya_vlevo_HA.inCommand_Alg:=cmdRemont;
  protections.Davlenie_gaza_na_vhode_nagnetatelya_HA.inCommand_Alg:=cmdRemont;
  protections.Davlenie_gaza_na_vihode_nagnetatelya_HA.inCommand_Alg:=cmdRemont;
  protections.Perepad_davleniya_maslo_gaz_LA.inCommand_Alg:=cmdRemont;
  protections.Davlenie_masla_smazki_nizkoe_LA.inCommand_Alg:=cmdRemont;
  protections.Davlenie_masla_smazki_visokoe_LA.inCommand_Alg:=cmdRemont;
  protections.Vibroskorost_OP_ED_t1_HA.inCommand_Alg:=cmdRemont;
  protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA.inCommand_Alg:=cmdRemont;
  protections.Vibroskorost_OYP_kolesa_ED_t3_HA.inCommand_Alg:=cmdRemont;
  protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA.inCommand_Alg:=cmdRemont;
  protections.Vibroskorost_OP_shesterni_ED_t5_HA.inCommand_Alg:=cmdRemont;
  protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA.inCommand_Alg:=cmdRemont;
  protections.dP_maslo_gaz_menshe_100_kPa_DI.inCommand_Alg:=cmdRemont;
  protections.Avar_otkl_viklychatelya_DI.inCommand_Alg:=cmdRemont;
  protections.Ostanov_po_zashitam_vozb_avar_DI.inCommand_Alg:=cmdRemont;
  protections.AO_KC_ot_SHKC_04M_DI.inCommand_Alg:=cmdRemont;
  protections.AO_EGPA_ot_PRY_DI.inCommand_Alg:=cmdRemont;
  protections.AO_GPA_na_SHY_DI.inCommand_Alg:=cmdRemont;
  protections.MB.inCommand_Alg:=cmdRemont;
  protections.Kran1sdvig.inCommand_Alg:=cmdRemont;
  protections.Kran2sdvig.inCommand_Alg:=cmdRemont;
END_FUNCTION

FUNCTION resetAllProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  resetAiProtection(protections.T_OP_ED_t1_HA);
  resetAiProtection(protections.T_OYP_ED_so_storony_redyctora_t2_HA);
  resetAiProtection(protections.T_OYP_kolesa_ED_t3_HA);
  resetAiProtection(protections.T_OP_kolesa_nagnetatelya_t4_HA);
  resetAiProtection(protections.T_OP_shesterni_ED_t5_HA);
  resetAiProtection(protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA);
  resetAiProtection(protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA);
  resetAiProtection(protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA);
  resetAiProtection(protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA);
  resetAiProtection(protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA);
  resetAiProtection(protections.T_gaz_out_nagnetatelia_HA);
  resetAiProtection(protections.Osevoi_sdvig_nagnetatelya_vpravo_HA);
  resetAiProtection(protections.Osevoi_sdvig_nagnetatelya_vlevo_HA);
  resetAiProtection(protections.Davlenie_gaza_na_vhode_nagnetatelya_HA);
  resetAiProtection(protections.Davlenie_gaza_na_vihode_nagnetatelya_HA);
  resetAiProtection(protections.Perepad_davleniya_maslo_gaz_LA);
  resetAiProtection(protections.Davlenie_masla_smazki_nizkoe_LA);
  resetAiProtection(protections.Davlenie_masla_smazki_visokoe_LA);
  resetAiProtection(protections.Vibroskorost_OP_ED_t1_HA);
  resetAiProtection(protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA);
  resetAiProtection(protections.Vibroskorost_OYP_kolesa_ED_t3_HA);
  resetAiProtection(protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA);
  resetAiProtection(protections.Vibroskorost_OP_shesterni_ED_t5_HA);
  resetAiProtection(protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA);
  resetDiProtection(protections.dP_maslo_gaz_menshe_100_kPa_DI);
  resetDiProtection(protections.Avar_otkl_viklychatelya_DI);
  resetDiProtection(protections.Ostanov_po_zashitam_vozb_avar_DI);
  resetDiProtection(protections.AO_KC_ot_SHKC_04M_DI);
  resetDiProtection(protections.AO_EGPA_ot_PRY_DI);
  resetDiProtection(protections.AO_GPA_na_SHY_DI);
  resetDiProtection(protections.MB);
  resetDiProtection(protections.Kran1sdvig);
  resetDiProtection(protections.Kran2sdvig);
END_FUNCTION

FUNCTION resetAndDisable : BOOL
  VAR_IN_OUT
    alg : struct_Alg;
  END_VAR
  VAR CONSTANT
    cmdReset : WORD       := 2;
  END_VAR

  IF alg.isRuning THEN
                      alg.inOpcCommandsDisabled:=TRUE;
  		alg.inCommand_Alg:=cmdReset;                   
  END_IF;

   alg.inCanRun:=FALSE;
END_FUNCTION

FUNCTION resetIfRunning : BOOL
  VAR_IN_OUT
    alg : struct_Alg;
  END_VAR
  VAR CONSTANT
    cmdReset : WORD       := 2;
  END_VAR

  IF alg.isRuning THEN
                      alg.inOpcCommandsDisabled:=TRUE;
  		alg.inCommand_Alg:=cmdReset;
  END_IF;
END_FUNCTION

FUNCTION resetIfRunningSO : BOOL
  VAR_IN_OUT
    so : struct_singleOutput;
  END_VAR
  VAR CONSTANT
    cmdReset : WORD       := 2;
  END_VAR

  IF so.Q THEN
                      so.inOpcCommandsDisabled:=TRUE;
  		so.inCommand_Alg:=cmdReset;
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

FUNCTION resetQuestion : BOOL
  VAR_IN_OUT
    StrQ : struct_Question;
  END_VAR

  IF StrQ.ask THEN
                      StrQ.inOpcCommandsDisabled:=TRUE;
                      StrQ.reset:=TRUE;                   
  END_IF;
END_FUNCTION

FUNCTION runAllProtections : BOOL
  VAR_IN_OUT
    protections : ProtectionsConfig;
  END_VAR

  runAiProtection(protections.T_OP_ED_t1_HA);
  runAiProtection(protections.T_OYP_ED_so_storony_redyctora_t2_HA);
  runAiProtection(protections.T_OYP_kolesa_ED_t3_HA);
  runAiProtection(protections.T_OP_kolesa_nagnetatelya_t4_HA);
  runAiProtection(protections.T_OP_shesterni_ED_t5_HA);
  runAiProtection(protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA);
  runAiProtection(protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA);
  runAiProtection(protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA);
  runAiProtection(protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA);
  runAiProtection(protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA);
  runAiProtection(protections.T_gaz_out_nagnetatelia_HA);
  runAiProtection(protections.Osevoi_sdvig_nagnetatelya_vpravo_HA);
  runAiProtection(protections.Osevoi_sdvig_nagnetatelya_vlevo_HA);
  runAiProtection(protections.Davlenie_gaza_na_vhode_nagnetatelya_HA);
  runAiProtection(protections.Davlenie_gaza_na_vihode_nagnetatelya_HA);
  runAiProtection(protections.Perepad_davleniya_maslo_gaz_LA);
  runAiProtection(protections.Davlenie_masla_smazki_nizkoe_LA);
  runAiProtection(protections.Davlenie_masla_smazki_visokoe_LA);
  runAiProtection(protections.Vibroskorost_OP_ED_t1_HA);
  runAiProtection(protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA);
  runAiProtection(protections.Vibroskorost_OYP_kolesa_ED_t3_HA);
  runAiProtection(protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA);
  runAiProtection(protections.Vibroskorost_OP_shesterni_ED_t5_HA);
  runAiProtection(protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA);
  runDiProtection(protections.dP_maslo_gaz_menshe_100_kPa_DI);
  runDiProtection(protections.Avar_otkl_viklychatelya_DI);
  runDiProtection(protections.Ostanov_po_zashitam_vozb_avar_DI);
  runDiProtection(protections.AO_KC_ot_SHKC_04M_DI);
  runDiProtection(protections.AO_EGPA_ot_PRY_DI);
  runDiProtection(protections.AO_GPA_na_SHY_DI);
  runDiProtection(protections.MB);
  runDiProtection(protections.Kran1sdvig);
  runDiProtection(protections.Kran2sdvig);
END_FUNCTION

FUNCTION runIfNotRunning : BOOL
  VAR_IN_OUT
    alg : struct_Alg;
  END_VAR
  VAR CONSTANT
    cmdRun : WORD       := 1;
  END_VAR

  IF NOT alg.isRuning THEN
                      alg.inOpcCommandsDisabled:=TRUE;
                      alg.inCanRun:=TRUE;
  		alg.inCommand_Alg:=cmdRun;
  END_IF;
END_FUNCTION

FUNCTION runIfNotRunningSO : BOOL
  VAR_IN_OUT
    so : struct_singleOutput;
  END_VAR
  VAR CONSTANT
    cmdRun : WORD       := 1;
  END_VAR

  IF NOT so.Q THEN
                      so.inOpcCommandsDisabled:=TRUE;
  		so.inCommand_Alg:=cmdRun;
  END_IF;
END_FUNCTION

FUNCTION runPhase : BOOL
  VAR_IN_OUT
    ph : struct_PhaseAlgoritm;
  END_VAR

  IF NOT ph.start THEN
                      ph.run:=TRUE;                   
  END_IF;
END_FUNCTION

FUNCTION setValue : BOOL
  VAR_IN_OUT
    StrDP : struct_DiscretParametr;
  END_VAR
  VAR_INPUT
    newValue : UINT;
  END_VAR
  VAR
    cmd_ChangeValue : WORD       := 1;
  END_VAR

  StrDP.newValue:=newValue;
  StrDP.inOpcCommandsDisabled:=TRUE;
  StrDP.inCommand_Alg:=cmd_ChangeValue;
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

FUNCTION_BLOCK fb_Question
  VAR_INPUT
    PhaseNumber : UINT;
  END_VAR
  VAR_IN_OUT
    StrQ : struct_Question;
  END_VAR
  VAR
    Asked : UINT;
    _answers : TYPE_Answers;
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
  VAR CONSTANT
    cmd_answer : UINT   := 1;
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
              fb_PmsUp(StrPh:=PmsUp, ai:=ai.Davlenie_masla_smazki_nizkoe, more:=ai.Davlenie_masla_smazki_nizkoe.LW);
    fb_runProtecrionAi(StrPh:=runProtecrionAi, StrAiP:=protections.Davlenie_masla_smazki_nizkoe_LA);
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
           ai.Davlenie_masla_smazki_nizkoe.Disabled_LA:=FALSE;
           ai.Davlenie_masla_smazki_nizkoe.Disabled_LW:=FALSE;
           ai.Davlenie_masla_smazki_visokoe.Disabled_LW:=FALSE;	
           askQuestion(algContinue);
      END_IF;

      IF algContinue.answer = _Answers.ANS_YES THEN 

          runPhase(BreakTest);
          runPhase(pnsOff);
          runPhase(LowOilPS);
          runPhase(LowOilAS);

      END_IF;

      IF 	LowOilPS.start AND NOT LowOilPS.top THEN
  	LowOilPS.top:= ai.Davlenie_masla_smazki_nizkoe.interval = _statusAi.LW;	
      END_IF;	
      IF 	LowOilAS.start AND NOT LowOilAS.top THEN
  	LowOilAS.top:= ai.Davlenie_masla_smazki_nizkoe.interval = _statusAi.LA;
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

                                          ai.Davlenie_masla_smazki_nizkoe.Disabled_LA:=TRUE;
                                          ai.Davlenie_masla_smazki_nizkoe.Disabled_LW:=TRUE;
                                          ai.Davlenie_masla_smazki_visokoe.Disabled_LW:=TRUE;
                                          resetAiProtection(protections.Davlenie_masla_smazki_nizkoe_LA);

                                          resetPhase(pnsOn);
                                          resetPhase(PmsUp);
                                          resetPhase(runProtecrionAi);
                                          resetPhase(pnsOff);
                                          resetPhase(BreakTest);
                                          resetPhase(LowOilPS);
                                          resetPhase(LowOilAS);
                                          resetPhase(testUnsuccessful);

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
  		(*DualStateImAction.on*)   _on : im.inCommand_Alg := 1; (*cmd_open*)
  		(*DualStateImAction.off*) _off : im.inCommand_Alg := 2; (*cmd_close*)
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
             fb_dPmgAi(StrPh:=dPmgAi, ai:=ai.Perepad_davleniya_maslo_gaz, less:=im.testdPmg_Ust_dPLow.Value);
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
           askQuestion(algContinue);
      END_IF;

      IF algContinue.answer = _Answers.ANS_YES AND NOT nuOff.top THEN 

          runPhase(nuOff);

          IF Im.nu1.onStatus = _statusDualInput.STATUS_ON THEN
  		runPhase(nu1Off); 
          END_IF;

          IF Im.nu2.onStatus = _statusDualInput.STATUS_ON THEN
  		runPhase(nu2Off);	
          END_IF;

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

      IF dPmgDi.start AND NOT dPmgDi.top THEN 
          dPmgDi.top:=Im.SingleSignals.dP_maslo_gaz_menshe_100_kPa.q;
      END_IF;

      IF dPmgAi.top AND dPmgDi.top THEN
          runPhase(nuOn);    
          runPhase(noRezrv);
      END_IF;

      IF noRezrv.start AND NOT noRezrv.top THEN 
          noRezrv.top:=NotHasRezervNU;
      END_IF;

       IF nuOn.start AND (NOT WaitOnNU.Q) THEN
          WaitOnNU(IN:=Im.nu1.onStatus = _statusDualInput.STATUS_On OR
              Im.nu2.onStatus = _statusDualInput.STATUS_On, PT:=T#1S);  
          nuOn.top:=Im.nu1.onStatus = _statusDualInput.STATUS_On OR
              Im.nu2.onStatus = _statusDualInput.STATUS_On;
      END_IF;   

      IF  WaitOnNU.Q AND noRezrv.top THEN
          ai.Perepad_davleniya_maslo_gaz.Disabled_LA:=TRUE;
          ai.Perepad_davleniya_maslo_gaz.Disabled_LW:=TRUE;
          ai.Davlenie_masla_smazki_nizkoe.Disabled_LA:=TRUE;
          ai.Davlenie_masla_smazki_nizkoe.Disabled_LW:=TRUE;
          ai.Davlenie_masla_smazki_visokoe.Disabled_LW:=TRUE;

          resetAiProtection(protections.Davlenie_masla_smazki_nizkoe_LA);
          resetAiProtection(protections.Perepad_davleniya_maslo_gaz_LA);
          resetDiProtection(protections.dP_maslo_gaz_menshe_100_kPa_DI);

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

                                          ai.Davlenie_masla_smazki_nizkoe.Disabled_LA:=TRUE;
                                          ai.Davlenie_masla_smazki_nizkoe.Disabled_LW:=TRUE;
                                          ai.Davlenie_masla_smazki_visokoe.Disabled_LW:=TRUE;
                                          resetAiProtection(protections.Davlenie_masla_smazki_nizkoe_LA);
                                          resetAiProtection(protections.Perepad_davleniya_maslo_gaz_LA);
                                          resetDiProtection(protections.dP_maslo_gaz_menshe_100_kPa_DI);

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
  		(*DualStateImAction.on*)   _on: im.inCommand_Alg := 1; (*cmd_open*)
  		(*DualStateImAction.off*) _off: im.inCommand_Alg := 2; (*cmd_close*)
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
  		(*DualStateImAction.on*)   _on : im.inCommand_Alg := 1; (*cmd_open*)
  		(*DualStateImAction.off*) _off : im.inCommand_Alg := 2; (*cmd_close*)
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
    testKranControl : BOOL      := TRUE;
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
  VAR CONSTANT
    Ust_Pgaza : LREAL      := 0.3;
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
           askQuestion(questionFilling);
      END_IF;

      IF questionFilling.answer = _Answers.ANS_YES THEN
          runPhase(filling);
      END_IF;

      IF filling.top THEN
         askQuestion(questionUnload);
      END_IF;

       IF questionUnload.answer = _Answers.ANS_YES THEN
          runPhase(kran3bOpen);
          runPhase(wait720);
      END_IF;

      IF kran3bOpen.top THEN
            resetDiProtection(protections.Kran1sdvig);
            resetDiProtection(protections.Kran2sdvig);

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
  	noGasInPipe.top:=  (ai.Davlenie_gaza_na_vhode_nagnetatelya.interval >= _statusAi.NORMAL
                           AND  ai.Davlenie_gaza_na_vhode_nagnetatelya.value< Ust_Pgaza )
                           AND (ai.Davlenie_gaza_na_vihode_nagnetatelya.interval >= _statusAi.NORMAL
                           AND  ai.Davlenie_gaza_na_vihode_nagnetatelya.value< Ust_Pgaza); 
      END_IF;

      IF noGasInPipe.top THEN

            ai.Perepad_davleniya_maslo_gaz.Disabled_LA:=TRUE;
            ai.Perepad_davleniya_maslo_gaz.Disabled_LW:=TRUE;
            resetAiProtection(protections.Perepad_davleniya_maslo_gaz_LA);
            resetDiProtection(protections.dP_maslo_gaz_menshe_100_kPa_DI);
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
  	waitReset(IN:=TRUE, PT:= T#2S);
      END_IF;

      IF waitReset.Q THEN
          resetIfRunning(algoritms.vibegPNS);
          algManager.nMode:=ModeGpa.MODE_STOP;
          resetIfRunning(StrAlg);
      END_IF;

      StrAlg.isEnded:= nu1Off.top AND nu2Off.top;

      IF testKranControl THEN
  	IF      (im.pns.onStatus = _statusDualInput.STATUS_ON)
                AND (im.nu1.onStatus = _statusDualInput.STATUS_ON OR im.nu2.onStatus = _statusDualInput.STATUS_ON)
  	    AND (ai.Perepad_davleniya_maslo_gaz.interval >= _statusAi.normal)
                AND (ai.Perepad_davleniya_maslo_gaz.value > im.PuskOilSystem_UstdPmg.Value)
            THEN
  	    IM.Kran3b.inOpcCommandsDisabled:=FALSE;
  	    Im.kran4.inOpcCommandsDisabled:=FALSE;
  	    Im.kran5.inOpcCommandsDisabled:=FALSE;
  		IF	Im.SingleSignals.dP_gaza_kr_1.q THEN
  			Im.kran1.inOpcCommandsDisabled:=FALSE; 
  			Im.kran2.inOpcCommandsDisabled:=FALSE;
  		ELSE
  			Im.kran1.inOpcCommandsDisabled:=TRUE; 
  			Im.kran2.inOpcCommandsDisabled:=TRUE;
  		END_IF;
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
                                          (*testKranControl:=FALSE;*)
                                          waitReset(IN:=FALSE);

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
  VAR CONSTANT
    Ust_Pgaza : LREAL      := 0.3;
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
                 fb_Avom1Off(phaseNumber:=5, act:=_off);
                 fb_Avom2Off(phaseNumber:=6, act:=_off);
         fb_testUnsuccessful(phaseNumber:=17);     

  onInit:=TRUE;
  END_IF;

            fb_puskOilSystem(StrPh:=puskOilSystem, alg:=algoritms.puskOilSystem);
           fb_questionEngine(StrQ:=questionEngine);
            fb_runningEngine(StrPh:=runningEngine, alg:=algoritms.filling);
            fb_questionMVoff(StrQ:=questionMVoff);
                    fb_mvOff(StrPh:=mvOff, Im:=Im.MB);
                    fb_pnsOn(StrPh:=pnsOn, Im:=Im.pns);
                  fb_wait600(StrPh:=wait600, timer:=AlgTimers.puskV_wait600);
                fb_AutoNUoff(StrPh:=AutoNUoff, alg:=algoritms.autoNu);
                   fb_nu1Off(StrPh:=nu1Off, Im:=Im.nu1);
                   fb_nu2Off(StrPh:=nu2Off, Im:=Im.nu2);
               fb_pnsWaitOff(StrPh:=pnsWaitOff, alg:=algoritms.vibegPNS);
                 fb_Avom1Off(StrPh:=Avom1Off, Im:=Im.v1_Avom);
                 fb_Avom2Off(StrPh:=Avom2Off, Im:=Im.v2_Avom);
         fb_testUnsuccessful(StrPh:=testUnsuccessful);                               

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

      StrAlg.hasError := mvOff.error OR pnsOn.error OR testUnsuccessful.error;

      IF puskOilSystem.top THEN	
           askQuestion(questionEngine);
      END_IF;

      IF questionEngine.answer = _Answers.ANS_YES THEN
          runPhase(runningEngine);
      END_IF;

      IF runningEngine.top THEN
         askQuestion(questionMVoff);
      END_IF;

       IF questionMVoff.answer = _Answers.ANS_YES THEN

          resetDiProtection(protections.MB);
          resetIfRunning(algoritms.AutoPns);
          runPhase(mvOff);
          runPhase(wait600);

       END_IF;

      IF mvOff.top THEN
          runPhase(pnsOn);
      END_IF;

      IF pnsOn.top THEN

            ai.Perepad_davleniya_maslo_gaz.Disabled_LA:=TRUE;
            ai.Perepad_davleniya_maslo_gaz.Disabled_LW:=TRUE;
            resetAiProtection(protections.Perepad_davleniya_maslo_gaz_LA);
            resetDiProtection(protections.dP_maslo_gaz_menshe_100_kPa_DI);
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
            resetIfRunning(algoritms.AutoAvom);
            runPhase(Avom1Off);
            runPhase(Avom2Off);
  	waitReset(IN:=TRUE, PT:= T#2S);
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

                                          resetPhase(puskOilSystem);
                                          resetPhase(runningEngine);
                                          resetPhase(mvOff);
                                          resetPhase(pnsOn);
                                          resetPhase(wait600);
                                          resetPhase(AutoNUoff);
                                          resetPhase(nu1Off);
                                          resetPhase(nu2Off);
                                          resetPhase(pnsWaitOff);
                                          resetPhase(Avom1Off);
                                          resetPhase(Avom2Off);
                                          resetPhase(testUnsuccessful);

                                          resetQuestion(questionEngine);      
                                          resetQuestion(questionMVoff);

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

FUNCTION_BLOCK AOAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    kran4Close : struct_PhaseAlgoritm;
    mvOff : struct_PhaseAlgoritm;
    pnsOn : struct_PhaseAlgoritm;
    kran3bOpen : struct_PhaseAlgoritm;
    kran1Close : struct_PhaseAlgoritm;
    kran2Close : struct_PhaseAlgoritm;
    kran5Open : struct_PhaseAlgoritm;
    autoNuOff : struct_PhaseAlgoritm;
    autoPnsOff : struct_PhaseAlgoritm;
    pInNagLess100 : struct_PhaseAlgoritm;
    autoAvomOff : struct_PhaseAlgoritm;
    avom1cmdOff : struct_PhaseAlgoritm;
    avom2cmdOff : struct_PhaseAlgoritm;
    nu1off : struct_PhaseAlgoritm;
    nu2off : struct_PhaseAlgoritm;
    LowOil : struct_PhaseAlgoritm;
    waitKran : struct_PhaseAlgoritm;
    pnsWaitOff : struct_PhaseAlgoritm;
    runUnsuccessful : struct_PhaseAlgoritm;
    fb_kran4Close : fb_ph_Kran;
    fb_mvOff : fb_ph_SectionSwitch;
    fb_pnsOn : fb_ph_Switch;
    fb_kran3bOpen : fb_ph_Kran;
    fb_kran1Close : fb_ph_Kran;
    fb_kran2Close : fb_ph_Kran;
    fb_kran5Open : fb_ph_Kran;
    fb_autoNuOff : fb_ph_algoritm;
    fb_autoPnsOff : fb_ph_algoritm;
    fb_pInNagLess100 : fb_ph_CustomPhase;
    fb_autoAvomOff : fb_ph_algoritm;
    fb_avom1cmdOff : fb_ph_Switch;
    fb_avom2cmdOff : fb_ph_Switch;
    fb_nu1off : fb_ph_OilPump;
    fb_nu2off : fb_ph_OilPump;
    fb_LowOil : fb_ph_WaitAnalogValue;
    fb_waitKran : fb_ph_Timer;
    fb_pnsWaitOff : fb_ph_algoritm;
    fb_runUnsuccessful : fb_ph_CustomPhase;
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
    PMcommand : TYPE_CommandsPotectionsManager;
    protectManager : struct_ProtectionsManager;
  END_VAR
  VAR CONSTANT
    Ust_Pgaza : LREAL      := 0.3;
  END_VAR

  IF NOT onInit THEN

         fb_kran4Close(phaseNumber:=1, act:=_off);
         fb_kran3bOpen(phaseNumber:=2, act:=_on);       
              fb_mvOff(phaseNumber:=3, act:=_off);
              fb_pnsOn(phaseNumber:=4, act:=_on);
         fb_kran1Close(phaseNumber:=6, act:=_off);
         fb_kran2Close(phaseNumber:=7, act:=_off);            
          fb_kran5Open(phaseNumber:=8, act:=_on);
          fb_autoNuOff(phaseNumber:=9, act:=_reset, waitCompletion:=FALSE);
         fb_autoPnsOff(phaseNumber:=10, act:=_reset, waitCompletion:=FALSE);
        fb_autoAvomOff(phaseNumber:=11, act:=_reset, waitCompletion:=FALSE);
        fb_avom1cmdOff(phaseNumber:=12, act:=_off);
        fb_avom2cmdOff(phaseNumber:=13, act:=_off);       
      fb_pInNagLess100(phaseNumber:=14);       
           fb_waitKran(phaseNumber:=15, delay:=T#240S);        
         fb_pnsWaitOff(phaseNumber:=17, act:=_run, waitCompletion:=TRUE);       
             fb_nu1off(phaseNumber:=18, act:=_off);
             fb_nu2off(phaseNumber:=19, act:=_off);
    fb_runUnsuccessful(phaseNumber:=20);

  onInit:=TRUE;
  END_IF;

         fb_kran4Close(StrPh:=kran4Close, Im:=Im.kran4);
         fb_kran3bOpen(StrPh:=kran3bOpen, Im:=Im.kran3b);       
              fb_mvOff(StrPh:=mvOff, Im:=Im.MB);
              fb_pnsOn(StrPh:=pnsOn, Im:=Im.pns);

         fb_kran1Close(StrPh:=kran1Close, Im:=Im.kran1);
         fb_kran2Close(StrPh:=kran2Close, Im:=Im.kran2);
          fb_kran5Open(StrPh:=kran5Open, Im:=Im.kran5);
          fb_autoNuOff(StrPh:=autoNuOff, alg:=algoritms.autoNu);
         fb_autoPnsOff(StrPh:=autoPnsOff, alg:=algoritms.autoPns);
        fb_autoAvomOff(StrPh:=autoAvomOff, alg:=algoritms.AutoAvom);
        fb_avom1cmdOff(StrPh:=avom1cmdOff, Im:=Im.v1_Avom);
        fb_avom2cmdOff(StrPh:=avom2cmdOff, Im:=Im.v2_Avom);
      fb_pInNagLess100(StrPh:=pInNagLess100);      
           fb_waitKran(StrPh:=waitKran, timer:=AlgTimers.AO_waitKran);       
         fb_pnsWaitOff(StrPh:=pnsWaitOff, alg:=algoritms.vibegPNS, waitCompletion:=TRUE);      
             fb_nu1off(StrPh:=nu1off, Im:=Im.nu1);
             fb_nu2off(StrPh:=nu2off, Im:=Im.nu2);
    fb_runUnsuccessful(StrPh:=runUnsuccessful);

  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN


      StrAlg.hasError := kran4Close.error OR mvOff.error OR pnsOn.error OR kran3bOpen.error
      OR kran1Close.error OR kran2Close.error OR kran5Open.error OR runUnsuccessful.error;


      runPhase(kran4Close);
      runPhase(kran3bOpen);
      runPhase(kran1Close);
      runPhase(kran2Close);
      runPhase(mvOff);

      IF kran1Close.top AND kran2Close.top AND kran4Close.top THEN
          runPhase(kran5Open);
      END_IF;

      IF mvOff.top THEN
            runPhase(autoPnsOff); 
      END_IF;        	

       IF autoPnsOff.top THEN
  	runPhase(pnsOn);	
      END_IF;

      IF kran5Open.top THEN
         runPhase(pInNagLess100);
         resetPhase(waitKran);
      END_IF;              



     IF pInNagLess100.start AND NOT pInNagLess100.top THEN
  	pInNagLess100.top:=( ai.Davlenie_gaza_na_vhode_nagnetatelya.interval >= _statusAi.NORMAL AND
            ai.Davlenie_gaza_na_vhode_nagnetatelya.value < Ust_Pgaza ) AND 
           (ai.Davlenie_gaza_na_vihode_nagnetatelya.interval >= _statusAi.NORMAL AND
            ai.Davlenie_gaza_na_vihode_nagnetatelya.value < Ust_Pgaza); 

     END_IF; 

      IF pInNagLess100.top AND kran3bOpen.top AND mvOff.top THEN
  	ai.Perepad_davleniya_maslo_gaz.Disabled_LA:=TRUE;
            ai.Perepad_davleniya_maslo_gaz.Disabled_LW:=TRUE;
            resetAiProtection(protections.Perepad_davleniya_maslo_gaz_LA);
            resetDiProtection(protections.dP_maslo_gaz_menshe_100_kPa_DI);

            runPhase(autoNuOff);
            runPhase(nu1off);
            runPhase(nu2off);       
      END_IF;

       IF nu1off.top AND  nu2off.top THEN
  	runPhase(pnsWaitOff);
      END_IF;	

      IF waitKran.top AND (NOT kran5Open.top) THEN
  	runUnsuccessful.error:=TRUE;
      END_IF;

      IF pnsWaitOff.top THEN
  	runPhase(autoAvomOff);
  	runPhase(avom1cmdOff);
  	runPhase(avom2cmdOff);
      END_IF;

      IF avom1cmdOff.top AND avom2cmdOff.top THEN
  	 StrAlg.opcCommandsDisabled:=FALSE;
      END_IF;

      StrAlg.isEnded:= avom1cmdOff.top AND avom2cmdOff.top;
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

                                                    StrAlg.opcCommandsDisabled:=TRUE;
                                                    runIfNotRunningSO(IM.SingleOutputs.Indickaciya_AC_fonar);
                                                    runIfNotRunningSO(IM.SingleOutputs.Rabota_EGPA);
                                                    stopPusk(algoritms);
                                                    algManager.nMode:=ModeGpa.MODE_AO;

                                                    runPhase(waitKran);
                                                    runPhase(runUnsuccessful); 

                                                    resetDiProtection(protections.MB);
                                                    resetAiProtection(protections.Vibroskorost_OP_ED_t1_HA);
                                                    resetAiProtection(protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA);
                                                    resetAiProtection(protections.Vibroskorost_OYP_kolesa_ED_t3_HA);
                                                    resetAiProtection(protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA);
                                                    resetDiProtection(protections.Kran1sdvig);
                                                    resetDiProtection(protections.Kran2sdvig);

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
                                          protectManager.inCommand:=PMcommand.RestartAllSignaling;
                                          waitReset(IN:=FALSE);
                                          resetIfRunningSO(IM.SingleOutputs.Indickaciya_AC_fonar);
                                          resetIfRunningSO(IM.SingleOutputs.Rabota_EGPA);
                                          resetIfRunning(algoritms.vibegPNS);
                                          algManager.nMode:=ModeGpa.MODE_STOP;
                                          (*impulseSO(Im.singleSignals.Srabotka_BREO);*)

                                          resetPhase(kran4Close);
                                          resetPhase(mvOff);
                                          resetPhase(pnsOn);
                                          resetPhase(kran3bOpen);
                                          resetPhase(kran1Close);
                                          resetPhase(kran2Close);
                                          resetPhase(kran5Open);
                                          resetPhase(autoNuOff);
                                          resetPhase(autoPnsOff);
                                          resetPhase(pInNagLess100);
  	                              resetPhase(autoAvomOff);
                                          resetPhase(avom1cmdOff);
                                          resetPhase(avom2cmdOff);
                                          resetPhase(nu1off);
                                          resetPhase(nu2off);
                                          resetPhase(waitKran);
                                          resetPhase(pnsWaitOff);
                                          resetPhase(runUnsuccessful);

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

  StrAlg.Start:= kran4Close.startStatus
              OR mvOff.startStatus
              OR pnsOn.startStatus
              OR kran3bOpen.startStatus
              OR kran1Close.startStatus
              OR kran2Close.startStatus
              OR kran5Open.startStatus
              OR autoNuOff.startStatus
              OR autoPnsOff.startStatus
              OR pInNagLess100.startStatus
              OR autoAvomOff.startStatus
              OR avom1cmdOff.startStatus
              OR avom2cmdOff.startStatus
              OR nu1off.startStatus
              OR nu2off.startStatus
              OR waitKran.startStatus
              OR pnsWaitOff.startStatus
              OR runUnsuccessful.startStatus;


  StrAlg.Error:= kran4Close.errorStatus
              OR mvOff.errorStatus
              OR pnsOn.errorStatus
              OR kran3bOpen.errorStatus
              OR kran1Close.errorStatus
              OR kran2Close.errorStatus
              OR kran5Open.errorStatus
              OR autoNuOff.errorStatus
              OR autoPnsOff.errorStatus
              OR pInNagLess100.errorStatus
              OR autoAvomOff.errorStatus
              OR avom1cmdOff.errorStatus
              OR avom2cmdOff.errorStatus
              OR nu1off.errorStatus
              OR nu2off.errorStatus
              OR waitKran.errorStatus
              OR pnsWaitOff.errorStatus
              OR runUnsuccessful.errorStatus;


  StrAlg.Top:=   kran4Close.topStatus
              OR mvOff.topStatus
              OR pnsOn.topStatus
              OR kran3bOpen.topStatus
              OR kran1Close.topStatus
              OR kran2Close.topStatus
              OR kran5Open.topStatus
              OR autoNuOff.topStatus
              OR autoPnsOff.topStatus
              OR pInNagLess100.topStatus
              OR autoAvomOff.topStatus
              OR avom1cmdOff.topStatus
              OR avom2cmdOff.topStatus
              OR nu1off.topStatus
              OR nu2off.topStatus
              OR waitKran.topStatus
              OR pnsWaitOff.topStatus
              OR runUnsuccessful.topStatus;                           

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

FUNCTION_BLOCK fb_AlgoritmsManager
  VAR_IN_OUT
    str_AM : struct_AlgoritmsManager;
  END_VAR
  VAR
    onInit : BOOL;
    puskV : BOOL;
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
            str_AM.nMode:=ModeGpa.MODE_STOP;
            BlockAllIM(IM);
            runIfNotRunning(algoritms.AutoTen);
  onInit:=TRUE;
  END_IF;

  str_AM.DiscretPS:=anyDiscretPS(IM);
  str_AM.AnalogsPs:=anyAnalogsPs(ai);
  str_AM.ProtectionSignaling:=anyProtectionSignaling(protections);

  EoTrig(CLK := IM.SingleSignals.Srabotka_BREO.Q);
  IF EoTrig.Q THEN
  	stopPusk(algoritms);
  	resetAndDisable(algoritms.Remont);
  	resetAndDisable(algoritms.no);
  	resetAndDisable(algoritms.ao);
  	str_AM.nMode:=ModeGpa.MODE_EO;
  END_IF;
  EoFTrig(CLK := IM.SingleSignals.Srabotka_BREO.Q);
  IF EoFTrig.Q THEN
  	str_AM.nMode:=ModeGpa.MODE_STOP;
  	runIfNotRunning(algoritms.ao);
  END_IF;

  IF (str_AM.ProtectionSignaling OR Im.SingleSignals.AO_KC_ot_SHKC_04M.Q OR Im.SingleSignals.AO_GPA_na_SHY.Q OR Im.SingleSignals.AO_EGPA_ot_PRY.Q ) 
  	AND NOT((str_AM.mode=ModeGpa.MODE_AO) OR (str_AM.mode=ModeGpa.MODE_EO) OR IM.SingleOutputs.Indickaciya_AC_fonar.Q
            OR (str_AM.mode=ModeGpa.MODE_TESTAZ) OR (str_AM.mode=ModeGpa.MODE_TESTDPMG) OR (str_AM.mode=ModeGpa.MODE_REMONT) OR
            (str_AM.mode=ModeGpa.MODE_TESTPMS))THEN
  		runIfNotRunning(algoritms.ao);
  	str_AM.nMode:=ModeGpa.MODE_AO;	
  END_IF;

  IF Im.SingleSignals.NO_GPA_na_SHY.Q  AND algoritms.no.CanRun THEN
  	runIfNotRunning(algoritms.no);
            str_AM.nMode:=ModeGpa.MODE_NO;
  END_IF;


  PsLampTrig(CLK := str_AM.DiscretPS OR str_AM.AnalogsPs);
  IF PsLampTrig.Q THEN
            runIfNotRunningSO(IM.SingleOutputs.Indickaciya_PC_fonar);
  END_IF;
  PsLampFTrig(CLK := str_AM.DiscretPS OR str_AM.AnalogsPs);
  IF PsLampFTrig.Q THEN
            resetIfRunningSO(IM.SingleOutputs.Indickaciya_PC_fonar);
  END_IF;

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
  	(*ModeGpa.MODE_AO*)13:
  		(*//stopPusk();*)
  		resetAndDisable(alg:=algoritms.no);
  		resetAndDisable(alg:=algoritms.Remont);
                      resetAndDisable(alg:=algoritms.testIm);
                      algoritms.VibegPNS.inCanRun:=TRUE;
  	(*ModeGpa.MODE_NO*)12:
  		stopPusk(algoritms);
                      resetAndDisable(alg:=algoritms.testIm);
                      resetAndDisable(alg:=algoritms.Remont);
                      algoritms.VibegPNS.inCanRun:=TRUE;	
  		algoritms.ao.inCanRun:=TRUE;
  	(*ModeGpa.MODE_APUSK*)8:
  		resetAndDisable(alg:=algoritms.SemiAutoPusk);
  		resetAndDisable(alg:=algoritms.puskV);		
  		resetAndDisable(alg:=algoritms.puskK);	
  		resetAndDisable(alg:=algoritms.testdPmg);
  		resetAndDisable(alg:=algoritms.testPms);
  		resetAndDisable(alg:=algoritms.testIm	 );		
  		resetAndDisable(alg:=algoritms.ppu);
  		algoritms.no.inCanRun:=TRUE;
  		algoritms.ao.inCanRun:=TRUE;

  	(*ModeGpa.MODE_MPUSK*)9:
  		resetAndDisable(alg:=algoritms.Apusk);
  		resetAndDisable(alg:=algoritms.puskV);		
  		resetAndDisable(alg:=algoritms.puskK);	
  		resetAndDisable(alg:=algoritms.testdPmg);
  		resetAndDisable(alg:=algoritms.testPms);
  		resetAndDisable(alg:=algoritms.testIm	 );		
  		resetAndDisable(alg:=algoritms.ppu);
  		algoritms.no.inCanRun:=TRUE;
                      algoritms.no.inOpcCommandsDisabled:=FALSE;
  		algoritms.ao.inCanRun:=TRUE;
                      algoritms.ao.inOpcCommandsDisabled:=FALSE;

  	(*ModeGpa.MODE_PUSKK*)5:
  		resetAndDisable(alg:=algoritms.Apusk);
  		resetAndDisable(alg:=algoritms.SemiAutoPusk);
  		resetAndDisable(alg:=algoritms.puskV);		
  		resetAndDisable(alg:=algoritms.testdPmg);
  		resetAndDisable(alg:=algoritms.testPms);
  		resetAndDisable(alg:=algoritms.ppu);
  		resetAndDisable(alg:=algoritms.testIm	 );		
  		algoritms.no.inCanRun:=TRUE;
                      algoritms.no.inOpcCommandsDisabled:=FALSE;
  		algoritms.ao.inCanRun:=TRUE;
                      algoritms.ao.inOpcCommandsDisabled:=FALSE;
  	(*ModeGpa.MODE_PUSKV*)4:
  		resetAndDisable(alg:=algoritms.Apusk);
  		resetAndDisable(alg:=algoritms.SemiAutoPusk);
  		resetAndDisable(alg:=algoritms.puskK);		
  		resetAndDisable(alg:=algoritms.testdPmg);
  		resetAndDisable(alg:=algoritms.testPms);
  		resetAndDisable(alg:=algoritms.ppu);
  		resetAndDisable(alg:=algoritms.testIm	 );		
  		algoritms.no.inCanRun:=TRUE;
                      algoritms.no.puskV:=TRUE;
                      algoritms.no.inOpcCommandsDisabled:=FALSE;
  		algoritms.ao.inCanRun:=TRUE;
                      algoritms.ao.inOpcCommandsDisabled:=FALSE;

  	(*ModeGpa.MODE_TESTDPMG*)6:
  		resetAndDisable(alg:=algoritms.Apusk);
  		resetAndDisable(alg:=algoritms.SemiAutoPusk);
  		resetAndDisable(alg:=algoritms.puskV);		
  		resetAndDisable(alg:=algoritms.puskK);
  		resetAndDisable(alg:=algoritms.testPms);
  		resetAndDisable(alg:=algoritms.ppu);
  		resetAndDisable(alg:=algoritms.testIm	 );		
  		algoritms.no.inCanRun:=TRUE;
                      algoritms.no.inOpcCommandsDisabled:=FALSE;
  		algoritms.ao.inCanRun:=TRUE;
                      algoritms.ao.inOpcCommandsDisabled:=FALSE;

  	(*ModeGpa.MODE_TESTPMS*)7:
  		resetAndDisable(alg:=algoritms.Apusk);
  		resetAndDisable(alg:=algoritms.SemiAutoPusk);
  		resetAndDisable(alg:=algoritms.puskV);		
  		resetAndDisable(alg:=algoritms.puskK);
  		resetAndDisable(alg:=algoritms.testdPmg);
  		resetAndDisable(alg:=algoritms.ppu);
  		resetAndDisable(alg:=algoritms.testIm	 );		
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
  		resetAndDisable(alg:=algoritms.testIm	 );		
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
                      algoritms.no.puskV:=FALSE;
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
  		resetAndDisable(alg:=algoritms.puskV);		
  		resetAndDisable(alg:=algoritms.puskK);
  		resetAndDisable(alg:=algoritms.testdPmg);
  		resetAndDisable(alg:=algoritms.testPms);	
  	(*ModeGpa.MODE_READY*)3: 
  		resetAndDisable(alg:=algoritms.Remont);
  		algoritms.Remont.inOpcCommandsDisabled:=TRUE;
  		resetAndDisable(alg:=algoritms.testim);
  		algoritms.testim.inOpcCommandsDisabled:=TRUE;
  		resetAndDisable(alg:=algoritms.TestProtection);
  		algoritms.TestProtection.inOpcCommandsDisabled:=TRUE;
  	END_CASE;
  END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK OPC_IM_get
  VAR_EXTERNAL
    IM : ImConfig;
    IM_CMN_pump_inCommand_ARM : UINT;
    IM_Kalorifer_ABO_inCommand_ARM : UINT;
    IM_MB_inCommand_ARM : UINT;
    IM_Ten_MB_inCommand_ARM : UINT;
    IM_Ten_kollect_inCommand_ARM : UINT;
    IM_kran1_inCommand_ARM : UINT;
    IM_kran2_inCommand_ARM : UINT;
    IM_kran3b_inCommand_ARM : UINT;
    IM_kran4_inCommand_ARM : UINT;
    IM_kran5_inCommand_ARM : UINT;
    IM_kran6_inCommand_ARM : UINT;
    IM_nu1_inCommand_ARM : UINT;
    IM_nu2_inCommand_ARM : UINT;
    IM_pns_inCommand_ARM : UINT;
    IM_v1_Avom_inCommand_ARM : UINT;
    IM_v2_Avom_inCommand_ARM : UINT;
    IM_v3_Avom_inCommand_ARM : UINT;
    IM_v4_Avom_inCommand_ARM : UINT;
    IM_kran3_inCommand_ARM : UINT;
  END_VAR

  (* OPC Get - IM. Чтение текущих состояний тэгов _______________________________________________________*)

  Im.kran1.inCommand_ARM	:= UINT_TO_WORD(IM_kran1_inCommand_ARM);
  Im.kran2.inCommand_ARM	:= UINT_TO_WORD(IM_kran2_inCommand_ARM);
  Im.kran3.inCommand_ARM	:= UINT_TO_WORD(IM_kran3_inCommand_ARM);
  Im.kran3b.inCommand_ARM	:= UINT_TO_WORD(IM_kran3b_inCommand_ARM);
  Im.kran4.inCommand_ARM	:= UINT_TO_WORD(IM_kran4_inCommand_ARM);
  Im.kran5.inCommand_ARM	:= UINT_TO_WORD(IM_kran5_inCommand_ARM);
  Im.kran6.inCommand_ARM	:= UINT_TO_WORD(IM_kran6_inCommand_ARM);

  Im.pns.inCommand_ARM	:= UINT_TO_WORD(IM_pns_inCommand_ARM);
  Im.Ten_MB.inCommand_ARM	:= UINT_TO_WORD(IM_Ten_MB_inCommand_ARM);
  Im.Ten_kollect.inCommand_ARM	:= UINT_TO_WORD(IM_Ten_kollect_inCommand_ARM);

  Im.v1_Avom.inCommand_ARM	:= UINT_TO_WORD(IM_v1_Avom_inCommand_ARM);
  Im.v2_Avom.inCommand_ARM	:= UINT_TO_WORD(IM_v2_Avom_inCommand_ARM);
  Im.v3_Avom.inCommand_ARM	:= UINT_TO_WORD(IM_v3_Avom_inCommand_ARM);
  Im.v4_Avom.inCommand_ARM	:= UINT_TO_WORD(IM_v4_Avom_inCommand_ARM);

  Im.nu1.inCommand_ARM	:= UINT_TO_WORD(IM_nu1_inCommand_ARM);
  Im.nu2.inCommand_ARM	:= UINT_TO_WORD(IM_nu2_inCommand_ARM);

  Im.Kalorifer_ABO.inCommand_ARM	:= UINT_TO_WORD(IM_Kalorifer_ABO_inCommand_ARM);

  Im.MB.inCommand_ARM	:= UINT_TO_WORD(IM_MB_inCommand_ARM);

  Im.CMN_pump.inCommand_ARM	:= UINT_TO_WORD(IM_CMN_pump_inCommand_ARM);
END_FUNCTION_BLOCK

FUNCTION_BLOCK OPC_IM_set
  VAR_EXTERNAL
    IM : ImConfig;
    IM_SingleSignals_AO_EGPA_ot_PRY_status : UDINT;
    IM_SingleSignals_AO_GPA_na_SHY_status : UDINT;
    IM_SingleSignals_AO_KC_ot_SHKC_04M_status : UDINT;
    IM_SingleSignals_Asinhron_xod_peregryz_status : UDINT;
    IM_SingleSignals_Avar_otkl_viklychatelya_status : UDINT;
    IM_SingleSignals_BEAO_vkl_status : UDINT;
    IM_SingleSignals_Dver_shkafa_otkrita_status : UDINT;
    IM_SingleSignals_EAO_EGPA_ot_PRY_status : UDINT;
    IM_SingleSignals_EAO_GPA_na_SHY_status : UDINT;
    IM_SingleSignals_Gotovnosst_vozb_status : UDINT;
    IM_SingleSignals_NKY_vvod_1_status : UDINT;
    IM_SingleSignals_NKY_vvod_2_status : UDINT;
    IM_SingleSignals_NO_GPA_na_SHY_status : UDINT;
    IM_SingleSignals_Nalichie_220_perem_vhod_v_SHY_status : UDINT;
    IM_SingleSignals_Nalichie_220_post_na_shinah_ypr_ZRY_status : UDINT;
    IM_SingleSignals_Nalichie_220_post_vhod_v_SHY_status : UDINT;
    IM_SingleSignals_Neisprav_BP_10_status : UDINT;
    IM_SingleSignals_Neisprav_BP_1_status : UDINT;
    IM_SingleSignals_Neisprav_BP_2_status : UDINT;
    IM_SingleSignals_Neisprav_BP_3_status : UDINT;
    IM_SingleSignals_Neisprav_BP_4_status : UDINT;
    IM_SingleSignals_Neisprav_BP_5_status : UDINT;
    IM_SingleSignals_Neisprav_BP_6_status : UDINT;
    IM_SingleSignals_Neisprav_BP_7_status : UDINT;
    IM_SingleSignals_Neisprav_BP_8_status : UDINT;
    IM_SingleSignals_Neisprav_BP_9_status : UDINT;
    IM_SingleSignals_Neisprav_cepei_ypr_AVR_pit_vozb_status : UDINT;
    IM_SingleSignals_Net_10_kVt_UcmA_UcmB_status : UDINT;
    IM_SingleSignals_Net_10_kVt_UcmA_UcmC_status : UDINT;
    IM_SingleSignals_Otkl_osn_regylyatora_neisprav_status : UDINT;
    IM_SingleSignals_Potok_masla_posle_ABO_bolshe_status : UDINT;
    IM_SingleSignals_Razreshenie_zagryzki_status : UDINT;
    IM_SingleSignals_SHAVR_1_v_rab_status : UDINT;
    IM_SingleSignals_SHAVR_2_v_rab_status : UDINT;
    IM_SingleSignals_Sbros_srabotki_BREO_status : UDINT;
    IM_SingleSignals_Srabotka_BREO_status : UDINT;
    IM_SingleSignals_dP_gaza_kr_1_status : UDINT;
    IM_SingleSignals_dP_maslo_gaz_menshe_100_kPa_status : UDINT;
    IM_SingleSignals_ostanov_po_zashitam_vozb_avar_status : UDINT;
    IM_SingleSignals_otklon_masla_v_akkym_yplot_status : UDINT;
    IM_CMN_pump_status : UDINT;
    IM_Kalorifer_ABO_status : UDINT;
    IM_MB_status : UDINT;
    IM_Ten_MB_status : UDINT;
    IM_Ten_kollect_status : UDINT;
    IM_kran1_status : UDINT;
    IM_kran2_status : UDINT;
    IM_kran3b_status : UDINT;
    IM_kran4_status : UDINT;
    IM_kran5_status : UDINT;
    IM_kran6_status : UDINT;
    IM_nu1_status : UDINT;
    IM_nu2_status : UDINT;
    IM_pns_status : UDINT;
    IM_v1_Avom_status : UDINT;
    IM_v2_Avom_status : UDINT;
    IM_v3_Avom_status : UDINT;
    IM_v4_Avom_status : UDINT;
    IM_kran3_status : UDINT;
  END_VAR

  (* OPC Set - IM. Запись текущих состояний тэгов _______________________________________________________*)

  IM_kran1_status	:= DWORD_TO_UDINT(Im.kran1.status);
  IM_kran2_status	:= DWORD_TO_UDINT(Im.kran2.status);
  IM_kran3_status	:= DWORD_TO_UDINT(Im.kran3.status);
  IM_kran3b_status	:= DWORD_TO_UDINT(Im.kran3b.status);
  IM_kran4_status	:= DWORD_TO_UDINT(Im.kran4.status);
  IM_kran5_status	:= DWORD_TO_UDINT(Im.kran5.status);
  IM_kran6_status	:= DWORD_TO_UDINT(Im.kran6.status);

  IM_pns_status	:= DWORD_TO_UDINT(Im.pns.status);
  IM_Ten_MB_status	:= DWORD_TO_UDINT(Im.Ten_MB.status);
  IM_Ten_kollect_status	:= DWORD_TO_UDINT(Im.Ten_kollect.status);
  IM_v1_Avom_status	:= DWORD_TO_UDINT(Im.v1_Avom.status);
  IM_v2_Avom_status	:= DWORD_TO_UDINT(Im.v2_Avom.status);
  IM_v3_Avom_status	:= DWORD_TO_UDINT(Im.v3_Avom.status);
  IM_v4_Avom_status	:= DWORD_TO_UDINT(Im.v4_Avom.status);

  IM_nu1_status	:= DWORD_TO_UDINT(Im.nu1.status);
  IM_nu2_status	:= DWORD_TO_UDINT(Im.nu2.status);

  IM_CMN_pump_status         := DWORD_TO_UDINT(Im.CMN_pump.status);
  IM_Kalorifer_ABO_status    := DWORD_TO_UDINT(Im.Kalorifer_ABO.status);
  IM_MB_status               := DWORD_TO_UDINT(Im.MB.status);

  IM_SingleSignals_AO_EGPA_ot_PRY_status            := DWORD_TO_UDINT(Im.SingleSignals.AO_EGPA_ot_PRY.status );
  IM_SingleSignals_AO_GPA_na_SHY_status             := DWORD_TO_UDINT(Im.SingleSignals.AO_GPA_na_SHY.status);
  IM_SingleSignals_AO_KC_ot_SHKC_04M_status         := DWORD_TO_UDINT(Im.SingleSignals.AO_KC_ot_SHKC_04M.status);
  IM_SingleSignals_Asinhron_xod_peregryz_status     := DWORD_TO_UDINT(Im.SingleSignals.Asinhron_xod_peregryz.status);
  IM_SingleSignals_Avar_otkl_viklychatelya_status   := DWORD_TO_UDINT(Im.SingleSignals.Avar_otkl_viklychatelya.status);
  IM_SingleSignals_BEAO_vkl_status                  := DWORD_TO_UDINT(Im.SingleSignals.BEAO_vkl.status );
  IM_SingleSignals_Dver_shkafa_otkrita_status       := DWORD_TO_UDINT(Im.SingleSignals.Dver_shkafa_otkrita.status );
  IM_SingleSignals_EAO_EGPA_ot_PRY_status           := DWORD_TO_UDINT(Im.SingleSignals.EAO_EGPA_ot_PRY.status );
  IM_SingleSignals_EAO_GPA_na_SHY_status            := DWORD_TO_UDINT(Im.SingleSignals.EAO_GPA_na_SHY.status );
  IM_SingleSignals_Gotovnosst_vozb_status           := DWORD_TO_UDINT(Im.SingleSignals.Gotovnosst_vozb.status );

  IM_SingleSignals_NKY_vvod_1_status                            := DWORD_TO_UDINT(Im.SingleSignals.NKY_vvod_1.status );
  IM_SingleSignals_NKY_vvod_2_status                            := DWORD_TO_UDINT(Im.SingleSignals.NKY_vvod_2.status );
  IM_SingleSignals_NO_GPA_na_SHY_status                         := DWORD_TO_UDINT(Im.SingleSignals.NO_GPA_na_SHY.status );
  IM_SingleSignals_Nalichie_220_perem_vhod_v_SHY_status         := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_220_perem_vhod_v_SHY.status );
  IM_SingleSignals_Nalichie_220_post_na_shinah_ypr_ZRY_status   := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_220_post_na_shinah_ypr_ZRY.status );
  IM_SingleSignals_Nalichie_220_post_vhod_v_SHY_status          := DWORD_TO_UDINT(Im.SingleSignals.Nalichie_220_post_vhod_v_SHY.status );
  IM_SingleSignals_Neisprav_cepei_ypr_AVR_pit_vozb_status       := DWORD_TO_UDINT(Im.SingleSignals.Neisprav_cepei_ypr_AVR_pit_vozb.status );
  IM_SingleSignals_Net_10_kVt_UcmA_UcmB_status                  := DWORD_TO_UDINT(Im.SingleSignals.Net_10_kVt_UcmA_UcmB.status );
  IM_SingleSignals_Net_10_kVt_UcmA_UcmC_status                  := DWORD_TO_UDINT(Im.SingleSignals.Net_10_kVt_UcmA_UcmC.status );
  IM_SingleSignals_Otkl_osn_regylyatora_neisprav_status         := DWORD_TO_UDINT(Im.SingleSignals.Otkl_osn_regylyatora_neisprav.status );

  IM_SingleSignals_Neisprav_BP_1_status      := DWORD_TO_UDINT(Im.SingleSignals.Neisprav_BP_1.status );
  IM_SingleSignals_Neisprav_BP_2_status      := DWORD_TO_UDINT(Im.SingleSignals.Neisprav_BP_2.status );
  IM_SingleSignals_Neisprav_BP_3_status      := DWORD_TO_UDINT(Im.SingleSignals.Neisprav_BP_3.status );
  IM_SingleSignals_Neisprav_BP_4_status      := DWORD_TO_UDINT(Im.SingleSignals.Neisprav_BP_4.status );
  IM_SingleSignals_Neisprav_BP_5_status      := DWORD_TO_UDINT(Im.SingleSignals.Neisprav_BP_5.status );
  IM_SingleSignals_Neisprav_BP_6_status      := DWORD_TO_UDINT(Im.SingleSignals.Neisprav_BP_6.status );
  IM_SingleSignals_Neisprav_BP_7_status      := DWORD_TO_UDINT(Im.SingleSignals.Neisprav_BP_7.status );
  IM_SingleSignals_Neisprav_BP_8_status      := DWORD_TO_UDINT(Im.SingleSignals.Neisprav_BP_8.status );
  IM_SingleSignals_Neisprav_BP_9_status      := DWORD_TO_UDINT(Im.SingleSignals.Neisprav_BP_9.status );
  IM_SingleSignals_Neisprav_BP_10_status     := DWORD_TO_UDINT(Im.SingleSignals.Neisprav_BP_10.status );

  IM_SingleSignals_Potok_masla_posle_ABO_bolshe_status      := DWORD_TO_UDINT(Im.SingleSignals.Potok_masla_posle_ABO_bolshe_85_L_min.status );
  IM_SingleSignals_Razreshenie_zagryzki_status              := DWORD_TO_UDINT(Im.SingleSignals.Razreshenie_zagryzki.status );
  IM_SingleSignals_SHAVR_1_v_rab_status                     := DWORD_TO_UDINT(Im.SingleSignals.SHAVR_1_v_rab.status );
  IM_SingleSignals_SHAVR_2_v_rab_status                     := DWORD_TO_UDINT(Im.SingleSignals.SHAVR_2_v_rab.status );
  IM_SingleSignals_Sbros_srabotki_BREO_status               := DWORD_TO_UDINT(Im.SingleSignals.Sbros_srabotki_BREO.status );
  IM_SingleSignals_Srabotka_BREO_status                     := DWORD_TO_UDINT(Im.SingleSignals.Srabotka_BREO.status );
  IM_SingleSignals_dP_gaza_kr_1_status                      := DWORD_TO_UDINT(Im.SingleSignals.dP_gaza_kr_1.status );
  IM_SingleSignals_dP_maslo_gaz_menshe_100_kPa_status       := DWORD_TO_UDINT(Im.SingleSignals.dP_maslo_gaz_menshe_100_kPa.status );
  IM_SingleSignals_ostanov_po_zashitam_vozb_avar_status     := DWORD_TO_UDINT(Im.SingleSignals.ostanov_po_zashitam_vozb_avar.status );
  IM_SingleSignals_otklon_masla_v_akkym_yplot_status        := DWORD_TO_UDINT(Im.SingleSignals.otklon_masla_v_akkym_yplot.status );
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
    algoritms_autoNu_Reset_HasNU_inCommand_ARM : UINT;
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
        fb_LowOil_upStopust(StrPh:=LowOil_upStopust, ai:=ai.Davlenie_masla_smazki_nizkoe, more:=im.AutoPns_UstStop.Value);
                    fb_mvOn(StrPh:=mvOn, Im:=Im.MB);
              fb_AutoPns_ph(StrPh:=AutoPns_ph, alg:=algoritms.AutoPns);
             fb_AutoAvom_ph(StrPh:=AutoAvom_ph, alg:=algoritms.AutoAvom);
                  fb_pnsOff(StrPh:=pnsOff, Im:=Im.pns);
     fb_RunProtection_mvoff(StrPh:=RunProtection_mvoff, StrDiP:=protections.MB);
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

FUNCTION_BLOCK fb_AI_Init
  VAR_INPUT
    data_Ini : BOOL;
    dLL : LREAL;
    dHL : LREAL;
    dLA : LREAL;
    dHA : LREAL;
    dLW : LREAL;
    dHW : LREAL;
    ISVALIDREF_LA : BOOL         := False;
    ISVALIDREF_HA : BOOL         := False;
    ISVALIDREF_LW : BOOL         := False;
    ISVALIDREF_HW : BOOL         := False;
    delayLA : TIME         := T#0S;
    delayLW : TIME         := T#0S;
    delayHW : TIME         := T#0S;
    delayHA : TIME         := T#0S;
    inpLL : LREAL         := 4000.0;
    inpHL : LREAL         := 20000.0;
    CurrentShotCircuit : LREAL         := 21000.0;
    CurrentBreakCircuit : LREAL         := 3700.0;
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
    Init : BOOL         := FALSE;
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

FUNCTION_BLOCK fb_AOSourceMlp
  VAR_IN_OUT
    OutCurrent : TDoubleData;
    strAO : struct_AO;
  END_VAR
  VAR_INPUT
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

FUNCTION_BLOCK fb_AO_Init
  VAR_INPUT
    data_Ini : BOOL;
    outLL : LREAL         := 4000.0;
    outHL : LREAL         := 20000.0;
    newLL : LREAL;
    newHL : LREAL;
    newLL_ISVALIDREF : BOOL;
    newHL_ISVALIDREF : BOOL;
  END_VAR
  VAR_IN_OUT
    strAO : struct_AO;
  END_VAR
  VAR_OUTPUT
    Init : BOOL         := FALSE;
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

  strAI.blConnect :=TRUE;(*(UINT_TO_WORD(arAIN.wFlags) = 1472) and (UINT_TO_WORD(err_mod.wValue) = 20) and (UINT_TO_WORD(err_mod.wFlags) = 192);*) 
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
                                          IF ((parametr AND _AnalogLimitFlags.SipUP)   <> 0) THEN    strAI.MaxChangeSpeed:=         strAI.dMaxChangeSpeed; END_IF;
  				IF ((parametr AND _AnalogLimitFlags.SipDown) <> 0) THEN    strAI.MaxChangeSpeedDown:= strAI.dMaxChangeSpeedDown; END_IF;

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

FUNCTION_BLOCK fb_AiSourceMlp_timer
  VAR_INPUT
    arAIN : TItemAIN;
    err_mod : TItemDIN;
  END_VAR
  VAR_IN_OUT
    strAI : struct_AI;
  END_VAR
  VAR
    retainLL : LREAL;
    retainHL : LREAL;
    retainLA : LREAL;
    retainHA : LREAL;
    retainLW : LREAL;
    retainHW : LREAL;
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
    Init : BOOL         := FALSE;
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

  IF NOT onInit THEN
  StrAlg.inCanRun:=TRUE;
  onInit:=TRUE;
  END_IF;



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
                                                    StrAlg.opcCommandsDisabled:=FALSE;
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
                                          StrAlg.opcCommandsDisabled:=FALSE;
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
  END_VAR
  VAR_EXTERNAL
    Reset_HasNU : BOOL;
  END_VAR
  VAR_IN_OUT
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

      IF (Poil.Value>=Ust_Stop.value) AND Nasos.inopcCommandsDisabled AND (Nasos.onStatus=_statusDualInput.STATUS_OFF) THEN
          Nasos.inopcCommandsDisabled:=FALSE;
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

FUNCTION_BLOCK fb_BaseProtection
  VAR
    inSignaling : BOOL;
    inTag : BYTE;
    inRunOnStart : BOOL;
    inCanRun : BOOL;
    inHasError : BOOL;
    inEnded : BOOL;
    inOpcCommandsDisabled : BOOL;
    inCommand : WORD;
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

FUNCTION_BLOCK fb_DI_Init
  VAR_INPUT
    data_Ini : BOOL;
    imit : BOOL         := FALSE;
  END_VAR
  VAR_IN_OUT
    strDI : struct_DI;
  END_VAR
  VAR_OUTPUT
    Init : BOOL         := FALSE;
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

  strDO.blConnect := TRUE; (*((UINT_TO_WORD(err_mod.wValue) = 20) and (UINT_TO_WORD(err_mod.wFlags) = 192));*)

  strDO.value:=0;

  FOR bitNumber:=0 TO 15 BY 1 DO
  	strDO.value:=strDO.value OR (SHL(BOOL_TO_WORD(strDO.bits[bitNumber]),bitNumber));
  END_FOR;

  IF NOT strDO.imit THEN
  	 arDout.wValue:= WORD_TO_UINT(strDO.value);
  END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_DO_Init
  VAR_INPUT
    data_Ini : BOOL;
    imit : BOOL         := FALSE;
  END_VAR
  VAR_IN_OUT
    strDO : struct_DO;
  END_VAR
  VAR_OUTPUT
    Init : BOOL         := FALSE;
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

  strDI.blConnect := TRUE;(*((UINT_TO_WORD(arDIN.wFlags) = 1472) and (UINT_TO_WORD(err_mod.wValue) = 20) and (UINT_TO_WORD(err_mod.wFlags) = 192);*)
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
  			OR SHL(BOOL_TO_DWORD(StrDP.OpcCommandsDisabled ), 21);

  resetCmdTimer(IN := resetCmdTimerPriznak, PT := T#5S);
  IF resetCmdTimer.Q THEN
  	resetCmdTimerPriznak := FALSE;
  	source_for_Status := 0;
  	cmd_for_Status := 0;
  	command_error_for_Status := 0;
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
    Init : BOOL         := FALSE;
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
    onInit : BOOL         := FALSE;
    resetErrorTimer : BOOL;
    _changWithoutCommand : BOOL;
    errorCMDTimer : TON;
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
  StrDs.sdvig  := FALSE;
  IF StrDs.ISVALIDREF_cmdOn OR StrDs.ISVALIDREF_cmdOff THEN
  	IF cmd = 0 THEN
  		IF (lastOnStatus <> StrDs.onStatus AND 
  		(StrDs.onStatus <> _statusDualInput.STATUS_NOTDEFINED AND StrDs.onStatus <> _statusDualInput.STATUS_ERROR) AND
  		(lastOnStatus <> _statusDualInput.STATUS_NOTDEFINED AND lastOnStatus <> _statusDualInput.STATUS_ERROR)) THEN
  			StrDs.sdvig   := TRUE;
  		END_IF;
  	END_IF;
  END_IF;
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
    _reliability : BOOL;
    onInit : BOOL         := FALSE;
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
    _changWithoutCommand : BOOL;
    BlockedOpenControl : BOOL;
    errorCMDTimer : TON;
    _errorReset : TON;
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
  	_reliability:= statOn_reliability AND statOff_reliability;
  		_statOn  := statOn;
  		_statOff := statOff;
  	ELSIF (strKr.ISVALIDREF_statOn) THEN
                       _reliability:= statOn_reliability;	
  		_statOn  := statOn;
  		_statOff := NOT statOn; 
  	ELSIF (strKr.ISVALIDREF_statOff) THEN
  		 _reliability:= statOff_reliability;	
  		_statOn  := NOT statOff;
  		_statOff :=statOff; 
  	END_IF;

  	IF _reliability THEN 
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

  		strKr.Dp := inDp.value AND inDp.reliability;

  		dP_Trig(CLK := strKr.Dp );
  		dP_Trig_reliability(CLK :=NOT inDp.reliability);

  		IF dP_Trig.Q OR dP_Trig_reliability.Q THEN  
  			BlockedOpenControl := TRUE; 
  		END_IF;
  		(* ---- автоматический сброс *)
  		resetBlockedOpenControl_Trig(CLK := (NOT inDp.value) AND inDp.reliability);
  		IF resetBlockedOpenControl_Trig.Q THEN 
  			BlockedOpenControl := FALSE;
  		END_IF;
  	ELSE
  		strKr.Dp  := FALSE;
  		BlockedOpenControl := FALSE;
  	END_IF;

  (* ---- Формирование признака сдвига ---- *)	
  strKr.sdvig  := FALSE;
  IF (strKr.ISVALIDREF_cmdOn OR strKr.ISVALIDREF_cmdOff) AND NOT strKr.Local THEN
  	IF cmd = 0 THEN
  		IF (lastOnStatus <> strKr.onStatus AND 
  		(strKr.onStatus <> _statusDualInput.STATUS_NOTDEFINED AND strKr.onStatus <> _statusDualInput.STATUS_ERROR) AND
  		(lastOnStatus <> _statusDualInput.STATUS_NOTDEFINED AND lastOnStatus <> _statusDualInput.STATUS_ERROR)) THEN
  			strKr.sdvig   := TRUE;
  		END_IF;
  	END_IF;
  END_IF;
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

FUNCTION_BLOCK fb_KranOpenProtectionDual
  VAR_INPUT
    im : struct_Kran;
    dp_konf : struct_AI;
    parametr : struct_DiscretParametr;
  END_VAR
  VAR_IN_OUT
    StrDIp : struct_DiProtection;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    statusDualInput : TYPE_statusDualInput;
    _statusAi : TYPE_StatusAi;
    _ProtectionTags : TYPE_ProtectionTags;
    dP_Konf_izm : LREAL;
    _signalingTp : TOF;
    timer : TON;
    SignalingTrig : R_TRIG;
    SignalingFTrig : F_TRIG;
    SignalingDi : BOOL;
    _signaling : BOOL;
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

  IF parametr.Value = 0 THEN
  	dP_Konf_izm:=0.0;	
  	timer (in:=(im.onStatus <> statusDualInput.status_on AND
                      ((im.onStatus = statusDualInput.status_off) OR (im.onStatus = statusDualInput.STATUS_TRANSITIONAL))),
                        PT:=StrDIp.delay);
            IF timer.Q THEN
  	    _signaling:=TRUE;
  	ELSE
  	    _signaling:=FALSE;
  	END_IF;

  ELSE
  	timer(in:=FALSE);
  	    IF (im.onStatus <> statusDualInput.status_on) AND
                  ((im.onStatus = statusDualInput.status_off) OR (im.onStatus = statusDualInput.STATUS_TRANSITIONAL)) AND
                   (dP_Konf_izm = 0.0) AND (dp_konf.interval >= _statusAi.Normal) THEN

  		dP_Konf_izm:=dp_konf.value;

  	    ELSIF 	(im.onStatus = statusDualInput.status_on) OR (dp_konf.interval < _statusAi.Normal) THEN
  		dP_Konf_izm:=0.0;	
  	    END_IF;

  	    IF	((dP_Konf_izm - dp_konf.value) >= 10.0) AND (dp_konf.interval >= _statusAi.Normal) THEN
  	        _signaling:=TRUE;
  	    ELSE
  	        _signaling:=FALSE;
  	    END_IF;
  END_IF;

  SignalingTrig(CLK := _signaling);
  IF SignalingTrig.Q THEN
  	SignalingDi := TRUE;
  END_IF;
  SignalingFTrig(CLK := _signaling);
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
                                          _signaling:=FALSE;
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

FUNCTION_BLOCK fb_Kran_Init
  VAR_INPUT
    data_Ini : BOOL;
    ISVALIDREF_statOn : BOOL;
    ISVALIDREF_statOff : BOOL;
    ISVALIDREF_cmdOn : BOOL;
    ISVALIDREF_cmdOff : BOOL;
    ISVALIDREF_inSo : BOOL;
    ISVALIDREF_inSz : BOOL;
    ISVALIDREF_inDp : BOOL         := False;
    continueHoldCommand : TIME;
  END_VAR
  VAR_IN_OUT
    str_Kr : struct_Kran;
  END_VAR
  VAR_OUTPUT
    Init : BOOL         := FALSE;
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

FUNCTION_BLOCK fb_MvProtectionControlAi
  VAR_INPUT
    sw : struct_SectionSwitch;
  END_VAR
  VAR_IN_OUT
    StrDIp : struct_DiProtection;
  END_VAR
  VAR_INPUT
    ai : struct_AI;
  END_VAR
  VAR
    _sunpackerCommand : fb_sunpackerCommand;
    statusDualInput : TYPE_statusDualInput;
    _statusAi : TYPE_StatusAi;
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

  timer(IN := (sw.onStatus <> statusDualInput.STATUS_ON) AND
              (ai.value < ai.LW) AND (ai.interval >= _statusAi.normal) AND
              StrDIp.isRunning  , PT := StrDIp.delay);

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
    Init : BOOL         := FALSE;
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
    onInit : BOOL         := FALSE;
    _statOn : BOOL;
    _statOff : BOOL;
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
  StrSw.sdvig  := FALSE;
  IF (StrSw.ISVALIDREF_cmdOn OR StrSw.ISVALIDREF_cmdOff) AND NOT StrSw.Local THEN
  	IF cmd = 0 THEN
  		IF (lastOnStatus <> StrSw.onStatus AND 
  		(StrSw.onStatus <> _statusDualInput.STATUS_NOTDEFINED AND StrSw.onStatus <> _statusDualInput.STATUS_ERROR) AND
  		(lastOnStatus <> _statusDualInput.STATUS_NOTDEFINED AND lastOnStatus <> _statusDualInput.STATUS_ERROR)) THEN
  			StrSw.sdvig   := TRUE;
  		END_IF;
  	END_IF;
  END_IF;
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
    Init : BOOL         := FALSE;
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
    onInit : BOOL         := FALSE;
    _reliability : BOOL;
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
    _changWithoutCommand : BOOL;
    errorCMDTimer : TON;
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
  	_reliability:= statOn_reliability AND statOff_reliability;
  		_statOn  := statOn;
  		_statOff := statOff;
  	ELSIF (StrSw.ISVALIDREF_statOn) THEN
                       _reliability:= statOn_reliability;	
  		_statOn  := statOn;
  		_statOff := NOT statOn; 
  	ELSIF (StrSw.ISVALIDREF_statOff) THEN
  		 _reliability:= statOff_reliability;	
  		_statOn  := NOT statOff;
  		_statOff :=statOff; 
  	END_IF;

  	IF _reliability THEN
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
  StrSw.sdvig  := FALSE;
  IF (StrSw.ISVALIDREF_cmdOn OR StrSw.ISVALIDREF_cmdOff) AND NOT StrSw.Local THEN
  	IF cmd = 0 THEN
  		IF (lastOnStatus <> StrSw.onStatus AND 
  		(StrSw.onStatus <> _statusDualInput.STATUS_NOTDEFINED AND StrSw.onStatus <> _statusDualInput.STATUS_ERROR) AND
  		(lastOnStatus <> _statusDualInput.STATUS_NOTDEFINED AND lastOnStatus <> _statusDualInput.STATUS_ERROR)) THEN
  			StrSw.sdvig   := TRUE;
  		END_IF;
  	END_IF;
  END_IF;
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
                                lastCmd :=0;
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
    Init : BOOL         := FALSE;
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

FUNCTION_BLOCK fb_meandr
  VAR
    _output : BOOL;
  END_VAR
  VAR_INPUT
    period : TIME         := T#300MS;
  END_VAR
  VAR
    timer : TON;
    FALSE_val : BOOL         := FALSE;
    TRUE_val : BOOL         := TRUE;
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
               fb_LowOil(StrPh:=LowOil, ai:=ai.Davlenie_masla_smazki_nizkoe, more:=im.AutoPns_UstRun.Value);
  fb_BreakPuskTimer_Poil(StrPh:=BreakPuskTimer_Poil, timer:=AlgTimers.puskOilSystem_BreakPuskTimer_Poil);
   fb_Poil_DefenseActive(StrPh:=Poil_DefenseActive);
                 fb_nuOn(StrPh:=nuOn);
                fb_nu1On(StrPh:=nu1On, Im:=Im.nu1);
                fb_nu2On(StrPh:=nu2On, Im:=Im.nu2);
             fb_autoNuOn(StrPh:=autoNuOn, alg:=algoritms.autoNu);  
              fb_di_dPmg(StrPh:=di_dPmg);
         fb_dP_oilGas100(StrPh:=dP_oilGas100, ai:=ai.Perepad_davleniya_maslo_gaz, more:=im.PuskOilSystem_UstdPmg.Value);
        fb_runProtect_dP(StrPh:=runProtect_dP);
     fb_testUnsuccessful(StrPh:=testUnsuccessful);

  IF StrAlg.isRuning THEN


      StrAlg.hasError := LowOil.error OR dP_oilGas100.error OR pnsOn.error OR testUnsuccessful.error;

      IF pnsOn.top THEN	
          runPhase(LowOil);
      END_IF;

      IF LowOil.top THEN
          runAiProtection(protections.Davlenie_masla_smazki_nizkoe_LA);
          runPhase(Poil_DefenseActive);

          ai.Davlenie_masla_smazki_nizkoe.Disabled_LA:=FALSE;
          ai.Davlenie_masla_smazki_nizkoe.Disabled_LW:=FALSE;
          ai.Davlenie_masla_smazki_visokoe.Disabled_LW:=FALSE;
      END_IF;

      IF Poil_DefenseActive.start AND NOT Poil_DefenseActive.top THEN
         Poil_DefenseActive.top:=protections.Davlenie_masla_smazki_nizkoe_LA.isRunning;
      END_IF;

      IF Poil_DefenseActive.top THEN
         (* runPhase(autoNuOn);*)
  	runPhase(nuOn);
      END_IF;


      IF nuOn.start AND NOT nuOn.top THEN
          IF IM.AutoNU_mainNU.Value = 0 THEN
              runPhase(nu1On);
          END_IF;

          IF IM.AutoNU_mainNU.Value = 1 THEN
              runPhase(nu2On);
          END_IF;
         nuOn.top:= Im.nu1.onStatus = _statusDualInput.STATUS_ON OR Im.nu2.onStatus = _statusDualInput.STATUS_ON;
      END_IF;	

      IF nuOn.top THEN
  	runPhase(di_dPmg);
            runPhase(dP_oilGas100);
      END_IF;	

      IF di_dPmg.start AND NOT di_dPmg.top THEN
         di_dPmg.top:= NOT IM.SingleSignals.dP_maslo_gaz_menshe_100_kPa.Q;
      END_IF;

      IF dP_oilGas100.top AND di_dPmg.top THEN
            runPhase(autoNuOn);
  	runPhase(runProtect_dP);
  	runAiProtection(protections.Perepad_davleniya_maslo_gaz_LA);
            runDiProtection(protections.dP_maslo_gaz_menshe_100_kPa_DI);
            ai.Perepad_davleniya_maslo_gaz.Disabled_LA:=FALSE;
            ai.Perepad_davleniya_maslo_gaz.Disabled_LW:=FALSE;
      END_IF;

      IF runProtect_dP.start AND NOT runProtect_dP.top THEN
         runProtect_dP.top:= protections.Perepad_davleniya_maslo_gaz_LA.isRunning AND protections.dP_maslo_gaz_menshe_100_kPa_DI.isRunning;
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
  	                              (*protections.P_masla_smazki_nizkoe_LA.inOpcCommandsDisabled:=FALSE;
                                          protections.DavlenieMaslaSmazkiDi.inOpcCommandsDisabled:=FALSE; 
                                          protections.dP_maslogaz_LA.inOpcCommandsDisabled:=FALSE;
                                          protections.dP_masloGaz_LowDI.inOpcCommandsDisabled:=FALSE;*) 

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
    Init : BOOL         := FALSE;
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
    Init : BOOL         := FALSE;
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
    fb_waitVibeg(phaseNumber:=1, delay:=T#30S);
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

            resetAiProtection(protections.Davlenie_masla_smazki_nizkoe_LA);

  	ai.Davlenie_masla_smazki_nizkoe.Disabled_LA:=TRUE;
            ai.Davlenie_masla_smazki_nizkoe.Disabled_LW:=TRUE;
            ai.Davlenie_masla_smazki_visokoe.Disabled_LW:=TRUE;
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
        fb_RunProtection_kr1(StrPh:=RunProtection_kr1 , StrDiP:=protections.Kran1sdvig);
        fb_RunProtection_kr2(StrPh:=RunProtection_kr2 , StrDiP:=protections.Kran2sdvig);
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

      IF didPKran1.start AND NOT didPKran1.top THEN
      didPKran1.top:= im.singleSignals.dP_gaza_kr_1.Q;
      END_IF;

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

            runAiProtection(protections.Vibroskorost_OP_ED_t1_HA);
            runAiProtection(protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA);
            runAiProtection(protections.Vibroskorost_OYP_kolesa_ED_t3_HA);
            runAiProtection(protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA);

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

FUNCTION_BLOCK proc_AI
  VAR
    fb_T_medi_statora_faza_1 : fb_AiSourceMlp;
    fb_T_medi_statora_faza_2 : fb_AiSourceMlp;
    fb_T_medi_statora_faza_3 : fb_AiSourceMlp;
    fb_T_stali_statora_faza_1 : fb_AiSourceMlp;
    fb_T_stali_statora_faza_2 : fb_AiSourceMlp;
    fb_T_stali_statora_faza_3 : fb_AiSourceMlp;
    fb_T_goryachego_vozdyha_ed_t1 : fb_AiSourceMlp;
    fb_T_goryachego_vozdyha_ed_t2 : fb_AiSourceMlp;
    fb_T_holodnogo_vozdyha_ed_t1 : fb_AiSourceMlp;
    fb_T_holodnogo_vozdyha_ed_t2 : fb_AiSourceMlp;
    fb_T_OP_ED_t1 : fb_AiSourceMlp;
    fb_T_OYP_ED_so_storony_redyctora_t2 : fb_AiSourceMlp;
    fb_T_OYP_kolesa_ED_t3 : fb_AiSourceMlp;
    fb_T_OP_kolesa_nagnetatelya_t4 : fb_AiSourceMlp;
    fb_T_OP_shesterni_ED_t5 : fb_AiSourceMlp;
    fb_T_OP_redyctora_so_storony_nagnetatelya_t6 : fb_AiSourceMlp;
    fb_T_OYP_nagnetatelya_so_storony_redyctora_t7_1 : fb_AiSourceMlp;
    fb_T_OYP_nagnetatelya_so_storony_redyctora_t7_2 : fb_AiSourceMlp;
    fb_T_OYP_svobodnogo_konca_nagnetatelya_t8_1 : fb_AiSourceMlp;
    fb_T_OYP_svobodnogo_konca_nagnetatelya_t8_2 : fb_AiSourceMlp;
    fb_T_YP_rabochih_kolodok_nagnetatelya_t9 : fb_AiSourceMlp;
    fb_T_ne_rabochih_kolodok_YP_nagnetatelya_t10 : fb_AiSourceMlp;
    fb_T_gaz_in_nagnetatelia : fb_AiSourceMlp;
    fb_T_gaz_out_nagnetatelia : fb_AiSourceMlp;
    fb_T_masla_do_ABO : fb_AiSourceMlp;
    fb_T_masla_posle_ABO : fb_AiSourceMlp;
    fb_T_masla_v_maslobake : fb_AiSourceMlp;
    fb_T_masla_v_maslobake_nad_ten : fb_AiSourceMlp;
    fb_T_naryjnogo_vozdyxa : fb_AiSourceMlp;
    fb_T_vozduha_V_shkaf : fb_AiSourceMlp;
    fb_Davlenie_impylsnogo_gaza : fb_AiSourceMlp;
    fb_Yroven_masla_v_maslobake : fb_AiSourceMlp;
    fb_Osevoi_sdvig_nagnetatelya_vpravo : fb_AiSourceMlp;
    fb_Osevoi_sdvig_nagnetatelya_vlevo : fb_AiSourceMlp;
    fb_Tok_statora : fb_AiSourceMlp;
    fb_Kontrol_220_perem : fb_AiSourceMlp;
    fb_Kontrol_220_post : fb_AiSourceMlp;
    fb_Davlenie_gaza_na_vhode_nagnetatelya : fb_AiSourceMlp;
    fb_Davlenie_gaza_na_vihode_nagnetatelya : fb_AiSourceMlp;
    fb_Perepad_davleniya_maslo_gaz : fb_AiSourceMlp;
    fb_Davlenie_masla_posle_nasosa_yplotneniya : fb_AiSourceMlp;
    fb_Davlenie_masla_smazki_nizkoe : fb_AiSourceMlp;
    fb_Davlenie_masla_smazki_visokoe : fb_AiSourceMlp;
    fb_Davlenie_masla_smazki_posle_GNS : fb_AiSourceMlp;
    fb_Perepad_davleniya_gaza_na_konfyzore : fb_AiSourceMlp;
    fb_Perepad_davleniya_masla_na_maslyanom_filtre : fb_AiSourceMlp;
    fb_Vibroskorost_OP_ED_t1 : fb_AiSourceMlp;
    fb_Vibroskorost_OYP_ED_so_storony_redyctora_t2 : fb_AiSourceMlp;
    fb_Vibroskorost_OYP_kolesa_ED_t3 : fb_AiSourceMlp;
    fb_Vibroskorost_OP_kolesa_nagnetatelya_t4 : fb_AiSourceMlp;
    fb_Vibroskorost_OP_shesterni_ED_t5 : fb_AiSourceMlp;
    fb_Vibroskorost_OP_shesterni_nagnetatelya_t6 : fb_AiSourceMlp;
  END_VAR
  VAR_EXTERNAL
    ai : AiConfig;
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
    arERR_28 : TItemDIN;
    arERR_29 : TItemDIN;
    arERR_30 : TItemDIN;
    arERR_31 : TItemDIN;
    arERR_32 : TItemDIN;
    arERR_33 : TItemDIN;
    arERR_34 : TItemDIN;
    arERR_35 : TItemDIN;
    arERR_36 : TItemDIN;
    arERR_37 : TItemDIN;
    arERR_38 : TItemDIN;
    arERR_39 : TItemDIN;
    arERR_40 : TItemDIN;
    arERR_41 : TItemDIN;
    arERR_42 : TItemDIN;
    arERR_43 : TItemDIN;
    arERR_44 : TItemDIN;
    A2_14_err_mode : UINT;
    A2_15_err_mode : UINT;
    A3_10_err_mode : UINT;
    A3_11_err_mode : UINT;
    A3_12_err_mode : UINT;
    A3_13_err_mode : UINT;
    A3_14_err_mode : UINT;
    A3_15_err_mode : UINT;
    A3_1_err_mode : UINT;
    A3_2_err_mode : UINT;
    A3_3_err_mode : UINT;
    A3_4_err_mode : UINT;
    A3_5_err_mode : UINT;
    A3_6_err_mode : UINT;
    A3_7_err_mode : UINT;
    A3_8_err_mode : UINT;
    A3_9_err_mode : UINT;
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
    AI_6_dblValue : LREAL;
    AI_7_dblValue : LREAL;
    AI_8_dblValue : LREAL;
    AI_9_dblValue : LREAL;
    BS_Core1 : REAL;
    BS_Core2 : REAL;
    BS_Core3 : REAL;
    BS_Core4 : REAL;
    BS_FreeMemory : REAL;
    BS_Temp1 : REAL;
    BS_Temp2 : REAL;
    arAIN_64 : TItemAIN;
    arAIN_65 : TItemAIN;
    arAIN_66 : TItemAIN;
    arAIN_67 : TItemAIN;
  END_VAR

  (* Циклический опрос. Входные аналоговые параметры *)



  (********************************************* Модуль A2-14 ******************************************************)
  (* [A2-14, AI0-0] T_medi_statora_faza_1 *)
  fb_T_medi_statora_faza_1(arAIN := arAIN_0, strAI := ai.TStalisStatoraKanal1, err_mod:=arERR_28);
  AI_0_dblValue := arAIN_0.dblValue;

  (* [A2-14, AI0-1] T_medi_statora_faza_2 *)
  fb_T_medi_statora_faza_2(arAIN := arAIN_1, strAI := ai.TStalisStatoraKanal2, err_mod:=arERR_28);
  AI_1_dblValue := arAIN_1.dblValue;

  (* [A2-14, AI0-2] T_medi_statora_faza_3 *)
  fb_T_medi_statora_faza_3(arAIN := arAIN_2, strAI := ai.TStalisStatoraKanal3, err_mod:=arERR_28);
  AI_2_dblValue := arAIN_2.dblValue;

  (* [A2-14, AI0-3] T_stali_statora_faza_1 *)
  fb_T_stali_statora_faza_1(arAIN := arAIN_3, strAI := ai.TMediStatoraKanal1, err_mod:=arERR_28);
  AI_3_dblValue := arAIN_3.dblValue;

  A2_14_err_mode := arERR_28.wValue;

  (********************************************* Модуль A2-15 ******************************************************)

  (* [A2-15, AI1-0] T_stali_statora_faza_2 *)
  fb_T_stali_statora_faza_2(arAIN := arAIN_4, strAI := ai.TMediStatoraKanal2, err_mod:=arERR_29);
  AI_4_dblValue := arAIN_3.dblValue;

  (* [A2-15, AI1-1] T_stali_statora_faza_3 *)
  fb_T_stali_statora_faza_3(arAIN := arAIN_5, strAI := ai.TMediStatoraKanal3, err_mod:=arERR_29);
  AI_5_dblValue := arAIN_3.dblValue;

  (* [A2-15, AI1-2] T_goryachego_vozdyha_ed_t1 *)
  fb_T_goryachego_vozdyha_ed_t1(arAIN := arAIN_6, strAI := ai.TOpornogoPodshipnikaEDT_1, err_mod:=arERR_29);
  AI_6_dblValue := arAIN_3.dblValue;

  (* [A2-15, AI1-3]  T_goryachego_vozdyha_ed_t2 *)
  fb_T_goryachego_vozdyha_ed_t2(arAIN := arAIN_7, strAI := ai.TOpornoYpornogoPodshipnikaEDT_2, err_mod:=arERR_29);
  AI_7_dblValue := arAIN_3.dblValue;

  A2_15_err_mode := arERR_29.wValue;

  (********************************************* Модуль A3-1 ******************************************************)

  (* [A3-1, AI2-0]  T_holodnogo_vozdyha_ed_t1 *)
  fb_T_holodnogo_vozdyha_ed_t1(arAIN := arAIN_8, strAI := ai.TOpornoYpornogoPodshipnikaKolesaRedEDT_3, err_mod:=arERR_30);
  AI_8_dblValue := arAIN_3.dblValue;

  (* [A3-1, AI2-1] T_holodnogo_vozdyha_ed_t2 *)
  fb_T_holodnogo_vozdyha_ed_t2(arAIN := arAIN_9, strAI := ai.TOpornoYpornogoPodshipnikaKolesaRedHT_4, err_mod:=arERR_30);
  AI_9_dblValue := arAIN_3.dblValue;

  (* [A3-1, AI2-2] T_opornogo_podshipnika_electro_dvigatelia_t1 *)
  fb_T_OP_ED_t1(arAIN := arAIN_10, strAI := ai.TOpornogoPodshipnikaShesterniReduktoraT_5, err_mod:=arERR_30);
  AI_10_dblValue := arAIN_3.dblValue;

  (* [A3-1, AI2-3]  T_oporno_ypornogo_podshipnika_electro_dvigatelia_so_storony_redyctora_t2 *)
  fb_T_OYP_ED_so_storony_redyctora_t2(arAIN := arAIN_11, strAI := ai.TOpornogoPodshipnikaReduktoraHT_6, err_mod:=arERR_30);
  AI_11_dblValue := arAIN_3.dblValue;

  A3_1_err_mode := arERR_30.wValue;

  (********************************************* Модуль A3-2 ******************************************************)

  (* [A3-2, AI3-0]  T_oporno_ypornogo_podshipnika_kolesa_redyctora_so_storony_electro_dvigatelya_t3 *)
  fb_T_OYP_kolesa_ED_t3(arAIN := arAIN_12, strAI := ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_1, err_mod:=arERR_31);
  AI_12_dblValue := arAIN_3.dblValue;

  (* [A3-2, AI3-1]  T_opornogo_podshipnika_kolesa_redyctora_so_storony_nagnetatelya_t4 *)
  fb_T_OP_kolesa_nagnetatelya_t4(arAIN := arAIN_13, strAI := ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_2, err_mod:=arERR_31);
  AI_13_dblValue := arAIN_3.dblValue;

  (* [A3-2, AI3-2]  T_opornogo_podshipnika_shesterni_redyctora_so_storony_electro_dvigatelya_t5 *)
  fb_T_OP_shesterni_ED_t5(arAIN := arAIN_14, strAI := ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1, err_mod:=arERR_31);
  AI_14_dblValue := arAIN_3.dblValue;

  (* [A3-2, AI32-3]  T_opornogo_podshipnika_redyctora_so_storony_nagnetatelya_t6 *)
  fb_T_OP_redyctora_so_storony_nagnetatelya_t6(arAIN := arAIN_15, strAI := ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2, err_mod:=arERR_31);
  AI_15_dblValue := arAIN_3.dblValue;

  A3_2_err_mode := arERR_31.wValue;

  (********************************************* Модуль A3-3 ******************************************************)

  (* [A3-3, AI4-0]  T_oporno_ypornogo_podshipnika_nagnetatelya_so_storony_redyctora_t7_osnovnoi *)
  fb_T_OYP_nagnetatelya_so_storony_redyctora_t7_1(arAIN := arAIN_16, strAI := ai.TYpornogoPodshipnikaRavKolodokHT_9_1, err_mod:=arERR_32);
  AI_16_dblValue := arAIN_3.dblValue;

  (* [A3-3, AI4-1]  T_oporno_ypornogo_podshipnika_nagnetatelya_so_storony_redyctora_t7_rezervniy *)
  fb_T_OYP_nagnetatelya_so_storony_redyctora_t7_2(arAIN := arAIN_17, strAI := ai.TYpornogoPodshipnikaRavKolodokHT_9_2, err_mod:=arERR_32);
  AI_17_dblValue := arAIN_3.dblValue;

  (* [A3-3, AI4-2]  T_oporno_ypornogo_podshipnika_svobodnogo_konca_nagnetatelya_t8_osnovnoi *)
  fb_T_OYP_svobodnogo_konca_nagnetatelya_t8_1(arAIN := arAIN_18, strAI := ai.TYpornogoPodshipnikaNerabKolodokHT_10_1, err_mod:=arERR_32);
  AI_18_dblValue := arAIN_3.dblValue;

  (* [A3-3, AI4-3] T_oporno_ypornogo_podshipnika_svobodnogo_konca_nagnetatelya_t8_rezervniy *)
  fb_T_OYP_svobodnogo_konca_nagnetatelya_t8_2(arAIN := arAIN_19, strAI := ai.TYpornogoPodshipnikaNerabKolodokHT_10_2, err_mod:=arERR_32);
  AI_19_dblValue := arAIN_3.dblValue;

  A3_3_err_mode := arERR_32.wValue;

  (********************************************* Модуль A3-4 ******************************************************)

  (* [A3-4, AI5-0] T_ypornogo_podshipnika_rabochih_kolodok_nagnetatelya_t9 *)
  fb_T_YP_rabochih_kolodok_nagnetatelya_t9(arAIN := arAIN_20, strAI := ai.THolodnogoVozduhaEDKanall, err_mod:=arERR_33);
  AI_20_dblValue := arAIN_3.dblValue;

  (* [A3-4, AI5-1] T_ne_rabochih_kolodok_ypornogo_podshipnika_nagnetatelya_t10Т газа на входе нагнетателя *)
  fb_T_ne_rabochih_kolodok_YP_nagnetatelya_t10(arAIN := arAIN_21, strAI := ai.THolodnogoVozduhaEDKanal2, err_mod:=arERR_33);
  AI_21_dblValue := arAIN_3.dblValue;

  (* [A3-4, AI5-2]  T_gaz_in_nagnetatelia *)
  fb_T_gaz_in_nagnetatelia(arAIN := arAIN_22, strAI := ai.TGorjachegoVozduhaEDKanall, err_mod:=arERR_33);
  AI_22_dblValue := arAIN_3.dblValue;

  (* [A3-4, AI5-3] T_gaz_out_nagnetatelia *)
  fb_T_gaz_out_nagnetatelia(arAIN := arAIN_23, strAI := ai.TGorjachegoVozduhaEDKanal2, err_mod:=arERR_33);
  AI_23_dblValue := arAIN_3.dblValue;

  A3_3_err_mode := arERR_33.wValue;

  (********************************************* Модуль A3-5 ******************************************************)

  (* [A3-5, AI6-0] T_masla_do_ABO *)
  fb_T_masla_do_ABO(arAIN := arAIN_24, strAI := ai.TNArujnogoVozduha, err_mod:=arERR_34);
  AI_24_dblValue := arAIN_3.dblValue;

  (* [A3-5, AI6-1]  T_masla_posle_ABO *)
  fb_T_masla_posle_ABO(arAIN := arAIN_25, strAI := ai.TgazaNaVhodeH, err_mod:=arERR_34);
  AI_25_dblValue := arAIN_3.dblValue;

  (* [A3-5, AI6-2] T_masla_v_maslobake *)
  fb_T_masla_v_maslobake(arAIN := arAIN_26, strAI := ai.TgazaNaVyhodeH, err_mod:=arERR_34);
  AI_26_dblValue := arAIN_3.dblValue;

  AI_27_dblValue := arAIN_3.dblValue;

  A3_5_err_mode := arERR_34.wValue;

  (********************************************* Модуль A3-6 ******************************************************)

  (* [A1-8, AI7-0] T_masla_v_maslobake_nad_ten *)
  fb_T_masla_v_maslobake_nad_ten(arAIN := arAIN_28, strAI := ai.T_masla_v_maslobake_nad_ten, err_mod:=arERR_35);
  AI_28_dblValue := arAIN_3.dblValue;

  (* [A1-8, AI7-1] T_naryjnogo_vozdyxa_rezervniy *)
  fb_T_naryjnogo_vozdyxa(arAIN := arAIN_29, strAI := ai.T_naryjnogo_vozdyxa, err_mod:=arERR_35);
  AI_29_dblValue := arAIN_3.dblValue;

  (* [A1-8, AI7-2] T_vozduha_V_shkaf *)
  fb_T_vozduha_V_shkaf(arAIN := arAIN_30, strAI := ai.T_vozduha_V_shkaf, err_mod:=arERR_35);
  AI_30_dblValue := arAIN_30.dblValue;

  AI_31_dblValue := arAIN_31.dblValue;

  A3_6_err_mode := arERR_35.wValue;

  (********************************************* Модуль A3-7 ******************************************************)

  (* Резерв *)
  AI_32_dblValue := arAIN_32.dblValue;

  AI_33_dblValue := arAIN_33.dblValue;

  AI_34_dblValue := arAIN_34.dblValue;

  AI_35_dblValue := arAIN_35.dblValue;

  A3_7_err_mode := arERR_36.wValue;
  (********************************************* Модуль A3-8 ******************************************************)

  (* [A3-8, AI9-0]  Davlenie_impylsnogo_gaza *)
  fb_Davlenie_impylsnogo_gaza(arAIN := arAIN_36, strAI := ai.Davlenie_impylsnogo_gaza, err_mod:=arERR_37);
  AI_36_dblValue := arAIN_36.dblValue;

  (* [A3-8, AI9-1]  Yroven_masla_v_maslobake *)
  fb_Yroven_masla_v_maslobake(arAIN := arAIN_37, strAI := ai.Yroven_masla_v_maslobake, err_mod:=arERR_37);
  AI_37_dblValue := arAIN_37.dblValue;

  (* [A3-8, AI9-2]  Osevoi_sdvig_nagnetatelya_vpravo *)
  fb_Osevoi_sdvig_nagnetatelya_vpravo(arAIN := arAIN_38, strAI := ai.Osevoi_sdvig_nagnetatelya_vpravo, err_mod:=arERR_37);
  AI_38_dblValue := arAIN_38.dblValue;

  (* [A3-8, AI9-3]  Osevoi_sdvig_nagnetatelya_vlevo *)
  fb_Osevoi_sdvig_nagnetatelya_vlevo(arAIN := arAIN_39, strAI := ai.Osevoi_sdvig_nagnetatelya_vlevo, err_mod:=arERR_37);
  AI_39_dblValue := arAIN_39.dblValue;

  A3_8_err_mode := arERR_37.wValue;

  (********************************************* Модуль A3-9 ******************************************************)

  (* [A3-9, AI10-0]  Tok_statora *)
  fb_Tok_statora(arAIN := arAIN_40, strAI := ai.Tok_statora, err_mod:=arERR_38);
  AI_40_dblValue := arAIN_40.dblValue;

  (* [A3-9, AI10-1]  Kontrol_220_perem *)
  fb_Kontrol_220_perem(arAIN := arAIN_41, strAI := ai.Kontrol_220_perem, err_mod:=arERR_38);
  AI_41_dblValue := arAIN_41.dblValue;

  (* [A3-9, AI10-2]  Kontrol_220_post *)
  fb_Kontrol_220_post(arAIN := arAIN_42, strAI := ai.Kontrol_220_post, err_mod:=arERR_38);
  AI_42_dblValue := arAIN_42.dblValue;

  AI_43_dblValue := arAIN_43.dblValue;

  A3_9_err_mode := arERR_38.wValue;

  (********************************************* Модуль A3-10 ******************************************************)

  (* [A3-10, AI11-0] Davlenie_gaza_na_vhode_nagnetatelya *)
  fb_Davlenie_gaza_na_vhode_nagnetatelya(arAIN := arAIN_44, strAI := ai.Davlenie_gaza_na_vhode_nagnetatelya, err_mod:=arERR_39);
  AI_44_dblValue := arAIN_44.dblValue;

  (* [A3-10, AI11-1] Активная мощность *)
  fb_Davlenie_gaza_na_vihode_nagnetatelya(arAIN := arAIN_45, strAI := ai.Davlenie_gaza_na_vihode_nagnetatelya, err_mod:=arERR_39);
  AI_45_dblValue := arAIN_45.dblValue;

  (* [A3-10, AI11-2] Perepad_davleniya_maslo_gaz *)
  fb_Perepad_davleniya_maslo_gaz(arAIN := arAIN_46, strAI := ai.Perepad_davleniya_maslo_gaz, err_mod:=arERR_39);
  AI_46_dblValue := arAIN_46.dblValue;

  (* [A3-10, AI11-3] Davlenie_masla_posle_nasosa_yplotneniya *)
  fb_Davlenie_masla_posle_nasosa_yplotneniya(arAIN := arAIN_47, strAI := ai.Davlenie_masla_posle_nasosa_yplotneniya, err_mod:=arERR_39);
  AI_47_dblValue := arAIN_47.dblValue;

  A3_10_err_mode := arERR_39.wValue;

  (********************************************* Модуль A3-11 ******************************************************)

  (* [A3-11, AI12-0] Davlenie_masla_smazki_nizkoe *)
  fb_Davlenie_masla_smazki_nizkoe(arAIN := arAIN_48, strAI := ai.Davlenie_masla_smazki_nizkoe, err_mod:=arERR_40);
  AI_48_dblValue := arAIN_48.dblValue;

  (* [A3-11, AI12-1] Davlenie_masla_smazki_visokoe *)
  fb_Davlenie_masla_smazki_visokoe(arAIN := arAIN_49, strAI := ai.Davlenie_masla_smazki_visokoe, err_mod:=arERR_40);
  AI_49_dblValue := arAIN_49.dblValue;

  (* [A3-11, AI12-2] Davlenie_masla_smazki_posle_GNS *)
  fb_Davlenie_masla_smazki_posle_GNS(arAIN := arAIN_50, strAI := ai.Davlenie_masla_smazki_posle_GNS, err_mod:=arERR_40);
  AI_50_dblValue := arAIN_50.dblValue;

  (* [A3-11, AI12-3] Perepad_davleniya_gaza_na_konfyzore *)
  fb_Perepad_davleniya_gaza_na_konfyzore(arAIN := arAIN_51, strAI := ai.Perepad_davleniya_gaza_na_konfyzore, err_mod:=arERR_40);
  AI_51_dblValue := arAIN_51.dblValue;

  A3_11_err_mode := arERR_40.wValue;

  (********************************************* Модуль A3-12 ******************************************************)

  (* [A3-12, AI13-0] Perepad_davleniya_masla_na_maslyanom_filtre *)
  fb_Perepad_davleniya_masla_na_maslyanom_filtre(arAIN := arAIN_52, strAI := ai.Perepad_davleniya_masla_na_maslyanom_filtre, err_mod:=arERR_41);
  AI_52_dblValue := arAIN_52.dblValue;

  AI_53_dblValue := arAIN_53.dblValue;

  AI_54_dblValue := arAIN_54.dblValue;

  AI_55_dblValue := arAIN_55.dblValue;

  A3_12_err_mode := arERR_41.wValue;

  (********************************************* Модуль A3-13 ******************************************************)

  (* [A3-13, AI14-0] Vibroploskost_opornogo_podshipnika_electro_dvigatelya_t1 *)
  fb_Vibroskorost_OP_ED_t1(arAIN := arAIN_56, strAI := ai.Vibroskorost_OP_ED_t1, err_mod:=arERR_42);
  AI_56_dblValue := arAIN_56.dblValue;

  (* [A3-13, AI14-1] Vibroploskost_oporno_ypornogo_podshipnika_electro_dvigatelya_so_storony_redyctora_t2 *)
  fb_Vibroskorost_OYP_ED_so_storony_redyctora_t2(arAIN := arAIN_57, strAI := ai.Vibroskorost_OYP_ED_so_storony_redyctora_t2, err_mod:=arERR_42);
  AI_57_dblValue := arAIN_57.dblValue;

  (* [A3-13, AI14-2] Vibroploskost_oporno_ypornogo_podshipnika_kolesa_redyktora_so_storony_electro_dvigatelya_t3 *)
  fb_Vibroskorost_OYP_kolesa_ED_t3(arAIN := arAIN_58, strAI := ai.Vibroskorost_OYP_kolesa_ED_t3, err_mod:=arERR_42);
  AI_58_dblValue := arAIN_58.dblValue;

  (* [A3-13, AI14-3] Vibroploskost_oporno_ypornogo_podshipnika_kolesa_redyktora_so_storony_nagnetatelya_t4_rezerv *)
  fb_Vibroskorost_OP_kolesa_nagnetatelya_t4(arAIN := arAIN_59, strAI := ai.Vibroskorost_OP_kolesa_nagnetatelya_t4, err_mod:=arERR_42);
  AI_59_dblValue := arAIN_59.dblValue;

  A3_13_err_mode := arERR_42.wValue;

  (********************************************* Модуль A3-14 ******************************************************)

  (* [A3-14, AI14-0] Vibroploskost_opornogo_podshipnika_shesterni_redyktora_so_storony_nagnetatelya_t5_rezerv *)
  fb_Vibroskorost_OP_shesterni_ED_t5(arAIN := arAIN_60, strAI := ai.Vibroskorost_OP_shesterni_ED_t5, err_mod:=arERR_43);
  AI_60_dblValue := arAIN_60.dblValue;

  (* [A3-14, AI14-1] Vibroploskost_opornogo_podshipnika_shesterni_redyktora_so_storony_nagnetatelya_t6 *)
  fb_Vibroskorost_OP_shesterni_nagnetatelya_t6(arAIN := arAIN_61, strAI := ai.Vibroskorost_OP_shesterni_nagnetatelya_t6, err_mod:=arERR_43);
  AI_61_dblValue := arAIN_61.dblValue;

  AI_62_dblValue := arAIN_62.dblValue;

  AI_63_dblValue := arAIN_63.dblValue;

  A3_14_err_mode := arERR_43.wValue;

  (********************************************* Модуль A3-15 ******************************************************)

  (* Резерв *)
  AI_64_dblValue := arAIN_64.dblValue;

  AI_65_dblValue := arAIN_65.dblValue;

  AI_66_dblValue := arAIN_66.dblValue;

  AI_67_dblValue := arAIN_67.dblValue;

  A3_15_err_mode := arERR_44.wValue;

  (********************************************* Параметры с БС ******************************************************)
  (*
  BS_FreeMemory := LREAL_TO_REAL(arAIN_8.dblValue);
  BS_Temp1 := LREAL_TO_REAL(arAIN_9.dblValue);
  BS_Temp2 := LREAL_TO_REAL(arAIN_10.dblValue);
  BS_Core1 := LREAL_TO_REAL(arAIN_11.dblValue);
  BS_Core2 := LREAL_TO_REAL(arAIN_12.dblValue);
  BS_Core3 := LREAL_TO_REAL(arAIN_13.dblValue);
  BS_Core4 := LREAL_TO_REAL(arAIN_14.dblValue); *)
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

  (* Инициализация начало. Входные аналоговые параметры *)

  inits := 0; (* Флаг необходимости инициализации структур-дескрипторов *)


  (********************************************* Модуль A2-14 ******************************************************)
  (* [A2-14, AI0-0] T_medi_statora_faza_1 *)
  stAI_Ini(data_Ini := TRUE, dLL := 0.0, dHL := 150.0,
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.TStalisStatoraKanal1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-14, AI0-1] T_medi_statora_faza_2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0, 
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.TStalisStatoraKanal2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-14, AI0-2] T_medi_statora_faza_3 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL :=150.0,
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.TStalisStatoraKanal3);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-14, AI0-3] T_stali_statora_faza_1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.TMediStatoraKanal1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A2-15 ******************************************************)

  (* [A2-15, AI1-0] T_stali_statora_faza_2 *)
  stAI_Ini(data_Ini :=TRUE,  dLL := 0.0, dHL := 150.0,
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.TMediStatoraKanal2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-15, AI1-1] T_stali_statora_faza_3 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 150.0,
  ISVALIDREF_HW := TRUE, dHW := 130.0, aperturFilter:= 0.5,
  strAI := ai.TMediStatoraKanal3);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-15, AI1-2] T_goryachego_vozdyha_ed_t1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 70.0, aperturFilter:= 0.5,
  strAI := ai.TOpornogoPodshipnikaEDT_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A2-15, AI1-3]  T_goryachego_vozdyha_ed_t2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 70.0, aperturFilter:= 0.5,
  strAI := ai.TOpornoYpornogoPodshipnikaEDT_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-1 ******************************************************)

  (* [A3-1, AI2-0]  T_holodnogo_vozdyha_ed_t1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 70.0, aperturFilter:= 0.5,
  strAI := ai.TOpornoYpornogoPodshipnikaKolesaRedEDT_3);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-1, AI2-1] T_holodnogo_vozdyha_ed_t2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 70.0, aperturFilter:= 0.5,
  strAI := ai.TOpornoYpornogoPodshipnikaKolesaRedHT_4);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-1, AI2-2] T_opornogo_podshipnika_electro_dvigatelia_t1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5,
  strAI := ai.TOpornogoPodshipnikaShesterniReduktoraT_5);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-1, AI2-3] T_opornogo_ypornogo_podshipnika_electro_dvigatelia_so_storony_redyctora_t2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5,
  strAI := ai.TOpornogoPodshipnikaReduktoraHT_6);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-2 ******************************************************)

  (* [A3-2, AI3-01]  T_oporno_ypornogo_podshipnika_kolesa_redyctora_so_storony_electro_dvigatelya_t3 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5,
  strAI := ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-2, AI3-1]  T_opornogo_podshipnika_kolesa_redyctora_so_storony_nagnetatelya_t4 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0, aperturFilter:= 0.5,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0,
  strAI := ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-2, AI3-2]  Т подшипника редуктора, т4 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5,
  strAI := ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-2, AI3-3]  Т опорного подшипника нагнетателя, т1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5,
  strAI := ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-3 ******************************************************)

  (* [A3-3, AI4-1]  T_oporno_ypornogo_podshipnika_nagnetatelya_so_storony_redyctora_t7_osnovnoi *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5,
  strAI := ai.TYpornogoPodshipnikaRavKolodokHT_9_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-3, AI4-2]  T_oporno_ypornogo_podshipnika_nagnetatelya_so_storony_redyctora_t7_rezervniy *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5,
  strAI := ai.TYpornogoPodshipnikaRavKolodokHT_9_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-3, AI4-3] T_oporno_ypornogo_podshipnika_svobodnogo_konca_nagnetatelya_t8_osnovnoi *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5,
  strAI := ai.TYpornogoPodshipnikaNerabKolodokHT_10_1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-3, AI4-4] T_oporno_ypornogo_podshipnika_svobodnogo_konca_nagnetatelya_t8_rezervniy *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5,
  strAI := ai.TYpornogoPodshipnikaNerabKolodokHT_10_2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-4 ******************************************************)

  (* [A3-4, AI5-0] T_ypornogo_podshipnika_rabochih_kolodok_nagnetatelya_t9 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5,
  strAI := ai.THolodnogoVozduhaEDKanall);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-4, AI5-1] T_ne_rabochih_kolodok_ypornogo_podshipnika_nagnetatelya_t10 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 80.0, dHW := 75.0, aperturFilter:= 0.5,
  strAI := ai.THolodnogoVozduhaEDKanal2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-4, AI5-2]  T_gaz_in_nagnetatelia *)
  stAI_Ini(data_Ini := TRUE,  dLL := -50.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 80.0, aperturFilter:= 0.5,
  strAI := ai.TGorjachegoVozduhaEDKanall);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-4, AI5-3] T_gaz_out_nagnetatelia *)
  stAI_Ini(data_Ini := TRUE,  dLL := -50.0, dHL := 100.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 90.0, dHW := 80.0, aperturFilter:= 0.5,
  strAI := ai.TGorjachegoVozduhaEDKanal2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-5 ******************************************************)

  (* [A3-5, AI6-0] T_masla_do_ABO *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 55.0, aperturFilter:= 0.5,
  strAI := ai.TNArujnogoVozduha);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-5, AI6-1]  T_masla_posle_ABO *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 55.0, aperturFilter:= 0.5,
  strAI := ai.TgazaNaVhodeH);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-5, AI6-2] T_masla_v_maslobake *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_LW := TRUE, dLW := 25.0, aperturFilter:= 0.5,
  strAI := ai.TgazaNaVyhodeH);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);


  (********************************************* Модуль A3-6 ******************************************************)

  (* [A3-6, AI7-0] T_masla_v_maslobake_nad_ten *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 100.0,
  ISVALIDREF_HW := TRUE, dHW := 60.0, aperturFilter:= 0.5,
  strAI := ai.T_masla_v_maslobake_nad_ten);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-6, AI7-1] T_naryjnogo_vozdyxa_rezervniy *)
  stAI_Ini(data_Ini := TRUE,  dLL := -50.0, dHL := 100.0,
  aperturFilter:= 0.5,
  strAI := ai.T_naryjnogo_vozdyxa);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-6, AI7-2] T_vozduha_V_shkafy *)
  stAI_Ini(data_Ini := TRUE,  dLL := -50.0, dHL := 100.0,
  aperturFilter:= 0.5,
  strAI := ai.T_vozduha_V_shkaf);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-8 ******************************************************)

  (* [A3-8, AI9-0]  Davlenie_impylsnogo_gaza *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0,
  ISVALIDREF_LW := TRUE, dLW := 5.0, aperturFilter:= 0.5,
  strAI := ai.Davlenie_impylsnogo_gaza);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-8, AI9-1]  Yroven_masla_v_maslobake *)
  stAI_Ini(data_Ini := TRUE,  dLL := 340.0, dHL := 960.0,
  ISVALIDREF_LW := TRUE, dLW := 350.0, aperturFilter:= 0.5,
  strAI := ai.Yroven_masla_v_maslobake);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-8, AI9-2]  Osevoi_sdvig_nagnetatelya_vpravo *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
  ISVALIDREF_HA := TRUE, ISVALIDREF_HW := TRUE, dHA := 300.0, dHW := 200.0, aperturFilter:= 0.5,
  strAI := ai.Osevoi_sdvig_nagnetatelya_vpravo);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-8, AI9-3]  Osevoi_sdvig_nagnetatelya_vlevo *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
  ISVALIDREF_LA := TRUE, ISVALIDREF_LW := TRUE, dHA := 300.0, dHW := 200.0, aperturFilter:= 0.5,
  strAI := ai.Osevoi_sdvig_nagnetatelya_vlevo);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-9 ******************************************************)


  (* [A3-9, AI10-0]  Tok_statora *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
  ISVALIDREF_LW := TRUE, dLW := 240.0, aperturFilter:= 0.5,
  strAI := ai.Tok_statora);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-9, AI10-1]  Kontrol_220_perem *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0, aperturFilter:= 0.5,
  ISVALIDREF_LW := TRUE, ISVALIDREF_HW := TRUE,
  dLW := 187.0, dHW := 242.0,
  strAI := ai.Kontrol_220_perem);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-9, AI10-2] Kontrol_220_post *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0, aperturFilter:= 0.5,
  ISVALIDREF_LW := TRUE, ISVALIDREF_HW := TRUE,
  dLW := 187.0, dHW := 242.0,
  strAI := ai.Kontrol_220_post);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-10 ******************************************************)


  (* [A3-10, AI11-0] Davlenie_gaza_na_vhode_nagnetatelya *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0,
  ISVALIDREF_LW := TRUE, dLW := 5.0, (*ISVALIDREF_LA := TRUE, dLA := 4.6,*) aperturFilter:= 0.5,
  strAI := ai.Davlenie_gaza_na_vhode_nagnetatelya);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-10, AI11-1] Davlenie_gaza_na_vihode_nagnetatelya *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0,
  ISVALIDREF_HW := TRUE, dHW := 7.55, (*ISVALIDREF_HA := TRUE, dHA := 7.65,*) aperturFilter:= 0.5,
  strAI := ai.Davlenie_gaza_na_vihode_nagnetatelya);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-10, AI11-2] Perepad_davleniya_maslo_gaz *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1600.0,
  ISVALIDREF_LW := TRUE, dLW := 150.0, ISVALIDREF_LA := TRUE, dLA := 100.0, 
  strAI := ai.Perepad_davleniya_maslo_gaz);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-10, AI11-3] Davlenie_masla_posle_nasosa_yplotneniya *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 10.0, aperturFilter:= 0.5,
  strAI := ai.Davlenie_masla_posle_nasosa_yplotneniya);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-11 ******************************************************)


  (* [A3-11, AI12-0]  Davlenie_masla_smazki_nizkoe *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
  ISVALIDREF_LW := TRUE, dLW := 50.0, ISVALIDREF_LA := TRUE, dLA := 25.0,
  strAI := ai.Davlenie_masla_smazki_nizkoe);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-11, AI12-1]  Davlenie_masla_smazki_visokoe *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
  ISVALIDREF_LW := TRUE, dLW := 300.0, ISVALIDREF_LA := TRUE, dLA := 250.0,
  strAI := ai.Davlenie_masla_smazki_visokoe);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-11, AI12-2]  Davlenie_masla_smazki_posle_GNS *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 1000.0,
  ISVALIDREF_LW := TRUE, dLW := 400.0, aperturFilter:= 0.5,
  strAI := ai.Davlenie_masla_smazki_posle_GNS);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-11, AI12-3]  Perepad_davleniya_gaza_na_konfyzore *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0, aperturFilter:= 0.5,
  strAI := ai.Perepad_davleniya_gaza_na_konfyzore);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-12 ******************************************************)


  (* [A3-12, AI13-0] Perepad_davleniya_masla_na_maslyanom_filtre *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 250.0,
  ISVALIDREF_HW := TRUE, dHW := 150.0, aperturFilter:= 0.5,
  strAI := ai.Perepad_davleniya_masla_na_maslyanom_filtre);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-13 ******************************************************)


  (* [A3-13, AI14-0]  Vibroploskost_opornogo_podshipnika_electro_dvigatelya_t1 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, 
  strAI := ai.Vibroskorost_OP_ED_t1);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-13, AI14-1]  Vibroploskost_oporno_ypornogo_podshipnika_electro_dvigatelya_so_storony_redyctora_t2 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter:= 0.5, 
  strAI := ai.Vibroskorost_OYP_ED_so_storony_redyctora_t2);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-13, AI14-2]  Vibroploskost_oporno_ypornogo_podshipnika_kolesa_redyktora_so_storony_electro_dvigatelya_t3 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter:= 0.5,  
  strAI := ai.Vibroskorost_OYP_kolesa_ED_t3);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-13, AI14-3]  Vibroploskost_oporno_ypornogo_podshipnika_kolesa_redyktora_so_storony_nagnetatelya_t4_rezerv *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter:= 0.5,  
  strAI := ai.Vibroskorost_OP_kolesa_nagnetatelya_t4);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (********************************************* Модуль A3-14 ******************************************************)

  (* [A3-14, AI15-0]  Vibroploskost_opornogo_podshipnika_shesterni_redyktora_so_storony_nagnetatelya_t5_rezerv *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter:= 0.5, 
  strAI := ai.Vibroskorost_OP_shesterni_ED_t5);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);

  (* [A3-14, AI15-1]  Vibroploskost_opornogo_podshipnika_shesterni_redyktora_so_storony_nagnetatelya_t6 *)
  stAI_Ini(data_Ini := TRUE,  dLL := 0.0, dHL := 25.0,
  ISVALIDREF_HW := TRUE, ISVALIDREF_HA := TRUE, dHW := 11.0, dHA := 18.0, aperturFilter:= 0.5,
  strAI := ai.Vibroskorost_OP_shesterni_nagnetatelya_t6);
  inits := inits + BOOL_TO_UINT(stAI_Ini.Init);


  initiales := 0;
  IF init THEN initiales := inits; END_IF;
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

FUNCTION_BLOCK proc_DI
  VAR_EXTERNAL
    di : DiConfig;
  END_VAR
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
    arERR_1 : TItemDIN;
    arERR_2 : TItemDIN;
    arERR_3 : TItemDIN;
    arERR_4 : TItemDIN;
    arERR_5 : TItemDIN;
    arERR_6 : TItemDIN;
    arERR_7 : TItemDIN;
    arERR_8 : TItemDIN;
    arERR_0 : TItemDIN;
    arERR_9 : TItemDIN;
    arERR_10 : TItemDIN;
    arERR_11 : TItemDIN;
    arERR_12 : TItemDIN;
    arERR_13 : TItemDIN;
    arERR_14 : TItemDIN;
    arERR_15 : TItemDIN;
    arERR_16 : TItemDIN;
    arERR_17 : TItemDIN;
    DI_A1_10_wValue : UINT;
    DI_A1_11_wValue : UINT;
    DI_A1_12_wValue : UINT;
    DI_A1_13_wValue : UINT;
    DI_A1_14_wValue : UINT;
    DI_A1_15_wValue : UINT;
    DI_A1_1_wValue : UINT;
    DI_A1_2_wValue : UINT;
    DI_A1_3_wValue : UINT;
    DI_A1_4_wValue : UINT;
    DI_A1_5_wValue : UINT;
    DI_A1_6_wValue : UINT;
    DI_A1_7_wValue : UINT;
    DI_A1_8_wValue : UINT;
    DI_A1_9_wValue : UINT;
    DI_A2_1_wValue : UINT;
    DI_A2_2_wValue : UINT;
    DI_A2_3_wValue : UINT;
    A1_10_err_mode : UINT;
    A1_11_err_mode : UINT;
    A1_12_err_mode : UINT;
    A1_13_err_mode : UINT;
    A1_14_err_mode : UINT;
    A1_15_err_mode : UINT;
    A1_1_err_mode : UINT;
    A1_2_err_mode : UINT;
    A1_3_err_mode : UINT;
    A1_4_err_mode : UINT;
    A1_5_err_mode : UINT;
    A1_6_err_mode : UINT;
    A1_7_err_mode : UINT;
    A1_8_err_mode : UINT;
    A1_9_err_mode : UINT;
    A2_1_err_mode : UINT;
    A2_2_err_mode : UINT;
    A2_3_err_mode : UINT;
  END_VAR

  (* Циклический опрос. Входные дискретные параметры *)



  (* Модуль A1-1 *)
  di_0(arDIN := arDIN_0, strDI:=di.di_0, err_mod:=arERR_0);
  DI_A1_1_wValue:=arDIN_0.wValue;
  A1_1_err_mode :=arERR_0.wValue; 

  (* Модуль A1-2 *)
  di_1(arDIN := arDIN_1, strDI:=di.di_1, err_mod:=arERR_1);
  DI_A1_2_wValue:=arDIN_1.wValue;
  A1_2_err_mode :=arERR_1.wValue; 

  (* Модуль A1-3 *)
  di_2(arDIN := arDIN_2, strDI:=di.di_2,  err_mod:=arERR_2);
  DI_A1_3_wValue:=arDIN_2.wValue;
  A1_3_err_mode :=arERR_2.wValue; 

  (* Модуль A1-4 *)
  di_3(arDIN := arDIN_3, strDI:=di.di_3,  err_mod:=arERR_3);
  DI_A1_4_wValue:=arDIN_3.wValue;
  A1_4_err_mode :=arERR_3.wValue; 

  (* Модуль A1-5 *)
  di_4(arDIN := arDIN_4, strDI:=di.di_4,  err_mod:=arERR_4);
  DI_A1_5_wValue:=arDIN_4.wValue;
  A1_5_err_mode :=arERR_4.wValue; 

  (* Модуль A1-6 *)
  di_5(arDIN := arDIN_5, strDI:=di.di_5,  err_mod:=arERR_5);
  DI_A1_6_wValue:=arDIN_5.wValue;
  A1_6_err_mode :=arERR_5.wValue; 

  (* Модуль A1-7 *)
  di_6(arDIN := arDIN_6, strDI:=di.di_6,  err_mod:=arERR_6);
  DI_A1_7_wValue:=arDIN_6.wValue;
  A1_7_err_mode :=arERR_6.wValue; 

  (* Модуль A1-8 *)
  di_7(arDIN := arDIN_7, strDI:=di.di_7,  err_mod:=arERR_7);
  DI_A1_8_wValue:=arDIN_7.wValue;
  A1_8_err_mode :=arERR_7.wValue; 

  (* Модуль A1-9 *)
  di_8(arDIN := arDIN_8, strDI:=di.di_8,  err_mod:=arERR_8);
  DI_A1_9_wValue:=arDIN_8.wValue;
  A1_9_err_mode :=arERR_8.wValue; 

  (* Модуль A1-10 *)
  di_9(arDIN := arDIN_9, strDI:=di.di_9,  err_mod:=arERR_9);
  DI_A1_10_wValue:=arDIN_9.wValue;
  A1_10_err_mode :=arERR_9.wValue; 

  (* Модуль A1-11 *)
  di_10(arDIN := arDIN_10, strDI:=di.di_10,  err_mod:=arERR_10);
  DI_A1_11_wValue:=arDIN_10.wValue;
  A1_11_err_mode :=arERR_10.wValue; 

  (* Модуль A1-12 *)
  di_11(arDIN := arDIN_11, strDI:=di.di_11,  err_mod:=arERR_11);
  DI_A1_12_wValue:=arDIN_11.wValue;
  A1_12_err_mode :=arERR_11.wValue; 

  (* Модуль A1-13 *)
  di_12(arDIN := arDIN_12, strDI:=di.di_12,  err_mod:=arERR_12);
  DI_A1_13_wValue:=arDIN_12.wValue;
  A1_13_err_mode :=arERR_12.wValue; 

  (* Модуль A1-14 *)
  di_13(arDIN := arDIN_13, strDI:=di.di_13,  err_mod:=arERR_13);
  DI_A1_14_wValue:=arDIN_13.wValue;
  A1_14_err_mode :=arERR_13.wValue; 

  (* Модуль A1-15 *)
  di_14(arDIN := arDIN_14, strDI:=di.di_14,  err_mod:=arERR_14);
  DI_A1_15_wValue:=arDIN_14.wValue;
  A1_15_err_mode :=arERR_14.wValue; 

  (* Модуль A2-1 *)
  di_15(arDIN := arDIN_15, strDI:=di.di_15,  err_mod:=arERR_15);
  DI_A2_1_wValue:=arDIN_15.wValue;
  A2_1_err_mode :=arERR_15.wValue; 

  (* Модуль A2-2 *)
  di_16(arDIN := arDIN_16, strDI:=di.di_16,  err_mod:=arERR_16);
  DI_A2_2_wValue:=arDIN_16.wValue;
  A2_2_err_mode :=arERR_16.wValue;  

  (* Модуль A2-3 *)
  di_17(arDIN := arDIN_17, strDI:=di.di_17,  err_mod:=arERR_17);
  DI_A2_3_wValue:=arDIN_17.wValue;
  A2_3_err_mode :=arERR_17.wValue;
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

  stDI_Ini(data_Ini := true, imit:=FALSE, strDI := di.di_15);
  inits := inits + BOOL_TO_UINT(stDI_Ini.Init);

  initiales := 0;
  IF init THEN initiales := inits; END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_DO
  VAR_EXTERNAL
    od : DOconfig;
  END_VAR
  VAR
    do_0 : fb_DOSourceMlp;
    do_1 : fb_DOSourceMlp;
    do_2 : fb_DOSourceMlp;
    do_3 : fb_DOSourceMlp;
    do_4 : fb_DOSourceMlp;
    do_5 : fb_DOSourceMlp;
    do_6 : fb_DOSourceMlp;
    do_7 : fb_DOSourceMlp;
    do_8 : fb_DOSourceMlp;
    do_9 : fb_DOSourceMlp;
    gpio_out : fb_DOSourceMlp;
  END_VAR
  VAR_EXTERNAL
    arERR_18 : TItemDIN;
    arERR_19 : TItemDIN;
    arERR_20 : TItemDIN;
    arERR_21 : TItemDIN;
    arERR_22 : TItemDIN;
    arERR_23 : TItemDIN;
    arERR_24 : TItemDIN;
    arERR_25 : TItemDIN;
    arERR_26 : TItemDIN;
    arERR_27 : TItemDIN;
    arDOUT_0 : TWordData;
    arDOUT_1 : TWordData;
    arDOUT_2 : TWordData;
    arDOUT_3 : TWordData;
    arDOUT_4 : TWordData;
    arDOUT_5 : TWordData;
    arDOUT_6 : TWordData;
    arDOUT_7 : TWordData;
    arDOUT_8 : TWordData;
    arDOUT_9 : TWordData;
    arERR_66 : TItemDIN;
    arDOUT_66 : TWordData;
    A2_10_err_mode : UINT;
    A2_11_err_mode : UINT;
    A2_12_err_mode : UINT;
    A2_13_err_mode : UINT;
    A2_4_err_mode : UINT;
    A2_5_err_mode : UINT;
    A2_6_err_mode : UINT;
    A2_7_err_mode : UINT;
    A2_8_err_mode : UINT;
    A2_9_err_mode : UINT;
    DO_A2_10_wValue : UINT;
    DO_A2_11_wValue : UINT;
    DO_A2_12_wValue : UINT;
    DO_A2_13_wValue : UINT;
    DO_A2_4_wValue : UINT;
    DO_A2_5_wValue : UINT;
    DO_A2_6_wValue : UINT;
    DO_A2_7_wValue : UINT;
    DO_A2_8_wValue : UINT;
    DO_A2_9_wValue : UINT;
  END_VAR

  (* Циклический опрос. Входные дискретные параметры *)

  (* Модуль A2-4 *)
  do_0(arDout := arDOUT_0, strDO := od.do_0, err_mod:=arERR_18);
  DO_A2_4_wValue:=arDOUT_0.wValue;
  A2_4_err_mode :=arERR_18.wValue;

  (* Модуль A2-5 *)
  do_1(arDout := arDOUT_1, strDO := od.do_1, err_mod:=arERR_19);
  DO_A2_5_wValue:=arDOUT_1.wValue;
  A2_5_err_mode :=arERR_19.wValue;

  (* Модуль A2-6 *)
  do_2(arDout := arDOUT_2, strDO := od.do_2, err_mod:=arERR_20);
  DO_A2_6_wValue:=arDOUT_2.wValue;
  A2_6_err_mode :=arERR_20.wValue;

  (* Модуль A2-7 *)
  do_3(arDout := arDOUT_3, strDO := od.do_3, err_mod:=arERR_21);
  DO_A2_7_wValue:=arDOUT_3.wValue;
  A2_7_err_mode :=arERR_21.wValue;

  (* Модуль A2-8 *)
  do_4(arDout := arDOUT_4, strDO := od.do_4, err_mod:=arERR_22);
  DO_A2_8_wValue:=arDOUT_4.wValue;
  A2_8_err_mode :=arERR_22.wValue;

  (* Модуль A2-9 *)
  do_5(arDout := arDOUT_5, strDO := od.do_5, err_mod:=arERR_23);
  DO_A2_9_wValue:=arDOUT_5.wValue;
  A2_9_err_mode :=arERR_23.wValue;

  (* Модуль A2-10 *)
  do_6(arDout := arDOUT_6, strDO := od.do_6, err_mod:=arERR_24);
  DO_A2_10_wValue:=arDOUT_6.wValue;
  A2_10_err_mode :=arERR_24.wValue;

  (* Модуль A2-11 *)
  do_7(arDout := arDOUT_7, strDO := od.do_7, err_mod:=arERR_25);
  DO_A2_11_wValue:=arDOUT_7.wValue;
  A2_11_err_mode :=arERR_25.wValue;

  (* Модуль A2-12 *)
  do_8(arDout := arDOUT_8, strDO := od.do_8, err_mod:=arERR_26);
  DO_A2_12_wValue:=arDOUT_8.wValue;
  A2_12_err_mode :=arERR_26.wValue;

  (* Модуль A2-13 *)
  do_9(arDout := arDOUT_9, strDO := od.do_9, err_mod:=arERR_27);
  DO_A2_13_wValue:=arDOUT_9.wValue;
  A2_13_err_mode :=arERR_27.wValue;

  gpio_out(arDout := arDOUT_66, strDO := od.gpio_out, err_mod:=arERR_66);
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

  (* Модуль A1-20 *)
  stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_5);
  inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

  (* Модуль A1-21 *)
  stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_6);
  inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

  (* Модуль A1-22 *)
  stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.do_7);
  inits := inits + BOOL_TO_UINT(stDO_Ini.Init);

  (* Модуль A1-23 *)
  stDO_Ini(data_Ini := true, imit:=FALSE, strDO := od.gpio_out);
  inits := inits + BOOL_TO_UINT(stDO_Ini.Init);
  initiales := 0;

  IF init THEN initiales := inits; END_IF;
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
    inAuto : TYPE_ReliableBit;
    inDistance : TYPE_ReliableBit;
    inBreakCmdOn : TYPE_ReliableBit;
    inBreakCmdOff : TYPE_ReliableBit;
  END_VAR
  VAR
    onInit : BOOL         := FALSE;
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
    _changWithoutCommand : BOOL;
    errorCMDTimer : TON;
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
  StrSw.Auto := inAuto.value AND inAuto.reliability;
  StrSw.Distance := inDistance.value AND inDistance.reliability;
  StrSw.OpcCommandsDisabled := StrSw.inOpcCommandsDisabled;

  StrSw.Blocked:=StrSw.Accident OR StrSw.Local OR StrSw.breakCmdOn OR StrSw.breakCmdOff OR StrSw.inBlocked;

  StrSw.Rezervny:=NOT StrSw.Osnovnoy;

  (* ---- Формирование признака сдвига ---- *)	
  StrSw.sdvig  := FALSE;
  IF (StrSw.ISVALIDREF_cmdOn OR StrSw.ISVALIDREF_cmdOff) AND NOT StrSw.Local THEN
  	IF cmd = 0 THEN
  		IF (lastOnStatus <> StrSw.onStatus AND 
  		(StrSw.onStatus <> _statusDualInput.STATUS_NOTDEFINED AND StrSw.onStatus <> _statusDualInput.STATUS_ERROR) AND
  		(lastOnStatus <> _statusDualInput.STATUS_NOTDEFINED AND lastOnStatus <> _statusDualInput.STATUS_ERROR)) THEN
  			StrSw.sdvig   := TRUE;
  		END_IF;
  	END_IF;
  END_IF;
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
                      OR shl(BOOL_TO_DWORD(StrSw.Auto), 7) 
  		OR shl(BOOL_TO_DWORD(StrSw.Distance), 6) 
  		OR shl(BOOL_TO_DWORD(StrSw.Local), 5) 
  		OR shl(BOOL_TO_DWORD(StrSw.Ns), 4) 
                  	OR shl(BOOL_TO_DWORD(StrSw.Accident ),3)
  		OR BYTE_TO_DWORD(StrSw.onStatus);
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
    fb_MB : fb_SectionSwitch;
    fb_v1_Avom : fb_Switch;
    fb_v2_Avom : fb_Switch;
    fb_v3_Avom : fb_Switch;
    fb_v4_Avom : fb_Switch;
    fb_Ten_kollect : fb_Switch;
    fb_Ten_MB : fb_Switch;
    fb_pns : fb_Switch;
    fb_nu1 : fb_OilPump;
    fb_nu2 : fb_OilPump;
    fb_Kalorifer_ABO : fb_Switch;
    fb_CMN_pump : fb_Switch;
    fb_PLC_Control : fb_meandr;
  END_VAR
  VAR_EXTERNAL
    di : DiConfig;
    od : DOconfig;
    IM : ImConfig;
  END_VAR
  VAR
    fb_dP_maslo_gaz_menshe_100_kPa : fb_singleSignal;
    fb_dP_gaza_kr_1 : fb_singleSignal;
    fb_otklon_masla_v_akkym_yplot : fb_singleSignal;
    fb_Potok_masla_posle_ABO_bolshe_85_L_min : fb_singleSignal;
    fb_Razreshenie_zagryzki : fb_singleSignal;
    fb_Gotovnosst_vozb : fb_singleSignal;
    fb_Otkl_osn_regylyatora_neisprav : fb_singleSignal;
    fb_ostanov_po_zashitam_vozb_avar : fb_singleSignal;
    fb_SHAVR_1_v_rab : fb_singleSignal;
    fb_SHAVR_2_v_rab : fb_singleSignal;
    fb_Avar_otkl_viklychatelya : fb_singleSignal;
    fb_Asinhron_xod_peregryz : fb_singleSignal;
    fb_AO_KC_ot_SHKC_04M : fb_singleSignal;
    fb_AO_EGPA_ot_PRY : fb_singleSignal;
    fb_EAO_EGPA_ot_PRY : fb_singleSignal;
    fb_Nalichie_220_perem_vhod_v_SHY : fb_singleSignal;
    fb_Nalichie_220_post_vhod_v_SHY : fb_singleSignal;
    fb_Nalichie_220_post_na_shinah_ypr_ZRY : fb_singleSignal;
    fb_BEAO_vkl : fb_singleSignal;
    fb_Net_10_kVt_UcmA_UcmC : fb_singleSignal;
    fb_Net_10_kVt_UcmA_UcmB : fb_singleSignal;
    fb_Srabotka_BREO : fb_singleSignal;
    fb_Sbros_srabotki_BREO : fb_singleSignal;
    fb_NO_GPA_na_SHY : fb_singleSignal;
    fb_AO_GPA_na_SHY : fb_singleSignal;
    fb_EAO_GPA_na_SHY : fb_singleSignal;
    fb_Dver_shkafa_otkrita : fb_singleSignal;
    fb_NKY_vvod_1 : fb_singleSignal;
    fb_NKY_vvod_2 : fb_singleSignal;
    fb_Neisprav_BP_1 : fb_singleSignal;
    fb_Neisprav_BP_2 : fb_singleSignal;
    fb_Neisprav_BP_3 : fb_singleSignal;
    fb_Neisprav_BP_4 : fb_singleSignal;
    fb_Neisprav_BP_5 : fb_singleSignal;
    fb_Neisprav_BP_6 : fb_singleSignal;
    fb_Neisprav_BP_7 : fb_singleSignal;
    fb_Neisprav_BP_8 : fb_singleSignal;
    fb_Neisprav_BP_9 : fb_singleSignal;
    fb_Neisprav_BP_10 : fb_singleSignal;
    fb_Neisprav_cepei_ypr_AVR_pit_vozb : fb_singleSignal;
    fb_Rabota_EGPA : fb_singleOutput;
    fb_Neisparav_EGPA : fb_singleOutput;
    fb_Avar_EGPA : fb_singleOutput;
    fb_Indickaciya_PC_fonar : fb_singleOutput;
    fb_Indickaciya_AC_fonar : fb_singleOutput;
  END_VAR

  (* Циклический опрос. ИМ *)

  (* GPIO *)
  fb_PLC_Control(output:=od.gpio_out.bits[0]);    

  (* Кран 1 *)
  fb_Kran1(statOn := di.di_0.bits[1]._inversed, statOn_reliability := di.di_0.bits[1].reliability,
           statOff := di.di_0.bits[0]._inversed, statOff_reliability := di.di_0.bits[0].reliability,
           inSo := di.di_11.bits[0], inSz := di.di_11.bits[1],
           inDp := di.di_2.bits[1],
           cmdOn :=od.do_0.bits[0], cmdOff := od.do_0.bits[1],      
           strKr := IM.Kran1  );

    (* Кран 2 *)
  fb_Kran2(statOn := di.di_0.bits[3]._inversed, statOn_reliability:= di.di_0.bits[3].reliability,
           statOff := di.di_0.bits[2]._inversed,  statOff_reliability:= di.di_0.bits[2].reliability,
           inSo := di.di_11.bits[2], inSz := di.di_11.bits[3],
           cmdOn:=od.do_0.bits[3], cmdOff:=od.do_0.bits[4],
           strKr:= IM.Kran2  );

  (* Кран 3 *)
  fb_Kran3(statOn := di.di_0.bits[5]._inversed, statOn_reliability:= di.di_0.bits[5].reliability,
           statOff := di.di_0.bits[4]._inversed,  statOff_reliability:= di.di_0.bits[4].reliability,
           inSo := di.di_11.bits[4], inSz := di.di_11.bits[5],
           cmdOn:=od.do_1.bits[1], cmdOff:=od.do_1.bits[2],
           strKr:= IM.Kran3  );

           (* Кран 3b *)
  fb_Kran3b(statOn := di.di_0.bits[7]._inversed, statOn_reliability:= di.di_0.bits[7].reliability,
           statOff := di.di_0.bits[6]._inversed,  statOff_reliability:= di.di_0.bits[6].reliability,
           inSo := di.di_11.bits[6], inSz := di.di_11.bits[7],
           cmdOn:=od.do_1.bits[3], cmdOff:=od.do_1.bits[4],
           strKr:= IM.Kran3b  );


  (* Кран 4 *)
  fb_Kran4(statOn := di.di_1.bits[1]._inversed, statOn_reliability:= di.di_1.bits[1].reliability,
           statOff := di.di_1.bits[0]._inversed,  statOff_reliability:= di.di_1.bits[0].reliability,
           inSo := di.di_12.bits[0], inSz := di.di_12.bits[1],
           cmdOn:=od.do_2.bits[0], cmdOff:=od.do_2.bits[1],
           strKr:= IM.Kran4  );

  (* Кран 5 *)
  fb_Kran5(statOn := di.di_1.bits[3]._inversed, statOn_reliability:= di.di_1.bits[3].reliability,
           statOff := di.di_1.bits[2]._inversed,  statOff_reliability:= di.di_1.bits[2].reliability,
           inSo := di.di_12.bits[2], inSz := di.di_12.bits[3],
           cmdOn:=od.do_2.bits[2], cmdOff:=od.do_2.bits[3],
           strKr:= IM.Kran5  );

  (* Кран 6 *)
  fb_Kran6(statOn := di.di_1.bits[5]._inversed, statOn_reliability:= di.di_1.bits[5].reliability,
           statOff := di.di_1.bits[4]._inversed,  statOff_reliability:= di.di_1.bits[4].reliability,
           inSo := di.di_12.bits[4], inSz := di.di_12.bits[5],
           cmdOn:=od.do_2.bits[4], cmdOff:=od.do_3.bits[0], 
           strKr:= IM.Kran6  );

  (*  MB *)
    fb_MB(statOn := di.di_4.bits[3].value, statOn_reliability:= di.di_4.bits[3].reliability,
           statOff := di.di_4.bits[4].value, statOff_reliability:= di.di_4.bits[4].reliability,
           cmdOn:=od.do_4.bits[0], cmdOff:=od.do_4.bits[1], basketRolledOut := di.di_4.bits[5],
           StrSw:= IM.MB  );

  (*  В1 АВОМ вентилятор охлаждения *)
    fb_v1_Avom(statOn := di.di_5.bits[0].value, statOn_reliability:= di.di_5.bits[0].reliability, inAuto:= di.di_5.bits[2],
           statOff := di.di_5.bits[1].value, statOff_reliability:= di.di_5.bits[1].reliability,
           inBreakCmdOn := di.di_14.bits[2],
           cmdOn:=od.do_5.bits[0] ,
           StrSw:= IM.v1_Avom  );

  (*  В2 АВОМ вентилятор охлаждения *)
    fb_v2_Avom(statOn := di.di_5.bits[3].value, statOn_reliability:= di.di_5.bits[3].reliability, inAuto:= di.di_5.bits[5],
           statOff := di.di_5.bits[4].value, statOff_reliability:= di.di_5.bits[4].reliability,
           inBreakCmdOn := di.di_14.bits[3],
           cmdOn:=od.do_5.bits[1] ,
           StrSw:= IM.v2_Avom  );

    (*  В3 АВОМ вентилятор охлаждения *)
    fb_v3_Avom(statOn := di.di_5.bits[6].value, statOn_reliability:= di.di_5.bits[6].reliability, inAuto:= di.di_6.bits[0],
           statOff := di.di_5.bits[7].value, statOff_reliability:= di.di_5.bits[7].reliability,
           inBreakCmdOn := di.di_14.bits[4],
           cmdOn:=od.do_5.bits[2] ,
           StrSw:= IM.v3_Avom  );

  (*  В4 АВОМ вентилятор охлаждения *)
    fb_v4_Avom(statOn := di.di_6.bits[1].value, statOn_reliability:= di.di_6.bits[1].reliability, inAuto:= di.di_6.bits[3],
           statOff := di.di_6.bits[2].value, statOff_reliability:= di.di_6.bits[2].reliability,
           inBreakCmdOn := di.di_14.bits[5],
           cmdOn:=od.do_5.bits[3] ,
           StrSw:= IM.v4_Avom  );                        

  (*  ТЭН MB *)
    fb_Ten_MB(statOn := di.di_6.bits[4].value, statOn_reliability:= di.di_6.bits[4].reliability, inAuto:= di.di_6.bits[6],
           statOff := di.di_6.bits[5].value, statOff_reliability:= di.di_6.bits[5].reliability,
           inBreakCmdOn := di.di_14.bits[6],
           cmdOn:=od.do_6.bits[2],
           StrSw:= IM.Ten_MB  ); 

  (*  ТЭН коллектора *)
    fb_Ten_kollect(statOn := di.di_6.bits[7].value, statOn_reliability:= di.di_7.bits[0].reliability, inAuto:= di.di_7.bits[1],
           statOff := di.di_7.bits[0].value, statOff_reliability:= di.di_7.bits[0].reliability,
           inBreakCmdOn := di.di_14.bits[7],
           cmdOn:=od.do_6.bits[4],
           StrSw:= IM.Ten_kollect  ); 

    (*  CMN_pump-циркуляционный насос *)
    fb_CMN_pump(statOn := di.di_7.bits[2].value, statOn_reliability:= di.di_7.bits[2].reliability, inAuto:= di.di_7.bits[4],
           statOff := di.di_7.bits[3].value, statOff_reliability:= di.di_7.bits[3].reliability,
           inBreakCmdOn := di.di_15.bits[0],
           cmdOn:=od.do_6.bits[3],
           StrSw:= IM.CMN_pump  );

   (*  ПНС Насос смазки *)
    fb_pns(statOn := di.di_7.bits[5].value, statOn_reliability:= di.di_7.bits[5].reliability, inAuto:= di.di_7.bits[7],
           statOff := di.di_7.bits[6].value, statOff_reliability:= di.di_7.bits[6].reliability,
           inBreakCmdOn := di.di_15.bits[1], cmdOn:=od.do_5.bits[4], 
           StrSw:= IM.pns  );

  (*  НУ1  *)
    fb_nu1(statOn := di.di_8.bits[1].value, statOn_reliability:= di.di_8.bits[1].reliability, inAuto:= di.di_8.bits[3],
           statOff := di.di_8.bits[2].value, statOff_reliability:= di.di_8.bits[2].reliability,
           inBreakCmdOn := di.di_15.bits[2], cmdOn:=od.do_6.bits[0], 
           StrSw:= IM.nu1  );

  (*  НУ2  *)
    fb_nu2(statOn := di.di_8.bits[4].value, statOn_reliability:= di.di_8.bits[4].reliability, inAuto:= di.di_8.bits[6],
           statOff := di.di_8.bits[5].value, statOff_reliability:= di.di_8.bits[5].reliability,
           inBreakCmdOn := di.di_15.bits[3], cmdOn:=od.do_6.bits[1], 
           StrSw:= IM.nu2  );

  (*  Калорифер *)
    fb_Kalorifer_ABO(statOn := di.di_8.bits[7].value, statOn_reliability:= di.di_8.bits[7].reliability, inAuto:= di.di_9.bits[1],
           statOff := di.di_9.bits[0].value, statOff_reliability:= di.di_9.bits[0].reliability,
           inBreakCmdOn := di.di_15.bits[4],
           cmdOn:=od.do_7.bits[0],
           StrSw:= IM.Kalorifer_ABO  ); 


  (*************************************************** singleSignals ********************************************)

  fb_dP_maslo_gaz_menshe_100_kPa(signal :=di.di_2.bits[0], str_SS :=  IM.SingleSignals.dP_maslo_gaz_menshe_100_kPa);

  fb_dP_gaza_kr_1(signal :=di.di_2.bits[1], str_SS :=  IM.SingleSignals.dP_gaza_kr_1);

  fb_otklon_masla_v_akkym_yplot(signal :=di.di_2.bits[2], str_SS :=  IM.SingleSignals.otklon_masla_v_akkym_yplot);

  fb_Potok_masla_posle_ABO_bolshe_85_L_min(signal :=di.di_2.bits[3], str_SS :=  IM.SingleSignals.Potok_masla_posle_ABO_bolshe_85_L_min);

  fb_Razreshenie_zagryzki(signal :=di.di_3.bits[0], str_SS :=  IM.SingleSignals.Razreshenie_zagryzki);

  fb_Gotovnosst_vozb(signal :=di.di_3.bits[1], str_SS :=  IM.SingleSignals.Gotovnosst_vozb);

  fb_Otkl_osn_regylyatora_neisprav(signal :=di.di_3.bits[2], str_SS :=  IM.SingleSignals.Otkl_osn_regylyatora_neisprav);

  fb_ostanov_po_zashitam_vozb_avar(signal :=di.di_3.bits[3], str_SS :=  IM.SingleSignals.ostanov_po_zashitam_vozb_avar);

  fb_SHAVR_1_v_rab(signal :=di.di_4.bits[1], str_SS :=  IM.SingleSignals.SHAVR_1_v_rab);

  fb_SHAVR_2_v_rab(signal :=di.di_4.bits[2], str_SS :=  IM.SingleSignals.SHAVR_2_v_rab);

  fb_Avar_otkl_viklychatelya(signal :=di.di_4.bits[6], str_SS :=  IM.SingleSignals.Avar_otkl_viklychatelya);

  fb_Asinhron_xod_peregryz(signal :=di.di_4.bits[7], str_SS :=  IM.SingleSignals.Asinhron_xod_peregryz);

  fb_AO_KC_ot_SHKC_04M(signal :=di.di_9.bits[5], str_SS :=  IM.SingleSignals.AO_KC_ot_SHKC_04M);

  fb_AO_EGPA_ot_PRY(signal :=di.di_9.bits[6], str_SS :=  IM.SingleSignals.AO_EGPA_ot_PRY);

  fb_EAO_EGPA_ot_PRY(signal :=di.di_9.bits[7], str_SS :=  IM.SingleSignals.EAO_EGPA_ot_PRY);

  fb_Nalichie_220_perem_vhod_v_SHY(signal :=di.di_13.bits[0], str_SS :=  IM.SingleSignals.Nalichie_220_perem_vhod_v_SHY);

  fb_Nalichie_220_post_vhod_v_SHY(signal :=di.di_13.bits[1], str_SS :=  IM.SingleSignals.Nalichie_220_post_vhod_v_SHY);

  fb_Nalichie_220_post_na_shinah_ypr_ZRY(signal :=di.di_13.bits[2], str_SS :=  IM.SingleSignals.Nalichie_220_post_na_shinah_ypr_ZRY);

  fb_BEAO_vkl(signal :=di.di_16.bits[0], str_SS :=  IM.SingleSignals.BEAO_vkl);

  fb_Net_10_kVt_UcmA_UcmC(signal :=di.di_16.bits[6], str_SS :=  IM.SingleSignals.Net_10_kVt_UcmA_UcmC);

  fb_Net_10_kVt_UcmA_UcmB(signal :=di.di_16.bits[7], str_SS :=  IM.SingleSignals.Net_10_kVt_UcmA_UcmB);

  fb_Srabotka_BREO(signal :=di.di_17.bits[0], str_SS :=  IM.SingleSignals.Srabotka_BREO);

  fb_Sbros_srabotki_BREO(signal :=di.di_17.bits[1], str_SS :=  IM.SingleSignals.Sbros_srabotki_BREO);

  fb_NO_GPA_na_SHY(signal :=di.di_17.bits[4], str_SS :=  IM.SingleSignals.NO_GPA_na_SHY);

  fb_AO_GPA_na_SHY(signal :=di.di_17.bits[5], str_SS :=  IM.SingleSignals.AO_GPA_na_SHY);

  fb_EAO_GPA_na_SHY(signal :=di.di_17.bits[6], str_SS :=  IM.SingleSignals.EAO_GPA_na_SHY);

  fb_Dver_shkafa_otkrita(signal :=di.di_17.bits[7], str_SS :=  IM.SingleSignals.Dver_shkafa_otkrita);

  fb_NKY_vvod_1(signal :=di.di_3.bits[6], str_SS :=  IM.SingleSignals.NKY_vvod_1);

  fb_NKY_vvod_2(signal :=di.di_3.bits[7], str_SS :=  IM.SingleSignals.NKY_vvod_2);

  fb_Neisprav_BP_1(signal :=di.di_10.bits[0], str_SS :=  IM.SingleSignals.Neisprav_BP_1);

  fb_Neisprav_BP_2(signal :=di.di_10.bits[1], str_SS :=  IM.SingleSignals.Neisprav_BP_2);

  fb_Neisprav_BP_3(signal :=di.di_10.bits[2], str_SS :=  IM.SingleSignals.Neisprav_BP_3);

  fb_Neisprav_BP_4(signal :=di.di_10.bits[3], str_SS :=  IM.SingleSignals.Neisprav_BP_4);

  fb_Neisprav_BP_5(signal :=di.di_10.bits[4], str_SS :=  IM.SingleSignals.Neisprav_BP_5);

  fb_Neisprav_BP_6(signal :=di.di_10.bits[5], str_SS :=  IM.SingleSignals.Neisprav_BP_6);

  fb_Neisprav_BP_7(signal :=di.di_10.bits[6], str_SS :=  IM.SingleSignals.Neisprav_BP_7);

  fb_Neisprav_BP_8(signal :=di.di_10.bits[7], str_SS :=  IM.SingleSignals.Neisprav_BP_8);

  fb_Neisprav_BP_9(signal :=di.di_13.bits[3], str_SS :=  IM.SingleSignals.Neisprav_BP_9);

  fb_Neisprav_BP_10(signal :=di.di_13.bits[4], str_SS :=  IM.SingleSignals.Neisprav_BP_10);

  fb_Neisprav_cepei_ypr_AVR_pit_vozb(signal :=di.di_4.bits[0], str_SS :=  IM.SingleSignals.Neisprav_cepei_ypr_AVR_pit_vozb);


  (*************************************************** SingleOutputs ********************************************)


  fb_Rabota_EGPA(str_SO :=  IM.SingleOutputs.Rabota_EGPA,signal:=od.do_8.bits[0]);

  fb_Neisparav_EGPA(str_SO :=  IM.SingleOutputs.Neisparav_EGPA,signal:=od.do_8.bits[1]);

  fb_Avar_EGPA(str_SO :=  IM.SingleOutputs.Avar_EGPA,signal:=od.do_8.bits[2]);

  fb_Indickaciya_PC_fonar(str_SO :=  IM.SingleOutputs.Indickaciya_PC_fonar,signal:=od.do_9.bits[3]);

  fb_Indickaciya_AC_fonar(str_SO :=  IM.SingleOutputs.Indickaciya_AC_fonar,signal:=od.do_9.bits[4]);



   (**************************************** Аналоговые и Дискретные параметры ***********************************)

    (* Гистерезис температуры вклюючения вентиляторов в алгоритме АвтоАВОМ  *)  
  (*fb_AutoAvom_hysteresis(StrAP:=IM.AutoAvom_hysteresis);*)


    (* Переключатель разблокировки кранов: 1 - допстить управление кранами  *)                                   
  (*fb_TypeSwitch(StrDP:=IM.TypeSwitch);*)
END_FUNCTION_BLOCK

FUNCTION_BLOCK proc_IM_Init
  VAR
    stOp_Ini : fb_OilPump_Init;
    stSSw_Ini : fb_SectionSwitch_Init;
  END_VAR
  VAR_INPUT
    init : BOOL;
  END_VAR
  VAR
    stKr_Ini : fb_Kran_Init;
    stSw_Ini : fb_Switch_Init;
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
        ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true,
        str_Kr := IM.Kran5);
  inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

  (* Кран 6 *)
  stKr_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true, 
        ISVALIDREF_inSo:=true, ISVALIDREF_inSz:=true, 
        str_Kr := IM.Kran6);
  inits := inits + BOOL_TO_UINT(stKr_Ini.Init);

  (* MB *)
  stSSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, ISVALIDREF_cmdOff:=true,
        ISVALIDREF_basketRolledOut:=true,
        (*ISVALIDREF_inBreakCmdOn:=true, ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.MB);
  inits := inits + BOOL_TO_UINT(stSSw_Ini.Init);

  (* В1 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.v1_Avom);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);


  (* В2 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.v1_Avom);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* В3 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, 
        ISVALIDREF_inBreakCmdOn:=true, (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.v1_Avom);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* В4 АВОМ вентилятор охлаждения *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, 
        ISVALIDREF_inBreakCmdOn:=true,(*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.v1_Avom);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* ТЭН маслобака *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true,
        ISVALIDREF_inBreakCmdOn:=true,
        str_Sw := IM.Ten_MB);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* ТЭН коллектора *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true,
        ISVALIDREF_inBreakCmdOn:=true,
        str_Sw := IM.Ten_kollect);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* CMN_pump-циркуляционный насос *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true,
        ISVALIDREF_inBreakCmdOn:=true,
        str_Sw := IM.CMN_pump);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* ПНС Насос смазки *)
  stSw_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true, 
        ISVALIDREF_inBreakCmdOn:=true,
       (*ISVALIDREF_inBreakCmdOff:=true,*)
        str_Sw := IM.pns);
  inits := inits + BOOL_TO_UINT(stSw_Ini.Init);

  (* nu1 *)
  stOp_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true,
        ISVALIDREF_inBreakCmdOn:=true,
        str_Op := IM.nu1);
  inits := inits + BOOL_TO_UINT(stOp_Ini.Init);

  (* nu2 *)
  stOp_Ini(data_Ini := true, ISVALIDREF_statOn:=true, ISVALIDREF_statOff:=true, 
        ISVALIDREF_cmdOn:=true,
        ISVALIDREF_inBreakCmdOn:=true,
        str_Op := IM.nu2);
  inits := inits + BOOL_TO_UINT(stOp_Ini.Init);


                                                          (* Стартовая инициализация singleSignal *)

  (* dP_maslo_gaz_menshe_100_kPa *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.dP_maslo_gaz_menshe_100_kPa);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* dP_gaza_kr_1 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.dP_gaza_kr_1);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* otklon_masla_v_akkym_yplot *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.otklon_masla_v_akkym_yplot);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Potok_masla_posle_ABO_bolshe_85_L_min *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Potok_masla_posle_ABO_bolshe_85_L_min);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Razreshenie_zagryzki *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Razreshenie_zagryzki);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Gotovnosst_vozb *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Gotovnosst_vozb);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Otkl_osn_regylyatora_neisprav *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Otkl_osn_regylyatora_neisprav);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* ostanov_po_zashitam_vozb_avar *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.ostanov_po_zashitam_vozb_avar);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* NKY_vvod_1 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NKY_vvod_1);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* NKY_vvod_2 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NKY_vvod_2);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Neisprav_cepei_ypr_AVR_pit_vozb *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neisprav_cepei_ypr_AVR_pit_vozb);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* SHAVR_1_v_rab *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.SHAVR_1_v_rab);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* SHAVR_2_v_rab *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.SHAVR_2_v_rab);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Avar_otkl_viklychatelya *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Avar_otkl_viklychatelya);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Asinhron_xod_peregryz *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Asinhron_xod_peregryz);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* AO_KC_ot_SHKC_04M *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.AO_KC_ot_SHKC_04M);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* AO_EGPA_ot_PRY *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.AO_EGPA_ot_PRY);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* EAO_EGPA_ot_PRY *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.EAO_EGPA_ot_PRY);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Nalichie_220_perem_vhod_v_SHY *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_220_perem_vhod_v_SHY);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Nalichie_220_post_vhod_v_SHY *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_220_post_vhod_v_SHY);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Nalichie_220_post_na_shinah_ypr_ZRY *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Nalichie_220_post_na_shinah_ypr_ZRY);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* BEAO_vkl *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.BEAO_vkl);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Net_10_kVt_UcmA_UcmC *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Net_10_kVt_UcmA_UcmC);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Net_10_kVt_UcmA_UcmB *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Net_10_kVt_UcmA_UcmB);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Srabotka_BREO *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Srabotka_BREO);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Sbros_srabotki_BREO *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Sbros_srabotki_BREO);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* NO_GPA_na_SHY *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.NO_GPA_na_SHY);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* AO_GPA_na_SHY *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.AO_GPA_na_SHY);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* EAO_GPA_na_SHY *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.EAO_GPA_na_SHY);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Dver_shkafa_otkrita *)
  stSs_Ini(data_Ini := true, inverse:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Dver_shkafa_otkrita);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Neisprav_BP_1 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neisprav_BP_1);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Neisprav_BP_2 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neisprav_BP_2);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Neisprav_BP_3 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neisprav_BP_3);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Neisprav_BP_4 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neisprav_BP_4);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Neisprav_BP_5 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neisprav_BP_5);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Neisprav_BP_6 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neisprav_BP_6);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Neisprav_BP_7 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neisprav_BP_7);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Neisprav_BP_8 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neisprav_BP_8);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Neisprav_BP_9 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neisprav_BP_9);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

  (* Neisprav_BP_10 *)
  stSs_Ini(data_Ini := true, inverse:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SS := IM.SingleSignals.Neisprav_BP_10);   
  inits := inits + BOOL_TO_UINT(stSs_Ini.Init);

                                      (* Стартовая инициализация singleOutput *)

  (* Rabota_EGPA *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SO := IM.SingleOutputs.Rabota_EGPA);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Neisparav_EGPA *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=TRUE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SO := IM.SingleOutputs.Neisparav_EGPA);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Avar_EGPA *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SO := IM.SingleOutputs.Avar_EGPA);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Indickaciya_PC_fonar *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SO := IM.SingleOutputs.Indickaciya_PC_fonar);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);

  (* Indickaciya_AC_fonar *)
  stSo_Ini(data_Ini := true, inOpcCommandsDisabled:=FALSE, (*DelayOn:=T#0S, DelayOff:=T#0S,*) str_SO := IM.SingleOutputs.Indickaciya_AC_fonar);   
  inits := inits + BOOL_TO_UINT(stSo_Ini.Init);



  initiales := 0;
  IF init THEN initiales := inits; END_IF;
END_FUNCTION_BLOCK

FUNCTION_BLOCK NOAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
  END_VAR
  VAR
    sbrosVibeg : struct_Question;
    fb_sbrosVibeg : fb_Question;
    pusk_v : fb_AlgoritmsManager;
    timer120 : struct_PhaseAlgoritm;
    runUnsuccessful : struct_PhaseAlgoritm;
    kran6Open : struct_PhaseAlgoritm;
    kran3bOpen : struct_PhaseAlgoritm;
    MBOff : struct_PhaseAlgoritm;
    kran1Close : struct_PhaseAlgoritm;
    kran2Close : struct_PhaseAlgoritm;
    kran3Close : struct_PhaseAlgoritm;
    kran4Close : struct_PhaseAlgoritm;
    kran5Open : struct_PhaseAlgoritm;
    error_Krans : struct_PhaseAlgoritm;
    autoPnsOff : struct_PhaseAlgoritm;
    pnsOn : struct_PhaseAlgoritm;
    Pg_VhodLessThen300 : struct_PhaseAlgoritm;
    Pg_VyhodLessThen300 : struct_PhaseAlgoritm;
    nu1Off : struct_PhaseAlgoritm;
    nu2Off : struct_PhaseAlgoritm;
    autoNuOff : struct_PhaseAlgoritm;
    timer600 : struct_PhaseAlgoritm;
    Avom1Off : struct_PhaseAlgoritm;
    Avom2Off : struct_PhaseAlgoritm;
    Avom3Off : struct_PhaseAlgoritm;
    Avom4Off : struct_PhaseAlgoritm;
    autoAVOMOff : struct_PhaseAlgoritm;
    timer5 : struct_PhaseAlgoritm;
    fb_timer120 : fb_ph_Timer;
    fb_kran6Open : fb_ph_Kran;
    fb_kran4Close : fb_ph_Kran;
    fb_kran3bOpen : fb_ph_Kran;
    fb_MBOff : fb_ph_SectionSwitch;
    fb_kran1Close : fb_ph_Kran;
    fb_kran2Close : fb_ph_Kran;
    fb_kran3Close : fb_ph_Kran;
    fb_kran5Open : fb_ph_Kran;
    fb_error_Krans : fb_ph_CustomPhase;
    fb_runUnsuccessful : fb_ph_CustomPhase;
    fb_autoPnsOff : fb_ph_algoritm;
    fb_pnsOn : fb_ph_Switch;
    fb_Pg_VhodLessThen300 : fb_ph_CustomPhase;
    fb_Pg_VyhodLessThen300 : fb_ph_CustomPhase;
    fb_nu1Off : fb_ph_OilPump;
    fb_nu2Off : fb_ph_OilPump;
    fb_autoNuOff : fb_ph_Switch;
    fb_timer600 : fb_ph_Timer;
    fb_Avom1Off : fb_ph_Switch;
    fb_Avom2Off : fb_ph_Switch;
    fb_Avom3Off : fb_ph_Switch;
    fb_Avom4Off : fb_ph_Switch;
    fb_autoAVOMOff : fb_ph_algoritm;
    fb_timer5 : fb_ph_Timer;
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
    onInit : BOOL;
    waitReset : TON;
  END_VAR
  VAR_EXTERNAL
    IM : ImConfig;
    algoritms : AlgoritmsConfig;
    ai : AiConfig;
    protections : ProtectionsConfig;
    ModeGpa : TYPE_ModeGpa;
    algmanager : struct_AlgoritmsManager;
    AlgTimers : struct_AlgTimers;
  END_VAR
  VAR CONSTANT
    Ust_Pgaza : LREAL      := 0.3;
  END_VAR

  IF NOT onInit THEN

         fb_timer120(phaseNumber:=1);
              fb_kran6Open(phaseNumber:=2, act:=_off);
              fb_kran4Close(phaseNumber:=3, act:=_on);
         fb_kran3bOpen(phaseNumber:=4, act:=_on);
         fb_MBOff(phaseNumber:=5, act:=_off);
         fb_kran1Close(phaseNumber:=6, act:=_off);
          fb_kran2Close(phaseNumber:=7, act:=_on);
          fb_kran3Close(phaseNumber:=8, act:=_off);
         fb_kran5Open(phaseNumber:=9, act:=_off);
      fb_error_Krans(phaseNumber:=10);
        fb_pnsOn(phaseNumber:=11, act:=_on);
        fb_Pg_VhodLessThen300(phaseNumber:=12);
        fb_Pg_VyhodLessThen300(phaseNumber:=13);
             fb_nu1Off(phaseNumber:=14, act:=_off);
             fb_nu2Off(phaseNumber:=15, act:=_off);
             fb_autoNuOff(phaseNumber:=16, act:=_off);
      fb_timer600(phaseNumber:=17, delay:=T#240S);           
         fb_Avom1Off(phaseNumber:=18, act:=_off);
         fb_Avom2Off(phaseNumber:=19, act:=_off);
         fb_Avom3Off(phaseNumber:=20, act:=_off);
         fb_Avom4Off(phaseNumber:=21, act:=_off);
         fb_autoAVOMOff(phaseNumber:=22, act:=_reset);
         fb_timer5(phaseNumber:=23);
         fb_runUnsuccessful(phaseNumber:=24);
         fb_sbrosVibeg(phaseNumber:=25);
         (*fb_klapan1(phaseNumber:=24, act:=_run, waitCompletion:=TRUE);
    fb_klapan2(phaseNumber:=25);*)




  onInit:=TRUE;
  END_IF;

         fb_timer120(StrPh:=timer120);
  fb_kran6Open(StrPh:=kran6Open, Im:=Im.kran6);
  fb_kran4Close(StrPh:=kran4Close, Im:=Im.kran4);
  fb_kran3bOpen(StrPh:=kran3bOpen, Im:=Im.kran3b);
  fb_MBOff(StrPh:=MBOff, Im:=Im.MB);
  fb_kran1Close(StrPh:=kran1Close, Im:=Im.kran1);
  fb_kran2Close(StrPh:=kran2Close, Im:=Im.kran2);
  fb_kran3Close(StrPh:=kran3Close, Im:=Im.kran3);
  fb_kran5Open(StrPh:=kran5Open, Im:=Im.kran5);
  fb_error_Krans(StrPh:=error_Krans);
  fb_pnsOn(StrPh:=pnsOn, Im:=Im.pns);
  fb_Pg_VhodLessThen300(StrPh:=Pg_VhodLessThen300);
  fb_Pg_VyhodLessThen300(StrPh:=Pg_VyhodLessThen300);
  fb_nu1Off(StrPh:=nu1Off, Im:=Im.nu1);
  fb_nu2Off(StrPh:=nu2Off, Im:=Im.nu2);
  fb_autoNuOff(StrPh:=autoNuOff);
  fb_timer600(StrPh:=timer600);
  fb_Avom1Off(StrPh:=Avom1Off, Im:=Im.v1_Avom);
  fb_Avom2Off(StrPh:=Avom2Off, Im:=Im.v2_Avom);
  fb_Avom3Off(StrPh:=Avom3Off, Im:=Im.v3_Avom);
  fb_Avom4Off(StrPh:=Avom4Off, Im:=Im.v4_Avom);
  fb_autoAVOMOff(StrPh:=autoAVOMOff);
  fb_timer5(StrPh:=timer5);
  fb_runUnsuccessful(StrPh:=runUnsuccessful);
  fb_sbrosVibeg(strQ:=sbrosVibeg);
  (*fb_klapan1(StrPh:=klapan1, Im:=Im.klapan1);
  fb_klapan2(StrPh:=klapan2, Im:=Im.klapan2);*)


  StrAlg.CanRun := StrAlg.inCanRun;
  StrAlg.OpcCommandsDisabled := StrAlg.inOpcCommandsDisabled;

  IF StrAlg.isRuning THEN

       StrAlg.hasError := kran4Close.error OR MBOff.error OR pnsOn.error OR kran3bOpen.error
      OR kran1Close.error OR kran2Close.error OR kran5Open.error OR kran6Open.error OR runUnsuccessful.error;

      sbrosVibeg.AnswerVariants:=_Answers.ANS_YES;

      IF timer120.top AND NOT kran6Open.top THEN
         runUnsuccessful.error:=TRUE; 
      END_IF;
      IF kran6Open.top THEN	
          runPhase(kran3bOpen);
      END_IF;
      IF kran3bOpen.top THEN	
          runPhase(MBOff);
      END_IF;
      IF MBOff.top THEN	
          runPhase(pnsOn);
          runPhase(autoPnsOff);
          runPhase(kran1Close);
          runPhase(kran2Close);
          runPhase(kran3Close);  
      END_IF;
      IF kran1Close.top AND kran2Close.top AND kran3Close.top AND kran4Close.top THEN
          runPhase(kran5Open);
      END_IF;    
      IF kran5Open.top AND pnsOn.top (*AND pr na vih <300 AND pr na vh < 300*) THEN
          runPhase(nu1Off);
          runPhase(nu2Off);
      END_IF;    
      IF nu1Off.top AND nu2Off.top AND NOT algmanager.puskV THEN
          askQuestion(sbrosVibeg);
          runPhase(timer600);
          runPhase(Avom1Off);
          runPhase(Avom2Off);
          runPhase(Avom3Off);
          runPhase(Avom4Off);
          runPhase(autoAVOMOff);
      END_IF;
      IF nu1Off.top AND nu2Off.top AND algmanager.puskV=TRUE THEN
          askQuestion(sbrosVibeg);
          runPhase(Avom1Off);
          runPhase(Avom2Off);
          runPhase(Avom3Off);
          runPhase(Avom4Off);
          runPhase(autoAVOMOff);
      END_IF;
      IF NOT pnsOn.top AND Avom1Off.top AND Avom2Off.top AND Avom3Off.top AND Avom4Off.top AND autoAVOMOff.top THEN
          runPhase(timer5);
      END_IF;
      StrAlg.isEnded:= Avom1Off.top AND Avom2Off.top AND Avom3Off.top AND Avom4Off.top AND NOT pnsOn.top AND autoAVOMOff.top;

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

                                                    algManager.nMode:=ModeGpa.MODE_NO;


                                                    runPhase(kran6Open);
                                                    runPhase(kran4Close);         
                                                    runPhase(timer120);
                                                    runPhase(runUnsuccessful);


                                                    resetAiProtection(protections.Vibroskorost_OP_ED_t1_HA);
                                                    resetAiProtection(protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA);
                                                    resetAiProtection(protections.Vibroskorost_OYP_kolesa_ED_t3_HA);
                                                    resetAiProtection(protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA);
                                                    resetDiProtection(protections.Kran1sdvig);
                                                    resetDiProtection(protections.Kran2sdvig);

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
                                          resetIfRunning(algoritms.vibegPNS);

  resetPhase(timer120);
  resetPhase(kran6Open);
  resetPhase(kran4Close);
  resetPhase(kran3bOpen);
  resetPhase(MBOff);
  resetPhase(kran1Close);
  resetPhase(kran2Close);
  resetPhase(kran3Close);
  resetPhase(kran5Open);
  resetPhase(error_Krans);
  resetPhase(pnsOn);
  resetPhase(Pg_VhodLessThen300);
  resetPhase(Pg_VyhodLessThen300);
  resetPhase(nu1Off);
  resetPhase(nu2Off);
  resetPhase(autoNuOff);
  resetPhase(timer600);
  resetPhase(Avom1Off);
  resetPhase(Avom2Off);
  resetPhase(Avom3Off);
  resetPhase(Avom4Off);
  resetPhase(autoAVOMOff);
  resetPhase(timer5);
  resetPhase(runUnsuccessful);
  resetQuestion(sbrosVibeg);
  (*resetPhase(klapan1);
  resetPhase(klapan2);*)


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
  OR kran4Close.startStatus
  OR kran3bOpen.startStatus
  OR MBOff.startStatus
  OR kran1Close.startStatus
  OR kran2Close.startStatus
  OR kran3Close.startStatus
  OR kran5Open.startStatus
  OR error_Krans.startStatus
  OR pnsOn.startStatus
  OR Pg_VhodLessThen300.startStatus
  OR Pg_VyhodLessThen300.startStatus
  OR nu1Off.startStatus
  OR nu2Off.startStatus
  OR autoNuOff.startStatus
  OR timer600.startStatus
  OR Avom1Off.startStatus
  OR Avom2Off.startStatus
  OR Avom3Off.startStatus
  OR Avom4Off.startStatus
  OR autoAVOMOff.startStatus
  OR timer5.startStatus
  OR runUnsuccessful.startStatus;
  (*OR klapan1.startStatus
  OR klapan2.startStatus;*)



  StrAlg.Error:= timer120.errorStatus
  OR kran6Open.errorStatus
  OR kran4Close.errorStatus
  OR kran3bOpen.errorStatus
  OR MBOff.errorStatus
  OR kran1Close.errorStatus
  OR kran2Close.errorStatus
  OR kran3Close.errorStatus
  OR kran5Open.errorStatus
  OR error_Krans.errorStatus
  OR pnsOn.errorStatus
  OR Pg_VhodLessThen300.errorStatus
  OR Pg_VyhodLessThen300.errorStatus
  OR nu1Off.errorStatus
  OR nu2Off.errorStatus
  OR autoNuOff.errorStatus
  OR timer600.errorStatus
  OR Avom1Off.errorStatus
  OR Avom2Off.errorStatus
  OR Avom3Off.errorStatus
  OR Avom4Off.errorStatus
  OR autoAVOMOff.errorStatus
  OR timer5.errorStatus
  OR runUnsuccessful.errorStatus;
  (*OR klapan1.errorStatus
  OR klapan2.errorStatus;*)



  StrAlg.Top:=   timer120.topStatus
  OR kran6Open.topStatus
  OR kran4Close.topStatus
  OR kran3bOpen.topStatus
  OR MBOff.topStatus
  OR kran1Close.topStatus
  OR kran2Close.topStatus
  OR kran3Close.topStatus
  OR kran5Open.topStatus
  OR error_Krans.topStatus
  OR pnsOn.topStatus
  OR Pg_VhodLessThen300.topStatus
  OR Pg_VyhodLessThen300.topStatus
  OR nu1Off.topStatus
  OR nu2Off.topStatus
  OR autoNuOff.topStatus
  OR timer600.topStatus
  OR Avom1Off.topStatus
  OR Avom2Off.topStatus
  OR Avom3Off.topStatus
  OR Avom4Off.topStatus
  OR autoAVOMOff.topStatus
  OR timer5.topStatus
  OR runUnsuccessful.topStatus;
  (*OR klapan1.topStatus
  OR klapan2.topStatus;*)


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

FUNCTION_BLOCK ppuAlg
  VAR_IN_OUT
    StrAlg : struct_Alg;
    StrPermis : ppu_permissions;
  END_VAR
  VAR
    Level_masla_Norm : struct_PhaseAlgoritm;
    T_masla_Norm : struct_PhaseAlgoritm;
    Krans_ready_to_move : struct_PhaseAlgoritm;
    Krans_Poloj : struct_PhaseAlgoritm;
    Net_AO_KC_SHKS04M : struct_PhaseAlgoritm;
    EGPA_Stop : struct_PhaseAlgoritm;
    Naprajenie_ZRU : struct_PhaseAlgoritm;
    All_IM_Off : struct_PhaseAlgoritm;
    Nalichie_PitanieSHU : struct_PhaseAlgoritm;
    CU_IM_Norm : struct_PhaseAlgoritm;
    MV_Poloj_RolledON : struct_PhaseAlgoritm;
    MV_Poloj_RolledOFF : struct_PhaseAlgoritm;
    NOTAnalogNS : struct_PhaseAlgoritm;
    Net_ASPS_Analogs : struct_PhaseAlgoritm;
    Remont_Not : struct_PhaseAlgoritm;
    not_AS : struct_PhaseAlgoritm;
    Gotov_Vozb : struct_PhaseAlgoritm;
    dP_kr1 : struct_PhaseAlgoritm;
    Auto_Rej : struct_PhaseAlgoritm;
    CK_IM_norm : struct_PhaseAlgoritm;
    Impuls_Gaz : struct_PhaseAlgoritm;
    Est_rezerv_NU : struct_PhaseAlgoritm;
    fb_Level_masla_Norm : fb_ph_CustomPhase;
    fb_T_masla_Norm : fb_ph_CustomPhase;
    fb_Krans_ready_to_move : fb_ph_CustomPhase;
    fb_Not_AS_PS : fb_ph_CustomPhase;
    fb_Not_AO_NO_EAO : fb_ph_CustomPhase;
    fb_Krans_Poloj : fb_ph_CustomPhase;
    fb_Net_AO_KC_SHKS04M : fb_ph_CustomPhase;
    fb_EGPA_Stop : fb_ph_CustomPhase;
    fb_Naprajenie_ZRU : fb_ph_CustomPhase;
    fb_All_IM_Off : fb_ph_CustomPhase;
    fb_Nalichie_PitanieSHU : fb_ph_CustomPhase;
    fb_CU_IM_Norm : fb_ph_CustomPhase;
    fb_MV_Poloj_RolledON : fb_ph_CustomPhase;
    fb_MV_Poloj_RolledOFF : fb_ph_CustomPhase;
    fb_NOTAnalogNS : fb_ph_CustomPhase;
    fb_Net_ASPS_Analogs : fb_ph_CustomPhase;
    fb_Remont_Not : fb_ph_CustomPhase;
    fb_not_AS : fb_ph_CustomPhase;
    fb_Gotov_Vozb : fb_ph_CustomPhase;
    fb_dP_kr1 : fb_ph_CustomPhase;
    fb_Auto_Rej : fb_ph_CustomPhase;
    fb_CK_IM_norm : fb_ph_CustomPhase;
    fb_Impuls_Gaz : fb_ph_CustomPhase;
    fb_Est_rezerv_NU : fb_ph_CustomPhase;
    _sunpackerCommand : fb_sunpackerCommand;
    _statusAi : TYPE_StatusAi;
    _statusDualInput : TYPE_statusDualInput;
    _DualStateImAction : TYPE_DualStateImAction;
    _PhaseAlgoritmAction : TYPE_PhaseAlgoritmAction;
    _basketStats : TYPE_basketStats;
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
    algoritms : AlgoritmsConfig;
    modegpa : TYPE_ModeGpa;
  END_VAR

  IF NOT onInit THEN
            fb_Level_masla_Norm(phaseNumber:=0);
                fb_T_masla_Norm(phaseNumber:=1);
         fb_Krans_ready_to_move(phaseNumber:=2);
                 fb_Krans_Poloj(phaseNumber:=3);
           fb_Net_AO_KC_SHKS04M(phaseNumber:=4);
                   fb_EGPA_Stop(phaseNumber:=5);
              fb_Naprajenie_ZRU(phaseNumber:=6);
                  fb_All_IM_Off(phaseNumber:=7);
         fb_Nalichie_PitanieSHU(phaseNumber:=8);
                  fb_CU_IM_Norm(phaseNumber:=9);
           fb_MV_Poloj_RolledON(phaseNumber:=10);
          fb_MV_Poloj_RolledOFF(phaseNumber:=11);
                 fb_NOTAnalogNS(phaseNumber:=12);
            fb_Net_ASPS_Analogs(phaseNumber:=13);
                  fb_Remont_Not(phaseNumber:=14);
                      fb_not_AS(phaseNumber:=15);
                  fb_Gotov_Vozb(phaseNumber:=16);
                      fb_dP_kr1(phaseNumber:=17);
                    fb_Auto_Rej(phaseNumber:=18);
                  fb_CK_IM_norm(phaseNumber:=19);
                  fb_Impuls_Gaz(phaseNumber:=20); 
               fb_Est_rezerv_NU(phaseNumber:=21); 

  onInit:=TRUE;
  END_IF;

            fb_Level_masla_Norm(StrPh:=Level_masla_Norm);
                fb_T_masla_Norm(StrPh:=T_masla_Norm);
         fb_Krans_ready_to_move(StrPh:=Krans_ready_to_move);
                 fb_Krans_Poloj(StrPh:=Krans_Poloj);
           fb_Net_AO_KC_SHKS04M(StrPh:=Net_AO_KC_SHKS04M);
                   fb_EGPA_Stop(StrPh:=EGPA_Stop);
              fb_Naprajenie_ZRU(StrPh:=Naprajenie_ZRU);
                  fb_All_IM_Off(StrPh:=All_IM_Off);
         fb_Nalichie_PitanieSHU(StrPh:=Nalichie_PitanieSHU);
                  fb_CU_IM_Norm(StrPh:=CU_IM_Norm);
           fb_MV_Poloj_RolledON(StrPh:=MV_Poloj_RolledON);
          fb_MV_Poloj_RolledOFF(StrPh:=MV_Poloj_RolledOFF);
                 fb_NOTAnalogNS(StrPh:=NOTAnalogNS);
            fb_Net_ASPS_Analogs(StrPh:=Net_ASPS_Analogs);
                  fb_Remont_Not(StrPh:=Remont_Not);
                      fb_not_AS(StrPh:=not_AS);
                  fb_Gotov_Vozb(StrPh:=Gotov_Vozb);
                      fb_dP_kr1(StrPh:=dP_kr1);
                    fb_Auto_Rej(StrPh:=Auto_Rej);
                  fb_CK_IM_norm(StrPh:=CK_IM_norm);
                  fb_Impuls_Gaz(StrPh:=Impuls_Gaz);
               fb_Est_rezerv_NU(StrPh:=Est_rezerv_NU); 

  IF StrAlg.isRuning THEN

  (*Нет неисправных аналогов*)    
  NOTAnalogNS.top:= NOT analogsNS();

  (*уровень масла в норме*)    
  Level_masla_Norm.top:= (ai.Yroven_masla_v_maslobake.interval = _statusAi.normal);

  (*температура масла в норме*)
  T_masla_Norm.top:=(ai.T_masla_v_maslobake.interval=_statusAi.normal);

  (*Краны готовы к управлению*)
  Krans_ready_to_move.top:= 	NOT (im.kran1.so OR im.kran1.sz OR
                                     im.kran2.so OR im.kran2.sz OR
                                     im.kran3.so OR im.kran3.sz OR
                                     im.kran3b.so OR im.kran3b.sz OR
                                     im.kran4.so OR im.kran4.sz OR
  			     im.kran5.so OR im.kran5.sz OR
                                     im.kran6.so OR im.kran6.sz);

  (* Режим ЭГПА остановлен *)
  EGPA_Stop.top:=	(algmanager.mode = modegpa.MODE_STOP);	

  (*Нет АС ПС по Аналогам*)
  Net_ASPS_Analogs.top:= NOT (algManager.analogsPS OR algManager.ProtectionSignaling);


  (*Есть напряжение в ЗРУ*)			
  Nalichie_PitanieSHU.top:=	im.SingleSignals.Neisprav_BP_1.Q AND
                                im.singleSignals.Neisprav_BP_2.Q AND
                                im.singleSignals.Neisprav_BP_3.Q AND
                                im.singleSignals.Neisprav_BP_4.Q AND
                                im.singleSignals.Neisprav_BP_5.Q AND
                                im.singleSignals.Neisprav_BP_6.Q AND
                                im.singleSignals.Neisprav_BP_7.Q AND 
  			im.singleSignals.Neisprav_BP_8.Q AND
                                im.singleSignals.Neisprav_BP_9.Q AND
                                im.singleSignals.Neisprav_BP_10.Q AND
                                im.singleSignals.Nalichie_220_perem_vhod_v_SHY.Q AND
                                im.singleSignals.Nalichie_220_post_vhod_v_SHY.Q AND 
  			im.singleSignals.BEAO_vkl.Q;

  (*Есть напряжение в ЗРУ*)
  Naprajenie_ZRU.top:= im.singleSignals.Nalichie_220_post_na_shinah_ypr_ZRY.Q;

  (*Наличие ЦУ ИМ*)
  CU_IM_Norm.top:= NOT nsCepeiUpravlenya(im);

  (*ИМ отключены*)	
  All_IM_Off.top:=(im.MB.onStatus=_statusDualInput.STATUS_OFF) AND
                  (im.pns.onStatus=_statusDualInput.STATUS_OFF) AND
                  (im.nu1.onStatus=_statusDualInput.STATUS_OFF) AND 
  	      (im.nu2.onStatus=_statusDualInput.STATUS_OFF) AND
                  (im.v1_Avom.onStatus=_statusDualInput.STATUS_OFF) AND
                  (im.v2_Avom.onStatus=_statusDualInput.STATUS_OFF) AND
                  (im.v3_Avom.onStatus=_statusDualInput.STATUS_OFF) AND 
                  (im.v4_Avom.onStatus=_statusDualInput.STATUS_OFF) AND 
                  (im.CMN_pump.onStatus=_statusDualInput.STATUS_OFF) AND
  	      (im.Ten_MB.onStatus=_statusDualInput.STATUS_OFF) AND
                  (im.Ten_kollect.onStatus=_statusDualInput.STATUS_OFF) AND
                  (im.Kalorifer_ABO.onStatus=_statusDualInput.STATUS_OFF); 	

  (*Нет АО от ШКС*)
  Net_AO_KC_SHKS04M.top:= NOT Im.singleSignals.AO_KC_ot_SHKC_04M.Q AND Im.singleSignals.AO_KC_ot_SHKC_04M.reliability;

  (*Наличие автоматического режима насосов*)
  Auto_Rej.top:= im.nu1.Auto AND im.nu2.Auto AND im.pns.Auto;

  Krans_Poloj.top:=		(Im.kran1.onStatus=_statusDualInput.STATUS_OFF) AND
  			(Im.kran2.onStatus=_statusDualInput.STATUS_OFF) AND
  			(Im.kran3.onStatus=_statusDualInput.STATUS_OFF) AND
  			(Im.kran3b.onStatus=_statusDualInput.STATUS_ON) AND
  			(Im.kran4.onStatus=_statusDualInput.STATUS_OFF) AND
  			(Im.kran5.onStatus=_statusDualInput.STATUS_ON) AND 
  			(Im.kran6.onStatus=_statusDualInput.STATUS_ON); 

  (*Тележка МВ вкачена*)
  MV_Poloj_RolledON.top:= im.MB.basketStatus = _basketStats.BASKET_ROLLEDIN;

  (*Тележка МВ выкачена*)
  MV_Poloj_RolledOFF.top:= im.MB.basketStatus = _basketStats.BASKET_ROLLEDOUT;

  (*Готовность возбудителя*)
  Gotov_Vozb.top:= im.singleSignals.Gotovnosst_vozb.Q;     

  (*Нет сигнала перепада на кране 1*)
  dP_kr1.top:= ((im.singleSignals.dP_gaza_kr_1.Q) AND (im.singleSignals.dP_gaza_kr_1.reliability));

  (*Давление импульсного газа в норме*)
  Impuls_Gaz.top:=(ai.Davlenie_impylsnogo_gaza.interval=_statusAi.normal);

  (*Нет защит в ремонте*)	
  Remont_Not.top:=not protectManager.protectionInRemont;

  CK_IM_norm.top:= not nsCepeiControl(IM);

  not_AS.top:=NOT (algManager.DiscretPS OR algManager.analogsPS OR algManager.ProtectionSignaling);

  Est_rezerv_NU.top:= NOT NotHasRezervNU; 

  (*ППУ для первого этапа пуска*)
  StrPermis.ppuFirst_for_Pusk:= NOTAnalogNS.top AND
  			Level_masla_Norm.top AND
  			T_masla_Norm.top AND
  			Krans_ready_to_move.top AND
  			EGPA_Stop.top AND
  			Net_ASPS_Analogs.top AND
  			Nalichie_PitanieSHU.top AND
  			Naprajenie_ZRU.top AND
  			CU_IM_Norm.top AND 
  			All_IM_Off.top AND
  			Net_AO_KC_SHKS04M.top AND
  			Auto_Rej.top AND
  			Krans_Poloj.top AND
  			MV_Poloj_RolledON.top AND
  			Gotov_Vozb.top AND
  			dP_kr1.top AND
  			Impuls_Gaz.top AND
                                Remont_Not.top AND
                                CK_IM_norm.top AND
                                not_AS.top;

  (*ППУ для проверки двигателя*)                              
  StrPermis.ppuFirst_for_V:= 
  			NOTAnalogNS.top AND
  			Level_masla_Norm.top AND
  			T_masla_Norm.top AND
  			EGPA_Stop.top AND
  			Net_ASPS_Analogs.top AND
  			Nalichie_PitanieSHU.top AND
  			Naprajenie_ZRU.top AND
  			CU_IM_Norm.top AND 
  			All_IM_Off.top AND
  			Net_AO_KC_SHKS04M.top AND
  			Auto_Rej.top AND
  			MV_Poloj_RolledON.top AND
  			Gotov_Vozb.top AND
                                Remont_Not.top AND
                                CK_IM_norm.top AND
                                not_AS.top;

  (*ППУ для проверки масла смазки и масло газ*)                              
  StrPermis.ppuFirst_for_Pms_dPmg:= 
  			NOTAnalogNS.top AND
  			Level_masla_Norm.top AND
  			T_masla_Norm.top AND
  			EGPA_Stop.top AND
  			Net_ASPS_Analogs.top AND
  			Nalichie_PitanieSHU.top AND
  			CU_IM_Norm.top AND 
  			All_IM_Off.top AND
  			Net_AO_KC_SHKS04M.top AND
  			Auto_Rej.top AND
  			MV_Poloj_RolledOFF.top AND
                                Remont_Not.top AND
                                CK_IM_norm.top AND
                                not_AS.top;

  (*ППУ проверки кранов*)			
  StrPermis.ppuFirst_for_K:= 
  			NOTAnalogNS.top AND
  			Level_masla_Norm.top AND
  			T_masla_Norm.top AND
  			Krans_ready_to_move.top AND
  			EGPA_Stop.top AND
  			Net_ASPS_Analogs.top AND
  			Nalichie_PitanieSHU.top AND
  			Naprajenie_ZRU.top AND
  			CU_IM_Norm.top AND 
  			All_IM_Off.top AND
  			Net_AO_KC_SHKS04M.top AND
  			Auto_Rej.top AND
  			Krans_Poloj.top AND
  			MV_Poloj_RolledOFF.top AND
  			dP_kr1.top AND
  			Impuls_Gaz.top AND
                                Remont_Not.top AND
                                CK_IM_norm.top AND
                                not_AS.top;	

  (*ППУ имитация пуска*)			
  StrPermis.ppuFirst_for_I:= 
  			NOTAnalogNS.top AND
  			Level_masla_Norm.top AND
  			T_masla_Norm.top AND
  			Krans_ready_to_move.top AND
  			EGPA_Stop.top AND
  			Net_ASPS_Analogs.top AND
  			Nalichie_PitanieSHU.top AND
  			Naprajenie_ZRU.top AND
  			CU_IM_Norm.top AND 
  			All_IM_Off.top AND
  			Net_AO_KC_SHKS04M.top AND
  			Auto_Rej.top AND
  			Krans_Poloj.top AND
  			MV_Poloj_RolledOn.top AND
  			dP_kr1.top AND
  			Impuls_Gaz.top AND
                                Gotov_Vozb.top AND
                                Remont_Not.top AND
                                CK_IM_norm.top AND
                                not_AS.top;

  (*ППУ для второго этапа пуска в режиме "ПУск" и "Режим В"*)
  StrPermis.ppuSecond_V_Pusk:=	

  			Level_masla_Norm.top AND
  			T_masla_Norm.top AND
  			Nalichie_PitanieSHU.top AND
  			Naprajenie_ZRU.top AND
  			Net_AO_KC_SHKS04M.top AND
  			Auto_Rej.top AND
  			MV_Poloj_RolledON.top AND
  			Gotov_Vozb.top AND
                                Remont_Not.top AND
                                CK_IM_norm.top AND not_AS.top
                                AND (algmanager.mode=modegpa.MODE_APUSK)
                                 OR (algmanager.mode=modegpa.MODE_MPUSK)
                                 OR (algmanager.mode=modegpa.MODE_PUSKV);

  (*ППУ для второго этапа пуска в режиме "имитация пуска"*)
  StrPermis.ppuSecond_I:=	
  			Level_masla_Norm.top AND
  			T_masla_Norm.top AND
  			Nalichie_PitanieSHU.top AND
  			Naprajenie_ZRU.top AND
  			Net_AO_KC_SHKS04M.top AND
  			Auto_Rej.top AND
  			MV_Poloj_RolledOn.top AND
                                Gotov_Vozb.top AND
                                Remont_Not.top AND
                                CK_IM_norm.top AND
                                not_AS.top AND
                                (algmanager.mode=modegpa.MODE_I);

  (*ППУ для третьего этапа пуска*)			
  StrPermis.ppuThird:=	
  			Level_masla_Norm.top AND
  			T_masla_Norm.top AND
  			Krans_ready_to_move.top AND
  			Nalichie_PitanieSHU.top AND
  			Naprajenie_ZRU.top AND
  			Net_AO_KC_SHKS04M.top AND
  			Auto_Rej.top AND
  			Krans_Poloj.top AND
  			dP_kr1.top AND
  			Impuls_Gaz.top AND
                                Remont_Not.top AND
                                CK_IM_norm.top AND
                                not_AS.top AND((algmanager.mode=modegpa.MODE_APUSK)
                                            OR (algmanager.mode=modegpa.MODE_MPUSK)
                                            OR (algmanager.mode=modegpa.MODE_I)
                                            OR (algmanager.mode=modegpa.MODE_PUSKK));

  (*ППУ для четвертого этапа пуска*)			
  StrPermis.ppuForth:=	
  			(NOT (im.kran6.so)) AND (NOT (im.kran6.sz)) AND (NOT (im.kran4.so)) AND (NOT (im.kran4.sz)) AND
  			(Im.kran6.onStatus= _statusDualInput.STATUS_ON) AND 
  			Net_AO_KC_SHKS04M.top AND  Remont_Not.top AND not_AS.top AND
  			(Im.kran1.onStatus= _statusDualInput.STATUS_On) AND
  			(Im.kran2.onStatus= _statusDualInput.STATUS_On) AND
  			(Im.kran4.onStatus= _statusDualInput.STATUS_ON) AND 
  			Impuls_Gaz.top AND ((algmanager.mode=modegpa.MODE_APUSK)
                                                 OR (algmanager.mode=modegpa.MODE_MPUSK)
                                                 OR (algmanager.mode=modegpa.MODE_I)
                                                 OR (algmanager.mode=modegpa.MODE_PUSKK));

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

                                                  resetPhase(Level_masla_Norm);
                                                  resetPhase(T_masla_Norm);
                                                  resetPhase(Krans_ready_to_move);
                                                  resetPhase(Krans_Poloj);
                                                  resetPhase(Net_AO_KC_SHKS04M);
                                                  resetPhase(EGPA_Stop);
                                                  resetPhase(Naprajenie_ZRU);
                                                  resetPhase(All_IM_Off);
                                                  resetPhase(Nalichie_PitanieSHU);
                                                  resetPhase(CU_IM_Norm);
                                                  resetPhase(MV_Poloj_RolledON);
                                                  resetPhase(MV_Poloj_RolledOFF);
                                                  resetPhase(NOTAnalogNS);
                                                  resetPhase(Net_ASPS_Analogs);
                                                  resetPhase(Remont_Not);
                                                  resetPhase(not_AS);
                                                  resetPhase(Gotov_Vozb);
                                                  resetPhase(dP_kr1);
                                                  resetPhase(Auto_Rej);
                                                  resetPhase(CK_IM_norm);
                                                  resetPhase(Impuls_Gaz);
                                                  resetPhase(Est_rezerv_NU);

                                          StrPermis.ppuFirst_for_Pusk:= FALSE;
                                          StrPermis.ppuFirst_for_V:= FALSE;
                                          StrPermis.ppuFirst_for_Pms_dPmg:= FALSE;
                                          StrPermis.ppuFirst_for_K:= FALSE;
                                          StrPermis.ppuFirst_for_I:= FALSE;
                                          StrPermis.ppuSecond_V_Pusk:= FALSE;
                                          StrPermis.ppuSecond_I:= FALSE;
                                          StrPermis.ppuThird:= FALSE;
                                          StrPermis.ppuForth:= FALSE;

                                          StrAlg.inCanRun:=FALSE;


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

  StrAlg.Start:= Level_masla_Norm.startStatus
              OR T_masla_Norm.startStatus
              OR Krans_ready_to_move.startStatus
              OR Krans_Poloj.startStatus
              OR Net_AO_KC_SHKS04M.startStatus
              OR EGPA_Stop.startStatus
              OR Naprajenie_ZRU.startStatus
              OR All_IM_Off.startStatus
              OR Nalichie_PitanieSHU.startStatus
              OR CU_IM_Norm.startStatus
              OR MV_Poloj_RolledON.startStatus
              OR MV_Poloj_RolledOFF.startStatus
              OR NOTAnalogNS.startStatus
              OR Net_ASPS_Analogs.startStatus
              OR Remont_Not.startStatus
              OR not_AS.startStatus
              OR Gotov_Vozb.startStatus
              OR dP_kr1.startStatus
              OR Auto_Rej.startStatus
              OR CK_IM_norm.startStatus
              OR Impuls_Gaz.startStatus
              OR Est_rezerv_NU.startStatus;


  StrAlg.Error:= Level_masla_Norm.errorStatus
              OR T_masla_Norm.errorStatus
              OR Krans_ready_to_move.errorStatus
              OR Krans_Poloj.errorStatus
              OR Net_AO_KC_SHKS04M.errorStatus
              OR EGPA_Stop.errorStatus
              OR Naprajenie_ZRU.errorStatus
              OR All_IM_Off.errorStatus
              OR Nalichie_PitanieSHU.errorStatus
              OR CU_IM_Norm.errorStatus
              OR MV_Poloj_RolledON.errorStatus
              OR MV_Poloj_RolledOFF.errorStatus
              OR NOTAnalogNS.errorStatus
              OR Net_ASPS_Analogs.errorStatus
              OR Remont_Not.errorStatus
              OR not_AS.errorStatus
              OR Gotov_Vozb.errorStatus
              OR dP_kr1.errorStatus
              OR Auto_Rej.errorStatus
              OR CK_IM_norm.errorStatus
              OR Impuls_Gaz.errorStatus
              OR Est_rezerv_NU.errorStatus;

  StrAlg.Top:= Level_masla_Norm.topStatus
              OR T_masla_Norm.topStatus
              OR Krans_ready_to_move.topStatus
              OR Krans_Poloj.topStatus
              OR Net_AO_KC_SHKS04M.topStatus
              OR EGPA_Stop.topStatus
              OR Naprajenie_ZRU.topStatus
              OR All_IM_Off.topStatus
              OR Nalichie_PitanieSHU.topStatus
              OR CU_IM_Norm.topStatus
              OR MV_Poloj_RolledON.topStatus
              OR MV_Poloj_RolledOFF.topStatus
              OR NOTAnalogNS.topStatus
              OR Net_ASPS_Analogs.topStatus
              OR Remont_Not.topStatus
              OR not_AS.topStatus
              OR Gotov_Vozb.topStatus
              OR dP_kr1.topStatus
              OR Auto_Rej.topStatus
              OR CK_IM_norm.topStatus
              OR Impuls_Gaz.topStatus
              OR Est_rezerv_NU.topStatus; 


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
    fb_AOAlg : AOAlg;
    fb_NOAlg : NOAlg;
    fb_ppuALG : ppuAlg;
    fb_fillingAlg : fillingAlg;
    fb_engineRunAlg : engineRunAlg;
    fb_puskKalg : puskKalg;
    fb_puskValg : puskValg;
    fb_testdPmgAlg : testdPmgAlg;
    fb_testPmsAlg : testPmsAlg;
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

  fb_AutoTen(StrAlg:= algoritms.AutoTen,
  T_masla:= ai.T_masla_v_maslobake,
  Uroven_masla:= ai.Yroven_masla_v_maslobake,
  offTemperature:= Im.AutoTen_offTemperature,
  TEN:= Im.Ten_MB,
  PNS:= Im.pns);

  fb_AutoPns(StrAlg:= algoritms.AutoPns,
  Poil:= ai.Davlenie_masla_smazki_nizkoe,
  Ust_Run:= Im.AutoPns_UstRun,
  Ust_Stop:= Im.AutoPns_UstStop,
  Nasos:= Im.pns,
  diPlow:= Im.SingleSignals.dP_maslo_gaz_menshe_100_kPa);

  fb_AutoAvom(StrAlg:= algoritms.AutoAvom,
  im1:= Im.v1_Avom,
  im2:= Im.v2_Avom,
  (*on1Temperature:= Im.AutoAvom_onTemp1,
  on2Temperature:= Im.AutoAvom_onTemp2,
  hystereses:= Im.AutoAvom_hysteresis,*)
  ai:= ai.TgazaNaVhodeH);

  fb_vibegPNS(StrAlg:=algoritms.vibegPNS,
  algContinue:=AlgQuestions.vibegPNS_algContinue
  );

  fb_AutoNU(StrAlg:=algoritms.autoNu,
  nu1:=Im.nu1,
  nu2:=Im.nu2,
  Ust_Swap:= Im.AutoNU_Ust_Swap,
  mainNU:= Im.AutoNU_mainNU,
  dPoil:=ai.Perepad_davleniya_maslo_gaz,
  Lowdp_di:=Im.SingleSignals.dP_maslo_gaz_menshe_100_kPa
  );

  fb_puskOilSystem(StrAlg:=algoritms.puskOilSystem);

  fb_AOAlg(StrAlg:=algoritms.ao);

  fb_NOAlg(StrAlg:=algoritms.no);

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
END_FUNCTION_BLOCK

FUNCTION_BLOCK OPC_protections_get
  VAR_EXTERNAL
    protections : ProtectionsConfig;
    protections_Davlenie_gaza_na_vhode_nagnetatelya_HA_inCommand_ARM : UINT;
    protections_Davlenie_gaza_na_vihode_nagnetatelya_HA_inCommand_ARM : UINT;
    protections_Davlenie_masla_smazki_nizkoe_LA_inCommand_ARM : UINT;
    protections_Davlenie_masla_smazki_visokoe_LA_inCommand_ARM : UINT;
    protections_Kran1sdvig_inCommand_ARM : UINT;
    protections_Kran2sdvig_inCommand_ARM : UINT;
    protections_MBOff_inCommand_ARM : UINT;
    protections_Osevoi_sdvig_nagnetatelya_vlevo_HA_inCommand_ARM : UINT;
    protections_Osevoi_sdvig_nagnetatelya_vpravo_HA_inCommand_ARM : UINT;
    protections_Perepad_davleniya_maslo_gaz_LA_inCommand_ARM : UINT;
    protections_T_OP_ED_t1_HA_inCommand_ARM : UINT;
    protections_T_OP_kolesa_nagnetatelya_t4_HA_inCommand_ARM : UINT;
    protections_T_OP_redyctora_so_storony_nagnetatelya_t6_HA_inCommand_ARM : UINT;
    protections_T_OP_shesterni_ED_t5_HA_inCommand_ARM : UINT;
    protections_T_OYP_ED_so_storony_redyctora_t2_HA_inCommand_ARM : UINT;
    protections_T_OYP_kolesa_ED_t3_HA_inCommand_ARM : UINT;
    protections_T_OYP_nagnetatelya_so_storony_redyctora_t7_HA_inCommand_ARM : UINT;
    protections_T_OYP_svobodnogo_konca_nagnetatelya_t8_HA_inCommand_ARM : UINT;
    protections_T_YP_rabochih_kolodok_nagnetatelya_t9_HA_inCommand_ARM : UINT;
    protections_T_gaz_out_nagnetatelia_HA_inCommand_ARM : UINT;
    protections_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA_inCommand_ARM : UINT;
    protections_Vibroskorost_OP_ED_t1_HA_inCommand_ARM : UINT;
    protections_Vibroskorost_OP_kolesa_nagnetatelya_t4_HA_inCommand_ARM : UINT;
    protections_Vibroskorost_OP_shesterni_ED_t5_HA_inCommand_ARM : UINT;
    protections_Vibroskorost_OP_shesterni_nagnetatelya_t6_HA_inCommand_ARM : UINT;
    protections_Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA_inCommand_ARM : UINT;
    protections_Vibroskorost_OYP_kolesa_ED_t3_HA_inCommand_ARM : UINT;
    protections_dP_maslo_gaz_menshe_100_kPa_DI_inCommand_ARM : UINT;
    protections_AO_EGPA_ot_PRY_DI_inCommand_ARM : UINT;
    protections_AO_GPA_na_SHY_DI_inCommand_ARM : UINT;
    protections_AO_KC_ot_SHKC_04M_DI_inCommand_ARM : UINT;
    protections_Avar_otkl_viklychatelya_DI_inCommand_ARM : UINT;
    protections_ostanov_po_zashitam_vozb_avar_DI_inCommand_ARM : UINT;
  END_VAR

  (* OPC Get - IM. Чтение текущих состояний тэгов _______________________________________________________*)

  protections.T_OP_ED_t1_HA.inCommand_ARM:=                                    UINT_TO_WORD(protections_T_OP_ED_t1_HA_inCommand_ARM);
  protections.T_OYP_ED_so_storony_redyctora_t2_HA.inCommand_ARM:=              UINT_TO_WORD(protections_T_OYP_ED_so_storony_redyctora_t2_HA_inCommand_ARM);
  protections.T_OYP_kolesa_ED_t3_HA.inCommand_ARM:=                            UINT_TO_WORD(protections_T_OYP_kolesa_ED_t3_HA_inCommand_ARM);
  protections.T_OP_kolesa_nagnetatelya_t4_HA.inCommand_ARM:=                   UINT_TO_WORD(protections_T_OP_kolesa_nagnetatelya_t4_HA_inCommand_ARM);
  protections.T_OP_shesterni_ED_t5_HA.inCommand_ARM:=                          UINT_TO_WORD(protections_T_OP_shesterni_ED_t5_HA_inCommand_ARM);
  protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA.inCommand_ARM:=     UINT_TO_WORD(protections_T_OP_redyctora_so_storony_nagnetatelya_t6_HA_inCommand_ARM);
  protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA.inCommand_ARM:=    UINT_TO_WORD(protections_T_OYP_nagnetatelya_so_storony_redyctora_t7_HA_inCommand_ARM);
  protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA.inCommand_ARM:=        UINT_TO_WORD(protections_T_OYP_svobodnogo_konca_nagnetatelya_t8_HA_inCommand_ARM);
  protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA.inCommand_ARM:=         UINT_TO_WORD(protections_T_YP_rabochih_kolodok_nagnetatelya_t9_HA_inCommand_ARM);
  protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA.inCommand_ARM:=     UINT_TO_WORD(protections_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA_inCommand_ARM);

  protections.T_gaz_out_nagnetatelia_HA.inCommand_ARM:=                        UINT_TO_WORD(protections_T_gaz_out_nagnetatelia_HA_inCommand_ARM);
  protections.Osevoi_sdvig_nagnetatelya_vpravo_HA.inCommand_ARM:=              UINT_TO_WORD(protections_Osevoi_sdvig_nagnetatelya_vpravo_HA_inCommand_ARM);
  protections.Osevoi_sdvig_nagnetatelya_vlevo_HA.inCommand_ARM:=               UINT_TO_WORD(protections_Osevoi_sdvig_nagnetatelya_vlevo_HA_inCommand_ARM);
  protections.Davlenie_gaza_na_vhode_nagnetatelya_HA.inCommand_ARM:=           UINT_TO_WORD(protections_Davlenie_gaza_na_vhode_nagnetatelya_HA_inCommand_ARM);
  protections.Davlenie_gaza_na_vihode_nagnetatelya_HA.inCommand_ARM:=          UINT_TO_WORD(protections_Davlenie_gaza_na_vihode_nagnetatelya_HA_inCommand_ARM);
  protections.Perepad_davleniya_maslo_gaz_LA.inCommand_ARM:=                   UINT_TO_WORD(protections_Perepad_davleniya_maslo_gaz_LA_inCommand_ARM);
  protections.Davlenie_masla_smazki_nizkoe_LA.inCommand_ARM:=                  UINT_TO_WORD(protections_Davlenie_masla_smazki_nizkoe_LA_inCommand_ARM);
  protections.Davlenie_masla_smazki_visokoe_LA.inCommand_ARM:=                 UINT_TO_WORD(protections_Davlenie_masla_smazki_visokoe_LA_inCommand_ARM);

  protections.Vibroskorost_OP_ED_t1_HA.inCommand_ARM:=                         UINT_TO_WORD(protections_Vibroskorost_OP_ED_t1_HA_inCommand_ARM);
  protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA.inCommand_ARM:=   UINT_TO_WORD(protections_Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA_inCommand_ARM);
  protections.Vibroskorost_OYP_kolesa_ED_t3_HA.inCommand_ARM:=                 UINT_TO_WORD(protections_Vibroskorost_OYP_kolesa_ED_t3_HA_inCommand_ARM);
  protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA.inCommand_ARM:=        UINT_TO_WORD(protections_Vibroskorost_OP_kolesa_nagnetatelya_t4_HA_inCommand_ARM);
  protections.Vibroskorost_OP_shesterni_ED_t5_HA.inCommand_ARM:=               UINT_TO_WORD(protections_Vibroskorost_OP_shesterni_ED_t5_HA_inCommand_ARM);
  protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA.inCommand_ARM:=     UINT_TO_WORD(protections_Vibroskorost_OP_shesterni_nagnetatelya_t6_HA_inCommand_ARM);

  protections.dP_maslo_gaz_menshe_100_kPa_DI.inCommand_ARM:=                   UINT_TO_WORD(protections_dP_maslo_gaz_menshe_100_kPa_DI_inCommand_ARM);
  protections.Avar_otkl_viklychatelya_DI.inCommand_ARM:=                       UINT_TO_WORD(protections_Avar_otkl_viklychatelya_DI_inCommand_ARM);
  protections.Ostanov_po_zashitam_vozb_avar_DI.inCommand_ARM:=                 UINT_TO_WORD(protections_ostanov_po_zashitam_vozb_avar_DI_inCommand_ARM);
  protections.AO_KC_ot_SHKC_04M_DI.inCommand_ARM:=                             UINT_TO_WORD(protections_AO_KC_ot_SHKC_04M_DI_inCommand_ARM);
  protections.AO_EGPA_ot_PRY_DI.inCommand_ARM:=                                UINT_TO_WORD(protections_AO_EGPA_ot_PRY_DI_inCommand_ARM);
  protections.AO_GPA_na_SHY_DI.inCommand_ARM:=                                 UINT_TO_WORD(protections_AO_GPA_na_SHY_DI_inCommand_ARM);

  protections.MB.inCommand_ARM:=                                               UINT_TO_WORD(protections_MBOff_inCommand_ARM);
  protections.Kran1sdvig.inCommand_ARM:=                                       UINT_TO_WORD(protections_Kran1sdvig_inCommand_ARM);
  protections.Kran2sdvig.inCommand_ARM:=                                       UINT_TO_WORD(protections_Kran2sdvig_inCommand_ARM);
END_FUNCTION_BLOCK

FUNCTION_BLOCK OPC_protections_set
  VAR_EXTERNAL
    protections : ProtectionsConfig;
    protections_AO_EGPA_ot_PRY_DI_status : UDINT;
    protections_AO_GPA_na_SHY_DI_status : UDINT;
    protections_AO_KC_ot_SHKC_04M_DI_status : UDINT;
    protections_Avar_otkl_viklychatelya_DI_status : UDINT;
    protections_Davlenie_gaza_na_vhode_nagnetatelya_HA_status : UDINT;
    protections_Davlenie_gaza_na_vihode_nagnetatelya_HA_status : UDINT;
    protections_Davlenie_masla_smazki_nizkoe_LA_status : UDINT;
    protections_Davlenie_masla_smazki_visokoe_LA_status : UDINT;
    protections_Kran1sdvig_status : UDINT;
    protections_Kran2sdvig_status : UDINT;
    protections_MBOff_status : UDINT;
    protections_Osevoi_sdvig_nagnetatelya_vlevo_HA_status : UDINT;
    protections_Osevoi_sdvig_nagnetatelya_vpravo_HA_status : UDINT;
    protections_Perepad_davleniya_maslo_gaz_LA_status : UDINT;
    protections_T_OP_ED_t1_HA_status : UDINT;
    protections_T_OP_kolesa_nagnetatelya_t4_HA_status : UDINT;
    protections_T_OP_redyctora_so_storony_nagnetatelya_t6_HA_status : UDINT;
    protections_T_OP_shesterni_ED_t5_HA_status : UDINT;
    protections_T_OYP_ED_so_storony_redyctora_t2_HA_status : UDINT;
    protections_T_OYP_kolesa_ED_t3_HA_status : UDINT;
    protections_T_OYP_nagnetatelya_so_storony_redyctora_t7_HA_status : UDINT;
    protections_T_OYP_svobodnogo_konca_nagnetatelya_t8_HA_status : UDINT;
    protections_T_YP_rabochih_kolodok_nagnetatelya_t9_HA_status : UDINT;
    protections_T_gaz_out_nagnetatelia_HA_status : UDINT;
    protections_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA_status : UDINT;
    protections_Vibroskorost_OP_ED_t1_HA_status : UDINT;
    protections_Vibroskorost_OP_kolesa_nagnetatelya_t4_HA_status : UDINT;
    protections_Vibroskorost_OP_shesterni_ED_t5_HA_status : UDINT;
    protections_Vibroskorost_OP_shesterni_nagnetatelya_t6_HA_status : UDINT;
    protections_Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA_status : UDINT;
    protections_Vibroskorost_OYP_kolesa_ED_t3_HA_status : UDINT;
    protections_dP_maslo_gaz_menshe_100_kPa_DI_status : UDINT;
    protections_ostanov_po_zashitam_vozb_avar_DI_status : UDINT;
  END_VAR

  (* OPC Set - IM. Запись текущих состояний тэгов _______________________________________________________*)
  protections_T_OP_ED_t1_HA_status:=                                   DWORD_TO_UDINT(protections.T_OP_ED_t1_HA.status);
  protections_T_OYP_ED_so_storony_redyctora_t2_HA_status:=             DWORD_TO_UDINT(protections.T_OYP_ED_so_storony_redyctora_t2_HA.status);
  protections_T_OYP_kolesa_ED_t3_HA_status:=                           DWORD_TO_UDINT(protections.T_OYP_kolesa_ED_t3_HA.status);
  protections_T_OP_kolesa_nagnetatelya_t4_HA_status:=                  DWORD_TO_UDINT(protections.T_OP_kolesa_nagnetatelya_t4_HA.status);
  protections_T_OP_shesterni_ED_t5_HA_status:=                         DWORD_TO_UDINT(protections.T_OP_shesterni_ED_t5_HA.status);
  protections_T_OP_redyctora_so_storony_nagnetatelya_t6_HA_status:=    DWORD_TO_UDINT(protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA.status);
  protections_T_OYP_nagnetatelya_so_storony_redyctora_t7_HA_status:=   DWORD_TO_UDINT(protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA.status);
  protections_T_OYP_svobodnogo_konca_nagnetatelya_t8_HA_status:=       DWORD_TO_UDINT(protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA.status);
  protections_T_YP_rabochih_kolodok_nagnetatelya_t9_HA_status:=        DWORD_TO_UDINT(protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA.status);
  protections_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA_status:=    DWORD_TO_UDINT(protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA.status);

  protections_T_gaz_out_nagnetatelia_HA_status:=                       DWORD_TO_UDINT(protections.T_gaz_out_nagnetatelia_HA.status);
  protections_Osevoi_sdvig_nagnetatelya_vpravo_HA_status:=             DWORD_TO_UDINT(protections.Osevoi_sdvig_nagnetatelya_vpravo_HA.status);
  protections_Osevoi_sdvig_nagnetatelya_vlevo_HA_status:=              DWORD_TO_UDINT(protections.Osevoi_sdvig_nagnetatelya_vlevo_HA.status);
  protections_Davlenie_gaza_na_vhode_nagnetatelya_HA_status:=          DWORD_TO_UDINT(protections.Davlenie_gaza_na_vhode_nagnetatelya_HA.status);
  protections_Davlenie_gaza_na_vihode_nagnetatelya_HA_status:=         DWORD_TO_UDINT(protections.Davlenie_gaza_na_vihode_nagnetatelya_HA.status);
  protections_Perepad_davleniya_maslo_gaz_LA_status:=                  DWORD_TO_UDINT(protections.Perepad_davleniya_maslo_gaz_LA.status);
  protections_Davlenie_masla_smazki_nizkoe_LA_status:=                 DWORD_TO_UDINT(protections.Davlenie_masla_smazki_nizkoe_LA.status);
  protections_Davlenie_masla_smazki_visokoe_LA_status:=                DWORD_TO_UDINT(protections.Davlenie_masla_smazki_visokoe_LA.status);

  protections_Vibroskorost_OP_ED_t1_HA_status:=                        DWORD_TO_UDINT(protections.Vibroskorost_OP_ED_t1_HA.status);
  protections_Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA_status:=  DWORD_TO_UDINT(protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA.status);
  protections_Vibroskorost_OYP_kolesa_ED_t3_HA_status:=                DWORD_TO_UDINT(protections.Vibroskorost_OYP_kolesa_ED_t3_HA.status);
  protections_Vibroskorost_OP_kolesa_nagnetatelya_t4_HA_status:=       DWORD_TO_UDINT(protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA.status);
  protections_Vibroskorost_OP_shesterni_ED_t5_HA_status:=              DWORD_TO_UDINT(protections.Vibroskorost_OP_shesterni_ED_t5_HA.status);
  protections_Vibroskorost_OP_shesterni_nagnetatelya_t6_HA_status:=    DWORD_TO_UDINT(protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA.status);

  protections_dP_maslo_gaz_menshe_100_kPa_DI_status:=                  DWORD_TO_UDINT(protections.dP_maslo_gaz_menshe_100_kPa_DI.status);
  protections_Avar_otkl_viklychatelya_DI_status:=                      DWORD_TO_UDINT(protections.Avar_otkl_viklychatelya_DI.status);
  protections_Ostanov_po_zashitam_vozb_avar_DI_status:=                DWORD_TO_UDINT(protections.Ostanov_po_zashitam_vozb_avar_DI.status);
  protections_AO_KC_ot_SHKC_04M_DI_status:=                            DWORD_TO_UDINT(protections.AO_KC_ot_SHKC_04M_DI.status);
  protections_AO_EGPA_ot_PRY_DI_status:=                               DWORD_TO_UDINT(protections.AO_EGPA_ot_PRY_DI.status);
  protections_AO_GPA_na_SHY_DI_status:=                                DWORD_TO_UDINT(protections.AO_GPA_na_SHY_DI.status);

  protections_MBOff_status:=                                           DWORD_TO_UDINT(protections.MB.status);
  protections_Kran1sdvig_status:=                                      DWORD_TO_UDINT(protections.Kran1sdvig.status);
  protections_Kran2sdvig_status:=                                      DWORD_TO_UDINT(protections.Kran2sdvig.status);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AiProtectionDual
  VAR_INPUT
    ai1 : struct_AI;
    ai2 : struct_AI;
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

  timer(IN:= StrAIp.isRunning AND (((ai1.interval = StrAIp.controlLimit) AND (ai2.interval=StrAIp.controlLimit)) OR 
  		             ((ai1.interval = StrAIp.controlLimit) AND (ai2.interval < _statusAi.normal)) OR 
  		             ((ai2.interval = StrAIp.controlLimit) AND (ai1.interval < _statusAi.normal))),PT:=StrAIp.delay);

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
  VAR_EXTERNAL
    protections : ProtectionsConfig;
    ai : AiConfig;
    IM : ImConfig;
  END_VAR
  VAR
    fb_T_OP_ED_t1_HA : fb_AiProtection;
    fb_T_OYP_ED_so_storony_redyctora_t2_HA : fb_AiProtection;
    fb_T_OYP_kolesa_ED_t3_HA : fb_AiProtection;
    fb_T_OP_kolesa_nagnetatelya_t4_HA : fb_AiProtection;
    fb_T_OP_shesterni_ED_t5_HA : fb_AiProtection;
    fb_T_OP_redyctora_so_storony_nagnetatelya_t6_HA : fb_AiProtection;
    fb_T_OYP_nagnetatelya_so_storony_redyctora_t7_HA : fb_AiProtectionDual;
    fb_T_OYP_svobodnogo_konca_nagnetatelya_t8_HA : fb_AiProtectionDual;
    fb_T_YP_rabochih_kolodok_nagnetatelya_t9_HA : fb_AiProtection;
    fb_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA : fb_AiProtection;
    fb_T_gaz_out_nagnetatelia_HA : fb_AiProtection;
    fb_Osevoi_sdvig_nagnetatelya_vpravo_HA : fb_AiProtection;
    fb_Osevoi_sdvig_nagnetatelya_vlevo_HA : fb_AiProtection;
    fb_Davlenie_gaza_na_vhode_nagnetatelya_HA : fb_AiProtection;
    fb_Davlenie_gaza_na_vihode_nagnetatelya_HA : fb_AiProtection;
    fb_Perepad_davleniya_maslo_gaz_LA : fb_AiProtection;
    fb_Davlenie_masla_smazki_nizkoe_LA : fb_AiProtection;
    fb_Davlenie_masla_smazki_visokoe_LA : fb_AiProtection;
    fb_Vibroskorost_OP_ED_t1_HA : fb_AiProtection;
    fb_Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA : fb_AiProtection;
    fb_Vibroskorost_OYP_kolesa_ED_t3_HA : fb_AiProtection;
    fb_Vibroskorost_OP_kolesa_nagnetatelya_t4_HA : fb_AiProtection;
    fb_Vibroskorost_OP_shesterni_ED_t5_HA : fb_AiProtection;
    fb_Vibroskorost_OP_shesterni_nagnetatelya_t6_HA : fb_AiProtection;
    fb_dP_maslo_gaz_menshe_100_kPa_DI : fb_DiProtection;
    fb_Avar_otkl_viklychatelya_DI : fb_DiProtection;
    fb_Ostanov_po_zashitam_vozb_avar_DI : fb_DiProtection;
    fb_AO_KC_ot_SHKC_04M_DI : fb_DiProtection;
    fb_AO_EGPA_ot_PRY_DI : fb_DiProtection;
    fb_AO_GPA_na_SHY_DI : fb_DiProtection;
    fb_MBOff : fb_MvProtectionControlAi;
    fb_Kran1sdvig : fb_KranOpenProtectionDual;
    fb_Kran2sdvig : fb_KranOpenProtectionDual;
  END_VAR

  (************************************************************* DiProtection ************************************************************)
  fb_dP_maslo_gaz_menshe_100_kPa_DI(di := IM.SingleSignals.dP_maslo_gaz_menshe_100_kPa, StrDIp := protections.dP_maslo_gaz_menshe_100_kPa_DI);

  fb_Avar_otkl_viklychatelya_DI(di := IM.SingleSignals.Avar_otkl_viklychatelya, StrDIp := protections.Avar_otkl_viklychatelya_DI);

  fb_Ostanov_po_zashitam_vozb_avar_DI(di := IM.SingleSignals.Ostanov_po_zashitam_vozb_avar, StrDIp := protections.Ostanov_po_zashitam_vozb_avar_DI);

  fb_AO_KC_ot_SHKC_04M_DI(di := IM.SingleSignals.AO_KC_ot_SHKC_04M, StrDIp := protections.AO_KC_ot_SHKC_04M_DI);

  fb_AO_EGPA_ot_PRY_DI(di := IM.SingleSignals.AO_EGPA_ot_PRY, StrDIp := protections.AO_EGPA_ot_PRY_DI);

  fb_AO_GPA_na_SHY_DI(di := IM.SingleSignals.AO_GPA_na_SHY, StrDIp := protections.AO_GPA_na_SHY_DI);

  fb_MBOff(sw:= IM.MB, ai:= ai.Tok_statora, StrDIp := protections.MB);

  fb_Kran1sdvig(im:=IM.Kran1, dp_konf:= ai.Perepad_davleniya_gaza_na_konfyzore, parametr:= IM.Type_kranSdvig1_Protection,  StrDIp := protections.Kran1sdvig);

  fb_Kran2sdvig(im:=IM.Kran2, dp_konf:= ai.Perepad_davleniya_gaza_na_konfyzore, parametr:= IM.Type_kranSdvig2_Protection, StrDIp := protections.Kran2sdvig);

  (************************************************************* AiProtection ************************************************************)

  fb_T_OP_ED_t1_HA(ai := ai.TOpornogoPodshipnikaShesterniReduktoraT_5, StrAIp := protections.T_OP_ED_t1_HA);

  fb_T_OYP_ED_so_storony_redyctora_t2_HA(ai := ai.TOpornogoPodshipnikaReduktoraHT_6, StrAIp := protections.T_OYP_ED_so_storony_redyctora_t2_HA);

  fb_T_OYP_kolesa_ED_t3_HA(ai := ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_1, StrAIp := protections.T_OYP_kolesa_ED_t3_HA);

  fb_T_OP_kolesa_nagnetatelya_t4_HA(ai := ai.TOpornoYpornogoPodshipnikaNagnetateljaT_7_2, StrAIp := protections.T_OP_kolesa_nagnetatelya_t4_HA);

  fb_T_OP_shesterni_ED_t5_HA(ai := ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_1, StrAIp := protections.T_OP_shesterni_ED_t5_HA);

  fb_T_OP_redyctora_so_storony_nagnetatelya_t6_HA(ai := ai.TOpornoYpornogoPodshipnikaSvobodnogoKoncaNT_8_2, StrAIp := protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA);

  fb_T_OYP_nagnetatelya_so_storony_redyctora_t7_HA(ai1 := ai.TYpornogoPodshipnikaRavKolodokHT_9_1,
                                                   ai2 := ai.TYpornogoPodshipnikaRavKolodokHT_9_2,
                                                  StrAIp := protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA);



  fb_T_OYP_svobodnogo_konca_nagnetatelya_t8_HA(ai1 := ai.TYpornogoPodshipnikaNerabKolodokHT_10_1,
                                               ai2 := ai.TYpornogoPodshipnikaNerabKolodokHT_10_2,
                                              StrAIp := protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA);


  fb_T_YP_rabochih_kolodok_nagnetatelya_t9_HA(ai := ai.TYpornogoPodshipnikaRavKolodokHT_9_1, StrAIp := protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA);

  fb_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA(ai := ai.THolodnogoVozduhaEDKanall, StrAIp := protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA);

  fb_T_gaz_out_nagnetatelia_HA(ai := ai.TGorjachegoVozduhaEDKanall, StrAIp := protections.T_gaz_out_nagnetatelia_HA);

  fb_Osevoi_sdvig_nagnetatelya_vpravo_HA(ai := ai.Osevoi_sdvig_nagnetatelya_vpravo, StrAIp := protections.Osevoi_sdvig_nagnetatelya_vpravo_HA);

  fb_Osevoi_sdvig_nagnetatelya_vlevo_HA(ai := ai.Osevoi_sdvig_nagnetatelya_vlevo, StrAIp := protections.Osevoi_sdvig_nagnetatelya_vlevo_HA);

  fb_Davlenie_gaza_na_vhode_nagnetatelya_HA(ai := ai.Davlenie_gaza_na_vhode_nagnetatelya, StrAIp := protections.Davlenie_gaza_na_vhode_nagnetatelya_HA);

  fb_Davlenie_gaza_na_vihode_nagnetatelya_HA(ai := ai.Davlenie_gaza_na_vihode_nagnetatelya, StrAIp := protections.Davlenie_gaza_na_vihode_nagnetatelya_HA);

  fb_Perepad_davleniya_maslo_gaz_LA(ai := ai.Perepad_davleniya_maslo_gaz, StrAIp := protections.Perepad_davleniya_maslo_gaz_LA);

  fb_Davlenie_masla_smazki_nizkoe_LA(ai := ai.Davlenie_masla_smazki_nizkoe, StrAIp := protections.Davlenie_masla_smazki_nizkoe_LA);

  fb_Davlenie_masla_smazki_visokoe_LA(ai := ai.Davlenie_masla_smazki_visokoe, StrAIp := protections.Davlenie_masla_smazki_visokoe_LA);

  fb_Vibroskorost_OP_ED_t1_HA(ai := ai.Vibroskorost_OP_ED_t1, StrAIp := protections.Vibroskorost_OP_ED_t1_HA);

  fb_Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA(ai := ai.Vibroskorost_OYP_ED_so_storony_redyctora_t2, StrAIp := protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA);

  fb_Vibroskorost_OYP_kolesa_ED_t3_HA(ai := ai.Vibroskorost_OYP_kolesa_ED_t3, StrAIp := protections.Vibroskorost_OYP_kolesa_ED_t3_HA);

  fb_Vibroskorost_OP_kolesa_nagnetatelya_t4_HA(ai := ai.Vibroskorost_OP_kolesa_nagnetatelya_t4, StrAIp := protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA);

  fb_Vibroskorost_OP_shesterni_ED_t5_HA(ai := ai.Vibroskorost_OP_shesterni_ED_t5, StrAIp := protections.Vibroskorost_OP_shesterni_ED_t5_HA);

  fb_Vibroskorost_OP_shesterni_nagnetatelya_t6_HA(ai := ai.Vibroskorost_OP_shesterni_nagnetatelya_t6, StrAIp := protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA);
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

  (* dP_maslo_gaz_menshe_100_kPa *)
  stDIp_Ini(data_Ini := true, delay:=T#10S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.dP_maslo_gaz_menshe_100_kPa_DI); inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* Avar_otkl_viklychatelya *)
  stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.Avar_otkl_viklychatelya_DI); inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* ostanov_po_zashitam_vozb_avar *)
  stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.Ostanov_po_zashitam_vozb_avar_DI); inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* AO_KC_ot_SHKC_04M *)
  stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.AO_KC_ot_SHKC_04M_DI); inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* AO_EGPA_ot_PRY *)
  stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.AO_EGPA_ot_PRY_DI); inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* AO_GPA_na_SHY *)
  stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE, str_DIp := protections.AO_GPA_na_SHY_DI); inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* MB *)
  stDIp_Ini(data_Ini := true, delay:=T#1S, inTag:=_ProtectionTags.AOS, inRunOnStart:=FALSE, str_DIp := protections.MB);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* Сдвиг крана №1 *)
  stDIp_Ini(data_Ini := true, delay:=T#10S, inTag:=_ProtectionTags.AOS, inRunOnStart:=FALSE, str_DIp := protections.Kran1sdvig);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (* Сдвиг крана №2 *)
  stDIp_Ini(data_Ini := true, delay:=T#10S, inTag:=_ProtectionTags.AOS, inRunOnStart:=FALSE, str_DIp := protections.Kran2sdvig);
  inits := inits + BOOL_TO_UINT(stDIp_Ini.Init);

  (*************************************************Стартовая инициализация AiProtection ***************************************************)

  (* T_opornogo_podshipnika_electro_dvigatelia_t1 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.T_OP_ED_t1_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* T_oporno_ypornogo_podshipnika_electro_dvigatelia_so_storony_redyctora_t2 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.T_OYP_ED_so_storony_redyctora_t2_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* T_oporno_ypornogo_podshipnika_kolesa_redyctora_so_storony_electro_dvigatelya_t3 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.T_OYP_kolesa_ED_t3_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* T_opornogo_podshipnika_kolesa_redyctora_so_storony_nagnetatelya_t4 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.T_OP_kolesa_nagnetatelya_t4_HA);
  inits:= inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* T_opornogo_podshipnika_shesterni_redyctora_so_storony_electro_dvigatelya_t5 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.T_OP_shesterni_ED_t5_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* T_opornogo_podshipnika_redyctora_so_storony_nagnetatelya_t6 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.T_OP_redyctora_so_storony_nagnetatelya_t6_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* T_oporno_ypornogo_podshipnika_nagnetatelya_so_storony_redyctora_t7 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.T_OYP_nagnetatelya_so_storony_redyctora_t7_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);


  (* T_oporno_ypornogo_podshipnika_svobodnogo_konca_nagnetatelya_t8 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.T_OYP_svobodnogo_konca_nagnetatelya_t8_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);


  (* T_ypornogo_podshipnika_rabochih_kolodok_nagnetatelya_t9 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.T_YP_rabochih_kolodok_nagnetatelya_t9_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* T_ne_rabochih_kolodok_ypornogo_podshipnika_nagnetatelya_t10 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* T_gaz_in_nagnetatelia *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.T_gaz_out_nagnetatelia_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Osevoi_sdvig_nagnetatelya_vpravo *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Osevoi_sdvig_nagnetatelya_vpravo_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Osevoi_sdvig_nagnetatelya_vlevo *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Osevoi_sdvig_nagnetatelya_vlevo_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Davlenie_gaza_na_vhode_nagnetatelya *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Davlenie_gaza_na_vhode_nagnetatelya_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Davlenie_gaza_na_vihode_nagnetatelya *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Davlenie_gaza_na_vihode_nagnetatelya_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Perepad_davleniya_maslo_gaz_LA *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Perepad_davleniya_maslo_gaz_LA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Davlenie_masla_smazki_nizkoe *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Davlenie_masla_smazki_nizkoe_LA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Davlenie_masla_smazki_visokoe *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Davlenie_masla_smazki_visokoe_LA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Vibroskorost_opornogo_podshipnika_electro_dvigatelya_t1 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibroskorost_OP_ED_t1_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Vibroskorost_oporno_ypornogo_podshipnika_electro_dvigatelya_so_storony_redyctora_t2 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Vibroskorost_oporno_ypornogo_podshipnika_kolesa_redyktora_so_storony_electro_dvigatelya_t3 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibroskorost_OYP_kolesa_ED_t3_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Vibroskorost_oporno_ypornogo_podshipnika_kolesa_redyktora_so_storony_nagnetatelya_t4 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibroskorost_OP_kolesa_nagnetatelya_t4_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Vibroskorost_opornogo_podshipnika_shesterni_redyktora_so_storony_nagnetatelya_t5 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibroskorost_OP_shesterni_ED_t5_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);

  (* Vibroskorost_opornogo_podshipnika_shesterni_redyktora_so_storony_nagnetatelya_t6 *)
  stAIp_Ini(data_Ini := true, delay:=T#3S, inTag:=_ProtectionTags.AOS, inRunOnStart:=TRUE,
  controlLimit:=_StatusAi.HA, str_AIp := protections.Vibroskorost_OP_shesterni_nagnetatelya_t6_HA);
  inits := inits + BOOL_TO_UINT(stAIp_Ini.Init);
END_FUNCTION_BLOCK

FUNCTION_BLOCK fb_AiProtectionControlValue
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

  timer(IN :=(ai.value >= StrAIp.ControlValue) AND (ai.interval >= _statusAi.normal) AND StrAIp.isRunning, PT :=StrAIp.delay);
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
    arAOUT_0 : TDoubleData;
    arAOUT_1 : TDoubleData;
    arDOUT_0 : TWordData;
    arDOUT_1 : TWordData;
    arDOUT_2 : TWordData;
    arDOUT_3 : TWordData;
    arDOUT_4 : TWordData;
    arDOUT_5 : TWordData;
    arDOUT_6 : TWordData;
    arDOUT_7 : TWordData;
    arDOUT_8 : TWordData;
    arDOUT_9 : TWordData;
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
    arERR_25 : TItemDIN;
    arERR_26 : TItemDIN;
    arERR_27 : TItemDIN;
    arERR_28 : TItemDIN;
    arERR_29 : TItemDIN;
    arERR_30 : TItemDIN;
    arERR_31 : TItemDIN;
    arERR_32 : TItemDIN;
    arERR_33 : TItemDIN;
    arERR_34 : TItemDIN;
    arERR_35 : TItemDIN;
    arERR_36 : TItemDIN;
    arERR_37 : TItemDIN;
    arERR_38 : TItemDIN;
    arERR_39 : TItemDIN;
    arERR_40 : TItemDIN;
    arERR_41 : TItemDIN;
    arERR_42 : TItemDIN;
    arERR_43 : TItemDIN;
    arERR_44 : TItemDIN;
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
      protectManager : struct_ProtectionsManager;
      ModeGpa : TYPE_ModeGpa;
      NotHasRezervNU : BOOL;
      Reset_HasNU : BOOL;
      AlgTimers : struct_AlgTimers;
      AlgQuestions : AlgoritmsQuestions;
      PMcommand : TYPE_CommandsPotectionsManager;
      AI_Davlenie_gaza_na_vhode_nagnetatelya_HL AT %QL0.1 : LREAL;
      AI_Davlenie_gaza_na_vhode_nagnetatelya_LL AT %QL0.2 : LREAL;
      AI_Davlenie_gaza_na_vhode_nagnetatelya_LW AT %QL0.3 : LREAL;
      AI_Davlenie_gaza_na_vhode_nagnetatelya_command AT %QW0.4 : UINT;
      AI_Davlenie_gaza_na_vhode_nagnetatelya_newHL AT %QL0.5 : LREAL;
      AI_Davlenie_gaza_na_vhode_nagnetatelya_newLL AT %QL0.6 : LREAL;
      AI_Davlenie_gaza_na_vhode_nagnetatelya_newLW AT %QL0.7 : LREAL;
      AI_Davlenie_gaza_na_vhode_nagnetatelya_status AT %QD0.8 : UDINT;
      AI_Davlenie_gaza_na_vhode_nagnetatelya_value AT %QL0.9 : LREAL;
      AI_Davlenie_gaza_na_vihode_nagnetatelya_HL AT %QL0.10 : LREAL;
      AI_Davlenie_gaza_na_vihode_nagnetatelya_HW AT %QL0.11 : LREAL;
      AI_Davlenie_gaza_na_vihode_nagnetatelya_LL AT %QL0.12 : LREAL;
      AI_Davlenie_gaza_na_vihode_nagnetatelya_command AT %QW0.13 : UINT;
      AI_Davlenie_gaza_na_vihode_nagnetatelya_newHL AT %QL0.14 : LREAL;
      AI_Davlenie_gaza_na_vihode_nagnetatelya_newHW AT %QL0.15 : LREAL;
      AI_Davlenie_gaza_na_vihode_nagnetatelya_newLL AT %QL0.16 : LREAL;
      AI_Davlenie_gaza_na_vihode_nagnetatelya_status AT %QD0.17 : UDINT;
      AI_Davlenie_gaza_na_vihode_nagnetatelya_value AT %QL0.18 : LREAL;
      AI_Davlenie_impylsnogo_gaza_HL AT %QL0.19 : LREAL;
      AI_Davlenie_impylsnogo_gaza_LL AT %QL0.20 : LREAL;
      AI_Davlenie_impylsnogo_gaza_LW AT %QL0.21 : LREAL;
      AI_Davlenie_impylsnogo_gaza_command AT %QW0.22 : UINT;
      AI_Davlenie_impylsnogo_gaza_newHL AT %QL0.23 : LREAL;
      AI_Davlenie_impylsnogo_gaza_newLL AT %QL0.24 : LREAL;
      AI_Davlenie_impylsnogo_gaza_newLW AT %QL0.25 : LREAL;
      AI_Davlenie_impylsnogo_gaza_status AT %QD0.26 : UDINT;
      AI_Davlenie_impylsnogo_gaza_value AT %QL0.27 : LREAL;
      AI_Davlenie_masla_posle_nasosa_yplotneniya_HL AT %QL0.28 : LREAL;
      AI_Davlenie_masla_posle_nasosa_yplotneniya_LL AT %QL0.29 : LREAL;
      AI_Davlenie_masla_posle_nasosa_yplotneniya_command AT %QW0.30 : UINT;
      AI_Davlenie_masla_posle_nasosa_yplotneniya_newHL AT %QL0.31 : LREAL;
      AI_Davlenie_masla_posle_nasosa_yplotneniya_newLL AT %QL0.32 : LREAL;
      AI_Davlenie_masla_posle_nasosa_yplotneniya_status AT %QD0.33 : UDINT;
      AI_Davlenie_masla_posle_nasosa_yplotneniya_value AT %QL0.34 : LREAL;
      AI_Davlenie_masla_smazki_nizkoe_HL AT %QL0.35 : LREAL;
      AI_Davlenie_masla_smazki_nizkoe_LA AT %QL0.36 : LREAL;
      AI_Davlenie_masla_smazki_nizkoe_LL AT %QL0.37 : LREAL;
      AI_Davlenie_masla_smazki_nizkoe_LW AT %QL0.38 : LREAL;
      AI_Davlenie_masla_smazki_nizkoe_command AT %QW0.39 : UINT;
      AI_Davlenie_masla_smazki_nizkoe_newHL AT %QL0.40 : LREAL;
      AI_Davlenie_masla_smazki_nizkoe_newLA AT %QL0.41 : LREAL;
      AI_Davlenie_masla_smazki_nizkoe_newLL AT %QL0.42 : LREAL;
      AI_Davlenie_masla_smazki_nizkoe_newLW AT %QL0.43 : LREAL;
      AI_Davlenie_masla_smazki_nizkoe_status AT %QD0.44 : UDINT;
      AI_Davlenie_masla_smazki_nizkoe_value AT %QL0.45 : LREAL;
      AI_Davlenie_masla_smazki_posle_GNS_HL AT %QL0.46 : LREAL;
      AI_Davlenie_masla_smazki_posle_GNS_LL AT %QL0.47 : LREAL;
      AI_Davlenie_masla_smazki_posle_GNS_LW AT %QL0.48 : LREAL;
      AI_Davlenie_masla_smazki_posle_GNS_command AT %QW0.49 : UINT;
      AI_Davlenie_masla_smazki_posle_GNS_newHL AT %QL0.50 : LREAL;
      AI_Davlenie_masla_smazki_posle_GNS_newLL AT %QL0.51 : LREAL;
      AI_Davlenie_masla_smazki_posle_GNS_newLW AT %QL0.52 : LREAL;
      AI_Davlenie_masla_smazki_posle_GNS_status AT %QD0.53 : UDINT;
      AI_Davlenie_masla_smazki_posle_GNS_value AT %QL0.54 : LREAL;
      AI_Davlenie_masla_smazki_visokoe_HL AT %QL0.55 : LREAL;
      AI_Davlenie_masla_smazki_visokoe_LA AT %QL0.56 : LREAL;
      AI_Davlenie_masla_smazki_visokoe_LL AT %QL0.57 : LREAL;
      AI_Davlenie_masla_smazki_visokoe_LW AT %QL0.58 : LREAL;
      AI_Davlenie_masla_smazki_visokoe_command AT %QW0.59 : UINT;
      AI_Davlenie_masla_smazki_visokoe_newHL AT %QL0.60 : LREAL;
      AI_Davlenie_masla_smazki_visokoe_newLA AT %QL0.61 : LREAL;
      AI_Davlenie_masla_smazki_visokoe_newLL AT %QL0.62 : LREAL;
      AI_Davlenie_masla_smazki_visokoe_newLW AT %QL0.63 : LREAL;
      AI_Davlenie_masla_smazki_visokoe_status AT %QD0.64 : UDINT;
      AI_Davlenie_masla_smazki_visokoe_value AT %QL0.65 : LREAL;
      AI_Kontrol_220_perem_HL AT %QL0.66 : LREAL;
      AI_Kontrol_220_perem_HW AT %QL0.67 : LREAL;
      AI_Kontrol_220_perem_LL AT %QL0.68 : LREAL;
      AI_Kontrol_220_perem_LW AT %QL0.69 : LREAL;
      AI_Kontrol_220_perem_command AT %QW0.70 : UINT;
      AI_Kontrol_220_perem_newHL AT %QL0.71 : LREAL;
      AI_Kontrol_220_perem_newHW AT %QL0.72 : LREAL;
      AI_Kontrol_220_perem_newLL AT %QL0.73 : LREAL;
      AI_Kontrol_220_perem_newLW AT %QL0.74 : LREAL;
      AI_Kontrol_220_perem_status AT %QD0.75 : UDINT;
      AI_Kontrol_220_perem_value AT %QL0.76 : LREAL;
      AI_Kontrol_220_post_HL AT %QL0.77 : LREAL;
      AI_Kontrol_220_post_HW AT %QL0.78 : LREAL;
      AI_Kontrol_220_post_LL AT %QL0.79 : LREAL;
      AI_Kontrol_220_post_LW AT %QL0.80 : LREAL;
      AI_Kontrol_220_post_command AT %QW0.81 : UINT;
      AI_Kontrol_220_post_newHL AT %QL0.82 : LREAL;
      AI_Kontrol_220_post_newHW AT %QL0.83 : LREAL;
      AI_Kontrol_220_post_newLL AT %QL0.84 : LREAL;
      AI_Kontrol_220_post_newLW AT %QL0.85 : LREAL;
      AI_Kontrol_220_post_status AT %QD0.86 : UDINT;
      AI_Kontrol_220_post_value AT %QL0.87 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vlevo_HA AT %QL0.88 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vlevo_HL AT %QL0.89 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vlevo_HW AT %QL0.90 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vlevo_LL AT %QL0.91 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vlevo_command AT %QW0.92 : UINT;
      AI_Osevoi_sdvig_nagnetatelya_vlevo_newHA AT %QL0.93 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vlevo_newHL AT %QL0.94 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vlevo_newHW AT %QL0.95 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vlevo_newLL AT %QL0.96 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vlevo_status AT %QD0.97 : UDINT;
      AI_Osevoi_sdvig_nagnetatelya_vlevo_value AT %QL0.98 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vpravo_HA AT %QL0.99 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vpravo_HL AT %QL0.100 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vpravo_HW AT %QL0.101 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vpravo_LL AT %QL0.102 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vpravo_command AT %QW0.103 : UINT;
      AI_Osevoi_sdvig_nagnetatelya_vpravo_newHA AT %QL0.104 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vpravo_newHL AT %QL0.105 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vpravo_newHW AT %QL0.106 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vpravo_newLL AT %QL0.107 : LREAL;
      AI_Osevoi_sdvig_nagnetatelya_vpravo_status AT %QD0.108 : UDINT;
      AI_Osevoi_sdvig_nagnetatelya_vpravo_value AT %QL0.109 : LREAL;
      AI_Perepad_davleniya_gaza_na_konfyzore_HL AT %QL0.110 : LREAL;
      AI_Perepad_davleniya_gaza_na_konfyzore_LL AT %QL0.111 : LREAL;
      AI_Perepad_davleniya_gaza_na_konfyzore_command AT %QW0.112 : UINT;
      AI_Perepad_davleniya_gaza_na_konfyzore_newHL AT %QL0.113 : LREAL;
      AI_Perepad_davleniya_gaza_na_konfyzore_newLL AT %QL0.114 : LREAL;
      AI_Perepad_davleniya_gaza_na_konfyzore_status AT %QD0.115 : UDINT;
      AI_Perepad_davleniya_gaza_na_konfyzore_value AT %QL0.116 : LREAL;
      AI_Perepad_davleniya_masla_na_maslyanom_filtre_HL AT %QL0.117 : LREAL;
      AI_Perepad_davleniya_masla_na_maslyanom_filtre_HW AT %QL0.118 : LREAL;
      AI_Perepad_davleniya_masla_na_maslyanom_filtre_LL AT %QL0.119 : LREAL;
      AI_Perepad_davleniya_masla_na_maslyanom_filtre_command AT %QW0.120 : UINT;
      AI_Perepad_davleniya_masla_na_maslyanom_filtre_newHL AT %QL0.121 : LREAL;
      AI_Perepad_davleniya_masla_na_maslyanom_filtre_newHW AT %QL0.122 : LREAL;
      AI_Perepad_davleniya_masla_na_maslyanom_filtre_newLL AT %QL0.123 : LREAL;
      AI_Perepad_davleniya_masla_na_maslyanom_filtre_status AT %QD0.124 : UDINT;
      AI_Perepad_davleniya_masla_na_maslyanom_filtre_value AT %QL0.125 : LREAL;
      AI_Perepad_davleniya_maslo_gaz_HL AT %QL0.126 : LREAL;
      AI_Perepad_davleniya_maslo_gaz_LA AT %QL0.127 : LREAL;
      AI_Perepad_davleniya_maslo_gaz_LL AT %QL0.128 : LREAL;
      AI_Perepad_davleniya_maslo_gaz_LW AT %QL0.129 : LREAL;
      AI_Perepad_davleniya_maslo_gaz_command AT %QW0.130 : UINT;
      AI_Perepad_davleniya_maslo_gaz_newHL AT %QL0.131 : LREAL;
      AI_Perepad_davleniya_maslo_gaz_newLA AT %QL0.132 : LREAL;
      AI_Perepad_davleniya_maslo_gaz_newLL AT %QL0.133 : LREAL;
      AI_Perepad_davleniya_maslo_gaz_newLW AT %QL0.134 : LREAL;
      AI_Perepad_davleniya_maslo_gaz_status AT %QD0.135 : UDINT;
      AI_Perepad_davleniya_maslo_gaz_value AT %QL0.136 : LREAL;
      AI_T_OP_ED_t1_HA AT %QL0.137 : LREAL;
      AI_T_OP_ED_t1_HL AT %QL0.138 : LREAL;
      AI_T_OP_ED_t1_HW AT %QL0.139 : LREAL;
      AI_T_OP_ED_t1_LL AT %QL0.140 : LREAL;
      AI_T_OP_ED_t1_command AT %QW0.141 : UINT;
      AI_T_OP_ED_t1_newHA AT %QL0.142 : LREAL;
      AI_T_OP_ED_t1_newHL AT %QL0.143 : LREAL;
      AI_T_OP_ED_t1_newHW AT %QL0.144 : LREAL;
      AI_T_OP_ED_t1_newLL AT %QL0.145 : LREAL;
      AI_T_OP_ED_t1_status AT %QD0.146 : UDINT;
      AI_T_OP_ED_t1_value AT %QL0.147 : LREAL;
      AI_T_OP_kolesa_nagnetatelya_t4_HA AT %QL0.148 : LREAL;
      AI_T_OP_kolesa_nagnetatelya_t4_HL AT %QL0.149 : LREAL;
      AI_T_OP_kolesa_nagnetatelya_t4_HW AT %QL0.150 : LREAL;
      AI_T_OP_kolesa_nagnetatelya_t4_LL AT %QL0.151 : LREAL;
      AI_T_OP_kolesa_nagnetatelya_t4_command AT %QW0.152 : UINT;
      AI_T_OP_kolesa_nagnetatelya_t4_newHA AT %QL0.153 : LREAL;
      AI_T_OP_kolesa_nagnetatelya_t4_newHL AT %QL0.154 : LREAL;
      AI_T_OP_kolesa_nagnetatelya_t4_newHW AT %QL0.155 : LREAL;
      AI_T_OP_kolesa_nagnetatelya_t4_newLL AT %QL0.156 : LREAL;
      AI_T_OP_kolesa_nagnetatelya_t4_status AT %QD0.157 : UDINT;
      AI_T_OP_kolesa_nagnetatelya_t4_value AT %QL0.158 : LREAL;
      AI_T_OP_redyctora_so_storony_nagnetatelya_t6_HA AT %QL0.159 : LREAL;
      AI_T_OP_redyctora_so_storony_nagnetatelya_t6_HL AT %QL0.160 : LREAL;
      AI_T_OP_redyctora_so_storony_nagnetatelya_t6_HW AT %QL0.161 : LREAL;
      AI_T_OP_redyctora_so_storony_nagnetatelya_t6_LL AT %QL0.162 : LREAL;
      AI_T_OP_redyctora_so_storony_nagnetatelya_t6_command AT %QW0.163 : UINT;
      AI_T_OP_redyctora_so_storony_nagnetatelya_t6_newHA AT %QL0.164 : LREAL;
      AI_T_OP_redyctora_so_storony_nagnetatelya_t6_newHL AT %QL0.165 : LREAL;
      AI_T_OP_redyctora_so_storony_nagnetatelya_t6_newHW AT %QL0.166 : LREAL;
      AI_T_OP_redyctora_so_storony_nagnetatelya_t6_newLL AT %QL0.167 : LREAL;
      AI_T_OP_redyctora_so_storony_nagnetatelya_t6_status AT %QD0.168 : UDINT;
      AI_T_OP_redyctora_so_storony_nagnetatelya_t6_value AT %QL0.169 : LREAL;
      AI_T_OP_shesterni_ED_t5_HA AT %QL0.170 : LREAL;
      AI_T_OP_shesterni_ED_t5_HL AT %QL0.171 : LREAL;
      AI_T_OP_shesterni_ED_t5_HW AT %QL0.172 : LREAL;
      AI_T_OP_shesterni_ED_t5_LL AT %QL0.173 : LREAL;
      AI_T_OP_shesterni_ED_t5_command AT %QW0.174 : UINT;
      AI_T_OP_shesterni_ED_t5_newHA AT %QL0.175 : LREAL;
      AI_T_OP_shesterni_ED_t5_newHL AT %QL0.176 : LREAL;
      AI_T_OP_shesterni_ED_t5_newHW AT %QL0.177 : LREAL;
      AI_T_OP_shesterni_ED_t5_newLL AT %QL0.178 : LREAL;
      AI_T_OP_shesterni_ED_t5_status AT %QD0.179 : UDINT;
      AI_T_OP_shesterni_ED_t5_value AT %QL0.180 : LREAL;
      AI_T_OYP_ED_so_storony_redyctora_t2_HA AT %QL0.181 : LREAL;
      AI_T_OYP_ED_so_storony_redyctora_t2_HL AT %QL0.182 : LREAL;
      AI_T_OYP_ED_so_storony_redyctora_t2_HW AT %QL0.183 : LREAL;
      AI_T_OYP_ED_so_storony_redyctora_t2_LL AT %QL0.184 : LREAL;
      AI_T_OYP_ED_so_storony_redyctora_t2_command AT %QW0.185 : UINT;
      AI_T_OYP_ED_so_storony_redyctora_t2_newHA AT %QL0.186 : LREAL;
      AI_T_OYP_ED_so_storony_redyctora_t2_newHL AT %QL0.187 : LREAL;
      AI_T_OYP_ED_so_storony_redyctora_t2_newHW AT %QL0.188 : LREAL;
      AI_T_OYP_ED_so_storony_redyctora_t2_newLL AT %QL0.189 : LREAL;
      AI_T_OYP_ED_so_storony_redyctora_t2_status AT %QD0.190 : UDINT;
      AI_T_OYP_ED_so_storony_redyctora_t2_value AT %QL0.191 : LREAL;
      AI_T_OYP_kolesa_ED_t3_HA AT %QL0.192 : LREAL;
      AI_T_OYP_kolesa_ED_t3_HL AT %QL0.193 : LREAL;
      AI_T_OYP_kolesa_ED_t3_HW AT %QL0.194 : LREAL;
      AI_T_OYP_kolesa_ED_t3_LL AT %QL0.195 : LREAL;
      AI_T_OYP_kolesa_ED_t3_command AT %QW0.196 : UINT;
      AI_T_OYP_kolesa_ED_t3_newHA AT %QL0.197 : LREAL;
      AI_T_OYP_kolesa_ED_t3_newHL AT %QL0.198 : LREAL;
      AI_T_OYP_kolesa_ED_t3_newHW AT %QL0.199 : LREAL;
      AI_T_OYP_kolesa_ED_t3_newLL AT %QL0.200 : LREAL;
      AI_T_OYP_kolesa_ED_t3_status AT %QD0.201 : UDINT;
      AI_T_OYP_kolesa_ED_t3_value AT %QL0.202 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_1_HA AT %QL0.203 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_1_HL AT %QL0.204 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_1_HW AT %QL0.205 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_1_LL AT %QL0.206 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_1_command AT %QW0.207 : UINT;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_1_newHA AT %QL0.208 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_1_newHL AT %QL0.209 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_1_newHW AT %QL0.210 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_1_newLL AT %QL0.211 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_1_status AT %QD0.212 : UDINT;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_1_value AT %QL0.213 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_2_HA AT %QL0.214 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_2_HL AT %QL0.215 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_2_HW AT %QL0.216 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_2_LL AT %QL0.217 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_2_command AT %QW0.218 : UINT;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_2_newHA AT %QL0.219 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_2_newHL AT %QL0.220 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_2_newHW AT %QL0.221 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_2_newLL AT %QL0.222 : LREAL;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_2_status AT %QD0.223 : UDINT;
      AI_T_OYP_nagnetatelya_so_storony_redyctora_t7_2_value AT %QL0.224 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_1_HA AT %QL0.225 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_1_HL AT %QL0.226 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_1_HW AT %QL0.227 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_1_LL AT %QL0.228 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_1_command AT %QW0.229 : UINT;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_1_newHA AT %QL0.230 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_1_newHL AT %QL0.231 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_1_newHW AT %QL0.232 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_1_newLL AT %QL0.233 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_1_status AT %QD0.234 : UDINT;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_1_value AT %QL0.235 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_2_HA AT %QL0.236 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_2_HL AT %QL0.237 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_2_HW AT %QL0.238 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_2_LL AT %QL0.239 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_2_command AT %QW0.240 : UINT;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_2_newHA AT %QL0.241 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_2_newHL AT %QL0.242 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_2_newHW AT %QL0.243 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_2_newLL AT %QL0.244 : LREAL;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_2_status AT %QD0.245 : UDINT;
      AI_T_OYP_svobodnogo_konca_nagnetatelya_t8_2_value AT %QL0.246 : LREAL;
      AI_T_YP_rabochih_kolodok_nagnetatelya_t9_HA AT %QL0.247 : LREAL;
      AI_T_YP_rabochih_kolodok_nagnetatelya_t9_HL AT %QL0.248 : LREAL;
      AI_T_YP_rabochih_kolodok_nagnetatelya_t9_HW AT %QL0.249 : LREAL;
      AI_T_YP_rabochih_kolodok_nagnetatelya_t9_LL AT %QL0.250 : LREAL;
      AI_T_YP_rabochih_kolodok_nagnetatelya_t9_command AT %QW0.251 : UINT;
      AI_T_YP_rabochih_kolodok_nagnetatelya_t9_newHA AT %QL0.252 : LREAL;
      AI_T_YP_rabochih_kolodok_nagnetatelya_t9_newHL AT %QL0.253 : LREAL;
      AI_T_YP_rabochih_kolodok_nagnetatelya_t9_newHW AT %QL0.254 : LREAL;
      AI_T_YP_rabochih_kolodok_nagnetatelya_t9_newLL AT %QL0.255 : LREAL;
      AI_T_YP_rabochih_kolodok_nagnetatelya_t9_status AT %QD0.256 : UDINT;
      AI_T_YP_rabochih_kolodok_nagnetatelya_t9_value AT %QL0.257 : LREAL;
      AI_T_gaz_in_nagnetatelia_HL AT %QL0.258 : LREAL;
      AI_T_gaz_in_nagnetatelia_HW AT %QL0.259 : LREAL;
      AI_T_gaz_in_nagnetatelia_LL AT %QL0.260 : LREAL;
      AI_T_gaz_in_nagnetatelia_command AT %QW0.261 : UINT;
      AI_T_gaz_in_nagnetatelia_newHL AT %QL0.262 : LREAL;
      AI_T_gaz_in_nagnetatelia_newHW AT %QL0.263 : LREAL;
      AI_T_gaz_in_nagnetatelia_newLL AT %QL0.264 : LREAL;
      AI_T_gaz_in_nagnetatelia_status AT %QD0.265 : UDINT;
      AI_T_gaz_in_nagnetatelia_value AT %QL0.266 : LREAL;
      AI_T_gaz_out_nagnetatelia_HA AT %QL0.267 : LREAL;
      AI_T_gaz_out_nagnetatelia_HL AT %QL0.268 : LREAL;
      AI_T_gaz_out_nagnetatelia_HW AT %QL0.269 : LREAL;
      AI_T_gaz_out_nagnetatelia_LL AT %QL0.270 : LREAL;
      AI_T_gaz_out_nagnetatelia_command AT %QW0.271 : UINT;
      AI_T_gaz_out_nagnetatelia_newHA AT %QL0.272 : LREAL;
      AI_T_gaz_out_nagnetatelia_newHL AT %QL0.273 : LREAL;
      AI_T_gaz_out_nagnetatelia_newHW AT %QL0.274 : LREAL;
      AI_T_gaz_out_nagnetatelia_newLL AT %QL0.275 : LREAL;
      AI_T_gaz_out_nagnetatelia_status AT %QD0.276 : UDINT;
      AI_T_gaz_out_nagnetatelia_value AT %QL0.277 : LREAL;
      AI_T_goryachego_vozdyha_ed_t1_HL AT %QL0.278 : LREAL;
      AI_T_goryachego_vozdyha_ed_t1_HW AT %QL0.279 : LREAL;
      AI_T_goryachego_vozdyha_ed_t1_LL AT %QL0.280 : LREAL;
      AI_T_goryachego_vozdyha_ed_t1_command AT %QW0.281 : UINT;
      AI_T_goryachego_vozdyha_ed_t1_newHL AT %QL0.282 : LREAL;
      AI_T_goryachego_vozdyha_ed_t1_newHW AT %QL0.283 : LREAL;
      AI_T_goryachego_vozdyha_ed_t1_newLL AT %QL0.284 : LREAL;
      AI_T_goryachego_vozdyha_ed_t1_status AT %QD0.285 : UDINT;
      AI_T_goryachego_vozdyha_ed_t1_value AT %QL0.286 : LREAL;
      AI_T_goryachego_vozdyha_ed_t2_HL AT %QL0.287 : LREAL;
      AI_T_goryachego_vozdyha_ed_t2_HW AT %QL0.288 : LREAL;
      AI_T_goryachego_vozdyha_ed_t2_LL AT %QL0.289 : LREAL;
      AI_T_goryachego_vozdyha_ed_t2_command AT %QW0.290 : UINT;
      AI_T_goryachego_vozdyha_ed_t2_newHL AT %QL0.291 : LREAL;
      AI_T_goryachego_vozdyha_ed_t2_newHW AT %QL0.292 : LREAL;
      AI_T_goryachego_vozdyha_ed_t2_newLL AT %QL0.293 : LREAL;
      AI_T_goryachego_vozdyha_ed_t2_status AT %QD0.294 : UDINT;
      AI_T_goryachego_vozdyha_ed_t2_value AT %QL0.295 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t1_HL AT %QL0.296 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t1_HW AT %QL0.297 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t1_LL AT %QL0.298 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t1_command AT %QW0.299 : UINT;
      AI_T_holodnogo_vozdyha_ed_t1_newHL AT %QL0.300 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t1_newHW AT %QL0.301 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t1_newLL AT %QL0.302 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t1_status AT %QD0.303 : UDINT;
      AI_T_holodnogo_vozdyha_ed_t1_value AT %QL0.304 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t2_HL AT %QL0.305 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t2_HW AT %QL0.306 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t2_LL AT %QL0.307 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t2_command AT %QW0.308 : UINT;
      AI_T_holodnogo_vozdyha_ed_t2_newHL AT %QL0.309 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t2_newHW AT %QL0.310 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t2_newLL AT %QL0.311 : LREAL;
      AI_T_holodnogo_vozdyha_ed_t2_status AT %QD0.312 : UDINT;
      AI_T_holodnogo_vozdyha_ed_t2_value AT %QL0.313 : LREAL;
      AI_T_masla_do_ABO_HL AT %QL0.314 : LREAL;
      AI_T_masla_do_ABO_HW AT %QL0.315 : LREAL;
      AI_T_masla_do_ABO_LL AT %QL0.316 : LREAL;
      AI_T_masla_do_ABO_command AT %QW0.317 : UINT;
      AI_T_masla_do_ABO_newHL AT %QL0.318 : LREAL;
      AI_T_masla_do_ABO_newHW AT %QL0.319 : LREAL;
      AI_T_masla_do_ABO_newLL AT %QL0.320 : LREAL;
      AI_T_masla_do_ABO_status AT %QD0.321 : UDINT;
      AI_T_masla_do_ABO_value AT %QL0.322 : LREAL;
      AI_T_masla_posle_ABO_HL AT %QL0.323 : LREAL;
      AI_T_masla_posle_ABO_HW AT %QL0.324 : LREAL;
      AI_T_masla_posle_ABO_LL AT %QL0.325 : LREAL;
      AI_T_masla_posle_ABO_command AT %QW0.326 : UINT;
      AI_T_masla_posle_ABO_newHL AT %QL0.327 : LREAL;
      AI_T_masla_posle_ABO_newHW AT %QL0.328 : LREAL;
      AI_T_masla_posle_ABO_newLL AT %QL0.329 : LREAL;
      AI_T_masla_posle_ABO_status AT %QD0.330 : UDINT;
      AI_T_masla_posle_ABO_value AT %QL0.331 : LREAL;
      AI_T_masla_v_maslobake_HL AT %QL0.332 : LREAL;
      AI_T_masla_v_maslobake_LL AT %QL0.333 : LREAL;
      AI_T_masla_v_maslobake_LW AT %QL0.334 : LREAL;
      AI_T_masla_v_maslobake_command AT %QW0.335 : UINT;
      AI_T_masla_v_maslobake_nad_ten_HL AT %QL0.336 : LREAL;
      AI_T_masla_v_maslobake_nad_ten_HW AT %QL0.337 : LREAL;
      AI_T_masla_v_maslobake_nad_ten_LL AT %QL0.338 : LREAL;
      AI_T_masla_v_maslobake_nad_ten_command AT %QW0.339 : UINT;
      AI_T_masla_v_maslobake_nad_ten_newHL AT %QL0.340 : LREAL;
      AI_T_masla_v_maslobake_nad_ten_newHW AT %QL0.341 : LREAL;
      AI_T_masla_v_maslobake_nad_ten_newLL AT %QL0.342 : LREAL;
      AI_T_masla_v_maslobake_nad_ten_status AT %QD0.343 : UDINT;
      AI_T_masla_v_maslobake_nad_ten_value AT %QL0.344 : LREAL;
      AI_T_masla_v_maslobake_newHL AT %QL0.345 : LREAL;
      AI_T_masla_v_maslobake_newLL AT %QL0.346 : LREAL;
      AI_T_masla_v_maslobake_newLW AT %QL0.347 : LREAL;
      AI_T_masla_v_maslobake_status AT %QD0.348 : UDINT;
      AI_T_masla_v_maslobake_value AT %QL0.349 : LREAL;
      AI_T_medi_statora_faza_1_HL AT %QL0.350 : LREAL;
      AI_T_medi_statora_faza_1_HW AT %QL0.351 : LREAL;
      AI_T_medi_statora_faza_1_LL AT %QL0.352 : LREAL;
      AI_T_medi_statora_faza_1_command AT %QW0.353 : UINT;
      AI_T_medi_statora_faza_1_newHL AT %QL0.354 : LREAL;
      AI_T_medi_statora_faza_1_newHW AT %QL0.355 : LREAL;
      AI_T_medi_statora_faza_1_newLL AT %QL0.356 : LREAL;
      AI_T_medi_statora_faza_1_status AT %QD0.357 : UDINT;
      AI_T_medi_statora_faza_1_value AT %QL0.358 : LREAL;
      AI_T_medi_statora_faza_2_HL AT %QL0.359 : LREAL;
      AI_T_medi_statora_faza_2_HW AT %QL0.360 : LREAL;
      AI_T_medi_statora_faza_2_LL AT %QL0.361 : LREAL;
      AI_T_medi_statora_faza_2_command AT %QW0.362 : UINT;
      AI_T_medi_statora_faza_2_newHL AT %QL0.363 : LREAL;
      AI_T_medi_statora_faza_2_newHW AT %QL0.364 : LREAL;
      AI_T_medi_statora_faza_2_newLL AT %QL0.365 : LREAL;
      AI_T_medi_statora_faza_2_status AT %QD0.366 : UDINT;
      AI_T_medi_statora_faza_2_value AT %QL0.367 : LREAL;
      AI_T_medi_statora_faza_3_HL AT %QL0.368 : LREAL;
      AI_T_medi_statora_faza_3_HW AT %QL0.369 : LREAL;
      AI_T_medi_statora_faza_3_LL AT %QL0.370 : LREAL;
      AI_T_medi_statora_faza_3_command AT %QW0.371 : UINT;
      AI_T_medi_statora_faza_3_newHL AT %QL0.372 : LREAL;
      AI_T_medi_statora_faza_3_newHW AT %QL0.373 : LREAL;
      AI_T_medi_statora_faza_3_newLL AT %QL0.374 : LREAL;
      AI_T_medi_statora_faza_3_status AT %QD0.375 : UDINT;
      AI_T_medi_statora_faza_3_value AT %QL0.376 : LREAL;
      AI_T_naryjnogo_vozdyxa_HL AT %QL0.377 : LREAL;
      AI_T_naryjnogo_vozdyxa_LL AT %QL0.378 : LREAL;
      AI_T_naryjnogo_vozdyxa_command AT %QW0.379 : UINT;
      AI_T_naryjnogo_vozdyxa_newHL AT %QL0.380 : LREAL;
      AI_T_naryjnogo_vozdyxa_newLL AT %QL0.381 : LREAL;
      AI_T_naryjnogo_vozdyxa_status AT %QD0.382 : UDINT;
      AI_T_naryjnogo_vozdyxa_value AT %QL0.383 : LREAL;
      AI_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA AT %QL0.384 : LREAL;
      AI_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HL AT %QL0.385 : LREAL;
      AI_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HW AT %QL0.386 : LREAL;
      AI_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_LL AT %QL0.387 : LREAL;
      AI_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_command AT %QW0.388 : UINT;
      AI_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_newHA AT %QL0.389 : LREAL;
      AI_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_newHL AT %QL0.390 : LREAL;
      AI_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_newHW AT %QL0.391 : LREAL;
      AI_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_newLL AT %QL0.392 : LREAL;
      AI_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_status AT %QD0.393 : UDINT;
      AI_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_value AT %QL0.394 : LREAL;
      AI_T_stali_statora_faza_1_HL AT %QL0.395 : LREAL;
      AI_T_stali_statora_faza_1_HW AT %QL0.396 : LREAL;
      AI_T_stali_statora_faza_1_LL AT %QL0.397 : LREAL;
      AI_T_stali_statora_faza_1_command AT %QW0.398 : UINT;
      AI_T_stali_statora_faza_1_newHL AT %QL0.399 : LREAL;
      AI_T_stali_statora_faza_1_newHW AT %QL0.400 : LREAL;
      AI_T_stali_statora_faza_1_newLL AT %QL0.401 : LREAL;
      AI_T_stali_statora_faza_1_status AT %QD0.402 : UDINT;
      AI_T_stali_statora_faza_1_value AT %QL0.403 : LREAL;
      AI_T_stali_statora_faza_2_HL AT %QL0.404 : LREAL;
      AI_T_stali_statora_faza_2_HW AT %QL0.405 : LREAL;
      AI_T_stali_statora_faza_2_LL AT %QL0.406 : LREAL;
      AI_T_stali_statora_faza_2_command AT %QW0.407 : UINT;
      AI_T_stali_statora_faza_2_newHL AT %QL0.408 : LREAL;
      AI_T_stali_statora_faza_2_newHW AT %QL0.409 : LREAL;
      AI_T_stali_statora_faza_2_newLL AT %QL0.410 : LREAL;
      AI_T_stali_statora_faza_2_status AT %QD0.411 : UDINT;
      AI_T_stali_statora_faza_2_value AT %QL0.412 : LREAL;
      AI_T_stali_statora_faza_3_HL AT %QL0.413 : LREAL;
      AI_T_stali_statora_faza_3_HW AT %QL0.414 : LREAL;
      AI_T_stali_statora_faza_3_LL AT %QL0.415 : LREAL;
      AI_T_stali_statora_faza_3_command AT %QW0.416 : UINT;
      AI_T_stali_statora_faza_3_newHL AT %QL0.417 : LREAL;
      AI_T_stali_statora_faza_3_newHW AT %QL0.418 : LREAL;
      AI_T_stali_statora_faza_3_newLL AT %QL0.419 : LREAL;
      AI_T_stali_statora_faza_3_status AT %QD0.420 : UDINT;
      AI_T_stali_statora_faza_3_value AT %QL0.421 : LREAL;
      AI_T_vozduha_v_shkaf_HL AT %QL0.422 : LREAL;
      AI_T_vozduha_v_shkaf_LL AT %QL0.423 : LREAL;
      AI_T_vozduha_v_shkaf_command AT %QW0.424 : UINT;
      AI_T_vozduha_v_shkaf_newHL AT %QL0.425 : LREAL;
      AI_T_vozduha_v_shkaf_newLL AT %QL0.426 : LREAL;
      AI_T_vozduha_v_shkaf_status AT %QD0.427 : UDINT;
      AI_T_vozduha_v_shkaf_value AT %QL0.428 : LREAL;
      AI_Tok_statora_HL AT %QL0.429 : LREAL;
      AI_Tok_statora_LL AT %QL0.430 : LREAL;
      AI_Tok_statora_LW AT %QL0.431 : LREAL;
      AI_Tok_statora_command AT %QW0.432 : UINT;
      AI_Tok_statora_newHL AT %QL0.433 : LREAL;
      AI_Tok_statora_newLL AT %QL0.434 : LREAL;
      AI_Tok_statora_newLW AT %QL0.435 : LREAL;
      AI_Tok_statora_status AT %QD0.436 : UDINT;
      AI_Tok_statora_value AT %QL0.437 : LREAL;
      AI_Vibroskorost_OP_ED_t1_HA AT %QL0.438 : LREAL;
      AI_Vibroskorost_OP_ED_t1_HL AT %QL0.439 : LREAL;
      AI_Vibroskorost_OP_ED_t1_HW AT %QL0.440 : LREAL;
      AI_Vibroskorost_OP_ED_t1_LL AT %QL0.441 : LREAL;
      AI_Vibroskorost_OP_ED_t1_command AT %QW0.442 : UINT;
      AI_Vibroskorost_OP_ED_t1_newHA AT %QL0.443 : LREAL;
      AI_Vibroskorost_OP_ED_t1_newHL AT %QL0.444 : LREAL;
      AI_Vibroskorost_OP_ED_t1_newHW AT %QL0.445 : LREAL;
      AI_Vibroskorost_OP_ED_t1_newLL AT %QL0.446 : LREAL;
      AI_Vibroskorost_OP_ED_t1_status AT %QD0.447 : UDINT;
      AI_Vibroskorost_OP_ED_t1_value AT %QL0.448 : LREAL;
      AI_Vibroskorost_OP_kolesa_nagnetatelya_t4_HA AT %QL0.449 : LREAL;
      AI_Vibroskorost_OP_kolesa_nagnetatelya_t4_HL AT %QL0.450 : LREAL;
      AI_Vibroskorost_OP_kolesa_nagnetatelya_t4_HW AT %QL0.451 : LREAL;
      AI_Vibroskorost_OP_kolesa_nagnetatelya_t4_LL AT %QL0.452 : LREAL;
      AI_Vibroskorost_OP_kolesa_nagnetatelya_t4_command AT %QW0.453 : UINT;
      AI_Vibroskorost_OP_kolesa_nagnetatelya_t4_newHA AT %QL0.454 : LREAL;
      AI_Vibroskorost_OP_kolesa_nagnetatelya_t4_newHL AT %QL0.455 : LREAL;
      AI_Vibroskorost_OP_kolesa_nagnetatelya_t4_newHW AT %QL0.456 : LREAL;
      AI_Vibroskorost_OP_kolesa_nagnetatelya_t4_newLL AT %QL0.457 : LREAL;
      AI_Vibroskorost_OP_kolesa_nagnetatelya_t4_status AT %QD0.458 : UDINT;
      AI_Vibroskorost_OP_kolesa_nagnetatelya_t4_value AT %QL0.459 : LREAL;
      AI_Vibroskorost_OP_shesterni_ED_t5_HA AT %QL0.460 : LREAL;
      AI_Vibroskorost_OP_shesterni_ED_t5_HL AT %QL0.461 : LREAL;
      AI_Vibroskorost_OP_shesterni_ED_t5_HW AT %QL0.462 : LREAL;
      AI_Vibroskorost_OP_shesterni_ED_t5_LL AT %QL0.463 : LREAL;
      AI_Vibroskorost_OP_shesterni_ED_t5_command AT %QW0.464 : UINT;
      AI_Vibroskorost_OP_shesterni_ED_t5_newHA AT %QL0.465 : LREAL;
      AI_Vibroskorost_OP_shesterni_ED_t5_newHL AT %QL0.466 : LREAL;
      AI_Vibroskorost_OP_shesterni_ED_t5_newHW AT %QL0.467 : LREAL;
      AI_Vibroskorost_OP_shesterni_ED_t5_newLL AT %QL0.468 : LREAL;
      AI_Vibroskorost_OP_shesterni_ED_t5_status AT %QD0.469 : UDINT;
      AI_Vibroskorost_OP_shesterni_ED_t5_value AT %QL0.470 : LREAL;
      AI_Vibroskorost_OP_shesterni_nagnetatelya_t6_HA AT %QL0.471 : LREAL;
      AI_Vibroskorost_OP_shesterni_nagnetatelya_t6_HL AT %QL0.472 : LREAL;
      AI_Vibroskorost_OP_shesterni_nagnetatelya_t6_HW AT %QL0.473 : LREAL;
      AI_Vibroskorost_OP_shesterni_nagnetatelya_t6_LL AT %QL0.474 : LREAL;
      AI_Vibroskorost_OP_shesterni_nagnetatelya_t6_command AT %QW0.475 : UINT;
      AI_Vibroskorost_OP_shesterni_nagnetatelya_t6_newHA AT %QL0.476 : LREAL;
      AI_Vibroskorost_OP_shesterni_nagnetatelya_t6_newHL AT %QL0.477 : LREAL;
      AI_Vibroskorost_OP_shesterni_nagnetatelya_t6_newHW AT %QL0.478 : LREAL;
      AI_Vibroskorost_OP_shesterni_nagnetatelya_t6_newLL AT %QL0.479 : LREAL;
      AI_Vibroskorost_OP_shesterni_nagnetatelya_t6_status AT %QD0.480 : UDINT;
      AI_Vibroskorost_OP_shesterni_nagnetatelya_t6_value AT %QL0.481 : LREAL;
      AI_Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA AT %QL0.482 : LREAL;
      AI_Vibroskorost_OYP_ED_so_storony_redyctora_t2_HL AT %QL0.483 : LREAL;
      AI_Vibroskorost_OYP_ED_so_storony_redyctora_t2_HW AT %QL0.484 : LREAL;
      AI_Vibroskorost_OYP_ED_so_storony_redyctora_t2_LL AT %QL0.485 : LREAL;
      AI_Vibroskorost_OYP_ED_so_storony_redyctora_t2_command AT %QW0.486 : UINT;
      AI_Vibroskorost_OYP_ED_so_storony_redyctora_t2_newHA AT %QL0.487 : LREAL;
      AI_Vibroskorost_OYP_ED_so_storony_redyctora_t2_newHL AT %QL0.488 : LREAL;
      AI_Vibroskorost_OYP_ED_so_storony_redyctora_t2_newHW AT %QL0.489 : LREAL;
      AI_Vibroskorost_OYP_ED_so_storony_redyctora_t2_newLL AT %QL0.490 : LREAL;
      AI_Vibroskorost_OYP_ED_so_storony_redyctora_t2_status AT %QD0.491 : UDINT;
      AI_Vibroskorost_OYP_ED_so_storony_redyctora_t2_value AT %QL0.492 : LREAL;
      AI_Vibroskorost_OYP_kolesa_ED_t3_HA AT %QL0.493 : LREAL;
      AI_Vibroskorost_OYP_kolesa_ED_t3_HL AT %QL0.494 : LREAL;
      AI_Vibroskorost_OYP_kolesa_ED_t3_HW AT %QL0.495 : LREAL;
      AI_Vibroskorost_OYP_kolesa_ED_t3_LL AT %QL0.496 : LREAL;
      AI_Vibroskorost_OYP_kolesa_ED_t3_command AT %QW0.497 : UINT;
      AI_Vibroskorost_OYP_kolesa_ED_t3_newHA AT %QL0.498 : LREAL;
      AI_Vibroskorost_OYP_kolesa_ED_t3_newHL AT %QL0.499 : LREAL;
      AI_Vibroskorost_OYP_kolesa_ED_t3_newHW AT %QL0.500 : LREAL;
      AI_Vibroskorost_OYP_kolesa_ED_t3_newLL AT %QL0.501 : LREAL;
      AI_Vibroskorost_OYP_kolesa_ED_t3_status AT %QD0.502 : UDINT;
      AI_Vibroskorost_OYP_kolesa_ED_t3_value AT %QL0.503 : LREAL;
      AI_Yroven_masla_v_maslobake_HL AT %QL0.504 : LREAL;
      AI_Yroven_masla_v_maslobake_LL AT %QL0.505 : LREAL;
      AI_Yroven_masla_v_maslobake_LW AT %QL0.506 : LREAL;
      AI_Yroven_masla_v_maslobake_command AT %QW0.507 : UINT;
      AI_Yroven_masla_v_maslobake_newHL AT %QL0.508 : LREAL;
      AI_Yroven_masla_v_maslobake_newLL AT %QL0.509 : LREAL;
      AI_Yroven_masla_v_maslobake_newLW AT %QL0.510 : LREAL;
      AI_Yroven_masla_v_maslobake_status AT %QD0.511 : UDINT;
      AI_Yroven_masla_v_maslobake_value AT %QL0.512 : LREAL;
      A1_10_err_mode AT %QW0.513 : UINT;
      A1_11_err_mode AT %QW0.514 : UINT;
      A1_12_err_mode AT %QW0.515 : UINT;
      A1_13_err_mode AT %QW0.516 : UINT;
      A1_14_err_mode AT %QW0.517 : UINT;
      A1_15_err_mode AT %QW0.518 : UINT;
      A1_1_err_mode AT %QW0.519 : UINT;
      A1_2_err_mode AT %QW0.520 : UINT;
      A1_3_err_mode AT %QW0.521 : UINT;
      A1_4_err_mode AT %QW0.522 : UINT;
      A1_5_err_mode AT %QW0.523 : UINT;
      A1_6_err_mode AT %QW0.524 : UINT;
      A1_7_err_mode AT %QW0.525 : UINT;
      A1_8_err_mode AT %QW0.526 : UINT;
      A1_9_err_mode AT %QW0.527 : UINT;
      A2_10_err_mode AT %QW0.528 : UINT;
      A2_11_err_mode AT %QW0.529 : UINT;
      A2_12_err_mode AT %QW0.530 : UINT;
      A2_13_err_mode AT %QW0.531 : UINT;
      A2_14_err_mode AT %QW0.532 : UINT;
      A2_15_err_mode AT %QW0.533 : UINT;
      A2_1_err_mode AT %QW0.534 : UINT;
      A2_2_err_mode AT %QW0.535 : UINT;
      A2_3_err_mode AT %QW0.536 : UINT;
      A2_4_err_mode AT %QW0.537 : UINT;
      A2_5_err_mode AT %QW0.538 : UINT;
      A2_6_err_mode AT %QW0.539 : UINT;
      A2_7_err_mode AT %QW0.540 : UINT;
      A2_8_err_mode AT %QW0.541 : UINT;
      A2_9_err_mode AT %QW0.542 : UINT;
      A3_10_err_mode AT %QW0.543 : UINT;
      A3_11_err_mode AT %QW0.544 : UINT;
      A3_12_err_mode AT %QW0.545 : UINT;
      A3_13_err_mode AT %QW0.546 : UINT;
      A3_14_err_mode AT %QW0.547 : UINT;
      A3_15_err_mode AT %QW0.548 : UINT;
      A3_1_err_mode AT %QW0.549 : UINT;
      A3_2_err_mode AT %QW0.550 : UINT;
      A3_3_err_mode AT %QW0.551 : UINT;
      A3_4_err_mode AT %QW0.552 : UINT;
      A3_5_err_mode AT %QW0.553 : UINT;
      A3_6_err_mode AT %QW0.554 : UINT;
      A3_7_err_mode AT %QW0.555 : UINT;
      A3_8_err_mode AT %QW0.556 : UINT;
      A3_9_err_mode AT %QW0.557 : UINT;
      AI_0_dblValue AT %QL0.558 : LREAL;
      AI_10_dblValue AT %QL0.559 : LREAL;
      AI_11_dblValue AT %QL0.560 : LREAL;
      AI_12_dblValue AT %QL0.561 : LREAL;
      AI_13_dblValue AT %QL0.562 : LREAL;
      AI_14_dblValue AT %QL0.563 : LREAL;
      AI_15_dblValue AT %QL0.564 : LREAL;
      AI_16_dblValue AT %QL0.565 : LREAL;
      AI_17_dblValue AT %QL0.566 : LREAL;
      AI_18_dblValue AT %QL0.567 : LREAL;
      AI_19_dblValue AT %QL0.568 : LREAL;
      AI_1_dblValue AT %QL0.569 : LREAL;
      AI_20_dblValue AT %QL0.570 : LREAL;
      AI_21_dblValue AT %QL0.571 : LREAL;
      AI_22_dblValue AT %QL0.572 : LREAL;
      AI_23_dblValue AT %QL0.573 : LREAL;
      AI_24_dblValue AT %QL0.574 : LREAL;
      AI_25_dblValue AT %QL0.575 : LREAL;
      AI_26_dblValue AT %QL0.576 : LREAL;
      AI_27_dblValue AT %QL0.577 : LREAL;
      AI_28_dblValue AT %QL0.578 : LREAL;
      AI_29_dblValue AT %QL0.579 : LREAL;
      AI_2_dblValue AT %QL0.580 : LREAL;
      AI_30_dblValue AT %QL0.581 : LREAL;
      AI_31_dblValue AT %QL0.582 : LREAL;
      AI_32_dblValue AT %QL0.583 : LREAL;
      AI_33_dblValue AT %QL0.584 : LREAL;
      AI_34_dblValue AT %QL0.585 : LREAL;
      AI_35_dblValue AT %QL0.586 : LREAL;
      AI_36_dblValue AT %QL0.587 : LREAL;
      AI_37_dblValue AT %QL0.588 : LREAL;
      AI_38_dblValue AT %QL0.589 : LREAL;
      AI_39_dblValue AT %QL0.590 : LREAL;
      AI_3_dblValue AT %QL0.591 : LREAL;
      AI_40_dblValue AT %QL0.592 : LREAL;
      AI_41_dblValue AT %QL0.593 : LREAL;
      AI_42_dblValue AT %QL0.594 : LREAL;
      AI_43_dblValue AT %QL0.595 : LREAL;
      AI_44_dblValue AT %QL0.596 : LREAL;
      AI_45_dblValue AT %QL0.597 : LREAL;
      AI_46_dblValue AT %QL0.598 : LREAL;
      AI_47_dblValue AT %QL0.599 : LREAL;
      AI_48_dblValue AT %QL0.600 : LREAL;
      AI_49_dblValue AT %QL0.601 : LREAL;
      AI_4_dblValue AT %QL0.602 : LREAL;
      AI_50_dblValue AT %QL0.603 : LREAL;
      AI_51_dblValue AT %QL0.604 : LREAL;
      AI_52_dblValue AT %QL0.605 : LREAL;
      AI_53_dblValue AT %QL0.606 : LREAL;
      AI_54_dblValue AT %QL0.607 : LREAL;
      AI_55_dblValue AT %QL0.608 : LREAL;
      AI_56_dblValue AT %QL0.609 : LREAL;
      AI_57_dblValue AT %QL0.610 : LREAL;
      AI_58_dblValue AT %QL0.611 : LREAL;
      AI_59_dblValue AT %QL0.612 : LREAL;
      AI_5_dblValue AT %QL0.613 : LREAL;
      AI_60_dblValue AT %QL0.614 : LREAL;
      AI_61_dblValue AT %QL0.615 : LREAL;
      AI_62_dblValue AT %QL0.616 : LREAL;
      AI_63_dblValue AT %QL0.617 : LREAL;
      AI_64_dblValue AT %QL0.618 : LREAL;
      AI_65_dblValue AT %QL0.619 : LREAL;
      AI_66_dblValue AT %QL0.620 : LREAL;
      AI_67_dblValue AT %QL0.621 : LREAL;
      AI_6_dblValue AT %QL0.622 : LREAL;
      AI_7_dblValue AT %QL0.623 : LREAL;
      AI_8_dblValue AT %QL0.624 : LREAL;
      AI_9_dblValue AT %QL0.625 : LREAL;
      BS_Core1 AT %QD0.626 : REAL;
      BS_Core2 AT %QD0.627 : REAL;
      BS_Core3 AT %QD0.628 : REAL;
      BS_Core4 AT %QD0.629 : REAL;
      BS_FreeMemory AT %QD0.630 : REAL;
      BS_Temp1 AT %QD0.631 : REAL;
      BS_Temp2 AT %QD0.632 : REAL;
      DI_A1_10_wValue AT %QW0.633 : UINT;
      DI_A1_11_wValue AT %QW0.634 : UINT;
      DI_A1_12_wValue AT %QW0.635 : UINT;
      DI_A1_13_wValue AT %QW0.636 : UINT;
      DI_A1_14_wValue AT %QW0.637 : UINT;
      DI_A1_15_wValue AT %QW0.638 : UINT;
      DI_A1_1_wValue AT %QW0.639 : UINT;
      DI_A1_2_wValue AT %QW0.640 : UINT;
      DI_A1_3_wValue AT %QW0.641 : UINT;
      DI_A1_4_wValue AT %QW0.642 : UINT;
      DI_A1_5_wValue AT %QW0.643 : UINT;
      DI_A1_6_wValue AT %QW0.644 : UINT;
      DI_A1_7_wValue AT %QW0.645 : UINT;
      DI_A1_8_wValue AT %QW0.646 : UINT;
      DI_A1_9_wValue AT %QW0.647 : UINT;
      DI_A2_1_wValue AT %QW0.648 : UINT;
      DI_A2_2_wValue AT %QW0.649 : UINT;
      DI_A2_3_wValue AT %QW0.650 : UINT;
      DO_A2_10_wValue AT %QW0.651 : UINT;
      DO_A2_11_wValue AT %QW0.652 : UINT;
      DO_A2_12_wValue AT %QW0.653 : UINT;
      DO_A2_13_wValue AT %QW0.654 : UINT;
      DO_A2_4_wValue AT %QW0.655 : UINT;
      DO_A2_5_wValue AT %QW0.656 : UINT;
      DO_A2_6_wValue AT %QW0.657 : UINT;
      DO_A2_7_wValue AT %QW0.658 : UINT;
      DO_A2_8_wValue AT %QW0.659 : UINT;
      DO_A2_9_wValue AT %QW0.660 : UINT;
      IM_CMN_pump_inCommand_ARM AT %QW0.661 : UINT;
      IM_CMN_pump_status AT %QD0.662 : UDINT;
      IM_Kalorifer_ABO_inCommand_ARM AT %QW0.663 : UINT;
      IM_Kalorifer_ABO_status AT %QD0.664 : UDINT;
      IM_MB_inCommand_ARM AT %QW0.665 : UINT;
      IM_MB_status AT %QD0.666 : UDINT;
      IM_SingleSignals_AO_EGPA_ot_PRY_status AT %QD0.683 : UDINT;
      IM_SingleSignals_AO_GPA_na_SHY_status AT %QD0.976 : UDINT;
      IM_SingleSignals_AO_KC_ot_SHKC_04M_status AT %QD0.682 : UDINT;
      IM_SingleSignals_Asinhron_xod_peregryz_status AT %QD0.681 : UDINT;
      IM_SingleSignals_Avar_otkl_viklychatelya_status AT %QD0.680 : UDINT;
      IM_SingleSignals_BEAO_vkl_status AT %QD0.698 : UDINT;
      IM_SingleSignals_Dver_shkafa_otkrita_status AT %QD0.978 : UDINT;
      IM_SingleSignals_EAO_EGPA_ot_PRY_status AT %QD0.684 : UDINT;
      IM_SingleSignals_EAO_GPA_na_SHY_status AT %QD0.977 : UDINT;
      IM_SingleSignals_Gotovnosst_vozb_status AT %QD0.672 : UDINT;
      IM_SingleSignals_NKY_vvod_1_status AT %QD0.675 : UDINT;
      IM_SingleSignals_NKY_vvod_2_status AT %QD0.676 : UDINT;
      IM_SingleSignals_NO_GPA_na_SHY_status AT %QD0.953 : UDINT;
      IM_SingleSignals_Nalichie_220_perem_vhod_v_SHY_status AT %QD0.695 : UDINT;
      IM_SingleSignals_Nalichie_220_post_na_shinah_ypr_ZRY_status AT %QD0.697 : UDINT;
      IM_SingleSignals_Nalichie_220_post_vhod_v_SHY_status AT %QD0.696 : UDINT;
      IM_SingleSignals_Neisprav_BP_10_status AT %QD0.694 : UDINT;
      IM_SingleSignals_Neisprav_BP_1_status AT %QD0.685 : UDINT;
      IM_SingleSignals_Neisprav_BP_2_status AT %QD0.686 : UDINT;
      IM_SingleSignals_Neisprav_BP_3_status AT %QD0.687 : UDINT;
      IM_SingleSignals_Neisprav_BP_4_status AT %QD0.688 : UDINT;
      IM_SingleSignals_Neisprav_BP_5_status AT %QD0.689 : UDINT;
      IM_SingleSignals_Neisprav_BP_6_status AT %QD0.690 : UDINT;
      IM_SingleSignals_Neisprav_BP_7_status AT %QD0.691 : UDINT;
      IM_SingleSignals_Neisprav_BP_8_status AT %QD0.692 : UDINT;
      IM_SingleSignals_Neisprav_BP_9_status AT %QD0.693 : UDINT;
      IM_SingleSignals_Neisprav_cepei_ypr_AVR_pit_vozb_status AT %QD0.677 : UDINT;
      IM_SingleSignals_Net_10_kVt_UcmA_UcmB_status AT %QD0.948 : UDINT;
      IM_SingleSignals_Net_10_kVt_UcmA_UcmC_status AT %QD0.699 : UDINT;
      IM_SingleSignals_Otkl_osn_regylyatora_neisprav_status AT %QD0.673 : UDINT;
      IM_SingleSignals_Potok_masla_posle_ABO_bolshe_status AT %QD0.670 : UDINT;
      IM_SingleSignals_Razreshenie_zagryzki_status AT %QD0.671 : UDINT;
      IM_SingleSignals_SHAVR_1_v_rab_status AT %QD0.678 : UDINT;
      IM_SingleSignals_SHAVR_2_v_rab_status AT %QD0.679 : UDINT;
      IM_SingleSignals_Sbros_srabotki_BREO_status AT %QD0.952 : UDINT;
      IM_SingleSignals_Srabotka_BREO_status AT %QD0.949 : UDINT;
      IM_SingleSignals_dP_gaza_kr_1_status AT %QD0.668 : UDINT;
      IM_SingleSignals_dP_maslo_gaz_menshe_100_kPa_status AT %QD0.667 : UDINT;
      IM_SingleSignals_ostanov_po_zashitam_vozb_avar_status AT %QD0.674 : UDINT;
      IM_SingleSignals_otklon_masla_v_akkym_yplot_status AT %QD0.669 : UDINT;
      IM_Ten_MB_inCommand_ARM AT %QW0.700 : UINT;
      IM_Ten_MB_status AT %QD0.701 : UDINT;
      IM_Ten_kollect_inCommand_ARM AT %QW0.702 : UINT;
      IM_Ten_kollect_status AT %QD0.703 : UDINT;
      IM_kran1_inCommand_ARM AT %QW0.704 : UINT;
      IM_kran1_status AT %QD0.705 : UDINT;
      IM_kran2_inCommand_ARM AT %QW0.706 : UINT;
      IM_kran2_status AT %QD0.707 : UDINT;
      IM_kran3_inCommand_ARM AT %QW0.988 : UINT;
      IM_kran3_status AT %QD0.989 : UDINT;
      IM_kran3b_inCommand_ARM AT %QW0.708 : UINT;
      IM_kran3b_status AT %QD0.709 : UDINT;
      IM_kran4_inCommand_ARM AT %QW0.710 : UINT;
      IM_kran4_status AT %QD0.711 : UDINT;
      IM_kran5_inCommand_ARM AT %QW0.712 : UINT;
      IM_kran5_status AT %QD0.713 : UDINT;
      IM_kran6_inCommand_ARM AT %QW0.714 : UINT;
      IM_kran6_status AT %QD0.715 : UDINT;
      IM_nu1_inCommand_ARM AT %QW0.716 : UINT;
      IM_nu1_status AT %QD0.717 : UDINT;
      IM_nu2_inCommand_ARM AT %QW0.718 : UINT;
      IM_nu2_status AT %QD0.719 : UDINT;
      IM_pns_inCommand_ARM AT %QW0.720 : UINT;
      IM_pns_status AT %QD0.721 : UDINT;
      IM_v1_Avom_inCommand_ARM AT %QW0.722 : UINT;
      IM_v1_Avom_status AT %QD0.723 : UDINT;
      IM_v2_Avom_inCommand_ARM AT %QW0.724 : UINT;
      IM_v2_Avom_status AT %QD0.725 : UDINT;
      IM_v3_Avom_inCommand_ARM AT %QW0.726 : UINT;
      IM_v3_Avom_status AT %QD0.727 : UDINT;
      IM_v4_Avom_inCommand_ARM AT %QW0.728 : UINT;
      IM_v4_Avom_status AT %QD0.729 : UDINT;
      algManager_Mode AT %QW0.730 : UINT;
      algoritms_AntiPompag_UgolVNA_Value AT %QL0.731 : LREAL;
      algoritms_AntiPompag_UgolVNA_inCommand_ARM AT %QW0.732 : UINT;
      algoritms_AntiPompag_UgolVNA_newValue AT %QL0.733 : LREAL;
      algoritms_AntiPompag_UgolVNA_status AT %QD0.734 : UDINT;
      algoritms_AntiPompag_q_Value AT %QL0.735 : LREAL;
      algoritms_AntiPompag_q_inCommand_ARM AT %QW0.736 : UINT;
      algoritms_AntiPompag_q_status AT %QD0.737 : UDINT;
      algoritms_AntiPompag_zapas_Value AT %QL0.738 : LREAL;
      algoritms_AntiPompag_zapas_inCommand_ARM AT %QW0.739 : UINT;
      algoritms_AntiPompag_zapas_status AT %QD0.740 : UDINT;
      algoritms_Apusk_Error AT %QD0.741 : UDINT;
      algoritms_Apusk_Start AT %QD0.742 : UDINT;
      algoritms_Apusk_Top AT %QD0.743 : UDINT;
      algoritms_Apusk_inCommand_ARM AT %QW0.744 : UINT;
      algoritms_Apusk_status AT %QD0.745 : UDINT;
      algoritms_AutoAvom_hysteresis_Value AT %QL0.746 : LREAL;
      algoritms_AutoAvom_hysteresis_inCommand_ARM AT %QW0.747 : UINT;
      algoritms_AutoAvom_hysteresis_newValue AT %QL0.748 : LREAL;
      algoritms_AutoAvom_hysteresis_status AT %QD0.749 : UDINT;
      algoritms_AutoAvom_inCommand_ARM AT %QW0.750 : UINT;
      algoritms_AutoAvom_on1Temperature_Value AT %QL0.751 : LREAL;
      algoritms_AutoAvom_on1Temperature_inCommand_ARM AT %QW0.752 : UINT;
      algoritms_AutoAvom_on1Temperature_newValue AT %QL0.753 : LREAL;
      algoritms_AutoAvom_on1Temperature_status AT %QD0.754 : UDINT;
      algoritms_AutoAvom_on2Temperature_Value AT %QL0.755 : LREAL;
      algoritms_AutoAvom_on2Temperature_inCommand_ARM AT %QW0.756 : UINT;
      algoritms_AutoAvom_on2Temperature_newValue AT %QL0.757 : LREAL;
      algoritms_AutoAvom_on2Temperature_status AT %QD0.758 : UDINT;
      algoritms_AutoAvom_status AT %QD0.759 : UDINT;
      algoritms_AutoPns_OffTimer AT %QW0.760 : UINT;
      algoritms_AutoPns_OnTimer AT %QW0.761 : UINT;
      algoritms_AutoPns_Ust_Run_Value AT %QL0.762 : LREAL;
      algoritms_AutoPns_Ust_Run_inCommand_ARM AT %QW0.763 : UINT;
      algoritms_AutoPns_Ust_Run_newValue AT %QL0.764 : LREAL;
      algoritms_AutoPns_Ust_Run_status AT %QD0.765 : UDINT;
      algoritms_AutoPns_Ust_Stop_Value AT %QL0.766 : LREAL;
      algoritms_AutoPns_Ust_Stop_inCommand_ARM AT %QW0.767 : UINT;
      algoritms_AutoPns_Ust_Stop_newValue AT %QL0.768 : LREAL;
      algoritms_AutoPns_Ust_Stop_status AT %QD0.769 : UDINT;
      algoritms_AutoPns_inCommand_ARM AT %QW0.770 : UINT;
      algoritms_AutoPns_status AT %QD0.771 : UDINT;
      algoritms_AutoTen_inCommand_ARM AT %QW0.772 : UINT;
      algoritms_AutoTen_offTemperature_Value AT %QL0.773 : LREAL;
      algoritms_AutoTen_offTemperature_inCommand_ARM AT %QW0.774 : UINT;
      algoritms_AutoTen_offTemperature_newValue AT %QL0.775 : LREAL;
      algoritms_AutoTen_offTemperature_status AT %QD0.776 : UDINT;
      algoritms_AutoTen_status AT %QD0.777 : UDINT;
      algoritms_Remont_inCommand_ARM AT %QW0.778 : UINT;
      algoritms_Remont_status AT %QD0.779 : UDINT;
      algoritms_RingToLine_Error AT %QD0.780 : UDINT;
      algoritms_RingToLine_Start AT %QD0.781 : UDINT;
      algoritms_RingToLine_Top AT %QD0.782 : UDINT;
      algoritms_RingToLine_inCommand_ARM AT %QW0.783 : UINT;
      algoritms_RingToLine_status AT %QD0.784 : UDINT;
      algoritms_SemiAutoPusk_Error AT %QD0.785 : UDINT;
      algoritms_SemiAutoPusk_Start AT %QD0.786 : UDINT;
      algoritms_SemiAutoPusk_Top AT %QD0.787 : UDINT;
      algoritms_SemiAutoPusk_cmdRun1ph_inCommand_ARM AT %QW0.788 : UINT;
      algoritms_SemiAutoPusk_cmdRun1ph_status AT %QD0.789 : UDINT;
      algoritms_SemiAutoPusk_cmdRun2ph_inCommand_ARM AT %QW0.790 : UINT;
      algoritms_SemiAutoPusk_cmdRun2ph_status AT %QD0.791 : UDINT;
      algoritms_SemiAutoPusk_cmdRun3ph_inCommand_ARM AT %QW0.792 : UINT;
      algoritms_SemiAutoPusk_cmdRun3ph_status AT %QD0.793 : UDINT;
      algoritms_SemiAutoPusk_cmdRun4ph_inCommand_ARM AT %QW0.794 : UINT;
      algoritms_SemiAutoPusk_cmdRun4ph_status AT %QD0.795 : UDINT;
      algoritms_SemiAutoPusk_inCommand_ARM AT %QW0.796 : UINT;
      algoritms_SemiAutoPusk_status AT %QD0.797 : UDINT;
      algoritms_TestProtection_inCommand_ARM AT %QW0.798 : UINT;
      algoritms_TestProtection_status AT %QD0.799 : UDINT;
      algoritms_ao_Error AT %QD0.800 : UDINT;
      algoritms_ao_Start AT %QD0.801 : UDINT;
      algoritms_ao_Top AT %QD0.802 : UDINT;
      algoritms_ao_inCommand_ARM AT %QW0.803 : UINT;
      algoritms_ao_status AT %QD0.804 : UDINT;
      algoritms_ao_waitKran_timer AT %QW0.805 : UINT;
      algoritms_autoNu_NotHasRezervNU AT %QX0.806 : BOOL;
      algoritms_autoNu_Reset_HasNU_inCommand_ARM AT %QW0.807 : UINT;
      algoritms_autoNu_Reset_HasNU_status AT %QD0.808 : UDINT;
      algoritms_autoNu_Ust_Swap_Value AT %QL0.809 : LREAL;
      algoritms_autoNu_Ust_Swap_inCommand_ARM AT %QW0.810 : UINT;
      algoritms_autoNu_Ust_Swap_newValue AT %QL0.811 : LREAL;
      algoritms_autoNu_Ust_Swap_status AT %QD0.812 : UDINT;
      algoritms_autoNu_inCommand_ARM AT %QW0.813 : UINT;
      algoritms_autoNu_mainNU_inCommand_ARM AT %QW0.814 : UINT;
      algoritms_autoNu_mainNU_status AT %QD0.815 : UDINT;
      algoritms_autoNu_status AT %QD0.816 : UDINT;
      algoritms_engineRun_BreakPuskTimer_timer AT %QW0.817 : UINT;
      algoritms_engineRun_Error AT %QD0.818 : UDINT;
      algoritms_engineRun_Start AT %QD0.819 : UDINT;
      algoritms_engineRun_Top AT %QD0.820 : UDINT;
      algoritms_engineRun_inCommand_ARM AT %QW0.821 : UINT;
      algoritms_engineRun_status AT %QD0.822 : UDINT;
      algoritms_filling_BreakPuskTimer_timer AT %QW0.823 : UINT;
      algoritms_filling_Error AT %QD0.824 : UDINT;
      algoritms_filling_Start AT %QD0.825 : UDINT;
      algoritms_filling_Top AT %QD0.826 : UDINT;
      algoritms_filling_inCommand_ARM AT %QW0.827 : UINT;
      algoritms_filling_status AT %QD0.828 : UDINT;
      algoritms_filling_waitAfterKran4_timer AT %QW0.829 : UINT;
      algoritms_filling_waitAfterKran5_timer AT %QW0.830 : UINT;
      algoritms_no_Error AT %QD0.831 : UDINT;
      algoritms_no_Start AT %QD0.832 : UDINT;
      algoritms_no_Top AT %QD0.833 : UDINT;
      algoritms_no_inCommand_ARM AT %QW0.834 : UINT;
      algoritms_no_status AT %QD0.835 : UDINT;
      algoritms_no_waitCloseKran_timer AT %QW0.836 : UINT;
      algoritms_ppu_Error AT %QD0.837 : UDINT;
      algoritms_ppu_First_for_I AT %IX0.983 : BOOL;
      algoritms_ppu_First_for_K AT %IX0.982 : BOOL;
      algoritms_ppu_First_for_Pms_dPmg AT %IX0.981 : BOOL;
      algoritms_ppu_First_for_Pusk AT %QX0.979 : BOOL;
      algoritms_ppu_First_for_V AT %QX0.980 : BOOL;
      algoritms_ppu_Forth AT %IX0.987 : BOOL;
      algoritms_ppu_Second_I AT %IX0.985 : BOOL;
      algoritms_ppu_Second_V_Pusk AT %IX0.984 : BOOL;
      algoritms_ppu_Start AT %QD0.838 : UDINT;
      algoritms_ppu_Third AT %IX0.986 : BOOL;
      algoritms_ppu_Top AT %QD0.839 : UDINT;
      algoritms_ppu_inCommand_ARM AT %QW0.840 : UINT;
      algoritms_ppu_status AT %QD0.841 : UDINT;
      algoritms_puskK_Error AT %QD0.842 : UDINT;
      algoritms_puskK_Start AT %QD0.843 : UDINT;
      algoritms_puskK_Top AT %QD0.844 : UDINT;
      algoritms_puskK_inCommand_ARM AT %QW0.845 : UINT;
      algoritms_puskK_questionFilling_inCommand_ARM AT %QW0.846 : UINT;
      algoritms_puskK_questionFilling_status AT %QD0.847 : UDINT;
      algoritms_puskK_questionUnload_inCommand_ARM AT %QW0.848 : UINT;
      algoritms_puskK_questionUnload_status AT %QD0.849 : UDINT;
      algoritms_puskK_status AT %QD0.850 : UDINT;
      algoritms_puskK_wait720_timer AT %QW0.851 : UINT;
      algoritms_puskOilSystem_BreakPuskTimer_Poil_timer AT %QW0.852 : UINT;
      algoritms_puskOilSystem_BreakPuskTimer_dPmg_timer AT %QW0.853 : UINT;
      algoritms_puskOilSystem_Error AT %QD0.854 : UDINT;
      algoritms_puskOilSystem_Start AT %QD0.855 : UDINT;
      algoritms_puskOilSystem_Top AT %QD0.856 : UDINT;
      algoritms_puskOilSystem_Ust_dPmg_Value AT %QL0.857 : LREAL;
      algoritms_puskOilSystem_Ust_dPmg_inCommand_ARM AT %QW0.858 : UINT;
      algoritms_puskOilSystem_Ust_dPmg_newValue AT %QL0.859 : LREAL;
      algoritms_puskOilSystem_Ust_dPmg_status AT %QD0.860 : UDINT;
      algoritms_puskOilSystem_inCommand_ARM AT %QW0.861 : UINT;
      algoritms_puskOilSystem_status AT %QD0.862 : UDINT;
      algoritms_puskV_Error AT %QD0.863 : UDINT;
      algoritms_puskV_Start AT %QD0.864 : UDINT;
      algoritms_puskV_Top AT %QD0.865 : UDINT;
      algoritms_puskV_inCommand_ARM AT %QW0.866 : UINT;
      algoritms_puskV_questionFilling_inCommand_ARM AT %QW0.867 : UINT;
      algoritms_puskV_questionFilling_status AT %QD0.868 : UDINT;
      algoritms_puskV_questionMVoff_inCommand_ARM AT %QW0.869 : UINT;
      algoritms_puskV_questionMVoff_status AT %QD0.870 : UDINT;
      algoritms_puskV_status AT %QD0.871 : UDINT;
      algoritms_puskV_wait600_timer AT %QW0.872 : UINT;
      algoritms_testIm_TypeSwitch_inCommand_ARM AT %QW0.873 : UINT;
      algoritms_testIm_TypeSwitch_status AT %QD0.874 : UDINT;
      algoritms_testIm_inCommand_ARM AT %QW0.875 : UINT;
      algoritms_testIm_status AT %QD0.876 : UDINT;
      algoritms_testPms_BreakTest_timer AT %QW0.877 : UINT;
      algoritms_testPms_Error AT %QD0.878 : UDINT;
      algoritms_testPms_Start AT %QD0.879 : UDINT;
      algoritms_testPms_Top AT %QD0.880 : UDINT;
      algoritms_testPms_algContinue_inCommand_ARM AT %QW0.881 : UINT;
      algoritms_testPms_algContinue_status AT %QD0.882 : UDINT;
      algoritms_testPms_inCommand_ARM AT %QW0.883 : UINT;
      algoritms_testPms_status AT %QD0.884 : UDINT;
      algoritms_testdPmg_BreakTest_timer AT %QW0.885 : UINT;
      algoritms_testdPmg_Error AT %QD0.886 : UDINT;
      algoritms_testdPmg_Start AT %QD0.887 : UDINT;
      algoritms_testdPmg_Top AT %QD0.888 : UDINT;
      algoritms_testdPmg_Ust_dPLow_Value AT %QL0.889 : LREAL;
      algoritms_testdPmg_Ust_dPLow_inCommand_ARM AT %QW0.890 : UINT;
      algoritms_testdPmg_Ust_dPLow_newValue AT %QL0.891 : LREAL;
      algoritms_testdPmg_Ust_dPLow_status AT %QD0.892 : UDINT;
      algoritms_testdPmg_algContinue_inCommand_ARM AT %QW0.893 : UINT;
      algoritms_testdPmg_algContinue_status AT %QD0.894 : UDINT;
      algoritms_testdPmg_inCommand_ARM AT %QW0.895 : UINT;
      algoritms_testdPmg_status AT %QD0.896 : UDINT;
      algoritms_vibegPNS_Error AT %QD0.897 : UDINT;
      algoritms_vibegPNS_Start AT %QD0.898 : UDINT;
      algoritms_vibegPNS_Top AT %QD0.899 : UDINT;
      algoritms_vibegPNS_algContinue_inCommand_ARM AT %QW0.900 : UINT;
      algoritms_vibegPNS_algContinue_status AT %QD0.901 : UDINT;
      algoritms_vibegPNS_inCommand_ARM AT %QW0.902 : UINT;
      algoritms_vibegPNS_status AT %QD0.903 : UDINT;
      algoritms_vibegPNS_waitVibeg_timer AT %QW0.904 : UINT;
      protectManager_protectionInRemont AT %QX0.905 : BOOL;
      protections_AO_EGPA_ot_PRY_DI_inCommand_ARM AT %QW0.906 : UINT;
      protections_AO_EGPA_ot_PRY_DI_status AT %QD0.907 : UDINT;
      protections_AO_GPA_na_SHY_DI_inCommand_ARM AT %QW0.908 : UINT;
      protections_AO_GPA_na_SHY_DI_status AT %QD0.909 : UDINT;
      protections_AO_KC_ot_SHKC_04M_DI_inCommand_ARM AT %QW0.910 : UINT;
      protections_AO_KC_ot_SHKC_04M_DI_status AT %QD0.911 : UDINT;
      protections_Avar_otkl_viklychatelya_DI_inCommand_ARM AT %QW0.912 : UINT;
      protections_Avar_otkl_viklychatelya_DI_status AT %QD0.913 : UDINT;
      protections_Davlenie_gaza_na_vhode_nagnetatelya_HA_inCommand_ARM AT %QW0.914 : UINT;
      protections_Davlenie_gaza_na_vhode_nagnetatelya_HA_status AT %QD0.915 : UDINT;
      protections_Davlenie_gaza_na_vihode_nagnetatelya_HA_inCommand_ARM AT %QW0.916 : UINT;
      protections_Davlenie_gaza_na_vihode_nagnetatelya_HA_status AT %QD0.917 : UDINT;
      protections_Davlenie_masla_smazki_nizkoe_LA_inCommand_ARM AT %QW0.918 : UINT;
      protections_Davlenie_masla_smazki_nizkoe_LA_status AT %QD0.919 : UDINT;
      protections_Davlenie_masla_smazki_visokoe_LA_inCommand_ARM AT %QW0.920 : UINT;
      protections_Davlenie_masla_smazki_visokoe_LA_status AT %QD0.921 : UDINT;
      protections_Kran1sdvig_inCommand_ARM AT %QW0.922 : UINT;
      protections_Kran1sdvig_status AT %QD0.923 : UDINT;
      protections_Kran2sdvig_inCommand_ARM AT %QW0.924 : UINT;
      protections_Kran2sdvig_status AT %QD0.925 : UDINT;
      protections_MBOff_inCommand_ARM AT %QW0.926 : UINT;
      protections_MBOff_status AT %QD0.927 : UDINT;
      protections_Osevoi_sdvig_nagnetatelya_vlevo_HA_inCommand_ARM AT %QW0.928 : UINT;
      protections_Osevoi_sdvig_nagnetatelya_vlevo_HA_status AT %QD0.929 : UDINT;
      protections_Osevoi_sdvig_nagnetatelya_vpravo_HA_inCommand_ARM AT %QW0.930 : UINT;
      protections_Osevoi_sdvig_nagnetatelya_vpravo_HA_status AT %QD0.931 : UDINT;
      protections_Perepad_davleniya_maslo_gaz_LA_inCommand_ARM AT %QW0.932 : UINT;
      protections_Perepad_davleniya_maslo_gaz_LA_status AT %QD0.933 : UDINT;
      protections_T_OP_ED_t1_HA_inCommand_ARM AT %QW0.934 : UINT;
      protections_T_OP_ED_t1_HA_status AT %QD0.935 : UDINT;
      protections_T_OP_kolesa_nagnetatelya_t4_HA_inCommand_ARM AT %QW0.936 : UINT;
      protections_T_OP_kolesa_nagnetatelya_t4_HA_status AT %QD0.937 : UDINT;
      protections_T_OP_redyctora_so_storony_nagnetatelya_t6_HA_inCommand_ARM AT %QW0.938 : UINT;
      protections_T_OP_redyctora_so_storony_nagnetatelya_t6_HA_status AT %QD0.939 : UDINT;
      protections_T_OP_shesterni_ED_t5_HA_inCommand_ARM AT %QW0.940 : UINT;
      protections_T_OP_shesterni_ED_t5_HA_status AT %QD0.941 : UDINT;
      protections_T_OYP_ED_so_storony_redyctora_t2_HA_inCommand_ARM AT %QW0.942 : UINT;
      protections_T_OYP_ED_so_storony_redyctora_t2_HA_status AT %QD0.943 : UDINT;
      protections_T_OYP_kolesa_ED_t3_HA_inCommand_ARM AT %QW0.944 : UINT;
      protections_T_OYP_kolesa_ED_t3_HA_status AT %QD0.945 : UDINT;
      protections_T_OYP_nagnetatelya_so_storony_redyctora_t7_HA_inCommand_ARM AT %QW0.946 : UINT;
      protections_T_OYP_nagnetatelya_so_storony_redyctora_t7_HA_status AT %QD0.947 : UDINT;
      protections_T_OYP_svobodnogo_konca_nagnetatelya_t8_HA_inCommand_ARM AT %QW0.950 : UINT;
      protections_T_OYP_svobodnogo_konca_nagnetatelya_t8_HA_status AT %QD0.951 : UDINT;
      protections_T_YP_rabochih_kolodok_nagnetatelya_t9_HA_inCommand_ARM AT %QW0.954 : UINT;
      protections_T_YP_rabochih_kolodok_nagnetatelya_t9_HA_status AT %QD0.955 : UDINT;
      protections_T_gaz_out_nagnetatelia_HA_inCommand_ARM AT %QW0.956 : UINT;
      protections_T_gaz_out_nagnetatelia_HA_status AT %QD0.957 : UDINT;
      protections_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA_inCommand_ARM AT %QW0.958 : UINT;
      protections_T_ne_rabochih_kolodok_YP_nagnetatelya_t10_HA_status AT %QD0.959 : UDINT;
      protections_Vibroskorost_OP_ED_t1_HA_inCommand_ARM AT %QW0.960 : UINT;
      protections_Vibroskorost_OP_ED_t1_HA_status AT %QD0.961 : UDINT;
      protections_Vibroskorost_OP_kolesa_nagnetatelya_t4_HA_inCommand_ARM AT %QW0.962 : UINT;
      protections_Vibroskorost_OP_kolesa_nagnetatelya_t4_HA_status AT %QD0.963 : UDINT;
      protections_Vibroskorost_OP_shesterni_ED_t5_HA_inCommand_ARM AT %QW0.964 : UINT;
      protections_Vibroskorost_OP_shesterni_ED_t5_HA_status AT %QD0.965 : UDINT;
      protections_Vibroskorost_OP_shesterni_nagnetatelya_t6_HA_inCommand_ARM AT %QW0.966 : UINT;
      protections_Vibroskorost_OP_shesterni_nagnetatelya_t6_HA_status AT %QD0.967 : UDINT;
      protections_Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA_inCommand_ARM AT %QW0.972 : UINT;
      protections_Vibroskorost_OYP_ED_so_storony_redyctora_t2_HA_status AT %QD0.973 : UDINT;
      protections_Vibroskorost_OYP_kolesa_ED_t3_HA_inCommand_ARM AT %QW0.974 : UINT;
      protections_Vibroskorost_OYP_kolesa_ED_t3_HA_status AT %QD0.975 : UDINT;
      protections_dP_maslo_gaz_menshe_100_kPa_DI_inCommand_ARM AT %QW0.968 : UINT;
      protections_dP_maslo_gaz_menshe_100_kPa_DI_status AT %QD0.969 : UDINT;
      protections_ostanov_po_zashitam_vozb_avar_DI_inCommand_ARM AT %QW0.970 : UINT;
      protections_ostanov_po_zashitam_vozb_avar_DI_status AT %QD0.971 : UDINT;
    END_VAR
    TASK task0(INTERVAL := T#500ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
