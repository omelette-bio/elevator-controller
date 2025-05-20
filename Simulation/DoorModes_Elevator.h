/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/omele/Desktop/elevator-controller-main/elevator-controller-main/Simulation/config.txt
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */
#ifndef _DoorModes_Elevator_H_
#define _DoorModes_Elevator_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  tDoorStatusEnum /* oDoorStatus/ */ oDoorStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_size /* @1/_/v3/ */ v3_times_3_size;
  kcg_size /* @2/_/v3/ */ v3_times_4_size;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_3_size;
  kcg_bool /* @1/_/c/ */ c_times_3_size;
  kcg_size /* @1/_/n/ */ n_times_3_size;
  kcg_size /* @1/_/v4/ */ v4_times_3_size;
  kcg_bool /* @2/_/o/ */ o_times_4_size;
  kcg_bool /* @2/_/c/ */ c_times_4_size;
  kcg_size /* @2/_/n/ */ n_times_4_size;
  kcg_size /* @2/_/v4/ */ v4_times_4_size;
  tDoorStatusEnum /* SM1:CLOSED:_L4/ */ _L4_CLOSED_SM1;
  tDoorStatusEnum /* SM1:CLOSING:_L1/ */ _L1_CLOSING_SM1;
  tDoorStatusEnum /* SM1:OPENING:_L1/ */ _L1_OPENING_SM1;
  tDoorStatusEnum /* SM1:OPENED:_L1/ */ _L1_OPENED_SM1;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_DoorModes_Elevator;

/* ===========  node initialization and cycle functions  =========== */
/* Elevator::DoorModes/ */
extern void DoorModes_Elevator(
  /* iOpenDoor/ */
  kcg_bool iOpenDoor,
  /* iCloseDoor/ */
  kcg_bool iCloseDoor,
  outC_DoorModes_Elevator *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DoorModes_reset_Elevator(outC_DoorModes_Elevator *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DoorModes_init_Elevator(outC_DoorModes_Elevator *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Elevator::DoorModes/
  @1: (times#3)
  @2: (times#4)
*/

#endif /* _DoorModes_Elevator_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** DoorModes_Elevator.h
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */

