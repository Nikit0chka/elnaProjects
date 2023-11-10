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

int __variables_init_FB_AO_KNOPKA_IND(){
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
  STRUCT_AI *p_STRUCT_AI;
  DWORD *p_DWORD;
  BYTE *p_BYTE;
  WORD *p_WORD;
  TIME *p_TIME;
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

  { // 26808 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.SIGNAL
    st = getVariable(26808);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.SIGNAL", 40);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_BOOL = (BOOL*)&p_FB_SINGLEOUTPUT->SIGNAL;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26809 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.WAIT_TIME
    st = getVariable(26809);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.WAIT_TIME", 50);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_TIME = (TIME*)&p_STRUCT_SINGLEOUTPUT->WAIT_TIME;
    st->value_p = p_TIME;
  }
  { // 26810 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.INCOMMAND
    st = getVariable(26810);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.INCOMMAND", 50);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_WORD = (WORD*)&p_STRUCT_SINGLEOUTPUT->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 26811 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.INOPCCOMMANDSDISABLED
    st = getVariable(26811);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.INOPCCOMMANDSDISABLED", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_BOOL = (BOOL*)&p_STRUCT_SINGLEOUTPUT->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 26812 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.Q
    st = getVariable(26812);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.Q", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_BOOL = (BOOL*)&p_STRUCT_SINGLEOUTPUT->Q;
    st->value_p = p_BOOL;
  }
  { // 26813 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.STATUS
    st = getVariable(26813);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.STATUS", 47);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_DWORD = (DWORD*)&p_STRUCT_SINGLEOUTPUT->STATUS;
    st->value_p = p_DWORD;
  }
  { // 26814 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.OPCCOMMANDSDISABLED
    st = getVariable(26814);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.OPCCOMMANDSDISABLED", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_BOOL = (BOOL*)&p_STRUCT_SINGLEOUTPUT->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 26815 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.INCOMMAND_ALG
    st = getVariable(26815);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.INCOMMAND_ALG", 54);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_WORD = (WORD*)&p_STRUCT_SINGLEOUTPUT->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 26816 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.INCOMMAND_ARM
    st = getVariable(26816);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.STR_SO.INCOMMAND_ARM", 54);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_WORD = (WORD*)&p_STRUCT_SINGLEOUTPUT->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 26817 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMER.IN
    st = getVariable(26817);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMER.IN", 47);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->PULSETIMER;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 26818 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMER.PT
    st = getVariable(26818);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMER.PT", 47);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->PULSETIMER;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 26819 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMER.Q
    st = getVariable(26819);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMER.Q", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->PULSETIMER;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 26820 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMER.ET
    st = getVariable(26820);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMER.ET", 47);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->PULSETIMER;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 26821 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMER
    st = getVariable(26821);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMER", 44);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->PULSETIMER;
    st->value_p = (void *)p_TON;
  }
  { // 26822 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMER.IN
    st = getVariable(26822);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMER.IN", 50);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 26823 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMER.PT
    st = getVariable(26823);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMER.PT", 50);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 26824 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMER.Q
    st = getVariable(26824);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMER.Q", 49);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 26825 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMER.ET
    st = getVariable(26825);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMER.ET", 50);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 26826 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMER
    st = getVariable(26826);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMER", 47);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->RESETCMDTIMER;
    st->value_p = (void *)p_TON;
  }
  { // 26827 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.TON_COMMAND.IN
    st = getVariable(26827);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.TON_COMMAND.IN", 48);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->TON_COMMAND;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 26828 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.TON_COMMAND.PT
    st = getVariable(26828);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.TON_COMMAND.PT", 48);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->TON_COMMAND;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 26829 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.TON_COMMAND.Q
    st = getVariable(26829);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.TON_COMMAND.Q", 47);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->TON_COMMAND;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 26830 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.TON_COMMAND.ET
    st = getVariable(26830);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.TON_COMMAND.ET", 48);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->TON_COMMAND;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 26831 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.TON_COMMAND
    st = getVariable(26831);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.TON_COMMAND", 45);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->TON_COMMAND;
    st->value_p = (void *)p_TON;
  }
  { // 26832 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.SOURCE
    st = getVariable(26832);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.SOURCE", 40);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->SOURCE;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26833 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.CMD
    st = getVariable(26833);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.CMD", 37);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->CMD;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26834 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.LASTCMD
    st = getVariable(26834);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.LASTCMD", 41);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->LASTCMD;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26835 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.SOURCE_FOR_STATUS
    st = getVariable(26835);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.SOURCE_FOR_STATUS", 51);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->SOURCE_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26836 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.CMD_FOR_STATUS
    st = getVariable(26836);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.CMD_FOR_STATUS", 48);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->CMD_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26837 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.COMMAND_ERROR_FOR_STATUS
    st = getVariable(26837);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.COMMAND_ERROR_FOR_STATUS", 58);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->COMMAND_ERROR_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26838 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMERPRIZNAK
    st = getVariable(26838);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.PULSETIMERPRIZNAK", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_BOOL = (BOOL*)&p_FB_SINGLEOUTPUT->PULSETIMERPRIZNAK;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26839 PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMERPRIZNAK
    st = getVariable(26839);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AO_KNOPKA_IND.RESETCMDTIMERPRIZNAK", 54);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_AO_KNOPKA_IND;
    p_BOOL = (BOOL*)&p_FB_SINGLEOUTPUT->RESETCMDTIMERPRIZNAK;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
