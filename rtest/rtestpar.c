/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 11 Apr 2010 16:28:31 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "rtestdefs.h"
#include "sperror.h"
#include "suffix.h"

int rtestpar(int param, IFvalue *value, GENinstance *inst, IFvalue *select)
{
  rtestinstance *myinstance = (rtestinstance*)inst;
  switch (param) {
  default:
    return(-1);
  }
  return(OK);
}
