/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:36 ***/


#include "ngspice.h"
#include "hicum2defs.h"
#include "cktdefs.h"
#include "iferrmsg.h"
#include "noisedef.h"
#include "suffix.h"

extern void   NevalSrc();
extern double Nintegrate();

static char* hicum2nNames []= {"","","","","","","","","","","","",""
};

int
hicum2noise (int mode, int operation, GENmodel *genmodel, CKTcircuit *ckt, Ndata *data, double *OnDens)
{
  hicum2model *firstModel = (hicum2model *) genmodel;
  hicum2model *model;
  hicum2instance *inst;
  for (model=firstModel; model != NULL; model=model->hicum2nextModel)
  {
    for (inst=model->hicum2instances; inst != NULL; inst=inst->hicum2nextInstance)
    {
      if (inst->hicum2owner != ARCHme) continue;
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