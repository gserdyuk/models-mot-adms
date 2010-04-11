/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 11 Apr 2010 16:28:31 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "rtestdefs.h"
#include "sperror.h"
#include "suffix.h"

int rtesttrunc(GENmodel *inModel, CKTcircuit *ckt, double *timeStep)
{
  register rtestmodel *model = (rtestmodel*)inModel;
  register rtestinstance *here;

#ifdef STEPDEBUG
    double debugtemp;
#endif /* STEPDEBUG */  
  
  for ( ; model != NULL; model = model->rtestnextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->rtestinstances; here != NULL ; here = here->rtestnextInstance)
    {
#ifdef STEPDEBUG
            debugtemp = *timeStep;
#endif /* STEPDEBUG */   
 
    
 
#ifdef STEPDEBUG
            if(debugtemp != *timeStep)
	    {  printf("device %s reduces step from %g to %g\n",
                       here->rtestname,debugtemp,*timeStep);
            }
#endif /* STEPDEBUG */
   
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
