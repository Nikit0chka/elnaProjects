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

int __variables_init_FB_CMDRUN3PH(){
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

  { // 116355 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.ANSWERVARIANTS
    st = getVariable(116355);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.ANSWERVARIANTS", 75);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_STRUCT_QUESTION = (STRUCT_QUESTION*)&p_FB_QUESTION->STRQ;
    p_UINT = (UINT*)&p_STRUCT_QUESTION->ANSWERVARIANTS;
    st->value_p = p_UINT;
  }
  { // 116356 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.INCOMMAND
    st = getVariable(116356);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.INCOMMAND", 70);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_STRUCT_QUESTION = (STRUCT_QUESTION*)&p_FB_QUESTION->STRQ;
    p_WORD = (WORD*)&p_STRUCT_QUESTION->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 116357 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.ASK
    st = getVariable(116357);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.ASK", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_STRUCT_QUESTION = (STRUCT_QUESTION*)&p_FB_QUESTION->STRQ;
    p_BOOL = (BOOL*)&p_STRUCT_QUESTION->ASK;
    st->value_p = p_BOOL;
  }
  { // 116358 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.RESET
    st = getVariable(116358);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.RESET", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_STRUCT_QUESTION = (STRUCT_QUESTION*)&p_FB_QUESTION->STRQ;
    p_BOOL = (BOOL*)&p_STRUCT_QUESTION->RESET;
    st->value_p = p_BOOL;
  }
  { // 116359 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.STATUS
    st = getVariable(116359);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.STATUS", 67);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_STRUCT_QUESTION = (STRUCT_QUESTION*)&p_FB_QUESTION->STRQ;
    p_DWORD = (DWORD*)&p_STRUCT_QUESTION->STATUS;
    st->value_p = p_DWORD;
  }
  { // 116360 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.ANSWER
    st = getVariable(116360);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.ANSWER", 67);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_STRUCT_QUESTION = (STRUCT_QUESTION*)&p_FB_QUESTION->STRQ;
    p_UINT = (UINT*)&p_STRUCT_QUESTION->ANSWER;
    st->value_p = p_UINT;
  }
  { // 116361 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.OPCCOMMANDSDISABLED
    st = getVariable(116361);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.OPCCOMMANDSDISABLED", 80);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_STRUCT_QUESTION = (STRUCT_QUESTION*)&p_FB_QUESTION->STRQ;
    p_BOOL = (BOOL*)&p_STRUCT_QUESTION->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 116362 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.INOPCCOMMANDSDISABLED
    st = getVariable(116362);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.STRQ.INOPCCOMMANDSDISABLED", 82);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_STRUCT_QUESTION = (STRUCT_QUESTION*)&p_FB_QUESTION->STRQ;
    p_BOOL = (BOOL*)&p_STRUCT_QUESTION->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 116363 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.ASKED
    st = getVariable(116363);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.ASKED", 61);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_UINT = (UINT*)&p_FB_QUESTION->ASKED;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 116364 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH._ANSWERS.ANS_NONE
    st = getVariable(116364);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH._ANSWERS.ANS_NONE", 73);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_TYPE_ANSWERS = (TYPE_ANSWERS*)&p_FB_QUESTION->_ANSWERS;
    p_UINT = (UINT*)&p_TYPE_ANSWERS->ANS_NONE;
    st->value_p = p_UINT;
  }
  { // 116365 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH._ANSWERS.ANS_YES
    st = getVariable(116365);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH._ANSWERS.ANS_YES", 72);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_TYPE_ANSWERS = (TYPE_ANSWERS*)&p_FB_QUESTION->_ANSWERS;
    p_UINT = (UINT*)&p_TYPE_ANSWERS->ANS_YES;
    st->value_p = p_UINT;
  }
  { // 116366 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH._ANSWERS.ANS_NO
    st = getVariable(116366);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH._ANSWERS.ANS_NO", 71);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_TYPE_ANSWERS = (TYPE_ANSWERS*)&p_FB_QUESTION->_ANSWERS;
    p_UINT = (UINT*)&p_TYPE_ANSWERS->ANS_NO;
    st->value_p = p_UINT;
  }
  { // 116367 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH._ANSWERS.ANS_CANCEL
    st = getVariable(116367);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH._ANSWERS.ANS_CANCEL", 75);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_TYPE_ANSWERS = (TYPE_ANSWERS*)&p_FB_QUESTION->_ANSWERS;
    p_UINT = (UINT*)&p_TYPE_ANSWERS->ANS_CANCEL;
    st->value_p = p_UINT;
  }
  { // 116368 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH._ANSWERS.ANS_RETRY
    st = getVariable(116368);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH._ANSWERS.ANS_RETRY", 74);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_TYPE_ANSWERS = (TYPE_ANSWERS*)&p_FB_QUESTION->_ANSWERS;
    p_UINT = (UINT*)&p_TYPE_ANSWERS->ANS_RETRY;
    st->value_p = p_UINT;
  }
  { // 116369 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.CMD_ANSWER
    st = getVariable(116369);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.CMD_ANSWER", 66);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_UINT = (UINT*)&p_FB_QUESTION->CMD_ANSWER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 116374 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.SOURCE
    st = getVariable(116374);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.SOURCE", 62);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_BYTE = (BYTE*)&p_FB_QUESTION->SOURCE;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 116375 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.PARAMETR
    st = getVariable(116375);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.PARAMETR", 64);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_BYTE = (BYTE*)&p_FB_QUESTION->PARAMETR;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 116376 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.LASTPARAMETR
    st = getVariable(116376);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.LASTPARAMETR", 68);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_BYTE = (BYTE*)&p_FB_QUESTION->LASTPARAMETR;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 116377 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.CMD
    st = getVariable(116377);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.CMD", 59);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_BYTE = (BYTE*)&p_FB_QUESTION->CMD;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 116378 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.SOURCE_FOR_STATUS
    st = getVariable(116378);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.SOURCE_FOR_STATUS", 73);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_BYTE = (BYTE*)&p_FB_QUESTION->SOURCE_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 116379 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.CMD_FOR_STATUS
    st = getVariable(116379);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.CMD_FOR_STATUS", 70);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_BYTE = (BYTE*)&p_FB_QUESTION->CMD_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 116380 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.COMMAND_ERROR_FOR_STATUS
    st = getVariable(116380);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.COMMAND_ERROR_FOR_STATUS", 80);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_BYTE = (BYTE*)&p_FB_QUESTION->COMMAND_ERROR_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 116381 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMER.IN
    st = getVariable(116381);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMER.IN", 72);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_TON = (TON*)&p_FB_QUESTION->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 116382 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMER.PT
    st = getVariable(116382);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMER.PT", 72);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_TON = (TON*)&p_FB_QUESTION->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 116383 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMER.Q
    st = getVariable(116383);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMER.Q", 71);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_TON = (TON*)&p_FB_QUESTION->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 116384 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMER.ET
    st = getVariable(116384);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMER.ET", 72);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_TON = (TON*)&p_FB_QUESTION->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 116385 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMER
    st = getVariable(116385);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMER", 69);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_TON = (TON*)&p_FB_QUESTION->RESETCMDTIMER;
    st->value_p = (void *)p_TON;
  }
  { // 116386 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMERPRIZNAK
    st = getVariable(116386);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESETCMDTIMERPRIZNAK", 76);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_BOOL = (BOOL*)&p_FB_QUESTION->RESETCMDTIMERPRIZNAK;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 116387 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESET_TRIG.CLK
    st = getVariable(116387);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESET_TRIG.CLK", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_R_TRIG = (R_TRIG*)&p_FB_QUESTION->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 116388 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESET_TRIG.Q
    st = getVariable(116388);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESET_TRIG.Q", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_R_TRIG = (R_TRIG*)&p_FB_QUESTION->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 116389 PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESET_TRIG
    st = getVariable(116389);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_SEMIAUTOPUSKALG.FB_CMDRUN3PH.RESET_TRIG", 66);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_SEMIAUTOPUSKALG = (SEMIAUTOPUSKALG*)&p_PROC_ALGORITMS->FB_SEMIAUTOPUSKALG;
    p_FB_QUESTION = (FB_QUESTION*)&p_SEMIAUTOPUSKALG->FB_CMDRUN3PH;
    p_R_TRIG = (R_TRIG*)&p_FB_QUESTION->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }

  return 0;
}

// clang-format on