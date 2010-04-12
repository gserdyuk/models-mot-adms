/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Mon, 12 Apr 2010 19:24:54 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "complex.h"
#include "psp102defs.h"
#include "sperror.h"
#include "suffix.h"

int psp102pzLoad(GENmodel *inModel, CKTcircuit *ckt, SPcomplex *s)
{
  register psp102model *model = (psp102model*)inModel;
  register psp102instance *here;
  for ( ; model != NULL; model = model->psp102nextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->psp102instances; here != NULL ; here = here->psp102nextInstance)
    {  if(here->PTR_J_D_S_required) *(here->PTR_J_D_S)+=here->JSVAL_D_S *(s->real);
  if(here->PTR_J_D_B_required) *(here->PTR_J_D_B)+=here->JSVAL_D_B *(s->real);
  if(here->PTR_J_B_S_required) *(here->PTR_J_B_S)+=here->JSVAL_B_S *(s->real);
  if(here->PTR_J_B_B_required) *(here->PTR_J_B_B)+=here->JSVAL_B_B *(s->real);
  if(here->PTR_J_D_D_required) *(here->PTR_J_D_D)+=here->JSVAL_D_D *(s->real);
  if(here->PTR_J_B_D_required) *(here->PTR_J_B_D)+=here->JSVAL_B_D *(s->real);
  if(here->PTR_J_D_G_required) *(here->PTR_J_D_G)+=here->JSVAL_D_G *(s->real);
  if(here->PTR_J_B_G_required) *(here->PTR_J_B_G)+=here->JSVAL_B_G *(s->real);
  if(here->PTR_J_S_S_required) *(here->PTR_J_S_S)+=here->JSVAL_S_S *(s->real);
  if(here->PTR_J_S_B_required) *(here->PTR_J_S_B)+=here->JSVAL_S_B *(s->real);
  if(here->PTR_J_S_D_required) *(here->PTR_J_S_D)+=here->JSVAL_S_D *(s->real);
  if(here->PTR_J_S_G_required) *(here->PTR_J_S_G)+=here->JSVAL_S_G *(s->real);
  if(here->PTR_J_G_S_required) *(here->PTR_J_G_S)+=here->JSVAL_G_S *(s->real);
  if(here->PTR_J_G_B_required) *(here->PTR_J_G_B)+=here->JSVAL_G_B *(s->real);
  if(here->PTR_J_G_D_required) *(here->PTR_J_G_D)+=here->JSVAL_G_D *(s->real);
  if(here->PTR_J_G_G_required) *(here->PTR_J_G_G)+=here->JSVAL_G_G *(s->real);
  if(here->PTR_J_NOI2_NOI2_required) *(here->PTR_J_NOI2_NOI2)+=here->JSVAL_NOI2_NOI2 *(s->real);
  if(here->PTR_J_NOI2_S_required) *(here->PTR_J_NOI2_S)+=here->JSVAL_NOI2_S *(s->real);
  if(here->PTR_J_NOI2_B_required) *(here->PTR_J_NOI2_B)+=here->JSVAL_NOI2_B *(s->real);
  if(here->PTR_J_NOI2_G_required) *(here->PTR_J_NOI2_G)+=here->JSVAL_NOI2_G *(s->real);
  if(here->PTR_J_NOI2_D_required) *(here->PTR_J_NOI2_D)+=here->JSVAL_NOI2_D *(s->real);
  if(here->PTR_J_NOI_S_required) *(here->PTR_J_NOI_S)+=here->JSVAL_NOI_S *(s->real);
  if(here->PTR_J_NOI_B_required) *(here->PTR_J_NOI_B)+=here->JSVAL_NOI_B *(s->real);
  if(here->PTR_J_NOI_G_required) *(here->PTR_J_NOI_G)+=here->JSVAL_NOI_G *(s->real);
  if(here->PTR_J_NOI_D_required) *(here->PTR_J_NOI_D)+=here->JSVAL_NOI_D *(s->real);
  if(here->PTR_J_NOI_NOI2_required) *(here->PTR_J_NOI_NOI2)+=here->JSVAL_NOI_NOI2 *(s->real);
  if(here->PTR_J_NOI_NOI_required) *(here->PTR_J_NOI_NOI)+=here->JSVAL_NOI_NOI *(s->real);
  if(here->PTR_J_D_NOI2_required) *(here->PTR_J_D_NOI2)+=here->JSVAL_D_NOI2 *(s->real);
  if(here->PTR_J_S_NOI2_required) *(here->PTR_J_S_NOI2)+=here->JSVAL_S_NOI2 *(s->real);
  if(here->PTR_J_D_S_required) *(here->PTR_J_D_S)+=here->JDVAL_D_S *(s->real);
  if(here->PTR_J_D_B_required) *(here->PTR_J_D_B)+=here->JDVAL_D_B *(s->real);
  if(here->PTR_J_B_S_required) *(here->PTR_J_B_S)+=here->JDVAL_B_S *(s->real);
  if(here->PTR_J_B_B_required) *(here->PTR_J_B_B)+=here->JDVAL_B_B *(s->real);
  if(here->PTR_J_D_D_required) *(here->PTR_J_D_D)+=here->JDVAL_D_D *(s->real);
  if(here->PTR_J_B_D_required) *(here->PTR_J_B_D)+=here->JDVAL_B_D *(s->real);
  if(here->PTR_J_D_G_required) *(here->PTR_J_D_G)+=here->JDVAL_D_G *(s->real);
  if(here->PTR_J_B_G_required) *(here->PTR_J_B_G)+=here->JDVAL_B_G *(s->real);
  if(here->PTR_J_S_S_required) *(here->PTR_J_S_S)+=here->JDVAL_S_S *(s->real);
  if(here->PTR_J_S_B_required) *(here->PTR_J_S_B)+=here->JDVAL_S_B *(s->real);
  if(here->PTR_J_S_D_required) *(here->PTR_J_S_D)+=here->JDVAL_S_D *(s->real);
  if(here->PTR_J_S_G_required) *(here->PTR_J_S_G)+=here->JDVAL_S_G *(s->real);
  if(here->PTR_J_G_S_required) *(here->PTR_J_G_S)+=here->JDVAL_G_S *(s->real);
  if(here->PTR_J_G_B_required) *(here->PTR_J_G_B)+=here->JDVAL_G_B *(s->real);
  if(here->PTR_J_G_D_required) *(here->PTR_J_G_D)+=here->JDVAL_G_D *(s->real);
  if(here->PTR_J_G_G_required) *(here->PTR_J_G_G)+=here->JDVAL_G_G *(s->real);
  if(here->PTR_J_NOI_S_required) *(here->PTR_J_NOI_S)+=here->JDVAL_NOI_S *(s->real);
  if(here->PTR_J_NOI_B_required) *(here->PTR_J_NOI_B)+=here->JDVAL_NOI_B *(s->real);
  if(here->PTR_J_NOI_G_required) *(here->PTR_J_NOI_G)+=here->JDVAL_NOI_G *(s->real);
  if(here->PTR_J_NOI_D_required) *(here->PTR_J_NOI_D)+=here->JDVAL_NOI_D *(s->real);
  if(here->PTR_J_NOI_NOI_required) *(here->PTR_J_NOI_NOI)+=here->JDVAL_NOI_NOI *(s->real);
  if(here->PTR_J_G_NOI_required) *(here->PTR_J_G_NOI)+=here->JDVAL_G_NOI *(s->real);
  if(here->PTR_J_S_NOI_required) *(here->PTR_J_S_NOI)+=here->JDVAL_S_NOI *(s->real);
  if(here->PTR_J_D_NOI_required) *(here->PTR_J_D_NOI)+=here->JDVAL_D_NOI *(s->real);
  if(here->PTR_J_D_S_required) *(here->PTR_J_D_S+1)+=here->JDVAL_D_S *(s->imag);
  if(here->PTR_J_D_B_required) *(here->PTR_J_D_B+1)+=here->JDVAL_D_B *(s->imag);
  if(here->PTR_J_B_S_required) *(here->PTR_J_B_S+1)+=here->JDVAL_B_S *(s->imag);
  if(here->PTR_J_B_B_required) *(here->PTR_J_B_B+1)+=here->JDVAL_B_B *(s->imag);
  if(here->PTR_J_D_D_required) *(here->PTR_J_D_D+1)+=here->JDVAL_D_D *(s->imag);
  if(here->PTR_J_B_D_required) *(here->PTR_J_B_D+1)+=here->JDVAL_B_D *(s->imag);
  if(here->PTR_J_D_G_required) *(here->PTR_J_D_G+1)+=here->JDVAL_D_G *(s->imag);
  if(here->PTR_J_B_G_required) *(here->PTR_J_B_G+1)+=here->JDVAL_B_G *(s->imag);
  if(here->PTR_J_S_S_required) *(here->PTR_J_S_S+1)+=here->JDVAL_S_S *(s->imag);
  if(here->PTR_J_S_B_required) *(here->PTR_J_S_B+1)+=here->JDVAL_S_B *(s->imag);
  if(here->PTR_J_S_D_required) *(here->PTR_J_S_D+1)+=here->JDVAL_S_D *(s->imag);
  if(here->PTR_J_S_G_required) *(here->PTR_J_S_G+1)+=here->JDVAL_S_G *(s->imag);
  if(here->PTR_J_G_S_required) *(here->PTR_J_G_S+1)+=here->JDVAL_G_S *(s->imag);
  if(here->PTR_J_G_B_required) *(here->PTR_J_G_B+1)+=here->JDVAL_G_B *(s->imag);
  if(here->PTR_J_G_D_required) *(here->PTR_J_G_D+1)+=here->JDVAL_G_D *(s->imag);
  if(here->PTR_J_G_G_required) *(here->PTR_J_G_G+1)+=here->JDVAL_G_G *(s->imag);
  if(here->PTR_J_NOI_S_required) *(here->PTR_J_NOI_S+1)+=here->JDVAL_NOI_S *(s->imag);
  if(here->PTR_J_NOI_B_required) *(here->PTR_J_NOI_B+1)+=here->JDVAL_NOI_B *(s->imag);
  if(here->PTR_J_NOI_G_required) *(here->PTR_J_NOI_G+1)+=here->JDVAL_NOI_G *(s->imag);
  if(here->PTR_J_NOI_D_required) *(here->PTR_J_NOI_D+1)+=here->JDVAL_NOI_D *(s->imag);
  if(here->PTR_J_NOI_NOI_required) *(here->PTR_J_NOI_NOI+1)+=here->JDVAL_NOI_NOI *(s->imag);
  if(here->PTR_J_G_NOI_required) *(here->PTR_J_G_NOI+1)+=here->JDVAL_G_NOI *(s->imag);
  if(here->PTR_J_S_NOI_required) *(here->PTR_J_S_NOI+1)+=here->JDVAL_S_NOI *(s->imag);
  if(here->PTR_J_D_NOI_required) *(here->PTR_J_D_NOI+1)+=here->JDVAL_D_NOI *(s->imag);

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
