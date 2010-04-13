/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 14:29:51 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "hicum2defs.h"
#include "sperror.h"
#include "suffix.h"

int hicum2mParam(int param, IFvalue *value, GENmodel *inMod)
{
  hicum2model *mod = (hicum2model*)inMod;
  switch (param) {
  case  hicum2_model_pnp  :
    mod->pnp = value->iValue;
    mod->pnp_Given = TRUE;
    break;
  case  hicum2_model_npn  :
    mod->npn = value->iValue;
    mod->npn_Given = TRUE;
    break;
  case  hicum2_model_c10  :
    mod->c10 = value->rValue;
    mod->c10_Given = TRUE;
    break;
  case  hicum2_model_qp0  :
    mod->qp0 = value->rValue;
    mod->qp0_Given = TRUE;
    break;
  case  hicum2_model_ich  :
    mod->ich = value->rValue;
    mod->ich_Given = TRUE;
    break;
  case  hicum2_model_hfe  :
    mod->hfe = value->rValue;
    mod->hfe_Given = TRUE;
    break;
  case  hicum2_model_hfc  :
    mod->hfc = value->rValue;
    mod->hfc_Given = TRUE;
    break;
  case  hicum2_model_hjei  :
    mod->hjei = value->rValue;
    mod->hjei_Given = TRUE;
    break;
  case  hicum2_model_hjci  :
    mod->hjci = value->rValue;
    mod->hjci_Given = TRUE;
    break;
  case  hicum2_model_ibeis  :
    mod->ibeis = value->rValue;
    mod->ibeis_Given = TRUE;
    break;
  case  hicum2_model_mbei  :
    mod->mbei = value->rValue;
    mod->mbei_Given = TRUE;
    break;
  case  hicum2_model_ireis  :
    mod->ireis = value->rValue;
    mod->ireis_Given = TRUE;
    break;
  case  hicum2_model_mrei  :
    mod->mrei = value->rValue;
    mod->mrei_Given = TRUE;
    break;
  case  hicum2_model_ibeps  :
    mod->ibeps = value->rValue;
    mod->ibeps_Given = TRUE;
    break;
  case  hicum2_model_mbep  :
    mod->mbep = value->rValue;
    mod->mbep_Given = TRUE;
    break;
  case  hicum2_model_ireps  :
    mod->ireps = value->rValue;
    mod->ireps_Given = TRUE;
    break;
  case  hicum2_model_mrep  :
    mod->mrep = value->rValue;
    mod->mrep_Given = TRUE;
    break;
  case  hicum2_model_mcf  :
    mod->mcf = value->rValue;
    mod->mcf_Given = TRUE;
    break;
  case  hicum2_model_tbhrec  :
    mod->tbhrec = value->rValue;
    mod->tbhrec_Given = TRUE;
    break;
  case  hicum2_model_ibcis  :
    mod->ibcis = value->rValue;
    mod->ibcis_Given = TRUE;
    break;
  case  hicum2_model_mbci  :
    mod->mbci = value->rValue;
    mod->mbci_Given = TRUE;
    break;
  case  hicum2_model_ibcxs  :
    mod->ibcxs = value->rValue;
    mod->ibcxs_Given = TRUE;
    break;
  case  hicum2_model_mbcx  :
    mod->mbcx = value->rValue;
    mod->mbcx_Given = TRUE;
    break;
  case  hicum2_model_ibets  :
    mod->ibets = value->rValue;
    mod->ibets_Given = TRUE;
    break;
  case  hicum2_model_abet  :
    mod->abet = value->rValue;
    mod->abet_Given = TRUE;
    break;
  case  hicum2_model_tunode  :
    mod->tunode = value->iValue;
    mod->tunode_Given = TRUE;
    break;
  case  hicum2_model_favl  :
    mod->favl = value->rValue;
    mod->favl_Given = TRUE;
    break;
  case  hicum2_model_qavl  :
    mod->qavl = value->rValue;
    mod->qavl_Given = TRUE;
    break;
  case  hicum2_model_alfav  :
    mod->alfav = value->rValue;
    mod->alfav_Given = TRUE;
    break;
  case  hicum2_model_alqav  :
    mod->alqav = value->rValue;
    mod->alqav_Given = TRUE;
    break;
  case  hicum2_model_rbi0  :
    mod->rbi0 = value->rValue;
    mod->rbi0_Given = TRUE;
    break;
  case  hicum2_model_rbx  :
    mod->rbx = value->rValue;
    mod->rbx_Given = TRUE;
    break;
  case  hicum2_model_fgeo  :
    mod->fgeo = value->rValue;
    mod->fgeo_Given = TRUE;
    break;
  case  hicum2_model_fdqr0  :
    mod->fdqr0 = value->rValue;
    mod->fdqr0_Given = TRUE;
    break;
  case  hicum2_model_fcrbi  :
    mod->fcrbi = value->rValue;
    mod->fcrbi_Given = TRUE;
    break;
  case  hicum2_model_fqi  :
    mod->fqi = value->rValue;
    mod->fqi_Given = TRUE;
    break;
  case  hicum2_model_re  :
    mod->re = value->rValue;
    mod->re_Given = TRUE;
    break;
  case  hicum2_model_rcx  :
    mod->rcx = value->rValue;
    mod->rcx_Given = TRUE;
    break;
  case  hicum2_model_itss  :
    mod->itss = value->rValue;
    mod->itss_Given = TRUE;
    break;
  case  hicum2_model_msf  :
    mod->msf = value->rValue;
    mod->msf_Given = TRUE;
    break;
  case  hicum2_model_iscs  :
    mod->iscs = value->rValue;
    mod->iscs_Given = TRUE;
    break;
  case  hicum2_model_msc  :
    mod->msc = value->rValue;
    mod->msc_Given = TRUE;
    break;
  case  hicum2_model_tsf  :
    mod->tsf = value->rValue;
    mod->tsf_Given = TRUE;
    break;
  case  hicum2_model_rsu  :
    mod->rsu = value->rValue;
    mod->rsu_Given = TRUE;
    break;
  case  hicum2_model_csu  :
    mod->csu = value->rValue;
    mod->csu_Given = TRUE;
    break;
  case  hicum2_model_cjei0  :
    mod->cjei0 = value->rValue;
    mod->cjei0_Given = TRUE;
    break;
  case  hicum2_model_vdei  :
    mod->vdei = value->rValue;
    mod->vdei_Given = TRUE;
    break;
  case  hicum2_model_zei  :
    mod->zei = value->rValue;
    mod->zei_Given = TRUE;
    break;
  case  hicum2_model_ajei  :
    mod->ajei = value->rValue;
    mod->ajei_Given = TRUE;
    break;
  case  hicum2_model_cjep0  :
    mod->cjep0 = value->rValue;
    mod->cjep0_Given = TRUE;
    break;
  case  hicum2_model_vdep  :
    mod->vdep = value->rValue;
    mod->vdep_Given = TRUE;
    break;
  case  hicum2_model_zep  :
    mod->zep = value->rValue;
    mod->zep_Given = TRUE;
    break;
  case  hicum2_model_ajep  :
    mod->ajep = value->rValue;
    mod->ajep_Given = TRUE;
    break;
  case  hicum2_model_cjci0  :
    mod->cjci0 = value->rValue;
    mod->cjci0_Given = TRUE;
    break;
  case  hicum2_model_vdci  :
    mod->vdci = value->rValue;
    mod->vdci_Given = TRUE;
    break;
  case  hicum2_model_zci  :
    mod->zci = value->rValue;
    mod->zci_Given = TRUE;
    break;
  case  hicum2_model_vptci  :
    mod->vptci = value->rValue;
    mod->vptci_Given = TRUE;
    break;
  case  hicum2_model_cjcx0  :
    mod->cjcx0 = value->rValue;
    mod->cjcx0_Given = TRUE;
    break;
  case  hicum2_model_vdcx  :
    mod->vdcx = value->rValue;
    mod->vdcx_Given = TRUE;
    break;
  case  hicum2_model_zcx  :
    mod->zcx = value->rValue;
    mod->zcx_Given = TRUE;
    break;
  case  hicum2_model_vptcx  :
    mod->vptcx = value->rValue;
    mod->vptcx_Given = TRUE;
    break;
  case  hicum2_model_fbcpar  :
    mod->fbcpar = value->rValue;
    mod->fbcpar_Given = TRUE;
    break;
  case  hicum2_model_fbepar  :
    mod->fbepar = value->rValue;
    mod->fbepar_Given = TRUE;
    break;
  case  hicum2_model_cjs0  :
    mod->cjs0 = value->rValue;
    mod->cjs0_Given = TRUE;
    break;
  case  hicum2_model_vds  :
    mod->vds = value->rValue;
    mod->vds_Given = TRUE;
    break;
  case  hicum2_model_zs  :
    mod->zs = value->rValue;
    mod->zs_Given = TRUE;
    break;
  case  hicum2_model_vpts  :
    mod->vpts = value->rValue;
    mod->vpts_Given = TRUE;
    break;
  case  hicum2_model_t0  :
    mod->t0 = value->rValue;
    mod->t0_Given = TRUE;
    break;
  case  hicum2_model_dt0h  :
    mod->dt0h = value->rValue;
    mod->dt0h_Given = TRUE;
    break;
  case  hicum2_model_tbvl  :
    mod->tbvl = value->rValue;
    mod->tbvl_Given = TRUE;
    break;
  case  hicum2_model_tef0  :
    mod->tef0 = value->rValue;
    mod->tef0_Given = TRUE;
    break;
  case  hicum2_model_gtfe  :
    mod->gtfe = value->rValue;
    mod->gtfe_Given = TRUE;
    break;
  case  hicum2_model_thcs  :
    mod->thcs = value->rValue;
    mod->thcs_Given = TRUE;
    break;
  case  hicum2_model_ahc  :
    mod->ahc = value->rValue;
    mod->ahc_Given = TRUE;
    break;
  case  hicum2_model_fthc  :
    mod->fthc = value->rValue;
    mod->fthc_Given = TRUE;
    break;
  case  hicum2_model_rci0  :
    mod->rci0 = value->rValue;
    mod->rci0_Given = TRUE;
    break;
  case  hicum2_model_vlim  :
    mod->vlim = value->rValue;
    mod->vlim_Given = TRUE;
    break;
  case  hicum2_model_vces  :
    mod->vces = value->rValue;
    mod->vces_Given = TRUE;
    break;
  case  hicum2_model_vpt  :
    mod->vpt = value->rValue;
    mod->vpt_Given = TRUE;
    break;
  case  hicum2_model_tr  :
    mod->tr = value->rValue;
    mod->tr_Given = TRUE;
    break;
  case  hicum2_model_cbepar  :
    mod->cbepar = value->rValue;
    mod->cbepar_Given = TRUE;
    break;
  case  hicum2_model_cbcpar  :
    mod->cbcpar = value->rValue;
    mod->cbcpar_Given = TRUE;
    break;
  case  hicum2_model_alqf  :
    mod->alqf = value->rValue;
    mod->alqf_Given = TRUE;
    break;
  case  hicum2_model_alit  :
    mod->alit = value->rValue;
    mod->alit_Given = TRUE;
    break;
  case  hicum2_model_flnqs  :
    mod->flnqs = value->iValue;
    mod->flnqs_Given = TRUE;
    break;
  case  hicum2_model_kf  :
    mod->kf = value->rValue;
    mod->kf_Given = TRUE;
    break;
  case  hicum2_model_af  :
    mod->af = value->rValue;
    mod->af_Given = TRUE;
    break;
  case  hicum2_model_cfbe  :
    mod->cfbe = value->iValue;
    mod->cfbe_Given = TRUE;
    break;
  case  hicum2_model_latb  :
    mod->latb = value->rValue;
    mod->latb_Given = TRUE;
    break;
  case  hicum2_model_latl  :
    mod->latl = value->rValue;
    mod->latl_Given = TRUE;
    break;
  case  hicum2_model_vgb  :
    mod->vgb = value->rValue;
    mod->vgb_Given = TRUE;
    break;
  case  hicum2_model_alt0  :
    mod->alt0 = value->rValue;
    mod->alt0_Given = TRUE;
    break;
  case  hicum2_model_kt0  :
    mod->kt0 = value->rValue;
    mod->kt0_Given = TRUE;
    break;
  case  hicum2_model_zetaci  :
    mod->zetaci = value->rValue;
    mod->zetaci_Given = TRUE;
    break;
  case  hicum2_model_alvs  :
    mod->alvs = value->rValue;
    mod->alvs_Given = TRUE;
    break;
  case  hicum2_model_alces  :
    mod->alces = value->rValue;
    mod->alces_Given = TRUE;
    break;
  case  hicum2_model_zetarbi  :
    mod->zetarbi = value->rValue;
    mod->zetarbi_Given = TRUE;
    break;
  case  hicum2_model_zetarbx  :
    mod->zetarbx = value->rValue;
    mod->zetarbx_Given = TRUE;
    break;
  case  hicum2_model_zetarcx  :
    mod->zetarcx = value->rValue;
    mod->zetarcx_Given = TRUE;
    break;
  case  hicum2_model_zetare  :
    mod->zetare = value->rValue;
    mod->zetare_Given = TRUE;
    break;
  case  hicum2_model_zetacx  :
    mod->zetacx = value->rValue;
    mod->zetacx_Given = TRUE;
    break;
  case  hicum2_model_vge  :
    mod->vge = value->rValue;
    mod->vge_Given = TRUE;
    break;
  case  hicum2_model_vgc  :
    mod->vgc = value->rValue;
    mod->vgc_Given = TRUE;
    break;
  case  hicum2_model_vgs  :
    mod->vgs = value->rValue;
    mod->vgs_Given = TRUE;
    break;
  case  hicum2_model_f1vg  :
    mod->f1vg = value->rValue;
    mod->f1vg_Given = TRUE;
    break;
  case  hicum2_model_f2vg  :
    mod->f2vg = value->rValue;
    mod->f2vg_Given = TRUE;
    break;
  case  hicum2_model_zetact  :
    mod->zetact = value->rValue;
    mod->zetact_Given = TRUE;
    break;
  case  hicum2_model_zetabet  :
    mod->zetabet = value->rValue;
    mod->zetabet_Given = TRUE;
    break;
  case  hicum2_model_alb  :
    mod->alb = value->rValue;
    mod->alb_Given = TRUE;
    break;
  case  hicum2_model_flsh  :
    mod->flsh = value->iValue;
    mod->flsh_Given = TRUE;
    break;
  case  hicum2_model_rth  :
    mod->rth = value->rValue;
    mod->rth_Given = TRUE;
    break;
  case  hicum2_model_cth  :
    mod->cth = value->rValue;
    mod->cth_Given = TRUE;
    break;
  case  hicum2_model_flcomp  :
    mod->flcomp = value->rValue;
    mod->flcomp_Given = TRUE;
    break;
  case  hicum2_model_tnom  :
    mod->tnom = value->rValue;
    mod->tnom_Given = TRUE;
    break;
  case  hicum2_model_dt  :
    mod->dt = value->rValue;
    mod->dt_Given = TRUE;
    break;

  default:
    return(-1);
  }
  return(OK);
}
