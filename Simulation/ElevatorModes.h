/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/omele/Documents/SCADE Elevator Project/SCADE Elevator Project/Elevator/Simulation/config.txt
** Generation date: 2025-05-15T08:42:54
*************************************************************$ */
#ifndef _ElevatorModes_H_
#define _ElevatorModes_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int32 /* iDestinationFloorNumber/ */ iDestinationFloorNumber;
  kcg_bool /* iTravelRequest/ */ iTravelRequest;
} inC_ElevatorModes;

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
  kcg_size /* @1/_/v3/ */ v3_times_5_size;
  kcg_bool /* elevator_state:RUNNING:SM2: */ SM2_reset_nxt_RUNNING_elevator_state;
  kcg_bool /* elevator_state:RUNNING:SM2: */ SM2_reset_act_RUNNING_elevator_state;
  SSM_ST_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_state_nxt_RUNNING_elevator_state;
  SSM_ST_elevator_state /* elevator_state: */ elevator_state_state_nxt;
  kcg_bool /* elevator_state: */ elevator_state_reset_act;
  kcg_bool /* elevator_state: */ elevator_state_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_clock_RUNNING_elevator_state;
  kcg_bool /* elevator_state:RUNNING:SM2:init:MotorControl: */ MotorControl_clock_init_SM2_RUNNING_elevator_state;
  SSM_ST_elevator_state /* elevator_state: */ elevator_state_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_5_size;
  kcg_bool /* @1/_/c/ */ c_times_5_size;
  kcg_size /* @1/_/n/ */ n_times_5_size;
  kcg_size /* @1/_/v4/ */ v4_times_5_size;
  tMotorCommand /* elevator_state:STOPPED:_L3/ */ _L3_STOPPED_elevator_state;
  kcg_bool /* elevator_state:STOPPED:_L2/ */ _L2_STOPPED_elevator_state;
  kcg_bool /* elevator_state:STOPPED:_L1/ */ _L1_STOPPED_elevator_state;
  SSM_TR_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_fired_RUNNING_elevator_state;
  SSM_TR_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_fired_strong_RUNNING_elevator_state;
  SSM_ST_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_state_act_RUNNING_elevator_state;
  SSM_ST_SM2_RUNNING_elevator_state /* elevator_state:RUNNING:SM2: */ SM2_state_sel_RUNNING_elevator_state;
  kcg_int32 /* elevator_state:RUNNING:SM2:ELEVATOR_CLIMB:_L1/ */ _L1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
  kcg_int32 /* elevator_state:RUNNING:SM2:ELEVATOR_CLIMB:_L2/ */ _L2_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
  kcg_int32 /* elevator_state:RUNNING:SM2:ELEVATOR_CLIMB:_L3/ */ _L3_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
  tMotorCommand /* elevator_state:RUNNING:SM2:init:MotorControl:then:_L1/ */ _L1_then_MotorControl_init_SM2_RUNNING_elevator_state;
  tMotorCommand /* elevator_state:RUNNING:SM2:init:MotorControl:else:_L1/ */ _L1_else_MotorControl_init_SM2_RUNNING_elevator_state;
  kcg_bool /* elevator_state:RUNNING:SM2:init:_L1/ */ _L1_init_SM2_RUNNING_elevator_state;
  kcg_bool /* elevator_state:RUNNING:SM2:init:_L2/ */ _L2_init_SM2_RUNNING_elevator_state;
  SSM_ST_elevator_state /* elevator_state: */ elevator_state_state_sel;
  SSM_TR_elevator_state /* elevator_state: */ elevator_state_fired_strong;
  SSM_TR_elevator_state /* elevator_state: */ elevator_state_fired;
} outC_ElevatorModes;

/* ===========  node initialization and cycle functions  =========== */
/* ElevatorModes/ */
extern void ElevatorModes(inC_ElevatorModes *inC, outC_ElevatorModes *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ElevatorModes_reset(outC_ElevatorModes *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ElevatorModes_init(outC_ElevatorModes *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: ElevatorModes/
  @1: (times#5)
*/

#endif /* _ElevatorModes_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** ElevatorModes.h
** Generation date: 2025-05-15T08:42:54
*************************************************************$ */

