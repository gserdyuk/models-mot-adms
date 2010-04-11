/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:13 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "hicum0defs.h"
#include "sperror.h"
#include "suffix.h"

int hicum0acLoad(GENmodel *inModel, CKTcircuit *ckt)
{
  register hicum0model *model = (hicum0model*)inModel;
  register hicum0instance *here;
  for ( ; model != NULL; model = model->hicum0nextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->hicum0instances; here != NULL ; here = here->hicum0nextInstance)
    {  if(here->PTR_J_bi_bi_required) *(here->PTR_J_bi_bi)+=here->JSVAL_bi_bi;
  if(here->PTR_J_bi_ei_required) *(here->PTR_J_bi_ei)+=here->JSVAL_bi_ei;
  if(here->PTR_J_ei_bi_required) *(here->PTR_J_ei_bi)+=here->JSVAL_ei_bi;
  if(here->PTR_J_ei_ei_required) *(here->PTR_J_ei_ei)+=here->JSVAL_ei_ei;
  if(here->PTR_J_bi_ci_required) *(here->PTR_J_bi_ci)+=here->JSVAL_bi_ci;
  if(here->PTR_J_ci_bi_required) *(here->PTR_J_ci_bi)+=here->JSVAL_ci_bi;
  if(here->PTR_J_ci_ci_required) *(here->PTR_J_ci_ci)+=here->JSVAL_ci_ci;
  if(here->PTR_J_b_s_required) *(here->PTR_J_b_s)+=here->JSVAL_b_s;
  if(here->PTR_J_b_ci_required) *(here->PTR_J_b_ci)+=here->JSVAL_b_ci;
  if(here->PTR_J_s_s_required) *(here->PTR_J_s_s)+=here->JSVAL_s_s;
  if(here->PTR_J_s_ci_required) *(here->PTR_J_s_ci)+=here->JSVAL_s_ci;
  if(here->PTR_J_b_b_required) *(here->PTR_J_b_b)+=here->JSVAL_b_b;
  if(here->PTR_J_s_b_required) *(here->PTR_J_s_b)+=here->JSVAL_s_b;
  if(here->PTR_J_b_tnode_required) *(here->PTR_J_b_tnode)+=here->JSVAL_b_tnode;
  if(here->PTR_J_s_tnode_required) *(here->PTR_J_s_tnode)+=here->JSVAL_s_tnode;
  if(here->PTR_J_s_bi_required) *(here->PTR_J_s_bi)+=here->JSVAL_s_bi;
  if(here->PTR_J_s_ei_required) *(here->PTR_J_s_ei)+=here->JSVAL_s_ei;
  if(here->PTR_J_ci_ei_required) *(here->PTR_J_ci_ei)+=here->JSVAL_ci_ei;
  if(here->PTR_J_ci_s_required) *(here->PTR_J_ci_s)+=here->JSVAL_ci_s;
  if(here->PTR_J_ci_tnode_required) *(here->PTR_J_ci_tnode)+=here->JSVAL_ci_tnode;
  if(here->PTR_J_ci_b_required) *(here->PTR_J_ci_b)+=here->JSVAL_ci_b;
  if(here->PTR_J_b_bi_required) *(here->PTR_J_b_bi)+=here->JSVAL_b_bi;
  if(here->PTR_J_e_e_required) *(here->PTR_J_e_e)+=here->JSVAL_e_e;
  if(here->PTR_J_ei_tnode_required) *(here->PTR_J_ei_tnode)+=here->JSVAL_ei_tnode;
  if(here->PTR_J_e_tnode_required) *(here->PTR_J_e_tnode)+=here->JSVAL_e_tnode;
  if(here->PTR_J_ei_e_required) *(here->PTR_J_ei_e)+=here->JSVAL_ei_e;
  if(here->PTR_J_e_ei_required) *(here->PTR_J_e_ei)+=here->JSVAL_e_ei;
  if(here->PTR_J_c_tnode_required) *(here->PTR_J_c_tnode)+=here->JSVAL_c_tnode;
  if(here->PTR_J_ci_c_required) *(here->PTR_J_ci_c)+=here->JSVAL_ci_c;
  if(here->PTR_J_c_ci_required) *(here->PTR_J_c_ci)+=here->JSVAL_c_ci;
  if(here->PTR_J_c_c_required) *(here->PTR_J_c_c)+=here->JSVAL_c_c;
  if(here->PTR_J_b_ei_required) *(here->PTR_J_b_ei)+=here->JSVAL_b_ei;
  if(here->PTR_J_bi_b_required) *(here->PTR_J_bi_b)+=here->JSVAL_bi_b;
  if(here->PTR_J_bi_tnode_required) *(here->PTR_J_bi_tnode)+=here->JSVAL_bi_tnode;
  if(here->PTR_J_ei_ci_required) *(here->PTR_J_ei_ci)+=here->JSVAL_ei_ci;
  if(here->PTR_J_ei_b_required) *(here->PTR_J_ei_b)+=here->JSVAL_ei_b;
  if(here->PTR_J_tnode_tnode_required) *(here->PTR_J_tnode_tnode)+=here->JSVAL_tnode_tnode;
  if(here->PTR_J_tnode_ci_required) *(here->PTR_J_tnode_ci)+=here->JSVAL_tnode_ci;
  if(here->PTR_J_tnode_ei_required) *(here->PTR_J_tnode_ei)+=here->JSVAL_tnode_ei;
  if(here->PTR_J_tnode_b_required) *(here->PTR_J_tnode_b)+=here->JSVAL_tnode_b;
  if(here->PTR_J_tnode_bi_required) *(here->PTR_J_tnode_bi)+=here->JSVAL_tnode_bi;
  if(here->PTR_J_tnode_s_required) *(here->PTR_J_tnode_s)+=here->JSVAL_tnode_s;
  if(here->PTR_J_tnode_e_required) *(here->PTR_J_tnode_e)+=here->JSVAL_tnode_e;
  if(here->PTR_J_tnode_c_required) *(here->PTR_J_tnode_c)+=here->JSVAL_tnode_c;
  if(here->PTR_J_bi_bi_required) *(here->PTR_J_bi_bi+1)+=ckt->CKTomega*here->JDVAL_bi_bi;
  if(here->PTR_J_bi_ei_required) *(here->PTR_J_bi_ei+1)+=ckt->CKTomega*here->JDVAL_bi_ei;
  if(here->PTR_J_ei_bi_required) *(here->PTR_J_ei_bi+1)+=ckt->CKTomega*here->JDVAL_ei_bi;
  if(here->PTR_J_ei_ei_required) *(here->PTR_J_ei_ei+1)+=ckt->CKTomega*here->JDVAL_ei_ei;
  if(here->PTR_J_bi_ci_required) *(here->PTR_J_bi_ci+1)+=ckt->CKTomega*here->JDVAL_bi_ci;
  if(here->PTR_J_ci_bi_required) *(here->PTR_J_ci_bi+1)+=ckt->CKTomega*here->JDVAL_ci_bi;
  if(here->PTR_J_ci_ci_required) *(here->PTR_J_ci_ci+1)+=ckt->CKTomega*here->JDVAL_ci_ci;
  if(here->PTR_J_b_ci_required) *(here->PTR_J_b_ci+1)+=ckt->CKTomega*here->JDVAL_b_ci;
  if(here->PTR_J_s_s_required) *(here->PTR_J_s_s+1)+=ckt->CKTomega*here->JDVAL_s_s;
  if(here->PTR_J_s_ci_required) *(here->PTR_J_s_ci+1)+=ckt->CKTomega*here->JDVAL_s_ci;
  if(here->PTR_J_b_b_required) *(here->PTR_J_b_b+1)+=ckt->CKTomega*here->JDVAL_b_b;
  if(here->PTR_J_s_b_required) *(here->PTR_J_s_b+1)+=ckt->CKTomega*here->JDVAL_s_b;
  if(here->PTR_J_b_tnode_required) *(here->PTR_J_b_tnode+1)+=ckt->CKTomega*here->JDVAL_b_tnode;
  if(here->PTR_J_s_tnode_required) *(here->PTR_J_s_tnode+1)+=ckt->CKTomega*here->JDVAL_s_tnode;
  if(here->PTR_J_s_bi_required) *(here->PTR_J_s_bi+1)+=ckt->CKTomega*here->JDVAL_s_bi;
  if(here->PTR_J_s_ei_required) *(here->PTR_J_s_ei+1)+=ckt->CKTomega*here->JDVAL_s_ei;
  if(here->PTR_J_ci_ei_required) *(here->PTR_J_ci_ei+1)+=ckt->CKTomega*here->JDVAL_ci_ei;
  if(here->PTR_J_ci_s_required) *(here->PTR_J_ci_s+1)+=ckt->CKTomega*here->JDVAL_ci_s;
  if(here->PTR_J_ci_tnode_required) *(here->PTR_J_ci_tnode+1)+=ckt->CKTomega*here->JDVAL_ci_tnode;
  if(here->PTR_J_ci_b_required) *(here->PTR_J_ci_b+1)+=ckt->CKTomega*here->JDVAL_ci_b;
  if(here->PTR_J_b_bi_required) *(here->PTR_J_b_bi+1)+=ckt->CKTomega*here->JDVAL_b_bi;
  if(here->PTR_J_b_e_required) *(here->PTR_J_b_e+1)+=ckt->CKTomega*here->JDVAL_b_e;
  if(here->PTR_J_e_b_required) *(here->PTR_J_e_b+1)+=ckt->CKTomega*here->JDVAL_e_b;
  if(here->PTR_J_e_e_required) *(here->PTR_J_e_e+1)+=ckt->CKTomega*here->JDVAL_e_e;
  if(here->PTR_J_ei_tnode_required) *(here->PTR_J_ei_tnode+1)+=ckt->CKTomega*here->JDVAL_ei_tnode;
  if(here->PTR_J_bi_b_required) *(here->PTR_J_bi_b+1)+=ckt->CKTomega*here->JDVAL_bi_b;
  if(here->PTR_J_bi_tnode_required) *(here->PTR_J_bi_tnode+1)+=ckt->CKTomega*here->JDVAL_bi_tnode;
  if(here->PTR_J_ei_ci_required) *(here->PTR_J_ei_ci+1)+=ckt->CKTomega*here->JDVAL_ei_ci;
  if(here->PTR_J_ei_b_required) *(here->PTR_J_ei_b+1)+=ckt->CKTomega*here->JDVAL_ei_b;
  if(here->PTR_J_tnode_tnode_required) *(here->PTR_J_tnode_tnode+1)+=ckt->CKTomega*here->JDVAL_tnode_tnode;

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
