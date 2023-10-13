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

  { // 16794 PROGRAM0.DI_PROC.ARDIN_0.WFLAGS
    st = getVariable(16794);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_0.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_0.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16795 PROGRAM0.DI_PROC.ARDIN_0.WVALUE
    st = getVariable(16795);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_0.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_0.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16796 PROGRAM0.DI_PROC.ARDIN_0.NANOSEC
    st = getVariable(16796);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_0.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_0.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16797 PROGRAM0.DI_PROC.ARDIN_0.RESERVE
    st = getVariable(16797);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_0.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_0.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16798 PROGRAM0.DI_PROC.ARDIN_1.WFLAGS
    st = getVariable(16798);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_1.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_1.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16799 PROGRAM0.DI_PROC.ARDIN_1.WVALUE
    st = getVariable(16799);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_1.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_1.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16800 PROGRAM0.DI_PROC.ARDIN_1.NANOSEC
    st = getVariable(16800);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_1.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_1.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16801 PROGRAM0.DI_PROC.ARDIN_1.RESERVE
    st = getVariable(16801);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_1.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_1.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16802 PROGRAM0.DI_PROC.ARDIN_2.WFLAGS
    st = getVariable(16802);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_2.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_2.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16803 PROGRAM0.DI_PROC.ARDIN_2.WVALUE
    st = getVariable(16803);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_2.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_2.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16804 PROGRAM0.DI_PROC.ARDIN_2.NANOSEC
    st = getVariable(16804);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_2.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_2.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16805 PROGRAM0.DI_PROC.ARDIN_2.RESERVE
    st = getVariable(16805);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_2.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_2.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16806 PROGRAM0.DI_PROC.ARDIN_3.WFLAGS
    st = getVariable(16806);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_3.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_3.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16807 PROGRAM0.DI_PROC.ARDIN_3.WVALUE
    st = getVariable(16807);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_3.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_3.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16808 PROGRAM0.DI_PROC.ARDIN_3.NANOSEC
    st = getVariable(16808);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_3.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_3.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16809 PROGRAM0.DI_PROC.ARDIN_3.RESERVE
    st = getVariable(16809);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_3.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_3.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16810 PROGRAM0.DI_PROC.ARDIN_4.WFLAGS
    st = getVariable(16810);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_4.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_4.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16811 PROGRAM0.DI_PROC.ARDIN_4.WVALUE
    st = getVariable(16811);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_4.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_4.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16812 PROGRAM0.DI_PROC.ARDIN_4.NANOSEC
    st = getVariable(16812);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_4.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_4.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16813 PROGRAM0.DI_PROC.ARDIN_4.RESERVE
    st = getVariable(16813);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_4.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_4.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16814 PROGRAM0.DI_PROC.ARDIN_5.WFLAGS
    st = getVariable(16814);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_5.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_5.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16815 PROGRAM0.DI_PROC.ARDIN_5.WVALUE
    st = getVariable(16815);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_5.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_5.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16816 PROGRAM0.DI_PROC.ARDIN_5.NANOSEC
    st = getVariable(16816);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_5.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_5.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16817 PROGRAM0.DI_PROC.ARDIN_5.RESERVE
    st = getVariable(16817);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_5.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_5.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16818 PROGRAM0.DI_PROC.ARDIN_6.WFLAGS
    st = getVariable(16818);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_6.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_6.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16819 PROGRAM0.DI_PROC.ARDIN_6.WVALUE
    st = getVariable(16819);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_6.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_6.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16820 PROGRAM0.DI_PROC.ARDIN_6.NANOSEC
    st = getVariable(16820);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_6.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_6.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16821 PROGRAM0.DI_PROC.ARDIN_6.RESERVE
    st = getVariable(16821);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_6.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_6.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16822 PROGRAM0.DI_PROC.ARDIN_7.WFLAGS
    st = getVariable(16822);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_7.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_7.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16823 PROGRAM0.DI_PROC.ARDIN_7.WVALUE
    st = getVariable(16823);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_7.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_7.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16824 PROGRAM0.DI_PROC.ARDIN_7.NANOSEC
    st = getVariable(16824);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_7.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_7.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16825 PROGRAM0.DI_PROC.ARDIN_7.RESERVE
    st = getVariable(16825);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_7.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_7.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16826 PROGRAM0.DI_PROC.ARDIN_8.WFLAGS
    st = getVariable(16826);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_8.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_8.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16827 PROGRAM0.DI_PROC.ARDIN_8.WVALUE
    st = getVariable(16827);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_8.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_8.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16828 PROGRAM0.DI_PROC.ARDIN_8.NANOSEC
    st = getVariable(16828);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_8.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_8.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16829 PROGRAM0.DI_PROC.ARDIN_8.RESERVE
    st = getVariable(16829);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_8.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_8.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16830 PROGRAM0.DI_PROC.ARDIN_9.WFLAGS
    st = getVariable(16830);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_9.WFLAGS", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_9.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16831 PROGRAM0.DI_PROC.ARDIN_9.WVALUE
    st = getVariable(16831);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_9.WVALUE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_9.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16832 PROGRAM0.DI_PROC.ARDIN_9.NANOSEC
    st = getVariable(16832);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_9.NANOSEC", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_9.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16833 PROGRAM0.DI_PROC.ARDIN_9.RESERVE
    st = getVariable(16833);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_9.RESERVE", 32);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_9.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16834 PROGRAM0.DI_PROC.ARDIN_10.WFLAGS
    st = getVariable(16834);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_10.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_10.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16835 PROGRAM0.DI_PROC.ARDIN_10.WVALUE
    st = getVariable(16835);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_10.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_10.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16836 PROGRAM0.DI_PROC.ARDIN_10.NANOSEC
    st = getVariable(16836);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_10.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_10.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16837 PROGRAM0.DI_PROC.ARDIN_10.RESERVE
    st = getVariable(16837);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_10.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_10.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16838 PROGRAM0.DI_PROC.ARDIN_11.WFLAGS
    st = getVariable(16838);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_11.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_11.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16839 PROGRAM0.DI_PROC.ARDIN_11.WVALUE
    st = getVariable(16839);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_11.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_11.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16840 PROGRAM0.DI_PROC.ARDIN_11.NANOSEC
    st = getVariable(16840);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_11.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_11.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16841 PROGRAM0.DI_PROC.ARDIN_11.RESERVE
    st = getVariable(16841);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_11.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_11.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16842 PROGRAM0.DI_PROC.ARDIN_12.WFLAGS
    st = getVariable(16842);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_12.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_12.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16843 PROGRAM0.DI_PROC.ARDIN_12.WVALUE
    st = getVariable(16843);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_12.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_12.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16844 PROGRAM0.DI_PROC.ARDIN_12.NANOSEC
    st = getVariable(16844);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_12.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_12.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16845 PROGRAM0.DI_PROC.ARDIN_12.RESERVE
    st = getVariable(16845);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_12.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_12.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16846 PROGRAM0.DI_PROC.ARDIN_13.WFLAGS
    st = getVariable(16846);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_13.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_13.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16847 PROGRAM0.DI_PROC.ARDIN_13.WVALUE
    st = getVariable(16847);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_13.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_13.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16848 PROGRAM0.DI_PROC.ARDIN_13.NANOSEC
    st = getVariable(16848);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_13.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_13.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16849 PROGRAM0.DI_PROC.ARDIN_13.RESERVE
    st = getVariable(16849);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_13.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_13.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16850 PROGRAM0.DI_PROC.ARDIN_14.WFLAGS
    st = getVariable(16850);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_14.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_14.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16851 PROGRAM0.DI_PROC.ARDIN_14.WVALUE
    st = getVariable(16851);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_14.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_14.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16852 PROGRAM0.DI_PROC.ARDIN_14.NANOSEC
    st = getVariable(16852);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_14.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_14.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16853 PROGRAM0.DI_PROC.ARDIN_14.RESERVE
    st = getVariable(16853);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_14.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_14.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16854 PROGRAM0.DI_PROC.ARDIN_15.WFLAGS
    st = getVariable(16854);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_15.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_15.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16855 PROGRAM0.DI_PROC.ARDIN_15.WVALUE
    st = getVariable(16855);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_15.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_15.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16856 PROGRAM0.DI_PROC.ARDIN_15.NANOSEC
    st = getVariable(16856);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_15.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_15.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16857 PROGRAM0.DI_PROC.ARDIN_15.RESERVE
    st = getVariable(16857);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_15.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_15.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16858 PROGRAM0.DI_PROC.ARDIN_16.WFLAGS
    st = getVariable(16858);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_16.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_16.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16859 PROGRAM0.DI_PROC.ARDIN_16.WVALUE
    st = getVariable(16859);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_16.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_16.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16860 PROGRAM0.DI_PROC.ARDIN_16.NANOSEC
    st = getVariable(16860);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_16.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_16.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16861 PROGRAM0.DI_PROC.ARDIN_16.RESERVE
    st = getVariable(16861);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_16.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_16.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16862 PROGRAM0.DI_PROC.ARDIN_17.WFLAGS
    st = getVariable(16862);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_17.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_17.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16863 PROGRAM0.DI_PROC.ARDIN_17.WVALUE
    st = getVariable(16863);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_17.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_17.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16864 PROGRAM0.DI_PROC.ARDIN_17.NANOSEC
    st = getVariable(16864);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_17.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_17.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16865 PROGRAM0.DI_PROC.ARDIN_17.RESERVE
    st = getVariable(16865);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_17.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_17.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16866 PROGRAM0.DI_PROC.ARDIN_18.WFLAGS
    st = getVariable(16866);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_18.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_18.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16867 PROGRAM0.DI_PROC.ARDIN_18.WVALUE
    st = getVariable(16867);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_18.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_18.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16868 PROGRAM0.DI_PROC.ARDIN_18.NANOSEC
    st = getVariable(16868);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_18.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_18.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16869 PROGRAM0.DI_PROC.ARDIN_18.RESERVE
    st = getVariable(16869);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_18.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_18.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16870 PROGRAM0.DI_PROC.ARDIN_19.WFLAGS
    st = getVariable(16870);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_19.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_19.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16871 PROGRAM0.DI_PROC.ARDIN_19.WVALUE
    st = getVariable(16871);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_19.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_19.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16872 PROGRAM0.DI_PROC.ARDIN_19.NANOSEC
    st = getVariable(16872);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_19.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_19.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16873 PROGRAM0.DI_PROC.ARDIN_19.RESERVE
    st = getVariable(16873);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_19.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_19.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16874 PROGRAM0.DI_PROC.ARDIN_20.WFLAGS
    st = getVariable(16874);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_20.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_20.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16875 PROGRAM0.DI_PROC.ARDIN_20.WVALUE
    st = getVariable(16875);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_20.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_20.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16876 PROGRAM0.DI_PROC.ARDIN_20.NANOSEC
    st = getVariable(16876);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_20.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_20.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16877 PROGRAM0.DI_PROC.ARDIN_20.RESERVE
    st = getVariable(16877);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_20.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_20.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16878 PROGRAM0.DI_PROC.ARDIN_21.WFLAGS
    st = getVariable(16878);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_21.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_21.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 16879 PROGRAM0.DI_PROC.ARDIN_21.WVALUE
    st = getVariable(16879);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_21.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_21.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 16880 PROGRAM0.DI_PROC.ARDIN_21.NANOSEC
    st = getVariable(16880);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_21.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_21.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 16881 PROGRAM0.DI_PROC.ARDIN_21.RESERVE
    st = getVariable(16881);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARDIN_21.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARDIN_21.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 16882 PROGRAM0.DI_PROC.DI.DI_0.IMIT
    st = getVariable(16882);
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
  { // 16883 PROGRAM0.DI_PROC.DI.DI_0.VALUE
    st = getVariable(16883);
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
  { // 16884 PROGRAM0.DI_PROC.DI.DI_0.RELIABILITY
    st = getVariable(16884);
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
  { // 16885 PROGRAM0.DI_PROC.DI.DI_0.BITS[0].VALUE
    st = getVariable(16885);
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
  { // 16886 PROGRAM0.DI_PROC.DI.DI_0.BITS[0].RELIABILITY
    st = getVariable(16886);
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
  { // 16887 PROGRAM0.DI_PROC.DI.DI_0.BITS[0]._INVERSED
    st = getVariable(16887);
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
  { // 16888 PROGRAM0.DI_PROC.DI.DI_0.BITS[1].VALUE
    st = getVariable(16888);
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
  { // 16889 PROGRAM0.DI_PROC.DI.DI_0.BITS[1].RELIABILITY
    st = getVariable(16889);
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
  { // 16890 PROGRAM0.DI_PROC.DI.DI_0.BITS[1]._INVERSED
    st = getVariable(16890);
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
  { // 16891 PROGRAM0.DI_PROC.DI.DI_0.BITS[2].VALUE
    st = getVariable(16891);
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
  { // 16892 PROGRAM0.DI_PROC.DI.DI_0.BITS[2].RELIABILITY
    st = getVariable(16892);
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
  { // 16893 PROGRAM0.DI_PROC.DI.DI_0.BITS[2]._INVERSED
    st = getVariable(16893);
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
  { // 16894 PROGRAM0.DI_PROC.DI.DI_0.BITS[3].VALUE
    st = getVariable(16894);
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
  { // 16895 PROGRAM0.DI_PROC.DI.DI_0.BITS[3].RELIABILITY
    st = getVariable(16895);
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
  { // 16896 PROGRAM0.DI_PROC.DI.DI_0.BITS[3]._INVERSED
    st = getVariable(16896);
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
  { // 16897 PROGRAM0.DI_PROC.DI.DI_0.BITS[4].VALUE
    st = getVariable(16897);
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
  { // 16898 PROGRAM0.DI_PROC.DI.DI_0.BITS[4].RELIABILITY
    st = getVariable(16898);
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
  { // 16899 PROGRAM0.DI_PROC.DI.DI_0.BITS[4]._INVERSED
    st = getVariable(16899);
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
  { // 16900 PROGRAM0.DI_PROC.DI.DI_0.BITS[5].VALUE
    st = getVariable(16900);
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
  { // 16901 PROGRAM0.DI_PROC.DI.DI_0.BITS[5].RELIABILITY
    st = getVariable(16901);
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
  { // 16902 PROGRAM0.DI_PROC.DI.DI_0.BITS[5]._INVERSED
    st = getVariable(16902);
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
  { // 16903 PROGRAM0.DI_PROC.DI.DI_0.BITS[6].VALUE
    st = getVariable(16903);
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
  { // 16904 PROGRAM0.DI_PROC.DI.DI_0.BITS[6].RELIABILITY
    st = getVariable(16904);
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
  { // 16905 PROGRAM0.DI_PROC.DI.DI_0.BITS[6]._INVERSED
    st = getVariable(16905);
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
  { // 16906 PROGRAM0.DI_PROC.DI.DI_0.BITS[7].VALUE
    st = getVariable(16906);
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
  { // 16907 PROGRAM0.DI_PROC.DI.DI_0.BITS[7].RELIABILITY
    st = getVariable(16907);
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
  { // 16908 PROGRAM0.DI_PROC.DI.DI_0.BITS[7]._INVERSED
    st = getVariable(16908);
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
  { // 16909 PROGRAM0.DI_PROC.DI.DI_0.BITS[8].VALUE
    st = getVariable(16909);
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
  { // 16910 PROGRAM0.DI_PROC.DI.DI_0.BITS[8].RELIABILITY
    st = getVariable(16910);
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
  { // 16911 PROGRAM0.DI_PROC.DI.DI_0.BITS[8]._INVERSED
    st = getVariable(16911);
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
  { // 16912 PROGRAM0.DI_PROC.DI.DI_0.BITS[9].VALUE
    st = getVariable(16912);
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
  { // 16913 PROGRAM0.DI_PROC.DI.DI_0.BITS[9].RELIABILITY
    st = getVariable(16913);
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
  { // 16914 PROGRAM0.DI_PROC.DI.DI_0.BITS[9]._INVERSED
    st = getVariable(16914);
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
  { // 16915 PROGRAM0.DI_PROC.DI.DI_0.BITS[10].VALUE
    st = getVariable(16915);
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
  { // 16916 PROGRAM0.DI_PROC.DI.DI_0.BITS[10].RELIABILITY
    st = getVariable(16916);
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
  { // 16917 PROGRAM0.DI_PROC.DI.DI_0.BITS[10]._INVERSED
    st = getVariable(16917);
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
  { // 16918 PROGRAM0.DI_PROC.DI.DI_0.BITS[11].VALUE
    st = getVariable(16918);
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
  { // 16919 PROGRAM0.DI_PROC.DI.DI_0.BITS[11].RELIABILITY
    st = getVariable(16919);
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
  { // 16920 PROGRAM0.DI_PROC.DI.DI_0.BITS[11]._INVERSED
    st = getVariable(16920);
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
  { // 16921 PROGRAM0.DI_PROC.DI.DI_0.BITS[12].VALUE
    st = getVariable(16921);
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
  { // 16922 PROGRAM0.DI_PROC.DI.DI_0.BITS[12].RELIABILITY
    st = getVariable(16922);
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
  { // 16923 PROGRAM0.DI_PROC.DI.DI_0.BITS[12]._INVERSED
    st = getVariable(16923);
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
  { // 16924 PROGRAM0.DI_PROC.DI.DI_0.BITS[13].VALUE
    st = getVariable(16924);
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
  { // 16925 PROGRAM0.DI_PROC.DI.DI_0.BITS[13].RELIABILITY
    st = getVariable(16925);
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
  { // 16926 PROGRAM0.DI_PROC.DI.DI_0.BITS[13]._INVERSED
    st = getVariable(16926);
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
  { // 16927 PROGRAM0.DI_PROC.DI.DI_0.BITS[14].VALUE
    st = getVariable(16927);
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
  { // 16928 PROGRAM0.DI_PROC.DI.DI_0.BITS[14].RELIABILITY
    st = getVariable(16928);
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
  { // 16929 PROGRAM0.DI_PROC.DI.DI_0.BITS[14]._INVERSED
    st = getVariable(16929);
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
  { // 16930 PROGRAM0.DI_PROC.DI.DI_0.BITS[15].VALUE
    st = getVariable(16930);
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
  { // 16931 PROGRAM0.DI_PROC.DI.DI_0.BITS[15].RELIABILITY
    st = getVariable(16931);
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
  { // 16932 PROGRAM0.DI_PROC.DI.DI_0.BITS[15]._INVERSED
    st = getVariable(16932);
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
  { // 16933 PROGRAM0.DI_PROC.DI.DI_0.BLCONNECT
    st = getVariable(16933);
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
  { // 16934 PROGRAM0.DI_PROC.DI.DI_1.IMIT
    st = getVariable(16934);
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
  { // 16935 PROGRAM0.DI_PROC.DI.DI_1.VALUE
    st = getVariable(16935);
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
  { // 16936 PROGRAM0.DI_PROC.DI.DI_1.RELIABILITY
    st = getVariable(16936);
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
  { // 16937 PROGRAM0.DI_PROC.DI.DI_1.BITS[0].VALUE
    st = getVariable(16937);
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
  { // 16938 PROGRAM0.DI_PROC.DI.DI_1.BITS[0].RELIABILITY
    st = getVariable(16938);
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
  { // 16939 PROGRAM0.DI_PROC.DI.DI_1.BITS[0]._INVERSED
    st = getVariable(16939);
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
  { // 16940 PROGRAM0.DI_PROC.DI.DI_1.BITS[1].VALUE
    st = getVariable(16940);
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
  { // 16941 PROGRAM0.DI_PROC.DI.DI_1.BITS[1].RELIABILITY
    st = getVariable(16941);
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
  { // 16942 PROGRAM0.DI_PROC.DI.DI_1.BITS[1]._INVERSED
    st = getVariable(16942);
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
  { // 16943 PROGRAM0.DI_PROC.DI.DI_1.BITS[2].VALUE
    st = getVariable(16943);
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
  { // 16944 PROGRAM0.DI_PROC.DI.DI_1.BITS[2].RELIABILITY
    st = getVariable(16944);
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
  { // 16945 PROGRAM0.DI_PROC.DI.DI_1.BITS[2]._INVERSED
    st = getVariable(16945);
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
  { // 16946 PROGRAM0.DI_PROC.DI.DI_1.BITS[3].VALUE
    st = getVariable(16946);
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
  { // 16947 PROGRAM0.DI_PROC.DI.DI_1.BITS[3].RELIABILITY
    st = getVariable(16947);
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
  { // 16948 PROGRAM0.DI_PROC.DI.DI_1.BITS[3]._INVERSED
    st = getVariable(16948);
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
  { // 16949 PROGRAM0.DI_PROC.DI.DI_1.BITS[4].VALUE
    st = getVariable(16949);
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
  { // 16950 PROGRAM0.DI_PROC.DI.DI_1.BITS[4].RELIABILITY
    st = getVariable(16950);
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
  { // 16951 PROGRAM0.DI_PROC.DI.DI_1.BITS[4]._INVERSED
    st = getVariable(16951);
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
  { // 16952 PROGRAM0.DI_PROC.DI.DI_1.BITS[5].VALUE
    st = getVariable(16952);
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
  { // 16953 PROGRAM0.DI_PROC.DI.DI_1.BITS[5].RELIABILITY
    st = getVariable(16953);
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
  { // 16954 PROGRAM0.DI_PROC.DI.DI_1.BITS[5]._INVERSED
    st = getVariable(16954);
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
  { // 16955 PROGRAM0.DI_PROC.DI.DI_1.BITS[6].VALUE
    st = getVariable(16955);
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
  { // 16956 PROGRAM0.DI_PROC.DI.DI_1.BITS[6].RELIABILITY
    st = getVariable(16956);
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
  { // 16957 PROGRAM0.DI_PROC.DI.DI_1.BITS[6]._INVERSED
    st = getVariable(16957);
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
  { // 16958 PROGRAM0.DI_PROC.DI.DI_1.BITS[7].VALUE
    st = getVariable(16958);
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
  { // 16959 PROGRAM0.DI_PROC.DI.DI_1.BITS[7].RELIABILITY
    st = getVariable(16959);
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
  { // 16960 PROGRAM0.DI_PROC.DI.DI_1.BITS[7]._INVERSED
    st = getVariable(16960);
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
  { // 16961 PROGRAM0.DI_PROC.DI.DI_1.BITS[8].VALUE
    st = getVariable(16961);
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
  { // 16962 PROGRAM0.DI_PROC.DI.DI_1.BITS[8].RELIABILITY
    st = getVariable(16962);
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
  { // 16963 PROGRAM0.DI_PROC.DI.DI_1.BITS[8]._INVERSED
    st = getVariable(16963);
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
  { // 16964 PROGRAM0.DI_PROC.DI.DI_1.BITS[9].VALUE
    st = getVariable(16964);
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
  { // 16965 PROGRAM0.DI_PROC.DI.DI_1.BITS[9].RELIABILITY
    st = getVariable(16965);
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
  { // 16966 PROGRAM0.DI_PROC.DI.DI_1.BITS[9]._INVERSED
    st = getVariable(16966);
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
  { // 16967 PROGRAM0.DI_PROC.DI.DI_1.BITS[10].VALUE
    st = getVariable(16967);
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
  { // 16968 PROGRAM0.DI_PROC.DI.DI_1.BITS[10].RELIABILITY
    st = getVariable(16968);
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
  { // 16969 PROGRAM0.DI_PROC.DI.DI_1.BITS[10]._INVERSED
    st = getVariable(16969);
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
  { // 16970 PROGRAM0.DI_PROC.DI.DI_1.BITS[11].VALUE
    st = getVariable(16970);
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
  { // 16971 PROGRAM0.DI_PROC.DI.DI_1.BITS[11].RELIABILITY
    st = getVariable(16971);
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
  { // 16972 PROGRAM0.DI_PROC.DI.DI_1.BITS[11]._INVERSED
    st = getVariable(16972);
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
  { // 16973 PROGRAM0.DI_PROC.DI.DI_1.BITS[12].VALUE
    st = getVariable(16973);
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
  { // 16974 PROGRAM0.DI_PROC.DI.DI_1.BITS[12].RELIABILITY
    st = getVariable(16974);
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
  { // 16975 PROGRAM0.DI_PROC.DI.DI_1.BITS[12]._INVERSED
    st = getVariable(16975);
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
  { // 16976 PROGRAM0.DI_PROC.DI.DI_1.BITS[13].VALUE
    st = getVariable(16976);
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
  { // 16977 PROGRAM0.DI_PROC.DI.DI_1.BITS[13].RELIABILITY
    st = getVariable(16977);
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
  { // 16978 PROGRAM0.DI_PROC.DI.DI_1.BITS[13]._INVERSED
    st = getVariable(16978);
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
  { // 16979 PROGRAM0.DI_PROC.DI.DI_1.BITS[14].VALUE
    st = getVariable(16979);
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
  { // 16980 PROGRAM0.DI_PROC.DI.DI_1.BITS[14].RELIABILITY
    st = getVariable(16980);
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
  { // 16981 PROGRAM0.DI_PROC.DI.DI_1.BITS[14]._INVERSED
    st = getVariable(16981);
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
  { // 16982 PROGRAM0.DI_PROC.DI.DI_1.BITS[15].VALUE
    st = getVariable(16982);
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
  { // 16983 PROGRAM0.DI_PROC.DI.DI_1.BITS[15].RELIABILITY
    st = getVariable(16983);
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
  { // 16984 PROGRAM0.DI_PROC.DI.DI_1.BITS[15]._INVERSED
    st = getVariable(16984);
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
  { // 16985 PROGRAM0.DI_PROC.DI.DI_1.BLCONNECT
    st = getVariable(16985);
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
  { // 16986 PROGRAM0.DI_PROC.DI.DI_2.IMIT
    st = getVariable(16986);
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
  { // 16987 PROGRAM0.DI_PROC.DI.DI_2.VALUE
    st = getVariable(16987);
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
  { // 16988 PROGRAM0.DI_PROC.DI.DI_2.RELIABILITY
    st = getVariable(16988);
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
  { // 16989 PROGRAM0.DI_PROC.DI.DI_2.BITS[0].VALUE
    st = getVariable(16989);
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
  { // 16990 PROGRAM0.DI_PROC.DI.DI_2.BITS[0].RELIABILITY
    st = getVariable(16990);
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
  { // 16991 PROGRAM0.DI_PROC.DI.DI_2.BITS[0]._INVERSED
    st = getVariable(16991);
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
  { // 16992 PROGRAM0.DI_PROC.DI.DI_2.BITS[1].VALUE
    st = getVariable(16992);
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
  { // 16993 PROGRAM0.DI_PROC.DI.DI_2.BITS[1].RELIABILITY
    st = getVariable(16993);
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
  { // 16994 PROGRAM0.DI_PROC.DI.DI_2.BITS[1]._INVERSED
    st = getVariable(16994);
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
  { // 16995 PROGRAM0.DI_PROC.DI.DI_2.BITS[2].VALUE
    st = getVariable(16995);
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
  { // 16996 PROGRAM0.DI_PROC.DI.DI_2.BITS[2].RELIABILITY
    st = getVariable(16996);
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
  { // 16997 PROGRAM0.DI_PROC.DI.DI_2.BITS[2]._INVERSED
    st = getVariable(16997);
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
  { // 16998 PROGRAM0.DI_PROC.DI.DI_2.BITS[3].VALUE
    st = getVariable(16998);
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
  { // 16999 PROGRAM0.DI_PROC.DI.DI_2.BITS[3].RELIABILITY
    st = getVariable(16999);
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
  { // 17000 PROGRAM0.DI_PROC.DI.DI_2.BITS[3]._INVERSED
    st = getVariable(17000);
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
  { // 17001 PROGRAM0.DI_PROC.DI.DI_2.BITS[4].VALUE
    st = getVariable(17001);
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
  { // 17002 PROGRAM0.DI_PROC.DI.DI_2.BITS[4].RELIABILITY
    st = getVariable(17002);
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
  { // 17003 PROGRAM0.DI_PROC.DI.DI_2.BITS[4]._INVERSED
    st = getVariable(17003);
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
  { // 17004 PROGRAM0.DI_PROC.DI.DI_2.BITS[5].VALUE
    st = getVariable(17004);
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
  { // 17005 PROGRAM0.DI_PROC.DI.DI_2.BITS[5].RELIABILITY
    st = getVariable(17005);
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
  { // 17006 PROGRAM0.DI_PROC.DI.DI_2.BITS[5]._INVERSED
    st = getVariable(17006);
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
  { // 17007 PROGRAM0.DI_PROC.DI.DI_2.BITS[6].VALUE
    st = getVariable(17007);
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
  { // 17008 PROGRAM0.DI_PROC.DI.DI_2.BITS[6].RELIABILITY
    st = getVariable(17008);
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
  { // 17009 PROGRAM0.DI_PROC.DI.DI_2.BITS[6]._INVERSED
    st = getVariable(17009);
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
  { // 17010 PROGRAM0.DI_PROC.DI.DI_2.BITS[7].VALUE
    st = getVariable(17010);
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
  { // 17011 PROGRAM0.DI_PROC.DI.DI_2.BITS[7].RELIABILITY
    st = getVariable(17011);
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
  { // 17012 PROGRAM0.DI_PROC.DI.DI_2.BITS[7]._INVERSED
    st = getVariable(17012);
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
  { // 17013 PROGRAM0.DI_PROC.DI.DI_2.BITS[8].VALUE
    st = getVariable(17013);
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
  { // 17014 PROGRAM0.DI_PROC.DI.DI_2.BITS[8].RELIABILITY
    st = getVariable(17014);
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
  { // 17015 PROGRAM0.DI_PROC.DI.DI_2.BITS[8]._INVERSED
    st = getVariable(17015);
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
  { // 17016 PROGRAM0.DI_PROC.DI.DI_2.BITS[9].VALUE
    st = getVariable(17016);
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
  { // 17017 PROGRAM0.DI_PROC.DI.DI_2.BITS[9].RELIABILITY
    st = getVariable(17017);
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
  { // 17018 PROGRAM0.DI_PROC.DI.DI_2.BITS[9]._INVERSED
    st = getVariable(17018);
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
  { // 17019 PROGRAM0.DI_PROC.DI.DI_2.BITS[10].VALUE
    st = getVariable(17019);
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
  { // 17020 PROGRAM0.DI_PROC.DI.DI_2.BITS[10].RELIABILITY
    st = getVariable(17020);
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
  { // 17021 PROGRAM0.DI_PROC.DI.DI_2.BITS[10]._INVERSED
    st = getVariable(17021);
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
  { // 17022 PROGRAM0.DI_PROC.DI.DI_2.BITS[11].VALUE
    st = getVariable(17022);
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
  { // 17023 PROGRAM0.DI_PROC.DI.DI_2.BITS[11].RELIABILITY
    st = getVariable(17023);
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
  { // 17024 PROGRAM0.DI_PROC.DI.DI_2.BITS[11]._INVERSED
    st = getVariable(17024);
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
  { // 17025 PROGRAM0.DI_PROC.DI.DI_2.BITS[12].VALUE
    st = getVariable(17025);
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
  { // 17026 PROGRAM0.DI_PROC.DI.DI_2.BITS[12].RELIABILITY
    st = getVariable(17026);
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
  { // 17027 PROGRAM0.DI_PROC.DI.DI_2.BITS[12]._INVERSED
    st = getVariable(17027);
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
  { // 17028 PROGRAM0.DI_PROC.DI.DI_2.BITS[13].VALUE
    st = getVariable(17028);
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
  { // 17029 PROGRAM0.DI_PROC.DI.DI_2.BITS[13].RELIABILITY
    st = getVariable(17029);
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
  { // 17030 PROGRAM0.DI_PROC.DI.DI_2.BITS[13]._INVERSED
    st = getVariable(17030);
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
  { // 17031 PROGRAM0.DI_PROC.DI.DI_2.BITS[14].VALUE
    st = getVariable(17031);
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
  { // 17032 PROGRAM0.DI_PROC.DI.DI_2.BITS[14].RELIABILITY
    st = getVariable(17032);
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
  { // 17033 PROGRAM0.DI_PROC.DI.DI_2.BITS[14]._INVERSED
    st = getVariable(17033);
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
  { // 17034 PROGRAM0.DI_PROC.DI.DI_2.BITS[15].VALUE
    st = getVariable(17034);
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
  { // 17035 PROGRAM0.DI_PROC.DI.DI_2.BITS[15].RELIABILITY
    st = getVariable(17035);
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
  { // 17036 PROGRAM0.DI_PROC.DI.DI_2.BITS[15]._INVERSED
    st = getVariable(17036);
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
  { // 17037 PROGRAM0.DI_PROC.DI.DI_2.BLCONNECT
    st = getVariable(17037);
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
  { // 17038 PROGRAM0.DI_PROC.DI.DI_3.IMIT
    st = getVariable(17038);
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
  { // 17039 PROGRAM0.DI_PROC.DI.DI_3.VALUE
    st = getVariable(17039);
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
  { // 17040 PROGRAM0.DI_PROC.DI.DI_3.RELIABILITY
    st = getVariable(17040);
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
  { // 17041 PROGRAM0.DI_PROC.DI.DI_3.BITS[0].VALUE
    st = getVariable(17041);
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
  { // 17042 PROGRAM0.DI_PROC.DI.DI_3.BITS[0].RELIABILITY
    st = getVariable(17042);
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
  { // 17043 PROGRAM0.DI_PROC.DI.DI_3.BITS[0]._INVERSED
    st = getVariable(17043);
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
  { // 17044 PROGRAM0.DI_PROC.DI.DI_3.BITS[1].VALUE
    st = getVariable(17044);
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
  { // 17045 PROGRAM0.DI_PROC.DI.DI_3.BITS[1].RELIABILITY
    st = getVariable(17045);
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
  { // 17046 PROGRAM0.DI_PROC.DI.DI_3.BITS[1]._INVERSED
    st = getVariable(17046);
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
  { // 17047 PROGRAM0.DI_PROC.DI.DI_3.BITS[2].VALUE
    st = getVariable(17047);
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
  { // 17048 PROGRAM0.DI_PROC.DI.DI_3.BITS[2].RELIABILITY
    st = getVariable(17048);
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
  { // 17049 PROGRAM0.DI_PROC.DI.DI_3.BITS[2]._INVERSED
    st = getVariable(17049);
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
  { // 17050 PROGRAM0.DI_PROC.DI.DI_3.BITS[3].VALUE
    st = getVariable(17050);
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
  { // 17051 PROGRAM0.DI_PROC.DI.DI_3.BITS[3].RELIABILITY
    st = getVariable(17051);
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
  { // 17052 PROGRAM0.DI_PROC.DI.DI_3.BITS[3]._INVERSED
    st = getVariable(17052);
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
  { // 17053 PROGRAM0.DI_PROC.DI.DI_3.BITS[4].VALUE
    st = getVariable(17053);
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
  { // 17054 PROGRAM0.DI_PROC.DI.DI_3.BITS[4].RELIABILITY
    st = getVariable(17054);
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
  { // 17055 PROGRAM0.DI_PROC.DI.DI_3.BITS[4]._INVERSED
    st = getVariable(17055);
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
  { // 17056 PROGRAM0.DI_PROC.DI.DI_3.BITS[5].VALUE
    st = getVariable(17056);
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
  { // 17057 PROGRAM0.DI_PROC.DI.DI_3.BITS[5].RELIABILITY
    st = getVariable(17057);
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
  { // 17058 PROGRAM0.DI_PROC.DI.DI_3.BITS[5]._INVERSED
    st = getVariable(17058);
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
  { // 17059 PROGRAM0.DI_PROC.DI.DI_3.BITS[6].VALUE
    st = getVariable(17059);
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
  { // 17060 PROGRAM0.DI_PROC.DI.DI_3.BITS[6].RELIABILITY
    st = getVariable(17060);
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
  { // 17061 PROGRAM0.DI_PROC.DI.DI_3.BITS[6]._INVERSED
    st = getVariable(17061);
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
  { // 17062 PROGRAM0.DI_PROC.DI.DI_3.BITS[7].VALUE
    st = getVariable(17062);
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
  { // 17063 PROGRAM0.DI_PROC.DI.DI_3.BITS[7].RELIABILITY
    st = getVariable(17063);
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
  { // 17064 PROGRAM0.DI_PROC.DI.DI_3.BITS[7]._INVERSED
    st = getVariable(17064);
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
  { // 17065 PROGRAM0.DI_PROC.DI.DI_3.BITS[8].VALUE
    st = getVariable(17065);
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
  { // 17066 PROGRAM0.DI_PROC.DI.DI_3.BITS[8].RELIABILITY
    st = getVariable(17066);
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
  { // 17067 PROGRAM0.DI_PROC.DI.DI_3.BITS[8]._INVERSED
    st = getVariable(17067);
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
  { // 17068 PROGRAM0.DI_PROC.DI.DI_3.BITS[9].VALUE
    st = getVariable(17068);
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
  { // 17069 PROGRAM0.DI_PROC.DI.DI_3.BITS[9].RELIABILITY
    st = getVariable(17069);
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
  { // 17070 PROGRAM0.DI_PROC.DI.DI_3.BITS[9]._INVERSED
    st = getVariable(17070);
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
  { // 17071 PROGRAM0.DI_PROC.DI.DI_3.BITS[10].VALUE
    st = getVariable(17071);
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
  { // 17072 PROGRAM0.DI_PROC.DI.DI_3.BITS[10].RELIABILITY
    st = getVariable(17072);
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
  { // 17073 PROGRAM0.DI_PROC.DI.DI_3.BITS[10]._INVERSED
    st = getVariable(17073);
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
  { // 17074 PROGRAM0.DI_PROC.DI.DI_3.BITS[11].VALUE
    st = getVariable(17074);
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
  { // 17075 PROGRAM0.DI_PROC.DI.DI_3.BITS[11].RELIABILITY
    st = getVariable(17075);
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
  { // 17076 PROGRAM0.DI_PROC.DI.DI_3.BITS[11]._INVERSED
    st = getVariable(17076);
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
  { // 17077 PROGRAM0.DI_PROC.DI.DI_3.BITS[12].VALUE
    st = getVariable(17077);
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
  { // 17078 PROGRAM0.DI_PROC.DI.DI_3.BITS[12].RELIABILITY
    st = getVariable(17078);
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
  { // 17079 PROGRAM0.DI_PROC.DI.DI_3.BITS[12]._INVERSED
    st = getVariable(17079);
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
  { // 17080 PROGRAM0.DI_PROC.DI.DI_3.BITS[13].VALUE
    st = getVariable(17080);
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
  { // 17081 PROGRAM0.DI_PROC.DI.DI_3.BITS[13].RELIABILITY
    st = getVariable(17081);
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
  { // 17082 PROGRAM0.DI_PROC.DI.DI_3.BITS[13]._INVERSED
    st = getVariable(17082);
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
  { // 17083 PROGRAM0.DI_PROC.DI.DI_3.BITS[14].VALUE
    st = getVariable(17083);
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
  { // 17084 PROGRAM0.DI_PROC.DI.DI_3.BITS[14].RELIABILITY
    st = getVariable(17084);
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
  { // 17085 PROGRAM0.DI_PROC.DI.DI_3.BITS[14]._INVERSED
    st = getVariable(17085);
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
  { // 17086 PROGRAM0.DI_PROC.DI.DI_3.BITS[15].VALUE
    st = getVariable(17086);
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
  { // 17087 PROGRAM0.DI_PROC.DI.DI_3.BITS[15].RELIABILITY
    st = getVariable(17087);
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
  { // 17088 PROGRAM0.DI_PROC.DI.DI_3.BITS[15]._INVERSED
    st = getVariable(17088);
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
  { // 17089 PROGRAM0.DI_PROC.DI.DI_3.BLCONNECT
    st = getVariable(17089);
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
  { // 17090 PROGRAM0.DI_PROC.DI.DI_4.IMIT
    st = getVariable(17090);
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
  { // 17091 PROGRAM0.DI_PROC.DI.DI_4.VALUE
    st = getVariable(17091);
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
  { // 17092 PROGRAM0.DI_PROC.DI.DI_4.RELIABILITY
    st = getVariable(17092);
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
  { // 17093 PROGRAM0.DI_PROC.DI.DI_4.BITS[0].VALUE
    st = getVariable(17093);
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
  { // 17094 PROGRAM0.DI_PROC.DI.DI_4.BITS[0].RELIABILITY
    st = getVariable(17094);
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
  { // 17095 PROGRAM0.DI_PROC.DI.DI_4.BITS[0]._INVERSED
    st = getVariable(17095);
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
  { // 17096 PROGRAM0.DI_PROC.DI.DI_4.BITS[1].VALUE
    st = getVariable(17096);
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
  { // 17097 PROGRAM0.DI_PROC.DI.DI_4.BITS[1].RELIABILITY
    st = getVariable(17097);
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
  { // 17098 PROGRAM0.DI_PROC.DI.DI_4.BITS[1]._INVERSED
    st = getVariable(17098);
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
  { // 17099 PROGRAM0.DI_PROC.DI.DI_4.BITS[2].VALUE
    st = getVariable(17099);
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
  { // 17100 PROGRAM0.DI_PROC.DI.DI_4.BITS[2].RELIABILITY
    st = getVariable(17100);
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
  { // 17101 PROGRAM0.DI_PROC.DI.DI_4.BITS[2]._INVERSED
    st = getVariable(17101);
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
  { // 17102 PROGRAM0.DI_PROC.DI.DI_4.BITS[3].VALUE
    st = getVariable(17102);
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
  { // 17103 PROGRAM0.DI_PROC.DI.DI_4.BITS[3].RELIABILITY
    st = getVariable(17103);
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
  { // 17104 PROGRAM0.DI_PROC.DI.DI_4.BITS[3]._INVERSED
    st = getVariable(17104);
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
  { // 17105 PROGRAM0.DI_PROC.DI.DI_4.BITS[4].VALUE
    st = getVariable(17105);
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
  { // 17106 PROGRAM0.DI_PROC.DI.DI_4.BITS[4].RELIABILITY
    st = getVariable(17106);
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
  { // 17107 PROGRAM0.DI_PROC.DI.DI_4.BITS[4]._INVERSED
    st = getVariable(17107);
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
  { // 17108 PROGRAM0.DI_PROC.DI.DI_4.BITS[5].VALUE
    st = getVariable(17108);
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
  { // 17109 PROGRAM0.DI_PROC.DI.DI_4.BITS[5].RELIABILITY
    st = getVariable(17109);
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
  { // 17110 PROGRAM0.DI_PROC.DI.DI_4.BITS[5]._INVERSED
    st = getVariable(17110);
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
  { // 17111 PROGRAM0.DI_PROC.DI.DI_4.BITS[6].VALUE
    st = getVariable(17111);
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
  { // 17112 PROGRAM0.DI_PROC.DI.DI_4.BITS[6].RELIABILITY
    st = getVariable(17112);
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
  { // 17113 PROGRAM0.DI_PROC.DI.DI_4.BITS[6]._INVERSED
    st = getVariable(17113);
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
  { // 17114 PROGRAM0.DI_PROC.DI.DI_4.BITS[7].VALUE
    st = getVariable(17114);
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
  { // 17115 PROGRAM0.DI_PROC.DI.DI_4.BITS[7].RELIABILITY
    st = getVariable(17115);
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
  { // 17116 PROGRAM0.DI_PROC.DI.DI_4.BITS[7]._INVERSED
    st = getVariable(17116);
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
  { // 17117 PROGRAM0.DI_PROC.DI.DI_4.BITS[8].VALUE
    st = getVariable(17117);
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
  { // 17118 PROGRAM0.DI_PROC.DI.DI_4.BITS[8].RELIABILITY
    st = getVariable(17118);
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
  { // 17119 PROGRAM0.DI_PROC.DI.DI_4.BITS[8]._INVERSED
    st = getVariable(17119);
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
  { // 17120 PROGRAM0.DI_PROC.DI.DI_4.BITS[9].VALUE
    st = getVariable(17120);
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
  { // 17121 PROGRAM0.DI_PROC.DI.DI_4.BITS[9].RELIABILITY
    st = getVariable(17121);
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
  { // 17122 PROGRAM0.DI_PROC.DI.DI_4.BITS[9]._INVERSED
    st = getVariable(17122);
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
  { // 17123 PROGRAM0.DI_PROC.DI.DI_4.BITS[10].VALUE
    st = getVariable(17123);
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
  { // 17124 PROGRAM0.DI_PROC.DI.DI_4.BITS[10].RELIABILITY
    st = getVariable(17124);
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
  { // 17125 PROGRAM0.DI_PROC.DI.DI_4.BITS[10]._INVERSED
    st = getVariable(17125);
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
  { // 17126 PROGRAM0.DI_PROC.DI.DI_4.BITS[11].VALUE
    st = getVariable(17126);
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
  { // 17127 PROGRAM0.DI_PROC.DI.DI_4.BITS[11].RELIABILITY
    st = getVariable(17127);
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
  { // 17128 PROGRAM0.DI_PROC.DI.DI_4.BITS[11]._INVERSED
    st = getVariable(17128);
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
  { // 17129 PROGRAM0.DI_PROC.DI.DI_4.BITS[12].VALUE
    st = getVariable(17129);
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
  { // 17130 PROGRAM0.DI_PROC.DI.DI_4.BITS[12].RELIABILITY
    st = getVariable(17130);
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
  { // 17131 PROGRAM0.DI_PROC.DI.DI_4.BITS[12]._INVERSED
    st = getVariable(17131);
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
  { // 17132 PROGRAM0.DI_PROC.DI.DI_4.BITS[13].VALUE
    st = getVariable(17132);
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
  { // 17133 PROGRAM0.DI_PROC.DI.DI_4.BITS[13].RELIABILITY
    st = getVariable(17133);
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
  { // 17134 PROGRAM0.DI_PROC.DI.DI_4.BITS[13]._INVERSED
    st = getVariable(17134);
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
  { // 17135 PROGRAM0.DI_PROC.DI.DI_4.BITS[14].VALUE
    st = getVariable(17135);
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
  { // 17136 PROGRAM0.DI_PROC.DI.DI_4.BITS[14].RELIABILITY
    st = getVariable(17136);
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
  { // 17137 PROGRAM0.DI_PROC.DI.DI_4.BITS[14]._INVERSED
    st = getVariable(17137);
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
  { // 17138 PROGRAM0.DI_PROC.DI.DI_4.BITS[15].VALUE
    st = getVariable(17138);
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
  { // 17139 PROGRAM0.DI_PROC.DI.DI_4.BITS[15].RELIABILITY
    st = getVariable(17139);
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
  { // 17140 PROGRAM0.DI_PROC.DI.DI_4.BITS[15]._INVERSED
    st = getVariable(17140);
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
  { // 17141 PROGRAM0.DI_PROC.DI.DI_4.BLCONNECT
    st = getVariable(17141);
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
  { // 17142 PROGRAM0.DI_PROC.DI.DI_5.IMIT
    st = getVariable(17142);
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
  { // 17143 PROGRAM0.DI_PROC.DI.DI_5.VALUE
    st = getVariable(17143);
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
  { // 17144 PROGRAM0.DI_PROC.DI.DI_5.RELIABILITY
    st = getVariable(17144);
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
  { // 17145 PROGRAM0.DI_PROC.DI.DI_5.BITS[0].VALUE
    st = getVariable(17145);
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
  { // 17146 PROGRAM0.DI_PROC.DI.DI_5.BITS[0].RELIABILITY
    st = getVariable(17146);
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
  { // 17147 PROGRAM0.DI_PROC.DI.DI_5.BITS[0]._INVERSED
    st = getVariable(17147);
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
  { // 17148 PROGRAM0.DI_PROC.DI.DI_5.BITS[1].VALUE
    st = getVariable(17148);
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
  { // 17149 PROGRAM0.DI_PROC.DI.DI_5.BITS[1].RELIABILITY
    st = getVariable(17149);
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
  { // 17150 PROGRAM0.DI_PROC.DI.DI_5.BITS[1]._INVERSED
    st = getVariable(17150);
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
  { // 17151 PROGRAM0.DI_PROC.DI.DI_5.BITS[2].VALUE
    st = getVariable(17151);
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
  { // 17152 PROGRAM0.DI_PROC.DI.DI_5.BITS[2].RELIABILITY
    st = getVariable(17152);
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
  { // 17153 PROGRAM0.DI_PROC.DI.DI_5.BITS[2]._INVERSED
    st = getVariable(17153);
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
  { // 17154 PROGRAM0.DI_PROC.DI.DI_5.BITS[3].VALUE
    st = getVariable(17154);
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
  { // 17155 PROGRAM0.DI_PROC.DI.DI_5.BITS[3].RELIABILITY
    st = getVariable(17155);
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
  { // 17156 PROGRAM0.DI_PROC.DI.DI_5.BITS[3]._INVERSED
    st = getVariable(17156);
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
  { // 17157 PROGRAM0.DI_PROC.DI.DI_5.BITS[4].VALUE
    st = getVariable(17157);
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
  { // 17158 PROGRAM0.DI_PROC.DI.DI_5.BITS[4].RELIABILITY
    st = getVariable(17158);
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
  { // 17159 PROGRAM0.DI_PROC.DI.DI_5.BITS[4]._INVERSED
    st = getVariable(17159);
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
  { // 17160 PROGRAM0.DI_PROC.DI.DI_5.BITS[5].VALUE
    st = getVariable(17160);
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
  { // 17161 PROGRAM0.DI_PROC.DI.DI_5.BITS[5].RELIABILITY
    st = getVariable(17161);
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
  { // 17162 PROGRAM0.DI_PROC.DI.DI_5.BITS[5]._INVERSED
    st = getVariable(17162);
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
  { // 17163 PROGRAM0.DI_PROC.DI.DI_5.BITS[6].VALUE
    st = getVariable(17163);
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
  { // 17164 PROGRAM0.DI_PROC.DI.DI_5.BITS[6].RELIABILITY
    st = getVariable(17164);
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
  { // 17165 PROGRAM0.DI_PROC.DI.DI_5.BITS[6]._INVERSED
    st = getVariable(17165);
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
  { // 17166 PROGRAM0.DI_PROC.DI.DI_5.BITS[7].VALUE
    st = getVariable(17166);
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
  { // 17167 PROGRAM0.DI_PROC.DI.DI_5.BITS[7].RELIABILITY
    st = getVariable(17167);
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
  { // 17168 PROGRAM0.DI_PROC.DI.DI_5.BITS[7]._INVERSED
    st = getVariable(17168);
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
  { // 17169 PROGRAM0.DI_PROC.DI.DI_5.BITS[8].VALUE
    st = getVariable(17169);
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
  { // 17170 PROGRAM0.DI_PROC.DI.DI_5.BITS[8].RELIABILITY
    st = getVariable(17170);
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
  { // 17171 PROGRAM0.DI_PROC.DI.DI_5.BITS[8]._INVERSED
    st = getVariable(17171);
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
  { // 17172 PROGRAM0.DI_PROC.DI.DI_5.BITS[9].VALUE
    st = getVariable(17172);
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
  { // 17173 PROGRAM0.DI_PROC.DI.DI_5.BITS[9].RELIABILITY
    st = getVariable(17173);
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
  { // 17174 PROGRAM0.DI_PROC.DI.DI_5.BITS[9]._INVERSED
    st = getVariable(17174);
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
  { // 17175 PROGRAM0.DI_PROC.DI.DI_5.BITS[10].VALUE
    st = getVariable(17175);
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
  { // 17176 PROGRAM0.DI_PROC.DI.DI_5.BITS[10].RELIABILITY
    st = getVariable(17176);
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
  { // 17177 PROGRAM0.DI_PROC.DI.DI_5.BITS[10]._INVERSED
    st = getVariable(17177);
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
  { // 17178 PROGRAM0.DI_PROC.DI.DI_5.BITS[11].VALUE
    st = getVariable(17178);
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
  { // 17179 PROGRAM0.DI_PROC.DI.DI_5.BITS[11].RELIABILITY
    st = getVariable(17179);
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
  { // 17180 PROGRAM0.DI_PROC.DI.DI_5.BITS[11]._INVERSED
    st = getVariable(17180);
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
  { // 17181 PROGRAM0.DI_PROC.DI.DI_5.BITS[12].VALUE
    st = getVariable(17181);
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
  { // 17182 PROGRAM0.DI_PROC.DI.DI_5.BITS[12].RELIABILITY
    st = getVariable(17182);
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
  { // 17183 PROGRAM0.DI_PROC.DI.DI_5.BITS[12]._INVERSED
    st = getVariable(17183);
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
  { // 17184 PROGRAM0.DI_PROC.DI.DI_5.BITS[13].VALUE
    st = getVariable(17184);
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
  { // 17185 PROGRAM0.DI_PROC.DI.DI_5.BITS[13].RELIABILITY
    st = getVariable(17185);
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
  { // 17186 PROGRAM0.DI_PROC.DI.DI_5.BITS[13]._INVERSED
    st = getVariable(17186);
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
  { // 17187 PROGRAM0.DI_PROC.DI.DI_5.BITS[14].VALUE
    st = getVariable(17187);
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
  { // 17188 PROGRAM0.DI_PROC.DI.DI_5.BITS[14].RELIABILITY
    st = getVariable(17188);
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
  { // 17189 PROGRAM0.DI_PROC.DI.DI_5.BITS[14]._INVERSED
    st = getVariable(17189);
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
  { // 17190 PROGRAM0.DI_PROC.DI.DI_5.BITS[15].VALUE
    st = getVariable(17190);
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
  { // 17191 PROGRAM0.DI_PROC.DI.DI_5.BITS[15].RELIABILITY
    st = getVariable(17191);
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
  { // 17192 PROGRAM0.DI_PROC.DI.DI_5.BITS[15]._INVERSED
    st = getVariable(17192);
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
  { // 17193 PROGRAM0.DI_PROC.DI.DI_5.BLCONNECT
    st = getVariable(17193);
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
  { // 17194 PROGRAM0.DI_PROC.DI.DI_6.IMIT
    st = getVariable(17194);
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
  { // 17195 PROGRAM0.DI_PROC.DI.DI_6.VALUE
    st = getVariable(17195);
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
  { // 17196 PROGRAM0.DI_PROC.DI.DI_6.RELIABILITY
    st = getVariable(17196);
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
  { // 17197 PROGRAM0.DI_PROC.DI.DI_6.BITS[0].VALUE
    st = getVariable(17197);
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
  { // 17198 PROGRAM0.DI_PROC.DI.DI_6.BITS[0].RELIABILITY
    st = getVariable(17198);
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
  { // 17199 PROGRAM0.DI_PROC.DI.DI_6.BITS[0]._INVERSED
    st = getVariable(17199);
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
  { // 17200 PROGRAM0.DI_PROC.DI.DI_6.BITS[1].VALUE
    st = getVariable(17200);
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
  { // 17201 PROGRAM0.DI_PROC.DI.DI_6.BITS[1].RELIABILITY
    st = getVariable(17201);
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
  { // 17202 PROGRAM0.DI_PROC.DI.DI_6.BITS[1]._INVERSED
    st = getVariable(17202);
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
  { // 17203 PROGRAM0.DI_PROC.DI.DI_6.BITS[2].VALUE
    st = getVariable(17203);
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
  { // 17204 PROGRAM0.DI_PROC.DI.DI_6.BITS[2].RELIABILITY
    st = getVariable(17204);
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
  { // 17205 PROGRAM0.DI_PROC.DI.DI_6.BITS[2]._INVERSED
    st = getVariable(17205);
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
  { // 17206 PROGRAM0.DI_PROC.DI.DI_6.BITS[3].VALUE
    st = getVariable(17206);
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
  { // 17207 PROGRAM0.DI_PROC.DI.DI_6.BITS[3].RELIABILITY
    st = getVariable(17207);
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
  { // 17208 PROGRAM0.DI_PROC.DI.DI_6.BITS[3]._INVERSED
    st = getVariable(17208);
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
  { // 17209 PROGRAM0.DI_PROC.DI.DI_6.BITS[4].VALUE
    st = getVariable(17209);
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
  { // 17210 PROGRAM0.DI_PROC.DI.DI_6.BITS[4].RELIABILITY
    st = getVariable(17210);
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
  { // 17211 PROGRAM0.DI_PROC.DI.DI_6.BITS[4]._INVERSED
    st = getVariable(17211);
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
  { // 17212 PROGRAM0.DI_PROC.DI.DI_6.BITS[5].VALUE
    st = getVariable(17212);
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
  { // 17213 PROGRAM0.DI_PROC.DI.DI_6.BITS[5].RELIABILITY
    st = getVariable(17213);
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
  { // 17214 PROGRAM0.DI_PROC.DI.DI_6.BITS[5]._INVERSED
    st = getVariable(17214);
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
  { // 17215 PROGRAM0.DI_PROC.DI.DI_6.BITS[6].VALUE
    st = getVariable(17215);
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
  { // 17216 PROGRAM0.DI_PROC.DI.DI_6.BITS[6].RELIABILITY
    st = getVariable(17216);
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
  { // 17217 PROGRAM0.DI_PROC.DI.DI_6.BITS[6]._INVERSED
    st = getVariable(17217);
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
  { // 17218 PROGRAM0.DI_PROC.DI.DI_6.BITS[7].VALUE
    st = getVariable(17218);
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
  { // 17219 PROGRAM0.DI_PROC.DI.DI_6.BITS[7].RELIABILITY
    st = getVariable(17219);
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
  { // 17220 PROGRAM0.DI_PROC.DI.DI_6.BITS[7]._INVERSED
    st = getVariable(17220);
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
  { // 17221 PROGRAM0.DI_PROC.DI.DI_6.BITS[8].VALUE
    st = getVariable(17221);
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
  { // 17222 PROGRAM0.DI_PROC.DI.DI_6.BITS[8].RELIABILITY
    st = getVariable(17222);
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
  { // 17223 PROGRAM0.DI_PROC.DI.DI_6.BITS[8]._INVERSED
    st = getVariable(17223);
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
  { // 17224 PROGRAM0.DI_PROC.DI.DI_6.BITS[9].VALUE
    st = getVariable(17224);
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
  { // 17225 PROGRAM0.DI_PROC.DI.DI_6.BITS[9].RELIABILITY
    st = getVariable(17225);
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
  { // 17226 PROGRAM0.DI_PROC.DI.DI_6.BITS[9]._INVERSED
    st = getVariable(17226);
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
  { // 17227 PROGRAM0.DI_PROC.DI.DI_6.BITS[10].VALUE
    st = getVariable(17227);
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
  { // 17228 PROGRAM0.DI_PROC.DI.DI_6.BITS[10].RELIABILITY
    st = getVariable(17228);
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
  { // 17229 PROGRAM0.DI_PROC.DI.DI_6.BITS[10]._INVERSED
    st = getVariable(17229);
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
  { // 17230 PROGRAM0.DI_PROC.DI.DI_6.BITS[11].VALUE
    st = getVariable(17230);
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
  { // 17231 PROGRAM0.DI_PROC.DI.DI_6.BITS[11].RELIABILITY
    st = getVariable(17231);
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
  { // 17232 PROGRAM0.DI_PROC.DI.DI_6.BITS[11]._INVERSED
    st = getVariable(17232);
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
  { // 17233 PROGRAM0.DI_PROC.DI.DI_6.BITS[12].VALUE
    st = getVariable(17233);
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
  { // 17234 PROGRAM0.DI_PROC.DI.DI_6.BITS[12].RELIABILITY
    st = getVariable(17234);
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
  { // 17235 PROGRAM0.DI_PROC.DI.DI_6.BITS[12]._INVERSED
    st = getVariable(17235);
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
  { // 17236 PROGRAM0.DI_PROC.DI.DI_6.BITS[13].VALUE
    st = getVariable(17236);
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
  { // 17237 PROGRAM0.DI_PROC.DI.DI_6.BITS[13].RELIABILITY
    st = getVariable(17237);
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
  { // 17238 PROGRAM0.DI_PROC.DI.DI_6.BITS[13]._INVERSED
    st = getVariable(17238);
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
  { // 17239 PROGRAM0.DI_PROC.DI.DI_6.BITS[14].VALUE
    st = getVariable(17239);
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
  { // 17240 PROGRAM0.DI_PROC.DI.DI_6.BITS[14].RELIABILITY
    st = getVariable(17240);
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
  { // 17241 PROGRAM0.DI_PROC.DI.DI_6.BITS[14]._INVERSED
    st = getVariable(17241);
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
  { // 17242 PROGRAM0.DI_PROC.DI.DI_6.BITS[15].VALUE
    st = getVariable(17242);
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
  { // 17243 PROGRAM0.DI_PROC.DI.DI_6.BITS[15].RELIABILITY
    st = getVariable(17243);
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
  { // 17244 PROGRAM0.DI_PROC.DI.DI_6.BITS[15]._INVERSED
    st = getVariable(17244);
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
  { // 17245 PROGRAM0.DI_PROC.DI.DI_6.BLCONNECT
    st = getVariable(17245);
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
  { // 17246 PROGRAM0.DI_PROC.DI.DI_7.IMIT
    st = getVariable(17246);
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
  { // 17247 PROGRAM0.DI_PROC.DI.DI_7.VALUE
    st = getVariable(17247);
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
  { // 17248 PROGRAM0.DI_PROC.DI.DI_7.RELIABILITY
    st = getVariable(17248);
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
  { // 17249 PROGRAM0.DI_PROC.DI.DI_7.BITS[0].VALUE
    st = getVariable(17249);
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
  { // 17250 PROGRAM0.DI_PROC.DI.DI_7.BITS[0].RELIABILITY
    st = getVariable(17250);
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
  { // 17251 PROGRAM0.DI_PROC.DI.DI_7.BITS[0]._INVERSED
    st = getVariable(17251);
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
  { // 17252 PROGRAM0.DI_PROC.DI.DI_7.BITS[1].VALUE
    st = getVariable(17252);
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
  { // 17253 PROGRAM0.DI_PROC.DI.DI_7.BITS[1].RELIABILITY
    st = getVariable(17253);
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
  { // 17254 PROGRAM0.DI_PROC.DI.DI_7.BITS[1]._INVERSED
    st = getVariable(17254);
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
  { // 17255 PROGRAM0.DI_PROC.DI.DI_7.BITS[2].VALUE
    st = getVariable(17255);
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
  { // 17256 PROGRAM0.DI_PROC.DI.DI_7.BITS[2].RELIABILITY
    st = getVariable(17256);
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
  { // 17257 PROGRAM0.DI_PROC.DI.DI_7.BITS[2]._INVERSED
    st = getVariable(17257);
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
  { // 17258 PROGRAM0.DI_PROC.DI.DI_7.BITS[3].VALUE
    st = getVariable(17258);
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
  { // 17259 PROGRAM0.DI_PROC.DI.DI_7.BITS[3].RELIABILITY
    st = getVariable(17259);
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
  { // 17260 PROGRAM0.DI_PROC.DI.DI_7.BITS[3]._INVERSED
    st = getVariable(17260);
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
  { // 17261 PROGRAM0.DI_PROC.DI.DI_7.BITS[4].VALUE
    st = getVariable(17261);
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
  { // 17262 PROGRAM0.DI_PROC.DI.DI_7.BITS[4].RELIABILITY
    st = getVariable(17262);
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
  { // 17263 PROGRAM0.DI_PROC.DI.DI_7.BITS[4]._INVERSED
    st = getVariable(17263);
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
  { // 17264 PROGRAM0.DI_PROC.DI.DI_7.BITS[5].VALUE
    st = getVariable(17264);
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
  { // 17265 PROGRAM0.DI_PROC.DI.DI_7.BITS[5].RELIABILITY
    st = getVariable(17265);
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
  { // 17266 PROGRAM0.DI_PROC.DI.DI_7.BITS[5]._INVERSED
    st = getVariable(17266);
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
  { // 17267 PROGRAM0.DI_PROC.DI.DI_7.BITS[6].VALUE
    st = getVariable(17267);
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
  { // 17268 PROGRAM0.DI_PROC.DI.DI_7.BITS[6].RELIABILITY
    st = getVariable(17268);
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
  { // 17269 PROGRAM0.DI_PROC.DI.DI_7.BITS[6]._INVERSED
    st = getVariable(17269);
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
  { // 17270 PROGRAM0.DI_PROC.DI.DI_7.BITS[7].VALUE
    st = getVariable(17270);
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
  { // 17271 PROGRAM0.DI_PROC.DI.DI_7.BITS[7].RELIABILITY
    st = getVariable(17271);
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
  { // 17272 PROGRAM0.DI_PROC.DI.DI_7.BITS[7]._INVERSED
    st = getVariable(17272);
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
  { // 17273 PROGRAM0.DI_PROC.DI.DI_7.BITS[8].VALUE
    st = getVariable(17273);
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
  { // 17274 PROGRAM0.DI_PROC.DI.DI_7.BITS[8].RELIABILITY
    st = getVariable(17274);
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
  { // 17275 PROGRAM0.DI_PROC.DI.DI_7.BITS[8]._INVERSED
    st = getVariable(17275);
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
  { // 17276 PROGRAM0.DI_PROC.DI.DI_7.BITS[9].VALUE
    st = getVariable(17276);
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
  { // 17277 PROGRAM0.DI_PROC.DI.DI_7.BITS[9].RELIABILITY
    st = getVariable(17277);
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
  { // 17278 PROGRAM0.DI_PROC.DI.DI_7.BITS[9]._INVERSED
    st = getVariable(17278);
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
  { // 17279 PROGRAM0.DI_PROC.DI.DI_7.BITS[10].VALUE
    st = getVariable(17279);
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
  { // 17280 PROGRAM0.DI_PROC.DI.DI_7.BITS[10].RELIABILITY
    st = getVariable(17280);
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
  { // 17281 PROGRAM0.DI_PROC.DI.DI_7.BITS[10]._INVERSED
    st = getVariable(17281);
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
  { // 17282 PROGRAM0.DI_PROC.DI.DI_7.BITS[11].VALUE
    st = getVariable(17282);
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
  { // 17283 PROGRAM0.DI_PROC.DI.DI_7.BITS[11].RELIABILITY
    st = getVariable(17283);
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
  { // 17284 PROGRAM0.DI_PROC.DI.DI_7.BITS[11]._INVERSED
    st = getVariable(17284);
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
  { // 17285 PROGRAM0.DI_PROC.DI.DI_7.BITS[12].VALUE
    st = getVariable(17285);
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
  { // 17286 PROGRAM0.DI_PROC.DI.DI_7.BITS[12].RELIABILITY
    st = getVariable(17286);
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
  { // 17287 PROGRAM0.DI_PROC.DI.DI_7.BITS[12]._INVERSED
    st = getVariable(17287);
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
  { // 17288 PROGRAM0.DI_PROC.DI.DI_7.BITS[13].VALUE
    st = getVariable(17288);
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
  { // 17289 PROGRAM0.DI_PROC.DI.DI_7.BITS[13].RELIABILITY
    st = getVariable(17289);
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
  { // 17290 PROGRAM0.DI_PROC.DI.DI_7.BITS[13]._INVERSED
    st = getVariable(17290);
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
  { // 17291 PROGRAM0.DI_PROC.DI.DI_7.BITS[14].VALUE
    st = getVariable(17291);
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
  { // 17292 PROGRAM0.DI_PROC.DI.DI_7.BITS[14].RELIABILITY
    st = getVariable(17292);
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
  { // 17293 PROGRAM0.DI_PROC.DI.DI_7.BITS[14]._INVERSED
    st = getVariable(17293);
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
  { // 17294 PROGRAM0.DI_PROC.DI.DI_7.BITS[15].VALUE
    st = getVariable(17294);
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
  { // 17295 PROGRAM0.DI_PROC.DI.DI_7.BITS[15].RELIABILITY
    st = getVariable(17295);
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
  { // 17296 PROGRAM0.DI_PROC.DI.DI_7.BITS[15]._INVERSED
    st = getVariable(17296);
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
  { // 17297 PROGRAM0.DI_PROC.DI.DI_7.BLCONNECT
    st = getVariable(17297);
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
  { // 17298 PROGRAM0.DI_PROC.DI.DI_8.IMIT
    st = getVariable(17298);
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
  { // 17299 PROGRAM0.DI_PROC.DI.DI_8.VALUE
    st = getVariable(17299);
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
  { // 17300 PROGRAM0.DI_PROC.DI.DI_8.RELIABILITY
    st = getVariable(17300);
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
  { // 17301 PROGRAM0.DI_PROC.DI.DI_8.BITS[0].VALUE
    st = getVariable(17301);
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
  { // 17302 PROGRAM0.DI_PROC.DI.DI_8.BITS[0].RELIABILITY
    st = getVariable(17302);
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
  { // 17303 PROGRAM0.DI_PROC.DI.DI_8.BITS[0]._INVERSED
    st = getVariable(17303);
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
  { // 17304 PROGRAM0.DI_PROC.DI.DI_8.BITS[1].VALUE
    st = getVariable(17304);
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
  { // 17305 PROGRAM0.DI_PROC.DI.DI_8.BITS[1].RELIABILITY
    st = getVariable(17305);
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
  { // 17306 PROGRAM0.DI_PROC.DI.DI_8.BITS[1]._INVERSED
    st = getVariable(17306);
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
  { // 17307 PROGRAM0.DI_PROC.DI.DI_8.BITS[2].VALUE
    st = getVariable(17307);
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
  { // 17308 PROGRAM0.DI_PROC.DI.DI_8.BITS[2].RELIABILITY
    st = getVariable(17308);
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
  { // 17309 PROGRAM0.DI_PROC.DI.DI_8.BITS[2]._INVERSED
    st = getVariable(17309);
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
  { // 17310 PROGRAM0.DI_PROC.DI.DI_8.BITS[3].VALUE
    st = getVariable(17310);
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
  { // 17311 PROGRAM0.DI_PROC.DI.DI_8.BITS[3].RELIABILITY
    st = getVariable(17311);
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
  { // 17312 PROGRAM0.DI_PROC.DI.DI_8.BITS[3]._INVERSED
    st = getVariable(17312);
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
  { // 17313 PROGRAM0.DI_PROC.DI.DI_8.BITS[4].VALUE
    st = getVariable(17313);
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
  { // 17314 PROGRAM0.DI_PROC.DI.DI_8.BITS[4].RELIABILITY
    st = getVariable(17314);
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
  { // 17315 PROGRAM0.DI_PROC.DI.DI_8.BITS[4]._INVERSED
    st = getVariable(17315);
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
  { // 17316 PROGRAM0.DI_PROC.DI.DI_8.BITS[5].VALUE
    st = getVariable(17316);
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
  { // 17317 PROGRAM0.DI_PROC.DI.DI_8.BITS[5].RELIABILITY
    st = getVariable(17317);
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
  { // 17318 PROGRAM0.DI_PROC.DI.DI_8.BITS[5]._INVERSED
    st = getVariable(17318);
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
  { // 17319 PROGRAM0.DI_PROC.DI.DI_8.BITS[6].VALUE
    st = getVariable(17319);
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
  { // 17320 PROGRAM0.DI_PROC.DI.DI_8.BITS[6].RELIABILITY
    st = getVariable(17320);
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
  { // 17321 PROGRAM0.DI_PROC.DI.DI_8.BITS[6]._INVERSED
    st = getVariable(17321);
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
  { // 17322 PROGRAM0.DI_PROC.DI.DI_8.BITS[7].VALUE
    st = getVariable(17322);
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
  { // 17323 PROGRAM0.DI_PROC.DI.DI_8.BITS[7].RELIABILITY
    st = getVariable(17323);
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
  { // 17324 PROGRAM0.DI_PROC.DI.DI_8.BITS[7]._INVERSED
    st = getVariable(17324);
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
  { // 17325 PROGRAM0.DI_PROC.DI.DI_8.BITS[8].VALUE
    st = getVariable(17325);
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
  { // 17326 PROGRAM0.DI_PROC.DI.DI_8.BITS[8].RELIABILITY
    st = getVariable(17326);
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
  { // 17327 PROGRAM0.DI_PROC.DI.DI_8.BITS[8]._INVERSED
    st = getVariable(17327);
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
  { // 17328 PROGRAM0.DI_PROC.DI.DI_8.BITS[9].VALUE
    st = getVariable(17328);
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
  { // 17329 PROGRAM0.DI_PROC.DI.DI_8.BITS[9].RELIABILITY
    st = getVariable(17329);
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
  { // 17330 PROGRAM0.DI_PROC.DI.DI_8.BITS[9]._INVERSED
    st = getVariable(17330);
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
  { // 17331 PROGRAM0.DI_PROC.DI.DI_8.BITS[10].VALUE
    st = getVariable(17331);
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
  { // 17332 PROGRAM0.DI_PROC.DI.DI_8.BITS[10].RELIABILITY
    st = getVariable(17332);
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
  { // 17333 PROGRAM0.DI_PROC.DI.DI_8.BITS[10]._INVERSED
    st = getVariable(17333);
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
  { // 17334 PROGRAM0.DI_PROC.DI.DI_8.BITS[11].VALUE
    st = getVariable(17334);
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
  { // 17335 PROGRAM0.DI_PROC.DI.DI_8.BITS[11].RELIABILITY
    st = getVariable(17335);
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
  { // 17336 PROGRAM0.DI_PROC.DI.DI_8.BITS[11]._INVERSED
    st = getVariable(17336);
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
  { // 17337 PROGRAM0.DI_PROC.DI.DI_8.BITS[12].VALUE
    st = getVariable(17337);
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
  { // 17338 PROGRAM0.DI_PROC.DI.DI_8.BITS[12].RELIABILITY
    st = getVariable(17338);
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
  { // 17339 PROGRAM0.DI_PROC.DI.DI_8.BITS[12]._INVERSED
    st = getVariable(17339);
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
  { // 17340 PROGRAM0.DI_PROC.DI.DI_8.BITS[13].VALUE
    st = getVariable(17340);
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
  { // 17341 PROGRAM0.DI_PROC.DI.DI_8.BITS[13].RELIABILITY
    st = getVariable(17341);
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
  { // 17342 PROGRAM0.DI_PROC.DI.DI_8.BITS[13]._INVERSED
    st = getVariable(17342);
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
  { // 17343 PROGRAM0.DI_PROC.DI.DI_8.BITS[14].VALUE
    st = getVariable(17343);
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
  { // 17344 PROGRAM0.DI_PROC.DI.DI_8.BITS[14].RELIABILITY
    st = getVariable(17344);
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
  { // 17345 PROGRAM0.DI_PROC.DI.DI_8.BITS[14]._INVERSED
    st = getVariable(17345);
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
  { // 17346 PROGRAM0.DI_PROC.DI.DI_8.BITS[15].VALUE
    st = getVariable(17346);
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
  { // 17347 PROGRAM0.DI_PROC.DI.DI_8.BITS[15].RELIABILITY
    st = getVariable(17347);
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
  { // 17348 PROGRAM0.DI_PROC.DI.DI_8.BITS[15]._INVERSED
    st = getVariable(17348);
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
  { // 17349 PROGRAM0.DI_PROC.DI.DI_8.BLCONNECT
    st = getVariable(17349);
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
  { // 17350 PROGRAM0.DI_PROC.DI.DI_9.IMIT
    st = getVariable(17350);
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
  { // 17351 PROGRAM0.DI_PROC.DI.DI_9.VALUE
    st = getVariable(17351);
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
  { // 17352 PROGRAM0.DI_PROC.DI.DI_9.RELIABILITY
    st = getVariable(17352);
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
  { // 17353 PROGRAM0.DI_PROC.DI.DI_9.BITS[0].VALUE
    st = getVariable(17353);
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
  { // 17354 PROGRAM0.DI_PROC.DI.DI_9.BITS[0].RELIABILITY
    st = getVariable(17354);
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
  { // 17355 PROGRAM0.DI_PROC.DI.DI_9.BITS[0]._INVERSED
    st = getVariable(17355);
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
  { // 17356 PROGRAM0.DI_PROC.DI.DI_9.BITS[1].VALUE
    st = getVariable(17356);
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
  { // 17357 PROGRAM0.DI_PROC.DI.DI_9.BITS[1].RELIABILITY
    st = getVariable(17357);
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
  { // 17358 PROGRAM0.DI_PROC.DI.DI_9.BITS[1]._INVERSED
    st = getVariable(17358);
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
  { // 17359 PROGRAM0.DI_PROC.DI.DI_9.BITS[2].VALUE
    st = getVariable(17359);
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
  { // 17360 PROGRAM0.DI_PROC.DI.DI_9.BITS[2].RELIABILITY
    st = getVariable(17360);
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
  { // 17361 PROGRAM0.DI_PROC.DI.DI_9.BITS[2]._INVERSED
    st = getVariable(17361);
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
  { // 17362 PROGRAM0.DI_PROC.DI.DI_9.BITS[3].VALUE
    st = getVariable(17362);
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
  { // 17363 PROGRAM0.DI_PROC.DI.DI_9.BITS[3].RELIABILITY
    st = getVariable(17363);
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
  { // 17364 PROGRAM0.DI_PROC.DI.DI_9.BITS[3]._INVERSED
    st = getVariable(17364);
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
  { // 17365 PROGRAM0.DI_PROC.DI.DI_9.BITS[4].VALUE
    st = getVariable(17365);
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
  { // 17366 PROGRAM0.DI_PROC.DI.DI_9.BITS[4].RELIABILITY
    st = getVariable(17366);
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
  { // 17367 PROGRAM0.DI_PROC.DI.DI_9.BITS[4]._INVERSED
    st = getVariable(17367);
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
  { // 17368 PROGRAM0.DI_PROC.DI.DI_9.BITS[5].VALUE
    st = getVariable(17368);
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
  { // 17369 PROGRAM0.DI_PROC.DI.DI_9.BITS[5].RELIABILITY
    st = getVariable(17369);
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
  { // 17370 PROGRAM0.DI_PROC.DI.DI_9.BITS[5]._INVERSED
    st = getVariable(17370);
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
  { // 17371 PROGRAM0.DI_PROC.DI.DI_9.BITS[6].VALUE
    st = getVariable(17371);
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
  { // 17372 PROGRAM0.DI_PROC.DI.DI_9.BITS[6].RELIABILITY
    st = getVariable(17372);
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
  { // 17373 PROGRAM0.DI_PROC.DI.DI_9.BITS[6]._INVERSED
    st = getVariable(17373);
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
  { // 17374 PROGRAM0.DI_PROC.DI.DI_9.BITS[7].VALUE
    st = getVariable(17374);
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
  { // 17375 PROGRAM0.DI_PROC.DI.DI_9.BITS[7].RELIABILITY
    st = getVariable(17375);
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
  { // 17376 PROGRAM0.DI_PROC.DI.DI_9.BITS[7]._INVERSED
    st = getVariable(17376);
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
  { // 17377 PROGRAM0.DI_PROC.DI.DI_9.BITS[8].VALUE
    st = getVariable(17377);
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
  { // 17378 PROGRAM0.DI_PROC.DI.DI_9.BITS[8].RELIABILITY
    st = getVariable(17378);
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
  { // 17379 PROGRAM0.DI_PROC.DI.DI_9.BITS[8]._INVERSED
    st = getVariable(17379);
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
  { // 17380 PROGRAM0.DI_PROC.DI.DI_9.BITS[9].VALUE
    st = getVariable(17380);
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
  { // 17381 PROGRAM0.DI_PROC.DI.DI_9.BITS[9].RELIABILITY
    st = getVariable(17381);
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
  { // 17382 PROGRAM0.DI_PROC.DI.DI_9.BITS[9]._INVERSED
    st = getVariable(17382);
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
  { // 17383 PROGRAM0.DI_PROC.DI.DI_9.BITS[10].VALUE
    st = getVariable(17383);
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
  { // 17384 PROGRAM0.DI_PROC.DI.DI_9.BITS[10].RELIABILITY
    st = getVariable(17384);
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
  { // 17385 PROGRAM0.DI_PROC.DI.DI_9.BITS[10]._INVERSED
    st = getVariable(17385);
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
  { // 17386 PROGRAM0.DI_PROC.DI.DI_9.BITS[11].VALUE
    st = getVariable(17386);
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
  { // 17387 PROGRAM0.DI_PROC.DI.DI_9.BITS[11].RELIABILITY
    st = getVariable(17387);
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
  { // 17388 PROGRAM0.DI_PROC.DI.DI_9.BITS[11]._INVERSED
    st = getVariable(17388);
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
  { // 17389 PROGRAM0.DI_PROC.DI.DI_9.BITS[12].VALUE
    st = getVariable(17389);
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
  { // 17390 PROGRAM0.DI_PROC.DI.DI_9.BITS[12].RELIABILITY
    st = getVariable(17390);
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
  { // 17391 PROGRAM0.DI_PROC.DI.DI_9.BITS[12]._INVERSED
    st = getVariable(17391);
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
  { // 17392 PROGRAM0.DI_PROC.DI.DI_9.BITS[13].VALUE
    st = getVariable(17392);
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
  { // 17393 PROGRAM0.DI_PROC.DI.DI_9.BITS[13].RELIABILITY
    st = getVariable(17393);
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
  { // 17394 PROGRAM0.DI_PROC.DI.DI_9.BITS[13]._INVERSED
    st = getVariable(17394);
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
  { // 17395 PROGRAM0.DI_PROC.DI.DI_9.BITS[14].VALUE
    st = getVariable(17395);
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
  { // 17396 PROGRAM0.DI_PROC.DI.DI_9.BITS[14].RELIABILITY
    st = getVariable(17396);
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
  { // 17397 PROGRAM0.DI_PROC.DI.DI_9.BITS[14]._INVERSED
    st = getVariable(17397);
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
  { // 17398 PROGRAM0.DI_PROC.DI.DI_9.BITS[15].VALUE
    st = getVariable(17398);
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
  { // 17399 PROGRAM0.DI_PROC.DI.DI_9.BITS[15].RELIABILITY
    st = getVariable(17399);
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
  { // 17400 PROGRAM0.DI_PROC.DI.DI_9.BITS[15]._INVERSED
    st = getVariable(17400);
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
  { // 17401 PROGRAM0.DI_PROC.DI.DI_9.BLCONNECT
    st = getVariable(17401);
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
  { // 17402 PROGRAM0.DI_PROC.DI.DI_10.IMIT
    st = getVariable(17402);
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
  { // 17403 PROGRAM0.DI_PROC.DI.DI_10.VALUE
    st = getVariable(17403);
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
  { // 17404 PROGRAM0.DI_PROC.DI.DI_10.RELIABILITY
    st = getVariable(17404);
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
  { // 17405 PROGRAM0.DI_PROC.DI.DI_10.BITS[0].VALUE
    st = getVariable(17405);
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
  { // 17406 PROGRAM0.DI_PROC.DI.DI_10.BITS[0].RELIABILITY
    st = getVariable(17406);
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
  { // 17407 PROGRAM0.DI_PROC.DI.DI_10.BITS[0]._INVERSED
    st = getVariable(17407);
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
  { // 17408 PROGRAM0.DI_PROC.DI.DI_10.BITS[1].VALUE
    st = getVariable(17408);
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
  { // 17409 PROGRAM0.DI_PROC.DI.DI_10.BITS[1].RELIABILITY
    st = getVariable(17409);
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
  { // 17410 PROGRAM0.DI_PROC.DI.DI_10.BITS[1]._INVERSED
    st = getVariable(17410);
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
  { // 17411 PROGRAM0.DI_PROC.DI.DI_10.BITS[2].VALUE
    st = getVariable(17411);
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
  { // 17412 PROGRAM0.DI_PROC.DI.DI_10.BITS[2].RELIABILITY
    st = getVariable(17412);
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
  { // 17413 PROGRAM0.DI_PROC.DI.DI_10.BITS[2]._INVERSED
    st = getVariable(17413);
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
  { // 17414 PROGRAM0.DI_PROC.DI.DI_10.BITS[3].VALUE
    st = getVariable(17414);
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
  { // 17415 PROGRAM0.DI_PROC.DI.DI_10.BITS[3].RELIABILITY
    st = getVariable(17415);
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
  { // 17416 PROGRAM0.DI_PROC.DI.DI_10.BITS[3]._INVERSED
    st = getVariable(17416);
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
  { // 17417 PROGRAM0.DI_PROC.DI.DI_10.BITS[4].VALUE
    st = getVariable(17417);
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
  { // 17418 PROGRAM0.DI_PROC.DI.DI_10.BITS[4].RELIABILITY
    st = getVariable(17418);
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
  { // 17419 PROGRAM0.DI_PROC.DI.DI_10.BITS[4]._INVERSED
    st = getVariable(17419);
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
  { // 17420 PROGRAM0.DI_PROC.DI.DI_10.BITS[5].VALUE
    st = getVariable(17420);
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
  { // 17421 PROGRAM0.DI_PROC.DI.DI_10.BITS[5].RELIABILITY
    st = getVariable(17421);
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
  { // 17422 PROGRAM0.DI_PROC.DI.DI_10.BITS[5]._INVERSED
    st = getVariable(17422);
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
  { // 17423 PROGRAM0.DI_PROC.DI.DI_10.BITS[6].VALUE
    st = getVariable(17423);
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
  { // 17424 PROGRAM0.DI_PROC.DI.DI_10.BITS[6].RELIABILITY
    st = getVariable(17424);
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
  { // 17425 PROGRAM0.DI_PROC.DI.DI_10.BITS[6]._INVERSED
    st = getVariable(17425);
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
  { // 17426 PROGRAM0.DI_PROC.DI.DI_10.BITS[7].VALUE
    st = getVariable(17426);
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
  { // 17427 PROGRAM0.DI_PROC.DI.DI_10.BITS[7].RELIABILITY
    st = getVariable(17427);
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
  { // 17428 PROGRAM0.DI_PROC.DI.DI_10.BITS[7]._INVERSED
    st = getVariable(17428);
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
  { // 17429 PROGRAM0.DI_PROC.DI.DI_10.BITS[8].VALUE
    st = getVariable(17429);
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
  { // 17430 PROGRAM0.DI_PROC.DI.DI_10.BITS[8].RELIABILITY
    st = getVariable(17430);
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
  { // 17431 PROGRAM0.DI_PROC.DI.DI_10.BITS[8]._INVERSED
    st = getVariable(17431);
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
  { // 17432 PROGRAM0.DI_PROC.DI.DI_10.BITS[9].VALUE
    st = getVariable(17432);
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
  { // 17433 PROGRAM0.DI_PROC.DI.DI_10.BITS[9].RELIABILITY
    st = getVariable(17433);
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
  { // 17434 PROGRAM0.DI_PROC.DI.DI_10.BITS[9]._INVERSED
    st = getVariable(17434);
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
  { // 17435 PROGRAM0.DI_PROC.DI.DI_10.BITS[10].VALUE
    st = getVariable(17435);
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
  { // 17436 PROGRAM0.DI_PROC.DI.DI_10.BITS[10].RELIABILITY
    st = getVariable(17436);
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
  { // 17437 PROGRAM0.DI_PROC.DI.DI_10.BITS[10]._INVERSED
    st = getVariable(17437);
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
  { // 17438 PROGRAM0.DI_PROC.DI.DI_10.BITS[11].VALUE
    st = getVariable(17438);
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
  { // 17439 PROGRAM0.DI_PROC.DI.DI_10.BITS[11].RELIABILITY
    st = getVariable(17439);
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
  { // 17440 PROGRAM0.DI_PROC.DI.DI_10.BITS[11]._INVERSED
    st = getVariable(17440);
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
  { // 17441 PROGRAM0.DI_PROC.DI.DI_10.BITS[12].VALUE
    st = getVariable(17441);
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
  { // 17442 PROGRAM0.DI_PROC.DI.DI_10.BITS[12].RELIABILITY
    st = getVariable(17442);
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
  { // 17443 PROGRAM0.DI_PROC.DI.DI_10.BITS[12]._INVERSED
    st = getVariable(17443);
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
  { // 17444 PROGRAM0.DI_PROC.DI.DI_10.BITS[13].VALUE
    st = getVariable(17444);
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
  { // 17445 PROGRAM0.DI_PROC.DI.DI_10.BITS[13].RELIABILITY
    st = getVariable(17445);
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
  { // 17446 PROGRAM0.DI_PROC.DI.DI_10.BITS[13]._INVERSED
    st = getVariable(17446);
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
  { // 17447 PROGRAM0.DI_PROC.DI.DI_10.BITS[14].VALUE
    st = getVariable(17447);
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
  { // 17448 PROGRAM0.DI_PROC.DI.DI_10.BITS[14].RELIABILITY
    st = getVariable(17448);
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
  { // 17449 PROGRAM0.DI_PROC.DI.DI_10.BITS[14]._INVERSED
    st = getVariable(17449);
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
  { // 17450 PROGRAM0.DI_PROC.DI.DI_10.BITS[15].VALUE
    st = getVariable(17450);
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
  { // 17451 PROGRAM0.DI_PROC.DI.DI_10.BITS[15].RELIABILITY
    st = getVariable(17451);
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
  { // 17452 PROGRAM0.DI_PROC.DI.DI_10.BITS[15]._INVERSED
    st = getVariable(17452);
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
  { // 17453 PROGRAM0.DI_PROC.DI.DI_10.BLCONNECT
    st = getVariable(17453);
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
  { // 17454 PROGRAM0.DI_PROC.DI.DI_11.IMIT
    st = getVariable(17454);
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
  { // 17455 PROGRAM0.DI_PROC.DI.DI_11.VALUE
    st = getVariable(17455);
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
  { // 17456 PROGRAM0.DI_PROC.DI.DI_11.RELIABILITY
    st = getVariable(17456);
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
  { // 17457 PROGRAM0.DI_PROC.DI.DI_11.BITS[0].VALUE
    st = getVariable(17457);
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
  { // 17458 PROGRAM0.DI_PROC.DI.DI_11.BITS[0].RELIABILITY
    st = getVariable(17458);
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
  { // 17459 PROGRAM0.DI_PROC.DI.DI_11.BITS[0]._INVERSED
    st = getVariable(17459);
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
  { // 17460 PROGRAM0.DI_PROC.DI.DI_11.BITS[1].VALUE
    st = getVariable(17460);
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
  { // 17461 PROGRAM0.DI_PROC.DI.DI_11.BITS[1].RELIABILITY
    st = getVariable(17461);
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
  { // 17462 PROGRAM0.DI_PROC.DI.DI_11.BITS[1]._INVERSED
    st = getVariable(17462);
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
  { // 17463 PROGRAM0.DI_PROC.DI.DI_11.BITS[2].VALUE
    st = getVariable(17463);
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
  { // 17464 PROGRAM0.DI_PROC.DI.DI_11.BITS[2].RELIABILITY
    st = getVariable(17464);
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
  { // 17465 PROGRAM0.DI_PROC.DI.DI_11.BITS[2]._INVERSED
    st = getVariable(17465);
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
  { // 17466 PROGRAM0.DI_PROC.DI.DI_11.BITS[3].VALUE
    st = getVariable(17466);
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
  { // 17467 PROGRAM0.DI_PROC.DI.DI_11.BITS[3].RELIABILITY
    st = getVariable(17467);
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
  { // 17468 PROGRAM0.DI_PROC.DI.DI_11.BITS[3]._INVERSED
    st = getVariable(17468);
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
  { // 17469 PROGRAM0.DI_PROC.DI.DI_11.BITS[4].VALUE
    st = getVariable(17469);
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
  { // 17470 PROGRAM0.DI_PROC.DI.DI_11.BITS[4].RELIABILITY
    st = getVariable(17470);
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
  { // 17471 PROGRAM0.DI_PROC.DI.DI_11.BITS[4]._INVERSED
    st = getVariable(17471);
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
  { // 17472 PROGRAM0.DI_PROC.DI.DI_11.BITS[5].VALUE
    st = getVariable(17472);
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
  { // 17473 PROGRAM0.DI_PROC.DI.DI_11.BITS[5].RELIABILITY
    st = getVariable(17473);
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
  { // 17474 PROGRAM0.DI_PROC.DI.DI_11.BITS[5]._INVERSED
    st = getVariable(17474);
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
  { // 17475 PROGRAM0.DI_PROC.DI.DI_11.BITS[6].VALUE
    st = getVariable(17475);
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
  { // 17476 PROGRAM0.DI_PROC.DI.DI_11.BITS[6].RELIABILITY
    st = getVariable(17476);
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
  { // 17477 PROGRAM0.DI_PROC.DI.DI_11.BITS[6]._INVERSED
    st = getVariable(17477);
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
  { // 17478 PROGRAM0.DI_PROC.DI.DI_11.BITS[7].VALUE
    st = getVariable(17478);
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
  { // 17479 PROGRAM0.DI_PROC.DI.DI_11.BITS[7].RELIABILITY
    st = getVariable(17479);
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
  { // 17480 PROGRAM0.DI_PROC.DI.DI_11.BITS[7]._INVERSED
    st = getVariable(17480);
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
  { // 17481 PROGRAM0.DI_PROC.DI.DI_11.BITS[8].VALUE
    st = getVariable(17481);
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
  { // 17482 PROGRAM0.DI_PROC.DI.DI_11.BITS[8].RELIABILITY
    st = getVariable(17482);
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
  { // 17483 PROGRAM0.DI_PROC.DI.DI_11.BITS[8]._INVERSED
    st = getVariable(17483);
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
  { // 17484 PROGRAM0.DI_PROC.DI.DI_11.BITS[9].VALUE
    st = getVariable(17484);
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
  { // 17485 PROGRAM0.DI_PROC.DI.DI_11.BITS[9].RELIABILITY
    st = getVariable(17485);
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
  { // 17486 PROGRAM0.DI_PROC.DI.DI_11.BITS[9]._INVERSED
    st = getVariable(17486);
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
  { // 17487 PROGRAM0.DI_PROC.DI.DI_11.BITS[10].VALUE
    st = getVariable(17487);
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
  { // 17488 PROGRAM0.DI_PROC.DI.DI_11.BITS[10].RELIABILITY
    st = getVariable(17488);
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
  { // 17489 PROGRAM0.DI_PROC.DI.DI_11.BITS[10]._INVERSED
    st = getVariable(17489);
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
  { // 17490 PROGRAM0.DI_PROC.DI.DI_11.BITS[11].VALUE
    st = getVariable(17490);
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
  { // 17491 PROGRAM0.DI_PROC.DI.DI_11.BITS[11].RELIABILITY
    st = getVariable(17491);
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
  { // 17492 PROGRAM0.DI_PROC.DI.DI_11.BITS[11]._INVERSED
    st = getVariable(17492);
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
  { // 17493 PROGRAM0.DI_PROC.DI.DI_11.BITS[12].VALUE
    st = getVariable(17493);
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
  { // 17494 PROGRAM0.DI_PROC.DI.DI_11.BITS[12].RELIABILITY
    st = getVariable(17494);
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
  { // 17495 PROGRAM0.DI_PROC.DI.DI_11.BITS[12]._INVERSED
    st = getVariable(17495);
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
  { // 17496 PROGRAM0.DI_PROC.DI.DI_11.BITS[13].VALUE
    st = getVariable(17496);
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
  { // 17497 PROGRAM0.DI_PROC.DI.DI_11.BITS[13].RELIABILITY
    st = getVariable(17497);
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
  { // 17498 PROGRAM0.DI_PROC.DI.DI_11.BITS[13]._INVERSED
    st = getVariable(17498);
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
  { // 17499 PROGRAM0.DI_PROC.DI.DI_11.BITS[14].VALUE
    st = getVariable(17499);
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
  { // 17500 PROGRAM0.DI_PROC.DI.DI_11.BITS[14].RELIABILITY
    st = getVariable(17500);
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
  { // 17501 PROGRAM0.DI_PROC.DI.DI_11.BITS[14]._INVERSED
    st = getVariable(17501);
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
  { // 17502 PROGRAM0.DI_PROC.DI.DI_11.BITS[15].VALUE
    st = getVariable(17502);
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
  { // 17503 PROGRAM0.DI_PROC.DI.DI_11.BITS[15].RELIABILITY
    st = getVariable(17503);
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
  { // 17504 PROGRAM0.DI_PROC.DI.DI_11.BITS[15]._INVERSED
    st = getVariable(17504);
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
  { // 17505 PROGRAM0.DI_PROC.DI.DI_11.BLCONNECT
    st = getVariable(17505);
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
  { // 17506 PROGRAM0.DI_PROC.DI.DI_12.IMIT
    st = getVariable(17506);
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
  { // 17507 PROGRAM0.DI_PROC.DI.DI_12.VALUE
    st = getVariable(17507);
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
  { // 17508 PROGRAM0.DI_PROC.DI.DI_12.RELIABILITY
    st = getVariable(17508);
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
  { // 17509 PROGRAM0.DI_PROC.DI.DI_12.BITS[0].VALUE
    st = getVariable(17509);
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
  { // 17510 PROGRAM0.DI_PROC.DI.DI_12.BITS[0].RELIABILITY
    st = getVariable(17510);
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
  { // 17511 PROGRAM0.DI_PROC.DI.DI_12.BITS[0]._INVERSED
    st = getVariable(17511);
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
  { // 17512 PROGRAM0.DI_PROC.DI.DI_12.BITS[1].VALUE
    st = getVariable(17512);
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
  { // 17513 PROGRAM0.DI_PROC.DI.DI_12.BITS[1].RELIABILITY
    st = getVariable(17513);
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
  { // 17514 PROGRAM0.DI_PROC.DI.DI_12.BITS[1]._INVERSED
    st = getVariable(17514);
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
  { // 17515 PROGRAM0.DI_PROC.DI.DI_12.BITS[2].VALUE
    st = getVariable(17515);
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
  { // 17516 PROGRAM0.DI_PROC.DI.DI_12.BITS[2].RELIABILITY
    st = getVariable(17516);
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
  { // 17517 PROGRAM0.DI_PROC.DI.DI_12.BITS[2]._INVERSED
    st = getVariable(17517);
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
  { // 17518 PROGRAM0.DI_PROC.DI.DI_12.BITS[3].VALUE
    st = getVariable(17518);
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
  { // 17519 PROGRAM0.DI_PROC.DI.DI_12.BITS[3].RELIABILITY
    st = getVariable(17519);
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
  { // 17520 PROGRAM0.DI_PROC.DI.DI_12.BITS[3]._INVERSED
    st = getVariable(17520);
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
  { // 17521 PROGRAM0.DI_PROC.DI.DI_12.BITS[4].VALUE
    st = getVariable(17521);
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
  { // 17522 PROGRAM0.DI_PROC.DI.DI_12.BITS[4].RELIABILITY
    st = getVariable(17522);
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
  { // 17523 PROGRAM0.DI_PROC.DI.DI_12.BITS[4]._INVERSED
    st = getVariable(17523);
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
  { // 17524 PROGRAM0.DI_PROC.DI.DI_12.BITS[5].VALUE
    st = getVariable(17524);
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
  { // 17525 PROGRAM0.DI_PROC.DI.DI_12.BITS[5].RELIABILITY
    st = getVariable(17525);
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
  { // 17526 PROGRAM0.DI_PROC.DI.DI_12.BITS[5]._INVERSED
    st = getVariable(17526);
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
  { // 17527 PROGRAM0.DI_PROC.DI.DI_12.BITS[6].VALUE
    st = getVariable(17527);
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
  { // 17528 PROGRAM0.DI_PROC.DI.DI_12.BITS[6].RELIABILITY
    st = getVariable(17528);
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
  { // 17529 PROGRAM0.DI_PROC.DI.DI_12.BITS[6]._INVERSED
    st = getVariable(17529);
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
  { // 17530 PROGRAM0.DI_PROC.DI.DI_12.BITS[7].VALUE
    st = getVariable(17530);
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
  { // 17531 PROGRAM0.DI_PROC.DI.DI_12.BITS[7].RELIABILITY
    st = getVariable(17531);
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
  { // 17532 PROGRAM0.DI_PROC.DI.DI_12.BITS[7]._INVERSED
    st = getVariable(17532);
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
  { // 17533 PROGRAM0.DI_PROC.DI.DI_12.BITS[8].VALUE
    st = getVariable(17533);
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
  { // 17534 PROGRAM0.DI_PROC.DI.DI_12.BITS[8].RELIABILITY
    st = getVariable(17534);
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
  { // 17535 PROGRAM0.DI_PROC.DI.DI_12.BITS[8]._INVERSED
    st = getVariable(17535);
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
  { // 17536 PROGRAM0.DI_PROC.DI.DI_12.BITS[9].VALUE
    st = getVariable(17536);
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
  { // 17537 PROGRAM0.DI_PROC.DI.DI_12.BITS[9].RELIABILITY
    st = getVariable(17537);
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
  { // 17538 PROGRAM0.DI_PROC.DI.DI_12.BITS[9]._INVERSED
    st = getVariable(17538);
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
  { // 17539 PROGRAM0.DI_PROC.DI.DI_12.BITS[10].VALUE
    st = getVariable(17539);
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
  { // 17540 PROGRAM0.DI_PROC.DI.DI_12.BITS[10].RELIABILITY
    st = getVariable(17540);
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
  { // 17541 PROGRAM0.DI_PROC.DI.DI_12.BITS[10]._INVERSED
    st = getVariable(17541);
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
  { // 17542 PROGRAM0.DI_PROC.DI.DI_12.BITS[11].VALUE
    st = getVariable(17542);
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
  { // 17543 PROGRAM0.DI_PROC.DI.DI_12.BITS[11].RELIABILITY
    st = getVariable(17543);
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
  { // 17544 PROGRAM0.DI_PROC.DI.DI_12.BITS[11]._INVERSED
    st = getVariable(17544);
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
  { // 17545 PROGRAM0.DI_PROC.DI.DI_12.BITS[12].VALUE
    st = getVariable(17545);
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
  { // 17546 PROGRAM0.DI_PROC.DI.DI_12.BITS[12].RELIABILITY
    st = getVariable(17546);
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
  { // 17547 PROGRAM0.DI_PROC.DI.DI_12.BITS[12]._INVERSED
    st = getVariable(17547);
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
  { // 17548 PROGRAM0.DI_PROC.DI.DI_12.BITS[13].VALUE
    st = getVariable(17548);
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
  { // 17549 PROGRAM0.DI_PROC.DI.DI_12.BITS[13].RELIABILITY
    st = getVariable(17549);
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
  { // 17550 PROGRAM0.DI_PROC.DI.DI_12.BITS[13]._INVERSED
    st = getVariable(17550);
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
  { // 17551 PROGRAM0.DI_PROC.DI.DI_12.BITS[14].VALUE
    st = getVariable(17551);
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
  { // 17552 PROGRAM0.DI_PROC.DI.DI_12.BITS[14].RELIABILITY
    st = getVariable(17552);
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
  { // 17553 PROGRAM0.DI_PROC.DI.DI_12.BITS[14]._INVERSED
    st = getVariable(17553);
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
  { // 17554 PROGRAM0.DI_PROC.DI.DI_12.BITS[15].VALUE
    st = getVariable(17554);
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
  { // 17555 PROGRAM0.DI_PROC.DI.DI_12.BITS[15].RELIABILITY
    st = getVariable(17555);
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
  { // 17556 PROGRAM0.DI_PROC.DI.DI_12.BITS[15]._INVERSED
    st = getVariable(17556);
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
  { // 17557 PROGRAM0.DI_PROC.DI.DI_12.BLCONNECT
    st = getVariable(17557);
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
  { // 17558 PROGRAM0.DI_PROC.DI.DI_13.IMIT
    st = getVariable(17558);
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
  { // 17559 PROGRAM0.DI_PROC.DI.DI_13.VALUE
    st = getVariable(17559);
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
  { // 17560 PROGRAM0.DI_PROC.DI.DI_13.RELIABILITY
    st = getVariable(17560);
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
  { // 17561 PROGRAM0.DI_PROC.DI.DI_13.BITS[0].VALUE
    st = getVariable(17561);
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
  { // 17562 PROGRAM0.DI_PROC.DI.DI_13.BITS[0].RELIABILITY
    st = getVariable(17562);
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
  { // 17563 PROGRAM0.DI_PROC.DI.DI_13.BITS[0]._INVERSED
    st = getVariable(17563);
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
  { // 17564 PROGRAM0.DI_PROC.DI.DI_13.BITS[1].VALUE
    st = getVariable(17564);
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
  { // 17565 PROGRAM0.DI_PROC.DI.DI_13.BITS[1].RELIABILITY
    st = getVariable(17565);
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
  { // 17566 PROGRAM0.DI_PROC.DI.DI_13.BITS[1]._INVERSED
    st = getVariable(17566);
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
  { // 17567 PROGRAM0.DI_PROC.DI.DI_13.BITS[2].VALUE
    st = getVariable(17567);
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
  { // 17568 PROGRAM0.DI_PROC.DI.DI_13.BITS[2].RELIABILITY
    st = getVariable(17568);
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
  { // 17569 PROGRAM0.DI_PROC.DI.DI_13.BITS[2]._INVERSED
    st = getVariable(17569);
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
  { // 17570 PROGRAM0.DI_PROC.DI.DI_13.BITS[3].VALUE
    st = getVariable(17570);
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
  { // 17571 PROGRAM0.DI_PROC.DI.DI_13.BITS[3].RELIABILITY
    st = getVariable(17571);
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
  { // 17572 PROGRAM0.DI_PROC.DI.DI_13.BITS[3]._INVERSED
    st = getVariable(17572);
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
  { // 17573 PROGRAM0.DI_PROC.DI.DI_13.BITS[4].VALUE
    st = getVariable(17573);
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
  { // 17574 PROGRAM0.DI_PROC.DI.DI_13.BITS[4].RELIABILITY
    st = getVariable(17574);
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
  { // 17575 PROGRAM0.DI_PROC.DI.DI_13.BITS[4]._INVERSED
    st = getVariable(17575);
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
  { // 17576 PROGRAM0.DI_PROC.DI.DI_13.BITS[5].VALUE
    st = getVariable(17576);
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
  { // 17577 PROGRAM0.DI_PROC.DI.DI_13.BITS[5].RELIABILITY
    st = getVariable(17577);
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
  { // 17578 PROGRAM0.DI_PROC.DI.DI_13.BITS[5]._INVERSED
    st = getVariable(17578);
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
  { // 17579 PROGRAM0.DI_PROC.DI.DI_13.BITS[6].VALUE
    st = getVariable(17579);
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
  { // 17580 PROGRAM0.DI_PROC.DI.DI_13.BITS[6].RELIABILITY
    st = getVariable(17580);
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
  { // 17581 PROGRAM0.DI_PROC.DI.DI_13.BITS[6]._INVERSED
    st = getVariable(17581);
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
  { // 17582 PROGRAM0.DI_PROC.DI.DI_13.BITS[7].VALUE
    st = getVariable(17582);
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
  { // 17583 PROGRAM0.DI_PROC.DI.DI_13.BITS[7].RELIABILITY
    st = getVariable(17583);
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
  { // 17584 PROGRAM0.DI_PROC.DI.DI_13.BITS[7]._INVERSED
    st = getVariable(17584);
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
  { // 17585 PROGRAM0.DI_PROC.DI.DI_13.BITS[8].VALUE
    st = getVariable(17585);
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
  { // 17586 PROGRAM0.DI_PROC.DI.DI_13.BITS[8].RELIABILITY
    st = getVariable(17586);
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
  { // 17587 PROGRAM0.DI_PROC.DI.DI_13.BITS[8]._INVERSED
    st = getVariable(17587);
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
  { // 17588 PROGRAM0.DI_PROC.DI.DI_13.BITS[9].VALUE
    st = getVariable(17588);
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
  { // 17589 PROGRAM0.DI_PROC.DI.DI_13.BITS[9].RELIABILITY
    st = getVariable(17589);
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
  { // 17590 PROGRAM0.DI_PROC.DI.DI_13.BITS[9]._INVERSED
    st = getVariable(17590);
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
  { // 17591 PROGRAM0.DI_PROC.DI.DI_13.BITS[10].VALUE
    st = getVariable(17591);
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
  { // 17592 PROGRAM0.DI_PROC.DI.DI_13.BITS[10].RELIABILITY
    st = getVariable(17592);
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
  { // 17593 PROGRAM0.DI_PROC.DI.DI_13.BITS[10]._INVERSED
    st = getVariable(17593);
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
  { // 17594 PROGRAM0.DI_PROC.DI.DI_13.BITS[11].VALUE
    st = getVariable(17594);
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
  { // 17595 PROGRAM0.DI_PROC.DI.DI_13.BITS[11].RELIABILITY
    st = getVariable(17595);
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
  { // 17596 PROGRAM0.DI_PROC.DI.DI_13.BITS[11]._INVERSED
    st = getVariable(17596);
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
  { // 17597 PROGRAM0.DI_PROC.DI.DI_13.BITS[12].VALUE
    st = getVariable(17597);
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
  { // 17598 PROGRAM0.DI_PROC.DI.DI_13.BITS[12].RELIABILITY
    st = getVariable(17598);
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
  { // 17599 PROGRAM0.DI_PROC.DI.DI_13.BITS[12]._INVERSED
    st = getVariable(17599);
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
  { // 17600 PROGRAM0.DI_PROC.DI.DI_13.BITS[13].VALUE
    st = getVariable(17600);
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
  { // 17601 PROGRAM0.DI_PROC.DI.DI_13.BITS[13].RELIABILITY
    st = getVariable(17601);
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
  { // 17602 PROGRAM0.DI_PROC.DI.DI_13.BITS[13]._INVERSED
    st = getVariable(17602);
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
  { // 17603 PROGRAM0.DI_PROC.DI.DI_13.BITS[14].VALUE
    st = getVariable(17603);
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
  { // 17604 PROGRAM0.DI_PROC.DI.DI_13.BITS[14].RELIABILITY
    st = getVariable(17604);
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
  { // 17605 PROGRAM0.DI_PROC.DI.DI_13.BITS[14]._INVERSED
    st = getVariable(17605);
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
  { // 17606 PROGRAM0.DI_PROC.DI.DI_13.BITS[15].VALUE
    st = getVariable(17606);
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
  { // 17607 PROGRAM0.DI_PROC.DI.DI_13.BITS[15].RELIABILITY
    st = getVariable(17607);
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
  { // 17608 PROGRAM0.DI_PROC.DI.DI_13.BITS[15]._INVERSED
    st = getVariable(17608);
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
  { // 17609 PROGRAM0.DI_PROC.DI.DI_13.BLCONNECT
    st = getVariable(17609);
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
  { // 17610 PROGRAM0.DI_PROC.DI.DI_14.IMIT
    st = getVariable(17610);
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
  { // 17611 PROGRAM0.DI_PROC.DI.DI_14.VALUE
    st = getVariable(17611);
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
  { // 17612 PROGRAM0.DI_PROC.DI.DI_14.RELIABILITY
    st = getVariable(17612);
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
  { // 17613 PROGRAM0.DI_PROC.DI.DI_14.BITS[0].VALUE
    st = getVariable(17613);
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
  { // 17614 PROGRAM0.DI_PROC.DI.DI_14.BITS[0].RELIABILITY
    st = getVariable(17614);
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
  { // 17615 PROGRAM0.DI_PROC.DI.DI_14.BITS[0]._INVERSED
    st = getVariable(17615);
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
  { // 17616 PROGRAM0.DI_PROC.DI.DI_14.BITS[1].VALUE
    st = getVariable(17616);
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
  { // 17617 PROGRAM0.DI_PROC.DI.DI_14.BITS[1].RELIABILITY
    st = getVariable(17617);
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
  { // 17618 PROGRAM0.DI_PROC.DI.DI_14.BITS[1]._INVERSED
    st = getVariable(17618);
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
  { // 17619 PROGRAM0.DI_PROC.DI.DI_14.BITS[2].VALUE
    st = getVariable(17619);
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
  { // 17620 PROGRAM0.DI_PROC.DI.DI_14.BITS[2].RELIABILITY
    st = getVariable(17620);
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
  { // 17621 PROGRAM0.DI_PROC.DI.DI_14.BITS[2]._INVERSED
    st = getVariable(17621);
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
  { // 17622 PROGRAM0.DI_PROC.DI.DI_14.BITS[3].VALUE
    st = getVariable(17622);
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
  { // 17623 PROGRAM0.DI_PROC.DI.DI_14.BITS[3].RELIABILITY
    st = getVariable(17623);
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
  { // 17624 PROGRAM0.DI_PROC.DI.DI_14.BITS[3]._INVERSED
    st = getVariable(17624);
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
  { // 17625 PROGRAM0.DI_PROC.DI.DI_14.BITS[4].VALUE
    st = getVariable(17625);
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
  { // 17626 PROGRAM0.DI_PROC.DI.DI_14.BITS[4].RELIABILITY
    st = getVariable(17626);
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
  { // 17627 PROGRAM0.DI_PROC.DI.DI_14.BITS[4]._INVERSED
    st = getVariable(17627);
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
  { // 17628 PROGRAM0.DI_PROC.DI.DI_14.BITS[5].VALUE
    st = getVariable(17628);
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
  { // 17629 PROGRAM0.DI_PROC.DI.DI_14.BITS[5].RELIABILITY
    st = getVariable(17629);
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
  { // 17630 PROGRAM0.DI_PROC.DI.DI_14.BITS[5]._INVERSED
    st = getVariable(17630);
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
  { // 17631 PROGRAM0.DI_PROC.DI.DI_14.BITS[6].VALUE
    st = getVariable(17631);
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
  { // 17632 PROGRAM0.DI_PROC.DI.DI_14.BITS[6].RELIABILITY
    st = getVariable(17632);
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
  { // 17633 PROGRAM0.DI_PROC.DI.DI_14.BITS[6]._INVERSED
    st = getVariable(17633);
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
  { // 17634 PROGRAM0.DI_PROC.DI.DI_14.BITS[7].VALUE
    st = getVariable(17634);
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
  { // 17635 PROGRAM0.DI_PROC.DI.DI_14.BITS[7].RELIABILITY
    st = getVariable(17635);
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
  { // 17636 PROGRAM0.DI_PROC.DI.DI_14.BITS[7]._INVERSED
    st = getVariable(17636);
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
  { // 17637 PROGRAM0.DI_PROC.DI.DI_14.BITS[8].VALUE
    st = getVariable(17637);
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
  { // 17638 PROGRAM0.DI_PROC.DI.DI_14.BITS[8].RELIABILITY
    st = getVariable(17638);
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
  { // 17639 PROGRAM0.DI_PROC.DI.DI_14.BITS[8]._INVERSED
    st = getVariable(17639);
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
  { // 17640 PROGRAM0.DI_PROC.DI.DI_14.BITS[9].VALUE
    st = getVariable(17640);
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
  { // 17641 PROGRAM0.DI_PROC.DI.DI_14.BITS[9].RELIABILITY
    st = getVariable(17641);
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
  { // 17642 PROGRAM0.DI_PROC.DI.DI_14.BITS[9]._INVERSED
    st = getVariable(17642);
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
  { // 17643 PROGRAM0.DI_PROC.DI.DI_14.BITS[10].VALUE
    st = getVariable(17643);
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
  { // 17644 PROGRAM0.DI_PROC.DI.DI_14.BITS[10].RELIABILITY
    st = getVariable(17644);
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
  { // 17645 PROGRAM0.DI_PROC.DI.DI_14.BITS[10]._INVERSED
    st = getVariable(17645);
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
  { // 17646 PROGRAM0.DI_PROC.DI.DI_14.BITS[11].VALUE
    st = getVariable(17646);
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
  { // 17647 PROGRAM0.DI_PROC.DI.DI_14.BITS[11].RELIABILITY
    st = getVariable(17647);
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
  { // 17648 PROGRAM0.DI_PROC.DI.DI_14.BITS[11]._INVERSED
    st = getVariable(17648);
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
  { // 17649 PROGRAM0.DI_PROC.DI.DI_14.BITS[12].VALUE
    st = getVariable(17649);
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
  { // 17650 PROGRAM0.DI_PROC.DI.DI_14.BITS[12].RELIABILITY
    st = getVariable(17650);
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
  { // 17651 PROGRAM0.DI_PROC.DI.DI_14.BITS[12]._INVERSED
    st = getVariable(17651);
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
  { // 17652 PROGRAM0.DI_PROC.DI.DI_14.BITS[13].VALUE
    st = getVariable(17652);
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
  { // 17653 PROGRAM0.DI_PROC.DI.DI_14.BITS[13].RELIABILITY
    st = getVariable(17653);
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
  { // 17654 PROGRAM0.DI_PROC.DI.DI_14.BITS[13]._INVERSED
    st = getVariable(17654);
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
  { // 17655 PROGRAM0.DI_PROC.DI.DI_14.BITS[14].VALUE
    st = getVariable(17655);
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
  { // 17656 PROGRAM0.DI_PROC.DI.DI_14.BITS[14].RELIABILITY
    st = getVariable(17656);
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
  { // 17657 PROGRAM0.DI_PROC.DI.DI_14.BITS[14]._INVERSED
    st = getVariable(17657);
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
  { // 17658 PROGRAM0.DI_PROC.DI.DI_14.BITS[15].VALUE
    st = getVariable(17658);
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
  { // 17659 PROGRAM0.DI_PROC.DI.DI_14.BITS[15].RELIABILITY
    st = getVariable(17659);
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
  { // 17660 PROGRAM0.DI_PROC.DI.DI_14.BITS[15]._INVERSED
    st = getVariable(17660);
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
  { // 17661 PROGRAM0.DI_PROC.DI.DI_14.BLCONNECT
    st = getVariable(17661);
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
  { // 17662 PROGRAM0.DI_PROC.DI.DI_15.IMIT
    st = getVariable(17662);
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
  { // 17663 PROGRAM0.DI_PROC.DI.DI_15.VALUE
    st = getVariable(17663);
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
  { // 17664 PROGRAM0.DI_PROC.DI.DI_15.RELIABILITY
    st = getVariable(17664);
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
  { // 17665 PROGRAM0.DI_PROC.DI.DI_15.BITS[0].VALUE
    st = getVariable(17665);
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
  { // 17666 PROGRAM0.DI_PROC.DI.DI_15.BITS[0].RELIABILITY
    st = getVariable(17666);
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
  { // 17667 PROGRAM0.DI_PROC.DI.DI_15.BITS[0]._INVERSED
    st = getVariable(17667);
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
  { // 17668 PROGRAM0.DI_PROC.DI.DI_15.BITS[1].VALUE
    st = getVariable(17668);
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
  { // 17669 PROGRAM0.DI_PROC.DI.DI_15.BITS[1].RELIABILITY
    st = getVariable(17669);
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
  { // 17670 PROGRAM0.DI_PROC.DI.DI_15.BITS[1]._INVERSED
    st = getVariable(17670);
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
  { // 17671 PROGRAM0.DI_PROC.DI.DI_15.BITS[2].VALUE
    st = getVariable(17671);
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
  { // 17672 PROGRAM0.DI_PROC.DI.DI_15.BITS[2].RELIABILITY
    st = getVariable(17672);
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
  { // 17673 PROGRAM0.DI_PROC.DI.DI_15.BITS[2]._INVERSED
    st = getVariable(17673);
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
  { // 17674 PROGRAM0.DI_PROC.DI.DI_15.BITS[3].VALUE
    st = getVariable(17674);
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
  { // 17675 PROGRAM0.DI_PROC.DI.DI_15.BITS[3].RELIABILITY
    st = getVariable(17675);
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
  { // 17676 PROGRAM0.DI_PROC.DI.DI_15.BITS[3]._INVERSED
    st = getVariable(17676);
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
  { // 17677 PROGRAM0.DI_PROC.DI.DI_15.BITS[4].VALUE
    st = getVariable(17677);
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
  { // 17678 PROGRAM0.DI_PROC.DI.DI_15.BITS[4].RELIABILITY
    st = getVariable(17678);
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
  { // 17679 PROGRAM0.DI_PROC.DI.DI_15.BITS[4]._INVERSED
    st = getVariable(17679);
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
  { // 17680 PROGRAM0.DI_PROC.DI.DI_15.BITS[5].VALUE
    st = getVariable(17680);
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
  { // 17681 PROGRAM0.DI_PROC.DI.DI_15.BITS[5].RELIABILITY
    st = getVariable(17681);
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
  { // 17682 PROGRAM0.DI_PROC.DI.DI_15.BITS[5]._INVERSED
    st = getVariable(17682);
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
  { // 17683 PROGRAM0.DI_PROC.DI.DI_15.BITS[6].VALUE
    st = getVariable(17683);
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
  { // 17684 PROGRAM0.DI_PROC.DI.DI_15.BITS[6].RELIABILITY
    st = getVariable(17684);
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
  { // 17685 PROGRAM0.DI_PROC.DI.DI_15.BITS[6]._INVERSED
    st = getVariable(17685);
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
  { // 17686 PROGRAM0.DI_PROC.DI.DI_15.BITS[7].VALUE
    st = getVariable(17686);
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
  { // 17687 PROGRAM0.DI_PROC.DI.DI_15.BITS[7].RELIABILITY
    st = getVariable(17687);
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
  { // 17688 PROGRAM0.DI_PROC.DI.DI_15.BITS[7]._INVERSED
    st = getVariable(17688);
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
  { // 17689 PROGRAM0.DI_PROC.DI.DI_15.BITS[8].VALUE
    st = getVariable(17689);
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
  { // 17690 PROGRAM0.DI_PROC.DI.DI_15.BITS[8].RELIABILITY
    st = getVariable(17690);
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
  { // 17691 PROGRAM0.DI_PROC.DI.DI_15.BITS[8]._INVERSED
    st = getVariable(17691);
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
  { // 17692 PROGRAM0.DI_PROC.DI.DI_15.BITS[9].VALUE
    st = getVariable(17692);
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
  { // 17693 PROGRAM0.DI_PROC.DI.DI_15.BITS[9].RELIABILITY
    st = getVariable(17693);
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
  { // 17694 PROGRAM0.DI_PROC.DI.DI_15.BITS[9]._INVERSED
    st = getVariable(17694);
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
  { // 17695 PROGRAM0.DI_PROC.DI.DI_15.BITS[10].VALUE
    st = getVariable(17695);
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
  { // 17696 PROGRAM0.DI_PROC.DI.DI_15.BITS[10].RELIABILITY
    st = getVariable(17696);
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
  { // 17697 PROGRAM0.DI_PROC.DI.DI_15.BITS[10]._INVERSED
    st = getVariable(17697);
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
  { // 17698 PROGRAM0.DI_PROC.DI.DI_15.BITS[11].VALUE
    st = getVariable(17698);
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
  { // 17699 PROGRAM0.DI_PROC.DI.DI_15.BITS[11].RELIABILITY
    st = getVariable(17699);
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
  { // 17700 PROGRAM0.DI_PROC.DI.DI_15.BITS[11]._INVERSED
    st = getVariable(17700);
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
  { // 17701 PROGRAM0.DI_PROC.DI.DI_15.BITS[12].VALUE
    st = getVariable(17701);
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
  { // 17702 PROGRAM0.DI_PROC.DI.DI_15.BITS[12].RELIABILITY
    st = getVariable(17702);
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
  { // 17703 PROGRAM0.DI_PROC.DI.DI_15.BITS[12]._INVERSED
    st = getVariable(17703);
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
  { // 17704 PROGRAM0.DI_PROC.DI.DI_15.BITS[13].VALUE
    st = getVariable(17704);
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
  { // 17705 PROGRAM0.DI_PROC.DI.DI_15.BITS[13].RELIABILITY
    st = getVariable(17705);
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
  { // 17706 PROGRAM0.DI_PROC.DI.DI_15.BITS[13]._INVERSED
    st = getVariable(17706);
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
  { // 17707 PROGRAM0.DI_PROC.DI.DI_15.BITS[14].VALUE
    st = getVariable(17707);
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
  { // 17708 PROGRAM0.DI_PROC.DI.DI_15.BITS[14].RELIABILITY
    st = getVariable(17708);
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
  { // 17709 PROGRAM0.DI_PROC.DI.DI_15.BITS[14]._INVERSED
    st = getVariable(17709);
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
  { // 17710 PROGRAM0.DI_PROC.DI.DI_15.BITS[15].VALUE
    st = getVariable(17710);
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
  { // 17711 PROGRAM0.DI_PROC.DI.DI_15.BITS[15].RELIABILITY
    st = getVariable(17711);
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
  { // 17712 PROGRAM0.DI_PROC.DI.DI_15.BITS[15]._INVERSED
    st = getVariable(17712);
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
  { // 17713 PROGRAM0.DI_PROC.DI.DI_15.BLCONNECT
    st = getVariable(17713);
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
  { // 17714 PROGRAM0.DI_PROC.DI.DI_16.IMIT
    st = getVariable(17714);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 17715 PROGRAM0.DI_PROC.DI.DI_16.VALUE
    st = getVariable(17715);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 17716 PROGRAM0.DI_PROC.DI.DI_16.RELIABILITY
    st = getVariable(17716);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 17717 PROGRAM0.DI_PROC.DI.DI_16.BITS[0].VALUE
    st = getVariable(17717);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17718 PROGRAM0.DI_PROC.DI.DI_16.BITS[0].RELIABILITY
    st = getVariable(17718);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17719 PROGRAM0.DI_PROC.DI.DI_16.BITS[0]._INVERSED
    st = getVariable(17719);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17720 PROGRAM0.DI_PROC.DI.DI_16.BITS[1].VALUE
    st = getVariable(17720);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17721 PROGRAM0.DI_PROC.DI.DI_16.BITS[1].RELIABILITY
    st = getVariable(17721);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17722 PROGRAM0.DI_PROC.DI.DI_16.BITS[1]._INVERSED
    st = getVariable(17722);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17723 PROGRAM0.DI_PROC.DI.DI_16.BITS[2].VALUE
    st = getVariable(17723);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17724 PROGRAM0.DI_PROC.DI.DI_16.BITS[2].RELIABILITY
    st = getVariable(17724);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17725 PROGRAM0.DI_PROC.DI.DI_16.BITS[2]._INVERSED
    st = getVariable(17725);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17726 PROGRAM0.DI_PROC.DI.DI_16.BITS[3].VALUE
    st = getVariable(17726);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17727 PROGRAM0.DI_PROC.DI.DI_16.BITS[3].RELIABILITY
    st = getVariable(17727);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17728 PROGRAM0.DI_PROC.DI.DI_16.BITS[3]._INVERSED
    st = getVariable(17728);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17729 PROGRAM0.DI_PROC.DI.DI_16.BITS[4].VALUE
    st = getVariable(17729);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17730 PROGRAM0.DI_PROC.DI.DI_16.BITS[4].RELIABILITY
    st = getVariable(17730);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17731 PROGRAM0.DI_PROC.DI.DI_16.BITS[4]._INVERSED
    st = getVariable(17731);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17732 PROGRAM0.DI_PROC.DI.DI_16.BITS[5].VALUE
    st = getVariable(17732);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17733 PROGRAM0.DI_PROC.DI.DI_16.BITS[5].RELIABILITY
    st = getVariable(17733);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17734 PROGRAM0.DI_PROC.DI.DI_16.BITS[5]._INVERSED
    st = getVariable(17734);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17735 PROGRAM0.DI_PROC.DI.DI_16.BITS[6].VALUE
    st = getVariable(17735);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17736 PROGRAM0.DI_PROC.DI.DI_16.BITS[6].RELIABILITY
    st = getVariable(17736);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17737 PROGRAM0.DI_PROC.DI.DI_16.BITS[6]._INVERSED
    st = getVariable(17737);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17738 PROGRAM0.DI_PROC.DI.DI_16.BITS[7].VALUE
    st = getVariable(17738);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17739 PROGRAM0.DI_PROC.DI.DI_16.BITS[7].RELIABILITY
    st = getVariable(17739);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17740 PROGRAM0.DI_PROC.DI.DI_16.BITS[7]._INVERSED
    st = getVariable(17740);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17741 PROGRAM0.DI_PROC.DI.DI_16.BITS[8].VALUE
    st = getVariable(17741);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17742 PROGRAM0.DI_PROC.DI.DI_16.BITS[8].RELIABILITY
    st = getVariable(17742);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17743 PROGRAM0.DI_PROC.DI.DI_16.BITS[8]._INVERSED
    st = getVariable(17743);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17744 PROGRAM0.DI_PROC.DI.DI_16.BITS[9].VALUE
    st = getVariable(17744);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17745 PROGRAM0.DI_PROC.DI.DI_16.BITS[9].RELIABILITY
    st = getVariable(17745);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17746 PROGRAM0.DI_PROC.DI.DI_16.BITS[9]._INVERSED
    st = getVariable(17746);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17747 PROGRAM0.DI_PROC.DI.DI_16.BITS[10].VALUE
    st = getVariable(17747);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17748 PROGRAM0.DI_PROC.DI.DI_16.BITS[10].RELIABILITY
    st = getVariable(17748);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17749 PROGRAM0.DI_PROC.DI.DI_16.BITS[10]._INVERSED
    st = getVariable(17749);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17750 PROGRAM0.DI_PROC.DI.DI_16.BITS[11].VALUE
    st = getVariable(17750);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17751 PROGRAM0.DI_PROC.DI.DI_16.BITS[11].RELIABILITY
    st = getVariable(17751);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17752 PROGRAM0.DI_PROC.DI.DI_16.BITS[11]._INVERSED
    st = getVariable(17752);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17753 PROGRAM0.DI_PROC.DI.DI_16.BITS[12].VALUE
    st = getVariable(17753);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17754 PROGRAM0.DI_PROC.DI.DI_16.BITS[12].RELIABILITY
    st = getVariable(17754);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17755 PROGRAM0.DI_PROC.DI.DI_16.BITS[12]._INVERSED
    st = getVariable(17755);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17756 PROGRAM0.DI_PROC.DI.DI_16.BITS[13].VALUE
    st = getVariable(17756);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17757 PROGRAM0.DI_PROC.DI.DI_16.BITS[13].RELIABILITY
    st = getVariable(17757);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17758 PROGRAM0.DI_PROC.DI.DI_16.BITS[13]._INVERSED
    st = getVariable(17758);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17759 PROGRAM0.DI_PROC.DI.DI_16.BITS[14].VALUE
    st = getVariable(17759);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17760 PROGRAM0.DI_PROC.DI.DI_16.BITS[14].RELIABILITY
    st = getVariable(17760);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17761 PROGRAM0.DI_PROC.DI.DI_16.BITS[14]._INVERSED
    st = getVariable(17761);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17762 PROGRAM0.DI_PROC.DI.DI_16.BITS[15].VALUE
    st = getVariable(17762);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17763 PROGRAM0.DI_PROC.DI.DI_16.BITS[15].RELIABILITY
    st = getVariable(17763);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17764 PROGRAM0.DI_PROC.DI.DI_16.BITS[15]._INVERSED
    st = getVariable(17764);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17765 PROGRAM0.DI_PROC.DI.DI_16.BLCONNECT
    st = getVariable(17765);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_16.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_16;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 17766 PROGRAM0.DI_PROC.DI.DI_17.IMIT
    st = getVariable(17766);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 17767 PROGRAM0.DI_PROC.DI.DI_17.VALUE
    st = getVariable(17767);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 17768 PROGRAM0.DI_PROC.DI.DI_17.RELIABILITY
    st = getVariable(17768);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 17769 PROGRAM0.DI_PROC.DI.DI_17.BITS[0].VALUE
    st = getVariable(17769);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17770 PROGRAM0.DI_PROC.DI.DI_17.BITS[0].RELIABILITY
    st = getVariable(17770);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17771 PROGRAM0.DI_PROC.DI.DI_17.BITS[0]._INVERSED
    st = getVariable(17771);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17772 PROGRAM0.DI_PROC.DI.DI_17.BITS[1].VALUE
    st = getVariable(17772);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17773 PROGRAM0.DI_PROC.DI.DI_17.BITS[1].RELIABILITY
    st = getVariable(17773);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17774 PROGRAM0.DI_PROC.DI.DI_17.BITS[1]._INVERSED
    st = getVariable(17774);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17775 PROGRAM0.DI_PROC.DI.DI_17.BITS[2].VALUE
    st = getVariable(17775);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17776 PROGRAM0.DI_PROC.DI.DI_17.BITS[2].RELIABILITY
    st = getVariable(17776);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17777 PROGRAM0.DI_PROC.DI.DI_17.BITS[2]._INVERSED
    st = getVariable(17777);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17778 PROGRAM0.DI_PROC.DI.DI_17.BITS[3].VALUE
    st = getVariable(17778);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17779 PROGRAM0.DI_PROC.DI.DI_17.BITS[3].RELIABILITY
    st = getVariable(17779);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17780 PROGRAM0.DI_PROC.DI.DI_17.BITS[3]._INVERSED
    st = getVariable(17780);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17781 PROGRAM0.DI_PROC.DI.DI_17.BITS[4].VALUE
    st = getVariable(17781);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17782 PROGRAM0.DI_PROC.DI.DI_17.BITS[4].RELIABILITY
    st = getVariable(17782);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17783 PROGRAM0.DI_PROC.DI.DI_17.BITS[4]._INVERSED
    st = getVariable(17783);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17784 PROGRAM0.DI_PROC.DI.DI_17.BITS[5].VALUE
    st = getVariable(17784);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17785 PROGRAM0.DI_PROC.DI.DI_17.BITS[5].RELIABILITY
    st = getVariable(17785);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17786 PROGRAM0.DI_PROC.DI.DI_17.BITS[5]._INVERSED
    st = getVariable(17786);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17787 PROGRAM0.DI_PROC.DI.DI_17.BITS[6].VALUE
    st = getVariable(17787);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17788 PROGRAM0.DI_PROC.DI.DI_17.BITS[6].RELIABILITY
    st = getVariable(17788);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17789 PROGRAM0.DI_PROC.DI.DI_17.BITS[6]._INVERSED
    st = getVariable(17789);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17790 PROGRAM0.DI_PROC.DI.DI_17.BITS[7].VALUE
    st = getVariable(17790);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17791 PROGRAM0.DI_PROC.DI.DI_17.BITS[7].RELIABILITY
    st = getVariable(17791);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17792 PROGRAM0.DI_PROC.DI.DI_17.BITS[7]._INVERSED
    st = getVariable(17792);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17793 PROGRAM0.DI_PROC.DI.DI_17.BITS[8].VALUE
    st = getVariable(17793);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17794 PROGRAM0.DI_PROC.DI.DI_17.BITS[8].RELIABILITY
    st = getVariable(17794);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17795 PROGRAM0.DI_PROC.DI.DI_17.BITS[8]._INVERSED
    st = getVariable(17795);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17796 PROGRAM0.DI_PROC.DI.DI_17.BITS[9].VALUE
    st = getVariable(17796);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17797 PROGRAM0.DI_PROC.DI.DI_17.BITS[9].RELIABILITY
    st = getVariable(17797);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17798 PROGRAM0.DI_PROC.DI.DI_17.BITS[9]._INVERSED
    st = getVariable(17798);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17799 PROGRAM0.DI_PROC.DI.DI_17.BITS[10].VALUE
    st = getVariable(17799);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17800 PROGRAM0.DI_PROC.DI.DI_17.BITS[10].RELIABILITY
    st = getVariable(17800);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17801 PROGRAM0.DI_PROC.DI.DI_17.BITS[10]._INVERSED
    st = getVariable(17801);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17802 PROGRAM0.DI_PROC.DI.DI_17.BITS[11].VALUE
    st = getVariable(17802);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17803 PROGRAM0.DI_PROC.DI.DI_17.BITS[11].RELIABILITY
    st = getVariable(17803);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17804 PROGRAM0.DI_PROC.DI.DI_17.BITS[11]._INVERSED
    st = getVariable(17804);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17805 PROGRAM0.DI_PROC.DI.DI_17.BITS[12].VALUE
    st = getVariable(17805);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17806 PROGRAM0.DI_PROC.DI.DI_17.BITS[12].RELIABILITY
    st = getVariable(17806);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17807 PROGRAM0.DI_PROC.DI.DI_17.BITS[12]._INVERSED
    st = getVariable(17807);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17808 PROGRAM0.DI_PROC.DI.DI_17.BITS[13].VALUE
    st = getVariable(17808);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17809 PROGRAM0.DI_PROC.DI.DI_17.BITS[13].RELIABILITY
    st = getVariable(17809);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17810 PROGRAM0.DI_PROC.DI.DI_17.BITS[13]._INVERSED
    st = getVariable(17810);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17811 PROGRAM0.DI_PROC.DI.DI_17.BITS[14].VALUE
    st = getVariable(17811);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17812 PROGRAM0.DI_PROC.DI.DI_17.BITS[14].RELIABILITY
    st = getVariable(17812);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17813 PROGRAM0.DI_PROC.DI.DI_17.BITS[14]._INVERSED
    st = getVariable(17813);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17814 PROGRAM0.DI_PROC.DI.DI_17.BITS[15].VALUE
    st = getVariable(17814);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17815 PROGRAM0.DI_PROC.DI.DI_17.BITS[15].RELIABILITY
    st = getVariable(17815);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17816 PROGRAM0.DI_PROC.DI.DI_17.BITS[15]._INVERSED
    st = getVariable(17816);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17817 PROGRAM0.DI_PROC.DI.DI_17.BLCONNECT
    st = getVariable(17817);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_17.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_17;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 17818 PROGRAM0.DI_PROC.DI.DI_18.IMIT
    st = getVariable(17818);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 17819 PROGRAM0.DI_PROC.DI.DI_18.VALUE
    st = getVariable(17819);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 17820 PROGRAM0.DI_PROC.DI.DI_18.RELIABILITY
    st = getVariable(17820);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 17821 PROGRAM0.DI_PROC.DI.DI_18.BITS[0].VALUE
    st = getVariable(17821);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17822 PROGRAM0.DI_PROC.DI.DI_18.BITS[0].RELIABILITY
    st = getVariable(17822);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17823 PROGRAM0.DI_PROC.DI.DI_18.BITS[0]._INVERSED
    st = getVariable(17823);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17824 PROGRAM0.DI_PROC.DI.DI_18.BITS[1].VALUE
    st = getVariable(17824);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17825 PROGRAM0.DI_PROC.DI.DI_18.BITS[1].RELIABILITY
    st = getVariable(17825);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17826 PROGRAM0.DI_PROC.DI.DI_18.BITS[1]._INVERSED
    st = getVariable(17826);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17827 PROGRAM0.DI_PROC.DI.DI_18.BITS[2].VALUE
    st = getVariable(17827);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17828 PROGRAM0.DI_PROC.DI.DI_18.BITS[2].RELIABILITY
    st = getVariable(17828);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17829 PROGRAM0.DI_PROC.DI.DI_18.BITS[2]._INVERSED
    st = getVariable(17829);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17830 PROGRAM0.DI_PROC.DI.DI_18.BITS[3].VALUE
    st = getVariable(17830);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17831 PROGRAM0.DI_PROC.DI.DI_18.BITS[3].RELIABILITY
    st = getVariable(17831);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17832 PROGRAM0.DI_PROC.DI.DI_18.BITS[3]._INVERSED
    st = getVariable(17832);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17833 PROGRAM0.DI_PROC.DI.DI_18.BITS[4].VALUE
    st = getVariable(17833);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17834 PROGRAM0.DI_PROC.DI.DI_18.BITS[4].RELIABILITY
    st = getVariable(17834);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17835 PROGRAM0.DI_PROC.DI.DI_18.BITS[4]._INVERSED
    st = getVariable(17835);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17836 PROGRAM0.DI_PROC.DI.DI_18.BITS[5].VALUE
    st = getVariable(17836);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17837 PROGRAM0.DI_PROC.DI.DI_18.BITS[5].RELIABILITY
    st = getVariable(17837);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17838 PROGRAM0.DI_PROC.DI.DI_18.BITS[5]._INVERSED
    st = getVariable(17838);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17839 PROGRAM0.DI_PROC.DI.DI_18.BITS[6].VALUE
    st = getVariable(17839);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17840 PROGRAM0.DI_PROC.DI.DI_18.BITS[6].RELIABILITY
    st = getVariable(17840);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17841 PROGRAM0.DI_PROC.DI.DI_18.BITS[6]._INVERSED
    st = getVariable(17841);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17842 PROGRAM0.DI_PROC.DI.DI_18.BITS[7].VALUE
    st = getVariable(17842);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17843 PROGRAM0.DI_PROC.DI.DI_18.BITS[7].RELIABILITY
    st = getVariable(17843);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17844 PROGRAM0.DI_PROC.DI.DI_18.BITS[7]._INVERSED
    st = getVariable(17844);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17845 PROGRAM0.DI_PROC.DI.DI_18.BITS[8].VALUE
    st = getVariable(17845);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17846 PROGRAM0.DI_PROC.DI.DI_18.BITS[8].RELIABILITY
    st = getVariable(17846);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17847 PROGRAM0.DI_PROC.DI.DI_18.BITS[8]._INVERSED
    st = getVariable(17847);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17848 PROGRAM0.DI_PROC.DI.DI_18.BITS[9].VALUE
    st = getVariable(17848);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17849 PROGRAM0.DI_PROC.DI.DI_18.BITS[9].RELIABILITY
    st = getVariable(17849);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17850 PROGRAM0.DI_PROC.DI.DI_18.BITS[9]._INVERSED
    st = getVariable(17850);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17851 PROGRAM0.DI_PROC.DI.DI_18.BITS[10].VALUE
    st = getVariable(17851);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17852 PROGRAM0.DI_PROC.DI.DI_18.BITS[10].RELIABILITY
    st = getVariable(17852);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17853 PROGRAM0.DI_PROC.DI.DI_18.BITS[10]._INVERSED
    st = getVariable(17853);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17854 PROGRAM0.DI_PROC.DI.DI_18.BITS[11].VALUE
    st = getVariable(17854);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17855 PROGRAM0.DI_PROC.DI.DI_18.BITS[11].RELIABILITY
    st = getVariable(17855);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17856 PROGRAM0.DI_PROC.DI.DI_18.BITS[11]._INVERSED
    st = getVariable(17856);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17857 PROGRAM0.DI_PROC.DI.DI_18.BITS[12].VALUE
    st = getVariable(17857);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17858 PROGRAM0.DI_PROC.DI.DI_18.BITS[12].RELIABILITY
    st = getVariable(17858);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17859 PROGRAM0.DI_PROC.DI.DI_18.BITS[12]._INVERSED
    st = getVariable(17859);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17860 PROGRAM0.DI_PROC.DI.DI_18.BITS[13].VALUE
    st = getVariable(17860);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17861 PROGRAM0.DI_PROC.DI.DI_18.BITS[13].RELIABILITY
    st = getVariable(17861);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17862 PROGRAM0.DI_PROC.DI.DI_18.BITS[13]._INVERSED
    st = getVariable(17862);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17863 PROGRAM0.DI_PROC.DI.DI_18.BITS[14].VALUE
    st = getVariable(17863);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17864 PROGRAM0.DI_PROC.DI.DI_18.BITS[14].RELIABILITY
    st = getVariable(17864);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17865 PROGRAM0.DI_PROC.DI.DI_18.BITS[14]._INVERSED
    st = getVariable(17865);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17866 PROGRAM0.DI_PROC.DI.DI_18.BITS[15].VALUE
    st = getVariable(17866);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17867 PROGRAM0.DI_PROC.DI.DI_18.BITS[15].RELIABILITY
    st = getVariable(17867);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17868 PROGRAM0.DI_PROC.DI.DI_18.BITS[15]._INVERSED
    st = getVariable(17868);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17869 PROGRAM0.DI_PROC.DI.DI_18.BLCONNECT
    st = getVariable(17869);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_18.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_18;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 17870 PROGRAM0.DI_PROC.DI.DI_19.IMIT
    st = getVariable(17870);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 17871 PROGRAM0.DI_PROC.DI.DI_19.VALUE
    st = getVariable(17871);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 17872 PROGRAM0.DI_PROC.DI.DI_19.RELIABILITY
    st = getVariable(17872);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 17873 PROGRAM0.DI_PROC.DI.DI_19.BITS[0].VALUE
    st = getVariable(17873);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17874 PROGRAM0.DI_PROC.DI.DI_19.BITS[0].RELIABILITY
    st = getVariable(17874);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17875 PROGRAM0.DI_PROC.DI.DI_19.BITS[0]._INVERSED
    st = getVariable(17875);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17876 PROGRAM0.DI_PROC.DI.DI_19.BITS[1].VALUE
    st = getVariable(17876);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17877 PROGRAM0.DI_PROC.DI.DI_19.BITS[1].RELIABILITY
    st = getVariable(17877);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17878 PROGRAM0.DI_PROC.DI.DI_19.BITS[1]._INVERSED
    st = getVariable(17878);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17879 PROGRAM0.DI_PROC.DI.DI_19.BITS[2].VALUE
    st = getVariable(17879);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17880 PROGRAM0.DI_PROC.DI.DI_19.BITS[2].RELIABILITY
    st = getVariable(17880);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17881 PROGRAM0.DI_PROC.DI.DI_19.BITS[2]._INVERSED
    st = getVariable(17881);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17882 PROGRAM0.DI_PROC.DI.DI_19.BITS[3].VALUE
    st = getVariable(17882);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17883 PROGRAM0.DI_PROC.DI.DI_19.BITS[3].RELIABILITY
    st = getVariable(17883);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17884 PROGRAM0.DI_PROC.DI.DI_19.BITS[3]._INVERSED
    st = getVariable(17884);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17885 PROGRAM0.DI_PROC.DI.DI_19.BITS[4].VALUE
    st = getVariable(17885);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17886 PROGRAM0.DI_PROC.DI.DI_19.BITS[4].RELIABILITY
    st = getVariable(17886);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17887 PROGRAM0.DI_PROC.DI.DI_19.BITS[4]._INVERSED
    st = getVariable(17887);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17888 PROGRAM0.DI_PROC.DI.DI_19.BITS[5].VALUE
    st = getVariable(17888);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17889 PROGRAM0.DI_PROC.DI.DI_19.BITS[5].RELIABILITY
    st = getVariable(17889);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17890 PROGRAM0.DI_PROC.DI.DI_19.BITS[5]._INVERSED
    st = getVariable(17890);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17891 PROGRAM0.DI_PROC.DI.DI_19.BITS[6].VALUE
    st = getVariable(17891);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17892 PROGRAM0.DI_PROC.DI.DI_19.BITS[6].RELIABILITY
    st = getVariable(17892);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17893 PROGRAM0.DI_PROC.DI.DI_19.BITS[6]._INVERSED
    st = getVariable(17893);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17894 PROGRAM0.DI_PROC.DI.DI_19.BITS[7].VALUE
    st = getVariable(17894);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17895 PROGRAM0.DI_PROC.DI.DI_19.BITS[7].RELIABILITY
    st = getVariable(17895);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17896 PROGRAM0.DI_PROC.DI.DI_19.BITS[7]._INVERSED
    st = getVariable(17896);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17897 PROGRAM0.DI_PROC.DI.DI_19.BITS[8].VALUE
    st = getVariable(17897);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17898 PROGRAM0.DI_PROC.DI.DI_19.BITS[8].RELIABILITY
    st = getVariable(17898);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17899 PROGRAM0.DI_PROC.DI.DI_19.BITS[8]._INVERSED
    st = getVariable(17899);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17900 PROGRAM0.DI_PROC.DI.DI_19.BITS[9].VALUE
    st = getVariable(17900);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17901 PROGRAM0.DI_PROC.DI.DI_19.BITS[9].RELIABILITY
    st = getVariable(17901);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17902 PROGRAM0.DI_PROC.DI.DI_19.BITS[9]._INVERSED
    st = getVariable(17902);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17903 PROGRAM0.DI_PROC.DI.DI_19.BITS[10].VALUE
    st = getVariable(17903);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17904 PROGRAM0.DI_PROC.DI.DI_19.BITS[10].RELIABILITY
    st = getVariable(17904);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17905 PROGRAM0.DI_PROC.DI.DI_19.BITS[10]._INVERSED
    st = getVariable(17905);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17906 PROGRAM0.DI_PROC.DI.DI_19.BITS[11].VALUE
    st = getVariable(17906);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17907 PROGRAM0.DI_PROC.DI.DI_19.BITS[11].RELIABILITY
    st = getVariable(17907);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17908 PROGRAM0.DI_PROC.DI.DI_19.BITS[11]._INVERSED
    st = getVariable(17908);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17909 PROGRAM0.DI_PROC.DI.DI_19.BITS[12].VALUE
    st = getVariable(17909);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17910 PROGRAM0.DI_PROC.DI.DI_19.BITS[12].RELIABILITY
    st = getVariable(17910);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17911 PROGRAM0.DI_PROC.DI.DI_19.BITS[12]._INVERSED
    st = getVariable(17911);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17912 PROGRAM0.DI_PROC.DI.DI_19.BITS[13].VALUE
    st = getVariable(17912);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17913 PROGRAM0.DI_PROC.DI.DI_19.BITS[13].RELIABILITY
    st = getVariable(17913);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17914 PROGRAM0.DI_PROC.DI.DI_19.BITS[13]._INVERSED
    st = getVariable(17914);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17915 PROGRAM0.DI_PROC.DI.DI_19.BITS[14].VALUE
    st = getVariable(17915);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17916 PROGRAM0.DI_PROC.DI.DI_19.BITS[14].RELIABILITY
    st = getVariable(17916);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17917 PROGRAM0.DI_PROC.DI.DI_19.BITS[14]._INVERSED
    st = getVariable(17917);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17918 PROGRAM0.DI_PROC.DI.DI_19.BITS[15].VALUE
    st = getVariable(17918);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17919 PROGRAM0.DI_PROC.DI.DI_19.BITS[15].RELIABILITY
    st = getVariable(17919);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17920 PROGRAM0.DI_PROC.DI.DI_19.BITS[15]._INVERSED
    st = getVariable(17920);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17921 PROGRAM0.DI_PROC.DI.DI_19.BLCONNECT
    st = getVariable(17921);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_19.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_19;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 17922 PROGRAM0.DI_PROC.DI.DI_20.IMIT
    st = getVariable(17922);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 17923 PROGRAM0.DI_PROC.DI.DI_20.VALUE
    st = getVariable(17923);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 17924 PROGRAM0.DI_PROC.DI.DI_20.RELIABILITY
    st = getVariable(17924);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 17925 PROGRAM0.DI_PROC.DI.DI_20.BITS[0].VALUE
    st = getVariable(17925);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17926 PROGRAM0.DI_PROC.DI.DI_20.BITS[0].RELIABILITY
    st = getVariable(17926);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17927 PROGRAM0.DI_PROC.DI.DI_20.BITS[0]._INVERSED
    st = getVariable(17927);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17928 PROGRAM0.DI_PROC.DI.DI_20.BITS[1].VALUE
    st = getVariable(17928);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17929 PROGRAM0.DI_PROC.DI.DI_20.BITS[1].RELIABILITY
    st = getVariable(17929);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17930 PROGRAM0.DI_PROC.DI.DI_20.BITS[1]._INVERSED
    st = getVariable(17930);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17931 PROGRAM0.DI_PROC.DI.DI_20.BITS[2].VALUE
    st = getVariable(17931);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17932 PROGRAM0.DI_PROC.DI.DI_20.BITS[2].RELIABILITY
    st = getVariable(17932);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17933 PROGRAM0.DI_PROC.DI.DI_20.BITS[2]._INVERSED
    st = getVariable(17933);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17934 PROGRAM0.DI_PROC.DI.DI_20.BITS[3].VALUE
    st = getVariable(17934);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17935 PROGRAM0.DI_PROC.DI.DI_20.BITS[3].RELIABILITY
    st = getVariable(17935);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17936 PROGRAM0.DI_PROC.DI.DI_20.BITS[3]._INVERSED
    st = getVariable(17936);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17937 PROGRAM0.DI_PROC.DI.DI_20.BITS[4].VALUE
    st = getVariable(17937);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17938 PROGRAM0.DI_PROC.DI.DI_20.BITS[4].RELIABILITY
    st = getVariable(17938);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17939 PROGRAM0.DI_PROC.DI.DI_20.BITS[4]._INVERSED
    st = getVariable(17939);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17940 PROGRAM0.DI_PROC.DI.DI_20.BITS[5].VALUE
    st = getVariable(17940);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17941 PROGRAM0.DI_PROC.DI.DI_20.BITS[5].RELIABILITY
    st = getVariable(17941);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17942 PROGRAM0.DI_PROC.DI.DI_20.BITS[5]._INVERSED
    st = getVariable(17942);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17943 PROGRAM0.DI_PROC.DI.DI_20.BITS[6].VALUE
    st = getVariable(17943);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17944 PROGRAM0.DI_PROC.DI.DI_20.BITS[6].RELIABILITY
    st = getVariable(17944);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17945 PROGRAM0.DI_PROC.DI.DI_20.BITS[6]._INVERSED
    st = getVariable(17945);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17946 PROGRAM0.DI_PROC.DI.DI_20.BITS[7].VALUE
    st = getVariable(17946);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17947 PROGRAM0.DI_PROC.DI.DI_20.BITS[7].RELIABILITY
    st = getVariable(17947);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17948 PROGRAM0.DI_PROC.DI.DI_20.BITS[7]._INVERSED
    st = getVariable(17948);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17949 PROGRAM0.DI_PROC.DI.DI_20.BITS[8].VALUE
    st = getVariable(17949);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17950 PROGRAM0.DI_PROC.DI.DI_20.BITS[8].RELIABILITY
    st = getVariable(17950);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17951 PROGRAM0.DI_PROC.DI.DI_20.BITS[8]._INVERSED
    st = getVariable(17951);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17952 PROGRAM0.DI_PROC.DI.DI_20.BITS[9].VALUE
    st = getVariable(17952);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17953 PROGRAM0.DI_PROC.DI.DI_20.BITS[9].RELIABILITY
    st = getVariable(17953);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17954 PROGRAM0.DI_PROC.DI.DI_20.BITS[9]._INVERSED
    st = getVariable(17954);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17955 PROGRAM0.DI_PROC.DI.DI_20.BITS[10].VALUE
    st = getVariable(17955);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17956 PROGRAM0.DI_PROC.DI.DI_20.BITS[10].RELIABILITY
    st = getVariable(17956);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17957 PROGRAM0.DI_PROC.DI.DI_20.BITS[10]._INVERSED
    st = getVariable(17957);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17958 PROGRAM0.DI_PROC.DI.DI_20.BITS[11].VALUE
    st = getVariable(17958);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17959 PROGRAM0.DI_PROC.DI.DI_20.BITS[11].RELIABILITY
    st = getVariable(17959);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17960 PROGRAM0.DI_PROC.DI.DI_20.BITS[11]._INVERSED
    st = getVariable(17960);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17961 PROGRAM0.DI_PROC.DI.DI_20.BITS[12].VALUE
    st = getVariable(17961);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17962 PROGRAM0.DI_PROC.DI.DI_20.BITS[12].RELIABILITY
    st = getVariable(17962);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17963 PROGRAM0.DI_PROC.DI.DI_20.BITS[12]._INVERSED
    st = getVariable(17963);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17964 PROGRAM0.DI_PROC.DI.DI_20.BITS[13].VALUE
    st = getVariable(17964);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17965 PROGRAM0.DI_PROC.DI.DI_20.BITS[13].RELIABILITY
    st = getVariable(17965);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17966 PROGRAM0.DI_PROC.DI.DI_20.BITS[13]._INVERSED
    st = getVariable(17966);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17967 PROGRAM0.DI_PROC.DI.DI_20.BITS[14].VALUE
    st = getVariable(17967);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17968 PROGRAM0.DI_PROC.DI.DI_20.BITS[14].RELIABILITY
    st = getVariable(17968);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17969 PROGRAM0.DI_PROC.DI.DI_20.BITS[14]._INVERSED
    st = getVariable(17969);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17970 PROGRAM0.DI_PROC.DI.DI_20.BITS[15].VALUE
    st = getVariable(17970);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17971 PROGRAM0.DI_PROC.DI.DI_20.BITS[15].RELIABILITY
    st = getVariable(17971);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17972 PROGRAM0.DI_PROC.DI.DI_20.BITS[15]._INVERSED
    st = getVariable(17972);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17973 PROGRAM0.DI_PROC.DI.DI_20.BLCONNECT
    st = getVariable(17973);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_20.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_20;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 17974 PROGRAM0.DI_PROC.DI.DI_21.IMIT
    st = getVariable(17974);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.IMIT", 30);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p_BOOL = (BOOL*)&p_STRUCT_DI->IMIT;
    st->value_p = p_BOOL;
  }
  { // 17975 PROGRAM0.DI_PROC.DI.DI_21.VALUE
    st = getVariable(17975);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.VALUE", 31);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p_WORD = (WORD*)&p_STRUCT_DI->VALUE;
    st->value_p = p_WORD;
  }
  { // 17976 PROGRAM0.DI_PROC.DI.DI_21.RELIABILITY
    st = getVariable(17976);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.RELIABILITY", 37);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p_WORD = (WORD*)&p_STRUCT_DI->RELIABILITY;
    st->value_p = p_WORD;
  }
  { // 17977 PROGRAM0.DI_PROC.DI.DI_21.BITS[0].VALUE
    st = getVariable(17977);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[0].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17978 PROGRAM0.DI_PROC.DI.DI_21.BITS[0].RELIABILITY
    st = getVariable(17978);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[0].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17979 PROGRAM0.DI_PROC.DI.DI_21.BITS[0]._INVERSED
    st = getVariable(17979);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[0]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[0];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17980 PROGRAM0.DI_PROC.DI.DI_21.BITS[1].VALUE
    st = getVariable(17980);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[1].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17981 PROGRAM0.DI_PROC.DI.DI_21.BITS[1].RELIABILITY
    st = getVariable(17981);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[1].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17982 PROGRAM0.DI_PROC.DI.DI_21.BITS[1]._INVERSED
    st = getVariable(17982);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[1]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[1];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17983 PROGRAM0.DI_PROC.DI.DI_21.BITS[2].VALUE
    st = getVariable(17983);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[2].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17984 PROGRAM0.DI_PROC.DI.DI_21.BITS[2].RELIABILITY
    st = getVariable(17984);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[2].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17985 PROGRAM0.DI_PROC.DI.DI_21.BITS[2]._INVERSED
    st = getVariable(17985);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[2]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[2];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17986 PROGRAM0.DI_PROC.DI.DI_21.BITS[3].VALUE
    st = getVariable(17986);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[3].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17987 PROGRAM0.DI_PROC.DI.DI_21.BITS[3].RELIABILITY
    st = getVariable(17987);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[3].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17988 PROGRAM0.DI_PROC.DI.DI_21.BITS[3]._INVERSED
    st = getVariable(17988);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[3]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[3];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17989 PROGRAM0.DI_PROC.DI.DI_21.BITS[4].VALUE
    st = getVariable(17989);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[4].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17990 PROGRAM0.DI_PROC.DI.DI_21.BITS[4].RELIABILITY
    st = getVariable(17990);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[4].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17991 PROGRAM0.DI_PROC.DI.DI_21.BITS[4]._INVERSED
    st = getVariable(17991);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[4]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[4];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17992 PROGRAM0.DI_PROC.DI.DI_21.BITS[5].VALUE
    st = getVariable(17992);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[5].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17993 PROGRAM0.DI_PROC.DI.DI_21.BITS[5].RELIABILITY
    st = getVariable(17993);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[5].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17994 PROGRAM0.DI_PROC.DI.DI_21.BITS[5]._INVERSED
    st = getVariable(17994);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[5]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[5];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17995 PROGRAM0.DI_PROC.DI.DI_21.BITS[6].VALUE
    st = getVariable(17995);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[6].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17996 PROGRAM0.DI_PROC.DI.DI_21.BITS[6].RELIABILITY
    st = getVariable(17996);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[6].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 17997 PROGRAM0.DI_PROC.DI.DI_21.BITS[6]._INVERSED
    st = getVariable(17997);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[6]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[6];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 17998 PROGRAM0.DI_PROC.DI.DI_21.BITS[7].VALUE
    st = getVariable(17998);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[7].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 17999 PROGRAM0.DI_PROC.DI.DI_21.BITS[7].RELIABILITY
    st = getVariable(17999);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[7].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 18000 PROGRAM0.DI_PROC.DI.DI_21.BITS[7]._INVERSED
    st = getVariable(18000);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[7]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[7];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 18001 PROGRAM0.DI_PROC.DI.DI_21.BITS[8].VALUE
    st = getVariable(18001);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[8].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 18002 PROGRAM0.DI_PROC.DI.DI_21.BITS[8].RELIABILITY
    st = getVariable(18002);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[8].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 18003 PROGRAM0.DI_PROC.DI.DI_21.BITS[8]._INVERSED
    st = getVariable(18003);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[8]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[8];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 18004 PROGRAM0.DI_PROC.DI.DI_21.BITS[9].VALUE
    st = getVariable(18004);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[9].VALUE", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 18005 PROGRAM0.DI_PROC.DI.DI_21.BITS[9].RELIABILITY
    st = getVariable(18005);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[9].RELIABILITY", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 18006 PROGRAM0.DI_PROC.DI.DI_21.BITS[9]._INVERSED
    st = getVariable(18006);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[9]._INVERSED", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[9];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 18007 PROGRAM0.DI_PROC.DI.DI_21.BITS[10].VALUE
    st = getVariable(18007);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[10].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 18008 PROGRAM0.DI_PROC.DI.DI_21.BITS[10].RELIABILITY
    st = getVariable(18008);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[10].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 18009 PROGRAM0.DI_PROC.DI.DI_21.BITS[10]._INVERSED
    st = getVariable(18009);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[10]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[10];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 18010 PROGRAM0.DI_PROC.DI.DI_21.BITS[11].VALUE
    st = getVariable(18010);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[11].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 18011 PROGRAM0.DI_PROC.DI.DI_21.BITS[11].RELIABILITY
    st = getVariable(18011);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[11].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 18012 PROGRAM0.DI_PROC.DI.DI_21.BITS[11]._INVERSED
    st = getVariable(18012);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[11]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[11];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 18013 PROGRAM0.DI_PROC.DI.DI_21.BITS[12].VALUE
    st = getVariable(18013);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[12].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 18014 PROGRAM0.DI_PROC.DI.DI_21.BITS[12].RELIABILITY
    st = getVariable(18014);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[12].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 18015 PROGRAM0.DI_PROC.DI.DI_21.BITS[12]._INVERSED
    st = getVariable(18015);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[12]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[12];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 18016 PROGRAM0.DI_PROC.DI.DI_21.BITS[13].VALUE
    st = getVariable(18016);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[13].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 18017 PROGRAM0.DI_PROC.DI.DI_21.BITS[13].RELIABILITY
    st = getVariable(18017);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[13].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 18018 PROGRAM0.DI_PROC.DI.DI_21.BITS[13]._INVERSED
    st = getVariable(18018);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[13]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[13];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 18019 PROGRAM0.DI_PROC.DI.DI_21.BITS[14].VALUE
    st = getVariable(18019);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[14].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 18020 PROGRAM0.DI_PROC.DI.DI_21.BITS[14].RELIABILITY
    st = getVariable(18020);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[14].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 18021 PROGRAM0.DI_PROC.DI.DI_21.BITS[14]._INVERSED
    st = getVariable(18021);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[14]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[14];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 18022 PROGRAM0.DI_PROC.DI.DI_21.BITS[15].VALUE
    st = getVariable(18022);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[15].VALUE", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 18023 PROGRAM0.DI_PROC.DI.DI_21.BITS[15].RELIABILITY
    st = getVariable(18023);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[15].RELIABILITY", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 18024 PROGRAM0.DI_PROC.DI.DI_21.BITS[15]._INVERSED
    st = getVariable(18024);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BITS[15]._INVERSED", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t = (__IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t*)&p_STRUCT_DI->BITS;
    p_TYPE_RELIABLEBIT = &p___IEC___ARRAY_OF_TYPE_RELIABLEBIT_16_t->value.table[15];;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 18025 PROGRAM0.DI_PROC.DI.DI_21.BLCONNECT
    st = getVariable(18025);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI.DI_21.BLCONNECT", 35);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_DICONFIG = (DICONFIG*)p_PROC_DI->DI.value;
    p_STRUCT_DI = (STRUCT_DI*)&p_DICONFIG->DI_21;
    p_BOOL = (BOOL*)&p_STRUCT_DI->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 18026 PROGRAM0.DI_PROC.DI_0_1_WVALUE
    st = getVariable(18026);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_0_1_WVALUE", 30);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_0_1_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18027 PROGRAM0.DI_PROC.DI_10_11_WVALUE
    st = getVariable(18027);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_10_11_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_10_11_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18028 PROGRAM0.DI_PROC.DI_12_13_WVALUE
    st = getVariable(18028);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_12_13_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_12_13_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18029 PROGRAM0.DI_PROC.DI_14_15_WVALUE
    st = getVariable(18029);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_14_15_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_14_15_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18030 PROGRAM0.DI_PROC.DI_16_17_WVALUE
    st = getVariable(18030);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_16_17_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_16_17_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18031 PROGRAM0.DI_PROC.DI_18_19_WVALUE
    st = getVariable(18031);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_18_19_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_18_19_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18032 PROGRAM0.DI_PROC.DI_20_21_WVALUE
    st = getVariable(18032);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_20_21_WVALUE", 32);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_20_21_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18033 PROGRAM0.DI_PROC.DI_2_3_WVALUE
    st = getVariable(18033);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_2_3_WVALUE", 30);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_2_3_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18034 PROGRAM0.DI_PROC.DI_4_5_WVALUE
    st = getVariable(18034);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_4_5_WVALUE", 30);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_4_5_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18035 PROGRAM0.DI_PROC.DI_6_7_WVALUE
    st = getVariable(18035);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_6_7_WVALUE", 30);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_6_7_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18036 PROGRAM0.DI_PROC.DI_8_9_WVALUE
    st = getVariable(18036);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.DI_8_9_WVALUE", 30);
    st->size_data = sizeof(UDINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UDINT = (UDINT*)p_PROC_DI->DI_8_9_WVALUE.value;
    UnpackVar(p_UDINT, UDINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18037 PROGRAM0.DI_PROC.A1_12_ERR_MODE
    st = getVariable(18037);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A1_12_ERR_MODE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A1_12_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18038 PROGRAM0.DI_PROC.A1_13_ERR_MODE
    st = getVariable(18038);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A1_13_ERR_MODE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A1_13_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18039 PROGRAM0.DI_PROC.A1_14_ERR_MODE
    st = getVariable(18039);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A1_14_ERR_MODE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A1_14_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18040 PROGRAM0.DI_PROC.A1_15_ERR_MODE
    st = getVariable(18040);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A1_15_ERR_MODE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A1_15_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18041 PROGRAM0.DI_PROC.A2_10_ERR_MODE
    st = getVariable(18041);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_10_ERR_MODE", 31);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_10_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18042 PROGRAM0.DI_PROC.A2_4_ERR_MODE
    st = getVariable(18042);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_4_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_4_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18043 PROGRAM0.DI_PROC.A2_5_ERR_MODE
    st = getVariable(18043);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_5_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_5_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18044 PROGRAM0.DI_PROC.A2_6_ERR_MODE
    st = getVariable(18044);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_6_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_6_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18045 PROGRAM0.DI_PROC.A2_7_ERR_MODE
    st = getVariable(18045);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_7_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_7_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18046 PROGRAM0.DI_PROC.A2_8_ERR_MODE
    st = getVariable(18046);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_8_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_8_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18047 PROGRAM0.DI_PROC.A2_9_ERR_MODE
    st = getVariable(18047);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.A2_9_ERR_MODE", 30);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_UINT = (UINT*)p_PROC_DI->A2_9_ERR_MODE.value;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 18048 PROGRAM0.DI_PROC.ARERR_11.WFLAGS
    st = getVariable(18048);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_11.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_11.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18049 PROGRAM0.DI_PROC.ARERR_11.WVALUE
    st = getVariable(18049);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_11.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_11.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18050 PROGRAM0.DI_PROC.ARERR_11.NANOSEC
    st = getVariable(18050);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_11.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_11.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18051 PROGRAM0.DI_PROC.ARERR_11.RESERVE
    st = getVariable(18051);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_11.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_11.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18052 PROGRAM0.DI_PROC.ARERR_12.WFLAGS
    st = getVariable(18052);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_12.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_12.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18053 PROGRAM0.DI_PROC.ARERR_12.WVALUE
    st = getVariable(18053);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_12.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_12.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18054 PROGRAM0.DI_PROC.ARERR_12.NANOSEC
    st = getVariable(18054);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_12.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_12.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18055 PROGRAM0.DI_PROC.ARERR_12.RESERVE
    st = getVariable(18055);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_12.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_12.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18056 PROGRAM0.DI_PROC.ARERR_13.WFLAGS
    st = getVariable(18056);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_13.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_13.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18057 PROGRAM0.DI_PROC.ARERR_13.WVALUE
    st = getVariable(18057);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_13.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_13.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18058 PROGRAM0.DI_PROC.ARERR_13.NANOSEC
    st = getVariable(18058);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_13.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_13.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18059 PROGRAM0.DI_PROC.ARERR_13.RESERVE
    st = getVariable(18059);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_13.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_13.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18060 PROGRAM0.DI_PROC.ARERR_14.WFLAGS
    st = getVariable(18060);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_14.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_14.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18061 PROGRAM0.DI_PROC.ARERR_14.WVALUE
    st = getVariable(18061);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_14.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_14.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18062 PROGRAM0.DI_PROC.ARERR_14.NANOSEC
    st = getVariable(18062);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_14.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_14.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18063 PROGRAM0.DI_PROC.ARERR_14.RESERVE
    st = getVariable(18063);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_14.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_14.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18064 PROGRAM0.DI_PROC.ARERR_18.WFLAGS
    st = getVariable(18064);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_18.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_18.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18065 PROGRAM0.DI_PROC.ARERR_18.WVALUE
    st = getVariable(18065);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_18.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_18.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18066 PROGRAM0.DI_PROC.ARERR_18.NANOSEC
    st = getVariable(18066);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_18.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_18.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18067 PROGRAM0.DI_PROC.ARERR_18.RESERVE
    st = getVariable(18067);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_18.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_18.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18068 PROGRAM0.DI_PROC.ARERR_19.WFLAGS
    st = getVariable(18068);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_19.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_19.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18069 PROGRAM0.DI_PROC.ARERR_19.WVALUE
    st = getVariable(18069);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_19.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_19.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18070 PROGRAM0.DI_PROC.ARERR_19.NANOSEC
    st = getVariable(18070);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_19.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_19.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18071 PROGRAM0.DI_PROC.ARERR_19.RESERVE
    st = getVariable(18071);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_19.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_19.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18072 PROGRAM0.DI_PROC.ARERR_20.WFLAGS
    st = getVariable(18072);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_20.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_20.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18073 PROGRAM0.DI_PROC.ARERR_20.WVALUE
    st = getVariable(18073);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_20.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_20.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18074 PROGRAM0.DI_PROC.ARERR_20.NANOSEC
    st = getVariable(18074);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_20.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_20.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18075 PROGRAM0.DI_PROC.ARERR_20.RESERVE
    st = getVariable(18075);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_20.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_20.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18076 PROGRAM0.DI_PROC.ARERR_21.WFLAGS
    st = getVariable(18076);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_21.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_21.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18077 PROGRAM0.DI_PROC.ARERR_21.WVALUE
    st = getVariable(18077);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_21.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_21.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18078 PROGRAM0.DI_PROC.ARERR_21.NANOSEC
    st = getVariable(18078);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_21.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_21.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18079 PROGRAM0.DI_PROC.ARERR_21.RESERVE
    st = getVariable(18079);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_21.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_21.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18080 PROGRAM0.DI_PROC.ARERR_22.WFLAGS
    st = getVariable(18080);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_22.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_22.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18081 PROGRAM0.DI_PROC.ARERR_22.WVALUE
    st = getVariable(18081);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_22.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_22.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18082 PROGRAM0.DI_PROC.ARERR_22.NANOSEC
    st = getVariable(18082);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_22.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_22.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18083 PROGRAM0.DI_PROC.ARERR_22.RESERVE
    st = getVariable(18083);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_22.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_22.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18084 PROGRAM0.DI_PROC.ARERR_23.WFLAGS
    st = getVariable(18084);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_23.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_23.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18085 PROGRAM0.DI_PROC.ARERR_23.WVALUE
    st = getVariable(18085);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_23.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_23.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18086 PROGRAM0.DI_PROC.ARERR_23.NANOSEC
    st = getVariable(18086);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_23.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_23.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18087 PROGRAM0.DI_PROC.ARERR_23.RESERVE
    st = getVariable(18087);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_23.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_23.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }
  { // 18088 PROGRAM0.DI_PROC.ARERR_24.WFLAGS
    st = getVariable(18088);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_24.WFLAGS", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_24.value;
    p_UINT = (UINT*)&p_TITEMDIN->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 18089 PROGRAM0.DI_PROC.ARERR_24.WVALUE
    st = getVariable(18089);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_24.WVALUE", 32);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_24.value;
    p_UINT = (UINT*)&p_TITEMDIN->WVALUE;
    st->value_p = p_UINT;
  }
  { // 18090 PROGRAM0.DI_PROC.ARERR_24.NANOSEC
    st = getVariable(18090);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_24.NANOSEC", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_24.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->NANOSEC;
    st->value_p = p_ULINT;
  }
  { // 18091 PROGRAM0.DI_PROC.ARERR_24.RESERVE
    st = getVariable(18091);
    memcpy(st->IEC_TYPE, "ULINT", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.DI_PROC.ARERR_24.RESERVE", 33);
    st->size_data = sizeof(ULINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_DI = (PROC_DI*)&p_PROGRAM0->DI_PROC;
    p_TITEMDIN = (TITEMDIN*)p_PROC_DI->ARERR_24.value;
    p_ULINT = (ULINT*)&p_TITEMDIN->RESERVE;
    st->value_p = p_ULINT;
  }

  return 0;
}

// clang-format on
