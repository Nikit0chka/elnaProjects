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

int __variables_init_FB_AVOM1OFF(){
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

  { // 98492 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.INCOMMAND
    st = getVariable(98492);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.INCOMMAND", 60);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_WORD = (WORD*)&p_STRUCT_SWITCH->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 98493 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.STATUS
    st = getVariable(98493);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.STATUS", 57);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_DWORD = (DWORD*)&p_STRUCT_SWITCH->STATUS;
    st->value_p = p_DWORD;
  }
  { // 98494 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ONSTATUS
    st = getVariable(98494);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ONSTATUS", 59);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BYTE = (BYTE*)&p_STRUCT_SWITCH->ONSTATUS;
    st->value_p = p_BYTE;
  }
  { // 98495 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.INOPCCOMMANDSDISABLED
    st = getVariable(98495);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.INOPCCOMMANDSDISABLED", 72);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 98496 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.SDVIG
    st = getVariable(98496);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.SDVIG", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->SDVIG;
    st->value_p = p_BOOL;
  }
  { // 98497 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.NS
    st = getVariable(98497);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.NS", 53);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->NS;
    st->value_p = p_BOOL;
  }
  { // 98498 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.COMMANDFAULT
    st = getVariable(98498);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.COMMANDFAULT", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->COMMANDFAULT;
    st->value_p = p_BOOL;
  }
  { // 98499 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ACCIDENT
    st = getVariable(98499);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ACCIDENT", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ACCIDENT;
    st->value_p = p_BOOL;
  }
  { // 98500 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.AUTO
    st = getVariable(98500);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.AUTO", 55);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->AUTO;
    st->value_p = p_BOOL;
  }
  { // 98501 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.MANUAL
    st = getVariable(98501);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.MANUAL", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->MANUAL;
    st->value_p = p_BOOL;
  }
  { // 98502 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.LOCAL
    st = getVariable(98502);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.LOCAL", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->LOCAL;
    st->value_p = p_BOOL;
  }
  { // 98503 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.DISTANCE
    st = getVariable(98503);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.DISTANCE", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->DISTANCE;
    st->value_p = p_BOOL;
  }
  { // 98504 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ERRORPOWEROFF
    st = getVariable(98504);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ERRORPOWEROFF", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ERRORPOWEROFF;
    st->value_p = p_BOOL;
  }
  { // 98505 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ERRORBLOCK
    st = getVariable(98505);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ERRORBLOCK", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ERRORBLOCK;
    st->value_p = p_BOOL;
  }
  { // 98506 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.BREAKCMDON
    st = getVariable(98506);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.BREAKCMDON", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->BREAKCMDON;
    st->value_p = p_BOOL;
  }
  { // 98507 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.BREAKCMDOFF
    st = getVariable(98507);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.BREAKCMDOFF", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->BREAKCMDOFF;
    st->value_p = p_BOOL;
  }
  { // 98508 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.OPCCOMMANDSDISABLED
    st = getVariable(98508);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.OPCCOMMANDSDISABLED", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 98509 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.LASTCMDISON
    st = getVariable(98509);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.LASTCMDISON", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->LASTCMDISON;
    st->value_p = p_BOOL;
  }
  { // 98510 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_STATON
    st = getVariable(98510);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_STATON", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_STATON;
    st->value_p = p_BOOL;
  }
  { // 98511 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_STATOFF
    st = getVariable(98511);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_STATOFF", 69);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_STATOFF;
    st->value_p = p_BOOL;
  }
  { // 98512 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_CMDON
    st = getVariable(98512);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_CMDON", 67);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_CMDON;
    st->value_p = p_BOOL;
  }
  { // 98513 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_CMDOFF
    st = getVariable(98513);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_CMDOFF", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_CMDOFF;
    st->value_p = p_BOOL;
  }
  { // 98514 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_INBREAKCMDON
    st = getVariable(98514);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_INBREAKCMDON", 74);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_INBREAKCMDON;
    st->value_p = p_BOOL;
  }
  { // 98515 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_INBREAKCMDOFF
    st = getVariable(98515);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.ISVALIDREF_INBREAKCMDOFF", 75);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_INBREAKCMDOFF;
    st->value_p = p_BOOL;
  }
  { // 98516 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.INCOMMAND_ALG
    st = getVariable(98516);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.INCOMMAND_ALG", 64);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_WORD = (WORD*)&p_STRUCT_SWITCH->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 98517 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.INCOMMAND_ARM
    st = getVariable(98517);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.INCOMMAND_ARM", 64);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_WORD = (WORD*)&p_STRUCT_SWITCH->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 98518 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.CMDON
    st = getVariable(98518);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.CMDON", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->CMDON;
    st->value_p = p_BOOL;
  }
  { // 98519 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.CMDOFF
    st = getVariable(98519);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.CMDOFF", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->CMDOFF;
    st->value_p = p_BOOL;
  }
  { // 98520 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.RELIABILITY
    st = getVariable(98520);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.IM.RELIABILITY", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 98521 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.PHASENUMBER
    st = getVariable(98521);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.PHASENUMBER", 59);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_UINT = (UINT*)&p_FB_PH_SWITCH->PHASENUMBER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 98522 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.RUN
    st = getVariable(98522);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.RUN", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RUN;
    st->value_p = p_BOOL;
  }
  { // 98523 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.RESET
    st = getVariable(98523);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.RESET", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RESET;
    st->value_p = p_BOOL;
  }
  { // 98524 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.START
    st = getVariable(98524);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.START", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->START;
    st->value_p = p_BOOL;
  }
  { // 98525 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.ERROR
    st = getVariable(98525);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.ERROR", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->ERROR;
    st->value_p = p_BOOL;
  }
  { // 98526 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.TOP
    st = getVariable(98526);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.TOP", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->TOP;
    st->value_p = p_BOOL;
  }
  { // 98527 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.STARTSTATUS
    st = getVariable(98527);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.STARTSTATUS", 65);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->STARTSTATUS;
    st->value_p = p_DWORD;
  }
  { // 98528 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.ERRORSTATUS
    st = getVariable(98528);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.ERRORSTATUS", 65);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->ERRORSTATUS;
    st->value_p = p_DWORD;
  }
  { // 98529 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.TOPSTATUS
    st = getVariable(98529);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.STRPH.TOPSTATUS", 63);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->TOPSTATUS;
    st->value_p = p_DWORD;
  }
  { // 98530 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.COMMANDFAULT_TRIG.CLK
    st = getVariable(98530);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.COMMANDFAULT_TRIG.CLK", 69);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 98531 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.COMMANDFAULT_TRIG.Q
    st = getVariable(98531);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.COMMANDFAULT_TRIG.Q", 67);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 98532 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.COMMANDFAULT_TRIG
    st = getVariable(98532);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.COMMANDFAULT_TRIG", 65);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->COMMANDFAULT_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 98533 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.RESET_TRIG.CLK
    st = getVariable(98533);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.RESET_TRIG.CLK", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 98534 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.RESET_TRIG.Q
    st = getVariable(98534);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.RESET_TRIG.Q", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 98535 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.RESET_TRIG
    st = getVariable(98535);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF.RESET_TRIG", 58);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 98536 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF._STATUSDUALINPUT.STATUS_NOTDEFINED
    st = getVariable(98536);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF._STATUSDUALINPUT.STATUS_NOTDEFINED", 82);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_SWITCH->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_NOTDEFINED;
    st->value_p = p_BYTE;
  }
  { // 98537 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF._STATUSDUALINPUT.STATUS_ON
    st = getVariable(98537);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF._STATUSDUALINPUT.STATUS_ON", 74);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_SWITCH->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ON;
    st->value_p = p_BYTE;
  }
  { // 98538 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF._STATUSDUALINPUT.STATUS_OFF
    st = getVariable(98538);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF._STATUSDUALINPUT.STATUS_OFF", 75);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_SWITCH->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_OFF;
    st->value_p = p_BYTE;
  }
  { // 98539 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF._STATUSDUALINPUT.STATUS_TRANSITIONAL
    st = getVariable(98539);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF._STATUSDUALINPUT.STATUS_TRANSITIONAL", 84);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_SWITCH->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_TRANSITIONAL;
    st->value_p = p_BYTE;
  }
  { // 98540 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF._STATUSDUALINPUT.STATUS_ERROR
    st = getVariable(98540);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM1OFF._STATUSDUALINPUT.STATUS_ERROR", 77);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM1OFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_SWITCH->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ERROR;
    st->value_p = p_BYTE;
  }

  return 0;
}

// clang-format on