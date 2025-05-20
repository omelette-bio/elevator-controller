/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/omele/Desktop/elevator-controller-main/elevator-controller-main/Simulation/config.txt
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Proof_Proof.h"

/* Proof::Proof/ */
void Proof_Proof(inC_Proof_Proof *inC, outC_Proof_Proof *outC)
{
  kcg_int32 noname;

  outC->_L4 = inC->iDestinationFloorNumber;
  outC->_L5 = inC->iTravelRequest;
  /* _L1=(Elevator::ElevatorController#1)/ */
  ElevatorController_Elevator(
    outC->_L4,
    outC->_L5,
    &outC->Context_ElevatorController_1);
  outC->_L1 = outC->Context_ElevatorController_1.oDoorStatus;
  outC->_L2 = outC->Context_ElevatorController_1.oFloorNumber;
  outC->_L3 = outC->Context_ElevatorController_1.oMotorCommand;
  noname = outC->_L2;
  /* _L6=(Proof::Prop1#1)/ */
  Prop1_Proof(outC->_L1, outC->_L3, &outC->Context_Prop1_1);
  outC->_L6 = outC->Context_Prop1_1.oProp1;
  outC->oProp1 = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void Proof_init_Proof(outC_Proof_Proof *outC)
{
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L1 = eDOOR_CLOSED;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = eMOTOR_STOP;
  outC->oProp1 = kcg_true;
  /* _L6=(Proof::Prop1#1)/ */ Prop1_init_Proof(&outC->Context_Prop1_1);
  /* _L1=(Elevator::ElevatorController#1)/ */
  ElevatorController_init_Elevator(&outC->Context_ElevatorController_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Proof_reset_Proof(outC_Proof_Proof *outC)
{
  /* _L6=(Proof::Prop1#1)/ */ Prop1_reset_Proof(&outC->Context_Prop1_1);
  /* _L1=(Elevator::ElevatorController#1)/ */
  ElevatorController_reset_Elevator(&outC->Context_ElevatorController_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Proof_Proof.c
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */

