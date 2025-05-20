/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/omele/Desktop/elevator-controller-main/elevator-controller-main/Simulation/config.txt
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Prop1_Proof.h"

/* Proof::Prop1/ */
void Prop1_Proof(
  /* iDoorStatus/ */
  tDoorStatusEnum iDoorStatus,
  /* iMotorCommand/ */
  tMotorCommand iMotorCommand,
  outC_Prop1_Proof *outC)
{
  outC->_L17 = eMOTOR_MOVEUP;
  outC->_L13 = iMotorCommand;
  outC->_L15 = outC->_L13 == outC->_L17;
  outC->_L16 = eMOTOR_MOVEDOWN;
  outC->_L14 = outC->_L13 == outC->_L16;
  outC->_L20 = outC->_L14 | outC->_L15;
  outC->A_Implies_1 = outC->_L20;
  outC->_L1_Implies_1 = outC->A_Implies_1;
  outC->_L4_Implies_1 = !outC->_L1_Implies_1;
  outC->_L19 = eDOOR_CLOSED;
  outC->_L8 = iDoorStatus;
  outC->_L18 = outC->_L8 == outC->_L19;
  outC->B_Implies_1 = outC->_L18;
  outC->_L2_Implies_1 = outC->B_Implies_1;
  outC->_L3_Implies_1 = outC->_L4_Implies_1 | outC->_L2_Implies_1;
  outC->C_Implies_1 = outC->_L3_Implies_1;
  outC->_L21 = outC->C_Implies_1;
  outC->oProp1 = outC->_L21;
}

#ifndef KCG_USER_DEFINED_INIT
void Prop1_init_Proof(outC_Prop1_Proof *outC)
{
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = eDOOR_CLOSED;
  outC->_L18 = kcg_true;
  outC->_L17 = eMOTOR_STOP;
  outC->_L16 = eMOTOR_STOP;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = eMOTOR_STOP;
  outC->_L8 = eDOOR_CLOSED;
  outC->_L1_Implies_1 = kcg_true;
  outC->_L2_Implies_1 = kcg_true;
  outC->_L3_Implies_1 = kcg_true;
  outC->_L4_Implies_1 = kcg_true;
  outC->A_Implies_1 = kcg_true;
  outC->B_Implies_1 = kcg_true;
  outC->C_Implies_1 = kcg_true;
  outC->oProp1 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Prop1_reset_Proof(outC_Prop1_Proof *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Prop1_Proof.c
** Generation date: 2025-05-20T14:52:30
*************************************************************$ */

