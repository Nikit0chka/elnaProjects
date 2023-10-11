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

int __variables_init_FB_AUTONU_RESET_HASNU(){
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

  { // 27428 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.NEWVALUE
    st = getVariable(27428);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.NEWVALUE", 53);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR->STRDP;
    p_UINT = (UINT*)&p_STRUCT_DISCRETPARAMETR->NEWVALUE;
    st->value_p = p_UINT;
  }
  { // 27429 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.CURRENTVALUE
    st = getVariable(27429);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.CURRENTVALUE", 57);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR->STRDP;
    p_UINT = (UINT*)&p_STRUCT_DISCRETPARAMETR->CURRENTVALUE;
    st->value_p = p_UINT;
  }
  { // 27430 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.INOPCCOMMANDSDISABLED
    st = getVariable(27430);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.INOPCCOMMANDSDISABLED", 66);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR->STRDP;
    p_BOOL = (BOOL*)&p_STRUCT_DISCRETPARAMETR->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 27431 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.INCOMMAND
    st = getVariable(27431);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.INCOMMAND", 54);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR->STRDP;
    p_WORD = (WORD*)&p_STRUCT_DISCRETPARAMETR->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 27432 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.INCOMMAND_ALG
    st = getVariable(27432);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.INCOMMAND_ALG", 58);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR->STRDP;
    p_WORD = (WORD*)&p_STRUCT_DISCRETPARAMETR->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 27433 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.INCOMMAND_ARM
    st = getVariable(27433);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.INCOMMAND_ARM", 58);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR->STRDP;
    p_WORD = (WORD*)&p_STRUCT_DISCRETPARAMETR->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 27434 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.STATUS
    st = getVariable(27434);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.STATUS", 51);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR->STRDP;
    p_DWORD = (DWORD*)&p_STRUCT_DISCRETPARAMETR->STATUS;
    st->value_p = p_DWORD;
  }
  { // 27435 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.OPCCOMMANDSDISABLED
    st = getVariable(27435);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.OPCCOMMANDSDISABLED", 64);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR->STRDP;
    p_BOOL = (BOOL*)&p_STRUCT_DISCRETPARAMETR->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 27436 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.VALUE
    st = getVariable(27436);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.STRDP.VALUE", 50);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_STRUCT_DISCRETPARAMETR = (STRUCT_DISCRETPARAMETR*)&p_FB_DISCRETPARAMETR->STRDP;
    p_UINT = (UINT*)&p_STRUCT_DISCRETPARAMETR->VALUE;
    st->value_p = p_UINT;
  }
  { // 27441 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.SOURCE
    st = getVariable(27441);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.SOURCE", 45);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_BYTE = (BYTE*)&p_FB_DISCRETPARAMETR->SOURCE;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27442 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.CMD
    st = getVariable(27442);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.CMD", 42);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_BYTE = (BYTE*)&p_FB_DISCRETPARAMETR->CMD;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27443 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.PARAMETR
    st = getVariable(27443);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.PARAMETR", 47);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_BYTE = (BYTE*)&p_FB_DISCRETPARAMETR->PARAMETR;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27444 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.LASTPARAMETR
    st = getVariable(27444);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.LASTPARAMETR", 51);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_BYTE = (BYTE*)&p_FB_DISCRETPARAMETR->LASTPARAMETR;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27445 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.SOURCE_FOR_STATUS
    st = getVariable(27445);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.SOURCE_FOR_STATUS", 56);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_BYTE = (BYTE*)&p_FB_DISCRETPARAMETR->SOURCE_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27446 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.CMD_FOR_STATUS
    st = getVariable(27446);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.CMD_FOR_STATUS", 53);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_BYTE = (BYTE*)&p_FB_DISCRETPARAMETR->CMD_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27447 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.COMMAND_ERROR_FOR_STATUS
    st = getVariable(27447);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.COMMAND_ERROR_FOR_STATUS", 63);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_BYTE = (BYTE*)&p_FB_DISCRETPARAMETR->COMMAND_ERROR_FOR_STATUS;
    UnpackVar(p_BYTE, BYTE_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27448 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMER.IN
    st = getVariable(27448);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMER.IN", 55);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_TON = (TON*)&p_FB_DISCRETPARAMETR->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->IN;
    st->value_p = p_BOOL;
  }
  { // 27449 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMER.PT
    st = getVariable(27449);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMER.PT", 55);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_TON = (TON*)&p_FB_DISCRETPARAMETR->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->PT;
    st->value_p = p_TIME;
  }
  { // 27450 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMER.Q
    st = getVariable(27450);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMER.Q", 54);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_TON = (TON*)&p_FB_DISCRETPARAMETR->RESETCMDTIMER;
    p_BOOL = (BOOL*)&p_TON->Q;
    st->value_p = p_BOOL;
  }
  { // 27451 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMER.ET
    st = getVariable(27451);
    memcpy(st->IEC_TYPE, "TIME", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMER.ET", 55);
    st->size_data = sizeof(TIME);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_TON = (TON*)&p_FB_DISCRETPARAMETR->RESETCMDTIMER;
    p_TIME = (TIME*)&p_TON->ET;
    st->value_p = p_TIME;
  }
  { // 27452 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMER
    st = getVariable(27452);
    memcpy(st->IEC_TYPE, "TON", 3);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMER", 52);
    st->size_data = sizeof(TON);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_TON = (TON*)&p_FB_DISCRETPARAMETR->RESETCMDTIMER;
    st->value_p = (void *)p_TON;
  }
  { // 27453 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMERPRIZNAK
    st = getVariable(27453);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.RESETCMDTIMERPRIZNAK", 59);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_BOOL = (BOOL*)&p_FB_DISCRETPARAMETR->RESETCMDTIMERPRIZNAK;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 27454 PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.SECONDTACT
    st = getVariable(27454);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.IM_PROC.FB_AUTONU_RESET_HASNU.SECONDTACT", 49);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_IM = (PROC_IM*)&p_PROGRAM0->IM_PROC;
    p_FB_DISCRETPARAMETR = (FB_DISCRETPARAMETR*)&p_PROC_IM->FB_AUTONU_RESET_HASNU;
    p_BOOL = (BOOL*)&p_FB_DISCRETPARAMETR->SECONDTACT;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on