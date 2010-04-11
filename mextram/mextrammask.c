/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:15 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "cktdefs.h"
#include "devdefs.h"
#include "mextramdefs.h"
#include "sperror.h"
#include "suffix.h"

int mextrammAsk(CKTcircuit *ckt, GENmodel *inst, int which, IFvalue *value)
{
  mextrammodel *model = (mextrammodel *)inst;
  switch (which) {  case  mextram_model_pnp  :
    value->iValue = model->pnp;
    return OK;
  case  mextram_model_npn  :
    value->iValue = model->npn;
    return OK;
  case  mextram_model_LEVEL  :
    value->iValue = model->LEVEL;
    return OK;
  case  mextram_model_TREF  :
    value->rValue = model->TREF;
    return OK;
  case  mextram_model_DTA  :
    value->rValue = model->DTA;
    return OK;
  case  mextram_model_EXMOD  :
    value->iValue = model->EXMOD;
    return OK;
  case  mextram_model_EXPHI  :
    value->iValue = model->EXPHI;
    return OK;
  case  mextram_model_EXAVL  :
    value->iValue = model->EXAVL;
    return OK;
  case  mextram_model_IS  :
    value->rValue = model->IS;
    return OK;
  case  mextram_model_IK  :
    value->rValue = model->IK;
    return OK;
  case  mextram_model_VER  :
    value->rValue = model->VER;
    return OK;
  case  mextram_model_VEF  :
    value->rValue = model->VEF;
    return OK;
  case  mextram_model_BF  :
    value->rValue = model->BF;
    return OK;
  case  mextram_model_IBF  :
    value->rValue = model->IBF;
    return OK;
  case  mextram_model_MLF  :
    value->rValue = model->MLF;
    return OK;
  case  mextram_model_XIBI  :
    value->rValue = model->XIBI;
    return OK;
  case  mextram_model_BRI  :
    value->rValue = model->BRI;
    return OK;
  case  mextram_model_IBR  :
    value->rValue = model->IBR;
    return OK;
  case  mextram_model_VLR  :
    value->rValue = model->VLR;
    return OK;
  case  mextram_model_XEXT  :
    value->rValue = model->XEXT;
    return OK;
  case  mextram_model_WAVL  :
    value->rValue = model->WAVL;
    return OK;
  case  mextram_model_VAVL  :
    value->rValue = model->VAVL;
    return OK;
  case  mextram_model_SFH  :
    value->rValue = model->SFH;
    return OK;
  case  mextram_model_RE  :
    value->rValue = model->RE;
    return OK;
  case  mextram_model_RBC  :
    value->rValue = model->RBC;
    return OK;
  case  mextram_model_RBV  :
    value->rValue = model->RBV;
    return OK;
  case  mextram_model_RCC  :
    value->rValue = model->RCC;
    return OK;
  case  mextram_model_RCV  :
    value->rValue = model->RCV;
    return OK;
  case  mextram_model_SCRCV  :
    value->rValue = model->SCRCV;
    return OK;
  case  mextram_model_IHC  :
    value->rValue = model->IHC;
    return OK;
  case  mextram_model_AXI  :
    value->rValue = model->AXI;
    return OK;
  case  mextram_model_CJE  :
    value->rValue = model->CJE;
    return OK;
  case  mextram_model_VDE  :
    value->rValue = model->VDE;
    return OK;
  case  mextram_model_PE  :
    value->rValue = model->PE;
    return OK;
  case  mextram_model_XCJE  :
    value->rValue = model->XCJE;
    return OK;
  case  mextram_model_CBEO  :
    value->rValue = model->CBEO;
    return OK;
  case  mextram_model_CJC  :
    value->rValue = model->CJC;
    return OK;
  case  mextram_model_VDC  :
    value->rValue = model->VDC;
    return OK;
  case  mextram_model_PC  :
    value->rValue = model->PC;
    return OK;
  case  mextram_model_XP  :
    value->rValue = model->XP;
    return OK;
  case  mextram_model_MC  :
    value->rValue = model->MC;
    return OK;
  case  mextram_model_XCJC  :
    value->rValue = model->XCJC;
    return OK;
  case  mextram_model_RCBLX  :
    value->rValue = model->RCBLX;
    return OK;
  case  mextram_model_RCBLI  :
    value->rValue = model->RCBLI;
    return OK;
  case  mextram_model_CBCO  :
    value->rValue = model->CBCO;
    return OK;
  case  mextram_model_MTAU  :
    value->rValue = model->MTAU;
    return OK;
  case  mextram_model_TAUE  :
    value->rValue = model->TAUE;
    return OK;
  case  mextram_model_TAUB  :
    value->rValue = model->TAUB;
    return OK;
  case  mextram_model_TEPI  :
    value->rValue = model->TEPI;
    return OK;
  case  mextram_model_TAUR  :
    value->rValue = model->TAUR;
    return OK;
  case  mextram_model_DEG  :
    value->rValue = model->DEG;
    return OK;
  case  mextram_model_XREC  :
    value->rValue = model->XREC;
    return OK;
  case  mextram_model_AQBO  :
    value->rValue = model->AQBO;
    return OK;
  case  mextram_model_AE  :
    value->rValue = model->AE;
    return OK;
  case  mextram_model_AB  :
    value->rValue = model->AB;
    return OK;
  case  mextram_model_AEPI  :
    value->rValue = model->AEPI;
    return OK;
  case  mextram_model_AEX  :
    value->rValue = model->AEX;
    return OK;
  case  mextram_model_AC  :
    value->rValue = model->AC;
    return OK;
  case  mextram_model_ACBL  :
    value->rValue = model->ACBL;
    return OK;
  case  mextram_model_DVGBF  :
    value->rValue = model->DVGBF;
    return OK;
  case  mextram_model_DVGBR  :
    value->rValue = model->DVGBR;
    return OK;
  case  mextram_model_VGB  :
    value->rValue = model->VGB;
    return OK;
  case  mextram_model_VGC  :
    value->rValue = model->VGC;
    return OK;
  case  mextram_model_VGJ  :
    value->rValue = model->VGJ;
    return OK;
  case  mextram_model_DVGTE  :
    value->rValue = model->DVGTE;
    return OK;
  case  mextram_model_DAIS  :
    value->rValue = model->DAIS;
    return OK;
  case  mextram_model_AF  :
    value->rValue = model->AF;
    return OK;
  case  mextram_model_KF  :
    value->rValue = model->KF;
    return OK;
  case  mextram_model_KFN  :
    value->rValue = model->KFN;
    return OK;
  case  mextram_model_KAVL  :
    value->iValue = model->KAVL;
    return OK;
  case  mextram_model_ISS  :
    value->rValue = model->ISS;
    return OK;
  case  mextram_model_IKS  :
    value->rValue = model->IKS;
    return OK;
  case  mextram_model_CJS  :
    value->rValue = model->CJS;
    return OK;
  case  mextram_model_VDS  :
    value->rValue = model->VDS;
    return OK;
  case  mextram_model_PS  :
    value->rValue = model->PS;
    return OK;
  case  mextram_model_VGS  :
    value->rValue = model->VGS;
    return OK;
  case  mextram_model_AS  :
    value->rValue = model->AS;
    return OK;
  case  mextram_model_RTH  :
    value->rValue = model->RTH;
    return OK;
  case  mextram_model_CTH  :
    value->rValue = model->CTH;
    return OK;
  case  mextram_model_ATH  :
    value->rValue = model->ATH;
    return OK;
  case  mextram_model_MULT  :
    value->rValue = model->MULT;
    return OK;
  case  mextram_model_TYPE  :
    value->iValue = model->TYPE;
    return OK;

  default:
    return(-1);
  }
  return(-1);
}
