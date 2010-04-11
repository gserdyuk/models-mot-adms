/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Wed, 24 Mar 2010 00:50:59 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "cktdefs.h"
#include "devdefs.h"
#include "ekvdefs.h"
#include "sperror.h"
#include "suffix.h"

int ekvmAsk(CKTcircuit *ckt, GENmodel *inst, int which, IFvalue *value)
{
  ekvmodel *model = (ekvmodel *)inst;
  switch (which) {  case  ekv_model_nmos  :
    value->iValue = model->nmos;
    return OK;
  case  ekv_model_pmos  :
    value->iValue = model->pmos;
    return OK;
  case  ekv_model_MTYPE  :
    value->iValue = model->MTYPE;
    return OK;
  case  ekv_model_TNOM  :
    value->rValue = model->TNOM;
    return OK;
  case  ekv_model_IMAX  :
    value->rValue = model->IMAX;
    return OK;
  case  ekv_model_TOX  :
    value->rValue = model->TOX;
    return OK;
  case  ekv_model_NSUB  :
    value->rValue = model->NSUB;
    return OK;
  case  ekv_model_VFB  :
    value->rValue = model->VFB;
    return OK;
  case  ekv_model_UO  :
    value->rValue = model->UO;
    return OK;
  case  ekv_model_VMAX  :
    value->rValue = model->VMAX;
    return OK;
  case  ekv_model_THETA  :
    value->rValue = model->THETA;
    return OK;
  case  ekv_model_COX  :
    value->rValue = model->COX;
    return OK;
  case  ekv_model_XJ  :
    value->rValue = model->XJ;
    return OK;
  case  ekv_model_DL  :
    value->rValue = model->DL;
    return OK;
  case  ekv_model_DW  :
    value->rValue = model->DW;
    return OK;
  case  ekv_model_GAMMA  :
    value->rValue = model->GAMMA;
    return OK;
  case  ekv_model_PHI  :
    value->rValue = model->PHI;
    return OK;
  case  ekv_model_VTO  :
    value->rValue = model->VTO;
    return OK;
  case  ekv_model_KP  :
    value->rValue = model->KP;
    return OK;
  case  ekv_model_UCRIT  :
    value->rValue = model->UCRIT;
    return OK;
  case  ekv_model_E0  :
    value->rValue = model->E0;
    return OK;
  case  ekv_model_LAMBDA  :
    value->rValue = model->LAMBDA;
    return OK;
  case  ekv_model_WETA  :
    value->rValue = model->WETA;
    return OK;
  case  ekv_model_LETA  :
    value->rValue = model->LETA;
    return OK;
  case  ekv_model_Q0  :
    value->rValue = model->Q0;
    return OK;
  case  ekv_model_LK  :
    value->rValue = model->LK;
    return OK;
  case  ekv_model_IBA  :
    value->rValue = model->IBA;
    return OK;
  case  ekv_model_IBB  :
    value->rValue = model->IBB;
    return OK;
  case  ekv_model_IBN  :
    value->rValue = model->IBN;
    return OK;
  case  ekv_model_TCV  :
    value->rValue = model->TCV;
    return OK;
  case  ekv_model_BEX  :
    value->rValue = model->BEX;
    return OK;
  case  ekv_model_UCEX  :
    value->rValue = model->UCEX;
    return OK;
  case  ekv_model_IBBT  :
    value->rValue = model->IBBT;
    return OK;
  case  ekv_model_AVTO  :
    value->rValue = model->AVTO;
    return OK;
  case  ekv_model_AKP  :
    value->rValue = model->AKP;
    return OK;
  case  ekv_model_AGAMMA  :
    value->rValue = model->AGAMMA;
    return OK;
  case  ekv_model_KF  :
    value->rValue = model->KF;
    return OK;
  case  ekv_model_AF  :
    value->rValue = model->AF;
    return OK;
  case  ekv_model_NQS  :
    value->rValue = model->NQS;
    return OK;
  case  ekv_model_SATLIM  :
    value->rValue = model->SATLIM;
    return OK;
  case  ekv_model_XQC  :
    value->rValue = model->XQC;
    return OK;
  case  ekv_model_HDIF  :
    value->rValue = model->HDIF;
    return OK;
  case  ekv_model_RSH  :
    value->rValue = model->RSH;
    return OK;
  case  ekv_model_JS  :
    value->rValue = model->JS;
    return OK;
  case  ekv_model_JSW  :
    value->rValue = model->JSW;
    return OK;
  case  ekv_model_XTI  :
    value->rValue = model->XTI;
    return OK;
  case  ekv_model_N  :
    value->rValue = model->N;
    return OK;
  case  ekv_model_CJ  :
    value->rValue = model->CJ;
    return OK;
  case  ekv_model_CJSW  :
    value->rValue = model->CJSW;
    return OK;
  case  ekv_model_PB  :
    value->rValue = model->PB;
    return OK;
  case  ekv_model_PBSW  :
    value->rValue = model->PBSW;
    return OK;
  case  ekv_model_MJ  :
    value->rValue = model->MJ;
    return OK;
  case  ekv_model_MJSW  :
    value->rValue = model->MJSW;
    return OK;
  case  ekv_model_FC  :
    value->rValue = model->FC;
    return OK;
  case  ekv_model_FCSW  :
    value->rValue = model->FCSW;
    return OK;
  case  ekv_model_CGSO  :
    value->rValue = model->CGSO;
    return OK;
  case  ekv_model_CGDO  :
    value->rValue = model->CGDO;
    return OK;
  case  ekv_model_CGBO  :
    value->rValue = model->CGBO;
    return OK;

  default:
    return(-1);
  }
  return(-1);
}
