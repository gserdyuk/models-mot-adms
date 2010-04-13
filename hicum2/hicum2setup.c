/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 14:29:51 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "hicum2defs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

int hicum2setup (SMPmatrix *matrix, GENmodel *inModel, CKTcircuit *ckt, int *states)
     /* load the hicum2 device structure with those pointers needed later 
      * for fast matrix loading 
      */
{
  register hicum2model *model = (hicum2model*)inModel;
  register hicum2instance *here;
  
  /*  loop through all the hicum2 device models */
  for ( ;model != NULL ;model = model->hicum2nextModel )
  {
    if(model->pnp_Given == FALSE) model->pnp=0;
    if(model->npn_Given == FALSE) model->npn=1;
    if(model->c10_Given == FALSE) model->c10=2.0E-30;
    if(model->qp0_Given == FALSE) model->qp0=2.0E-14;
    if(model->ich_Given == FALSE) model->ich=0.0;
    if(model->hfe_Given == FALSE) model->hfe=1.0;
    if(model->hfc_Given == FALSE) model->hfc=1.0;
    if(model->hjei_Given == FALSE) model->hjei=1.0;
    if(model->hjci_Given == FALSE) model->hjci=1.0;
    if(model->ibeis_Given == FALSE) model->ibeis=1.0E-18;
    if(model->mbei_Given == FALSE) model->mbei=1.0;
    if(model->ireis_Given == FALSE) model->ireis=0.0;
    if(model->mrei_Given == FALSE) model->mrei=2.0;
    if(model->ibeps_Given == FALSE) model->ibeps=0.0;
    if(model->mbep_Given == FALSE) model->mbep=1.0;
    if(model->ireps_Given == FALSE) model->ireps=0.0;
    if(model->mrep_Given == FALSE) model->mrep=2.0;
    if(model->mcf_Given == FALSE) model->mcf=1.0;
    if(model->tbhrec_Given == FALSE) model->tbhrec=0.0;
    if(model->ibcis_Given == FALSE) model->ibcis=1.0E-16;
    if(model->mbci_Given == FALSE) model->mbci=1.0;
    if(model->ibcxs_Given == FALSE) model->ibcxs=0.0;
    if(model->mbcx_Given == FALSE) model->mbcx=1.0;
    if(model->ibets_Given == FALSE) model->ibets=0.0;
    if(model->abet_Given == FALSE) model->abet=40;
    if(model->tunode_Given == FALSE) model->tunode=1;
    if(model->favl_Given == FALSE) model->favl=0.0;
    if(model->qavl_Given == FALSE) model->qavl=0.0;
    if(model->alfav_Given == FALSE) model->alfav=0.0;
    if(model->alqav_Given == FALSE) model->alqav=0.0;
    if(model->rbi0_Given == FALSE) model->rbi0=0.0;
    if(model->rbx_Given == FALSE) model->rbx=0.0;
    if(model->fgeo_Given == FALSE) model->fgeo=0.6557;
    if(model->fdqr0_Given == FALSE) model->fdqr0=0.0;
    if(model->fcrbi_Given == FALSE) model->fcrbi=0.0;
    if(model->fqi_Given == FALSE) model->fqi=1.0;
    if(model->re_Given == FALSE) model->re=0.0;
    if(model->rcx_Given == FALSE) model->rcx=0.0;
    if(model->itss_Given == FALSE) model->itss=0.0;
    if(model->msf_Given == FALSE) model->msf=1.0;
    if(model->iscs_Given == FALSE) model->iscs=0.0;
    if(model->msc_Given == FALSE) model->msc=1.0;
    if(model->tsf_Given == FALSE) model->tsf=0.0;
    if(model->rsu_Given == FALSE) model->rsu=0.0;
    if(model->csu_Given == FALSE) model->csu=0.0;
    if(model->cjei0_Given == FALSE) model->cjei0=1.0E-20;
    if(model->vdei_Given == FALSE) model->vdei=0.9;
    if(model->zei_Given == FALSE) model->zei=0.5;
    if(model->ajei_Given == FALSE) model->ajei=2.5;
    if(model->cjep0_Given == FALSE) model->cjep0=1.0E-20;
    if(model->vdep_Given == FALSE) model->vdep=0.9;
    if(model->zep_Given == FALSE) model->zep=0.5;
    if(model->ajep_Given == FALSE) model->ajep=2.5;
    if(model->cjci0_Given == FALSE) model->cjci0=1.0E-20;
    if(model->vdci_Given == FALSE) model->vdci=0.7;
    if(model->zci_Given == FALSE) model->zci=0.4;
    if(model->vptci_Given == FALSE) model->vptci=100;
    if(model->cjcx0_Given == FALSE) model->cjcx0=1.0E-20;
    if(model->vdcx_Given == FALSE) model->vdcx=0.7;
    if(model->zcx_Given == FALSE) model->zcx=0.4;
    if(model->vptcx_Given == FALSE) model->vptcx=100;
    if(model->fbcpar_Given == FALSE) model->fbcpar=0.0;
    if(model->fbepar_Given == FALSE) model->fbepar=1.0;
    if(model->cjs0_Given == FALSE) model->cjs0=0.0;
    if(model->vds_Given == FALSE) model->vds=0.6;
    if(model->zs_Given == FALSE) model->zs=0.5;
    if(model->vpts_Given == FALSE) model->vpts=100;
    if(model->t0_Given == FALSE) model->t0=0.0;
    if(model->dt0h_Given == FALSE) model->dt0h=0.0;
    if(model->tbvl_Given == FALSE) model->tbvl=0.0;
    if(model->tef0_Given == FALSE) model->tef0=0.0;
    if(model->gtfe_Given == FALSE) model->gtfe=1.0;
    if(model->thcs_Given == FALSE) model->thcs=0.0;
    if(model->ahc_Given == FALSE) model->ahc=0.1;
    if(model->fthc_Given == FALSE) model->fthc=0.0;
    if(model->rci0_Given == FALSE) model->rci0=150;
    if(model->vlim_Given == FALSE) model->vlim=0.5;
    if(model->vces_Given == FALSE) model->vces=0.1;
    if(model->vpt_Given == FALSE) model->vpt=0.0;
    if(model->tr_Given == FALSE) model->tr=0.0;
    if(model->cbepar_Given == FALSE) model->cbepar=0.0;
    if(model->cbcpar_Given == FALSE) model->cbcpar=0.0;
    if(model->alqf_Given == FALSE) model->alqf=0.0;
    if(model->alit_Given == FALSE) model->alit=0.0;
    if(model->flnqs_Given == FALSE) model->flnqs=0;
    if(model->kf_Given == FALSE) model->kf=0.0;
    if(model->af_Given == FALSE) model->af=2.0;
    if(model->cfbe_Given == FALSE) model->cfbe=(-1);
    if(model->latb_Given == FALSE) model->latb=0.0;
    if(model->latl_Given == FALSE) model->latl=0.0;
    if(model->vgb_Given == FALSE) model->vgb=1.17;
    if(model->alt0_Given == FALSE) model->alt0=0.0;
    if(model->kt0_Given == FALSE) model->kt0=0.0;
    if(model->zetaci_Given == FALSE) model->zetaci=0.0;
    if(model->alvs_Given == FALSE) model->alvs=0.0;
    if(model->alces_Given == FALSE) model->alces=0.0;
    if(model->zetarbi_Given == FALSE) model->zetarbi=0.0;
    if(model->zetarbx_Given == FALSE) model->zetarbx=0.0;
    if(model->zetarcx_Given == FALSE) model->zetarcx=0.0;
    if(model->zetare_Given == FALSE) model->zetare=0.0;
    if(model->zetacx_Given == FALSE) model->zetacx=1.0;
    if(model->vge_Given == FALSE) model->vge=1.17;
    if(model->vgc_Given == FALSE) model->vgc=1.17;
    if(model->vgs_Given == FALSE) model->vgs=1.17;
    if(model->f1vg_Given == FALSE) model->f1vg=(-1.02377e-4);
    if(model->f2vg_Given == FALSE) model->f2vg=4.3215e-4;
    if(model->zetact_Given == FALSE) model->zetact=3.0;
    if(model->zetabet_Given == FALSE) model->zetabet=3.5;
    if(model->alb_Given == FALSE) model->alb=0.0;
    if(model->flsh_Given == FALSE) model->flsh=0;
    if(model->rth_Given == FALSE) model->rth=0.0;
    if(model->cth_Given == FALSE) model->cth=0.0;
    if(model->flcomp_Given == FALSE) model->flcomp=0.0;
    if(model->tnom_Given == FALSE) model->tnom=27.0;
    if(model->dt_Given == FALSE) model->dt=0.0;
    for ( here = model->hicum2instances ;here != NULL ; here = here->hicum2nextInstance )
    {
      /* Internal Nodes */
      {
        here->ciNode = -1;
        here->eiNode = -1;
        here->bpNode = -1;
        here->biNode = -1;
        here->siNode = -1;
        here->xf1Node = -1;
        here->xf2Node = -1;
        here->xf3Node = -1;
        here->xf4Node = -1;
        here->n1Node = -1;
        here->n2Node = -1;
      }
      /* set states */
      here->state_xf4_GND = *states; *states += 2;
      here->state_xf3_GND = *states; *states += 2;
      here->state_xf2_GND = *states; *states += 2;
      here->state_xf1_GND = *states; *states += 2;
      here->state_tnode_GND = *states; *states += 2;
      here->state_si_s = *states; *states += 2;
      here->state_si_ci = *states; *states += 2;
      here->state_bp_e = *states; *states += 2;
      here->state_b_e = *states; *states += 2;
      here->state_bp_ei = *states; *states += 2;
      here->state_bp_bi = *states; *states += 2;
      here->state_bp_ci = *states; *states += 2;
      here->state_b_ci = *states; *states += 2;
      here->state_bi_ci = *states; *states += 2;
      here->state_bi_ei = *states; *states += 2;
      /* set Sparse Matrix Pointers */
      here->PTR_J_bi_bi_required=0;
      here->PTR_J_bi_ei_required=0;
      here->PTR_J_ei_bi_required=0;
      here->PTR_J_ei_ei_required=0;
      here->PTR_J_bi_ci_required=0;
      here->PTR_J_ci_bi_required=0;
      here->PTR_J_ci_ci_required=0;
      here->PTR_J_b_bi_required=0;
      here->PTR_J_b_ci_required=0;
      here->PTR_J_b_tnode_required=0;
      here->PTR_J_ci_tnode_required=0;
      here->PTR_J_b_bp_required=0;
      here->PTR_J_ci_bp_required=0;
      here->PTR_J_b_b_required=0;
      here->PTR_J_ci_b_required=0;
      here->PTR_J_b_ei_required=0;
      here->PTR_J_ci_ei_required=0;
      here->PTR_J_bp_bp_required=0;
      here->PTR_J_bp_ci_required=0;
      here->PTR_J_bp_tnode_required=0;
      here->PTR_J_bp_b_required=0;
      here->PTR_J_bp_ei_required=0;
      here->PTR_J_bp_bi_required=0;
      here->PTR_J_bi_tnode_required=0;
      here->PTR_J_bi_bp_required=0;
      here->PTR_J_ei_tnode_required=0;
      here->PTR_J_ei_bp_required=0;
      here->PTR_J_ei_ci_required=0;
      here->PTR_J_bi_xf4_required=0;
      here->PTR_J_ei_xf4_required=0;
      here->PTR_J_bp_si_required=0;
      here->PTR_J_si_si_required=0;
      here->PTR_J_si_ci_required=0;
      here->PTR_J_si_bp_required=0;
      here->PTR_J_si_tnode_required=0;
      here->PTR_J_b_e_required=0;
      here->PTR_J_e_b_required=0;
      here->PTR_J_e_e_required=0;
      here->PTR_J_bp_e_required=0;
      here->PTR_J_e_bp_required=0;
      here->PTR_J_si_bi_required=0;
      here->PTR_J_si_ei_required=0;
      here->PTR_J_ci_si_required=0;
      here->PTR_J_si_b_required=0;
      here->PTR_J_ci_xf2_required=0;
      here->PTR_J_ei_xf2_required=0;
      here->PTR_J_c_tnode_required=0;
      here->PTR_J_ci_c_required=0;
      here->PTR_J_c_ci_required=0;
      here->PTR_J_c_c_required=0;
      here->PTR_J_e_tnode_required=0;
      here->PTR_J_ei_e_required=0;
      here->PTR_J_e_ei_required=0;
      here->PTR_J_si_s_required=0;
      here->PTR_J_s_si_required=0;
      here->PTR_J_s_s_required=0;
      here->PTR_J_tnode_tnode_required=0;
      here->PTR_J_tnode_bi_required=0;
      here->PTR_J_tnode_ci_required=0;
      here->PTR_J_tnode_ei_required=0;
      here->PTR_J_tnode_si_required=0;
      here->PTR_J_tnode_bp_required=0;
      here->PTR_J_tnode_e_required=0;
      here->PTR_J_tnode_c_required=0;
      here->PTR_J_tnode_b_required=0;
      here->PTR_J_xf1_bi_required=0;
      here->PTR_J_xf1_ci_required=0;
      here->PTR_J_xf1_ei_required=0;
      here->PTR_J_xf1_tnode_required=0;
      here->PTR_J_xf1_xf2_required=0;
      here->PTR_J_xf1_xf1_required=0;
      here->PTR_J_xf2_bi_required=0;
      here->PTR_J_xf2_ci_required=0;
      here->PTR_J_xf2_tnode_required=0;
      here->PTR_J_xf2_ei_required=0;
      here->PTR_J_xf2_xf1_required=0;
      here->PTR_J_xf2_xf2_required=0;
      here->PTR_J_xf3_bi_required=0;
      here->PTR_J_xf3_ei_required=0;
      here->PTR_J_xf3_ci_required=0;
      here->PTR_J_xf3_tnode_required=0;
      here->PTR_J_xf3_xf4_required=0;
      here->PTR_J_xf3_xf3_required=0;
      here->PTR_J_xf4_bi_required=0;
      here->PTR_J_xf4_ci_required=0;
      here->PTR_J_xf4_tnode_required=0;
      here->PTR_J_xf4_ei_required=0;
      here->PTR_J_xf4_xf3_required=0;
      here->PTR_J_xf4_xf4_required=0;
      here->PTR_J_s_tnode_required=0;

      hicum2guesstopology(matrix,ckt,model,here);

      /* Internal Nodes */
      {
        int error;
        CKTnode *tmp;
        if(here->ciNode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum2name,"no info");
          if(error) return(error);
          here->ciNode = tmp->number;
        }
        if(here->eiNode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum2name,"no info");
          if(error) return(error);
          here->eiNode = tmp->number;
        }
        if(here->bpNode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum2name,"no info");
          if(error) return(error);
          here->bpNode = tmp->number;
        }
        if(here->biNode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum2name,"no info");
          if(error) return(error);
          here->biNode = tmp->number;
        }
        if(here->siNode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum2name,"no info");
          if(error) return(error);
          here->siNode = tmp->number;
        }
        if(here->xf1Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum2name,"no info");
          if(error) return(error);
          here->xf1Node = tmp->number;
        }
        if(here->xf2Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum2name,"no info");
          if(error) return(error);
          here->xf2Node = tmp->number;
        }
        if(here->xf3Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum2name,"no info");
          if(error) return(error);
          here->xf3Node = tmp->number;
        }
        if(here->xf4Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum2name,"no info");
          if(error) return(error);
          here->xf4Node = tmp->number;
        }
        if(here->n1Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum2name,"no info");
          if(error) return(error);
          here->n1Node = tmp->number;
        }
        if(here->n2Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum2name,"no info");
          if(error) return(error);
          here->n2Node = tmp->number;
        }
      }
        if(here->PTR_J_bi_bi_required==1)
        {
          here->PTR_J_bi_bi=SMPmakeElt(matrix,here->biNode,here->biNode);
        }
        if(here->PTR_J_bi_ei_required==1)
        {
          here->PTR_J_bi_ei=SMPmakeElt(matrix,here->biNode,here->eiNode);
        }
        if(here->PTR_J_ei_bi_required==1)
        {
          here->PTR_J_ei_bi=SMPmakeElt(matrix,here->eiNode,here->biNode);
        }
        if(here->PTR_J_ei_ei_required==1)
        {
          here->PTR_J_ei_ei=SMPmakeElt(matrix,here->eiNode,here->eiNode);
        }
        if(here->PTR_J_bi_ci_required==1)
        {
          here->PTR_J_bi_ci=SMPmakeElt(matrix,here->biNode,here->ciNode);
        }
        if(here->PTR_J_ci_bi_required==1)
        {
          here->PTR_J_ci_bi=SMPmakeElt(matrix,here->ciNode,here->biNode);
        }
        if(here->PTR_J_ci_ci_required==1)
        {
          here->PTR_J_ci_ci=SMPmakeElt(matrix,here->ciNode,here->ciNode);
        }
        if(here->PTR_J_b_bi_required==1)
        {
          here->PTR_J_b_bi=SMPmakeElt(matrix,here->bNode,here->biNode);
        }
        if(here->PTR_J_b_ci_required==1)
        {
          here->PTR_J_b_ci=SMPmakeElt(matrix,here->bNode,here->ciNode);
        }
        if(here->PTR_J_b_tnode_required==1)
        {
          here->PTR_J_b_tnode=SMPmakeElt(matrix,here->bNode,here->tnodeNode);
        }
        if(here->PTR_J_ci_tnode_required==1)
        {
          here->PTR_J_ci_tnode=SMPmakeElt(matrix,here->ciNode,here->tnodeNode);
        }
        if(here->PTR_J_b_bp_required==1)
        {
          here->PTR_J_b_bp=SMPmakeElt(matrix,here->bNode,here->bpNode);
        }
        if(here->PTR_J_ci_bp_required==1)
        {
          here->PTR_J_ci_bp=SMPmakeElt(matrix,here->ciNode,here->bpNode);
        }
        if(here->PTR_J_b_b_required==1)
        {
          here->PTR_J_b_b=SMPmakeElt(matrix,here->bNode,here->bNode);
        }
        if(here->PTR_J_ci_b_required==1)
        {
          here->PTR_J_ci_b=SMPmakeElt(matrix,here->ciNode,here->bNode);
        }
        if(here->PTR_J_b_ei_required==1)
        {
          here->PTR_J_b_ei=SMPmakeElt(matrix,here->bNode,here->eiNode);
        }
        if(here->PTR_J_ci_ei_required==1)
        {
          here->PTR_J_ci_ei=SMPmakeElt(matrix,here->ciNode,here->eiNode);
        }
        if(here->PTR_J_bp_bp_required==1)
        {
          here->PTR_J_bp_bp=SMPmakeElt(matrix,here->bpNode,here->bpNode);
        }
        if(here->PTR_J_bp_ci_required==1)
        {
          here->PTR_J_bp_ci=SMPmakeElt(matrix,here->bpNode,here->ciNode);
        }
        if(here->PTR_J_bp_tnode_required==1)
        {
          here->PTR_J_bp_tnode=SMPmakeElt(matrix,here->bpNode,here->tnodeNode);
        }
        if(here->PTR_J_bp_b_required==1)
        {
          here->PTR_J_bp_b=SMPmakeElt(matrix,here->bpNode,here->bNode);
        }
        if(here->PTR_J_bp_ei_required==1)
        {
          here->PTR_J_bp_ei=SMPmakeElt(matrix,here->bpNode,here->eiNode);
        }
        if(here->PTR_J_bp_bi_required==1)
        {
          here->PTR_J_bp_bi=SMPmakeElt(matrix,here->bpNode,here->biNode);
        }
        if(here->PTR_J_bi_tnode_required==1)
        {
          here->PTR_J_bi_tnode=SMPmakeElt(matrix,here->biNode,here->tnodeNode);
        }
        if(here->PTR_J_bi_bp_required==1)
        {
          here->PTR_J_bi_bp=SMPmakeElt(matrix,here->biNode,here->bpNode);
        }
        if(here->PTR_J_ei_tnode_required==1)
        {
          here->PTR_J_ei_tnode=SMPmakeElt(matrix,here->eiNode,here->tnodeNode);
        }
        if(here->PTR_J_ei_bp_required==1)
        {
          here->PTR_J_ei_bp=SMPmakeElt(matrix,here->eiNode,here->bpNode);
        }
        if(here->PTR_J_ei_ci_required==1)
        {
          here->PTR_J_ei_ci=SMPmakeElt(matrix,here->eiNode,here->ciNode);
        }
        if(here->PTR_J_bi_xf4_required==1)
        {
          here->PTR_J_bi_xf4=SMPmakeElt(matrix,here->biNode,here->xf4Node);
        }
        if(here->PTR_J_ei_xf4_required==1)
        {
          here->PTR_J_ei_xf4=SMPmakeElt(matrix,here->eiNode,here->xf4Node);
        }
        if(here->PTR_J_bp_si_required==1)
        {
          here->PTR_J_bp_si=SMPmakeElt(matrix,here->bpNode,here->siNode);
        }
        if(here->PTR_J_si_si_required==1)
        {
          here->PTR_J_si_si=SMPmakeElt(matrix,here->siNode,here->siNode);
        }
        if(here->PTR_J_si_ci_required==1)
        {
          here->PTR_J_si_ci=SMPmakeElt(matrix,here->siNode,here->ciNode);
        }
        if(here->PTR_J_si_bp_required==1)
        {
          here->PTR_J_si_bp=SMPmakeElt(matrix,here->siNode,here->bpNode);
        }
        if(here->PTR_J_si_tnode_required==1)
        {
          here->PTR_J_si_tnode=SMPmakeElt(matrix,here->siNode,here->tnodeNode);
        }
        if(here->PTR_J_b_e_required==1)
        {
          here->PTR_J_b_e=SMPmakeElt(matrix,here->bNode,here->eNode);
        }
        if(here->PTR_J_e_b_required==1)
        {
          here->PTR_J_e_b=SMPmakeElt(matrix,here->eNode,here->bNode);
        }
        if(here->PTR_J_e_e_required==1)
        {
          here->PTR_J_e_e=SMPmakeElt(matrix,here->eNode,here->eNode);
        }
        if(here->PTR_J_bp_e_required==1)
        {
          here->PTR_J_bp_e=SMPmakeElt(matrix,here->bpNode,here->eNode);
        }
        if(here->PTR_J_e_bp_required==1)
        {
          here->PTR_J_e_bp=SMPmakeElt(matrix,here->eNode,here->bpNode);
        }
        if(here->PTR_J_si_bi_required==1)
        {
          here->PTR_J_si_bi=SMPmakeElt(matrix,here->siNode,here->biNode);
        }
        if(here->PTR_J_si_ei_required==1)
        {
          here->PTR_J_si_ei=SMPmakeElt(matrix,here->siNode,here->eiNode);
        }
        if(here->PTR_J_ci_si_required==1)
        {
          here->PTR_J_ci_si=SMPmakeElt(matrix,here->ciNode,here->siNode);
        }
        if(here->PTR_J_si_b_required==1)
        {
          here->PTR_J_si_b=SMPmakeElt(matrix,here->siNode,here->bNode);
        }
        if(here->PTR_J_ci_xf2_required==1)
        {
          here->PTR_J_ci_xf2=SMPmakeElt(matrix,here->ciNode,here->xf2Node);
        }
        if(here->PTR_J_ei_xf2_required==1)
        {
          here->PTR_J_ei_xf2=SMPmakeElt(matrix,here->eiNode,here->xf2Node);
        }
        if(here->PTR_J_c_tnode_required==1)
        {
          here->PTR_J_c_tnode=SMPmakeElt(matrix,here->cNode,here->tnodeNode);
        }
        if(here->PTR_J_ci_c_required==1)
        {
          here->PTR_J_ci_c=SMPmakeElt(matrix,here->ciNode,here->cNode);
        }
        if(here->PTR_J_c_ci_required==1)
        {
          here->PTR_J_c_ci=SMPmakeElt(matrix,here->cNode,here->ciNode);
        }
        if(here->PTR_J_c_c_required==1)
        {
          here->PTR_J_c_c=SMPmakeElt(matrix,here->cNode,here->cNode);
        }
        if(here->PTR_J_e_tnode_required==1)
        {
          here->PTR_J_e_tnode=SMPmakeElt(matrix,here->eNode,here->tnodeNode);
        }
        if(here->PTR_J_ei_e_required==1)
        {
          here->PTR_J_ei_e=SMPmakeElt(matrix,here->eiNode,here->eNode);
        }
        if(here->PTR_J_e_ei_required==1)
        {
          here->PTR_J_e_ei=SMPmakeElt(matrix,here->eNode,here->eiNode);
        }
        if(here->PTR_J_si_s_required==1)
        {
          here->PTR_J_si_s=SMPmakeElt(matrix,here->siNode,here->sNode);
        }
        if(here->PTR_J_s_si_required==1)
        {
          here->PTR_J_s_si=SMPmakeElt(matrix,here->sNode,here->siNode);
        }
        if(here->PTR_J_s_s_required==1)
        {
          here->PTR_J_s_s=SMPmakeElt(matrix,here->sNode,here->sNode);
        }
        if(here->PTR_J_tnode_tnode_required==1)
        {
          here->PTR_J_tnode_tnode=SMPmakeElt(matrix,here->tnodeNode,here->tnodeNode);
        }
        if(here->PTR_J_tnode_bi_required==1)
        {
          here->PTR_J_tnode_bi=SMPmakeElt(matrix,here->tnodeNode,here->biNode);
        }
        if(here->PTR_J_tnode_ci_required==1)
        {
          here->PTR_J_tnode_ci=SMPmakeElt(matrix,here->tnodeNode,here->ciNode);
        }
        if(here->PTR_J_tnode_ei_required==1)
        {
          here->PTR_J_tnode_ei=SMPmakeElt(matrix,here->tnodeNode,here->eiNode);
        }
        if(here->PTR_J_tnode_si_required==1)
        {
          here->PTR_J_tnode_si=SMPmakeElt(matrix,here->tnodeNode,here->siNode);
        }
        if(here->PTR_J_tnode_bp_required==1)
        {
          here->PTR_J_tnode_bp=SMPmakeElt(matrix,here->tnodeNode,here->bpNode);
        }
        if(here->PTR_J_tnode_e_required==1)
        {
          here->PTR_J_tnode_e=SMPmakeElt(matrix,here->tnodeNode,here->eNode);
        }
        if(here->PTR_J_tnode_c_required==1)
        {
          here->PTR_J_tnode_c=SMPmakeElt(matrix,here->tnodeNode,here->cNode);
        }
        if(here->PTR_J_tnode_b_required==1)
        {
          here->PTR_J_tnode_b=SMPmakeElt(matrix,here->tnodeNode,here->bNode);
        }
        if(here->PTR_J_xf1_bi_required==1)
        {
          here->PTR_J_xf1_bi=SMPmakeElt(matrix,here->xf1Node,here->biNode);
        }
        if(here->PTR_J_xf1_ci_required==1)
        {
          here->PTR_J_xf1_ci=SMPmakeElt(matrix,here->xf1Node,here->ciNode);
        }
        if(here->PTR_J_xf1_ei_required==1)
        {
          here->PTR_J_xf1_ei=SMPmakeElt(matrix,here->xf1Node,here->eiNode);
        }
        if(here->PTR_J_xf1_tnode_required==1)
        {
          here->PTR_J_xf1_tnode=SMPmakeElt(matrix,here->xf1Node,here->tnodeNode);
        }
        if(here->PTR_J_xf1_xf2_required==1)
        {
          here->PTR_J_xf1_xf2=SMPmakeElt(matrix,here->xf1Node,here->xf2Node);
        }
        if(here->PTR_J_xf1_xf1_required==1)
        {
          here->PTR_J_xf1_xf1=SMPmakeElt(matrix,here->xf1Node,here->xf1Node);
        }
        if(here->PTR_J_xf2_bi_required==1)
        {
          here->PTR_J_xf2_bi=SMPmakeElt(matrix,here->xf2Node,here->biNode);
        }
        if(here->PTR_J_xf2_ci_required==1)
        {
          here->PTR_J_xf2_ci=SMPmakeElt(matrix,here->xf2Node,here->ciNode);
        }
        if(here->PTR_J_xf2_tnode_required==1)
        {
          here->PTR_J_xf2_tnode=SMPmakeElt(matrix,here->xf2Node,here->tnodeNode);
        }
        if(here->PTR_J_xf2_ei_required==1)
        {
          here->PTR_J_xf2_ei=SMPmakeElt(matrix,here->xf2Node,here->eiNode);
        }
        if(here->PTR_J_xf2_xf1_required==1)
        {
          here->PTR_J_xf2_xf1=SMPmakeElt(matrix,here->xf2Node,here->xf1Node);
        }
        if(here->PTR_J_xf2_xf2_required==1)
        {
          here->PTR_J_xf2_xf2=SMPmakeElt(matrix,here->xf2Node,here->xf2Node);
        }
        if(here->PTR_J_xf3_bi_required==1)
        {
          here->PTR_J_xf3_bi=SMPmakeElt(matrix,here->xf3Node,here->biNode);
        }
        if(here->PTR_J_xf3_ei_required==1)
        {
          here->PTR_J_xf3_ei=SMPmakeElt(matrix,here->xf3Node,here->eiNode);
        }
        if(here->PTR_J_xf3_ci_required==1)
        {
          here->PTR_J_xf3_ci=SMPmakeElt(matrix,here->xf3Node,here->ciNode);
        }
        if(here->PTR_J_xf3_tnode_required==1)
        {
          here->PTR_J_xf3_tnode=SMPmakeElt(matrix,here->xf3Node,here->tnodeNode);
        }
        if(here->PTR_J_xf3_xf4_required==1)
        {
          here->PTR_J_xf3_xf4=SMPmakeElt(matrix,here->xf3Node,here->xf4Node);
        }
        if(here->PTR_J_xf3_xf3_required==1)
        {
          here->PTR_J_xf3_xf3=SMPmakeElt(matrix,here->xf3Node,here->xf3Node);
        }
        if(here->PTR_J_xf4_bi_required==1)
        {
          here->PTR_J_xf4_bi=SMPmakeElt(matrix,here->xf4Node,here->biNode);
        }
        if(here->PTR_J_xf4_ci_required==1)
        {
          here->PTR_J_xf4_ci=SMPmakeElt(matrix,here->xf4Node,here->ciNode);
        }
        if(here->PTR_J_xf4_tnode_required==1)
        {
          here->PTR_J_xf4_tnode=SMPmakeElt(matrix,here->xf4Node,here->tnodeNode);
        }
        if(here->PTR_J_xf4_ei_required==1)
        {
          here->PTR_J_xf4_ei=SMPmakeElt(matrix,here->xf4Node,here->eiNode);
        }
        if(here->PTR_J_xf4_xf3_required==1)
        {
          here->PTR_J_xf4_xf3=SMPmakeElt(matrix,here->xf4Node,here->xf3Node);
        }
        if(here->PTR_J_xf4_xf4_required==1)
        {
          here->PTR_J_xf4_xf4=SMPmakeElt(matrix,here->xf4Node,here->xf4Node);
        }
        if(here->PTR_J_s_tnode_required==1)
        {
          here->PTR_J_s_tnode=SMPmakeElt(matrix,here->sNode,here->tnodeNode);
        }

    }
  }
  return(OK);
}
