/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:15 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "mextramdefs.h"
#include "sperror.h"
#include "suffix.h"

int mextrammParam(int param, IFvalue *value, GENmodel *inMod)
{
  mextrammodel *mod = (mextrammodel*)inMod;
  switch (param) {
  case  mextram_model_pnp  :
    mod->pnp = value->iValue;
    mod->pnp_Given = TRUE;
    break;
  case  mextram_model_npn  :
    mod->npn = value->iValue;
    mod->npn_Given = TRUE;
    break;
  case  mextram_model_LEVEL  :
    mod->LEVEL = value->iValue;
    mod->LEVEL_Given = TRUE;
    break;
  case  mextram_model_TREF  :
    mod->TREF = value->rValue;
    mod->TREF_Given = TRUE;
    break;
  case  mextram_model_DTA  :
    mod->DTA = value->rValue;
    mod->DTA_Given = TRUE;
    break;
  case  mextram_model_EXMOD  :
    mod->EXMOD = value->iValue;
    mod->EXMOD_Given = TRUE;
    break;
  case  mextram_model_EXPHI  :
    mod->EXPHI = value->iValue;
    mod->EXPHI_Given = TRUE;
    break;
  case  mextram_model_EXAVL  :
    mod->EXAVL = value->iValue;
    mod->EXAVL_Given = TRUE;
    break;
  case  mextram_model_IS  :
    mod->IS = value->rValue;
    mod->IS_Given = TRUE;
    break;
  case  mextram_model_IK  :
    mod->IK = value->rValue;
    mod->IK_Given = TRUE;
    break;
  case  mextram_model_VER  :
    mod->VER = value->rValue;
    mod->VER_Given = TRUE;
    break;
  case  mextram_model_VEF  :
    mod->VEF = value->rValue;
    mod->VEF_Given = TRUE;
    break;
  case  mextram_model_BF  :
    mod->BF = value->rValue;
    mod->BF_Given = TRUE;
    break;
  case  mextram_model_IBF  :
    mod->IBF = value->rValue;
    mod->IBF_Given = TRUE;
    break;
  case  mextram_model_MLF  :
    mod->MLF = value->rValue;
    mod->MLF_Given = TRUE;
    break;
  case  mextram_model_XIBI  :
    mod->XIBI = value->rValue;
    mod->XIBI_Given = TRUE;
    break;
  case  mextram_model_BRI  :
    mod->BRI = value->rValue;
    mod->BRI_Given = TRUE;
    break;
  case  mextram_model_IBR  :
    mod->IBR = value->rValue;
    mod->IBR_Given = TRUE;
    break;
  case  mextram_model_VLR  :
    mod->VLR = value->rValue;
    mod->VLR_Given = TRUE;
    break;
  case  mextram_model_XEXT  :
    mod->XEXT = value->rValue;
    mod->XEXT_Given = TRUE;
    break;
  case  mextram_model_WAVL  :
    mod->WAVL = value->rValue;
    mod->WAVL_Given = TRUE;
    break;
  case  mextram_model_VAVL  :
    mod->VAVL = value->rValue;
    mod->VAVL_Given = TRUE;
    break;
  case  mextram_model_SFH  :
    mod->SFH = value->rValue;
    mod->SFH_Given = TRUE;
    break;
  case  mextram_model_RE  :
    mod->RE = value->rValue;
    mod->RE_Given = TRUE;
    break;
  case  mextram_model_RBC  :
    mod->RBC = value->rValue;
    mod->RBC_Given = TRUE;
    break;
  case  mextram_model_RBV  :
    mod->RBV = value->rValue;
    mod->RBV_Given = TRUE;
    break;
  case  mextram_model_RCC  :
    mod->RCC = value->rValue;
    mod->RCC_Given = TRUE;
    break;
  case  mextram_model_RCV  :
    mod->RCV = value->rValue;
    mod->RCV_Given = TRUE;
    break;
  case  mextram_model_SCRCV  :
    mod->SCRCV = value->rValue;
    mod->SCRCV_Given = TRUE;
    break;
  case  mextram_model_IHC  :
    mod->IHC = value->rValue;
    mod->IHC_Given = TRUE;
    break;
  case  mextram_model_AXI  :
    mod->AXI = value->rValue;
    mod->AXI_Given = TRUE;
    break;
  case  mextram_model_CJE  :
    mod->CJE = value->rValue;
    mod->CJE_Given = TRUE;
    break;
  case  mextram_model_VDE  :
    mod->VDE = value->rValue;
    mod->VDE_Given = TRUE;
    break;
  case  mextram_model_PE  :
    mod->PE = value->rValue;
    mod->PE_Given = TRUE;
    break;
  case  mextram_model_XCJE  :
    mod->XCJE = value->rValue;
    mod->XCJE_Given = TRUE;
    break;
  case  mextram_model_CBEO  :
    mod->CBEO = value->rValue;
    mod->CBEO_Given = TRUE;
    break;
  case  mextram_model_CJC  :
    mod->CJC = value->rValue;
    mod->CJC_Given = TRUE;
    break;
  case  mextram_model_VDC  :
    mod->VDC = value->rValue;
    mod->VDC_Given = TRUE;
    break;
  case  mextram_model_PC  :
    mod->PC = value->rValue;
    mod->PC_Given = TRUE;
    break;
  case  mextram_model_XP  :
    mod->XP = value->rValue;
    mod->XP_Given = TRUE;
    break;
  case  mextram_model_MC  :
    mod->MC = value->rValue;
    mod->MC_Given = TRUE;
    break;
  case  mextram_model_XCJC  :
    mod->XCJC = value->rValue;
    mod->XCJC_Given = TRUE;
    break;
  case  mextram_model_RCBLX  :
    mod->RCBLX = value->rValue;
    mod->RCBLX_Given = TRUE;
    break;
  case  mextram_model_RCBLI  :
    mod->RCBLI = value->rValue;
    mod->RCBLI_Given = TRUE;
    break;
  case  mextram_model_CBCO  :
    mod->CBCO = value->rValue;
    mod->CBCO_Given = TRUE;
    break;
  case  mextram_model_MTAU  :
    mod->MTAU = value->rValue;
    mod->MTAU_Given = TRUE;
    break;
  case  mextram_model_TAUE  :
    mod->TAUE = value->rValue;
    mod->TAUE_Given = TRUE;
    break;
  case  mextram_model_TAUB  :
    mod->TAUB = value->rValue;
    mod->TAUB_Given = TRUE;
    break;
  case  mextram_model_TEPI  :
    mod->TEPI = value->rValue;
    mod->TEPI_Given = TRUE;
    break;
  case  mextram_model_TAUR  :
    mod->TAUR = value->rValue;
    mod->TAUR_Given = TRUE;
    break;
  case  mextram_model_DEG  :
    mod->DEG = value->rValue;
    mod->DEG_Given = TRUE;
    break;
  case  mextram_model_XREC  :
    mod->XREC = value->rValue;
    mod->XREC_Given = TRUE;
    break;
  case  mextram_model_AQBO  :
    mod->AQBO = value->rValue;
    mod->AQBO_Given = TRUE;
    break;
  case  mextram_model_AE  :
    mod->AE = value->rValue;
    mod->AE_Given = TRUE;
    break;
  case  mextram_model_AB  :
    mod->AB = value->rValue;
    mod->AB_Given = TRUE;
    break;
  case  mextram_model_AEPI  :
    mod->AEPI = value->rValue;
    mod->AEPI_Given = TRUE;
    break;
  case  mextram_model_AEX  :
    mod->AEX = value->rValue;
    mod->AEX_Given = TRUE;
    break;
  case  mextram_model_AC  :
    mod->AC = value->rValue;
    mod->AC_Given = TRUE;
    break;
  case  mextram_model_ACBL  :
    mod->ACBL = value->rValue;
    mod->ACBL_Given = TRUE;
    break;
  case  mextram_model_DVGBF  :
    mod->DVGBF = value->rValue;
    mod->DVGBF_Given = TRUE;
    break;
  case  mextram_model_DVGBR  :
    mod->DVGBR = value->rValue;
    mod->DVGBR_Given = TRUE;
    break;
  case  mextram_model_VGB  :
    mod->VGB = value->rValue;
    mod->VGB_Given = TRUE;
    break;
  case  mextram_model_VGC  :
    mod->VGC = value->rValue;
    mod->VGC_Given = TRUE;
    break;
  case  mextram_model_VGJ  :
    mod->VGJ = value->rValue;
    mod->VGJ_Given = TRUE;
    break;
  case  mextram_model_DVGTE  :
    mod->DVGTE = value->rValue;
    mod->DVGTE_Given = TRUE;
    break;
  case  mextram_model_DAIS  :
    mod->DAIS = value->rValue;
    mod->DAIS_Given = TRUE;
    break;
  case  mextram_model_AF  :
    mod->AF = value->rValue;
    mod->AF_Given = TRUE;
    break;
  case  mextram_model_KF  :
    mod->KF = value->rValue;
    mod->KF_Given = TRUE;
    break;
  case  mextram_model_KFN  :
    mod->KFN = value->rValue;
    mod->KFN_Given = TRUE;
    break;
  case  mextram_model_KAVL  :
    mod->KAVL = value->iValue;
    mod->KAVL_Given = TRUE;
    break;
  case  mextram_model_ISS  :
    mod->ISS = value->rValue;
    mod->ISS_Given = TRUE;
    break;
  case  mextram_model_IKS  :
    mod->IKS = value->rValue;
    mod->IKS_Given = TRUE;
    break;
  case  mextram_model_CJS  :
    mod->CJS = value->rValue;
    mod->CJS_Given = TRUE;
    break;
  case  mextram_model_VDS  :
    mod->VDS = value->rValue;
    mod->VDS_Given = TRUE;
    break;
  case  mextram_model_PS  :
    mod->PS = value->rValue;
    mod->PS_Given = TRUE;
    break;
  case  mextram_model_VGS  :
    mod->VGS = value->rValue;
    mod->VGS_Given = TRUE;
    break;
  case  mextram_model_AS  :
    mod->AS = value->rValue;
    mod->AS_Given = TRUE;
    break;
  case  mextram_model_RTH  :
    mod->RTH = value->rValue;
    mod->RTH_Given = TRUE;
    break;
  case  mextram_model_CTH  :
    mod->CTH = value->rValue;
    mod->CTH_Given = TRUE;
    break;
  case  mextram_model_ATH  :
    mod->ATH = value->rValue;
    mod->ATH_Given = TRUE;
    break;
  case  mextram_model_MULT  :
    mod->MULT = value->rValue;
    mod->MULT_Given = TRUE;
    break;
  case  mextram_model_TYPE  :
    mod->TYPE = value->iValue;
    mod->TYPE_Given = TRUE;
    break;

  default:
    return(-1);
  }
  return(OK);
}
