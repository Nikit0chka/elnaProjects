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

int __variables_init_FB_WAITVIBEG(){
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

  { // 44765 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.DELAY
    st = getVariable(44765);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.DELAY", 54);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_TIME = (TIME*)&p_FB_PH_TIMER->DELAY;
    UnpackVar(p_TIME, TIME_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 44766 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.PHASENUMBER
    st = getVariable(44766);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.PHASENUMBER", 60);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_UINT = (UINT*)&p_FB_PH_TIMER->PHASENUMBER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 44767 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.RUN
    st = getVariable(44767);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.RUN", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RUN;
    st->value_p = p_BOOL;
  }
  { // 44768 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.RESET
    st = getVariable(44768);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.RESET", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RESET;
    st->value_p = p_BOOL;
  }
  { // 44769 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.START
    st = getVariable(44769);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.START", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->START;
    st->value_p = p_BOOL;
  }
  { // 44770 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.ERROR
    st = getVariable(44770);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.ERROR", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->ERROR;
    st->value_p = p_BOOL;
  }
  { // 44771 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.TOP
    st = getVariable(44771);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.TOP", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->TOP;
    st->value_p = p_BOOL;
  }
  { // 44772 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.STARTSTATUS
    st = getVariable(44772);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.STARTSTATUS", 66);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->STARTSTATUS;
    st->value_p = p_DWORD;
  }
  { // 44773 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.ERRORSTATUS
    st = getVariable(44773);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.ERRORSTATUS", 66);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->ERRORSTATUS;
    st->value_p = p_DWORD;
  }
  { // 44774 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.TOPSTATUS
    st = getVariable(44774);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.STRPH.TOPSTATUS", 64);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->TOPSTATUS;
    st->value_p = p_DWORD;
  }
  { // 44775 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.COMMANDFAULT_TRIG.CLK
    st = getVariable(44775);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.COMMANDFAULT_TRIG.CLK", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 44776 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.COMMANDFAULT_TRIG.Q
    st = getVariable(44776);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.COMMANDFAULT_TRIG.Q", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 44777 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.COMMANDFAULT_TRIG
    st = getVariable(44777);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.COMMANDFAULT_TRIG", 66);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->COMMANDFAULT_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 44778 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.RESET_TRIG.CLK
    st = getVariable(44778);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.RESET_TRIG.CLK", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 44779 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.RESET_TRIG.Q
    st = getVariable(44779);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.RESET_TRIG.Q", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 44780 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.RESET_TRIG
    st = getVariable(44780);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.RESET_TRIG", 59);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 44781 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.TIMER
    st = getVariable(44781);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG.TIMER", 54);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_UINT = (UINT*)&p_FB_PH_TIMER->TIMER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 44782 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._TIMER.IN
    st = getVariable(44782);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._TIMER.IN", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_TON = (TON*)&p_FB_PH_TIMER->_TIMER;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 44783 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._TIMER.PT
    st = getVariable(44783);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._TIMER.PT", 58);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_TON = (TON*)&p_FB_PH_TIMER->_TIMER;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 44784 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._TIMER.Q
    st = getVariable(44784);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._TIMER.Q", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_TON = (TON*)&p_FB_PH_TIMER->_TIMER;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 44785 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._TIMER.ET
    st = getVariable(44785);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._TIMER.ET", 58);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_TON = (TON*)&p_FB_PH_TIMER->_TIMER;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 44786 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._TIMER
    st = getVariable(44786);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._TIMER", 55);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_TON = (TON*)&p_FB_PH_TIMER->_TIMER;
    st->value_p = (void *)p_TON;
  }
  { // 44787 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._STATUSDUALINPUT.STATUS_NOTDEFINED
    st = getVariable(44787);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._STATUSDUALINPUT.STATUS_NOTDEFINED", 83);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_TIMER->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_NOTDEFINED;
    st->value_p = p_BYTE;
  }
  { // 44788 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._STATUSDUALINPUT.STATUS_ON
    st = getVariable(44788);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._STATUSDUALINPUT.STATUS_ON", 75);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_TIMER->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ON;
    st->value_p = p_BYTE;
  }
  { // 44789 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._STATUSDUALINPUT.STATUS_OFF
    st = getVariable(44789);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._STATUSDUALINPUT.STATUS_OFF", 76);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_TIMER->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_OFF;
    st->value_p = p_BYTE;
  }
  { // 44790 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._STATUSDUALINPUT.STATUS_TRANSITIONAL
    st = getVariable(44790);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._STATUSDUALINPUT.STATUS_TRANSITIONAL", 85);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_TIMER->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_TRANSITIONAL;
    st->value_p = p_BYTE;
  }
  { // 44791 PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._STATUSDUALINPUT.STATUS_ERROR
    st = getVariable(44791);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_VIBEGPNS.FB_WAITVIBEG._STATUSDUALINPUT.STATUS_ERROR", 78);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_FB_VIBEGPNSALG = (FB_VIBEGPNSALG*)&p_PROC_ALGORITMS->FB_VIBEGPNS;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_FB_VIBEGPNSALG->FB_WAITVIBEG;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_TIMER->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ERROR;
    st->value_p = p_BYTE;
  }

  return 0;
}

// clang-format on
