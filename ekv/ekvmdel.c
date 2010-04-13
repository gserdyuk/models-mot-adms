/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:12:43 ***/


#include "ngspice.h"
#include "ekvdefs.h"
#include "sperror.h"
#include "suffix.h"

int ekvmDelete(GENmodel **inModel, IFuid modname, GENmodel *kill)

{
  register ekvmodel **model = (ekvmodel**)inModel;
  register ekvmodel *modfast =(ekvmodel*)kill;
  ekvinstance *here;
  ekvinstance *prev = NULL;
  ekvmodel **oldmod;
  
  oldmod = model;
  for ( ; *model ; model = &((*model)->ekvnextModel)) {
      if ((*model)->ekvmodName == modname ||
          (modfast && *model == modfast))
	  goto delgot;
      oldmod = model;   
  } 
  return(E_NOMOD);
  
  delgot:
    *oldmod = (*model)->ekvnextModel; /* cut deleted device out of list */
    for (here = (*model)->ekvinstances; here; here = here->ekvnextInstance)
    {    if(prev) FREE(prev);
         prev = here;
    }
    if(prev) FREE(prev);
    FREE(*model);
    return(OK);
}
