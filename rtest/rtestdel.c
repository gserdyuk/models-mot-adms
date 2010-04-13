/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:46:34 ***/


#include "ngspice.h"
#include "rtestdefs.h"
#include "sperror.h"
#include "suffix.h"

int rtestdelete(GENmodel *inModel, IFuid name, GENinstance **inInst)

{
  register rtestmodel *model = (rtestmodel*)inModel;
  register rtestinstance **fast =(rtestinstance**)inInst;
  
  rtestinstance **prev = NULL;
  rtestinstance *here;
  
  for ( ; model ; model = model->rtestnextModel ) {
      prev = &(model->rtestinstances);  
      for (here = *prev; here ; here  = *prev) {
          if(here->rtestname == name || (fast && here==*fast) ) {
	      *prev = here->rtestnextInstance;
	      FREE(here);
	      return(OK);
	      }
         
    } 
  } 
  return(E_NODEV);
}
