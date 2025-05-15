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

DECL_SCOPE(scope_28, 1);
DECL_SCOPE(scope_27, 2);
DECL_SCOPE(scope_26, 1);
DECL_SCOPE(scope_25, 2);
DECL_SCOPE(scope_24, 1);
DECL_SCOPE(scope_23, 2);
DECL_SCOPE(scope_22, 1);
DECL_SCOPE(scope_21, 2);
DECL_SCOPE(scope_20, 11);
DECL_SCOPE(scope_19, 2);
DECL_SCOPE(scope_18, 1);
DECL_SCOPE(scope_17, 4);
DECL_SCOPE(scope_16, 1);
DECL_SCOPE(scope_15, 4);
DECL_SCOPE(scope_14, 1);
DECL_SCOPE(scope_13, 1);
DECL_SCOPE(scope_12, 3);
DECL_SCOPE(scope_11, 1);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 5);
DECL_SCOPE(scope_8, 10);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 2);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 4);
DECL_SCOPE(scope_3, 9);
DECL_SCOPE(scope_2, 7);
DECL_SCOPE(scope_1, 14);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_CLOSED_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_CLOSED_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_CLOSING_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_CLOSING_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_OPENED_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_OPENED_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_OPENING_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_OPENING_SM1; }
static int isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_SM2_RUNNING_elevator_state*)pHandle == SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state; }
static int isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_SM2_RUNNING_elevator_state*)pHandle == SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state; }
static int isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_init_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_SM2_RUNNING_elevator_state*)pHandle == SSM_st_init_SM2_RUNNING_elevator_state; }
static int isActive_SSM_ST_elevator_state_SSM_st_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_elevator_state*)pHandle == SSM_st_RUNNING_elevator_state; }
static int isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state(void* pHandle) { return *(SSM_ST_elevator_state*)pHandle == SSM_st_STOPPED_elevator_state; }
static int isActive_SSM_TR_SM1_SSM_TR_CLOSED_OPENING_1_CLOSED_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_CLOSED_OPENING_1_CLOSED_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_CLOSING_CLOSED_1_CLOSING_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_CLOSING_CLOSED_1_CLOSING_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_OPENED_CLOSING_1_OPENED_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_OPENED_CLOSING_1_OPENED_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_OPENING_OPENED_1_OPENING_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_OPENING_OPENED_1_OPENING_SM1; }
static int isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_CLIMB_init_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_TR_SM2_RUNNING_elevator_state*)pHandle == SSM_TR_ELEVATOR_CLIMB_init_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state; }
static int isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_DOWN_init_1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_TR_SM2_RUNNING_elevator_state*)pHandle == SSM_TR_ELEVATOR_DOWN_init_1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state; }
static int isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_init_ELEVATOR_CLIMB_2_init_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_TR_SM2_RUNNING_elevator_state*)pHandle == SSM_TR_init_ELEVATOR_CLIMB_2_init_SM2_RUNNING_elevator_state; }
static int isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_init_ELEVATOR_DOWN_1_init_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_TR_SM2_RUNNING_elevator_state*)pHandle == SSM_TR_init_ELEVATOR_DOWN_1_init_SM2_RUNNING_elevator_state; }
static int isActive_SSM_TR_elevator_state_SSM_TR_RUNNING_STOPPED_1_RUNNING_elevator_state(void* pHandle) { return *(SSM_TR_elevator_state*)pHandle == SSM_TR_RUNNING_STOPPED_1_RUNNING_elevator_state; }
static int isActive_SSM_TR_elevator_state_SSM_TR_STOPPED_RUNNING_1_STOPPED_elevator_state(void* pHandle) { return *(SSM_TR_elevator_state*)pHandle == SSM_TR_STOPPED_RUNNING_1_STOPPED_elevator_state; }
static int isActive_kcg_bool_kcg_false(void* pHandle) { return *(kcg_bool*)pHandle == kcg_false; }
static int isActive_kcg_bool_kcg_true(void* pHandle) { return *(kcg_bool*)pHandle == kcg_true; }

/* mapping definition */


const MappingEntry scope_28_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM1_SSM_TR_OPENED_CLOSING_1_OPENED_SM1, NULL, 1, 0 }
};
const MappingScope scope_28 = {
    "DoorModes/ DoorModesSM1:OPENED:<1",
    scope_28_entries, 1
};

const MappingEntry scope_27_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM1_SSM_TR_OPENED_CLOSING_1_OPENED_SM1, &scope_28, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(tDoorStatusEnum), offsetof(outC_DoorModes, _L1_OPENED_SM1), &_Type_tDoorStatusEnum_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_OPENED_SM1, NULL, 1, 1 }
};
const MappingScope scope_27 = {
    "DoorModes/ DoorModesSM1:OPENED:",
    scope_27_entries, 2
};

const MappingEntry scope_26_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM1_SSM_TR_OPENING_OPENED_1_OPENING_SM1, NULL, 1, 0 }
};
const MappingScope scope_26 = {
    "DoorModes/ DoorModesSM1:OPENING:<1",
    scope_26_entries, 1
};

const MappingEntry scope_25_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM1_SSM_TR_OPENING_OPENED_1_OPENING_SM1, &scope_26, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(tDoorStatusEnum), offsetof(outC_DoorModes, _L1_OPENING_SM1), &_Type_tDoorStatusEnum_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_OPENING_SM1, NULL, 1, 1 }
};
const MappingScope scope_25 = {
    "DoorModes/ DoorModesSM1:OPENING:",
    scope_25_entries, 2
};

const MappingEntry scope_24_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM1_SSM_TR_CLOSING_CLOSED_1_CLOSING_SM1, NULL, 1, 0 }
};
const MappingScope scope_24 = {
    "DoorModes/ DoorModesSM1:CLOSING:<1",
    scope_24_entries, 1
};

const MappingEntry scope_23_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM1_SSM_TR_CLOSING_CLOSED_1_CLOSING_SM1, &scope_24, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(tDoorStatusEnum), offsetof(outC_DoorModes, _L1_CLOSING_SM1), &_Type_tDoorStatusEnum_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_CLOSING_SM1, NULL, 1, 1 }
};
const MappingScope scope_23 = {
    "DoorModes/ DoorModesSM1:CLOSING:",
    scope_23_entries, 2
};

const MappingEntry scope_22_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM1_SSM_TR_CLOSED_OPENING_1_CLOSED_SM1, NULL, 1, 0 }
};
const MappingScope scope_22 = {
    "DoorModes/ DoorModesSM1:CLOSED:<1",
    scope_22_entries, 1
};

const MappingEntry scope_21_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM1_SSM_TR_CLOSED_OPENING_1_CLOSED_SM1, &scope_22, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(tDoorStatusEnum), offsetof(outC_DoorModes, _L4_CLOSED_SM1), &_Type_tDoorStatusEnum_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_CLOSED_SM1, NULL, 1, 1 }
};
const MappingScope scope_21 = {
    "DoorModes/ DoorModesSM1:CLOSED:",
    scope_21_entries, 2
};

const MappingEntry scope_20_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_DoorModes, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_DoorModes, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_DoorModes, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_DoorModes, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_DoorModes, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_DoorModes, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_DoorModes, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "CLOSED:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_CLOSED_SM1, &scope_21, 1, 7 },
    /* 8 */ { MAP_STATE, "CLOSING:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_CLOSING_SM1, &scope_23, 1, 8 },
    /* 9 */ { MAP_STATE, "OPENING:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_OPENING_SM1, &scope_25, 1, 9 },
    /* 10 */ { MAP_STATE, "OPENED:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_OPENED_SM1, &scope_27, 1, 10 }
};
const MappingScope scope_20 = {
    "DoorModes/ DoorModesSM1:",
    scope_20_entries, 11
};

const MappingEntry scope_19_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "oDoorStatus", NULL, sizeof(tDoorStatusEnum), offsetof(outC_DoorModes, oDoorStatus), &_Type_tDoorStatusEnum_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 1 }
};
const MappingScope scope_19 = {
    "DoorModes/ DoorModes",
    scope_19_entries, 2
};

const MappingEntry scope_18_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_8_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_DOWN_init_1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_18 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:ELEVATOR_DOWN:<1",
    scope_18_entries, 1
};

const MappingEntry scope_17_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_8_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_DOWN_init_1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, &scope_18, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes, _L1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_2_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes, _L2_ELEVATOR_DOWN_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_2_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes, _L3_ELEVATOR_DOWN_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_2_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 3 }
};
const MappingScope scope_17 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:ELEVATOR_DOWN:",
    scope_17_entries, 4
};

const MappingEntry scope_16_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_8_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_CLIMB_init_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_16 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:ELEVATOR_CLIMB:<1",
    scope_16_entries, 1
};

const MappingEntry scope_15_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_8_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_CLIMB_init_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, &scope_16, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes, _L1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_2_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes, _L2_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_2_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes, _L3_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_2_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 3 }
};
const MappingScope scope_15 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:ELEVATOR_CLIMB:",
    scope_15_entries, 4
};

const MappingEntry scope_14_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(tMotorCommand), offsetof(outC_ElevatorModes, _L1_then_MotorControl_init_SM2_RUNNING_elevator_state), &_Type_tMotorCommand_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_14 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:init:MotorControl:then:",
    scope_14_entries, 1
};

const MappingEntry scope_13_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(tMotorCommand), offsetof(outC_ElevatorModes, _L1_else_MotorControl_init_SM2_RUNNING_elevator_state), &_Type_tMotorCommand_Utils, &scope_12_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 }
};
const MappingScope scope_13 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:init:MotorControl:else:",
    scope_13_entries, 1
};

const MappingEntry scope_12_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes, MotorControl_clock_init_SM2_RUNNING_elevator_state), &_Type_kcg_bool_Utils, &scope_2_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_init_SM2_RUNNING_elevator_state, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_kcg_bool_kcg_false, &scope_13, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_kcg_bool_kcg_true, &scope_14, 1, 2 }
};
const MappingScope scope_12 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:init:MotorControl:",
    scope_12_entries, 3
};

const MappingEntry scope_11_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_8_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_init_ELEVATOR_CLIMB_2_init_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_11 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:init:<2",
    scope_11_entries, 1
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_8_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_init_ELEVATOR_DOWN_1_init_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:init:<1",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_8_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_init_ELEVATOR_DOWN_1_init_SM2_RUNNING_elevator_state, &scope_10, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_8_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_init_ELEVATOR_CLIMB_2_init_SM2_RUNNING_elevator_state, &scope_11, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes, _L1_init_SM2_RUNNING_elevator_state), &_Type_kcg_bool_Utils, &scope_2_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_init_SM2_RUNNING_elevator_state, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes, _L2_init_SM2_RUNNING_elevator_state), &_Type_kcg_bool_Utils, &scope_2_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_init_SM2_RUNNING_elevator_state, NULL, 1, 3 },
    /* 4 */ { MAP_IF, "MotorControl:", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 4 }
};
const MappingScope scope_9 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:init:",
    scope_9_entries, 5
};

const MappingEntry scope_8_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes, SM2_state_act_RUNNING_elevator_state), &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes, SM2_reset_act_RUNNING_elevator_state), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes, SM2_state_nxt_RUNNING_elevator_state), &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes, SM2_reset_nxt_RUNNING_elevator_state), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes, SM2_state_sel_RUNNING_elevator_state), &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes, SM2_fired_strong_RUNNING_elevator_state), &_Type_SSM_TR_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes, SM2_fired_RUNNING_elevator_state), &_Type_SSM_TR_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "init:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_init_SM2_RUNNING_elevator_state, &scope_9, 1, 7 },
    /* 8 */ { MAP_STATE, "ELEVATOR_CLIMB:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, &scope_15, 1, 8 },
    /* 9 */ { MAP_STATE, "ELEVATOR_DOWN:", NULL, 0, 0, NULL, &scope_8_entries[0], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, &scope_17, 1, 9 }
};
const MappingScope scope_8 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:SM2:",
    scope_8_entries, 10
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_RUNNING_STOPPED_1_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:<1",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_RUNNING_STOPPED_1_RUNNING_elevator_state, &scope_7, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_8, 1, 1 }
};
const MappingScope scope_6 = {
    "ElevatorModes/ ElevatorModeselevator_state:RUNNING:",
    scope_6_entries, 2
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_STOPPED_RUNNING_1_STOPPED_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_5 = {
    "ElevatorModes/ ElevatorModeselevator_state:STOPPED:<1",
    scope_5_entries, 1
};

const MappingEntry scope_4_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_STOPPED_RUNNING_1_STOPPED_elevator_state, &scope_5, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes, _L1_STOPPED_elevator_state), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes, _L2_STOPPED_elevator_state), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(tMotorCommand), offsetof(outC_ElevatorModes, _L3_STOPPED_elevator_state), &_Type_tMotorCommand_Utils, &scope_3_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, NULL, 1, 3 }
};
const MappingScope scope_4 = {
    "ElevatorModes/ ElevatorModeselevator_state:STOPPED:",
    scope_4_entries, 4
};

const MappingEntry scope_3_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_elevator_state), offsetof(outC_ElevatorModes, elevator_state_state_act), &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes, elevator_state_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_elevator_state), offsetof(outC_ElevatorModes, elevator_state_state_nxt), &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes, elevator_state_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_elevator_state), offsetof(outC_ElevatorModes, elevator_state_state_sel), &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_elevator_state), offsetof(outC_ElevatorModes, elevator_state_fired_strong), &_Type_SSM_TR_elevator_state_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_elevator_state), offsetof(outC_ElevatorModes, elevator_state_fired), &_Type_SSM_TR_elevator_state_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "STOPPED:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, &scope_4, 1, 7 },
    /* 8 */ { MAP_STATE, "RUNNING:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_elevator_state_SSM_st_RUNNING_elevator_state, &scope_6, 1, 8 }
};
const MappingScope scope_3 = {
    "ElevatorModes/ ElevatorModeselevator_state:",
    scope_3_entries, 9
};

const MappingEntry scope_2_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "oFloorNumber", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes, oFloorNumber), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "oOpenDoor", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes, oOpenDoor), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "oCloseDoor", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes, oCloseDoor), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "oMotorCommand", NULL, sizeof(tMotorCommand), offsetof(outC_ElevatorModes, oMotorCommand), &_Type_tMotorCommand_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_AUTOMATON, "elevator_state:", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 4 },
    /* 5 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes, SM2_clock_RUNNING_elevator_state), &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, &scope_2_entries[6], isActive_SSM_ST_elevator_state_SSM_st_RUNNING_elevator_state, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(SSM_ST_elevator_state), offsetof(outC_ElevatorModes, elevator_state_state_act), &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 6 }
};
const MappingScope scope_2 = {
    "ElevatorModes/ ElevatorModes",
    scope_2_entries, 7
};

const MappingEntry scope_1_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "oDoorStatus", NULL, sizeof(tDoorStatusEnum), (size_t)&outputs_ctx.oDoorStatus, &_Type_tDoorStatusEnum_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "oFloorNumber", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.oFloorNumber, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "oMotorCommand", NULL, sizeof(tMotorCommand), (size_t)&outputs_ctx.oMotorCommand, &_Type_tMotorCommand_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "iDestinationFloorNumber", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.iDestinationFloorNumber, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_INPUT, "iTravelRequest", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.iTravelRequest, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L9, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(tDoorStatusEnum), (size_t)&outputs_ctx._L3, &_Type_tDoorStatusEnum_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L13, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L14", NULL, sizeof(tMotorCommand), (size_t)&outputs_ctx._L14, &_Type_tMotorCommand_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "ElevatorModes 1", NULL, sizeof(outC_ElevatorModes), (size_t)&outputs_ctx.Context_ElevatorModes_1, NULL, NULL, NULL, &scope_2, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "DoorModes 1", NULL, sizeof(outC_DoorModes), (size_t)&outputs_ctx.Context_DoorModes_1, NULL, NULL, NULL, &scope_19, 1, 13 }
};
const MappingScope scope_1 = {
    "ElevatorController/ ElevatorController",
    scope_1_entries, 14
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "ElevatorController", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
