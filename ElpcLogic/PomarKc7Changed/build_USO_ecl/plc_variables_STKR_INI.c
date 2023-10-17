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

int __variables_init_STKR_INI(){
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

  { // 20201 PROGRAM0.IM_STRUCTS_INI.STKR_INI.DATA_INI
    st = getVariable(20201);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.DATA_INI", 41);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_BOOL = (BOOL*)&p_FB_KRAN_INIT->DATA_INI;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 20202 PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_STATON
    st = getVariable(20202);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_STATON", 50);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_BOOL = (BOOL*)&p_FB_KRAN_INIT->ISVALIDREF_STATON;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 20203 PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_STATOFF
    st = getVariable(20203);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_STATOFF", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_BOOL = (BOOL*)&p_FB_KRAN_INIT->ISVALIDREF_STATOFF;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 20204 PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_CMDON
    st = getVariable(20204);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_CMDON", 49);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_BOOL = (BOOL*)&p_FB_KRAN_INIT->ISVALIDREF_CMDON;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 20205 PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_CMDOFF
    st = getVariable(20205);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_CMDOFF", 50);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_BOOL = (BOOL*)&p_FB_KRAN_INIT->ISVALIDREF_CMDOFF;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 20206 PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_INSO
    st = getVariable(20206);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_INSO", 48);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_BOOL = (BOOL*)&p_FB_KRAN_INIT->ISVALIDREF_INSO;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 20207 PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_INSZ
    st = getVariable(20207);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_INSZ", 48);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_BOOL = (BOOL*)&p_FB_KRAN_INIT->ISVALIDREF_INSZ;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 20208 PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_INDP
    st = getVariable(20208);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.ISVALIDREF_INDP", 48);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_BOOL = (BOOL*)&p_FB_KRAN_INIT->ISVALIDREF_INDP;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 20209 PROGRAM0.IM_STRUCTS_INI.STKR_INI.CONTINUEHOLDCOMMAND
    st = getVariable(20209);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.CONTINUEHOLDCOMMAND", 52);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_TIME = (TIME*)&p_FB_KRAN_INIT->CONTINUEHOLDCOMMAND;
    UnpackVar(p_TIME, TIME_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 20210 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.INCOMMAND
    st = getVariable(20210);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.INCOMMAND", 49);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_WORD = (WORD*)&p_STRUCT_KRAN->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 20211 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.STATUS
    st = getVariable(20211);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.STATUS", 46);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_DWORD = (DWORD*)&p_STRUCT_KRAN->STATUS;
    st->value_p = p_DWORD;
  }
  { // 20212 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ONSTATUS
    st = getVariable(20212);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ONSTATUS", 48);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BYTE = (BYTE*)&p_STRUCT_KRAN->ONSTATUS;
    st->value_p = p_BYTE;
  }
  { // 20213 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.INOPCCOMMANDSDISABLED
    st = getVariable(20213);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.INOPCCOMMANDSDISABLED", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 20214 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.SDVIG
    st = getVariable(20214);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.SDVIG", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->SDVIG;
    st->value_p = p_BOOL;
  }
  { // 20215 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.NS
    st = getVariable(20215);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.NS", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->NS;
    st->value_p = p_BOOL;
  }
  { // 20216 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.DP
    st = getVariable(20216);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.DP", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->DP;
    st->value_p = p_BOOL;
  }
  { // 20217 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.COMMANDFAULT
    st = getVariable(20217);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.COMMANDFAULT", 52);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->COMMANDFAULT;
    st->value_p = p_BOOL;
  }
  { // 20218 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ACCIDENT
    st = getVariable(20218);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ACCIDENT", 48);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->ACCIDENT;
    st->value_p = p_BOOL;
  }
  { // 20219 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.AUTO
    st = getVariable(20219);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.AUTO", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->AUTO;
    st->value_p = p_BOOL;
  }
  { // 20220 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.MANUAL
    st = getVariable(20220);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.MANUAL", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->MANUAL;
    st->value_p = p_BOOL;
  }
  { // 20221 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.LOCAL
    st = getVariable(20221);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.LOCAL", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->LOCAL;
    st->value_p = p_BOOL;
  }
  { // 20222 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.DISTANCE
    st = getVariable(20222);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.DISTANCE", 48);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->DISTANCE;
    st->value_p = p_BOOL;
  }
  { // 20223 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ERRORPOWEROFF
    st = getVariable(20223);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ERRORPOWEROFF", 53);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->ERRORPOWEROFF;
    st->value_p = p_BOOL;
  }
  { // 20224 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ERRORBLOCK
    st = getVariable(20224);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ERRORBLOCK", 50);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->ERRORBLOCK;
    st->value_p = p_BOOL;
  }
  { // 20225 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.SO
    st = getVariable(20225);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.SO", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->SO;
    st->value_p = p_BOOL;
  }
  { // 20226 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.SZ
    st = getVariable(20226);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.SZ", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->SZ;
    st->value_p = p_BOOL;
  }
  { // 20227 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.OPCCOMMANDSDISABLED
    st = getVariable(20227);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.OPCCOMMANDSDISABLED", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 20228 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.LASTCMDISON
    st = getVariable(20228);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.LASTCMDISON", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->LASTCMDISON;
    st->value_p = p_BOOL;
  }
  { // 20229 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_STATON
    st = getVariable(20229);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_STATON", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->ISVALIDREF_STATON;
    st->value_p = p_BOOL;
  }
  { // 20230 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_STATOFF
    st = getVariable(20230);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_STATOFF", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->ISVALIDREF_STATOFF;
    st->value_p = p_BOOL;
  }
  { // 20231 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_CMDON
    st = getVariable(20231);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_CMDON", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->ISVALIDREF_CMDON;
    st->value_p = p_BOOL;
  }
  { // 20232 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_CMDOFF
    st = getVariable(20232);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_CMDOFF", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->ISVALIDREF_CMDOFF;
    st->value_p = p_BOOL;
  }
  { // 20233 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_INSO
    st = getVariable(20233);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_INSO", 55);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->ISVALIDREF_INSO;
    st->value_p = p_BOOL;
  }
  { // 20234 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_INSZ
    st = getVariable(20234);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_INSZ", 55);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->ISVALIDREF_INSZ;
    st->value_p = p_BOOL;
  }
  { // 20235 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_INDP
    st = getVariable(20235);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.ISVALIDREF_INDP", 55);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->ISVALIDREF_INDP;
    st->value_p = p_BOOL;
  }
  { // 20236 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.CONTINUEHOLDCOMMAND
    st = getVariable(20236);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.CONTINUEHOLDCOMMAND", 59);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_TIME = (TIME*)&p_STRUCT_KRAN->CONTINUEHOLDCOMMAND;
    st->value_p = p_TIME;
  }
  { // 20237 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.INCOMMAND_ALG
    st = getVariable(20237);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.INCOMMAND_ALG", 53);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_WORD = (WORD*)&p_STRUCT_KRAN->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 20238 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.INCOMMAND_ARM
    st = getVariable(20238);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.INCOMMAND_ARM", 53);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_WORD = (WORD*)&p_STRUCT_KRAN->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 20239 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.CMDON
    st = getVariable(20239);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.CMDON", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->CMDON;
    st->value_p = p_BOOL;
  }
  { // 20240 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.CMDOFF
    st = getVariable(20240);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.CMDOFF", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->CMDOFF;
    st->value_p = p_BOOL;
  }
  { // 20241 PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.RELIABILITY
    st = getVariable(20241);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.STR_KR.RELIABILITY", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_STRUCT_KRAN = (STRUCT_KRAN*)&p_FB_KRAN_INIT->STR_KR;
    p_BOOL = (BOOL*)&p_STRUCT_KRAN->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 20242 PROGRAM0.IM_STRUCTS_INI.STKR_INI.INIT
    st = getVariable(20242);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_STRUCTS_INI.STKR_INI.INIT", 37);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM_INIT = (PROC_IM_INIT*)&p_PROGRAM0->IM_STRUCTS_INI;
    p_FB_KRAN_INIT = (FB_KRAN_INIT*)&p_PROC_IM_INIT->STKR_INI;
    p_BOOL = (BOOL*)&p_FB_KRAN_INIT->INIT;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
