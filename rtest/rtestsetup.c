/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 11 Apr 2010 16:28:31 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "rtestdefs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

int rtestsetup (SMPmatrix *matrix, GENmodel *inModel, CKTcircuit *ckt, int *states)
     /* load the rtest device structure with those pointers needed later 
      * for fast matrix loading 
      */
{
  register rtestmodel *model = (rtestmodel*)inModel;
  register rtestinstance *here;
  
  /*  loop through all the rtest device models */
  for ( ;model != NULL ;model = model->rtestnextModel )
  {
    if(model->d_Given == FALSE) model->d=1;
    if(model->R1_Given == FALSE) model->R1=10000;
    for ( here = model->rtestinstances ;here != NULL ; here = here->rtestnextInstance )
    {
      /* set states */
      /* set Sparse Matrix Pointers */
      here->PTR_J_top_top_required=0;
      here->PTR_J_top_low_required=0;
      here->PTR_J_low_top_required=0;
      here->PTR_J_low_low_required=0;

      rtestguesstopology(matrix,ckt,model,here);

      /* Internal Nodes */
      {
        int error;
        CKTnode *tmp;
      }
        if(here->PTR_J_top_top_required==1)
        {
          here->PTR_J_top_top=SMPmakeElt(matrix,here->topNode,here->topNode);
        }
        if(here->PTR_J_top_low_required==1)
        {
          here->PTR_J_top_low=SMPmakeElt(matrix,here->topNode,here->lowNode);
        }
        if(here->PTR_J_low_top_required==1)
        {
          here->PTR_J_low_top=SMPmakeElt(matrix,here->lowNode,here->topNode);
        }
        if(here->PTR_J_low_low_required==1)
        {
          here->PTR_J_low_low=SMPmakeElt(matrix,here->lowNode,here->lowNode);
        }

    }
  }
  return(OK);
}
