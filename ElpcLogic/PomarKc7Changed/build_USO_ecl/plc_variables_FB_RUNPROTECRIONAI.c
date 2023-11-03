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

int __variables_init_FB_RUNPROTECRIONAI(){
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

  { // 111231 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.CONTROLLIMIT
    st = getVariable(111231);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.CONTROLLIMIT", 76);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BYTE = (BYTE*)&p_STRUCT_AIPROTECTION->CONTROLLIMIT;
    st->value_p = p_BYTE;
  }
  { // 111232 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.DELAY
    st = getVariable(111232);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.DELAY", 69);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_TIME = (TIME*)&p_STRUCT_AIPROTECTION->DELAY;
    st->value_p = p_TIME;
  }
  { // 111233 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INTAG
    st = getVariable(111233);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INTAG", 69);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BYTE = (BYTE*)&p_STRUCT_AIPROTECTION->INTAG;
    st->value_p = p_BYTE;
  }
  { // 111234 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INRUNONSTART
    st = getVariable(111234);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INRUNONSTART", 76);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->INRUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 111235 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INCANRUN
    st = getVariable(111235);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INCANRUN", 72);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->INCANRUN;
    st->value_p = p_BOOL;
  }
  { // 111236 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INOPCCOMMANDSDISABLED
    st = getVariable(111236);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INOPCCOMMANDSDISABLED", 85);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 111237 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INCOMMAND
    st = getVariable(111237);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INCOMMAND", 73);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_WORD = (WORD*)&p_STRUCT_AIPROTECTION->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 111238 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INCOMMAND_ALG
    st = getVariable(111238);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INCOMMAND_ALG", 77);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_WORD = (WORD*)&p_STRUCT_AIPROTECTION->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 111239 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INCOMMAND_ARM
    st = getVariable(111239);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.INCOMMAND_ARM", 77);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_WORD = (WORD*)&p_STRUCT_AIPROTECTION->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 111240 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.TAG
    st = getVariable(111240);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.TAG", 67);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BYTE = (BYTE*)&p_STRUCT_AIPROTECTION->TAG;
    st->value_p = p_BYTE;
  }
  { // 111241 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.STATUS
    st = getVariable(111241);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.STATUS", 70);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_DWORD = (DWORD*)&p_STRUCT_AIPROTECTION->STATUS;
    st->value_p = p_DWORD;
  }
  { // 111242 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.CANRUN
    st = getVariable(111242);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.CANRUN", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->CANRUN;
    st->value_p = p_BOOL;
  }
  { // 111243 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.OPCCOMMANDSDISABLED
    st = getVariable(111243);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.OPCCOMMANDSDISABLED", 83);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 111244 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.ISRUNNING
    st = getVariable(111244);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.ISRUNNING", 73);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->ISRUNNING;
    st->value_p = p_BOOL;
  }
  { // 111245 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.HASERROR
    st = getVariable(111245);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.HASERROR", 72);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->HASERROR;
    st->value_p = p_BOOL;
  }
  { // 111246 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.ISENDED
    st = getVariable(111246);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.ISENDED", 71);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->ISENDED;
    st->value_p = p_BOOL;
  }
  { // 111247 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.REMONT
    st = getVariable(111247);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.REMONT", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->REMONT;
    st->value_p = p_BOOL;
  }
  { // 111248 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.CHECK
    st = getVariable(111248);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.CHECK", 69);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->CHECK;
    st->value_p = p_BOOL;
  }
  { // 111249 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.SIGNALING
    st = getVariable(111249);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.SIGNALING", 73);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->SIGNALING;
    st->value_p = p_BOOL;
  }
  { // 111250 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.SIGNALINGTP
    st = getVariable(111250);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.SIGNALINGTP", 75);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->SIGNALINGTP;
    st->value_p = p_BOOL;
  }
  { // 111251 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.RUNONSTART
    st = getVariable(111251);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRAIP.RUNONSTART", 74);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_PH_AIPROTECTION->STRAIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->RUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 111252 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.PHASENUMBER
    st = getVariable(111252);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.PHASENUMBER", 68);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_UINT = (UINT*)&p_FB_PH_AIPROTECTION->PHASENUMBER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 111253 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.RUN
    st = getVariable(111253);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.RUN", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_AIPROTECTION->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RUN;
    st->value_p = p_BOOL;
  }
  { // 111254 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.RESET
    st = getVariable(111254);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.RESET", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_AIPROTECTION->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RESET;
    st->value_p = p_BOOL;
  }
  { // 111255 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.START
    st = getVariable(111255);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.START", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_AIPROTECTION->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->START;
    st->value_p = p_BOOL;
  }
  { // 111256 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.ERROR
    st = getVariable(111256);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.ERROR", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_AIPROTECTION->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->ERROR;
    st->value_p = p_BOOL;
  }
  { // 111257 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.TOP
    st = getVariable(111257);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.TOP", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_AIPROTECTION->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->TOP;
    st->value_p = p_BOOL;
  }
  { // 111258 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.STARTSTATUS
    st = getVariable(111258);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.STARTSTATUS", 74);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_AIPROTECTION->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->STARTSTATUS;
    st->value_p = p_DWORD;
  }
  { // 111259 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.ERRORSTATUS
    st = getVariable(111259);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.ERRORSTATUS", 74);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_AIPROTECTION->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->ERRORSTATUS;
    st->value_p = p_DWORD;
  }
  { // 111260 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.TOPSTATUS
    st = getVariable(111260);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.STRPH.TOPSTATUS", 72);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_AIPROTECTION->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->TOPSTATUS;
    st->value_p = p_DWORD;
  }
  { // 111261 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.COMMANDFAULT_TRIG.CLK
    st = getVariable(111261);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.COMMANDFAULT_TRIG.CLK", 78);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_AIPROTECTION->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 111262 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.COMMANDFAULT_TRIG.Q
    st = getVariable(111262);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.COMMANDFAULT_TRIG.Q", 76);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_AIPROTECTION->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 111263 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.COMMANDFAULT_TRIG
    st = getVariable(111263);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.COMMANDFAULT_TRIG", 74);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_AIPROTECTION->COMMANDFAULT_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 111264 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.RESET_TRIG.CLK
    st = getVariable(111264);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.RESET_TRIG.CLK", 71);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_AIPROTECTION->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 111265 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.RESET_TRIG.Q
    st = getVariable(111265);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.RESET_TRIG.Q", 69);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_AIPROTECTION->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 111266 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.RESET_TRIG
    st = getVariable(111266);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI.RESET_TRIG", 67);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_AIPROTECTION->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 111267 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI._STATUSDUALINPUT.STATUS_NOTDEFINED
    st = getVariable(111267);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI._STATUSDUALINPUT.STATUS_NOTDEFINED", 91);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_AIPROTECTION->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_NOTDEFINED;
    st->value_p = p_BYTE;
  }
  { // 111268 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI._STATUSDUALINPUT.STATUS_ON
    st = getVariable(111268);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI._STATUSDUALINPUT.STATUS_ON", 83);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_AIPROTECTION->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ON;
    st->value_p = p_BYTE;
  }
  { // 111269 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI._STATUSDUALINPUT.STATUS_OFF
    st = getVariable(111269);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI._STATUSDUALINPUT.STATUS_OFF", 84);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_AIPROTECTION->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_OFF;
    st->value_p = p_BYTE;
  }
  { // 111270 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI._STATUSDUALINPUT.STATUS_TRANSITIONAL
    st = getVariable(111270);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI._STATUSDUALINPUT.STATUS_TRANSITIONAL", 93);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_AIPROTECTION->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_TRANSITIONAL;
    st->value_p = p_BYTE;
  }
  { // 111271 PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI._STATUSDUALINPUT.STATUS_ERROR
    st = getVariable(111271);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTPMSALG.FB_RUNPROTECRIONAI._STATUSDUALINPUT.STATUS_ERROR", 86);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTPMSALG = (TESTPMSALG*)&p_PROC_ALGORITMS->FB_TESTPMSALG;
    p_FB_PH_AIPROTECTION = (FB_PH_AIPROTECTION*)&p_TESTPMSALG->FB_RUNPROTECRIONAI;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_AIPROTECTION->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ERROR;
    st->value_p = p_BYTE;
  }

  return 0;
}

// clang-format on
