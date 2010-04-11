/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 11 Apr 2010 16:28:31 ***/


#include "ngspice.h"
#include "rtestdefs.h"
#include "sperror.h"
#include "suffix.h"

int rtestmDelete(GENmodel **inModel, IFuid modname, GENmodel *kill)

{
  register rtestmodel **model = (rtestmodel**)inModel;
  register rtestmodel *modfast =(rtestmodel*)kill;
  rtestinstance *here;
  rtestinstance *prev = NULL;
  rtestmodel **oldmod;
  
  oldmod = model;
  for ( ; *model ; model = &((*model)->rtestnextModel)) {
      if ((*model)->rtestmodName == modname ||
          (modfast && *model == modfast))
	  goto delgot;
      oldmod = model;   
  } 
  return(E_NOMOD);
  
  delgot:
    *oldmod = (*model)->rtestnextModel; /* cut deleted device out of list */
    for (here = (*model)->rtestinstances; here; here = here->rtestnextInstance)
    {    if(prev) FREE(prev);
         prev = here;
    }
    if(prev) FREE(prev);
    FREE(*model);
    return(OK);
}
