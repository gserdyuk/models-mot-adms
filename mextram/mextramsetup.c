/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:15 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "mextramdefs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

int mextramsetup (SMPmatrix *matrix, GENmodel *inModel, CKTcircuit *ckt, int *states)
     /* load the mextram device structure with those pointers needed later 
      * for fast matrix loading 
      */
{
  register mextrammodel *model = (mextrammodel*)inModel;
  register mextraminstance *here;
  
  /*  loop through all the mextram device models */
  for ( ;model != NULL ;model = model->mextramnextModel )
  {
    if(model->pnp_Given == FALSE) model->pnp=0;
    if(model->npn_Given == FALSE) model->npn=1;
    if(model->LEVEL_Given == FALSE) model->LEVEL=504;
    if(model->TREF_Given == FALSE) model->TREF=25.0;
    if(model->DTA_Given == FALSE) model->DTA=0.0;
    if(model->EXMOD_Given == FALSE) model->EXMOD=1;
    if(model->EXPHI_Given == FALSE) model->EXPHI=1;
    if(model->EXAVL_Given == FALSE) model->EXAVL=0;
    if(model->IS_Given == FALSE) model->IS=(22.0*1.0e-18);
    if(model->IK_Given == FALSE) model->IK=0.1;
    if(model->VER_Given == FALSE) model->VER=2.5;
    if(model->VEF_Given == FALSE) model->VEF=44.0;
    if(model->BF_Given == FALSE) model->BF=215.0;
    if(model->IBF_Given == FALSE) model->IBF=(2.7*1.0e-15);
    if(model->MLF_Given == FALSE) model->MLF=2.0;
    if(model->XIBI_Given == FALSE) model->XIBI=0.0;
    if(model->BRI_Given == FALSE) model->BRI=7.0;
    if(model->IBR_Given == FALSE) model->IBR=(1.0*1.0e-15);
    if(model->VLR_Given == FALSE) model->VLR=0.2;
    if(model->XEXT_Given == FALSE) model->XEXT=0.63;
    if(model->WAVL_Given == FALSE) model->WAVL=(1.1*1.0e-6);
    if(model->VAVL_Given == FALSE) model->VAVL=3.0;
    if(model->SFH_Given == FALSE) model->SFH=0.3;
    if(model->RE_Given == FALSE) model->RE=5.0;
    if(model->RBC_Given == FALSE) model->RBC=23.0;
    if(model->RBV_Given == FALSE) model->RBV=18.0;
    if(model->RCC_Given == FALSE) model->RCC=12.0;
    if(model->RCV_Given == FALSE) model->RCV=150.0;
    if(model->SCRCV_Given == FALSE) model->SCRCV=1250.0;
    if(model->IHC_Given == FALSE) model->IHC=(4.0*1.0e-3);
    if(model->AXI_Given == FALSE) model->AXI=0.3;
    if(model->CJE_Given == FALSE) model->CJE=(73.0*1.0e-15);
    if(model->VDE_Given == FALSE) model->VDE=0.95;
    if(model->PE_Given == FALSE) model->PE=0.4;
    if(model->XCJE_Given == FALSE) model->XCJE=0.4;
    if(model->CBEO_Given == FALSE) model->CBEO=0.0;
    if(model->CJC_Given == FALSE) model->CJC=(78.0*1.0e-15);
    if(model->VDC_Given == FALSE) model->VDC=0.68;
    if(model->PC_Given == FALSE) model->PC=0.5;
    if(model->XP_Given == FALSE) model->XP=0.35;
    if(model->MC_Given == FALSE) model->MC=0.5;
    if(model->XCJC_Given == FALSE) model->XCJC=(32.0*1.0e-3);
    if(model->RCBLX_Given == FALSE) model->RCBLX=1.0;
    if(model->RCBLI_Given == FALSE) model->RCBLI=1.0;
    if(model->CBCO_Given == FALSE) model->CBCO=0.0;
    if(model->MTAU_Given == FALSE) model->MTAU=1.0;
    if(model->TAUE_Given == FALSE) model->TAUE=(2.0*1.0e-12);
    if(model->TAUB_Given == FALSE) model->TAUB=(4.2*1.0e-12);
    if(model->TEPI_Given == FALSE) model->TEPI=(41.0*1.0e-12);
    if(model->TAUR_Given == FALSE) model->TAUR=(520.0*1.0e-12);
    if(model->DEG_Given == FALSE) model->DEG=0.0;
    if(model->XREC_Given == FALSE) model->XREC=0.0;
    if(model->AQBO_Given == FALSE) model->AQBO=0.3;
    if(model->AE_Given == FALSE) model->AE=0.0;
    if(model->AB_Given == FALSE) model->AB=1.0;
    if(model->AEPI_Given == FALSE) model->AEPI=2.5;
    if(model->AEX_Given == FALSE) model->AEX=0.62;
    if(model->AC_Given == FALSE) model->AC=2.0;
    if(model->ACBL_Given == FALSE) model->ACBL=2.0;
    if(model->DVGBF_Given == FALSE) model->DVGBF=(50.0*1.0e-3);
    if(model->DVGBR_Given == FALSE) model->DVGBR=(45.0*1.0e-3);
    if(model->VGB_Given == FALSE) model->VGB=1.17;
    if(model->VGC_Given == FALSE) model->VGC=1.18;
    if(model->VGJ_Given == FALSE) model->VGJ=1.15;
    if(model->DVGTE_Given == FALSE) model->DVGTE=0.05;
    if(model->DAIS_Given == FALSE) model->DAIS=0.0;
    if(model->AF_Given == FALSE) model->AF=2.0;
    if(model->KF_Given == FALSE) model->KF=(20.0*1.0e-12);
    if(model->KFN_Given == FALSE) model->KFN=(20.0*1.0e-12);
    if(model->KAVL_Given == FALSE) model->KAVL=0;
    if(model->ISS_Given == FALSE) model->ISS=(48.0*1.0e-18);
    if(model->IKS_Given == FALSE) model->IKS=(250.0*1.0e-6);
    if(model->CJS_Given == FALSE) model->CJS=(315.0*1.0e-15);
    if(model->VDS_Given == FALSE) model->VDS=0.62;
    if(model->PS_Given == FALSE) model->PS=0.34;
    if(model->VGS_Given == FALSE) model->VGS=1.20;
    if(model->AS_Given == FALSE) model->AS=1.58;
    if(model->RTH_Given == FALSE) model->RTH=300.0;
    if(model->CTH_Given == FALSE) model->CTH=(3.0*1.0e-9);
    if(model->ATH_Given == FALSE) model->ATH=0.0;
    if(model->MULT_Given == FALSE) model->MULT=1.0;
    if(model->TYPE_Given == FALSE) model->TYPE=1;
    for ( here = model->mextraminstances ;here != NULL ; here = here->mextramnextInstance )
    {
      /* Internal Nodes */
      {
        here->c1Node = -1;
        here->e1Node = -1;
        here->b1Node = -1;
        here->b2Node = -1;
        here->c2Node = -1;
        here->c3Node = -1;
        here->c4Node = -1;
        here->noiNode = -1;
      }
      /* set states */
      here->state_b_c1 = *states; *states += 2;
      here->state_b_c4 = *states; *states += 2;
      here->state_b1_c1 = *states; *states += 2;
      here->state_b1_c4 = *states; *states += 2;
      here->state_b_c3 = *states; *states += 2;
      here->state_b_c = *states; *states += 2;
      here->state_b_e = *states; *states += 2;
      here->state_dt_GND = *states; *states += 2;
      here->state_b2_c2 = *states; *states += 2;
      here->state_b1_b2 = *states; *states += 2;
      here->state_s_c1 = *states; *states += 2;
      here->state_b2_e1 = *states; *states += 2;
      here->state_b1_e1 = *states; *states += 2;
      /* set Sparse Matrix Pointers */
      here->PTR_J_c1_c1_required=0;
      here->PTR_J_c1_c2_required=0;
      here->PTR_J_c2_c1_required=0;
      here->PTR_J_c2_c2_required=0;
      here->PTR_J_c1_b2_required=0;
      here->PTR_J_c2_b2_required=0;
      here->PTR_J_c1_dt_required=0;
      here->PTR_J_c2_dt_required=0;
      here->PTR_J_e1_c1_required=0;
      here->PTR_J_e1_c2_required=0;
      here->PTR_J_e1_b2_required=0;
      here->PTR_J_c2_e1_required=0;
      here->PTR_J_e1_e1_required=0;
      here->PTR_J_e1_dt_required=0;
      here->PTR_J_b1_b1_required=0;
      here->PTR_J_b1_e1_required=0;
      here->PTR_J_e1_b1_required=0;
      here->PTR_J_b1_dt_required=0;
      here->PTR_J_b2_b2_required=0;
      here->PTR_J_b2_e1_required=0;
      here->PTR_J_b2_dt_required=0;
      here->PTR_J_b2_c1_required=0;
      here->PTR_J_b2_c2_required=0;
      here->PTR_J_b1_c4_required=0;
      here->PTR_J_b1_c1_required=0;
      here->PTR_J_s_c4_required=0;
      here->PTR_J_s_c1_required=0;
      here->PTR_J_b1_c2_required=0;
      here->PTR_J_s_c2_required=0;
      here->PTR_J_b1_b2_required=0;
      here->PTR_J_s_b2_required=0;
      here->PTR_J_s_b1_required=0;
      here->PTR_J_s_dt_required=0;
      here->PTR_J_b_c1_required=0;
      here->PTR_J_b_c2_required=0;
      here->PTR_J_b_b2_required=0;
      here->PTR_J_b_e1_required=0;
      here->PTR_J_s_e1_required=0;
      here->PTR_J_b_c3_required=0;
      here->PTR_J_b_c4_required=0;
      here->PTR_J_s_c3_required=0;
      here->PTR_J_b_b1_required=0;
      here->PTR_J_b_b_required=0;
      here->PTR_J_s_b_required=0;
      here->PTR_J_b_c_required=0;
      here->PTR_J_s_c_required=0;
      here->PTR_J_b_dt_required=0;
      here->PTR_J_s_s_required=0;
      here->PTR_J_c1_s_required=0;
      here->PTR_J_b1_c3_required=0;
      here->PTR_J_b2_c3_required=0;
      here->PTR_J_b2_c4_required=0;
      here->PTR_J_b1_b_required=0;
      here->PTR_J_b2_b_required=0;
      here->PTR_J_b2_b1_required=0;
      here->PTR_J_b1_c_required=0;
      here->PTR_J_b2_c_required=0;
      here->PTR_J_c2_c3_required=0;
      here->PTR_J_c2_c4_required=0;
      here->PTR_J_c2_b1_required=0;
      here->PTR_J_c2_b_required=0;
      here->PTR_J_c2_c_required=0;
      here->PTR_J_e_dt_required=0;
      here->PTR_J_e_e_required=0;
      here->PTR_J_e_e1_required=0;
      here->PTR_J_e1_e_required=0;
      here->PTR_J_dt_dt_required=0;
      here->PTR_J_dt_s_required=0;
      here->PTR_J_dt_c1_required=0;
      here->PTR_J_dt_b1_required=0;
      here->PTR_J_dt_e1_required=0;
      here->PTR_J_dt_e_required=0;
      here->PTR_J_dt_c3_required=0;
      here->PTR_J_dt_c4_required=0;
      here->PTR_J_dt_b2_required=0;
      here->PTR_J_dt_b_required=0;
      here->PTR_J_dt_c_required=0;
      here->PTR_J_dt_c2_required=0;
      here->PTR_J_noi_noi_required=0;
      here->PTR_J_noi_e1_required=0;
      here->PTR_J_e1_noi_required=0;
      here->PTR_J_b2_noi_required=0;
      here->PTR_J_c2_noi_required=0;
      here->PTR_J_e1_c3_required=0;
      here->PTR_J_e1_c4_required=0;
      here->PTR_J_e1_b_required=0;
      here->PTR_J_e1_c_required=0;
      here->PTR_J_c1_e1_required=0;
      here->PTR_J_c1_b1_required=0;
      here->PTR_J_c1_c4_required=0;
      here->PTR_J_c1_c3_required=0;
      here->PTR_J_c1_b_required=0;
      here->PTR_J_c1_c_required=0;
      here->PTR_J_b_e_required=0;
      here->PTR_J_e_b_required=0;
      here->PTR_J_c_b_required=0;
      here->PTR_J_c_c_required=0;
      here->PTR_J_c3_c1_required=0;
      here->PTR_J_c3_c2_required=0;
      here->PTR_J_c3_b2_required=0;
      here->PTR_J_c3_e1_required=0;
      here->PTR_J_c3_c3_required=0;
      here->PTR_J_c3_c4_required=0;
      here->PTR_J_c3_b1_required=0;
      here->PTR_J_c3_b_required=0;
      here->PTR_J_c3_c_required=0;
      here->PTR_J_c3_dt_required=0;
      here->PTR_J_c_dt_required=0;
      here->PTR_J_c_c3_required=0;
      here->PTR_J_c_c4_required=0;
      here->PTR_J_c_c1_required=0;
      here->PTR_J_c_c2_required=0;
      here->PTR_J_c_b2_required=0;
      here->PTR_J_c_b1_required=0;
      here->PTR_J_c4_dt_required=0;
      here->PTR_J_c4_c4_required=0;
      here->PTR_J_c4_c1_required=0;
      here->PTR_J_c4_b2_required=0;
      here->PTR_J_c4_e1_required=0;
      here->PTR_J_c4_c2_required=0;
      here->PTR_J_c4_b1_required=0;
      here->PTR_J_c4_c3_required=0;
      here->PTR_J_c4_b_required=0;
      here->PTR_J_c4_c_required=0;
      here->PTR_J_noi_b2_required=0;
      here->PTR_J_noi_c1_required=0;
      here->PTR_J_noi_c2_required=0;
      here->PTR_J_noi_dt_required=0;

      mextramguesstopology(matrix,ckt,model,here);

      /* Internal Nodes */
      {
        int error;
        CKTnode *tmp;
        if(here->c1Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->mextramname,"internal collector node 1");
          if(error) return(error);
          here->c1Node = tmp->number;
        }
        if(here->e1Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->mextramname,"internal emitter node");
          if(error) return(error);
          here->e1Node = tmp->number;
        }
        if(here->b1Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->mextramname,"internal base node 1");
          if(error) return(error);
          here->b1Node = tmp->number;
        }
        if(here->b2Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->mextramname,"internal base node 2");
          if(error) return(error);
          here->b2Node = tmp->number;
        }
        if(here->c2Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->mextramname,"internal collector node 2");
          if(error) return(error);
          here->c2Node = tmp->number;
        }
        if(here->c3Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->mextramname,"internal collector node 3");
          if(error) return(error);
          here->c3Node = tmp->number;
        }
        if(here->c4Node == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->mextramname,"internal collector node 4");
          if(error) return(error);
          here->c4Node = tmp->number;
        }
        if(here->noiNode == -1)
        {
          error=CKTmkVolt(ckt,&tmp,here->mextramname,"internal noise node");
          if(error) return(error);
          here->noiNode = tmp->number;
        }
      }
        if(here->PTR_J_c1_c1_required==1)
        {
          here->PTR_J_c1_c1=SMPmakeElt(matrix,here->c1Node,here->c1Node);
        }
        if(here->PTR_J_c1_c2_required==1)
        {
          here->PTR_J_c1_c2=SMPmakeElt(matrix,here->c1Node,here->c2Node);
        }
        if(here->PTR_J_c2_c1_required==1)
        {
          here->PTR_J_c2_c1=SMPmakeElt(matrix,here->c2Node,here->c1Node);
        }
        if(here->PTR_J_c2_c2_required==1)
        {
          here->PTR_J_c2_c2=SMPmakeElt(matrix,here->c2Node,here->c2Node);
        }
        if(here->PTR_J_c1_b2_required==1)
        {
          here->PTR_J_c1_b2=SMPmakeElt(matrix,here->c1Node,here->b2Node);
        }
        if(here->PTR_J_c2_b2_required==1)
        {
          here->PTR_J_c2_b2=SMPmakeElt(matrix,here->c2Node,here->b2Node);
        }
        if(here->PTR_J_c1_dt_required==1)
        {
          here->PTR_J_c1_dt=SMPmakeElt(matrix,here->c1Node,here->dtNode);
        }
        if(here->PTR_J_c2_dt_required==1)
        {
          here->PTR_J_c2_dt=SMPmakeElt(matrix,here->c2Node,here->dtNode);
        }
        if(here->PTR_J_e1_c1_required==1)
        {
          here->PTR_J_e1_c1=SMPmakeElt(matrix,here->e1Node,here->c1Node);
        }
        if(here->PTR_J_e1_c2_required==1)
        {
          here->PTR_J_e1_c2=SMPmakeElt(matrix,here->e1Node,here->c2Node);
        }
        if(here->PTR_J_e1_b2_required==1)
        {
          here->PTR_J_e1_b2=SMPmakeElt(matrix,here->e1Node,here->b2Node);
        }
        if(here->PTR_J_c2_e1_required==1)
        {
          here->PTR_J_c2_e1=SMPmakeElt(matrix,here->c2Node,here->e1Node);
        }
        if(here->PTR_J_e1_e1_required==1)
        {
          here->PTR_J_e1_e1=SMPmakeElt(matrix,here->e1Node,here->e1Node);
        }
        if(here->PTR_J_e1_dt_required==1)
        {
          here->PTR_J_e1_dt=SMPmakeElt(matrix,here->e1Node,here->dtNode);
        }
        if(here->PTR_J_b1_b1_required==1)
        {
          here->PTR_J_b1_b1=SMPmakeElt(matrix,here->b1Node,here->b1Node);
        }
        if(here->PTR_J_b1_e1_required==1)
        {
          here->PTR_J_b1_e1=SMPmakeElt(matrix,here->b1Node,here->e1Node);
        }
        if(here->PTR_J_e1_b1_required==1)
        {
          here->PTR_J_e1_b1=SMPmakeElt(matrix,here->e1Node,here->b1Node);
        }
        if(here->PTR_J_b1_dt_required==1)
        {
          here->PTR_J_b1_dt=SMPmakeElt(matrix,here->b1Node,here->dtNode);
        }
        if(here->PTR_J_b2_b2_required==1)
        {
          here->PTR_J_b2_b2=SMPmakeElt(matrix,here->b2Node,here->b2Node);
        }
        if(here->PTR_J_b2_e1_required==1)
        {
          here->PTR_J_b2_e1=SMPmakeElt(matrix,here->b2Node,here->e1Node);
        }
        if(here->PTR_J_b2_dt_required==1)
        {
          here->PTR_J_b2_dt=SMPmakeElt(matrix,here->b2Node,here->dtNode);
        }
        if(here->PTR_J_b2_c1_required==1)
        {
          here->PTR_J_b2_c1=SMPmakeElt(matrix,here->b2Node,here->c1Node);
        }
        if(here->PTR_J_b2_c2_required==1)
        {
          here->PTR_J_b2_c2=SMPmakeElt(matrix,here->b2Node,here->c2Node);
        }
        if(here->PTR_J_b1_c4_required==1)
        {
          here->PTR_J_b1_c4=SMPmakeElt(matrix,here->b1Node,here->c4Node);
        }
        if(here->PTR_J_b1_c1_required==1)
        {
          here->PTR_J_b1_c1=SMPmakeElt(matrix,here->b1Node,here->c1Node);
        }
        if(here->PTR_J_s_c4_required==1)
        {
          here->PTR_J_s_c4=SMPmakeElt(matrix,here->sNode,here->c4Node);
        }
        if(here->PTR_J_s_c1_required==1)
        {
          here->PTR_J_s_c1=SMPmakeElt(matrix,here->sNode,here->c1Node);
        }
        if(here->PTR_J_b1_c2_required==1)
        {
          here->PTR_J_b1_c2=SMPmakeElt(matrix,here->b1Node,here->c2Node);
        }
        if(here->PTR_J_s_c2_required==1)
        {
          here->PTR_J_s_c2=SMPmakeElt(matrix,here->sNode,here->c2Node);
        }
        if(here->PTR_J_b1_b2_required==1)
        {
          here->PTR_J_b1_b2=SMPmakeElt(matrix,here->b1Node,here->b2Node);
        }
        if(here->PTR_J_s_b2_required==1)
        {
          here->PTR_J_s_b2=SMPmakeElt(matrix,here->sNode,here->b2Node);
        }
        if(here->PTR_J_s_b1_required==1)
        {
          here->PTR_J_s_b1=SMPmakeElt(matrix,here->sNode,here->b1Node);
        }
        if(here->PTR_J_s_dt_required==1)
        {
          here->PTR_J_s_dt=SMPmakeElt(matrix,here->sNode,here->dtNode);
        }
        if(here->PTR_J_b_c1_required==1)
        {
          here->PTR_J_b_c1=SMPmakeElt(matrix,here->bNode,here->c1Node);
        }
        if(here->PTR_J_b_c2_required==1)
        {
          here->PTR_J_b_c2=SMPmakeElt(matrix,here->bNode,here->c2Node);
        }
        if(here->PTR_J_b_b2_required==1)
        {
          here->PTR_J_b_b2=SMPmakeElt(matrix,here->bNode,here->b2Node);
        }
        if(here->PTR_J_b_e1_required==1)
        {
          here->PTR_J_b_e1=SMPmakeElt(matrix,here->bNode,here->e1Node);
        }
        if(here->PTR_J_s_e1_required==1)
        {
          here->PTR_J_s_e1=SMPmakeElt(matrix,here->sNode,here->e1Node);
        }
        if(here->PTR_J_b_c3_required==1)
        {
          here->PTR_J_b_c3=SMPmakeElt(matrix,here->bNode,here->c3Node);
        }
        if(here->PTR_J_b_c4_required==1)
        {
          here->PTR_J_b_c4=SMPmakeElt(matrix,here->bNode,here->c4Node);
        }
        if(here->PTR_J_s_c3_required==1)
        {
          here->PTR_J_s_c3=SMPmakeElt(matrix,here->sNode,here->c3Node);
        }
        if(here->PTR_J_b_b1_required==1)
        {
          here->PTR_J_b_b1=SMPmakeElt(matrix,here->bNode,here->b1Node);
        }
        if(here->PTR_J_b_b_required==1)
        {
          here->PTR_J_b_b=SMPmakeElt(matrix,here->bNode,here->bNode);
        }
        if(here->PTR_J_s_b_required==1)
        {
          here->PTR_J_s_b=SMPmakeElt(matrix,here->sNode,here->bNode);
        }
        if(here->PTR_J_b_c_required==1)
        {
          here->PTR_J_b_c=SMPmakeElt(matrix,here->bNode,here->cNode);
        }
        if(here->PTR_J_s_c_required==1)
        {
          here->PTR_J_s_c=SMPmakeElt(matrix,here->sNode,here->cNode);
        }
        if(here->PTR_J_b_dt_required==1)
        {
          here->PTR_J_b_dt=SMPmakeElt(matrix,here->bNode,here->dtNode);
        }
        if(here->PTR_J_s_s_required==1)
        {
          here->PTR_J_s_s=SMPmakeElt(matrix,here->sNode,here->sNode);
        }
        if(here->PTR_J_c1_s_required==1)
        {
          here->PTR_J_c1_s=SMPmakeElt(matrix,here->c1Node,here->sNode);
        }
        if(here->PTR_J_b1_c3_required==1)
        {
          here->PTR_J_b1_c3=SMPmakeElt(matrix,here->b1Node,here->c3Node);
        }
        if(here->PTR_J_b2_c3_required==1)
        {
          here->PTR_J_b2_c3=SMPmakeElt(matrix,here->b2Node,here->c3Node);
        }
        if(here->PTR_J_b2_c4_required==1)
        {
          here->PTR_J_b2_c4=SMPmakeElt(matrix,here->b2Node,here->c4Node);
        }
        if(here->PTR_J_b1_b_required==1)
        {
          here->PTR_J_b1_b=SMPmakeElt(matrix,here->b1Node,here->bNode);
        }
        if(here->PTR_J_b2_b_required==1)
        {
          here->PTR_J_b2_b=SMPmakeElt(matrix,here->b2Node,here->bNode);
        }
        if(here->PTR_J_b2_b1_required==1)
        {
          here->PTR_J_b2_b1=SMPmakeElt(matrix,here->b2Node,here->b1Node);
        }
        if(here->PTR_J_b1_c_required==1)
        {
          here->PTR_J_b1_c=SMPmakeElt(matrix,here->b1Node,here->cNode);
        }
        if(here->PTR_J_b2_c_required==1)
        {
          here->PTR_J_b2_c=SMPmakeElt(matrix,here->b2Node,here->cNode);
        }
        if(here->PTR_J_c2_c3_required==1)
        {
          here->PTR_J_c2_c3=SMPmakeElt(matrix,here->c2Node,here->c3Node);
        }
        if(here->PTR_J_c2_c4_required==1)
        {
          here->PTR_J_c2_c4=SMPmakeElt(matrix,here->c2Node,here->c4Node);
        }
        if(here->PTR_J_c2_b1_required==1)
        {
          here->PTR_J_c2_b1=SMPmakeElt(matrix,here->c2Node,here->b1Node);
        }
        if(here->PTR_J_c2_b_required==1)
        {
          here->PTR_J_c2_b=SMPmakeElt(matrix,here->c2Node,here->bNode);
        }
        if(here->PTR_J_c2_c_required==1)
        {
          here->PTR_J_c2_c=SMPmakeElt(matrix,here->c2Node,here->cNode);
        }
        if(here->PTR_J_e_dt_required==1)
        {
          here->PTR_J_e_dt=SMPmakeElt(matrix,here->eNode,here->dtNode);
        }
        if(here->PTR_J_e_e_required==1)
        {
          here->PTR_J_e_e=SMPmakeElt(matrix,here->eNode,here->eNode);
        }
        if(here->PTR_J_e_e1_required==1)
        {
          here->PTR_J_e_e1=SMPmakeElt(matrix,here->eNode,here->e1Node);
        }
        if(here->PTR_J_e1_e_required==1)
        {
          here->PTR_J_e1_e=SMPmakeElt(matrix,here->e1Node,here->eNode);
        }
        if(here->PTR_J_dt_dt_required==1)
        {
          here->PTR_J_dt_dt=SMPmakeElt(matrix,here->dtNode,here->dtNode);
        }
        if(here->PTR_J_dt_s_required==1)
        {
          here->PTR_J_dt_s=SMPmakeElt(matrix,here->dtNode,here->sNode);
        }
        if(here->PTR_J_dt_c1_required==1)
        {
          here->PTR_J_dt_c1=SMPmakeElt(matrix,here->dtNode,here->c1Node);
        }
        if(here->PTR_J_dt_b1_required==1)
        {
          here->PTR_J_dt_b1=SMPmakeElt(matrix,here->dtNode,here->b1Node);
        }
        if(here->PTR_J_dt_e1_required==1)
        {
          here->PTR_J_dt_e1=SMPmakeElt(matrix,here->dtNode,here->e1Node);
        }
        if(here->PTR_J_dt_e_required==1)
        {
          here->PTR_J_dt_e=SMPmakeElt(matrix,here->dtNode,here->eNode);
        }
        if(here->PTR_J_dt_c3_required==1)
        {
          here->PTR_J_dt_c3=SMPmakeElt(matrix,here->dtNode,here->c3Node);
        }
        if(here->PTR_J_dt_c4_required==1)
        {
          here->PTR_J_dt_c4=SMPmakeElt(matrix,here->dtNode,here->c4Node);
        }
        if(here->PTR_J_dt_b2_required==1)
        {
          here->PTR_J_dt_b2=SMPmakeElt(matrix,here->dtNode,here->b2Node);
        }
        if(here->PTR_J_dt_b_required==1)
        {
          here->PTR_J_dt_b=SMPmakeElt(matrix,here->dtNode,here->bNode);
        }
        if(here->PTR_J_dt_c_required==1)
        {
          here->PTR_J_dt_c=SMPmakeElt(matrix,here->dtNode,here->cNode);
        }
        if(here->PTR_J_dt_c2_required==1)
        {
          here->PTR_J_dt_c2=SMPmakeElt(matrix,here->dtNode,here->c2Node);
        }
        if(here->PTR_J_noi_noi_required==1)
        {
          here->PTR_J_noi_noi=SMPmakeElt(matrix,here->noiNode,here->noiNode);
        }
        if(here->PTR_J_noi_e1_required==1)
        {
          here->PTR_J_noi_e1=SMPmakeElt(matrix,here->noiNode,here->e1Node);
        }
        if(here->PTR_J_e1_noi_required==1)
        {
          here->PTR_J_e1_noi=SMPmakeElt(matrix,here->e1Node,here->noiNode);
        }
        if(here->PTR_J_b2_noi_required==1)
        {
          here->PTR_J_b2_noi=SMPmakeElt(matrix,here->b2Node,here->noiNode);
        }
        if(here->PTR_J_c2_noi_required==1)
        {
          here->PTR_J_c2_noi=SMPmakeElt(matrix,here->c2Node,here->noiNode);
        }
        if(here->PTR_J_e1_c3_required==1)
        {
          here->PTR_J_e1_c3=SMPmakeElt(matrix,here->e1Node,here->c3Node);
        }
        if(here->PTR_J_e1_c4_required==1)
        {
          here->PTR_J_e1_c4=SMPmakeElt(matrix,here->e1Node,here->c4Node);
        }
        if(here->PTR_J_e1_b_required==1)
        {
          here->PTR_J_e1_b=SMPmakeElt(matrix,here->e1Node,here->bNode);
        }
        if(here->PTR_J_e1_c_required==1)
        {
          here->PTR_J_e1_c=SMPmakeElt(matrix,here->e1Node,here->cNode);
        }
        if(here->PTR_J_c1_e1_required==1)
        {
          here->PTR_J_c1_e1=SMPmakeElt(matrix,here->c1Node,here->e1Node);
        }
        if(here->PTR_J_c1_b1_required==1)
        {
          here->PTR_J_c1_b1=SMPmakeElt(matrix,here->c1Node,here->b1Node);
        }
        if(here->PTR_J_c1_c4_required==1)
        {
          here->PTR_J_c1_c4=SMPmakeElt(matrix,here->c1Node,here->c4Node);
        }
        if(here->PTR_J_c1_c3_required==1)
        {
          here->PTR_J_c1_c3=SMPmakeElt(matrix,here->c1Node,here->c3Node);
        }
        if(here->PTR_J_c1_b_required==1)
        {
          here->PTR_J_c1_b=SMPmakeElt(matrix,here->c1Node,here->bNode);
        }
        if(here->PTR_J_c1_c_required==1)
        {
          here->PTR_J_c1_c=SMPmakeElt(matrix,here->c1Node,here->cNode);
        }
        if(here->PTR_J_b_e_required==1)
        {
          here->PTR_J_b_e=SMPmakeElt(matrix,here->bNode,here->eNode);
        }
        if(here->PTR_J_e_b_required==1)
        {
          here->PTR_J_e_b=SMPmakeElt(matrix,here->eNode,here->bNode);
        }
        if(here->PTR_J_c_b_required==1)
        {
          here->PTR_J_c_b=SMPmakeElt(matrix,here->cNode,here->bNode);
        }
        if(here->PTR_J_c_c_required==1)
        {
          here->PTR_J_c_c=SMPmakeElt(matrix,here->cNode,here->cNode);
        }
        if(here->PTR_J_c3_c1_required==1)
        {
          here->PTR_J_c3_c1=SMPmakeElt(matrix,here->c3Node,here->c1Node);
        }
        if(here->PTR_J_c3_c2_required==1)
        {
          here->PTR_J_c3_c2=SMPmakeElt(matrix,here->c3Node,here->c2Node);
        }
        if(here->PTR_J_c3_b2_required==1)
        {
          here->PTR_J_c3_b2=SMPmakeElt(matrix,here->c3Node,here->b2Node);
        }
        if(here->PTR_J_c3_e1_required==1)
        {
          here->PTR_J_c3_e1=SMPmakeElt(matrix,here->c3Node,here->e1Node);
        }
        if(here->PTR_J_c3_c3_required==1)
        {
          here->PTR_J_c3_c3=SMPmakeElt(matrix,here->c3Node,here->c3Node);
        }
        if(here->PTR_J_c3_c4_required==1)
        {
          here->PTR_J_c3_c4=SMPmakeElt(matrix,here->c3Node,here->c4Node);
        }
        if(here->PTR_J_c3_b1_required==1)
        {
          here->PTR_J_c3_b1=SMPmakeElt(matrix,here->c3Node,here->b1Node);
        }
        if(here->PTR_J_c3_b_required==1)
        {
          here->PTR_J_c3_b=SMPmakeElt(matrix,here->c3Node,here->bNode);
        }
        if(here->PTR_J_c3_c_required==1)
        {
          here->PTR_J_c3_c=SMPmakeElt(matrix,here->c3Node,here->cNode);
        }
        if(here->PTR_J_c3_dt_required==1)
        {
          here->PTR_J_c3_dt=SMPmakeElt(matrix,here->c3Node,here->dtNode);
        }
        if(here->PTR_J_c_dt_required==1)
        {
          here->PTR_J_c_dt=SMPmakeElt(matrix,here->cNode,here->dtNode);
        }
        if(here->PTR_J_c_c3_required==1)
        {
          here->PTR_J_c_c3=SMPmakeElt(matrix,here->cNode,here->c3Node);
        }
        if(here->PTR_J_c_c4_required==1)
        {
          here->PTR_J_c_c4=SMPmakeElt(matrix,here->cNode,here->c4Node);
        }
        if(here->PTR_J_c_c1_required==1)
        {
          here->PTR_J_c_c1=SMPmakeElt(matrix,here->cNode,here->c1Node);
        }
        if(here->PTR_J_c_c2_required==1)
        {
          here->PTR_J_c_c2=SMPmakeElt(matrix,here->cNode,here->c2Node);
        }
        if(here->PTR_J_c_b2_required==1)
        {
          here->PTR_J_c_b2=SMPmakeElt(matrix,here->cNode,here->b2Node);
        }
        if(here->PTR_J_c_b1_required==1)
        {
          here->PTR_J_c_b1=SMPmakeElt(matrix,here->cNode,here->b1Node);
        }
        if(here->PTR_J_c4_dt_required==1)
        {
          here->PTR_J_c4_dt=SMPmakeElt(matrix,here->c4Node,here->dtNode);
        }
        if(here->PTR_J_c4_c4_required==1)
        {
          here->PTR_J_c4_c4=SMPmakeElt(matrix,here->c4Node,here->c4Node);
        }
        if(here->PTR_J_c4_c1_required==1)
        {
          here->PTR_J_c4_c1=SMPmakeElt(matrix,here->c4Node,here->c1Node);
        }
        if(here->PTR_J_c4_b2_required==1)
        {
          here->PTR_J_c4_b2=SMPmakeElt(matrix,here->c4Node,here->b2Node);
        }
        if(here->PTR_J_c4_e1_required==1)
        {
          here->PTR_J_c4_e1=SMPmakeElt(matrix,here->c4Node,here->e1Node);
        }
        if(here->PTR_J_c4_c2_required==1)
        {
          here->PTR_J_c4_c2=SMPmakeElt(matrix,here->c4Node,here->c2Node);
        }
        if(here->PTR_J_c4_b1_required==1)
        {
          here->PTR_J_c4_b1=SMPmakeElt(matrix,here->c4Node,here->b1Node);
        }
        if(here->PTR_J_c4_c3_required==1)
        {
          here->PTR_J_c4_c3=SMPmakeElt(matrix,here->c4Node,here->c3Node);
        }
        if(here->PTR_J_c4_b_required==1)
        {
          here->PTR_J_c4_b=SMPmakeElt(matrix,here->c4Node,here->bNode);
        }
        if(here->PTR_J_c4_c_required==1)
        {
          here->PTR_J_c4_c=SMPmakeElt(matrix,here->c4Node,here->cNode);
        }
        if(here->PTR_J_noi_b2_required==1)
        {
          here->PTR_J_noi_b2=SMPmakeElt(matrix,here->noiNode,here->b2Node);
        }
        if(here->PTR_J_noi_c1_required==1)
        {
          here->PTR_J_noi_c1=SMPmakeElt(matrix,here->noiNode,here->c1Node);
        }
        if(here->PTR_J_noi_c2_required==1)
        {
          here->PTR_J_noi_c2=SMPmakeElt(matrix,here->noiNode,here->c2Node);
        }
        if(here->PTR_J_noi_dt_required==1)
        {
          here->PTR_J_noi_dt=SMPmakeElt(matrix,here->noiNode,here->dtNode);
        }

    }
  }
  return(OK);
}
