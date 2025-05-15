/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/omele/Documents/SCADE Elevator Project/SCADE Elevator Project/Elevator/Simulation/config.txt
** Generation date: 2025-05-15T08:42:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ElevatorModes.h"

/* ElevatorModes/ */
void ElevatorModes(inC_ElevatorModes *inC, outC_ElevatorModes *outC)
{
  /* oFloorNumber/ */
  kcg_int32 oFloorNumber_partial;
  /* oOpenDoor/ */
  kcg_bool oOpenDoor_partial;
  /* oCloseDoor/ */
  kcg_bool oCloseDoor_partial;
  /* oMotorCommand/ */
  tMotorCommand oMotorCommand_partial;
  /* elevator_state: */
  SSM_ST_elevator_state elevator_state_state_nxt_partial;
  /* elevator_state: */
  kcg_bool elevator_state_reset_nxt_partial;
  /* elevator_state: */
  SSM_TR_elevator_state elevator_state_fired_partial;
  /* elevator_state:STOPPED:<1> */
  kcg_bool tr_1_guard_STOPPED_elevator_state;
  /* oFloorNumber/ */
  kcg_int32 _1_oFloorNumber_partial;
  /* oOpenDoor/ */
  kcg_bool _2_oOpenDoor_partial;
  /* oCloseDoor/ */
  kcg_bool _3_oCloseDoor_partial;
  /* oMotorCommand/ */
  tMotorCommand _4_oMotorCommand_partial;
  /* elevator_state: */
  SSM_ST_elevator_state _5_elevator_state_state_nxt_partial;
  /* elevator_state: */
  kcg_bool _6_elevator_state_reset_nxt_partial;
  /* elevator_state: */
  SSM_TR_elevator_state _7_elevator_state_fired_partial;
  /* elevator_state:RUNNING:<1> */
  kcg_bool tr_1_guard_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool SM2_reset_prv_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool SM2_reset_sel_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2:ELEVATOR_CLIMB:<1> */
  kcg_bool tr_1_guard_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state SM2_fired_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool SM2_reset_nxt_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state SM2_state_nxt_partial_RUNNING_elevator_state;
  /* oMotorCommand/ */
  tMotorCommand _8_oMotorCommand_partial;
  /* oCloseDoor/ */
  kcg_bool _9_oCloseDoor_partial;
  /* oOpenDoor/ */
  kcg_bool _10_oOpenDoor_partial;
  /* oFloorNumber/ */
  kcg_int32 _11_oFloorNumber_partial;
  /* oMotorCommand/ */
  tMotorCommand _12_oMotorCommand_partial;
  /* oMotorCommand/ */
  tMotorCommand _13_oMotorCommand_partial;
  /* elevator_state:RUNNING:SM2:init:<1> */
  kcg_bool tr_1_guard_init_SM2_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state _14_SM2_fired_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool _15_SM2_reset_nxt_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state _16_SM2_state_nxt_partial_RUNNING_elevator_state;
  /* oMotorCommand/ */
  tMotorCommand _17_oMotorCommand_partial;
  /* oCloseDoor/ */
  kcg_bool _18_oCloseDoor_partial;
  /* oOpenDoor/ */
  kcg_bool _19_oOpenDoor_partial;
  /* oFloorNumber/ */
  kcg_int32 _20_oFloorNumber_partial;
  /* oFloorNumber/ */
  kcg_int32 last_oFloorNumber;
  /* elevator_state: */
  kcg_bool elevator_state_reset_sel;
  /* elevator_state: */
  kcg_bool elevator_state_reset_prv;

  outC->elevator_state_state_sel = outC->elevator_state_state_nxt;
  outC->elevator_state_state_act = outC->elevator_state_state_sel;
  elevator_state_reset_sel = outC->elevator_state_reset_nxt;
  switch (outC->elevator_state_state_sel) {
    case SSM_st_RUNNING_elevator_state :
      if (elevator_state_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->elevator_state_state_act) {
    case SSM_st_RUNNING_elevator_state :
      /* elevator_state:RUNNING:SM2: */
      if (outC->init1) {
        outC->SM2_state_sel_RUNNING_elevator_state =
          SSM_st_init_SM2_RUNNING_elevator_state;
      }
      else {
        outC->SM2_state_sel_RUNNING_elevator_state =
          outC->SM2_state_nxt_RUNNING_elevator_state;
      }
      outC->SM2_state_act_RUNNING_elevator_state =
        outC->SM2_state_sel_RUNNING_elevator_state;
      outC->SM2_clock_RUNNING_elevator_state =
        outC->SM2_state_act_RUNNING_elevator_state;
      switch (outC->SM2_clock_RUNNING_elevator_state) {
        case SSM_st_init_SM2_RUNNING_elevator_state :
          outC->n_times_5_size = 20;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->elevator_state_state_sel) {
    case SSM_st_RUNNING_elevator_state :
      if (elevator_state_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->elevator_state_state_act) {
    case SSM_st_RUNNING_elevator_state :
      /* elevator_state:RUNNING:SM2: */
      if (outC->init1) {
        SM2_reset_sel_RUNNING_elevator_state = kcg_false;
      }
      else {
        SM2_reset_sel_RUNNING_elevator_state =
          outC->SM2_reset_nxt_RUNNING_elevator_state;
      }
      switch (outC->SM2_state_sel_RUNNING_elevator_state) {
        case SSM_st_init_SM2_RUNNING_elevator_state :
          if (SM2_reset_sel_RUNNING_elevator_state) {
            outC->init = kcg_true;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      switch (outC->SM2_clock_RUNNING_elevator_state) {
        case SSM_st_init_SM2_RUNNING_elevator_state :
          /* @1/_/v4= */
          if (outC->init) {
            outC->v4_times_5_size = outC->n_times_5_size;
          }
          else {
            outC->v4_times_5_size = outC->v3_times_5_size;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  last_oFloorNumber = outC->oFloorNumber;
  /* elevator_state: */
  switch (outC->elevator_state_state_act) {
    case SSM_st_RUNNING_elevator_state :
      /* elevator_state:RUNNING:SM2: */
      switch (outC->SM2_clock_RUNNING_elevator_state) {
        case SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state :
          outC->_L3_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = kcg_lit_int32(1);
          outC->_L1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = last_oFloorNumber;
          outC->_L2_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state =
            outC->_L1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state +
            outC->_L3_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          _11_oFloorNumber_partial = outC->_L2_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          _1_oFloorNumber_partial = _11_oFloorNumber_partial;
          break;
        case SSM_st_init_SM2_RUNNING_elevator_state :
          _20_oFloorNumber_partial = last_oFloorNumber;
          outC->c_times_5_size = kcg_true & (inC->iDestinationFloorNumber >
              _20_oFloorNumber_partial);
          /* @1/_/v3= */
          if (outC->v4_times_5_size < 0) {
            outC->v3_times_5_size = outC->v4_times_5_size;
          }
          else /* @1/_/v3= */
          if (outC->c_times_5_size) {
            outC->v3_times_5_size = outC->v4_times_5_size - 1;
          }
          else {
            outC->v3_times_5_size = outC->v4_times_5_size;
          }
          outC->o_times_5_size = outC->c_times_5_size & (outC->v3_times_5_size == 0);
          _1_oFloorNumber_partial = _20_oFloorNumber_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_RUNNING_elevator_state = _1_oFloorNumber_partial ==
        inC->iDestinationFloorNumber;
      if (tr_1_guard_RUNNING_elevator_state) {
        _7_elevator_state_fired_partial =
          SSM_TR_RUNNING_STOPPED_1_RUNNING_elevator_state;
      }
      else {
        _7_elevator_state_fired_partial = SSM_TR_no_trans_elevator_state;
      }
      _6_elevator_state_reset_nxt_partial = tr_1_guard_RUNNING_elevator_state;
      if (tr_1_guard_RUNNING_elevator_state) {
        _5_elevator_state_state_nxt_partial = SSM_st_STOPPED_elevator_state;
      }
      else {
        _5_elevator_state_state_nxt_partial = SSM_st_RUNNING_elevator_state;
      }
      /* elevator_state:RUNNING:SM2: */
      switch (outC->SM2_clock_RUNNING_elevator_state) {
        case SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state :
          _8_oMotorCommand_partial = eMOTOR_STOP;
          _9_oCloseDoor_partial = kcg_false;
          _10_oOpenDoor_partial = kcg_false;
          tr_1_guard_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = kcg_true;
          if (tr_1_guard_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state) {
            SM2_fired_partial_RUNNING_elevator_state =
              SSM_TR_ELEVATOR_CLIMB_init_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          }
          else {
            SM2_fired_partial_RUNNING_elevator_state =
              SSM_TR_no_trans_SM2_RUNNING_elevator_state;
          }
          SM2_reset_nxt_partial_RUNNING_elevator_state =
            tr_1_guard_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          if (tr_1_guard_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state) {
            SM2_state_nxt_partial_RUNNING_elevator_state =
              SSM_st_init_SM2_RUNNING_elevator_state;
          }
          else {
            SM2_state_nxt_partial_RUNNING_elevator_state =
              SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          }
          _2_oOpenDoor_partial = _10_oOpenDoor_partial;
          _3_oCloseDoor_partial = _9_oCloseDoor_partial;
          _4_oMotorCommand_partial = _8_oMotorCommand_partial;
          outC->SM2_state_nxt_RUNNING_elevator_state =
            SM2_state_nxt_partial_RUNNING_elevator_state;
          outC->SM2_reset_nxt_RUNNING_elevator_state =
            SM2_reset_nxt_partial_RUNNING_elevator_state;
          outC->SM2_fired_RUNNING_elevator_state =
            SM2_fired_partial_RUNNING_elevator_state;
          break;
        case SSM_st_init_SM2_RUNNING_elevator_state :
          tr_1_guard_init_SM2_RUNNING_elevator_state = outC->o_times_5_size;
          if (tr_1_guard_init_SM2_RUNNING_elevator_state) {
            _14_SM2_fired_partial_RUNNING_elevator_state =
              SSM_TR_init_ELEVATOR_CLIMB_1_init_SM2_RUNNING_elevator_state;
          }
          else {
            _14_SM2_fired_partial_RUNNING_elevator_state =
              SSM_TR_no_trans_SM2_RUNNING_elevator_state;
          }
          _15_SM2_reset_nxt_partial_RUNNING_elevator_state =
            tr_1_guard_init_SM2_RUNNING_elevator_state;
          if (tr_1_guard_init_SM2_RUNNING_elevator_state) {
            _16_SM2_state_nxt_partial_RUNNING_elevator_state =
              SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          }
          else {
            _16_SM2_state_nxt_partial_RUNNING_elevator_state =
              SSM_st_init_SM2_RUNNING_elevator_state;
          }
          outC->MotorControl_clock_init_SM2_RUNNING_elevator_state =
            inC->iDestinationFloorNumber > _20_oFloorNumber_partial;
          /* elevator_state:RUNNING:SM2:init:MotorControl: */
          if (outC->MotorControl_clock_init_SM2_RUNNING_elevator_state) {
            outC->_L1_then_MotorControl_init_SM2_RUNNING_elevator_state = eMOTOR_MOVEUP;
            _12_oMotorCommand_partial =
              outC->_L1_then_MotorControl_init_SM2_RUNNING_elevator_state;
            _17_oMotorCommand_partial = _12_oMotorCommand_partial;
          }
          else {
            outC->_L1_else_MotorControl_init_SM2_RUNNING_elevator_state = eMOTOR_MOVEDOWN;
            _13_oMotorCommand_partial =
              outC->_L1_else_MotorControl_init_SM2_RUNNING_elevator_state;
            _17_oMotorCommand_partial = _13_oMotorCommand_partial;
          }
          outC->_L2_init_SM2_RUNNING_elevator_state = kcg_false;
          _19_oOpenDoor_partial = outC->_L2_init_SM2_RUNNING_elevator_state;
          outC->_L1_init_SM2_RUNNING_elevator_state = kcg_true;
          _18_oCloseDoor_partial = outC->_L1_init_SM2_RUNNING_elevator_state;
          _2_oOpenDoor_partial = _19_oOpenDoor_partial;
          _3_oCloseDoor_partial = _18_oCloseDoor_partial;
          _4_oMotorCommand_partial = _17_oMotorCommand_partial;
          outC->SM2_state_nxt_RUNNING_elevator_state =
            _16_SM2_state_nxt_partial_RUNNING_elevator_state;
          outC->SM2_reset_nxt_RUNNING_elevator_state =
            _15_SM2_reset_nxt_partial_RUNNING_elevator_state;
          outC->SM2_fired_RUNNING_elevator_state =
            _14_SM2_fired_partial_RUNNING_elevator_state;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->SM2_fired_strong_RUNNING_elevator_state =
        SSM_TR_no_trans_SM2_RUNNING_elevator_state;
      /* elevator_state:RUNNING:SM2: */
      if (outC->init1) {
        SM2_reset_prv_RUNNING_elevator_state = kcg_false;
      }
      else {
        SM2_reset_prv_RUNNING_elevator_state =
          outC->SM2_reset_act_RUNNING_elevator_state;
      }
      outC->SM2_reset_act_RUNNING_elevator_state = kcg_false;
      outC->oFloorNumber = _1_oFloorNumber_partial;
      outC->oOpenDoor = _2_oOpenDoor_partial;
      outC->oCloseDoor = _3_oCloseDoor_partial;
      outC->oMotorCommand = _4_oMotorCommand_partial;
      outC->elevator_state_state_nxt = _5_elevator_state_state_nxt_partial;
      outC->elevator_state_reset_nxt = _6_elevator_state_reset_nxt_partial;
      outC->elevator_state_fired = _7_elevator_state_fired_partial;
      break;
    case SSM_st_STOPPED_elevator_state :
      oFloorNumber_partial = last_oFloorNumber;
      tr_1_guard_STOPPED_elevator_state = inC->iTravelRequest &
        (oFloorNumber_partial != inC->iDestinationFloorNumber);
      if (tr_1_guard_STOPPED_elevator_state) {
        elevator_state_fired_partial = SSM_TR_STOPPED_RUNNING_1_STOPPED_elevator_state;
      }
      else {
        elevator_state_fired_partial = SSM_TR_no_trans_elevator_state;
      }
      elevator_state_reset_nxt_partial = tr_1_guard_STOPPED_elevator_state;
      if (tr_1_guard_STOPPED_elevator_state) {
        elevator_state_state_nxt_partial = SSM_st_RUNNING_elevator_state;
      }
      else {
        elevator_state_state_nxt_partial = SSM_st_STOPPED_elevator_state;
      }
      outC->_L3_STOPPED_elevator_state = eMOTOR_STOP;
      oMotorCommand_partial = outC->_L3_STOPPED_elevator_state;
      outC->_L2_STOPPED_elevator_state = kcg_false;
      oCloseDoor_partial = outC->_L2_STOPPED_elevator_state;
      outC->_L1_STOPPED_elevator_state = kcg_true;
      oOpenDoor_partial = outC->_L1_STOPPED_elevator_state;
      outC->oFloorNumber = oFloorNumber_partial;
      outC->oOpenDoor = oOpenDoor_partial;
      outC->oCloseDoor = oCloseDoor_partial;
      outC->oMotorCommand = oMotorCommand_partial;
      outC->elevator_state_state_nxt = elevator_state_state_nxt_partial;
      outC->elevator_state_reset_nxt = elevator_state_reset_nxt_partial;
      outC->elevator_state_fired = elevator_state_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->elevator_state_fired_strong = SSM_TR_no_trans_elevator_state;
  elevator_state_reset_prv = outC->elevator_state_reset_act;
  outC->elevator_state_reset_act = kcg_false;
  switch (outC->elevator_state_state_act) {
    case SSM_st_RUNNING_elevator_state :
      outC->init1 = kcg_false;
      switch (outC->SM2_clock_RUNNING_elevator_state) {
        case SSM_st_init_SM2_RUNNING_elevator_state :
          outC->init = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ElevatorModes_init(outC_ElevatorModes *outC)
{
  outC->elevator_state_fired = SSM_TR_no_trans_elevator_state;
  outC->elevator_state_fired_strong = SSM_TR_no_trans_elevator_state;
  outC->elevator_state_state_act = SSM_st_STOPPED_elevator_state;
  outC->elevator_state_state_sel = SSM_st_STOPPED_elevator_state;
  outC->_L2_init_SM2_RUNNING_elevator_state = kcg_true;
  outC->_L1_init_SM2_RUNNING_elevator_state = kcg_true;
  outC->MotorControl_clock_init_SM2_RUNNING_elevator_state = kcg_true;
  outC->_L1_else_MotorControl_init_SM2_RUNNING_elevator_state = eMOTOR_STOP;
  outC->_L1_then_MotorControl_init_SM2_RUNNING_elevator_state = eMOTOR_STOP;
  outC->_L3_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = kcg_lit_int32(0);
  outC->_L2_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = kcg_lit_int32(0);
  outC->_L1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = kcg_lit_int32(0);
  outC->SM2_clock_RUNNING_elevator_state = SSM_st_init_SM2_RUNNING_elevator_state;
  outC->SM2_state_sel_RUNNING_elevator_state =
    SSM_st_init_SM2_RUNNING_elevator_state;
  outC->SM2_state_act_RUNNING_elevator_state =
    SSM_st_init_SM2_RUNNING_elevator_state;
  outC->SM2_fired_strong_RUNNING_elevator_state =
    SSM_TR_no_trans_SM2_RUNNING_elevator_state;
  outC->SM2_fired_RUNNING_elevator_state =
    SSM_TR_no_trans_SM2_RUNNING_elevator_state;
  outC->_L1_STOPPED_elevator_state = kcg_true;
  outC->_L2_STOPPED_elevator_state = kcg_true;
  outC->_L3_STOPPED_elevator_state = eMOTOR_STOP;
  outC->v4_times_5_size = 0;
  outC->n_times_5_size = 0;
  outC->c_times_5_size = kcg_true;
  outC->o_times_5_size = kcg_true;
  outC->SM2_state_nxt_RUNNING_elevator_state =
    SSM_st_init_SM2_RUNNING_elevator_state;
  outC->SM2_reset_act_RUNNING_elevator_state = kcg_true;
  outC->SM2_reset_nxt_RUNNING_elevator_state = kcg_true;
  outC->v3_times_5_size = 0;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->oMotorCommand = eMOTOR_STOP;
  outC->oCloseDoor = kcg_true;
  outC->oOpenDoor = kcg_true;
  outC->elevator_state_reset_act = kcg_false;
  outC->oFloorNumber = kcg_lit_int32(0);
  outC->elevator_state_reset_nxt = kcg_false;
  outC->elevator_state_state_nxt = SSM_st_STOPPED_elevator_state;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ElevatorModes_reset(outC_ElevatorModes *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->elevator_state_reset_act = kcg_false;
  outC->oFloorNumber = kcg_lit_int32(0);
  outC->elevator_state_reset_nxt = kcg_false;
  outC->elevator_state_state_nxt = SSM_st_STOPPED_elevator_state;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: ElevatorModes/
  @1: (times#5)
*/

/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** ElevatorModes.c
** Generation date: 2025-05-15T08:42:54
*************************************************************$ */

