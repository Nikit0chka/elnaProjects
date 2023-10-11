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

int __variables_init_STDP_INI(){
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
  FB_DISCRETPARAMETR *p_FB_DISCRETPARAMETR;
  FB_ANALOGPARAMETR *p_FB_ANALOGPARAMETR;
  OPC_IM_GET *p_OPC_IM_GET;
  OPC_IM_SET *p_OPC_IM_SET;
  PROC_PROTECTIONS_INIT *p_PROC_PROTECTIONS_INIT;
  FB_DIPROTECTION_INIT *p_FB_DIPROTECTION_INIT;
  STRUCT_DIPROTECTION *p_STRUCT_DIPROTECTION;
  FB_AIPROTECTION_INIT *p_FB_AIPROTECTION_INIT;
  STRUCT_AIPROTECTION *p_STRUCT_AIPROTECTION;
  PROTECTIONSCONFIG *p_PROTECTIONSCONFIG;
  TYPE_PROTECTIONTAGS *p_TYPE_PROTECTIONTAGS;
  PROC_PROTECTION *p_PROC_PROTECTION;
  FB_DIPROTECTION *p_FB_DIPROTECTION;
  F_TRIG *p_F_TRIG;
  FB_MVPROTECTION *p_FB_MVPROTECTION;
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

  { // 19885 PROGRAM0.IM_STRUCTS_INI.STDP_INI.DATA_INI
    st = getVariable(19885);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.DATA_INI", 41);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_BOOL = (BOOL*)&p_FB_DISCRETPARAMETR_INIT->DATA_INI;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19886 PROGRAM0.IM_STRUCTS_INI.STDP_INI.CURRENTVALUE
    st = getVariable(19886);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.CURRENTVALUE", 45);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_UINT = (UINT*)&p_FB_DISCRETPARAMETR_INIT->CURRENTVALUE;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19887 PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.NEWVALUE
    st = getVariable(19887);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.NEWVALUE", 47);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR_INIT->STRDP;
    p_UINT = (UINT*)&p_STRUCT_DISCRETPARAMETR->NEWVALUE;
    st->value_p = p_UINT;
  }
  { // 19888 PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.CURRENTVALUE
    st = getVariable(19888);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.CURRENTVALUE", 51);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR_INIT->STRDP;
    p_UINT = (UINT*)&p_STRUCT_DISCRETPARAMETR->CURRENTVALUE;
    st->value_p = p_UINT;
  }
  { // 19889 PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.INOPCCOMMANDSDISABLED
    st = getVariable(19889);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.INOPCCOMMANDSDISABLED", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR_INIT->STRDP;
    p_BOOL = (BOOL*)&p_STRUCT_DISCRETPARAMETR->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 19890 PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.INCOMMAND
    st = getVariable(19890);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.INCOMMAND", 48);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR_INIT->STRDP;
    p_WORD = (WORD*)&p_STRUCT_DISCRETPARAMETR->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 19891 PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.INCOMMAND_ALG
    st = getVariable(19891);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.INCOMMAND_ALG", 52);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR_INIT->STRDP;
    p_WORD = (WORD*)&p_STRUCT_DISCRETPARAMETR->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 19892 PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.INCOMMAND_ARM
    st = getVariable(19892);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.INCOMMAND_ARM", 52);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR_INIT->STRDP;
    p_WORD = (WORD*)&p_STRUCT_DISCRETPARAMETR->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 19893 PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.STATUS
    st = getVariable(19893);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.STATUS", 45);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR_INIT->STRDP;
    p_DWORD = (DWORD*)&p_STRUCT_DISCRETPARAMETR->STATUS;
    st->value_p = p_DWORD;
  }
  { // 19894 PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.OPCCOMMANDSDISABLED
    st = getVariable(19894);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.OPCCOMMANDSDISABLED", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR_INIT->STRDP;
    p_BOOL = (BOOL*)&p_STRUCT_DISCRETPARAMETR->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 19895 PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.VALUE
    st = getVariable(19895);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.STRDP.VALUE", 44);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR_INIT->STRDP;
    p_UINT = (UINT*)&p_STRUCT_DISCRETPARAMETR->VALUE;
    st->value_p = p_UINT;
  }
  { // 19896 PROGRAM0.IM_STRUCTS_INI.STDP_INI.INIT
    st = getVariable(19896);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STDP_INI.INIT", 37);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_DISCRETPARAMETR_INIT = (FB_DISCRETPARAMETR_INIT*)&p_PROC_IM_INIT->STDP_INI;
    p_BOOL = (BOOL*)&p_FB_DISCRETPARAMETR_INIT->INIT;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
