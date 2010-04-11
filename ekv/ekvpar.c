/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Wed, 24 Mar 2010 00:50:59 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "ekvdefs.h"
#include "sperror.h"
#include "suffix.h"

int ekvpar(int param, IFvalue *value, GENinstance *inst, IFvalue *select)
{
  ekvinstance *myinstance = (ekvinstance*)inst;
  switch (param) {  case  ekv_instance_L  :
    myinstance->L = value->rValue;
    myinstance->L_Given = TRUE;
    break;
  case  ekv_instance_W  :
    myinstance->W = value->rValue;
    myinstance->W_Given = TRUE;
    break;
  case  ekv_instance_M  :
    myinstance->M = value->rValue;
    myinstance->M_Given = TRUE;
    break;
  case  ekv_instance_AD  :
    myinstance->AD = value->rValue;
    myinstance->AD_Given = TRUE;
    break;
  case  ekv_instance_AS  :
    myinstance->AS = value->rValue;
    myinstance->AS_Given = TRUE;
    break;
  case  ekv_instance_PD  :
    myinstance->PD = value->rValue;
    myinstance->PD_Given = TRUE;
    break;
  case  ekv_instance_PS  :
    myinstance->PS = value->rValue;
    myinstance->PS_Given = TRUE;
    break;
  case  ekv_instance_NRD  :
    myinstance->NRD = value->rValue;
    myinstance->NRD_Given = TRUE;
    break;
  case  ekv_instance_NRS  :
    myinstance->NRS = value->rValue;
    myinstance->NRS_Given = TRUE;
    break;
  case  ekv_instance_RS  :
    myinstance->RS = value->rValue;
    myinstance->RS_Given = TRUE;
    break;
  case  ekv_instance_RD  :
    myinstance->RD = value->rValue;
    myinstance->RD_Given = TRUE;
    break;

  default:
    return(-1);
  }
  return(OK);
}
