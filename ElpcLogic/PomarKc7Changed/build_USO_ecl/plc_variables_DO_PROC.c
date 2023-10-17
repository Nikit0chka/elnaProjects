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

  { // 18885 PROGRAM0.DO_PROC.OD.DO_0.IMIT
    st = getVariable(18885);
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
  { // 18886 PROGRAM0.DO_PROC.OD.DO_0.BLCONNECT
    st = getVariable(18886);
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
  { // 18887 PROGRAM0.DO_PROC.OD.DO_0.VALUE
    st = getVariable(18887);
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
  { // 18888 PROGRAM0.DO_PROC.OD.DO_0.BITS[0]
    st = getVariable(18888);
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
  { // 18889 PROGRAM0.DO_PROC.OD.DO_0.BITS[1]
    st = getVariable(18889);
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
  { // 18890 PROGRAM0.DO_PROC.OD.DO_0.BITS[2]
    st = getVariable(18890);
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
  { // 18891 PROGRAM0.DO_PROC.OD.DO_0.BITS[3]
    st = getVariable(18891);
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
  { // 18892 PROGRAM0.DO_PROC.OD.DO_0.BITS[4]
    st = getVariable(18892);
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
  { // 18893 PROGRAM0.DO_PROC.OD.DO_0.BITS[5]
    st = getVariable(18893);
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
  { // 18894 PROGRAM0.DO_PROC.OD.DO_0.BITS[6]
    st = getVariable(18894);
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
  { // 18895 PROGRAM0.DO_PROC.OD.DO_0.BITS[7]
    st = getVariable(18895);
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
  { // 18896 PROGRAM0.DO_PROC.OD.DO_0.BITS[8]
    st = getVariable(18896);
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
  { // 18897 PROGRAM0.DO_PROC.OD.DO_0.BITS[9]
    st = getVariable(18897);
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
  { // 18898 PROGRAM0.DO_PROC.OD.DO_0.BITS[10]
    st = getVariable(18898);
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
  { // 18899 PROGRAM0.DO_PROC.OD.DO_0.BITS[11]
    st = getVariable(18899);
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
  { // 18900 PROGRAM0.DO_PROC.OD.DO_0.BITS[12]
    st = getVariable(18900);
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
  { // 18901 PROGRAM0.DO_PROC.OD.DO_0.BITS[13]
    st = getVariable(18901);
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
  { // 18902 PROGRAM0.DO_PROC.OD.DO_0.BITS[14]
    st = getVariable(18902);
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
  { // 18903 PROGRAM0.DO_PROC.OD.DO_0.BITS[15]
    st = getVariable(18903);
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
  { // 18904 PROGRAM0.DO_PROC.OD.DO_1.IMIT
    st = getVariable(18904);
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
  { // 18905 PROGRAM0.DO_PROC.OD.DO_1.BLCONNECT
    st = getVariable(18905);
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
  { // 18906 PROGRAM0.DO_PROC.OD.DO_1.VALUE
    st = getVariable(18906);
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
  { // 18907 PROGRAM0.DO_PROC.OD.DO_1.BITS[0]
    st = getVariable(18907);
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
  { // 18908 PROGRAM0.DO_PROC.OD.DO_1.BITS[1]
    st = getVariable(18908);
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
  { // 18909 PROGRAM0.DO_PROC.OD.DO_1.BITS[2]
    st = getVariable(18909);
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
  { // 18910 PROGRAM0.DO_PROC.OD.DO_1.BITS[3]
    st = getVariable(18910);
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
  { // 18911 PROGRAM0.DO_PROC.OD.DO_1.BITS[4]
    st = getVariable(18911);
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
  { // 18912 PROGRAM0.DO_PROC.OD.DO_1.BITS[5]
    st = getVariable(18912);
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
  { // 18913 PROGRAM0.DO_PROC.OD.DO_1.BITS[6]
    st = getVariable(18913);
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
  { // 18914 PROGRAM0.DO_PROC.OD.DO_1.BITS[7]
    st = getVariable(18914);
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
  { // 18915 PROGRAM0.DO_PROC.OD.DO_1.BITS[8]
    st = getVariable(18915);
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
  { // 18916 PROGRAM0.DO_PROC.OD.DO_1.BITS[9]
    st = getVariable(18916);
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
  { // 18917 PROGRAM0.DO_PROC.OD.DO_1.BITS[10]
    st = getVariable(18917);
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
  { // 18918 PROGRAM0.DO_PROC.OD.DO_1.BITS[11]
    st = getVariable(18918);
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
  { // 18919 PROGRAM0.DO_PROC.OD.DO_1.BITS[12]
    st = getVariable(18919);
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
  { // 18920 PROGRAM0.DO_PROC.OD.DO_1.BITS[13]
    st = getVariable(18920);
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
  { // 18921 PROGRAM0.DO_PROC.OD.DO_1.BITS[14]
    st = getVariable(18921);
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
  { // 18922 PROGRAM0.DO_PROC.OD.DO_1.BITS[15]
    st = getVariable(18922);
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
  { // 18923 PROGRAM0.DO_PROC.OD.DO_2.IMIT
    st = getVariable(18923);
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
  { // 18924 PROGRAM0.DO_PROC.OD.DO_2.BLCONNECT
    st = getVariable(18924);
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
  { // 18925 PROGRAM0.DO_PROC.OD.DO_2.VALUE
    st = getVariable(18925);
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
  { // 18926 PROGRAM0.DO_PROC.OD.DO_2.BITS[0]
    st = getVariable(18926);
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
  { // 18927 PROGRAM0.DO_PROC.OD.DO_2.BITS[1]
    st = getVariable(18927);
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
  { // 18928 PROGRAM0.DO_PROC.OD.DO_2.BITS[2]
    st = getVariable(18928);
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
  { // 18929 PROGRAM0.DO_PROC.OD.DO_2.BITS[3]
    st = getVariable(18929);
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
  { // 18930 PROGRAM0.DO_PROC.OD.DO_2.BITS[4]
    st = getVariable(18930);
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
  { // 18931 PROGRAM0.DO_PROC.OD.DO_2.BITS[5]
    st = getVariable(18931);
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
  { // 18932 PROGRAM0.DO_PROC.OD.DO_2.BITS[6]
    st = getVariable(18932);
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
  { // 18933 PROGRAM0.DO_PROC.OD.DO_2.BITS[7]
    st = getVariable(18933);
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
  { // 18934 PROGRAM0.DO_PROC.OD.DO_2.BITS[8]
    st = getVariable(18934);
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
  { // 18935 PROGRAM0.DO_PROC.OD.DO_2.BITS[9]
    st = getVariable(18935);
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
  { // 18936 PROGRAM0.DO_PROC.OD.DO_2.BITS[10]
    st = getVariable(18936);
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
  { // 18937 PROGRAM0.DO_PROC.OD.DO_2.BITS[11]
    st = getVariable(18937);
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
  { // 18938 PROGRAM0.DO_PROC.OD.DO_2.BITS[12]
    st = getVariable(18938);
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
  { // 18939 PROGRAM0.DO_PROC.OD.DO_2.BITS[13]
    st = getVariable(18939);
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
  { // 18940 PROGRAM0.DO_PROC.OD.DO_2.BITS[14]
    st = getVariable(18940);
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
  { // 18941 PROGRAM0.DO_PROC.OD.DO_2.BITS[15]
    st = getVariable(18941);
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
  { // 18942 PROGRAM0.DO_PROC.OD.DO_3.IMIT
    st = getVariable(18942);
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
  { // 18943 PROGRAM0.DO_PROC.OD.DO_3.BLCONNECT
    st = getVariable(18943);
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
  { // 18944 PROGRAM0.DO_PROC.OD.DO_3.VALUE
    st = getVariable(18944);
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
  { // 18945 PROGRAM0.DO_PROC.OD.DO_3.BITS[0]
    st = getVariable(18945);
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
  { // 18946 PROGRAM0.DO_PROC.OD.DO_3.BITS[1]
    st = getVariable(18946);
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
  { // 18947 PROGRAM0.DO_PROC.OD.DO_3.BITS[2]
    st = getVariable(18947);
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
  { // 18948 PROGRAM0.DO_PROC.OD.DO_3.BITS[3]
    st = getVariable(18948);
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
  { // 18949 PROGRAM0.DO_PROC.OD.DO_3.BITS[4]
    st = getVariable(18949);
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
  { // 18950 PROGRAM0.DO_PROC.OD.DO_3.BITS[5]
    st = getVariable(18950);
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
  { // 18951 PROGRAM0.DO_PROC.OD.DO_3.BITS[6]
    st = getVariable(18951);
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
  { // 18952 PROGRAM0.DO_PROC.OD.DO_3.BITS[7]
    st = getVariable(18952);
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
  { // 18953 PROGRAM0.DO_PROC.OD.DO_3.BITS[8]
    st = getVariable(18953);
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
  { // 18954 PROGRAM0.DO_PROC.OD.DO_3.BITS[9]
    st = getVariable(18954);
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
  { // 18955 PROGRAM0.DO_PROC.OD.DO_3.BITS[10]
    st = getVariable(18955);
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
  { // 18956 PROGRAM0.DO_PROC.OD.DO_3.BITS[11]
    st = getVariable(18956);
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
  { // 18957 PROGRAM0.DO_PROC.OD.DO_3.BITS[12]
    st = getVariable(18957);
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
  { // 18958 PROGRAM0.DO_PROC.OD.DO_3.BITS[13]
    st = getVariable(18958);
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
  { // 18959 PROGRAM0.DO_PROC.OD.DO_3.BITS[14]
    st = getVariable(18959);
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
  { // 18960 PROGRAM0.DO_PROC.OD.DO_3.BITS[15]
    st = getVariable(18960);
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
  { // 18961 PROGRAM0.DO_PROC.OD.DO_4.IMIT
    st = getVariable(18961);
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
  { // 18962 PROGRAM0.DO_PROC.OD.DO_4.BLCONNECT
    st = getVariable(18962);
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
  { // 18963 PROGRAM0.DO_PROC.OD.DO_4.VALUE
    st = getVariable(18963);
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
  { // 18964 PROGRAM0.DO_PROC.OD.DO_4.BITS[0]
    st = getVariable(18964);
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
  { // 18965 PROGRAM0.DO_PROC.OD.DO_4.BITS[1]
    st = getVariable(18965);
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
  { // 18966 PROGRAM0.DO_PROC.OD.DO_4.BITS[2]
    st = getVariable(18966);
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
  { // 18967 PROGRAM0.DO_PROC.OD.DO_4.BITS[3]
    st = getVariable(18967);
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
  { // 18968 PROGRAM0.DO_PROC.OD.DO_4.BITS[4]
    st = getVariable(18968);
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
  { // 18969 PROGRAM0.DO_PROC.OD.DO_4.BITS[5]
    st = getVariable(18969);
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
  { // 18970 PROGRAM0.DO_PROC.OD.DO_4.BITS[6]
    st = getVariable(18970);
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
  { // 18971 PROGRAM0.DO_PROC.OD.DO_4.BITS[7]
    st = getVariable(18971);
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
  { // 18972 PROGRAM0.DO_PROC.OD.DO_4.BITS[8]
    st = getVariable(18972);
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
  { // 18973 PROGRAM0.DO_PROC.OD.DO_4.BITS[9]
    st = getVariable(18973);
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
  { // 18974 PROGRAM0.DO_PROC.OD.DO_4.BITS[10]
    st = getVariable(18974);
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
  { // 18975 PROGRAM0.DO_PROC.OD.DO_4.BITS[11]
    st = getVariable(18975);
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
  { // 18976 PROGRAM0.DO_PROC.OD.DO_4.BITS[12]
    st = getVariable(18976);
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
  { // 18977 PROGRAM0.DO_PROC.OD.DO_4.BITS[13]
    st = getVariable(18977);
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
  { // 18978 PROGRAM0.DO_PROC.OD.DO_4.BITS[14]
    st = getVariable(18978);
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
  { // 18979 PROGRAM0.DO_PROC.OD.DO_4.BITS[15]
    st = getVariable(18979);
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
  { // 18980 PROGRAM0.DO_PROC.OD.GPIO_OUT.IMIT
    st = getVariable(18980);
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
  { // 18981 PROGRAM0.DO_PROC.OD.GPIO_OUT.BLCONNECT
    st = getVariable(18981);
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
  { // 18982 PROGRAM0.DO_PROC.OD.GPIO_OUT.VALUE
    st = getVariable(18982);
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
  { // 18983 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[0]
    st = getVariable(18983);
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
  { // 18984 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[1]
    st = getVariable(18984);
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
  { // 18985 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[2]
    st = getVariable(18985);
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
  { // 18986 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[3]
    st = getVariable(18986);
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
  { // 18987 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[4]
    st = getVariable(18987);
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
  { // 18988 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[5]
    st = getVariable(18988);
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
  { // 18989 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[6]
    st = getVariable(18989);
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
  { // 18990 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[7]
    st = getVariable(18990);
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
  { // 18991 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[8]
    st = getVariable(18991);
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
  { // 18992 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[9]
    st = getVariable(18992);
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
  { // 18993 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[10]
    st = getVariable(18993);
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
  { // 18994 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[11]
    st = getVariable(18994);
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
  { // 18995 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[12]
    st = getVariable(18995);
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
  { // 18996 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[13]
    st = getVariable(18996);
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
  { // 18997 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[14]
    st = getVariable(18997);
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
  { // 18998 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[15]
    st = getVariable(18998);
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
  { // 18999 PROGRAM0.DO_PROC.ARDOUT_0.WFLAGS
    st = getVariable(18999);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_0.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_0.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19000 PROGRAM0.DO_PROC.ARDOUT_0.WVALUE
    st = getVariable(19000);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_0.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_0.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19001 PROGRAM0.DO_PROC.ARDOUT_1.WFLAGS
    st = getVariable(19001);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_1.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_1.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19002 PROGRAM0.DO_PROC.ARDOUT_1.WVALUE
    st = getVariable(19002);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_1.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_1.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19003 PROGRAM0.DO_PROC.ARDOUT_2.WFLAGS
    st = getVariable(19003);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_2.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_2.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19004 PROGRAM0.DO_PROC.ARDOUT_2.WVALUE
    st = getVariable(19004);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_2.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_2.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19005 PROGRAM0.DO_PROC.ARDOUT_3.WFLAGS
    st = getVariable(19005);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_3.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_3.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19006 PROGRAM0.DO_PROC.ARDOUT_3.WVALUE
    st = getVariable(19006);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_3.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_3.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19007 PROGRAM0.DO_PROC.ARDOUT_4.WFLAGS
    st = getVariable(19007);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_4.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_4.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19008 PROGRAM0.DO_PROC.ARDOUT_4.WVALUE
    st = getVariable(19008);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_4.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_4.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19009 PROGRAM0.DO_PROC.ARERR_66.WFLAGS
    st = getVariable(19009);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19010 PROGRAM0.DO_PROC.ARERR_66.WVALUE
    st = getVariable(19010);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19011 PROGRAM0.DO_PROC.ARERR_66.NANOSEC
    st = getVariable(19011);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 19012 PROGRAM0.DO_PROC.ARERR_66.RESERVE
    st = getVariable(19012);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 19013 PROGRAM0.DO_PROC.ARDOUT_66.WFLAGS
    st = getVariable(19013);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_66.WFLAGS", 33);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_66.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19014 PROGRAM0.DO_PROC.ARDOUT_66.WVALUE
    st = getVariable(19014);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_66.WVALUE", 33);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_66.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19015 PROGRAM0.DO_PROC.ARERR_0.WFLAGS
    st = getVariable(19015);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19016 PROGRAM0.DO_PROC.ARERR_0.WVALUE
    st = getVariable(19016);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19017 PROGRAM0.DO_PROC.ARERR_0.NANOSEC
    st = getVariable(19017);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 19018 PROGRAM0.DO_PROC.ARERR_0.RESERVE
    st = getVariable(19018);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 19019 PROGRAM0.DO_PROC.ARERR_1.WFLAGS
    st = getVariable(19019);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19020 PROGRAM0.DO_PROC.ARERR_1.WVALUE
    st = getVariable(19020);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19021 PROGRAM0.DO_PROC.ARERR_1.NANOSEC
    st = getVariable(19021);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 19022 PROGRAM0.DO_PROC.ARERR_1.RESERVE
    st = getVariable(19022);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 19023 PROGRAM0.DO_PROC.ARERR_2.WFLAGS
    st = getVariable(19023);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19024 PROGRAM0.DO_PROC.ARERR_2.WVALUE
    st = getVariable(19024);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19025 PROGRAM0.DO_PROC.ARERR_2.NANOSEC
    st = getVariable(19025);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 19026 PROGRAM0.DO_PROC.ARERR_2.RESERVE
    st = getVariable(19026);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 19027 PROGRAM0.DO_PROC.ARERR_15.WFLAGS
    st = getVariable(19027);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19028 PROGRAM0.DO_PROC.ARERR_15.WVALUE
    st = getVariable(19028);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19029 PROGRAM0.DO_PROC.ARERR_15.NANOSEC
    st = getVariable(19029);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 19030 PROGRAM0.DO_PROC.ARERR_15.RESERVE
    st = getVariable(19030);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 19031 PROGRAM0.DO_PROC.ARERR_16.WFLAGS
    st = getVariable(19031);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_16.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_16.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 19032 PROGRAM0.DO_PROC.ARERR_16.WVALUE
    st = getVariable(19032);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_16.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_16.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 19033 PROGRAM0.DO_PROC.ARERR_16.NANOSEC
    st = getVariable(19033);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_16.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_16.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 19034 PROGRAM0.DO_PROC.ARERR_16.RESERVE
    st = getVariable(19034);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_16.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_16.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 19035 PROGRAM0.DO_PROC.A1_1_ERR_MODE
    st = getVariable(19035);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A1_1_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A1_1_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19036 PROGRAM0.DO_PROC.A1_2_ERR_MODE
    st = getVariable(19036);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A1_2_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A1_2_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19037 PROGRAM0.DO_PROC.A1_3_ERR_MODE
    st = getVariable(19037);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A1_3_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A1_3_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19038 PROGRAM0.DO_PROC.A2_1_ERR_MODE
    st = getVariable(19038);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A2_1_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A2_1_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19039 PROGRAM0.DO_PROC.A2_4_ERR_MODE
    st = getVariable(19039);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A2_4_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A2_4_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19040 PROGRAM0.DO_PROC.DO_0_WVALUE
    st = getVariable(19040);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_0_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_0_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19041 PROGRAM0.DO_PROC.DO_1_WVALUE
    st = getVariable(19041);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_1_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_1_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19042 PROGRAM0.DO_PROC.DO_2_WVALUE
    st = getVariable(19042);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_2_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_2_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19043 PROGRAM0.DO_PROC.DO_3_WVALUE
    st = getVariable(19043);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_3_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 19044 PROGRAM0.DO_PROC.DO_4_WVALUE
    st = getVariable(19044);
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
