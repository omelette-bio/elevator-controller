/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/omele/Desktop/elevator-controller-main/elevator-controller-main/Simulation/config.txt
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */
#ifndef _Proof_Proof_H_
#define _Proof_Proof_H_

#include "kcg_types.h"
#include "Prop1_Proof.h"
#include "ElevatorController_Elevator.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int32 /* iDestinationFloorNumber/ */ iDestinationFloorNumber;
  kcg_bool /* iTravelRequest/ */ iTravelRequest;
} inC_Proof_Proof;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* oProp1/ */ oProp1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Prop1_Proof /* _L6=(Proof::Prop1#1)/ */ Context_Prop1_1;
  outC_ElevatorController_Elevator /* _L1=(Elevator::ElevatorController#1)/ */ Context_ElevatorController_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  tMotorCommand /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
  tDoorStatusEnum /* _L1/ */ _L1;
  kcg_int32 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
} outC_Proof_Proof;

/* ===========  node initialization and cycle functions  =========== */
/* Proof::Proof/ */
extern void Proof_Proof(inC_Proof_Proof *inC, outC_Proof_Proof *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Proof_reset_Proof(outC_Proof_Proof *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Proof_init_Proof(outC_Proof_Proof *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Proof_Proof_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Proof_Proof.h
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */

