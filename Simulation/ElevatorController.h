/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/Dylan/Desktop/elevator-controller-main/Simulation/config.txt
** Generation date: 2025-05-15T11:31:51
*************************************************************$ */
#ifndef _ElevatorController_H_
#define _ElevatorController_H_

#include "kcg_types.h"
#include "DoorModes.h"
#include "ElevatorModes.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int32 /* iDestinationFloorNumber/ */ iDestinationFloorNumber;
  kcg_bool /* iTravelRequest/ */ iTravelRequest;
} inC_ElevatorController;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  tDoorStatusEnum /* oDoorStatus/ */ oDoorStatus;
  kcg_int32 /* oFloorNumber/ */ oFloorNumber;
  tMotorCommand /* oMotorCommand/ */ oMotorCommand;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DoorModes /* _L3=(DoorModes#1)/ */ Context_DoorModes_1;
  outC_ElevatorModes /* _L1=(ElevatorModes#1)/ */ Context_ElevatorModes_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  tDoorStatusEnum /* _L3/ */ _L3;
  kcg_bool /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  tMotorCommand /* _L14/ */ _L14;
} outC_ElevatorController;

/* ===========  node initialization and cycle functions  =========== */
/* ElevatorController/ */
extern void ElevatorController(
  inC_ElevatorController *inC,
  outC_ElevatorController *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ElevatorController_reset(outC_ElevatorController *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ElevatorController_init(outC_ElevatorController *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ElevatorController_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** ElevatorController.h
** Generation date: 2025-05-15T11:31:51
*************************************************************$ */

