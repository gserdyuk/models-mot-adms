/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Mon, 12 Apr 2010 19:24:54 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "psp102defs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

int psp102setup (SMPmatrix *matrix, GENmodel *inModel, CKTcircuit *ckt, int *states)
     /* load the psp102 device structure with those pointers needed later 
      * for fast matrix loading 
      */
{
  register psp102model *model = (psp102model*)inModel;
  register psp102instance *here;
  
  /*  loop through all the psp102 device models */
  for ( ;model != NULL ;model = model->psp102nextModel )
  {
    if(model->pmos_Given == FALSE) model->pmos=1;
    if(model->nmos_Given == FALSE) model->nmos=1;
    if(model->LEVEL_Given == FALSE) model->LEVEL=1020;
    if(model->TYPE_Given == FALSE) model->TYPE=1.0;
    if(model->TR_Given == FALSE) model->TR=21.0;
    if(model->SWIGATE_Given == FALSE) model->SWIGATE=0.0;
    if(model->SWIMPACT_Given == FALSE) model->SWIMPACT=0.0;
    if(model->SWGIDL_Given == FALSE) model->SWGIDL=0.0;
    if(model->SWJUNCAP_Given == FALSE) model->SWJUNCAP=0.0;
    if(model->QMC_Given == FALSE) model->QMC=1.0;
    if(model->LVARO_Given == FALSE) model->LVARO=0.0;
    if(model->LVARL_Given == FALSE) model->LVARL=0.0;
    if(model->LVARW_Given == FALSE) model->LVARW=0.0;
    if(model->LAP_Given == FALSE) model->LAP=0.0;
    if(model->WVARO_Given == FALSE) model->WVARO=0.0;
    if(model->WVARL_Given == FALSE) model->WVARL=0.0;
    if(model->WVARW_Given == FALSE) model->WVARW=0.0;
    if(model->WOT_Given == FALSE) model->WOT=0.0;
    if(model->DLQ_Given == FALSE) model->DLQ=0.0;
    if(model->DWQ_Given == FALSE) model->DWQ=0.0;
    if(model->VFBO_Given == FALSE) model->VFBO=(-1.0);
    if(model->VFBL_Given == FALSE) model->VFBL=0.0;
    if(model->VFBW_Given == FALSE) model->VFBW=0.0;
    if(model->VFBLW_Given == FALSE) model->VFBLW=0.0;
    if(model->STVFBO_Given == FALSE) model->STVFBO=5e-4;
    if(model->STVFBL_Given == FALSE) model->STVFBL=0.0;
    if(model->STVFBW_Given == FALSE) model->STVFBW=0.0;
    if(model->STVFBLW_Given == FALSE) model->STVFBLW=0.0;
    if(model->TOXO_Given == FALSE) model->TOXO=2e-9;
    if(model->NSUBO_Given == FALSE) model->NSUBO=3e23;
    if(model->NSUBW_Given == FALSE) model->NSUBW=0.0;
    if(model->WSEG_Given == FALSE) model->WSEG=1e-8;
    if(model->NPCK_Given == FALSE) model->NPCK=1e24;
    if(model->NPCKW_Given == FALSE) model->NPCKW=0.0;
    if(model->WSEGP_Given == FALSE) model->WSEGP=1e-8;
    if(model->LPCK_Given == FALSE) model->LPCK=1e-8;
    if(model->LPCKW_Given == FALSE) model->LPCKW=0.0;
    if(model->FOL1_Given == FALSE) model->FOL1=0.0;
    if(model->FOL2_Given == FALSE) model->FOL2=0.0;
    if(model->VNSUBO_Given == FALSE) model->VNSUBO=0.0;
    if(model->NSLPO_Given == FALSE) model->NSLPO=0.05;
    if(model->DNSUBO_Given == FALSE) model->DNSUBO=0.0;
    if(model->DPHIBO_Given == FALSE) model->DPHIBO=0.0;
    if(model->DPHIBL_Given == FALSE) model->DPHIBL=0.0;
    if(model->DPHIBLEXP_Given == FALSE) model->DPHIBLEXP=1.0;
    if(model->DPHIBW_Given == FALSE) model->DPHIBW=0.0;
    if(model->DPHIBLW_Given == FALSE) model->DPHIBLW=0.0;
    if(model->NPO_Given == FALSE) model->NPO=1e26;
    if(model->NPL_Given == FALSE) model->NPL=0.0;
    if(model->CTO_Given == FALSE) model->CTO=0.0;
    if(model->CTL_Given == FALSE) model->CTL=0.0;
    if(model->CTLEXP_Given == FALSE) model->CTLEXP=1.0;
    if(model->CTW_Given == FALSE) model->CTW=0.0;
    if(model->CTLW_Given == FALSE) model->CTLW=0.0;
    if(model->TOXOVO_Given == FALSE) model->TOXOVO=2e-9;
    if(model->LOV_Given == FALSE) model->LOV=0;
    if(model->NOVO_Given == FALSE) model->NOVO=5e25;
    if(model->CFL_Given == FALSE) model->CFL=0.0;
    if(model->CFLEXP_Given == FALSE) model->CFLEXP=2.0;
    if(model->CFW_Given == FALSE) model->CFW=0.0;
    if(model->CFBO_Given == FALSE) model->CFBO=0.0;
    if(model->UO_Given == FALSE) model->UO=5e-2;
    if(model->FBET1_Given == FALSE) model->FBET1=0.0;
    if(model->FBET1W_Given == FALSE) model->FBET1W=0.0;
    if(model->LP1_Given == FALSE) model->LP1=1e-8;
    if(model->LP1W_Given == FALSE) model->LP1W=0.0;
    if(model->FBET2_Given == FALSE) model->FBET2=0.0;
    if(model->LP2_Given == FALSE) model->LP2=1e-8;
    if(model->BETW1_Given == FALSE) model->BETW1=0.0;
    if(model->BETW2_Given == FALSE) model->BETW2=0.0;
    if(model->WBET_Given == FALSE) model->WBET=1e-9;
    if(model->STBETO_Given == FALSE) model->STBETO=1.0;
    if(model->STBETL_Given == FALSE) model->STBETL=0.0;
    if(model->STBETW_Given == FALSE) model->STBETW=0.0;
    if(model->STBETLW_Given == FALSE) model->STBETLW=0.0;
    if(model->MUEO_Given == FALSE) model->MUEO=0.5;
    if(model->MUEW_Given == FALSE) model->MUEW=0.0;
    if(model->STMUEO_Given == FALSE) model->STMUEO=0.0;
    if(model->THEMUO_Given == FALSE) model->THEMUO=1.5;
    if(model->STTHEMUO_Given == FALSE) model->STTHEMUO=1.5;
    if(model->CSO_Given == FALSE) model->CSO=0.0;
    if(model->CSL_Given == FALSE) model->CSL=0.0;
    if(model->CSLEXP_Given == FALSE) model->CSLEXP=0.0;
    if(model->CSW_Given == FALSE) model->CSW=0.0;
    if(model->CSLW_Given == FALSE) model->CSLW=0.0;
    if(model->STCSO_Given == FALSE) model->STCSO=0.0;
    if(model->XCORO_Given == FALSE) model->XCORO=0.0;
    if(model->XCORL_Given == FALSE) model->XCORL=0.0;
    if(model->XCORW_Given == FALSE) model->XCORW=0.0;
    if(model->XCORLW_Given == FALSE) model->XCORLW=0.0;
    if(model->STXCORO_Given == FALSE) model->STXCORO=0.0;
    if(model->FETAO_Given == FALSE) model->FETAO=1.0;
    if(model->RSW1_Given == FALSE) model->RSW1=2.5e3;
    if(model->RSW2_Given == FALSE) model->RSW2=0.0;
    if(model->STRSO_Given == FALSE) model->STRSO=1.0;
    if(model->RSBO_Given == FALSE) model->RSBO=0.0;
    if(model->RSGO_Given == FALSE) model->RSGO=0.0;
    if(model->THESATO_Given == FALSE) model->THESATO=0.0;
    if(model->THESATL_Given == FALSE) model->THESATL=0.05;
    if(model->THESATLEXP_Given == FALSE) model->THESATLEXP=1.0;
    if(model->THESATW_Given == FALSE) model->THESATW=0.0;
    if(model->THESATLW_Given == FALSE) model->THESATLW=0.0;
    if(model->STTHESATO_Given == FALSE) model->STTHESATO=1.0;
    if(model->STTHESATL_Given == FALSE) model->STTHESATL=0.0;
    if(model->STTHESATW_Given == FALSE) model->STTHESATW=0.0;
    if(model->STTHESATLW_Given == FALSE) model->STTHESATLW=0.0;
    if(model->THESATBO_Given == FALSE) model->THESATBO=0.0;
    if(model->THESATGO_Given == FALSE) model->THESATGO=0.0;
    if(model->AXO_Given == FALSE) model->AXO=18;
    if(model->AXL_Given == FALSE) model->AXL=0.4;
    if(model->ALPL_Given == FALSE) model->ALPL=5e-4;
    if(model->ALPLEXP_Given == FALSE) model->ALPLEXP=1.0;
    if(model->ALPW_Given == FALSE) model->ALPW=0.0;
    if(model->ALP1L1_Given == FALSE) model->ALP1L1=0.0;
    if(model->ALP1LEXP_Given == FALSE) model->ALP1LEXP=0.5;
    if(model->ALP1L2_Given == FALSE) model->ALP1L2=0.0;
    if(model->ALP1W_Given == FALSE) model->ALP1W=0.0;
    if(model->ALP2L1_Given == FALSE) model->ALP2L1=0.0;
    if(model->ALP2LEXP_Given == FALSE) model->ALP2LEXP=0.5;
    if(model->ALP2L2_Given == FALSE) model->ALP2L2=0.0;
    if(model->ALP2W_Given == FALSE) model->ALP2W=0.0;
    if(model->VPO_Given == FALSE) model->VPO=0.05;
    if(model->A1O_Given == FALSE) model->A1O=1.0;
    if(model->A1L_Given == FALSE) model->A1L=0.0;
    if(model->A1W_Given == FALSE) model->A1W=0.0;
    if(model->A2O_Given == FALSE) model->A2O=10;
    if(model->STA2O_Given == FALSE) model->STA2O=0.0;
    if(model->A3O_Given == FALSE) model->A3O=1.0;
    if(model->A3L_Given == FALSE) model->A3L=0.0;
    if(model->A3W_Given == FALSE) model->A3W=0.0;
    if(model->A4O_Given == FALSE) model->A4O=0.0;
    if(model->A4L_Given == FALSE) model->A4L=0.0;
    if(model->A4W_Given == FALSE) model->A4W=0.0;
    if(model->GCOO_Given == FALSE) model->GCOO=0.0;
    if(model->IGINVLW_Given == FALSE) model->IGINVLW=0.0;
    if(model->IGOVW_Given == FALSE) model->IGOVW=0.0;
    if(model->STIGO_Given == FALSE) model->STIGO=2.0;
    if(model->GC2O_Given == FALSE) model->GC2O=0.375;
    if(model->GC3O_Given == FALSE) model->GC3O=0.063;
    if(model->CHIBO_Given == FALSE) model->CHIBO=3.1;
    if(model->AGIDLW_Given == FALSE) model->AGIDLW=0.0;
    if(model->BGIDLO_Given == FALSE) model->BGIDLO=41;
    if(model->STBGIDLO_Given == FALSE) model->STBGIDLO=0.0;
    if(model->CGIDLO_Given == FALSE) model->CGIDLO=0.0;
    if(model->CGBOVL_Given == FALSE) model->CGBOVL=0.0;
    if(model->CFRW_Given == FALSE) model->CFRW=0.0;
    if(model->FNTO_Given == FALSE) model->FNTO=1.0;
    if(model->NFALW_Given == FALSE) model->NFALW=8e22;
    if(model->NFBLW_Given == FALSE) model->NFBLW=3e7;
    if(model->NFCLW_Given == FALSE) model->NFCLW=0.0;
    if(model->DTA_Given == FALSE) model->DTA=0;
    if(model->SAREF_Given == FALSE) model->SAREF=1.0e-6;
    if(model->SBREF_Given == FALSE) model->SBREF=1.0e-6;
    if(model->WLOD_Given == FALSE) model->WLOD=0;
    if(model->KUO_Given == FALSE) model->KUO=0;
    if(model->KVSAT_Given == FALSE) model->KVSAT=0;
    if(model->TKUO_Given == FALSE) model->TKUO=0;
    if(model->LKUO_Given == FALSE) model->LKUO=0;
    if(model->WKUO_Given == FALSE) model->WKUO=0;
    if(model->PKUO_Given == FALSE) model->PKUO=0;
    if(model->LLODKUO_Given == FALSE) model->LLODKUO=0;
    if(model->WLODKUO_Given == FALSE) model->WLODKUO=0;
    if(model->KVTHO_Given == FALSE) model->KVTHO=0;
    if(model->LKVTHO_Given == FALSE) model->LKVTHO=0;
    if(model->WKVTHO_Given == FALSE) model->WKVTHO=0;
    if(model->PKVTHO_Given == FALSE) model->PKVTHO=0;
    if(model->LLODVTH_Given == FALSE) model->LLODVTH=0;
    if(model->WLODVTH_Given == FALSE) model->WLODVTH=0;
    if(model->STETAO_Given == FALSE) model->STETAO=0;
    if(model->LODETAO_Given == FALSE) model->LODETAO=1.0;
    if(model->TRJ_Given == FALSE) model->TRJ=21;
    if(model->IMAX_Given == FALSE) model->IMAX=1000;
    if(model->CJORBOT_Given == FALSE) model->CJORBOT=1E-3;
    if(model->CJORSTI_Given == FALSE) model->CJORSTI=1E-9;
    if(model->CJORGAT_Given == FALSE) model->CJORGAT=1E-9;
    if(model->VBIRBOT_Given == FALSE) model->VBIRBOT=1;
    if(model->VBIRSTI_Given == FALSE) model->VBIRSTI=1;
    if(model->VBIRGAT_Given == FALSE) model->VBIRGAT=1;
    if(model->PBOT_Given == FALSE) model->PBOT=0.5;
    if(model->PSTI_Given == FALSE) model->PSTI=0.5;
    if(model->PGAT_Given == FALSE) model->PGAT=0.5;
    if(model->PHIGBOT_Given == FALSE) model->PHIGBOT=1.16;
    if(model->PHIGSTI_Given == FALSE) model->PHIGSTI=1.16;
    if(model->PHIGGAT_Given == FALSE) model->PHIGGAT=1.16;
    if(model->IDSATRBOT_Given == FALSE) model->IDSATRBOT=1E-12;
    if(model->IDSATRSTI_Given == FALSE) model->IDSATRSTI=1E-18;
    if(model->IDSATRGAT_Given == FALSE) model->IDSATRGAT=1E-18;
    if(model->CSRHBOT_Given == FALSE) model->CSRHBOT=1E2;
    if(model->CSRHSTI_Given == FALSE) model->CSRHSTI=1E-4;
    if(model->CSRHGAT_Given == FALSE) model->CSRHGAT=1E-4;
    if(model->XJUNSTI_Given == FALSE) model->XJUNSTI=100E-9;
    if(model->XJUNGAT_Given == FALSE) model->XJUNGAT=100E-9;
    if(model->CTATBOT_Given == FALSE) model->CTATBOT=1E2;
    if(model->CTATSTI_Given == FALSE) model->CTATSTI=1E-4;
    if(model->CTATGAT_Given == FALSE) model->CTATGAT=1E-4;
    if(model->MEFFTATBOT_Given == FALSE) model->MEFFTATBOT=0.25;
    if(model->MEFFTATSTI_Given == FALSE) model->MEFFTATSTI=0.25;
    if(model->MEFFTATGAT_Given == FALSE) model->MEFFTATGAT=0.25;
    if(model->CBBTBOT_Given == FALSE) model->CBBTBOT=1E-12;
    if(model->CBBTSTI_Given == FALSE) model->CBBTSTI=1E-18;
    if(model->CBBTGAT_Given == FALSE) model->CBBTGAT=1E-18;
    if(model->FBBTRBOT_Given == FALSE) model->FBBTRBOT=1E9;
    if(model->FBBTRSTI_Given == FALSE) model->FBBTRSTI=1E9;
    if(model->FBBTRGAT_Given == FALSE) model->FBBTRGAT=1E9;
    if(model->STFBBTBOT_Given == FALSE) model->STFBBTBOT=(-1E-3);
    if(model->STFBBTSTI_Given == FALSE) model->STFBBTSTI=(-1E-3);
    if(model->STFBBTGAT_Given == FALSE) model->STFBBTGAT=(-1E-3);
    if(model->VBRBOT_Given == FALSE) model->VBRBOT=10;
    if(model->VBRSTI_Given == FALSE) model->VBRSTI=10;
    if(model->VBRGAT_Given == FALSE) model->VBRGAT=10;
    if(model->PBRBOT_Given == FALSE) model->PBRBOT=4;
    if(model->PBRSTI_Given == FALSE) model->PBRSTI=4;
    if(model->PBRGAT_Given == FALSE) model->PBRGAT=4;
    for ( here = model->psp102instances ;here != NULL ; here = here->psp102nextInstance )
    {
    if(here->L_Given == FALSE) here->L=10e-6;
    if(here->W_Given == FALSE) here->W=10e-6;
    if(here->SA_Given == FALSE) here->SA=0.0;
    if(here->SB_Given == FALSE) here->SB=0.0;
    if(here->ABSOURCE_Given == FALSE) here->ABSOURCE=1E-12;
    if(here->LSSOURCE_Given == FALSE) here->LSSOURCE=1E-6;
    if(here->LGSOURCE_Given == FALSE) here->LGSOURCE=1E-6;
    if(here->ABDRAIN_Given == FALSE) here->ABDRAIN=1E-12;
    if(here->LSDRAIN_Given == FALSE) here->LSDRAIN=1E-6;
    if(here->LGDRAIN_Given == FALSE) here->LGDRAIN=1E-6;
    if(here->AS_Given == FALSE) here->AS=1E-12;
    if(here->PS_Given == FALSE) here->PS=1E-6;
    if(here->AD_Given == FALSE) here->AD=1E-12;
    if(here->PD_Given == FALSE) here->PD=1E-6;
    if(here->MULT_Given == FALSE) here->MULT=1.0;
      /* Internal Nodes */
      {
        here->NOINode = -1;
        here->NOI2Node = -1;
      }
      /* set states */
      here->state_NOI_GND = *states; *states += 2;
      here->state_B_D = *states; *states += 2;
      here->state_B_S = *states; *states += 2;
      here->state_G_B = *states; *states += 2;
      here->state_G_D = *states; *states += 2;
      here->state_G_S = *states; *states += 2;
      here->state_D_S = *states; *states += 2;
      /* set Sparse Matrix Pointers */
      here->PTR_J_D_S_required=0;
      here->PTR_J_D_B_required=0;
      here->PTR_J_B_S_required=0;
      here->PTR_J_B_B_required=0;
      here->PTR_J_D_D_required=0;
      here->PTR_J_B_D_required=0;
      here->PTR_J_D_G_required=0;
      here->PTR_J_B_G_required=0;
      here->PTR_J_S_S_required=0;
      here->PTR_J_S_B_required=0;
      here->PTR_J_S_D_required=0;
      here->PTR_J_S_G_required=0;
      here->PTR_J_G_S_required=0;
      here->PTR_J_G_B_required=0;
      here->PTR_J_G_D_required=0;
      here->PTR_J_G_G_required=0;
      here->PTR_J_NOI2_NOI2_required=0;
      here->PTR_J_NOI2_S_required=0;
      here->PTR_J_NOI2_B_required=0;
      here->PTR_J_NOI2_G_required=0;
      here->PTR_J_NOI2_D_required=0;
      here->PTR_J_NOI_S_required=0;
      here->PTR_J_NOI_B_required=0;
      here->PTR_J_NOI_G_required=0;
      here->PTR_J_NOI_D_required=0;
      here->PTR_J_NOI_NOI2_required=0;
      here->PTR_J_NOI_NOI_required=0;
      here->PTR_J_D_NOI2_required=0;
      here->PTR_J_S_NOI2_required=0;
      here->PTR_J_G_NOI_required=0;
      here->PTR_J_S_NOI_required=0;
      here->PTR_J_D_NOI_required=0;

      psp102guesstopology(matrix,ckt,model,here);

      /* Internal Nodes */
      {
        int error;
        CKTnode *tmp;
        if(here->NOINode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->psp102name,"no info");
          if(error) return(error);
          here->NOINode = tmp->number;
        }
        if(here->NOI2Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->psp102name,"no info");
          if(error) return(error);
          here->NOI2Node = tmp->number;
        }
      }
        if(here->PTR_J_D_S_required==1)
        {
          here->PTR_J_D_S=SMPmakeElt(matrix,here->DNode,here->SNode);
        }
        if(here->PTR_J_D_B_required==1)
        {
          here->PTR_J_D_B=SMPmakeElt(matrix,here->DNode,here->BNode);
        }
        if(here->PTR_J_B_S_required==1)
        {
          here->PTR_J_B_S=SMPmakeElt(matrix,here->BNode,here->SNode);
        }
        if(here->PTR_J_B_B_required==1)
        {
          here->PTR_J_B_B=SMPmakeElt(matrix,here->BNode,here->BNode);
        }
        if(here->PTR_J_D_D_required==1)
        {
          here->PTR_J_D_D=SMPmakeElt(matrix,here->DNode,here->DNode);
        }
        if(here->PTR_J_B_D_required==1)
        {
          here->PTR_J_B_D=SMPmakeElt(matrix,here->BNode,here->DNode);
        }
        if(here->PTR_J_D_G_required==1)
        {
          here->PTR_J_D_G=SMPmakeElt(matrix,here->DNode,here->GNode);
        }
        if(here->PTR_J_B_G_required==1)
        {
          here->PTR_J_B_G=SMPmakeElt(matrix,here->BNode,here->GNode);
        }
        if(here->PTR_J_S_S_required==1)
        {
          here->PTR_J_S_S=SMPmakeElt(matrix,here->SNode,here->SNode);
        }
        if(here->PTR_J_S_B_required==1)
        {
          here->PTR_J_S_B=SMPmakeElt(matrix,here->SNode,here->BNode);
        }
        if(here->PTR_J_S_D_required==1)
        {
          here->PTR_J_S_D=SMPmakeElt(matrix,here->SNode,here->DNode);
        }
        if(here->PTR_J_S_G_required==1)
        {
          here->PTR_J_S_G=SMPmakeElt(matrix,here->SNode,here->GNode);
        }
        if(here->PTR_J_G_S_required==1)
        {
          here->PTR_J_G_S=SMPmakeElt(matrix,here->GNode,here->SNode);
        }
        if(here->PTR_J_G_B_required==1)
        {
          here->PTR_J_G_B=SMPmakeElt(matrix,here->GNode,here->BNode);
        }
        if(here->PTR_J_G_D_required==1)
        {
          here->PTR_J_G_D=SMPmakeElt(matrix,here->GNode,here->DNode);
        }
        if(here->PTR_J_G_G_required==1)
        {
          here->PTR_J_G_G=SMPmakeElt(matrix,here->GNode,here->GNode);
        }
        if(here->PTR_J_NOI2_NOI2_required==1)
        {
          here->PTR_J_NOI2_NOI2=SMPmakeElt(matrix,here->NOI2Node,here->NOI2Node);
        }
        if(here->PTR_J_NOI2_S_required==1)
        {
          here->PTR_J_NOI2_S=SMPmakeElt(matrix,here->NOI2Node,here->SNode);
        }
        if(here->PTR_J_NOI2_B_required==1)
        {
          here->PTR_J_NOI2_B=SMPmakeElt(matrix,here->NOI2Node,here->BNode);
        }
        if(here->PTR_J_NOI2_G_required==1)
        {
          here->PTR_J_NOI2_G=SMPmakeElt(matrix,here->NOI2Node,here->GNode);
        }
        if(here->PTR_J_NOI2_D_required==1)
        {
          here->PTR_J_NOI2_D=SMPmakeElt(matrix,here->NOI2Node,here->DNode);
        }
        if(here->PTR_J_NOI_S_required==1)
        {
          here->PTR_J_NOI_S=SMPmakeElt(matrix,here->NOINode,here->SNode);
        }
        if(here->PTR_J_NOI_B_required==1)
        {
          here->PTR_J_NOI_B=SMPmakeElt(matrix,here->NOINode,here->BNode);
        }
        if(here->PTR_J_NOI_G_required==1)
        {
          here->PTR_J_NOI_G=SMPmakeElt(matrix,here->NOINode,here->GNode);
        }
        if(here->PTR_J_NOI_D_required==1)
        {
          here->PTR_J_NOI_D=SMPmakeElt(matrix,here->NOINode,here->DNode);
        }
        if(here->PTR_J_NOI_NOI2_required==1)
        {
          here->PTR_J_NOI_NOI2=SMPmakeElt(matrix,here->NOINode,here->NOI2Node);
        }
        if(here->PTR_J_NOI_NOI_required==1)
        {
          here->PTR_J_NOI_NOI=SMPmakeElt(matrix,here->NOINode,here->NOINode);
        }
        if(here->PTR_J_D_NOI2_required==1)
        {
          here->PTR_J_D_NOI2=SMPmakeElt(matrix,here->DNode,here->NOI2Node);
        }
        if(here->PTR_J_S_NOI2_required==1)
        {
          here->PTR_J_S_NOI2=SMPmakeElt(matrix,here->SNode,here->NOI2Node);
        }
        if(here->PTR_J_G_NOI_required==1)
        {
          here->PTR_J_G_NOI=SMPmakeElt(matrix,here->GNode,here->NOINode);
        }
        if(here->PTR_J_S_NOI_required==1)
        {
          here->PTR_J_S_NOI=SMPmakeElt(matrix,here->SNode,here->NOINode);
        }
        if(here->PTR_J_D_NOI_required==1)
        {
          here->PTR_J_D_NOI=SMPmakeElt(matrix,here->DNode,here->NOINode);
        }

    }
  }
  return(OK);
}
