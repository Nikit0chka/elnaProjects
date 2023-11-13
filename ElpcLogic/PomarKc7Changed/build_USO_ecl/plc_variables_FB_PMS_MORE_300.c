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

int __variables_init_FB_PMS_MORE_300(){
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

  { // 142935 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INRUNONSTART
    st = getVariable(142935);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INRUNONSTART", 75);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INRUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 142936 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INCANRUN
    st = getVariable(142936);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INCANRUN", 71);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INCANRUN;
    st->value_p = p_BOOL;
  }
  { // 142937 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INHASERROR
    st = getVariable(142937);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INHASERROR", 73);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INHASERROR;
    st->value_p = p_BOOL;
  }
  { // 142938 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INENDED
    st = getVariable(142938);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INENDED", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INENDED;
    st->value_p = p_BOOL;
  }
  { // 142939 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INOPCCOMMANDSDISABLED
    st = getVariable(142939);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INOPCCOMMANDSDISABLED", 84);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->INOPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 142940 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INCOMMAND
    st = getVariable(142940);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INCOMMAND", 72);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_WORD = (WORD*)&p_STRUCT_ALG->INCOMMAND;
    st->value_p = p_WORD;
  }
  { // 142941 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INCOMMAND_ARM
    st = getVariable(142941);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INCOMMAND_ARM", 76);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_WORD = (WORD*)&p_STRUCT_ALG->INCOMMAND_ARM;
    st->value_p = p_WORD;
  }
  { // 142942 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INCOMMAND_ALG
    st = getVariable(142942);
    memcpy(st->IEC_TYPE, "WORD", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.INCOMMAND_ALG", 76);
    st->size_data = sizeof(WORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_WORD = (WORD*)&p_STRUCT_ALG->INCOMMAND_ALG;
    st->value_p = p_WORD;
  }
  { // 142943 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.STATUS
    st = getVariable(142943);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.STATUS", 69);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->STATUS;
    st->value_p = p_DWORD;
  }
  { // 142944 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.CANRUN
    st = getVariable(142944);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.CANRUN", 69);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->CANRUN;
    st->value_p = p_BOOL;
  }
  { // 142945 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.OPCCOMMANDSDISABLED
    st = getVariable(142945);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.OPCCOMMANDSDISABLED", 82);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->OPCCOMMANDSDISABLED;
    st->value_p = p_BOOL;
  }
  { // 142946 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.ISRUNING
    st = getVariable(142946);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.ISRUNING", 71);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->ISRUNING;
    st->value_p = p_BOOL;
  }
  { // 142947 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.HASERROR
    st = getVariable(142947);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.HASERROR", 71);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->HASERROR;
    st->value_p = p_BOOL;
  }
  { // 142948 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.ISENDED
    st = getVariable(142948);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.ISENDED", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->ISENDED;
    st->value_p = p_BOOL;
  }
  { // 142949 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.RUNONSTART
    st = getVariable(142949);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.RUNONSTART", 73);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_BOOL = (BOOL*)&p_STRUCT_ALG->RUNONSTART;
    st->value_p = p_BOOL;
  }
  { // 142950 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.START
    st = getVariable(142950);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.START", 68);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->START;
    st->value_p = p_DWORD;
  }
  { // 142951 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.ERROR
    st = getVariable(142951);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.ERROR", 68);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->ERROR;
    st->value_p = p_DWORD;
  }
  { // 142952 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.TOP
    st = getVariable(142952);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.ALG.TOP", 66);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_ALG = (STRUCT_ALG*)&p_FB_PH_ALGORITM->ALG;
    p_DWORD = (DWORD*)&p_STRUCT_ALG->TOP;
    st->value_p = p_DWORD;
  }
  { // 142953 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.PHASENUMBER
    st = getVariable(142953);
    memcpy(st->IEC_TYPE, "UINT", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.PHASENUMBER", 70);
    st->size_data = sizeof(UINT);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_UINT = (UINT*)&p_FB_PH_ALGORITM->PHASENUMBER;
    UnpackVar(p_UINT, UINT_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 142954 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.WAITCOMPLETION
    st = getVariable(142954);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.WAITCOMPLETION", 73);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_BOOL = (BOOL*)&p_FB_PH_ALGORITM->WAITCOMPLETION;
    UnpackVar(p_BOOL, BOOL_ENUM, &st->value_p, &st->f_value_p, &st->flags);
  }
  { // 142955 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.RUN
    st = getVariable(142955);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.RUN", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RUN;
    st->value_p = p_BOOL;
  }
  { // 142956 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.RESET
    st = getVariable(142956);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.RESET", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->RESET;
    st->value_p = p_BOOL;
  }
  { // 142957 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.START
    st = getVariable(142957);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.START", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->START;
    st->value_p = p_BOOL;
  }
  { // 142958 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.ERROR
    st = getVariable(142958);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.ERROR", 70);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->ERROR;
    st->value_p = p_BOOL;
  }
  { // 142959 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.TOP
    st = getVariable(142959);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.TOP", 68);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_BOOL = (BOOL*)&p_STRUCT_PHASEALGORITM->TOP;
    st->value_p = p_BOOL;
  }
  { // 142960 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.STARTSTATUS
    st = getVariable(142960);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.STARTSTATUS", 76);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->STARTSTATUS;
    st->value_p = p_DWORD;
  }
  { // 142961 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.ERRORSTATUS
    st = getVariable(142961);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.ERRORSTATUS", 76);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->ERRORSTATUS;
    st->value_p = p_DWORD;
  }
  { // 142962 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.TOPSTATUS
    st = getVariable(142962);
    memcpy(st->IEC_TYPE, "DWORD", 5);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.STRPH.TOPSTATUS", 74);
    st->size_data = sizeof(DWORD);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_STRUCT_PHASEALGORITM = (STRUCT_PHASEALGORITM*)&p_FB_PH_ALGORITM->STRPH;
    p_DWORD = (DWORD*)&p_STRUCT_PHASEALGORITM->TOPSTATUS;
    st->value_p = p_DWORD;
  }
  { // 142963 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.COMMANDFAULT_TRIG.CLK
    st = getVariable(142963);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.COMMANDFAULT_TRIG.CLK", 80);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 142964 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.COMMANDFAULT_TRIG.Q
    st = getVariable(142964);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.COMMANDFAULT_TRIG.Q", 78);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->COMMANDFAULT_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 142965 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.COMMANDFAULT_TRIG
    st = getVariable(142965);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.COMMANDFAULT_TRIG", 76);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->COMMANDFAULT_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 142966 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.RESET_TRIG.CLK
    st = getVariable(142966);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.RESET_TRIG.CLK", 73);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->CLK;
    st->value_p = p_BOOL;
  }
  { // 142967 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.RESET_TRIG.Q
    st = getVariable(142967);
    memcpy(st->IEC_TYPE, "BOOL", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.RESET_TRIG.Q", 71);
    st->size_data = sizeof(BOOL);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->RESET_TRIG;
    p_BOOL = (BOOL*)&p_R_TRIG->Q;
    st->value_p = p_BOOL;
  }
  { // 142968 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.RESET_TRIG
    st = getVariable(142968);
    memcpy(st->IEC_TYPE, "R_TRIG", 6);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300.RESET_TRIG", 69);
    st->size_data = sizeof(R_TRIG);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_R_TRIG = (R_TRIG*)&p_FB_PH_ALGORITM->RESET_TRIG;
    st->value_p = (void *)p_R_TRIG;
  }
  { // 142969 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300._STATUSDUALINPUT.STATUS_NOTDEFINED
    st = getVariable(142969);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300._STATUSDUALINPUT.STATUS_NOTDEFINED", 93);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_NOTDEFINED;
    st->value_p = p_BYTE;
  }
  { // 142970 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300._STATUSDUALINPUT.STATUS_ON
    st = getVariable(142970);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300._STATUSDUALINPUT.STATUS_ON", 85);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ON;
    st->value_p = p_BYTE;
  }
  { // 142971 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300._STATUSDUALINPUT.STATUS_OFF
    st = getVariable(142971);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300._STATUSDUALINPUT.STATUS_OFF", 86);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_OFF;
    st->value_p = p_BYTE;
  }
  { // 142972 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300._STATUSDUALINPUT.STATUS_TRANSITIONAL
    st = getVariable(142972);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300._STATUSDUALINPUT.STATUS_TRANSITIONAL", 95);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_TRANSITIONAL;
    st->value_p = p_BYTE;
  }
  { // 142973 PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300._STATUSDUALINPUT.STATUS_ERROR
    st = getVariable(142973);
    memcpy(st->IEC_TYPE, "BYTE", 4);
    memcpy(st->IEC_VAR_NAME, "PROGRAM0.ALGORITMS_PROC.FB_PROV_OPRESSOVKA.FB_PMS_MORE_300._STATUSDUALINPUT.STATUS_ERROR", 88);
    st->size_data = sizeof(BYTE);
    p_PROGRAM0 = &RESOURCE1__INSTANCE0;
    p_PROC_ALGORITMS = (PROC_ALGORITMS*)&p_PROGRAM0->ALGORITMS_PROC;
    p_PROV_OPRESSOVKA = (PROV_OPRESSOVKA*)&p_PROC_ALGORITMS->FB_PROV_OPRESSOVKA;
    p_FB_PH_ALGORITM = (FB_PH_ALGORITM*)&p_PROV_OPRESSOVKA->FB_PMS_MORE_300;
    p_TYPE_STATUSDUALINPUT = (TYPE_STATUSDUALINPUT*)&p_FB_PH_ALGORITM->_STATUSDUALINPUT;
    p_BYTE = (BYTE*)&p_TYPE_STATUSDUALINPUT->STATUS_ERROR;
    st->value_p = p_BYTE;
  }

  return 0;
}

// clang-format on