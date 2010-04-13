/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:14:44 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "hicum0defs.h"
#include "sperror.h"
#include "suffix.h"

int hicum0par(int param, IFvalue *value, GENinstance *inst, IFvalue *select)
{
  hicum0instance *myinstance = (hicum0instance*)inst;
  switch (param) {  case  hicum0_instance_dt  :
    myinstance->dt = value->rValue;
    myinstance->dt_Given = TRUE;
    break;

  default:
    return(-1);
  }
  return(OK);
}
