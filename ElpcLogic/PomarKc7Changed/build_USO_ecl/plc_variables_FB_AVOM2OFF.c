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

int __variables_init_FB_AVOM2OFF(){
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
  FB_DISCRETPARAMETR *p_FB_DISCRETPARAMETR;
  FB_ANALOGPARAMETR *p_FB_ANALOGPARAMETR;
  OPC_IM_GET *p_OPC_IM_GET;
  OPC_IM_SET *p_OPC_IM_SET;
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

  { // 96745 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.INCOMMAND
    st = getVariable(96745);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.INCOMMAND", 60);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_WORD = (WORD*)&p_STRUCT_SWITCH->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 96746 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.STATUS
    st = getVariable(96746);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.STATUS", 57);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_DWORD = (DWORD*)&p_STRUCT_SWITCH->STATUS;
    st->value_p = p_DWORD;
  }
  { // 96747 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ONSTATUS
    st = getVariable(96747);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ONSTATUS", 59);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BYTE = (BYTE*)&p_STRUCT_SWITCH->ONSTATUS;
    st->value_p = p_BYTE;
  }
  { // 96748 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.INOPCCOMMANDSDISABLED
    st = getVariable(96748);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.INOPCCOMMANDSDISABLED", 72);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 96749 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.SDVIG
    st = getVariable(96749);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.SDVIG", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->SDVIG;
    st->value_p = p_BOOL;
  }
  { // 96750 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.NS
    st = getVariable(96750);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.NS", 53);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->NS;
    st->value_p = p_BOOL;
  }
  { // 96751 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.COMMANDFAULT
    st = getVariable(96751);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.COMMANDFAULT", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->COMMANDFAULT;
    st->value_p = p_BOOL;
  }
  { // 96752 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ACCIDENT
    st = getVariable(96752);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ACCIDENT", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ACCIDENT;
    st->value_p = p_BOOL;
  }
  { // 96753 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.AUTO
    st = getVariable(96753);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.AUTO", 55);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->AUTO;
    st->value_p = p_BOOL;
  }
  { // 96754 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.MANUAL
    st = getVariable(96754);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.MANUAL", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->MANUAL;
    st->value_p = p_BOOL;
  }
  { // 96755 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.LOCAL
    st = getVariable(96755);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.LOCAL", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->LOCAL;
    st->value_p = p_BOOL;
  }
  { // 96756 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.DISTANCE
    st = getVariable(96756);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.DISTANCE", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->DISTANCE;
    st->value_p = p_BOOL;
  }
  { // 96757 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ERRORPOWEROFF
    st = getVariable(96757);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ERRORPOWEROFF", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ERRORPOWEROFF;
    st->value_p = p_BOOL;
  }
  { // 96758 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ERRORBLOCK
    st = getVariable(96758);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ERRORBLOCK", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ERRORBLOCK;
    st->value_p = p_BOOL;
  }
  { // 96759 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.BREAKCMDON
    st = getVariable(96759);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.BREAKCMDON", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->BREAKCMDON;
    st->value_p = p_BOOL;
  }
  { // 96760 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.BREAKCMDOFF
    st = getVariable(96760);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.BREAKCMDOFF", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->BREAKCMDOFF;
    st->value_p = p_BOOL;
  }
  { // 96761 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.OPCCOMMANDSDISABLED
    st = getVariable(96761);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.OPCCOMMANDSDISABLED", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 96762 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.LASTCMDISON
    st = getVariable(96762);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.LASTCMDISON", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->LASTCMDISON;
    st->value_p = p_BOOL;
  }
  { // 96763 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_STATON
    st = getVariable(96763);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_STATON", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_STATON;
    st->value_p = p_BOOL;
  }
  { // 96764 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_STATOFF
    st = getVariable(96764);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_STATOFF", 69);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_STATOFF;
    st->value_p = p_BOOL;
  }
  { // 96765 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_CMDON
    st = getVariable(96765);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_CMDON", 67);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_CMDON;
    st->value_p = p_BOOL;
  }
  { // 96766 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_CMDOFF
    st = getVariable(96766);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_CMDOFF", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_CMDOFF;
    st->value_p = p_BOOL;
  }
  { // 96767 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_INBREAKCMDON
    st = getVariable(96767);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_INBREAKCMDON", 74);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_INBREAKCMDON;
    st->value_p = p_BOOL;
  }
  { // 96768 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_INBREAKCMDOFF
    st = getVariable(96768);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.ISVALIDREF_INBREAKCMDOFF", 75);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->ISVALIDREF_INBREAKCMDOFF;
    st->value_p = p_BOOL;
  }
  { // 96769 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.INCOMMAND_ALG
    st = getVariable(96769);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.INCOMMAND_ALG", 64);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_WORD = (WORD*)&p_STRUCT_SWITCH->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 96770 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.INCOMMAND_ARM
    st = getVariable(96770);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.INCOMMAND_ARM", 64);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_WORD = (WORD*)&p_STRUCT_SWITCH->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 96771 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.CMDON
    st = getVariable(96771);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.CMDON", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->CMDON;
    st->value_p = p_BOOL;
  }
  { // 96772 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.CMDOFF
    st = getVariable(96772);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.CMDOFF", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->CMDOFF;
    st->value_p = p_BOOL;
  }
  { // 96773 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.RELIABILITY
    st = getVariable(96773);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.IM.RELIABILITY", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_SWITCH = (STRUCT_SWITCH*)&p_FB_PH_SWITCH->IM;
    p_BOOL = (BOOL*)&p_STRUCT_SWITCH->RELIABILITY;
    st->value_p = p_BOOL;
  }
  { // 96774 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.PHASENUMBER
    st = getVariable(96774);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.PHASENUMBER", 59);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_UINT = (UINT*)&p_FB_PH_SWITCH->PHASENUMBER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 96775 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.RUN
    st = getVariable(96775);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.RUN", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RUN;
    st->value_p = p_BOOL;
  }
  { // 96776 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.RESET
    st = getVariable(96776);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.RESET", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RESET;
    st->value_p = p_BOOL;
  }
  { // 96777 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.START
    st = getVariable(96777);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.START", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->START;
    st->value_p = p_BOOL;
  }
  { // 96778 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.ERROR
    st = getVariable(96778);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.ERROR", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->ERROR;
    st->value_p = p_BOOL;
  }
  { // 96779 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.TOP
    st = getVariable(96779);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.TOP", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->TOP;
    st->value_p = p_BOOL;
  }
  { // 96780 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.STARTSTATUS
    st = getVariable(96780);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.STARTSTATUS", 65);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->STARTSTATUS;
    st->value_p = p_DWORD;
  }
  { // 96781 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.ERRORSTATUS
    st = getVariable(96781);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.ERRORSTATUS", 65);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->ERRORSTATUS;
    st->value_p = p_DWORD;
  }
  { // 96782 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.TOPSTATUS
    st = getVariable(96782);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.STRPH.TOPSTATUS", 63);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_SWITCH->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->TOPSTATUS;
    st->value_p = p_DWORD;
  }
  { // 96783 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.COMMANDFAULT_TRIG.CLK
    st = getVariable(96783);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.COMMANDFAULT_TRIG.CLK", 69);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 96784 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.COMMANDFAULT_TRIG.Q
    st = getVariable(96784);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.COMMANDFAULT_TRIG.Q", 67);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 96785 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.COMMANDFAULT_TRIG
    st = getVariable(96785);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.COMMANDFAULT_TRIG", 65);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->COMMANDFAULT_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 96786 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.RESET_TRIG.CLK
    st = getVariable(96786);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.RESET_TRIG.CLK", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 96787 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.RESET_TRIG.Q
    st = getVariable(96787);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.RESET_TRIG.Q", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 96788 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.RESET_TRIG
    st = getVariable(96788);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF.RESET_TRIG", 58);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_SWITCH->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 96789 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF._STATUSDUALINPUT.STATUS_NOTDEFINED
    st = getVariable(96789);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF._STATUSDUALINPUT.STATUS_NOTDEFINED", 82);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_SWITCH->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_NOTDEFINED;
    st->value_p = p_BYTE;
  }
  { // 96790 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF._STATUSDUALINPUT.STATUS_ON
    st = getVariable(96790);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF._STATUSDUALINPUT.STATUS_ON", 74);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_SWITCH->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ON;
    st->value_p = p_BYTE;
  }
  { // 96791 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF._STATUSDUALINPUT.STATUS_OFF
    st = getVariable(96791);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF._STATUSDUALINPUT.STATUS_OFF", 75);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_SWITCH->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_OFF;
    st->value_p = p_BYTE;
  }
  { // 96792 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF._STATUSDUALINPUT.STATUS_TRANSITIONAL
    st = getVariable(96792);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF._STATUSDUALINPUT.STATUS_TRANSITIONAL", 84);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_SWITCH->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_TRANSITIONAL;
    st->value_p = p_BYTE;
  }
  { // 96793 PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF._STATUSDUALINPUT.STATUS_ERROR
    st = getVariable(96793);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PUSKVALG.FB_AVOM2OFF._STATUSDUALINPUT.STATUS_ERROR", 77);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PUSKVALG = (PUSKVALG*)&p_PROC_ALGORITMS->FB_PUSKVALG;
    p_FB_PH_SWITCH = (FB_PH_SWITCH*)&p_PUSKVALG->FB_AVOM2OFF;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_SWITCH->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ERROR;
    st->value_p = p_BYTE;
  }

  return 0;
}

// clang-format on
