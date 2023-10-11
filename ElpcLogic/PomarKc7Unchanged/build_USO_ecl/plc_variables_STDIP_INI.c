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

int __variables_init_STDIP_INI(){
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

  { // 36686 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.DATA_INI
    st = getVariable(36686);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.DATA_INI", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_BOOL = (BOOL*)&p_FB_DIPROTECTION_INIT->DATA_INI;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 36687 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.DELAY
    st = getVariable(36687);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.DELAY", 48);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_TIME = (TIME*)&p_FB_DIPROTECTION_INIT->DELAY;
    UnpackVar(p_TIME, TIME_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 36688 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.INTAG
    st = getVariable(36688);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.INTAG", 48);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_BYTE = (BYTE*)&p_FB_DIPROTECTION_INIT->INTAG;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 36689 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.INRUNONSTART
    st = getVariable(36689);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.INRUNONSTART", 55);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_BOOL = (BOOL*)&p_FB_DIPROTECTION_INIT->INRUNONSTART;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 36690 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.DELAY
    st = getVariable(36690);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.DELAY", 56);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_TIME = (TIME*)&p_STRUCT_DIPROTECTION->DELAY;
    st->value_p = p_TIME;
  }
  { // 36691 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INTAG
    st = getVariable(36691);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INTAG", 56);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BYTE = (BYTE*)&p_STRUCT_DIPROTECTION->INTAG;
    st->value_p = p_BYTE;
  }
  { // 36692 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INRUNONSTART
    st = getVariable(36692);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INRUNONSTART", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->INRUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 36693 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INCANRUN
    st = getVariable(36693);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INCANRUN", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->INCANRUN;
    st->value_p = p_BOOL;
  }
  { // 36694 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INOPCCOMMANDSDISABLED
    st = getVariable(36694);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INOPCCOMMANDSDISABLED", 72);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 36695 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INCOMMAND
    st = getVariable(36695);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INCOMMAND", 60);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_WORD = (WORD*)&p_STRUCT_DIPROTECTION->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 36696 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INCOMMAND_ALG
    st = getVariable(36696);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INCOMMAND_ALG", 64);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_WORD = (WORD*)&p_STRUCT_DIPROTECTION->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 36697 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INCOMMAND_ARM
    st = getVariable(36697);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.INCOMMAND_ARM", 64);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_WORD = (WORD*)&p_STRUCT_DIPROTECTION->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 36698 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.TAG
    st = getVariable(36698);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.TAG", 54);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BYTE = (BYTE*)&p_STRUCT_DIPROTECTION->TAG;
    st->value_p = p_BYTE;
  }
  { // 36699 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.STATUS
    st = getVariable(36699);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.STATUS", 57);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_DWORD = (DWORD*)&p_STRUCT_DIPROTECTION->STATUS;
    st->value_p = p_DWORD;
  }
  { // 36700 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.CANRUN
    st = getVariable(36700);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.CANRUN", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->CANRUN;
    st->value_p = p_BOOL;
  }
  { // 36701 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.OPCCOMMANDSDISABLED
    st = getVariable(36701);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.OPCCOMMANDSDISABLED", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 36702 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.ISRUNNING
    st = getVariable(36702);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.ISRUNNING", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->ISRUNNING;
    st->value_p = p_BOOL;
  }
  { // 36703 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.HASERROR
    st = getVariable(36703);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.HASERROR", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->HASERROR;
    st->value_p = p_BOOL;
  }
  { // 36704 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.ISENDED
    st = getVariable(36704);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.ISENDED", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->ISENDED;
    st->value_p = p_BOOL;
  }
  { // 36705 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.REMONT
    st = getVariable(36705);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.REMONT", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->REMONT;
    st->value_p = p_BOOL;
  }
  { // 36706 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.CHECK
    st = getVariable(36706);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.CHECK", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->CHECK;
    st->value_p = p_BOOL;
  }
  { // 36707 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.SIGNALING
    st = getVariable(36707);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.SIGNALING", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->SIGNALING;
    st->value_p = p_BOOL;
  }
  { // 36708 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.SIGNALINGTP
    st = getVariable(36708);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.SIGNALINGTP", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->SIGNALINGTP;
    st->value_p = p_BOOL;
  }
  { // 36709 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.RUNONSTART
    st = getVariable(36709);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.STR_DIP.RUNONSTART", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_STRUCT_DIPROTECTION = (STRUCT_DIPROTECTION*)&p_FB_DIPROTECTION_INIT->STR_DIP;
    p_BOOL = (BOOL*)&p_STRUCT_DIPROTECTION->RUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 36710 PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.INIT
    st = getVariable(36710);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STDIP_INI.INIT", 47);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_DIPROTECTION_INIT = (FB_DIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STDIP_INI;
    p_BOOL = (BOOL*)&p_FB_DIPROTECTION_INIT->INIT;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on