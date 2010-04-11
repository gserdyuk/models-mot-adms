/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:13 ***/


#include "ngspice.h"
#include "hicum0defs.h"
#include "sperror.h"
#include "suffix.h"

int hicum0mDelete(GENmodel **inModel, IFuid modname, GENmodel *kill)

{
  register hicum0model **model = (hicum0model**)inModel;
  register hicum0model *modfast =(hicum0model*)kill;
  hicum0instance *here;
  hicum0instance *prev = NULL;
  hicum0model **oldmod;
  
  oldmod = model;
  for ( ; *model ; model = &((*model)->hicum0nextModel)) {
      if ((*model)->hicum0modName == modname ||
          (modfast && *model == modfast))
	  goto delgot;
      oldmod = model;   
  } 
  return(E_NOMOD);
  
  delgot:
    *oldmod = (*model)->hicum0nextModel; /* cut deleted device out of list */
    for (here = (*model)->hicum0instances; here; here = here->hicum0nextInstance)
    {    if(prev) FREE(prev);
         prev = here;
    }
    if(prev) FREE(prev);
    FREE(*model);
    return(OK);
}
