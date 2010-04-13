/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:46:34 ***/


#include "ngspice.h"
#include "const.h"
#include "cktdefs.h"
#include "rtestdefs.h"
#include "ifsim.h"
#include "sperror.h"
#include "suffix.h"

int rtestask(CKTcircuit *ckt, GENinstance *inst, int which, IFvalue *value, IFvalue *select)
{
  rtestinstance *instance = (rtestinstance*)inst;
  switch (which) {
  default:
    return(-1);
  }
  return(-1);
}
