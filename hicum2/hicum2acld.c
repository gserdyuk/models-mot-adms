/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:36 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "hicum2defs.h"
#include "sperror.h"
#include "suffix.h"

int hicum2acLoad(GENmodel *inModel, CKTcircuit *ckt)
{
  register hicum2model *model = (hicum2model*)inModel;
  register hicum2instance *here;
  for ( ; model != NULL; model = model->hicum2nextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->hicum2instances; here != NULL ; here = here->hicum2nextInstance)
    {  if(here->PTR_J_bi_bi_required) *(here->PTR_J_bi_bi)+=here->JSVAL_bi_bi;
  if(here->PTR_J_bi_ei_required) *(here->PTR_J_bi_ei)+=here->JSVAL_bi_ei;
  if(here->PTR_J_ei_bi_required) *(here->PTR_J_ei_bi)+=here->JSVAL_ei_bi;
  if(here->PTR_J_ei_ei_required) *(here->PTR_J_ei_ei)+=here->JSVAL_ei_ei;
  if(here->PTR_J_bi_ci_required) *(here->PTR_J_bi_ci)+=here->JSVAL_bi_ci;
  if(here->PTR_J_ci_bi_required) *(here->PTR_J_ci_bi)+=here->JSVAL_ci_bi;
  if(here->PTR_J_ci_ci_required) *(here->PTR_J_ci_ci)+=here->JSVAL_ci_ci;
  if(here->PTR_J_b_tnode_required) *(here->PTR_J_b_tnode)+=here->JSVAL_b_tnode;
  if(here->PTR_J_ci_tnode_required) *(here->PTR_J_ci_tnode)+=here->JSVAL_ci_tnode;
  if(here->PTR_J_b_bp_required) *(here->PTR_J_b_bp)+=here->JSVAL_b_bp;
  if(here->PTR_J_ci_bp_required) *(here->PTR_J_ci_bp)+=here->JSVAL_ci_bp;
  if(here->PTR_J_b_b_required) *(here->PTR_J_b_b)+=here->JSVAL_b_b;
  if(here->PTR_J_ci_ei_required) *(here->PTR_J_ci_ei)+=here->JSVAL_ci_ei;
  if(here->PTR_J_bp_bp_required) *(here->PTR_J_bp_bp)+=here->JSVAL_bp_bp;
  if(here->PTR_J_bp_ci_required) *(here->PTR_J_bp_ci)+=here->JSVAL_bp_ci;
  if(here->PTR_J_bp_tnode_required) *(here->PTR_J_bp_tnode)+=here->JSVAL_bp_tnode;
  if(here->PTR_J_bp_b_required) *(here->PTR_J_bp_b)+=here->JSVAL_bp_b;
  if(here->PTR_J_bp_ei_required) *(here->PTR_J_bp_ei)+=here->JSVAL_bp_ei;
  if(here->PTR_J_bp_bi_required) *(here->PTR_J_bp_bi)+=here->JSVAL_bp_bi;
  if(here->PTR_J_bi_tnode_required) *(here->PTR_J_bi_tnode)+=here->JSVAL_bi_tnode;
  if(here->PTR_J_bi_bp_required) *(here->PTR_J_bi_bp)+=here->JSVAL_bi_bp;
  if(here->PTR_J_ei_tnode_required) *(here->PTR_J_ei_tnode)+=here->JSVAL_ei_tnode;
  if(here->PTR_J_ei_bp_required) *(here->PTR_J_ei_bp)+=here->JSVAL_ei_bp;
  if(here->PTR_J_ei_ci_required) *(here->PTR_J_ei_ci)+=here->JSVAL_ei_ci;
  if(here->PTR_J_bp_si_required) *(here->PTR_J_bp_si)+=here->JSVAL_bp_si;
  if(here->PTR_J_si_si_required) *(here->PTR_J_si_si)+=here->JSVAL_si_si;
  if(here->PTR_J_si_ci_required) *(here->PTR_J_si_ci)+=here->JSVAL_si_ci;
  if(here->PTR_J_si_bp_required) *(here->PTR_J_si_bp)+=here->JSVAL_si_bp;
  if(here->PTR_J_si_tnode_required) *(here->PTR_J_si_tnode)+=here->JSVAL_si_tnode;
  if(here->PTR_J_e_e_required) *(here->PTR_J_e_e)+=here->JSVAL_e_e;
  if(here->PTR_J_si_bi_required) *(here->PTR_J_si_bi)+=here->JSVAL_si_bi;
  if(here->PTR_J_si_ei_required) *(here->PTR_J_si_ei)+=here->JSVAL_si_ei;
  if(here->PTR_J_ci_si_required) *(here->PTR_J_ci_si)+=here->JSVAL_ci_si;
  if(here->PTR_J_ci_xf2_required) *(here->PTR_J_ci_xf2)+=here->JSVAL_ci_xf2;
  if(here->PTR_J_ei_xf2_required) *(here->PTR_J_ei_xf2)+=here->JSVAL_ei_xf2;
  if(here->PTR_J_c_tnode_required) *(here->PTR_J_c_tnode)+=here->JSVAL_c_tnode;
  if(here->PTR_J_ci_c_required) *(here->PTR_J_ci_c)+=here->JSVAL_ci_c;
  if(here->PTR_J_c_ci_required) *(here->PTR_J_c_ci)+=here->JSVAL_c_ci;
  if(here->PTR_J_c_c_required) *(here->PTR_J_c_c)+=here->JSVAL_c_c;
  if(here->PTR_J_e_tnode_required) *(here->PTR_J_e_tnode)+=here->JSVAL_e_tnode;
  if(here->PTR_J_ei_e_required) *(here->PTR_J_ei_e)+=here->JSVAL_ei_e;
  if(here->PTR_J_e_ei_required) *(here->PTR_J_e_ei)+=here->JSVAL_e_ei;
  if(here->PTR_J_si_s_required) *(here->PTR_J_si_s)+=here->JSVAL_si_s;
  if(here->PTR_J_s_si_required) *(here->PTR_J_s_si)+=here->JSVAL_s_si;
  if(here->PTR_J_s_s_required) *(here->PTR_J_s_s)+=here->JSVAL_s_s;
  if(here->PTR_J_tnode_tnode_required) *(here->PTR_J_tnode_tnode)+=here->JSVAL_tnode_tnode;
  if(here->PTR_J_tnode_bi_required) *(here->PTR_J_tnode_bi)+=here->JSVAL_tnode_bi;
  if(here->PTR_J_tnode_ci_required) *(here->PTR_J_tnode_ci)+=here->JSVAL_tnode_ci;
  if(here->PTR_J_tnode_ei_required) *(here->PTR_J_tnode_ei)+=here->JSVAL_tnode_ei;
  if(here->PTR_J_tnode_si_required) *(here->PTR_J_tnode_si)+=here->JSVAL_tnode_si;
  if(here->PTR_J_tnode_bp_required) *(here->PTR_J_tnode_bp)+=here->JSVAL_tnode_bp;
  if(here->PTR_J_tnode_e_required) *(here->PTR_J_tnode_e)+=here->JSVAL_tnode_e;
  if(here->PTR_J_tnode_c_required) *(here->PTR_J_tnode_c)+=here->JSVAL_tnode_c;
  if(here->PTR_J_tnode_b_required) *(here->PTR_J_tnode_b)+=here->JSVAL_tnode_b;
  if(here->PTR_J_xf1_bi_required) *(here->PTR_J_xf1_bi)+=here->JSVAL_xf1_bi;
  if(here->PTR_J_xf1_ci_required) *(here->PTR_J_xf1_ci)+=here->JSVAL_xf1_ci;
  if(here->PTR_J_xf1_ei_required) *(here->PTR_J_xf1_ei)+=here->JSVAL_xf1_ei;
  if(here->PTR_J_xf1_tnode_required) *(here->PTR_J_xf1_tnode)+=here->JSVAL_xf1_tnode;
  if(here->PTR_J_xf1_xf2_required) *(here->PTR_J_xf1_xf2)+=here->JSVAL_xf1_xf2;
  if(here->PTR_J_xf1_xf1_required) *(here->PTR_J_xf1_xf1)+=here->JSVAL_xf1_xf1;
  if(here->PTR_J_xf2_bi_required) *(here->PTR_J_xf2_bi)+=here->JSVAL_xf2_bi;
  if(here->PTR_J_xf2_ci_required) *(here->PTR_J_xf2_ci)+=here->JSVAL_xf2_ci;
  if(here->PTR_J_xf2_tnode_required) *(here->PTR_J_xf2_tnode)+=here->JSVAL_xf2_tnode;
  if(here->PTR_J_xf2_ei_required) *(here->PTR_J_xf2_ei)+=here->JSVAL_xf2_ei;
  if(here->PTR_J_xf2_xf1_required) *(here->PTR_J_xf2_xf1)+=here->JSVAL_xf2_xf1;
  if(here->PTR_J_xf2_xf2_required) *(here->PTR_J_xf2_xf2)+=here->JSVAL_xf2_xf2;
  if(here->PTR_J_xf3_bi_required) *(here->PTR_J_xf3_bi)+=here->JSVAL_xf3_bi;
  if(here->PTR_J_xf3_ei_required) *(here->PTR_J_xf3_ei)+=here->JSVAL_xf3_ei;
  if(here->PTR_J_xf3_ci_required) *(here->PTR_J_xf3_ci)+=here->JSVAL_xf3_ci;
  if(here->PTR_J_xf3_tnode_required) *(here->PTR_J_xf3_tnode)+=here->JSVAL_xf3_tnode;
  if(here->PTR_J_xf3_xf4_required) *(here->PTR_J_xf3_xf4)+=here->JSVAL_xf3_xf4;
  if(here->PTR_J_xf3_xf3_required) *(here->PTR_J_xf3_xf3)+=here->JSVAL_xf3_xf3;
  if(here->PTR_J_xf4_bi_required) *(here->PTR_J_xf4_bi)+=here->JSVAL_xf4_bi;
  if(here->PTR_J_xf4_ci_required) *(here->PTR_J_xf4_ci)+=here->JSVAL_xf4_ci;
  if(here->PTR_J_xf4_tnode_required) *(here->PTR_J_xf4_tnode)+=here->JSVAL_xf4_tnode;
  if(here->PTR_J_xf4_ei_required) *(here->PTR_J_xf4_ei)+=here->JSVAL_xf4_ei;
  if(here->PTR_J_xf4_xf3_required) *(here->PTR_J_xf4_xf3)+=here->JSVAL_xf4_xf3;
  if(here->PTR_J_xf4_xf4_required) *(here->PTR_J_xf4_xf4)+=here->JSVAL_xf4_xf4;
  if(here->PTR_J_s_tnode_required) *(here->PTR_J_s_tnode)+=here->JSVAL_s_tnode;
  if(here->PTR_J_bi_bi_required) *(here->PTR_J_bi_bi+1)+=ckt->CKTomega*here->JDVAL_bi_bi;
  if(here->PTR_J_bi_ei_required) *(here->PTR_J_bi_ei+1)+=ckt->CKTomega*here->JDVAL_bi_ei;
  if(here->PTR_J_ei_bi_required) *(here->PTR_J_ei_bi+1)+=ckt->CKTomega*here->JDVAL_ei_bi;
  if(here->PTR_J_ei_ei_required) *(here->PTR_J_ei_ei+1)+=ckt->CKTomega*here->JDVAL_ei_ei;
  if(here->PTR_J_bi_ci_required) *(here->PTR_J_bi_ci+1)+=ckt->CKTomega*here->JDVAL_bi_ci;
  if(here->PTR_J_ci_bi_required) *(here->PTR_J_ci_bi+1)+=ckt->CKTomega*here->JDVAL_ci_bi;
  if(here->PTR_J_ci_ci_required) *(here->PTR_J_ci_ci+1)+=ckt->CKTomega*here->JDVAL_ci_ci;
  if(here->PTR_J_b_bi_required) *(here->PTR_J_b_bi+1)+=ckt->CKTomega*here->JDVAL_b_bi;
  if(here->PTR_J_b_ci_required) *(here->PTR_J_b_ci+1)+=ckt->CKTomega*here->JDVAL_b_ci;
  if(here->PTR_J_b_tnode_required) *(here->PTR_J_b_tnode+1)+=ckt->CKTomega*here->JDVAL_b_tnode;
  if(here->PTR_J_ci_tnode_required) *(here->PTR_J_ci_tnode+1)+=ckt->CKTomega*here->JDVAL_ci_tnode;
  if(here->PTR_J_b_bp_required) *(here->PTR_J_b_bp+1)+=ckt->CKTomega*here->JDVAL_b_bp;
  if(here->PTR_J_ci_bp_required) *(here->PTR_J_ci_bp+1)+=ckt->CKTomega*here->JDVAL_ci_bp;
  if(here->PTR_J_b_b_required) *(here->PTR_J_b_b+1)+=ckt->CKTomega*here->JDVAL_b_b;
  if(here->PTR_J_ci_b_required) *(here->PTR_J_ci_b+1)+=ckt->CKTomega*here->JDVAL_ci_b;
  if(here->PTR_J_b_ei_required) *(here->PTR_J_b_ei+1)+=ckt->CKTomega*here->JDVAL_b_ei;
  if(here->PTR_J_ci_ei_required) *(here->PTR_J_ci_ei+1)+=ckt->CKTomega*here->JDVAL_ci_ei;
  if(here->PTR_J_bp_bp_required) *(here->PTR_J_bp_bp+1)+=ckt->CKTomega*here->JDVAL_bp_bp;
  if(here->PTR_J_bp_ci_required) *(here->PTR_J_bp_ci+1)+=ckt->CKTomega*here->JDVAL_bp_ci;
  if(here->PTR_J_bp_tnode_required) *(here->PTR_J_bp_tnode+1)+=ckt->CKTomega*here->JDVAL_bp_tnode;
  if(here->PTR_J_bp_ei_required) *(here->PTR_J_bp_ei+1)+=ckt->CKTomega*here->JDVAL_bp_ei;
  if(here->PTR_J_bp_bi_required) *(here->PTR_J_bp_bi+1)+=ckt->CKTomega*here->JDVAL_bp_bi;
  if(here->PTR_J_bi_tnode_required) *(here->PTR_J_bi_tnode+1)+=ckt->CKTomega*here->JDVAL_bi_tnode;
  if(here->PTR_J_bi_bp_required) *(here->PTR_J_bi_bp+1)+=ckt->CKTomega*here->JDVAL_bi_bp;
  if(here->PTR_J_ei_tnode_required) *(here->PTR_J_ei_tnode+1)+=ckt->CKTomega*here->JDVAL_ei_tnode;
  if(here->PTR_J_ei_bp_required) *(here->PTR_J_ei_bp+1)+=ckt->CKTomega*here->JDVAL_ei_bp;
  if(here->PTR_J_ei_ci_required) *(here->PTR_J_ei_ci+1)+=ckt->CKTomega*here->JDVAL_ei_ci;
  if(here->PTR_J_bi_xf4_required) *(here->PTR_J_bi_xf4+1)+=ckt->CKTomega*here->JDVAL_bi_xf4;
  if(here->PTR_J_ei_xf4_required) *(here->PTR_J_ei_xf4+1)+=ckt->CKTomega*here->JDVAL_ei_xf4;
  if(here->PTR_J_si_si_required) *(here->PTR_J_si_si+1)+=ckt->CKTomega*here->JDVAL_si_si;
  if(here->PTR_J_si_ci_required) *(here->PTR_J_si_ci+1)+=ckt->CKTomega*here->JDVAL_si_ci;
  if(here->PTR_J_si_bp_required) *(here->PTR_J_si_bp+1)+=ckt->CKTomega*here->JDVAL_si_bp;
  if(here->PTR_J_si_tnode_required) *(here->PTR_J_si_tnode+1)+=ckt->CKTomega*here->JDVAL_si_tnode;
  if(here->PTR_J_b_e_required) *(here->PTR_J_b_e+1)+=ckt->CKTomega*here->JDVAL_b_e;
  if(here->PTR_J_e_b_required) *(here->PTR_J_e_b+1)+=ckt->CKTomega*here->JDVAL_e_b;
  if(here->PTR_J_e_e_required) *(here->PTR_J_e_e+1)+=ckt->CKTomega*here->JDVAL_e_e;
  if(here->PTR_J_bp_e_required) *(here->PTR_J_bp_e+1)+=ckt->CKTomega*here->JDVAL_bp_e;
  if(here->PTR_J_e_bp_required) *(here->PTR_J_e_bp+1)+=ckt->CKTomega*here->JDVAL_e_bp;
  if(here->PTR_J_si_bi_required) *(here->PTR_J_si_bi+1)+=ckt->CKTomega*here->JDVAL_si_bi;
  if(here->PTR_J_si_ei_required) *(here->PTR_J_si_ei+1)+=ckt->CKTomega*here->JDVAL_si_ei;
  if(here->PTR_J_ci_si_required) *(here->PTR_J_ci_si+1)+=ckt->CKTomega*here->JDVAL_ci_si;
  if(here->PTR_J_si_b_required) *(here->PTR_J_si_b+1)+=ckt->CKTomega*here->JDVAL_si_b;
  if(here->PTR_J_si_s_required) *(here->PTR_J_si_s+1)+=ckt->CKTomega*here->JDVAL_si_s;
  if(here->PTR_J_s_si_required) *(here->PTR_J_s_si+1)+=ckt->CKTomega*here->JDVAL_s_si;
  if(here->PTR_J_s_s_required) *(here->PTR_J_s_s+1)+=ckt->CKTomega*here->JDVAL_s_s;
  if(here->PTR_J_tnode_tnode_required) *(here->PTR_J_tnode_tnode+1)+=ckt->CKTomega*here->JDVAL_tnode_tnode;
  if(here->PTR_J_xf1_xf1_required) *(here->PTR_J_xf1_xf1+1)+=ckt->CKTomega*here->JDVAL_xf1_xf1;
  if(here->PTR_J_xf2_xf2_required) *(here->PTR_J_xf2_xf2+1)+=ckt->CKTomega*here->JDVAL_xf2_xf2;
  if(here->PTR_J_xf3_xf3_required) *(here->PTR_J_xf3_xf3+1)+=ckt->CKTomega*here->JDVAL_xf3_xf3;
  if(here->PTR_J_xf4_xf4_required) *(here->PTR_J_xf4_xf4+1)+=ckt->CKTomega*here->JDVAL_xf4_xf4;

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
