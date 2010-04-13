/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:14:44 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "hicum0defs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

int hicum0setup (SMPmatrix *matrix, GENmodel *inModel, CKTcircuit *ckt, int *states)
     /* load the hicum0 device structure with those pointers needed later 
      * for fast matrix loading 
      */
{
  register hicum0model *model = (hicum0model*)inModel;
  register hicum0instance *here;
  
  /*  loop through all the hicum0 device models */
  for ( ;model != NULL ;model = model->hicum0nextModel )
  {
    if(model->is_Given == FALSE) model->is=1.0e-16;
    if(model->mcf_Given == FALSE) model->mcf=1.00;
    if(model->mcr_Given == FALSE) model->mcr=1.00;
    if(model->vef_Given == FALSE) model->vef=1.0e6;
    if(model->iqf_Given == FALSE) model->iqf=1.0e6;
    if(model->iqr_Given == FALSE) model->iqr=1.0e6;
    if(model->iqfh_Given == FALSE) model->iqfh=1.0e6;
    if(model->tfh_Given == FALSE) model->tfh=0.0;
    if(model->ibes_Given == FALSE) model->ibes=1e-18;
    if(model->mbe_Given == FALSE) model->mbe=1.0;
    if(model->ires_Given == FALSE) model->ires=0.0;
    if(model->mre_Given == FALSE) model->mre=2.0;
    if(model->ibcs_Given == FALSE) model->ibcs=0.0;
    if(model->mbc_Given == FALSE) model->mbc=1.0;
    if(model->cje0_Given == FALSE) model->cje0=1.0e-20;
    if(model->vde_Given == FALSE) model->vde=0.9;
    if(model->ze_Given == FALSE) model->ze=0.5;
    if(model->aje_Given == FALSE) model->aje=2.5;
    if(model->t0_Given == FALSE) model->t0=0.0;
    if(model->dt0h_Given == FALSE) model->dt0h=0.0;
    if(model->tbvl_Given == FALSE) model->tbvl=0.0;
    if(model->tef0_Given == FALSE) model->tef0=0.0;
    if(model->gte_Given == FALSE) model->gte=1.0;
    if(model->thcs_Given == FALSE) model->thcs=0.0;
    if(model->ahc_Given == FALSE) model->ahc=0.1;
    if(model->tr_Given == FALSE) model->tr=0.0;
    if(model->rci0_Given == FALSE) model->rci0=150;
    if(model->vlim_Given == FALSE) model->vlim=0.5;
    if(model->vpt_Given == FALSE) model->vpt=100;
    if(model->vces_Given == FALSE) model->vces=0.1;
    if(model->cjci0_Given == FALSE) model->cjci0=1.0e-20;
    if(model->vdci_Given == FALSE) model->vdci=0.7;
    if(model->zci_Given == FALSE) model->zci=0.333;
    if(model->vptci_Given == FALSE) model->vptci=100;
    if(model->cjcx0_Given == FALSE) model->cjcx0=1.0e-20;
    if(model->vdcx_Given == FALSE) model->vdcx=0.7;
    if(model->zcx_Given == FALSE) model->zcx=0.333;
    if(model->vptcx_Given == FALSE) model->vptcx=100;
    if(model->fbc_Given == FALSE) model->fbc=1.0;
    if(model->rbi0_Given == FALSE) model->rbi0=0.0;
    if(model->vr0e_Given == FALSE) model->vr0e=2.5;
    if(model->vr0c_Given == FALSE) model->vr0c=1.0e6;
    if(model->fgeo_Given == FALSE) model->fgeo=0.656;
    if(model->rbx_Given == FALSE) model->rbx=0.0;
    if(model->rcx_Given == FALSE) model->rcx=0.0;
    if(model->re_Given == FALSE) model->re=0.0;
    if(model->itss_Given == FALSE) model->itss=0.0;
    if(model->msf_Given == FALSE) model->msf=1.0;
    if(model->iscs_Given == FALSE) model->iscs=0.0;
    if(model->msc_Given == FALSE) model->msc=1.0;
    if(model->cjs0_Given == FALSE) model->cjs0=1.0e-20;
    if(model->vds_Given == FALSE) model->vds=0.3;
    if(model->zs_Given == FALSE) model->zs=0.3;
    if(model->vpts_Given == FALSE) model->vpts=100;
    if(model->cbcpar_Given == FALSE) model->cbcpar=0.0;
    if(model->cbepar_Given == FALSE) model->cbepar=0.0;
    if(model->eavl_Given == FALSE) model->eavl=0.0;
    if(model->kavl_Given == FALSE) model->kavl=0.0;
    if(model->kf_Given == FALSE) model->kf=0.0;
    if(model->af_Given == FALSE) model->af=2.0;
    if(model->vgb_Given == FALSE) model->vgb=1.2;
    if(model->vge_Given == FALSE) model->vge=1.17;
    if(model->vgc_Given == FALSE) model->vgc=1.17;
    if(model->vgs_Given == FALSE) model->vgs=1.17;
    if(model->f1vg_Given == FALSE) model->f1vg=(-1.02377e-4);
    if(model->f2vg_Given == FALSE) model->f2vg=4.3215e-4;
    if(model->alt0_Given == FALSE) model->alt0=0.0;
    if(model->kt0_Given == FALSE) model->kt0=0.0;
    if(model->zetact_Given == FALSE) model->zetact=3.0;
    if(model->zetabet_Given == FALSE) model->zetabet=3.5;
    if(model->zetaci_Given == FALSE) model->zetaci=0.0;
    if(model->alvs_Given == FALSE) model->alvs=0.0;
    if(model->alces_Given == FALSE) model->alces=0.0;
    if(model->zetarbi_Given == FALSE) model->zetarbi=0.0;
    if(model->zetarbx_Given == FALSE) model->zetarbx=0.0;
    if(model->zetarcx_Given == FALSE) model->zetarcx=0.0;
    if(model->zetare_Given == FALSE) model->zetare=0.0;
    if(model->alkav_Given == FALSE) model->alkav=0.0;
    if(model->aleav_Given == FALSE) model->aleav=0.0;
    if(model->flsh_Given == FALSE) model->flsh=0;
    if(model->rth_Given == FALSE) model->rth=0.0;
    if(model->cth_Given == FALSE) model->cth=0.0;
    if(model->npn_Given == FALSE) model->npn=1;
    if(model->pnp_Given == FALSE) model->pnp=0;
    if(model->tnom_Given == FALSE) model->tnom=27;
    for ( here = model->hicum0instances ;here != NULL ; here = here->hicum0nextInstance )
    {
    if(here->dt_Given == FALSE) here->dt=0.0;
      /* Internal Nodes */
      {
        here->ciNode = -1;
        here->biNode = -1;
        here->eiNode = -1;
      }
      /* set states */
      here->state_tnode_GND = *states; *states += 2;
      here->state_b_e = *states; *states += 2;
      here->state_b_ci = *states; *states += 2;
      here->state_s_ci = *states; *states += 2;
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
      here->PTR_J_b_s_required=0;
      here->PTR_J_b_ci_required=0;
      here->PTR_J_s_s_required=0;
      here->PTR_J_s_ci_required=0;
      here->PTR_J_b_b_required=0;
      here->PTR_J_s_b_required=0;
      here->PTR_J_b_tnode_required=0;
      here->PTR_J_s_tnode_required=0;
      here->PTR_J_s_bi_required=0;
      here->PTR_J_s_ei_required=0;
      here->PTR_J_ci_ei_required=0;
      here->PTR_J_ci_s_required=0;
      here->PTR_J_ci_tnode_required=0;
      here->PTR_J_ci_b_required=0;
      here->PTR_J_b_bi_required=0;
      here->PTR_J_b_e_required=0;
      here->PTR_J_e_b_required=0;
      here->PTR_J_e_e_required=0;
      here->PTR_J_ei_tnode_required=0;
      here->PTR_J_e_tnode_required=0;
      here->PTR_J_ei_e_required=0;
      here->PTR_J_e_ei_required=0;
      here->PTR_J_c_tnode_required=0;
      here->PTR_J_ci_c_required=0;
      here->PTR_J_c_ci_required=0;
      here->PTR_J_c_c_required=0;
      here->PTR_J_b_ei_required=0;
      here->PTR_J_bi_b_required=0;
      here->PTR_J_bi_tnode_required=0;
      here->PTR_J_ei_ci_required=0;
      here->PTR_J_ei_b_required=0;
      here->PTR_J_tnode_tnode_required=0;
      here->PTR_J_tnode_ci_required=0;
      here->PTR_J_tnode_ei_required=0;
      here->PTR_J_tnode_b_required=0;
      here->PTR_J_tnode_bi_required=0;
      here->PTR_J_tnode_s_required=0;
      here->PTR_J_tnode_e_required=0;
      here->PTR_J_tnode_c_required=0;

      hicum0guesstopology(matrix,ckt,model,here);

      /* Internal Nodes */
      {
        int error;
        CKTnode *tmp;
        if(here->ciNode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum0name,"internal collector node");
          if(error) return(error);
          here->ciNode = tmp->number;
        }
        if(here->biNode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum0name,"internal base node");
          if(error) return(error);
          here->biNode = tmp->number;
        }
        if(here->eiNode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->hicum0name,"internal emitter node");
          if(error) return(error);
          here->eiNode = tmp->number;
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
        if(here->PTR_J_b_s_required==1)
        {
          here->PTR_J_b_s=SMPmakeElt(matrix,here->bNode,here->sNode);
        }
        if(here->PTR_J_b_ci_required==1)
        {
          here->PTR_J_b_ci=SMPmakeElt(matrix,here->bNode,here->ciNode);
        }
        if(here->PTR_J_s_s_required==1)
        {
          here->PTR_J_s_s=SMPmakeElt(matrix,here->sNode,here->sNode);
        }
        if(here->PTR_J_s_ci_required==1)
        {
          here->PTR_J_s_ci=SMPmakeElt(matrix,here->sNode,here->ciNode);
        }
        if(here->PTR_J_b_b_required==1)
        {
          here->PTR_J_b_b=SMPmakeElt(matrix,here->bNode,here->bNode);
        }
        if(here->PTR_J_s_b_required==1)
        {
          here->PTR_J_s_b=SMPmakeElt(matrix,here->sNode,here->bNode);
        }
        if(here->PTR_J_b_tnode_required==1)
        {
          here->PTR_J_b_tnode=SMPmakeElt(matrix,here->bNode,here->tnodeNode);
        }
        if(here->PTR_J_s_tnode_required==1)
        {
          here->PTR_J_s_tnode=SMPmakeElt(matrix,here->sNode,here->tnodeNode);
        }
        if(here->PTR_J_s_bi_required==1)
        {
          here->PTR_J_s_bi=SMPmakeElt(matrix,here->sNode,here->biNode);
        }
        if(here->PTR_J_s_ei_required==1)
        {
          here->PTR_J_s_ei=SMPmakeElt(matrix,here->sNode,here->eiNode);
        }
        if(here->PTR_J_ci_ei_required==1)
        {
          here->PTR_J_ci_ei=SMPmakeElt(matrix,here->ciNode,here->eiNode);
        }
        if(here->PTR_J_ci_s_required==1)
        {
          here->PTR_J_ci_s=SMPmakeElt(matrix,here->ciNode,here->sNode);
        }
        if(here->PTR_J_ci_tnode_required==1)
        {
          here->PTR_J_ci_tnode=SMPmakeElt(matrix,here->ciNode,here->tnodeNode);
        }
        if(here->PTR_J_ci_b_required==1)
        {
          here->PTR_J_ci_b=SMPmakeElt(matrix,here->ciNode,here->bNode);
        }
        if(here->PTR_J_b_bi_required==1)
        {
          here->PTR_J_b_bi=SMPmakeElt(matrix,here->bNode,here->biNode);
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
        if(here->PTR_J_ei_tnode_required==1)
        {
          here->PTR_J_ei_tnode=SMPmakeElt(matrix,here->eiNode,here->tnodeNode);
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
        if(here->PTR_J_b_ei_required==1)
        {
          here->PTR_J_b_ei=SMPmakeElt(matrix,here->bNode,here->eiNode);
        }
        if(here->PTR_J_bi_b_required==1)
        {
          here->PTR_J_bi_b=SMPmakeElt(matrix,here->biNode,here->bNode);
        }
        if(here->PTR_J_bi_tnode_required==1)
        {
          here->PTR_J_bi_tnode=SMPmakeElt(matrix,here->biNode,here->tnodeNode);
        }
        if(here->PTR_J_ei_ci_required==1)
        {
          here->PTR_J_ei_ci=SMPmakeElt(matrix,here->eiNode,here->ciNode);
        }
        if(here->PTR_J_ei_b_required==1)
        {
          here->PTR_J_ei_b=SMPmakeElt(matrix,here->eiNode,here->bNode);
        }
        if(here->PTR_J_tnode_tnode_required==1)
        {
          here->PTR_J_tnode_tnode=SMPmakeElt(matrix,here->tnodeNode,here->tnodeNode);
        }
        if(here->PTR_J_tnode_ci_required==1)
        {
          here->PTR_J_tnode_ci=SMPmakeElt(matrix,here->tnodeNode,here->ciNode);
        }
        if(here->PTR_J_tnode_ei_required==1)
        {
          here->PTR_J_tnode_ei=SMPmakeElt(matrix,here->tnodeNode,here->eiNode);
        }
        if(here->PTR_J_tnode_b_required==1)
        {
          here->PTR_J_tnode_b=SMPmakeElt(matrix,here->tnodeNode,here->bNode);
        }
        if(here->PTR_J_tnode_bi_required==1)
        {
          here->PTR_J_tnode_bi=SMPmakeElt(matrix,here->tnodeNode,here->biNode);
        }
        if(here->PTR_J_tnode_s_required==1)
        {
          here->PTR_J_tnode_s=SMPmakeElt(matrix,here->tnodeNode,here->sNode);
        }
        if(here->PTR_J_tnode_e_required==1)
        {
          here->PTR_J_tnode_e=SMPmakeElt(matrix,here->tnodeNode,here->eNode);
        }
        if(here->PTR_J_tnode_c_required==1)
        {
          here->PTR_J_tnode_c=SMPmakeElt(matrix,here->tnodeNode,here->cNode);
        }

    }
  }
  return(OK);
}
