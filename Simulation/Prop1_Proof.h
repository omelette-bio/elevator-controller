/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/omele/Desktop/elevator-controller-main/elevator-controller-main/Simulation/config.txt
** Generation date: 2025-05-17T14:42:01
*************************************************************$ */
#ifndef _Prop1_Proof_H_
#define _Prop1_Proof_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* oProp1/ */ oProp1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/C/ */ C_Implies_1;
  kcg_bool /* @1/B/ */ B_Implies_1;
  kcg_bool /* @1/A/ */ A_Implies_1;
  kcg_bool /* @1/_L4/ */ _L4_Implies_1;
  kcg_bool /* @1/_L3/ */ _L3_Implies_1;
  kcg_bool /* @1/_L2/ */ _L2_Implies_1;
  kcg_bool /* @1/_L1/ */ _L1_Implies_1;
  tDoorStatusEnum /* _L8/ */ _L8;
  tMotorCommand /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  tMotorCommand /* _L16/ */ _L16;
  tMotorCommand /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  tDoorStatusEnum /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
} outC_Prop1_Proof;

/* ===========  node initialization and cycle functions  =========== */
/* Proof::Prop1/ */
extern void Prop1_Proof(
  /* iDoorStatus/ */
  tDoorStatusEnum iDoorStatus,
  /* iMotorCommand/ */
  tMotorCommand iMotorCommand,
  outC_Prop1_Proof *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Prop1_reset_Proof(outC_Prop1_Proof *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Prop1_init_Proof(outC_Prop1_Proof *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Proof::Prop1/
  @1: (verif::Implies#1)
*/

#endif /* _Prop1_Proof_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Prop1_Proof.h
** Generation date: 2025-05-17T14:42:01
*************************************************************$ */

