/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:36 ***/


#include "ngspice.h"
#include "const.h"
#include "cktdefs.h"
#include "hicum2defs.h"
#include "ifsim.h"
#include "sperror.h"
#include "suffix.h"

int hicum2ask(CKTcircuit *ckt, GENinstance *inst, int which, IFvalue *value, IFvalue *select)
{
  hicum2instance *instance = (hicum2instance*)inst;
  switch (which) {
  default:
    return(-1);
  }
  return(-1);
}
