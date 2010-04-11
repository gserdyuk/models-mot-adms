/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:36 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "hicum2defs.h"
#include "sperror.h"
#include "suffix.h"

int hicum2trunc(GENmodel *inModel, CKTcircuit *ckt, double *timeStep)
{
  register hicum2model *model = (hicum2model*)inModel;
  register hicum2instance *here;

#ifdef STEPDEBUG
    double debugtemp;
#endif /* STEPDEBUG */  
  
  for ( ; model != NULL; model = model->hicum2nextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->hicum2instances; here != NULL ; here = here->hicum2nextInstance)
    {
#ifdef STEPDEBUG
            debugtemp = *timeStep;
#endif /* STEPDEBUG */   
 
            CKTterr(here->state_xf4_GND, ckt, timeStep);
            CKTterr(here->state_xf3_GND, ckt, timeStep);
            CKTterr(here->state_xf2_GND, ckt, timeStep);
            CKTterr(here->state_xf1_GND, ckt, timeStep);
            CKTterr(here->state_tnode_GND, ckt, timeStep);
            CKTterr(here->state_si_s, ckt, timeStep);
            CKTterr(here->state_si_ci, ckt, timeStep);
            CKTterr(here->state_bp_e, ckt, timeStep);
            CKTterr(here->state_b_e, ckt, timeStep);
            CKTterr(here->state_bp_ei, ckt, timeStep);
            CKTterr(here->state_bp_bi, ckt, timeStep);
            CKTterr(here->state_bp_ci, ckt, timeStep);
            CKTterr(here->state_b_ci, ckt, timeStep);
            CKTterr(here->state_bi_ci, ckt, timeStep);
            CKTterr(here->state_bi_ei, ckt, timeStep);
    
 
#ifdef STEPDEBUG
            if(debugtemp != *timeStep)
	    {  printf("device %s reduces step from %g to %g\n",
                       here->hicum2name,debugtemp,*timeStep);
            }
#endif /* STEPDEBUG */
   
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
