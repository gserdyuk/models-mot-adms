/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:15 ***/


#include "ngspice.h"
#include "mextramdefs.h"
#include "sperror.h"
#include "suffix.h"

int mextrammDelete(GENmodel **inModel, IFuid modname, GENmodel *kill)

{
  register mextrammodel **model = (mextrammodel**)inModel;
  register mextrammodel *modfast =(mextrammodel*)kill;
  mextraminstance *here;
  mextraminstance *prev = NULL;
  mextrammodel **oldmod;
  
  oldmod = model;
  for ( ; *model ; model = &((*model)->mextramnextModel)) {
      if ((*model)->mextrammodName == modname ||
          (modfast && *model == modfast))
	  goto delgot;
      oldmod = model;   
  } 
  return(E_NOMOD);
  
  delgot:
    *oldmod = (*model)->mextramnextModel; /* cut deleted device out of list */
    for (here = (*model)->mextraminstances; here; here = here->mextramnextInstance)
    {    if(prev) FREE(prev);
         prev = here;
    }
    if(prev) FREE(prev);
    FREE(*model);
    return(OK);
}
