/* Elevator_mapping.c */

#include "Elevator_type.h"
#include "Elevator_interface.h"
#include "Elevator_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_19, 1);
DECL_SCOPE(scope_18, 3);
DECL_SCOPE(scope_17, 1);
DECL_SCOPE(scope_16, 4);
DECL_SCOPE(scope_15, 1);
DECL_SCOPE(scope_14, 4);
DECL_SCOPE(scope_13, 1);
DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 3);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 1);
DECL_SCOPE(scope_8, 3);
DECL_SCOPE(scope_7, 11);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 2);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 4);
DECL_SCOPE(scope_2, 9);
DECL_SCOPE(scope_1, 9);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_SM2_RUNNING_elevator_state*)pHandle == SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state; }
static int isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_SM2_RUNNING_elevator_state*)pHandle == SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state; }
static int isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_SM2_RUNNING_elevator_state*)pHandle == SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state; }
static int isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_SM2_RUNNING_elevator_state*)pHandle == SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state; }
static int isActive_SSM_ST_elevator_state_SSM_st_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_elevator_state*)pHandle == SSM_st_RUNNING_elevator_state; }
static int isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state(void* pHandle) { return *(SSM_ST_elevator_state*)pHandle == SSM_st_STOPPED_elevator_state; }
static int isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_CLOSE_DOORS_SET_MOVEMENT_1_CLOSE_DOORS_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_TR_SM2_RUNNING_elevator_state*)pHandle == SSM_TR_CLOSE_DOORS_SET_MOVEMENT_1_CLOSE_DOORS_SM2_RUNNING_elevator_state; }
static int isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_CLIMB_SET_MOVEMENT_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_TR_SM2_RUNNING_elevator_state*)pHandle == SSM_TR_ELEVATOR_CLIMB_SET_MOVEMENT_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state; }
static int isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_DOWN_SET_MOVEMENT_1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_TR_SM2_RUNNING_elevator_state*)pHandle == SSM_TR_ELEVATOR_DOWN_SET_MOVEMENT_1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state; }
static int isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_SET_MOVEMENT_ELEVATOR_CLIMB_2_SET_MOVEMENT_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_TR_SM2_RUNNING_elevator_state*)pHandle == SSM_TR_SET_MOVEMENT_ELEVATOR_CLIMB_2_SET_MOVEMENT_SM2_RUNNING_elevator_state; }
static int isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_SET_MOVEMENT_ELEVATOR_DOWN_1_SET_MOVEMENT_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_TR_SM2_RUNNING_elevator_state*)pHandle == SSM_TR_SET_MOVEMENT_ELEVATOR_DOWN_1_SET_MOVEMENT_SM2_RUNNING_elevator_state; }
static int isActive_SSM_TR_elevator_state_SSM_TR_RUNNING_STOPPED_1_RUNNING_elevator_state(void* pHandle) { return *(SSM_TR_elevator_state*)pHandle == SSM_TR_RUNNING_STOPPED_1_RUNNING_elevator_state; }
static int isActive_SSM_TR_elevator_state_SSM_TR_STOPPED_RUNNING_1_STOPPED_elevator_state(void* pHandle) { return *(SSM_TR_elevator_state*)pHandle == SSM_TR_STOPPED_RUNNING_1_STOPPED_elevator_state; }
static int isActive_kcg_bool_kcg_false(void* pHandle) { return *(kcg_bool*)pHandle == kcg_false; }
static int isActive_kcg_bool_kcg_true(void* pHandle) { return *(kcg_bool*)pHandle == kcg_true; }

/* mapping definition */


const MappingEntry scope_19_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_7_entries[5], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_CLOSE_DOORS_SET_MOVEMENT_1_CLOSE_DOORS_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_19 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:CLOSE_DOORS:<1",
    scope_19_entries, 1
};

const MappingEntry scope_18_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_7_entries[5], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_CLOSE_DOORS_SET_MOVEMENT_1_CLOSE_DOORS_SM2_RUNNING_elevator_state, &scope_19, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_CLOSE_DOORS_SM2_RUNNING_elevator_state, &_Type_kcg_bool_Utils, &scope_1_entries[7], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_CLOSE_DOORS_SM2_RUNNING_elevator_state, &_Type_kcg_bool_Utils, &scope_1_entries[7], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state, NULL, 1, 2 }
};
const MappingScope scope_18 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:CLOSE_DOORS:",
    scope_18_entries, 3
};

const MappingEntry scope_17_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_7_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_DOWN_SET_MOVEMENT_1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_17 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:ELEVATOR_DOWN:<1",
    scope_17_entries, 1
};

const MappingEntry scope_16_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_7_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_DOWN_SET_MOVEMENT_1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, &scope_17, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, &_Type_kcg_int32_Utils, &scope_1_entries[7], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, &_Type_kcg_int32_Utils, &scope_1_entries[7], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L3_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, &_Type_kcg_int32_Utils, &scope_1_entries[7], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 3 }
};
const MappingScope scope_16 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:ELEVATOR_DOWN:",
    scope_16_entries, 4
};

const MappingEntry scope_15_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_7_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_CLIMB_SET_MOVEMENT_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_15 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:ELEVATOR_CLIMB:<1",
    scope_15_entries, 1
};

const MappingEntry scope_14_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_7_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_CLIMB_SET_MOVEMENT_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, &scope_15, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, &_Type_kcg_int32_Utils, &scope_1_entries[7], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, &_Type_kcg_int32_Utils, &scope_1_entries[7], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L3_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, &_Type_kcg_int32_Utils, &scope_1_entries[7], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 3 }
};
const MappingScope scope_14 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:ELEVATOR_CLIMB:",
    scope_14_entries, 4
};

const MappingEntry scope_13_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(tMotorCommand), (size_t)&outputs_ctx._L1_then_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state, &_Type_tMotorCommand_Utils, &scope_11_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_13 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:SET_MOVEMENT:MotorControl:then:",
    scope_13_entries, 1
};

const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(tMotorCommand), (size_t)&outputs_ctx._L1_else_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state, &_Type_tMotorCommand_Utils, &scope_11_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 }
};
const MappingScope scope_12 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:SET_MOVEMENT:MotorControl:else:",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.MotorControl_clock_SET_MOVEMENT_SM2_RUNNING_elevator_state, &_Type_kcg_bool_Utils, &scope_1_entries[7], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_kcg_bool_kcg_false, &scope_12, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_kcg_bool_kcg_true, &scope_13, 1, 2 }
};
const MappingScope scope_11 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:SET_MOVEMENT:MotorControl:",
    scope_11_entries, 3
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_7_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_SET_MOVEMENT_ELEVATOR_CLIMB_2_SET_MOVEMENT_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:SET_MOVEMENT:<2",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_7_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_SET_MOVEMENT_ELEVATOR_DOWN_1_SET_MOVEMENT_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_9 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:SET_MOVEMENT:<1",
    scope_9_entries, 1
};

const MappingEntry scope_8_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_7_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_SET_MOVEMENT_ELEVATOR_DOWN_1_SET_MOVEMENT_SM2_RUNNING_elevator_state, &scope_9, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_7_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_SET_MOVEMENT_ELEVATOR_CLIMB_2_SET_MOVEMENT_SM2_RUNNING_elevator_state, &scope_10, 1, 1 },
    /* 2 */ { MAP_IF, "MotorControl:", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 2 }
};
const MappingScope scope_8 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:SET_MOVEMENT:",
    scope_8_entries, 3
};

const MappingEntry scope_7_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), (size_t)&outputs_ctx.SM2_state_act_RUNNING_elevator_state, &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM2_reset_act_RUNNING_elevator_state, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), (size_t)&outputs_ctx.SM2_state_nxt_RUNNING_elevator_state, &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM2_reset_nxt_RUNNING_elevator_state, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), (size_t)&outputs_ctx.SM2_state_sel_RUNNING_elevator_state, &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM2_RUNNING_elevator_state), (size_t)&outputs_ctx.SM2_fired_strong_RUNNING_elevator_state, &_Type_SSM_TR_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM2_RUNNING_elevator_state), (size_t)&outputs_ctx.SM2_fired_RUNNING_elevator_state, &_Type_SSM_TR_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "SET_MOVEMENT:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state, &scope_8, 1, 7 },
    /* 8 */ { MAP_STATE, "ELEVATOR_CLIMB:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, &scope_14, 1, 8 },
    /* 9 */ { MAP_STATE, "ELEVATOR_DOWN:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, &scope_16, 1, 9 },
    /* 10 */ { MAP_STATE, "CLOSE_DOORS:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state, &scope_18, 1, 10 }
};
const MappingScope scope_7 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:",
    scope_7_entries, 11
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_RUNNING_STOPPED_1_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:<1",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_RUNNING_STOPPED_1_RUNNING_elevator_state, &scope_6, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_5 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:",
    scope_5_entries, 2
};

const MappingEntry scope_4_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_STOPPED_RUNNING_1_STOPPED_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_4 = {
    "ElevatorModes/ ElevatorModeselevator_state:STOPPED:<1",
    scope_4_entries, 1
};

const MappingEntry scope_3_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_STOPPED_RUNNING_1_STOPPED_elevator_state, &scope_4, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_STOPPED_elevator_state, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_STOPPED_elevator_state, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(tMotorCommand), (size_t)&outputs_ctx._L3_STOPPED_elevator_state, &_Type_tMotorCommand_Utils, &scope_2_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, NULL, 1, 3 }
};
const MappingScope scope_3 = {
    "ElevatorModes/ ElevatorModeselevator_state:STOPPED:",
    scope_3_entries, 4
};

const MappingEntry scope_2_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_elevator_state), (size_t)&outputs_ctx.elevator_state_state_act, &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.elevator_state_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_elevator_state), (size_t)&outputs_ctx.elevator_state_state_nxt, &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.elevator_state_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_elevator_state), (size_t)&outputs_ctx.elevator_state_state_sel, &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_elevator_state), (size_t)&outputs_ctx.elevator_state_fired_strong, &_Type_SSM_TR_elevator_state_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_elevator_state), (size_t)&outputs_ctx.elevator_state_fired, &_Type_SSM_TR_elevator_state_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "STOPPED:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, &scope_3, 1, 7 },
    /* 8 */ { MAP_STATE, "RUNNING:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_elevator_state_SSM_st_RUNNING_elevator_state, &scope_5, 1, 8 }
};
const MappingScope scope_2 = {
    "ElevatorModes/ ElevatorModeselevator_state:",
    scope_2_entries, 9
};

const MappingEntry scope_1_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "oFloorNumber", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.oFloorNumber, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "oOpenDoor", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.oOpenDoor, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "oCloseDoor", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.oCloseDoor, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "oMotorCommand", NULL, sizeof(tMotorCommand), (size_t)&outputs_ctx.oMotorCommand, &_Type_tMotorCommand_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_INPUT, "iDestinationFloorNumber", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.iDestinationFloorNumber, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_INPUT, "iTravelRequest", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.iTravelRequest, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_AUTOMATON, "elevator_state:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 6 },
    /* 7 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), (size_t)&outputs_ctx._3_SM2_clock_RUNNING_elevator_state, &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, &scope_1_entries[8], isActive_SSM_ST_elevator_state_SSM_st_RUNNING_elevator_state, NULL, 0, 7 },
    /* 8 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(SSM_ST_elevator_state), (size_t)&outputs_ctx.elevator_state_state_act, &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 8 }
};
const MappingScope scope_1 = {
    "ElevatorModes/ ElevatorModes",
    scope_1_entries, 9
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "ElevatorModes", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
