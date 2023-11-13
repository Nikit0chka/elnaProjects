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

int __variables_init_FB_TIMER480(){
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

  { // 132224 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.DELAY
    st = getVariable(132224);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.DELAY", 60);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_TIME = (TIME*)&p_FB_PH_TIMER->DELAY;
    UnpackVar(p_TIME, TIME_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 132225 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.PHASENUMBER
    st = getVariable(132225);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.PHASENUMBER", 66);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_UINT = (UINT*)&p_FB_PH_TIMER->PHASENUMBER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 132226 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.RUN
    st = getVariable(132226);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.RUN", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RUN;
    st->value_p = p_BOOL;
  }
  { // 132227 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.RESET
    st = getVariable(132227);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.RESET", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RESET;
    st->value_p = p_BOOL;
  }
  { // 132228 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.START
    st = getVariable(132228);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.START", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->START;
    st->value_p = p_BOOL;
  }
  { // 132229 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.ERROR
    st = getVariable(132229);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.ERROR", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->ERROR;
    st->value_p = p_BOOL;
  }
  { // 132230 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.TOP
    st = getVariable(132230);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.TOP", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->TOP;
    st->value_p = p_BOOL;
  }
  { // 132231 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.STARTSTATUS
    st = getVariable(132231);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.STARTSTATUS", 72);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->STARTSTATUS;
    st->value_p = p_DWORD;
  }
  { // 132232 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.ERRORSTATUS
    st = getVariable(132232);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.ERRORSTATUS", 72);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->ERRORSTATUS;
    st->value_p = p_DWORD;
  }
  { // 132233 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.TOPSTATUS
    st = getVariable(132233);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.STRPH.TOPSTATUS", 70);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_TIMER->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->TOPSTATUS;
    st->value_p = p_DWORD;
  }
  { // 132234 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.COMMANDFAULT_TRIG.CLK
    st = getVariable(132234);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.COMMANDFAULT_TRIG.CLK", 76);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 132235 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.COMMANDFAULT_TRIG.Q
    st = getVariable(132235);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.COMMANDFAULT_TRIG.Q", 74);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 132236 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.COMMANDFAULT_TRIG
    st = getVariable(132236);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.COMMANDFAULT_TRIG", 72);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->COMMANDFAULT_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 132237 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.RESET_TRIG.CLK
    st = getVariable(132237);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.RESET_TRIG.CLK", 69);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 132238 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.RESET_TRIG.Q
    st = getVariable(132238);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.RESET_TRIG.Q", 67);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 132239 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.RESET_TRIG
    st = getVariable(132239);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.RESET_TRIG", 65);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_TIMER->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 132240 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.TIMER
    st = getVariable(132240);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480.TIMER", 60);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_UINT = (UINT*)&p_FB_PH_TIMER->TIMER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 132241 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._TIMER.IN
    st = getVariable(132241);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._TIMER.IN", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_TON = (TON*)&p_FB_PH_TIMER->_TIMER;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 132242 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._TIMER.PT
    st = getVariable(132242);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._TIMER.PT", 64);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_TON = (TON*)&p_FB_PH_TIMER->_TIMER;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 132243 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._TIMER.Q
    st = getVariable(132243);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._TIMER.Q", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_TON = (TON*)&p_FB_PH_TIMER->_TIMER;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 132244 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._TIMER.ET
    st = getVariable(132244);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._TIMER.ET", 64);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_TON = (TON*)&p_FB_PH_TIMER->_TIMER;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 132245 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._TIMER
    st = getVariable(132245);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._TIMER", 61);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_TON = (TON*)&p_FB_PH_TIMER->_TIMER;
    st->value_p = (void *)p_TON;
  }
  { // 132246 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._STATUSDUALINPUT.STATUS_NOTDEFINED
    st = getVariable(132246);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._STATUSDUALINPUT.STATUS_NOTDEFINED", 89);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_TIMER->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_NOTDEFINED;
    st->value_p = p_BYTE;
  }
  { // 132247 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._STATUSDUALINPUT.STATUS_ON
    st = getVariable(132247);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._STATUSDUALINPUT.STATUS_ON", 81);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_TIMER->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ON;
    st->value_p = p_BYTE;
  }
  { // 132248 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._STATUSDUALINPUT.STATUS_OFF
    st = getVariable(132248);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._STATUSDUALINPUT.STATUS_OFF", 82);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_TIMER->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_OFF;
    st->value_p = p_BYTE;
  }
  { // 132249 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._STATUSDUALINPUT.STATUS_TRANSITIONAL
    st = getVariable(132249);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._STATUSDUALINPUT.STATUS_TRANSITIONAL", 91);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_TIMER->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_TRANSITIONAL;
    st->value_p = p_BYTE;
  }
  { // 132250 PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._STATUSDUALINPUT.STATUS_ERROR
    st = getVariable(132250);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSK_THIRD_FAZA.FB_TIMER480._STATUSDUALINPUT.STATUS_ERROR", 84);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSK_THIRD_FAZA = (PUSK_THIRD_FAZA*)&p_PROC_ALGORITMS->FB_PUSK_THIRD_FAZA;
    p_FB_PH_TIMER = (FB_PH_TIMER*)&p_PUSK_THIRD_FAZA->FB_TIMER480;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_TIMER->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ERROR;
    st->value_p = p_BYTE;
  }

  return 0;
}

// clang-format on
