/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:12:43 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "ekvdefs.h"
#include "sperror.h"
#include "suffix.h"

int ekvtrunc(GENmodel *inModel, CKTcircuit *ckt, double *timeStep)
{
  register ekvmodel *model = (ekvmodel*)inModel;
  register ekvinstance *here;

#ifdef STEPDEBUG
    double debugtemp;
#endif /* STEPDEBUG */  
  
  for ( ; model != NULL; model = model->ekvnextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->ekvinstances; here != NULL ; here = here->ekvnextInstance)
    {
#ifdef STEPDEBUG
            debugtemp = *timeStep;
#endif /* STEPDEBUG */   
 
            CKTterr(here->state_g_b, ckt, timeStep);
            CKTterr(here->state_g_di, ckt, timeStep);
            CKTterr(here->state_g_si, ckt, timeStep);
            CKTterr(here->state_b_g, ckt, timeStep);
            CKTterr(here->state_b_di, ckt, timeStep);
            CKTterr(here->state_b_si, ckt, timeStep);
            CKTterr(here->state_si_g, ckt, timeStep);
            CKTterr(here->state_di_g, ckt, timeStep);
    
 
#ifdef STEPDEBUG
            if(debugtemp != *timeStep)
	    {  printf("device %s reduces step from %g to %g\n",
                       here->ekvname,debugtemp,*timeStep);
            }
#endif /* STEPDEBUG */
   
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
