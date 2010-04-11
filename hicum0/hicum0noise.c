/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:13 ***/


#include "ngspice.h"
#include "hicum0defs.h"
#include "cktdefs.h"
#include "iferrmsg.h"
#include "noisedef.h"
#include "suffix.h"

extern void   NevalSrc();
extern double Nintegrate();

static char* hicum0nNames []= {"","","","","","",""
};

int
hicum0noise (int mode, int operation, GENmodel *genmodel, CKTcircuit *ckt, Ndata *data, double *OnDens)
{
  hicum0model *firstModel = (hicum0model *) genmodel;
  hicum0model *model;
  hicum0instance *inst;
  for (model=firstModel; model != NULL; model=model->hicum0nextModel)
  {
    for (inst=model->hicum0instances; inst != NULL; inst=inst->hicum0nextInstance)
    {
      if (inst->hicum0owner != ARCHme) continue;
      switch (operation)
      {
        case N_OPEN:
          break;
        case N_CALC:
          switch (mode)
          {
            case N_DENS:
              break;
            case INT_NOIZ:
              break;
          }
          break;
        case N_CLOSE:
          return (OK);
          break;
      }
    }
  }
  return(OK);
}