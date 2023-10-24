// clang-format off

#include <assert.h>
#include <errno.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "POUS.h"
#include <beremiz/beremiz.h>

#include "iec_types_all.h"
#include "config1.h"

extern PROGRAM0 RESOURCE1__INSTANCE0;

#ifdef DEBUG_PLC
#define err(_PRNTMSG, ...) fprintf(stderr, "[VARIABLES][err][%s:%d]: " _PRNTMSG "\n", __func__, __LINE__, ##__VA_ARGS__)
#else
#define err(_PRNTMSG, ...) fprintf(stderr, "[VARIABLES][err]: " _PRNTMSG "\n", ##__VA_ARGS__)
#endif // DEBUG_PLC

void UnpackVar(void* varp, __IEC_types_enum vartype, void **value_p, void **f_value_p, uint8_t **flags);

int __variables_init_STSW_INI(){
  iec_var_t *st;

  PROGRAM0 *p_PROGRAM0;
  LREAL *p_LREAL;
  ULINT *p_ULINT;
  REAL *p_REAL;
  FB_TIMINGS *p_FB_TIMINGS;
  BOOL *p_BOOL;
  UINT *p_UINT;
  PROC_AI_INIT *p_PROC_AI_INIT;
  FB_AI_INIT *p_FB_AI_INIT;
  TIME *p_TIME;
  STRUCT_AI *p_STRUCT_AI;
  DWORD *p_DWORD;
  BYTE *p_BYTE;
  WORD *p_WORD;
  AICONFIG *p_AICONFIG;
  PROC_AI *p_PROC_AI;
  FB_AISOURCEMLP *p_FB_AISOURCEMLP;
  TITEMAIN *p_TITEMAIN;
  TITEMDIN *p_TITEMDIN;
  TYPE_STATUSAI *p_TYPE_STATUSAI;
  TYPE_COMMANDANALOG *p_TYPE_COMMANDANALOG;
  FB_SUNPACKERCOMMAND *p_FB_SUNPACKERCOMMAND;
  TYPE_ANALOGLIMITFLAGS *p_TYPE_ANALOGLIMITFLAGS;
  TON *p_TON;
  R_TRIG *p_R_TRIG;
  FB_AISOURCEMLP_TIMER *p_FB_AISOURCEMLP_TIMER;
  PROC_AO_INIT *p_PROC_AO_INIT;
  FB_AO_INIT *p_FB_AO_INIT;
  STRUCT_AO *p_STRUCT_AO;
  AOCONFIG *p_AOCONFIG;
  PROC_AO *p_PROC_AO;
  FB_AOSOURCEMLP *p_FB_AOSOURCEMLP;
  TDOUBLEDATA *p_TDOUBLEDATA;
  PROC_DI_INIT *p_PROC_DI_INIT;
  FB_DI_INIT *p_FB_DI_INIT;
  STRUCT_DI *p_STRUCT_DI;
  __IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t *p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t;
  TYPE_RELIABLEBIT *p_TYPE_RELIABLEBIT;
  DICONFIG *p_DICONFIG;
  PROC_DI *p_PROC_DI;
  FB_DISOURCEMLP *p_FB_DISOURCEMLP;
  INT *p_INT;
  UDINT *p_UDINT;
  PROC_DO_INIT *p_PROC_DO_INIT;
  FB_DO_INIT *p_FB_DO_INIT;
  STRUCT_DO *p_STRUCT_DO;
  __IEC___ARRAY_OF_BOOL_16_t *p___IEC___ARRAY_OF_BOOL_16_t;
  DOCONFIG *p_DOCONFIG;
  PROC_DO *p_PROC_DO;
  FB_DOSOURCEMLP *p_FB_DOSOURCEMLP;
  TWORDDATA *p_TWORDDATA;
  OPC_ALGORITMS_SET *p_OPC_ALGORITMS_SET;
  ALGORITMSCONFIG *p_ALGORITMSCONFIG;
  STRUCT_ALG *p_STRUCT_ALG;
  STRUCT_ALGORITMSMANAGER *p_STRUCT_ALGORITMSMANAGER;
  STRUCT_PROTECTIONSMANAGER *p_STRUCT_PROTECTIONSMANAGER;
  STRUCT_ALGTIMERS *p_STRUCT_ALGTIMERS;
  ALGORITMSQUESTIONS *p_ALGORITMSQUESTIONS;
  STRUCT_QUESTION *p_STRUCT_QUESTION;
  OPC_ALGORITMS_GET *p_OPC_ALGORITMS_GET;
  PROC_IM_INIT *p_PROC_IM_INIT;
  FB_KRAN_INIT *p_FB_KRAN_INIT;
  STRUCT_KRAN *p_STRUCT_KRAN;
  FB_SWITCH_INIT *p_FB_SWITCH_INIT;
  STRUCT_SWITCH *p_STRUCT_SWITCH;
  FB_OILPUMP_INIT *p_FB_OILPUMP_INIT;
  STRUCT_OILPUMP *p_STRUCT_OILPUMP;
  FB_SECTIONSWITCH_INIT *p_FB_SECTIONSWITCH_INIT;
  STRUCT_SECTIONSWITCH *p_STRUCT_SECTIONSWITCH;
  FB_ANALOGPARAMETR_INIT *p_FB_ANALOGPARAMETR_INIT;
  STRUCT_ANALOGPARAMETR *p_STRUCT_ANALOGPARAMETR;
  FB_DISCRETPARAMETR_INIT *p_FB_DISCRETPARAMETR_INIT;
  STRUCT_DISCRETPARAMETR *p_STRUCT_DISCRETPARAMETR;
  FB_SINGLESIGNAL_INIT *p_FB_SINGLESIGNAL_INIT;
  STRUCT_SINGLESIGNAL *p_STRUCT_SINGLESIGNAL;
  FB_SINGLEOUTPUT_INIT *p_FB_SINGLEOUTPUT_INIT;
  STRUCT_SINGLEOUTPUT *p_STRUCT_SINGLEOUTPUT;
  IMCONFIG *p_IMCONFIG;
  STRUCT_RESERVEIM *p_STRUCT_RESERVEIM;
  STRUCT_RESERVEIM2 *p_STRUCT_RESERVEIM2;
  IM_SINGLESIGNALS *p_IM_SINGLESIGNALS;
  IM_SINGLEOUTPUTS *p_IM_SINGLEOUTPUTS;
  PROC_IM *p_PROC_IM;
  FB_KRAN *p_FB_KRAN;
  TYPE_STATUSDUALINPUT *p_TYPE_STATUSDUALINPUT;
  TYPE_COMMANDDUALINPUT *p_TYPE_COMMANDDUALINPUT;
  TOF *p_TOF;
  FB_OILPUMP *p_FB_OILPUMP;
  FB_SWITCH *p_FB_SWITCH;
  FB_SECTIONSWITCH *p_FB_SECTIONSWITCH;
  TYPE_BASKETSTATS *p_TYPE_BASKETSTATS;
  FB_MEANDR *p_FB_MEANDR;
  FB_SINGLESIGNAL *p_FB_SINGLESIGNAL;
  FB_SINGLEOUTPUT *p_FB_SINGLEOUTPUT;
  PROC_PROTECTIONS_INIT *p_PROC_PROTECTIONS_INIT;
  FB_DIPROTECTION_INIT *p_FB_DIPROTECTION_INIT;
  STRUCT_DIPROTECTION *p_STRUCT_DIPROTECTION;
  FB_AIPROTECTION_INIT *p_FB_AIPROTECTION_INIT;
  STRUCT_AIPROTECTION *p_STRUCT_AIPROTECTION;
  PROTECTIONSCONFIG *p_PROTECTIONSCONFIG;
  TYPE_PROTECTIONTAGS *p_TYPE_PROTECTIONTAGS;
  PROC_PROTECTION *p_PROC_PROTECTION;
  FB_MVPROTECTION *p_FB_MVPROTECTION;
  F_TRIG *p_F_TRIG;
  FB_DIPROTECTION *p_FB_DIPROTECTION;
  FB_KRANOPENPROTECTION *p_FB_KRANOPENPROTECTION;
  FB_AIPROTECTION *p_FB_AIPROTECTION;
  PROC_ALGORITMS *p_PROC_ALGORITMS;
  REMONTALG *p_REMONTALG;
  TYPE_MODEGPA *p_TYPE_MODEGPA;
  TYPE_COMMANDSPOTECTIONSMANAGER *p_TYPE_COMMANDSPOTECTIONSMANAGER;
  TESTPROTECTIONALG *p_TESTPROTECTIONALG;
  TESTIMALG *p_TESTIMALG;
  FB_AUTOTENALG *p_FB_AUTOTENALG;
  FB_AUTOPNSALG *p_FB_AUTOPNSALG;
  FB_AUTOAVOMALG *p_FB_AUTOAVOMALG;
  FB_VIBEGPNSALG *p_FB_VIBEGPNSALG;
  STRUCT_PHASEALGORITM *p_STRUCT_PHASEALGORITM;
  FB_PH_ALGORITM *p_FB_PH_ALGORITM;
  FB_PH_TIMER *p_FB_PH_TIMER;
  FB_QUESTION *p_FB_QUESTION;
  TYPE_ANSWERS *p_TYPE_ANSWERS;
  FB_PH_SWITCH *p_FB_PH_SWITCH;
  FB_PH_CUSTOMPHASE *p_FB_PH_CUSTOMPHASE;
  FB_AUTONUALG *p_FB_AUTONUALG;
  FB_PUSKOILSYSTEMALG *p_FB_PUSKOILSYSTEMALG;
  FB_PH_WAITANALOGVALUE *p_FB_PH_WAITANALOGVALUE;
  FB_PH_OILPUMP *p_FB_PH_OILPUMP;
  FB_ANTIPOMPAGALG *p_FB_ANTIPOMPAGALG;
  FB_TABLEVALUE_MIN *p_FB_TABLEVALUE_MIN;
  __IEC___ARRAY_OF_TYPE_TABLEREC_9_t *p___IEC___ARRAY_OF_TYPE_TABLEREC_9_t;
  TYPE_TABLEREC *p_TYPE_TABLEREC;
  FB_TABLEVALUE_MAX *p_FB_TABLEVALUE_MAX;
  FB_RASHODALG *p_FB_RASHODALG;
  FB_ZAPASALG *p_FB_ZAPASALG;
  NOALG *p_NOALG;
  FB_PH_KRAN *p_FB_PH_KRAN;
  FB_PH_SECTIONSWITCH *p_FB_PH_SECTIONSWITCH;
  AOALG *p_AOALG;
  PPUALG *p_PPUALG;
  FILLINGALG *p_FILLINGALG;
  FB_PH_DIPROTECTION *p_FB_PH_DIPROTECTION;
  ENGINERUNALG *p_ENGINERUNALG;
  PUSKKALG *p_PUSKKALG;
  PUSKVALG *p_PUSKVALG;
  TESTDPMGALG *p_TESTDPMGALG;
  TESTPMSALG *p_TESTPMSALG;
  FB_PH_AIPROTECTION *p_FB_PH_AIPROTECTION;
  APUSKALG *p_APUSKALG;
  SEMIAUTOPUSKALG *p_SEMIAUTOPUSKALG;
  FB_ALGORITMSMANAGER *p_FB_ALGORITMSMANAGER;
  FB_PROTECTIONSMANAGER *p_FB_PROTECTIONSMANAGER;

  { // 19748 PROGRAM0.IM_STRUCTS_INI.STSW_INI.DATA_INI
    st = getVariable(19748);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.DATA_INI", 41);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_BOOL = (BOOL*)&p_FB_SWITCH_INIT->DATA_INI;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19749 PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_STATON
    st = getVariable(19749);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_STATON", 50);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_BOOL = (BOOL*)&p_FB_SWITCH_INIT->ISVALIDREF_STATON;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19750 PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_STATOFF
    st = getVariable(19750);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_STATOFF", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_BOOL = (BOOL*)&p_FB_SWITCH_INIT->ISVALIDREF_STATOFF;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19751 PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_CMDON
    st = getVariable(19751);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_CMDON", 49);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_BOOL = (BOOL*)&p_FB_SWITCH_INIT->ISVALIDREF_CMDON;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19752 PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_CMDOFF
    st = getVariable(19752);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_CMDOFF", 50);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_BOOL = (BOOL*)&p_FB_SWITCH_INIT->ISVALIDREF_CMDOFF;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19753 PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_INBREAKCMDON
    st = getVariable(19753);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_INBREAKCMDON", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_BOOL = (BOOL*)&p_FB_SWITCH_INIT->ISVALIDREF_INBREAKCMDON;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19754 PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_INBREAKCMDOFF
    st = getVariable(19754);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.ISVALIDREF_INBREAKCMDOFF", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_BOOL = (BOOL*)&p_FB_SWITCH_INIT->ISVALIDREF_INBREAKCMDOFF;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19755 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.INCOMMAND
    st = getVariable(19755);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.INCOMMAND", 49);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_WORD = (WORD*)&p_STRUCT_SWITCH->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 19756 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.STATUS
    st = getVariable(19756);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.STATUS", 46);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_DWORD = (DWORD*)&p_STRUCT_SWITCH->STATUS;
    st->value_p = p_DWORD;
  }
  { // 19757 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ONSTATUS
    st = getVariable(19757);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ONSTATUS", 48);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BYTE = (BYTE*)&p_STRUCT_SWITCH->ONSTATUS;
    st->value_p = p_BYTE;
  }
  { // 19758 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.INOPCCOMMANDSDISABLED
    st = getVariable(19758);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.INOPCCOMMANDSDISABLED", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 19759 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.SDVIG
    st = getVariable(19759);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.SDVIG", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->SDVIG;
    st->value_p = p_BOOL;
  }
  { // 19760 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.NS
    st = getVariable(19760);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.NS", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->NS;
    st->value_p = p_BOOL;
  }
  { // 19761 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.COMMANDFAULT
    st = getVariable(19761);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.COMMANDFAULT", 52);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->COMMANDFAULT;
    st->value_p = p_BOOL;
  }
  { // 19762 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ACCIDENT
    st = getVariable(19762);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ACCIDENT", 48);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ACCIDENT;
    st->value_p = p_BOOL;
  }
  { // 19763 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.AUTO
    st = getVariable(19763);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.AUTO", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->AUTO;
    st->value_p = p_BOOL;
  }
  { // 19764 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.MANUAL
    st = getVariable(19764);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.MANUAL", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->MANUAL;
    st->value_p = p_BOOL;
  }
  { // 19765 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.LOCAL
    st = getVariable(19765);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.LOCAL", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->LOCAL;
    st->value_p = p_BOOL;
  }
  { // 19766 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.DISTANCE
    st = getVariable(19766);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.DISTANCE", 48);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->DISTANCE;
    st->value_p = p_BOOL;
  }
  { // 19767 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ERRORPOWEROFF
    st = getVariable(19767);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ERRORPOWEROFF", 53);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ERRORPOWEROFF;
    st->value_p = p_BOOL;
  }
  { // 19768 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ERRORBLOCK
    st = getVariable(19768);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ERRORBLOCK", 50);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ERRORBLOCK;
    st->value_p = p_BOOL;
  }
  { // 19769 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.BREAKCMDON
    st = getVariable(19769);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.BREAKCMDON", 50);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->BREAKCMDON;
    st->value_p = p_BOOL;
  }
  { // 19770 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.BREAKCMDOFF
    st = getVariable(19770);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.BREAKCMDOFF", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->BREAKCMDOFF;
    st->value_p = p_BOOL;
  }
  { // 19771 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.OPCCOMMANDSDISABLED
    st = getVariable(19771);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.OPCCOMMANDSDISABLED", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 19772 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.LASTCMDISON
    st = getVariable(19772);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.LASTCMDISON", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->LASTCMDISON;
    st->value_p = p_BOOL;
  }
  { // 19773 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_STATON
    st = getVariable(19773);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_STATON", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_STATON;
    st->value_p = p_BOOL;
  }
  { // 19774 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_STATOFF
    st = getVariable(19774);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_STATOFF", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_STATOFF;
    st->value_p = p_BOOL;
  }
  { // 19775 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_CMDON
    st = getVariable(19775);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_CMDON", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_CMDON;
    st->value_p = p_BOOL;
  }
  { // 19776 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_CMDOFF
    st = getVariable(19776);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_CMDOFF", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_CMDOFF;
    st->value_p = p_BOOL;
  }
  { // 19777 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_INBREAKCMDON
    st = getVariable(19777);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_INBREAKCMDON", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_INBREAKCMDON;
    st->value_p = p_BOOL;
  }
  { // 19778 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_INBREAKCMDOFF
    st = getVariable(19778);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.ISVALIDREF_INBREAKCMDOFF", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_INBREAKCMDOFF;
    st->value_p = p_BOOL;
  }
  { // 19779 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.INCOMMAND_ALG
    st = getVariable(19779);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.INCOMMAND_ALG", 53);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_WORD = (WORD*)&p_STRUCT_SWITCH->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 19780 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.INCOMMAND_ARM
    st = getVariable(19780);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.INCOMMAND_ARM", 53);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_WORD = (WORD*)&p_STRUCT_SWITCH->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 19781 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.CMDON
    st = getVariable(19781);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.CMDON", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->CMDON;
    st->value_p = p_BOOL;
  }
  { // 19782 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.CMDOFF
    st = getVariable(19782);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.CMDOFF", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->CMDOFF;
    st->value_p = p_BOOL;
  }
  { // 19783 PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.RELIABILITY
    st = getVariable(19783);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.STR_SW.RELIABILITY", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_SWITCH_INIT->STR_SW;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 19784 PROGRAM0.IM_STRUCTS_INI.STSW_INI.INIT
    st = getVariable(19784);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STSW_INI.INIT", 37);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_SWITCH_INIT = (FB_SWITCH_INIT*)&p_PROC_IM_INIT->STSW_INI;
    p_BOOL = (BOOL*)&p_FB_SWITCH_INIT->INIT;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
