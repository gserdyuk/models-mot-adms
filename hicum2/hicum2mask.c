/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:36 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "cktdefs.h"
#include "devdefs.h"
#include "hicum2defs.h"
#include "sperror.h"
#include "suffix.h"

int hicum2mAsk(CKTcircuit *ckt, GENmodel *inst, int which, IFvalue *value)
{
  hicum2model *model = (hicum2model *)inst;
  switch (which) {  case  hicum2_model_pnp  :
    value->iValue = model->pnp;
    return OK;
  case  hicum2_model_npn  :
    value->iValue = model->npn;
    return OK;
  case  hicum2_model_c10  :
    value->rValue = model->c10;
    return OK;
  case  hicum2_model_qp0  :
    value->rValue = model->qp0;
    return OK;
  case  hicum2_model_ich  :
    value->rValue = model->ich;
    return OK;
  case  hicum2_model_hfe  :
    value->rValue = model->hfe;
    return OK;
  case  hicum2_model_hfc  :
    value->rValue = model->hfc;
    return OK;
  case  hicum2_model_hjei  :
    value->rValue = model->hjei;
    return OK;
  case  hicum2_model_hjci  :
    value->rValue = model->hjci;
    return OK;
  case  hicum2_model_ibeis  :
    value->rValue = model->ibeis;
    return OK;
  case  hicum2_model_mbei  :
    value->rValue = model->mbei;
    return OK;
  case  hicum2_model_ireis  :
    value->rValue = model->ireis;
    return OK;
  case  hicum2_model_mrei  :
    value->rValue = model->mrei;
    return OK;
  case  hicum2_model_ibeps  :
    value->rValue = model->ibeps;
    return OK;
  case  hicum2_model_mbep  :
    value->rValue = model->mbep;
    return OK;
  case  hicum2_model_ireps  :
    value->rValue = model->ireps;
    return OK;
  case  hicum2_model_mrep  :
    value->rValue = model->mrep;
    return OK;
  case  hicum2_model_mcf  :
    value->rValue = model->mcf;
    return OK;
  case  hicum2_model_tbhrec  :
    value->rValue = model->tbhrec;
    return OK;
  case  hicum2_model_ibcis  :
    value->rValue = model->ibcis;
    return OK;
  case  hicum2_model_mbci  :
    value->rValue = model->mbci;
    return OK;
  case  hicum2_model_ibcxs  :
    value->rValue = model->ibcxs;
    return OK;
  case  hicum2_model_mbcx  :
    value->rValue = model->mbcx;
    return OK;
  case  hicum2_model_ibets  :
    value->rValue = model->ibets;
    return OK;
  case  hicum2_model_abet  :
    value->rValue = model->abet;
    return OK;
  case  hicum2_model_tunode  :
    value->iValue = model->tunode;
    return OK;
  case  hicum2_model_favl  :
    value->rValue = model->favl;
    return OK;
  case  hicum2_model_qavl  :
    value->rValue = model->qavl;
    return OK;
  case  hicum2_model_alfav  :
    value->rValue = model->alfav;
    return OK;
  case  hicum2_model_alqav  :
    value->rValue = model->alqav;
    return OK;
  case  hicum2_model_rbi0  :
    value->rValue = model->rbi0;
    return OK;
  case  hicum2_model_rbx  :
    value->rValue = model->rbx;
    return OK;
  case  hicum2_model_fgeo  :
    value->rValue = model->fgeo;
    return OK;
  case  hicum2_model_fdqr0  :
    value->rValue = model->fdqr0;
    return OK;
  case  hicum2_model_fcrbi  :
    value->rValue = model->fcrbi;
    return OK;
  case  hicum2_model_fqi  :
    value->rValue = model->fqi;
    return OK;
  case  hicum2_model_re  :
    value->rValue = model->re;
    return OK;
  case  hicum2_model_rcx  :
    value->rValue = model->rcx;
    return OK;
  case  hicum2_model_itss  :
    value->rValue = model->itss;
    return OK;
  case  hicum2_model_msf  :
    value->rValue = model->msf;
    return OK;
  case  hicum2_model_iscs  :
    value->rValue = model->iscs;
    return OK;
  case  hicum2_model_msc  :
    value->rValue = model->msc;
    return OK;
  case  hicum2_model_tsf  :
    value->rValue = model->tsf;
    return OK;
  case  hicum2_model_rsu  :
    value->rValue = model->rsu;
    return OK;
  case  hicum2_model_csu  :
    value->rValue = model->csu;
    return OK;
  case  hicum2_model_cjei0  :
    value->rValue = model->cjei0;
    return OK;
  case  hicum2_model_vdei  :
    value->rValue = model->vdei;
    return OK;
  case  hicum2_model_zei  :
    value->rValue = model->zei;
    return OK;
  case  hicum2_model_ajei  :
    value->rValue = model->ajei;
    return OK;
  case  hicum2_model_cjep0  :
    value->rValue = model->cjep0;
    return OK;
  case  hicum2_model_vdep  :
    value->rValue = model->vdep;
    return OK;
  case  hicum2_model_zep  :
    value->rValue = model->zep;
    return OK;
  case  hicum2_model_ajep  :
    value->rValue = model->ajep;
    return OK;
  case  hicum2_model_cjci0  :
    value->rValue = model->cjci0;
    return OK;
  case  hicum2_model_vdci  :
    value->rValue = model->vdci;
    return OK;
  case  hicum2_model_zci  :
    value->rValue = model->zci;
    return OK;
  case  hicum2_model_vptci  :
    value->rValue = model->vptci;
    return OK;
  case  hicum2_model_cjcx0  :
    value->rValue = model->cjcx0;
    return OK;
  case  hicum2_model_vdcx  :
    value->rValue = model->vdcx;
    return OK;
  case  hicum2_model_zcx  :
    value->rValue = model->zcx;
    return OK;
  case  hicum2_model_vptcx  :
    value->rValue = model->vptcx;
    return OK;
  case  hicum2_model_fbcpar  :
    value->rValue = model->fbcpar;
    return OK;
  case  hicum2_model_fbepar  :
    value->rValue = model->fbepar;
    return OK;
  case  hicum2_model_cjs0  :
    value->rValue = model->cjs0;
    return OK;
  case  hicum2_model_vds  :
    value->rValue = model->vds;
    return OK;
  case  hicum2_model_zs  :
    value->rValue = model->zs;
    return OK;
  case  hicum2_model_vpts  :
    value->rValue = model->vpts;
    return OK;
  case  hicum2_model_t0  :
    value->rValue = model->t0;
    return OK;
  case  hicum2_model_dt0h  :
    value->rValue = model->dt0h;
    return OK;
  case  hicum2_model_tbvl  :
    value->rValue = model->tbvl;
    return OK;
  case  hicum2_model_tef0  :
    value->rValue = model->tef0;
    return OK;
  case  hicum2_model_gtfe  :
    value->rValue = model->gtfe;
    return OK;
  case  hicum2_model_thcs  :
    value->rValue = model->thcs;
    return OK;
  case  hicum2_model_ahc  :
    value->rValue = model->ahc;
    return OK;
  case  hicum2_model_fthc  :
    value->rValue = model->fthc;
    return OK;
  case  hicum2_model_rci0  :
    value->rValue = model->rci0;
    return OK;
  case  hicum2_model_vlim  :
    value->rValue = model->vlim;
    return OK;
  case  hicum2_model_vces  :
    value->rValue = model->vces;
    return OK;
  case  hicum2_model_vpt  :
    value->rValue = model->vpt;
    return OK;
  case  hicum2_model_tr  :
    value->rValue = model->tr;
    return OK;
  case  hicum2_model_cbepar  :
    value->rValue = model->cbepar;
    return OK;
  case  hicum2_model_cbcpar  :
    value->rValue = model->cbcpar;
    return OK;
  case  hicum2_model_alqf  :
    value->rValue = model->alqf;
    return OK;
  case  hicum2_model_alit  :
    value->rValue = model->alit;
    return OK;
  case  hicum2_model_flnqs  :
    value->iValue = model->flnqs;
    return OK;
  case  hicum2_model_kf  :
    value->rValue = model->kf;
    return OK;
  case  hicum2_model_af  :
    value->rValue = model->af;
    return OK;
  case  hicum2_model_cfbe  :
    value->iValue = model->cfbe;
    return OK;
  case  hicum2_model_latb  :
    value->rValue = model->latb;
    return OK;
  case  hicum2_model_latl  :
    value->rValue = model->latl;
    return OK;
  case  hicum2_model_vgb  :
    value->rValue = model->vgb;
    return OK;
  case  hicum2_model_alt0  :
    value->rValue = model->alt0;
    return OK;
  case  hicum2_model_kt0  :
    value->rValue = model->kt0;
    return OK;
  case  hicum2_model_zetaci  :
    value->rValue = model->zetaci;
    return OK;
  case  hicum2_model_alvs  :
    value->rValue = model->alvs;
    return OK;
  case  hicum2_model_alces  :
    value->rValue = model->alces;
    return OK;
  case  hicum2_model_zetarbi  :
    value->rValue = model->zetarbi;
    return OK;
  case  hicum2_model_zetarbx  :
    value->rValue = model->zetarbx;
    return OK;
  case  hicum2_model_zetarcx  :
    value->rValue = model->zetarcx;
    return OK;
  case  hicum2_model_zetare  :
    value->rValue = model->zetare;
    return OK;
  case  hicum2_model_zetacx  :
    value->rValue = model->zetacx;
    return OK;
  case  hicum2_model_vge  :
    value->rValue = model->vge;
    return OK;
  case  hicum2_model_vgc  :
    value->rValue = model->vgc;
    return OK;
  case  hicum2_model_vgs  :
    value->rValue = model->vgs;
    return OK;
  case  hicum2_model_f1vg  :
    value->rValue = model->f1vg;
    return OK;
  case  hicum2_model_f2vg  :
    value->rValue = model->f2vg;
    return OK;
  case  hicum2_model_zetact  :
    value->rValue = model->zetact;
    return OK;
  case  hicum2_model_zetabet  :
    value->rValue = model->zetabet;
    return OK;
  case  hicum2_model_alb  :
    value->rValue = model->alb;
    return OK;
  case  hicum2_model_flsh  :
    value->iValue = model->flsh;
    return OK;
  case  hicum2_model_rth  :
    value->rValue = model->rth;
    return OK;
  case  hicum2_model_cth  :
    value->rValue = model->cth;
    return OK;
  case  hicum2_model_flcomp  :
    value->rValue = model->flcomp;
    return OK;
  case  hicum2_model_tnom  :
    value->rValue = model->tnom;
    return OK;
  case  hicum2_model_dt  :
    value->rValue = model->dt;
    return OK;

  default:
    return(-1);
  }
  return(-1);
}
