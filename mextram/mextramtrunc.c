/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:15 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "mextramdefs.h"
#include "sperror.h"
#include "suffix.h"

int mextramtrunc(GENmodel *inModel, CKTcircuit *ckt, double *timeStep)
{
  register mextrammodel *model = (mextrammodel*)inModel;
  register mextraminstance *here;

#ifdef STEPDEBUG
    double debugtemp;
#endif /* STEPDEBUG */  
  
  for ( ; model != NULL; model = model->mextramnextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->mextraminstances; here != NULL ; here = here->mextramnextInstance)
    {
#ifdef STEPDEBUG
            debugtemp = *timeStep;
#endif /* STEPDEBUG */   
 
            CKTterr(here->state_b_c1, ckt, timeStep);
            CKTterr(here->state_b_c4, ckt, timeStep);
            CKTterr(here->state_b1_c1, ckt, timeStep);
            CKTterr(here->state_b1_c4, ckt, timeStep);
            CKTterr(here->state_b_c3, ckt, timeStep);
            CKTterr(here->state_b_c, ckt, timeStep);
            CKTterr(here->state_b_e, ckt, timeStep);
            CKTterr(here->state_dt_GND, ckt, timeStep);
            CKTterr(here->state_b2_c2, ckt, timeStep);
            CKTterr(here->state_b1_b2, ckt, timeStep);
            CKTterr(here->state_s_c1, ckt, timeStep);
            CKTterr(here->state_b2_e1, ckt, timeStep);
            CKTterr(here->state_b1_e1, ckt, timeStep);
    
 
#ifdef STEPDEBUG
            if(debugtemp != *timeStep)
	    {  printf("device %s reduces step from %g to %g\n",
                       here->mextramname,debugtemp,*timeStep);
            }
#endif /* STEPDEBUG */
   
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
