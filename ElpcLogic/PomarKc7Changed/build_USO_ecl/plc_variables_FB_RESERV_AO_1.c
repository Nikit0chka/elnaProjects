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

int __variables_init_FB_RESERV_AO_1(){
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
  FB_ALGORITMSMANAGER *p_FB_ALGORITMSMANAGER;
  FB_PROTECTIONSMANAGER *p_FB_PROTECTIONSMANAGER;

  { // 14091 PROGRAM0.AO_PROC.FB_RESERV_AO_1.OUTCURRENT.WFLAGS
    st = getVariable(14091);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.OUTCURRENT.WFLAGS", 49);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_TDOUBLEDATA = (TDOUBLEDATA*)&p_FB_AOSOURCEMLP->OUTCURRENT;
    p_UINT = (UINT*)&p_TDOUBLEDATA->WFLAGS;
    st->value_p = p_UINT;
  }
  { // 14092 PROGRAM0.AO_PROC.FB_RESERV_AO_1.OUTCURRENT.DBLVALUE
    st = getVariable(14092);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.OUTCURRENT.DBLVALUE", 51);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_TDOUBLEDATA = (TDOUBLEDATA*)&p_FB_AOSOURCEMLP->OUTCURRENT;
    p_LREAL = (LREAL*)&p_TDOUBLEDATA->DBLVALUE;
    st->value_p = p_LREAL;
  }
  { // 14093 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.NVALUE
    st = getVariable(14093);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.NVALUE", 44);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_LREAL = (LREAL*)&p_STRUCT_AO->NVALUE;
    st->value_p = p_LREAL;
  }
  { // 14094 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.BLCONNECT
    st = getVariable(14094);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.BLCONNECT", 47);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_BOOL = (BOOL*)&p_STRUCT_AO->BLCONNECT;
    st->value_p = p_BOOL;
  }
  { // 14095 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.OUTLL
    st = getVariable(14095);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.OUTLL", 43);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_LREAL = (LREAL*)&p_STRUCT_AO->OUTLL;
    st->value_p = p_LREAL;
  }
  { // 14096 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.OUTHL
    st = getVariable(14096);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.OUTHL", 43);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_LREAL = (LREAL*)&p_STRUCT_AO->OUTHL;
    st->value_p = p_LREAL;
  }
  { // 14097 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.NEWLL
    st = getVariable(14097);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.NEWLL", 43);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_LREAL = (LREAL*)&p_STRUCT_AO->NEWLL;
    st->value_p = p_LREAL;
  }
  { // 14098 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.NEWHL
    st = getVariable(14098);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.NEWHL", 43);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_LREAL = (LREAL*)&p_STRUCT_AO->NEWHL;
    st->value_p = p_LREAL;
  }
  { // 14099 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.NEWLL_ISVALIDREF
    st = getVariable(14099);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.NEWLL_ISVALIDREF", 54);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_BOOL = (BOOL*)&p_STRUCT_AO->NEWLL_ISVALIDREF;
    st->value_p = p_BOOL;
  }
  { // 14100 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.NEWHL_ISVALIDREF
    st = getVariable(14100);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.NEWHL_ISVALIDREF", 54);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_BOOL = (BOOL*)&p_STRUCT_AO->NEWHL_ISVALIDREF;
    st->value_p = p_BOOL;
  }
  { // 14101 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.INCOMMAND
    st = getVariable(14101);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.INCOMMAND", 47);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_WORD = (WORD*)&p_STRUCT_AO->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 14102 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.VALUE
    st = getVariable(14102);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.VALUE", 43);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_LREAL = (LREAL*)&p_STRUCT_AO->VALUE;
    st->value_p = p_LREAL;
  }
  { // 14103 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.STATUS
    st = getVariable(14103);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.STATUS", 44);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_DWORD = (DWORD*)&p_STRUCT_AO->STATUS;
    st->value_p = p_DWORD;
  }
  { // 14104 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.LL
    st = getVariable(14104);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.LL", 40);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_LREAL = (LREAL*)&p_STRUCT_AO->LL;
    st->value_p = p_LREAL;
  }
  { // 14105 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.HL
    st = getVariable(14105);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.HL", 40);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_LREAL = (LREAL*)&p_STRUCT_AO->HL;
    st->value_p = p_LREAL;
  }
  { // 14106 PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.OPCCOMMANDSDISABLED
    st = getVariable(14106);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.STRAO.OPCCOMMANDSDISABLED", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_STRUCT_AO = (STRUCT_AO*)&p_FB_AOSOURCEMLP->STRAO;
    p_BOOL = (BOOL*)&p_STRUCT_AO->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 14111 PROGRAM0.AO_PROC.FB_RESERV_AO_1.SOURCE
    st = getVariable(14111);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.SOURCE", 38);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_BYTE = (BYTE*)&p_FB_AOSOURCEMLP->SOURCE;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 14112 PROGRAM0.AO_PROC.FB_RESERV_AO_1.SOURCE_FOR_STATUS
    st = getVariable(14112);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.SOURCE_FOR_STATUS", 49);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_BYTE = (BYTE*)&p_FB_AOSOURCEMLP->SOURCE_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 14113 PROGRAM0.AO_PROC.FB_RESERV_AO_1.CMD
    st = getVariable(14113);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.CMD", 35);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_BYTE = (BYTE*)&p_FB_AOSOURCEMLP->CMD;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 14114 PROGRAM0.AO_PROC.FB_RESERV_AO_1.CMD_FOR_STATUS
    st = getVariable(14114);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.CMD_FOR_STATUS", 46);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_BYTE = (BYTE*)&p_FB_AOSOURCEMLP->CMD_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 14115 PROGRAM0.AO_PROC.FB_RESERV_AO_1.LASTCMD
    st = getVariable(14115);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.LASTCMD", 39);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_BYTE = (BYTE*)&p_FB_AOSOURCEMLP->LASTCMD;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 14116 PROGRAM0.AO_PROC.FB_RESERV_AO_1.COMMAND_ERROR_FOR_STATUS
    st = getVariable(14116);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.COMMAND_ERROR_FOR_STATUS", 56);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_BYTE = (BYTE*)&p_FB_AOSOURCEMLP->COMMAND_ERROR_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 14117 PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMER.IN
    st = getVariable(14117);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMER.IN", 48);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_TON = (TON*)&p_FB_AOSOURCEMLP->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 14118 PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMER.PT
    st = getVariable(14118);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMER.PT", 48);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_TON = (TON*)&p_FB_AOSOURCEMLP->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 14119 PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMER.Q
    st = getVariable(14119);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMER.Q", 47);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_TON = (TON*)&p_FB_AOSOURCEMLP->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 14120 PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMER.ET
    st = getVariable(14120);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMER.ET", 48);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_TON = (TON*)&p_FB_AOSOURCEMLP->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 14121 PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMER
    st = getVariable(14121);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMER", 45);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_TON = (TON*)&p_FB_AOSOURCEMLP->RESETCMDTIMER;
    st->value_p = (void *)p_TON;
  }
  { // 14122 PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMERPRIZNAK
    st = getVariable(14122);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.RESETCMDTIMERPRIZNAK", 52);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_BOOL = (BOOL*)&p_FB_AOSOURCEMLP->RESETCMDTIMERPRIZNAK;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 14123 PROGRAM0.AO_PROC.FB_RESERV_AO_1.SECONDTACK
    st = getVariable(14123);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.SECONDTACK", 42);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_BOOL = (BOOL*)&p_FB_AOSOURCEMLP->SECONDTACK;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 14124 PROGRAM0.AO_PROC.FB_RESERV_AO_1.INOPCCOMMANDSDISABLED
    st = getVariable(14124);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.INOPCCOMMANDSDISABLED", 53);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_BOOL = (BOOL*)&p_FB_AOSOURCEMLP->INOPCCOMMANDSDISABLED;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 14125 PROGRAM0.AO_PROC.FB_RESERV_AO_1.RETAINLL
    st = getVariable(14125);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.RETAINLL", 40);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_LREAL = (LREAL*)&p_FB_AOSOURCEMLP->RETAINLL;
    UnpackVar(p_LREAL, LREAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 14126 PROGRAM0.AO_PROC.FB_RESERV_AO_1.RETAINHL
    st = getVariable(14126);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.AO_PROC.FB_RESERV_AO_1.RETAINHL", 40);
    st->size_data = sizeof(LREAL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_AO = (PROC_AO*)&p_PROGRAM0->AO_PROC;
    p_FB_AOSOURCEMLP = (FB_AOSOURCEMLP*)&p_PROC_AO->FB_RESERV_AO_1;
    p_LREAL = (LREAL*)&p_FB_AOSOURCEMLP->RETAINHL;
    UnpackVar(p_LREAL, LREAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
