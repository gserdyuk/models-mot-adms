/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:46:34 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "rtestdefs.h"
#include "sperror.h"
#include "suffix.h"

int rtestacLoad(GENmodel *inModel, CKTcircuit *ckt)
{
  register rtestmodel *model = (rtestmodel*)inModel;
  register rtestinstance *here;
  for ( ; model != NULL; model = model->rtestnextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->rtestinstances; here != NULL ; here = here->rtestnextInstance)
    {  if(here->PTR_J_top_top_required) *(here->PTR_J_top_top)+=here->JSVAL_top_top;
  if(here->PTR_J_top_low_required) *(here->PTR_J_top_low)+=here->JSVAL_top_low;
  if(here->PTR_J_low_top_required) *(here->PTR_J_low_top)+=here->JSVAL_low_top;
  if(here->PTR_J_low_low_required) *(here->PTR_J_low_low)+=here->JSVAL_low_low;

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
