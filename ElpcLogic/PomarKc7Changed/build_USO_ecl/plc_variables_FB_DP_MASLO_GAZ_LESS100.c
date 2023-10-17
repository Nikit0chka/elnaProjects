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

int __variables_init_FB_DP_MASLO_GAZ_LESS100(){
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

  { // 26183 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.SIGNAL.VALUE
    st = getVariable(26183);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.SIGNAL.VALUE", 53);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TYPE_RELIABLEBIT = (TYPE_RELIABLEBIT*)&p_FB_SINGLESIGNAL->SIGNAL;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->VALUE;
    st->value_p = p_BOOL;
  }
  { // 26184 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.SIGNAL.RELIABILITY
    st = getVariable(26184);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.SIGNAL.RELIABILITY", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TYPE_RELIABLEBIT = (TYPE_RELIABLEBIT*)&p_FB_SINGLESIGNAL->SIGNAL;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 26185 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.SIGNAL._INVERSED
    st = getVariable(26185);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.SIGNAL._INVERSED", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TYPE_RELIABLEBIT = (TYPE_RELIABLEBIT*)&p_FB_SINGLESIGNAL->SIGNAL;
    p_BOOL = (BOOL*)&p_TYPE_RELIABLEBIT->_INVERSED;
    st->value_p = p_BOOL;
  }
  { // 26186 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.RELIABILITY
    st = getVariable(26186);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.RELIABILITY", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_STRUCT_SINGLESIGNAL = (STRUCT_SINGLESIGNAL*)&p_FB_SINGLESIGNAL->STR_SS;
    p_BOOL = (BOOL*)&p_STRUCT_SINGLESIGNAL->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 26187 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.INVERSE
    st = getVariable(26187);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.INVERSE", 55);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_STRUCT_SINGLESIGNAL = (STRUCT_SINGLESIGNAL*)&p_FB_SINGLESIGNAL->STR_SS;
    p_BOOL = (BOOL*)&p_STRUCT_SINGLESIGNAL->INVERSE;
    st->value_p = p_BOOL;
  }
  { // 26188 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.DELAYON
    st = getVariable(26188);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.DELAYON", 55);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_STRUCT_SINGLESIGNAL = (STRUCT_SINGLESIGNAL*)&p_FB_SINGLESIGNAL->STR_SS;
    p_TIME = (TIME*)&p_STRUCT_SINGLESIGNAL->DELAYON;
    st->value_p = p_TIME;
  }
  { // 26189 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.DELAYOFF
    st = getVariable(26189);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.DELAYOFF", 56);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_STRUCT_SINGLESIGNAL = (STRUCT_SINGLESIGNAL*)&p_FB_SINGLESIGNAL->STR_SS;
    p_TIME = (TIME*)&p_STRUCT_SINGLESIGNAL->DELAYOFF;
    st->value_p = p_TIME;
  }
  { // 26190 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.Q
    st = getVariable(26190);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.Q", 49);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_STRUCT_SINGLESIGNAL = (STRUCT_SINGLESIGNAL*)&p_FB_SINGLESIGNAL->STR_SS;
    p_BOOL = (BOOL*)&p_STRUCT_SINGLESIGNAL->Q;
    st->value_p = p_BOOL;
  }
  { // 26191 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.STATUS
    st = getVariable(26191);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.STATUS", 54);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_STRUCT_SINGLESIGNAL = (STRUCT_SINGLESIGNAL*)&p_FB_SINGLESIGNAL->STR_SS;
    p_DWORD = (DWORD*)&p_STRUCT_SINGLESIGNAL->STATUS;
    st->value_p = p_DWORD;
  }
  { // 26192 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.DISABLED_SIG
    st = getVariable(26192);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.STR_SS.DISABLED_SIG", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_STRUCT_SINGLESIGNAL = (STRUCT_SINGLESIGNAL*)&p_FB_SINGLESIGNAL->STR_SS;
    p_BOOL = (BOOL*)&p_STRUCT_SINGLESIGNAL->DISABLED_SIG;
    st->value_p = p_BOOL;
  }
  { // 26193 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMERON.IN
    st = getVariable(26193);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMERON.IN", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TON = (TON*)&p_FB_SINGLESIGNAL->TIMERON;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 26194 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMERON.PT
    st = getVariable(26194);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMERON.PT", 51);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TON = (TON*)&p_FB_SINGLESIGNAL->TIMERON;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 26195 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMERON.Q
    st = getVariable(26195);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMERON.Q", 50);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TON = (TON*)&p_FB_SINGLESIGNAL->TIMERON;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 26196 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMERON.ET
    st = getVariable(26196);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMERON.ET", 51);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TON = (TON*)&p_FB_SINGLESIGNAL->TIMERON;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 26197 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMERON
    st = getVariable(26197);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMERON", 48);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TON = (TON*)&p_FB_SINGLESIGNAL->TIMERON;
    st->value_p = (void *)p_TON;
  }
  { // 26198 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMEROFF.IN
    st = getVariable(26198);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMEROFF.IN", 52);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TOF = (TOF*)&p_FB_SINGLESIGNAL->TIMEROFF;
    p_BOOL = (BOOL*)&p_TOF->IN;
    st->value_p = p_BOOL;
  }
  { // 26199 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMEROFF.PT
    st = getVariable(26199);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMEROFF.PT", 52);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TOF = (TOF*)&p_FB_SINGLESIGNAL->TIMEROFF;
    p_TIME = (TIME*)&p_TOF->PT;
    st->value_p = p_TIME;
  }
  { // 26200 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMEROFF.Q
    st = getVariable(26200);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMEROFF.Q", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TOF = (TOF*)&p_FB_SINGLESIGNAL->TIMEROFF;
    p_BOOL = (BOOL*)&p_TOF->Q;
    st->value_p = p_BOOL;
  }
  { // 26201 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMEROFF.ET
    st = getVariable(26201);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMEROFF.ET", 52);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TOF = (TOF*)&p_FB_SINGLESIGNAL->TIMEROFF;
    p_TIME = (TIME*)&p_TOF->ET;
    st->value_p = p_TIME;
  }
  { // 26202 PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMEROFF
    st = getVariable(26202);
    memcpy(st->IEC_TYPE, "TOF", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_DP_MASLO_GAZ_LESS100.TIMEROFF", 49);
    st->size_data = sizeof(TOF);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLESIGNAL = (FB_SINGLESIGNAL*)&p_PROC_IM->FB_DP_MASLO_GAZ_LESS100;
    p_TOF = (TOF*)&p_FB_SINGLESIGNAL->TIMEROFF;
    st->value_p = (void *)p_TOF;
  }

  return 0;
}

// clang-format on
