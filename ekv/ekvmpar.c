/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Wed, 24 Mar 2010 00:50:59 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "ekvdefs.h"
#include "sperror.h"
#include "suffix.h"

int ekvmParam(int param, IFvalue *value, GENmodel *inMod)
{
  ekvmodel *mod = (ekvmodel*)inMod;
  switch (param) {
  case  ekv_model_nmos  :
    mod->nmos = value->iValue;
    mod->nmos_Given = TRUE;
    break;
  case  ekv_model_pmos  :
    mod->pmos = value->iValue;
    mod->pmos_Given = TRUE;
    break;
  case  ekv_model_MTYPE  :
    mod->MTYPE = value->iValue;
    mod->MTYPE_Given = TRUE;
    break;
  case  ekv_model_TNOM  :
    mod->TNOM = value->rValue;
    mod->TNOM_Given = TRUE;
    break;
  case  ekv_model_IMAX  :
    mod->IMAX = value->rValue;
    mod->IMAX_Given = TRUE;
    break;
  case  ekv_model_TOX  :
    mod->TOX = value->rValue;
    mod->TOX_Given = TRUE;
    break;
  case  ekv_model_NSUB  :
    mod->NSUB = value->rValue;
    mod->NSUB_Given = TRUE;
    break;
  case  ekv_model_VFB  :
    mod->VFB = value->rValue;
    mod->VFB_Given = TRUE;
    break;
  case  ekv_model_UO  :
    mod->UO = value->rValue;
    mod->UO_Given = TRUE;
    break;
  case  ekv_model_VMAX  :
    mod->VMAX = value->rValue;
    mod->VMAX_Given = TRUE;
    break;
  case  ekv_model_THETA  :
    mod->THETA = value->rValue;
    mod->THETA_Given = TRUE;
    break;
  case  ekv_model_COX  :
    mod->COX = value->rValue;
    mod->COX_Given = TRUE;
    break;
  case  ekv_model_XJ  :
    mod->XJ = value->rValue;
    mod->XJ_Given = TRUE;
    break;
  case  ekv_model_DL  :
    mod->DL = value->rValue;
    mod->DL_Given = TRUE;
    break;
  case  ekv_model_DW  :
    mod->DW = value->rValue;
    mod->DW_Given = TRUE;
    break;
  case  ekv_model_GAMMA  :
    mod->GAMMA = value->rValue;
    mod->GAMMA_Given = TRUE;
    break;
  case  ekv_model_PHI  :
    mod->PHI = value->rValue;
    mod->PHI_Given = TRUE;
    break;
  case  ekv_model_VTO  :
    mod->VTO = value->rValue;
    mod->VTO_Given = TRUE;
    break;
  case  ekv_model_KP  :
    mod->KP = value->rValue;
    mod->KP_Given = TRUE;
    break;
  case  ekv_model_UCRIT  :
    mod->UCRIT = value->rValue;
    mod->UCRIT_Given = TRUE;
    break;
  case  ekv_model_E0  :
    mod->E0 = value->rValue;
    mod->E0_Given = TRUE;
    break;
  case  ekv_model_LAMBDA  :
    mod->LAMBDA = value->rValue;
    mod->LAMBDA_Given = TRUE;
    break;
  case  ekv_model_WETA  :
    mod->WETA = value->rValue;
    mod->WETA_Given = TRUE;
    break;
  case  ekv_model_LETA  :
    mod->LETA = value->rValue;
    mod->LETA_Given = TRUE;
    break;
  case  ekv_model_Q0  :
    mod->Q0 = value->rValue;
    mod->Q0_Given = TRUE;
    break;
  case  ekv_model_LK  :
    mod->LK = value->rValue;
    mod->LK_Given = TRUE;
    break;
  case  ekv_model_IBA  :
    mod->IBA = value->rValue;
    mod->IBA_Given = TRUE;
    break;
  case  ekv_model_IBB  :
    mod->IBB = value->rValue;
    mod->IBB_Given = TRUE;
    break;
  case  ekv_model_IBN  :
    mod->IBN = value->rValue;
    mod->IBN_Given = TRUE;
    break;
  case  ekv_model_TCV  :
    mod->TCV = value->rValue;
    mod->TCV_Given = TRUE;
    break;
  case  ekv_model_BEX  :
    mod->BEX = value->rValue;
    mod->BEX_Given = TRUE;
    break;
  case  ekv_model_UCEX  :
    mod->UCEX = value->rValue;
    mod->UCEX_Given = TRUE;
    break;
  case  ekv_model_IBBT  :
    mod->IBBT = value->rValue;
    mod->IBBT_Given = TRUE;
    break;
  case  ekv_model_AVTO  :
    mod->AVTO = value->rValue;
    mod->AVTO_Given = TRUE;
    break;
  case  ekv_model_AKP  :
    mod->AKP = value->rValue;
    mod->AKP_Given = TRUE;
    break;
  case  ekv_model_AGAMMA  :
    mod->AGAMMA = value->rValue;
    mod->AGAMMA_Given = TRUE;
    break;
  case  ekv_model_KF  :
    mod->KF = value->rValue;
    mod->KF_Given = TRUE;
    break;
  case  ekv_model_AF  :
    mod->AF = value->rValue;
    mod->AF_Given = TRUE;
    break;
  case  ekv_model_NQS  :
    mod->NQS = value->rValue;
    mod->NQS_Given = TRUE;
    break;
  case  ekv_model_SATLIM  :
    mod->SATLIM = value->rValue;
    mod->SATLIM_Given = TRUE;
    break;
  case  ekv_model_XQC  :
    mod->XQC = value->rValue;
    mod->XQC_Given = TRUE;
    break;
  case  ekv_model_HDIF  :
    mod->HDIF = value->rValue;
    mod->HDIF_Given = TRUE;
    break;
  case  ekv_model_RSH  :
    mod->RSH = value->rValue;
    mod->RSH_Given = TRUE;
    break;
  case  ekv_model_JS  :
    mod->JS = value->rValue;
    mod->JS_Given = TRUE;
    break;
  case  ekv_model_JSW  :
    mod->JSW = value->rValue;
    mod->JSW_Given = TRUE;
    break;
  case  ekv_model_XTI  :
    mod->XTI = value->rValue;
    mod->XTI_Given = TRUE;
    break;
  case  ekv_model_N  :
    mod->N = value->rValue;
    mod->N_Given = TRUE;
    break;
  case  ekv_model_CJ  :
    mod->CJ = value->rValue;
    mod->CJ_Given = TRUE;
    break;
  case  ekv_model_CJSW  :
    mod->CJSW = value->rValue;
    mod->CJSW_Given = TRUE;
    break;
  case  ekv_model_PB  :
    mod->PB = value->rValue;
    mod->PB_Given = TRUE;
    break;
  case  ekv_model_PBSW  :
    mod->PBSW = value->rValue;
    mod->PBSW_Given = TRUE;
    break;
  case  ekv_model_MJ  :
    mod->MJ = value->rValue;
    mod->MJ_Given = TRUE;
    break;
  case  ekv_model_MJSW  :
    mod->MJSW = value->rValue;
    mod->MJSW_Given = TRUE;
    break;
  case  ekv_model_FC  :
    mod->FC = value->rValue;
    mod->FC_Given = TRUE;
    break;
  case  ekv_model_FCSW  :
    mod->FCSW = value->rValue;
    mod->FCSW_Given = TRUE;
    break;
  case  ekv_model_CGSO  :
    mod->CGSO = value->rValue;
    mod->CGSO_Given = TRUE;
    break;
  case  ekv_model_CGDO  :
    mod->CGDO = value->rValue;
    mod->CGDO_Given = TRUE;
    break;
  case  ekv_model_CGBO  :
    mod->CGBO = value->rValue;
    mod->CGBO_Given = TRUE;
    break;

  default:
    return(-1);
  }
  return(OK);
}
