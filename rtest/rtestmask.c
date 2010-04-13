/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:46:34 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "cktdefs.h"
#include "devdefs.h"
#include "rtestdefs.h"
#include "sperror.h"
#include "suffix.h"

int rtestmAsk(CKTcircuit *ckt, GENmodel *inst, int which, IFvalue *value)
{
  rtestmodel *model = (rtestmodel *)inst;
  switch (which) {  case  rtest_model_d  :
    value->iValue = model->d;
    return OK;
  case  rtest_model_R1  :
    value->rValue = model->R1;
    return OK;

  default:
    return(-1);
  }
  return(-1);
}
