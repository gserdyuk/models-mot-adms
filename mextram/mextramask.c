/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:45:17 ***/


#include "ngspice.h"
#include "const.h"
#include "cktdefs.h"
#include "mextramdefs.h"
#include "ifsim.h"
#include "sperror.h"
#include "suffix.h"

int mextramask(CKTcircuit *ckt, GENinstance *inst, int which, IFvalue *value, IFvalue *select)
{
  mextraminstance *instance = (mextraminstance*)inst;
  switch (which) {
  default:
    return(-1);
  }
  return(-1);
}
