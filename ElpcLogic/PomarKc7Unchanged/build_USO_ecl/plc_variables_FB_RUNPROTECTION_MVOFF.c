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

int __variables_init_FB_RUNPROTECTION_MVOFF(){
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
  OPC_AI_INIT *p_OPC_AI_INIT;
  OPC_AI_GET *p_OPC_AI_GET;
  OPC_AI_SET *p_OPC_AI_SET;
  OPC_PROTECTIONS_GET *p_OPC_PROTECTIONS_GET;
  PROTECTIONSCONFIG *p_PROTECTIONSCONFIG;
  STRUCT_AIPROTECTION *p_STRUCT_AIPROTECTION;
  STRUCT_DIPROTECTION *p_STRUCT_DIPROTECTION;
  OPC_PROTECTIONS_SET *p_OPC_PROTECTIONS_SET;
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
  FB_AIPROTECTION_INIT *p_FB_AIPROTECTION_INIT;
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

  { // 87057 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.DELAY
    st = getVariable(87057);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.DELAY", 75);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_TIME = (TIME*)&p_STRUCT_DIPROTECTION->DELAY;
    st->value_p = p_TIME;
  }
  { // 87058 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INTAG
    st = getVariable(87058);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INTAG", 75);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BYTE = (BYTE*)&p_STRUCT_DIPROTECTION->INTAG;
    st->value_p = p_BYTE;
  }
  { // 87059 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INRUNONSTART
    st = getVariable(87059);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INRUNONSTART", 82);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->INRUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 87060 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INCANRUN
    st = getVariable(87060);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INCANRUN", 78);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->INCANRUN;
    st->value_p = p_BOOL;
  }
  { // 87061 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INOPCCOMMANDSDISABLED
    st = getVariable(87061);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INOPCCOMMANDSDISABLED", 91);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 87062 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INCOMMAND
    st = getVariable(87062);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INCOMMAND", 79);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_WORD = (WORD*)&p_STRUCT_DIPROTECTION->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 87063 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INCOMMAND_ALG
    st = getVariable(87063);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INCOMMAND_ALG", 83);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_WORD = (WORD*)&p_STRUCT_DIPROTECTION->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 87064 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INCOMMAND_ARM
    st = getVariable(87064);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.INCOMMAND_ARM", 83);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_WORD = (WORD*)&p_STRUCT_DIPROTECTION->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 87065 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.TAG
    st = getVariable(87065);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.TAG", 73);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BYTE = (BYTE*)&p_STRUCT_DIPROTECTION->TAG;
    st->value_p = p_BYTE;
  }
  { // 87066 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.STATUS
    st = getVariable(87066);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.STATUS", 76);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_DWORD = (DWORD*)&p_STRUCT_DIPROTECTION->STATUS;
    st->value_p = p_DWORD;
  }
  { // 87067 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.CANRUN
    st = getVariable(87067);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.CANRUN", 76);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->CANRUN;
    st->value_p = p_BOOL;
  }
  { // 87068 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.OPCCOMMANDSDISABLED
    st = getVariable(87068);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.OPCCOMMANDSDISABLED", 89);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 87069 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.ISRUNNING
    st = getVariable(87069);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.ISRUNNING", 79);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->ISRUNNING;
    st->value_p = p_BOOL;
  }
  { // 87070 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.HASERROR
    st = getVariable(87070);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.HASERROR", 78);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->HASERROR;
    st->value_p = p_BOOL;
  }
  { // 87071 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.ISENDED
    st = getVariable(87071);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.ISENDED", 77);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->ISENDED;
    st->value_p = p_BOOL;
  }
  { // 87072 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.REMONT
    st = getVariable(87072);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.REMONT", 76);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->REMONT;
    st->value_p = p_BOOL;
  }
  { // 87073 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.CHECK
    st = getVariable(87073);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.CHECK", 75);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->CHECK;
    st->value_p = p_BOOL;
  }
  { // 87074 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.SIGNALING
    st = getVariable(87074);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.SIGNALING", 79);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->SIGNALING;
    st->value_p = p_BOOL;
  }
  { // 87075 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.SIGNALINGTP
    st = getVariable(87075);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.SIGNALINGTP", 81);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->SIGNALINGTP;
    st->value_p = p_BOOL;
  }
  { // 87076 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.RUNONSTART
    st = getVariable(87076);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRDIP.RUNONSTART", 80);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_PH_DIPROTECTION->STRDIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->RUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 87077 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.PHASENUMBER
    st = getVariable(87077);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.PHASENUMBER", 74);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_UINT = (UINT*)&p_FB_PH_DIPROTECTION->PHASENUMBER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 87078 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.RUN
    st = getVariable(87078);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.RUN", 72);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_DIPROTECTION->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RUN;
    st->value_p = p_BOOL;
  }
  { // 87079 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.RESET
    st = getVariable(87079);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.RESET", 74);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_DIPROTECTION->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RESET;
    st->value_p = p_BOOL;
  }
  { // 87080 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.START
    st = getVariable(87080);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.START", 74);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_DIPROTECTION->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->START;
    st->value_p = p_BOOL;
  }
  { // 87081 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.ERROR
    st = getVariable(87081);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.ERROR", 74);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_DIPROTECTION->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->ERROR;
    st->value_p = p_BOOL;
  }
  { // 87082 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.TOP
    st = getVariable(87082);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.TOP", 72);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_DIPROTECTION->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->TOP;
    st->value_p = p_BOOL;
  }
  { // 87083 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.STARTSTATUS
    st = getVariable(87083);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.STARTSTATUS", 80);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_DIPROTECTION->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->STARTSTATUS;
    st->value_p = p_DWORD;
  }
  { // 87084 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.ERRORSTATUS
    st = getVariable(87084);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.ERRORSTATUS", 80);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_DIPROTECTION->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->ERRORSTATUS;
    st->value_p = p_DWORD;
  }
  { // 87085 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.TOPSTATUS
    st = getVariable(87085);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.STRPH.TOPSTATUS", 78);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_DIPROTECTION->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->TOPSTATUS;
    st->value_p = p_DWORD;
  }
  { // 87086 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.COMMANDFAULT_TRIG.CLK
    st = getVariable(87086);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.COMMANDFAULT_TRIG.CLK", 84);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_DIPROTECTION->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 87087 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.COMMANDFAULT_TRIG.Q
    st = getVariable(87087);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.COMMANDFAULT_TRIG.Q", 82);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_DIPROTECTION->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 87088 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.COMMANDFAULT_TRIG
    st = getVariable(87088);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.COMMANDFAULT_TRIG", 80);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_DIPROTECTION->COMMANDFAULT_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 87089 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.RESET_TRIG.CLK
    st = getVariable(87089);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.RESET_TRIG.CLK", 77);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_DIPROTECTION->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 87090 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.RESET_TRIG.Q
    st = getVariable(87090);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.RESET_TRIG.Q", 75);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_DIPROTECTION->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 87091 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.RESET_TRIG
    st = getVariable(87091);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF.RESET_TRIG", 73);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_DIPROTECTION->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 87092 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF._STATUSDUALINPUT.STATUS_NOTDEFINED
    st = getVariable(87092);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF._STATUSDUALINPUT.STATUS_NOTDEFINED", 97);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_DIPROTECTION->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_NOTDEFINED;
    st->value_p = p_BYTE;
  }
  { // 87093 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF._STATUSDUALINPUT.STATUS_ON
    st = getVariable(87093);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF._STATUSDUALINPUT.STATUS_ON", 89);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_DIPROTECTION->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ON;
    st->value_p = p_BYTE;
  }
  { // 87094 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF._STATUSDUALINPUT.STATUS_OFF
    st = getVariable(87094);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF._STATUSDUALINPUT.STATUS_OFF", 90);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_DIPROTECTION->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_OFF;
    st->value_p = p_BYTE;
  }
  { // 87095 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF._STATUSDUALINPUT.STATUS_TRANSITIONAL
    st = getVariable(87095);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF._STATUSDUALINPUT.STATUS_TRANSITIONAL", 99);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_DIPROTECTION->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_TRANSITIONAL;
    st->value_p = p_BYTE;
  }
  { // 87096 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF._STATUSDUALINPUT.STATUS_ERROR
    st = getVariable(87096);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_RUNPROTECTION_MVOFF._STATUSDUALINPUT.STATUS_ERROR", 92);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_DIPROTECTION = (FB_PH_DIPROTECTION*)&p_ENGINERUNALG->FB_RUNPROTECTION_MVOFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_DIPROTECTION->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ERROR;
    st->value_p = p_BYTE;
  }

  return 0;
}

// clang-format on
