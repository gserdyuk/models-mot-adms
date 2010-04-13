/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:12:43 ***/


#include "ngspice.h"
#include "ekvdefs.h"
#include "suffix.h"

void ekvdestroy(GENmodel **inModel)

{
  register ekvmodel **model = (ekvmodel**)inModel;
  register ekvinstance *here;
  ekvinstance *prev = NULL;
  ekvmodel *mod = *model;
  ekvmodel *oldmod = NULL;
  
  for ( ; mod ; mod = mod->ekvnextModel ) {
      if (oldmod) FREE(oldmod);
      oldmod = mod;
      prev = (ekvinstance *)NULL;  
      for (here = mod->ekvinstances; here ; here = here->ekvnextInstance) {
          if(prev) FREE(prev);
	  prev = here;
	  }
          if(prev) FREE(prev);
    } 
    if(oldmod) FREE(oldmod);
    *model = NULL;
  return;
}
