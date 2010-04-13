/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:46:34 ***/


#include "ngspice.h"
#include "rtestdefs.h"
#include "suffix.h"

void rtestdestroy(GENmodel **inModel)

{
  register rtestmodel **model = (rtestmodel**)inModel;
  register rtestinstance *here;
  rtestinstance *prev = NULL;
  rtestmodel *mod = *model;
  rtestmodel *oldmod = NULL;
  
  for ( ; mod ; mod = mod->rtestnextModel ) {
      if (oldmod) FREE(oldmod);
      oldmod = mod;
      prev = (rtestinstance *)NULL;  
      for (here = mod->rtestinstances; here ; here = here->rtestnextInstance) {
          if(prev) FREE(prev);
	  prev = here;
	  }
          if(prev) FREE(prev);
    } 
    if(oldmod) FREE(oldmod);
    *model = NULL;
  return;
}
