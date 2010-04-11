/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:13 ***/


#include "ngspice.h"
#include "hicum0defs.h"
#include "suffix.h"

void hicum0destroy(GENmodel **inModel)

{
  register hicum0model **model = (hicum0model**)inModel;
  register hicum0instance *here;
  hicum0instance *prev = NULL;
  hicum0model *mod = *model;
  hicum0model *oldmod = NULL;
  
  for ( ; mod ; mod = mod->hicum0nextModel ) {
      if (oldmod) FREE(oldmod);
      oldmod = mod;
      prev = (hicum0instance *)NULL;  
      for (here = mod->hicum0instances; here ; here = here->hicum0nextInstance) {
          if(prev) FREE(prev);
	  prev = here;
	  }
          if(prev) FREE(prev);
    } 
    if(oldmod) FREE(oldmod);
    *model = NULL;
  return;
}
