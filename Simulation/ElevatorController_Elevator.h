/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/omele/Desktop/elevator-controller-main/elevator-controller-main/Simulation/config.txt
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */
#ifndef _ElevatorController_Elevator_H_
#define _ElevatorController_Elevator_H_

#include "kcg_types.h"
#include "DoorModes_Elevator.h"
#include "ElevatorModes_Elevator.h"

/* =====================  no input structure  ====================== */

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
  outC_DoorModes_Elevator /* _L3=(Elevator::DoorModes#1)/ */ Context_DoorModes_1;
  outC_ElevatorModes_Elevator /* _L1=(Elevator::ElevatorModes#1)/ */ Context_ElevatorModes_1;
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
} outC_ElevatorController_Elevator;

/* ===========  node initialization and cycle functions  =========== */
/* Elevator::ElevatorController/ */
extern void ElevatorController_Elevator(
  /* iDestinationFloorNumber/ */
  kcg_int32 iDestinationFloorNumber,
  /* iTravelRequest/ */
  kcg_bool iTravelRequest,
  outC_ElevatorController_Elevator *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ElevatorController_reset_Elevator(
  outC_ElevatorController_Elevator *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ElevatorController_init_Elevator(
  outC_ElevatorController_Elevator *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ElevatorController_Elevator_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** ElevatorController_Elevator.h
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */

