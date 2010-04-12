/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Mon, 12 Apr 2010 19:24:54 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "psp102defs.h"
#include "sperror.h"
#include "suffix.h"

int psp102par(int param, IFvalue *value, GENinstance *inst, IFvalue *select)
{
  psp102instance *myinstance = (psp102instance*)inst;
  switch (param) {  case  psp102_instance_L  :
    myinstance->L = value->rValue;
    myinstance->L_Given = TRUE;
    break;
  case  psp102_instance_W  :
    myinstance->W = value->rValue;
    myinstance->W_Given = TRUE;
    break;
  case  psp102_instance_SA  :
    myinstance->SA = value->rValue;
    myinstance->SA_Given = TRUE;
    break;
  case  psp102_instance_SB  :
    myinstance->SB = value->rValue;
    myinstance->SB_Given = TRUE;
    break;
  case  psp102_instance_ABSOURCE  :
    myinstance->ABSOURCE = value->rValue;
    myinstance->ABSOURCE_Given = TRUE;
    break;
  case  psp102_instance_LSSOURCE  :
    myinstance->LSSOURCE = value->rValue;
    myinstance->LSSOURCE_Given = TRUE;
    break;
  case  psp102_instance_LGSOURCE  :
    myinstance->LGSOURCE = value->rValue;
    myinstance->LGSOURCE_Given = TRUE;
    break;
  case  psp102_instance_ABDRAIN  :
    myinstance->ABDRAIN = value->rValue;
    myinstance->ABDRAIN_Given = TRUE;
    break;
  case  psp102_instance_LSDRAIN  :
    myinstance->LSDRAIN = value->rValue;
    myinstance->LSDRAIN_Given = TRUE;
    break;
  case  psp102_instance_LGDRAIN  :
    myinstance->LGDRAIN = value->rValue;
    myinstance->LGDRAIN_Given = TRUE;
    break;
  case  psp102_instance_AS  :
    myinstance->AS = value->rValue;
    myinstance->AS_Given = TRUE;
    break;
  case  psp102_instance_PS  :
    myinstance->PS = value->rValue;
    myinstance->PS_Given = TRUE;
    break;
  case  psp102_instance_AD  :
    myinstance->AD = value->rValue;
    myinstance->AD_Given = TRUE;
    break;
  case  psp102_instance_PD  :
    myinstance->PD = value->rValue;
    myinstance->PD_Given = TRUE;
    break;
  case  psp102_instance_MULT  :
    myinstance->MULT = value->rValue;
    myinstance->MULT_Given = TRUE;
    break;

  default:
    return(-1);
  }
  return(OK);
}
