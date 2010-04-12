/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Mon, 12 Apr 2010 19:24:54 ***/


#include "ngspice.h"
#include "psp102defs.h"
#include "sperror.h"
#include "suffix.h"

int psp102mDelete(GENmodel **inModel, IFuid modname, GENmodel *kill)

{
  register psp102model **model = (psp102model**)inModel;
  register psp102model *modfast =(psp102model*)kill;
  psp102instance *here;
  psp102instance *prev = NULL;
  psp102model **oldmod;
  
  oldmod = model;
  for ( ; *model ; model = &((*model)->psp102nextModel)) {
      if ((*model)->psp102modName == modname ||
          (modfast && *model == modfast))
	  goto delgot;
      oldmod = model;   
  } 
  return(E_NOMOD);
  
  delgot:
    *oldmod = (*model)->psp102nextModel; /* cut deleted device out of list */
    for (here = (*model)->psp102instances; here; here = here->psp102nextInstance)
    {    if(prev) FREE(prev);
         prev = here;
    }
    if(prev) FREE(prev);
    FREE(*model);
    return(OK);
}
