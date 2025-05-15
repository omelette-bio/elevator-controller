/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/Dylan/Desktop/elevator-controller-main/Simulation/config.txt
** Generation date: 2025-05-15T11:31:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ElevatorController.h"

/* ElevatorController/ */
void ElevatorController(
  inC_ElevatorController *inC,
  outC_ElevatorController *outC)
{
  /* oFloorNumber/ */
  kcg_int32 last_oFloorNumber;

  last_oFloorNumber = outC->oFloorNumber;
  outC->_L13 = inC->iDestinationFloorNumber;
  outC->_L12 = inC->iTravelRequest;
  /* _L1=(ElevatorModes#1)/ */
  ElevatorModes(outC->_L13, outC->_L12, &outC->Context_ElevatorModes_1);
  outC->_L1 = outC->Context_ElevatorModes_1.oFloorNumber;
  outC->_L9 = outC->Context_ElevatorModes_1.oOpenDoor;
  outC->_L8 = outC->Context_ElevatorModes_1.oCloseDoor;
  outC->_L14 = outC->Context_ElevatorModes_1.oMotorCommand;
  outC->oMotorCommand = outC->_L14;
  outC->oFloorNumber = outC->_L1;
  /* _L3=(DoorModes#1)/ */
  DoorModes(outC->_L9, outC->_L8, &outC->Context_DoorModes_1);
  outC->_L3 = outC->Context_DoorModes_1.oDoorStatus;
  outC->oDoorStatus = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void ElevatorController_init(outC_ElevatorController *outC)
{
  outC->_L14 = eMOTOR_STOP;
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_true;
  outC->_L3 = eDOOR_CLOSED;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->oMotorCommand = eMOTOR_STOP;
  outC->oDoorStatus = eDOOR_CLOSED;
  /* _L3=(DoorModes#1)/ */ DoorModes_init(&outC->Context_DoorModes_1);
  /* _L1=(ElevatorModes#1)/ */ ElevatorModes_init(&outC->Context_ElevatorModes_1);
  outC->oFloorNumber = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ElevatorController_reset(outC_ElevatorController *outC)
{
  /* _L3=(DoorModes#1)/ */ DoorModes_reset(&outC->Context_DoorModes_1);
  /* _L1=(ElevatorModes#1)/ */
  ElevatorModes_reset(&outC->Context_ElevatorModes_1);
  outC->oFloorNumber = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** ElevatorController.c
** Generation date: 2025-05-15T11:31:51
*************************************************************$ */

