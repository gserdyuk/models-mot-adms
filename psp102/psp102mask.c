/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Mon, 12 Apr 2010 19:24:54 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "cktdefs.h"
#include "devdefs.h"
#include "psp102defs.h"
#include "sperror.h"
#include "suffix.h"

int psp102mAsk(CKTcircuit *ckt, GENmodel *inst, int which, IFvalue *value)
{
  psp102model *model = (psp102model *)inst;
  switch (which) {  case  psp102_model_pmos  :
    value->iValue = model->pmos;
    return OK;
  case  psp102_model_nmos  :
    value->iValue = model->nmos;
    return OK;
  case  psp102_model_LEVEL  :
    value->rValue = model->LEVEL;
    return OK;
  case  psp102_model_TYPE  :
    value->rValue = model->TYPE;
    return OK;
  case  psp102_model_TR  :
    value->rValue = model->TR;
    return OK;
  case  psp102_model_SWIGATE  :
    value->rValue = model->SWIGATE;
    return OK;
  case  psp102_model_SWIMPACT  :
    value->rValue = model->SWIMPACT;
    return OK;
  case  psp102_model_SWGIDL  :
    value->rValue = model->SWGIDL;
    return OK;
  case  psp102_model_SWJUNCAP  :
    value->rValue = model->SWJUNCAP;
    return OK;
  case  psp102_model_QMC  :
    value->rValue = model->QMC;
    return OK;
  case  psp102_model_LVARO  :
    value->rValue = model->LVARO;
    return OK;
  case  psp102_model_LVARL  :
    value->rValue = model->LVARL;
    return OK;
  case  psp102_model_LVARW  :
    value->rValue = model->LVARW;
    return OK;
  case  psp102_model_LAP  :
    value->rValue = model->LAP;
    return OK;
  case  psp102_model_WVARO  :
    value->rValue = model->WVARO;
    return OK;
  case  psp102_model_WVARL  :
    value->rValue = model->WVARL;
    return OK;
  case  psp102_model_WVARW  :
    value->rValue = model->WVARW;
    return OK;
  case  psp102_model_WOT  :
    value->rValue = model->WOT;
    return OK;
  case  psp102_model_DLQ  :
    value->rValue = model->DLQ;
    return OK;
  case  psp102_model_DWQ  :
    value->rValue = model->DWQ;
    return OK;
  case  psp102_model_VFBO  :
    value->rValue = model->VFBO;
    return OK;
  case  psp102_model_VFBL  :
    value->rValue = model->VFBL;
    return OK;
  case  psp102_model_VFBW  :
    value->rValue = model->VFBW;
    return OK;
  case  psp102_model_VFBLW  :
    value->rValue = model->VFBLW;
    return OK;
  case  psp102_model_STVFBO  :
    value->rValue = model->STVFBO;
    return OK;
  case  psp102_model_STVFBL  :
    value->rValue = model->STVFBL;
    return OK;
  case  psp102_model_STVFBW  :
    value->rValue = model->STVFBW;
    return OK;
  case  psp102_model_STVFBLW  :
    value->rValue = model->STVFBLW;
    return OK;
  case  psp102_model_TOXO  :
    value->rValue = model->TOXO;
    return OK;
  case  psp102_model_NSUBO  :
    value->rValue = model->NSUBO;
    return OK;
  case  psp102_model_NSUBW  :
    value->rValue = model->NSUBW;
    return OK;
  case  psp102_model_WSEG  :
    value->rValue = model->WSEG;
    return OK;
  case  psp102_model_NPCK  :
    value->rValue = model->NPCK;
    return OK;
  case  psp102_model_NPCKW  :
    value->rValue = model->NPCKW;
    return OK;
  case  psp102_model_WSEGP  :
    value->rValue = model->WSEGP;
    return OK;
  case  psp102_model_LPCK  :
    value->rValue = model->LPCK;
    return OK;
  case  psp102_model_LPCKW  :
    value->rValue = model->LPCKW;
    return OK;
  case  psp102_model_FOL1  :
    value->rValue = model->FOL1;
    return OK;
  case  psp102_model_FOL2  :
    value->rValue = model->FOL2;
    return OK;
  case  psp102_model_VNSUBO  :
    value->rValue = model->VNSUBO;
    return OK;
  case  psp102_model_NSLPO  :
    value->rValue = model->NSLPO;
    return OK;
  case  psp102_model_DNSUBO  :
    value->rValue = model->DNSUBO;
    return OK;
  case  psp102_model_DPHIBO  :
    value->rValue = model->DPHIBO;
    return OK;
  case  psp102_model_DPHIBL  :
    value->rValue = model->DPHIBL;
    return OK;
  case  psp102_model_DPHIBLEXP  :
    value->rValue = model->DPHIBLEXP;
    return OK;
  case  psp102_model_DPHIBW  :
    value->rValue = model->DPHIBW;
    return OK;
  case  psp102_model_DPHIBLW  :
    value->rValue = model->DPHIBLW;
    return OK;
  case  psp102_model_NPO  :
    value->rValue = model->NPO;
    return OK;
  case  psp102_model_NPL  :
    value->rValue = model->NPL;
    return OK;
  case  psp102_model_CTO  :
    value->rValue = model->CTO;
    return OK;
  case  psp102_model_CTL  :
    value->rValue = model->CTL;
    return OK;
  case  psp102_model_CTLEXP  :
    value->rValue = model->CTLEXP;
    return OK;
  case  psp102_model_CTW  :
    value->rValue = model->CTW;
    return OK;
  case  psp102_model_CTLW  :
    value->rValue = model->CTLW;
    return OK;
  case  psp102_model_TOXOVO  :
    value->rValue = model->TOXOVO;
    return OK;
  case  psp102_model_LOV  :
    value->rValue = model->LOV;
    return OK;
  case  psp102_model_NOVO  :
    value->rValue = model->NOVO;
    return OK;
  case  psp102_model_CFL  :
    value->rValue = model->CFL;
    return OK;
  case  psp102_model_CFLEXP  :
    value->rValue = model->CFLEXP;
    return OK;
  case  psp102_model_CFW  :
    value->rValue = model->CFW;
    return OK;
  case  psp102_model_CFBO  :
    value->rValue = model->CFBO;
    return OK;
  case  psp102_model_UO  :
    value->rValue = model->UO;
    return OK;
  case  psp102_model_FBET1  :
    value->rValue = model->FBET1;
    return OK;
  case  psp102_model_FBET1W  :
    value->rValue = model->FBET1W;
    return OK;
  case  psp102_model_LP1  :
    value->rValue = model->LP1;
    return OK;
  case  psp102_model_LP1W  :
    value->rValue = model->LP1W;
    return OK;
  case  psp102_model_FBET2  :
    value->rValue = model->FBET2;
    return OK;
  case  psp102_model_LP2  :
    value->rValue = model->LP2;
    return OK;
  case  psp102_model_BETW1  :
    value->rValue = model->BETW1;
    return OK;
  case  psp102_model_BETW2  :
    value->rValue = model->BETW2;
    return OK;
  case  psp102_model_WBET  :
    value->rValue = model->WBET;
    return OK;
  case  psp102_model_STBETO  :
    value->rValue = model->STBETO;
    return OK;
  case  psp102_model_STBETL  :
    value->rValue = model->STBETL;
    return OK;
  case  psp102_model_STBETW  :
    value->rValue = model->STBETW;
    return OK;
  case  psp102_model_STBETLW  :
    value->rValue = model->STBETLW;
    return OK;
  case  psp102_model_MUEO  :
    value->rValue = model->MUEO;
    return OK;
  case  psp102_model_MUEW  :
    value->rValue = model->MUEW;
    return OK;
  case  psp102_model_STMUEO  :
    value->rValue = model->STMUEO;
    return OK;
  case  psp102_model_THEMUO  :
    value->rValue = model->THEMUO;
    return OK;
  case  psp102_model_STTHEMUO  :
    value->rValue = model->STTHEMUO;
    return OK;
  case  psp102_model_CSO  :
    value->rValue = model->CSO;
    return OK;
  case  psp102_model_CSL  :
    value->rValue = model->CSL;
    return OK;
  case  psp102_model_CSLEXP  :
    value->rValue = model->CSLEXP;
    return OK;
  case  psp102_model_CSW  :
    value->rValue = model->CSW;
    return OK;
  case  psp102_model_CSLW  :
    value->rValue = model->CSLW;
    return OK;
  case  psp102_model_STCSO  :
    value->rValue = model->STCSO;
    return OK;
  case  psp102_model_XCORO  :
    value->rValue = model->XCORO;
    return OK;
  case  psp102_model_XCORL  :
    value->rValue = model->XCORL;
    return OK;
  case  psp102_model_XCORW  :
    value->rValue = model->XCORW;
    return OK;
  case  psp102_model_XCORLW  :
    value->rValue = model->XCORLW;
    return OK;
  case  psp102_model_STXCORO  :
    value->rValue = model->STXCORO;
    return OK;
  case  psp102_model_FETAO  :
    value->rValue = model->FETAO;
    return OK;
  case  psp102_model_RSW1  :
    value->rValue = model->RSW1;
    return OK;
  case  psp102_model_RSW2  :
    value->rValue = model->RSW2;
    return OK;
  case  psp102_model_STRSO  :
    value->rValue = model->STRSO;
    return OK;
  case  psp102_model_RSBO  :
    value->rValue = model->RSBO;
    return OK;
  case  psp102_model_RSGO  :
    value->rValue = model->RSGO;
    return OK;
  case  psp102_model_THESATO  :
    value->rValue = model->THESATO;
    return OK;
  case  psp102_model_THESATL  :
    value->rValue = model->THESATL;
    return OK;
  case  psp102_model_THESATLEXP  :
    value->rValue = model->THESATLEXP;
    return OK;
  case  psp102_model_THESATW  :
    value->rValue = model->THESATW;
    return OK;
  case  psp102_model_THESATLW  :
    value->rValue = model->THESATLW;
    return OK;
  case  psp102_model_STTHESATO  :
    value->rValue = model->STTHESATO;
    return OK;
  case  psp102_model_STTHESATL  :
    value->rValue = model->STTHESATL;
    return OK;
  case  psp102_model_STTHESATW  :
    value->rValue = model->STTHESATW;
    return OK;
  case  psp102_model_STTHESATLW  :
    value->rValue = model->STTHESATLW;
    return OK;
  case  psp102_model_THESATBO  :
    value->rValue = model->THESATBO;
    return OK;
  case  psp102_model_THESATGO  :
    value->rValue = model->THESATGO;
    return OK;
  case  psp102_model_AXO  :
    value->rValue = model->AXO;
    return OK;
  case  psp102_model_AXL  :
    value->rValue = model->AXL;
    return OK;
  case  psp102_model_ALPL  :
    value->rValue = model->ALPL;
    return OK;
  case  psp102_model_ALPLEXP  :
    value->rValue = model->ALPLEXP;
    return OK;
  case  psp102_model_ALPW  :
    value->rValue = model->ALPW;
    return OK;
  case  psp102_model_ALP1L1  :
    value->rValue = model->ALP1L1;
    return OK;
  case  psp102_model_ALP1LEXP  :
    value->rValue = model->ALP1LEXP;
    return OK;
  case  psp102_model_ALP1L2  :
    value->rValue = model->ALP1L2;
    return OK;
  case  psp102_model_ALP1W  :
    value->rValue = model->ALP1W;
    return OK;
  case  psp102_model_ALP2L1  :
    value->rValue = model->ALP2L1;
    return OK;
  case  psp102_model_ALP2LEXP  :
    value->rValue = model->ALP2LEXP;
    return OK;
  case  psp102_model_ALP2L2  :
    value->rValue = model->ALP2L2;
    return OK;
  case  psp102_model_ALP2W  :
    value->rValue = model->ALP2W;
    return OK;
  case  psp102_model_VPO  :
    value->rValue = model->VPO;
    return OK;
  case  psp102_model_A1O  :
    value->rValue = model->A1O;
    return OK;
  case  psp102_model_A1L  :
    value->rValue = model->A1L;
    return OK;
  case  psp102_model_A1W  :
    value->rValue = model->A1W;
    return OK;
  case  psp102_model_A2O  :
    value->rValue = model->A2O;
    return OK;
  case  psp102_model_STA2O  :
    value->rValue = model->STA2O;
    return OK;
  case  psp102_model_A3O  :
    value->rValue = model->A3O;
    return OK;
  case  psp102_model_A3L  :
    value->rValue = model->A3L;
    return OK;
  case  psp102_model_A3W  :
    value->rValue = model->A3W;
    return OK;
  case  psp102_model_A4O  :
    value->rValue = model->A4O;
    return OK;
  case  psp102_model_A4L  :
    value->rValue = model->A4L;
    return OK;
  case  psp102_model_A4W  :
    value->rValue = model->A4W;
    return OK;
  case  psp102_model_GCOO  :
    value->rValue = model->GCOO;
    return OK;
  case  psp102_model_IGINVLW  :
    value->rValue = model->IGINVLW;
    return OK;
  case  psp102_model_IGOVW  :
    value->rValue = model->IGOVW;
    return OK;
  case  psp102_model_STIGO  :
    value->rValue = model->STIGO;
    return OK;
  case  psp102_model_GC2O  :
    value->rValue = model->GC2O;
    return OK;
  case  psp102_model_GC3O  :
    value->rValue = model->GC3O;
    return OK;
  case  psp102_model_CHIBO  :
    value->rValue = model->CHIBO;
    return OK;
  case  psp102_model_AGIDLW  :
    value->rValue = model->AGIDLW;
    return OK;
  case  psp102_model_BGIDLO  :
    value->rValue = model->BGIDLO;
    return OK;
  case  psp102_model_STBGIDLO  :
    value->rValue = model->STBGIDLO;
    return OK;
  case  psp102_model_CGIDLO  :
    value->rValue = model->CGIDLO;
    return OK;
  case  psp102_model_CGBOVL  :
    value->rValue = model->CGBOVL;
    return OK;
  case  psp102_model_CFRW  :
    value->rValue = model->CFRW;
    return OK;
  case  psp102_model_FNTO  :
    value->rValue = model->FNTO;
    return OK;
  case  psp102_model_NFALW  :
    value->rValue = model->NFALW;
    return OK;
  case  psp102_model_NFBLW  :
    value->rValue = model->NFBLW;
    return OK;
  case  psp102_model_NFCLW  :
    value->rValue = model->NFCLW;
    return OK;
  case  psp102_model_DTA  :
    value->rValue = model->DTA;
    return OK;
  case  psp102_model_SAREF  :
    value->rValue = model->SAREF;
    return OK;
  case  psp102_model_SBREF  :
    value->rValue = model->SBREF;
    return OK;
  case  psp102_model_WLOD  :
    value->rValue = model->WLOD;
    return OK;
  case  psp102_model_KUO  :
    value->rValue = model->KUO;
    return OK;
  case  psp102_model_KVSAT  :
    value->rValue = model->KVSAT;
    return OK;
  case  psp102_model_TKUO  :
    value->rValue = model->TKUO;
    return OK;
  case  psp102_model_LKUO  :
    value->rValue = model->LKUO;
    return OK;
  case  psp102_model_WKUO  :
    value->rValue = model->WKUO;
    return OK;
  case  psp102_model_PKUO  :
    value->rValue = model->PKUO;
    return OK;
  case  psp102_model_LLODKUO  :
    value->rValue = model->LLODKUO;
    return OK;
  case  psp102_model_WLODKUO  :
    value->rValue = model->WLODKUO;
    return OK;
  case  psp102_model_KVTHO  :
    value->rValue = model->KVTHO;
    return OK;
  case  psp102_model_LKVTHO  :
    value->rValue = model->LKVTHO;
    return OK;
  case  psp102_model_WKVTHO  :
    value->rValue = model->WKVTHO;
    return OK;
  case  psp102_model_PKVTHO  :
    value->rValue = model->PKVTHO;
    return OK;
  case  psp102_model_LLODVTH  :
    value->rValue = model->LLODVTH;
    return OK;
  case  psp102_model_WLODVTH  :
    value->rValue = model->WLODVTH;
    return OK;
  case  psp102_model_STETAO  :
    value->rValue = model->STETAO;
    return OK;
  case  psp102_model_LODETAO  :
    value->rValue = model->LODETAO;
    return OK;
  case  psp102_model_TRJ  :
    value->rValue = model->TRJ;
    return OK;
  case  psp102_model_IMAX  :
    value->rValue = model->IMAX;
    return OK;
  case  psp102_model_CJORBOT  :
    value->rValue = model->CJORBOT;
    return OK;
  case  psp102_model_CJORSTI  :
    value->rValue = model->CJORSTI;
    return OK;
  case  psp102_model_CJORGAT  :
    value->rValue = model->CJORGAT;
    return OK;
  case  psp102_model_VBIRBOT  :
    value->rValue = model->VBIRBOT;
    return OK;
  case  psp102_model_VBIRSTI  :
    value->rValue = model->VBIRSTI;
    return OK;
  case  psp102_model_VBIRGAT  :
    value->rValue = model->VBIRGAT;
    return OK;
  case  psp102_model_PBOT  :
    value->rValue = model->PBOT;
    return OK;
  case  psp102_model_PSTI  :
    value->rValue = model->PSTI;
    return OK;
  case  psp102_model_PGAT  :
    value->rValue = model->PGAT;
    return OK;
  case  psp102_model_PHIGBOT  :
    value->rValue = model->PHIGBOT;
    return OK;
  case  psp102_model_PHIGSTI  :
    value->rValue = model->PHIGSTI;
    return OK;
  case  psp102_model_PHIGGAT  :
    value->rValue = model->PHIGGAT;
    return OK;
  case  psp102_model_IDSATRBOT  :
    value->rValue = model->IDSATRBOT;
    return OK;
  case  psp102_model_IDSATRSTI  :
    value->rValue = model->IDSATRSTI;
    return OK;
  case  psp102_model_IDSATRGAT  :
    value->rValue = model->IDSATRGAT;
    return OK;
  case  psp102_model_CSRHBOT  :
    value->rValue = model->CSRHBOT;
    return OK;
  case  psp102_model_CSRHSTI  :
    value->rValue = model->CSRHSTI;
    return OK;
  case  psp102_model_CSRHGAT  :
    value->rValue = model->CSRHGAT;
    return OK;
  case  psp102_model_XJUNSTI  :
    value->rValue = model->XJUNSTI;
    return OK;
  case  psp102_model_XJUNGAT  :
    value->rValue = model->XJUNGAT;
    return OK;
  case  psp102_model_CTATBOT  :
    value->rValue = model->CTATBOT;
    return OK;
  case  psp102_model_CTATSTI  :
    value->rValue = model->CTATSTI;
    return OK;
  case  psp102_model_CTATGAT  :
    value->rValue = model->CTATGAT;
    return OK;
  case  psp102_model_MEFFTATBOT  :
    value->rValue = model->MEFFTATBOT;
    return OK;
  case  psp102_model_MEFFTATSTI  :
    value->rValue = model->MEFFTATSTI;
    return OK;
  case  psp102_model_MEFFTATGAT  :
    value->rValue = model->MEFFTATGAT;
    return OK;
  case  psp102_model_CBBTBOT  :
    value->rValue = model->CBBTBOT;
    return OK;
  case  psp102_model_CBBTSTI  :
    value->rValue = model->CBBTSTI;
    return OK;
  case  psp102_model_CBBTGAT  :
    value->rValue = model->CBBTGAT;
    return OK;
  case  psp102_model_FBBTRBOT  :
    value->rValue = model->FBBTRBOT;
    return OK;
  case  psp102_model_FBBTRSTI  :
    value->rValue = model->FBBTRSTI;
    return OK;
  case  psp102_model_FBBTRGAT  :
    value->rValue = model->FBBTRGAT;
    return OK;
  case  psp102_model_STFBBTBOT  :
    value->rValue = model->STFBBTBOT;
    return OK;
  case  psp102_model_STFBBTSTI  :
    value->rValue = model->STFBBTSTI;
    return OK;
  case  psp102_model_STFBBTGAT  :
    value->rValue = model->STFBBTGAT;
    return OK;
  case  psp102_model_VBRBOT  :
    value->rValue = model->VBRBOT;
    return OK;
  case  psp102_model_VBRSTI  :
    value->rValue = model->VBRSTI;
    return OK;
  case  psp102_model_VBRGAT  :
    value->rValue = model->VBRGAT;
    return OK;
  case  psp102_model_PBRBOT  :
    value->rValue = model->PBRBOT;
    return OK;
  case  psp102_model_PBRSTI  :
    value->rValue = model->PBRSTI;
    return OK;
  case  psp102_model_PBRGAT  :
    value->rValue = model->PBRGAT;
    return OK;

  default:
    return(-1);
  }
  return(-1);
}
