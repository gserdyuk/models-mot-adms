/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:15 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "mextramdefs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

#define _STATIC
#define _DYNAMIC

int mextramtemp(GENmodel *inModel, CKTcircuit *ckt)
{
  register mextrammodel *model = (mextrammodel*)inModel;
  register mextraminstance *here;
  for ( ; model != NULL; model = model->mextramnextModel )
  {

    /* loop through all the instances of the model */
    for (here = model->mextraminstances; here != NULL ; here = here->mextramnextInstance)
    {

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
