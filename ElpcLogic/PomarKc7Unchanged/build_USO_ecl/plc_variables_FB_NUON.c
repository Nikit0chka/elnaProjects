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

int __variables_init_FB_NUON(){
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

  { // 57675 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.PHASENUMBER
    st = getVariable(57675);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.PHASENUMBER", 60);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_UINT = (UINT*)&p_FB_PH_CUSTOMPHASE->PHASENUMBER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 57676 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.RUN
    st = getVariable(57676);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.RUN", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RUN;
    st->value_p = p_BOOL;
  }
  { // 57677 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.RESET
    st = getVariable(57677);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.RESET", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RESET;
    st->value_p = p_BOOL;
  }
  { // 57678 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.START
    st = getVariable(57678);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.START", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->START;
    st->value_p = p_BOOL;
  }
  { // 57679 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.ERROR
    st = getVariable(57679);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.ERROR", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->ERROR;
    st->value_p = p_BOOL;
  }
  { // 57680 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.TOP
    st = getVariable(57680);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.TOP", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->TOP;
    st->value_p = p_BOOL;
  }
  { // 57681 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.STARTSTATUS
    st = getVariable(57681);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.STARTSTATUS", 66);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->STARTSTATUS;
    st->value_p = p_DWORD;
  }
  { // 57682 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.ERRORSTATUS
    st = getVariable(57682);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.ERRORSTATUS", 66);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->ERRORSTATUS;
    st->value_p = p_DWORD;
  }
  { // 57683 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.TOPSTATUS
    st = getVariable(57683);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.STRPH.TOPSTATUS", 64);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->TOPSTATUS;
    st->value_p = p_DWORD;
  }
  { // 57684 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.COMMANDFAULT_TRIG.CLK
    st = getVariable(57684);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.COMMANDFAULT_TRIG.CLK", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 57685 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.COMMANDFAULT_TRIG.Q
    st = getVariable(57685);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.COMMANDFAULT_TRIG.Q", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 57686 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.COMMANDFAULT_TRIG
    st = getVariable(57686);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.COMMANDFAULT_TRIG", 66);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->COMMANDFAULT_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 57687 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.RESET_TRIG.CLK
    st = getVariable(57687);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.RESET_TRIG.CLK", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 57688 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.RESET_TRIG.Q
    st = getVariable(57688);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.RESET_TRIG.Q", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 57689 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.RESET_TRIG
    st = getVariable(57689);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON.RESET_TRIG", 59);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 57690 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON._STATUSDUALINPUT.STATUS_NOTDEFINED
    st = getVariable(57690);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON._STATUSDUALINPUT.STATUS_NOTDEFINED", 83);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_CUSTOMPHASE->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_NOTDEFINED;
    st->value_p = p_BYTE;
  }
  { // 57691 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON._STATUSDUALINPUT.STATUS_ON
    st = getVariable(57691);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON._STATUSDUALINPUT.STATUS_ON", 75);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_CUSTOMPHASE->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ON;
    st->value_p = p_BYTE;
  }
  { // 57692 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON._STATUSDUALINPUT.STATUS_OFF
    st = getVariable(57692);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON._STATUSDUALINPUT.STATUS_OFF", 76);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_CUSTOMPHASE->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_OFF;
    st->value_p = p_BYTE;
  }
  { // 57693 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON._STATUSDUALINPUT.STATUS_TRANSITIONAL
    st = getVariable(57693);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON._STATUSDUALINPUT.STATUS_TRANSITIONAL", 85);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_CUSTOMPHASE->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_TRANSITIONAL;
    st->value_p = p_BYTE;
  }
  { // 57694 PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON._STATUSDUALINPUT.STATUS_ERROR
    st = getVariable(57694);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKOILSYSTEM.FB_NUON._STATUSDUALINPUT.STATUS_ERROR", 78);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_PUSKOILSYSTEMALG = (FB_PUSKOILSYSTEMALG*)&p_PROC_ALGORITMS->FB_PUSKOILSYSTEM;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_FB_PUSKOILSYSTEMALG->FB_NUON;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_CUSTOMPHASE->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ERROR;
    st->value_p = p_BYTE;
  }
  { // 103896 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.PHASENUMBER
    st = getVariable(103896);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.PHASENUMBER", 58);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_UINT = (UINT*)&p_FB_PH_CUSTOMPHASE->PHASENUMBER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 103897 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.RUN
    st = getVariable(103897);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.RUN", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RUN;
    st->value_p = p_BOOL;
  }
  { // 103898 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.RESET
    st = getVariable(103898);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.RESET", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RESET;
    st->value_p = p_BOOL;
  }
  { // 103899 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.START
    st = getVariable(103899);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.START", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->START;
    st->value_p = p_BOOL;
  }
  { // 103900 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.ERROR
    st = getVariable(103900);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.ERROR", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->ERROR;
    st->value_p = p_BOOL;
  }
  { // 103901 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.TOP
    st = getVariable(103901);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.TOP", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->TOP;
    st->value_p = p_BOOL;
  }
  { // 103902 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.STARTSTATUS
    st = getVariable(103902);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.STARTSTATUS", 64);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->STARTSTATUS;
    st->value_p = p_DWORD;
  }
  { // 103903 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.ERRORSTATUS
    st = getVariable(103903);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.ERRORSTATUS", 64);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->ERRORSTATUS;
    st->value_p = p_DWORD;
  }
  { // 103904 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.TOPSTATUS
    st = getVariable(103904);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.STRPH.TOPSTATUS", 62);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_CUSTOMPHASE->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->TOPSTATUS;
    st->value_p = p_DWORD;
  }
  { // 103905 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.COMMANDFAULT_TRIG.CLK
    st = getVariable(103905);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.COMMANDFAULT_TRIG.CLK", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 103906 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.COMMANDFAULT_TRIG.Q
    st = getVariable(103906);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.COMMANDFAULT_TRIG.Q", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 103907 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.COMMANDFAULT_TRIG
    st = getVariable(103907);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.COMMANDFAULT_TRIG", 64);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->COMMANDFAULT_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 103908 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.RESET_TRIG.CLK
    st = getVariable(103908);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.RESET_TRIG.CLK", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 103909 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.RESET_TRIG.Q
    st = getVariable(103909);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.RESET_TRIG.Q", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 103910 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.RESET_TRIG
    st = getVariable(103910);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON.RESET_TRIG", 57);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_CUSTOMPHASE->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 103911 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON._STATUSDUALINPUT.STATUS_NOTDEFINED
    st = getVariable(103911);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON._STATUSDUALINPUT.STATUS_NOTDEFINED", 81);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_CUSTOMPHASE->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_NOTDEFINED;
    st->value_p = p_BYTE;
  }
  { // 103912 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON._STATUSDUALINPUT.STATUS_ON
    st = getVariable(103912);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON._STATUSDUALINPUT.STATUS_ON", 73);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_CUSTOMPHASE->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ON;
    st->value_p = p_BYTE;
  }
  { // 103913 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON._STATUSDUALINPUT.STATUS_OFF
    st = getVariable(103913);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON._STATUSDUALINPUT.STATUS_OFF", 74);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_CUSTOMPHASE->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_OFF;
    st->value_p = p_BYTE;
  }
  { // 103914 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON._STATUSDUALINPUT.STATUS_TRANSITIONAL
    st = getVariable(103914);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON._STATUSDUALINPUT.STATUS_TRANSITIONAL", 83);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_CUSTOMPHASE->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_TRANSITIONAL;
    st->value_p = p_BYTE;
  }
  { // 103915 PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON._STATUSDUALINPUT.STATUS_ERROR
    st = getVariable(103915);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_TESTDPMGALG.FB_NUON._STATUSDUALINPUT.STATUS_ERROR", 76);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_TESTDPMGALG = (TESTDPMGALG*)&p_PROC_ALGORITMS->FB_TESTDPMGALG;
    p_FB_PH_CUSTOMPHASE = (FB_PH_CUSTOMPHASE*)&p_TESTDPMGALG->FB_NUON;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_CUSTOMPHASE->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ERROR;
    st->value_p = p_BYTE;
  }

  return 0;
}

// clang-format on
