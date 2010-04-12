/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Mon, 12 Apr 2010 19:24:54 ***/


#include "ngspice.h"
#include "psp102defs.h"
#include "sperror.h"
#include "suffix.h"

int psp102delete(GENmodel *inModel, IFuid name, GENinstance **inInst)

{
  register psp102model *model = (psp102model*)inModel;
  register psp102instance **fast =(psp102instance**)inInst;
  
  psp102instance **prev = NULL;
  psp102instance *here;
  
  for ( ; model ; model = model->psp102nextModel ) {
      prev = &(model->psp102instances);  
      for (here = *prev; here ; here  = *prev) {
          if(here->psp102name == name || (fast && here==*fast) ) {
	      *prev = here->psp102nextInstance;
	      FREE(here);
	      return(OK);
	      }
         
    } 
  } 
  return(E_NODEV);
}
