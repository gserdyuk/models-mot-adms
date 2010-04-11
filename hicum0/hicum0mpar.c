/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:13 ***/


#include "ngspice.h"
#include "const.h"
#include "ifsim.h"
#include "hicum0defs.h"
#include "sperror.h"
#include "suffix.h"

int hicum0mParam(int param, IFvalue *value, GENmodel *inMod)
{
  hicum0model *mod = (hicum0model*)inMod;
  switch (param) {
  case  hicum0_model_is  :
    mod->is = value->rValue;
    mod->is_Given = TRUE;
    break;
  case  hicum0_model_mcf  :
    mod->mcf = value->rValue;
    mod->mcf_Given = TRUE;
    break;
  case  hicum0_model_mcr  :
    mod->mcr = value->rValue;
    mod->mcr_Given = TRUE;
    break;
  case  hicum0_model_vef  :
    mod->vef = value->rValue;
    mod->vef_Given = TRUE;
    break;
  case  hicum0_model_iqf  :
    mod->iqf = value->rValue;
    mod->iqf_Given = TRUE;
    break;
  case  hicum0_model_iqr  :
    mod->iqr = value->rValue;
    mod->iqr_Given = TRUE;
    break;
  case  hicum0_model_iqfh  :
    mod->iqfh = value->rValue;
    mod->iqfh_Given = TRUE;
    break;
  case  hicum0_model_tfh  :
    mod->tfh = value->rValue;
    mod->tfh_Given = TRUE;
    break;
  case  hicum0_model_ibes  :
    mod->ibes = value->rValue;
    mod->ibes_Given = TRUE;
    break;
  case  hicum0_model_mbe  :
    mod->mbe = value->rValue;
    mod->mbe_Given = TRUE;
    break;
  case  hicum0_model_ires  :
    mod->ires = value->rValue;
    mod->ires_Given = TRUE;
    break;
  case  hicum0_model_mre  :
    mod->mre = value->rValue;
    mod->mre_Given = TRUE;
    break;
  case  hicum0_model_ibcs  :
    mod->ibcs = value->rValue;
    mod->ibcs_Given = TRUE;
    break;
  case  hicum0_model_mbc  :
    mod->mbc = value->rValue;
    mod->mbc_Given = TRUE;
    break;
  case  hicum0_model_cje0  :
    mod->cje0 = value->rValue;
    mod->cje0_Given = TRUE;
    break;
  case  hicum0_model_vde  :
    mod->vde = value->rValue;
    mod->vde_Given = TRUE;
    break;
  case  hicum0_model_ze  :
    mod->ze = value->rValue;
    mod->ze_Given = TRUE;
    break;
  case  hicum0_model_aje  :
    mod->aje = value->rValue;
    mod->aje_Given = TRUE;
    break;
  case  hicum0_model_t0  :
    mod->t0 = value->rValue;
    mod->t0_Given = TRUE;
    break;
  case  hicum0_model_dt0h  :
    mod->dt0h = value->rValue;
    mod->dt0h_Given = TRUE;
    break;
  case  hicum0_model_tbvl  :
    mod->tbvl = value->rValue;
    mod->tbvl_Given = TRUE;
    break;
  case  hicum0_model_tef0  :
    mod->tef0 = value->rValue;
    mod->tef0_Given = TRUE;
    break;
  case  hicum0_model_gte  :
    mod->gte = value->rValue;
    mod->gte_Given = TRUE;
    break;
  case  hicum0_model_thcs  :
    mod->thcs = value->rValue;
    mod->thcs_Given = TRUE;
    break;
  case  hicum0_model_ahc  :
    mod->ahc = value->rValue;
    mod->ahc_Given = TRUE;
    break;
  case  hicum0_model_tr  :
    mod->tr = value->rValue;
    mod->tr_Given = TRUE;
    break;
  case  hicum0_model_rci0  :
    mod->rci0 = value->rValue;
    mod->rci0_Given = TRUE;
    break;
  case  hicum0_model_vlim  :
    mod->vlim = value->rValue;
    mod->vlim_Given = TRUE;
    break;
  case  hicum0_model_vpt  :
    mod->vpt = value->rValue;
    mod->vpt_Given = TRUE;
    break;
  case  hicum0_model_vces  :
    mod->vces = value->rValue;
    mod->vces_Given = TRUE;
    break;
  case  hicum0_model_cjci0  :
    mod->cjci0 = value->rValue;
    mod->cjci0_Given = TRUE;
    break;
  case  hicum0_model_vdci  :
    mod->vdci = value->rValue;
    mod->vdci_Given = TRUE;
    break;
  case  hicum0_model_zci  :
    mod->zci = value->rValue;
    mod->zci_Given = TRUE;
    break;
  case  hicum0_model_vptci  :
    mod->vptci = value->rValue;
    mod->vptci_Given = TRUE;
    break;
  case  hicum0_model_cjcx0  :
    mod->cjcx0 = value->rValue;
    mod->cjcx0_Given = TRUE;
    break;
  case  hicum0_model_vdcx  :
    mod->vdcx = value->rValue;
    mod->vdcx_Given = TRUE;
    break;
  case  hicum0_model_zcx  :
    mod->zcx = value->rValue;
    mod->zcx_Given = TRUE;
    break;
  case  hicum0_model_vptcx  :
    mod->vptcx = value->rValue;
    mod->vptcx_Given = TRUE;
    break;
  case  hicum0_model_fbc  :
    mod->fbc = value->rValue;
    mod->fbc_Given = TRUE;
    break;
  case  hicum0_model_rbi0  :
    mod->rbi0 = value->rValue;
    mod->rbi0_Given = TRUE;
    break;
  case  hicum0_model_vr0e  :
    mod->vr0e = value->rValue;
    mod->vr0e_Given = TRUE;
    break;
  case  hicum0_model_vr0c  :
    mod->vr0c = value->rValue;
    mod->vr0c_Given = TRUE;
    break;
  case  hicum0_model_fgeo  :
    mod->fgeo = value->rValue;
    mod->fgeo_Given = TRUE;
    break;
  case  hicum0_model_rbx  :
    mod->rbx = value->rValue;
    mod->rbx_Given = TRUE;
    break;
  case  hicum0_model_rcx  :
    mod->rcx = value->rValue;
    mod->rcx_Given = TRUE;
    break;
  case  hicum0_model_re  :
    mod->re = value->rValue;
    mod->re_Given = TRUE;
    break;
  case  hicum0_model_itss  :
    mod->itss = value->rValue;
    mod->itss_Given = TRUE;
    break;
  case  hicum0_model_msf  :
    mod->msf = value->rValue;
    mod->msf_Given = TRUE;
    break;
  case  hicum0_model_iscs  :
    mod->iscs = value->rValue;
    mod->iscs_Given = TRUE;
    break;
  case  hicum0_model_msc  :
    mod->msc = value->rValue;
    mod->msc_Given = TRUE;
    break;
  case  hicum0_model_cjs0  :
    mod->cjs0 = value->rValue;
    mod->cjs0_Given = TRUE;
    break;
  case  hicum0_model_vds  :
    mod->vds = value->rValue;
    mod->vds_Given = TRUE;
    break;
  case  hicum0_model_zs  :
    mod->zs = value->rValue;
    mod->zs_Given = TRUE;
    break;
  case  hicum0_model_vpts  :
    mod->vpts = value->rValue;
    mod->vpts_Given = TRUE;
    break;
  case  hicum0_model_cbcpar  :
    mod->cbcpar = value->rValue;
    mod->cbcpar_Given = TRUE;
    break;
  case  hicum0_model_cbepar  :
    mod->cbepar = value->rValue;
    mod->cbepar_Given = TRUE;
    break;
  case  hicum0_model_eavl  :
    mod->eavl = value->rValue;
    mod->eavl_Given = TRUE;
    break;
  case  hicum0_model_kavl  :
    mod->kavl = value->rValue;
    mod->kavl_Given = TRUE;
    break;
  case  hicum0_model_kf  :
    mod->kf = value->rValue;
    mod->kf_Given = TRUE;
    break;
  case  hicum0_model_af  :
    mod->af = value->rValue;
    mod->af_Given = TRUE;
    break;
  case  hicum0_model_vgb  :
    mod->vgb = value->rValue;
    mod->vgb_Given = TRUE;
    break;
  case  hicum0_model_vge  :
    mod->vge = value->rValue;
    mod->vge_Given = TRUE;
    break;
  case  hicum0_model_vgc  :
    mod->vgc = value->rValue;
    mod->vgc_Given = TRUE;
    break;
  case  hicum0_model_vgs  :
    mod->vgs = value->rValue;
    mod->vgs_Given = TRUE;
    break;
  case  hicum0_model_f1vg  :
    mod->f1vg = value->rValue;
    mod->f1vg_Given = TRUE;
    break;
  case  hicum0_model_f2vg  :
    mod->f2vg = value->rValue;
    mod->f2vg_Given = TRUE;
    break;
  case  hicum0_model_alt0  :
    mod->alt0 = value->rValue;
    mod->alt0_Given = TRUE;
    break;
  case  hicum0_model_kt0  :
    mod->kt0 = value->rValue;
    mod->kt0_Given = TRUE;
    break;
  case  hicum0_model_zetact  :
    mod->zetact = value->rValue;
    mod->zetact_Given = TRUE;
    break;
  case  hicum0_model_zetabet  :
    mod->zetabet = value->rValue;
    mod->zetabet_Given = TRUE;
    break;
  case  hicum0_model_zetaci  :
    mod->zetaci = value->rValue;
    mod->zetaci_Given = TRUE;
    break;
  case  hicum0_model_alvs  :
    mod->alvs = value->rValue;
    mod->alvs_Given = TRUE;
    break;
  case  hicum0_model_alces  :
    mod->alces = value->rValue;
    mod->alces_Given = TRUE;
    break;
  case  hicum0_model_zetarbi  :
    mod->zetarbi = value->rValue;
    mod->zetarbi_Given = TRUE;
    break;
  case  hicum0_model_zetarbx  :
    mod->zetarbx = value->rValue;
    mod->zetarbx_Given = TRUE;
    break;
  case  hicum0_model_zetarcx  :
    mod->zetarcx = value->rValue;
    mod->zetarcx_Given = TRUE;
    break;
  case  hicum0_model_zetare  :
    mod->zetare = value->rValue;
    mod->zetare_Given = TRUE;
    break;
  case  hicum0_model_alkav  :
    mod->alkav = value->rValue;
    mod->alkav_Given = TRUE;
    break;
  case  hicum0_model_aleav  :
    mod->aleav = value->rValue;
    mod->aleav_Given = TRUE;
    break;
  case  hicum0_model_flsh  :
    mod->flsh = value->iValue;
    mod->flsh_Given = TRUE;
    break;
  case  hicum0_model_rth  :
    mod->rth = value->rValue;
    mod->rth_Given = TRUE;
    break;
  case  hicum0_model_cth  :
    mod->cth = value->rValue;
    mod->cth_Given = TRUE;
    break;
  case  hicum0_model_npn  :
    mod->npn = value->iValue;
    mod->npn_Given = TRUE;
    break;
  case  hicum0_model_pnp  :
    mod->pnp = value->iValue;
    mod->pnp_Given = TRUE;
    break;
  case  hicum0_model_tnom  :
    mod->tnom = value->rValue;
    mod->tnom_Given = TRUE;
    break;

  default:
    return(-1);
  }
  return(OK);
}
