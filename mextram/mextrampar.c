/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:15 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "mextramdefs.h"
#include "sperror.h"
#include "suffix.h"

int mextrampar(int param, IFvalue *value, GENinstance *inst, IFvalue *select)
{
  mextraminstance *myinstance = (mextraminstance*)inst;
  switch (param) {
  default:
    return(-1);
  }
  return(OK);
}
