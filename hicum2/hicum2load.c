/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 14:29:51 ***/

#define NGSPICE_DEBUG_OK


#include "ngspice.h"
#include "cktdefs.h"
#include "hicum2defs.h"
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
void hicum2debug (CKTcircuit *ckt, hicum2model *model, hicum2instance *here)
{
  fprintf(stdout,"voltage: c=%e\n",NP(c));
  fprintf(stdout,"voltage: b=%e\n",NP(b));
  fprintf(stdout,"voltage: e=%e\n",NP(e));
  fprintf(stdout,"voltage: s=%e\n",NP(s));
  fprintf(stdout,"voltage: tnode=%e\n",NP(tnode));
  fprintf(stdout,"voltage: ci=%e\n",NP(ci));
  fprintf(stdout,"voltage: ei=%e\n",NP(ei));
  fprintf(stdout,"voltage: bp=%e\n",NP(bp));
  fprintf(stdout,"voltage: bi=%e\n",NP(bi));
  fprintf(stdout,"voltage: si=%e\n",NP(si));
  fprintf(stdout,"voltage: xf1=%e\n",NP(xf1));
  fprintf(stdout,"voltage: xf2=%e\n",NP(xf2));
  fprintf(stdout,"voltage: xf3=%e\n",NP(xf3));
  fprintf(stdout,"voltage: xf4=%e\n",NP(xf4));
  fprintf(stdout,"voltage: n1=%e\n",NP(n1));
  fprintf(stdout,"voltage: n2=%e\n",NP(n2));
  fprintf(stdout,"Parameter: model: pnp=%i\n",model->pnp);
  fprintf(stdout,"Parameter: model: npn=%i\n",model->npn);
  fprintf(stdout,"Parameter: model: c10=%e\n",model->c10);
  fprintf(stdout,"Parameter: model: qp0=%e\n",model->qp0);
  fprintf(stdout,"Parameter: model: ich=%e\n",model->ich);
  fprintf(stdout,"Parameter: model: hfe=%e\n",model->hfe);
  fprintf(stdout,"Parameter: model: hfc=%e\n",model->hfc);
  fprintf(stdout,"Parameter: model: hjei=%e\n",model->hjei);
  fprintf(stdout,"Parameter: model: hjci=%e\n",model->hjci);
  fprintf(stdout,"Parameter: model: ibeis=%e\n",model->ibeis);
  fprintf(stdout,"Parameter: model: mbei=%e\n",model->mbei);
  fprintf(stdout,"Parameter: model: ireis=%e\n",model->ireis);
  fprintf(stdout,"Parameter: model: mrei=%e\n",model->mrei);
  fprintf(stdout,"Parameter: model: ibeps=%e\n",model->ibeps);
  fprintf(stdout,"Parameter: model: mbep=%e\n",model->mbep);
  fprintf(stdout,"Parameter: model: ireps=%e\n",model->ireps);
  fprintf(stdout,"Parameter: model: mrep=%e\n",model->mrep);
  fprintf(stdout,"Parameter: model: mcf=%e\n",model->mcf);
  fprintf(stdout,"Parameter: model: tbhrec=%e\n",model->tbhrec);
  fprintf(stdout,"Parameter: model: ibcis=%e\n",model->ibcis);
  fprintf(stdout,"Parameter: model: mbci=%e\n",model->mbci);
  fprintf(stdout,"Parameter: model: ibcxs=%e\n",model->ibcxs);
  fprintf(stdout,"Parameter: model: mbcx=%e\n",model->mbcx);
  fprintf(stdout,"Parameter: model: ibets=%e\n",model->ibets);
  fprintf(stdout,"Parameter: model: abet=%e\n",model->abet);
  fprintf(stdout,"Parameter: model: tunode=%i\n",model->tunode);
  fprintf(stdout,"Parameter: model: favl=%e\n",model->favl);
  fprintf(stdout,"Parameter: model: qavl=%e\n",model->qavl);
  fprintf(stdout,"Parameter: model: alfav=%e\n",model->alfav);
  fprintf(stdout,"Parameter: model: alqav=%e\n",model->alqav);
  fprintf(stdout,"Parameter: model: rbi0=%e\n",model->rbi0);
  fprintf(stdout,"Parameter: model: rbx=%e\n",model->rbx);
  fprintf(stdout,"Parameter: model: fgeo=%e\n",model->fgeo);
  fprintf(stdout,"Parameter: model: fdqr0=%e\n",model->fdqr0);
  fprintf(stdout,"Parameter: model: fcrbi=%e\n",model->fcrbi);
  fprintf(stdout,"Parameter: model: fqi=%e\n",model->fqi);
  fprintf(stdout,"Parameter: model: re=%e\n",model->re);
  fprintf(stdout,"Parameter: model: rcx=%e\n",model->rcx);
  fprintf(stdout,"Parameter: model: itss=%e\n",model->itss);
  fprintf(stdout,"Parameter: model: msf=%e\n",model->msf);
  fprintf(stdout,"Parameter: model: iscs=%e\n",model->iscs);
  fprintf(stdout,"Parameter: model: msc=%e\n",model->msc);
  fprintf(stdout,"Parameter: model: tsf=%e\n",model->tsf);
  fprintf(stdout,"Parameter: model: rsu=%e\n",model->rsu);
  fprintf(stdout,"Parameter: model: csu=%e\n",model->csu);
  fprintf(stdout,"Parameter: model: cjei0=%e\n",model->cjei0);
  fprintf(stdout,"Parameter: model: vdei=%e\n",model->vdei);
  fprintf(stdout,"Parameter: model: zei=%e\n",model->zei);
  fprintf(stdout,"Parameter: model: ajei=%e\n",model->ajei);
  fprintf(stdout,"Parameter: model: cjep0=%e\n",model->cjep0);
  fprintf(stdout,"Parameter: model: vdep=%e\n",model->vdep);
  fprintf(stdout,"Parameter: model: zep=%e\n",model->zep);
  fprintf(stdout,"Parameter: model: ajep=%e\n",model->ajep);
  fprintf(stdout,"Parameter: model: cjci0=%e\n",model->cjci0);
  fprintf(stdout,"Parameter: model: vdci=%e\n",model->vdci);
  fprintf(stdout,"Parameter: model: zci=%e\n",model->zci);
  fprintf(stdout,"Parameter: model: vptci=%e\n",model->vptci);
  fprintf(stdout,"Parameter: model: cjcx0=%e\n",model->cjcx0);
  fprintf(stdout,"Parameter: model: vdcx=%e\n",model->vdcx);
  fprintf(stdout,"Parameter: model: zcx=%e\n",model->zcx);
  fprintf(stdout,"Parameter: model: vptcx=%e\n",model->vptcx);
  fprintf(stdout,"Parameter: model: fbcpar=%e\n",model->fbcpar);
  fprintf(stdout,"Parameter: model: fbepar=%e\n",model->fbepar);
  fprintf(stdout,"Parameter: model: cjs0=%e\n",model->cjs0);
  fprintf(stdout,"Parameter: model: vds=%e\n",model->vds);
  fprintf(stdout,"Parameter: model: zs=%e\n",model->zs);
  fprintf(stdout,"Parameter: model: vpts=%e\n",model->vpts);
  fprintf(stdout,"Parameter: model: t0=%e\n",model->t0);
  fprintf(stdout,"Parameter: model: dt0h=%e\n",model->dt0h);
  fprintf(stdout,"Parameter: model: tbvl=%e\n",model->tbvl);
  fprintf(stdout,"Parameter: model: tef0=%e\n",model->tef0);
  fprintf(stdout,"Parameter: model: gtfe=%e\n",model->gtfe);
  fprintf(stdout,"Parameter: model: thcs=%e\n",model->thcs);
  fprintf(stdout,"Parameter: model: ahc=%e\n",model->ahc);
  fprintf(stdout,"Parameter: model: fthc=%e\n",model->fthc);
  fprintf(stdout,"Parameter: model: rci0=%e\n",model->rci0);
  fprintf(stdout,"Parameter: model: vlim=%e\n",model->vlim);
  fprintf(stdout,"Parameter: model: vces=%e\n",model->vces);
  fprintf(stdout,"Parameter: model: vpt=%e\n",model->vpt);
  fprintf(stdout,"Parameter: model: tr=%e\n",model->tr);
  fprintf(stdout,"Parameter: model: cbepar=%e\n",model->cbepar);
  fprintf(stdout,"Parameter: model: cbcpar=%e\n",model->cbcpar);
  fprintf(stdout,"Parameter: model: alqf=%e\n",model->alqf);
  fprintf(stdout,"Parameter: model: alit=%e\n",model->alit);
  fprintf(stdout,"Parameter: model: flnqs=%i\n",model->flnqs);
  fprintf(stdout,"Parameter: model: kf=%e\n",model->kf);
  fprintf(stdout,"Parameter: model: af=%e\n",model->af);
  fprintf(stdout,"Parameter: model: cfbe=%i\n",model->cfbe);
  fprintf(stdout,"Parameter: model: latb=%e\n",model->latb);
  fprintf(stdout,"Parameter: model: latl=%e\n",model->latl);
  fprintf(stdout,"Parameter: model: vgb=%e\n",model->vgb);
  fprintf(stdout,"Parameter: model: alt0=%e\n",model->alt0);
  fprintf(stdout,"Parameter: model: kt0=%e\n",model->kt0);
  fprintf(stdout,"Parameter: model: zetaci=%e\n",model->zetaci);
  fprintf(stdout,"Parameter: model: alvs=%e\n",model->alvs);
  fprintf(stdout,"Parameter: model: alces=%e\n",model->alces);
  fprintf(stdout,"Parameter: model: zetarbi=%e\n",model->zetarbi);
  fprintf(stdout,"Parameter: model: zetarbx=%e\n",model->zetarbx);
  fprintf(stdout,"Parameter: model: zetarcx=%e\n",model->zetarcx);
  fprintf(stdout,"Parameter: model: zetare=%e\n",model->zetare);
  fprintf(stdout,"Parameter: model: zetacx=%e\n",model->zetacx);
  fprintf(stdout,"Parameter: model: vge=%e\n",model->vge);
  fprintf(stdout,"Parameter: model: vgc=%e\n",model->vgc);
  fprintf(stdout,"Parameter: model: vgs=%e\n",model->vgs);
  fprintf(stdout,"Parameter: model: f1vg=%e\n",model->f1vg);
  fprintf(stdout,"Parameter: model: f2vg=%e\n",model->f2vg);
  fprintf(stdout,"Parameter: model: zetact=%e\n",model->zetact);
  fprintf(stdout,"Parameter: model: zetabet=%e\n",model->zetabet);
  fprintf(stdout,"Parameter: model: alb=%e\n",model->alb);
  fprintf(stdout,"Parameter: model: flsh=%i\n",model->flsh);
  fprintf(stdout,"Parameter: model: rth=%e\n",model->rth);
  fprintf(stdout,"Parameter: model: cth=%e\n",model->cth);
  fprintf(stdout,"Parameter: model: flcomp=%e\n",model->flcomp);
  fprintf(stdout,"Parameter: model: tnom=%e\n",model->tnom);
  fprintf(stdout,"Parameter: model: dt=%e\n",model->dt);
  fprintf(stdout,"model: VT=%e\n",model->VT);
  fprintf(stdout,"model: Tdev=%e\n",model->Tdev);
  fprintf(stdout,"model: qtt0=%e\n",model->qtt0);
  fprintf(stdout,"model: ln_qtt0=%e\n",model->ln_qtt0);
  fprintf(stdout,"model: r_VgVT=%e\n",model->r_VgVT);
  fprintf(stdout,"model: V_gT=%e\n",model->V_gT);
  fprintf(stdout,"model: dT=%e\n",model->dT);
  fprintf(stdout,"model: k=%e\n",model->k);
  fprintf(stdout,"model: ireis_t=%e\n",model->ireis_t);
  fprintf(stdout,"model: ibeis_t=%e\n",model->ibeis_t);
  fprintf(stdout,"model: ibcxs_t=%e\n",model->ibcxs_t);
  fprintf(stdout,"model: ibcis_t=%e\n",model->ibcis_t);
  fprintf(stdout,"model: iscs_t=%e\n",model->iscs_t);
  fprintf(stdout,"model: cjci0_t=%e\n",model->cjci0_t);
  fprintf(stdout,"model: cjs0_t=%e\n",model->cjs0_t);
  fprintf(stdout,"model: rci0_t=%e\n",model->rci0_t);
  fprintf(stdout,"model: vlim_t=%e\n",model->vlim_t);
  fprintf(stdout,"model: vces_t=%e\n",model->vces_t);
  fprintf(stdout,"model: thcs_t=%e\n",model->thcs_t);
  fprintf(stdout,"model: tef0_t=%e\n",model->tef0_t);
  fprintf(stdout,"model: rbi0_t=%e\n",model->rbi0_t);
  fprintf(stdout,"model: rbx_t=%e\n",model->rbx_t);
  fprintf(stdout,"model: rcx_t=%e\n",model->rcx_t);
  fprintf(stdout,"model: re_t=%e\n",model->re_t);
  fprintf(stdout,"model: t0_t=%e\n",model->t0_t);
  fprintf(stdout,"model: vdei_t=%e\n",model->vdei_t);
  fprintf(stdout,"model: vdci_t=%e\n",model->vdci_t);
  fprintf(stdout,"model: vpts_t=%e\n",model->vpts_t);
  fprintf(stdout,"model: itss_t=%e\n",model->itss_t);
  fprintf(stdout,"model: tsf_t=%e\n",model->tsf_t);
  fprintf(stdout,"model: c10_t=%e\n",model->c10_t);
  fprintf(stdout,"model: cjei0_t=%e\n",model->cjei0_t);
  fprintf(stdout,"model: qp0_t=%e\n",model->qp0_t);
  fprintf(stdout,"model: vdcx_t=%e\n",model->vdcx_t);
  fprintf(stdout,"model: vptcx_t=%e\n",model->vptcx_t);
  fprintf(stdout,"model: cjcx01_t=%e\n",model->cjcx01_t);
  fprintf(stdout,"model: cjcx02_t=%e\n",model->cjcx02_t);
  fprintf(stdout,"model: cratio_t=%e\n",model->cratio_t);
  fprintf(stdout,"model: ibeps_t=%e\n",model->ibeps_t);
  fprintf(stdout,"model: ireps_t=%e\n",model->ireps_t);
  fprintf(stdout,"model: cjep0_t=%e\n",model->cjep0_t);
  fprintf(stdout,"model: ajei_t=%e\n",model->ajei_t);
  fprintf(stdout,"model: qavl_t=%e\n",model->qavl_t);
  fprintf(stdout,"model: favl_t=%e\n",model->favl_t);
  fprintf(stdout,"model: ibets_t=%e\n",model->ibets_t);
  fprintf(stdout,"model: abet_t=%e\n",model->abet_t);
  fprintf(stdout,"model: vptci_t=%e\n",model->vptci_t);
  fprintf(stdout,"model: vdep_t=%e\n",model->vdep_t);
  fprintf(stdout,"model: ajep_t=%e\n",model->ajep_t);
  fprintf(stdout,"model: zetatef=%e\n",model->zetatef);
  fprintf(stdout,"model: k1=%e\n",model->k1);
  fprintf(stdout,"model: k2=%e\n",model->k2);
  fprintf(stdout,"model: dvg0=%e\n",model->dvg0);
  fprintf(stdout,"model: vge_t=%e\n",model->vge_t);
  fprintf(stdout,"model: vgb_t=%e\n",model->vgb_t);
  fprintf(stdout,"model: vgbe_t=%e\n",model->vgbe_t);
  fprintf(stdout,"model: vds_t=%e\n",model->vds_t);
  fprintf(stdout,"model: vt0=%e\n",model->vt0);
  fprintf(stdout,"model: Tnom=%e\n",model->Tnom);
  fprintf(stdout,"model: Tamb=%e\n",model->Tamb);
  fprintf(stdout,"model: a=%e\n",model->a);
  fprintf(stdout,"model: avs=%e\n",model->avs);
  fprintf(stdout,"model: zetabci=%e\n",model->zetabci);
  fprintf(stdout,"model: zetabcxt=%e\n",model->zetabcxt);
  fprintf(stdout,"model: zetasct=%e\n",model->zetasct);
  fprintf(stdout,"model: vgbe0=%e\n",model->vgbe0);
  fprintf(stdout,"model: mg=%e\n",model->mg);
  fprintf(stdout,"model: vgbe_t0=%e\n",model->vgbe_t0);
  fprintf(stdout,"model: vgbc0=%e\n",model->vgbc0);
  fprintf(stdout,"model: vgsc0=%e\n",model->vgsc0);
  fprintf(stdout,"model: cbcpar1=%e\n",model->cbcpar1);
  fprintf(stdout,"model: cbcpar2=%e\n",model->cbcpar2);
  fprintf(stdout,"model: cbepar2=%e\n",model->cbepar2);
  fprintf(stdout,"model: cbepar1=%e\n",model->cbepar1);
  fprintf(stdout,"model: Oich=%e\n",model->Oich);
  fprintf(stdout,"model: Ovpt=%e\n",model->Ovpt);
  fprintf(stdout,"model: Otbhrec=%e\n",model->Otbhrec);
  fprintf(stdout,"model: vdj0=%e\n",model->vdj0);
  fprintf(stdout,"model: vdjt=%e\n",model->vdjt);
  fprintf(stdout,"model: vdt=%e\n",model->vdt);
  fprintf(stdout,"model: cjcx01=%e\n",model->cjcx01);
  fprintf(stdout,"model: cjcx02=%e\n",model->cjcx02);
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

int hicum2load(inModel,ckt)
     GENmodel *inModel;
     register CKTcircuit *ckt;
     /* actually load the current value into the 
      * sparse matrix previously provided 
      */
{
  register hicum2model *model = (hicum2model*)inModel;
  register hicum2instance *here;
  int ChargeComputationNeeded =  
                 ((ckt->CKTmode & (MODEAC | MODETRAN | MODEINITSMSIG)) ||
                 ((ckt->CKTmode & MODETRANOP) && (ckt->CKTmode & MODEUIC)))
                 ? 1 : 0;

  for ( ; model != NULL; model = model->hicum2nextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->hicum2instances; here != NULL ; here = here->hicum2nextInstance)
    {
{  here->JSVAL_bi_bi=0.0;
  here->JSVAL_bi_ei=0.0;
  here->JSVAL_ei_bi=0.0;
  here->JSVAL_ei_ei=0.0;
  here->JSVAL_bi_ci=0.0;
  here->JSVAL_ci_bi=0.0;
  here->JSVAL_ci_ci=0.0;
  here->JSVAL_b_tnode=0.0;
  here->JSVAL_ci_tnode=0.0;
  here->JSVAL_b_bp=0.0;
  here->JSVAL_ci_bp=0.0;
  here->JSVAL_b_b=0.0;
  here->JSVAL_ci_ei=0.0;
  here->JSVAL_bp_bp=0.0;
  here->JSVAL_bp_ci=0.0;
  here->JSVAL_bp_tnode=0.0;
  here->JSVAL_bp_b=0.0;
  here->JSVAL_bp_ei=0.0;
  here->JSVAL_bp_bi=0.0;
  here->JSVAL_bi_tnode=0.0;
  here->JSVAL_bi_bp=0.0;
  here->JSVAL_ei_tnode=0.0;
  here->JSVAL_ei_bp=0.0;
  here->JSVAL_ei_ci=0.0;
  here->JSVAL_bp_si=0.0;
  here->JSVAL_si_si=0.0;
  here->JSVAL_si_ci=0.0;
  here->JSVAL_si_bp=0.0;
  here->JSVAL_si_tnode=0.0;
  here->JSVAL_e_e=0.0;
  here->JSVAL_si_bi=0.0;
  here->JSVAL_si_ei=0.0;
  here->JSVAL_ci_si=0.0;
  here->JSVAL_ci_xf2=0.0;
  here->JSVAL_ei_xf2=0.0;
  here->JSVAL_c_tnode=0.0;
  here->JSVAL_ci_c=0.0;
  here->JSVAL_c_ci=0.0;
  here->JSVAL_c_c=0.0;
  here->JSVAL_e_tnode=0.0;
  here->JSVAL_ei_e=0.0;
  here->JSVAL_e_ei=0.0;
  here->JSVAL_si_s=0.0;
  here->JSVAL_s_si=0.0;
  here->JSVAL_s_s=0.0;
  here->JSVAL_tnode_tnode=0.0;
  here->JSVAL_tnode_bi=0.0;
  here->JSVAL_tnode_ci=0.0;
  here->JSVAL_tnode_ei=0.0;
  here->JSVAL_tnode_si=0.0;
  here->JSVAL_tnode_bp=0.0;
  here->JSVAL_tnode_e=0.0;
  here->JSVAL_tnode_c=0.0;
  here->JSVAL_tnode_b=0.0;
  here->JSVAL_xf1_bi=0.0;
  here->JSVAL_xf1_ci=0.0;
  here->JSVAL_xf1_ei=0.0;
  here->JSVAL_xf1_tnode=0.0;
  here->JSVAL_xf1_xf2=0.0;
  here->JSVAL_xf1_xf1=0.0;
  here->JSVAL_xf2_bi=0.0;
  here->JSVAL_xf2_ci=0.0;
  here->JSVAL_xf2_tnode=0.0;
  here->JSVAL_xf2_ei=0.0;
  here->JSVAL_xf2_xf1=0.0;
  here->JSVAL_xf2_xf2=0.0;
  here->JSVAL_xf3_bi=0.0;
  here->JSVAL_xf3_ei=0.0;
  here->JSVAL_xf3_ci=0.0;
  here->JSVAL_xf3_tnode=0.0;
  here->JSVAL_xf3_xf4=0.0;
  here->JSVAL_xf3_xf3=0.0;
  here->JSVAL_xf4_bi=0.0;
  here->JSVAL_xf4_ci=0.0;
  here->JSVAL_xf4_tnode=0.0;
  here->JSVAL_xf4_ei=0.0;
  here->JSVAL_xf4_xf3=0.0;
  here->JSVAL_xf4_xf4=0.0;
  here->JSVAL_s_tnode=0.0;
  here->JDVAL_bi_bi=0.0;
  here->JDVAL_bi_ei=0.0;
  here->JDVAL_ei_bi=0.0;
  here->JDVAL_ei_ei=0.0;
  here->JDVAL_bi_ci=0.0;
  here->JDVAL_ci_bi=0.0;
  here->JDVAL_ci_ci=0.0;
  here->JDVAL_b_bi=0.0;
  here->JDVAL_b_ci=0.0;
  here->JDVAL_b_tnode=0.0;
  here->JDVAL_ci_tnode=0.0;
  here->JDVAL_b_bp=0.0;
  here->JDVAL_ci_bp=0.0;
  here->JDVAL_b_b=0.0;
  here->JDVAL_ci_b=0.0;
  here->JDVAL_b_ei=0.0;
  here->JDVAL_ci_ei=0.0;
  here->JDVAL_bp_bp=0.0;
  here->JDVAL_bp_ci=0.0;
  here->JDVAL_bp_tnode=0.0;
  here->JDVAL_bp_ei=0.0;
  here->JDVAL_bp_bi=0.0;
  here->JDVAL_bi_tnode=0.0;
  here->JDVAL_bi_bp=0.0;
  here->JDVAL_ei_tnode=0.0;
  here->JDVAL_ei_bp=0.0;
  here->JDVAL_ei_ci=0.0;
  here->JDVAL_bi_xf4=0.0;
  here->JDVAL_ei_xf4=0.0;
  here->JDVAL_si_si=0.0;
  here->JDVAL_si_ci=0.0;
  here->JDVAL_si_bp=0.0;
  here->JDVAL_si_tnode=0.0;
  here->JDVAL_b_e=0.0;
  here->JDVAL_e_b=0.0;
  here->JDVAL_e_e=0.0;
  here->JDVAL_bp_e=0.0;
  here->JDVAL_e_bp=0.0;
  here->JDVAL_si_bi=0.0;
  here->JDVAL_si_ei=0.0;
  here->JDVAL_ci_si=0.0;
  here->JDVAL_si_b=0.0;
  here->JDVAL_si_s=0.0;
  here->JDVAL_s_si=0.0;
  here->JDVAL_s_s=0.0;
  here->JDVAL_tnode_tnode=0.0;
  here->JDVAL_xf1_xf1=0.0;
  here->JDVAL_xf2_xf2=0.0;
  here->JDVAL_xf3_xf3=0.0;
  here->JDVAL_xf4_xf4=0.0;

}
{
#include "hicum2.hxx"
}
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
