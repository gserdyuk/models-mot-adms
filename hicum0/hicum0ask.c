/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:13 ***/


#include "ngspice.h"
#include "const.h"
#include "cktdefs.h"
#include "hicum0defs.h"
#include "ifsim.h"
#include "sperror.h"
#include "suffix.h"

int hicum0ask(CKTcircuit *ckt, GENinstance *inst, int which, IFvalue *value, IFvalue *select)
{
  hicum0instance *instance = (hicum0instance*)inst;
  switch (which) {  case  hicum0_instance_dt  :
    value->rValue = instance->dt;
    return OK;

  default:
    return(-1);
  }
  return(-1);
}
