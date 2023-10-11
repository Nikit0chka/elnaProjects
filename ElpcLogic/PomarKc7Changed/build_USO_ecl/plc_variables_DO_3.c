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

int __variables_init_DO_3(){
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

  { // 18309 PROGRAM0.DO_PROC.DO_3.ARDOUT.WFLAGS
    st = getVariable(18309);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.ARDOUT.WFLAGS", 35);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_TWORDDATA = (TWORDDATA*)&p_FB_DOSOURCEMLP->ARDOUT;
    p_UINT = (UINT*)&p_TWORDDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18310 PROGRAM0.DO_PROC.DO_3.ARDOUT.WVALUE
    st = getVariable(18310);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.ARDOUT.WVALUE", 35);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_TWORDDATA = (TWORDDATA*)&p_FB_DOSOURCEMLP->ARDOUT;
    p_UINT = (UINT*)&p_TWORDDATA->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18311 PROGRAM0.DO_PROC.DO_3.ERR_MOD.WFLAGS
    st = getVariable(18311);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.ERR_MOD.WFLAGS", 36);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_TITEMDIN = (TITEMDIN*)&p_FB_DOSOURCEMLP->ERR_MOD;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18312 PROGRAM0.DO_PROC.DO_3.ERR_MOD.WVALUE
    st = getVariable(18312);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.ERR_MOD.WVALUE", 36);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_TITEMDIN = (TITEMDIN*)&p_FB_DOSOURCEMLP->ERR_MOD;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18313 PROGRAM0.DO_PROC.DO_3.ERR_MOD.NANOSEC
    st = getVariable(18313);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.ERR_MOD.NANOSEC", 37);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_TITEMDIN = (TITEMDIN*)&p_FB_DOSOURCEMLP->ERR_MOD;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18314 PROGRAM0.DO_PROC.DO_3.ERR_MOD.RESERVE
    st = getVariable(18314);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.ERR_MOD.RESERVE", 37);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_TITEMDIN = (TITEMDIN*)&p_FB_DOSOURCEMLP->ERR_MOD;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18315 PROGRAM0.DO_PROC.DO_3.STRDO.IMIT
    st = getVariable(18315);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.IMIT", 32);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p_BOOL = (BOOL*)&p_STRUCT_DO->IMIT;
    st->value_p = p_BOOL;
  }
  { // 18316 PROGRAM0.DO_PROC.DO_3.STRDO.BLCONNECT
    st = getVariable(18316);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BLCONNECT", 37);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p_BOOL = (BOOL*)&p_STRUCT_DO->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 18317 PROGRAM0.DO_PROC.DO_3.STRDO.VALUE
    st = getVariable(18317);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.VALUE", 33);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p_WORD = (WORD*)&p_STRUCT_DO->VALUE;
    st->value_p = p_WORD;
  }
  { // 18318 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[0]
    st = getVariable(18318);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[0]", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[0];;
  }
  { // 18319 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[1]
    st = getVariable(18319);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[1]", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[1];;
  }
  { // 18320 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[2]
    st = getVariable(18320);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[2]", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[2];;
  }
  { // 18321 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[3]
    st = getVariable(18321);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[3]", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[3];;
  }
  { // 18322 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[4]
    st = getVariable(18322);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[4]", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[4];;
  }
  { // 18323 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[5]
    st = getVariable(18323);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[5]", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[5];;
  }
  { // 18324 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[6]
    st = getVariable(18324);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[6]", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[6];;
  }
  { // 18325 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[7]
    st = getVariable(18325);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[7]", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[7];;
  }
  { // 18326 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[8]
    st = getVariable(18326);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[8]", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[8];;
  }
  { // 18327 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[9]
    st = getVariable(18327);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[9]", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[9];;
  }
  { // 18328 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[10]
    st = getVariable(18328);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[10]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[10];;
  }
  { // 18329 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[11]
    st = getVariable(18329);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[11]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[11];;
  }
  { // 18330 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[12]
    st = getVariable(18330);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[12]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[12];;
  }
  { // 18331 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[13]
    st = getVariable(18331);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[13]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[13];;
  }
  { // 18332 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[14]
    st = getVariable(18332);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[14]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[14];;
  }
  { // 18333 PROGRAM0.DO_PROC.DO_3.STRDO.BITS[15]
    st = getVariable(18333);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.STRDO.BITS[15]", 36);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_STRUCT_DO = (STRUCT_DO*)&p_FB_DOSOURCEMLP->STRDO;
    p___IEC___ARRAY_OF_BOOL_16_t = (__IEC___ARRAY_OF_BOOL_16_t*)&p_STRUCT_DO->BITS;
    st->value_p = &p___IEC___ARRAY_OF_BOOL_16_t->value.table[15];;
  }
  { // 18334 PROGRAM0.DO_PROC.DO_3.BITNUMBER
    st = getVariable(18334);
    memcpy(st->IEC_TYPE, "INT", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DO_PROC.DO_3.BITNUMBER", 31);
    st->size_data = sizeof(INT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DO = (PROC_DO*)&p_PROGRAM0->DO_PROC;
    p_FB_DOSOURCEMLP = (FB_DOSOURCEMLP*)&p_PROC_DO->DO_3;
    p_INT = (INT*)&p_FB_DOSOURCEMLP->BITNUMBER;
    UnpackVar(p_INT, INT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
