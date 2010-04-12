/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Mon, 12 Apr 2010 19:24:54 ***/

#define NGSPICE_DEBUG_OK


#include "ngspice.h"
#include "cktdefs.h"
#include "psp102defs.h"
#include "const.h"
#include "trandefs.h"
#include "sperror.h"
#include "devdefs.h"
#include "suffix.h"

/*fixme: noise not implemented in ngspice*/
#define ngspice_flickernoise(p,n,mag,freq,info)\
{\
}
#define ngspice_whitenoise(p,n,mag,info)\
{\
}

#define NP(p) *(ckt->CKTrhsOld+here->p ## Node)
#define BP(p,n) (NP(p)-NP(n))
#define DBGNODE(p) printf(#p "=%i - v=%e\n",here->p ## Node,NP(p));
void psp102debug (CKTcircuit *ckt, psp102model *model, psp102instance *here)
{
  fprintf(stdout,"voltage: D=%e\n",NP(D));
  fprintf(stdout,"voltage: G=%e\n",NP(G));
  fprintf(stdout,"voltage: S=%e\n",NP(S));
  fprintf(stdout,"voltage: B=%e\n",NP(B));
  fprintf(stdout,"voltage: NOI=%e\n",NP(NOI));
  fprintf(stdout,"voltage: NOI2=%e\n",NP(NOI2));
  fprintf(stdout,"Parameter: model: pmos=%i\n",model->pmos);
  fprintf(stdout,"Parameter: model: nmos=%i\n",model->nmos);
  fprintf(stdout,"Parameter: model: LEVEL=%e\n",model->LEVEL);
  fprintf(stdout,"Parameter: model: TYPE=%e\n",model->TYPE);
  fprintf(stdout,"Parameter: model: TR=%e\n",model->TR);
  fprintf(stdout,"Parameter: model: SWIGATE=%e\n",model->SWIGATE);
  fprintf(stdout,"Parameter: model: SWIMPACT=%e\n",model->SWIMPACT);
  fprintf(stdout,"Parameter: model: SWGIDL=%e\n",model->SWGIDL);
  fprintf(stdout,"Parameter: model: SWJUNCAP=%e\n",model->SWJUNCAP);
  fprintf(stdout,"Parameter: model: QMC=%e\n",model->QMC);
  fprintf(stdout,"Parameter: model: LVARO=%e\n",model->LVARO);
  fprintf(stdout,"Parameter: model: LVARL=%e\n",model->LVARL);
  fprintf(stdout,"Parameter: model: LVARW=%e\n",model->LVARW);
  fprintf(stdout,"Parameter: model: LAP=%e\n",model->LAP);
  fprintf(stdout,"Parameter: model: WVARO=%e\n",model->WVARO);
  fprintf(stdout,"Parameter: model: WVARL=%e\n",model->WVARL);
  fprintf(stdout,"Parameter: model: WVARW=%e\n",model->WVARW);
  fprintf(stdout,"Parameter: model: WOT=%e\n",model->WOT);
  fprintf(stdout,"Parameter: model: DLQ=%e\n",model->DLQ);
  fprintf(stdout,"Parameter: model: DWQ=%e\n",model->DWQ);
  fprintf(stdout,"Parameter: model: VFBO=%e\n",model->VFBO);
  fprintf(stdout,"Parameter: model: VFBL=%e\n",model->VFBL);
  fprintf(stdout,"Parameter: model: VFBW=%e\n",model->VFBW);
  fprintf(stdout,"Parameter: model: VFBLW=%e\n",model->VFBLW);
  fprintf(stdout,"Parameter: model: STVFBO=%e\n",model->STVFBO);
  fprintf(stdout,"Parameter: model: STVFBL=%e\n",model->STVFBL);
  fprintf(stdout,"Parameter: model: STVFBW=%e\n",model->STVFBW);
  fprintf(stdout,"Parameter: model: STVFBLW=%e\n",model->STVFBLW);
  fprintf(stdout,"Parameter: model: TOXO=%e\n",model->TOXO);
  fprintf(stdout,"Parameter: model: NSUBO=%e\n",model->NSUBO);
  fprintf(stdout,"Parameter: model: NSUBW=%e\n",model->NSUBW);
  fprintf(stdout,"Parameter: model: WSEG=%e\n",model->WSEG);
  fprintf(stdout,"Parameter: model: NPCK=%e\n",model->NPCK);
  fprintf(stdout,"Parameter: model: NPCKW=%e\n",model->NPCKW);
  fprintf(stdout,"Parameter: model: WSEGP=%e\n",model->WSEGP);
  fprintf(stdout,"Parameter: model: LPCK=%e\n",model->LPCK);
  fprintf(stdout,"Parameter: model: LPCKW=%e\n",model->LPCKW);
  fprintf(stdout,"Parameter: model: FOL1=%e\n",model->FOL1);
  fprintf(stdout,"Parameter: model: FOL2=%e\n",model->FOL2);
  fprintf(stdout,"Parameter: model: VNSUBO=%e\n",model->VNSUBO);
  fprintf(stdout,"Parameter: model: NSLPO=%e\n",model->NSLPO);
  fprintf(stdout,"Parameter: model: DNSUBO=%e\n",model->DNSUBO);
  fprintf(stdout,"Parameter: model: DPHIBO=%e\n",model->DPHIBO);
  fprintf(stdout,"Parameter: model: DPHIBL=%e\n",model->DPHIBL);
  fprintf(stdout,"Parameter: model: DPHIBLEXP=%e\n",model->DPHIBLEXP);
  fprintf(stdout,"Parameter: model: DPHIBW=%e\n",model->DPHIBW);
  fprintf(stdout,"Parameter: model: DPHIBLW=%e\n",model->DPHIBLW);
  fprintf(stdout,"Parameter: model: NPO=%e\n",model->NPO);
  fprintf(stdout,"Parameter: model: NPL=%e\n",model->NPL);
  fprintf(stdout,"Parameter: model: CTO=%e\n",model->CTO);
  fprintf(stdout,"Parameter: model: CTL=%e\n",model->CTL);
  fprintf(stdout,"Parameter: model: CTLEXP=%e\n",model->CTLEXP);
  fprintf(stdout,"Parameter: model: CTW=%e\n",model->CTW);
  fprintf(stdout,"Parameter: model: CTLW=%e\n",model->CTLW);
  fprintf(stdout,"Parameter: model: TOXOVO=%e\n",model->TOXOVO);
  fprintf(stdout,"Parameter: model: LOV=%e\n",model->LOV);
  fprintf(stdout,"Parameter: model: NOVO=%e\n",model->NOVO);
  fprintf(stdout,"Parameter: model: CFL=%e\n",model->CFL);
  fprintf(stdout,"Parameter: model: CFLEXP=%e\n",model->CFLEXP);
  fprintf(stdout,"Parameter: model: CFW=%e\n",model->CFW);
  fprintf(stdout,"Parameter: model: CFBO=%e\n",model->CFBO);
  fprintf(stdout,"Parameter: model: UO=%e\n",model->UO);
  fprintf(stdout,"Parameter: model: FBET1=%e\n",model->FBET1);
  fprintf(stdout,"Parameter: model: FBET1W=%e\n",model->FBET1W);
  fprintf(stdout,"Parameter: model: LP1=%e\n",model->LP1);
  fprintf(stdout,"Parameter: model: LP1W=%e\n",model->LP1W);
  fprintf(stdout,"Parameter: model: FBET2=%e\n",model->FBET2);
  fprintf(stdout,"Parameter: model: LP2=%e\n",model->LP2);
  fprintf(stdout,"Parameter: model: BETW1=%e\n",model->BETW1);
  fprintf(stdout,"Parameter: model: BETW2=%e\n",model->BETW2);
  fprintf(stdout,"Parameter: model: WBET=%e\n",model->WBET);
  fprintf(stdout,"Parameter: model: STBETO=%e\n",model->STBETO);
  fprintf(stdout,"Parameter: model: STBETL=%e\n",model->STBETL);
  fprintf(stdout,"Parameter: model: STBETW=%e\n",model->STBETW);
  fprintf(stdout,"Parameter: model: STBETLW=%e\n",model->STBETLW);
  fprintf(stdout,"Parameter: model: MUEO=%e\n",model->MUEO);
  fprintf(stdout,"Parameter: model: MUEW=%e\n",model->MUEW);
  fprintf(stdout,"Parameter: model: STMUEO=%e\n",model->STMUEO);
  fprintf(stdout,"Parameter: model: THEMUO=%e\n",model->THEMUO);
  fprintf(stdout,"Parameter: model: STTHEMUO=%e\n",model->STTHEMUO);
  fprintf(stdout,"Parameter: model: CSO=%e\n",model->CSO);
  fprintf(stdout,"Parameter: model: CSL=%e\n",model->CSL);
  fprintf(stdout,"Parameter: model: CSLEXP=%e\n",model->CSLEXP);
  fprintf(stdout,"Parameter: model: CSW=%e\n",model->CSW);
  fprintf(stdout,"Parameter: model: CSLW=%e\n",model->CSLW);
  fprintf(stdout,"Parameter: model: STCSO=%e\n",model->STCSO);
  fprintf(stdout,"Parameter: model: XCORO=%e\n",model->XCORO);
  fprintf(stdout,"Parameter: model: XCORL=%e\n",model->XCORL);
  fprintf(stdout,"Parameter: model: XCORW=%e\n",model->XCORW);
  fprintf(stdout,"Parameter: model: XCORLW=%e\n",model->XCORLW);
  fprintf(stdout,"Parameter: model: STXCORO=%e\n",model->STXCORO);
  fprintf(stdout,"Parameter: model: FETAO=%e\n",model->FETAO);
  fprintf(stdout,"Parameter: model: RSW1=%e\n",model->RSW1);
  fprintf(stdout,"Parameter: model: RSW2=%e\n",model->RSW2);
  fprintf(stdout,"Parameter: model: STRSO=%e\n",model->STRSO);
  fprintf(stdout,"Parameter: model: RSBO=%e\n",model->RSBO);
  fprintf(stdout,"Parameter: model: RSGO=%e\n",model->RSGO);
  fprintf(stdout,"Parameter: model: THESATO=%e\n",model->THESATO);
  fprintf(stdout,"Parameter: model: THESATL=%e\n",model->THESATL);
  fprintf(stdout,"Parameter: model: THESATLEXP=%e\n",model->THESATLEXP);
  fprintf(stdout,"Parameter: model: THESATW=%e\n",model->THESATW);
  fprintf(stdout,"Parameter: model: THESATLW=%e\n",model->THESATLW);
  fprintf(stdout,"Parameter: model: STTHESATO=%e\n",model->STTHESATO);
  fprintf(stdout,"Parameter: model: STTHESATL=%e\n",model->STTHESATL);
  fprintf(stdout,"Parameter: model: STTHESATW=%e\n",model->STTHESATW);
  fprintf(stdout,"Parameter: model: STTHESATLW=%e\n",model->STTHESATLW);
  fprintf(stdout,"Parameter: model: THESATBO=%e\n",model->THESATBO);
  fprintf(stdout,"Parameter: model: THESATGO=%e\n",model->THESATGO);
  fprintf(stdout,"Parameter: model: AXO=%e\n",model->AXO);
  fprintf(stdout,"Parameter: model: AXL=%e\n",model->AXL);
  fprintf(stdout,"Parameter: model: ALPL=%e\n",model->ALPL);
  fprintf(stdout,"Parameter: model: ALPLEXP=%e\n",model->ALPLEXP);
  fprintf(stdout,"Parameter: model: ALPW=%e\n",model->ALPW);
  fprintf(stdout,"Parameter: model: ALP1L1=%e\n",model->ALP1L1);
  fprintf(stdout,"Parameter: model: ALP1LEXP=%e\n",model->ALP1LEXP);
  fprintf(stdout,"Parameter: model: ALP1L2=%e\n",model->ALP1L2);
  fprintf(stdout,"Parameter: model: ALP1W=%e\n",model->ALP1W);
  fprintf(stdout,"Parameter: model: ALP2L1=%e\n",model->ALP2L1);
  fprintf(stdout,"Parameter: model: ALP2LEXP=%e\n",model->ALP2LEXP);
  fprintf(stdout,"Parameter: model: ALP2L2=%e\n",model->ALP2L2);
  fprintf(stdout,"Parameter: model: ALP2W=%e\n",model->ALP2W);
  fprintf(stdout,"Parameter: model: VPO=%e\n",model->VPO);
  fprintf(stdout,"Parameter: model: A1O=%e\n",model->A1O);
  fprintf(stdout,"Parameter: model: A1L=%e\n",model->A1L);
  fprintf(stdout,"Parameter: model: A1W=%e\n",model->A1W);
  fprintf(stdout,"Parameter: model: A2O=%e\n",model->A2O);
  fprintf(stdout,"Parameter: model: STA2O=%e\n",model->STA2O);
  fprintf(stdout,"Parameter: model: A3O=%e\n",model->A3O);
  fprintf(stdout,"Parameter: model: A3L=%e\n",model->A3L);
  fprintf(stdout,"Parameter: model: A3W=%e\n",model->A3W);
  fprintf(stdout,"Parameter: model: A4O=%e\n",model->A4O);
  fprintf(stdout,"Parameter: model: A4L=%e\n",model->A4L);
  fprintf(stdout,"Parameter: model: A4W=%e\n",model->A4W);
  fprintf(stdout,"Parameter: model: GCOO=%e\n",model->GCOO);
  fprintf(stdout,"Parameter: model: IGINVLW=%e\n",model->IGINVLW);
  fprintf(stdout,"Parameter: model: IGOVW=%e\n",model->IGOVW);
  fprintf(stdout,"Parameter: model: STIGO=%e\n",model->STIGO);
  fprintf(stdout,"Parameter: model: GC2O=%e\n",model->GC2O);
  fprintf(stdout,"Parameter: model: GC3O=%e\n",model->GC3O);
  fprintf(stdout,"Parameter: model: CHIBO=%e\n",model->CHIBO);
  fprintf(stdout,"Parameter: model: AGIDLW=%e\n",model->AGIDLW);
  fprintf(stdout,"Parameter: model: BGIDLO=%e\n",model->BGIDLO);
  fprintf(stdout,"Parameter: model: STBGIDLO=%e\n",model->STBGIDLO);
  fprintf(stdout,"Parameter: model: CGIDLO=%e\n",model->CGIDLO);
  fprintf(stdout,"Parameter: model: CGBOVL=%e\n",model->CGBOVL);
  fprintf(stdout,"Parameter: model: CFRW=%e\n",model->CFRW);
  fprintf(stdout,"Parameter: model: FNTO=%e\n",model->FNTO);
  fprintf(stdout,"Parameter: model: NFALW=%e\n",model->NFALW);
  fprintf(stdout,"Parameter: model: NFBLW=%e\n",model->NFBLW);
  fprintf(stdout,"Parameter: model: NFCLW=%e\n",model->NFCLW);
  fprintf(stdout,"Parameter: model: DTA=%e\n",model->DTA);
  fprintf(stdout,"Parameter: model: SAREF=%e\n",model->SAREF);
  fprintf(stdout,"Parameter: model: SBREF=%e\n",model->SBREF);
  fprintf(stdout,"Parameter: model: WLOD=%e\n",model->WLOD);
  fprintf(stdout,"Parameter: model: KUO=%e\n",model->KUO);
  fprintf(stdout,"Parameter: model: KVSAT=%e\n",model->KVSAT);
  fprintf(stdout,"Parameter: model: TKUO=%e\n",model->TKUO);
  fprintf(stdout,"Parameter: model: LKUO=%e\n",model->LKUO);
  fprintf(stdout,"Parameter: model: WKUO=%e\n",model->WKUO);
  fprintf(stdout,"Parameter: model: PKUO=%e\n",model->PKUO);
  fprintf(stdout,"Parameter: model: LLODKUO=%e\n",model->LLODKUO);
  fprintf(stdout,"Parameter: model: WLODKUO=%e\n",model->WLODKUO);
  fprintf(stdout,"Parameter: model: KVTHO=%e\n",model->KVTHO);
  fprintf(stdout,"Parameter: model: LKVTHO=%e\n",model->LKVTHO);
  fprintf(stdout,"Parameter: model: WKVTHO=%e\n",model->WKVTHO);
  fprintf(stdout,"Parameter: model: PKVTHO=%e\n",model->PKVTHO);
  fprintf(stdout,"Parameter: model: LLODVTH=%e\n",model->LLODVTH);
  fprintf(stdout,"Parameter: model: WLODVTH=%e\n",model->WLODVTH);
  fprintf(stdout,"Parameter: model: STETAO=%e\n",model->STETAO);
  fprintf(stdout,"Parameter: model: LODETAO=%e\n",model->LODETAO);
  fprintf(stdout,"Parameter: model: TRJ=%e\n",model->TRJ);
  fprintf(stdout,"Parameter: model: IMAX=%e\n",model->IMAX);
  fprintf(stdout,"Parameter: model: CJORBOT=%e\n",model->CJORBOT);
  fprintf(stdout,"Parameter: model: CJORSTI=%e\n",model->CJORSTI);
  fprintf(stdout,"Parameter: model: CJORGAT=%e\n",model->CJORGAT);
  fprintf(stdout,"Parameter: model: VBIRBOT=%e\n",model->VBIRBOT);
  fprintf(stdout,"Parameter: model: VBIRSTI=%e\n",model->VBIRSTI);
  fprintf(stdout,"Parameter: model: VBIRGAT=%e\n",model->VBIRGAT);
  fprintf(stdout,"Parameter: model: PBOT=%e\n",model->PBOT);
  fprintf(stdout,"Parameter: model: PSTI=%e\n",model->PSTI);
  fprintf(stdout,"Parameter: model: PGAT=%e\n",model->PGAT);
  fprintf(stdout,"Parameter: model: PHIGBOT=%e\n",model->PHIGBOT);
  fprintf(stdout,"Parameter: model: PHIGSTI=%e\n",model->PHIGSTI);
  fprintf(stdout,"Parameter: model: PHIGGAT=%e\n",model->PHIGGAT);
  fprintf(stdout,"Parameter: model: IDSATRBOT=%e\n",model->IDSATRBOT);
  fprintf(stdout,"Parameter: model: IDSATRSTI=%e\n",model->IDSATRSTI);
  fprintf(stdout,"Parameter: model: IDSATRGAT=%e\n",model->IDSATRGAT);
  fprintf(stdout,"Parameter: model: CSRHBOT=%e\n",model->CSRHBOT);
  fprintf(stdout,"Parameter: model: CSRHSTI=%e\n",model->CSRHSTI);
  fprintf(stdout,"Parameter: model: CSRHGAT=%e\n",model->CSRHGAT);
  fprintf(stdout,"Parameter: model: XJUNSTI=%e\n",model->XJUNSTI);
  fprintf(stdout,"Parameter: model: XJUNGAT=%e\n",model->XJUNGAT);
  fprintf(stdout,"Parameter: model: CTATBOT=%e\n",model->CTATBOT);
  fprintf(stdout,"Parameter: model: CTATSTI=%e\n",model->CTATSTI);
  fprintf(stdout,"Parameter: model: CTATGAT=%e\n",model->CTATGAT);
  fprintf(stdout,"Parameter: model: MEFFTATBOT=%e\n",model->MEFFTATBOT);
  fprintf(stdout,"Parameter: model: MEFFTATSTI=%e\n",model->MEFFTATSTI);
  fprintf(stdout,"Parameter: model: MEFFTATGAT=%e\n",model->MEFFTATGAT);
  fprintf(stdout,"Parameter: model: CBBTBOT=%e\n",model->CBBTBOT);
  fprintf(stdout,"Parameter: model: CBBTSTI=%e\n",model->CBBTSTI);
  fprintf(stdout,"Parameter: model: CBBTGAT=%e\n",model->CBBTGAT);
  fprintf(stdout,"Parameter: model: FBBTRBOT=%e\n",model->FBBTRBOT);
  fprintf(stdout,"Parameter: model: FBBTRSTI=%e\n",model->FBBTRSTI);
  fprintf(stdout,"Parameter: model: FBBTRGAT=%e\n",model->FBBTRGAT);
  fprintf(stdout,"Parameter: model: STFBBTBOT=%e\n",model->STFBBTBOT);
  fprintf(stdout,"Parameter: model: STFBBTSTI=%e\n",model->STFBBTSTI);
  fprintf(stdout,"Parameter: model: STFBBTGAT=%e\n",model->STFBBTGAT);
  fprintf(stdout,"Parameter: model: VBRBOT=%e\n",model->VBRBOT);
  fprintf(stdout,"Parameter: model: VBRSTI=%e\n",model->VBRSTI);
  fprintf(stdout,"Parameter: model: VBRGAT=%e\n",model->VBRGAT);
  fprintf(stdout,"Parameter: model: PBRBOT=%e\n",model->PBRBOT);
  fprintf(stdout,"Parameter: model: PBRSTI=%e\n",model->PBRSTI);
  fprintf(stdout,"Parameter: model: PBRGAT=%e\n",model->PBRGAT);
  fprintf(stdout,"Parameter: instance: L=%e\n",here->L);
  fprintf(stdout,"Parameter: instance: W=%e\n",here->W);
  fprintf(stdout,"Parameter: instance: SA=%e\n",here->SA);
  fprintf(stdout,"Parameter: instance: SB=%e\n",here->SB);
  fprintf(stdout,"Parameter: instance: ABSOURCE=%e\n",here->ABSOURCE);
  fprintf(stdout,"Parameter: instance: LSSOURCE=%e\n",here->LSSOURCE);
  fprintf(stdout,"Parameter: instance: LGSOURCE=%e\n",here->LGSOURCE);
  fprintf(stdout,"Parameter: instance: ABDRAIN=%e\n",here->ABDRAIN);
  fprintf(stdout,"Parameter: instance: LSDRAIN=%e\n",here->LSDRAIN);
  fprintf(stdout,"Parameter: instance: LGDRAIN=%e\n",here->LGDRAIN);
  fprintf(stdout,"Parameter: instance: AS=%e\n",here->AS);
  fprintf(stdout,"Parameter: instance: PS=%e\n",here->PS);
  fprintf(stdout,"Parameter: instance: AD=%e\n",here->AD);
  fprintf(stdout,"Parameter: instance: PD=%e\n",here->PD);
  fprintf(stdout,"Parameter: instance: MULT=%e\n",here->MULT);
  fprintf(stdout,"model: NSUBO_i=%e\n",model->NSUBO_i);
  fprintf(stdout,"model: WSEG_i=%e\n",model->WSEG_i);
  fprintf(stdout,"model: NPCK_i=%e\n",model->NPCK_i);
  fprintf(stdout,"model: WSEGP_i=%e\n",model->WSEGP_i);
  fprintf(stdout,"model: LPCK_i=%e\n",model->LPCK_i);
  fprintf(stdout,"model: LOV_i=%e\n",model->LOV_i);
  fprintf(stdout,"model: LP1_i=%e\n",model->LP1_i);
  fprintf(stdout,"model: LP2_i=%e\n",model->LP2_i);
  fprintf(stdout,"model: WBET_i=%e\n",model->WBET_i);
  fprintf(stdout,"model: AXL_i=%e\n",model->AXL_i);
  fprintf(stdout,"model: ALP1L2_i=%e\n",model->ALP1L2_i);
  fprintf(stdout,"model: ALP2L2_i=%e\n",model->ALP2L2_i);
  fprintf(stdout,"model: KVSAT_i=%e\n",model->KVSAT_i);
  fprintf(stdout,"model: LLODKUO_i=%e\n",model->LLODKUO_i);
  fprintf(stdout,"model: WLODKUO_i=%e\n",model->WLODKUO_i);
  fprintf(stdout,"model: LLODVTH_i=%e\n",model->LLODVTH_i);
  fprintf(stdout,"model: WLODVTH_i=%e\n",model->WLODVTH_i);
  fprintf(stdout,"model: LODETAO_i=%e\n",model->LODETAO_i);
  fprintf(stdout,"model: TOX_i=%e\n",model->TOX_i);
  fprintf(stdout,"model: TOXOV_i=%e\n",model->TOXOV_i);
  fprintf(stdout,"model: TKD=%e\n",model->TKD);
  fprintf(stdout,"model: dT=%e\n",model->dT);
  fprintf(stdout,"model: rT=%e\n",model->rT);
  fprintf(stdout,"model: rTn=%e\n",model->rTn);
  fprintf(stdout,"model: phit=%e\n",model->phit);
  fprintf(stdout,"model: inv_phit=%e\n",model->inv_phit);
  fprintf(stdout,"model: Eg=%e\n",model->Eg);
  fprintf(stdout,"model: phibFac=%e\n",model->phibFac);
  fprintf(stdout,"model: CHNL_TYPE=%i\n",model->CHNL_TYPE);
  fprintf(stdout,"model: IMAX_i=%e\n",model->IMAX_i);
  fprintf(stdout,"model: VBIRBOT_i=%e\n",model->VBIRBOT_i);
  fprintf(stdout,"model: VBIRSTI_i=%e\n",model->VBIRSTI_i);
  fprintf(stdout,"model: VBIRGAT_i=%e\n",model->VBIRGAT_i);
  fprintf(stdout,"model: PBOT_i=%e\n",model->PBOT_i);
  fprintf(stdout,"model: PSTI_i=%e\n",model->PSTI_i);
  fprintf(stdout,"model: PGAT_i=%e\n",model->PGAT_i);
  fprintf(stdout,"model: CSRHBOT_i=%e\n",model->CSRHBOT_i);
  fprintf(stdout,"model: CSRHSTI_i=%e\n",model->CSRHSTI_i);
  fprintf(stdout,"model: CSRHGAT_i=%e\n",model->CSRHGAT_i);
  fprintf(stdout,"model: CTATBOT_i=%e\n",model->CTATBOT_i);
  fprintf(stdout,"model: CTATSTI_i=%e\n",model->CTATSTI_i);
  fprintf(stdout,"model: CTATGAT_i=%e\n",model->CTATGAT_i);
  fprintf(stdout,"model: CBBTBOT_i=%e\n",model->CBBTBOT_i);
  fprintf(stdout,"model: CBBTSTI_i=%e\n",model->CBBTSTI_i);
  fprintf(stdout,"model: CBBTGAT_i=%e\n",model->CBBTGAT_i);
  fprintf(stdout,"model: VBRBOT_i=%e\n",model->VBRBOT_i);
  fprintf(stdout,"model: VBRSTI_i=%e\n",model->VBRSTI_i);
  fprintf(stdout,"model: VBRGAT_i=%e\n",model->VBRGAT_i);
  fprintf(stdout,"model: PBRBOT_i=%e\n",model->PBRBOT_i);
  fprintf(stdout,"model: PBRSTI_i=%e\n",model->PBRSTI_i);
  fprintf(stdout,"model: PBRGAT_i=%e\n",model->PBRGAT_i);
  fprintf(stdout,"model: phitr=%e\n",model->phitr);
  fprintf(stdout,"model: phitd=%e\n",model->phitd);
  fprintf(stdout,"model: phitdinv=%e\n",model->phitdinv);
  fprintf(stdout,"model: ftdbot=%e\n",model->ftdbot);
  fprintf(stdout,"model: ftdsti=%e\n",model->ftdsti);
  fprintf(stdout,"model: ftdgat=%e\n",model->ftdgat);
  fprintf(stdout,"model: idsatbot=%e\n",model->idsatbot);
  fprintf(stdout,"model: idsatsti=%e\n",model->idsatsti);
  fprintf(stdout,"model: idsatgat=%e\n",model->idsatgat);
  fprintf(stdout,"model: vbibot=%e\n",model->vbibot);
  fprintf(stdout,"model: vbisti=%e\n",model->vbisti);
  fprintf(stdout,"model: vbigat=%e\n",model->vbigat);
  fprintf(stdout,"model: vbiinvbot=%e\n",model->vbiinvbot);
  fprintf(stdout,"model: vbiinvsti=%e\n",model->vbiinvsti);
  fprintf(stdout,"model: vbiinvgat=%e\n",model->vbiinvgat);
  fprintf(stdout,"model: one_minus_PBOT=%e\n",model->one_minus_PBOT);
  fprintf(stdout,"model: one_minus_PSTI=%e\n",model->one_minus_PSTI);
  fprintf(stdout,"model: one_minus_PGAT=%e\n",model->one_minus_PGAT);
  fprintf(stdout,"model: one_over_one_minus_PBOT=%e\n",model->one_over_one_minus_PBOT);
  fprintf(stdout,"model: one_over_one_minus_PSTI=%e\n",model->one_over_one_minus_PSTI);
  fprintf(stdout,"model: one_over_one_minus_PGAT=%e\n",model->one_over_one_minus_PGAT);
  fprintf(stdout,"model: qprefbot=%e\n",model->qprefbot);
  fprintf(stdout,"model: qprefsti=%e\n",model->qprefsti);
  fprintf(stdout,"model: qprefgat=%e\n",model->qprefgat);
  fprintf(stdout,"model: qpref2bot=%e\n",model->qpref2bot);
  fprintf(stdout,"model: qpref2sti=%e\n",model->qpref2sti);
  fprintf(stdout,"model: qpref2gat=%e\n",model->qpref2gat);
  fprintf(stdout,"model: wdepnulrbot=%e\n",model->wdepnulrbot);
  fprintf(stdout,"model: wdepnulrsti=%e\n",model->wdepnulrsti);
  fprintf(stdout,"model: wdepnulrgat=%e\n",model->wdepnulrgat);
  fprintf(stdout,"model: wdepnulrinvbot=%e\n",model->wdepnulrinvbot);
  fprintf(stdout,"model: wdepnulrinvsti=%e\n",model->wdepnulrinvsti);
  fprintf(stdout,"model: wdepnulrinvgat=%e\n",model->wdepnulrinvgat);
  fprintf(stdout,"model: VBIRBOTinv=%e\n",model->VBIRBOTinv);
  fprintf(stdout,"model: VBIRSTIinv=%e\n",model->VBIRSTIinv);
  fprintf(stdout,"model: VBIRGATinv=%e\n",model->VBIRGATinv);
  fprintf(stdout,"model: perfc=%e\n",model->perfc);
  fprintf(stdout,"model: berfc=%e\n",model->berfc);
  fprintf(stdout,"model: cerfc=%e\n",model->cerfc);
  fprintf(stdout,"model: atatbot=%e\n",model->atatbot);
  fprintf(stdout,"model: atatsti=%e\n",model->atatsti);
  fprintf(stdout,"model: atatgat=%e\n",model->atatgat);
  fprintf(stdout,"model: btatpartbot=%e\n",model->btatpartbot);
  fprintf(stdout,"model: btatpartsti=%e\n",model->btatpartsti);
  fprintf(stdout,"model: btatpartgat=%e\n",model->btatpartgat);
  fprintf(stdout,"model: fbbtbot=%e\n",model->fbbtbot);
  fprintf(stdout,"model: fbbtsti=%e\n",model->fbbtsti);
  fprintf(stdout,"model: fbbtgat=%e\n",model->fbbtgat);
  fprintf(stdout,"model: fstopbot=%e\n",model->fstopbot);
  fprintf(stdout,"model: fstopsti=%e\n",model->fstopsti);
  fprintf(stdout,"model: fstopgat=%e\n",model->fstopgat);
  fprintf(stdout,"model: VBRinvbot=%e\n",model->VBRinvbot);
  fprintf(stdout,"model: VBRinvsti=%e\n",model->VBRinvsti);
  fprintf(stdout,"model: VBRinvgat=%e\n",model->VBRinvgat);
  fprintf(stdout,"model: slopebot=%e\n",model->slopebot);
  fprintf(stdout,"model: slopesti=%e\n",model->slopesti);
  fprintf(stdout,"model: slopegat=%e\n",model->slopegat);
  fprintf(stdout,"instance: LE_LE=%e\n",here->LE_LE);
  fprintf(stdout,"instance: WE=%e\n",here->WE);
  fprintf(stdout,"instance: VFB_i=%e\n",here->VFB_i);
  fprintf(stdout,"instance: VNSUB_i=%e\n",here->VNSUB_i);
  fprintf(stdout,"instance: NSLP_i=%e\n",here->NSLP_i);
  fprintf(stdout,"instance: DNSUB_i=%e\n",here->DNSUB_i);
  fprintf(stdout,"instance: CF_i=%e\n",here->CF_i);
  fprintf(stdout,"instance: CFB_i=%e\n",here->CFB_i);
  fprintf(stdout,"instance: BET_i=%e\n",here->BET_i);
  fprintf(stdout,"instance: MUE_i=%e\n",here->MUE_i);
  fprintf(stdout,"instance: THEMU_i=%e\n",here->THEMU_i);
  fprintf(stdout,"instance: CS_i=%e\n",here->CS_i);
  fprintf(stdout,"instance: XCOR_i=%e\n",here->XCOR_i);
  fprintf(stdout,"instance: THER_i=%e\n",here->THER_i);
  fprintf(stdout,"instance: RSB_i=%e\n",here->RSB_i);
  fprintf(stdout,"instance: RSG_i=%e\n",here->RSG_i);
  fprintf(stdout,"instance: THESAT_i=%e\n",here->THESAT_i);
  fprintf(stdout,"instance: THESATB_i=%e\n",here->THESATB_i);
  fprintf(stdout,"instance: THESATG_i=%e\n",here->THESATG_i);
  fprintf(stdout,"instance: AX_i=%e\n",here->AX_i);
  fprintf(stdout,"instance: ALP_i=%e\n",here->ALP_i);
  fprintf(stdout,"instance: ALP1_i=%e\n",here->ALP1_i);
  fprintf(stdout,"instance: ALP2_i=%e\n",here->ALP2_i);
  fprintf(stdout,"instance: A1_i=%e\n",here->A1_i);
  fprintf(stdout,"instance: A2_i=%e\n",here->A2_i);
  fprintf(stdout,"instance: A3_i=%e\n",here->A3_i);
  fprintf(stdout,"instance: A4_i=%e\n",here->A4_i);
  fprintf(stdout,"instance: IGINV_i=%e\n",here->IGINV_i);
  fprintf(stdout,"instance: IGOV_i=%e\n",here->IGOV_i);
  fprintf(stdout,"instance: GC2_i=%e\n",here->GC2_i);
  fprintf(stdout,"instance: GC3_i=%e\n",here->GC3_i);
  fprintf(stdout,"instance: CHIB_i=%e\n",here->CHIB_i);
  fprintf(stdout,"instance: AGIDL_i=%e\n",here->AGIDL_i);
  fprintf(stdout,"instance: BGIDL_i=%e\n",here->BGIDL_i);
  fprintf(stdout,"instance: CGIDL_i=%e\n",here->CGIDL_i);
  fprintf(stdout,"instance: COX_i=%e\n",here->COX_i);
  fprintf(stdout,"instance: CGOV_i=%e\n",here->CGOV_i);
  fprintf(stdout,"instance: CGBOV_i=%e\n",here->CGBOV_i);
  fprintf(stdout,"instance: CFR_i=%e\n",here->CFR_i);
  fprintf(stdout,"instance: NFA_i=%e\n",here->NFA_i);
  fprintf(stdout,"instance: NFB_i=%e\n",here->NFB_i);
  fprintf(stdout,"instance: NFC_i=%e\n",here->NFC_i);
  fprintf(stdout,"instance: MULT_i=%e\n",here->MULT_i);
  fprintf(stdout,"instance: GOV=%e\n",here->GOV);
  fprintf(stdout,"instance: GOV2=%e\n",here->GOV2);
  fprintf(stdout,"instance: kp=%e\n",here->kp);
  fprintf(stdout,"instance: qq=%e\n",here->qq);
  fprintf(stdout,"instance: qlim2=%e\n",here->qlim2);
  fprintf(stdout,"instance: E_eff0=%e\n",here->E_eff0);
  fprintf(stdout,"instance: eta_mu=%e\n",here->eta_mu);
  fprintf(stdout,"instance: BCH=%e\n",here->BCH);
  fprintf(stdout,"instance: BOV=%e\n",here->BOV);
  fprintf(stdout,"instance: inv_CHIB=%e\n",here->inv_CHIB);
  fprintf(stdout,"instance: GCQ=%e\n",here->GCQ);
  fprintf(stdout,"instance: Dch=%e\n",here->Dch);
  fprintf(stdout,"instance: Dov=%e\n",here->Dov);
  fprintf(stdout,"instance: xi_ov=%e\n",here->xi_ov);
  fprintf(stdout,"instance: inv_xi_ov=%e\n",here->inv_xi_ov);
  fprintf(stdout,"instance: x_mrg_ov=%e\n",here->x_mrg_ov);
  fprintf(stdout,"instance: x1=%e\n",here->x1);
  fprintf(stdout,"instance: inv_xg1=%e\n",here->inv_xg1);
  fprintf(stdout,"instance: Vdsat_lim=%e\n",here->Vdsat_lim);
  fprintf(stdout,"instance: nt=%e\n",here->nt);
  fprintf(stdout,"instance: Cox_over_q=%e\n",here->Cox_over_q);
  fprintf(stdout,"instance: phib=%e\n",here->phib);
  fprintf(stdout,"instance: sqrt_phib=%e\n",here->sqrt_phib);
  fprintf(stdout,"instance: phix=%e\n",here->phix);
  fprintf(stdout,"instance: aphi=%e\n",here->aphi);
  fprintf(stdout,"instance: bphi=%e\n",here->bphi);
  fprintf(stdout,"instance: phix1=%e\n",here->phix1);
  fprintf(stdout,"instance: G_0=%e\n",here->G_0);
  fprintf(stdout,"instance: phit1=%e\n",here->phit1);
  fprintf(stdout,"instance: inv_phit1=%e\n",here->inv_phit1);
  fprintf(stdout,"instance: alpha_b=%e\n",here->alpha_b);
  fprintf(stdout,"instance: inv_VP=%e\n",here->inv_VP);
  fprintf(stdout,"instance: inv_AX=%e\n",here->inv_AX);
  fprintf(stdout,"instance: Sfl_prefac=%e\n",here->Sfl_prefac);
  fprintf(stdout,"instance: vbi_minus_vjsrh=%e\n",here->vbi_minus_vjsrh);
  fprintf(stdout,"instance: wsrh=%e\n",here->wsrh);
  fprintf(stdout,"instance: wdep=%e\n",here->wdep);
  fprintf(stdout,"instance: asrh=%e\n",here->asrh);
  fprintf(stdout,"instance: idmult=%e\n",here->idmult);
  fprintf(stdout,"instance: vj=%e\n",here->vj);
  fprintf(stdout,"instance: zinv=%e\n",here->zinv);
  fprintf(stdout,"instance: vjsrh=%e\n",here->vjsrh);
  fprintf(stdout,"instance: vav=%e\n",here->vav);
  fprintf(stdout,"instance: VMAXS=%e\n",here->VMAXS);
  fprintf(stdout,"instance: VMAXD=%e\n",here->VMAXD);
  fprintf(stdout,"instance: vbimins=%e\n",here->vbimins);
  fprintf(stdout,"instance: vchs=%e\n",here->vchs);
  fprintf(stdout,"instance: vfmins=%e\n",here->vfmins);
  fprintf(stdout,"instance: vbbtlims=%e\n",here->vbbtlims);
  fprintf(stdout,"instance: vbimind=%e\n",here->vbimind);
  fprintf(stdout,"instance: vchd=%e\n",here->vchd);
  fprintf(stdout,"instance: vfmind=%e\n",here->vfmind);
  fprintf(stdout,"instance: vbbtlimd=%e\n",here->vbbtlimd);
  fprintf(stdout,"instance: ABSOURCE_i=%e\n",here->ABSOURCE_i);
  fprintf(stdout,"instance: LSSOURCE_i=%e\n",here->LSSOURCE_i);
  fprintf(stdout,"instance: LGSOURCE_i=%e\n",here->LGSOURCE_i);
  fprintf(stdout,"instance: ABDRAIN_i=%e\n",here->ABDRAIN_i);
  fprintf(stdout,"instance: LSDRAIN_i=%e\n",here->LSDRAIN_i);
  fprintf(stdout,"instance: LGDRAIN_i=%e\n",here->LGDRAIN_i);
}


#define _STATIC
#define _DYNAMIC
#define _DERIVATE

#define _load_static_residual2(p,n,v)\
  *(ckt->CKTrhs+here->p ## Node)-=v;\
  *(ckt->CKTrhs+here->n ## Node)+=v;
#define _load_static_residual1(p,v)\
  *(ckt->CKTrhs+here->p ## Node)-=v;

#define _load_static_jacobian4(Sp,Sn,Pp,Pn,v)\
  _load_static_residual2(Sp,Sn,-v*BP(Pp,Pn))\
  *(here->PTR_J_ ## Sp ## _ ## Pp)+=v;\
  *(here->PTR_J_ ## Sn ## _ ## Pn)+=v;\
  *(here->PTR_J_ ## Sp ## _ ## Pn)-=v;\
  *(here->PTR_J_ ## Sn ## _ ## Pp)-=v;\
  (here->JSVAL_ ## Sp ## _ ## Pp)+=v;\
  (here->JSVAL_ ## Sn ## _ ## Pn)+=v;\
  (here->JSVAL_ ## Sp ## _ ## Pn)-=v;\
  (here->JSVAL_ ## Sn ## _ ## Pp)-=v;
#define _load_static_jacobian2s(Sp,Sn,Pp,v)\
  _load_static_residual2(Sp,Sn,-v*NP(Pp))\
  *(here->PTR_J_ ## Sp ## _ ## Pp)+=v;\
  *(here->PTR_J_ ## Sn ## _ ## Pp)-=v;\
  (here->JSVAL_ ## Sp ## _ ## Pp)+=v;\
  (here->JSVAL_ ## Sn ## _ ## Pp)-=v;
#define _load_static_jacobian2p(Sp,Pp,Pn,v)\
  _load_static_residual1(Sp,-v*BP(Pp,Pn))\
  *(here->PTR_J_ ## Sp ## _ ## Pp)+=v;\
  *(here->PTR_J_ ## Sp ## _ ## Pn)-=v;\
  (here->JSVAL_ ## Sp ## _ ## Pp)+=v;\
  (here->JSVAL_ ## Sp ## _ ## Pn)-=v;
#define _load_static_jacobian1(Sp,Pp,v)\
  _load_static_residual1(Sp,-v*NP(Pp))\
  *(here->PTR_J_ ## Sp ## _ ## Pp)+=v;\
  (here->JSVAL_ ## Sp ## _ ## Pp)+=v;

#define _load_dynamic_residual2(p,n,v)\
if(ChargeComputationNeeded)\
{\
  int error;\
  double unused;\
  *(ckt->CKTstate0+here->state_##p##_##n)=v;\
  if(ckt->CKTmode & MODEINITTRAN)\
    *(ckt->CKTstate1+here->state_##p##_##n)=*(ckt->CKTstate0+here->state_##p##_##n);\
  error = NIintegrate(ckt,&unused,&unused,0.0,here->state_##p##_##n);\
  if(error) return(error);\
  if(ckt->CKTmode & MODEINITTRAN)\
    *(ckt->CKTstate1+here->state_##p##_##n+1) = *(ckt->CKTstate0+here->state_##p##_##n+1);\
  *(ckt->CKTrhs+here->p##Node)-=*(ckt->CKTstate0+here->state_##p##_##n+1);\
  *(ckt->CKTrhs+here->n##Node)+=*(ckt->CKTstate0+here->state_##p##_##n+1);\
}
#define _load_dynamic_residual1(p,v)\
if(ChargeComputationNeeded)\
{\
  int error;\
  double unused;\
  *(ckt->CKTstate0+here->state_##p##_GND)=v;\
  if(ckt->CKTmode & MODEINITTRAN)\
    *(ckt->CKTstate1+here->state_##p##_GND)=*(ckt->CKTstate0+here->state_##p##_GND);\
  error = NIintegrate(ckt,&unused,&unused,0.0,here->state_##p##_GND);\
  if(error) return(error);\
  if(ckt->CKTmode & MODEINITTRAN)\
    *(ckt->CKTstate1+here->state_##p##_GND+1) = *(ckt->CKTstate0+here->state_##p##_GND+1);\
  *(ckt->CKTrhs+here->p##Node)-=*(ckt->CKTstate0+here->state_##p##_GND+1);\
}

#define _load_dynamic_jacobian4(Sp,Sn,Pp,Pn,v)\
if(ChargeComputationNeeded)\
{\
  double geq=(v)*ckt->CKTag[0];\
  double ceq=geq*BP(Pp,Pn);\
  *(ckt->CKTrhs+here->Sp##Node)+=ceq;\
  *(ckt->CKTrhs+here->Sn##Node)-=ceq;\
  *(here->PTR_J_ ## Sp ## _ ## Pp)+=geq;\
  *(here->PTR_J_ ## Sn ## _ ## Pn)+=geq;\
  *(here->PTR_J_ ## Sp ## _ ## Pn)-=geq;\
  *(here->PTR_J_ ## Sn ## _ ## Pp)-=geq;\
}\
  (here->JDVAL_ ## Sp ## _ ## Pp)+=v;\
  (here->JDVAL_ ## Sn ## _ ## Pn)+=v;\
  (here->JDVAL_ ## Sp ## _ ## Pn)-=v;\
  (here->JDVAL_ ## Sn ## _ ## Pp)-=v;
#define _load_dynamic_jacobian2s(Sp,Sn,Pp,v)\
if(ChargeComputationNeeded)\
{\
  double geq=(v)*ckt->CKTag[0];\
  double ceq=geq*NP(Pp);\
  *(ckt->CKTrhs+here->Sp##Node)+=ceq;\
  *(ckt->CKTrhs+here->Sn##Node)-=ceq;\
  *(here->PTR_J_ ## Sp ## _ ## Pp)+=geq;\
  *(here->PTR_J_ ## Sn ## _ ## Pp)-=geq;\
}\
  (here->JDVAL_ ## Sp ## _ ## Pp)+=v;\
  (here->JDVAL_ ## Sn ## _ ## Pp)-=v;
#define _load_dynamic_jacobian2p(Sp,Pp,Pn,v)\
if(ChargeComputationNeeded)\
{\
  double geq=(v)*ckt->CKTag[0];\
  double ceq=geq*BP(Pp,Pn);\
  *(ckt->CKTrhs+here->Sp##Node)+=ceq;\
  *(here->PTR_J_ ## Sp ## _ ## Pp)+=geq;\
  *(here->PTR_J_ ## Sp ## _ ## Pn)-=geq;\
}\
  (here->JDVAL_ ## Sp ## _ ## Pp)+=v;\
  (here->JDVAL_ ## Sp ## _ ## Pn)-=v;
#define _load_dynamic_jacobian1(Sp,Pp,v)\
if(ChargeComputationNeeded)\
{\
  double geq=(v)*ckt->CKTag[0];\
  double ceq=geq*NP(Pp);\
  *(ckt->CKTrhs+here->Sp##Node)+=ceq;\
  *(here->PTR_J_ ## Sp ## _ ## Pp)+=geq;\
}\
(here->JDVAL_ ## Sp ## _ ## Pp)+=v;

int psp102load(inModel,ckt)
     GENmodel *inModel;
     register CKTcircuit *ckt;
     /* actually load the current value into the 
      * sparse matrix previously provided 
      */
{
  register psp102model *model = (psp102model*)inModel;
  register psp102instance *here;
  int ChargeComputationNeeded =  
                 ((ckt->CKTmode & (MODEAC | MODETRAN | MODEINITSMSIG)) ||
                 ((ckt->CKTmode & MODETRANOP) && (ckt->CKTmode & MODEUIC)))
                 ? 1 : 0;

  for ( ; model != NULL; model = model->psp102nextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->psp102instances; here != NULL ; here = here->psp102nextInstance)
    {
{  here->JSVAL_D_S=0.0;
  here->JSVAL_D_B=0.0;
  here->JSVAL_B_S=0.0;
  here->JSVAL_B_B=0.0;
  here->JSVAL_D_D=0.0;
  here->JSVAL_B_D=0.0;
  here->JSVAL_D_G=0.0;
  here->JSVAL_B_G=0.0;
  here->JSVAL_S_S=0.0;
  here->JSVAL_S_B=0.0;
  here->JSVAL_S_D=0.0;
  here->JSVAL_S_G=0.0;
  here->JSVAL_G_S=0.0;
  here->JSVAL_G_B=0.0;
  here->JSVAL_G_D=0.0;
  here->JSVAL_G_G=0.0;
  here->JSVAL_NOI2_NOI2=0.0;
  here->JSVAL_NOI2_S=0.0;
  here->JSVAL_NOI2_B=0.0;
  here->JSVAL_NOI2_G=0.0;
  here->JSVAL_NOI2_D=0.0;
  here->JSVAL_NOI_S=0.0;
  here->JSVAL_NOI_B=0.0;
  here->JSVAL_NOI_G=0.0;
  here->JSVAL_NOI_D=0.0;
  here->JSVAL_NOI_NOI2=0.0;
  here->JSVAL_NOI_NOI=0.0;
  here->JSVAL_D_NOI2=0.0;
  here->JSVAL_S_NOI2=0.0;
  here->JDVAL_D_S=0.0;
  here->JDVAL_D_B=0.0;
  here->JDVAL_B_S=0.0;
  here->JDVAL_B_B=0.0;
  here->JDVAL_D_D=0.0;
  here->JDVAL_B_D=0.0;
  here->JDVAL_D_G=0.0;
  here->JDVAL_B_G=0.0;
  here->JDVAL_S_S=0.0;
  here->JDVAL_S_B=0.0;
  here->JDVAL_S_D=0.0;
  here->JDVAL_S_G=0.0;
  here->JDVAL_G_S=0.0;
  here->JDVAL_G_B=0.0;
  here->JDVAL_G_D=0.0;
  here->JDVAL_G_G=0.0;
  here->JDVAL_NOI_S=0.0;
  here->JDVAL_NOI_B=0.0;
  here->JDVAL_NOI_G=0.0;
  here->JDVAL_NOI_D=0.0;
  here->JDVAL_NOI_NOI=0.0;
  here->JDVAL_G_NOI=0.0;
  here->JDVAL_S_NOI=0.0;
  here->JDVAL_D_NOI=0.0;

}
{
#include "psp102.hxx"
}
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
