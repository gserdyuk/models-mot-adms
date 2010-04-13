/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:45:17 ***/


#include "ngspice.h"
#include "mextramdefs.h"
#include "suffix.h"

void mextramdestroy(GENmodel **inModel)

{
  register mextrammodel **model = (mextrammodel**)inModel;
  register mextraminstance *here;
  mextraminstance *prev = NULL;
  mextrammodel *mod = *model;
  mextrammodel *oldmod = NULL;
  
  for ( ; mod ; mod = mod->mextramnextModel ) {
      if (oldmod) FREE(oldmod);
      oldmod = mod;
      prev = (mextraminstance *)NULL;  
      for (here = mod->mextraminstances; here ; here = here->mextramnextInstance) {
          if(prev) FREE(prev);
	  prev = here;
	  }
          if(prev) FREE(prev);
    } 
    if(oldmod) FREE(oldmod);
    *model = NULL;
  return;
}
