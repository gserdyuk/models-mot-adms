/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 11 Apr 2010 16:28:31 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "rtestdefs.h"
#include "sperror.h"
#include "suffix.h"

int rtestmParam(int param, IFvalue *value, GENmodel *inMod)
{
  rtestmodel *mod = (rtestmodel*)inMod;
  switch (param) {
  case  rtest_model_d  :
    mod->d = value->iValue;
    mod->d_Given = TRUE;
    break;
  case  rtest_model_R1  :
    mod->R1 = value->rValue;
    mod->R1_Given = TRUE;
    break;

  default:
    return(-1);
  }
  return(OK);
}
