/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:49 ***/


#include "ngspice.h"
#include "psp102defs.h"
#include "suffix.h"

void psp102destroy(GENmodel **inModel)

{
  register psp102model **model = (psp102model**)inModel;
  register psp102instance *here;
  psp102instance *prev = NULL;
  psp102model *mod = *model;
  psp102model *oldmod = NULL;
  
  for ( ; mod ; mod = mod->psp102nextModel ) {
      if (oldmod) FREE(oldmod);
      oldmod = mod;
      prev = (psp102instance *)NULL;  
      for (here = mod->psp102instances; here ; here = here->psp102nextInstance) {
          if(prev) FREE(prev);
	  prev = here;
	  }
          if(prev) FREE(prev);
    } 
    if(oldmod) FREE(oldmod);
    *model = NULL;
  return;
}
