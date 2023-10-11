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

  { // 15845 PROGRAM0.DO_PROC.OD.DO_0.IMIT
    st = getVariable(15845);
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
  { // 15846 PROGRAM0.DO_PROC.OD.DO_0.BLCONNECT
    st = getVariable(15846);
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
  { // 15847 PROGRAM0.DO_PROC.OD.DO_0.VALUE
    st = getVariable(15847);
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
  { // 15848 PROGRAM0.DO_PROC.OD.DO_0.BITS[0]
    st = getVariable(15848);
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
  { // 15849 PROGRAM0.DO_PROC.OD.DO_0.BITS[1]
    st = getVariable(15849);
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
  { // 15850 PROGRAM0.DO_PROC.OD.DO_0.BITS[2]
    st = getVariable(15850);
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
  { // 15851 PROGRAM0.DO_PROC.OD.DO_0.BITS[3]
    st = getVariable(15851);
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
  { // 15852 PROGRAM0.DO_PROC.OD.DO_0.BITS[4]
    st = getVariable(15852);
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
  { // 15853 PROGRAM0.DO_PROC.OD.DO_0.BITS[5]
    st = getVariable(15853);
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
  { // 15854 PROGRAM0.DO_PROC.OD.DO_0.BITS[6]
    st = getVariable(15854);
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
  { // 15855 PROGRAM0.DO_PROC.OD.DO_0.BITS[7]
    st = getVariable(15855);
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
  { // 15856 PROGRAM0.DO_PROC.OD.DO_0.BITS[8]
    st = getVariable(15856);
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
  { // 15857 PROGRAM0.DO_PROC.OD.DO_0.BITS[9]
    st = getVariable(15857);
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
  { // 15858 PROGRAM0.DO_PROC.OD.DO_0.BITS[10]
    st = getVariable(15858);
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
  { // 15859 PROGRAM0.DO_PROC.OD.DO_0.BITS[11]
    st = getVariable(15859);
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
  { // 15860 PROGRAM0.DO_PROC.OD.DO_0.BITS[12]
    st = getVariable(15860);
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
  { // 15861 PROGRAM0.DO_PROC.OD.DO_0.BITS[13]
    st = getVariable(15861);
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
  { // 15862 PROGRAM0.DO_PROC.OD.DO_0.BITS[14]
    st = getVariable(15862);
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
  { // 15863 PROGRAM0.DO_PROC.OD.DO_0.BITS[15]
    st = getVariable(15863);
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
  { // 15864 PROGRAM0.DO_PROC.OD.DO_1.IMIT
    st = getVariable(15864);
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
  { // 15865 PROGRAM0.DO_PROC.OD.DO_1.BLCONNECT
    st = getVariable(15865);
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
  { // 15866 PROGRAM0.DO_PROC.OD.DO_1.VALUE
    st = getVariable(15866);
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
  { // 15867 PROGRAM0.DO_PROC.OD.DO_1.BITS[0]
    st = getVariable(15867);
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
  { // 15868 PROGRAM0.DO_PROC.OD.DO_1.BITS[1]
    st = getVariable(15868);
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
  { // 15869 PROGRAM0.DO_PROC.OD.DO_1.BITS[2]
    st = getVariable(15869);
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
  { // 15870 PROGRAM0.DO_PROC.OD.DO_1.BITS[3]
    st = getVariable(15870);
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
  { // 15871 PROGRAM0.DO_PROC.OD.DO_1.BITS[4]
    st = getVariable(15871);
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
  { // 15872 PROGRAM0.DO_PROC.OD.DO_1.BITS[5]
    st = getVariable(15872);
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
  { // 15873 PROGRAM0.DO_PROC.OD.DO_1.BITS[6]
    st = getVariable(15873);
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
  { // 15874 PROGRAM0.DO_PROC.OD.DO_1.BITS[7]
    st = getVariable(15874);
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
  { // 15875 PROGRAM0.DO_PROC.OD.DO_1.BITS[8]
    st = getVariable(15875);
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
  { // 15876 PROGRAM0.DO_PROC.OD.DO_1.BITS[9]
    st = getVariable(15876);
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
  { // 15877 PROGRAM0.DO_PROC.OD.DO_1.BITS[10]
    st = getVariable(15877);
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
  { // 15878 PROGRAM0.DO_PROC.OD.DO_1.BITS[11]
    st = getVariable(15878);
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
  { // 15879 PROGRAM0.DO_PROC.OD.DO_1.BITS[12]
    st = getVariable(15879);
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
  { // 15880 PROGRAM0.DO_PROC.OD.DO_1.BITS[13]
    st = getVariable(15880);
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
  { // 15881 PROGRAM0.DO_PROC.OD.DO_1.BITS[14]
    st = getVariable(15881);
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
  { // 15882 PROGRAM0.DO_PROC.OD.DO_1.BITS[15]
    st = getVariable(15882);
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
  { // 15883 PROGRAM0.DO_PROC.OD.DO_2.IMIT
    st = getVariable(15883);
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
  { // 15884 PROGRAM0.DO_PROC.OD.DO_2.BLCONNECT
    st = getVariable(15884);
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
  { // 15885 PROGRAM0.DO_PROC.OD.DO_2.VALUE
    st = getVariable(15885);
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
  { // 15886 PROGRAM0.DO_PROC.OD.DO_2.BITS[0]
    st = getVariable(15886);
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
  { // 15887 PROGRAM0.DO_PROC.OD.DO_2.BITS[1]
    st = getVariable(15887);
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
  { // 15888 PROGRAM0.DO_PROC.OD.DO_2.BITS[2]
    st = getVariable(15888);
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
  { // 15889 PROGRAM0.DO_PROC.OD.DO_2.BITS[3]
    st = getVariable(15889);
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
  { // 15890 PROGRAM0.DO_PROC.OD.DO_2.BITS[4]
    st = getVariable(15890);
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
  { // 15891 PROGRAM0.DO_PROC.OD.DO_2.BITS[5]
    st = getVariable(15891);
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
  { // 15892 PROGRAM0.DO_PROC.OD.DO_2.BITS[6]
    st = getVariable(15892);
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
  { // 15893 PROGRAM0.DO_PROC.OD.DO_2.BITS[7]
    st = getVariable(15893);
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
  { // 15894 PROGRAM0.DO_PROC.OD.DO_2.BITS[8]
    st = getVariable(15894);
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
  { // 15895 PROGRAM0.DO_PROC.OD.DO_2.BITS[9]
    st = getVariable(15895);
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
  { // 15896 PROGRAM0.DO_PROC.OD.DO_2.BITS[10]
    st = getVariable(15896);
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
  { // 15897 PROGRAM0.DO_PROC.OD.DO_2.BITS[11]
    st = getVariable(15897);
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
  { // 15898 PROGRAM0.DO_PROC.OD.DO_2.BITS[12]
    st = getVariable(15898);
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
  { // 15899 PROGRAM0.DO_PROC.OD.DO_2.BITS[13]
    st = getVariable(15899);
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
  { // 15900 PROGRAM0.DO_PROC.OD.DO_2.BITS[14]
    st = getVariable(15900);
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
  { // 15901 PROGRAM0.DO_PROC.OD.DO_2.BITS[15]
    st = getVariable(15901);
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
  { // 15902 PROGRAM0.DO_PROC.OD.DO_3.IMIT
    st = getVariable(15902);
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
  { // 15903 PROGRAM0.DO_PROC.OD.DO_3.BLCONNECT
    st = getVariable(15903);
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
  { // 15904 PROGRAM0.DO_PROC.OD.DO_3.VALUE
    st = getVariable(15904);
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
  { // 15905 PROGRAM0.DO_PROC.OD.DO_3.BITS[0]
    st = getVariable(15905);
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
  { // 15906 PROGRAM0.DO_PROC.OD.DO_3.BITS[1]
    st = getVariable(15906);
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
  { // 15907 PROGRAM0.DO_PROC.OD.DO_3.BITS[2]
    st = getVariable(15907);
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
  { // 15908 PROGRAM0.DO_PROC.OD.DO_3.BITS[3]
    st = getVariable(15908);
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
  { // 15909 PROGRAM0.DO_PROC.OD.DO_3.BITS[4]
    st = getVariable(15909);
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
  { // 15910 PROGRAM0.DO_PROC.OD.DO_3.BITS[5]
    st = getVariable(15910);
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
  { // 15911 PROGRAM0.DO_PROC.OD.DO_3.BITS[6]
    st = getVariable(15911);
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
  { // 15912 PROGRAM0.DO_PROC.OD.DO_3.BITS[7]
    st = getVariable(15912);
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
  { // 15913 PROGRAM0.DO_PROC.OD.DO_3.BITS[8]
    st = getVariable(15913);
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
  { // 15914 PROGRAM0.DO_PROC.OD.DO_3.BITS[9]
    st = getVariable(15914);
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
  { // 15915 PROGRAM0.DO_PROC.OD.DO_3.BITS[10]
    st = getVariable(15915);
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
  { // 15916 PROGRAM0.DO_PROC.OD.DO_3.BITS[11]
    st = getVariable(15916);
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
  { // 15917 PROGRAM0.DO_PROC.OD.DO_3.BITS[12]
    st = getVariable(15917);
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
  { // 15918 PROGRAM0.DO_PROC.OD.DO_3.BITS[13]
    st = getVariable(15918);
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
  { // 15919 PROGRAM0.DO_PROC.OD.DO_3.BITS[14]
    st = getVariable(15919);
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
  { // 15920 PROGRAM0.DO_PROC.OD.DO_3.BITS[15]
    st = getVariable(15920);
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
  { // 15921 PROGRAM0.DO_PROC.OD.DO_4.IMIT
    st = getVariable(15921);
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
  { // 15922 PROGRAM0.DO_PROC.OD.DO_4.BLCONNECT
    st = getVariable(15922);
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
  { // 15923 PROGRAM0.DO_PROC.OD.DO_4.VALUE
    st = getVariable(15923);
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
  { // 15924 PROGRAM0.DO_PROC.OD.DO_4.BITS[0]
    st = getVariable(15924);
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
  { // 15925 PROGRAM0.DO_PROC.OD.DO_4.BITS[1]
    st = getVariable(15925);
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
  { // 15926 PROGRAM0.DO_PROC.OD.DO_4.BITS[2]
    st = getVariable(15926);
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
  { // 15927 PROGRAM0.DO_PROC.OD.DO_4.BITS[3]
    st = getVariable(15927);
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
  { // 15928 PROGRAM0.DO_PROC.OD.DO_4.BITS[4]
    st = getVariable(15928);
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
  { // 15929 PROGRAM0.DO_PROC.OD.DO_4.BITS[5]
    st = getVariable(15929);
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
  { // 15930 PROGRAM0.DO_PROC.OD.DO_4.BITS[6]
    st = getVariable(15930);
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
  { // 15931 PROGRAM0.DO_PROC.OD.DO_4.BITS[7]
    st = getVariable(15931);
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
  { // 15932 PROGRAM0.DO_PROC.OD.DO_4.BITS[8]
    st = getVariable(15932);
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
  { // 15933 PROGRAM0.DO_PROC.OD.DO_4.BITS[9]
    st = getVariable(15933);
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
  { // 15934 PROGRAM0.DO_PROC.OD.DO_4.BITS[10]
    st = getVariable(15934);
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
  { // 15935 PROGRAM0.DO_PROC.OD.DO_4.BITS[11]
    st = getVariable(15935);
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
  { // 15936 PROGRAM0.DO_PROC.OD.DO_4.BITS[12]
    st = getVariable(15936);
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
  { // 15937 PROGRAM0.DO_PROC.OD.DO_4.BITS[13]
    st = getVariable(15937);
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
  { // 15938 PROGRAM0.DO_PROC.OD.DO_4.BITS[14]
    st = getVariable(15938);
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
  { // 15939 PROGRAM0.DO_PROC.OD.DO_4.BITS[15]
    st = getVariable(15939);
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
  { // 15940 PROGRAM0.DO_PROC.OD.DO_5.IMIT
    st = getVariable(15940);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p_BOOL = (BOOL*)&p_STRUCT_DO->IMIT;
    st->value_p = p_BOOL;
  }
  { // 15941 PROGRAM0.DO_PROC.OD.DO_5.BLCONNECT
    st = getVariable(15941);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p_BOOL = (BOOL*)&p_STRUCT_DO->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15942 PROGRAM0.DO_PROC.OD.DO_5.VALUE
    st = getVariable(15942);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p_WORD = (WORD*)&p_STRUCT_DO->VALUE;
    st->value_p = p_WORD;
  }
  { // 15943 PROGRAM0.DO_PROC.OD.DO_5.BITS[0]
    st = getVariable(15943);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[0]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[0];;
  }
  { // 15944 PROGRAM0.DO_PROC.OD.DO_5.BITS[1]
    st = getVariable(15944);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[1]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[1];;
  }
  { // 15945 PROGRAM0.DO_PROC.OD.DO_5.BITS[2]
    st = getVariable(15945);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[2]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[2];;
  }
  { // 15946 PROGRAM0.DO_PROC.OD.DO_5.BITS[3]
    st = getVariable(15946);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[3]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[3];;
  }
  { // 15947 PROGRAM0.DO_PROC.OD.DO_5.BITS[4]
    st = getVariable(15947);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[4]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[4];;
  }
  { // 15948 PROGRAM0.DO_PROC.OD.DO_5.BITS[5]
    st = getVariable(15948);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[5]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[5];;
  }
  { // 15949 PROGRAM0.DO_PROC.OD.DO_5.BITS[6]
    st = getVariable(15949);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[6]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[6];;
  }
  { // 15950 PROGRAM0.DO_PROC.OD.DO_5.BITS[7]
    st = getVariable(15950);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[7]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[7];;
  }
  { // 15951 PROGRAM0.DO_PROC.OD.DO_5.BITS[8]
    st = getVariable(15951);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[8]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[8];;
  }
  { // 15952 PROGRAM0.DO_PROC.OD.DO_5.BITS[9]
    st = getVariable(15952);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[9]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[9];;
  }
  { // 15953 PROGRAM0.DO_PROC.OD.DO_5.BITS[10]
    st = getVariable(15953);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[10]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[10];;
  }
  { // 15954 PROGRAM0.DO_PROC.OD.DO_5.BITS[11]
    st = getVariable(15954);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[11]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[11];;
  }
  { // 15955 PROGRAM0.DO_PROC.OD.DO_5.BITS[12]
    st = getVariable(15955);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[12]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[12];;
  }
  { // 15956 PROGRAM0.DO_PROC.OD.DO_5.BITS[13]
    st = getVariable(15956);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[13]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[13];;
  }
  { // 15957 PROGRAM0.DO_PROC.OD.DO_5.BITS[14]
    st = getVariable(15957);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[14]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[14];;
  }
  { // 15958 PROGRAM0.DO_PROC.OD.DO_5.BITS[15]
    st = getVariable(15958);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_5.BITS[15]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_5;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[15];;
  }
  { // 15959 PROGRAM0.DO_PROC.OD.DO_6.IMIT
    st = getVariable(15959);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p_BOOL = (BOOL*)&p_STRUCT_DO->IMIT;
    st->value_p = p_BOOL;
  }
  { // 15960 PROGRAM0.DO_PROC.OD.DO_6.BLCONNECT
    st = getVariable(15960);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p_BOOL = (BOOL*)&p_STRUCT_DO->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15961 PROGRAM0.DO_PROC.OD.DO_6.VALUE
    st = getVariable(15961);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p_WORD = (WORD*)&p_STRUCT_DO->VALUE;
    st->value_p = p_WORD;
  }
  { // 15962 PROGRAM0.DO_PROC.OD.DO_6.BITS[0]
    st = getVariable(15962);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[0]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[0];;
  }
  { // 15963 PROGRAM0.DO_PROC.OD.DO_6.BITS[1]
    st = getVariable(15963);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[1]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[1];;
  }
  { // 15964 PROGRAM0.DO_PROC.OD.DO_6.BITS[2]
    st = getVariable(15964);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[2]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[2];;
  }
  { // 15965 PROGRAM0.DO_PROC.OD.DO_6.BITS[3]
    st = getVariable(15965);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[3]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[3];;
  }
  { // 15966 PROGRAM0.DO_PROC.OD.DO_6.BITS[4]
    st = getVariable(15966);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[4]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[4];;
  }
  { // 15967 PROGRAM0.DO_PROC.OD.DO_6.BITS[5]
    st = getVariable(15967);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[5]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[5];;
  }
  { // 15968 PROGRAM0.DO_PROC.OD.DO_6.BITS[6]
    st = getVariable(15968);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[6]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[6];;
  }
  { // 15969 PROGRAM0.DO_PROC.OD.DO_6.BITS[7]
    st = getVariable(15969);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[7]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[7];;
  }
  { // 15970 PROGRAM0.DO_PROC.OD.DO_6.BITS[8]
    st = getVariable(15970);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[8]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[8];;
  }
  { // 15971 PROGRAM0.DO_PROC.OD.DO_6.BITS[9]
    st = getVariable(15971);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[9]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[9];;
  }
  { // 15972 PROGRAM0.DO_PROC.OD.DO_6.BITS[10]
    st = getVariable(15972);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[10]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[10];;
  }
  { // 15973 PROGRAM0.DO_PROC.OD.DO_6.BITS[11]
    st = getVariable(15973);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[11]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[11];;
  }
  { // 15974 PROGRAM0.DO_PROC.OD.DO_6.BITS[12]
    st = getVariable(15974);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[12]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[12];;
  }
  { // 15975 PROGRAM0.DO_PROC.OD.DO_6.BITS[13]
    st = getVariable(15975);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[13]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[13];;
  }
  { // 15976 PROGRAM0.DO_PROC.OD.DO_6.BITS[14]
    st = getVariable(15976);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[14]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[14];;
  }
  { // 15977 PROGRAM0.DO_PROC.OD.DO_6.BITS[15]
    st = getVariable(15977);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_6.BITS[15]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_6;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[15];;
  }
  { // 15978 PROGRAM0.DO_PROC.OD.DO_7.IMIT
    st = getVariable(15978);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p_BOOL = (BOOL*)&p_STRUCT_DO->IMIT;
    st->value_p = p_BOOL;
  }
  { // 15979 PROGRAM0.DO_PROC.OD.DO_7.BLCONNECT
    st = getVariable(15979);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p_BOOL = (BOOL*)&p_STRUCT_DO->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15980 PROGRAM0.DO_PROC.OD.DO_7.VALUE
    st = getVariable(15980);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p_WORD = (WORD*)&p_STRUCT_DO->VALUE;
    st->value_p = p_WORD;
  }
  { // 15981 PROGRAM0.DO_PROC.OD.DO_7.BITS[0]
    st = getVariable(15981);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[0]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[0];;
  }
  { // 15982 PROGRAM0.DO_PROC.OD.DO_7.BITS[1]
    st = getVariable(15982);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[1]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[1];;
  }
  { // 15983 PROGRAM0.DO_PROC.OD.DO_7.BITS[2]
    st = getVariable(15983);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[2]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[2];;
  }
  { // 15984 PROGRAM0.DO_PROC.OD.DO_7.BITS[3]
    st = getVariable(15984);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[3]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[3];;
  }
  { // 15985 PROGRAM0.DO_PROC.OD.DO_7.BITS[4]
    st = getVariable(15985);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[4]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[4];;
  }
  { // 15986 PROGRAM0.DO_PROC.OD.DO_7.BITS[5]
    st = getVariable(15986);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[5]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[5];;
  }
  { // 15987 PROGRAM0.DO_PROC.OD.DO_7.BITS[6]
    st = getVariable(15987);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[6]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[6];;
  }
  { // 15988 PROGRAM0.DO_PROC.OD.DO_7.BITS[7]
    st = getVariable(15988);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[7]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[7];;
  }
  { // 15989 PROGRAM0.DO_PROC.OD.DO_7.BITS[8]
    st = getVariable(15989);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[8]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[8];;
  }
  { // 15990 PROGRAM0.DO_PROC.OD.DO_7.BITS[9]
    st = getVariable(15990);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[9]", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[9];;
  }
  { // 15991 PROGRAM0.DO_PROC.OD.DO_7.BITS[10]
    st = getVariable(15991);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[10]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[10];;
  }
  { // 15992 PROGRAM0.DO_PROC.OD.DO_7.BITS[11]
    st = getVariable(15992);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[11]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[11];;
  }
  { // 15993 PROGRAM0.DO_PROC.OD.DO_7.BITS[12]
    st = getVariable(15993);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[12]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[12];;
  }
  { // 15994 PROGRAM0.DO_PROC.OD.DO_7.BITS[13]
    st = getVariable(15994);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[13]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[13];;
  }
  { // 15995 PROGRAM0.DO_PROC.OD.DO_7.BITS[14]
    st = getVariable(15995);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[14]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[14];;
  }
  { // 15996 PROGRAM0.DO_PROC.OD.DO_7.BITS[15]
    st = getVariable(15996);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.OD.DO_7.BITS[15]", 33);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_DOCONFIG = (DOCONFIG*)p_PROC_DO->OD.value;
    p_STRUCT_DO = (STRUCT_DO*)&p_DOCONFIG->DO_7;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[15];;
  }
  { // 15997 PROGRAM0.DO_PROC.OD.GPIO_OUT.IMIT
    st = getVariable(15997);
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
  { // 15998 PROGRAM0.DO_PROC.OD.GPIO_OUT.BLCONNECT
    st = getVariable(15998);
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
  { // 15999 PROGRAM0.DO_PROC.OD.GPIO_OUT.VALUE
    st = getVariable(15999);
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
  { // 16000 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[0]
    st = getVariable(16000);
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
  { // 16001 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[1]
    st = getVariable(16001);
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
  { // 16002 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[2]
    st = getVariable(16002);
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
  { // 16003 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[3]
    st = getVariable(16003);
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
  { // 16004 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[4]
    st = getVariable(16004);
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
  { // 16005 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[5]
    st = getVariable(16005);
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
  { // 16006 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[6]
    st = getVariable(16006);
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
  { // 16007 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[7]
    st = getVariable(16007);
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
  { // 16008 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[8]
    st = getVariable(16008);
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
  { // 16009 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[9]
    st = getVariable(16009);
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
  { // 16010 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[10]
    st = getVariable(16010);
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
  { // 16011 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[11]
    st = getVariable(16011);
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
  { // 16012 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[12]
    st = getVariable(16012);
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
  { // 16013 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[13]
    st = getVariable(16013);
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
  { // 16014 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[14]
    st = getVariable(16014);
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
  { // 16015 PROGRAM0.DO_PROC.OD.GPIO_OUT.BITS[15]
    st = getVariable(16015);
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
  { // 16016 PROGRAM0.DO_PROC.ARDOUT_0.WFLAGS
    st = getVariable(16016);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_0.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_0.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16017 PROGRAM0.DO_PROC.ARDOUT_0.WVALUE
    st = getVariable(16017);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_0.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_0.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16018 PROGRAM0.DO_PROC.ARDOUT_1.WFLAGS
    st = getVariable(16018);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_1.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_1.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16019 PROGRAM0.DO_PROC.ARDOUT_1.WVALUE
    st = getVariable(16019);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_1.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_1.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16020 PROGRAM0.DO_PROC.ARDOUT_2.WFLAGS
    st = getVariable(16020);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_2.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_2.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16021 PROGRAM0.DO_PROC.ARDOUT_2.WVALUE
    st = getVariable(16021);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_2.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_2.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16022 PROGRAM0.DO_PROC.ARDOUT_3.WFLAGS
    st = getVariable(16022);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_3.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_3.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16023 PROGRAM0.DO_PROC.ARDOUT_3.WVALUE
    st = getVariable(16023);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_3.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_3.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16024 PROGRAM0.DO_PROC.ARERR_66.WFLAGS
    st = getVariable(16024);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16025 PROGRAM0.DO_PROC.ARERR_66.WVALUE
    st = getVariable(16025);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16026 PROGRAM0.DO_PROC.ARERR_66.NANOSEC
    st = getVariable(16026);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16027 PROGRAM0.DO_PROC.ARERR_66.RESERVE
    st = getVariable(16027);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_66.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_66.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16028 PROGRAM0.DO_PROC.ARDOUT_66.WFLAGS
    st = getVariable(16028);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_66.WFLAGS", 33);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_66.value;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16029 PROGRAM0.DO_PROC.ARDOUT_66.WVALUE
    st = getVariable(16029);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARDOUT_66.WVALUE", 33);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TWORDDATA = (TWORDDATA*)p_PROC_DO->ARDOUT_66.value;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16030 PROGRAM0.DO_PROC.ARERR_0.WFLAGS
    st = getVariable(16030);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16031 PROGRAM0.DO_PROC.ARERR_0.WVALUE
    st = getVariable(16031);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16032 PROGRAM0.DO_PROC.ARERR_0.NANOSEC
    st = getVariable(16032);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16033 PROGRAM0.DO_PROC.ARERR_0.RESERVE
    st = getVariable(16033);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_0.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_0.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16034 PROGRAM0.DO_PROC.ARERR_1.WFLAGS
    st = getVariable(16034);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16035 PROGRAM0.DO_PROC.ARERR_1.WVALUE
    st = getVariable(16035);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16036 PROGRAM0.DO_PROC.ARERR_1.NANOSEC
    st = getVariable(16036);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16037 PROGRAM0.DO_PROC.ARERR_1.RESERVE
    st = getVariable(16037);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_1.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_1.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16038 PROGRAM0.DO_PROC.ARERR_2.WFLAGS
    st = getVariable(16038);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16039 PROGRAM0.DO_PROC.ARERR_2.WVALUE
    st = getVariable(16039);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16040 PROGRAM0.DO_PROC.ARERR_2.NANOSEC
    st = getVariable(16040);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16041 PROGRAM0.DO_PROC.ARERR_2.RESERVE
    st = getVariable(16041);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_2.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_2.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16042 PROGRAM0.DO_PROC.ARERR_15.WFLAGS
    st = getVariable(16042);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16043 PROGRAM0.DO_PROC.ARERR_15.WVALUE
    st = getVariable(16043);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16044 PROGRAM0.DO_PROC.ARERR_15.NANOSEC
    st = getVariable(16044);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16045 PROGRAM0.DO_PROC.ARERR_15.RESERVE
    st = getVariable(16045);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.ARERR_15.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DO->ARERR_15.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16046 PROGRAM0.DO_PROC.A1_1_ERR_MODE
    st = getVariable(16046);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A1_1_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A1_1_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 16047 PROGRAM0.DO_PROC.A1_2_ERR_MODE
    st = getVariable(16047);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A1_2_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A1_2_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 16048 PROGRAM0.DO_PROC.A1_3_ERR_MODE
    st = getVariable(16048);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A1_3_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A1_3_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 16049 PROGRAM0.DO_PROC.A2_1_ERR_MODE
    st = getVariable(16049);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.A2_1_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->A2_1_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 16050 PROGRAM0.DO_PROC.DO_0_WVALUE
    st = getVariable(16050);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_0_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_0_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 16051 PROGRAM0.DO_PROC.DO_1_WVALUE
    st = getVariable(16051);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_1_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_1_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 16052 PROGRAM0.DO_PROC.DO_2_WVALUE
    st = getVariable(16052);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_2_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_2_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 16053 PROGRAM0.DO_PROC.DO_3_WVALUE
    st = getVariable(16053);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3_WVALUE", 28);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_UINT = (UINT*)p_PROC_DO->DO_3_WVALUE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
