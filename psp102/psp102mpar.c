/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:46:01 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "psp102defs.h"
#include "sperror.h"
#include "suffix.h"

int psp102mParam(int param, IFvalue *value, GENmodel *inMod)
{
  psp102model *mod = (psp102model*)inMod;
  switch (param) {
  case  psp102_model_pmos  :
    mod->pmos = value->iValue;
    mod->pmos_Given = TRUE;
    break;
  case  psp102_model_nmos  :
    mod->nmos = value->iValue;
    mod->nmos_Given = TRUE;
    break;
  case  psp102_model_LEVEL  :
    mod->LEVEL = value->rValue;
    mod->LEVEL_Given = TRUE;
    break;
  case  psp102_model_TYPE  :
    mod->TYPE = value->rValue;
    mod->TYPE_Given = TRUE;
    break;
  case  psp102_model_TR  :
    mod->TR = value->rValue;
    mod->TR_Given = TRUE;
    break;
  case  psp102_model_SWIGATE  :
    mod->SWIGATE = value->rValue;
    mod->SWIGATE_Given = TRUE;
    break;
  case  psp102_model_SWIMPACT  :
    mod->SWIMPACT = value->rValue;
    mod->SWIMPACT_Given = TRUE;
    break;
  case  psp102_model_SWGIDL  :
    mod->SWGIDL = value->rValue;
    mod->SWGIDL_Given = TRUE;
    break;
  case  psp102_model_SWJUNCAP  :
    mod->SWJUNCAP = value->rValue;
    mod->SWJUNCAP_Given = TRUE;
    break;
  case  psp102_model_QMC  :
    mod->QMC = value->rValue;
    mod->QMC_Given = TRUE;
    break;
  case  psp102_model_LVARO  :
    mod->LVARO = value->rValue;
    mod->LVARO_Given = TRUE;
    break;
  case  psp102_model_LVARL  :
    mod->LVARL = value->rValue;
    mod->LVARL_Given = TRUE;
    break;
  case  psp102_model_LVARW  :
    mod->LVARW = value->rValue;
    mod->LVARW_Given = TRUE;
    break;
  case  psp102_model_LAP  :
    mod->LAP = value->rValue;
    mod->LAP_Given = TRUE;
    break;
  case  psp102_model_WVARO  :
    mod->WVARO = value->rValue;
    mod->WVARO_Given = TRUE;
    break;
  case  psp102_model_WVARL  :
    mod->WVARL = value->rValue;
    mod->WVARL_Given = TRUE;
    break;
  case  psp102_model_WVARW  :
    mod->WVARW = value->rValue;
    mod->WVARW_Given = TRUE;
    break;
  case  psp102_model_WOT  :
    mod->WOT = value->rValue;
    mod->WOT_Given = TRUE;
    break;
  case  psp102_model_DLQ  :
    mod->DLQ = value->rValue;
    mod->DLQ_Given = TRUE;
    break;
  case  psp102_model_DWQ  :
    mod->DWQ = value->rValue;
    mod->DWQ_Given = TRUE;
    break;
  case  psp102_model_VFBO  :
    mod->VFBO = value->rValue;
    mod->VFBO_Given = TRUE;
    break;
  case  psp102_model_VFBL  :
    mod->VFBL = value->rValue;
    mod->VFBL_Given = TRUE;
    break;
  case  psp102_model_VFBW  :
    mod->VFBW = value->rValue;
    mod->VFBW_Given = TRUE;
    break;
  case  psp102_model_VFBLW  :
    mod->VFBLW = value->rValue;
    mod->VFBLW_Given = TRUE;
    break;
  case  psp102_model_STVFBO  :
    mod->STVFBO = value->rValue;
    mod->STVFBO_Given = TRUE;
    break;
  case  psp102_model_STVFBL  :
    mod->STVFBL = value->rValue;
    mod->STVFBL_Given = TRUE;
    break;
  case  psp102_model_STVFBW  :
    mod->STVFBW = value->rValue;
    mod->STVFBW_Given = TRUE;
    break;
  case  psp102_model_STVFBLW  :
    mod->STVFBLW = value->rValue;
    mod->STVFBLW_Given = TRUE;
    break;
  case  psp102_model_TOXO  :
    mod->TOXO = value->rValue;
    mod->TOXO_Given = TRUE;
    break;
  case  psp102_model_NSUBO  :
    mod->NSUBO = value->rValue;
    mod->NSUBO_Given = TRUE;
    break;
  case  psp102_model_NSUBW  :
    mod->NSUBW = value->rValue;
    mod->NSUBW_Given = TRUE;
    break;
  case  psp102_model_WSEG  :
    mod->WSEG = value->rValue;
    mod->WSEG_Given = TRUE;
    break;
  case  psp102_model_NPCK  :
    mod->NPCK = value->rValue;
    mod->NPCK_Given = TRUE;
    break;
  case  psp102_model_NPCKW  :
    mod->NPCKW = value->rValue;
    mod->NPCKW_Given = TRUE;
    break;
  case  psp102_model_WSEGP  :
    mod->WSEGP = value->rValue;
    mod->WSEGP_Given = TRUE;
    break;
  case  psp102_model_LPCK  :
    mod->LPCK = value->rValue;
    mod->LPCK_Given = TRUE;
    break;
  case  psp102_model_LPCKW  :
    mod->LPCKW = value->rValue;
    mod->LPCKW_Given = TRUE;
    break;
  case  psp102_model_FOL1  :
    mod->FOL1 = value->rValue;
    mod->FOL1_Given = TRUE;
    break;
  case  psp102_model_FOL2  :
    mod->FOL2 = value->rValue;
    mod->FOL2_Given = TRUE;
    break;
  case  psp102_model_VNSUBO  :
    mod->VNSUBO = value->rValue;
    mod->VNSUBO_Given = TRUE;
    break;
  case  psp102_model_NSLPO  :
    mod->NSLPO = value->rValue;
    mod->NSLPO_Given = TRUE;
    break;
  case  psp102_model_DNSUBO  :
    mod->DNSUBO = value->rValue;
    mod->DNSUBO_Given = TRUE;
    break;
  case  psp102_model_DPHIBO  :
    mod->DPHIBO = value->rValue;
    mod->DPHIBO_Given = TRUE;
    break;
  case  psp102_model_DPHIBL  :
    mod->DPHIBL = value->rValue;
    mod->DPHIBL_Given = TRUE;
    break;
  case  psp102_model_DPHIBLEXP  :
    mod->DPHIBLEXP = value->rValue;
    mod->DPHIBLEXP_Given = TRUE;
    break;
  case  psp102_model_DPHIBW  :
    mod->DPHIBW = value->rValue;
    mod->DPHIBW_Given = TRUE;
    break;
  case  psp102_model_DPHIBLW  :
    mod->DPHIBLW = value->rValue;
    mod->DPHIBLW_Given = TRUE;
    break;
  case  psp102_model_NPO  :
    mod->NPO = value->rValue;
    mod->NPO_Given = TRUE;
    break;
  case  psp102_model_NPL  :
    mod->NPL = value->rValue;
    mod->NPL_Given = TRUE;
    break;
  case  psp102_model_CTO  :
    mod->CTO = value->rValue;
    mod->CTO_Given = TRUE;
    break;
  case  psp102_model_CTL  :
    mod->CTL = value->rValue;
    mod->CTL_Given = TRUE;
    break;
  case  psp102_model_CTLEXP  :
    mod->CTLEXP = value->rValue;
    mod->CTLEXP_Given = TRUE;
    break;
  case  psp102_model_CTW  :
    mod->CTW = value->rValue;
    mod->CTW_Given = TRUE;
    break;
  case  psp102_model_CTLW  :
    mod->CTLW = value->rValue;
    mod->CTLW_Given = TRUE;
    break;
  case  psp102_model_TOXOVO  :
    mod->TOXOVO = value->rValue;
    mod->TOXOVO_Given = TRUE;
    break;
  case  psp102_model_LOV  :
    mod->LOV = value->rValue;
    mod->LOV_Given = TRUE;
    break;
  case  psp102_model_NOVO  :
    mod->NOVO = value->rValue;
    mod->NOVO_Given = TRUE;
    break;
  case  psp102_model_CFL  :
    mod->CFL = value->rValue;
    mod->CFL_Given = TRUE;
    break;
  case  psp102_model_CFLEXP  :
    mod->CFLEXP = value->rValue;
    mod->CFLEXP_Given = TRUE;
    break;
  case  psp102_model_CFW  :
    mod->CFW = value->rValue;
    mod->CFW_Given = TRUE;
    break;
  case  psp102_model_CFBO  :
    mod->CFBO = value->rValue;
    mod->CFBO_Given = TRUE;
    break;
  case  psp102_model_UO  :
    mod->UO = value->rValue;
    mod->UO_Given = TRUE;
    break;
  case  psp102_model_FBET1  :
    mod->FBET1 = value->rValue;
    mod->FBET1_Given = TRUE;
    break;
  case  psp102_model_FBET1W  :
    mod->FBET1W = value->rValue;
    mod->FBET1W_Given = TRUE;
    break;
  case  psp102_model_LP1  :
    mod->LP1 = value->rValue;
    mod->LP1_Given = TRUE;
    break;
  case  psp102_model_LP1W  :
    mod->LP1W = value->rValue;
    mod->LP1W_Given = TRUE;
    break;
  case  psp102_model_FBET2  :
    mod->FBET2 = value->rValue;
    mod->FBET2_Given = TRUE;
    break;
  case  psp102_model_LP2  :
    mod->LP2 = value->rValue;
    mod->LP2_Given = TRUE;
    break;
  case  psp102_model_BETW1  :
    mod->BETW1 = value->rValue;
    mod->BETW1_Given = TRUE;
    break;
  case  psp102_model_BETW2  :
    mod->BETW2 = value->rValue;
    mod->BETW2_Given = TRUE;
    break;
  case  psp102_model_WBET  :
    mod->WBET = value->rValue;
    mod->WBET_Given = TRUE;
    break;
  case  psp102_model_STBETO  :
    mod->STBETO = value->rValue;
    mod->STBETO_Given = TRUE;
    break;
  case  psp102_model_STBETL  :
    mod->STBETL = value->rValue;
    mod->STBETL_Given = TRUE;
    break;
  case  psp102_model_STBETW  :
    mod->STBETW = value->rValue;
    mod->STBETW_Given = TRUE;
    break;
  case  psp102_model_STBETLW  :
    mod->STBETLW = value->rValue;
    mod->STBETLW_Given = TRUE;
    break;
  case  psp102_model_MUEO  :
    mod->MUEO = value->rValue;
    mod->MUEO_Given = TRUE;
    break;
  case  psp102_model_MUEW  :
    mod->MUEW = value->rValue;
    mod->MUEW_Given = TRUE;
    break;
  case  psp102_model_STMUEO  :
    mod->STMUEO = value->rValue;
    mod->STMUEO_Given = TRUE;
    break;
  case  psp102_model_THEMUO  :
    mod->THEMUO = value->rValue;
    mod->THEMUO_Given = TRUE;
    break;
  case  psp102_model_STTHEMUO  :
    mod->STTHEMUO = value->rValue;
    mod->STTHEMUO_Given = TRUE;
    break;
  case  psp102_model_CSO  :
    mod->CSO = value->rValue;
    mod->CSO_Given = TRUE;
    break;
  case  psp102_model_CSL  :
    mod->CSL = value->rValue;
    mod->CSL_Given = TRUE;
    break;
  case  psp102_model_CSLEXP  :
    mod->CSLEXP = value->rValue;
    mod->CSLEXP_Given = TRUE;
    break;
  case  psp102_model_CSW  :
    mod->CSW = value->rValue;
    mod->CSW_Given = TRUE;
    break;
  case  psp102_model_CSLW  :
    mod->CSLW = value->rValue;
    mod->CSLW_Given = TRUE;
    break;
  case  psp102_model_STCSO  :
    mod->STCSO = value->rValue;
    mod->STCSO_Given = TRUE;
    break;
  case  psp102_model_XCORO  :
    mod->XCORO = value->rValue;
    mod->XCORO_Given = TRUE;
    break;
  case  psp102_model_XCORL  :
    mod->XCORL = value->rValue;
    mod->XCORL_Given = TRUE;
    break;
  case  psp102_model_XCORW  :
    mod->XCORW = value->rValue;
    mod->XCORW_Given = TRUE;
    break;
  case  psp102_model_XCORLW  :
    mod->XCORLW = value->rValue;
    mod->XCORLW_Given = TRUE;
    break;
  case  psp102_model_STXCORO  :
    mod->STXCORO = value->rValue;
    mod->STXCORO_Given = TRUE;
    break;
  case  psp102_model_FETAO  :
    mod->FETAO = value->rValue;
    mod->FETAO_Given = TRUE;
    break;
  case  psp102_model_RSW1  :
    mod->RSW1 = value->rValue;
    mod->RSW1_Given = TRUE;
    break;
  case  psp102_model_RSW2  :
    mod->RSW2 = value->rValue;
    mod->RSW2_Given = TRUE;
    break;
  case  psp102_model_STRSO  :
    mod->STRSO = value->rValue;
    mod->STRSO_Given = TRUE;
    break;
  case  psp102_model_RSBO  :
    mod->RSBO = value->rValue;
    mod->RSBO_Given = TRUE;
    break;
  case  psp102_model_RSGO  :
    mod->RSGO = value->rValue;
    mod->RSGO_Given = TRUE;
    break;
  case  psp102_model_THESATO  :
    mod->THESATO = value->rValue;
    mod->THESATO_Given = TRUE;
    break;
  case  psp102_model_THESATL  :
    mod->THESATL = value->rValue;
    mod->THESATL_Given = TRUE;
    break;
  case  psp102_model_THESATLEXP  :
    mod->THESATLEXP = value->rValue;
    mod->THESATLEXP_Given = TRUE;
    break;
  case  psp102_model_THESATW  :
    mod->THESATW = value->rValue;
    mod->THESATW_Given = TRUE;
    break;
  case  psp102_model_THESATLW  :
    mod->THESATLW = value->rValue;
    mod->THESATLW_Given = TRUE;
    break;
  case  psp102_model_STTHESATO  :
    mod->STTHESATO = value->rValue;
    mod->STTHESATO_Given = TRUE;
    break;
  case  psp102_model_STTHESATL  :
    mod->STTHESATL = value->rValue;
    mod->STTHESATL_Given = TRUE;
    break;
  case  psp102_model_STTHESATW  :
    mod->STTHESATW = value->rValue;
    mod->STTHESATW_Given = TRUE;
    break;
  case  psp102_model_STTHESATLW  :
    mod->STTHESATLW = value->rValue;
    mod->STTHESATLW_Given = TRUE;
    break;
  case  psp102_model_THESATBO  :
    mod->THESATBO = value->rValue;
    mod->THESATBO_Given = TRUE;
    break;
  case  psp102_model_THESATGO  :
    mod->THESATGO = value->rValue;
    mod->THESATGO_Given = TRUE;
    break;
  case  psp102_model_AXO  :
    mod->AXO = value->rValue;
    mod->AXO_Given = TRUE;
    break;
  case  psp102_model_AXL  :
    mod->AXL = value->rValue;
    mod->AXL_Given = TRUE;
    break;
  case  psp102_model_ALPL  :
    mod->ALPL = value->rValue;
    mod->ALPL_Given = TRUE;
    break;
  case  psp102_model_ALPLEXP  :
    mod->ALPLEXP = value->rValue;
    mod->ALPLEXP_Given = TRUE;
    break;
  case  psp102_model_ALPW  :
    mod->ALPW = value->rValue;
    mod->ALPW_Given = TRUE;
    break;
  case  psp102_model_ALP1L1  :
    mod->ALP1L1 = value->rValue;
    mod->ALP1L1_Given = TRUE;
    break;
  case  psp102_model_ALP1LEXP  :
    mod->ALP1LEXP = value->rValue;
    mod->ALP1LEXP_Given = TRUE;
    break;
  case  psp102_model_ALP1L2  :
    mod->ALP1L2 = value->rValue;
    mod->ALP1L2_Given = TRUE;
    break;
  case  psp102_model_ALP1W  :
    mod->ALP1W = value->rValue;
    mod->ALP1W_Given = TRUE;
    break;
  case  psp102_model_ALP2L1  :
    mod->ALP2L1 = value->rValue;
    mod->ALP2L1_Given = TRUE;
    break;
  case  psp102_model_ALP2LEXP  :
    mod->ALP2LEXP = value->rValue;
    mod->ALP2LEXP_Given = TRUE;
    break;
  case  psp102_model_ALP2L2  :
    mod->ALP2L2 = value->rValue;
    mod->ALP2L2_Given = TRUE;
    break;
  case  psp102_model_ALP2W  :
    mod->ALP2W = value->rValue;
    mod->ALP2W_Given = TRUE;
    break;
  case  psp102_model_VPO  :
    mod->VPO = value->rValue;
    mod->VPO_Given = TRUE;
    break;
  case  psp102_model_A1O  :
    mod->A1O = value->rValue;
    mod->A1O_Given = TRUE;
    break;
  case  psp102_model_A1L  :
    mod->A1L = value->rValue;
    mod->A1L_Given = TRUE;
    break;
  case  psp102_model_A1W  :
    mod->A1W = value->rValue;
    mod->A1W_Given = TRUE;
    break;
  case  psp102_model_A2O  :
    mod->A2O = value->rValue;
    mod->A2O_Given = TRUE;
    break;
  case  psp102_model_STA2O  :
    mod->STA2O = value->rValue;
    mod->STA2O_Given = TRUE;
    break;
  case  psp102_model_A3O  :
    mod->A3O = value->rValue;
    mod->A3O_Given = TRUE;
    break;
  case  psp102_model_A3L  :
    mod->A3L = value->rValue;
    mod->A3L_Given = TRUE;
    break;
  case  psp102_model_A3W  :
    mod->A3W = value->rValue;
    mod->A3W_Given = TRUE;
    break;
  case  psp102_model_A4O  :
    mod->A4O = value->rValue;
    mod->A4O_Given = TRUE;
    break;
  case  psp102_model_A4L  :
    mod->A4L = value->rValue;
    mod->A4L_Given = TRUE;
    break;
  case  psp102_model_A4W  :
    mod->A4W = value->rValue;
    mod->A4W_Given = TRUE;
    break;
  case  psp102_model_GCOO  :
    mod->GCOO = value->rValue;
    mod->GCOO_Given = TRUE;
    break;
  case  psp102_model_IGINVLW  :
    mod->IGINVLW = value->rValue;
    mod->IGINVLW_Given = TRUE;
    break;
  case  psp102_model_IGOVW  :
    mod->IGOVW = value->rValue;
    mod->IGOVW_Given = TRUE;
    break;
  case  psp102_model_STIGO  :
    mod->STIGO = value->rValue;
    mod->STIGO_Given = TRUE;
    break;
  case  psp102_model_GC2O  :
    mod->GC2O = value->rValue;
    mod->GC2O_Given = TRUE;
    break;
  case  psp102_model_GC3O  :
    mod->GC3O = value->rValue;
    mod->GC3O_Given = TRUE;
    break;
  case  psp102_model_CHIBO  :
    mod->CHIBO = value->rValue;
    mod->CHIBO_Given = TRUE;
    break;
  case  psp102_model_AGIDLW  :
    mod->AGIDLW = value->rValue;
    mod->AGIDLW_Given = TRUE;
    break;
  case  psp102_model_BGIDLO  :
    mod->BGIDLO = value->rValue;
    mod->BGIDLO_Given = TRUE;
    break;
  case  psp102_model_STBGIDLO  :
    mod->STBGIDLO = value->rValue;
    mod->STBGIDLO_Given = TRUE;
    break;
  case  psp102_model_CGIDLO  :
    mod->CGIDLO = value->rValue;
    mod->CGIDLO_Given = TRUE;
    break;
  case  psp102_model_CGBOVL  :
    mod->CGBOVL = value->rValue;
    mod->CGBOVL_Given = TRUE;
    break;
  case  psp102_model_CFRW  :
    mod->CFRW = value->rValue;
    mod->CFRW_Given = TRUE;
    break;
  case  psp102_model_FNTO  :
    mod->FNTO = value->rValue;
    mod->FNTO_Given = TRUE;
    break;
  case  psp102_model_NFALW  :
    mod->NFALW = value->rValue;
    mod->NFALW_Given = TRUE;
    break;
  case  psp102_model_NFBLW  :
    mod->NFBLW = value->rValue;
    mod->NFBLW_Given = TRUE;
    break;
  case  psp102_model_NFCLW  :
    mod->NFCLW = value->rValue;
    mod->NFCLW_Given = TRUE;
    break;
  case  psp102_model_DTA  :
    mod->DTA = value->rValue;
    mod->DTA_Given = TRUE;
    break;
  case  psp102_model_SAREF  :
    mod->SAREF = value->rValue;
    mod->SAREF_Given = TRUE;
    break;
  case  psp102_model_SBREF  :
    mod->SBREF = value->rValue;
    mod->SBREF_Given = TRUE;
    break;
  case  psp102_model_WLOD  :
    mod->WLOD = value->rValue;
    mod->WLOD_Given = TRUE;
    break;
  case  psp102_model_KUO  :
    mod->KUO = value->rValue;
    mod->KUO_Given = TRUE;
    break;
  case  psp102_model_KVSAT  :
    mod->KVSAT = value->rValue;
    mod->KVSAT_Given = TRUE;
    break;
  case  psp102_model_TKUO  :
    mod->TKUO = value->rValue;
    mod->TKUO_Given = TRUE;
    break;
  case  psp102_model_LKUO  :
    mod->LKUO = value->rValue;
    mod->LKUO_Given = TRUE;
    break;
  case  psp102_model_WKUO  :
    mod->WKUO = value->rValue;
    mod->WKUO_Given = TRUE;
    break;
  case  psp102_model_PKUO  :
    mod->PKUO = value->rValue;
    mod->PKUO_Given = TRUE;
    break;
  case  psp102_model_LLODKUO  :
    mod->LLODKUO = value->rValue;
    mod->LLODKUO_Given = TRUE;
    break;
  case  psp102_model_WLODKUO  :
    mod->WLODKUO = value->rValue;
    mod->WLODKUO_Given = TRUE;
    break;
  case  psp102_model_KVTHO  :
    mod->KVTHO = value->rValue;
    mod->KVTHO_Given = TRUE;
    break;
  case  psp102_model_LKVTHO  :
    mod->LKVTHO = value->rValue;
    mod->LKVTHO_Given = TRUE;
    break;
  case  psp102_model_WKVTHO  :
    mod->WKVTHO = value->rValue;
    mod->WKVTHO_Given = TRUE;
    break;
  case  psp102_model_PKVTHO  :
    mod->PKVTHO = value->rValue;
    mod->PKVTHO_Given = TRUE;
    break;
  case  psp102_model_LLODVTH  :
    mod->LLODVTH = value->rValue;
    mod->LLODVTH_Given = TRUE;
    break;
  case  psp102_model_WLODVTH  :
    mod->WLODVTH = value->rValue;
    mod->WLODVTH_Given = TRUE;
    break;
  case  psp102_model_STETAO  :
    mod->STETAO = value->rValue;
    mod->STETAO_Given = TRUE;
    break;
  case  psp102_model_LODETAO  :
    mod->LODETAO = value->rValue;
    mod->LODETAO_Given = TRUE;
    break;
  case  psp102_model_TRJ  :
    mod->TRJ = value->rValue;
    mod->TRJ_Given = TRUE;
    break;
  case  psp102_model_IMAX  :
    mod->IMAX = value->rValue;
    mod->IMAX_Given = TRUE;
    break;
  case  psp102_model_CJORBOT  :
    mod->CJORBOT = value->rValue;
    mod->CJORBOT_Given = TRUE;
    break;
  case  psp102_model_CJORSTI  :
    mod->CJORSTI = value->rValue;
    mod->CJORSTI_Given = TRUE;
    break;
  case  psp102_model_CJORGAT  :
    mod->CJORGAT = value->rValue;
    mod->CJORGAT_Given = TRUE;
    break;
  case  psp102_model_VBIRBOT  :
    mod->VBIRBOT = value->rValue;
    mod->VBIRBOT_Given = TRUE;
    break;
  case  psp102_model_VBIRSTI  :
    mod->VBIRSTI = value->rValue;
    mod->VBIRSTI_Given = TRUE;
    break;
  case  psp102_model_VBIRGAT  :
    mod->VBIRGAT = value->rValue;
    mod->VBIRGAT_Given = TRUE;
    break;
  case  psp102_model_PBOT  :
    mod->PBOT = value->rValue;
    mod->PBOT_Given = TRUE;
    break;
  case  psp102_model_PSTI  :
    mod->PSTI = value->rValue;
    mod->PSTI_Given = TRUE;
    break;
  case  psp102_model_PGAT  :
    mod->PGAT = value->rValue;
    mod->PGAT_Given = TRUE;
    break;
  case  psp102_model_PHIGBOT  :
    mod->PHIGBOT = value->rValue;
    mod->PHIGBOT_Given = TRUE;
    break;
  case  psp102_model_PHIGSTI  :
    mod->PHIGSTI = value->rValue;
    mod->PHIGSTI_Given = TRUE;
    break;
  case  psp102_model_PHIGGAT  :
    mod->PHIGGAT = value->rValue;
    mod->PHIGGAT_Given = TRUE;
    break;
  case  psp102_model_IDSATRBOT  :
    mod->IDSATRBOT = value->rValue;
    mod->IDSATRBOT_Given = TRUE;
    break;
  case  psp102_model_IDSATRSTI  :
    mod->IDSATRSTI = value->rValue;
    mod->IDSATRSTI_Given = TRUE;
    break;
  case  psp102_model_IDSATRGAT  :
    mod->IDSATRGAT = value->rValue;
    mod->IDSATRGAT_Given = TRUE;
    break;
  case  psp102_model_CSRHBOT  :
    mod->CSRHBOT = value->rValue;
    mod->CSRHBOT_Given = TRUE;
    break;
  case  psp102_model_CSRHSTI  :
    mod->CSRHSTI = value->rValue;
    mod->CSRHSTI_Given = TRUE;
    break;
  case  psp102_model_CSRHGAT  :
    mod->CSRHGAT = value->rValue;
    mod->CSRHGAT_Given = TRUE;
    break;
  case  psp102_model_XJUNSTI  :
    mod->XJUNSTI = value->rValue;
    mod->XJUNSTI_Given = TRUE;
    break;
  case  psp102_model_XJUNGAT  :
    mod->XJUNGAT = value->rValue;
    mod->XJUNGAT_Given = TRUE;
    break;
  case  psp102_model_CTATBOT  :
    mod->CTATBOT = value->rValue;
    mod->CTATBOT_Given = TRUE;
    break;
  case  psp102_model_CTATSTI  :
    mod->CTATSTI = value->rValue;
    mod->CTATSTI_Given = TRUE;
    break;
  case  psp102_model_CTATGAT  :
    mod->CTATGAT = value->rValue;
    mod->CTATGAT_Given = TRUE;
    break;
  case  psp102_model_MEFFTATBOT  :
    mod->MEFFTATBOT = value->rValue;
    mod->MEFFTATBOT_Given = TRUE;
    break;
  case  psp102_model_MEFFTATSTI  :
    mod->MEFFTATSTI = value->rValue;
    mod->MEFFTATSTI_Given = TRUE;
    break;
  case  psp102_model_MEFFTATGAT  :
    mod->MEFFTATGAT = value->rValue;
    mod->MEFFTATGAT_Given = TRUE;
    break;
  case  psp102_model_CBBTBOT  :
    mod->CBBTBOT = value->rValue;
    mod->CBBTBOT_Given = TRUE;
    break;
  case  psp102_model_CBBTSTI  :
    mod->CBBTSTI = value->rValue;
    mod->CBBTSTI_Given = TRUE;
    break;
  case  psp102_model_CBBTGAT  :
    mod->CBBTGAT = value->rValue;
    mod->CBBTGAT_Given = TRUE;
    break;
  case  psp102_model_FBBTRBOT  :
    mod->FBBTRBOT = value->rValue;
    mod->FBBTRBOT_Given = TRUE;
    break;
  case  psp102_model_FBBTRSTI  :
    mod->FBBTRSTI = value->rValue;
    mod->FBBTRSTI_Given = TRUE;
    break;
  case  psp102_model_FBBTRGAT  :
    mod->FBBTRGAT = value->rValue;
    mod->FBBTRGAT_Given = TRUE;
    break;
  case  psp102_model_STFBBTBOT  :
    mod->STFBBTBOT = value->rValue;
    mod->STFBBTBOT_Given = TRUE;
    break;
  case  psp102_model_STFBBTSTI  :
    mod->STFBBTSTI = value->rValue;
    mod->STFBBTSTI_Given = TRUE;
    break;
  case  psp102_model_STFBBTGAT  :
    mod->STFBBTGAT = value->rValue;
    mod->STFBBTGAT_Given = TRUE;
    break;
  case  psp102_model_VBRBOT  :
    mod->VBRBOT = value->rValue;
    mod->VBRBOT_Given = TRUE;
    break;
  case  psp102_model_VBRSTI  :
    mod->VBRSTI = value->rValue;
    mod->VBRSTI_Given = TRUE;
    break;
  case  psp102_model_VBRGAT  :
    mod->VBRGAT = value->rValue;
    mod->VBRGAT_Given = TRUE;
    break;
  case  psp102_model_PBRBOT  :
    mod->PBRBOT = value->rValue;
    mod->PBRBOT_Given = TRUE;
    break;
  case  psp102_model_PBRSTI  :
    mod->PBRSTI = value->rValue;
    mod->PBRSTI_Given = TRUE;
    break;
  case  psp102_model_PBRGAT  :
    mod->PBRGAT = value->rValue;
    mod->PBRGAT_Given = TRUE;
    break;

  default:
    return(-1);
  }
  return(OK);
}
