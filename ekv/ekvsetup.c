/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Wed, 24 Mar 2010 00:50:59 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "ekvdefs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

int ekvsetup (SMPmatrix *matrix, GENmodel *inModel, CKTcircuit *ckt, int *states)
     /* load the ekv device structure with those pointers needed later 
      * for fast matrix loading 
      */
{
  register ekvmodel *model = (ekvmodel*)inModel;
  register ekvinstance *here;
  
  /*  loop through all the ekv device models */
  for ( ;model != NULL ;model = model->ekvnextModel )
  {
    if(model->nmos_Given == FALSE) model->nmos=1;
    if(model->pmos_Given == FALSE) model->pmos=1;
    if(model->MTYPE_Given == FALSE) model->MTYPE=((model->nmos==0)?((model->pmos==0)?0:1):((model->pmos==0)?(-1):1));
    if(model->TNOM_Given == FALSE) model->TNOM=27;
    if(model->IMAX_Given == FALSE) model->IMAX=1;
    if(model->TOX_Given == FALSE) model->TOX=0;
    if(model->NSUB_Given == FALSE) model->NSUB=0;
    if(model->VFB_Given == FALSE) model->VFB=1001.0;
    if(model->UO_Given == FALSE) model->UO=0;
    if(model->VMAX_Given == FALSE) model->VMAX=0;
    if(model->THETA_Given == FALSE) model->THETA=0;
    if(model->COX_Given == FALSE) model->COX=((model->TOX>0)?((8.854187817e-12*3.9)/model->TOX):(0.7*1.0e-3));
    if(model->XJ_Given == FALSE) model->XJ=(0.1*1.0e-6);
    if(model->DL_Given == FALSE) model->DL=0;
    if(model->DW_Given == FALSE) model->DW=0;{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,((((((2*1.602176462e-19)*8.854187817e-12)*11.7)*model->NSUB)*1e6)))
EXIT_IF_ISNAN(__sqrt_0)

    if(model->GAMMA_Given == FALSE) model->GAMMA=((model->NSUB>0)?(__sqrt_0/model->COX):1);}
{
double __max_0=0.0;
double __exp_1=0.0;
double __logE_2=0.0;
_max(__max_0,model->NSUB,1)
EXIT_IF_ISNAN(__max_0)
_exp(__exp_1,((((1.16-((0.000702*(300.15*300.15))/(300.15+1108)))/(2*((1.3806503e-23*300.15)/1.602176462e-19)))-((1.16-((0.000702*((model->TNOM+273.15)*(model->TNOM+273.15)))/((model->TNOM+273.15)+1108)))/(2*((1.3806503e-23*(model->TNOM+273.15))/1.602176462e-19))))))
EXIT_IF_ISNAN(__exp_1)
_logE(__logE_2,(((__max_0*1e6)/((1.45e16*((model->TNOM+273.15)/300.15))*__exp_1))))
EXIT_IF_ISNAN(__logE_2)

    if(model->PHI_Given == FALSE) model->PHI=((model->NSUB>0)?((2*((1.3806503e-23*(model->TNOM+273.15))/1.602176462e-19))*__logE_2):0.7);}
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(model->PHI))
EXIT_IF_ISNAN(__sqrt_0)

    if(model->VTO_Given == FALSE) model->VTO=((model->VFB<1000.0)?(model->VFB+(model->MTYPE*(model->PHI+(model->GAMMA*__sqrt_0)))):0.5);}

    if(model->KP_Given == FALSE) model->KP=((model->UO>0)?((model->UO*1e-4)*model->COX):(50*1.0e-6));
    if(model->UCRIT_Given == FALSE) model->UCRIT=(((model->VMAX>0)&&(model->UO>0))?(model->VMAX/(model->UO*1e-4)):2e6);
    if(model->E0_Given == FALSE) model->E0=((model->THETA>0)?0:1e12);
    if(model->LAMBDA_Given == FALSE) model->LAMBDA=0.5;
    if(model->WETA_Given == FALSE) model->WETA=0.25;
    if(model->LETA_Given == FALSE) model->LETA=0.1;
    if(model->Q0_Given == FALSE) model->Q0=0;
    if(model->LK_Given == FALSE) model->LK=(0.29*1.0e-6);
    if(model->IBA_Given == FALSE) model->IBA=0;
    if(model->IBB_Given == FALSE) model->IBB=3e8;
    if(model->IBN_Given == FALSE) model->IBN=1;
    if(model->TCV_Given == FALSE) model->TCV=(1*1.0e-3);
    if(model->BEX_Given == FALSE) model->BEX=(-1.5);
    if(model->UCEX_Given == FALSE) model->UCEX=0.8;
    if(model->IBBT_Given == FALSE) model->IBBT=9e-4;
    if(model->AVTO_Given == FALSE) model->AVTO=0;
    if(model->AKP_Given == FALSE) model->AKP=0;
    if(model->AGAMMA_Given == FALSE) model->AGAMMA=0;
    if(model->KF_Given == FALSE) model->KF=0;
    if(model->AF_Given == FALSE) model->AF=1;
    if(model->NQS_Given == FALSE) model->NQS=0;{
double __exp_0=0.0;
_exp(__exp_0,(4))
EXIT_IF_ISNAN(__exp_0)

    if(model->SATLIM_Given == FALSE) model->SATLIM=__exp_0;}

    if(model->XQC_Given == FALSE) model->XQC=0.4;
    if(model->HDIF_Given == FALSE) model->HDIF=0;
    if(model->RSH_Given == FALSE) model->RSH=0;
    if(model->JS_Given == FALSE) model->JS=0;
    if(model->JSW_Given == FALSE) model->JSW=0;
    if(model->XTI_Given == FALSE) model->XTI=0;
    if(model->N_Given == FALSE) model->N=1;
    if(model->CJ_Given == FALSE) model->CJ=0;
    if(model->CJSW_Given == FALSE) model->CJSW=0;
    if(model->PB_Given == FALSE) model->PB=0.8;
    if(model->PBSW_Given == FALSE) model->PBSW=model->PB;
    if(model->MJ_Given == FALSE) model->MJ=0.5;
    if(model->MJSW_Given == FALSE) model->MJSW=0.333;
    if(model->FC_Given == FALSE) model->FC=0.5;
    if(model->FCSW_Given == FALSE) model->FCSW=model->FC;
    if(model->CGSO_Given == FALSE) model->CGSO=0;
    if(model->CGDO_Given == FALSE) model->CGDO=0;
    if(model->CGBO_Given == FALSE) model->CGBO=0;
    for ( here = model->ekvinstances ;here != NULL ; here = here->ekvnextInstance )
    {
    if(here->L_Given == FALSE) here->L=(10*1.0e-6);
    if(here->W_Given == FALSE) here->W=(10*1.0e-6);
    if(here->M_Given == FALSE) here->M=1;
    if(here->AD_Given == FALSE) here->AD=((model->HDIF>0)?((2*model->HDIF)*here->W):0);
    if(here->AS_Given == FALSE) here->AS=((model->HDIF>0)?((2*model->HDIF)*here->W):0);
    if(here->PD_Given == FALSE) here->PD=((model->HDIF>0)?((4*model->HDIF)+(2*here->W)):0);
    if(here->PS_Given == FALSE) here->PS=((model->HDIF>0)?((4*model->HDIF)+(2*here->W)):0);
    if(here->NRD_Given == FALSE) here->NRD=((model->HDIF>0)?(model->HDIF/here->W):0);
    if(here->NRS_Given == FALSE) here->NRS=((model->HDIF>0)?(model->HDIF/here->W):0);
    if(here->RS_Given == FALSE) here->RS=((model->RSH>0)?(model->RSH*here->NRS):0);
    if(here->RD_Given == FALSE) here->RD=((model->RSH>0)?(model->RSH*here->NRD):0);
      /* Internal Nodes */
      {
        here->diNode = -1;
        here->siNode = -1;
      }
      /* set states */
      here->state_g_b = *states; *states += 2;
      here->state_g_di = *states; *states += 2;
      here->state_g_si = *states; *states += 2;
      here->state_b_g = *states; *states += 2;
      here->state_b_di = *states; *states += 2;
      here->state_b_si = *states; *states += 2;
      here->state_si_g = *states; *states += 2;
      here->state_di_g = *states; *states += 2;
      /* set Sparse Matrix Pointers */
      here->PTR_J_di_si_required=0;
      here->PTR_J_di_b_required=0;
      here->PTR_J_si_si_required=0;
      here->PTR_J_si_b_required=0;
      here->PTR_J_di_di_required=0;
      here->PTR_J_si_di_required=0;
      here->PTR_J_di_g_required=0;
      here->PTR_J_si_g_required=0;
      here->PTR_J_b_si_required=0;
      here->PTR_J_b_b_required=0;
      here->PTR_J_b_di_required=0;
      here->PTR_J_b_g_required=0;
      here->PTR_J_g_si_required=0;
      here->PTR_J_g_b_required=0;
      here->PTR_J_g_di_required=0;
      here->PTR_J_g_g_required=0;
      here->PTR_J_d_d_required=0;
      here->PTR_J_d_di_required=0;
      here->PTR_J_di_d_required=0;
      here->PTR_J_s_s_required=0;
      here->PTR_J_s_si_required=0;
      here->PTR_J_si_s_required=0;

      ekvguesstopology(matrix,ckt,model,here);

      /* Internal Nodes */
      {
        int error;
        CKTnode *tmp;
        if(here->diNode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->ekvname,"no info");
          if(error) return(error);
          here->diNode = tmp->number;
        }
        if(here->siNode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->ekvname,"no info");
          if(error) return(error);
          here->siNode = tmp->number;
        }
      }
        if(here->PTR_J_di_si_required==1)
        {
          here->PTR_J_di_si=SMPmakeElt(matrix,here->diNode,here->siNode);
        }
        if(here->PTR_J_di_b_required==1)
        {
          here->PTR_J_di_b=SMPmakeElt(matrix,here->diNode,here->bNode);
        }
        if(here->PTR_J_si_si_required==1)
        {
          here->PTR_J_si_si=SMPmakeElt(matrix,here->siNode,here->siNode);
        }
        if(here->PTR_J_si_b_required==1)
        {
          here->PTR_J_si_b=SMPmakeElt(matrix,here->siNode,here->bNode);
        }
        if(here->PTR_J_di_di_required==1)
        {
          here->PTR_J_di_di=SMPmakeElt(matrix,here->diNode,here->diNode);
        }
        if(here->PTR_J_si_di_required==1)
        {
          here->PTR_J_si_di=SMPmakeElt(matrix,here->siNode,here->diNode);
        }
        if(here->PTR_J_di_g_required==1)
        {
          here->PTR_J_di_g=SMPmakeElt(matrix,here->diNode,here->gNode);
        }
        if(here->PTR_J_si_g_required==1)
        {
          here->PTR_J_si_g=SMPmakeElt(matrix,here->siNode,here->gNode);
        }
        if(here->PTR_J_b_si_required==1)
        {
          here->PTR_J_b_si=SMPmakeElt(matrix,here->bNode,here->siNode);
        }
        if(here->PTR_J_b_b_required==1)
        {
          here->PTR_J_b_b=SMPmakeElt(matrix,here->bNode,here->bNode);
        }
        if(here->PTR_J_b_di_required==1)
        {
          here->PTR_J_b_di=SMPmakeElt(matrix,here->bNode,here->diNode);
        }
        if(here->PTR_J_b_g_required==1)
        {
          here->PTR_J_b_g=SMPmakeElt(matrix,here->bNode,here->gNode);
        }
        if(here->PTR_J_g_si_required==1)
        {
          here->PTR_J_g_si=SMPmakeElt(matrix,here->gNode,here->siNode);
        }
        if(here->PTR_J_g_b_required==1)
        {
          here->PTR_J_g_b=SMPmakeElt(matrix,here->gNode,here->bNode);
        }
        if(here->PTR_J_g_di_required==1)
        {
          here->PTR_J_g_di=SMPmakeElt(matrix,here->gNode,here->diNode);
        }
        if(here->PTR_J_g_g_required==1)
        {
          here->PTR_J_g_g=SMPmakeElt(matrix,here->gNode,here->gNode);
        }
        if(here->PTR_J_d_d_required==1)
        {
          here->PTR_J_d_d=SMPmakeElt(matrix,here->dNode,here->dNode);
        }
        if(here->PTR_J_d_di_required==1)
        {
          here->PTR_J_d_di=SMPmakeElt(matrix,here->dNode,here->diNode);
        }
        if(here->PTR_J_di_d_required==1)
        {
          here->PTR_J_di_d=SMPmakeElt(matrix,here->diNode,here->dNode);
        }
        if(here->PTR_J_s_s_required==1)
        {
          here->PTR_J_s_s=SMPmakeElt(matrix,here->sNode,here->sNode);
        }
        if(here->PTR_J_s_si_required==1)
        {
          here->PTR_J_s_si=SMPmakeElt(matrix,here->sNode,here->siNode);
        }
        if(here->PTR_J_si_s_required==1)
        {
          here->PTR_J_si_s=SMPmakeElt(matrix,here->siNode,here->sNode);
        }

    }
  }
  return(OK);
}
