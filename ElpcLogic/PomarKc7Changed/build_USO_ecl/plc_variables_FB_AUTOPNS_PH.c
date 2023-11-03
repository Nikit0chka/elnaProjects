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

int __variables_init_FB_AUTOPNS_PH(){
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

  { // 87085 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INRUNONSTART
    st = getVariable(87085);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INRUNONSTART", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INRUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 87086 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INCANRUN
    st = getVariable(87086);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INCANRUN", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INCANRUN;
    st->value_p = p_BOOL;
  }
  { // 87087 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INHASERROR
    st = getVariable(87087);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INHASERROR", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INHASERROR;
    st->value_p = p_BOOL;
  }
  { // 87088 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INENDED
    st = getVariable(87088);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INENDED", 65);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INENDED;
    st->value_p = p_BOOL;
  }
  { // 87089 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INOPCCOMMANDSDISABLED
    st = getVariable(87089);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INOPCCOMMANDSDISABLED", 79);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 87090 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INCOMMAND
    st = getVariable(87090);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INCOMMAND", 67);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_WORD = (WORD*)&p_STRUCT_ALG->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 87091 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INCOMMAND_ARM
    st = getVariable(87091);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INCOMMAND_ARM", 71);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_WORD = (WORD*)&p_STRUCT_ALG->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 87092 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INCOMMAND_ALG
    st = getVariable(87092);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.INCOMMAND_ALG", 71);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_WORD = (WORD*)&p_STRUCT_ALG->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 87093 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.STATUS
    st = getVariable(87093);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.STATUS", 64);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->STATUS;
    st->value_p = p_DWORD;
  }
  { // 87094 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.CANRUN
    st = getVariable(87094);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.CANRUN", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->CANRUN;
    st->value_p = p_BOOL;
  }
  { // 87095 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.OPCCOMMANDSDISABLED
    st = getVariable(87095);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.OPCCOMMANDSDISABLED", 77);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 87096 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.ISRUNING
    st = getVariable(87096);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.ISRUNING", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->ISRUNING;
    st->value_p = p_BOOL;
  }
  { // 87097 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.HASERROR
    st = getVariable(87097);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.HASERROR", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->HASERROR;
    st->value_p = p_BOOL;
  }
  { // 87098 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.ISENDED
    st = getVariable(87098);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.ISENDED", 65);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->ISENDED;
    st->value_p = p_BOOL;
  }
  { // 87099 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.RUNONSTART
    st = getVariable(87099);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.RUNONSTART", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->RUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 87100 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.START
    st = getVariable(87100);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.START", 63);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->START;
    st->value_p = p_DWORD;
  }
  { // 87101 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.ERROR
    st = getVariable(87101);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.ERROR", 63);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->ERROR;
    st->value_p = p_DWORD;
  }
  { // 87102 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.TOP
    st = getVariable(87102);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.ALG.TOP", 61);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->TOP;
    st->value_p = p_DWORD;
  }
  { // 87103 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.PHASENUMBER
    st = getVariable(87103);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.PHASENUMBER", 65);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_UINT = (UINT*)&p_FB_PH_ALGORITM->PHASENUMBER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 87104 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.WAITCOMPLETION
    st = getVariable(87104);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.WAITCOMPLETION", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_BOOL = (BOOL*)&p_FB_PH_ALGORITM->WAITCOMPLETION;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 87105 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.RUN
    st = getVariable(87105);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.RUN", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RUN;
    st->value_p = p_BOOL;
  }
  { // 87106 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.RESET
    st = getVariable(87106);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.RESET", 65);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RESET;
    st->value_p = p_BOOL;
  }
  { // 87107 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.START
    st = getVariable(87107);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.START", 65);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->START;
    st->value_p = p_BOOL;
  }
  { // 87108 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.ERROR
    st = getVariable(87108);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.ERROR", 65);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->ERROR;
    st->value_p = p_BOOL;
  }
  { // 87109 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.TOP
    st = getVariable(87109);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.TOP", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->TOP;
    st->value_p = p_BOOL;
  }
  { // 87110 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.STARTSTATUS
    st = getVariable(87110);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.STARTSTATUS", 71);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->STARTSTATUS;
    st->value_p = p_DWORD;
  }
  { // 87111 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.ERRORSTATUS
    st = getVariable(87111);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.ERRORSTATUS", 71);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->ERRORSTATUS;
    st->value_p = p_DWORD;
  }
  { // 87112 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.TOPSTATUS
    st = getVariable(87112);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.STRPH.TOPSTATUS", 69);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->TOPSTATUS;
    st->value_p = p_DWORD;
  }
  { // 87113 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.COMMANDFAULT_TRIG.CLK
    st = getVariable(87113);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.COMMANDFAULT_TRIG.CLK", 75);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 87114 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.COMMANDFAULT_TRIG.Q
    st = getVariable(87114);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.COMMANDFAULT_TRIG.Q", 73);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 87115 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.COMMANDFAULT_TRIG
    st = getVariable(87115);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.COMMANDFAULT_TRIG", 71);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->COMMANDFAULT_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 87116 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.RESET_TRIG.CLK
    st = getVariable(87116);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.RESET_TRIG.CLK", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 87117 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.RESET_TRIG.Q
    st = getVariable(87117);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.RESET_TRIG.Q", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 87118 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.RESET_TRIG
    st = getVariable(87118);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH.RESET_TRIG", 64);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 87119 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH._STATUSDUALINPUT.STATUS_NOTDEFINED
    st = getVariable(87119);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH._STATUSDUALINPUT.STATUS_NOTDEFINED", 88);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_NOTDEFINED;
    st->value_p = p_BYTE;
  }
  { // 87120 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH._STATUSDUALINPUT.STATUS_ON
    st = getVariable(87120);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH._STATUSDUALINPUT.STATUS_ON", 80);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ON;
    st->value_p = p_BYTE;
  }
  { // 87121 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH._STATUSDUALINPUT.STATUS_OFF
    st = getVariable(87121);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH._STATUSDUALINPUT.STATUS_OFF", 81);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_OFF;
    st->value_p = p_BYTE;
  }
  { // 87122 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH._STATUSDUALINPUT.STATUS_TRANSITIONAL
    st = getVariable(87122);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH._STATUSDUALINPUT.STATUS_TRANSITIONAL", 90);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_TRANSITIONAL;
    st->value_p = p_BYTE;
  }
  { // 87123 PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH._STATUSDUALINPUT.STATUS_ERROR
    st = getVariable(87123);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_ENGINERUNALG.FB_AUTOPNS_PH._STATUSDUALINPUT.STATUS_ERROR", 83);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_ENGINERUNALG = (ENGINERUNALG*)&p_PROC_ALGORITMS->FB_ENGINERUNALG;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_ENGINERUNALG->FB_AUTOPNS_PH;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ERROR;
    st->value_p = p_BYTE;
  }

  return 0;
}

// clang-format on
