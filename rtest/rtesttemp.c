/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 11 Apr 2010 16:28:31 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "rtestdefs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

#define _STATIC
#define _DYNAMIC

int rtesttemp(GENmodel *inModel, CKTcircuit *ckt)
{
  register rtestmodel *model = (rtestmodel*)inModel;
  register rtestinstance *here;
  for ( ; model != NULL; model = model->rtestnextModel )
  {

    /* loop through all the instances of the model */
    for (here = model->rtestinstances; here != NULL ; here = here->rtestnextInstance)
    {

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
