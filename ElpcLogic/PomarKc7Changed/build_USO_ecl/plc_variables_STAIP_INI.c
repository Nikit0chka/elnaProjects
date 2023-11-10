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

int __variables_init_STAIP_INI(){
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

  { // 27265 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.DATA_INI
    st = getVariable(27265);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.DATA_INI", 51);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_BOOL = (BOOL*)&p_FB_AIPROTECTION_INIT->DATA_INI;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27266 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.CONTROLLIMIT
    st = getVariable(27266);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.CONTROLLIMIT", 55);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_BYTE = (BYTE*)&p_FB_AIPROTECTION_INIT->CONTROLLIMIT;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27267 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.DELAY
    st = getVariable(27267);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.DELAY", 48);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_TIME = (TIME*)&p_FB_AIPROTECTION_INIT->DELAY;
    UnpackVar(p_TIME, TIME_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27268 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.INTAG
    st = getVariable(27268);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.INTAG", 48);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_BYTE = (BYTE*)&p_FB_AIPROTECTION_INIT->INTAG;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27269 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.INRUNONSTART
    st = getVariable(27269);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.INRUNONSTART", 55);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_BOOL = (BOOL*)&p_FB_AIPROTECTION_INIT->INRUNONSTART;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27270 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.CONTROLLIMIT
    st = getVariable(27270);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.CONTROLLIMIT", 63);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BYTE = (BYTE*)&p_STRUCT_AIPROTECTION->CONTROLLIMIT;
    st->value_p = p_BYTE;
  }
  { // 27271 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.DELAY
    st = getVariable(27271);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.DELAY", 56);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_TIME = (TIME*)&p_STRUCT_AIPROTECTION->DELAY;
    st->value_p = p_TIME;
  }
  { // 27272 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INTAG
    st = getVariable(27272);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INTAG", 56);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BYTE = (BYTE*)&p_STRUCT_AIPROTECTION->INTAG;
    st->value_p = p_BYTE;
  }
  { // 27273 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INRUNONSTART
    st = getVariable(27273);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INRUNONSTART", 63);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->INRUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 27274 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INCANRUN
    st = getVariable(27274);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INCANRUN", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->INCANRUN;
    st->value_p = p_BOOL;
  }
  { // 27275 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INOPCCOMMANDSDISABLED
    st = getVariable(27275);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INOPCCOMMANDSDISABLED", 72);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 27276 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INCOMMAND
    st = getVariable(27276);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INCOMMAND", 60);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_WORD = (WORD*)&p_STRUCT_AIPROTECTION->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 27277 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INCOMMAND_ALG
    st = getVariable(27277);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INCOMMAND_ALG", 64);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_WORD = (WORD*)&p_STRUCT_AIPROTECTION->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 27278 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INCOMMAND_ARM
    st = getVariable(27278);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.INCOMMAND_ARM", 64);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_WORD = (WORD*)&p_STRUCT_AIPROTECTION->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 27279 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.TAG
    st = getVariable(27279);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.TAG", 54);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BYTE = (BYTE*)&p_STRUCT_AIPROTECTION->TAG;
    st->value_p = p_BYTE;
  }
  { // 27280 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.STATUS
    st = getVariable(27280);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.STATUS", 57);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_DWORD = (DWORD*)&p_STRUCT_AIPROTECTION->STATUS;
    st->value_p = p_DWORD;
  }
  { // 27281 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.CANRUN
    st = getVariable(27281);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.CANRUN", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->CANRUN;
    st->value_p = p_BOOL;
  }
  { // 27282 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.OPCCOMMANDSDISABLED
    st = getVariable(27282);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.OPCCOMMANDSDISABLED", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 27283 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.ISRUNNING
    st = getVariable(27283);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.ISRUNNING", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->ISRUNNING;
    st->value_p = p_BOOL;
  }
  { // 27284 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.HASERROR
    st = getVariable(27284);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.HASERROR", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->HASERROR;
    st->value_p = p_BOOL;
  }
  { // 27285 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.ISENDED
    st = getVariable(27285);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.ISENDED", 58);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->ISENDED;
    st->value_p = p_BOOL;
  }
  { // 27286 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.REMONT
    st = getVariable(27286);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.REMONT", 57);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->REMONT;
    st->value_p = p_BOOL;
  }
  { // 27287 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.CHECK
    st = getVariable(27287);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.CHECK", 56);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->CHECK;
    st->value_p = p_BOOL;
  }
  { // 27288 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.SIGNALING
    st = getVariable(27288);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.SIGNALING", 60);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->SIGNALING;
    st->value_p = p_BOOL;
  }
  { // 27289 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.SIGNALINGTP
    st = getVariable(27289);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.SIGNALINGTP", 62);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->SIGNALINGTP;
    st->value_p = p_BOOL;
  }
  { // 27290 PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.RUNONSTART
    st = getVariable(27290);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.PROTECTIONS_STRUCTS_INI.STAIP_INI.STR_AIP.RUNONSTART", 61);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_PROTECTIONS_INIT = (PROC_PROTECTIONS_INIT*)&p_PROGRAM0->PROTECTIONS_STRUCTS_INI;
    p_FB_AIPROTECTION_INIT = (FB_AIPROTECTION_INIT*)&p_PROC_PROTECTIONS_INIT->STAIP_INI;
    p_STRUCT_AIPROTECTION = (STRUCT_AIPROTECTION*)&p_FB_AIPROTECTION_INIT->STR_AIP;
    p_BOOL = (BOOL*)&p_STRUCT_AIPROTECTION->RUNONSTART;
    st->value_p = p_BOOL;
  }

  return 0;
}

// clang-format on
