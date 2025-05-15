/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/Dylan/Desktop/elevator-controller-main/Simulation/config.txt
** Generation date: 2025-05-15T11:31:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DoorModes.h"

/* DoorModes/ */
void DoorModes(
  /* iOpenDoor/ */
  kcg_bool iOpenDoor,
  /* iCloseDoor/ */
  kcg_bool iCloseDoor,
  outC_DoorModes *outC)
{
  /* oDoorStatus/ */
  tDoorStatusEnum oDoorStatus_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* oDoorStatus/ */
  tDoorStatusEnum _1_oDoorStatus_partial;
  /* SM1: */
  SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _4_SM1_fired_partial;
  /* oDoorStatus/ */
  tDoorStatusEnum _5_oDoorStatus_partial;
  /* SM1: */
  SSM_ST_SM1 _6_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _7_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _8_SM1_fired_partial;
  /* oDoorStatus/ */
  tDoorStatusEnum _9_oDoorStatus_partial;
  /* SM1: */
  SSM_ST_SM1 _10_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _11_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _12_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:CLOSED:<1> */
  kcg_bool tr_1_guard_CLOSED_SM1;
  /* SM1: */
  SSM_ST_SM1 _13_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _15_SM1_fired_strong_partial;
  /* SM1:CLOSING:<1> */
  kcg_bool tr_1_guard_CLOSING_SM1;
  /* SM1: */
  SSM_ST_SM1 _16_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _17_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _18_SM1_fired_strong_partial;
  /* SM1:OPENING:<1> */
  kcg_bool tr_1_guard_OPENING_SM1;
  /* SM1: */
  SSM_ST_SM1 _19_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _20_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _21_SM1_fired_strong_partial;
  /* SM1:OPENED:<1> */
  kcg_bool tr_1_guard_OPENED_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_CLOSING_SM1 :
      outC->n_times_1_size = 10;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_OPENED_SM1 :
      tr_1_guard_OPENED_SM1 = iCloseDoor == kcg_true;
      if (tr_1_guard_OPENED_SM1) {
        _19_SM1_state_act_partial = SSM_st_CLOSING_SM1;
      }
      else {
        _19_SM1_state_act_partial = SSM_st_OPENED_SM1;
      }
      outC->SM1_state_act = _19_SM1_state_act_partial;
      if (tr_1_guard_OPENED_SM1) {
        _21_SM1_fired_strong_partial = SSM_TR_OPENED_CLOSING_1_OPENED_SM1;
      }
      else {
        _21_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _21_SM1_fired_strong_partial;
      break;
    case SSM_st_OPENING_SM1 :
      outC->n_times_2_size = 10;
      if (SM1_reset_prv) {
        outC->init1 = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init1) {
        outC->v4_times_2_size = outC->n_times_2_size;
      }
      else {
        outC->v4_times_2_size = outC->v3_times_2_size;
      }
      outC->c_times_2_size = kcg_true;
      /* @2/_/v3= */
      if (outC->v4_times_2_size < 0) {
        outC->v3_times_2_size = outC->v4_times_2_size;
      }
      else /* @2/_/v3= */
      if (outC->c_times_2_size) {
        outC->v3_times_2_size = outC->v4_times_2_size - 1;
      }
      else {
        outC->v3_times_2_size = outC->v4_times_2_size;
      }
      outC->o_times_2_size = outC->c_times_2_size & (outC->v3_times_2_size == 0);
      tr_1_guard_OPENING_SM1 = outC->o_times_2_size;
      if (tr_1_guard_OPENING_SM1) {
        _16_SM1_state_act_partial = SSM_st_OPENED_SM1;
      }
      else {
        _16_SM1_state_act_partial = SSM_st_OPENING_SM1;
      }
      outC->SM1_state_act = _16_SM1_state_act_partial;
      if (tr_1_guard_OPENING_SM1) {
        _18_SM1_fired_strong_partial = SSM_TR_OPENING_OPENED_1_OPENING_SM1;
      }
      else {
        _18_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _18_SM1_fired_strong_partial;
      break;
    case SSM_st_CLOSING_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_1_size = outC->n_times_1_size;
      }
      else {
        outC->v4_times_1_size = outC->v3_times_1_size;
      }
      outC->c_times_1_size = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_1_size < 0) {
        outC->v3_times_1_size = outC->v4_times_1_size;
      }
      else /* @1/_/v3= */
      if (outC->c_times_1_size) {
        outC->v3_times_1_size = outC->v4_times_1_size - 1;
      }
      else {
        outC->v3_times_1_size = outC->v4_times_1_size;
      }
      outC->o_times_1_size = outC->c_times_1_size & (outC->v3_times_1_size == 0);
      tr_1_guard_CLOSING_SM1 = outC->o_times_1_size;
      if (tr_1_guard_CLOSING_SM1) {
        _13_SM1_state_act_partial = SSM_st_CLOSED_SM1;
      }
      else {
        _13_SM1_state_act_partial = SSM_st_CLOSING_SM1;
      }
      outC->SM1_state_act = _13_SM1_state_act_partial;
      if (tr_1_guard_CLOSING_SM1) {
        _15_SM1_fired_strong_partial = SSM_TR_CLOSING_CLOSED_1_CLOSING_SM1;
      }
      else {
        _15_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _15_SM1_fired_strong_partial;
      break;
    case SSM_st_CLOSED_SM1 :
      tr_1_guard_CLOSED_SM1 = iOpenDoor == kcg_true;
      if (tr_1_guard_CLOSED_SM1) {
        SM1_state_act_partial = SSM_st_OPENING_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_CLOSED_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_CLOSED_SM1) {
        SM1_fired_strong_partial = SSM_TR_CLOSED_OPENING_1_CLOSED_SM1;
      }
      else {
        SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_OPENED_SM1 :
      _12_SM1_fired_partial = outC->SM1_fired_strong;
      _11_SM1_reset_nxt_partial = kcg_false;
      _10_SM1_state_nxt_partial = SSM_st_OPENED_SM1;
      outC->_L1_OPENED_SM1 = eDOOR_OPENED;
      _9_oDoorStatus_partial = outC->_L1_OPENED_SM1;
      outC->oDoorStatus = _9_oDoorStatus_partial;
      outC->SM1_state_nxt = _10_SM1_state_nxt_partial;
      break;
    case SSM_st_OPENING_SM1 :
      _8_SM1_fired_partial = outC->SM1_fired_strong;
      _7_SM1_reset_nxt_partial = kcg_false;
      _6_SM1_state_nxt_partial = SSM_st_OPENING_SM1;
      outC->_L1_OPENING_SM1 = eDOOR_OPENING;
      _5_oDoorStatus_partial = outC->_L1_OPENING_SM1;
      outC->oDoorStatus = _5_oDoorStatus_partial;
      outC->SM1_state_nxt = _6_SM1_state_nxt_partial;
      break;
    case SSM_st_CLOSING_SM1 :
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_CLOSING_SM1;
      outC->_L1_CLOSING_SM1 = eDOOR_CLOSING;
      _1_oDoorStatus_partial = outC->_L1_CLOSING_SM1;
      outC->oDoorStatus = _1_oDoorStatus_partial;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_CLOSED_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_CLOSED_SM1;
      outC->_L4_CLOSED_SM1 = eDOOR_CLOSED;
      oDoorStatus_partial = outC->_L4_CLOSED_SM1;
      outC->oDoorStatus = oDoorStatus_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_OPENED_SM1 :
      outC->SM1_reset_nxt = _11_SM1_reset_nxt_partial;
      outC->SM1_fired = _12_SM1_fired_partial;
      break;
    case SSM_st_OPENING_SM1 :
      outC->SM1_reset_nxt = _7_SM1_reset_nxt_partial;
      outC->SM1_fired = _8_SM1_fired_partial;
      break;
    case SSM_st_CLOSING_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_CLOSED_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_OPENED_SM1 :
      _20_SM1_reset_act_partial = tr_1_guard_OPENED_SM1;
      outC->SM1_reset_act = _20_SM1_reset_act_partial;
      break;
    case SSM_st_OPENING_SM1 :
      _17_SM1_reset_act_partial = tr_1_guard_OPENING_SM1;
      outC->SM1_reset_act = _17_SM1_reset_act_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_CLOSING_SM1 :
      _14_SM1_reset_act_partial = tr_1_guard_CLOSING_SM1;
      outC->SM1_reset_act = _14_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_CLOSED_SM1 :
      SM1_reset_act_partial = tr_1_guard_CLOSED_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void DoorModes_init(outC_DoorModes *outC)
{
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_CLOSED_SM1;
  outC->SM1_state_sel = SSM_st_CLOSED_SM1;
  outC->_L1_OPENED_SM1 = eDOOR_CLOSED;
  outC->_L1_OPENING_SM1 = eDOOR_CLOSED;
  outC->_L1_CLOSING_SM1 = eDOOR_CLOSED;
  outC->_L4_CLOSED_SM1 = eDOOR_CLOSED;
  outC->v4_times_2_size = 0;
  outC->n_times_2_size = 0;
  outC->c_times_2_size = kcg_true;
  outC->o_times_2_size = kcg_true;
  outC->v4_times_1_size = 0;
  outC->n_times_1_size = 0;
  outC->c_times_1_size = kcg_true;
  outC->o_times_1_size = kcg_true;
  outC->v3_times_2_size = 0;
  outC->v3_times_1_size = 0;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->oDoorStatus = eDOOR_CLOSED;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_CLOSED_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DoorModes_reset(outC_DoorModes *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_CLOSED_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: DoorModes/
  @2: (times#2)
  @1: (times#1)
*/

/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** DoorModes.c
** Generation date: 2025-05-15T11:31:51
*************************************************************$ */

