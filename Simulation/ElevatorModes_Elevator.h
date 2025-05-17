/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/omele/Desktop/elevator-controller-main/elevator-controller-main/Simulation/config.txt
** Generation date: 2025-05-17T14:42:01
*************************************************************$ */
#ifndef _ElevatorModes_Elevator_H_
#define _ElevatorModes_Elevator_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* oFloorNumber/ */ oFloorNumber;
  kcg_bool /* oOpenDoor/ */ oOpenDoor;
  kcg_bool /* oCloseDoor/ */ oCloseDoor;
  tMotorCommand /* oMotorCommand/ */ oMotorCommand;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_size /* @1/_/v3/ */ v3_times_3_size;
  kcg_size /* @2/_/v3/ */ v3_times_1_size;
  kcg_size /* @3/_/v3/ */ v3_times_2_size;
  kcg_bool /* elevator_state:RUNNING:SM2: */ SM2_reset_nxt_RUNNING_elevator_state;
  kcg_bool /* elevator_state:RUNNING:SM2: */ SM2_reset_act_RUNNING_elevator_state;
  SSM_ST_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_state_nxt_RUNNING_elevator_state;
  SSM_ST_elevator_state /* elevator_state: */ elevator_state_state_nxt;
  kcg_bool /* elevator_state: */ elevator_state_reset_act;
  kcg_bool /* elevator_state: */ elevator_state_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_clock_RUNNING_elevator_state;
  SSM_ST_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ _3_SM2_clock_RUNNING_elevator_state;
  kcg_bool /* elevator_state:RUNNING:SM2:SET_MOVEMENT: */ SET_MOVEMENT_weakb_clock_SM2_RUNNING_elevator_state;
  kcg_bool /* elevator_state:RUNNING:SM2:SET_MOVEMENT:MotorControl: */ MotorControl_clock_SET_MOVEMENT_SM2_RUNNING_elevator_state;
  SSM_ST_elevator_state /* elevator_state: */ elevator_state_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_3_size;
  kcg_bool /* @1/_/c/ */ c_times_3_size;
  kcg_size /* @1/_/n/ */ n_times_3_size;
  kcg_size /* @1/_/v4/ */ v4_times_3_size;
  kcg_bool /* @2/_/o/ */ o_times_1_size;
  kcg_bool /* @2/_/c/ */ c_times_1_size;
  kcg_size /* @2/_/n/ */ n_times_1_size;
  kcg_size /* @2/_/v4/ */ v4_times_1_size;
  kcg_bool /* @3/_/o/ */ o_times_2_size;
  kcg_bool /* @3/_/c/ */ c_times_2_size;
  kcg_size /* @3/_/n/ */ n_times_2_size;
  kcg_size /* @3/_/v4/ */ v4_times_2_size;
  tMotorCommand /* elevator_state:STOPPED:_L3/ */ _L3_STOPPED_elevator_state;
  kcg_bool /* elevator_state:STOPPED:_L2/ */ _L2_STOPPED_elevator_state;
  kcg_bool /* elevator_state:STOPPED:_L1/ */ _L1_STOPPED_elevator_state;
  SSM_TR_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_fired_RUNNING_elevator_state;
  SSM_TR_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_fired_strong_RUNNING_elevator_state;
  SSM_ST_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_state_act_RUNNING_elevator_state;
  SSM_ST_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_state_sel_RUNNING_elevator_state;
  kcg_bool /* elevator_state:RUNNING:SM2:CLOSE_DOORS:_L1/ */ _L1_CLOSE_DOORS_SM2_RUNNING_elevator_state;
  kcg_bool /* elevator_state:RUNNING:SM2:CLOSE_DOORS:_L2/ */ _L2_CLOSE_DOORS_SM2_RUNNING_elevator_state;
  kcg_int32 /* elevator_state:RUNNING:SM2:ELEVATOR_DOWN:_L1/ */ _L1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state;
  kcg_int32 /* elevator_state:RUNNING:SM2:ELEVATOR_DOWN:_L2/ */ _L2_ELEVATOR_DOWN_SM2_RUNNING_elevator_state;
  kcg_int32 /* elevator_state:RUNNING:SM2:ELEVATOR_DOWN:_L3/ */ _L3_ELEVATOR_DOWN_SM2_RUNNING_elevator_state;
  kcg_int32 /* elevator_state:RUNNING:SM2:ELEVATOR_CLIMB:_L1/ */ _L1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
  kcg_int32 /* elevator_state:RUNNING:SM2:ELEVATOR_CLIMB:_L2/ */ _L2_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
  kcg_int32 /* elevator_state:RUNNING:SM2:ELEVATOR_CLIMB:_L3/ */ _L3_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
  tMotorCommand /* elevator_state:RUNNING:SM2:SET_MOVEMENT:MotorControl:then:_L1/ */ _L1_then_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state;
  tMotorCommand /* elevator_state:RUNNING:SM2:SET_MOVEMENT:MotorControl:else:_L1/ */ _L1_else_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state;
  SSM_ST_elevator_state /* elevator_state: */ elevator_state_state_sel;
  SSM_TR_elevator_state /* elevator_state: */ elevator_state_fired_strong;
  SSM_TR_elevator_state /* elevator_state: */ elevator_state_fired;
} outC_ElevatorModes_Elevator;

/* ===========  node initialization and cycle functions  =========== */
/* Elevator::ElevatorModes/ */
extern void ElevatorModes_Elevator(
  /* iDestinationFloorNumber/ */
  kcg_int32 iDestinationFloorNumber,
  /* iTravelRequest/ */
  kcg_bool iTravelRequest,
  outC_ElevatorModes_Elevator *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ElevatorModes_reset_Elevator(outC_ElevatorModes_Elevator *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ElevatorModes_init_Elevator(outC_ElevatorModes_Elevator *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Elevator::ElevatorModes/
  @1: (times#3)
  @2: (times#1)
  @3: (times#2)
*/

#endif /* _ElevatorModes_Elevator_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** ElevatorModes_Elevator.h
** Generation date: 2025-05-17T14:42:01
*************************************************************$ */

