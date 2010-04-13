/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:14:44 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "cktdefs.h"
#include "devdefs.h"
#include "hicum0defs.h"
#include "sperror.h"
#include "suffix.h"

int hicum0mAsk(CKTcircuit *ckt, GENmodel *inst, int which, IFvalue *value)
{
  hicum0model *model = (hicum0model *)inst;
  switch (which) {  case  hicum0_model_is  :
    value->rValue = model->is;
    return OK;
  case  hicum0_model_mcf  :
    value->rValue = model->mcf;
    return OK;
  case  hicum0_model_mcr  :
    value->rValue = model->mcr;
    return OK;
  case  hicum0_model_vef  :
    value->rValue = model->vef;
    return OK;
  case  hicum0_model_iqf  :
    value->rValue = model->iqf;
    return OK;
  case  hicum0_model_iqr  :
    value->rValue = model->iqr;
    return OK;
  case  hicum0_model_iqfh  :
    value->rValue = model->iqfh;
    return OK;
  case  hicum0_model_tfh  :
    value->rValue = model->tfh;
    return OK;
  case  hicum0_model_ibes  :
    value->rValue = model->ibes;
    return OK;
  case  hicum0_model_mbe  :
    value->rValue = model->mbe;
    return OK;
  case  hicum0_model_ires  :
    value->rValue = model->ires;
    return OK;
  case  hicum0_model_mre  :
    value->rValue = model->mre;
    return OK;
  case  hicum0_model_ibcs  :
    value->rValue = model->ibcs;
    return OK;
  case  hicum0_model_mbc  :
    value->rValue = model->mbc;
    return OK;
  case  hicum0_model_cje0  :
    value->rValue = model->cje0;
    return OK;
  case  hicum0_model_vde  :
    value->rValue = model->vde;
    return OK;
  case  hicum0_model_ze  :
    value->rValue = model->ze;
    return OK;
  case  hicum0_model_aje  :
    value->rValue = model->aje;
    return OK;
  case  hicum0_model_t0  :
    value->rValue = model->t0;
    return OK;
  case  hicum0_model_dt0h  :
    value->rValue = model->dt0h;
    return OK;
  case  hicum0_model_tbvl  :
    value->rValue = model->tbvl;
    return OK;
  case  hicum0_model_tef0  :
    value->rValue = model->tef0;
    return OK;
  case  hicum0_model_gte  :
    value->rValue = model->gte;
    return OK;
  case  hicum0_model_thcs  :
    value->rValue = model->thcs;
    return OK;
  case  hicum0_model_ahc  :
    value->rValue = model->ahc;
    return OK;
  case  hicum0_model_tr  :
    value->rValue = model->tr;
    return OK;
  case  hicum0_model_rci0  :
    value->rValue = model->rci0;
    return OK;
  case  hicum0_model_vlim  :
    value->rValue = model->vlim;
    return OK;
  case  hicum0_model_vpt  :
    value->rValue = model->vpt;
    return OK;
  case  hicum0_model_vces  :
    value->rValue = model->vces;
    return OK;
  case  hicum0_model_cjci0  :
    value->rValue = model->cjci0;
    return OK;
  case  hicum0_model_vdci  :
    value->rValue = model->vdci;
    return OK;
  case  hicum0_model_zci  :
    value->rValue = model->zci;
    return OK;
  case  hicum0_model_vptci  :
    value->rValue = model->vptci;
    return OK;
  case  hicum0_model_cjcx0  :
    value->rValue = model->cjcx0;
    return OK;
  case  hicum0_model_vdcx  :
    value->rValue = model->vdcx;
    return OK;
  case  hicum0_model_zcx  :
    value->rValue = model->zcx;
    return OK;
  case  hicum0_model_vptcx  :
    value->rValue = model->vptcx;
    return OK;
  case  hicum0_model_fbc  :
    value->rValue = model->fbc;
    return OK;
  case  hicum0_model_rbi0  :
    value->rValue = model->rbi0;
    return OK;
  case  hicum0_model_vr0e  :
    value->rValue = model->vr0e;
    return OK;
  case  hicum0_model_vr0c  :
    value->rValue = model->vr0c;
    return OK;
  case  hicum0_model_fgeo  :
    value->rValue = model->fgeo;
    return OK;
  case  hicum0_model_rbx  :
    value->rValue = model->rbx;
    return OK;
  case  hicum0_model_rcx  :
    value->rValue = model->rcx;
    return OK;
  case  hicum0_model_re  :
    value->rValue = model->re;
    return OK;
  case  hicum0_model_itss  :
    value->rValue = model->itss;
    return OK;
  case  hicum0_model_msf  :
    value->rValue = model->msf;
    return OK;
  case  hicum0_model_iscs  :
    value->rValue = model->iscs;
    return OK;
  case  hicum0_model_msc  :
    value->rValue = model->msc;
    return OK;
  case  hicum0_model_cjs0  :
    value->rValue = model->cjs0;
    return OK;
  case  hicum0_model_vds  :
    value->rValue = model->vds;
    return OK;
  case  hicum0_model_zs  :
    value->rValue = model->zs;
    return OK;
  case  hicum0_model_vpts  :
    value->rValue = model->vpts;
    return OK;
  case  hicum0_model_cbcpar  :
    value->rValue = model->cbcpar;
    return OK;
  case  hicum0_model_cbepar  :
    value->rValue = model->cbepar;
    return OK;
  case  hicum0_model_eavl  :
    value->rValue = model->eavl;
    return OK;
  case  hicum0_model_kavl  :
    value->rValue = model->kavl;
    return OK;
  case  hicum0_model_kf  :
    value->rValue = model->kf;
    return OK;
  case  hicum0_model_af  :
    value->rValue = model->af;
    return OK;
  case  hicum0_model_vgb  :
    value->rValue = model->vgb;
    return OK;
  case  hicum0_model_vge  :
    value->rValue = model->vge;
    return OK;
  case  hicum0_model_vgc  :
    value->rValue = model->vgc;
    return OK;
  case  hicum0_model_vgs  :
    value->rValue = model->vgs;
    return OK;
  case  hicum0_model_f1vg  :
    value->rValue = model->f1vg;
    return OK;
  case  hicum0_model_f2vg  :
    value->rValue = model->f2vg;
    return OK;
  case  hicum0_model_alt0  :
    value->rValue = model->alt0;
    return OK;
  case  hicum0_model_kt0  :
    value->rValue = model->kt0;
    return OK;
  case  hicum0_model_zetact  :
    value->rValue = model->zetact;
    return OK;
  case  hicum0_model_zetabet  :
    value->rValue = model->zetabet;
    return OK;
  case  hicum0_model_zetaci  :
    value->rValue = model->zetaci;
    return OK;
  case  hicum0_model_alvs  :
    value->rValue = model->alvs;
    return OK;
  case  hicum0_model_alces  :
    value->rValue = model->alces;
    return OK;
  case  hicum0_model_zetarbi  :
    value->rValue = model->zetarbi;
    return OK;
  case  hicum0_model_zetarbx  :
    value->rValue = model->zetarbx;
    return OK;
  case  hicum0_model_zetarcx  :
    value->rValue = model->zetarcx;
    return OK;
  case  hicum0_model_zetare  :
    value->rValue = model->zetare;
    return OK;
  case  hicum0_model_alkav  :
    value->rValue = model->alkav;
    return OK;
  case  hicum0_model_aleav  :
    value->rValue = model->aleav;
    return OK;
  case  hicum0_model_flsh  :
    value->iValue = model->flsh;
    return OK;
  case  hicum0_model_rth  :
    value->rValue = model->rth;
    return OK;
  case  hicum0_model_cth  :
    value->rValue = model->cth;
    return OK;
  case  hicum0_model_npn  :
    value->iValue = model->npn;
    return OK;
  case  hicum0_model_pnp  :
    value->iValue = model->pnp;
    return OK;
  case  hicum0_model_tnom  :
    value->rValue = model->tnom;
    return OK;

  default:
    return(-1);
  }
  return(-1);
}
