/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Wed, 24 Mar 2010 00:50:59 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "ekvdefs.h"
#include "sperror.h"
#include "suffix.h"

int ekvacLoad(GENmodel *inModel, CKTcircuit *ckt)
{
  register ekvmodel *model = (ekvmodel*)inModel;
  register ekvinstance *here;
  for ( ; model != NULL; model = model->ekvnextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->ekvinstances; here != NULL ; here = here->ekvnextInstance)
    {  if(here->PTR_J_di_si_required) *(here->PTR_J_di_si)+=here->JSVAL_di_si;
  if(here->PTR_J_di_b_required) *(here->PTR_J_di_b)+=here->JSVAL_di_b;
  if(here->PTR_J_si_si_required) *(here->PTR_J_si_si)+=here->JSVAL_si_si;
  if(here->PTR_J_si_b_required) *(here->PTR_J_si_b)+=here->JSVAL_si_b;
  if(here->PTR_J_di_di_required) *(here->PTR_J_di_di)+=here->JSVAL_di_di;
  if(here->PTR_J_si_di_required) *(here->PTR_J_si_di)+=here->JSVAL_si_di;
  if(here->PTR_J_di_g_required) *(here->PTR_J_di_g)+=here->JSVAL_di_g;
  if(here->PTR_J_si_g_required) *(here->PTR_J_si_g)+=here->JSVAL_si_g;
  if(here->PTR_J_b_si_required) *(here->PTR_J_b_si)+=here->JSVAL_b_si;
  if(here->PTR_J_b_b_required) *(here->PTR_J_b_b)+=here->JSVAL_b_b;
  if(here->PTR_J_b_di_required) *(here->PTR_J_b_di)+=here->JSVAL_b_di;
  if(here->PTR_J_b_g_required) *(here->PTR_J_b_g)+=here->JSVAL_b_g;
  if(here->PTR_J_d_d_required) *(here->PTR_J_d_d)+=here->JSVAL_d_d;
  if(here->PTR_J_d_di_required) *(here->PTR_J_d_di)+=here->JSVAL_d_di;
  if(here->PTR_J_di_d_required) *(here->PTR_J_di_d)+=here->JSVAL_di_d;
  if(here->PTR_J_s_s_required) *(here->PTR_J_s_s)+=here->JSVAL_s_s;
  if(here->PTR_J_s_si_required) *(here->PTR_J_s_si)+=here->JSVAL_s_si;
  if(here->PTR_J_si_s_required) *(here->PTR_J_si_s)+=here->JSVAL_si_s;
  if(here->PTR_J_di_si_required) *(here->PTR_J_di_si+1)+=ckt->CKTomega*here->JDVAL_di_si;
  if(here->PTR_J_di_b_required) *(here->PTR_J_di_b+1)+=ckt->CKTomega*here->JDVAL_di_b;
  if(here->PTR_J_si_si_required) *(here->PTR_J_si_si+1)+=ckt->CKTomega*here->JDVAL_si_si;
  if(here->PTR_J_si_b_required) *(here->PTR_J_si_b+1)+=ckt->CKTomega*here->JDVAL_si_b;
  if(here->PTR_J_di_di_required) *(here->PTR_J_di_di+1)+=ckt->CKTomega*here->JDVAL_di_di;
  if(here->PTR_J_si_di_required) *(here->PTR_J_si_di+1)+=ckt->CKTomega*here->JDVAL_si_di;
  if(here->PTR_J_di_g_required) *(here->PTR_J_di_g+1)+=ckt->CKTomega*here->JDVAL_di_g;
  if(here->PTR_J_si_g_required) *(here->PTR_J_si_g+1)+=ckt->CKTomega*here->JDVAL_si_g;
  if(here->PTR_J_b_si_required) *(here->PTR_J_b_si+1)+=ckt->CKTomega*here->JDVAL_b_si;
  if(here->PTR_J_b_b_required) *(here->PTR_J_b_b+1)+=ckt->CKTomega*here->JDVAL_b_b;
  if(here->PTR_J_b_di_required) *(here->PTR_J_b_di+1)+=ckt->CKTomega*here->JDVAL_b_di;
  if(here->PTR_J_b_g_required) *(here->PTR_J_b_g+1)+=ckt->CKTomega*here->JDVAL_b_g;
  if(here->PTR_J_g_si_required) *(here->PTR_J_g_si+1)+=ckt->CKTomega*here->JDVAL_g_si;
  if(here->PTR_J_g_b_required) *(here->PTR_J_g_b+1)+=ckt->CKTomega*here->JDVAL_g_b;
  if(here->PTR_J_g_di_required) *(here->PTR_J_g_di+1)+=ckt->CKTomega*here->JDVAL_g_di;
  if(here->PTR_J_g_g_required) *(here->PTR_J_g_g+1)+=ckt->CKTomega*here->JDVAL_g_g;

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
