/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:49 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "psp102defs.h"
#include "sperror.h"
#include "suffix.h"

int psp102trunc(GENmodel *inModel, CKTcircuit *ckt, double *timeStep)
{
  register psp102model *model = (psp102model*)inModel;
  register psp102instance *here;

#ifdef STEPDEBUG
    double debugtemp;
#endif /* STEPDEBUG */  
  
  for ( ; model != NULL; model = model->psp102nextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->psp102instances; here != NULL ; here = here->psp102nextInstance)
    {
#ifdef STEPDEBUG
            debugtemp = *timeStep;
#endif /* STEPDEBUG */   
 
            CKTterr(here->state_NOI_GND, ckt, timeStep);
            CKTterr(here->state_B_D, ckt, timeStep);
            CKTterr(here->state_B_S, ckt, timeStep);
            CKTterr(here->state_G_B, ckt, timeStep);
            CKTterr(here->state_G_D, ckt, timeStep);
            CKTterr(here->state_G_S, ckt, timeStep);
            CKTterr(here->state_D_S, ckt, timeStep);
    
 
#ifdef STEPDEBUG
            if(debugtemp != *timeStep)
	    {  printf("device %s reduces step from %g to %g\n",
                       here->psp102name,debugtemp,*timeStep);
            }
#endif /* STEPDEBUG */
   
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
