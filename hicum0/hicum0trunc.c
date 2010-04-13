/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:14:44 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "hicum0defs.h"
#include "sperror.h"
#include "suffix.h"

int hicum0trunc(GENmodel *inModel, CKTcircuit *ckt, double *timeStep)
{
  register hicum0model *model = (hicum0model*)inModel;
  register hicum0instance *here;

#ifdef STEPDEBUG
    double debugtemp;
#endif /* STEPDEBUG */  
  
  for ( ; model != NULL; model = model->hicum0nextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->hicum0instances; here != NULL ; here = here->hicum0nextInstance)
    {
#ifdef STEPDEBUG
            debugtemp = *timeStep;
#endif /* STEPDEBUG */   
 
            CKTterr(here->state_tnode_GND, ckt, timeStep);
            CKTterr(here->state_b_e, ckt, timeStep);
            CKTterr(here->state_b_ci, ckt, timeStep);
            CKTterr(here->state_s_ci, ckt, timeStep);
            CKTterr(here->state_bi_ci, ckt, timeStep);
            CKTterr(here->state_bi_ei, ckt, timeStep);
    
 
#ifdef STEPDEBUG
            if(debugtemp != *timeStep)
	    {  printf("device %s reduces step from %g to %g\n",
                       here->hicum0name,debugtemp,*timeStep);
            }
#endif /* STEPDEBUG */
   
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
