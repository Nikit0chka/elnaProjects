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

int __variables_init_DI_PROC(){
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

  { // 14569 PROGRAM0.DI_PROC.ARDIN_0.WFLAGS
    st = getVariable(14569);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_0.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_0.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14570 PROGRAM0.DI_PROC.ARDIN_0.WVALUE
    st = getVariable(14570);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_0.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_0.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14571 PROGRAM0.DI_PROC.ARDIN_0.NANOSEC
    st = getVariable(14571);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_0.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_0.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14572 PROGRAM0.DI_PROC.ARDIN_0.RESERVE
    st = getVariable(14572);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_0.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_0.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14573 PROGRAM0.DI_PROC.ARDIN_1.WFLAGS
    st = getVariable(14573);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_1.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_1.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14574 PROGRAM0.DI_PROC.ARDIN_1.WVALUE
    st = getVariable(14574);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_1.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_1.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14575 PROGRAM0.DI_PROC.ARDIN_1.NANOSEC
    st = getVariable(14575);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_1.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_1.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14576 PROGRAM0.DI_PROC.ARDIN_1.RESERVE
    st = getVariable(14576);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_1.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_1.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14577 PROGRAM0.DI_PROC.ARDIN_2.WFLAGS
    st = getVariable(14577);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_2.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_2.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14578 PROGRAM0.DI_PROC.ARDIN_2.WVALUE
    st = getVariable(14578);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_2.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_2.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14579 PROGRAM0.DI_PROC.ARDIN_2.NANOSEC
    st = getVariable(14579);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_2.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_2.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14580 PROGRAM0.DI_PROC.ARDIN_2.RESERVE
    st = getVariable(14580);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_2.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_2.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14581 PROGRAM0.DI_PROC.ARDIN_3.WFLAGS
    st = getVariable(14581);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_3.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_3.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14582 PROGRAM0.DI_PROC.ARDIN_3.WVALUE
    st = getVariable(14582);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_3.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_3.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14583 PROGRAM0.DI_PROC.ARDIN_3.NANOSEC
    st = getVariable(14583);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_3.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_3.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14584 PROGRAM0.DI_PROC.ARDIN_3.RESERVE
    st = getVariable(14584);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_3.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_3.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14585 PROGRAM0.DI_PROC.ARDIN_4.WFLAGS
    st = getVariable(14585);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_4.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_4.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14586 PROGRAM0.DI_PROC.ARDIN_4.WVALUE
    st = getVariable(14586);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_4.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_4.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14587 PROGRAM0.DI_PROC.ARDIN_4.NANOSEC
    st = getVariable(14587);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_4.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_4.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14588 PROGRAM0.DI_PROC.ARDIN_4.RESERVE
    st = getVariable(14588);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_4.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_4.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14589 PROGRAM0.DI_PROC.ARDIN_5.WFLAGS
    st = getVariable(14589);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_5.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_5.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14590 PROGRAM0.DI_PROC.ARDIN_5.WVALUE
    st = getVariable(14590);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_5.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_5.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14591 PROGRAM0.DI_PROC.ARDIN_5.NANOSEC
    st = getVariable(14591);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_5.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_5.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14592 PROGRAM0.DI_PROC.ARDIN_5.RESERVE
    st = getVariable(14592);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_5.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_5.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14593 PROGRAM0.DI_PROC.ARDIN_6.WFLAGS
    st = getVariable(14593);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_6.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_6.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14594 PROGRAM0.DI_PROC.ARDIN_6.WVALUE
    st = getVariable(14594);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_6.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_6.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14595 PROGRAM0.DI_PROC.ARDIN_6.NANOSEC
    st = getVariable(14595);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_6.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_6.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14596 PROGRAM0.DI_PROC.ARDIN_6.RESERVE
    st = getVariable(14596);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_6.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_6.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14597 PROGRAM0.DI_PROC.ARDIN_7.WFLAGS
    st = getVariable(14597);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_7.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_7.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14598 PROGRAM0.DI_PROC.ARDIN_7.WVALUE
    st = getVariable(14598);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_7.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_7.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14599 PROGRAM0.DI_PROC.ARDIN_7.NANOSEC
    st = getVariable(14599);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_7.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_7.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14600 PROGRAM0.DI_PROC.ARDIN_7.RESERVE
    st = getVariable(14600);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_7.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_7.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14601 PROGRAM0.DI_PROC.ARDIN_8.WFLAGS
    st = getVariable(14601);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_8.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_8.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14602 PROGRAM0.DI_PROC.ARDIN_8.WVALUE
    st = getVariable(14602);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_8.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_8.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14603 PROGRAM0.DI_PROC.ARDIN_8.NANOSEC
    st = getVariable(14603);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_8.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_8.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14604 PROGRAM0.DI_PROC.ARDIN_8.RESERVE
    st = getVariable(14604);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_8.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_8.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14605 PROGRAM0.DI_PROC.ARDIN_9.WFLAGS
    st = getVariable(14605);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_9.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_9.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14606 PROGRAM0.DI_PROC.ARDIN_9.WVALUE
    st = getVariable(14606);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_9.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_9.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14607 PROGRAM0.DI_PROC.ARDIN_9.NANOSEC
    st = getVariable(14607);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_9.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_9.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14608 PROGRAM0.DI_PROC.ARDIN_9.RESERVE
    st = getVariable(14608);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_9.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_9.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14609 PROGRAM0.DI_PROC.ARDIN_10.WFLAGS
    st = getVariable(14609);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_10.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_10.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14610 PROGRAM0.DI_PROC.ARDIN_10.WVALUE
    st = getVariable(14610);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_10.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_10.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14611 PROGRAM0.DI_PROC.ARDIN_10.NANOSEC
    st = getVariable(14611);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_10.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_10.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14612 PROGRAM0.DI_PROC.ARDIN_10.RESERVE
    st = getVariable(14612);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_10.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_10.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14613 PROGRAM0.DI_PROC.ARDIN_11.WFLAGS
    st = getVariable(14613);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_11.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_11.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14614 PROGRAM0.DI_PROC.ARDIN_11.WVALUE
    st = getVariable(14614);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_11.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_11.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14615 PROGRAM0.DI_PROC.ARDIN_11.NANOSEC
    st = getVariable(14615);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_11.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_11.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14616 PROGRAM0.DI_PROC.ARDIN_11.RESERVE
    st = getVariable(14616);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_11.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_11.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14617 PROGRAM0.DI_PROC.ARDIN_12.WFLAGS
    st = getVariable(14617);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_12.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_12.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14618 PROGRAM0.DI_PROC.ARDIN_12.WVALUE
    st = getVariable(14618);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_12.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_12.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14619 PROGRAM0.DI_PROC.ARDIN_12.NANOSEC
    st = getVariable(14619);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_12.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_12.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14620 PROGRAM0.DI_PROC.ARDIN_12.RESERVE
    st = getVariable(14620);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_12.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_12.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14621 PROGRAM0.DI_PROC.ARDIN_13.WFLAGS
    st = getVariable(14621);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_13.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_13.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14622 PROGRAM0.DI_PROC.ARDIN_13.WVALUE
    st = getVariable(14622);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_13.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_13.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14623 PROGRAM0.DI_PROC.ARDIN_13.NANOSEC
    st = getVariable(14623);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_13.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_13.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14624 PROGRAM0.DI_PROC.ARDIN_13.RESERVE
    st = getVariable(14624);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_13.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_13.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14625 PROGRAM0.DI_PROC.ARDIN_14.WFLAGS
    st = getVariable(14625);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_14.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_14.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14626 PROGRAM0.DI_PROC.ARDIN_14.WVALUE
    st = getVariable(14626);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_14.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_14.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14627 PROGRAM0.DI_PROC.ARDIN_14.NANOSEC
    st = getVariable(14627);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_14.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_14.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14628 PROGRAM0.DI_PROC.ARDIN_14.RESERVE
    st = getVariable(14628);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_14.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_14.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14629 PROGRAM0.DI_PROC.ARDIN_15.WFLAGS
    st = getVariable(14629);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_15.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_15.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14630 PROGRAM0.DI_PROC.ARDIN_15.WVALUE
    st = getVariable(14630);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_15.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_15.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 14631 PROGRAM0.DI_PROC.ARDIN_15.NANOSEC
    st = getVariable(14631);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_15.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_15.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 14632 PROGRAM0.DI_PROC.ARDIN_15.RESERVE
    st = getVariable(14632);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_15.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_15.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 14633 PROGRAM0.DI_PROC.DI.DI_0.IMIT
    st = getVariable(14633);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 14634 PROGRAM0.DI_PROC.DI.DI_0.VALUE
    st = getVariable(14634);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 14635 PROGRAM0.DI_PROC.DI.DI_0.RELIABILITY
    st = getVariable(14635);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.RELIABILITY", 36);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 14636 PROGRAM0.DI_PROC.DI.DI_0.BITS[0].VALUE
    st = getVariable(14636);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[0].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14637 PROGRAM0.DI_PROC.DI.DI_0.BITS[0].RELIABILITY
    st = getVariable(14637);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[0].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14638 PROGRAM0.DI_PROC.DI.DI_0.BITS[0]._INVERSED
    st = getVariable(14638);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[0]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14639 PROGRAM0.DI_PROC.DI.DI_0.BITS[1].VALUE
    st = getVariable(14639);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[1].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14640 PROGRAM0.DI_PROC.DI.DI_0.BITS[1].RELIABILITY
    st = getVariable(14640);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[1].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14641 PROGRAM0.DI_PROC.DI.DI_0.BITS[1]._INVERSED
    st = getVariable(14641);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[1]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14642 PROGRAM0.DI_PROC.DI.DI_0.BITS[2].VALUE
    st = getVariable(14642);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[2].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14643 PROGRAM0.DI_PROC.DI.DI_0.BITS[2].RELIABILITY
    st = getVariable(14643);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[2].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14644 PROGRAM0.DI_PROC.DI.DI_0.BITS[2]._INVERSED
    st = getVariable(14644);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[2]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14645 PROGRAM0.DI_PROC.DI.DI_0.BITS[3].VALUE
    st = getVariable(14645);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[3].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14646 PROGRAM0.DI_PROC.DI.DI_0.BITS[3].RELIABILITY
    st = getVariable(14646);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[3].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14647 PROGRAM0.DI_PROC.DI.DI_0.BITS[3]._INVERSED
    st = getVariable(14647);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[3]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14648 PROGRAM0.DI_PROC.DI.DI_0.BITS[4].VALUE
    st = getVariable(14648);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[4].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14649 PROGRAM0.DI_PROC.DI.DI_0.BITS[4].RELIABILITY
    st = getVariable(14649);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[4].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14650 PROGRAM0.DI_PROC.DI.DI_0.BITS[4]._INVERSED
    st = getVariable(14650);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[4]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14651 PROGRAM0.DI_PROC.DI.DI_0.BITS[5].VALUE
    st = getVariable(14651);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[5].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14652 PROGRAM0.DI_PROC.DI.DI_0.BITS[5].RELIABILITY
    st = getVariable(14652);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[5].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14653 PROGRAM0.DI_PROC.DI.DI_0.BITS[5]._INVERSED
    st = getVariable(14653);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[5]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14654 PROGRAM0.DI_PROC.DI.DI_0.BITS[6].VALUE
    st = getVariable(14654);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[6].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14655 PROGRAM0.DI_PROC.DI.DI_0.BITS[6].RELIABILITY
    st = getVariable(14655);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[6].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14656 PROGRAM0.DI_PROC.DI.DI_0.BITS[6]._INVERSED
    st = getVariable(14656);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[6]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14657 PROGRAM0.DI_PROC.DI.DI_0.BITS[7].VALUE
    st = getVariable(14657);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[7].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14658 PROGRAM0.DI_PROC.DI.DI_0.BITS[7].RELIABILITY
    st = getVariable(14658);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[7].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14659 PROGRAM0.DI_PROC.DI.DI_0.BITS[7]._INVERSED
    st = getVariable(14659);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[7]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14660 PROGRAM0.DI_PROC.DI.DI_0.BITS[8].VALUE
    st = getVariable(14660);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[8].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14661 PROGRAM0.DI_PROC.DI.DI_0.BITS[8].RELIABILITY
    st = getVariable(14661);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[8].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14662 PROGRAM0.DI_PROC.DI.DI_0.BITS[8]._INVERSED
    st = getVariable(14662);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[8]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14663 PROGRAM0.DI_PROC.DI.DI_0.BITS[9].VALUE
    st = getVariable(14663);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[9].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14664 PROGRAM0.DI_PROC.DI.DI_0.BITS[9].RELIABILITY
    st = getVariable(14664);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[9].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14665 PROGRAM0.DI_PROC.DI.DI_0.BITS[9]._INVERSED
    st = getVariable(14665);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[9]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14666 PROGRAM0.DI_PROC.DI.DI_0.BITS[10].VALUE
    st = getVariable(14666);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[10].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14667 PROGRAM0.DI_PROC.DI.DI_0.BITS[10].RELIABILITY
    st = getVariable(14667);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[10].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14668 PROGRAM0.DI_PROC.DI.DI_0.BITS[10]._INVERSED
    st = getVariable(14668);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[10]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14669 PROGRAM0.DI_PROC.DI.DI_0.BITS[11].VALUE
    st = getVariable(14669);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[11].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14670 PROGRAM0.DI_PROC.DI.DI_0.BITS[11].RELIABILITY
    st = getVariable(14670);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[11].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14671 PROGRAM0.DI_PROC.DI.DI_0.BITS[11]._INVERSED
    st = getVariable(14671);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[11]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14672 PROGRAM0.DI_PROC.DI.DI_0.BITS[12].VALUE
    st = getVariable(14672);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[12].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14673 PROGRAM0.DI_PROC.DI.DI_0.BITS[12].RELIABILITY
    st = getVariable(14673);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[12].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14674 PROGRAM0.DI_PROC.DI.DI_0.BITS[12]._INVERSED
    st = getVariable(14674);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[12]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14675 PROGRAM0.DI_PROC.DI.DI_0.BITS[13].VALUE
    st = getVariable(14675);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[13].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14676 PROGRAM0.DI_PROC.DI.DI_0.BITS[13].RELIABILITY
    st = getVariable(14676);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[13].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14677 PROGRAM0.DI_PROC.DI.DI_0.BITS[13]._INVERSED
    st = getVariable(14677);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[13]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14678 PROGRAM0.DI_PROC.DI.DI_0.BITS[14].VALUE
    st = getVariable(14678);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[14].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14679 PROGRAM0.DI_PROC.DI.DI_0.BITS[14].RELIABILITY
    st = getVariable(14679);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[14].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14680 PROGRAM0.DI_PROC.DI.DI_0.BITS[14]._INVERSED
    st = getVariable(14680);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[14]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14681 PROGRAM0.DI_PROC.DI.DI_0.BITS[15].VALUE
    st = getVariable(14681);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[15].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14682 PROGRAM0.DI_PROC.DI.DI_0.BITS[15].RELIABILITY
    st = getVariable(14682);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[15].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14683 PROGRAM0.DI_PROC.DI.DI_0.BITS[15]._INVERSED
    st = getVariable(14683);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BITS[15]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14684 PROGRAM0.DI_PROC.DI.DI_0.BLCONNECT
    st = getVariable(14684);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_0.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_0;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 14685 PROGRAM0.DI_PROC.DI.DI_1.IMIT
    st = getVariable(14685);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 14686 PROGRAM0.DI_PROC.DI.DI_1.VALUE
    st = getVariable(14686);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 14687 PROGRAM0.DI_PROC.DI.DI_1.RELIABILITY
    st = getVariable(14687);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.RELIABILITY", 36);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 14688 PROGRAM0.DI_PROC.DI.DI_1.BITS[0].VALUE
    st = getVariable(14688);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[0].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14689 PROGRAM0.DI_PROC.DI.DI_1.BITS[0].RELIABILITY
    st = getVariable(14689);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[0].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14690 PROGRAM0.DI_PROC.DI.DI_1.BITS[0]._INVERSED
    st = getVariable(14690);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[0]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14691 PROGRAM0.DI_PROC.DI.DI_1.BITS[1].VALUE
    st = getVariable(14691);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[1].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14692 PROGRAM0.DI_PROC.DI.DI_1.BITS[1].RELIABILITY
    st = getVariable(14692);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[1].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14693 PROGRAM0.DI_PROC.DI.DI_1.BITS[1]._INVERSED
    st = getVariable(14693);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[1]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14694 PROGRAM0.DI_PROC.DI.DI_1.BITS[2].VALUE
    st = getVariable(14694);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[2].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14695 PROGRAM0.DI_PROC.DI.DI_1.BITS[2].RELIABILITY
    st = getVariable(14695);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[2].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14696 PROGRAM0.DI_PROC.DI.DI_1.BITS[2]._INVERSED
    st = getVariable(14696);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[2]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14697 PROGRAM0.DI_PROC.DI.DI_1.BITS[3].VALUE
    st = getVariable(14697);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[3].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14698 PROGRAM0.DI_PROC.DI.DI_1.BITS[3].RELIABILITY
    st = getVariable(14698);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[3].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14699 PROGRAM0.DI_PROC.DI.DI_1.BITS[3]._INVERSED
    st = getVariable(14699);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[3]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14700 PROGRAM0.DI_PROC.DI.DI_1.BITS[4].VALUE
    st = getVariable(14700);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[4].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14701 PROGRAM0.DI_PROC.DI.DI_1.BITS[4].RELIABILITY
    st = getVariable(14701);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[4].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14702 PROGRAM0.DI_PROC.DI.DI_1.BITS[4]._INVERSED
    st = getVariable(14702);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[4]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14703 PROGRAM0.DI_PROC.DI.DI_1.BITS[5].VALUE
    st = getVariable(14703);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[5].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14704 PROGRAM0.DI_PROC.DI.DI_1.BITS[5].RELIABILITY
    st = getVariable(14704);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[5].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14705 PROGRAM0.DI_PROC.DI.DI_1.BITS[5]._INVERSED
    st = getVariable(14705);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[5]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14706 PROGRAM0.DI_PROC.DI.DI_1.BITS[6].VALUE
    st = getVariable(14706);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[6].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14707 PROGRAM0.DI_PROC.DI.DI_1.BITS[6].RELIABILITY
    st = getVariable(14707);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[6].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14708 PROGRAM0.DI_PROC.DI.DI_1.BITS[6]._INVERSED
    st = getVariable(14708);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[6]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14709 PROGRAM0.DI_PROC.DI.DI_1.BITS[7].VALUE
    st = getVariable(14709);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[7].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14710 PROGRAM0.DI_PROC.DI.DI_1.BITS[7].RELIABILITY
    st = getVariable(14710);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[7].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14711 PROGRAM0.DI_PROC.DI.DI_1.BITS[7]._INVERSED
    st = getVariable(14711);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[7]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14712 PROGRAM0.DI_PROC.DI.DI_1.BITS[8].VALUE
    st = getVariable(14712);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[8].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14713 PROGRAM0.DI_PROC.DI.DI_1.BITS[8].RELIABILITY
    st = getVariable(14713);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[8].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14714 PROGRAM0.DI_PROC.DI.DI_1.BITS[8]._INVERSED
    st = getVariable(14714);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[8]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14715 PROGRAM0.DI_PROC.DI.DI_1.BITS[9].VALUE
    st = getVariable(14715);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[9].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14716 PROGRAM0.DI_PROC.DI.DI_1.BITS[9].RELIABILITY
    st = getVariable(14716);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[9].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14717 PROGRAM0.DI_PROC.DI.DI_1.BITS[9]._INVERSED
    st = getVariable(14717);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[9]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14718 PROGRAM0.DI_PROC.DI.DI_1.BITS[10].VALUE
    st = getVariable(14718);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[10].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14719 PROGRAM0.DI_PROC.DI.DI_1.BITS[10].RELIABILITY
    st = getVariable(14719);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[10].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14720 PROGRAM0.DI_PROC.DI.DI_1.BITS[10]._INVERSED
    st = getVariable(14720);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[10]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14721 PROGRAM0.DI_PROC.DI.DI_1.BITS[11].VALUE
    st = getVariable(14721);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[11].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14722 PROGRAM0.DI_PROC.DI.DI_1.BITS[11].RELIABILITY
    st = getVariable(14722);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[11].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14723 PROGRAM0.DI_PROC.DI.DI_1.BITS[11]._INVERSED
    st = getVariable(14723);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[11]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14724 PROGRAM0.DI_PROC.DI.DI_1.BITS[12].VALUE
    st = getVariable(14724);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[12].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14725 PROGRAM0.DI_PROC.DI.DI_1.BITS[12].RELIABILITY
    st = getVariable(14725);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[12].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14726 PROGRAM0.DI_PROC.DI.DI_1.BITS[12]._INVERSED
    st = getVariable(14726);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[12]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14727 PROGRAM0.DI_PROC.DI.DI_1.BITS[13].VALUE
    st = getVariable(14727);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[13].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14728 PROGRAM0.DI_PROC.DI.DI_1.BITS[13].RELIABILITY
    st = getVariable(14728);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[13].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14729 PROGRAM0.DI_PROC.DI.DI_1.BITS[13]._INVERSED
    st = getVariable(14729);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[13]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14730 PROGRAM0.DI_PROC.DI.DI_1.BITS[14].VALUE
    st = getVariable(14730);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[14].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14731 PROGRAM0.DI_PROC.DI.DI_1.BITS[14].RELIABILITY
    st = getVariable(14731);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[14].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14732 PROGRAM0.DI_PROC.DI.DI_1.BITS[14]._INVERSED
    st = getVariable(14732);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[14]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14733 PROGRAM0.DI_PROC.DI.DI_1.BITS[15].VALUE
    st = getVariable(14733);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[15].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14734 PROGRAM0.DI_PROC.DI.DI_1.BITS[15].RELIABILITY
    st = getVariable(14734);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[15].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14735 PROGRAM0.DI_PROC.DI.DI_1.BITS[15]._INVERSED
    st = getVariable(14735);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BITS[15]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14736 PROGRAM0.DI_PROC.DI.DI_1.BLCONNECT
    st = getVariable(14736);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_1.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_1;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 14737 PROGRAM0.DI_PROC.DI.DI_2.IMIT
    st = getVariable(14737);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 14738 PROGRAM0.DI_PROC.DI.DI_2.VALUE
    st = getVariable(14738);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 14739 PROGRAM0.DI_PROC.DI.DI_2.RELIABILITY
    st = getVariable(14739);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.RELIABILITY", 36);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 14740 PROGRAM0.DI_PROC.DI.DI_2.BITS[0].VALUE
    st = getVariable(14740);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[0].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14741 PROGRAM0.DI_PROC.DI.DI_2.BITS[0].RELIABILITY
    st = getVariable(14741);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[0].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14742 PROGRAM0.DI_PROC.DI.DI_2.BITS[0]._INVERSED
    st = getVariable(14742);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[0]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14743 PROGRAM0.DI_PROC.DI.DI_2.BITS[1].VALUE
    st = getVariable(14743);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[1].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14744 PROGRAM0.DI_PROC.DI.DI_2.BITS[1].RELIABILITY
    st = getVariable(14744);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[1].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14745 PROGRAM0.DI_PROC.DI.DI_2.BITS[1]._INVERSED
    st = getVariable(14745);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[1]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14746 PROGRAM0.DI_PROC.DI.DI_2.BITS[2].VALUE
    st = getVariable(14746);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[2].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14747 PROGRAM0.DI_PROC.DI.DI_2.BITS[2].RELIABILITY
    st = getVariable(14747);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[2].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14748 PROGRAM0.DI_PROC.DI.DI_2.BITS[2]._INVERSED
    st = getVariable(14748);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[2]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14749 PROGRAM0.DI_PROC.DI.DI_2.BITS[3].VALUE
    st = getVariable(14749);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[3].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14750 PROGRAM0.DI_PROC.DI.DI_2.BITS[3].RELIABILITY
    st = getVariable(14750);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[3].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14751 PROGRAM0.DI_PROC.DI.DI_2.BITS[3]._INVERSED
    st = getVariable(14751);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[3]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14752 PROGRAM0.DI_PROC.DI.DI_2.BITS[4].VALUE
    st = getVariable(14752);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[4].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14753 PROGRAM0.DI_PROC.DI.DI_2.BITS[4].RELIABILITY
    st = getVariable(14753);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[4].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14754 PROGRAM0.DI_PROC.DI.DI_2.BITS[4]._INVERSED
    st = getVariable(14754);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[4]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14755 PROGRAM0.DI_PROC.DI.DI_2.BITS[5].VALUE
    st = getVariable(14755);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[5].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14756 PROGRAM0.DI_PROC.DI.DI_2.BITS[5].RELIABILITY
    st = getVariable(14756);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[5].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14757 PROGRAM0.DI_PROC.DI.DI_2.BITS[5]._INVERSED
    st = getVariable(14757);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[5]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14758 PROGRAM0.DI_PROC.DI.DI_2.BITS[6].VALUE
    st = getVariable(14758);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[6].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14759 PROGRAM0.DI_PROC.DI.DI_2.BITS[6].RELIABILITY
    st = getVariable(14759);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[6].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14760 PROGRAM0.DI_PROC.DI.DI_2.BITS[6]._INVERSED
    st = getVariable(14760);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[6]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14761 PROGRAM0.DI_PROC.DI.DI_2.BITS[7].VALUE
    st = getVariable(14761);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[7].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14762 PROGRAM0.DI_PROC.DI.DI_2.BITS[7].RELIABILITY
    st = getVariable(14762);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[7].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14763 PROGRAM0.DI_PROC.DI.DI_2.BITS[7]._INVERSED
    st = getVariable(14763);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[7]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14764 PROGRAM0.DI_PROC.DI.DI_2.BITS[8].VALUE
    st = getVariable(14764);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[8].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14765 PROGRAM0.DI_PROC.DI.DI_2.BITS[8].RELIABILITY
    st = getVariable(14765);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[8].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14766 PROGRAM0.DI_PROC.DI.DI_2.BITS[8]._INVERSED
    st = getVariable(14766);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[8]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14767 PROGRAM0.DI_PROC.DI.DI_2.BITS[9].VALUE
    st = getVariable(14767);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[9].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14768 PROGRAM0.DI_PROC.DI.DI_2.BITS[9].RELIABILITY
    st = getVariable(14768);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[9].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14769 PROGRAM0.DI_PROC.DI.DI_2.BITS[9]._INVERSED
    st = getVariable(14769);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[9]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14770 PROGRAM0.DI_PROC.DI.DI_2.BITS[10].VALUE
    st = getVariable(14770);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[10].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14771 PROGRAM0.DI_PROC.DI.DI_2.BITS[10].RELIABILITY
    st = getVariable(14771);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[10].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14772 PROGRAM0.DI_PROC.DI.DI_2.BITS[10]._INVERSED
    st = getVariable(14772);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[10]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14773 PROGRAM0.DI_PROC.DI.DI_2.BITS[11].VALUE
    st = getVariable(14773);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[11].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14774 PROGRAM0.DI_PROC.DI.DI_2.BITS[11].RELIABILITY
    st = getVariable(14774);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[11].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14775 PROGRAM0.DI_PROC.DI.DI_2.BITS[11]._INVERSED
    st = getVariable(14775);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[11]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14776 PROGRAM0.DI_PROC.DI.DI_2.BITS[12].VALUE
    st = getVariable(14776);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[12].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14777 PROGRAM0.DI_PROC.DI.DI_2.BITS[12].RELIABILITY
    st = getVariable(14777);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[12].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14778 PROGRAM0.DI_PROC.DI.DI_2.BITS[12]._INVERSED
    st = getVariable(14778);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[12]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14779 PROGRAM0.DI_PROC.DI.DI_2.BITS[13].VALUE
    st = getVariable(14779);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[13].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14780 PROGRAM0.DI_PROC.DI.DI_2.BITS[13].RELIABILITY
    st = getVariable(14780);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[13].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14781 PROGRAM0.DI_PROC.DI.DI_2.BITS[13]._INVERSED
    st = getVariable(14781);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[13]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14782 PROGRAM0.DI_PROC.DI.DI_2.BITS[14].VALUE
    st = getVariable(14782);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[14].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14783 PROGRAM0.DI_PROC.DI.DI_2.BITS[14].RELIABILITY
    st = getVariable(14783);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[14].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14784 PROGRAM0.DI_PROC.DI.DI_2.BITS[14]._INVERSED
    st = getVariable(14784);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[14]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14785 PROGRAM0.DI_PROC.DI.DI_2.BITS[15].VALUE
    st = getVariable(14785);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[15].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14786 PROGRAM0.DI_PROC.DI.DI_2.BITS[15].RELIABILITY
    st = getVariable(14786);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[15].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14787 PROGRAM0.DI_PROC.DI.DI_2.BITS[15]._INVERSED
    st = getVariable(14787);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BITS[15]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14788 PROGRAM0.DI_PROC.DI.DI_2.BLCONNECT
    st = getVariable(14788);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_2.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_2;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 14789 PROGRAM0.DI_PROC.DI.DI_3.IMIT
    st = getVariable(14789);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 14790 PROGRAM0.DI_PROC.DI.DI_3.VALUE
    st = getVariable(14790);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 14791 PROGRAM0.DI_PROC.DI.DI_3.RELIABILITY
    st = getVariable(14791);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.RELIABILITY", 36);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 14792 PROGRAM0.DI_PROC.DI.DI_3.BITS[0].VALUE
    st = getVariable(14792);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[0].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14793 PROGRAM0.DI_PROC.DI.DI_3.BITS[0].RELIABILITY
    st = getVariable(14793);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[0].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14794 PROGRAM0.DI_PROC.DI.DI_3.BITS[0]._INVERSED
    st = getVariable(14794);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[0]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14795 PROGRAM0.DI_PROC.DI.DI_3.BITS[1].VALUE
    st = getVariable(14795);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[1].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14796 PROGRAM0.DI_PROC.DI.DI_3.BITS[1].RELIABILITY
    st = getVariable(14796);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[1].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14797 PROGRAM0.DI_PROC.DI.DI_3.BITS[1]._INVERSED
    st = getVariable(14797);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[1]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14798 PROGRAM0.DI_PROC.DI.DI_3.BITS[2].VALUE
    st = getVariable(14798);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[2].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14799 PROGRAM0.DI_PROC.DI.DI_3.BITS[2].RELIABILITY
    st = getVariable(14799);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[2].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14800 PROGRAM0.DI_PROC.DI.DI_3.BITS[2]._INVERSED
    st = getVariable(14800);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[2]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14801 PROGRAM0.DI_PROC.DI.DI_3.BITS[3].VALUE
    st = getVariable(14801);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[3].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14802 PROGRAM0.DI_PROC.DI.DI_3.BITS[3].RELIABILITY
    st = getVariable(14802);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[3].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14803 PROGRAM0.DI_PROC.DI.DI_3.BITS[3]._INVERSED
    st = getVariable(14803);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[3]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14804 PROGRAM0.DI_PROC.DI.DI_3.BITS[4].VALUE
    st = getVariable(14804);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[4].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14805 PROGRAM0.DI_PROC.DI.DI_3.BITS[4].RELIABILITY
    st = getVariable(14805);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[4].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14806 PROGRAM0.DI_PROC.DI.DI_3.BITS[4]._INVERSED
    st = getVariable(14806);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[4]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14807 PROGRAM0.DI_PROC.DI.DI_3.BITS[5].VALUE
    st = getVariable(14807);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[5].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14808 PROGRAM0.DI_PROC.DI.DI_3.BITS[5].RELIABILITY
    st = getVariable(14808);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[5].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14809 PROGRAM0.DI_PROC.DI.DI_3.BITS[5]._INVERSED
    st = getVariable(14809);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[5]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14810 PROGRAM0.DI_PROC.DI.DI_3.BITS[6].VALUE
    st = getVariable(14810);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[6].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14811 PROGRAM0.DI_PROC.DI.DI_3.BITS[6].RELIABILITY
    st = getVariable(14811);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[6].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14812 PROGRAM0.DI_PROC.DI.DI_3.BITS[6]._INVERSED
    st = getVariable(14812);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[6]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14813 PROGRAM0.DI_PROC.DI.DI_3.BITS[7].VALUE
    st = getVariable(14813);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[7].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14814 PROGRAM0.DI_PROC.DI.DI_3.BITS[7].RELIABILITY
    st = getVariable(14814);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[7].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14815 PROGRAM0.DI_PROC.DI.DI_3.BITS[7]._INVERSED
    st = getVariable(14815);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[7]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14816 PROGRAM0.DI_PROC.DI.DI_3.BITS[8].VALUE
    st = getVariable(14816);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[8].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14817 PROGRAM0.DI_PROC.DI.DI_3.BITS[8].RELIABILITY
    st = getVariable(14817);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[8].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14818 PROGRAM0.DI_PROC.DI.DI_3.BITS[8]._INVERSED
    st = getVariable(14818);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[8]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14819 PROGRAM0.DI_PROC.DI.DI_3.BITS[9].VALUE
    st = getVariable(14819);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[9].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14820 PROGRAM0.DI_PROC.DI.DI_3.BITS[9].RELIABILITY
    st = getVariable(14820);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[9].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14821 PROGRAM0.DI_PROC.DI.DI_3.BITS[9]._INVERSED
    st = getVariable(14821);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[9]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14822 PROGRAM0.DI_PROC.DI.DI_3.BITS[10].VALUE
    st = getVariable(14822);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[10].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14823 PROGRAM0.DI_PROC.DI.DI_3.BITS[10].RELIABILITY
    st = getVariable(14823);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[10].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14824 PROGRAM0.DI_PROC.DI.DI_3.BITS[10]._INVERSED
    st = getVariable(14824);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[10]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14825 PROGRAM0.DI_PROC.DI.DI_3.BITS[11].VALUE
    st = getVariable(14825);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[11].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14826 PROGRAM0.DI_PROC.DI.DI_3.BITS[11].RELIABILITY
    st = getVariable(14826);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[11].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14827 PROGRAM0.DI_PROC.DI.DI_3.BITS[11]._INVERSED
    st = getVariable(14827);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[11]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14828 PROGRAM0.DI_PROC.DI.DI_3.BITS[12].VALUE
    st = getVariable(14828);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[12].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14829 PROGRAM0.DI_PROC.DI.DI_3.BITS[12].RELIABILITY
    st = getVariable(14829);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[12].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14830 PROGRAM0.DI_PROC.DI.DI_3.BITS[12]._INVERSED
    st = getVariable(14830);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[12]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14831 PROGRAM0.DI_PROC.DI.DI_3.BITS[13].VALUE
    st = getVariable(14831);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[13].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14832 PROGRAM0.DI_PROC.DI.DI_3.BITS[13].RELIABILITY
    st = getVariable(14832);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[13].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14833 PROGRAM0.DI_PROC.DI.DI_3.BITS[13]._INVERSED
    st = getVariable(14833);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[13]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14834 PROGRAM0.DI_PROC.DI.DI_3.BITS[14].VALUE
    st = getVariable(14834);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[14].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14835 PROGRAM0.DI_PROC.DI.DI_3.BITS[14].RELIABILITY
    st = getVariable(14835);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[14].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14836 PROGRAM0.DI_PROC.DI.DI_3.BITS[14]._INVERSED
    st = getVariable(14836);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[14]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14837 PROGRAM0.DI_PROC.DI.DI_3.BITS[15].VALUE
    st = getVariable(14837);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[15].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14838 PROGRAM0.DI_PROC.DI.DI_3.BITS[15].RELIABILITY
    st = getVariable(14838);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[15].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14839 PROGRAM0.DI_PROC.DI.DI_3.BITS[15]._INVERSED
    st = getVariable(14839);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BITS[15]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14840 PROGRAM0.DI_PROC.DI.DI_3.BLCONNECT
    st = getVariable(14840);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_3.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_3;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 14841 PROGRAM0.DI_PROC.DI.DI_4.IMIT
    st = getVariable(14841);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 14842 PROGRAM0.DI_PROC.DI.DI_4.VALUE
    st = getVariable(14842);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 14843 PROGRAM0.DI_PROC.DI.DI_4.RELIABILITY
    st = getVariable(14843);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.RELIABILITY", 36);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 14844 PROGRAM0.DI_PROC.DI.DI_4.BITS[0].VALUE
    st = getVariable(14844);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[0].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14845 PROGRAM0.DI_PROC.DI.DI_4.BITS[0].RELIABILITY
    st = getVariable(14845);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[0].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14846 PROGRAM0.DI_PROC.DI.DI_4.BITS[0]._INVERSED
    st = getVariable(14846);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[0]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14847 PROGRAM0.DI_PROC.DI.DI_4.BITS[1].VALUE
    st = getVariable(14847);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[1].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14848 PROGRAM0.DI_PROC.DI.DI_4.BITS[1].RELIABILITY
    st = getVariable(14848);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[1].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14849 PROGRAM0.DI_PROC.DI.DI_4.BITS[1]._INVERSED
    st = getVariable(14849);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[1]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14850 PROGRAM0.DI_PROC.DI.DI_4.BITS[2].VALUE
    st = getVariable(14850);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[2].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14851 PROGRAM0.DI_PROC.DI.DI_4.BITS[2].RELIABILITY
    st = getVariable(14851);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[2].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14852 PROGRAM0.DI_PROC.DI.DI_4.BITS[2]._INVERSED
    st = getVariable(14852);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[2]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14853 PROGRAM0.DI_PROC.DI.DI_4.BITS[3].VALUE
    st = getVariable(14853);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[3].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14854 PROGRAM0.DI_PROC.DI.DI_4.BITS[3].RELIABILITY
    st = getVariable(14854);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[3].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14855 PROGRAM0.DI_PROC.DI.DI_4.BITS[3]._INVERSED
    st = getVariable(14855);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[3]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14856 PROGRAM0.DI_PROC.DI.DI_4.BITS[4].VALUE
    st = getVariable(14856);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[4].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14857 PROGRAM0.DI_PROC.DI.DI_4.BITS[4].RELIABILITY
    st = getVariable(14857);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[4].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14858 PROGRAM0.DI_PROC.DI.DI_4.BITS[4]._INVERSED
    st = getVariable(14858);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[4]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14859 PROGRAM0.DI_PROC.DI.DI_4.BITS[5].VALUE
    st = getVariable(14859);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[5].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14860 PROGRAM0.DI_PROC.DI.DI_4.BITS[5].RELIABILITY
    st = getVariable(14860);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[5].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14861 PROGRAM0.DI_PROC.DI.DI_4.BITS[5]._INVERSED
    st = getVariable(14861);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[5]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14862 PROGRAM0.DI_PROC.DI.DI_4.BITS[6].VALUE
    st = getVariable(14862);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[6].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14863 PROGRAM0.DI_PROC.DI.DI_4.BITS[6].RELIABILITY
    st = getVariable(14863);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[6].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14864 PROGRAM0.DI_PROC.DI.DI_4.BITS[6]._INVERSED
    st = getVariable(14864);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[6]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14865 PROGRAM0.DI_PROC.DI.DI_4.BITS[7].VALUE
    st = getVariable(14865);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[7].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14866 PROGRAM0.DI_PROC.DI.DI_4.BITS[7].RELIABILITY
    st = getVariable(14866);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[7].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14867 PROGRAM0.DI_PROC.DI.DI_4.BITS[7]._INVERSED
    st = getVariable(14867);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[7]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14868 PROGRAM0.DI_PROC.DI.DI_4.BITS[8].VALUE
    st = getVariable(14868);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[8].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14869 PROGRAM0.DI_PROC.DI.DI_4.BITS[8].RELIABILITY
    st = getVariable(14869);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[8].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14870 PROGRAM0.DI_PROC.DI.DI_4.BITS[8]._INVERSED
    st = getVariable(14870);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[8]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14871 PROGRAM0.DI_PROC.DI.DI_4.BITS[9].VALUE
    st = getVariable(14871);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[9].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14872 PROGRAM0.DI_PROC.DI.DI_4.BITS[9].RELIABILITY
    st = getVariable(14872);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[9].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14873 PROGRAM0.DI_PROC.DI.DI_4.BITS[9]._INVERSED
    st = getVariable(14873);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[9]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14874 PROGRAM0.DI_PROC.DI.DI_4.BITS[10].VALUE
    st = getVariable(14874);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[10].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14875 PROGRAM0.DI_PROC.DI.DI_4.BITS[10].RELIABILITY
    st = getVariable(14875);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[10].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14876 PROGRAM0.DI_PROC.DI.DI_4.BITS[10]._INVERSED
    st = getVariable(14876);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[10]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14877 PROGRAM0.DI_PROC.DI.DI_4.BITS[11].VALUE
    st = getVariable(14877);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[11].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14878 PROGRAM0.DI_PROC.DI.DI_4.BITS[11].RELIABILITY
    st = getVariable(14878);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[11].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14879 PROGRAM0.DI_PROC.DI.DI_4.BITS[11]._INVERSED
    st = getVariable(14879);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[11]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14880 PROGRAM0.DI_PROC.DI.DI_4.BITS[12].VALUE
    st = getVariable(14880);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[12].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14881 PROGRAM0.DI_PROC.DI.DI_4.BITS[12].RELIABILITY
    st = getVariable(14881);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[12].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14882 PROGRAM0.DI_PROC.DI.DI_4.BITS[12]._INVERSED
    st = getVariable(14882);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[12]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14883 PROGRAM0.DI_PROC.DI.DI_4.BITS[13].VALUE
    st = getVariable(14883);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[13].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14884 PROGRAM0.DI_PROC.DI.DI_4.BITS[13].RELIABILITY
    st = getVariable(14884);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[13].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14885 PROGRAM0.DI_PROC.DI.DI_4.BITS[13]._INVERSED
    st = getVariable(14885);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[13]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14886 PROGRAM0.DI_PROC.DI.DI_4.BITS[14].VALUE
    st = getVariable(14886);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[14].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14887 PROGRAM0.DI_PROC.DI.DI_4.BITS[14].RELIABILITY
    st = getVariable(14887);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[14].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14888 PROGRAM0.DI_PROC.DI.DI_4.BITS[14]._INVERSED
    st = getVariable(14888);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[14]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14889 PROGRAM0.DI_PROC.DI.DI_4.BITS[15].VALUE
    st = getVariable(14889);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[15].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14890 PROGRAM0.DI_PROC.DI.DI_4.BITS[15].RELIABILITY
    st = getVariable(14890);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[15].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14891 PROGRAM0.DI_PROC.DI.DI_4.BITS[15]._INVERSED
    st = getVariable(14891);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BITS[15]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14892 PROGRAM0.DI_PROC.DI.DI_4.BLCONNECT
    st = getVariable(14892);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_4.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_4;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 14893 PROGRAM0.DI_PROC.DI.DI_5.IMIT
    st = getVariable(14893);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 14894 PROGRAM0.DI_PROC.DI.DI_5.VALUE
    st = getVariable(14894);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 14895 PROGRAM0.DI_PROC.DI.DI_5.RELIABILITY
    st = getVariable(14895);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.RELIABILITY", 36);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 14896 PROGRAM0.DI_PROC.DI.DI_5.BITS[0].VALUE
    st = getVariable(14896);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[0].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14897 PROGRAM0.DI_PROC.DI.DI_5.BITS[0].RELIABILITY
    st = getVariable(14897);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[0].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14898 PROGRAM0.DI_PROC.DI.DI_5.BITS[0]._INVERSED
    st = getVariable(14898);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[0]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14899 PROGRAM0.DI_PROC.DI.DI_5.BITS[1].VALUE
    st = getVariable(14899);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[1].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14900 PROGRAM0.DI_PROC.DI.DI_5.BITS[1].RELIABILITY
    st = getVariable(14900);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[1].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14901 PROGRAM0.DI_PROC.DI.DI_5.BITS[1]._INVERSED
    st = getVariable(14901);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[1]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14902 PROGRAM0.DI_PROC.DI.DI_5.BITS[2].VALUE
    st = getVariable(14902);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[2].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14903 PROGRAM0.DI_PROC.DI.DI_5.BITS[2].RELIABILITY
    st = getVariable(14903);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[2].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14904 PROGRAM0.DI_PROC.DI.DI_5.BITS[2]._INVERSED
    st = getVariable(14904);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[2]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14905 PROGRAM0.DI_PROC.DI.DI_5.BITS[3].VALUE
    st = getVariable(14905);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[3].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14906 PROGRAM0.DI_PROC.DI.DI_5.BITS[3].RELIABILITY
    st = getVariable(14906);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[3].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14907 PROGRAM0.DI_PROC.DI.DI_5.BITS[3]._INVERSED
    st = getVariable(14907);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[3]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14908 PROGRAM0.DI_PROC.DI.DI_5.BITS[4].VALUE
    st = getVariable(14908);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[4].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14909 PROGRAM0.DI_PROC.DI.DI_5.BITS[4].RELIABILITY
    st = getVariable(14909);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[4].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14910 PROGRAM0.DI_PROC.DI.DI_5.BITS[4]._INVERSED
    st = getVariable(14910);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[4]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14911 PROGRAM0.DI_PROC.DI.DI_5.BITS[5].VALUE
    st = getVariable(14911);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[5].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14912 PROGRAM0.DI_PROC.DI.DI_5.BITS[5].RELIABILITY
    st = getVariable(14912);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[5].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14913 PROGRAM0.DI_PROC.DI.DI_5.BITS[5]._INVERSED
    st = getVariable(14913);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[5]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14914 PROGRAM0.DI_PROC.DI.DI_5.BITS[6].VALUE
    st = getVariable(14914);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[6].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14915 PROGRAM0.DI_PROC.DI.DI_5.BITS[6].RELIABILITY
    st = getVariable(14915);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[6].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14916 PROGRAM0.DI_PROC.DI.DI_5.BITS[6]._INVERSED
    st = getVariable(14916);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[6]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14917 PROGRAM0.DI_PROC.DI.DI_5.BITS[7].VALUE
    st = getVariable(14917);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[7].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14918 PROGRAM0.DI_PROC.DI.DI_5.BITS[7].RELIABILITY
    st = getVariable(14918);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[7].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14919 PROGRAM0.DI_PROC.DI.DI_5.BITS[7]._INVERSED
    st = getVariable(14919);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[7]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14920 PROGRAM0.DI_PROC.DI.DI_5.BITS[8].VALUE
    st = getVariable(14920);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[8].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14921 PROGRAM0.DI_PROC.DI.DI_5.BITS[8].RELIABILITY
    st = getVariable(14921);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[8].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14922 PROGRAM0.DI_PROC.DI.DI_5.BITS[8]._INVERSED
    st = getVariable(14922);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[8]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14923 PROGRAM0.DI_PROC.DI.DI_5.BITS[9].VALUE
    st = getVariable(14923);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[9].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14924 PROGRAM0.DI_PROC.DI.DI_5.BITS[9].RELIABILITY
    st = getVariable(14924);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[9].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14925 PROGRAM0.DI_PROC.DI.DI_5.BITS[9]._INVERSED
    st = getVariable(14925);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[9]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14926 PROGRAM0.DI_PROC.DI.DI_5.BITS[10].VALUE
    st = getVariable(14926);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[10].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14927 PROGRAM0.DI_PROC.DI.DI_5.BITS[10].RELIABILITY
    st = getVariable(14927);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[10].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14928 PROGRAM0.DI_PROC.DI.DI_5.BITS[10]._INVERSED
    st = getVariable(14928);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[10]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14929 PROGRAM0.DI_PROC.DI.DI_5.BITS[11].VALUE
    st = getVariable(14929);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[11].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14930 PROGRAM0.DI_PROC.DI.DI_5.BITS[11].RELIABILITY
    st = getVariable(14930);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[11].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14931 PROGRAM0.DI_PROC.DI.DI_5.BITS[11]._INVERSED
    st = getVariable(14931);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[11]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14932 PROGRAM0.DI_PROC.DI.DI_5.BITS[12].VALUE
    st = getVariable(14932);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[12].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14933 PROGRAM0.DI_PROC.DI.DI_5.BITS[12].RELIABILITY
    st = getVariable(14933);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[12].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14934 PROGRAM0.DI_PROC.DI.DI_5.BITS[12]._INVERSED
    st = getVariable(14934);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[12]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14935 PROGRAM0.DI_PROC.DI.DI_5.BITS[13].VALUE
    st = getVariable(14935);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[13].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14936 PROGRAM0.DI_PROC.DI.DI_5.BITS[13].RELIABILITY
    st = getVariable(14936);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[13].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14937 PROGRAM0.DI_PROC.DI.DI_5.BITS[13]._INVERSED
    st = getVariable(14937);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[13]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14938 PROGRAM0.DI_PROC.DI.DI_5.BITS[14].VALUE
    st = getVariable(14938);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[14].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14939 PROGRAM0.DI_PROC.DI.DI_5.BITS[14].RELIABILITY
    st = getVariable(14939);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[14].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14940 PROGRAM0.DI_PROC.DI.DI_5.BITS[14]._INVERSED
    st = getVariable(14940);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[14]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14941 PROGRAM0.DI_PROC.DI.DI_5.BITS[15].VALUE
    st = getVariable(14941);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[15].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14942 PROGRAM0.DI_PROC.DI.DI_5.BITS[15].RELIABILITY
    st = getVariable(14942);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[15].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14943 PROGRAM0.DI_PROC.DI.DI_5.BITS[15]._INVERSED
    st = getVariable(14943);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BITS[15]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14944 PROGRAM0.DI_PROC.DI.DI_5.BLCONNECT
    st = getVariable(14944);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_5.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_5;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 14945 PROGRAM0.DI_PROC.DI.DI_6.IMIT
    st = getVariable(14945);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 14946 PROGRAM0.DI_PROC.DI.DI_6.VALUE
    st = getVariable(14946);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 14947 PROGRAM0.DI_PROC.DI.DI_6.RELIABILITY
    st = getVariable(14947);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.RELIABILITY", 36);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 14948 PROGRAM0.DI_PROC.DI.DI_6.BITS[0].VALUE
    st = getVariable(14948);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[0].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14949 PROGRAM0.DI_PROC.DI.DI_6.BITS[0].RELIABILITY
    st = getVariable(14949);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[0].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14950 PROGRAM0.DI_PROC.DI.DI_6.BITS[0]._INVERSED
    st = getVariable(14950);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[0]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14951 PROGRAM0.DI_PROC.DI.DI_6.BITS[1].VALUE
    st = getVariable(14951);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[1].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14952 PROGRAM0.DI_PROC.DI.DI_6.BITS[1].RELIABILITY
    st = getVariable(14952);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[1].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14953 PROGRAM0.DI_PROC.DI.DI_6.BITS[1]._INVERSED
    st = getVariable(14953);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[1]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14954 PROGRAM0.DI_PROC.DI.DI_6.BITS[2].VALUE
    st = getVariable(14954);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[2].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14955 PROGRAM0.DI_PROC.DI.DI_6.BITS[2].RELIABILITY
    st = getVariable(14955);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[2].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14956 PROGRAM0.DI_PROC.DI.DI_6.BITS[2]._INVERSED
    st = getVariable(14956);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[2]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14957 PROGRAM0.DI_PROC.DI.DI_6.BITS[3].VALUE
    st = getVariable(14957);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[3].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14958 PROGRAM0.DI_PROC.DI.DI_6.BITS[3].RELIABILITY
    st = getVariable(14958);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[3].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14959 PROGRAM0.DI_PROC.DI.DI_6.BITS[3]._INVERSED
    st = getVariable(14959);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[3]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14960 PROGRAM0.DI_PROC.DI.DI_6.BITS[4].VALUE
    st = getVariable(14960);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[4].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14961 PROGRAM0.DI_PROC.DI.DI_6.BITS[4].RELIABILITY
    st = getVariable(14961);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[4].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14962 PROGRAM0.DI_PROC.DI.DI_6.BITS[4]._INVERSED
    st = getVariable(14962);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[4]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14963 PROGRAM0.DI_PROC.DI.DI_6.BITS[5].VALUE
    st = getVariable(14963);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[5].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14964 PROGRAM0.DI_PROC.DI.DI_6.BITS[5].RELIABILITY
    st = getVariable(14964);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[5].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14965 PROGRAM0.DI_PROC.DI.DI_6.BITS[5]._INVERSED
    st = getVariable(14965);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[5]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14966 PROGRAM0.DI_PROC.DI.DI_6.BITS[6].VALUE
    st = getVariable(14966);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[6].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14967 PROGRAM0.DI_PROC.DI.DI_6.BITS[6].RELIABILITY
    st = getVariable(14967);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[6].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14968 PROGRAM0.DI_PROC.DI.DI_6.BITS[6]._INVERSED
    st = getVariable(14968);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[6]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14969 PROGRAM0.DI_PROC.DI.DI_6.BITS[7].VALUE
    st = getVariable(14969);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[7].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14970 PROGRAM0.DI_PROC.DI.DI_6.BITS[7].RELIABILITY
    st = getVariable(14970);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[7].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14971 PROGRAM0.DI_PROC.DI.DI_6.BITS[7]._INVERSED
    st = getVariable(14971);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[7]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14972 PROGRAM0.DI_PROC.DI.DI_6.BITS[8].VALUE
    st = getVariable(14972);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[8].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14973 PROGRAM0.DI_PROC.DI.DI_6.BITS[8].RELIABILITY
    st = getVariable(14973);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[8].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14974 PROGRAM0.DI_PROC.DI.DI_6.BITS[8]._INVERSED
    st = getVariable(14974);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[8]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14975 PROGRAM0.DI_PROC.DI.DI_6.BITS[9].VALUE
    st = getVariable(14975);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[9].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14976 PROGRAM0.DI_PROC.DI.DI_6.BITS[9].RELIABILITY
    st = getVariable(14976);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[9].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14977 PROGRAM0.DI_PROC.DI.DI_6.BITS[9]._INVERSED
    st = getVariable(14977);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[9]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14978 PROGRAM0.DI_PROC.DI.DI_6.BITS[10].VALUE
    st = getVariable(14978);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[10].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14979 PROGRAM0.DI_PROC.DI.DI_6.BITS[10].RELIABILITY
    st = getVariable(14979);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[10].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14980 PROGRAM0.DI_PROC.DI.DI_6.BITS[10]._INVERSED
    st = getVariable(14980);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[10]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14981 PROGRAM0.DI_PROC.DI.DI_6.BITS[11].VALUE
    st = getVariable(14981);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[11].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14982 PROGRAM0.DI_PROC.DI.DI_6.BITS[11].RELIABILITY
    st = getVariable(14982);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[11].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14983 PROGRAM0.DI_PROC.DI.DI_6.BITS[11]._INVERSED
    st = getVariable(14983);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[11]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14984 PROGRAM0.DI_PROC.DI.DI_6.BITS[12].VALUE
    st = getVariable(14984);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[12].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14985 PROGRAM0.DI_PROC.DI.DI_6.BITS[12].RELIABILITY
    st = getVariable(14985);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[12].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14986 PROGRAM0.DI_PROC.DI.DI_6.BITS[12]._INVERSED
    st = getVariable(14986);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[12]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14987 PROGRAM0.DI_PROC.DI.DI_6.BITS[13].VALUE
    st = getVariable(14987);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[13].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14988 PROGRAM0.DI_PROC.DI.DI_6.BITS[13].RELIABILITY
    st = getVariable(14988);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[13].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14989 PROGRAM0.DI_PROC.DI.DI_6.BITS[13]._INVERSED
    st = getVariable(14989);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[13]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14990 PROGRAM0.DI_PROC.DI.DI_6.BITS[14].VALUE
    st = getVariable(14990);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[14].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14991 PROGRAM0.DI_PROC.DI.DI_6.BITS[14].RELIABILITY
    st = getVariable(14991);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[14].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14992 PROGRAM0.DI_PROC.DI.DI_6.BITS[14]._INVERSED
    st = getVariable(14992);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[14]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14993 PROGRAM0.DI_PROC.DI.DI_6.BITS[15].VALUE
    st = getVariable(14993);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[15].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 14994 PROGRAM0.DI_PROC.DI.DI_6.BITS[15].RELIABILITY
    st = getVariable(14994);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[15].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 14995 PROGRAM0.DI_PROC.DI.DI_6.BITS[15]._INVERSED
    st = getVariable(14995);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BITS[15]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 14996 PROGRAM0.DI_PROC.DI.DI_6.BLCONNECT
    st = getVariable(14996);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_6.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_6;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 14997 PROGRAM0.DI_PROC.DI.DI_7.IMIT
    st = getVariable(14997);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 14998 PROGRAM0.DI_PROC.DI.DI_7.VALUE
    st = getVariable(14998);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 14999 PROGRAM0.DI_PROC.DI.DI_7.RELIABILITY
    st = getVariable(14999);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.RELIABILITY", 36);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 15000 PROGRAM0.DI_PROC.DI.DI_7.BITS[0].VALUE
    st = getVariable(15000);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[0].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15001 PROGRAM0.DI_PROC.DI.DI_7.BITS[0].RELIABILITY
    st = getVariable(15001);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[0].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15002 PROGRAM0.DI_PROC.DI.DI_7.BITS[0]._INVERSED
    st = getVariable(15002);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[0]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15003 PROGRAM0.DI_PROC.DI.DI_7.BITS[1].VALUE
    st = getVariable(15003);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[1].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15004 PROGRAM0.DI_PROC.DI.DI_7.BITS[1].RELIABILITY
    st = getVariable(15004);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[1].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15005 PROGRAM0.DI_PROC.DI.DI_7.BITS[1]._INVERSED
    st = getVariable(15005);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[1]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15006 PROGRAM0.DI_PROC.DI.DI_7.BITS[2].VALUE
    st = getVariable(15006);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[2].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15007 PROGRAM0.DI_PROC.DI.DI_7.BITS[2].RELIABILITY
    st = getVariable(15007);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[2].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15008 PROGRAM0.DI_PROC.DI.DI_7.BITS[2]._INVERSED
    st = getVariable(15008);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[2]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15009 PROGRAM0.DI_PROC.DI.DI_7.BITS[3].VALUE
    st = getVariable(15009);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[3].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15010 PROGRAM0.DI_PROC.DI.DI_7.BITS[3].RELIABILITY
    st = getVariable(15010);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[3].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15011 PROGRAM0.DI_PROC.DI.DI_7.BITS[3]._INVERSED
    st = getVariable(15011);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[3]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15012 PROGRAM0.DI_PROC.DI.DI_7.BITS[4].VALUE
    st = getVariable(15012);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[4].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15013 PROGRAM0.DI_PROC.DI.DI_7.BITS[4].RELIABILITY
    st = getVariable(15013);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[4].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15014 PROGRAM0.DI_PROC.DI.DI_7.BITS[4]._INVERSED
    st = getVariable(15014);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[4]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15015 PROGRAM0.DI_PROC.DI.DI_7.BITS[5].VALUE
    st = getVariable(15015);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[5].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15016 PROGRAM0.DI_PROC.DI.DI_7.BITS[5].RELIABILITY
    st = getVariable(15016);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[5].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15017 PROGRAM0.DI_PROC.DI.DI_7.BITS[5]._INVERSED
    st = getVariable(15017);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[5]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15018 PROGRAM0.DI_PROC.DI.DI_7.BITS[6].VALUE
    st = getVariable(15018);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[6].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15019 PROGRAM0.DI_PROC.DI.DI_7.BITS[6].RELIABILITY
    st = getVariable(15019);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[6].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15020 PROGRAM0.DI_PROC.DI.DI_7.BITS[6]._INVERSED
    st = getVariable(15020);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[6]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15021 PROGRAM0.DI_PROC.DI.DI_7.BITS[7].VALUE
    st = getVariable(15021);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[7].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15022 PROGRAM0.DI_PROC.DI.DI_7.BITS[7].RELIABILITY
    st = getVariable(15022);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[7].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15023 PROGRAM0.DI_PROC.DI.DI_7.BITS[7]._INVERSED
    st = getVariable(15023);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[7]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15024 PROGRAM0.DI_PROC.DI.DI_7.BITS[8].VALUE
    st = getVariable(15024);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[8].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15025 PROGRAM0.DI_PROC.DI.DI_7.BITS[8].RELIABILITY
    st = getVariable(15025);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[8].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15026 PROGRAM0.DI_PROC.DI.DI_7.BITS[8]._INVERSED
    st = getVariable(15026);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[8]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15027 PROGRAM0.DI_PROC.DI.DI_7.BITS[9].VALUE
    st = getVariable(15027);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[9].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15028 PROGRAM0.DI_PROC.DI.DI_7.BITS[9].RELIABILITY
    st = getVariable(15028);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[9].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15029 PROGRAM0.DI_PROC.DI.DI_7.BITS[9]._INVERSED
    st = getVariable(15029);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[9]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15030 PROGRAM0.DI_PROC.DI.DI_7.BITS[10].VALUE
    st = getVariable(15030);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[10].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15031 PROGRAM0.DI_PROC.DI.DI_7.BITS[10].RELIABILITY
    st = getVariable(15031);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[10].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15032 PROGRAM0.DI_PROC.DI.DI_7.BITS[10]._INVERSED
    st = getVariable(15032);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[10]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15033 PROGRAM0.DI_PROC.DI.DI_7.BITS[11].VALUE
    st = getVariable(15033);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[11].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15034 PROGRAM0.DI_PROC.DI.DI_7.BITS[11].RELIABILITY
    st = getVariable(15034);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[11].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15035 PROGRAM0.DI_PROC.DI.DI_7.BITS[11]._INVERSED
    st = getVariable(15035);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[11]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15036 PROGRAM0.DI_PROC.DI.DI_7.BITS[12].VALUE
    st = getVariable(15036);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[12].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15037 PROGRAM0.DI_PROC.DI.DI_7.BITS[12].RELIABILITY
    st = getVariable(15037);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[12].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15038 PROGRAM0.DI_PROC.DI.DI_7.BITS[12]._INVERSED
    st = getVariable(15038);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[12]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15039 PROGRAM0.DI_PROC.DI.DI_7.BITS[13].VALUE
    st = getVariable(15039);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[13].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15040 PROGRAM0.DI_PROC.DI.DI_7.BITS[13].RELIABILITY
    st = getVariable(15040);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[13].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15041 PROGRAM0.DI_PROC.DI.DI_7.BITS[13]._INVERSED
    st = getVariable(15041);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[13]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15042 PROGRAM0.DI_PROC.DI.DI_7.BITS[14].VALUE
    st = getVariable(15042);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[14].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15043 PROGRAM0.DI_PROC.DI.DI_7.BITS[14].RELIABILITY
    st = getVariable(15043);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[14].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15044 PROGRAM0.DI_PROC.DI.DI_7.BITS[14]._INVERSED
    st = getVariable(15044);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[14]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15045 PROGRAM0.DI_PROC.DI.DI_7.BITS[15].VALUE
    st = getVariable(15045);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[15].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15046 PROGRAM0.DI_PROC.DI.DI_7.BITS[15].RELIABILITY
    st = getVariable(15046);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[15].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15047 PROGRAM0.DI_PROC.DI.DI_7.BITS[15]._INVERSED
    st = getVariable(15047);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BITS[15]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15048 PROGRAM0.DI_PROC.DI.DI_7.BLCONNECT
    st = getVariable(15048);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_7.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_7;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15049 PROGRAM0.DI_PROC.DI.DI_8.IMIT
    st = getVariable(15049);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 15050 PROGRAM0.DI_PROC.DI.DI_8.VALUE
    st = getVariable(15050);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 15051 PROGRAM0.DI_PROC.DI.DI_8.RELIABILITY
    st = getVariable(15051);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.RELIABILITY", 36);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 15052 PROGRAM0.DI_PROC.DI.DI_8.BITS[0].VALUE
    st = getVariable(15052);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[0].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15053 PROGRAM0.DI_PROC.DI.DI_8.BITS[0].RELIABILITY
    st = getVariable(15053);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[0].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15054 PROGRAM0.DI_PROC.DI.DI_8.BITS[0]._INVERSED
    st = getVariable(15054);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[0]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15055 PROGRAM0.DI_PROC.DI.DI_8.BITS[1].VALUE
    st = getVariable(15055);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[1].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15056 PROGRAM0.DI_PROC.DI.DI_8.BITS[1].RELIABILITY
    st = getVariable(15056);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[1].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15057 PROGRAM0.DI_PROC.DI.DI_8.BITS[1]._INVERSED
    st = getVariable(15057);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[1]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15058 PROGRAM0.DI_PROC.DI.DI_8.BITS[2].VALUE
    st = getVariable(15058);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[2].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15059 PROGRAM0.DI_PROC.DI.DI_8.BITS[2].RELIABILITY
    st = getVariable(15059);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[2].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15060 PROGRAM0.DI_PROC.DI.DI_8.BITS[2]._INVERSED
    st = getVariable(15060);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[2]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15061 PROGRAM0.DI_PROC.DI.DI_8.BITS[3].VALUE
    st = getVariable(15061);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[3].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15062 PROGRAM0.DI_PROC.DI.DI_8.BITS[3].RELIABILITY
    st = getVariable(15062);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[3].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15063 PROGRAM0.DI_PROC.DI.DI_8.BITS[3]._INVERSED
    st = getVariable(15063);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[3]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15064 PROGRAM0.DI_PROC.DI.DI_8.BITS[4].VALUE
    st = getVariable(15064);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[4].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15065 PROGRAM0.DI_PROC.DI.DI_8.BITS[4].RELIABILITY
    st = getVariable(15065);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[4].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15066 PROGRAM0.DI_PROC.DI.DI_8.BITS[4]._INVERSED
    st = getVariable(15066);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[4]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15067 PROGRAM0.DI_PROC.DI.DI_8.BITS[5].VALUE
    st = getVariable(15067);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[5].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15068 PROGRAM0.DI_PROC.DI.DI_8.BITS[5].RELIABILITY
    st = getVariable(15068);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[5].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15069 PROGRAM0.DI_PROC.DI.DI_8.BITS[5]._INVERSED
    st = getVariable(15069);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[5]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15070 PROGRAM0.DI_PROC.DI.DI_8.BITS[6].VALUE
    st = getVariable(15070);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[6].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15071 PROGRAM0.DI_PROC.DI.DI_8.BITS[6].RELIABILITY
    st = getVariable(15071);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[6].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15072 PROGRAM0.DI_PROC.DI.DI_8.BITS[6]._INVERSED
    st = getVariable(15072);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[6]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15073 PROGRAM0.DI_PROC.DI.DI_8.BITS[7].VALUE
    st = getVariable(15073);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[7].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15074 PROGRAM0.DI_PROC.DI.DI_8.BITS[7].RELIABILITY
    st = getVariable(15074);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[7].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15075 PROGRAM0.DI_PROC.DI.DI_8.BITS[7]._INVERSED
    st = getVariable(15075);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[7]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15076 PROGRAM0.DI_PROC.DI.DI_8.BITS[8].VALUE
    st = getVariable(15076);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[8].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15077 PROGRAM0.DI_PROC.DI.DI_8.BITS[8].RELIABILITY
    st = getVariable(15077);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[8].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15078 PROGRAM0.DI_PROC.DI.DI_8.BITS[8]._INVERSED
    st = getVariable(15078);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[8]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15079 PROGRAM0.DI_PROC.DI.DI_8.BITS[9].VALUE
    st = getVariable(15079);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[9].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15080 PROGRAM0.DI_PROC.DI.DI_8.BITS[9].RELIABILITY
    st = getVariable(15080);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[9].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15081 PROGRAM0.DI_PROC.DI.DI_8.BITS[9]._INVERSED
    st = getVariable(15081);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[9]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15082 PROGRAM0.DI_PROC.DI.DI_8.BITS[10].VALUE
    st = getVariable(15082);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[10].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15083 PROGRAM0.DI_PROC.DI.DI_8.BITS[10].RELIABILITY
    st = getVariable(15083);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[10].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15084 PROGRAM0.DI_PROC.DI.DI_8.BITS[10]._INVERSED
    st = getVariable(15084);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[10]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15085 PROGRAM0.DI_PROC.DI.DI_8.BITS[11].VALUE
    st = getVariable(15085);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[11].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15086 PROGRAM0.DI_PROC.DI.DI_8.BITS[11].RELIABILITY
    st = getVariable(15086);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[11].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15087 PROGRAM0.DI_PROC.DI.DI_8.BITS[11]._INVERSED
    st = getVariable(15087);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[11]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15088 PROGRAM0.DI_PROC.DI.DI_8.BITS[12].VALUE
    st = getVariable(15088);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[12].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15089 PROGRAM0.DI_PROC.DI.DI_8.BITS[12].RELIABILITY
    st = getVariable(15089);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[12].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15090 PROGRAM0.DI_PROC.DI.DI_8.BITS[12]._INVERSED
    st = getVariable(15090);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[12]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15091 PROGRAM0.DI_PROC.DI.DI_8.BITS[13].VALUE
    st = getVariable(15091);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[13].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15092 PROGRAM0.DI_PROC.DI.DI_8.BITS[13].RELIABILITY
    st = getVariable(15092);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[13].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15093 PROGRAM0.DI_PROC.DI.DI_8.BITS[13]._INVERSED
    st = getVariable(15093);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[13]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15094 PROGRAM0.DI_PROC.DI.DI_8.BITS[14].VALUE
    st = getVariable(15094);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[14].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15095 PROGRAM0.DI_PROC.DI.DI_8.BITS[14].RELIABILITY
    st = getVariable(15095);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[14].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15096 PROGRAM0.DI_PROC.DI.DI_8.BITS[14]._INVERSED
    st = getVariable(15096);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[14]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15097 PROGRAM0.DI_PROC.DI.DI_8.BITS[15].VALUE
    st = getVariable(15097);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[15].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15098 PROGRAM0.DI_PROC.DI.DI_8.BITS[15].RELIABILITY
    st = getVariable(15098);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[15].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15099 PROGRAM0.DI_PROC.DI.DI_8.BITS[15]._INVERSED
    st = getVariable(15099);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BITS[15]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15100 PROGRAM0.DI_PROC.DI.DI_8.BLCONNECT
    st = getVariable(15100);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_8.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_8;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15101 PROGRAM0.DI_PROC.DI.DI_9.IMIT
    st = getVariable(15101);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.IMIT", 29);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 15102 PROGRAM0.DI_PROC.DI.DI_9.VALUE
    st = getVariable(15102);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.VALUE", 30);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 15103 PROGRAM0.DI_PROC.DI.DI_9.RELIABILITY
    st = getVariable(15103);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.RELIABILITY", 36);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 15104 PROGRAM0.DI_PROC.DI.DI_9.BITS[0].VALUE
    st = getVariable(15104);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[0].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15105 PROGRAM0.DI_PROC.DI.DI_9.BITS[0].RELIABILITY
    st = getVariable(15105);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[0].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15106 PROGRAM0.DI_PROC.DI.DI_9.BITS[0]._INVERSED
    st = getVariable(15106);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[0]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15107 PROGRAM0.DI_PROC.DI.DI_9.BITS[1].VALUE
    st = getVariable(15107);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[1].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15108 PROGRAM0.DI_PROC.DI.DI_9.BITS[1].RELIABILITY
    st = getVariable(15108);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[1].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15109 PROGRAM0.DI_PROC.DI.DI_9.BITS[1]._INVERSED
    st = getVariable(15109);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[1]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15110 PROGRAM0.DI_PROC.DI.DI_9.BITS[2].VALUE
    st = getVariable(15110);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[2].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15111 PROGRAM0.DI_PROC.DI.DI_9.BITS[2].RELIABILITY
    st = getVariable(15111);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[2].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15112 PROGRAM0.DI_PROC.DI.DI_9.BITS[2]._INVERSED
    st = getVariable(15112);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[2]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15113 PROGRAM0.DI_PROC.DI.DI_9.BITS[3].VALUE
    st = getVariable(15113);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[3].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15114 PROGRAM0.DI_PROC.DI.DI_9.BITS[3].RELIABILITY
    st = getVariable(15114);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[3].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15115 PROGRAM0.DI_PROC.DI.DI_9.BITS[3]._INVERSED
    st = getVariable(15115);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[3]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15116 PROGRAM0.DI_PROC.DI.DI_9.BITS[4].VALUE
    st = getVariable(15116);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[4].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15117 PROGRAM0.DI_PROC.DI.DI_9.BITS[4].RELIABILITY
    st = getVariable(15117);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[4].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15118 PROGRAM0.DI_PROC.DI.DI_9.BITS[4]._INVERSED
    st = getVariable(15118);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[4]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15119 PROGRAM0.DI_PROC.DI.DI_9.BITS[5].VALUE
    st = getVariable(15119);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[5].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15120 PROGRAM0.DI_PROC.DI.DI_9.BITS[5].RELIABILITY
    st = getVariable(15120);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[5].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15121 PROGRAM0.DI_PROC.DI.DI_9.BITS[5]._INVERSED
    st = getVariable(15121);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[5]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15122 PROGRAM0.DI_PROC.DI.DI_9.BITS[6].VALUE
    st = getVariable(15122);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[6].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15123 PROGRAM0.DI_PROC.DI.DI_9.BITS[6].RELIABILITY
    st = getVariable(15123);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[6].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15124 PROGRAM0.DI_PROC.DI.DI_9.BITS[6]._INVERSED
    st = getVariable(15124);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[6]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15125 PROGRAM0.DI_PROC.DI.DI_9.BITS[7].VALUE
    st = getVariable(15125);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[7].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15126 PROGRAM0.DI_PROC.DI.DI_9.BITS[7].RELIABILITY
    st = getVariable(15126);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[7].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15127 PROGRAM0.DI_PROC.DI.DI_9.BITS[7]._INVERSED
    st = getVariable(15127);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[7]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15128 PROGRAM0.DI_PROC.DI.DI_9.BITS[8].VALUE
    st = getVariable(15128);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[8].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15129 PROGRAM0.DI_PROC.DI.DI_9.BITS[8].RELIABILITY
    st = getVariable(15129);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[8].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15130 PROGRAM0.DI_PROC.DI.DI_9.BITS[8]._INVERSED
    st = getVariable(15130);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[8]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15131 PROGRAM0.DI_PROC.DI.DI_9.BITS[9].VALUE
    st = getVariable(15131);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[9].VALUE", 38);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15132 PROGRAM0.DI_PROC.DI.DI_9.BITS[9].RELIABILITY
    st = getVariable(15132);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[9].RELIABILITY", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15133 PROGRAM0.DI_PROC.DI.DI_9.BITS[9]._INVERSED
    st = getVariable(15133);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[9]._INVERSED", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15134 PROGRAM0.DI_PROC.DI.DI_9.BITS[10].VALUE
    st = getVariable(15134);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[10].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15135 PROGRAM0.DI_PROC.DI.DI_9.BITS[10].RELIABILITY
    st = getVariable(15135);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[10].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15136 PROGRAM0.DI_PROC.DI.DI_9.BITS[10]._INVERSED
    st = getVariable(15136);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[10]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15137 PROGRAM0.DI_PROC.DI.DI_9.BITS[11].VALUE
    st = getVariable(15137);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[11].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15138 PROGRAM0.DI_PROC.DI.DI_9.BITS[11].RELIABILITY
    st = getVariable(15138);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[11].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15139 PROGRAM0.DI_PROC.DI.DI_9.BITS[11]._INVERSED
    st = getVariable(15139);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[11]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15140 PROGRAM0.DI_PROC.DI.DI_9.BITS[12].VALUE
    st = getVariable(15140);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[12].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15141 PROGRAM0.DI_PROC.DI.DI_9.BITS[12].RELIABILITY
    st = getVariable(15141);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[12].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15142 PROGRAM0.DI_PROC.DI.DI_9.BITS[12]._INVERSED
    st = getVariable(15142);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[12]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15143 PROGRAM0.DI_PROC.DI.DI_9.BITS[13].VALUE
    st = getVariable(15143);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[13].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15144 PROGRAM0.DI_PROC.DI.DI_9.BITS[13].RELIABILITY
    st = getVariable(15144);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[13].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15145 PROGRAM0.DI_PROC.DI.DI_9.BITS[13]._INVERSED
    st = getVariable(15145);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[13]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15146 PROGRAM0.DI_PROC.DI.DI_9.BITS[14].VALUE
    st = getVariable(15146);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[14].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15147 PROGRAM0.DI_PROC.DI.DI_9.BITS[14].RELIABILITY
    st = getVariable(15147);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[14].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15148 PROGRAM0.DI_PROC.DI.DI_9.BITS[14]._INVERSED
    st = getVariable(15148);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[14]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15149 PROGRAM0.DI_PROC.DI.DI_9.BITS[15].VALUE
    st = getVariable(15149);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[15].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15150 PROGRAM0.DI_PROC.DI.DI_9.BITS[15].RELIABILITY
    st = getVariable(15150);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[15].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15151 PROGRAM0.DI_PROC.DI.DI_9.BITS[15]._INVERSED
    st = getVariable(15151);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BITS[15]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15152 PROGRAM0.DI_PROC.DI.DI_9.BLCONNECT
    st = getVariable(15152);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_9.BLCONNECT", 34);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_9;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15153 PROGRAM0.DI_PROC.DI.DI_10.IMIT
    st = getVariable(15153);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 15154 PROGRAM0.DI_PROC.DI.DI_10.VALUE
    st = getVariable(15154);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 15155 PROGRAM0.DI_PROC.DI.DI_10.RELIABILITY
    st = getVariable(15155);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 15156 PROGRAM0.DI_PROC.DI.DI_10.BITS[0].VALUE
    st = getVariable(15156);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15157 PROGRAM0.DI_PROC.DI.DI_10.BITS[0].RELIABILITY
    st = getVariable(15157);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15158 PROGRAM0.DI_PROC.DI.DI_10.BITS[0]._INVERSED
    st = getVariable(15158);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15159 PROGRAM0.DI_PROC.DI.DI_10.BITS[1].VALUE
    st = getVariable(15159);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15160 PROGRAM0.DI_PROC.DI.DI_10.BITS[1].RELIABILITY
    st = getVariable(15160);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15161 PROGRAM0.DI_PROC.DI.DI_10.BITS[1]._INVERSED
    st = getVariable(15161);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15162 PROGRAM0.DI_PROC.DI.DI_10.BITS[2].VALUE
    st = getVariable(15162);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15163 PROGRAM0.DI_PROC.DI.DI_10.BITS[2].RELIABILITY
    st = getVariable(15163);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15164 PROGRAM0.DI_PROC.DI.DI_10.BITS[2]._INVERSED
    st = getVariable(15164);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15165 PROGRAM0.DI_PROC.DI.DI_10.BITS[3].VALUE
    st = getVariable(15165);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15166 PROGRAM0.DI_PROC.DI.DI_10.BITS[3].RELIABILITY
    st = getVariable(15166);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15167 PROGRAM0.DI_PROC.DI.DI_10.BITS[3]._INVERSED
    st = getVariable(15167);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15168 PROGRAM0.DI_PROC.DI.DI_10.BITS[4].VALUE
    st = getVariable(15168);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15169 PROGRAM0.DI_PROC.DI.DI_10.BITS[4].RELIABILITY
    st = getVariable(15169);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15170 PROGRAM0.DI_PROC.DI.DI_10.BITS[4]._INVERSED
    st = getVariable(15170);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15171 PROGRAM0.DI_PROC.DI.DI_10.BITS[5].VALUE
    st = getVariable(15171);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15172 PROGRAM0.DI_PROC.DI.DI_10.BITS[5].RELIABILITY
    st = getVariable(15172);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15173 PROGRAM0.DI_PROC.DI.DI_10.BITS[5]._INVERSED
    st = getVariable(15173);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15174 PROGRAM0.DI_PROC.DI.DI_10.BITS[6].VALUE
    st = getVariable(15174);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15175 PROGRAM0.DI_PROC.DI.DI_10.BITS[6].RELIABILITY
    st = getVariable(15175);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15176 PROGRAM0.DI_PROC.DI.DI_10.BITS[6]._INVERSED
    st = getVariable(15176);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15177 PROGRAM0.DI_PROC.DI.DI_10.BITS[7].VALUE
    st = getVariable(15177);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15178 PROGRAM0.DI_PROC.DI.DI_10.BITS[7].RELIABILITY
    st = getVariable(15178);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15179 PROGRAM0.DI_PROC.DI.DI_10.BITS[7]._INVERSED
    st = getVariable(15179);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15180 PROGRAM0.DI_PROC.DI.DI_10.BITS[8].VALUE
    st = getVariable(15180);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15181 PROGRAM0.DI_PROC.DI.DI_10.BITS[8].RELIABILITY
    st = getVariable(15181);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15182 PROGRAM0.DI_PROC.DI.DI_10.BITS[8]._INVERSED
    st = getVariable(15182);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15183 PROGRAM0.DI_PROC.DI.DI_10.BITS[9].VALUE
    st = getVariable(15183);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15184 PROGRAM0.DI_PROC.DI.DI_10.BITS[9].RELIABILITY
    st = getVariable(15184);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15185 PROGRAM0.DI_PROC.DI.DI_10.BITS[9]._INVERSED
    st = getVariable(15185);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15186 PROGRAM0.DI_PROC.DI.DI_10.BITS[10].VALUE
    st = getVariable(15186);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15187 PROGRAM0.DI_PROC.DI.DI_10.BITS[10].RELIABILITY
    st = getVariable(15187);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15188 PROGRAM0.DI_PROC.DI.DI_10.BITS[10]._INVERSED
    st = getVariable(15188);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15189 PROGRAM0.DI_PROC.DI.DI_10.BITS[11].VALUE
    st = getVariable(15189);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15190 PROGRAM0.DI_PROC.DI.DI_10.BITS[11].RELIABILITY
    st = getVariable(15190);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15191 PROGRAM0.DI_PROC.DI.DI_10.BITS[11]._INVERSED
    st = getVariable(15191);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15192 PROGRAM0.DI_PROC.DI.DI_10.BITS[12].VALUE
    st = getVariable(15192);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15193 PROGRAM0.DI_PROC.DI.DI_10.BITS[12].RELIABILITY
    st = getVariable(15193);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15194 PROGRAM0.DI_PROC.DI.DI_10.BITS[12]._INVERSED
    st = getVariable(15194);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15195 PROGRAM0.DI_PROC.DI.DI_10.BITS[13].VALUE
    st = getVariable(15195);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15196 PROGRAM0.DI_PROC.DI.DI_10.BITS[13].RELIABILITY
    st = getVariable(15196);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15197 PROGRAM0.DI_PROC.DI.DI_10.BITS[13]._INVERSED
    st = getVariable(15197);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15198 PROGRAM0.DI_PROC.DI.DI_10.BITS[14].VALUE
    st = getVariable(15198);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15199 PROGRAM0.DI_PROC.DI.DI_10.BITS[14].RELIABILITY
    st = getVariable(15199);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15200 PROGRAM0.DI_PROC.DI.DI_10.BITS[14]._INVERSED
    st = getVariable(15200);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15201 PROGRAM0.DI_PROC.DI.DI_10.BITS[15].VALUE
    st = getVariable(15201);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15202 PROGRAM0.DI_PROC.DI.DI_10.BITS[15].RELIABILITY
    st = getVariable(15202);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15203 PROGRAM0.DI_PROC.DI.DI_10.BITS[15]._INVERSED
    st = getVariable(15203);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15204 PROGRAM0.DI_PROC.DI.DI_10.BLCONNECT
    st = getVariable(15204);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_10.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_10;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15205 PROGRAM0.DI_PROC.DI.DI_11.IMIT
    st = getVariable(15205);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 15206 PROGRAM0.DI_PROC.DI.DI_11.VALUE
    st = getVariable(15206);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 15207 PROGRAM0.DI_PROC.DI.DI_11.RELIABILITY
    st = getVariable(15207);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 15208 PROGRAM0.DI_PROC.DI.DI_11.BITS[0].VALUE
    st = getVariable(15208);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15209 PROGRAM0.DI_PROC.DI.DI_11.BITS[0].RELIABILITY
    st = getVariable(15209);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15210 PROGRAM0.DI_PROC.DI.DI_11.BITS[0]._INVERSED
    st = getVariable(15210);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15211 PROGRAM0.DI_PROC.DI.DI_11.BITS[1].VALUE
    st = getVariable(15211);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15212 PROGRAM0.DI_PROC.DI.DI_11.BITS[1].RELIABILITY
    st = getVariable(15212);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15213 PROGRAM0.DI_PROC.DI.DI_11.BITS[1]._INVERSED
    st = getVariable(15213);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15214 PROGRAM0.DI_PROC.DI.DI_11.BITS[2].VALUE
    st = getVariable(15214);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15215 PROGRAM0.DI_PROC.DI.DI_11.BITS[2].RELIABILITY
    st = getVariable(15215);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15216 PROGRAM0.DI_PROC.DI.DI_11.BITS[2]._INVERSED
    st = getVariable(15216);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15217 PROGRAM0.DI_PROC.DI.DI_11.BITS[3].VALUE
    st = getVariable(15217);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15218 PROGRAM0.DI_PROC.DI.DI_11.BITS[3].RELIABILITY
    st = getVariable(15218);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15219 PROGRAM0.DI_PROC.DI.DI_11.BITS[3]._INVERSED
    st = getVariable(15219);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15220 PROGRAM0.DI_PROC.DI.DI_11.BITS[4].VALUE
    st = getVariable(15220);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15221 PROGRAM0.DI_PROC.DI.DI_11.BITS[4].RELIABILITY
    st = getVariable(15221);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15222 PROGRAM0.DI_PROC.DI.DI_11.BITS[4]._INVERSED
    st = getVariable(15222);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15223 PROGRAM0.DI_PROC.DI.DI_11.BITS[5].VALUE
    st = getVariable(15223);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15224 PROGRAM0.DI_PROC.DI.DI_11.BITS[5].RELIABILITY
    st = getVariable(15224);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15225 PROGRAM0.DI_PROC.DI.DI_11.BITS[5]._INVERSED
    st = getVariable(15225);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15226 PROGRAM0.DI_PROC.DI.DI_11.BITS[6].VALUE
    st = getVariable(15226);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15227 PROGRAM0.DI_PROC.DI.DI_11.BITS[6].RELIABILITY
    st = getVariable(15227);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15228 PROGRAM0.DI_PROC.DI.DI_11.BITS[6]._INVERSED
    st = getVariable(15228);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15229 PROGRAM0.DI_PROC.DI.DI_11.BITS[7].VALUE
    st = getVariable(15229);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15230 PROGRAM0.DI_PROC.DI.DI_11.BITS[7].RELIABILITY
    st = getVariable(15230);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15231 PROGRAM0.DI_PROC.DI.DI_11.BITS[7]._INVERSED
    st = getVariable(15231);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15232 PROGRAM0.DI_PROC.DI.DI_11.BITS[8].VALUE
    st = getVariable(15232);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15233 PROGRAM0.DI_PROC.DI.DI_11.BITS[8].RELIABILITY
    st = getVariable(15233);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15234 PROGRAM0.DI_PROC.DI.DI_11.BITS[8]._INVERSED
    st = getVariable(15234);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15235 PROGRAM0.DI_PROC.DI.DI_11.BITS[9].VALUE
    st = getVariable(15235);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15236 PROGRAM0.DI_PROC.DI.DI_11.BITS[9].RELIABILITY
    st = getVariable(15236);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15237 PROGRAM0.DI_PROC.DI.DI_11.BITS[9]._INVERSED
    st = getVariable(15237);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15238 PROGRAM0.DI_PROC.DI.DI_11.BITS[10].VALUE
    st = getVariable(15238);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15239 PROGRAM0.DI_PROC.DI.DI_11.BITS[10].RELIABILITY
    st = getVariable(15239);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15240 PROGRAM0.DI_PROC.DI.DI_11.BITS[10]._INVERSED
    st = getVariable(15240);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15241 PROGRAM0.DI_PROC.DI.DI_11.BITS[11].VALUE
    st = getVariable(15241);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15242 PROGRAM0.DI_PROC.DI.DI_11.BITS[11].RELIABILITY
    st = getVariable(15242);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15243 PROGRAM0.DI_PROC.DI.DI_11.BITS[11]._INVERSED
    st = getVariable(15243);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15244 PROGRAM0.DI_PROC.DI.DI_11.BITS[12].VALUE
    st = getVariable(15244);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15245 PROGRAM0.DI_PROC.DI.DI_11.BITS[12].RELIABILITY
    st = getVariable(15245);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15246 PROGRAM0.DI_PROC.DI.DI_11.BITS[12]._INVERSED
    st = getVariable(15246);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15247 PROGRAM0.DI_PROC.DI.DI_11.BITS[13].VALUE
    st = getVariable(15247);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15248 PROGRAM0.DI_PROC.DI.DI_11.BITS[13].RELIABILITY
    st = getVariable(15248);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15249 PROGRAM0.DI_PROC.DI.DI_11.BITS[13]._INVERSED
    st = getVariable(15249);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15250 PROGRAM0.DI_PROC.DI.DI_11.BITS[14].VALUE
    st = getVariable(15250);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15251 PROGRAM0.DI_PROC.DI.DI_11.BITS[14].RELIABILITY
    st = getVariable(15251);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15252 PROGRAM0.DI_PROC.DI.DI_11.BITS[14]._INVERSED
    st = getVariable(15252);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15253 PROGRAM0.DI_PROC.DI.DI_11.BITS[15].VALUE
    st = getVariable(15253);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15254 PROGRAM0.DI_PROC.DI.DI_11.BITS[15].RELIABILITY
    st = getVariable(15254);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15255 PROGRAM0.DI_PROC.DI.DI_11.BITS[15]._INVERSED
    st = getVariable(15255);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15256 PROGRAM0.DI_PROC.DI.DI_11.BLCONNECT
    st = getVariable(15256);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_11.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_11;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15257 PROGRAM0.DI_PROC.DI.DI_12.IMIT
    st = getVariable(15257);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 15258 PROGRAM0.DI_PROC.DI.DI_12.VALUE
    st = getVariable(15258);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 15259 PROGRAM0.DI_PROC.DI.DI_12.RELIABILITY
    st = getVariable(15259);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 15260 PROGRAM0.DI_PROC.DI.DI_12.BITS[0].VALUE
    st = getVariable(15260);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15261 PROGRAM0.DI_PROC.DI.DI_12.BITS[0].RELIABILITY
    st = getVariable(15261);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15262 PROGRAM0.DI_PROC.DI.DI_12.BITS[0]._INVERSED
    st = getVariable(15262);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15263 PROGRAM0.DI_PROC.DI.DI_12.BITS[1].VALUE
    st = getVariable(15263);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15264 PROGRAM0.DI_PROC.DI.DI_12.BITS[1].RELIABILITY
    st = getVariable(15264);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15265 PROGRAM0.DI_PROC.DI.DI_12.BITS[1]._INVERSED
    st = getVariable(15265);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15266 PROGRAM0.DI_PROC.DI.DI_12.BITS[2].VALUE
    st = getVariable(15266);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15267 PROGRAM0.DI_PROC.DI.DI_12.BITS[2].RELIABILITY
    st = getVariable(15267);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15268 PROGRAM0.DI_PROC.DI.DI_12.BITS[2]._INVERSED
    st = getVariable(15268);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15269 PROGRAM0.DI_PROC.DI.DI_12.BITS[3].VALUE
    st = getVariable(15269);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15270 PROGRAM0.DI_PROC.DI.DI_12.BITS[3].RELIABILITY
    st = getVariable(15270);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15271 PROGRAM0.DI_PROC.DI.DI_12.BITS[3]._INVERSED
    st = getVariable(15271);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15272 PROGRAM0.DI_PROC.DI.DI_12.BITS[4].VALUE
    st = getVariable(15272);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15273 PROGRAM0.DI_PROC.DI.DI_12.BITS[4].RELIABILITY
    st = getVariable(15273);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15274 PROGRAM0.DI_PROC.DI.DI_12.BITS[4]._INVERSED
    st = getVariable(15274);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15275 PROGRAM0.DI_PROC.DI.DI_12.BITS[5].VALUE
    st = getVariable(15275);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15276 PROGRAM0.DI_PROC.DI.DI_12.BITS[5].RELIABILITY
    st = getVariable(15276);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15277 PROGRAM0.DI_PROC.DI.DI_12.BITS[5]._INVERSED
    st = getVariable(15277);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15278 PROGRAM0.DI_PROC.DI.DI_12.BITS[6].VALUE
    st = getVariable(15278);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15279 PROGRAM0.DI_PROC.DI.DI_12.BITS[6].RELIABILITY
    st = getVariable(15279);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15280 PROGRAM0.DI_PROC.DI.DI_12.BITS[6]._INVERSED
    st = getVariable(15280);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15281 PROGRAM0.DI_PROC.DI.DI_12.BITS[7].VALUE
    st = getVariable(15281);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15282 PROGRAM0.DI_PROC.DI.DI_12.BITS[7].RELIABILITY
    st = getVariable(15282);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15283 PROGRAM0.DI_PROC.DI.DI_12.BITS[7]._INVERSED
    st = getVariable(15283);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15284 PROGRAM0.DI_PROC.DI.DI_12.BITS[8].VALUE
    st = getVariable(15284);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15285 PROGRAM0.DI_PROC.DI.DI_12.BITS[8].RELIABILITY
    st = getVariable(15285);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15286 PROGRAM0.DI_PROC.DI.DI_12.BITS[8]._INVERSED
    st = getVariable(15286);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15287 PROGRAM0.DI_PROC.DI.DI_12.BITS[9].VALUE
    st = getVariable(15287);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15288 PROGRAM0.DI_PROC.DI.DI_12.BITS[9].RELIABILITY
    st = getVariable(15288);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15289 PROGRAM0.DI_PROC.DI.DI_12.BITS[9]._INVERSED
    st = getVariable(15289);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15290 PROGRAM0.DI_PROC.DI.DI_12.BITS[10].VALUE
    st = getVariable(15290);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15291 PROGRAM0.DI_PROC.DI.DI_12.BITS[10].RELIABILITY
    st = getVariable(15291);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15292 PROGRAM0.DI_PROC.DI.DI_12.BITS[10]._INVERSED
    st = getVariable(15292);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15293 PROGRAM0.DI_PROC.DI.DI_12.BITS[11].VALUE
    st = getVariable(15293);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15294 PROGRAM0.DI_PROC.DI.DI_12.BITS[11].RELIABILITY
    st = getVariable(15294);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15295 PROGRAM0.DI_PROC.DI.DI_12.BITS[11]._INVERSED
    st = getVariable(15295);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15296 PROGRAM0.DI_PROC.DI.DI_12.BITS[12].VALUE
    st = getVariable(15296);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15297 PROGRAM0.DI_PROC.DI.DI_12.BITS[12].RELIABILITY
    st = getVariable(15297);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15298 PROGRAM0.DI_PROC.DI.DI_12.BITS[12]._INVERSED
    st = getVariable(15298);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15299 PROGRAM0.DI_PROC.DI.DI_12.BITS[13].VALUE
    st = getVariable(15299);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15300 PROGRAM0.DI_PROC.DI.DI_12.BITS[13].RELIABILITY
    st = getVariable(15300);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15301 PROGRAM0.DI_PROC.DI.DI_12.BITS[13]._INVERSED
    st = getVariable(15301);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15302 PROGRAM0.DI_PROC.DI.DI_12.BITS[14].VALUE
    st = getVariable(15302);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15303 PROGRAM0.DI_PROC.DI.DI_12.BITS[14].RELIABILITY
    st = getVariable(15303);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15304 PROGRAM0.DI_PROC.DI.DI_12.BITS[14]._INVERSED
    st = getVariable(15304);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15305 PROGRAM0.DI_PROC.DI.DI_12.BITS[15].VALUE
    st = getVariable(15305);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15306 PROGRAM0.DI_PROC.DI.DI_12.BITS[15].RELIABILITY
    st = getVariable(15306);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15307 PROGRAM0.DI_PROC.DI.DI_12.BITS[15]._INVERSED
    st = getVariable(15307);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15308 PROGRAM0.DI_PROC.DI.DI_12.BLCONNECT
    st = getVariable(15308);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_12.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_12;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15309 PROGRAM0.DI_PROC.DI.DI_13.IMIT
    st = getVariable(15309);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 15310 PROGRAM0.DI_PROC.DI.DI_13.VALUE
    st = getVariable(15310);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 15311 PROGRAM0.DI_PROC.DI.DI_13.RELIABILITY
    st = getVariable(15311);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 15312 PROGRAM0.DI_PROC.DI.DI_13.BITS[0].VALUE
    st = getVariable(15312);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15313 PROGRAM0.DI_PROC.DI.DI_13.BITS[0].RELIABILITY
    st = getVariable(15313);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15314 PROGRAM0.DI_PROC.DI.DI_13.BITS[0]._INVERSED
    st = getVariable(15314);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15315 PROGRAM0.DI_PROC.DI.DI_13.BITS[1].VALUE
    st = getVariable(15315);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15316 PROGRAM0.DI_PROC.DI.DI_13.BITS[1].RELIABILITY
    st = getVariable(15316);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15317 PROGRAM0.DI_PROC.DI.DI_13.BITS[1]._INVERSED
    st = getVariable(15317);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15318 PROGRAM0.DI_PROC.DI.DI_13.BITS[2].VALUE
    st = getVariable(15318);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15319 PROGRAM0.DI_PROC.DI.DI_13.BITS[2].RELIABILITY
    st = getVariable(15319);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15320 PROGRAM0.DI_PROC.DI.DI_13.BITS[2]._INVERSED
    st = getVariable(15320);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15321 PROGRAM0.DI_PROC.DI.DI_13.BITS[3].VALUE
    st = getVariable(15321);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15322 PROGRAM0.DI_PROC.DI.DI_13.BITS[3].RELIABILITY
    st = getVariable(15322);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15323 PROGRAM0.DI_PROC.DI.DI_13.BITS[3]._INVERSED
    st = getVariable(15323);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15324 PROGRAM0.DI_PROC.DI.DI_13.BITS[4].VALUE
    st = getVariable(15324);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15325 PROGRAM0.DI_PROC.DI.DI_13.BITS[4].RELIABILITY
    st = getVariable(15325);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15326 PROGRAM0.DI_PROC.DI.DI_13.BITS[4]._INVERSED
    st = getVariable(15326);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15327 PROGRAM0.DI_PROC.DI.DI_13.BITS[5].VALUE
    st = getVariable(15327);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15328 PROGRAM0.DI_PROC.DI.DI_13.BITS[5].RELIABILITY
    st = getVariable(15328);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15329 PROGRAM0.DI_PROC.DI.DI_13.BITS[5]._INVERSED
    st = getVariable(15329);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15330 PROGRAM0.DI_PROC.DI.DI_13.BITS[6].VALUE
    st = getVariable(15330);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15331 PROGRAM0.DI_PROC.DI.DI_13.BITS[6].RELIABILITY
    st = getVariable(15331);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15332 PROGRAM0.DI_PROC.DI.DI_13.BITS[6]._INVERSED
    st = getVariable(15332);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15333 PROGRAM0.DI_PROC.DI.DI_13.BITS[7].VALUE
    st = getVariable(15333);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15334 PROGRAM0.DI_PROC.DI.DI_13.BITS[7].RELIABILITY
    st = getVariable(15334);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15335 PROGRAM0.DI_PROC.DI.DI_13.BITS[7]._INVERSED
    st = getVariable(15335);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15336 PROGRAM0.DI_PROC.DI.DI_13.BITS[8].VALUE
    st = getVariable(15336);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15337 PROGRAM0.DI_PROC.DI.DI_13.BITS[8].RELIABILITY
    st = getVariable(15337);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15338 PROGRAM0.DI_PROC.DI.DI_13.BITS[8]._INVERSED
    st = getVariable(15338);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15339 PROGRAM0.DI_PROC.DI.DI_13.BITS[9].VALUE
    st = getVariable(15339);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15340 PROGRAM0.DI_PROC.DI.DI_13.BITS[9].RELIABILITY
    st = getVariable(15340);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15341 PROGRAM0.DI_PROC.DI.DI_13.BITS[9]._INVERSED
    st = getVariable(15341);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15342 PROGRAM0.DI_PROC.DI.DI_13.BITS[10].VALUE
    st = getVariable(15342);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15343 PROGRAM0.DI_PROC.DI.DI_13.BITS[10].RELIABILITY
    st = getVariable(15343);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15344 PROGRAM0.DI_PROC.DI.DI_13.BITS[10]._INVERSED
    st = getVariable(15344);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15345 PROGRAM0.DI_PROC.DI.DI_13.BITS[11].VALUE
    st = getVariable(15345);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15346 PROGRAM0.DI_PROC.DI.DI_13.BITS[11].RELIABILITY
    st = getVariable(15346);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15347 PROGRAM0.DI_PROC.DI.DI_13.BITS[11]._INVERSED
    st = getVariable(15347);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15348 PROGRAM0.DI_PROC.DI.DI_13.BITS[12].VALUE
    st = getVariable(15348);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15349 PROGRAM0.DI_PROC.DI.DI_13.BITS[12].RELIABILITY
    st = getVariable(15349);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15350 PROGRAM0.DI_PROC.DI.DI_13.BITS[12]._INVERSED
    st = getVariable(15350);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15351 PROGRAM0.DI_PROC.DI.DI_13.BITS[13].VALUE
    st = getVariable(15351);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15352 PROGRAM0.DI_PROC.DI.DI_13.BITS[13].RELIABILITY
    st = getVariable(15352);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15353 PROGRAM0.DI_PROC.DI.DI_13.BITS[13]._INVERSED
    st = getVariable(15353);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15354 PROGRAM0.DI_PROC.DI.DI_13.BITS[14].VALUE
    st = getVariable(15354);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15355 PROGRAM0.DI_PROC.DI.DI_13.BITS[14].RELIABILITY
    st = getVariable(15355);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15356 PROGRAM0.DI_PROC.DI.DI_13.BITS[14]._INVERSED
    st = getVariable(15356);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15357 PROGRAM0.DI_PROC.DI.DI_13.BITS[15].VALUE
    st = getVariable(15357);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15358 PROGRAM0.DI_PROC.DI.DI_13.BITS[15].RELIABILITY
    st = getVariable(15358);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15359 PROGRAM0.DI_PROC.DI.DI_13.BITS[15]._INVERSED
    st = getVariable(15359);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15360 PROGRAM0.DI_PROC.DI.DI_13.BLCONNECT
    st = getVariable(15360);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_13.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_13;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15361 PROGRAM0.DI_PROC.DI.DI_14.IMIT
    st = getVariable(15361);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 15362 PROGRAM0.DI_PROC.DI.DI_14.VALUE
    st = getVariable(15362);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 15363 PROGRAM0.DI_PROC.DI.DI_14.RELIABILITY
    st = getVariable(15363);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 15364 PROGRAM0.DI_PROC.DI.DI_14.BITS[0].VALUE
    st = getVariable(15364);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15365 PROGRAM0.DI_PROC.DI.DI_14.BITS[0].RELIABILITY
    st = getVariable(15365);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15366 PROGRAM0.DI_PROC.DI.DI_14.BITS[0]._INVERSED
    st = getVariable(15366);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15367 PROGRAM0.DI_PROC.DI.DI_14.BITS[1].VALUE
    st = getVariable(15367);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15368 PROGRAM0.DI_PROC.DI.DI_14.BITS[1].RELIABILITY
    st = getVariable(15368);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15369 PROGRAM0.DI_PROC.DI.DI_14.BITS[1]._INVERSED
    st = getVariable(15369);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15370 PROGRAM0.DI_PROC.DI.DI_14.BITS[2].VALUE
    st = getVariable(15370);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15371 PROGRAM0.DI_PROC.DI.DI_14.BITS[2].RELIABILITY
    st = getVariable(15371);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15372 PROGRAM0.DI_PROC.DI.DI_14.BITS[2]._INVERSED
    st = getVariable(15372);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15373 PROGRAM0.DI_PROC.DI.DI_14.BITS[3].VALUE
    st = getVariable(15373);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15374 PROGRAM0.DI_PROC.DI.DI_14.BITS[3].RELIABILITY
    st = getVariable(15374);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15375 PROGRAM0.DI_PROC.DI.DI_14.BITS[3]._INVERSED
    st = getVariable(15375);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15376 PROGRAM0.DI_PROC.DI.DI_14.BITS[4].VALUE
    st = getVariable(15376);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15377 PROGRAM0.DI_PROC.DI.DI_14.BITS[4].RELIABILITY
    st = getVariable(15377);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15378 PROGRAM0.DI_PROC.DI.DI_14.BITS[4]._INVERSED
    st = getVariable(15378);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15379 PROGRAM0.DI_PROC.DI.DI_14.BITS[5].VALUE
    st = getVariable(15379);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15380 PROGRAM0.DI_PROC.DI.DI_14.BITS[5].RELIABILITY
    st = getVariable(15380);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15381 PROGRAM0.DI_PROC.DI.DI_14.BITS[5]._INVERSED
    st = getVariable(15381);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15382 PROGRAM0.DI_PROC.DI.DI_14.BITS[6].VALUE
    st = getVariable(15382);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15383 PROGRAM0.DI_PROC.DI.DI_14.BITS[6].RELIABILITY
    st = getVariable(15383);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15384 PROGRAM0.DI_PROC.DI.DI_14.BITS[6]._INVERSED
    st = getVariable(15384);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15385 PROGRAM0.DI_PROC.DI.DI_14.BITS[7].VALUE
    st = getVariable(15385);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15386 PROGRAM0.DI_PROC.DI.DI_14.BITS[7].RELIABILITY
    st = getVariable(15386);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15387 PROGRAM0.DI_PROC.DI.DI_14.BITS[7]._INVERSED
    st = getVariable(15387);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15388 PROGRAM0.DI_PROC.DI.DI_14.BITS[8].VALUE
    st = getVariable(15388);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15389 PROGRAM0.DI_PROC.DI.DI_14.BITS[8].RELIABILITY
    st = getVariable(15389);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15390 PROGRAM0.DI_PROC.DI.DI_14.BITS[8]._INVERSED
    st = getVariable(15390);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15391 PROGRAM0.DI_PROC.DI.DI_14.BITS[9].VALUE
    st = getVariable(15391);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15392 PROGRAM0.DI_PROC.DI.DI_14.BITS[9].RELIABILITY
    st = getVariable(15392);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15393 PROGRAM0.DI_PROC.DI.DI_14.BITS[9]._INVERSED
    st = getVariable(15393);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15394 PROGRAM0.DI_PROC.DI.DI_14.BITS[10].VALUE
    st = getVariable(15394);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15395 PROGRAM0.DI_PROC.DI.DI_14.BITS[10].RELIABILITY
    st = getVariable(15395);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15396 PROGRAM0.DI_PROC.DI.DI_14.BITS[10]._INVERSED
    st = getVariable(15396);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15397 PROGRAM0.DI_PROC.DI.DI_14.BITS[11].VALUE
    st = getVariable(15397);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15398 PROGRAM0.DI_PROC.DI.DI_14.BITS[11].RELIABILITY
    st = getVariable(15398);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15399 PROGRAM0.DI_PROC.DI.DI_14.BITS[11]._INVERSED
    st = getVariable(15399);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15400 PROGRAM0.DI_PROC.DI.DI_14.BITS[12].VALUE
    st = getVariable(15400);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15401 PROGRAM0.DI_PROC.DI.DI_14.BITS[12].RELIABILITY
    st = getVariable(15401);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15402 PROGRAM0.DI_PROC.DI.DI_14.BITS[12]._INVERSED
    st = getVariable(15402);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15403 PROGRAM0.DI_PROC.DI.DI_14.BITS[13].VALUE
    st = getVariable(15403);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15404 PROGRAM0.DI_PROC.DI.DI_14.BITS[13].RELIABILITY
    st = getVariable(15404);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15405 PROGRAM0.DI_PROC.DI.DI_14.BITS[13]._INVERSED
    st = getVariable(15405);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15406 PROGRAM0.DI_PROC.DI.DI_14.BITS[14].VALUE
    st = getVariable(15406);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15407 PROGRAM0.DI_PROC.DI.DI_14.BITS[14].RELIABILITY
    st = getVariable(15407);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15408 PROGRAM0.DI_PROC.DI.DI_14.BITS[14]._INVERSED
    st = getVariable(15408);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15409 PROGRAM0.DI_PROC.DI.DI_14.BITS[15].VALUE
    st = getVariable(15409);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15410 PROGRAM0.DI_PROC.DI.DI_14.BITS[15].RELIABILITY
    st = getVariable(15410);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15411 PROGRAM0.DI_PROC.DI.DI_14.BITS[15]._INVERSED
    st = getVariable(15411);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15412 PROGRAM0.DI_PROC.DI.DI_14.BLCONNECT
    st = getVariable(15412);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_14.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_14;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15413 PROGRAM0.DI_PROC.DI.DI_15.IMIT
    st = getVariable(15413);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 15414 PROGRAM0.DI_PROC.DI.DI_15.VALUE
    st = getVariable(15414);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 15415 PROGRAM0.DI_PROC.DI.DI_15.RELIABILITY
    st = getVariable(15415);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 15416 PROGRAM0.DI_PROC.DI.DI_15.BITS[0].VALUE
    st = getVariable(15416);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15417 PROGRAM0.DI_PROC.DI.DI_15.BITS[0].RELIABILITY
    st = getVariable(15417);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15418 PROGRAM0.DI_PROC.DI.DI_15.BITS[0]._INVERSED
    st = getVariable(15418);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15419 PROGRAM0.DI_PROC.DI.DI_15.BITS[1].VALUE
    st = getVariable(15419);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15420 PROGRAM0.DI_PROC.DI.DI_15.BITS[1].RELIABILITY
    st = getVariable(15420);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15421 PROGRAM0.DI_PROC.DI.DI_15.BITS[1]._INVERSED
    st = getVariable(15421);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15422 PROGRAM0.DI_PROC.DI.DI_15.BITS[2].VALUE
    st = getVariable(15422);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15423 PROGRAM0.DI_PROC.DI.DI_15.BITS[2].RELIABILITY
    st = getVariable(15423);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15424 PROGRAM0.DI_PROC.DI.DI_15.BITS[2]._INVERSED
    st = getVariable(15424);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15425 PROGRAM0.DI_PROC.DI.DI_15.BITS[3].VALUE
    st = getVariable(15425);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15426 PROGRAM0.DI_PROC.DI.DI_15.BITS[3].RELIABILITY
    st = getVariable(15426);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15427 PROGRAM0.DI_PROC.DI.DI_15.BITS[3]._INVERSED
    st = getVariable(15427);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15428 PROGRAM0.DI_PROC.DI.DI_15.BITS[4].VALUE
    st = getVariable(15428);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15429 PROGRAM0.DI_PROC.DI.DI_15.BITS[4].RELIABILITY
    st = getVariable(15429);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15430 PROGRAM0.DI_PROC.DI.DI_15.BITS[4]._INVERSED
    st = getVariable(15430);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15431 PROGRAM0.DI_PROC.DI.DI_15.BITS[5].VALUE
    st = getVariable(15431);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15432 PROGRAM0.DI_PROC.DI.DI_15.BITS[5].RELIABILITY
    st = getVariable(15432);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15433 PROGRAM0.DI_PROC.DI.DI_15.BITS[5]._INVERSED
    st = getVariable(15433);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15434 PROGRAM0.DI_PROC.DI.DI_15.BITS[6].VALUE
    st = getVariable(15434);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15435 PROGRAM0.DI_PROC.DI.DI_15.BITS[6].RELIABILITY
    st = getVariable(15435);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15436 PROGRAM0.DI_PROC.DI.DI_15.BITS[6]._INVERSED
    st = getVariable(15436);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15437 PROGRAM0.DI_PROC.DI.DI_15.BITS[7].VALUE
    st = getVariable(15437);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15438 PROGRAM0.DI_PROC.DI.DI_15.BITS[7].RELIABILITY
    st = getVariable(15438);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15439 PROGRAM0.DI_PROC.DI.DI_15.BITS[7]._INVERSED
    st = getVariable(15439);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15440 PROGRAM0.DI_PROC.DI.DI_15.BITS[8].VALUE
    st = getVariable(15440);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15441 PROGRAM0.DI_PROC.DI.DI_15.BITS[8].RELIABILITY
    st = getVariable(15441);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15442 PROGRAM0.DI_PROC.DI.DI_15.BITS[8]._INVERSED
    st = getVariable(15442);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15443 PROGRAM0.DI_PROC.DI.DI_15.BITS[9].VALUE
    st = getVariable(15443);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15444 PROGRAM0.DI_PROC.DI.DI_15.BITS[9].RELIABILITY
    st = getVariable(15444);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15445 PROGRAM0.DI_PROC.DI.DI_15.BITS[9]._INVERSED
    st = getVariable(15445);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15446 PROGRAM0.DI_PROC.DI.DI_15.BITS[10].VALUE
    st = getVariable(15446);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15447 PROGRAM0.DI_PROC.DI.DI_15.BITS[10].RELIABILITY
    st = getVariable(15447);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15448 PROGRAM0.DI_PROC.DI.DI_15.BITS[10]._INVERSED
    st = getVariable(15448);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15449 PROGRAM0.DI_PROC.DI.DI_15.BITS[11].VALUE
    st = getVariable(15449);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15450 PROGRAM0.DI_PROC.DI.DI_15.BITS[11].RELIABILITY
    st = getVariable(15450);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15451 PROGRAM0.DI_PROC.DI.DI_15.BITS[11]._INVERSED
    st = getVariable(15451);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15452 PROGRAM0.DI_PROC.DI.DI_15.BITS[12].VALUE
    st = getVariable(15452);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15453 PROGRAM0.DI_PROC.DI.DI_15.BITS[12].RELIABILITY
    st = getVariable(15453);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15454 PROGRAM0.DI_PROC.DI.DI_15.BITS[12]._INVERSED
    st = getVariable(15454);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15455 PROGRAM0.DI_PROC.DI.DI_15.BITS[13].VALUE
    st = getVariable(15455);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15456 PROGRAM0.DI_PROC.DI.DI_15.BITS[13].RELIABILITY
    st = getVariable(15456);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15457 PROGRAM0.DI_PROC.DI.DI_15.BITS[13]._INVERSED
    st = getVariable(15457);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15458 PROGRAM0.DI_PROC.DI.DI_15.BITS[14].VALUE
    st = getVariable(15458);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15459 PROGRAM0.DI_PROC.DI.DI_15.BITS[14].RELIABILITY
    st = getVariable(15459);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15460 PROGRAM0.DI_PROC.DI.DI_15.BITS[14]._INVERSED
    st = getVariable(15460);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15461 PROGRAM0.DI_PROC.DI.DI_15.BITS[15].VALUE
    st = getVariable(15461);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 15462 PROGRAM0.DI_PROC.DI.DI_15.BITS[15].RELIABILITY
    st = getVariable(15462);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 15463 PROGRAM0.DI_PROC.DI.DI_15.BITS[15]._INVERSED
    st = getVariable(15463);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 15464 PROGRAM0.DI_PROC.DI.DI_15.BLCONNECT
    st = getVariable(15464);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_15.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_15;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 15465 PROGRAM0.DI_PROC.DI_0_1_WVALUE
    st = getVariable(15465);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_0_1_WVALUE", 30);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_0_1_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15466 PROGRAM0.DI_PROC.DI_10_11_WVALUE
    st = getVariable(15466);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_10_11_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_10_11_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15467 PROGRAM0.DI_PROC.DI_12_13_WVALUE
    st = getVariable(15467);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_12_13_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_12_13_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15468 PROGRAM0.DI_PROC.DI_14_15_WVALUE
    st = getVariable(15468);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_14_15_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_14_15_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15469 PROGRAM0.DI_PROC.DI_16_17_WVALUE
    st = getVariable(15469);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_16_17_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_16_17_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15470 PROGRAM0.DI_PROC.DI_18_19_WVALUE
    st = getVariable(15470);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_18_19_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_18_19_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15471 PROGRAM0.DI_PROC.DI_20_21_WVALUE
    st = getVariable(15471);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_20_21_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_20_21_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15472 PROGRAM0.DI_PROC.DI_2_3_WVALUE
    st = getVariable(15472);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_2_3_WVALUE", 30);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_2_3_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15473 PROGRAM0.DI_PROC.DI_4_5_WVALUE
    st = getVariable(15473);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_4_5_WVALUE", 30);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_4_5_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15474 PROGRAM0.DI_PROC.DI_6_7_WVALUE
    st = getVariable(15474);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_6_7_WVALUE", 30);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_6_7_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15475 PROGRAM0.DI_PROC.DI_8_9_WVALUE
    st = getVariable(15475);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_8_9_WVALUE", 30);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_8_9_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15476 PROGRAM0.DI_PROC.A1_12_ERR_MODE
    st = getVariable(15476);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A1_12_ERR_MODE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A1_12_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15477 PROGRAM0.DI_PROC.A1_13_ERR_MODE
    st = getVariable(15477);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A1_13_ERR_MODE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A1_13_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15478 PROGRAM0.DI_PROC.A1_14_ERR_MODE
    st = getVariable(15478);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A1_14_ERR_MODE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A1_14_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15479 PROGRAM0.DI_PROC.A1_15_ERR_MODE
    st = getVariable(15479);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A1_15_ERR_MODE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A1_15_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15480 PROGRAM0.DI_PROC.A2_10_ERR_MODE
    st = getVariable(15480);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_10_ERR_MODE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_10_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15481 PROGRAM0.DI_PROC.A2_4_ERR_MODE
    st = getVariable(15481);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_4_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_4_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15482 PROGRAM0.DI_PROC.A2_5_ERR_MODE
    st = getVariable(15482);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_5_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_5_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15483 PROGRAM0.DI_PROC.A2_6_ERR_MODE
    st = getVariable(15483);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_6_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_6_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15484 PROGRAM0.DI_PROC.A2_7_ERR_MODE
    st = getVariable(15484);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_7_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_7_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15485 PROGRAM0.DI_PROC.A2_8_ERR_MODE
    st = getVariable(15485);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_8_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_8_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15486 PROGRAM0.DI_PROC.A2_9_ERR_MODE
    st = getVariable(15486);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_9_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_9_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 15487 PROGRAM0.DI_PROC.ARERR_11.WFLAGS
    st = getVariable(15487);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_11.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_11.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 15488 PROGRAM0.DI_PROC.ARERR_11.WVALUE
    st = getVariable(15488);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_11.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_11.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 15489 PROGRAM0.DI_PROC.ARERR_11.NANOSEC
    st = getVariable(15489);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_11.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_11.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 15490 PROGRAM0.DI_PROC.ARERR_11.RESERVE
    st = getVariable(15490);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_11.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_11.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 15491 PROGRAM0.DI_PROC.ARERR_12.WFLAGS
    st = getVariable(15491);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_12.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_12.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 15492 PROGRAM0.DI_PROC.ARERR_12.WVALUE
    st = getVariable(15492);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_12.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_12.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 15493 PROGRAM0.DI_PROC.ARERR_12.NANOSEC
    st = getVariable(15493);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_12.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_12.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 15494 PROGRAM0.DI_PROC.ARERR_12.RESERVE
    st = getVariable(15494);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_12.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_12.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 15495 PROGRAM0.DI_PROC.ARERR_13.WFLAGS
    st = getVariable(15495);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_13.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_13.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 15496 PROGRAM0.DI_PROC.ARERR_13.WVALUE
    st = getVariable(15496);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_13.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_13.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 15497 PROGRAM0.DI_PROC.ARERR_13.NANOSEC
    st = getVariable(15497);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_13.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_13.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 15498 PROGRAM0.DI_PROC.ARERR_13.RESERVE
    st = getVariable(15498);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_13.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_13.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 15499 PROGRAM0.DI_PROC.ARERR_14.WFLAGS
    st = getVariable(15499);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_14.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_14.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 15500 PROGRAM0.DI_PROC.ARERR_14.WVALUE
    st = getVariable(15500);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_14.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_14.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 15501 PROGRAM0.DI_PROC.ARERR_14.NANOSEC
    st = getVariable(15501);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_14.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_14.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 15502 PROGRAM0.DI_PROC.ARERR_14.RESERVE
    st = getVariable(15502);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_14.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_14.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 15503 PROGRAM0.DI_PROC.ARERR_18.WFLAGS
    st = getVariable(15503);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_18.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_18.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 15504 PROGRAM0.DI_PROC.ARERR_18.WVALUE
    st = getVariable(15504);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_18.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_18.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 15505 PROGRAM0.DI_PROC.ARERR_18.NANOSEC
    st = getVariable(15505);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_18.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_18.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 15506 PROGRAM0.DI_PROC.ARERR_18.RESERVE
    st = getVariable(15506);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_18.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_18.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 15507 PROGRAM0.DI_PROC.ARERR_19.WFLAGS
    st = getVariable(15507);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_19.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_19.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 15508 PROGRAM0.DI_PROC.ARERR_19.WVALUE
    st = getVariable(15508);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_19.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_19.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 15509 PROGRAM0.DI_PROC.ARERR_19.NANOSEC
    st = getVariable(15509);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_19.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_19.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 15510 PROGRAM0.DI_PROC.ARERR_19.RESERVE
    st = getVariable(15510);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_19.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_19.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 15511 PROGRAM0.DI_PROC.ARERR_20.WFLAGS
    st = getVariable(15511);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_20.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_20.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 15512 PROGRAM0.DI_PROC.ARERR_20.WVALUE
    st = getVariable(15512);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_20.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_20.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 15513 PROGRAM0.DI_PROC.ARERR_20.NANOSEC
    st = getVariable(15513);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_20.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_20.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 15514 PROGRAM0.DI_PROC.ARERR_20.RESERVE
    st = getVariable(15514);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_20.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_20.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 15515 PROGRAM0.DI_PROC.ARERR_21.WFLAGS
    st = getVariable(15515);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_21.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_21.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 15516 PROGRAM0.DI_PROC.ARERR_21.WVALUE
    st = getVariable(15516);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_21.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_21.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 15517 PROGRAM0.DI_PROC.ARERR_21.NANOSEC
    st = getVariable(15517);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_21.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_21.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 15518 PROGRAM0.DI_PROC.ARERR_21.RESERVE
    st = getVariable(15518);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_21.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_21.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }

  return 0;
}

// clang-format on
