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

int __variables_init_FB_U_LAMP_SHU(){
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
  PUSK_FIRST_FAZA1 *p_PUSK_FIRST_FAZA1;
  PUSK_FIRST_FAZA2 *p_PUSK_FIRST_FAZA2;
  PUSK_THIRD_FAZA *p_PUSK_THIRD_FAZA;
  PROV_PMS *p_PROV_PMS;
  PROV_OPRESSOVKA *p_PROV_OPRESSOVKA;
  PUSK_SECOND_FAZA_CHASTOTNY *p_PUSK_SECOND_FAZA_CHASTOTNY;
  PUSK_SECOND_FAZA_REACTOR *p_PUSK_SECOND_FAZA_REACTOR;
  FB_ALGORITMSMANAGER *p_FB_ALGORITMSMANAGER;
  FB_PROTECTIONSMANAGER *p_FB_PROTECTIONSMANAGER;

  { // 26841 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.SIGNAL
    st = getVariable(26841);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.SIGNAL", 37);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_BOOL = (BOOL*)&p_FB_SINGLEOUTPUT->SIGNAL;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26842 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.WAIT_TIME
    st = getVariable(26842);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.WAIT_TIME", 47);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_TIME = (TIME*)&p_STRUCT_SINGLEOUTPUT->WAIT_TIME;
    st->value_p = p_TIME;
  }
  { // 26843 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.INCOMMAND
    st = getVariable(26843);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.INCOMMAND", 47);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_WORD = (WORD*)&p_STRUCT_SINGLEOUTPUT->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 26844 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.INOPCCOMMANDSDISABLED
    st = getVariable(26844);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.INOPCCOMMANDSDISABLED", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_BOOL = (BOOL*)&p_STRUCT_SINGLEOUTPUT->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 26845 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.Q
    st = getVariable(26845);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.Q", 39);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_BOOL = (BOOL*)&p_STRUCT_SINGLEOUTPUT->Q;
    st->value_p = p_BOOL;
  }
  { // 26846 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.STATUS
    st = getVariable(26846);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.STATUS", 44);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_DWORD = (DWORD*)&p_STRUCT_SINGLEOUTPUT->STATUS;
    st->value_p = p_DWORD;
  }
  { // 26847 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.OPCCOMMANDSDISABLED
    st = getVariable(26847);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.OPCCOMMANDSDISABLED", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_BOOL = (BOOL*)&p_STRUCT_SINGLEOUTPUT->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 26848 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.INCOMMAND_ALG
    st = getVariable(26848);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.INCOMMAND_ALG", 51);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_WORD = (WORD*)&p_STRUCT_SINGLEOUTPUT->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 26849 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.INCOMMAND_ARM
    st = getVariable(26849);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.STR_SO.INCOMMAND_ARM", 51);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_STRUCT_SINGLEOUTPUT = (STRUCT_SINGLEOUTPUT*)&p_FB_SINGLEOUTPUT->STR_SO;
    p_WORD = (WORD*)&p_STRUCT_SINGLEOUTPUT->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 26850 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMER.IN
    st = getVariable(26850);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMER.IN", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->PULSETIMER;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 26851 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMER.PT
    st = getVariable(26851);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMER.PT", 44);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->PULSETIMER;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 26852 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMER.Q
    st = getVariable(26852);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMER.Q", 43);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->PULSETIMER;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 26853 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMER.ET
    st = getVariable(26853);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMER.ET", 44);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->PULSETIMER;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 26854 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMER
    st = getVariable(26854);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMER", 41);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->PULSETIMER;
    st->value_p = (void *)p_TON;
  }
  { // 26855 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMER.IN
    st = getVariable(26855);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMER.IN", 47);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 26856 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMER.PT
    st = getVariable(26856);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMER.PT", 47);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 26857 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMER.Q
    st = getVariable(26857);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMER.Q", 46);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 26858 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMER.ET
    st = getVariable(26858);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMER.ET", 47);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 26859 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMER
    st = getVariable(26859);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMER", 44);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->RESETCMDTIMER;
    st->value_p = (void *)p_TON;
  }
  { // 26860 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.TON_COMMAND.IN
    st = getVariable(26860);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.TON_COMMAND.IN", 45);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->TON_COMMAND;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 26861 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.TON_COMMAND.PT
    st = getVariable(26861);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.TON_COMMAND.PT", 45);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->TON_COMMAND;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 26862 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.TON_COMMAND.Q
    st = getVariable(26862);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.TON_COMMAND.Q", 44);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->TON_COMMAND;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 26863 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.TON_COMMAND.ET
    st = getVariable(26863);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.TON_COMMAND.ET", 45);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->TON_COMMAND;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 26864 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.TON_COMMAND
    st = getVariable(26864);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.TON_COMMAND", 42);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_TON = (TON*)&p_FB_SINGLEOUTPUT->TON_COMMAND;
    st->value_p = (void *)p_TON;
  }
  { // 26865 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.SOURCE
    st = getVariable(26865);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.SOURCE", 37);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->SOURCE;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26866 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.CMD
    st = getVariable(26866);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.CMD", 34);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->CMD;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26867 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.LASTCMD
    st = getVariable(26867);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.LASTCMD", 38);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->LASTCMD;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26868 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.SOURCE_FOR_STATUS
    st = getVariable(26868);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.SOURCE_FOR_STATUS", 48);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->SOURCE_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26869 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.CMD_FOR_STATUS
    st = getVariable(26869);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.CMD_FOR_STATUS", 45);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->CMD_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26870 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.COMMAND_ERROR_FOR_STATUS
    st = getVariable(26870);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.COMMAND_ERROR_FOR_STATUS", 55);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_BYTE = (BYTE*)&p_FB_SINGLEOUTPUT->COMMAND_ERROR_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26871 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMERPRIZNAK
    st = getVariable(26871);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.PULSETIMERPRIZNAK", 48);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_BOOL = (BOOL*)&p_FB_SINGLEOUTPUT->PULSETIMERPRIZNAK;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26872 PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMERPRIZNAK
    st = getVariable(26872);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_U_LAMP_SHU.RESETCMDTIMERPRIZNAK", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_SINGLEOUTPUT = (FB_SINGLEOUTPUT*)&p_PROC_IM->FB_U_LAMP_SHU;
    p_BOOL = (BOOL*)&p_FB_SINGLEOUTPUT->RESETCMDTIMERPRIZNAK;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
