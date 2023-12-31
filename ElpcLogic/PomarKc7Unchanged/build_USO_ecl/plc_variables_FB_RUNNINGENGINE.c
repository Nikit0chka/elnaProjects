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

int __variables_init_FB_RUNNINGENGINE(){
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

  { // 98116 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INRUNONSTART
    st = getVariable(98116);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INRUNONSTART", 69);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INRUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 98117 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INCANRUN
    st = getVariable(98117);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INCANRUN", 65);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INCANRUN;
    st->value_p = p_BOOL;
  }
  { // 98118 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INHASERROR
    st = getVariable(98118);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INHASERROR", 67);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INHASERROR;
    st->value_p = p_BOOL;
  }
  { // 98119 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INENDED
    st = getVariable(98119);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INENDED", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INENDED;
    st->value_p = p_BOOL;
  }
  { // 98120 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INOPCCOMMANDSDISABLED
    st = getVariable(98120);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INOPCCOMMANDSDISABLED", 78);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 98121 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INCOMMAND
    st = getVariable(98121);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INCOMMAND", 66);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_WORD = (WORD*)&p_STRUCT_ALG->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 98122 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INCOMMAND_ARM
    st = getVariable(98122);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INCOMMAND_ARM", 70);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_WORD = (WORD*)&p_STRUCT_ALG->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 98123 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INCOMMAND_ALG
    st = getVariable(98123);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.INCOMMAND_ALG", 70);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_WORD = (WORD*)&p_STRUCT_ALG->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 98124 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.STATUS
    st = getVariable(98124);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.STATUS", 63);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->STATUS;
    st->value_p = p_DWORD;
  }
  { // 98125 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.CANRUN
    st = getVariable(98125);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.CANRUN", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->CANRUN;
    st->value_p = p_BOOL;
  }
  { // 98126 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.OPCCOMMANDSDISABLED
    st = getVariable(98126);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.OPCCOMMANDSDISABLED", 76);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 98127 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.ISRUNING
    st = getVariable(98127);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.ISRUNING", 65);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->ISRUNING;
    st->value_p = p_BOOL;
  }
  { // 98128 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.HASERROR
    st = getVariable(98128);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.HASERROR", 65);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->HASERROR;
    st->value_p = p_BOOL;
  }
  { // 98129 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.ISENDED
    st = getVariable(98129);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.ISENDED", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->ISENDED;
    st->value_p = p_BOOL;
  }
  { // 98130 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.RUNONSTART
    st = getVariable(98130);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.RUNONSTART", 67);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->RUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 98131 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.START
    st = getVariable(98131);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.START", 62);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->START;
    st->value_p = p_DWORD;
  }
  { // 98132 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.ERROR
    st = getVariable(98132);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.ERROR", 62);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->ERROR;
    st->value_p = p_DWORD;
  }
  { // 98133 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.TOP
    st = getVariable(98133);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.ALG.TOP", 60);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->TOP;
    st->value_p = p_DWORD;
  }
  { // 98134 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.PHASENUMBER
    st = getVariable(98134);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.PHASENUMBER", 64);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_UINT = (UINT*)&p_FB_PH_ALGORITM->PHASENUMBER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 98135 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.WAITCOMPLETION
    st = getVariable(98135);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.WAITCOMPLETION", 67);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_BOOL = (BOOL*)&p_FB_PH_ALGORITM->WAITCOMPLETION;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 98136 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.RUN
    st = getVariable(98136);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.RUN", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RUN;
    st->value_p = p_BOOL;
  }
  { // 98137 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.RESET
    st = getVariable(98137);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.RESET", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RESET;
    st->value_p = p_BOOL;
  }
  { // 98138 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.START
    st = getVariable(98138);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.START", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->START;
    st->value_p = p_BOOL;
  }
  { // 98139 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.ERROR
    st = getVariable(98139);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.ERROR", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->ERROR;
    st->value_p = p_BOOL;
  }
  { // 98140 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.TOP
    st = getVariable(98140);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.TOP", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->TOP;
    st->value_p = p_BOOL;
  }
  { // 98141 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.STARTSTATUS
    st = getVariable(98141);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.STARTSTATUS", 70);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->STARTSTATUS;
    st->value_p = p_DWORD;
  }
  { // 98142 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.ERRORSTATUS
    st = getVariable(98142);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.ERRORSTATUS", 70);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->ERRORSTATUS;
    st->value_p = p_DWORD;
  }
  { // 98143 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.TOPSTATUS
    st = getVariable(98143);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.STRPH.TOPSTATUS", 68);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->TOPSTATUS;
    st->value_p = p_DWORD;
  }
  { // 98144 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.COMMANDFAULT_TRIG.CLK
    st = getVariable(98144);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.COMMANDFAULT_TRIG.CLK", 74);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 98145 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.COMMANDFAULT_TRIG.Q
    st = getVariable(98145);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.COMMANDFAULT_TRIG.Q", 72);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 98146 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.COMMANDFAULT_TRIG
    st = getVariable(98146);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.COMMANDFAULT_TRIG", 70);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->COMMANDFAULT_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 98147 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.RESET_TRIG.CLK
    st = getVariable(98147);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.RESET_TRIG.CLK", 67);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 98148 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.RESET_TRIG.Q
    st = getVariable(98148);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.RESET_TRIG.Q", 65);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 98149 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.RESET_TRIG
    st = getVariable(98149);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE.RESET_TRIG", 63);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 98150 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE._STATUSDUALINPUT.STATUS_NOTDEFINED
    st = getVariable(98150);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE._STATUSDUALINPUT.STATUS_NOTDEFINED", 87);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_NOTDEFINED;
    st->value_p = p_BYTE;
  }
  { // 98151 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE._STATUSDUALINPUT.STATUS_ON
    st = getVariable(98151);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE._STATUSDUALINPUT.STATUS_ON", 79);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ON;
    st->value_p = p_BYTE;
  }
  { // 98152 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE._STATUSDUALINPUT.STATUS_OFF
    st = getVariable(98152);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE._STATUSDUALINPUT.STATUS_OFF", 80);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_OFF;
    st->value_p = p_BYTE;
  }
  { // 98153 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE._STATUSDUALINPUT.STATUS_TRANSITIONAL
    st = getVariable(98153);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE._STATUSDUALINPUT.STATUS_TRANSITIONAL", 89);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_TRANSITIONAL;
    st->value_p = p_BYTE;
  }
  { // 98154 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE._STATUSDUALINPUT.STATUS_ERROR
    st = getVariable(98154);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_RUNNINGENGINE._STATUSDUALINPUT.STATUS_ERROR", 82);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PUSKVALG->FB_RUNNINGENGINE;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ERROR;
    st->value_p = p_BYTE;
  }

  return 0;
}

// clang-format on
