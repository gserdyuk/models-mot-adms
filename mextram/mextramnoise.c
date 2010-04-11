/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:15 ***/


#include "ngspice.h"
#include "mextramdefs.h"
#include "cktdefs.h"
#include "iferrmsg.h"
#include "noisedef.h"
#include "suffix.h"

extern void   NevalSrc();
extern double Nintegrate();

static char* mextramnNames []= {"","","","","","","","","","","","","","","","","","","","","","","","","","",""
};

int
mextramnoise (int mode, int operation, GENmodel *genmodel, CKTcircuit *ckt, Ndata *data, double *OnDens)
{
  mextrammodel *firstModel = (mextrammodel *) genmodel;
  mextrammodel *model;
  mextraminstance *inst;
  for (model=firstModel; model != NULL; model=model->mextramnextModel)
  {
    for (inst=model->mextraminstances; inst != NULL; inst=inst->mextramnextInstance)
    {
      if (inst->mextramowner != ARCHme) continue;
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