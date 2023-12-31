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

int __variables_init_FB_AUTOTEN_OFFTEMPERATURE(){
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

  { // 34303 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.INCOMMAND
    st = getVariable(34303);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.INCOMMAND", 58);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_WORD = (WORD*)&p_STRUCT_ANALOGPARAMETR->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 34304 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.INCOMMAND_ALG
    st = getVariable(34304);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.INCOMMAND_ALG", 62);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_WORD = (WORD*)&p_STRUCT_ANALOGPARAMETR->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 34305 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.INCOMMAND_ARM
    st = getVariable(34305);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.INCOMMAND_ARM", 62);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_WORD = (WORD*)&p_STRUCT_ANALOGPARAMETR->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 34306 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.STATUS
    st = getVariable(34306);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.STATUS", 55);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_DWORD = (DWORD*)&p_STRUCT_ANALOGPARAMETR->STATUS;
    st->value_p = p_DWORD;
  }
  { // 34307 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.NEWVALUE
    st = getVariable(34307);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.NEWVALUE", 57);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->NEWVALUE;
    st->value_p = p_LREAL;
  }
  { // 34308 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.CURRENTVALUE
    st = getVariable(34308);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.CURRENTVALUE", 61);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->CURRENTVALUE;
    st->value_p = p_LREAL;
  }
  { // 34309 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MINVAL
    st = getVariable(34309);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MINVAL", 55);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->MINVAL;
    st->value_p = p_LREAL;
  }
  { // 34310 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MAXVAL
    st = getVariable(34310);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MAXVAL", 55);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->MAXVAL;
    st->value_p = p_LREAL;
  }
  { // 34311 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MAXSTEP
    st = getVariable(34311);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MAXSTEP", 56);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->MAXSTEP;
    st->value_p = p_LREAL;
  }
  { // 34312 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MINVAL_ISVALIDREF
    st = getVariable(34312);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MINVAL_ISVALIDREF", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->MINVAL_ISVALIDREF;
    st->value_p = p_BOOL;
  }
  { // 34313 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MAXVAL_ISVALIDREF
    st = getVariable(34313);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MAXVAL_ISVALIDREF", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->MAXVAL_ISVALIDREF;
    st->value_p = p_BOOL;
  }
  { // 34314 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MAXSTEP_ISVALIDREF
    st = getVariable(34314);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.MAXSTEP_ISVALIDREF", 67);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->MAXSTEP_ISVALIDREF;
    st->value_p = p_BOOL;
  }
  { // 34315 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.INOPCCOMMANDSDISABLED
    st = getVariable(34315);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.INOPCCOMMANDSDISABLED", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 34316 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.VALUE
    st = getVariable(34316);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.VALUE", 54);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->VALUE;
    st->value_p = p_LREAL;
  }
  { // 34317 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.ISVALIDVALUE
    st = getVariable(34317);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.ISVALIDVALUE", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->ISVALIDVALUE;
    st->value_p = p_BOOL;
  }
  { // 34318 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.OPCCOMMANDSDISABLED
    st = getVariable(34318);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.STRAP.OPCCOMMANDSDISABLED", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 34323 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.SOURCE
    st = getVariable(34323);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.SOURCE", 49);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_BYTE = (BYTE*)&p_FB_ANALOGPARAMETR->SOURCE;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 34324 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.CMD
    st = getVariable(34324);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.CMD", 46);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_BYTE = (BYTE*)&p_FB_ANALOGPARAMETR->CMD;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 34325 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.SOURCE_FOR_STATUS
    st = getVariable(34325);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.SOURCE_FOR_STATUS", 60);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_BYTE = (BYTE*)&p_FB_ANALOGPARAMETR->SOURCE_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 34326 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.CMD_FOR_STATUS
    st = getVariable(34326);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.CMD_FOR_STATUS", 57);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_BYTE = (BYTE*)&p_FB_ANALOGPARAMETR->CMD_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 34327 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.COMMAND_ERROR_FOR_STATUS
    st = getVariable(34327);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.COMMAND_ERROR_FOR_STATUS", 67);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_BYTE = (BYTE*)&p_FB_ANALOGPARAMETR->COMMAND_ERROR_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 34328 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMER.IN
    st = getVariable(34328);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMER.IN", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_TON = (TON*)&p_FB_ANALOGPARAMETR->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 34329 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMER.PT
    st = getVariable(34329);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMER.PT", 59);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_TON = (TON*)&p_FB_ANALOGPARAMETR->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 34330 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMER.Q
    st = getVariable(34330);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMER.Q", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_TON = (TON*)&p_FB_ANALOGPARAMETR->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 34331 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMER.ET
    st = getVariable(34331);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMER.ET", 59);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_TON = (TON*)&p_FB_ANALOGPARAMETR->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 34332 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMER
    st = getVariable(34332);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMER", 56);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_TON = (TON*)&p_FB_ANALOGPARAMETR->RESETCMDTIMER;
    st->value_p = (void *)p_TON;
  }
  { // 34333 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMERPRIZNAK
    st = getVariable(34333);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RESETCMDTIMERPRIZNAK", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_BOOL = (BOOL*)&p_FB_ANALOGPARAMETR->RESETCMDTIMERPRIZNAK;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 34334 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.SECONDTACT
    st = getVariable(34334);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.SECONDTACT", 53);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_BOOL = (BOOL*)&p_FB_ANALOGPARAMETR->SECONDTACT;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 34335 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.INP
    st = getVariable(34335);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.INP", 46);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_LREAL = (LREAL*)&p_FB_ANALOGPARAMETR->INP;
    UnpackVar(p_LREAL, LREAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 34336 PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RABS
    st = getVariable(34336);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTOTEN_OFFTEMPERATURE.RABS", 47);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_AUTOTEN_OFFTEMPERATURE;
    p_LREAL = (LREAL*)&p_FB_ANALOGPARAMETR->RABS;
    UnpackVar(p_LREAL, LREAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
