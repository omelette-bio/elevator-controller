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

DECL_SCOPE(scope_35, 5);
DECL_SCOPE(scope_34, 12);
DECL_SCOPE(scope_33, 1);
DECL_SCOPE(scope_32, 2);
DECL_SCOPE(scope_31, 1);
DECL_SCOPE(scope_30, 1);
DECL_SCOPE(scope_29, 3);
DECL_SCOPE(scope_28, 1);
DECL_SCOPE(scope_27, 1);
DECL_SCOPE(scope_26, 3);
DECL_SCOPE(scope_25, 1);
DECL_SCOPE(scope_24, 2);
DECL_SCOPE(scope_23, 11);
DECL_SCOPE(scope_22, 2);
DECL_SCOPE(scope_21, 1);
DECL_SCOPE(scope_20, 3);
DECL_SCOPE(scope_19, 1);
DECL_SCOPE(scope_18, 4);
DECL_SCOPE(scope_17, 1);
DECL_SCOPE(scope_16, 4);
DECL_SCOPE(scope_15, 1);
DECL_SCOPE(scope_14, 1);
DECL_SCOPE(scope_13, 3);
DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 1);
DECL_SCOPE(scope_10, 3);
DECL_SCOPE(scope_9, 11);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 2);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 4);
DECL_SCOPE(scope_4, 9);
DECL_SCOPE(scope_3, 7);
DECL_SCOPE(scope_2, 12);
DECL_SCOPE(scope_1, 11);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_CLOSED_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_CLOSED_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_CLOSING_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_CLOSING_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_OPENED_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_OPENED_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_OPENING_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_OPENING_SM1; }
static int isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_SM2_RUNNING_elevator_state*)pHandle == SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state; }
static int isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_SM2_RUNNING_elevator_state*)pHandle == SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state; }
static int isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_SM2_RUNNING_elevator_state*)pHandle == SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state; }
static int isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_SM2_RUNNING_elevator_state*)pHandle == SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state; }
static int isActive_SSM_ST_elevator_state_SSM_st_RUNNING_elevator_state(void* pHandle) { return *(SSM_ST_elevator_state*)pHandle == SSM_st_RUNNING_elevator_state; }
static int isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state(void* pHandle) { return *(SSM_ST_elevator_state*)pHandle == SSM_st_STOPPED_elevator_state; }
static int isActive_SSM_TR_SM1_SSM_TR_CLOSED_OPENING_1_CLOSED_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_CLOSED_OPENING_1_CLOSED_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_CLOSING_CLOSED_1_CLOSING_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_CLOSING_CLOSED_1_CLOSING_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_CLOSING_OPENING_2_CLOSING_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_CLOSING_OPENING_2_CLOSING_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_OPENED_CLOSING_1_OPENED_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_OPENED_CLOSING_1_OPENED_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_OPENING_CLOSING_2_OPENING_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_OPENING_CLOSING_2_OPENING_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_OPENING_OPENED_1_OPENING_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_OPENING_OPENED_1_OPENING_SM1; }
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


const MappingEntry scope_35_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "C", NULL, sizeof(kcg_bool), offsetof(outC_Prop1_Proof, C_Implies_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Prop1_Proof, _L1_Implies_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Prop1_Proof, _L2_Implies_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Prop1_Proof, _L3_Implies_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Prop1_Proof, _L4_Implies_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_35 = {
    "Proof::Prop1/ Prop1_Proof/verif::Implies 1",
    scope_35_entries, 5
};

const MappingEntry scope_34_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "oProp1", NULL, sizeof(kcg_bool), offsetof(outC_Prop1_Proof, oProp1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(tDoorStatusEnum), offsetof(outC_Prop1_Proof, _L8), &_Type_tDoorStatusEnum_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(tMotorCommand), offsetof(outC_Prop1_Proof, _L13), &_Type_tMotorCommand_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Prop1_Proof, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_Prop1_Proof, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(tMotorCommand), offsetof(outC_Prop1_Proof, _L16), &_Type_tMotorCommand_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(tMotorCommand), offsetof(outC_Prop1_Proof, _L17), &_Type_tMotorCommand_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Prop1_Proof, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(tDoorStatusEnum), offsetof(outC_Prop1_Proof, _L19), &_Type_tDoorStatusEnum_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_Prop1_Proof, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_Prop1_Proof, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_EXPANDED, "verif::Implies 1", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 11 }
};
const MappingScope scope_34 = {
    "Proof::Prop1/ Prop1_Proof",
    scope_34_entries, 12
};

const MappingEntry scope_33_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_OPENED_CLOSING_1_OPENED_SM1, NULL, 1, 0 }
};
const MappingScope scope_33 = {
    "Elevator::DoorModes/ DoorModes_ElevatorSM1:OPENED:<1",
    scope_33_entries, 1
};

const MappingEntry scope_32_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_OPENED_CLOSING_1_OPENED_SM1, &scope_33, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(tDoorStatusEnum), offsetof(outC_DoorModes_Elevator, _L1_OPENED_SM1), &_Type_tDoorStatusEnum_Utils, &scope_23_entries[0], isActive_SSM_ST_SM1_SSM_st_OPENED_SM1, NULL, 1, 1 }
};
const MappingScope scope_32 = {
    "Elevator::DoorModes/ DoorModes_ElevatorSM1:OPENED:",
    scope_32_entries, 2
};

const MappingEntry scope_31_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_OPENING_CLOSING_2_OPENING_SM1, NULL, 1, 0 }
};
const MappingScope scope_31 = {
    "Elevator::DoorModes/ DoorModes_ElevatorSM1:OPENING:<2",
    scope_31_entries, 1
};

const MappingEntry scope_30_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_OPENING_OPENED_1_OPENING_SM1, NULL, 1, 0 }
};
const MappingScope scope_30 = {
    "Elevator::DoorModes/ DoorModes_ElevatorSM1:OPENING:<1",
    scope_30_entries, 1
};

const MappingEntry scope_29_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_OPENING_OPENED_1_OPENING_SM1, &scope_30, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_OPENING_CLOSING_2_OPENING_SM1, &scope_31, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(tDoorStatusEnum), offsetof(outC_DoorModes_Elevator, _L1_OPENING_SM1), &_Type_tDoorStatusEnum_Utils, &scope_23_entries[0], isActive_SSM_ST_SM1_SSM_st_OPENING_SM1, NULL, 1, 2 }
};
const MappingScope scope_29 = {
    "Elevator::DoorModes/ DoorModes_ElevatorSM1:OPENING:",
    scope_29_entries, 3
};

const MappingEntry scope_28_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_CLOSING_OPENING_2_CLOSING_SM1, NULL, 1, 0 }
};
const MappingScope scope_28 = {
    "Elevator::DoorModes/ DoorModes_ElevatorSM1:CLOSING:<2",
    scope_28_entries, 1
};

const MappingEntry scope_27_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_CLOSING_CLOSED_1_CLOSING_SM1, NULL, 1, 0 }
};
const MappingScope scope_27 = {
    "Elevator::DoorModes/ DoorModes_ElevatorSM1:CLOSING:<1",
    scope_27_entries, 1
};

const MappingEntry scope_26_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_CLOSING_CLOSED_1_CLOSING_SM1, &scope_27, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_CLOSING_OPENING_2_CLOSING_SM1, &scope_28, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(tDoorStatusEnum), offsetof(outC_DoorModes_Elevator, _L1_CLOSING_SM1), &_Type_tDoorStatusEnum_Utils, &scope_23_entries[0], isActive_SSM_ST_SM1_SSM_st_CLOSING_SM1, NULL, 1, 2 }
};
const MappingScope scope_26 = {
    "Elevator::DoorModes/ DoorModes_ElevatorSM1:CLOSING:",
    scope_26_entries, 3
};

const MappingEntry scope_25_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_CLOSED_OPENING_1_CLOSED_SM1, NULL, 1, 0 }
};
const MappingScope scope_25 = {
    "Elevator::DoorModes/ DoorModes_ElevatorSM1:CLOSED:<1",
    scope_25_entries, 1
};

const MappingEntry scope_24_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_23_entries[5], isActive_SSM_TR_SM1_SSM_TR_CLOSED_OPENING_1_CLOSED_SM1, &scope_25, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(tDoorStatusEnum), offsetof(outC_DoorModes_Elevator, _L4_CLOSED_SM1), &_Type_tDoorStatusEnum_Utils, &scope_23_entries[0], isActive_SSM_ST_SM1_SSM_st_CLOSED_SM1, NULL, 1, 1 }
};
const MappingScope scope_24 = {
    "Elevator::DoorModes/ DoorModes_ElevatorSM1:CLOSED:",
    scope_24_entries, 2
};

const MappingEntry scope_23_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_DoorModes_Elevator, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_DoorModes_Elevator, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_DoorModes_Elevator, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_DoorModes_Elevator, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_DoorModes_Elevator, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_DoorModes_Elevator, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_DoorModes_Elevator, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "CLOSED:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_SSM_ST_SM1_SSM_st_CLOSED_SM1, &scope_24, 1, 7 },
    /* 8 */ { MAP_STATE, "CLOSING:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_SSM_ST_SM1_SSM_st_CLOSING_SM1, &scope_26, 1, 8 },
    /* 9 */ { MAP_STATE, "OPENING:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_SSM_ST_SM1_SSM_st_OPENING_SM1, &scope_29, 1, 9 },
    /* 10 */ { MAP_STATE, "OPENED:", NULL, 0, 0, NULL, &scope_23_entries[0], isActive_SSM_ST_SM1_SSM_st_OPENED_SM1, &scope_32, 1, 10 }
};
const MappingScope scope_23 = {
    "Elevator::DoorModes/ DoorModes_ElevatorSM1:",
    scope_23_entries, 11
};

const MappingEntry scope_22_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "oDoorStatus", NULL, sizeof(tDoorStatusEnum), offsetof(outC_DoorModes_Elevator, oDoorStatus), &_Type_tDoorStatusEnum_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_23, 1, 1 }
};
const MappingScope scope_22 = {
    "Elevator::DoorModes/ DoorModes_Elevator",
    scope_22_entries, 2
};

const MappingEntry scope_21_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_9_entries[5], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_CLOSE_DOORS_SET_MOVEMENT_1_CLOSE_DOORS_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_21 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:CLOSE_DOORS:<1",
    scope_21_entries, 1
};

const MappingEntry scope_20_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_9_entries[5], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_CLOSE_DOORS_SET_MOVEMENT_1_CLOSE_DOORS_SM2_RUNNING_elevator_state, &scope_21, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes_Elevator, _L1_CLOSE_DOORS_SM2_RUNNING_elevator_state), &_Type_kcg_bool_Utils, &scope_3_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes_Elevator, _L2_CLOSE_DOORS_SM2_RUNNING_elevator_state), &_Type_kcg_bool_Utils, &scope_3_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state, NULL, 1, 2 }
};
const MappingScope scope_20 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:CLOSE_DOORS:",
    scope_20_entries, 3
};

const MappingEntry scope_19_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_9_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_DOWN_SET_MOVEMENT_1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_19 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:ELEVATOR_DOWN:<1",
    scope_19_entries, 1
};

const MappingEntry scope_18_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_9_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_DOWN_SET_MOVEMENT_1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, &scope_19, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes_Elevator, _L1_ELEVATOR_DOWN_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_3_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes_Elevator, _L2_ELEVATOR_DOWN_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_3_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes_Elevator, _L3_ELEVATOR_DOWN_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_3_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, NULL, 1, 3 }
};
const MappingScope scope_18 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:ELEVATOR_DOWN:",
    scope_18_entries, 4
};

const MappingEntry scope_17_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_9_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_CLIMB_SET_MOVEMENT_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_17 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:ELEVATOR_CLIMB:<1",
    scope_17_entries, 1
};

const MappingEntry scope_16_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_9_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_ELEVATOR_CLIMB_SET_MOVEMENT_1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, &scope_17, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes_Elevator, _L1_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_3_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes_Elevator, _L2_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_3_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes_Elevator, _L3_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state), &_Type_kcg_int32_Utils, &scope_3_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, NULL, 1, 3 }
};
const MappingScope scope_16 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:ELEVATOR_CLIMB:",
    scope_16_entries, 4
};

const MappingEntry scope_15_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(tMotorCommand), offsetof(outC_ElevatorModes_Elevator, _L1_then_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state), &_Type_tMotorCommand_Utils, &scope_13_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_15 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:SET_MOVEMENT:MotorControl:then:",
    scope_15_entries, 1
};

const MappingEntry scope_14_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(tMotorCommand), offsetof(outC_ElevatorModes_Elevator, _L1_else_MotorControl_SET_MOVEMENT_SM2_RUNNING_elevator_state), &_Type_tMotorCommand_Utils, &scope_13_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 }
};
const MappingScope scope_14 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:SET_MOVEMENT:MotorControl:else:",
    scope_14_entries, 1
};

const MappingEntry scope_13_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes_Elevator, MotorControl_clock_SET_MOVEMENT_SM2_RUNNING_elevator_state), &_Type_kcg_bool_Utils, &scope_3_entries[5], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_13_entries[0], isActive_kcg_bool_kcg_false, &scope_14, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_13_entries[0], isActive_kcg_bool_kcg_true, &scope_15, 1, 2 }
};
const MappingScope scope_13 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:SET_MOVEMENT:MotorControl:",
    scope_13_entries, 3
};

const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_9_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_SET_MOVEMENT_ELEVATOR_CLIMB_2_SET_MOVEMENT_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_12 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:SET_MOVEMENT:<2",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_9_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_SET_MOVEMENT_ELEVATOR_DOWN_1_SET_MOVEMENT_SM2_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_11 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:SET_MOVEMENT:<1",
    scope_11_entries, 1
};

const MappingEntry scope_10_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_9_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_SET_MOVEMENT_ELEVATOR_DOWN_1_SET_MOVEMENT_SM2_RUNNING_elevator_state, &scope_11, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_9_entries[6], isActive_SSM_TR_SM2_RUNNING_elevator_state_SSM_TR_SET_MOVEMENT_ELEVATOR_CLIMB_2_SET_MOVEMENT_SM2_RUNNING_elevator_state, &scope_12, 1, 1 },
    /* 2 */ { MAP_IF, "MotorControl:", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 2 }
};
const MappingScope scope_10 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:SET_MOVEMENT:",
    scope_10_entries, 3
};

const MappingEntry scope_9_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes_Elevator, SM2_state_act_RUNNING_elevator_state), &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes_Elevator, SM2_reset_act_RUNNING_elevator_state), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes_Elevator, SM2_state_nxt_RUNNING_elevator_state), &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes_Elevator, SM2_reset_nxt_RUNNING_elevator_state), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes_Elevator, SM2_state_sel_RUNNING_elevator_state), &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes_Elevator, SM2_fired_strong_RUNNING_elevator_state), &_Type_SSM_TR_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes_Elevator, SM2_fired_RUNNING_elevator_state), &_Type_SSM_TR_SM2_RUNNING_elevator_state_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "SET_MOVEMENT:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_SET_MOVEMENT_SM2_RUNNING_elevator_state, &scope_10, 1, 7 },
    /* 8 */ { MAP_STATE, "ELEVATOR_CLIMB:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_CLIMB_SM2_RUNNING_elevator_state, &scope_16, 1, 8 },
    /* 9 */ { MAP_STATE, "ELEVATOR_DOWN:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_ELEVATOR_DOWN_SM2_RUNNING_elevator_state, &scope_18, 1, 9 },
    /* 10 */ { MAP_STATE, "CLOSE_DOORS:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_SSM_ST_SM2_RUNNING_elevator_state_SSM_st_CLOSE_DOORS_SM2_RUNNING_elevator_state, &scope_20, 1, 10 }
};
const MappingScope scope_9 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:SM2:",
    scope_9_entries, 11
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_RUNNING_STOPPED_1_RUNNING_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:<1",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_RUNNING_STOPPED_1_RUNNING_elevator_state, &scope_8, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 1 }
};
const MappingScope scope_7 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:RUNNING:",
    scope_7_entries, 2
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_STOPPED_RUNNING_1_STOPPED_elevator_state, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:STOPPED:<1",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[6], isActive_SSM_TR_elevator_state_SSM_TR_STOPPED_RUNNING_1_STOPPED_elevator_state, &scope_6, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes_Elevator, _L1_STOPPED_elevator_state), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes_Elevator, _L2_STOPPED_elevator_state), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(tMotorCommand), offsetof(outC_ElevatorModes_Elevator, _L3_STOPPED_elevator_state), &_Type_tMotorCommand_Utils, &scope_4_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, NULL, 1, 3 }
};
const MappingScope scope_5 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:STOPPED:",
    scope_5_entries, 4
};

const MappingEntry scope_4_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_elevator_state), offsetof(outC_ElevatorModes_Elevator, elevator_state_state_act), &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes_Elevator, elevator_state_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_elevator_state), offsetof(outC_ElevatorModes_Elevator, elevator_state_state_nxt), &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes_Elevator, elevator_state_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_elevator_state), offsetof(outC_ElevatorModes_Elevator, elevator_state_state_sel), &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_elevator_state), offsetof(outC_ElevatorModes_Elevator, elevator_state_fired_strong), &_Type_SSM_TR_elevator_state_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_elevator_state), offsetof(outC_ElevatorModes_Elevator, elevator_state_fired), &_Type_SSM_TR_elevator_state_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "STOPPED:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_SSM_ST_elevator_state_SSM_st_STOPPED_elevator_state, &scope_5, 1, 7 },
    /* 8 */ { MAP_STATE, "RUNNING:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_SSM_ST_elevator_state_SSM_st_RUNNING_elevator_state, &scope_7, 1, 8 }
};
const MappingScope scope_4 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevatorelevator_state:",
    scope_4_entries, 9
};

const MappingEntry scope_3_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "oFloorNumber", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorModes_Elevator, oFloorNumber), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "oOpenDoor", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes_Elevator, oOpenDoor), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "oCloseDoor", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorModes_Elevator, oCloseDoor), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "oMotorCommand", NULL, sizeof(tMotorCommand), offsetof(outC_ElevatorModes_Elevator, oMotorCommand), &_Type_tMotorCommand_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_AUTOMATON, "elevator_state:", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 4 },
    /* 5 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(SSM_ST_SM2_RUNNING_elevator_state), offsetof(outC_ElevatorModes_Elevator, _3_SM2_clock_RUNNING_elevator_state), &_Type_SSM_ST_SM2_RUNNING_elevator_state_Utils, &scope_3_entries[6], isActive_SSM_ST_elevator_state_SSM_st_RUNNING_elevator_state, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(SSM_ST_elevator_state), offsetof(outC_ElevatorModes_Elevator, elevator_state_state_act), &_Type_SSM_ST_elevator_state_Utils, NULL, NULL, NULL, 0, 6 }
};
const MappingScope scope_3 = {
    "Elevator::ElevatorModes/ ElevatorModes_Elevator",
    scope_3_entries, 7
};

const MappingEntry scope_2_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "oDoorStatus", NULL, sizeof(tDoorStatusEnum), offsetof(outC_ElevatorController_Elevator, oDoorStatus), &_Type_tDoorStatusEnum_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "oFloorNumber", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorController_Elevator, oFloorNumber), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "oMotorCommand", NULL, sizeof(tMotorCommand), offsetof(outC_ElevatorController_Elevator, oMotorCommand), &_Type_tMotorCommand_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorController_Elevator, _L1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorController_Elevator, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorController_Elevator, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(tDoorStatusEnum), offsetof(outC_ElevatorController_Elevator, _L3), &_Type_tDoorStatusEnum_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_ElevatorController_Elevator, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int32), offsetof(outC_ElevatorController_Elevator, _L13), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(tMotorCommand), offsetof(outC_ElevatorController_Elevator, _L14), &_Type_tMotorCommand_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "Elevator::ElevatorModes 1", NULL, sizeof(outC_ElevatorModes_Elevator), offsetof(outC_ElevatorController_Elevator, Context_ElevatorModes_1), NULL, NULL, NULL, &scope_3, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "Elevator::DoorModes 1", NULL, sizeof(outC_DoorModes_Elevator), offsetof(outC_ElevatorController_Elevator, Context_DoorModes_1), NULL, NULL, NULL, &scope_22, 1, 11 }
};
const MappingScope scope_2 = {
    "Elevator::ElevatorController/ ElevatorController_Elevator",
    scope_2_entries, 12
};

const MappingEntry scope_1_entries[11] = {
    /* 0 */ { MAP_OUTPUT, "oProp1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.oProp1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "iDestinationFloorNumber", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.iDestinationFloorNumber, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "iTravelRequest", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.iTravelRequest, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(tMotorCommand), (size_t)&outputs_ctx._L3, &_Type_tMotorCommand_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(tDoorStatusEnum), (size_t)&outputs_ctx._L1, &_Type_tDoorStatusEnum_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_INSTANCE, "Elevator::ElevatorController 1", NULL, sizeof(outC_ElevatorController_Elevator), (size_t)&outputs_ctx.Context_ElevatorController_1, NULL, NULL, NULL, &scope_2, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "Proof::Prop1 1", NULL, sizeof(outC_Prop1_Proof), (size_t)&outputs_ctx.Context_Prop1_1, NULL, NULL, NULL, &scope_34, 1, 10 }
};
const MappingScope scope_1 = {
    "Proof::Proof/ Proof_Proof",
    scope_1_entries, 11
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Proof::Proof", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
