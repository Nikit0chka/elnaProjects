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

int __variables_init_DO_PROC(){
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

  { // 18387 PROGRAM0.DO_PROC.OD.DO_0.IMIT
    st = getVariable(18387);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p_BOOL = (BOOL*)&p_STRUCT_DO->IMIT;
    st->value_p = p_BOOL;
  }
  { // 18388 PROGRAM0.DO_PROC.OD.DO_0.BLCONNECT
    st = getVariable(18388);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p_BOOL = (BOOL*)&p_STRUCT_DO->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 18389 PROGRAM0.DO_PROC.OD.DO_0.VALUE
    st = getVariable(18389);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p_WORD = (WORD*)&p_STRUCT_DO->VALUE;
    st->value_p = p_WORD;
  }
  { // 18390 PROGRAM0.DO_PROC.OD.DO_0.BITS[0]
    st = getVariable(18390);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[0]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[0];;
  }
  { // 18391 PROGRAM0.DO_PROC.OD.DO_0.BITS[1]
    st = getVariable(18391);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[1]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[1];;
  }
  { // 18392 PROGRAM0.DO_PROC.OD.DO_0.BITS[2]
    st = getVariable(18392);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[2]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[2];;
  }
  { // 18393 PROGRAM0.DO_PROC.OD.DO_0.BITS[3]
    st = getVariable(18393);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[3]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[3];;
  }
  { // 18394 PROGRAM0.DO_PROC.OD.DO_0.BITS[4]
    st = getVariable(18394);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[4]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[4];;
  }
  { // 18395 PROGRAM0.DO_PROC.OD.DO_0.BITS[5]
    st = getVariable(18395);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[5]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[5];;
  }
  { // 18396 PROGRAM0.DO_PROC.OD.DO_0.BITS[6]
    st = getVariable(18396);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[6]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[6];;
  }
  { // 18397 PROGRAM0.DO_PROC.OD.DO_0.BITS[7]
    st = getVariable(18397);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[7]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[7];;
  }
  { // 18398 PROGRAM0.DO_PROC.OD.DO_0.BITS[8]
    st = getVariable(18398);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[8]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[8];;
  }
  { // 18399 PROGRAM0.DO_PROC.OD.DO_0.BITS[9]
    st = getVariable(18399);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[9]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[9];;
  }
  { // 18400 PROGRAM0.DO_PROC.OD.DO_0.BITS[10]
    st = getVariable(18400);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[10]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[10];;
  }
  { // 18401 PROGRAM0.DO_PROC.OD.DO_0.BITS[11]
    st = getVariable(18401);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[11]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[11];;
  }
  { // 18402 PROGRAM0.DO_PROC.OD.DO_0.BITS[12]
    st = getVariable(18402);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[12]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[12];;
  }
  { // 18403 PROGRAM0.DO_PROC.OD.DO_0.BITS[13]
    st = getVariable(18403);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[13]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[13];;
  }
  { // 18404 PROGRAM0.DO_PROC.OD.DO_0.BITS[14]
    st = getVariable(18404);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[14]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[14];;
  }
  { // 18405 PROGRAM0.DO_PROC.OD.DO_0.BITS[15]
    st = getVariable(18405);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_0.BITS[15]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_0;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[15];;
  }
  { // 18406 PROGRAM0.DO_PROC.OD.DO_1.IMIT
    st = getVariable(18406);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p_BOOL = (BOOL*)&p_STRUCT_DO->IMIT;
    st->value_p = p_BOOL;
  }
  { // 18407 PROGRAM0.DO_PROC.OD.DO_1.BLCONNECT
    st = getVariable(18407);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p_BOOL = (BOOL*)&p_STRUCT_DO->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 18408 PROGRAM0.DO_PROC.OD.DO_1.VALUE
    st = getVariable(18408);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p_WORD = (WORD*)&p_STRUCT_DO->VALUE;
    st->value_p = p_WORD;
  }
  { // 18409 PROGRAM0.DO_PROC.OD.DO_1.BITS[0]
    st = getVariable(18409);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[0]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[0];;
  }
  { // 18410 PROGRAM0.DO_PROC.OD.DO_1.BITS[1]
    st = getVariable(18410);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[1]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[1];;
  }
  { // 18411 PROGRAM0.DO_PROC.OD.DO_1.BITS[2]
    st = getVariable(18411);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[2]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[2];;
  }
  { // 18412 PROGRAM0.DO_PROC.OD.DO_1.BITS[3]
    st = getVariable(18412);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[3]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[3];;
  }
  { // 18413 PROGRAM0.DO_PROC.OD.DO_1.BITS[4]
    st = getVariable(18413);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[4]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[4];;
  }
  { // 18414 PROGRAM0.DO_PROC.OD.DO_1.BITS[5]
    st = getVariable(18414);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[5]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[5];;
  }
  { // 18415 PROGRAM0.DO_PROC.OD.DO_1.BITS[6]
    st = getVariable(18415);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[6]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[6];;
  }
  { // 18416 PROGRAM0.DO_PROC.OD.DO_1.BITS[7]
    st = getVariable(18416);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[7]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[7];;
  }
  { // 18417 PROGRAM0.DO_PROC.OD.DO_1.BITS[8]
    st = getVariable(18417);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[8]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[8];;
  }
  { // 18418 PROGRAM0.DO_PROC.OD.DO_1.BITS[9]
    st = getVariable(18418);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[9]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[9];;
  }
  { // 18419 PROGRAM0.DO_PROC.OD.DO_1.BITS[10]
    st = getVariable(18419);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[10]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[10];;
  }
  { // 18420 PROGRAM0.DO_PROC.OD.DO_1.BITS[11]
    st = getVariable(18420);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[11]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[11];;
  }
  { // 18421 PROGRAM0.DO_PROC.OD.DO_1.BITS[12]
    st = getVariable(18421);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[12]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[12];;
  }
  { // 18422 PROGRAM0.DO_PROC.OD.DO_1.BITS[13]
    st = getVariable(18422);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[13]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[13];;
  }
  { // 18423 PROGRAM0.DO_PROC.OD.DO_1.BITS[14]
    st = getVariable(18423);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[14]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[14];;
  }
  { // 18424 PROGRAM0.DO_PROC.OD.DO_1.BITS[15]
    st = getVariable(18424);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_1.BITS[15]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_1;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[15];;
  }
  { // 18425 PROGRAM0.DO_PROC.OD.DO_2.IMIT
    st = getVariable(18425);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p_BOOL = (BOOL*)&p_STRUCT_DO->IMIT;
    st->value_p = p_BOOL;
  }
  { // 18426 PROGRAM0.DO_PROC.OD.DO_2.BLCONNECT
    st = getVariable(18426);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p_BOOL = (BOOL*)&p_STRUCT_DO->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 18427 PROGRAM0.DO_PROC.OD.DO_2.VALUE
    st = getVariable(18427);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p_WORD = (WORD*)&p_STRUCT_DO->VALUE;
    st->value_p = p_WORD;
  }
  { // 18428 PROGRAM0.DO_PROC.OD.DO_2.BITS[0]
    st = getVariable(18428);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[0]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[0];;
  }
  { // 18429 PROGRAM0.DO_PROC.OD.DO_2.BITS[1]
    st = getVariable(18429);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[1]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[1];;
  }
  { // 18430 PROGRAM0.DO_PROC.OD.DO_2.BITS[2]
    st = getVariable(18430);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[2]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[2];;
  }
  { // 18431 PROGRAM0.DO_PROC.OD.DO_2.BITS[3]
    st = getVariable(18431);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[3]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[3];;
  }
  { // 18432 PROGRAM0.DO_PROC.OD.DO_2.BITS[4]
    st = getVariable(18432);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[4]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[4];;
  }
  { // 18433 PROGRAM0.DO_PROC.OD.DO_2.BITS[5]
    st = getVariable(18433);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[5]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[5];;
  }
  { // 18434 PROGRAM0.DO_PROC.OD.DO_2.BITS[6]
    st = getVariable(18434);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[6]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[6];;
  }
  { // 18435 PROGRAM0.DO_PROC.OD.DO_2.BITS[7]
    st = getVariable(18435);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[7]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[7];;
  }
  { // 18436 PROGRAM0.DO_PROC.OD.DO_2.BITS[8]
    st = getVariable(18436);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[8]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[8];;
  }
  { // 18437 PROGRAM0.DO_PROC.OD.DO_2.BITS[9]
    st = getVariable(18437);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[9]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[9];;
  }
  { // 18438 PROGRAM0.DO_PROC.OD.DO_2.BITS[10]
    st = getVariable(18438);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[10]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[10];;
  }
  { // 18439 PROGRAM0.DO_PROC.OD.DO_2.BITS[11]
    st = getVariable(18439);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[11]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[11];;
  }
  { // 18440 PROGRAM0.DO_PROC.OD.DO_2.BITS[12]
    st = getVariable(18440);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[12]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[12];;
  }
  { // 18441 PROGRAM0.DO_PROC.OD.DO_2.BITS[13]
    st = getVariable(18441);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[13]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[13];;
  }
  { // 18442 PROGRAM0.DO_PROC.OD.DO_2.BITS[14]
    st = getVariable(18442);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[14]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[14];;
  }
  { // 18443 PROGRAM0.DO_PROC.OD.DO_2.BITS[15]
    st = getVariable(18443);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_2.BITS[15]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_2;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[15];;
  }
  { // 18444 PROGRAM0.DO_PROC.OD.DO_3.IMIT
    st = getVariable(18444);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p_BOOL = (BOOL*)&p_STRUCT_DO->IMIT;
    st->value_p = p_BOOL;
  }
  { // 18445 PROGRAM0.DO_PROC.OD.DO_3.BLCONNECT
    st = getVariable(18445);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p_BOOL = (BOOL*)&p_STRUCT_DO->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 18446 PROGRAM0.DO_PROC.OD.DO_3.VALUE
    st = getVariable(18446);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p_WORD = (WORD*)&p_STRUCT_DO->VALUE;
    st->value_p = p_WORD;
  }
  { // 18447 PROGRAM0.DO_PROC.OD.DO_3.BITS[0]
    st = getVariable(18447);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[0]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[0];;
  }
  { // 18448 PROGRAM0.DO_PROC.OD.DO_3.BITS[1]
    st = getVariable(18448);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[1]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[1];;
  }
  { // 18449 PROGRAM0.DO_PROC.OD.DO_3.BITS[2]
    st = getVariable(18449);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[2]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[2];;
  }
  { // 18450 PROGRAM0.DO_PROC.OD.DO_3.BITS[3]
    st = getVariable(18450);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[3]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[3];;
  }
  { // 18451 PROGRAM0.DO_PROC.OD.DO_3.BITS[4]
    st = getVariable(18451);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[4]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[4];;
  }
  { // 18452 PROGRAM0.DO_PROC.OD.DO_3.BITS[5]
    st = getVariable(18452);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[5]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[5];;
  }
  { // 18453 PROGRAM0.DO_PROC.OD.DO_3.BITS[6]
    st = getVariable(18453);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[6]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[6];;
  }
  { // 18454 PROGRAM0.DO_PROC.OD.DO_3.BITS[7]
    st = getVariable(18454);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[7]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[7];;
  }
  { // 18455 PROGRAM0.DO_PROC.OD.DO_3.BITS[8]
    st = getVariable(18455);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[8]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[8];;
  }
  { // 18456 PROGRAM0.DO_PROC.OD.DO_3.BITS[9]
    st = getVariable(18456);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[9]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[9];;
  }
  { // 18457 PROGRAM0.DO_PROC.OD.DO_3.BITS[10]
    st = getVariable(18457);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[10]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[10];;
  }
  { // 18458 PROGRAM0.DO_PROC.OD.DO_3.BITS[11]
    st = getVariable(18458);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[11]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[11];;
  }
  { // 18459 PROGRAM0.DO_PROC.OD.DO_3.BITS[12]
    st = getVariable(18459);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[12]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[12];;
  }
  { // 18460 PROGRAM0.DO_PROC.OD.DO_3.BITS[13]
    st = getVariable(18460);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[13]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[13];;
  }
  { // 18461 PROGRAM0.DO_PROC.OD.DO_3.BITS[14]
    st = getVariable(18461);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[14]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[14];;
  }
  { // 18462 PROGRAM0.DO_PROC.OD.DO_3.BITS[15]
    st = getVariable(18462);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_3.BITS[15]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_3;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[15];;
  }
  { // 18463 PROGRAM0.DO_PROC.OD.DO_4.IMIT
    st = getVariable(18463);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p_BOOL = (BOOL*)&p_STRUCT_DO->IMIT;
    st->value_p = p_BOOL;
  }
  { // 18464 PROGRAM0.DO_PROC.OD.DO_4.BLCONNECT
    st = getVariable(18464);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p_BOOL = (BOOL*)&p_STRUCT_DO->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 18465 PROGRAM0.DO_PROC.OD.DO_4.VALUE
    st = getVariable(18465);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p_WORD = (WORD*)&p_STRUCT_DO->VALUE;
    st->value_p = p_WORD;
  }
  { // 18466 PROGRAM0.DO_PROC.OD.DO_4.BITS[0]
    st = getVariable(18466);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[0]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[0];;
  }
  { // 18467 PROGRAM0.DO_PROC.OD.DO_4.BITS[1]
    st = getVariable(18467);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[1]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[1];;
  }
  { // 18468 PROGRAM0.DO_PROC.OD.DO_4.BITS[2]
    st = getVariable(18468);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[2]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[2];;
  }
  { // 18469 PROGRAM0.DO_PROC.OD.DO_4.BITS[3]
    st = getVariable(18469);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[3]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[3];;
  }
  { // 18470 PROGRAM0.DO_PROC.OD.DO_4.BITS[4]
    st = getVariable(18470);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[4]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[4];;
  }
  { // 18471 PROGRAM0.DO_PROC.OD.DO_4.BITS[5]
    st = getVariable(18471);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[5]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[5];;
  }
  { // 18472 PROGRAM0.DO_PROC.OD.DO_4.BITS[6]
    st = getVariable(18472);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[6]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[6];;
  }
  { // 18473 PROGRAM0.DO_PROC.OD.DO_4.BITS[7]
    st = getVariable(18473);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[7]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[7];;
  }
  { // 18474 PROGRAM0.DO_PROC.OD.DO_4.BITS[8]
    st = getVariable(18474);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[8]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[8];;
  }
  { // 18475 PROGRAM0.DO_PROC.OD.DO_4.BITS[9]
    st = getVariable(18475);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[9]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[9];;
  }
  { // 18476 PROGRAM0.DO_PROC.OD.DO_4.BITS[10]
    st = getVariable(18476);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[10]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[10];;
  }
  { // 18477 PROGRAM0.DO_PROC.OD.DO_4.BITS[11]
    st = getVariable(18477);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[11]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[11];;
  }
  { // 18478 PROGRAM0.DO_PROC.OD.DO_4.BITS[12]
    st = getVariable(18478);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[12]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[12];;
  }
  { // 18479 PROGRAM0.DO_PROC.OD.DO_4.BITS[13]
    st = getVariable(18479);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[13]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[13];;
  }
  { // 18480 PROGRAM0.DO_PROC.OD.DO_4.BITS[14]
    st = getVariable(18480);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[14]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[14];;
  }
  { // 18481 PROGRAM0.DO_PROC.OD.DO_4.BITS[15]
    st = getVariable(18481);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_4.BITS[15]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_4;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[15];;
  }
  { // 18482 PROGRAM0.DO_PROC.OD.GPIO_OUT.IMIT
    st = getVariable(18482);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.IMIT", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p_BOOL = (BOOL*)&p_STRUCT_DO->IMIT;
    st->value_p = p_BOOL;
  }
  { // 18483 PROGRAM0.DO_PROC.OD.GPIO_OUT.BLCONNECT
    st = getVariable(18483);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BLCONNECT", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p_BOOL = (BOOL*)&p_STRUCT_DO->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 18484 PROGRAM0.DO_PROC.OD.GPIO_OUT.VALUE
    st = getVariable(18484);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.VALUE", 34);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p_WORD = (WORD*)&p_STRUCT_DO->VALUE;
    st->value_p = p_WORD;
  }
  { // 18485 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[0]
    st = getVariable(18485);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[0]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[0];;
  }
  { // 18486 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[1]
    st = getVariable(18486);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[1]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[1];;
  }
  { // 18487 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[2]
    st = getVariable(18487);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[2]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[2];;
  }
  { // 18488 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[3]
    st = getVariable(18488);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[3]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[3];;
  }
  { // 18489 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[4]
    st = getVariable(18489);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[4]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[4];;
  }
  { // 18490 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[5]
    st = getVariable(18490);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[5]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[5];;
  }
  { // 18491 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[6]
    st = getVariable(18491);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[6]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[6];;
  }
  { // 18492 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[7]
    st = getVariable(18492);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[7]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[7];;
  }
  { // 18493 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[8]
    st = getVariable(18493);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[8]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[8];;
  }
  { // 18494 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[9]
    st = getVariable(18494);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[9]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[9];;
  }
  { // 18495 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[10]
    st = getVariable(18495);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[10]", 37);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[10];;
  }
  { // 18496 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[11]
    st = getVariable(18496);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[11]", 37);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[11];;
  }
  { // 18497 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[12]
    st = getVariable(18497);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[12]", 37);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[12];;
  }
  { // 18498 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[13]
    st = getVariable(18498);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[13]", 37);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[13];;
  }
  { // 18499 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[14]
    st = getVariable(18499);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[14]", 37);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[14];;
  }
  { // 18500 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[15]
    st = getVariable(18500);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[15]", 37);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->GPIO_OUT;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[15];;
  }
  { // 18501 PROGRAM0.DO_PROC.ARDOUT_0.WFLAGS
    st = getVariable(18501);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_0.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_0.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18502 PROGRAM0.DO_PROC.ARDOUT_0.WVALUE
    st = getVariable(18502);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_0.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_0.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18503 PROGRAM0.DO_PROC.ARDOUT_1.WFLAGS
    st = getVariable(18503);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_1.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_1.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18504 PROGRAM0.DO_PROC.ARDOUT_1.WVALUE
    st = getVariable(18504);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_1.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_1.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18505 PROGRAM0.DO_PROC.ARDOUT_2.WFLAGS
    st = getVariable(18505);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_2.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_2.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18506 PROGRAM0.DO_PROC.ARDOUT_2.WVALUE
    st = getVariable(18506);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_2.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_2.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18507 PROGRAM0.DO_PROC.ARDOUT_3.WFLAGS
    st = getVariable(18507);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_3.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_3.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18508 PROGRAM0.DO_PROC.ARDOUT_3.WVALUE
    st = getVariable(18508);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_3.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_3.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18509 PROGRAM0.DO_PROC.ARDOUT_4.WFLAGS
    st = getVariable(18509);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_4.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_4.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18510 PROGRAM0.DO_PROC.ARDOUT_4.WVALUE
    st = getVariable(18510);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_4.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_4.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18511 PROGRAM0.DO_PROC.ARERR_66.WFLAGS
    st = getVariable(18511);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18512 PROGRAM0.DO_PROC.ARERR_66.WVALUE
    st = getVariable(18512);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18513 PROGRAM0.DO_PROC.ARERR_66.NANOSEC
    st = getVariable(18513);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18514 PROGRAM0.DO_PROC.ARERR_66.RESERVE
    st = getVariable(18514);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18515 PROGRAM0.DO_PROC.ARDOUT_66.WFLAGS
    st = getVariable(18515);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_66.WFLAGS", 33);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_66.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18516 PROGRAM0.DO_PROC.ARDOUT_66.WVALUE
    st = getVariable(18516);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_66.WVALUE", 33);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_66.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18517 PROGRAM0.DO_PROC.ARERR_0.WFLAGS
    st = getVariable(18517);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18518 PROGRAM0.DO_PROC.ARERR_0.WVALUE
    st = getVariable(18518);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18519 PROGRAM0.DO_PROC.ARERR_0.NANOSEC
    st = getVariable(18519);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18520 PROGRAM0.DO_PROC.ARERR_0.RESERVE
    st = getVariable(18520);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18521 PROGRAM0.DO_PROC.ARERR_1.WFLAGS
    st = getVariable(18521);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18522 PROGRAM0.DO_PROC.ARERR_1.WVALUE
    st = getVariable(18522);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18523 PROGRAM0.DO_PROC.ARERR_1.NANOSEC
    st = getVariable(18523);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18524 PROGRAM0.DO_PROC.ARERR_1.RESERVE
    st = getVariable(18524);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18525 PROGRAM0.DO_PROC.ARERR_2.WFLAGS
    st = getVariable(18525);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18526 PROGRAM0.DO_PROC.ARERR_2.WVALUE
    st = getVariable(18526);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18527 PROGRAM0.DO_PROC.ARERR_2.NANOSEC
    st = getVariable(18527);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18528 PROGRAM0.DO_PROC.ARERR_2.RESERVE
    st = getVariable(18528);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18529 PROGRAM0.DO_PROC.ARERR_15.WFLAGS
    st = getVariable(18529);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18530 PROGRAM0.DO_PROC.ARERR_15.WVALUE
    st = getVariable(18530);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18531 PROGRAM0.DO_PROC.ARERR_15.NANOSEC
    st = getVariable(18531);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18532 PROGRAM0.DO_PROC.ARERR_15.RESERVE
    st = getVariable(18532);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18533 PROGRAM0.DO_PROC.ARERR_16.WFLAGS
    st = getVariable(18533);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_16.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_16.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18534 PROGRAM0.DO_PROC.ARERR_16.WVALUE
    st = getVariable(18534);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_16.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_16.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18535 PROGRAM0.DO_PROC.ARERR_16.NANOSEC
    st = getVariable(18535);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_16.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_16.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18536 PROGRAM0.DO_PROC.ARERR_16.RESERVE
    st = getVariable(18536);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_16.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_16.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18537 PROGRAM0.DO_PROC.A1_1_ERR_MODE
    st = getVariable(18537);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A1_1_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A1_1_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18538 PROGRAM0.DO_PROC.A1_2_ERR_MODE
    st = getVariable(18538);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A1_2_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A1_2_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18539 PROGRAM0.DO_PROC.A1_3_ERR_MODE
    st = getVariable(18539);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A1_3_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A1_3_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18540 PROGRAM0.DO_PROC.A2_1_ERR_MODE
    st = getVariable(18540);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A2_1_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A2_1_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18541 PROGRAM0.DO_PROC.A2_4_ERR_MODE
    st = getVariable(18541);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A2_4_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A2_4_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18542 PROGRAM0.DO_PROC.DO_0_WVALUE
    st = getVariable(18542);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_0_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_0_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18543 PROGRAM0.DO_PROC.DO_1_WVALUE
    st = getVariable(18543);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_1_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_1_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18544 PROGRAM0.DO_PROC.DO_2_WVALUE
    st = getVariable(18544);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_2_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_2_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18545 PROGRAM0.DO_PROC.DO_3_WVALUE
    st = getVariable(18545);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_3_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18546 PROGRAM0.DO_PROC.DO_4_WVALUE
    st = getVariable(18546);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_4_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_4_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
