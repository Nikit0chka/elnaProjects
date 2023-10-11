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

int __variables_init_FB_TESTDPMG_UST_DPLOW(){
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

  { // 26629 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.INCOMMAND
    st = getVariable(26629);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.INCOMMAND", 54);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_WORD = (WORD*)&p_STRUCT_ANALOGPARAMETR->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 26630 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.INCOMMAND_ALG
    st = getVariable(26630);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.INCOMMAND_ALG", 58);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_WORD = (WORD*)&p_STRUCT_ANALOGPARAMETR->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 26631 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.INCOMMAND_ARM
    st = getVariable(26631);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.INCOMMAND_ARM", 58);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_WORD = (WORD*)&p_STRUCT_ANALOGPARAMETR->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 26632 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.STATUS
    st = getVariable(26632);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.STATUS", 51);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_DWORD = (DWORD*)&p_STRUCT_ANALOGPARAMETR->STATUS;
    st->value_p = p_DWORD;
  }
  { // 26633 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.NEWVALUE
    st = getVariable(26633);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.NEWVALUE", 53);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->NEWVALUE;
    st->value_p = p_LREAL;
  }
  { // 26634 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.CURRENTVALUE
    st = getVariable(26634);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.CURRENTVALUE", 57);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->CURRENTVALUE;
    st->value_p = p_LREAL;
  }
  { // 26635 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MINVAL
    st = getVariable(26635);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MINVAL", 51);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->MINVAL;
    st->value_p = p_LREAL;
  }
  { // 26636 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MAXVAL
    st = getVariable(26636);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MAXVAL", 51);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->MAXVAL;
    st->value_p = p_LREAL;
  }
  { // 26637 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MAXSTEP
    st = getVariable(26637);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MAXSTEP", 52);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->MAXSTEP;
    st->value_p = p_LREAL;
  }
  { // 26638 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MINVAL_ISVALIDREF
    st = getVariable(26638);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MINVAL_ISVALIDREF", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->MINVAL_ISVALIDREF;
    st->value_p = p_BOOL;
  }
  { // 26639 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MAXVAL_ISVALIDREF
    st = getVariable(26639);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MAXVAL_ISVALIDREF", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->MAXVAL_ISVALIDREF;
    st->value_p = p_BOOL;
  }
  { // 26640 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MAXSTEP_ISVALIDREF
    st = getVariable(26640);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.MAXSTEP_ISVALIDREF", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->MAXSTEP_ISVALIDREF;
    st->value_p = p_BOOL;
  }
  { // 26641 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.INOPCCOMMANDSDISABLED
    st = getVariable(26641);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.INOPCCOMMANDSDISABLED", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 26642 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.VALUE
    st = getVariable(26642);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.VALUE", 50);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_LREAL = (LREAL*)&p_STRUCT_ANALOGPARAMETR->VALUE;
    st->value_p = p_LREAL;
  }
  { // 26643 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.ISVALIDVALUE
    st = getVariable(26643);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.ISVALIDVALUE", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->ISVALIDVALUE;
    st->value_p = p_BOOL;
  }
  { // 26644 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.OPCCOMMANDSDISABLED
    st = getVariable(26644);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.STRAP.OPCCOMMANDSDISABLED", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_STRUCT_ANALOGPARAMETR = (STRUCT_ANALOGPARAMETR*)&p_FB_ANALOGPARAMETR->STRAP;
    p_BOOL = (BOOL*)&p_STRUCT_ANALOGPARAMETR->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 26649 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.SOURCE
    st = getVariable(26649);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.SOURCE", 45);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_BYTE = (BYTE*)&p_FB_ANALOGPARAMETR->SOURCE;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26650 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.CMD
    st = getVariable(26650);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.CMD", 42);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_BYTE = (BYTE*)&p_FB_ANALOGPARAMETR->CMD;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26651 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.SOURCE_FOR_STATUS
    st = getVariable(26651);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.SOURCE_FOR_STATUS", 56);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_BYTE = (BYTE*)&p_FB_ANALOGPARAMETR->SOURCE_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26652 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.CMD_FOR_STATUS
    st = getVariable(26652);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.CMD_FOR_STATUS", 53);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_BYTE = (BYTE*)&p_FB_ANALOGPARAMETR->CMD_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26653 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.COMMAND_ERROR_FOR_STATUS
    st = getVariable(26653);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.COMMAND_ERROR_FOR_STATUS", 63);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_BYTE = (BYTE*)&p_FB_ANALOGPARAMETR->COMMAND_ERROR_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26654 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMER.IN
    st = getVariable(26654);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMER.IN", 55);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_TON = (TON*)&p_FB_ANALOGPARAMETR->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 26655 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMER.PT
    st = getVariable(26655);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMER.PT", 55);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_TON = (TON*)&p_FB_ANALOGPARAMETR->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 26656 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMER.Q
    st = getVariable(26656);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMER.Q", 54);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_TON = (TON*)&p_FB_ANALOGPARAMETR->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 26657 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMER.ET
    st = getVariable(26657);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMER.ET", 55);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_TON = (TON*)&p_FB_ANALOGPARAMETR->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 26658 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMER
    st = getVariable(26658);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMER", 52);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_TON = (TON*)&p_FB_ANALOGPARAMETR->RESETCMDTIMER;
    st->value_p = (void *)p_TON;
  }
  { // 26659 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMERPRIZNAK
    st = getVariable(26659);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RESETCMDTIMERPRIZNAK", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_BOOL = (BOOL*)&p_FB_ANALOGPARAMETR->RESETCMDTIMERPRIZNAK;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26660 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.SECONDTACT
    st = getVariable(26660);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.SECONDTACT", 49);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_BOOL = (BOOL*)&p_FB_ANALOGPARAMETR->SECONDTACT;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26661 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.INP
    st = getVariable(26661);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.INP", 42);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_LREAL = (LREAL*)&p_FB_ANALOGPARAMETR->INP;
    UnpackVar(p_LREAL, LREAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 26662 PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RABS
    st = getVariable(26662);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_TESTDPMG_UST_DPLOW.RABS", 43);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_ANALOGPARAMETR = (FB_ANALOGPARAMETR*)&p_PROC_IM->FB_TESTDPMG_UST_DPLOW;
    p_LREAL = (LREAL*)&p_FB_ANALOGPARAMETR->RABS;
    UnpackVar(p_LREAL, LREAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
