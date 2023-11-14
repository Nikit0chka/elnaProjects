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

int __variables_init_(){
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

  { // 170982 RESOURCE1.GMAINT_TIME
    st = getVariable(170982);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.GMAINT_TIME", 21);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__GMAINT_TIME;
    p_REAL = (REAL*)&RESOURCE1__GMAINT_TIME;
    UnpackVar(p_REAL, REAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170983 RESOURCE1.CUR_CYCLE
    st = getVariable(170983);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.CUR_CYCLE", 19);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__CUR_CYCLE;
    p_REAL = (REAL*)&RESOURCE1__CUR_CYCLE;
    UnpackVar(p_REAL, REAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170984 RESOURCE1.GSTART_TMR
    st = getVariable(170984);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.GSTART_TMR", 20);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__GSTART_TMR;
    p_REAL = (REAL*)&RESOURCE1__GSTART_TMR;
    UnpackVar(p_REAL, REAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170985 RESOURCE1.REQ_CYCLE
    st = getVariable(170985);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.REQ_CYCLE", 19);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__REQ_CYCLE;
    p_REAL = (REAL*)&RESOURCE1__REQ_CYCLE;
    UnpackVar(p_REAL, REAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170986 RESOURCE1.GF_T_100MSEC
    st = getVariable(170986);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.GF_T_100MSEC", 22);
    st->size_data = sizeof(BOOL);
    extern BOOL RESOURCE1__GF_T_100MSEC;
    p_BOOL = (BOOL*)&RESOURCE1__GF_T_100MSEC;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170987 RESOURCE1.GT_1SEC
    st = getVariable(170987);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.GT_1SEC", 17);
    st->size_data = sizeof(BOOL);
    extern BOOL RESOURCE1__GT_1SEC;
    p_BOOL = (BOOL*)&RESOURCE1__GT_1SEC;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170988 RESOURCE1.GF_T_1SEC
    st = getVariable(170988);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.GF_T_1SEC", 19);
    st->size_data = sizeof(BOOL);
    extern BOOL RESOURCE1__GF_T_1SEC;
    p_BOOL = (BOOL*)&RESOURCE1__GF_T_1SEC;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170989 RESOURCE1.GT_1MIN
    st = getVariable(170989);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.GT_1MIN", 17);
    st->size_data = sizeof(BOOL);
    extern BOOL RESOURCE1__GT_1MIN;
    p_BOOL = (BOOL*)&RESOURCE1__GT_1MIN;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170990 RESOURCE1.GR_T_1MIN
    st = getVariable(170990);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.GR_T_1MIN", 19);
    st->size_data = sizeof(BOOL);
    extern BOOL RESOURCE1__GR_T_1MIN;
    p_BOOL = (BOOL*)&RESOURCE1__GR_T_1MIN;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170991 RESOURCE1.GF_T_1MIN
    st = getVariable(170991);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.GF_T_1MIN", 19);
    st->size_data = sizeof(BOOL);
    extern BOOL RESOURCE1__GF_T_1MIN;
    p_BOOL = (BOOL*)&RESOURCE1__GF_T_1MIN;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170992 RESOURCE1.T_1SEC
    st = getVariable(170992);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.T_1SEC", 16);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__T_1SEC;
    p_REAL = (REAL*)&RESOURCE1__T_1SEC;
    UnpackVar(p_REAL, REAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170993 RESOURCE1.DEL_T
    st = getVariable(170993);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DEL_T", 15);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__DEL_T;
    p_REAL = (REAL*)&RESOURCE1__DEL_T;
    UnpackVar(p_REAL, REAL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170994 RESOURCE1.NOTHASREZERVNU
    st = getVariable(170994);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.NOTHASREZERVNU", 24);
    st->size_data = sizeof(BOOL);
    extern BOOL RESOURCE1__NOTHASREZERVNU;
    p_BOOL = (BOOL*)&RESOURCE1__NOTHASREZERVNU;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170995 RESOURCE1.RESET_HASNU
    st = getVariable(170995);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.RESET_HASNU", 21);
    st->size_data = sizeof(BOOL);
    extern BOOL RESOURCE1__RESET_HASNU;
    p_BOOL = (BOOL*)&RESOURCE1__RESET_HASNU;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170996 RESOURCE1.AI_KONTROL_PER_220V_HL
    st = getVariable(170996);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_PER_220V_HL", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_PER_220V_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_PER_220V_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170997 RESOURCE1.AI_KONTROL_PER_220V_HW
    st = getVariable(170997);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_PER_220V_HW", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_PER_220V_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_PER_220V_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170998 RESOURCE1.AI_KONTROL_PER_220V_LL
    st = getVariable(170998);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_PER_220V_LL", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_PER_220V_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_PER_220V_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 170999 RESOURCE1.AI_KONTROL_PER_220V_LW
    st = getVariable(170999);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_PER_220V_LW", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_PER_220V_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_PER_220V_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171000 RESOURCE1.AI_KONTROL_PER_220V_COMMAND
    st = getVariable(171000);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_PER_220V_COMMAND", 37);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_KONTROL_PER_220V_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_KONTROL_PER_220V_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171001 RESOURCE1.AI_KONTROL_PER_220V_NEWHL
    st = getVariable(171001);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_PER_220V_NEWHL", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_PER_220V_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_PER_220V_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171002 RESOURCE1.AI_KONTROL_PER_220V_NEWHW
    st = getVariable(171002);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_PER_220V_NEWHW", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_PER_220V_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_PER_220V_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171003 RESOURCE1.AI_KONTROL_PER_220V_NEWLL
    st = getVariable(171003);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_PER_220V_NEWLL", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_PER_220V_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_PER_220V_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171004 RESOURCE1.AI_KONTROL_PER_220V_NEWLW
    st = getVariable(171004);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_PER_220V_NEWLW", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_PER_220V_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_PER_220V_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171005 RESOURCE1.AI_KONTROL_PER_220V_STATUS
    st = getVariable(171005);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_PER_220V_STATUS", 36);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_KONTROL_PER_220V_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_KONTROL_PER_220V_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171006 RESOURCE1.AI_KONTROL_PER_220V_VALUE
    st = getVariable(171006);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_PER_220V_VALUE", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_PER_220V_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_PER_220V_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171007 RESOURCE1.AI_KONTROL_POST_220V_HL
    st = getVariable(171007);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_POST_220V_HL", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_POST_220V_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_POST_220V_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171008 RESOURCE1.AI_KONTROL_POST_220V_HW
    st = getVariable(171008);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_POST_220V_HW", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_POST_220V_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_POST_220V_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171009 RESOURCE1.AI_KONTROL_POST_220V_LL
    st = getVariable(171009);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_POST_220V_LL", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_POST_220V_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_POST_220V_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171010 RESOURCE1.AI_KONTROL_POST_220V_LW
    st = getVariable(171010);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_POST_220V_LW", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_POST_220V_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_POST_220V_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171011 RESOURCE1.AI_KONTROL_POST_220V_COMMAND
    st = getVariable(171011);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_POST_220V_COMMAND", 38);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_KONTROL_POST_220V_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_KONTROL_POST_220V_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171012 RESOURCE1.AI_KONTROL_POST_220V_NEWHL
    st = getVariable(171012);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_POST_220V_NEWHL", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_POST_220V_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_POST_220V_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171013 RESOURCE1.AI_KONTROL_POST_220V_NEWHW
    st = getVariable(171013);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_POST_220V_NEWHW", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_POST_220V_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_POST_220V_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171014 RESOURCE1.AI_KONTROL_POST_220V_NEWLL
    st = getVariable(171014);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_POST_220V_NEWLL", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_POST_220V_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_POST_220V_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171015 RESOURCE1.AI_KONTROL_POST_220V_NEWLW
    st = getVariable(171015);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_POST_220V_NEWLW", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_POST_220V_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_POST_220V_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171016 RESOURCE1.AI_KONTROL_POST_220V_STATUS
    st = getVariable(171016);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_POST_220V_STATUS", 37);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_KONTROL_POST_220V_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_KONTROL_POST_220V_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171017 RESOURCE1.AI_KONTROL_POST_220V_VALUE
    st = getVariable(171017);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_KONTROL_POST_220V_VALUE", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_KONTROL_POST_220V_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_KONTROL_POST_220V_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171018 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_HL
    st = getVariable(171018);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_HL", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171019 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_LA
    st = getVariable(171019);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_LA", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_LA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_LA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171020 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_LL
    st = getVariable(171020);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_LL", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171021 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_LW
    st = getVariable(171021);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_LW", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171022 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_COMMAND
    st = getVariable(171022);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_COMMAND", 48);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171023 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWHL
    st = getVariable(171023);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWHL", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171024 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLA
    st = getVariable(171024);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLA", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171025 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLL
    st = getVariable(171025);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLL", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171026 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLW
    st = getVariable(171026);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLW", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171027 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_STATUS
    st = getVariable(171027);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171028 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_VALUE
    st = getVariable(171028);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_MINUS_VALUE", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_MINUS_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171029 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_HA
    st = getVariable(171029);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_HA", 42);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171030 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_HL
    st = getVariable(171030);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_HL", 42);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171031 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_HW
    st = getVariable(171031);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_HW", 42);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171032 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_LL
    st = getVariable(171032);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_LL", 42);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171033 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_COMMAND
    st = getVariable(171033);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_COMMAND", 47);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171034 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHA
    st = getVariable(171034);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHA", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171035 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHL
    st = getVariable(171035);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171036 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHW
    st = getVariable(171036);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHW", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171037 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWLL
    st = getVariable(171037);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWLL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171038 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_STATUS
    st = getVariable(171038);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171039 RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_VALUE
    st = getVariable(171039);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_OS_SDVIG_NAGNETATELJA_PLUS_VALUE", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_OS_SDVIG_NAGNETATELJA_PLUS_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171040 RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_HL
    st = getVariable(171040);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_HL", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171041 RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_LL
    st = getVariable(171041);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_LL", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171042 RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_LW
    st = getVariable(171042);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_LW", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171043 RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_COMMAND
    st = getVariable(171043);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_COMMAND", 48);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171044 RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWHL
    st = getVariable(171044);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWHL", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171045 RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWLL
    st = getVariable(171045);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWLL", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171046 RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWLW
    st = getVariable(171046);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWLW", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171047 RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_STATUS
    st = getVariable(171047);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171048 RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_VALUE
    st = getVariable(171048);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VHODE_NAGNETATELIA_VALUE", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VHODE_NAGNETATELIA_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171049 RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_HA
    st = getVariable(171049);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_HA", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171050 RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_HL
    st = getVariable(171050);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_HL", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171051 RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_LL
    st = getVariable(171051);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_LL", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171052 RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_LW
    st = getVariable(171052);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_LW", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171053 RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_COMMAND
    st = getVariable(171053);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_COMMAND", 49);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171054 RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWHA
    st = getVariable(171054);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWHA", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171055 RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWHL
    st = getVariable(171055);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWHL", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171056 RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWLL
    st = getVariable(171056);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWLL", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171057 RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWLW
    st = getVariable(171057);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWLW", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171058 RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_STATUS
    st = getVariable(171058);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_STATUS", 48);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171059 RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_VALUE
    st = getVariable(171059);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PGAZA_NA_VYHODE_NAGNETATELIA_VALUE", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PGAZA_NA_VYHODE_NAGNETATELIA_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171060 RESOURCE1.AI_PIMPULS_GAZ_HL
    st = getVariable(171060);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PIMPULS_GAZ_HL", 27);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PIMPULS_GAZ_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PIMPULS_GAZ_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171061 RESOURCE1.AI_PIMPULS_GAZ_LL
    st = getVariable(171061);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PIMPULS_GAZ_LL", 27);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PIMPULS_GAZ_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PIMPULS_GAZ_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171062 RESOURCE1.AI_PIMPULS_GAZ_LW
    st = getVariable(171062);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PIMPULS_GAZ_LW", 27);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PIMPULS_GAZ_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PIMPULS_GAZ_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171063 RESOURCE1.AI_PIMPULS_GAZ_COMMAND
    st = getVariable(171063);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PIMPULS_GAZ_COMMAND", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_PIMPULS_GAZ_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_PIMPULS_GAZ_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171064 RESOURCE1.AI_PIMPULS_GAZ_NEWHL
    st = getVariable(171064);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PIMPULS_GAZ_NEWHL", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PIMPULS_GAZ_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PIMPULS_GAZ_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171065 RESOURCE1.AI_PIMPULS_GAZ_NEWLL
    st = getVariable(171065);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PIMPULS_GAZ_NEWLL", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PIMPULS_GAZ_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PIMPULS_GAZ_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171066 RESOURCE1.AI_PIMPULS_GAZ_NEWLW
    st = getVariable(171066);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PIMPULS_GAZ_NEWLW", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PIMPULS_GAZ_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PIMPULS_GAZ_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171067 RESOURCE1.AI_PIMPULS_GAZ_STATUS
    st = getVariable(171067);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PIMPULS_GAZ_STATUS", 31);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_PIMPULS_GAZ_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_PIMPULS_GAZ_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171068 RESOURCE1.AI_PIMPULS_GAZ_VALUE
    st = getVariable(171068);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PIMPULS_GAZ_VALUE", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PIMPULS_GAZ_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PIMPULS_GAZ_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171069 RESOURCE1.AI_PMASLA_POSLE_GNS_HL
    st = getVariable(171069);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_GNS_HL", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_GNS_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_GNS_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171070 RESOURCE1.AI_PMASLA_POSLE_GNS_HW
    st = getVariable(171070);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_GNS_HW", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_GNS_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_GNS_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171071 RESOURCE1.AI_PMASLA_POSLE_GNS_LL
    st = getVariable(171071);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_GNS_LL", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_GNS_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_GNS_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171072 RESOURCE1.AI_PMASLA_POSLE_GNS_LW
    st = getVariable(171072);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_GNS_LW", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_GNS_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_GNS_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171073 RESOURCE1.AI_PMASLA_POSLE_GNS_COMMAND
    st = getVariable(171073);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_GNS_COMMAND", 37);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_PMASLA_POSLE_GNS_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_PMASLA_POSLE_GNS_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171074 RESOURCE1.AI_PMASLA_POSLE_GNS_NEWHL
    st = getVariable(171074);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_GNS_NEWHL", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_GNS_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_GNS_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171075 RESOURCE1.AI_PMASLA_POSLE_GNS_NEWHW
    st = getVariable(171075);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_GNS_NEWHW", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_GNS_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_GNS_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171076 RESOURCE1.AI_PMASLA_POSLE_GNS_NEWLL
    st = getVariable(171076);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_GNS_NEWLL", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_GNS_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_GNS_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171077 RESOURCE1.AI_PMASLA_POSLE_GNS_NEWLW
    st = getVariable(171077);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_GNS_NEWLW", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_GNS_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_GNS_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171078 RESOURCE1.AI_PMASLA_POSLE_GNS_STATUS
    st = getVariable(171078);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_GNS_STATUS", 36);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_PMASLA_POSLE_GNS_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_PMASLA_POSLE_GNS_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171079 RESOURCE1.AI_PMASLA_POSLE_GNS_VALUE
    st = getVariable(171079);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_GNS_VALUE", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_GNS_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_GNS_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171080 RESOURCE1.AI_PMASLA_POSLE_NU_HL
    st = getVariable(171080);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_NU_HL", 31);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_NU_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_NU_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171081 RESOURCE1.AI_PMASLA_POSLE_NU_LL
    st = getVariable(171081);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_NU_LL", 31);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_NU_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_NU_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171082 RESOURCE1.AI_PMASLA_POSLE_NU_LW
    st = getVariable(171082);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_NU_LW", 31);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_NU_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_NU_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171083 RESOURCE1.AI_PMASLA_POSLE_NU_COMMAND
    st = getVariable(171083);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_NU_COMMAND", 36);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_PMASLA_POSLE_NU_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_PMASLA_POSLE_NU_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171084 RESOURCE1.AI_PMASLA_POSLE_NU_NEWHL
    st = getVariable(171084);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_NU_NEWHL", 34);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_NU_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_NU_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171085 RESOURCE1.AI_PMASLA_POSLE_NU_NEWLL
    st = getVariable(171085);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_NU_NEWLL", 34);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_NU_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_NU_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171086 RESOURCE1.AI_PMASLA_POSLE_NU_NEWLW
    st = getVariable(171086);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_NU_NEWLW", 34);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_NU_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_NU_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171087 RESOURCE1.AI_PMASLA_POSLE_NU_STATUS
    st = getVariable(171087);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_NU_STATUS", 35);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_PMASLA_POSLE_NU_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_PMASLA_POSLE_NU_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171088 RESOURCE1.AI_PMASLA_POSLE_NU_VALUE
    st = getVariable(171088);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLA_POSLE_NU_VALUE", 34);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLA_POSLE_NU_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLA_POSLE_NU_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171089 RESOURCE1.AI_PMASLO_SM_NIZKOE_HL
    st = getVariable(171089);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_NIZKOE_HL", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_NIZKOE_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_NIZKOE_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171090 RESOURCE1.AI_PMASLO_SM_NIZKOE_LA
    st = getVariable(171090);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_NIZKOE_LA", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_NIZKOE_LA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_NIZKOE_LA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171091 RESOURCE1.AI_PMASLO_SM_NIZKOE_LL
    st = getVariable(171091);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_NIZKOE_LL", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_NIZKOE_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_NIZKOE_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171092 RESOURCE1.AI_PMASLO_SM_NIZKOE_LW
    st = getVariable(171092);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_NIZKOE_LW", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_NIZKOE_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_NIZKOE_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171093 RESOURCE1.AI_PMASLO_SM_NIZKOE_COMMAND
    st = getVariable(171093);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_NIZKOE_COMMAND", 37);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_PMASLO_SM_NIZKOE_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_PMASLO_SM_NIZKOE_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171094 RESOURCE1.AI_PMASLO_SM_NIZKOE_NEWHL
    st = getVariable(171094);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_NIZKOE_NEWHL", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_NIZKOE_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_NIZKOE_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171095 RESOURCE1.AI_PMASLO_SM_NIZKOE_NEWLA
    st = getVariable(171095);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_NIZKOE_NEWLA", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_NIZKOE_NEWLA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_NIZKOE_NEWLA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171096 RESOURCE1.AI_PMASLO_SM_NIZKOE_NEWLL
    st = getVariable(171096);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_NIZKOE_NEWLL", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_NIZKOE_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_NIZKOE_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171097 RESOURCE1.AI_PMASLO_SM_NIZKOE_NEWLW
    st = getVariable(171097);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_NIZKOE_NEWLW", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_NIZKOE_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_NIZKOE_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171098 RESOURCE1.AI_PMASLO_SM_NIZKOE_STATUS
    st = getVariable(171098);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_NIZKOE_STATUS", 36);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_PMASLO_SM_NIZKOE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_PMASLO_SM_NIZKOE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171099 RESOURCE1.AI_PMASLO_SM_NIZKOE_VALUE
    st = getVariable(171099);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_NIZKOE_VALUE", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_NIZKOE_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_NIZKOE_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171100 RESOURCE1.AI_PMASLO_SM_VYSOKOE_HL
    st = getVariable(171100);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_VYSOKOE_HL", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_VYSOKOE_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_VYSOKOE_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171101 RESOURCE1.AI_PMASLO_SM_VYSOKOE_LA
    st = getVariable(171101);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_VYSOKOE_LA", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_VYSOKOE_LA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_VYSOKOE_LA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171102 RESOURCE1.AI_PMASLO_SM_VYSOKOE_LL
    st = getVariable(171102);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_VYSOKOE_LL", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_VYSOKOE_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_VYSOKOE_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171103 RESOURCE1.AI_PMASLO_SM_VYSOKOE_LW
    st = getVariable(171103);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_VYSOKOE_LW", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_VYSOKOE_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_VYSOKOE_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171104 RESOURCE1.AI_PMASLO_SM_VYSOKOE_COMMAND
    st = getVariable(171104);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_VYSOKOE_COMMAND", 38);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_PMASLO_SM_VYSOKOE_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_PMASLO_SM_VYSOKOE_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171105 RESOURCE1.AI_PMASLO_SM_VYSOKOE_NEWHL
    st = getVariable(171105);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_VYSOKOE_NEWHL", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_VYSOKOE_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_VYSOKOE_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171106 RESOURCE1.AI_PMASLO_SM_VYSOKOE_NEWLA
    st = getVariable(171106);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_VYSOKOE_NEWLA", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_VYSOKOE_NEWLA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_VYSOKOE_NEWLA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171107 RESOURCE1.AI_PMASLO_SM_VYSOKOE_NEWLL
    st = getVariable(171107);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_VYSOKOE_NEWLL", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_VYSOKOE_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_VYSOKOE_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171108 RESOURCE1.AI_PMASLO_SM_VYSOKOE_NEWLW
    st = getVariable(171108);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_VYSOKOE_NEWLW", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_VYSOKOE_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_VYSOKOE_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171109 RESOURCE1.AI_PMASLO_SM_VYSOKOE_STATUS
    st = getVariable(171109);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_VYSOKOE_STATUS", 37);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_PMASLO_SM_VYSOKOE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_PMASLO_SM_VYSOKOE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171110 RESOURCE1.AI_PMASLO_SM_VYSOKOE_VALUE
    st = getVariable(171110);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_PMASLO_SM_VYSOKOE_VALUE", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_PMASLO_SM_VYSOKOE_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_PMASLO_SM_VYSOKOE_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171111 RESOURCE1.AI_TGAZA_NA_VHODE_H_HL
    st = getVariable(171111);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VHODE_H_HL", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VHODE_H_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VHODE_H_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171112 RESOURCE1.AI_TGAZA_NA_VHODE_H_HW
    st = getVariable(171112);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VHODE_H_HW", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VHODE_H_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VHODE_H_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171113 RESOURCE1.AI_TGAZA_NA_VHODE_H_LL
    st = getVariable(171113);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VHODE_H_LL", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VHODE_H_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VHODE_H_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171114 RESOURCE1.AI_TGAZA_NA_VHODE_H_COMMAND
    st = getVariable(171114);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VHODE_H_COMMAND", 37);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TGAZA_NA_VHODE_H_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TGAZA_NA_VHODE_H_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171115 RESOURCE1.AI_TGAZA_NA_VHODE_H_NEWHL
    st = getVariable(171115);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VHODE_H_NEWHL", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VHODE_H_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VHODE_H_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171116 RESOURCE1.AI_TGAZA_NA_VHODE_H_NEWHW
    st = getVariable(171116);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VHODE_H_NEWHW", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VHODE_H_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VHODE_H_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171117 RESOURCE1.AI_TGAZA_NA_VHODE_H_NEWLL
    st = getVariable(171117);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VHODE_H_NEWLL", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VHODE_H_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VHODE_H_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171118 RESOURCE1.AI_TGAZA_NA_VHODE_H_STATUS
    st = getVariable(171118);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VHODE_H_STATUS", 36);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TGAZA_NA_VHODE_H_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TGAZA_NA_VHODE_H_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171119 RESOURCE1.AI_TGAZA_NA_VHODE_H_VALUE
    st = getVariable(171119);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VHODE_H_VALUE", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VHODE_H_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VHODE_H_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171120 RESOURCE1.AI_TGAZA_NA_VYHODE_H_HA
    st = getVariable(171120);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VYHODE_H_HA", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VYHODE_H_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VYHODE_H_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171121 RESOURCE1.AI_TGAZA_NA_VYHODE_H_HL
    st = getVariable(171121);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VYHODE_H_HL", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VYHODE_H_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VYHODE_H_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171122 RESOURCE1.AI_TGAZA_NA_VYHODE_H_HW
    st = getVariable(171122);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VYHODE_H_HW", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VYHODE_H_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VYHODE_H_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171123 RESOURCE1.AI_TGAZA_NA_VYHODE_H_LL
    st = getVariable(171123);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VYHODE_H_LL", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VYHODE_H_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VYHODE_H_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171124 RESOURCE1.AI_TGAZA_NA_VYHODE_H_COMMAND
    st = getVariable(171124);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VYHODE_H_COMMAND", 38);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TGAZA_NA_VYHODE_H_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TGAZA_NA_VYHODE_H_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171125 RESOURCE1.AI_TGAZA_NA_VYHODE_H_NEWHA
    st = getVariable(171125);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VYHODE_H_NEWHA", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VYHODE_H_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VYHODE_H_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171126 RESOURCE1.AI_TGAZA_NA_VYHODE_H_NEWHL
    st = getVariable(171126);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VYHODE_H_NEWHL", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VYHODE_H_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VYHODE_H_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171127 RESOURCE1.AI_TGAZA_NA_VYHODE_H_NEWHW
    st = getVariable(171127);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VYHODE_H_NEWHW", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VYHODE_H_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VYHODE_H_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171128 RESOURCE1.AI_TGAZA_NA_VYHODE_H_NEWLL
    st = getVariable(171128);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VYHODE_H_NEWLL", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VYHODE_H_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VYHODE_H_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171129 RESOURCE1.AI_TGAZA_NA_VYHODE_H_STATUS
    st = getVariable(171129);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VYHODE_H_STATUS", 37);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TGAZA_NA_VYHODE_H_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TGAZA_NA_VYHODE_H_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171130 RESOURCE1.AI_TGAZA_NA_VYHODE_H_VALUE
    st = getVariable(171130);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGAZA_NA_VYHODE_H_VALUE", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGAZA_NA_VYHODE_H_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGAZA_NA_VYHODE_H_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171131 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_HL
    st = getVariable(171131);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_HL", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171132 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_HW
    st = getVariable(171132);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_HW", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171133 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_LL
    st = getVariable(171133);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_LL", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171134 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_COMMAND
    st = getVariable(171134);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_COMMAND", 51);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171135 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWHL
    st = getVariable(171135);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWHL", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171136 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWHW
    st = getVariable(171136);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWHW", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171137 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWLL
    st = getVariable(171137);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWLL", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171138 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_STATUS
    st = getVariable(171138);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171139 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_VALUE
    st = getVariable(171139);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_VALUE", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_1_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171140 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_HL
    st = getVariable(171140);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_HL", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171141 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_HW
    st = getVariable(171141);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_HW", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171142 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_LL
    st = getVariable(171142);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_LL", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171143 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_COMMAND
    st = getVariable(171143);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_COMMAND", 51);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171144 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWHL
    st = getVariable(171144);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWHL", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171145 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWHW
    st = getVariable(171145);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWHW", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171146 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWLL
    st = getVariable(171146);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWLL", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171147 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_STATUS
    st = getVariable(171147);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171148 RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_VALUE
    st = getVariable(171148);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_VALUE", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TGORJACHEGO_VOZDUHA_ED_KANAL_2_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171149 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_HL
    st = getVariable(171149);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_HL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171150 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_HW
    st = getVariable(171150);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_HW", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171151 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_LL
    st = getVariable(171151);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_LL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171152 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_COMMAND
    st = getVariable(171152);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_COMMAND", 50);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171153 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWHL
    st = getVariable(171153);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWHL", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171154 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWHW
    st = getVariable(171154);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWHW", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171155 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWLL
    st = getVariable(171155);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWLL", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171156 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_STATUS
    st = getVariable(171156);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_STATUS", 49);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171157 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_VALUE
    st = getVariable(171157);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_VALUE", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_1_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171158 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_HL
    st = getVariable(171158);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_HL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171159 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_HW
    st = getVariable(171159);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_HW", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171160 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_LL
    st = getVariable(171160);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_LL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171161 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_COMMAND
    st = getVariable(171161);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_COMMAND", 50);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171162 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWHL
    st = getVariable(171162);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWHL", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171163 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWHW
    st = getVariable(171163);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWHW", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171164 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWLL
    st = getVariable(171164);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWLL", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171165 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_STATUS
    st = getVariable(171165);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_STATUS", 49);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171166 RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_VALUE
    st = getVariable(171166);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_VALUE", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_THOLODNOGO_VOZDUHA_ED_KANAL_2_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171167 RESOURCE1.AI_TMASLA_MB_HL
    st = getVariable(171167);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_HL", 25);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171168 RESOURCE1.AI_TMASLA_MB_HW
    st = getVariable(171168);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_HW", 25);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171169 RESOURCE1.AI_TMASLA_MB_LL
    st = getVariable(171169);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_LL", 25);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171170 RESOURCE1.AI_TMASLA_MB_TEN_HL
    st = getVariable(171170);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_TEN_HL", 29);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_TEN_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_TEN_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171171 RESOURCE1.AI_TMASLA_MB_TEN_HW
    st = getVariable(171171);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_TEN_HW", 29);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_TEN_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_TEN_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171172 RESOURCE1.AI_TMASLA_MB_TEN_LL
    st = getVariable(171172);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_TEN_LL", 29);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_TEN_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_TEN_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171173 RESOURCE1.AI_TMASLA_MB_TEN_COMMAND
    st = getVariable(171173);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_TEN_COMMAND", 34);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TMASLA_MB_TEN_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TMASLA_MB_TEN_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171174 RESOURCE1.AI_TMASLA_MB_TEN_NEWHL
    st = getVariable(171174);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_TEN_NEWHL", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_TEN_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_TEN_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171175 RESOURCE1.AI_TMASLA_MB_TEN_NEWHW
    st = getVariable(171175);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_TEN_NEWHW", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_TEN_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_TEN_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171176 RESOURCE1.AI_TMASLA_MB_TEN_NEWLL
    st = getVariable(171176);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_TEN_NEWLL", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_TEN_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_TEN_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171177 RESOURCE1.AI_TMASLA_MB_TEN_STATUS
    st = getVariable(171177);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_TEN_STATUS", 33);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TMASLA_MB_TEN_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TMASLA_MB_TEN_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171178 RESOURCE1.AI_TMASLA_MB_TEN_VALUE
    st = getVariable(171178);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_TEN_VALUE", 32);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_TEN_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_TEN_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171179 RESOURCE1.AI_TMASLA_MB_COMMAND
    st = getVariable(171179);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_COMMAND", 30);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TMASLA_MB_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TMASLA_MB_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171180 RESOURCE1.AI_TMASLA_MB_NEWHL
    st = getVariable(171180);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_NEWHL", 28);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171181 RESOURCE1.AI_TMASLA_MB_NEWHW
    st = getVariable(171181);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_NEWHW", 28);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171182 RESOURCE1.AI_TMASLA_MB_NEWLL
    st = getVariable(171182);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_NEWLL", 28);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171183 RESOURCE1.AI_TMASLA_MB_STATUS
    st = getVariable(171183);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_STATUS", 29);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TMASLA_MB_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TMASLA_MB_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171184 RESOURCE1.AI_TMASLA_MB_VALUE
    st = getVariable(171184);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_MB_VALUE", 28);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_MB_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_MB_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171185 RESOURCE1.AI_TMASLA_DO_AVOM_HL
    st = getVariable(171185);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_DO_AVOM_HL", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_DO_AVOM_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_DO_AVOM_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171186 RESOURCE1.AI_TMASLA_DO_AVOM_HW
    st = getVariable(171186);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_DO_AVOM_HW", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_DO_AVOM_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_DO_AVOM_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171187 RESOURCE1.AI_TMASLA_DO_AVOM_LL
    st = getVariable(171187);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_DO_AVOM_LL", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_DO_AVOM_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_DO_AVOM_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171188 RESOURCE1.AI_TMASLA_DO_AVOM_COMMAND
    st = getVariable(171188);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_DO_AVOM_COMMAND", 35);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TMASLA_DO_AVOM_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TMASLA_DO_AVOM_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171189 RESOURCE1.AI_TMASLA_DO_AVOM_NEWHL
    st = getVariable(171189);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_DO_AVOM_NEWHL", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_DO_AVOM_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_DO_AVOM_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171190 RESOURCE1.AI_TMASLA_DO_AVOM_NEWHW
    st = getVariable(171190);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_DO_AVOM_NEWHW", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_DO_AVOM_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_DO_AVOM_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171191 RESOURCE1.AI_TMASLA_DO_AVOM_NEWLL
    st = getVariable(171191);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_DO_AVOM_NEWLL", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_DO_AVOM_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_DO_AVOM_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171192 RESOURCE1.AI_TMASLA_DO_AVOM_STATUS
    st = getVariable(171192);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_DO_AVOM_STATUS", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TMASLA_DO_AVOM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TMASLA_DO_AVOM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171193 RESOURCE1.AI_TMASLA_DO_AVOM_VALUE
    st = getVariable(171193);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_DO_AVOM_VALUE", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_DO_AVOM_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_DO_AVOM_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171194 RESOURCE1.AI_TMASLA_POSLE_AVOM_HL
    st = getVariable(171194);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_POSLE_AVOM_HL", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_POSLE_AVOM_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_POSLE_AVOM_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171195 RESOURCE1.AI_TMASLA_POSLE_AVOM_HW
    st = getVariable(171195);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_POSLE_AVOM_HW", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_POSLE_AVOM_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_POSLE_AVOM_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171196 RESOURCE1.AI_TMASLA_POSLE_AVOM_LL
    st = getVariable(171196);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_POSLE_AVOM_LL", 33);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_POSLE_AVOM_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_POSLE_AVOM_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171197 RESOURCE1.AI_TMASLA_POSLE_AVOM_COMMAND
    st = getVariable(171197);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_POSLE_AVOM_COMMAND", 38);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TMASLA_POSLE_AVOM_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TMASLA_POSLE_AVOM_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171198 RESOURCE1.AI_TMASLA_POSLE_AVOM_NEWHL
    st = getVariable(171198);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_POSLE_AVOM_NEWHL", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_POSLE_AVOM_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_POSLE_AVOM_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171199 RESOURCE1.AI_TMASLA_POSLE_AVOM_NEWHW
    st = getVariable(171199);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_POSLE_AVOM_NEWHW", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_POSLE_AVOM_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_POSLE_AVOM_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171200 RESOURCE1.AI_TMASLA_POSLE_AVOM_NEWLL
    st = getVariable(171200);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_POSLE_AVOM_NEWLL", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_POSLE_AVOM_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_POSLE_AVOM_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171201 RESOURCE1.AI_TMASLA_POSLE_AVOM_STATUS
    st = getVariable(171201);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_POSLE_AVOM_STATUS", 37);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TMASLA_POSLE_AVOM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TMASLA_POSLE_AVOM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171202 RESOURCE1.AI_TMASLA_POSLE_AVOM_VALUE
    st = getVariable(171202);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMASLA_POSLE_AVOM_VALUE", 36);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMASLA_POSLE_AVOM_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMASLA_POSLE_AVOM_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171203 RESOURCE1.AI_TMEDI_STATORA_KANAL_1_HL
    st = getVariable(171203);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_1_HL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_1_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_1_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171204 RESOURCE1.AI_TMEDI_STATORA_KANAL_1_HW
    st = getVariable(171204);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_1_HW", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_1_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_1_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171205 RESOURCE1.AI_TMEDI_STATORA_KANAL_1_LL
    st = getVariable(171205);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_1_LL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_1_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_1_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171206 RESOURCE1.AI_TMEDI_STATORA_KANAL_1_COMMAND
    st = getVariable(171206);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_1_COMMAND", 42);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TMEDI_STATORA_KANAL_1_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_1_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171207 RESOURCE1.AI_TMEDI_STATORA_KANAL_1_NEWHL
    st = getVariable(171207);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_1_NEWHL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_1_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_1_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171208 RESOURCE1.AI_TMEDI_STATORA_KANAL_1_NEWHW
    st = getVariable(171208);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_1_NEWHW", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_1_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_1_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171209 RESOURCE1.AI_TMEDI_STATORA_KANAL_1_NEWLL
    st = getVariable(171209);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_1_NEWLL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_1_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_1_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171210 RESOURCE1.AI_TMEDI_STATORA_KANAL_1_STATUS
    st = getVariable(171210);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_1_STATUS", 41);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TMEDI_STATORA_KANAL_1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171211 RESOURCE1.AI_TMEDI_STATORA_KANAL_1_VALUE
    st = getVariable(171211);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_1_VALUE", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_1_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_1_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171212 RESOURCE1.AI_TMEDI_STATORA_KANAL_2_HL
    st = getVariable(171212);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_2_HL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_2_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_2_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171213 RESOURCE1.AI_TMEDI_STATORA_KANAL_2_HW
    st = getVariable(171213);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_2_HW", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_2_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_2_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171214 RESOURCE1.AI_TMEDI_STATORA_KANAL_2_LL
    st = getVariable(171214);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_2_LL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_2_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_2_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171215 RESOURCE1.AI_TMEDI_STATORA_KANAL_2_COMMAND
    st = getVariable(171215);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_2_COMMAND", 42);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TMEDI_STATORA_KANAL_2_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_2_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171216 RESOURCE1.AI_TMEDI_STATORA_KANAL_2_NEWHL
    st = getVariable(171216);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_2_NEWHL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_2_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_2_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171217 RESOURCE1.AI_TMEDI_STATORA_KANAL_2_NEWHW
    st = getVariable(171217);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_2_NEWHW", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_2_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_2_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171218 RESOURCE1.AI_TMEDI_STATORA_KANAL_2_NEWLL
    st = getVariable(171218);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_2_NEWLL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_2_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_2_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171219 RESOURCE1.AI_TMEDI_STATORA_KANAL_2_STATUS
    st = getVariable(171219);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_2_STATUS", 41);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TMEDI_STATORA_KANAL_2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171220 RESOURCE1.AI_TMEDI_STATORA_KANAL_2_VALUE
    st = getVariable(171220);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_2_VALUE", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_2_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_2_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171221 RESOURCE1.AI_TMEDI_STATORA_KANAL_3_HL
    st = getVariable(171221);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_3_HL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_3_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_3_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171222 RESOURCE1.AI_TMEDI_STATORA_KANAL_3_HW
    st = getVariable(171222);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_3_HW", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_3_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_3_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171223 RESOURCE1.AI_TMEDI_STATORA_KANAL_3_LL
    st = getVariable(171223);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_3_LL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_3_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_3_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171224 RESOURCE1.AI_TMEDI_STATORA_KANAL_3_COMMAND
    st = getVariable(171224);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_3_COMMAND", 42);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TMEDI_STATORA_KANAL_3_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_3_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171225 RESOURCE1.AI_TMEDI_STATORA_KANAL_3_NEWHL
    st = getVariable(171225);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_3_NEWHL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_3_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_3_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171226 RESOURCE1.AI_TMEDI_STATORA_KANAL_3_NEWHW
    st = getVariable(171226);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_3_NEWHW", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_3_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_3_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171227 RESOURCE1.AI_TMEDI_STATORA_KANAL_3_NEWLL
    st = getVariable(171227);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_3_NEWLL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_3_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_3_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171228 RESOURCE1.AI_TMEDI_STATORA_KANAL_3_STATUS
    st = getVariable(171228);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_3_STATUS", 41);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TMEDI_STATORA_KANAL_3_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_3_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171229 RESOURCE1.AI_TMEDI_STATORA_KANAL_3_VALUE
    st = getVariable(171229);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TMEDI_STATORA_KANAL_3_VALUE", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TMEDI_STATORA_KANAL_3_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TMEDI_STATORA_KANAL_3_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171230 RESOURCE1.AI_TNARUJNOGO_VOZDUHA_HL
    st = getVariable(171230);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TNARUJNOGO_VOZDUHA_HL", 34);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TNARUJNOGO_VOZDUHA_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TNARUJNOGO_VOZDUHA_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171231 RESOURCE1.AI_TNARUJNOGO_VOZDUHA_HW
    st = getVariable(171231);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TNARUJNOGO_VOZDUHA_HW", 34);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TNARUJNOGO_VOZDUHA_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TNARUJNOGO_VOZDUHA_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171232 RESOURCE1.AI_TNARUJNOGO_VOZDUHA_LL
    st = getVariable(171232);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TNARUJNOGO_VOZDUHA_LL", 34);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TNARUJNOGO_VOZDUHA_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TNARUJNOGO_VOZDUHA_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171233 RESOURCE1.AI_TNARUJNOGO_VOZDUHA_COMMAND
    st = getVariable(171233);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TNARUJNOGO_VOZDUHA_COMMAND", 39);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TNARUJNOGO_VOZDUHA_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TNARUJNOGO_VOZDUHA_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171234 RESOURCE1.AI_TNARUJNOGO_VOZDUHA_NEWHL
    st = getVariable(171234);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TNARUJNOGO_VOZDUHA_NEWHL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TNARUJNOGO_VOZDUHA_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TNARUJNOGO_VOZDUHA_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171235 RESOURCE1.AI_TNARUJNOGO_VOZDUHA_NEWHW
    st = getVariable(171235);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TNARUJNOGO_VOZDUHA_NEWHW", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TNARUJNOGO_VOZDUHA_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TNARUJNOGO_VOZDUHA_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171236 RESOURCE1.AI_TNARUJNOGO_VOZDUHA_NEWLL
    st = getVariable(171236);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TNARUJNOGO_VOZDUHA_NEWLL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TNARUJNOGO_VOZDUHA_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TNARUJNOGO_VOZDUHA_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171237 RESOURCE1.AI_TNARUJNOGO_VOZDUHA_STATUS
    st = getVariable(171237);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TNARUJNOGO_VOZDUHA_STATUS", 38);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TNARUJNOGO_VOZDUHA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TNARUJNOGO_VOZDUHA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171238 RESOURCE1.AI_TNARUJNOGO_VOZDUHA_VALUE
    st = getVariable(171238);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TNARUJNOGO_VOZDUHA_VALUE", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TNARUJNOGO_VOZDUHA_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TNARUJNOGO_VOZDUHA_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171239 RESOURCE1.AI_TOK_STATORA_HL
    st = getVariable(171239);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOK_STATORA_HL", 27);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOK_STATORA_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOK_STATORA_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171240 RESOURCE1.AI_TOK_STATORA_LL
    st = getVariable(171240);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOK_STATORA_LL", 27);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOK_STATORA_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOK_STATORA_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171241 RESOURCE1.AI_TOK_STATORA_LW
    st = getVariable(171241);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOK_STATORA_LW", 27);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOK_STATORA_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOK_STATORA_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171242 RESOURCE1.AI_TOK_STATORA_COMMAND
    st = getVariable(171242);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOK_STATORA_COMMAND", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOK_STATORA_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOK_STATORA_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171243 RESOURCE1.AI_TOK_STATORA_NEWHL
    st = getVariable(171243);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOK_STATORA_NEWHL", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOK_STATORA_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOK_STATORA_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171244 RESOURCE1.AI_TOK_STATORA_NEWLL
    st = getVariable(171244);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOK_STATORA_NEWLL", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOK_STATORA_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOK_STATORA_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171245 RESOURCE1.AI_TOK_STATORA_NEWLW
    st = getVariable(171245);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOK_STATORA_NEWLW", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOK_STATORA_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOK_STATORA_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171246 RESOURCE1.AI_TOK_STATORA_STATUS
    st = getVariable(171246);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOK_STATORA_STATUS", 31);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOK_STATORA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOK_STATORA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171247 RESOURCE1.AI_TOK_STATORA_VALUE
    st = getVariable(171247);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOK_STATORA_VALUE", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOK_STATORA_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOK_STATORA_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171248 RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_HA
    st = getVariable(171248);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_HA", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171249 RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_HL
    st = getVariable(171249);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_HL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171250 RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_HW
    st = getVariable(171250);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_HW", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171251 RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_LL
    st = getVariable(171251);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_LL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171252 RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_COMMAND
    st = getVariable(171252);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_COMMAND", 46);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171253 RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHA
    st = getVariable(171253);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHA", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171254 RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHL
    st = getVariable(171254);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHL", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171255 RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHW
    st = getVariable(171255);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHW", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171256 RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWLL
    st = getVariable(171256);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWLL", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171257 RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_STATUS
    st = getVariable(171257);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_STATUS", 45);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171258 RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_VALUE
    st = getVariable(171258);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOPORNO_PODSHIPNIKA_EDT_1_VALUE", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOPORNO_PODSHIPNIKA_EDT_1_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171259 RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_HA
    st = getVariable(171259);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_HA", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171260 RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_HL
    st = getVariable(171260);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_HL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171261 RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_HW
    st = getVariable(171261);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_HW", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171262 RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_LL
    st = getVariable(171262);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_LL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171263 RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_COMMAND
    st = getVariable(171263);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_COMMAND", 42);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171264 RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_NEWHA
    st = getVariable(171264);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_NEWHA", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171265 RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_NEWHL
    st = getVariable(171265);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_NEWHL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171266 RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_NEWHW
    st = getVariable(171266);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_NEWHW", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171267 RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_NEWLL
    st = getVariable(171267);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_NEWLL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171268 RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_STATUS
    st = getVariable(171268);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_STATUS", 41);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171269 RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_VALUE
    st = getVariable(171269);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_EDT_2_VALUE", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_EDT_2_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171270 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_HA
    st = getVariable(171270);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_HA", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171271 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_HL
    st = getVariable(171271);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_HL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171272 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_HW
    st = getVariable(171272);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_HW", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171273 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_LL
    st = getVariable(171273);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_LL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171274 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_COMMAND
    st = getVariable(171274);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_COMMAND", 46);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171275 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHA
    st = getVariable(171275);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHA", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171276 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHL
    st = getVariable(171276);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHL", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171277 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHW
    st = getVariable(171277);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHW", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171278 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWLL
    st = getVariable(171278);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWLL", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171279 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_STATUS
    st = getVariable(171279);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_STATUS", 45);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171280 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_VALUE
    st = getVariable(171280);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_3_VALUE", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_3_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171281 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_HA
    st = getVariable(171281);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_HA", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171282 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_HL
    st = getVariable(171282);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_HL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171283 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_HW
    st = getVariable(171283);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_HW", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171284 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_LL
    st = getVariable(171284);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_LL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171285 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_COMMAND
    st = getVariable(171285);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_COMMAND", 46);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171286 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHA
    st = getVariable(171286);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHA", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171287 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHL
    st = getVariable(171287);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHL", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171288 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHW
    st = getVariable(171288);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHW", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171289 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWLL
    st = getVariable(171289);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWLL", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171290 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_STATUS
    st = getVariable(171290);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_STATUS", 45);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171291 RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_VALUE
    st = getVariable(171291);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_KOL_EDT_4_VALUE", 44);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_KOL_EDT_4_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171292 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HA
    st = getVariable(171292);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HA", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171293 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HL
    st = getVariable(171293);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HL", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171294 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HW
    st = getVariable(171294);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HW", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171295 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_LL
    st = getVariable(171295);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_LL", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171296 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_COMMAND
    st = getVariable(171296);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_COMMAND", 55);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171297 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHA
    st = getVariable(171297);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHA", 53);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171298 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHL
    st = getVariable(171298);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHL", 53);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171299 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHW
    st = getVariable(171299);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHW", 53);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171300 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWLL
    st = getVariable(171300);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWLL", 53);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171301 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_STATUS
    st = getVariable(171301);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_STATUS", 54);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171302 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_VALUE
    st = getVariable(171302);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_VALUE", 53);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_1_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171303 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HA
    st = getVariable(171303);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HA", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171304 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HL
    st = getVariable(171304);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HL", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171305 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HW
    st = getVariable(171305);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HW", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171306 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_LL
    st = getVariable(171306);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_LL", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171307 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_COMMAND
    st = getVariable(171307);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_COMMAND", 55);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171308 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHA
    st = getVariable(171308);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHA", 53);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171309 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHL
    st = getVariable(171309);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHL", 53);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171310 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHW
    st = getVariable(171310);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHW", 53);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171311 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWLL
    st = getVariable(171311);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWLL", 53);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171312 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_STATUS
    st = getVariable(171312);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_STATUS", 54);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171313 RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_VALUE
    st = getVariable(171313);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_VALUE", 53);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_NERAB_KOL_EDT_10_2_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171314 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HA
    st = getVariable(171314);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HA", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171315 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HL
    st = getVariable(171315);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HL", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171316 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HW
    st = getVariable(171316);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HW", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171317 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_LL
    st = getVariable(171317);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_LL", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171318 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_COMMAND
    st = getVariable(171318);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_COMMAND", 52);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171319 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHA
    st = getVariable(171319);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHA", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171320 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHL
    st = getVariable(171320);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHL", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171321 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHW
    st = getVariable(171321);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHW", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171322 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWLL
    st = getVariable(171322);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWLL", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171323 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_STATUS
    st = getVariable(171323);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_STATUS", 51);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171324 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_VALUE
    st = getVariable(171324);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_VALUE", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_1_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171325 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HA
    st = getVariable(171325);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HA", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171326 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HL
    st = getVariable(171326);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HL", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171327 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HW
    st = getVariable(171327);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HW", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171328 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_LL
    st = getVariable(171328);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_LL", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171329 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_COMMAND
    st = getVariable(171329);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_COMMAND", 52);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171330 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHA
    st = getVariable(171330);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHA", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171331 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHL
    st = getVariable(171331);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHL", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171332 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHW
    st = getVariable(171332);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHW", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171333 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWLL
    st = getVariable(171333);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWLL", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171334 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_STATUS
    st = getVariable(171334);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_STATUS", 51);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171335 RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_VALUE
    st = getVariable(171335);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_VALUE", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_RAB_KOL_EDT_9_2_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171336 RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HA
    st = getVariable(171336);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HA", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171337 RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HL
    st = getVariable(171337);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HL", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171338 RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HW
    st = getVariable(171338);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HW", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171339 RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_LL
    st = getVariable(171339);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_LL", 47);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171340 RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_COMMAND
    st = getVariable(171340);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_COMMAND", 52);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171341 RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHA
    st = getVariable(171341);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHA", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171342 RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHL
    st = getVariable(171342);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHL", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171343 RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHW
    st = getVariable(171343);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHW", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171344 RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWLL
    st = getVariable(171344);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWLL", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171345 RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_STATUS
    st = getVariable(171345);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_STATUS", 51);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171346 RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_VALUE
    st = getVariable(171346);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_VALUE", 50);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SHEST_RED_EDT_5_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171347 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HA
    st = getVariable(171347);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HA", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171348 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HL
    st = getVariable(171348);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HL", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171349 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HW
    st = getVariable(171349);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HW", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171350 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_LL
    st = getVariable(171350);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_LL", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171351 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_COMMAND
    st = getVariable(171351);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_COMMAND", 57);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171352 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHA
    st = getVariable(171352);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHA", 55);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171353 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHL
    st = getVariable(171353);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHL", 55);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171354 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHW
    st = getVariable(171354);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHW", 55);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171355 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWLL
    st = getVariable(171355);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWLL", 55);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171356 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_STATUS
    st = getVariable(171356);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_STATUS", 56);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171357 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_VALUE
    st = getVariable(171357);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_VALUE", 55);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_1_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171358 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HA
    st = getVariable(171358);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HA", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171359 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HL
    st = getVariable(171359);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HL", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171360 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HW
    st = getVariable(171360);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HW", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171361 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_LL
    st = getVariable(171361);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_LL", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171362 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_COMMAND
    st = getVariable(171362);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_COMMAND", 57);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171363 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHA
    st = getVariable(171363);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHA", 55);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171364 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHL
    st = getVariable(171364);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHL", 55);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171365 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHW
    st = getVariable(171365);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHW", 55);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171366 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWLL
    st = getVariable(171366);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWLL", 55);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171367 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_STATUS
    st = getVariable(171367);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_STATUS", 56);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171368 RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_VALUE
    st = getVariable(171368);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_VALUE", 55);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TOY_PODSHIPNIKA_SVOBOD_KONCA_EDT_8_2_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171369 RESOURCE1.AI_TSHU_HL
    st = getVariable(171369);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSHU_HL", 20);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSHU_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSHU_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171370 RESOURCE1.AI_TSHU_LL
    st = getVariable(171370);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSHU_LL", 20);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSHU_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSHU_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171371 RESOURCE1.AI_TSHU_COMMAND
    st = getVariable(171371);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSHU_COMMAND", 25);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TSHU_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TSHU_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171372 RESOURCE1.AI_TSHU_NEWHL
    st = getVariable(171372);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSHU_NEWHL", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSHU_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSHU_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171373 RESOURCE1.AI_TSHU_NEWLL
    st = getVariable(171373);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSHU_NEWLL", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSHU_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSHU_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171374 RESOURCE1.AI_TSHU_STATUS
    st = getVariable(171374);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSHU_STATUS", 24);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TSHU_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TSHU_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171375 RESOURCE1.AI_TSHU_VALUE
    st = getVariable(171375);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSHU_VALUE", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSHU_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSHU_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171376 RESOURCE1.AI_TSTALI_STATORA_KANAL_1_HL
    st = getVariable(171376);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_1_HL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_1_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_1_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171377 RESOURCE1.AI_TSTALI_STATORA_KANAL_1_HW
    st = getVariable(171377);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_1_HW", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_1_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_1_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171378 RESOURCE1.AI_TSTALI_STATORA_KANAL_1_LL
    st = getVariable(171378);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_1_LL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_1_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_1_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171379 RESOURCE1.AI_TSTALI_STATORA_KANAL_1_COMMAND
    st = getVariable(171379);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_1_COMMAND", 43);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TSTALI_STATORA_KANAL_1_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_1_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171380 RESOURCE1.AI_TSTALI_STATORA_KANAL_1_NEWHL
    st = getVariable(171380);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_1_NEWHL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_1_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_1_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171381 RESOURCE1.AI_TSTALI_STATORA_KANAL_1_NEWHW
    st = getVariable(171381);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_1_NEWHW", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_1_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_1_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171382 RESOURCE1.AI_TSTALI_STATORA_KANAL_1_NEWLL
    st = getVariable(171382);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_1_NEWLL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_1_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_1_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171383 RESOURCE1.AI_TSTALI_STATORA_KANAL_1_STATUS
    st = getVariable(171383);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_1_STATUS", 42);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TSTALI_STATORA_KANAL_1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171384 RESOURCE1.AI_TSTALI_STATORA_KANAL_1_VALUE
    st = getVariable(171384);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_1_VALUE", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_1_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_1_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171385 RESOURCE1.AI_TSTALI_STATORA_KANAL_2_HL
    st = getVariable(171385);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_2_HL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_2_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_2_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171386 RESOURCE1.AI_TSTALI_STATORA_KANAL_2_HW
    st = getVariable(171386);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_2_HW", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_2_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_2_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171387 RESOURCE1.AI_TSTALI_STATORA_KANAL_2_LL
    st = getVariable(171387);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_2_LL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_2_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_2_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171388 RESOURCE1.AI_TSTALI_STATORA_KANAL_2_COMMAND
    st = getVariable(171388);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_2_COMMAND", 43);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TSTALI_STATORA_KANAL_2_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_2_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171389 RESOURCE1.AI_TSTALI_STATORA_KANAL_2_NEWHL
    st = getVariable(171389);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_2_NEWHL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_2_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_2_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171390 RESOURCE1.AI_TSTALI_STATORA_KANAL_2_NEWHW
    st = getVariable(171390);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_2_NEWHW", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_2_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_2_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171391 RESOURCE1.AI_TSTALI_STATORA_KANAL_2_NEWLL
    st = getVariable(171391);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_2_NEWLL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_2_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_2_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171392 RESOURCE1.AI_TSTALI_STATORA_KANAL_2_STATUS
    st = getVariable(171392);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_2_STATUS", 42);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TSTALI_STATORA_KANAL_2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171393 RESOURCE1.AI_TSTALI_STATORA_KANAL_2_VALUE
    st = getVariable(171393);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_2_VALUE", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_2_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_2_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171394 RESOURCE1.AI_TSTALI_STATORA_KANAL_3_HL
    st = getVariable(171394);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_3_HL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_3_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_3_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171395 RESOURCE1.AI_TSTALI_STATORA_KANAL_3_HW
    st = getVariable(171395);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_3_HW", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_3_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_3_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171396 RESOURCE1.AI_TSTALI_STATORA_KANAL_3_LL
    st = getVariable(171396);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_3_LL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_3_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_3_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171397 RESOURCE1.AI_TSTALI_STATORA_KANAL_3_COMMAND
    st = getVariable(171397);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_3_COMMAND", 43);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TSTALI_STATORA_KANAL_3_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_3_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171398 RESOURCE1.AI_TSTALI_STATORA_KANAL_3_NEWHL
    st = getVariable(171398);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_3_NEWHL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_3_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_3_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171399 RESOURCE1.AI_TSTALI_STATORA_KANAL_3_NEWHW
    st = getVariable(171399);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_3_NEWHW", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_3_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_3_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171400 RESOURCE1.AI_TSTALI_STATORA_KANAL_3_NEWLL
    st = getVariable(171400);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_3_NEWLL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_3_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_3_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171401 RESOURCE1.AI_TSTALI_STATORA_KANAL_3_STATUS
    st = getVariable(171401);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_3_STATUS", 42);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TSTALI_STATORA_KANAL_3_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_3_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171402 RESOURCE1.AI_TSTALI_STATORA_KANAL_3_VALUE
    st = getVariable(171402);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TSTALI_STATORA_KANAL_3_VALUE", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TSTALI_STATORA_KANAL_3_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TSTALI_STATORA_KANAL_3_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171403 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HA
    st = getVariable(171403);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HA", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171404 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HL
    st = getVariable(171404);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171405 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HW
    st = getVariable(171405);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HW", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171406 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_LL
    st = getVariable(171406);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_LL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171407 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_COMMAND
    st = getVariable(171407);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_COMMAND", 50);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171408 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHA
    st = getVariable(171408);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHA", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171409 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHL
    st = getVariable(171409);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHL", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171410 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHW
    st = getVariable(171410);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHW", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171411 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWLL
    st = getVariable(171411);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWLL", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171412 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_STATUS
    st = getVariable(171412);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_STATUS", 49);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171413 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_VALUE
    st = getVariable(171413);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_VALUE", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_1_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171414 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HA
    st = getVariable(171414);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HA", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171415 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HL
    st = getVariable(171415);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171416 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HW
    st = getVariable(171416);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HW", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171417 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_LL
    st = getVariable(171417);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_LL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171418 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_COMMAND
    st = getVariable(171418);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_COMMAND", 50);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171419 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHA
    st = getVariable(171419);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHA", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171420 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHL
    st = getVariable(171420);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHL", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171421 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHW
    st = getVariable(171421);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHW", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171422 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWLL
    st = getVariable(171422);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWLL", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171423 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_STATUS
    st = getVariable(171423);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_STATUS", 49);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171424 RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_VALUE
    st = getVariable(171424);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_VALUE", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_NAGNET_EDT_7_2_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171425 RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_HA
    st = getVariable(171425);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_HA", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171426 RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_HL
    st = getVariable(171426);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_HL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171427 RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_HW
    st = getVariable(171427);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_HW", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171428 RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_LL
    st = getVariable(171428);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_LL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171429 RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_COMMAND
    st = getVariable(171429);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_COMMAND", 45);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171430 RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHA
    st = getVariable(171430);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHA", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171431 RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHL
    st = getVariable(171431);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHL", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171432 RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHW
    st = getVariable(171432);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHW", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171433 RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_NEWLL
    st = getVariable(171433);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_NEWLL", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171434 RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_STATUS
    st = getVariable(171434);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_STATUS", 44);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171435 RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_VALUE
    st = getVariable(171435);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_TY_PODSHIPNIKA_RED_EDT_6_VALUE", 43);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_TY_PODSHIPNIKA_RED_EDT_6_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171436 RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_HA
    st = getVariable(171436);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_HA", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171437 RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_HL
    st = getVariable(171437);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_HL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171438 RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_HW
    st = getVariable(171438);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_HW", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171439 RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_LL
    st = getVariable(171439);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_LL", 37);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171440 RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_COMMAND
    st = getVariable(171440);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_COMMAND", 42);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171441 RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_NEWHA
    st = getVariable(171441);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_NEWHA", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171442 RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_NEWHL
    st = getVariable(171442);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_NEWHL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171443 RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_NEWHW
    st = getVariable(171443);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_NEWHW", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171444 RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_NEWLL
    st = getVariable(171444);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_NEWLL", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171445 RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_STATUS
    st = getVariable(171445);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_STATUS", 41);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171446 RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_VALUE
    st = getVariable(171446);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OPED_T1_VALUE", 40);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OPED_T1_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171447 RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HA
    st = getVariable(171447);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HA", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171448 RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HL
    st = getVariable(171448);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171449 RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HW
    st = getVariable(171449);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HW", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171450 RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_LL
    st = getVariable(171450);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_LL", 45);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171451 RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_COMMAND
    st = getVariable(171451);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_COMMAND", 50);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171452 RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHA
    st = getVariable(171452);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHA", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171453 RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHL
    st = getVariable(171453);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHL", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171454 RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHW
    st = getVariable(171454);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHW", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171455 RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWLL
    st = getVariable(171455);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWLL", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171456 RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_STATUS
    st = getVariable(171456);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_STATUS", 49);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171457 RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_VALUE
    st = getVariable(171457);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_VALUE", 48);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_KOLESA_RH_T4_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171458 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HA
    st = getVariable(171458);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HA", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171459 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HL
    st = getVariable(171459);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HL", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171460 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HW
    st = getVariable(171460);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HW", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171461 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_LL
    st = getVariable(171461);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_LL", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171462 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_COMMAND
    st = getVariable(171462);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_COMMAND", 54);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171463 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHA
    st = getVariable(171463);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHA", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171464 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHL
    st = getVariable(171464);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHL", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171465 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHW
    st = getVariable(171465);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHW", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171466 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWLL
    st = getVariable(171466);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWLL", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171467 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_STATUS
    st = getVariable(171467);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_STATUS", 53);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171468 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_VALUE
    st = getVariable(171468);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_VALUE", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171469 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HA
    st = getVariable(171469);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HA", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171470 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HL
    st = getVariable(171470);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HL", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171471 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HW
    st = getVariable(171471);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HW", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171472 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_LL
    st = getVariable(171472);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_LL", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171473 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_COMMAND
    st = getVariable(171473);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_COMMAND", 54);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171474 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHA
    st = getVariable(171474);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHA", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171475 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHL
    st = getVariable(171475);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHL", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171476 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHW
    st = getVariable(171476);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHW", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171477 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWLL
    st = getVariable(171477);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWLL", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171478 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_STATUS
    st = getVariable(171478);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_STATUS", 53);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171479 RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_VALUE
    st = getVariable(171479);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_VALUE", 52);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171480 RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_HA
    st = getVariable(171480);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_HA", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171481 RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_HL
    st = getVariable(171481);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_HL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171482 RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_HW
    st = getVariable(171482);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_HW", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171483 RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_LL
    st = getVariable(171483);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_LL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171484 RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_COMMAND
    st = getVariable(171484);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_COMMAND", 43);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171485 RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_NEWHA
    st = getVariable(171485);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_NEWHA", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171486 RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_NEWHL
    st = getVariable(171486);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_NEWHL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171487 RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_NEWHW
    st = getVariable(171487);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_NEWHW", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171488 RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_NEWLL
    st = getVariable(171488);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_NEWLL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171489 RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_STATUS
    st = getVariable(171489);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_STATUS", 42);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171490 RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_VALUE
    st = getVariable(171490);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYPED_T2_VALUE", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYPED_T2_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171491 RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HA
    st = getVariable(171491);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HA", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171492 RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HL
    st = getVariable(171492);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HL", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171493 RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HW
    st = getVariable(171493);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HW", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171494 RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_LL
    st = getVariable(171494);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_LL", 46);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171495 RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_COMMAND
    st = getVariable(171495);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_COMMAND", 51);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171496 RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHA
    st = getVariable(171496);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHA", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171497 RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHL
    st = getVariable(171497);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHL", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171498 RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHW
    st = getVariable(171498);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHW", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171499 RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWLL
    st = getVariable(171499);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWLL", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171500 RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_STATUS
    st = getVariable(171500);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171501 RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_VALUE
    st = getVariable(171501);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_VALUE", 49);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_VIBRO_SKOROST_OYP_KOLESA_ED_T3_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171502 RESOURCE1.AI_YROVEN_MASLA_MB_HL
    st = getVariable(171502);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_YROVEN_MASLA_MB_HL", 31);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_YROVEN_MASLA_MB_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_YROVEN_MASLA_MB_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171503 RESOURCE1.AI_YROVEN_MASLA_MB_LL
    st = getVariable(171503);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_YROVEN_MASLA_MB_LL", 31);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_YROVEN_MASLA_MB_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_YROVEN_MASLA_MB_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171504 RESOURCE1.AI_YROVEN_MASLA_MB_LW
    st = getVariable(171504);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_YROVEN_MASLA_MB_LW", 31);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_YROVEN_MASLA_MB_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_YROVEN_MASLA_MB_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171505 RESOURCE1.AI_YROVEN_MASLA_MB_COMMAND
    st = getVariable(171505);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_YROVEN_MASLA_MB_COMMAND", 36);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_YROVEN_MASLA_MB_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_YROVEN_MASLA_MB_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171506 RESOURCE1.AI_YROVEN_MASLA_MB_NEWHL
    st = getVariable(171506);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_YROVEN_MASLA_MB_NEWHL", 34);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_YROVEN_MASLA_MB_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_YROVEN_MASLA_MB_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171507 RESOURCE1.AI_YROVEN_MASLA_MB_NEWLL
    st = getVariable(171507);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_YROVEN_MASLA_MB_NEWLL", 34);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_YROVEN_MASLA_MB_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_YROVEN_MASLA_MB_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171508 RESOURCE1.AI_YROVEN_MASLA_MB_NEWLW
    st = getVariable(171508);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_YROVEN_MASLA_MB_NEWLW", 34);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_YROVEN_MASLA_MB_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_YROVEN_MASLA_MB_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171509 RESOURCE1.AI_YROVEN_MASLA_MB_STATUS
    st = getVariable(171509);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_YROVEN_MASLA_MB_STATUS", 35);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_YROVEN_MASLA_MB_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_YROVEN_MASLA_MB_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171510 RESOURCE1.AI_YROVEN_MASLA_MB_VALUE
    st = getVariable(171510);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_YROVEN_MASLA_MB_VALUE", 34);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_YROVEN_MASLA_MB_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_YROVEN_MASLA_MB_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171511 RESOURCE1.AI_DPGAZA_NA_KONFUZORE_HL
    st = getVariable(171511);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_KONFUZORE_HL", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_KONFUZORE_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_KONFUZORE_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171512 RESOURCE1.AI_DPGAZA_NA_KONFUZORE_LL
    st = getVariable(171512);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_KONFUZORE_LL", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_KONFUZORE_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_KONFUZORE_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171513 RESOURCE1.AI_DPGAZA_NA_KONFUZORE_LW
    st = getVariable(171513);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_KONFUZORE_LW", 35);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_KONFUZORE_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_KONFUZORE_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171514 RESOURCE1.AI_DPGAZA_NA_KONFUZORE_COMMAND
    st = getVariable(171514);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_KONFUZORE_COMMAND", 40);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_DPGAZA_NA_KONFUZORE_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_DPGAZA_NA_KONFUZORE_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171515 RESOURCE1.AI_DPGAZA_NA_KONFUZORE_NEWHL
    st = getVariable(171515);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_KONFUZORE_NEWHL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_KONFUZORE_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_KONFUZORE_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171516 RESOURCE1.AI_DPGAZA_NA_KONFUZORE_NEWLL
    st = getVariable(171516);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_KONFUZORE_NEWLL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_KONFUZORE_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_KONFUZORE_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171517 RESOURCE1.AI_DPGAZA_NA_KONFUZORE_NEWLW
    st = getVariable(171517);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_KONFUZORE_NEWLW", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_KONFUZORE_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_KONFUZORE_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171518 RESOURCE1.AI_DPGAZA_NA_KONFUZORE_STATUS
    st = getVariable(171518);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_KONFUZORE_STATUS", 39);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_DPGAZA_NA_KONFUZORE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_DPGAZA_NA_KONFUZORE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171519 RESOURCE1.AI_DPGAZA_NA_KONFUZORE_VALUE
    st = getVariable(171519);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_KONFUZORE_VALUE", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_KONFUZORE_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_KONFUZORE_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171520 RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_HL
    st = getVariable(171520);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_HL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171521 RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_HW
    st = getVariable(171521);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_HW", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_HW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_HW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171522 RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_LL
    st = getVariable(171522);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_LL", 38);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171523 RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_COMMAND
    st = getVariable(171523);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_COMMAND", 43);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171524 RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_NEWHL
    st = getVariable(171524);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_NEWHL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171525 RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_NEWHW
    st = getVariable(171525);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_NEWHW", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_NEWHW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_NEWHW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171526 RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_NEWLL
    st = getVariable(171526);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_NEWLL", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171527 RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_STATUS
    st = getVariable(171527);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_STATUS", 42);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171528 RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_VALUE
    st = getVariable(171528);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPGAZA_NA_MASLO_FILTRE_VALUE", 41);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPGAZA_NA_MASLO_FILTRE_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171529 RESOURCE1.AI_DPMASLO_GAZ_HL
    st = getVariable(171529);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPMASLO_GAZ_HL", 27);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPMASLO_GAZ_HL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPMASLO_GAZ_HL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171530 RESOURCE1.AI_DPMASLO_GAZ_LA
    st = getVariable(171530);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPMASLO_GAZ_LA", 27);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPMASLO_GAZ_LA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPMASLO_GAZ_LA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171531 RESOURCE1.AI_DPMASLO_GAZ_LL
    st = getVariable(171531);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPMASLO_GAZ_LL", 27);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPMASLO_GAZ_LL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPMASLO_GAZ_LL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171532 RESOURCE1.AI_DPMASLO_GAZ_LW
    st = getVariable(171532);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPMASLO_GAZ_LW", 27);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPMASLO_GAZ_LW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPMASLO_GAZ_LW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171533 RESOURCE1.AI_DPMASLO_GAZ_COMMAND
    st = getVariable(171533);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPMASLO_GAZ_COMMAND", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__AI_DPMASLO_GAZ_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__AI_DPMASLO_GAZ_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171534 RESOURCE1.AI_DPMASLO_GAZ_NEWHL
    st = getVariable(171534);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPMASLO_GAZ_NEWHL", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPMASLO_GAZ_NEWHL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPMASLO_GAZ_NEWHL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171535 RESOURCE1.AI_DPMASLO_GAZ_NEWLA
    st = getVariable(171535);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPMASLO_GAZ_NEWLA", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPMASLO_GAZ_NEWLA;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPMASLO_GAZ_NEWLA;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171536 RESOURCE1.AI_DPMASLO_GAZ_NEWLL
    st = getVariable(171536);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPMASLO_GAZ_NEWLL", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPMASLO_GAZ_NEWLL;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPMASLO_GAZ_NEWLL;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171537 RESOURCE1.AI_DPMASLO_GAZ_NEWLW
    st = getVariable(171537);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPMASLO_GAZ_NEWLW", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPMASLO_GAZ_NEWLW;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPMASLO_GAZ_NEWLW;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171538 RESOURCE1.AI_DPMASLO_GAZ_STATUS
    st = getVariable(171538);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPMASLO_GAZ_STATUS", 31);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__AI_DPMASLO_GAZ_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__AI_DPMASLO_GAZ_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171539 RESOURCE1.AI_DPMASLO_GAZ_VALUE
    st = getVariable(171539);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_DPMASLO_GAZ_VALUE", 30);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_DPMASLO_GAZ_VALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_DPMASLO_GAZ_VALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171540 RESOURCE1.A1_10_ERR_MODE
    st = getVariable(171540);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_10_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_10_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_10_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171541 RESOURCE1.A1_11_ERR_MODE
    st = getVariable(171541);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_11_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_11_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_11_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171542 RESOURCE1.A1_12_ERR_MODE
    st = getVariable(171542);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_12_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_12_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_12_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171543 RESOURCE1.A1_13_ERR_MODE
    st = getVariable(171543);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_13_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_13_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_13_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171544 RESOURCE1.A1_14_ERR_MODE
    st = getVariable(171544);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_14_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_14_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_14_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171545 RESOURCE1.A1_15_ERR_MODE
    st = getVariable(171545);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_15_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_15_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_15_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171546 RESOURCE1.A1_1_ERR_MODE
    st = getVariable(171546);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_1_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_1_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_1_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171547 RESOURCE1.A1_2_ERR_MODE
    st = getVariable(171547);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_2_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_2_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_2_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171548 RESOURCE1.A1_3_ERR_MODE
    st = getVariable(171548);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_3_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_3_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_3_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171549 RESOURCE1.A1_4_ERR_MODE
    st = getVariable(171549);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_4_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_4_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_4_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171550 RESOURCE1.A1_5_ERR_MODE
    st = getVariable(171550);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_5_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_5_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_5_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171551 RESOURCE1.A1_6_ERR_MODE
    st = getVariable(171551);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_6_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_6_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_6_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171552 RESOURCE1.A1_7_ERR_MODE
    st = getVariable(171552);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_7_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_7_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_7_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171553 RESOURCE1.A1_8_ERR_MODE
    st = getVariable(171553);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_8_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_8_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_8_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171554 RESOURCE1.A1_9_ERR_MODE
    st = getVariable(171554);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A1_9_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A1_9_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A1_9_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171555 RESOURCE1.A2_10_ERR_MODE
    st = getVariable(171555);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_10_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_10_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_10_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171556 RESOURCE1.A2_11_ERR_MODE
    st = getVariable(171556);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_11_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_11_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_11_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171557 RESOURCE1.A2_12_ERR_MODE
    st = getVariable(171557);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_12_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_12_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_12_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171558 RESOURCE1.A2_13_ERR_MODE
    st = getVariable(171558);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_13_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_13_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_13_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171559 RESOURCE1.A2_14_ERR_MODE
    st = getVariable(171559);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_14_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_14_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_14_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171560 RESOURCE1.A2_15_ERR_MODE
    st = getVariable(171560);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_15_ERR_MODE", 24);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_15_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_15_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171561 RESOURCE1.A2_1_ERR_MODE
    st = getVariable(171561);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_1_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_1_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_1_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171562 RESOURCE1.A2_2_ERR_MODE
    st = getVariable(171562);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_2_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_2_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_2_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171563 RESOURCE1.A2_3_ERR_MODE
    st = getVariable(171563);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_3_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_3_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_3_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171564 RESOURCE1.A2_4_ERR_MODE
    st = getVariable(171564);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_4_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_4_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_4_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171565 RESOURCE1.A2_5_ERR_MODE
    st = getVariable(171565);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_5_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_5_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_5_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171566 RESOURCE1.A2_6_ERR_MODE
    st = getVariable(171566);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_6_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_6_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_6_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171567 RESOURCE1.A2_7_ERR_MODE
    st = getVariable(171567);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_7_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_7_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_7_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171568 RESOURCE1.A2_8_ERR_MODE
    st = getVariable(171568);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_8_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_8_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_8_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171569 RESOURCE1.A2_9_ERR_MODE
    st = getVariable(171569);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.A2_9_ERR_MODE", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__A2_9_ERR_MODE;
    p_UINT = (UINT*)&RESOURCE1__A2_9_ERR_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171570 RESOURCE1.AI_0_DBLVALUE
    st = getVariable(171570);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_0_DBLVALUE", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_0_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_0_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171571 RESOURCE1.AI_10_DBLVALUE
    st = getVariable(171571);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_10_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_10_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_10_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171572 RESOURCE1.AI_11_DBLVALUE
    st = getVariable(171572);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_11_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_11_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_11_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171573 RESOURCE1.AI_12_DBLVALUE
    st = getVariable(171573);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_12_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_12_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_12_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171574 RESOURCE1.AI_13_DBLVALUE
    st = getVariable(171574);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_13_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_13_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_13_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171575 RESOURCE1.AI_14_DBLVALUE
    st = getVariable(171575);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_14_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_14_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_14_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171576 RESOURCE1.AI_15_DBLVALUE
    st = getVariable(171576);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_15_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_15_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_15_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171577 RESOURCE1.AI_16_DBLVALUE
    st = getVariable(171577);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_16_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_16_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_16_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171578 RESOURCE1.AI_17_DBLVALUE
    st = getVariable(171578);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_17_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_17_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_17_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171579 RESOURCE1.AI_18_DBLVALUE
    st = getVariable(171579);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_18_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_18_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_18_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171580 RESOURCE1.AI_19_DBLVALUE
    st = getVariable(171580);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_19_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_19_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_19_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171581 RESOURCE1.AI_1_DBLVALUE
    st = getVariable(171581);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_1_DBLVALUE", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_1_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_1_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171582 RESOURCE1.AI_20_DBLVALUE
    st = getVariable(171582);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_20_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_20_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_20_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171583 RESOURCE1.AI_21_DBLVALUE
    st = getVariable(171583);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_21_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_21_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_21_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171584 RESOURCE1.AI_22_DBLVALUE
    st = getVariable(171584);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_22_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_22_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_22_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171585 RESOURCE1.AI_23_DBLVALUE
    st = getVariable(171585);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_23_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_23_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_23_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171586 RESOURCE1.AI_24_DBLVALUE
    st = getVariable(171586);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_24_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_24_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_24_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171587 RESOURCE1.AI_25_DBLVALUE
    st = getVariable(171587);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_25_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_25_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_25_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171588 RESOURCE1.AI_26_DBLVALUE
    st = getVariable(171588);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_26_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_26_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_26_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171589 RESOURCE1.AI_27_DBLVALUE
    st = getVariable(171589);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_27_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_27_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_27_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171590 RESOURCE1.AI_28_DBLVALUE
    st = getVariable(171590);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_28_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_28_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_28_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171591 RESOURCE1.AI_29_DBLVALUE
    st = getVariable(171591);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_29_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_29_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_29_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171592 RESOURCE1.AI_2_DBLVALUE
    st = getVariable(171592);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_2_DBLVALUE", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_2_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_2_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171593 RESOURCE1.AI_30_DBLVALUE
    st = getVariable(171593);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_30_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_30_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_30_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171594 RESOURCE1.AI_31_DBLVALUE
    st = getVariable(171594);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_31_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_31_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_31_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171595 RESOURCE1.AI_32_DBLVALUE
    st = getVariable(171595);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_32_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_32_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_32_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171596 RESOURCE1.AI_33_DBLVALUE
    st = getVariable(171596);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_33_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_33_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_33_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171597 RESOURCE1.AI_34_DBLVALUE
    st = getVariable(171597);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_34_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_34_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_34_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171598 RESOURCE1.AI_35_DBLVALUE
    st = getVariable(171598);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_35_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_35_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_35_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171599 RESOURCE1.AI_36_DBLVALUE
    st = getVariable(171599);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_36_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_36_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_36_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171600 RESOURCE1.AI_37_DBLVALUE
    st = getVariable(171600);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_37_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_37_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_37_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171601 RESOURCE1.AI_38_DBLVALUE
    st = getVariable(171601);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_38_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_38_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_38_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171602 RESOURCE1.AI_39_DBLVALUE
    st = getVariable(171602);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_39_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_39_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_39_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171603 RESOURCE1.AI_3_DBLVALUE
    st = getVariable(171603);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_3_DBLVALUE", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_3_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_3_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171604 RESOURCE1.AI_40_DBLVALUE
    st = getVariable(171604);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_40_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_40_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_40_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171605 RESOURCE1.AI_41_DBLVALUE
    st = getVariable(171605);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_41_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_41_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_41_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171606 RESOURCE1.AI_42_DBLVALUE
    st = getVariable(171606);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_42_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_42_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_42_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171607 RESOURCE1.AI_43_DBLVALUE
    st = getVariable(171607);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_43_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_43_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_43_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171608 RESOURCE1.AI_44_DBLVALUE
    st = getVariable(171608);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_44_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_44_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_44_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171609 RESOURCE1.AI_45_DBLVALUE
    st = getVariable(171609);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_45_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_45_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_45_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171610 RESOURCE1.AI_46_DBLVALUE
    st = getVariable(171610);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_46_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_46_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_46_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171611 RESOURCE1.AI_47_DBLVALUE
    st = getVariable(171611);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_47_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_47_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_47_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171612 RESOURCE1.AI_48_DBLVALUE
    st = getVariable(171612);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_48_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_48_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_48_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171613 RESOURCE1.AI_49_DBLVALUE
    st = getVariable(171613);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_49_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_49_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_49_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171614 RESOURCE1.AI_4_DBLVALUE
    st = getVariable(171614);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_4_DBLVALUE", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_4_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_4_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171615 RESOURCE1.AI_50_DBLVALUE
    st = getVariable(171615);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_50_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_50_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_50_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171616 RESOURCE1.AI_51_DBLVALUE
    st = getVariable(171616);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_51_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_51_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_51_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171617 RESOURCE1.AI_52_DBLVALUE
    st = getVariable(171617);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_52_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_52_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_52_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171618 RESOURCE1.AI_53_DBLVALUE
    st = getVariable(171618);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_53_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_53_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_53_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171619 RESOURCE1.AI_54_DBLVALUE
    st = getVariable(171619);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_54_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_54_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_54_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171620 RESOURCE1.AI_55_DBLVALUE
    st = getVariable(171620);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_55_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_55_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_55_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171621 RESOURCE1.AI_56_DBLVALUE
    st = getVariable(171621);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_56_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_56_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_56_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171622 RESOURCE1.AI_57_DBLVALUE
    st = getVariable(171622);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_57_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_57_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_57_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171623 RESOURCE1.AI_58_DBLVALUE
    st = getVariable(171623);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_58_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_58_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_58_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171624 RESOURCE1.AI_59_DBLVALUE
    st = getVariable(171624);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_59_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_59_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_59_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171625 RESOURCE1.AI_5_DBLVALUE
    st = getVariable(171625);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_5_DBLVALUE", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_5_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_5_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171626 RESOURCE1.AI_60_DBLVALUE
    st = getVariable(171626);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_60_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_60_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_60_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171627 RESOURCE1.AI_61_DBLVALUE
    st = getVariable(171627);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_61_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_61_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_61_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171628 RESOURCE1.AI_62_DBLVALUE
    st = getVariable(171628);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_62_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_62_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_62_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171629 RESOURCE1.AI_63_DBLVALUE
    st = getVariable(171629);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_63_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_63_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_63_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171630 RESOURCE1.AI_64_DBLVALUE
    st = getVariable(171630);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_64_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_64_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_64_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171631 RESOURCE1.AI_65_DBLVALUE
    st = getVariable(171631);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_65_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_65_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_65_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171632 RESOURCE1.AI_66_DBLVALUE
    st = getVariable(171632);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_66_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_66_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_66_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171633 RESOURCE1.AI_67_DBLVALUE
    st = getVariable(171633);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_67_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_67_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_67_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171634 RESOURCE1.AI_68_DBLVALUE
    st = getVariable(171634);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_68_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_68_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_68_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171635 RESOURCE1.AI_69_DBLVALUE
    st = getVariable(171635);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_69_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_69_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_69_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171636 RESOURCE1.AI_6_DBLVALUE
    st = getVariable(171636);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_6_DBLVALUE", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_6_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_6_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171637 RESOURCE1.AI_70_DBLVALUE
    st = getVariable(171637);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_70_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_70_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_70_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171638 RESOURCE1.AI_71_DBLVALUE
    st = getVariable(171638);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_71_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_71_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_71_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171639 RESOURCE1.AI_72_DBLVALUE
    st = getVariable(171639);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_72_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_72_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_72_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171640 RESOURCE1.AI_73_DBLVALUE
    st = getVariable(171640);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_73_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_73_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_73_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171641 RESOURCE1.AI_74_DBLVALUE
    st = getVariable(171641);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_74_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_74_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_74_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171642 RESOURCE1.AI_75_DBLVALUE
    st = getVariable(171642);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_75_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_75_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_75_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171643 RESOURCE1.AI_76_DBLVALUE
    st = getVariable(171643);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_76_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_76_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_76_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171644 RESOURCE1.AI_77_DBLVALUE
    st = getVariable(171644);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_77_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_77_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_77_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171645 RESOURCE1.AI_78_DBLVALUE
    st = getVariable(171645);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_78_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_78_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_78_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171646 RESOURCE1.AI_79_DBLVALUE
    st = getVariable(171646);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_79_DBLVALUE", 24);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_79_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_79_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171647 RESOURCE1.AI_7_DBLVALUE
    st = getVariable(171647);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_7_DBLVALUE", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_7_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_7_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171648 RESOURCE1.AI_8_DBLVALUE
    st = getVariable(171648);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_8_DBLVALUE", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_8_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_8_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171649 RESOURCE1.AI_9_DBLVALUE
    st = getVariable(171649);
    memcpy(st->IEC_TYPE, "LREAL", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.AI_9_DBLVALUE", 23);
    st->size_data = sizeof(LREAL);
    extern LREAL RESOURCE1__AI_9_DBLVALUE;
    p_LREAL = (LREAL*)&RESOURCE1__AI_9_DBLVALUE;
    UnpackVar(p_LREAL, LREAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171650 RESOURCE1.BS_CORE1
    st = getVariable(171650);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.BS_CORE1", 18);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__BS_CORE1;
    p_REAL = (REAL*)&RESOURCE1__BS_CORE1;
    UnpackVar(p_REAL, REAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171651 RESOURCE1.BS_CORE2
    st = getVariable(171651);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.BS_CORE2", 18);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__BS_CORE2;
    p_REAL = (REAL*)&RESOURCE1__BS_CORE2;
    UnpackVar(p_REAL, REAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171652 RESOURCE1.BS_CORE3
    st = getVariable(171652);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.BS_CORE3", 18);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__BS_CORE3;
    p_REAL = (REAL*)&RESOURCE1__BS_CORE3;
    UnpackVar(p_REAL, REAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171653 RESOURCE1.BS_CORE4
    st = getVariable(171653);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.BS_CORE4", 18);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__BS_CORE4;
    p_REAL = (REAL*)&RESOURCE1__BS_CORE4;
    UnpackVar(p_REAL, REAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171654 RESOURCE1.BS_FREEMEMORY
    st = getVariable(171654);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.BS_FREEMEMORY", 23);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__BS_FREEMEMORY;
    p_REAL = (REAL*)&RESOURCE1__BS_FREEMEMORY;
    UnpackVar(p_REAL, REAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171655 RESOURCE1.BS_TEMP1
    st = getVariable(171655);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.BS_TEMP1", 18);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__BS_TEMP1;
    p_REAL = (REAL*)&RESOURCE1__BS_TEMP1;
    UnpackVar(p_REAL, REAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171656 RESOURCE1.BS_TEMP2
    st = getVariable(171656);
    memcpy(st->IEC_TYPE, "REAL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.BS_TEMP2", 18);
    st->size_data = sizeof(REAL);
    extern REAL RESOURCE1__BS_TEMP2;
    p_REAL = (REAL*)&RESOURCE1__BS_TEMP2;
    UnpackVar(p_REAL, REAL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171657 RESOURCE1.DI_0_1_WVALUE
    st = getVariable(171657);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DI_0_1_WVALUE", 23);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__DI_0_1_WVALUE;
    p_UDINT = (UDINT*)&RESOURCE1__DI_0_1_WVALUE;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171658 RESOURCE1.DI_10_11_WVALUE
    st = getVariable(171658);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DI_10_11_WVALUE", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__DI_10_11_WVALUE;
    p_UDINT = (UDINT*)&RESOURCE1__DI_10_11_WVALUE;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171659 RESOURCE1.DI_12_13_WVALUE
    st = getVariable(171659);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DI_12_13_WVALUE", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__DI_12_13_WVALUE;
    p_UDINT = (UDINT*)&RESOURCE1__DI_12_13_WVALUE;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171660 RESOURCE1.DI_14_15_WVALUE
    st = getVariable(171660);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DI_14_15_WVALUE", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__DI_14_15_WVALUE;
    p_UDINT = (UDINT*)&RESOURCE1__DI_14_15_WVALUE;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171661 RESOURCE1.DI_16_17_WVALUE
    st = getVariable(171661);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DI_16_17_WVALUE", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__DI_16_17_WVALUE;
    p_UDINT = (UDINT*)&RESOURCE1__DI_16_17_WVALUE;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171662 RESOURCE1.DI_18_19_WVALUE
    st = getVariable(171662);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DI_18_19_WVALUE", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__DI_18_19_WVALUE;
    p_UDINT = (UDINT*)&RESOURCE1__DI_18_19_WVALUE;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171663 RESOURCE1.DI_20_21_WVALUE
    st = getVariable(171663);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DI_20_21_WVALUE", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__DI_20_21_WVALUE;
    p_UDINT = (UDINT*)&RESOURCE1__DI_20_21_WVALUE;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171664 RESOURCE1.DI_2_3_WVALUE
    st = getVariable(171664);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DI_2_3_WVALUE", 23);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__DI_2_3_WVALUE;
    p_UDINT = (UDINT*)&RESOURCE1__DI_2_3_WVALUE;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171665 RESOURCE1.DI_4_5_WVALUE
    st = getVariable(171665);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DI_4_5_WVALUE", 23);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__DI_4_5_WVALUE;
    p_UDINT = (UDINT*)&RESOURCE1__DI_4_5_WVALUE;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171666 RESOURCE1.DI_6_7_WVALUE
    st = getVariable(171666);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DI_6_7_WVALUE", 23);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__DI_6_7_WVALUE;
    p_UDINT = (UDINT*)&RESOURCE1__DI_6_7_WVALUE;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171667 RESOURCE1.DI_8_9_WVALUE
    st = getVariable(171667);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DI_8_9_WVALUE", 23);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__DI_8_9_WVALUE;
    p_UDINT = (UDINT*)&RESOURCE1__DI_8_9_WVALUE;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171668 RESOURCE1.DO_0_WVALUE
    st = getVariable(171668);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DO_0_WVALUE", 21);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__DO_0_WVALUE;
    p_UINT = (UINT*)&RESOURCE1__DO_0_WVALUE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171669 RESOURCE1.DO_1_WVALUE
    st = getVariable(171669);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DO_1_WVALUE", 21);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__DO_1_WVALUE;
    p_UINT = (UINT*)&RESOURCE1__DO_1_WVALUE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171670 RESOURCE1.DO_2_WVALUE
    st = getVariable(171670);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DO_2_WVALUE", 21);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__DO_2_WVALUE;
    p_UINT = (UINT*)&RESOURCE1__DO_2_WVALUE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171671 RESOURCE1.DO_3_WVALUE
    st = getVariable(171671);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DO_3_WVALUE", 21);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__DO_3_WVALUE;
    p_UINT = (UINT*)&RESOURCE1__DO_3_WVALUE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171672 RESOURCE1.DO_4_WVALUE
    st = getVariable(171672);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DO_4_WVALUE", 21);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__DO_4_WVALUE;
    p_UINT = (UINT*)&RESOURCE1__DO_4_WVALUE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171673 RESOURCE1.DO_5_WVALUE
    st = getVariable(171673);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.DO_5_WVALUE", 21);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__DO_5_WVALUE;
    p_UINT = (UINT*)&RESOURCE1__DO_5_WVALUE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171674 RESOURCE1.IM_CMN_INCOMMAND_ARM
    st = getVariable(171674);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_CMN_INCOMMAND_ARM", 30);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_CMN_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_CMN_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171675 RESOURCE1.IM_CMN_STATUS
    st = getVariable(171675);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_CMN_STATUS", 23);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_CMN_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_CMN_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171676 RESOURCE1.IM_KALORIFERAVOM_INCOMMAND_ARM
    st = getVariable(171676);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KALORIFERAVOM_INCOMMAND_ARM", 40);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_KALORIFERAVOM_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_KALORIFERAVOM_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171677 RESOURCE1.IM_KALORIFERAVOM_STATUS
    st = getVariable(171677);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KALORIFERAVOM_STATUS", 33);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_KALORIFERAVOM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_KALORIFERAVOM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171678 RESOURCE1.IM_KRAN1_INCOMMAND_ARM
    st = getVariable(171678);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN1_INCOMMAND_ARM", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_KRAN1_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_KRAN1_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171679 RESOURCE1.IM_KRAN1_STATUS
    st = getVariable(171679);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN1_STATUS", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_KRAN1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_KRAN1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171680 RESOURCE1.IM_KRAN2_INCOMMAND_ARM
    st = getVariable(171680);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN2_INCOMMAND_ARM", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_KRAN2_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_KRAN2_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171681 RESOURCE1.IM_KRAN2_STATUS
    st = getVariable(171681);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN2_STATUS", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_KRAN2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_KRAN2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171682 RESOURCE1.IM_KRAN3_INCOMMAND_ARM
    st = getVariable(171682);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN3_INCOMMAND_ARM", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_KRAN3_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_KRAN3_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171683 RESOURCE1.IM_KRAN3_STATUS
    st = getVariable(171683);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN3_STATUS", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_KRAN3_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_KRAN3_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171684 RESOURCE1.IM_KRAN3B_INCOMMAND_ARM
    st = getVariable(171684);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN3B_INCOMMAND_ARM", 33);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_KRAN3B_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_KRAN3B_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171685 RESOURCE1.IM_KRAN3B_STATUS
    st = getVariable(171685);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN3B_STATUS", 26);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_KRAN3B_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_KRAN3B_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171686 RESOURCE1.IM_KRAN4_INCOMMAND_ARM
    st = getVariable(171686);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN4_INCOMMAND_ARM", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_KRAN4_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_KRAN4_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171687 RESOURCE1.IM_KRAN4_STATUS
    st = getVariable(171687);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN4_STATUS", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_KRAN4_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_KRAN4_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171688 RESOURCE1.IM_KRAN5_INCOMMAND_ARM
    st = getVariable(171688);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN5_INCOMMAND_ARM", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_KRAN5_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_KRAN5_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171689 RESOURCE1.IM_KRAN5_STATUS
    st = getVariable(171689);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN5_STATUS", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_KRAN5_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_KRAN5_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171690 RESOURCE1.IM_KRAN6_INCOMMAND_ARM
    st = getVariable(171690);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN6_INCOMMAND_ARM", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_KRAN6_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_KRAN6_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171691 RESOURCE1.IM_KRAN6_STATUS
    st = getVariable(171691);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_KRAN6_STATUS", 25);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_KRAN6_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_KRAN6_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171692 RESOURCE1.IM_SINGLESIGNALS_AO_GPA_OT_PRU_STATUS
    st = getVariable(171692);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_AO_GPA_OT_PRU_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_AO_GPA_OT_PRU_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_AO_GPA_OT_PRU_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171693 RESOURCE1.IM_SINGLESIGNALS_AO_GPA_OT_SHU_STATUS
    st = getVariable(171693);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_AO_GPA_OT_SHU_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_AO_GPA_OT_SHU_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_AO_GPA_OT_SHU_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171694 RESOURCE1.IM_SINGLESIGNALS_AO_KC_OT_SHKS_STATUS
    st = getVariable(171694);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_AO_KC_OT_SHKS_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_AO_KC_OT_SHKS_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_AO_KC_OT_SHKS_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171695 RESOURCE1.IM_SINGLESIGNALS_ASSINHRONNII_HOD_PEREGRUZKA_STATUS
    st = getVariable(171695);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_ASSINHRONNII_HOD_PEREGRUZKA_STATUS", 61);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_ASSINHRONNII_HOD_PEREGRUZKA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_ASSINHRONNII_HOD_PEREGRUZKA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171696 RESOURCE1.IM_SINGLESIGNALS_AVARIINOE_OTKLUCH_VIKLUCHATELYA_STATUS
    st = getVariable(171696);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_AVARIINOE_OTKLUCH_VIKLUCHATELYA_STATUS", 65);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_AVARIINOE_OTKLUCH_VIKLUCHATELYA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_AVARIINOE_OTKLUCH_VIKLUCHATELYA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171697 RESOURCE1.IM_SINGLESIGNALS_BEAO_SRABOTAL_STATUS
    st = getVariable(171697);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_BEAO_SRABOTAL_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_BEAO_SRABOTAL_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_BEAO_SRABOTAL_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171698 RESOURCE1.IM_SINGLESIGNALS_CHASTOTNY_PUSK_STATUS
    st = getVariable(171698);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_CHASTOTNY_PUSK_STATUS", 48);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_CHASTOTNY_PUSK_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_CHASTOTNY_PUSK_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171699 RESOURCE1.IM_SINGLESIGNALS_DVER_SHU_PERED_OTKRITA_STATUS
    st = getVariable(171699);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_DVER_SHU_PERED_OTKRITA_STATUS", 56);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_DVER_SHU_PERED_OTKRITA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_DVER_SHU_PERED_OTKRITA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171700 RESOURCE1.IM_SINGLESIGNALS_DVER_SHU_ZAD_OTKRITA_STATUS
    st = getVariable(171700);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_DVER_SHU_ZAD_OTKRITA_STATUS", 54);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_DVER_SHU_ZAD_OTKRITA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_DVER_SHU_ZAD_OTKRITA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171701 RESOURCE1.IM_SINGLESIGNALS_EO_EGPA_OT_PRY_STATUS
    st = getVariable(171701);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_EO_EGPA_OT_PRY_STATUS", 48);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_EO_EGPA_OT_PRY_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_EO_EGPA_OT_PRY_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171702 RESOURCE1.IM_SINGLESIGNALS_EO_GPA_OT_KNOPKI_SHU_STATUS
    st = getVariable(171702);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_EO_GPA_OT_KNOPKI_SHU_STATUS", 54);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_EO_GPA_OT_KNOPKI_SHU_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_EO_GPA_OT_KNOPKI_SHU_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171703 RESOURCE1.IM_SINGLESIGNALS_NKU1_GPA_ON_STATUS
    st = getVariable(171703);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NKU1_GPA_ON_STATUS", 45);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NKU1_GPA_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NKU1_GPA_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171704 RESOURCE1.IM_SINGLESIGNALS_NKU2_GPA_ON_STATUS
    st = getVariable(171704);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NKU2_GPA_ON_STATUS", 45);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NKU2_GPA_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NKU2_GPA_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171705 RESOURCE1.IM_SINGLESIGNALS_NO_GPA_OT_SHU_STATUS
    st = getVariable(171705);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NO_GPA_OT_SHU_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NO_GPA_OT_SHU_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NO_GPA_OT_SHU_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171706 RESOURCE1.IM_SINGLESIGNALS_NS_G10_G11_STATUS
    st = getVariable(171706);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NS_G10_G11_STATUS", 44);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NS_G10_G11_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NS_G10_G11_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171707 RESOURCE1.IM_SINGLESIGNALS_NS_G13_G14_STATUS
    st = getVariable(171707);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NS_G13_G14_STATUS", 44);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NS_G13_G14_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NS_G13_G14_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171708 RESOURCE1.IM_SINGLESIGNALS_NS_G15_G16_STATUS
    st = getVariable(171708);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NS_G15_G16_STATUS", 44);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NS_G15_G16_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NS_G15_G16_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171709 RESOURCE1.IM_SINGLESIGNALS_NS_G17_STATUS
    st = getVariable(171709);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NS_G17_STATUS", 40);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NS_G17_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NS_G17_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171710 RESOURCE1.IM_SINGLESIGNALS_NS_G18_G19_STATUS
    st = getVariable(171710);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NS_G18_G19_STATUS", 44);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NS_G18_G19_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NS_G18_G19_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171711 RESOURCE1.IM_SINGLESIGNALS_NS_G1_G2_STATUS
    st = getVariable(171711);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NS_G1_G2_STATUS", 42);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NS_G1_G2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NS_G1_G2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171712 RESOURCE1.IM_SINGLESIGNALS_NS_G3_G4_STATUS
    st = getVariable(171712);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NS_G3_G4_STATUS", 42);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NS_G3_G4_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NS_G3_G4_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171713 RESOURCE1.IM_SINGLESIGNALS_NS_G5_G6_STATUS
    st = getVariable(171713);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NS_G5_G6_STATUS", 42);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NS_G5_G6_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NS_G5_G6_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171714 RESOURCE1.IM_SINGLESIGNALS_NS_G7_G8_STATUS
    st = getVariable(171714);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NS_G7_G8_STATUS", 42);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NS_G7_G8_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NS_G7_G8_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171715 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_220BEAO_STATUS
    st = getVariable(171715);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_220BEAO_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_220BEAO_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_220BEAO_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171716 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP11_STATUS
    st = getVariable(171716);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP11_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP11_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP11_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171717 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP12_STATUS
    st = getVariable(171717);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP12_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP12_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP12_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171718 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP1_STATUS
    st = getVariable(171718);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP1_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171719 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP2_STATUS
    st = getVariable(171719);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP2_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171720 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP3_STATUS
    st = getVariable(171720);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP3_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP3_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP3_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171721 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP4_STATUS
    st = getVariable(171721);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP4_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP4_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP4_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171722 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP5_STATUS
    st = getVariable(171722);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP5_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP5_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP5_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171723 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP6_STATUS
    st = getVariable(171723);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP6_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP6_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP6_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171724 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP7_BP8_STATUS
    st = getVariable(171724);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP7_BP8_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP7_BP8_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP7_BP8_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171725 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP9_BP10_STATUS
    st = getVariable(171725);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_BP9_BP10_STATUS", 51);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP9_BP10_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_BP9_BP10_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171726 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_CEPEI_UPRAVLEN_MV_STATUS
    st = getVariable(171726);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_CEPEI_UPRAVLEN_MV_STATUS", 60);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_CEPEI_UPRAVLEN_MV_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_CEPEI_UPRAVLEN_MV_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171727 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_PER_220_NA_VHODE_STATUS
    st = getVariable(171727);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_PER_220_NA_VHODE_STATUS", 59);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_PER_220_NA_VHODE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_PER_220_NA_VHODE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171728 RESOURCE1.IM_SINGLESIGNALS_NALICHIE_POST_220_NA_VHODE_STATUS
    st = getVariable(171728);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NALICHIE_POST_220_NA_VHODE_STATUS", 60);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NALICHIE_POST_220_NA_VHODE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NALICHIE_POST_220_NA_VHODE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171729 RESOURCE1.IM_SINGLESIGNALS_NEUSPESH_CHASTOTNY_PUSK_STATUS
    st = getVariable(171729);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_NEUSPESH_CHASTOTNY_PUSK_STATUS", 57);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_NEUSPESH_CHASTOTNY_PUSK_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_NEUSPESH_CHASTOTNY_PUSK_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171730 RESOURCE1.IM_SINGLESIGNALS_OSNOVNOY_REGUL_OFF_STATUS
    st = getVariable(171730);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_OSNOVNOY_REGUL_OFF_STATUS", 52);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_OSNOVNOY_REGUL_OFF_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_OSNOVNOY_REGUL_OFF_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171731 RESOURCE1.IM_SINGLESIGNALS_POTOK_MS_POSLE_AVOM_STATUS
    st = getVariable(171731);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_POTOK_MS_POSLE_AVOM_STATUS", 53);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_POTOK_MS_POSLE_AVOM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_POTOK_MS_POSLE_AVOM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171732 RESOURCE1.IM_SINGLESIGNALS_QF10_QF11_ON_STATUS
    st = getVariable(171732);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_QF10_QF11_ON_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_QF10_QF11_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_QF10_QF11_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171733 RESOURCE1.IM_SINGLESIGNALS_QF12_QF13_ON_STATUS
    st = getVariable(171733);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_QF12_QF13_ON_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_QF12_QF13_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_QF12_QF13_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171734 RESOURCE1.IM_SINGLESIGNALS_QF14_QF15_ON_STATUS
    st = getVariable(171734);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_QF14_QF15_ON_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_QF14_QF15_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_QF14_QF15_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171735 RESOURCE1.IM_SINGLESIGNALS_QF1_ON_STATUS
    st = getVariable(171735);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_QF1_ON_STATUS", 40);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_QF1_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_QF1_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171736 RESOURCE1.IM_SINGLESIGNALS_QF22_ON_STATUS
    st = getVariable(171736);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_QF22_ON_STATUS", 41);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_QF22_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_QF22_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171737 RESOURCE1.IM_SINGLESIGNALS_QF23_ON_STATUS
    st = getVariable(171737);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_QF23_ON_STATUS", 41);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_QF23_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_QF23_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171738 RESOURCE1.IM_SINGLESIGNALS_QF2_ON_STATUS
    st = getVariable(171738);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_QF2_ON_STATUS", 40);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_QF2_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_QF2_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171739 RESOURCE1.IM_SINGLESIGNALS_QF4_QF5_ON_STATUS
    st = getVariable(171739);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_QF4_QF5_ON_STATUS", 44);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_QF4_QF5_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_QF4_QF5_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171740 RESOURCE1.IM_SINGLESIGNALS_QF6_QF7_ON_STATUS
    st = getVariable(171740);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_QF6_QF7_ON_STATUS", 44);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_QF6_QF7_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_QF6_QF7_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171741 RESOURCE1.IM_SINGLESIGNALS_QF8_QF9_ON_STATUS
    st = getVariable(171741);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_QF8_QF9_ON_STATUS", 44);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_QF8_QF9_ON_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_QF8_QF9_ON_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171742 RESOURCE1.IM_SINGLESIGNALS_RAZRESHENIE_ZAGRUZKI_DVIG_STATUS
    st = getVariable(171742);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_RAZRESHENIE_ZAGRUZKI_DVIG_STATUS", 59);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_RAZRESHENIE_ZAGRUZKI_DVIG_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_RAZRESHENIE_ZAGRUZKI_DVIG_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171743 RESOURCE1.IM_SINGLESIGNALS_REACTORNY_PUSK_STATUS
    st = getVariable(171743);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_REACTORNY_PUSK_STATUS", 48);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_REACTORNY_PUSK_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_REACTORNY_PUSK_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171744 RESOURCE1.IM_SINGLESIGNALS_REZHIM_RUCHNOGO_REGULIROVANIYA_STATUS
    st = getVariable(171744);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_REZHIM_RUCHNOGO_REGULIROVANIYA_STATUS", 64);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_REZHIM_RUCHNOGO_REGULIROVANIYA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_REZHIM_RUCHNOGO_REGULIROVANIYA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171745 RESOURCE1.IM_SINGLESIGNALS_SHAVR1_V_RABOTE_STATUS
    st = getVariable(171745);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_SHAVR1_V_RABOTE_STATUS", 49);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_SHAVR1_V_RABOTE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_SHAVR1_V_RABOTE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171746 RESOURCE1.IM_SINGLESIGNALS_SHAVR2_V_RABOTE_STATUS
    st = getVariable(171746);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_SHAVR2_V_RABOTE_STATUS", 49);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_SHAVR2_V_RABOTE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_SHAVR2_V_RABOTE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171747 RESOURCE1.IM_SINGLESIGNALS_SHP_V_GPA_VKLUCH_STATUS
    st = getVariable(171747);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_SHP_V_GPA_VKLUCH_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_SHP_V_GPA_VKLUCH_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_SHP_V_GPA_VKLUCH_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171748 RESOURCE1.IM_SINGLESIGNALS_SHU_V_GPA_VKLUCH_STATUS
    st = getVariable(171748);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_SHU_V_GPA_VKLUCH_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_SHU_V_GPA_VKLUCH_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_SHU_V_GPA_VKLUCH_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171749 RESOURCE1.IM_SINGLESIGNALS_SYNCHRONIZ_REZHIMA_K1_STATUS
    st = getVariable(171749);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_SYNCHRONIZ_REZHIMA_K1_STATUS", 55);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_SYNCHRONIZ_REZHIMA_K1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_SYNCHRONIZ_REZHIMA_K1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171750 RESOURCE1.IM_SINGLESIGNALS_UROVEN_MASLA_AKKUM_STATUS
    st = getVariable(171750);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_UROVEN_MASLA_AKKUM_STATUS", 52);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_UROVEN_MASLA_AKKUM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_UROVEN_MASLA_AKKUM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171751 RESOURCE1.IM_SINGLESIGNALS_VOLTAGE_SEKCII_NORM_STATUS
    st = getVariable(171751);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_VOLTAGE_SEKCII_NORM_STATUS", 53);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_VOLTAGE_SEKCII_NORM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_VOLTAGE_SEKCII_NORM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171752 RESOURCE1.IM_SINGLESIGNALS_VOZBUD_GOTOVNOST_STATUS
    st = getVariable(171752);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_VOZBUD_GOTOVNOST_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_VOZBUD_GOTOVNOST_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_VOZBUD_GOTOVNOST_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171753 RESOURCE1.IM_SINGLESIGNALS_VOZBUD_NEISPR_TSEPEY_UPR_AVR_PIT_STATUS
    st = getVariable(171753);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_VOZBUD_NEISPR_TSEPEY_UPR_AVR_PIT_STATUS", 66);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_VOZBUD_NEISPR_TSEPEY_UPR_AVR_PIT_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_VOZBUD_NEISPR_TSEPEY_UPR_AVR_PIT_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171754 RESOURCE1.IM_SINGLESIGNALS_VOZBUD_NEISPRAVNOST_STATUS
    st = getVariable(171754);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_VOZBUD_NEISPRAVNOST_STATUS", 53);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_VOZBUD_NEISPRAVNOST_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_VOZBUD_NEISPRAVNOST_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171755 RESOURCE1.IM_SINGLESIGNALS_DP_MASLO_GAZ_LESS100_STATUS
    st = getVariable(171755);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_DP_MASLO_GAZ_LESS100_STATUS", 54);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_DP_MASLO_GAZ_LESS100_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_DP_MASLO_GAZ_LESS100_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171756 RESOURCE1.IM_SINGLESIGNALS_DP_KRAN1_LESS100_STATUS
    st = getVariable(171756);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_SINGLESIGNALS_DP_KRAN1_LESS100_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_SINGLESIGNALS_DP_KRAN1_LESS100_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_SINGLESIGNALS_DP_KRAN1_LESS100_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171757 RESOURCE1.IM_TEN_MB_INCOMMAND_ARM
    st = getVariable(171757);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_TEN_MB_INCOMMAND_ARM", 33);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_TEN_MB_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_TEN_MB_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171758 RESOURCE1.IM_TEN_MB_STATUS
    st = getVariable(171758);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_TEN_MB_STATUS", 26);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_TEN_MB_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_TEN_MB_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171759 RESOURCE1.IM_TEN_KOLLECTORA_INCOMMAND_ARM
    st = getVariable(171759);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_TEN_KOLLECTORA_INCOMMAND_ARM", 41);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_TEN_KOLLECTORA_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_TEN_KOLLECTORA_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171760 RESOURCE1.IM_TEN_KOLLECTORA_STATUS
    st = getVariable(171760);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_TEN_KOLLECTORA_STATUS", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_TEN_KOLLECTORA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_TEN_KOLLECTORA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171761 RESOURCE1.IM_MV_INCOMMAND_ARM
    st = getVariable(171761);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_MV_INCOMMAND_ARM", 29);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_MV_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_MV_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171762 RESOURCE1.IM_MV_STATUS
    st = getVariable(171762);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_MV_STATUS", 22);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_MV_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_MV_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171763 RESOURCE1.IM_NU1_INCOMMAND_ARM
    st = getVariable(171763);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_NU1_INCOMMAND_ARM", 30);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_NU1_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_NU1_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171764 RESOURCE1.IM_NU1_STATUS
    st = getVariable(171764);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_NU1_STATUS", 23);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_NU1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_NU1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171765 RESOURCE1.IM_NU2_INCOMMAND_ARM
    st = getVariable(171765);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_NU2_INCOMMAND_ARM", 30);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_NU2_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_NU2_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171766 RESOURCE1.IM_NU2_STATUS
    st = getVariable(171766);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_NU2_STATUS", 23);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_NU2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_NU2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171767 RESOURCE1.IM_PNS_INCOMMAND_ARM
    st = getVariable(171767);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_PNS_INCOMMAND_ARM", 30);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_PNS_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_PNS_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171768 RESOURCE1.IM_PNS_STATUS
    st = getVariable(171768);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_PNS_STATUS", 23);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_PNS_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_PNS_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171769 RESOURCE1.IM_V1_AVOM_INCOMMAND_ARM
    st = getVariable(171769);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_V1_AVOM_INCOMMAND_ARM", 34);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_V1_AVOM_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_V1_AVOM_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171770 RESOURCE1.IM_V1_AVOM_STATUS
    st = getVariable(171770);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_V1_AVOM_STATUS", 27);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_V1_AVOM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_V1_AVOM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171771 RESOURCE1.IM_V2_AVOM_INCOMMAND_ARM
    st = getVariable(171771);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_V2_AVOM_INCOMMAND_ARM", 34);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_V2_AVOM_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_V2_AVOM_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171772 RESOURCE1.IM_V2_AVOM_STATUS
    st = getVariable(171772);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_V2_AVOM_STATUS", 27);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_V2_AVOM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_V2_AVOM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171773 RESOURCE1.IM_V3_AVOM_INCOMMAND_ARM
    st = getVariable(171773);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_V3_AVOM_INCOMMAND_ARM", 34);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_V3_AVOM_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_V3_AVOM_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171774 RESOURCE1.IM_V3_AVOM_STATUS
    st = getVariable(171774);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_V3_AVOM_STATUS", 27);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_V3_AVOM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_V3_AVOM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171775 RESOURCE1.IM_V4_AVOM_INCOMMAND_ARM
    st = getVariable(171775);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_V4_AVOM_INCOMMAND_ARM", 34);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__IM_V4_AVOM_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__IM_V4_AVOM_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171776 RESOURCE1.IM_V4_AVOM_STATUS
    st = getVariable(171776);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.IM_V4_AVOM_STATUS", 27);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__IM_V4_AVOM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__IM_V4_AVOM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171777 RESOURCE1.ALGORITMS_ANTIPOMPAG
    st = getVariable(171777);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_ANTIPOMPAG", 30);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_ANTIPOMPAG;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_ANTIPOMPAG;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171778 RESOURCE1.ALGORITMS_APUSK
    st = getVariable(171778);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_APUSK", 25);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_APUSK;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_APUSK;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171779 RESOURCE1.ALGORITMS_AUTOAVOM
    st = getVariable(171779);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOAVOM", 28);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AUTOAVOM;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AUTOAVOM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171780 RESOURCE1.ALGORITMS_AUTOPNS
    st = getVariable(171780);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOPNS", 27);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AUTOPNS;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AUTOPNS;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171781 RESOURCE1.ALGORITMS_AUTOTEN
    st = getVariable(171781);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOTEN", 27);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AUTOTEN;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AUTOTEN;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171782 RESOURCE1.ALGORITMS_LINETORING
    st = getVariable(171782);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_LINETORING", 30);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_LINETORING;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_LINETORING;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171783 RESOURCE1.ALGORITMS_PROV_PMS_ALG
    st = getVariable(171783);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_PMS_ALG", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PROV_PMS_ALG;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PROV_PMS_ALG;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171784 RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG
    st = getVariable(171784);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG", 39);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171785 RESOURCE1.ALGORITMS_PUSK_F_FAZA1
    st = getVariable(171785);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA1", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSK_F_FAZA1;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA1;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171786 RESOURCE1.ALGORITMS_PUSK_F_FAZA2
    st = getVariable(171786);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA2", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSK_F_FAZA2;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA2;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171787 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY
    st = getVariable(171787);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY", 43);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171788 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR
    st = getVariable(171788);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR", 41);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171789 RESOURCE1.ALGORITMS_PUSK_TH_FAZA
    st = getVariable(171789);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_TH_FAZA", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSK_TH_FAZA;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSK_TH_FAZA;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171790 RESOURCE1.ALGORITMS_REMONT
    st = getVariable(171790);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_REMONT", 26);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_REMONT;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_REMONT;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171791 RESOURCE1.ALGORITMS_RINGTOLINE
    st = getVariable(171791);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_RINGTOLINE", 30);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_RINGTOLINE;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_RINGTOLINE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171792 RESOURCE1.ALGORITMS_SEMIAUTOPUSK
    st = getVariable(171792);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_SEMIAUTOPUSK", 32);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_SEMIAUTOPUSK;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_SEMIAUTOPUSK;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171793 RESOURCE1.ALGORITMS_TESTPROTECTION
    st = getVariable(171793);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTPROTECTION", 34);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_TESTPROTECTION;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_TESTPROTECTION;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171794 RESOURCE1.ALGORITMS_AO
    st = getVariable(171794);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AO", 22);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AO;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AO;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171795 RESOURCE1.ALGORITMS_ENGINERUN
    st = getVariable(171795);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_ENGINERUN", 29);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_ENGINERUN;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_ENGINERUN;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171796 RESOURCE1.ALGORITMS_FILLING
    st = getVariable(171796);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_FILLING", 27);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_FILLING;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_FILLING;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171797 RESOURCE1.ALGORITMS_NO
    st = getVariable(171797);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_NO", 22);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_NO;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_NO;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171798 RESOURCE1.ALGORITMS_PPU
    st = getVariable(171798);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PPU", 23);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PPU;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PPU;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171799 RESOURCE1.ALGORITMS_PUSKK
    st = getVariable(171799);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKK", 25);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSKK;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSKK;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171800 RESOURCE1.ALGORITMS_PUSKOILSYSTEM
    st = getVariable(171800);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKOILSYSTEM", 33);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSKOILSYSTEM;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSKOILSYSTEM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171801 RESOURCE1.ALGORITMS_PUSKV
    st = getVariable(171801);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKV", 25);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSKV;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSKV;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171802 RESOURCE1.ALGORITMS_TESTIM
    st = getVariable(171802);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTIM", 26);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_TESTIM;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_TESTIM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171803 RESOURCE1.ALGORITMS_TESTPMS
    st = getVariable(171803);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTPMS", 27);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_TESTPMS;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_TESTPMS;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171804 RESOURCE1.ALGORITMS_TESTDPMG
    st = getVariable(171804);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTDPMG", 28);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_TESTDPMG;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_TESTDPMG;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171805 RESOURCE1.ALGORITMS_VIBEGPNS
    st = getVariable(171805);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_VIBEGPNS", 28);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_VIBEGPNS;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_VIBEGPNS;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171806 RESOURCE1.ALGMANAGER_MODE
    st = getVariable(171806);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGMANAGER_MODE", 25);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGMANAGER_MODE;
    p_UINT = (UINT*)&RESOURCE1__ALGMANAGER_MODE;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171807 RESOURCE1.ALGORITMS_ANTIPOMPAG_COMMAND
    st = getVariable(171807);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_ANTIPOMPAG_COMMAND", 38);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_ANTIPOMPAG_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_ANTIPOMPAG_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171808 RESOURCE1.ALGORITMS_APUSK_ERROR
    st = getVariable(171808);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_APUSK_ERROR", 31);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_APUSK_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_APUSK_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171809 RESOURCE1.ALGORITMS_APUSK_START
    st = getVariable(171809);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_APUSK_START", 31);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_APUSK_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_APUSK_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171810 RESOURCE1.ALGORITMS_APUSK_TOP
    st = getVariable(171810);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_APUSK_TOP", 29);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_APUSK_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_APUSK_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171811 RESOURCE1.ALGORITMS_APUSK_COMMAND
    st = getVariable(171811);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_APUSK_COMMAND", 33);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_APUSK_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_APUSK_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171812 RESOURCE1.ALGORITMS_APUSK_STATUS
    st = getVariable(171812);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_APUSK_STATUS", 32);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_APUSK_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_APUSK_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171813 RESOURCE1.ALGORITMS_AUTOAVOM_ERROR
    st = getVariable(171813);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOAVOM_ERROR", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AUTOAVOM_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AUTOAVOM_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171814 RESOURCE1.ALGORITMS_AUTOAVOM_START
    st = getVariable(171814);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOAVOM_START", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AUTOAVOM_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AUTOAVOM_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171815 RESOURCE1.ALGORITMS_AUTOAVOM_TOP
    st = getVariable(171815);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOAVOM_TOP", 32);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AUTOAVOM_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AUTOAVOM_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171816 RESOURCE1.ALGORITMS_AUTOAVOM_COMMAND
    st = getVariable(171816);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOAVOM_COMMAND", 36);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AUTOAVOM_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AUTOAVOM_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171817 RESOURCE1.ALGORITMS_AUTOAVOM_STATUS
    st = getVariable(171817);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOAVOM_STATUS", 35);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AUTOAVOM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AUTOAVOM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171818 RESOURCE1.ALGORITMS_AUTOPNS_OFFTIMER
    st = getVariable(171818);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOPNS_OFFTIMER", 36);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AUTOPNS_OFFTIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AUTOPNS_OFFTIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171819 RESOURCE1.ALGORITMS_AUTOPNS_ONTIMER
    st = getVariable(171819);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOPNS_ONTIMER", 35);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AUTOPNS_ONTIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AUTOPNS_ONTIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171820 RESOURCE1.ALGORITMS_AUTOPNS_COMMAND
    st = getVariable(171820);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOPNS_COMMAND", 35);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AUTOPNS_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AUTOPNS_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171821 RESOURCE1.ALGORITMS_AUTOPNS_STATUS
    st = getVariable(171821);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOPNS_STATUS", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AUTOPNS_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AUTOPNS_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171822 RESOURCE1.ALGORITMS_AUTOTEN_COMMAND
    st = getVariable(171822);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOTEN_COMMAND", 35);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AUTOTEN_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AUTOTEN_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171823 RESOURCE1.ALGORITMS_AUTOTEN_STATUS
    st = getVariable(171823);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTOTEN_STATUS", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AUTOTEN_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AUTOTEN_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171824 RESOURCE1.ALGORITMS_LINETORING_COMMAND
    st = getVariable(171824);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_LINETORING_COMMAND", 38);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_LINETORING_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_LINETORING_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171825 RESOURCE1.ALGORITMS_PROV_PMS_ALG_ERROR
    st = getVariable(171825);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_PMS_ALG_ERROR", 38);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PROV_PMS_ALG_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PROV_PMS_ALG_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171826 RESOURCE1.ALGORITMS_PROV_PMS_ALG_START
    st = getVariable(171826);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_PMS_ALG_START", 38);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PROV_PMS_ALG_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PROV_PMS_ALG_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171827 RESOURCE1.ALGORITMS_PROV_PMS_ALG_TOP
    st = getVariable(171827);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_PMS_ALG_TOP", 36);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PROV_PMS_ALG_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PROV_PMS_ALG_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171828 RESOURCE1.ALGORITMS_PROV_PMS_ALG_COMMAND
    st = getVariable(171828);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_PMS_ALG_COMMAND", 40);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PROV_PMS_ALG_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PROV_PMS_ALG_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171829 RESOURCE1.ALGORITMS_PROV_PMS_ALG_STATUS
    st = getVariable(171829);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_PMS_ALG_STATUS", 39);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PROV_PMS_ALG_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PROV_PMS_ALG_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171830 RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG_ERROR
    st = getVariable(171830);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG_ERROR", 45);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171831 RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG_START
    st = getVariable(171831);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG_START", 45);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171832 RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG_TOP
    st = getVariable(171832);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG_TOP", 43);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171833 RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG_COMMAND
    st = getVariable(171833);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG_COMMAND", 47);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171834 RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG_STATUS
    st = getVariable(171834);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PROV_OPRESSOVKA_ALG_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PROV_OPRESSOVKA_ALG_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171835 RESOURCE1.ALGORITMS_PUSK_F_FAZA1_ERROR
    st = getVariable(171835);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA1_ERROR", 38);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_F_FAZA1_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA1_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171836 RESOURCE1.ALGORITMS_PUSK_F_FAZA1_START
    st = getVariable(171836);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA1_START", 38);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_F_FAZA1_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA1_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171837 RESOURCE1.ALGORITMS_PUSK_F_FAZA1_TOP
    st = getVariable(171837);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA1_TOP", 36);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_F_FAZA1_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA1_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171838 RESOURCE1.ALGORITMS_PUSK_F_FAZA1_COMMAND
    st = getVariable(171838);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA1_COMMAND", 40);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSK_F_FAZA1_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA1_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171839 RESOURCE1.ALGORITMS_PUSK_F_FAZA1_STATUS
    st = getVariable(171839);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA1_STATUS", 39);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_F_FAZA1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171840 RESOURCE1.ALGORITMS_PUSK_F_FAZA2_ERROR
    st = getVariable(171840);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA2_ERROR", 38);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_F_FAZA2_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA2_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171841 RESOURCE1.ALGORITMS_PUSK_F_FAZA2_START
    st = getVariable(171841);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA2_START", 38);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_F_FAZA2_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA2_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171842 RESOURCE1.ALGORITMS_PUSK_F_FAZA2_TOP
    st = getVariable(171842);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA2_TOP", 36);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_F_FAZA2_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA2_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171843 RESOURCE1.ALGORITMS_PUSK_F_FAZA2_COMMAND
    st = getVariable(171843);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA2_COMMAND", 40);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSK_F_FAZA2_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA2_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171844 RESOURCE1.ALGORITMS_PUSK_F_FAZA2_STATUS
    st = getVariable(171844);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_F_FAZA2_STATUS", 39);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_F_FAZA2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_F_FAZA2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171845 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_ERROR
    st = getVariable(171845);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_ERROR", 49);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171846 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_START
    st = getVariable(171846);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_START", 49);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171847 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_TOP
    st = getVariable(171847);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_TOP", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171848 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_COMMAND
    st = getVariable(171848);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_COMMAND", 51);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171849 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_STATUS
    st = getVariable(171849);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_CHASTOTNY_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171850 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR_ERROR
    st = getVariable(171850);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR_ERROR", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171851 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR_START
    st = getVariable(171851);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR_START", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171852 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR_TOP
    st = getVariable(171852);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR_TOP", 45);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171853 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR_COMMAND
    st = getVariable(171853);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR_COMMAND", 49);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171854 RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR_STATUS
    st = getVariable(171854);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_SEC_FAZA_REACTOR_STATUS", 48);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_SEC_FAZA_REACTOR_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171855 RESOURCE1.ALGORITMS_PUSK_TH_FAZA_ERROR
    st = getVariable(171855);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_TH_FAZA_ERROR", 38);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_TH_FAZA_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_TH_FAZA_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171856 RESOURCE1.ALGORITMS_PUSK_TH_FAZA_START
    st = getVariable(171856);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_TH_FAZA_START", 38);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_TH_FAZA_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_TH_FAZA_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171857 RESOURCE1.ALGORITMS_PUSK_TH_FAZA_TOP
    st = getVariable(171857);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_TH_FAZA_TOP", 36);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_TH_FAZA_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_TH_FAZA_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171858 RESOURCE1.ALGORITMS_PUSK_TH_FAZA_COMMAND
    st = getVariable(171858);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_TH_FAZA_COMMAND", 40);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSK_TH_FAZA_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSK_TH_FAZA_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171859 RESOURCE1.ALGORITMS_PUSK_TH_FAZA_STATUS
    st = getVariable(171859);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSK_TH_FAZA_STATUS", 39);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSK_TH_FAZA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSK_TH_FAZA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171860 RESOURCE1.ALGORITMS_REMONT_COMMAND
    st = getVariable(171860);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_REMONT_COMMAND", 34);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_REMONT_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_REMONT_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171861 RESOURCE1.ALGORITMS_REMONT_STATUS
    st = getVariable(171861);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_REMONT_STATUS", 33);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_REMONT_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_REMONT_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171862 RESOURCE1.ALGORITMS_RINGTOLINE_ERROR
    st = getVariable(171862);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_RINGTOLINE_ERROR", 36);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_RINGTOLINE_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_RINGTOLINE_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171863 RESOURCE1.ALGORITMS_RINGTOLINE_START
    st = getVariable(171863);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_RINGTOLINE_START", 36);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_RINGTOLINE_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_RINGTOLINE_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171864 RESOURCE1.ALGORITMS_RINGTOLINE_TOP
    st = getVariable(171864);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_RINGTOLINE_TOP", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_RINGTOLINE_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_RINGTOLINE_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171865 RESOURCE1.ALGORITMS_RINGTOLINE_COMMAND
    st = getVariable(171865);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_RINGTOLINE_COMMAND", 38);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_RINGTOLINE_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_RINGTOLINE_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171866 RESOURCE1.ALGORITMS_RINGTOLINE_STATUS
    st = getVariable(171866);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_RINGTOLINE_STATUS", 37);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_RINGTOLINE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_RINGTOLINE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171867 RESOURCE1.ALGORITMS_SEMIAUTOPUSK_COMMAND
    st = getVariable(171867);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_SEMIAUTOPUSK_COMMAND", 40);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_SEMIAUTOPUSK_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_SEMIAUTOPUSK_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171868 RESOURCE1.ALGORITMS_TESTPROTECTION_COMMAND
    st = getVariable(171868);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTPROTECTION_COMMAND", 42);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_TESTPROTECTION_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_TESTPROTECTION_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171869 RESOURCE1.ALGORITMS_TESTPROTECTION_STATUS
    st = getVariable(171869);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTPROTECTION_STATUS", 41);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTPROTECTION_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTPROTECTION_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171870 RESOURCE1.ALGORITMS_AO_ERROR
    st = getVariable(171870);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AO_ERROR", 28);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AO_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AO_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171871 RESOURCE1.ALGORITMS_AO_START
    st = getVariable(171871);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AO_START", 28);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AO_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AO_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171872 RESOURCE1.ALGORITMS_AO_TOP
    st = getVariable(171872);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AO_TOP", 26);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AO_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AO_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171873 RESOURCE1.ALGORITMS_AO_COMMAND
    st = getVariable(171873);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AO_COMMAND", 30);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AO_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AO_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171874 RESOURCE1.ALGORITMS_AO_STATUS
    st = getVariable(171874);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AO_STATUS", 29);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AO_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AO_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171875 RESOURCE1.ALGORITMS_AO_WAITKRAN_TIMER
    st = getVariable(171875);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AO_WAITKRAN_TIMER", 37);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AO_WAITKRAN_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AO_WAITKRAN_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171876 RESOURCE1.ALGORITMS_AUTONU
    st = getVariable(171876);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTONU", 26);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AUTONU;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AUTONU;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171877 RESOURCE1.ALGORITMS_AUTONU_ERROR
    st = getVariable(171877);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTONU_ERROR", 32);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AUTONU_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AUTONU_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171878 RESOURCE1.ALGORITMS_AUTONU_NOTHASREZERVNU
    st = getVariable(171878);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTONU_NOTHASREZERVNU", 41);
    st->size_data = sizeof(BOOL);
    extern BOOL RESOURCE1__ALGORITMS_AUTONU_NOTHASREZERVNU;
    p_BOOL = (BOOL*)&RESOURCE1__ALGORITMS_AUTONU_NOTHASREZERVNU;
    UnpackVar(p_BOOL, BOOL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171879 RESOURCE1.ALGORITMS_AUTONU_START
    st = getVariable(171879);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTONU_START", 32);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AUTONU_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AUTONU_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171880 RESOURCE1.ALGORITMS_AUTONU_TOP
    st = getVariable(171880);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTONU_TOP", 30);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AUTONU_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AUTONU_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171881 RESOURCE1.ALGORITMS_AUTONU_COMMAND
    st = getVariable(171881);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTONU_COMMAND", 34);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_AUTONU_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_AUTONU_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171882 RESOURCE1.ALGORITMS_AUTONU_STATUS
    st = getVariable(171882);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_AUTONU_STATUS", 33);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_AUTONU_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_AUTONU_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171883 RESOURCE1.ALGORITMS_ENGINERUN_BREAKPUSKTIMER_TIMER
    st = getVariable(171883);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_ENGINERUN_BREAKPUSKTIMER_TIMER", 50);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_ENGINERUN_BREAKPUSKTIMER_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_ENGINERUN_BREAKPUSKTIMER_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171884 RESOURCE1.ALGORITMS_ENGINERUN_ERROR
    st = getVariable(171884);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_ENGINERUN_ERROR", 35);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_ENGINERUN_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_ENGINERUN_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171885 RESOURCE1.ALGORITMS_ENGINERUN_START
    st = getVariable(171885);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_ENGINERUN_START", 35);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_ENGINERUN_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_ENGINERUN_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171886 RESOURCE1.ALGORITMS_ENGINERUN_TOP
    st = getVariable(171886);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_ENGINERUN_TOP", 33);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_ENGINERUN_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_ENGINERUN_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171887 RESOURCE1.ALGORITMS_ENGINERUN_COMMAND
    st = getVariable(171887);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_ENGINERUN_COMMAND", 37);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_ENGINERUN_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_ENGINERUN_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171888 RESOURCE1.ALGORITMS_ENGINERUN_STATUS
    st = getVariable(171888);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_ENGINERUN_STATUS", 36);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_ENGINERUN_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_ENGINERUN_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171889 RESOURCE1.ALGORITMS_FILLING_BREAKPUSKTIMER_TIMER
    st = getVariable(171889);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_FILLING_BREAKPUSKTIMER_TIMER", 48);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_FILLING_BREAKPUSKTIMER_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_FILLING_BREAKPUSKTIMER_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171890 RESOURCE1.ALGORITMS_FILLING_ERROR
    st = getVariable(171890);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_FILLING_ERROR", 33);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_FILLING_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_FILLING_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171891 RESOURCE1.ALGORITMS_FILLING_START
    st = getVariable(171891);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_FILLING_START", 33);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_FILLING_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_FILLING_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171892 RESOURCE1.ALGORITMS_FILLING_TOP
    st = getVariable(171892);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_FILLING_TOP", 31);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_FILLING_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_FILLING_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171893 RESOURCE1.ALGORITMS_FILLING_COMMAND
    st = getVariable(171893);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_FILLING_COMMAND", 35);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_FILLING_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_FILLING_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171894 RESOURCE1.ALGORITMS_FILLING_STATUS
    st = getVariable(171894);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_FILLING_STATUS", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_FILLING_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_FILLING_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171895 RESOURCE1.ALGORITMS_FILLING_WAITAFTERKRAN4_TIMER
    st = getVariable(171895);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_FILLING_WAITAFTERKRAN4_TIMER", 48);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_FILLING_WAITAFTERKRAN4_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_FILLING_WAITAFTERKRAN4_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171896 RESOURCE1.ALGORITMS_FILLING_WAITAFTERKRAN5_TIMER
    st = getVariable(171896);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_FILLING_WAITAFTERKRAN5_TIMER", 48);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_FILLING_WAITAFTERKRAN5_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_FILLING_WAITAFTERKRAN5_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171897 RESOURCE1.ALGORITMS_NO_ERROR
    st = getVariable(171897);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_NO_ERROR", 28);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_NO_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_NO_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171898 RESOURCE1.ALGORITMS_NO_START
    st = getVariable(171898);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_NO_START", 28);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_NO_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_NO_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171899 RESOURCE1.ALGORITMS_NO_TOP
    st = getVariable(171899);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_NO_TOP", 26);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_NO_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_NO_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171900 RESOURCE1.ALGORITMS_NO_COMMAND
    st = getVariable(171900);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_NO_COMMAND", 30);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_NO_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_NO_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171901 RESOURCE1.ALGORITMS_NO_STATUS
    st = getVariable(171901);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_NO_STATUS", 29);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_NO_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_NO_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171902 RESOURCE1.ALGORITMS_NO_WAITCLOSEKRAN_TIMER
    st = getVariable(171902);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_NO_WAITCLOSEKRAN_TIMER", 42);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_NO_WAITCLOSEKRAN_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_NO_WAITCLOSEKRAN_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171903 RESOURCE1.ALGORITMS_PPU_ERROR
    st = getVariable(171903);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PPU_ERROR", 29);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PPU_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PPU_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171904 RESOURCE1.ALGORITMS_PPU_START
    st = getVariable(171904);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PPU_START", 29);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PPU_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PPU_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171905 RESOURCE1.ALGORITMS_PPU_TOP
    st = getVariable(171905);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PPU_TOP", 27);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PPU_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PPU_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171906 RESOURCE1.ALGORITMS_PPU_COMMAND
    st = getVariable(171906);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PPU_COMMAND", 31);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PPU_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PPU_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171907 RESOURCE1.ALGORITMS_PPU_STATUS
    st = getVariable(171907);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PPU_STATUS", 30);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PPU_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PPU_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171908 RESOURCE1.ALGORITMS_PUSKK_ERROR
    st = getVariable(171908);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKK_ERROR", 31);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSKK_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSKK_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171909 RESOURCE1.ALGORITMS_PUSKK_START
    st = getVariable(171909);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKK_START", 31);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSKK_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSKK_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171910 RESOURCE1.ALGORITMS_PUSKK_TOP
    st = getVariable(171910);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKK_TOP", 29);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSKK_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSKK_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171911 RESOURCE1.ALGORITMS_PUSKK_COMMAND
    st = getVariable(171911);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKK_COMMAND", 33);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSKK_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSKK_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171912 RESOURCE1.ALGORITMS_PUSKK_QUESTIONFILLING_STATUS
    st = getVariable(171912);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKK_QUESTIONFILLING_STATUS", 48);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSKK_QUESTIONFILLING_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSKK_QUESTIONFILLING_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171913 RESOURCE1.ALGORITMS_PUSKK_QUESTIONUNLOAD_STATUS
    st = getVariable(171913);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKK_QUESTIONUNLOAD_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSKK_QUESTIONUNLOAD_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSKK_QUESTIONUNLOAD_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171914 RESOURCE1.ALGORITMS_PUSKK_STATUS
    st = getVariable(171914);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKK_STATUS", 32);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSKK_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSKK_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171915 RESOURCE1.ALGORITMS_PUSKK_WAIT720_TIMER
    st = getVariable(171915);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKK_WAIT720_TIMER", 39);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSKK_WAIT720_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSKK_WAIT720_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171916 RESOURCE1.ALGORITMS_PUSKOILSYSTEM_BREAKPUSKTIMER_POIL_TIMER
    st = getVariable(171916);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKOILSYSTEM_BREAKPUSKTIMER_POIL_TIMER", 59);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSKOILSYSTEM_BREAKPUSKTIMER_POIL_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSKOILSYSTEM_BREAKPUSKTIMER_POIL_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171917 RESOURCE1.ALGORITMS_PUSKOILSYSTEM_BREAKPUSKTIMER_DPMG_TIMER
    st = getVariable(171917);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKOILSYSTEM_BREAKPUSKTIMER_DPMG_TIMER", 59);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSKOILSYSTEM_BREAKPUSKTIMER_DPMG_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSKOILSYSTEM_BREAKPUSKTIMER_DPMG_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171918 RESOURCE1.ALGORITMS_PUSKOILSYSTEM_ERROR
    st = getVariable(171918);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKOILSYSTEM_ERROR", 39);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSKOILSYSTEM_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSKOILSYSTEM_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171919 RESOURCE1.ALGORITMS_PUSKOILSYSTEM_START
    st = getVariable(171919);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKOILSYSTEM_START", 39);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSKOILSYSTEM_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSKOILSYSTEM_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171920 RESOURCE1.ALGORITMS_PUSKOILSYSTEM_TOP
    st = getVariable(171920);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKOILSYSTEM_TOP", 37);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSKOILSYSTEM_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSKOILSYSTEM_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171921 RESOURCE1.ALGORITMS_PUSKOILSYSTEM_COMMAND
    st = getVariable(171921);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKOILSYSTEM_COMMAND", 41);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSKOILSYSTEM_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSKOILSYSTEM_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171922 RESOURCE1.ALGORITMS_PUSKOILSYSTEM_STATUS
    st = getVariable(171922);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKOILSYSTEM_STATUS", 40);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_PUSKOILSYSTEM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_PUSKOILSYSTEM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171923 RESOURCE1.ALGORITMS_PUSKV_COMMAND
    st = getVariable(171923);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_PUSKV_COMMAND", 33);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_PUSKV_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_PUSKV_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171924 RESOURCE1.ALGORITMS_TESTIM_COMMAND
    st = getVariable(171924);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTIM_COMMAND", 34);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_TESTIM_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_TESTIM_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171925 RESOURCE1.ALGORITMS_TESTIM_STATUS
    st = getVariable(171925);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTIM_STATUS", 33);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTIM_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTIM_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171926 RESOURCE1.ALGORITMS_TESTPMS_BREAKTEST_TIMER
    st = getVariable(171926);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTPMS_BREAKTEST_TIMER", 43);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_TESTPMS_BREAKTEST_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_TESTPMS_BREAKTEST_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171927 RESOURCE1.ALGORITMS_TESTPMS_ERROR
    st = getVariable(171927);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTPMS_ERROR", 33);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTPMS_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTPMS_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171928 RESOURCE1.ALGORITMS_TESTPMS_START
    st = getVariable(171928);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTPMS_START", 33);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTPMS_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTPMS_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171929 RESOURCE1.ALGORITMS_TESTPMS_TOP
    st = getVariable(171929);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTPMS_TOP", 31);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTPMS_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTPMS_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171930 RESOURCE1.ALGORITMS_TESTPMS_ALGCONTINUE_STATUS
    st = getVariable(171930);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTPMS_ALGCONTINUE_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTPMS_ALGCONTINUE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTPMS_ALGCONTINUE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171931 RESOURCE1.ALGORITMS_TESTPMS_COMMAND
    st = getVariable(171931);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTPMS_COMMAND", 35);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_TESTPMS_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_TESTPMS_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171932 RESOURCE1.ALGORITMS_TESTPMS_STATUS
    st = getVariable(171932);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTPMS_STATUS", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTPMS_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTPMS_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171933 RESOURCE1.ALGORITMS_TESTDPMG_BREAKTEST_TIMER
    st = getVariable(171933);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTDPMG_BREAKTEST_TIMER", 44);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_TESTDPMG_BREAKTEST_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_TESTDPMG_BREAKTEST_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171934 RESOURCE1.ALGORITMS_TESTDPMG_ERROR
    st = getVariable(171934);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTDPMG_ERROR", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTDPMG_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTDPMG_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171935 RESOURCE1.ALGORITMS_TESTDPMG_START
    st = getVariable(171935);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTDPMG_START", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTDPMG_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTDPMG_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171936 RESOURCE1.ALGORITMS_TESTDPMG_TOP
    st = getVariable(171936);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTDPMG_TOP", 32);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTDPMG_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTDPMG_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171937 RESOURCE1.ALGORITMS_TESTDPMG_ALGCONTINUE_STATUS
    st = getVariable(171937);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTDPMG_ALGCONTINUE_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTDPMG_ALGCONTINUE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTDPMG_ALGCONTINUE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171938 RESOURCE1.ALGORITMS_TESTDPMG_COMMAND
    st = getVariable(171938);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTDPMG_COMMAND", 36);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_TESTDPMG_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_TESTDPMG_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171939 RESOURCE1.ALGORITMS_TESTDPMG_STATUS
    st = getVariable(171939);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_TESTDPMG_STATUS", 35);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_TESTDPMG_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_TESTDPMG_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171940 RESOURCE1.ALGORITMS_VIBEGPNS_ERROR
    st = getVariable(171940);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_VIBEGPNS_ERROR", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_VIBEGPNS_ERROR;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_VIBEGPNS_ERROR;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171941 RESOURCE1.ALGORITMS_VIBEGPNS_START
    st = getVariable(171941);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_VIBEGPNS_START", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_VIBEGPNS_START;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_VIBEGPNS_START;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171942 RESOURCE1.ALGORITMS_VIBEGPNS_TOP
    st = getVariable(171942);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_VIBEGPNS_TOP", 32);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_VIBEGPNS_TOP;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_VIBEGPNS_TOP;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171943 RESOURCE1.ALGORITMS_VIBEGPNS_ALGCONTINUE_STATUS
    st = getVariable(171943);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_VIBEGPNS_ALGCONTINUE_STATUS", 47);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_VIBEGPNS_ALGCONTINUE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_VIBEGPNS_ALGCONTINUE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171944 RESOURCE1.ALGORITMS_VIBEGPNS_COMMAND
    st = getVariable(171944);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_VIBEGPNS_COMMAND", 36);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_VIBEGPNS_COMMAND;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_VIBEGPNS_COMMAND;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171945 RESOURCE1.ALGORITMS_VIBEGPNS_STATUS
    st = getVariable(171945);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_VIBEGPNS_STATUS", 35);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__ALGORITMS_VIBEGPNS_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__ALGORITMS_VIBEGPNS_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171946 RESOURCE1.ALGORITMS_VIBEGPNS_WAITVIBEG_TIMER
    st = getVariable(171946);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.ALGORITMS_VIBEGPNS_WAITVIBEG_TIMER", 44);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__ALGORITMS_VIBEGPNS_WAITVIBEG_TIMER;
    p_UINT = (UINT*)&RESOURCE1__ALGORITMS_VIBEGPNS_WAITVIBEG_TIMER;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171947 RESOURCE1.PROTECTMANAGER_PROTECTIONINREMONT
    st = getVariable(171947);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTMANAGER_PROTECTIONINREMONT", 43);
    st->size_data = sizeof(BOOL);
    extern BOOL RESOURCE1__PROTECTMANAGER_PROTECTIONINREMONT;
    p_BOOL = (BOOL*)&RESOURCE1__PROTECTMANAGER_PROTECTIONINREMONT;
    UnpackVar(p_BOOL, BOOL_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171948 RESOURCE1.PROTECTIONS_AOKC_SHKC_INCOMMAND_ARM
    st = getVariable(171948);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_AOKC_SHKC_INCOMMAND_ARM", 45);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_AOKC_SHKC_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_AOKC_SHKC_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171949 RESOURCE1.PROTECTIONS_AOKC_SHKC_STATUS
    st = getVariable(171949);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_AOKC_SHKC_STATUS", 38);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_AOKC_SHKC_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_AOKC_SHKC_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171950 RESOURCE1.PROTECTIONS_AO_PRU_INCOMMAND_ARM
    st = getVariable(171950);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_AO_PRU_INCOMMAND_ARM", 42);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_AO_PRU_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_AO_PRU_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171951 RESOURCE1.PROTECTIONS_AO_PRU_STATUS
    st = getVariable(171951);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_AO_PRU_STATUS", 35);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_AO_PRU_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_AO_PRU_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171952 RESOURCE1.PROTECTIONS_AO_OT_SHU_INCOMMAND_ARM
    st = getVariable(171952);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_AO_OT_SHU_INCOMMAND_ARM", 45);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_AO_OT_SHU_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_AO_OT_SHU_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171953 RESOURCE1.PROTECTIONS_AO_OT_SHU_STATUS
    st = getVariable(171953);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_AO_OT_SHU_STATUS", 38);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_AO_OT_SHU_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_AO_OT_SHU_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171954 RESOURCE1.PROTECTIONS_FAIL_CHASTOTNII_PUSK_INCOMMAND_ARM
    st = getVariable(171954);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_FAIL_CHASTOTNII_PUSK_INCOMMAND_ARM", 56);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_FAIL_CHASTOTNII_PUSK_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_FAIL_CHASTOTNII_PUSK_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171955 RESOURCE1.PROTECTIONS_FAIL_CHASTOTNII_PUSK_STATUS
    st = getVariable(171955);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_FAIL_CHASTOTNII_PUSK_STATUS", 49);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_FAIL_CHASTOTNII_PUSK_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_FAIL_CHASTOTNII_PUSK_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171956 RESOURCE1.PROTECTIONS_KRAN1_SDVIG_INCOMMAND_ARM
    st = getVariable(171956);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_KRAN1_SDVIG_INCOMMAND_ARM", 47);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_KRAN1_SDVIG_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_KRAN1_SDVIG_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171957 RESOURCE1.PROTECTIONS_KRAN1_SDVIG_STATUS
    st = getVariable(171957);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_KRAN1_SDVIG_STATUS", 40);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_KRAN1_SDVIG_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_KRAN1_SDVIG_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171958 RESOURCE1.PROTECTIONS_KRAN2_SDVIG_INCOMMAND_ARM
    st = getVariable(171958);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_KRAN2_SDVIG_INCOMMAND_ARM", 47);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_KRAN2_SDVIG_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_KRAN2_SDVIG_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171959 RESOURCE1.PROTECTIONS_KRAN2_SDVIG_STATUS
    st = getVariable(171959);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_KRAN2_SDVIG_STATUS", 40);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_KRAN2_SDVIG_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_KRAN2_SDVIG_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171960 RESOURCE1.PROTECTIONS_OFF_AVAR_VIKLUCHATEL_INCOMMAND_ARM
    st = getVariable(171960);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_OFF_AVAR_VIKLUCHATEL_INCOMMAND_ARM", 56);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_OFF_AVAR_VIKLUCHATEL_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_OFF_AVAR_VIKLUCHATEL_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171961 RESOURCE1.PROTECTIONS_OFF_AVAR_VIKLUCHATEL_STATUS
    st = getVariable(171961);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_OFF_AVAR_VIKLUCHATEL_STATUS", 49);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_OFF_AVAR_VIKLUCHATEL_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_OFF_AVAR_VIKLUCHATEL_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171962 RESOURCE1.PROTECTIONS_OS_SDVIG_NAGNETATELJA_MINUS_INCOMMAND_ARM
    st = getVariable(171962);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_OS_SDVIG_NAGNETATELJA_MINUS_INCOMMAND_ARM", 63);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_OS_SDVIG_NAGNETATELJA_MINUS_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_OS_SDVIG_NAGNETATELJA_MINUS_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171963 RESOURCE1.PROTECTIONS_OS_SDVIG_NAGNETATELJA_MINUS_STATUS
    st = getVariable(171963);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_OS_SDVIG_NAGNETATELJA_MINUS_STATUS", 56);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_OS_SDVIG_NAGNETATELJA_MINUS_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_OS_SDVIG_NAGNETATELJA_MINUS_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171964 RESOURCE1.PROTECTIONS_OS_SDVIG_NAGNETATELJA_PLUS_INCOMMAND_ARM
    st = getVariable(171964);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_OS_SDVIG_NAGNETATELJA_PLUS_INCOMMAND_ARM", 62);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_OS_SDVIG_NAGNETATELJA_PLUS_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_OS_SDVIG_NAGNETATELJA_PLUS_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171965 RESOURCE1.PROTECTIONS_OS_SDVIG_NAGNETATELJA_PLUS_STATUS
    st = getVariable(171965);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_OS_SDVIG_NAGNETATELJA_PLUS_STATUS", 55);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_OS_SDVIG_NAGNETATELJA_PLUS_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_OS_SDVIG_NAGNETATELJA_PLUS_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171966 RESOURCE1.PROTECTIONS_PGAZA_NA_VHODE_NAGNETATELIA_GPA_STOP_INCOMMAND_ARM
    st = getVariable(171966);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_PGAZA_NA_VHODE_NAGNETATELIA_GPA_STOP_INCOMMAND_ARM", 72);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_PGAZA_NA_VHODE_NAGNETATELIA_GPA_STOP_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_PGAZA_NA_VHODE_NAGNETATELIA_GPA_STOP_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171967 RESOURCE1.PROTECTIONS_PGAZA_NA_VHODE_NAGNETATELIA_GPA_STOP_STATUS
    st = getVariable(171967);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_PGAZA_NA_VHODE_NAGNETATELIA_GPA_STOP_STATUS", 65);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_PGAZA_NA_VHODE_NAGNETATELIA_GPA_STOP_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_PGAZA_NA_VHODE_NAGNETATELIA_GPA_STOP_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171968 RESOURCE1.PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_GPA_STOP_INCOMMAND_ARM
    st = getVariable(171968);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_GPA_STOP_INCOMMAND_ARM", 73);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_GPA_STOP_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_GPA_STOP_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171969 RESOURCE1.PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_GPA_STOP_STATUS
    st = getVariable(171969);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_GPA_STOP_STATUS", 66);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_GPA_STOP_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_GPA_STOP_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171970 RESOURCE1.PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_INCOMMAND_ARM
    st = getVariable(171970);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_INCOMMAND_ARM", 64);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171971 RESOURCE1.PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_STATUS
    st = getVariable(171971);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_STATUS", 57);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_PGAZA_NA_VYHODE_NAGNETATELIA_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171972 RESOURCE1.PROTECTIONS_PMASLO_SM_NIZKOE_INCOMMAND_ARM
    st = getVariable(171972);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_PMASLO_SM_NIZKOE_INCOMMAND_ARM", 52);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_PMASLO_SM_NIZKOE_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_PMASLO_SM_NIZKOE_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171973 RESOURCE1.PROTECTIONS_PMASLO_SM_NIZKOE_STATUS
    st = getVariable(171973);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_PMASLO_SM_NIZKOE_STATUS", 45);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_PMASLO_SM_NIZKOE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_PMASLO_SM_NIZKOE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171974 RESOURCE1.PROTECTIONS_PMASLO_SM_VYSOKOE_INCOMMAND_ARM
    st = getVariable(171974);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_PMASLO_SM_VYSOKOE_INCOMMAND_ARM", 53);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_PMASLO_SM_VYSOKOE_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_PMASLO_SM_VYSOKOE_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171975 RESOURCE1.PROTECTIONS_PMASLO_SM_VYSOKOE_STATUS
    st = getVariable(171975);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_PMASLO_SM_VYSOKOE_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_PMASLO_SM_VYSOKOE_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_PMASLO_SM_VYSOKOE_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171976 RESOURCE1.PROTECTIONS_REG_VOZB_OFF_INCOMMAND_ARM
    st = getVariable(171976);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_REG_VOZB_OFF_INCOMMAND_ARM", 48);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_REG_VOZB_OFF_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_REG_VOZB_OFF_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171977 RESOURCE1.PROTECTIONS_REG_VOZB_OFF_STATUS
    st = getVariable(171977);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_REG_VOZB_OFF_STATUS", 41);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_REG_VOZB_OFF_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_REG_VOZB_OFF_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171978 RESOURCE1.PROTECTIONS_TGAZA_NA_VYHODE_H_INCOMMAND_ARM
    st = getVariable(171978);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TGAZA_NA_VYHODE_H_INCOMMAND_ARM", 53);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_TGAZA_NA_VYHODE_H_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_TGAZA_NA_VYHODE_H_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171979 RESOURCE1.PROTECTIONS_TGAZA_NA_VYHODE_H_STATUS
    st = getVariable(171979);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TGAZA_NA_VYHODE_H_STATUS", 46);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_TGAZA_NA_VYHODE_H_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_TGAZA_NA_VYHODE_H_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171980 RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_N_EDT_7_INCOMMAND_ARM
    st = getVariable(171980);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_N_EDT_7_INCOMMAND_ARM", 58);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_N_EDT_7_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_N_EDT_7_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171981 RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_N_EDT_7_STATUS
    st = getVariable(171981);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_N_EDT_7_STATUS", 51);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_N_EDT_7_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_N_EDT_7_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171982 RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_5_INCOMMAND_ARM
    st = getVariable(171982);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_5_INCOMMAND_ARM", 66);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_5_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_5_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171983 RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_5_STATUS
    st = getVariable(171983);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_5_STATUS", 59);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_5_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_5_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171984 RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_6_INCOMMAND_ARM
    st = getVariable(171984);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_6_INCOMMAND_ARM", 66);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_6_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_6_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171985 RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_6_STATUS
    st = getVariable(171985);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_6_STATUS", 59);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_6_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SHEST_RED_EDT_6_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171986 RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SVOB_KONCA_EDT_8_INCOMMAND_ARM
    st = getVariable(171986);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SVOB_KONCA_EDT_8_INCOMMAND_ARM", 67);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SVOB_KONCA_EDT_8_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SVOB_KONCA_EDT_8_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171987 RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SVOB_KONCA_EDT_8_STATUS
    st = getVariable(171987);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TO_PODSHIPNIKA_SVOB_KONCA_EDT_8_STATUS", 60);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SVOB_KONCA_EDT_8_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_TO_PODSHIPNIKA_SVOB_KONCA_EDT_8_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171988 RESOURCE1.PROTECTIONS_TOPORNOGO_PODSHIPNIKA_EDT_1_INCOMMAND_ARM
    st = getVariable(171988);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TOPORNOGO_PODSHIPNIKA_EDT_1_INCOMMAND_ARM", 63);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_TOPORNOGO_PODSHIPNIKA_EDT_1_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_TOPORNOGO_PODSHIPNIKA_EDT_1_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171989 RESOURCE1.PROTECTIONS_TOPORNOGO_PODSHIPNIKA_EDT_1_STATUS
    st = getVariable(171989);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TOPORNOGO_PODSHIPNIKA_EDT_1_STATUS", 56);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_TOPORNOGO_PODSHIPNIKA_EDT_1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_TOPORNOGO_PODSHIPNIKA_EDT_1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171990 RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_EDT_2_INCOMMAND_ARM
    st = getVariable(171990);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_EDT_2_INCOMMAND_ARM", 57);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_EDT_2_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_EDT_2_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171991 RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_EDT_2_STATUS
    st = getVariable(171991);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_EDT_2_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_EDT_2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_EDT_2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171992 RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_3_INCOMMAND_ARM
    st = getVariable(171992);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_3_INCOMMAND_ARM", 61);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_3_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_3_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171993 RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_3_STATUS
    st = getVariable(171993);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_3_STATUS", 54);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_3_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_3_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171994 RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_4_INCOMMAND_ARM
    st = getVariable(171994);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_4_INCOMMAND_ARM", 61);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_4_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_4_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171995 RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_4_STATUS
    st = getVariable(171995);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_4_STATUS", 54);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_4_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_TOY_PODSHIPNIKA_KOL_EDT_4_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171996 RESOURCE1.PROTECTIONS_TY_PODSHIPNIKA_RAB_KOL_EDT_9_INCOMMAND_ARM
    st = getVariable(171996);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TY_PODSHIPNIKA_RAB_KOL_EDT_9_INCOMMAND_ARM", 64);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_TY_PODSHIPNIKA_RAB_KOL_EDT_9_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_TY_PODSHIPNIKA_RAB_KOL_EDT_9_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171997 RESOURCE1.PROTECTIONS_TY_PODSHIPNIKA_RAB_KOL_EDT_9_STATUS
    st = getVariable(171997);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TY_PODSHIPNIKA_RAB_KOL_EDT_9_STATUS", 57);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_TY_PODSHIPNIKA_RAB_KOL_EDT_9_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_TY_PODSHIPNIKA_RAB_KOL_EDT_9_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171998 RESOURCE1.PROTECTIONS_TYPORNOGO_PODSHIPNIKA_NERAB_KOLODOK_HT_10_INCOMMAND_ARM
    st = getVariable(171998);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TYPORNOGO_PODSHIPNIKA_NERAB_KOLODOK_HT_10_INCOMMAND_ARM", 77);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_TYPORNOGO_PODSHIPNIKA_NERAB_KOLODOK_HT_10_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_TYPORNOGO_PODSHIPNIKA_NERAB_KOLODOK_HT_10_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 171999 RESOURCE1.PROTECTIONS_TYPORNOGO_PODSHIPNIKA_NERAB_KOLODOK_HT_10_STATUS
    st = getVariable(171999);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_TYPORNOGO_PODSHIPNIKA_NERAB_KOLODOK_HT_10_STATUS", 70);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_TYPORNOGO_PODSHIPNIKA_NERAB_KOLODOK_HT_10_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_TYPORNOGO_PODSHIPNIKA_NERAB_KOLODOK_HT_10_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172000 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OPED_T1_INCOMMAND_ARM
    st = getVariable(172000);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OPED_T1_INCOMMAND_ARM", 57);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OPED_T1_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OPED_T1_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172001 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OPED_T1_STATUS
    st = getVariable(172001);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OPED_T1_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OPED_T1_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OPED_T1_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172002 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OPED_T2_INCOMMAND_ARM
    st = getVariable(172002);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OPED_T2_INCOMMAND_ARM", 57);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OPED_T2_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OPED_T2_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172003 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OPED_T2_STATUS
    st = getVariable(172003);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OPED_T2_STATUS", 50);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OPED_T2_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OPED_T2_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172004 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_KOLESA_RH_T4_INCOMMAND_ARM
    st = getVariable(172004);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_KOLESA_RH_T4_INCOMMAND_ARM", 65);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_KOLESA_RH_T4_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_KOLESA_RH_T4_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172005 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_KOLESA_RH_T4_STATUS
    st = getVariable(172005);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_KOLESA_RH_T4_STATUS", 58);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_KOLESA_RH_T4_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_KOLESA_RH_T4_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172006 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_INCOMMAND_ARM
    st = getVariable(172006);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_INCOMMAND_ARM", 69);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172007 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_STATUS
    st = getVariable(172007);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_STATUS", 62);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T5_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172008 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_INCOMMAND_ARM
    st = getVariable(172008);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_INCOMMAND_ARM", 69);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172009 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_STATUS
    st = getVariable(172009);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_STATUS", 62);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OP_SHESTERNI_RED_T6_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172010 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OYP_KOLESA_ED_T3_INCOMMAND_ARM
    st = getVariable(172010);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OYP_KOLESA_ED_T3_INCOMMAND_ARM", 66);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OYP_KOLESA_ED_T3_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OYP_KOLESA_ED_T3_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172011 RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OYP_KOLESA_ED_T3_STATUS
    st = getVariable(172011);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_VIBRO_SKOROST_OYP_KOLESA_ED_T3_STATUS", 59);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OYP_KOLESA_ED_T3_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_VIBRO_SKOROST_OYP_KOLESA_ED_T3_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172012 RESOURCE1.PROTECTIONS_DPMASLO_GAZ_INCOMMAND_ARM
    st = getVariable(172012);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_DPMASLO_GAZ_INCOMMAND_ARM", 47);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_DPMASLO_GAZ_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_DPMASLO_GAZ_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172013 RESOURCE1.PROTECTIONS_DPMASLO_GAZ_LESS100_INCOMMAND_ARM
    st = getVariable(172013);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_DPMASLO_GAZ_LESS100_INCOMMAND_ARM", 55);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_DPMASLO_GAZ_LESS100_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_DPMASLO_GAZ_LESS100_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172014 RESOURCE1.PROTECTIONS_DPMASLO_GAZ_LESS100_STATUS
    st = getVariable(172014);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_DPMASLO_GAZ_LESS100_STATUS", 48);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_DPMASLO_GAZ_LESS100_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_DPMASLO_GAZ_LESS100_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172015 RESOURCE1.PROTECTIONS_DPMASLO_GAZ_STATUS
    st = getVariable(172015);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_DPMASLO_GAZ_STATUS", 40);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_DPMASLO_GAZ_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_DPMASLO_GAZ_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172016 RESOURCE1.PROTECTIONS_MVOFF_INCOMMAND_ARM
    st = getVariable(172016);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_MVOFF_INCOMMAND_ARM", 41);
    st->size_data = sizeof(UINT);
    extern UINT RESOURCE1__PROTECTIONS_MVOFF_INCOMMAND_ARM;
    p_UINT = (UINT*)&RESOURCE1__PROTECTIONS_MVOFF_INCOMMAND_ARM;
    UnpackVar(p_UINT, UINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 172017 RESOURCE1.PROTECTIONS_MVOFF_STATUS
    st = getVariable(172017);
    memcpy(st->IEC_TYPE, "UDINT", 5);
    memcpy(st->IEC_VAR_NAME, "RESOURCE1.PROTECTIONS_MVOFF_STATUS", 34);
    st->size_data = sizeof(UDINT);
    extern UDINT RESOURCE1__PROTECTIONS_MVOFF_STATUS;
    p_UDINT = (UDINT*)&RESOURCE1__PROTECTIONS_MVOFF_STATUS;
    UnpackVar(p_UDINT, UDINT_O_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }

  return 0;
}

// clang-format on
