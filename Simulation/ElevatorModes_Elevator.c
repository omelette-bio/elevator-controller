/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/omele/Desktop/elevator-controller-main/elevator-controller-main/Simulation/config.txt
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ElevatorModes_Elevator.h"

/* Elevator::ElevatorModes/ */
void ElevatorModes_Elevator(
  /* iDestinationFloorNumber/ */
  kcg_int32 iDestinationFloorNumber,
  /* iTravelRequest/ */
  kcg_bool iTravelRequest,
  outC_ElevatorModes_Elevator *outC)
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
  /* elevator_state:RUNNING:SM2:CLOSE_DOORS:<1> */
  kcg_bool tr_1_guard_CLOSE_DOORS_SM2_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state SM2_fired_strong_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool SM2_reset_act_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state SM2_state_act_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state _8_SM2_fired_strong_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool _9_SM2_reset_act_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state _10_SM2_state_act_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state _11_SM2_fired_strong_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool _12_SM2_reset_act_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state _13_SM2_state_act_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state _14_SM2_fired_strong_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool _15_SM2_reset_act_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state _16_SM2_state_act_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state SM2_fired_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool SM2_reset_nxt_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state SM2_state_nxt_partial_RUNNING_elevator_state;
  /* oMotorCommand/ */
  tMotorCommand _17_oMotorCommand_partial;
  /* oCloseDoor/ */
  kcg_bool _18_oCloseDoor_partial;
  /* oOpenDoor/ */
  kcg_bool _19_oOpenDoor_partial;
  /* oFloorNumber/ */
  kcg_int32 _20_oFloorNumber_partial;
  /* elevator_state:RUNNING:SM2:ELEVATOR_DOWN:<1> */
  kcg_bool tr_1_guard_ELEVATOR_DOWN_SM2_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state _21_SM2_fired_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool _22_SM2_reset_nxt_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state _23_SM2_state_nxt_partial_RUNNING_elevator_state;
  /* oMotorCommand/ */
  tMotorCommand _24_oMotorCommand_partial;
  /* oCloseDoor/ */
  kcg_bool _25_oCloseDoor_partial;
  /* oOpenDoor/ */
  kcg_bool _26_oOpenDoor_partial;
  /* oFloorNumber/ */
  kcg_int32 _27_oFloorNumber_partial;
  /* elevator_state:RUNNING:SM2:ELEVATOR_CLIMB:<1> */
  kcg_bool tr_1_guard_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state _28_SM2_fired_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool _29_SM2_reset_nxt_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state _30_SM2_state_nxt_partial_RUNNING_elevator_state;
  /* oMotorCommand/ */
  tMotorCommand _31_oMotorCommand_partial;
  /* oCloseDoor/ */
  kcg_bool _32_oCloseDoor_partial;
  /* oOpenDoor/ */
  kcg_bool _33_oOpenDoor_partial;
  /* oFloorNumber/ */
  kcg_int32 _34_oFloorNumber_partial;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state _35_SM2_state_nxt_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool _36_SM2_reset_nxt_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state _37_SM2_fired_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state _38_SM2_state_nxt_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool _39_SM2_reset_nxt_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state _40_SM2_fired_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2:SET_MOVEMENT:<2> */
  kcg_bool tr_2_guard_SET_MOVEMENT_SM2_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2:SET_MOVEMENT:<1> */
  kcg_bool tr_1_guard_SET_MOVEMENT_SM2_RUNNING_elevator_state;
  /* oMotorCommand/ */
  tMotorCommand _41_oMotorCommand_partial;
  /* oMotorCommand/ */
  tMotorCommand _42_oMotorCommand_partial;
  /* elevator_state:RUNNING:SM2: */
  SSM_TR_SM2_RUNNING_elevator_state _43_SM2_fired_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  kcg_bool _44_SM2_reset_nxt_partial_RUNNING_elevator_state;
  /* elevator_state:RUNNING:SM2: */
  SSM_ST_SM2_RUNNING_elevator_state _45_SM2_state_nxt_partial_RUNNING_elevator_state;
  /* oMotorCommand/ */
  tMotorCommand _46_oMotorCommand_partial;
  /* oCloseDoor/ */
  kcg_bool _47_oCloseDoor_partial;
  /* oOpenDoor/ */
  kcg_bool _48_oOpenDoor_partial;
  /* oFloorNumber/ */
  kcg_int32 _49_oFloorNumber_partial;
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
        outC->init2 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->elevator_state_state_act) {
    case SSM_st_RUNNING_elevator_state :
      /* elevator_state:RUNNING:SM2: */
      if (outC->init2) {
        outC->SM2_state_sel_RUNNING_elevator_state =
          SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state;
      }
      else {
        outC->SM2_state_sel_RUNNING_elevator_state =
          outC->SM2_state_nxt_RUNNING_elevator_state;
      }
      outC->SM2_clock_RUNNING_elevator_state =
        outC->SM2_state_sel_RUNNING_elevator_state;
      switch (outC->SM2_clock_RUNNING_elevator_state) {
        case SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state :
          outC->n_times_3_size = 10;
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
      switch (outC->SM2_clock_RUNNING_elevator_state) {
        case SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state :
          /* @1/_/v4= */
          if (outC->init) {
            outC->v4_times_3_size = outC->n_times_3_size;
          }
          else {
            outC->v4_times_3_size = outC->v3_times_3_size;
          }
          outC->c_times_3_size = kcg_true;
          /* @1/_/v3= */
          if (outC->v4_times_3_size < 0) {
            outC->v3_times_3_size = outC->v4_times_3_size;
          }
          else /* @1/_/v3= */
          if (outC->c_times_3_size) {
            outC->v3_times_3_size = outC->v4_times_3_size - 1;
          }
          else {
            outC->v3_times_3_size = outC->v4_times_3_size;
          }
          outC->o_times_3_size = outC->c_times_3_size & (outC->v3_times_3_size == 0);
          tr_1_guard_CLOSE_DOORS_SM2_RUNNING_elevator_state = outC->o_times_3_size;
          if (tr_1_guard_CLOSE_DOORS_SM2_RUNNING_elevator_state) {
            SM2_state_act_partial_RUNNING_elevator_state =
              SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state;
          }
          else {
            SM2_state_act_partial_RUNNING_elevator_state =
              SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state;
          }
          outC->SM2_state_act_RUNNING_elevator_state =
            SM2_state_act_partial_RUNNING_elevator_state;
          break;
        case SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state :
          _10_SM2_state_act_partial_RUNNING_elevator_state =
            SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state;
          outC->SM2_state_act_RUNNING_elevator_state =
            _10_SM2_state_act_partial_RUNNING_elevator_state;
          break;
        case SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state :
          _13_SM2_state_act_partial_RUNNING_elevator_state =
            SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          outC->SM2_state_act_RUNNING_elevator_state =
            _13_SM2_state_act_partial_RUNNING_elevator_state;
          break;
        case SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state :
          _16_SM2_state_act_partial_RUNNING_elevator_state =
            SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state;
          outC->SM2_state_act_RUNNING_elevator_state =
            _16_SM2_state_act_partial_RUNNING_elevator_state;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->_3_SM2_clock_RUNNING_elevator_state =
        outC->SM2_state_act_RUNNING_elevator_state;
      /* elevator_state:RUNNING:SM2: */
      switch (outC->SM2_clock_RUNNING_elevator_state) {
        case SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state :
          if (tr_1_guard_CLOSE_DOORS_SM2_RUNNING_elevator_state) {
            SM2_fired_strong_partial_RUNNING_elevator_state =
              SSM_TR_CLOSE_DOORS_SET_MOVEMENT_1_CLOSE_DOORS_SM2_RUNNING_elevator_state;
          }
          else {
            SM2_fired_strong_partial_RUNNING_elevator_state =
              SSM_TR_no_trans_SM2_RUNNING_elevator_state;
          }
          outC->SM2_fired_strong_RUNNING_elevator_state =
            SM2_fired_strong_partial_RUNNING_elevator_state;
          break;
        case SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state :
          _8_SM2_fired_strong_partial_RUNNING_elevator_state =
            SSM_TR_no_trans_SM2_RUNNING_elevator_state;
          outC->SM2_fired_strong_RUNNING_elevator_state =
            _8_SM2_fired_strong_partial_RUNNING_elevator_state;
          break;
        case SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state :
          _11_SM2_fired_strong_partial_RUNNING_elevator_state =
            SSM_TR_no_trans_SM2_RUNNING_elevator_state;
          outC->SM2_fired_strong_RUNNING_elevator_state =
            _11_SM2_fired_strong_partial_RUNNING_elevator_state;
          break;
        case SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state :
          _14_SM2_fired_strong_partial_RUNNING_elevator_state =
            SSM_TR_no_trans_SM2_RUNNING_elevator_state;
          outC->SM2_fired_strong_RUNNING_elevator_state =
            _14_SM2_fired_strong_partial_RUNNING_elevator_state;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      switch (outC->_3_SM2_clock_RUNNING_elevator_state) {
        case SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state :
          outC->SET_MOVEMENT_weakb_clock_SM2_RUNNING_elevator_state =
            outC->SM2_fired_strong_RUNNING_elevator_state !=
            SSM_TR_no_trans_SM2_RUNNING_elevator_state;
          if (outC->SET_MOVEMENT_weakb_clock_SM2_RUNNING_elevator_state) {
          }
          else {
            outC->n_times_1_size = 19;
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
      if (outC->init2) {
        SM2_reset_sel_RUNNING_elevator_state = kcg_false;
      }
      else {
        SM2_reset_sel_RUNNING_elevator_state =
          outC->SM2_reset_nxt_RUNNING_elevator_state;
      }
      switch (outC->SM2_state_sel_RUNNING_elevator_state) {
        case SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state :
          if (SM2_reset_sel_RUNNING_elevator_state) {
            outC->init1 = kcg_true;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      /* elevator_state:RUNNING:SM2: */
      if (outC->init2) {
        SM2_reset_prv_RUNNING_elevator_state = kcg_false;
      }
      else {
        SM2_reset_prv_RUNNING_elevator_state =
          outC->SM2_reset_act_RUNNING_elevator_state;
      }
      /* elevator_state:RUNNING:SM2: */
      switch (outC->SM2_clock_RUNNING_elevator_state) {
        case SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state :
          SM2_reset_act_partial_RUNNING_elevator_state =
            tr_1_guard_CLOSE_DOORS_SM2_RUNNING_elevator_state;
          outC->SM2_reset_act_RUNNING_elevator_state =
            SM2_reset_act_partial_RUNNING_elevator_state;
          break;
        case SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state :
          _9_SM2_reset_act_partial_RUNNING_elevator_state = kcg_false;
          outC->SM2_reset_act_RUNNING_elevator_state =
            _9_SM2_reset_act_partial_RUNNING_elevator_state;
          break;
        case SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state :
          _12_SM2_reset_act_partial_RUNNING_elevator_state = kcg_false;
          outC->SM2_reset_act_RUNNING_elevator_state =
            _12_SM2_reset_act_partial_RUNNING_elevator_state;
          break;
        case SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state :
          _15_SM2_reset_act_partial_RUNNING_elevator_state = kcg_false;
          outC->SM2_reset_act_RUNNING_elevator_state =
            _15_SM2_reset_act_partial_RUNNING_elevator_state;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      switch (outC->SM2_state_act_RUNNING_elevator_state) {
        case SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state :
          if (outC->SM2_reset_act_RUNNING_elevator_state) {
            outC->init1 = kcg_true;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      switch (outC->_3_SM2_clock_RUNNING_elevator_state) {
        case SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state :
          if (outC->SET_MOVEMENT_weakb_clock_SM2_RUNNING_elevator_state) {
          }
          else /* @2/_/v4= */
          if (outC->init1) {
            outC->v4_times_1_size = outC->n_times_1_size;
          }
          else {
            outC->v4_times_1_size = outC->v3_times_1_size;
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
      switch (outC->_3_SM2_clock_RUNNING_elevator_state) {
        case SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state :
          _20_oFloorNumber_partial = last_oFloorNumber;
          _1_oFloorNumber_partial = _20_oFloorNumber_partial;
          break;
        case SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state :
          outC->_L3_ELEVATOR_DOWN_SM2_RUNNING_elevator_state = kcg_lit_int32(1);
          outC->_L2_ELEVATOR_DOWN_SM2_RUNNING_elevator_state = last_oFloorNumber;
          outC->_L1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state =
            outC->_L2_ELEVATOR_DOWN_SM2_RUNNING_elevator_state -
            outC->_L3_ELEVATOR_DOWN_SM2_RUNNING_elevator_state;
          _27_oFloorNumber_partial = outC->_L1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state;
          _1_oFloorNumber_partial = _27_oFloorNumber_partial;
          break;
        case SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state :
          outC->_L3_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = kcg_lit_int32(1);
          outC->_L1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = last_oFloorNumber;
          outC->_L2_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state =
            outC->_L1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state +
            outC->_L3_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          _34_oFloorNumber_partial = outC->_L2_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          _1_oFloorNumber_partial = _34_oFloorNumber_partial;
          break;
        case SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state :
          _49_oFloorNumber_partial = last_oFloorNumber;
          if (outC->SET_MOVEMENT_weakb_clock_SM2_RUNNING_elevator_state) {
          }
          else {
            outC->c_times_1_size = kcg_true & (iDestinationFloorNumber <
                _49_oFloorNumber_partial);
            /* @2/_/v3= */
            if (outC->v4_times_1_size < 0) {
              outC->v3_times_1_size = outC->v4_times_1_size;
            }
            else /* @2/_/v3= */
            if (outC->c_times_1_size) {
              outC->v3_times_1_size = outC->v4_times_1_size - 1;
            }
            else {
              outC->v3_times_1_size = outC->v4_times_1_size;
            }
            outC->o_times_1_size = outC->c_times_1_size & (outC->v3_times_1_size == 0);
            outC->n_times_2_size = 19;
            /* @3/_/v4= */
            if (outC->init1) {
              outC->v4_times_2_size = outC->n_times_2_size;
            }
            else {
              outC->v4_times_2_size = outC->v3_times_2_size;
            }
            outC->c_times_2_size = kcg_true & (iDestinationFloorNumber >
                _49_oFloorNumber_partial);
            /* @3/_/v3= */
            if (outC->v4_times_2_size < 0) {
              outC->v3_times_2_size = outC->v4_times_2_size;
            }
            else /* @3/_/v3= */
            if (outC->c_times_2_size) {
              outC->v3_times_2_size = outC->v4_times_2_size - 1;
            }
            else {
              outC->v3_times_2_size = outC->v4_times_2_size;
            }
            outC->o_times_2_size = outC->c_times_2_size & (outC->v3_times_2_size == 0);
          }
          _1_oFloorNumber_partial = _49_oFloorNumber_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_RUNNING_elevator_state = _1_oFloorNumber_partial ==
        iDestinationFloorNumber;
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
      switch (outC->_3_SM2_clock_RUNNING_elevator_state) {
        case SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state :
          _17_oMotorCommand_partial = eMOTOR_STOP;
          SM2_fired_partial_RUNNING_elevator_state =
            outC->SM2_fired_strong_RUNNING_elevator_state;
          SM2_reset_nxt_partial_RUNNING_elevator_state = kcg_false;
          SM2_state_nxt_partial_RUNNING_elevator_state =
            SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state;
          outC->_L1_CLOSE_DOORS_SM2_RUNNING_elevator_state = kcg_true;
          _18_oCloseDoor_partial = outC->_L1_CLOSE_DOORS_SM2_RUNNING_elevator_state;
          outC->_L2_CLOSE_DOORS_SM2_RUNNING_elevator_state = kcg_false;
          _19_oOpenDoor_partial = outC->_L2_CLOSE_DOORS_SM2_RUNNING_elevator_state;
          _2_oOpenDoor_partial = _19_oOpenDoor_partial;
          _3_oCloseDoor_partial = _18_oCloseDoor_partial;
          _4_oMotorCommand_partial = _17_oMotorCommand_partial;
          outC->SM2_state_nxt_RUNNING_elevator_state =
            SM2_state_nxt_partial_RUNNING_elevator_state;
          outC->SM2_reset_nxt_RUNNING_elevator_state =
            SM2_reset_nxt_partial_RUNNING_elevator_state;
          outC->SM2_fired_RUNNING_elevator_state =
            SM2_fired_partial_RUNNING_elevator_state;
          break;
        case SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state :
          _24_oMotorCommand_partial = eMOTOR_STOP;
          _25_oCloseDoor_partial = kcg_false;
          _26_oOpenDoor_partial = kcg_false;
          tr_1_guard_ELEVATOR_DOWN_SM2_RUNNING_elevator_state = kcg_true;
          if (tr_1_guard_ELEVATOR_DOWN_SM2_RUNNING_elevator_state) {
            _21_SM2_fired_partial_RUNNING_elevator_state =
              SSM_TR_ELEVATOR_DOWN_SET_MOVEMENT_1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state;
          }
          else {
            _21_SM2_fired_partial_RUNNING_elevator_state =
              SSM_TR_no_trans_SM2_RUNNING_elevator_state;
          }
          _22_SM2_reset_nxt_partial_RUNNING_elevator_state =
            tr_1_guard_ELEVATOR_DOWN_SM2_RUNNING_elevator_state;
          if (tr_1_guard_ELEVATOR_DOWN_SM2_RUNNING_elevator_state) {
            _23_SM2_state_nxt_partial_RUNNING_elevator_state =
              SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state;
          }
          else {
            _23_SM2_state_nxt_partial_RUNNING_elevator_state =
              SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state;
          }
          _2_oOpenDoor_partial = _26_oOpenDoor_partial;
          _3_oCloseDoor_partial = _25_oCloseDoor_partial;
          _4_oMotorCommand_partial = _24_oMotorCommand_partial;
          outC->SM2_state_nxt_RUNNING_elevator_state =
            _23_SM2_state_nxt_partial_RUNNING_elevator_state;
          outC->SM2_reset_nxt_RUNNING_elevator_state =
            _22_SM2_reset_nxt_partial_RUNNING_elevator_state;
          outC->SM2_fired_RUNNING_elevator_state =
            _21_SM2_fired_partial_RUNNING_elevator_state;
          break;
        case SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state :
          _31_oMotorCommand_partial = eMOTOR_STOP;
          _32_oCloseDoor_partial = kcg_false;
          _33_oOpenDoor_partial = kcg_false;
          tr_1_guard_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = kcg_true;
          if (tr_1_guard_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state) {
            _28_SM2_fired_partial_RUNNING_elevator_state =
              SSM_TR_ELEVATOR_CLIMB_SET_MOVEMENT_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          }
          else {
            _28_SM2_fired_partial_RUNNING_elevator_state =
              SSM_TR_no_trans_SM2_RUNNING_elevator_state;
          }
          _29_SM2_reset_nxt_partial_RUNNING_elevator_state =
            tr_1_guard_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          if (tr_1_guard_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state) {
            _30_SM2_state_nxt_partial_RUNNING_elevator_state =
              SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state;
          }
          else {
            _30_SM2_state_nxt_partial_RUNNING_elevator_state =
              SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
          }
          _2_oOpenDoor_partial = _33_oOpenDoor_partial;
          _3_oCloseDoor_partial = _32_oCloseDoor_partial;
          _4_oMotorCommand_partial = _31_oMotorCommand_partial;
          outC->SM2_state_nxt_RUNNING_elevator_state =
            _30_SM2_state_nxt_partial_RUNNING_elevator_state;
          outC->SM2_reset_nxt_RUNNING_elevator_state =
            _29_SM2_reset_nxt_partial_RUNNING_elevator_state;
          outC->SM2_fired_RUNNING_elevator_state =
            _28_SM2_fired_partial_RUNNING_elevator_state;
          break;
        case SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state :
          _47_oCloseDoor_partial = kcg_false;
          _48_oOpenDoor_partial = kcg_false;
          /* elevator_state:RUNNING:SM2:SET_MOVEMENT: */
          if (outC->SET_MOVEMENT_weakb_clock_SM2_RUNNING_elevator_state) {
            _37_SM2_fired_partial_RUNNING_elevator_state =
              outC->SM2_fired_strong_RUNNING_elevator_state;
            _36_SM2_reset_nxt_partial_RUNNING_elevator_state = kcg_false;
            _35_SM2_state_nxt_partial_RUNNING_elevator_state =
              SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state;
            _45_SM2_state_nxt_partial_RUNNING_elevator_state =
              _35_SM2_state_nxt_partial_RUNNING_elevator_state;
            _44_SM2_reset_nxt_partial_RUNNING_elevator_state =
              _36_SM2_reset_nxt_partial_RUNNING_elevator_state;
            _43_SM2_fired_partial_RUNNING_elevator_state =
              _37_SM2_fired_partial_RUNNING_elevator_state;
          }
          else {
            tr_2_guard_SET_MOVEMENT_SM2_RUNNING_elevator_state = outC->o_times_2_size;
            tr_1_guard_SET_MOVEMENT_SM2_RUNNING_elevator_state = outC->o_times_1_size;
            if (tr_1_guard_SET_MOVEMENT_SM2_RUNNING_elevator_state) {
              _40_SM2_fired_partial_RUNNING_elevator_state =
                SSM_TR_SET_MOVEMENT_ELEVATOR_DOWN_1_SET_MOVEMENT_SM2_RUNNING_elevator_state;
            }
            else if (tr_2_guard_SET_MOVEMENT_SM2_RUNNING_elevator_state) {
              _40_SM2_fired_partial_RUNNING_elevator_state =
                SSM_TR_SET_MOVEMENT_ELEVATOR_CLIMB_2_SET_MOVEMENT_SM2_RUNNING_elevator_state;
            }
            else {
              _40_SM2_fired_partial_RUNNING_elevator_state =
                SSM_TR_no_trans_SM2_RUNNING_elevator_state;
            }
            if (tr_1_guard_SET_MOVEMENT_SM2_RUNNING_elevator_state) {
              _39_SM2_reset_nxt_partial_RUNNING_elevator_state = kcg_true;
            }
            else {
              _39_SM2_reset_nxt_partial_RUNNING_elevator_state =
                tr_2_guard_SET_MOVEMENT_SM2_RUNNING_elevator_state;
            }
            if (tr_1_guard_SET_MOVEMENT_SM2_RUNNING_elevator_state) {
              _38_SM2_state_nxt_partial_RUNNING_elevator_state =
                SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state;
            }
            else if (tr_2_guard_SET_MOVEMENT_SM2_RUNNING_elevator_state) {
              _38_SM2_state_nxt_partial_RUNNING_elevator_state =
                SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state;
            }
            else {
              _38_SM2_state_nxt_partial_RUNNING_elevator_state =
                SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state;
            }
            _45_SM2_state_nxt_partial_RUNNING_elevator_state =
              _38_SM2_state_nxt_partial_RUNNING_elevator_state;
            _44_SM2_reset_nxt_partial_RUNNING_elevator_state =
              _39_SM2_reset_nxt_partial_RUNNING_elevator_state;
            _43_SM2_fired_partial_RUNNING_elevator_state =
              _40_SM2_fired_partial_RUNNING_elevator_state;
          }
          outC->MotorControl_clock_SET_MOVEMENT_SM2_RUNNING_elevator_state =
            iDestinationFloorNumber > _49_oFloorNumber_partial;
          /* elevator_state:RUNNING:SM2:SET_MOVEMENT:MotorControl: */
          if (outC->MotorControl_clock_SET_MOVEMENT_SM2_RUNNING_elevator_state) {
            outC->_L1_then_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state =
              eMOTOR_MOVEUP;
            _41_oMotorCommand_partial =
              outC->_L1_then_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state;
            _46_oMotorCommand_partial = _41_oMotorCommand_partial;
          }
          else {
            outC->_L1_else_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state =
              eMOTOR_MOVEDOWN;
            _42_oMotorCommand_partial =
              outC->_L1_else_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state;
            _46_oMotorCommand_partial = _42_oMotorCommand_partial;
          }
          _2_oOpenDoor_partial = _48_oOpenDoor_partial;
          _3_oCloseDoor_partial = _47_oCloseDoor_partial;
          _4_oMotorCommand_partial = _46_oMotorCommand_partial;
          outC->SM2_state_nxt_RUNNING_elevator_state =
            _45_SM2_state_nxt_partial_RUNNING_elevator_state;
          outC->SM2_reset_nxt_RUNNING_elevator_state =
            _44_SM2_reset_nxt_partial_RUNNING_elevator_state;
          outC->SM2_fired_RUNNING_elevator_state =
            _43_SM2_fired_partial_RUNNING_elevator_state;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
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
      tr_1_guard_STOPPED_elevator_state = iTravelRequest &
        (oFloorNumber_partial != iDestinationFloorNumber);
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
      outC->init2 = kcg_false;
      switch (outC->_3_SM2_clock_RUNNING_elevator_state) {
        case SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state :
          if (outC->SET_MOVEMENT_weakb_clock_SM2_RUNNING_elevator_state) {
          }
          else {
            outC->init1 = kcg_false;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      switch (outC->SM2_clock_RUNNING_elevator_state) {
        case SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state :
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
void ElevatorModes_init_Elevator(outC_ElevatorModes_Elevator *outC)
{
  outC->elevator_state_fired = SSM_TR_no_trans_elevator_state;
  outC->elevator_state_fired_strong = SSM_TR_no_trans_elevator_state;
  outC->elevator_state_state_act = SSM_st_STOPPED_elevator_state;
  outC->elevator_state_state_sel = SSM_st_STOPPED_elevator_state;
  outC->MotorControl_clock_SET_MOVEMENT_SM2_RUNNING_elevator_state = kcg_true;
  outC->SET_MOVEMENT_weakb_clock_SM2_RUNNING_elevator_state = kcg_true;
  outC->_L1_else_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state =
    eMOTOR_STOP;
  outC->_L1_then_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state =
    eMOTOR_STOP;
  outC->_L3_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = kcg_lit_int32(0);
  outC->_L2_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = kcg_lit_int32(0);
  outC->_L1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state = kcg_lit_int32(0);
  outC->_L3_ELEVATOR_DOWN_SM2_RUNNING_elevator_state = kcg_lit_int32(0);
  outC->_L2_ELEVATOR_DOWN_SM2_RUNNING_elevator_state = kcg_lit_int32(0);
  outC->_L1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state = kcg_lit_int32(0);
  outC->_L2_CLOSE_DOORS_SM2_RUNNING_elevator_state = kcg_true;
  outC->_L1_CLOSE_DOORS_SM2_RUNNING_elevator_state = kcg_true;
  outC->_3_SM2_clock_RUNNING_elevator_state =
    SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state;
  outC->SM2_clock_RUNNING_elevator_state =
    SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state;
  outC->SM2_state_sel_RUNNING_elevator_state =
    SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state;
  outC->SM2_state_act_RUNNING_elevator_state =
    SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state;
  outC->SM2_fired_strong_RUNNING_elevator_state =
    SSM_TR_no_trans_SM2_RUNNING_elevator_state;
  outC->SM2_fired_RUNNING_elevator_state =
    SSM_TR_no_trans_SM2_RUNNING_elevator_state;
  outC->_L1_STOPPED_elevator_state = kcg_true;
  outC->_L2_STOPPED_elevator_state = kcg_true;
  outC->_L3_STOPPED_elevator_state = eMOTOR_STOP;
  outC->v4_times_2_size = 0;
  outC->n_times_2_size = 0;
  outC->c_times_2_size = kcg_true;
  outC->o_times_2_size = kcg_true;
  outC->v4_times_1_size = 0;
  outC->n_times_1_size = 0;
  outC->c_times_1_size = kcg_true;
  outC->o_times_1_size = kcg_true;
  outC->v4_times_3_size = 0;
  outC->n_times_3_size = 0;
  outC->c_times_3_size = kcg_true;
  outC->o_times_3_size = kcg_true;
  outC->SM2_state_nxt_RUNNING_elevator_state =
    SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state;
  outC->SM2_reset_act_RUNNING_elevator_state = kcg_true;
  outC->SM2_reset_nxt_RUNNING_elevator_state = kcg_true;
  outC->v3_times_2_size = 0;
  outC->v3_times_1_size = 0;
  outC->v3_times_3_size = 0;
  outC->init2 = kcg_true;
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
void ElevatorModes_reset_Elevator(outC_ElevatorModes_Elevator *outC)
{
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->elevator_state_reset_act = kcg_false;
  outC->oFloorNumber = kcg_lit_int32(0);
  outC->elevator_state_reset_nxt = kcg_false;
  outC->elevator_state_state_nxt = SSM_st_STOPPED_elevator_state;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Elevator::ElevatorModes/
  @1: (times#3)
  @2: (times#1)
  @3: (times#2)
*/

/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** ElevatorModes_Elevator.c
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */

