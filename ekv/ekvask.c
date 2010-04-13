/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:12:43 ***/


#include "ngspice.h"
#include "const.h"
#include "cktdefs.h"
#include "ekvdefs.h"
#include "ifsim.h"
#include "sperror.h"
#include "suffix.h"

int ekvask(CKTcircuit *ckt, GENinstance *inst, int which, IFvalue *value, IFvalue *select)
{
  ekvinstance *instance = (ekvinstance*)inst;
  switch (which) {  case  ekv_instance_L  :
    value->rValue = instance->L;
    return OK;
  case  ekv_instance_W  :
    value->rValue = instance->W;
    return OK;
  case  ekv_instance_M  :
    value->rValue = instance->M;
    return OK;
  case  ekv_instance_AD  :
    value->rValue = instance->AD;
    return OK;
  case  ekv_instance_AS  :
    value->rValue = instance->AS;
    return OK;
  case  ekv_instance_PD  :
    value->rValue = instance->PD;
    return OK;
  case  ekv_instance_PS  :
    value->rValue = instance->PS;
    return OK;
  case  ekv_instance_NRD  :
    value->rValue = instance->NRD;
    return OK;
  case  ekv_instance_NRS  :
    value->rValue = instance->NRS;
    return OK;
  case  ekv_instance_RS  :
    value->rValue = instance->RS;
    return OK;
  case  ekv_instance_RD  :
    value->rValue = instance->RD;
    return OK;

  default:
    return(-1);
  }
  return(-1);
}
