/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:13 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "hicum0defs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

#define _STATIC
#define _DYNAMIC

int hicum0temp(GENmodel *inModel, CKTcircuit *ckt)
{
  register hicum0model *model = (hicum0model*)inModel;
  register hicum0instance *here;
  for ( ; model != NULL; model = model->hicum0nextModel )
  {
{
if
(model->npn_Given)
{
model->HICUMtype=(+1);
EXIT_IF_ISNAN(model->HICUMtype)
}
else
{
if
(model->pnp_Given)
{
model->HICUMtype=(-1);
EXIT_IF_ISNAN(model->HICUMtype)
}
else
{
model->HICUMtype=(+1);
EXIT_IF_ISNAN(model->HICUMtype)
}
}
}

    /* loop through all the instances of the model */
    for (here = model->hicum0instances; here != NULL ; here = here->hicum0nextInstance)
    {

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
