/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 11 Apr 2010 16:28:31 ***/


#include "ngspice.h"
#include "rtestdefs.h"
#include "cktdefs.h"
#include "iferrmsg.h"
#include "noisedef.h"
#include "suffix.h"

extern void   NevalSrc();
extern double Nintegrate();

static char* rtestnNames []= {""
};

int
rtestnoise (int mode, int operation, GENmodel *genmodel, CKTcircuit *ckt, Ndata *data, double *OnDens)
{
  rtestmodel *firstModel = (rtestmodel *) genmodel;
  rtestmodel *model;
  rtestinstance *inst;
  for (model=firstModel; model != NULL; model=model->rtestnextModel)
  {
    for (inst=model->rtestinstances; inst != NULL; inst=inst->rtestnextInstance)
    {
      if (inst->rtestowner != ARCHme) continue;
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