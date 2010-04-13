/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:12:43 ***/


#include "ngspice.h"
#include "ekvdefs.h"
#include "sperror.h"
#include "suffix.h"

int ekvdelete(GENmodel *inModel, IFuid name, GENinstance **inInst)

{
  register ekvmodel *model = (ekvmodel*)inModel;
  register ekvinstance **fast =(ekvinstance**)inInst;
  
  ekvinstance **prev = NULL;
  ekvinstance *here;
  
  for ( ; model ; model = model->ekvnextModel ) {
      prev = &(model->ekvinstances);  
      for (here = *prev; here ; here  = *prev) {
          if(here->ekvname == name || (fast && here==*fast) ) {
	      *prev = here->ekvnextInstance;
	      FREE(here);
	      return(OK);
	      }
         
    } 
  } 
  return(E_NODEV);
}
