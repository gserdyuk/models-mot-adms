/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:13 ***/

#define NGSPICE_DEBUG_OK


#include "ngspice.h"
#include "cktdefs.h"
#include "hicum0defs.h"
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
void hicum0debug (CKTcircuit *ckt, hicum0model *model, hicum0instance *here)
{
  fprintf(stdout,"voltage: c=%e\n",NP(c));
  fprintf(stdout,"voltage: b=%e\n",NP(b));
  fprintf(stdout,"voltage: e=%e\n",NP(e));
  fprintf(stdout,"voltage: s=%e\n",NP(s));
  fprintf(stdout,"voltage: tnode=%e\n",NP(tnode));
  fprintf(stdout,"voltage: ci=%e\n",NP(ci));
  fprintf(stdout,"voltage: bi=%e\n",NP(bi));
  fprintf(stdout,"voltage: ei=%e\n",NP(ei));
  fprintf(stdout,"Parameter: model: is=%e\n",model->is);
  fprintf(stdout,"Parameter: model: mcf=%e\n",model->mcf);
  fprintf(stdout,"Parameter: model: mcr=%e\n",model->mcr);
  fprintf(stdout,"Parameter: model: vef=%e\n",model->vef);
  fprintf(stdout,"Parameter: model: iqf=%e\n",model->iqf);
  fprintf(stdout,"Parameter: model: iqr=%e\n",model->iqr);
  fprintf(stdout,"Parameter: model: iqfh=%e\n",model->iqfh);
  fprintf(stdout,"Parameter: model: tfh=%e\n",model->tfh);
  fprintf(stdout,"Parameter: model: ibes=%e\n",model->ibes);
  fprintf(stdout,"Parameter: model: mbe=%e\n",model->mbe);
  fprintf(stdout,"Parameter: model: ires=%e\n",model->ires);
  fprintf(stdout,"Parameter: model: mre=%e\n",model->mre);
  fprintf(stdout,"Parameter: model: ibcs=%e\n",model->ibcs);
  fprintf(stdout,"Parameter: model: mbc=%e\n",model->mbc);
  fprintf(stdout,"Parameter: model: cje0=%e\n",model->cje0);
  fprintf(stdout,"Parameter: model: vde=%e\n",model->vde);
  fprintf(stdout,"Parameter: model: ze=%e\n",model->ze);
  fprintf(stdout,"Parameter: model: aje=%e\n",model->aje);
  fprintf(stdout,"Parameter: model: t0=%e\n",model->t0);
  fprintf(stdout,"Parameter: model: dt0h=%e\n",model->dt0h);
  fprintf(stdout,"Parameter: model: tbvl=%e\n",model->tbvl);
  fprintf(stdout,"Parameter: model: tef0=%e\n",model->tef0);
  fprintf(stdout,"Parameter: model: gte=%e\n",model->gte);
  fprintf(stdout,"Parameter: model: thcs=%e\n",model->thcs);
  fprintf(stdout,"Parameter: model: ahc=%e\n",model->ahc);
  fprintf(stdout,"Parameter: model: tr=%e\n",model->tr);
  fprintf(stdout,"Parameter: model: rci0=%e\n",model->rci0);
  fprintf(stdout,"Parameter: model: vlim=%e\n",model->vlim);
  fprintf(stdout,"Parameter: model: vpt=%e\n",model->vpt);
  fprintf(stdout,"Parameter: model: vces=%e\n",model->vces);
  fprintf(stdout,"Parameter: model: cjci0=%e\n",model->cjci0);
  fprintf(stdout,"Parameter: model: vdci=%e\n",model->vdci);
  fprintf(stdout,"Parameter: model: zci=%e\n",model->zci);
  fprintf(stdout,"Parameter: model: vptci=%e\n",model->vptci);
  fprintf(stdout,"Parameter: model: cjcx0=%e\n",model->cjcx0);
  fprintf(stdout,"Parameter: model: vdcx=%e\n",model->vdcx);
  fprintf(stdout,"Parameter: model: zcx=%e\n",model->zcx);
  fprintf(stdout,"Parameter: model: vptcx=%e\n",model->vptcx);
  fprintf(stdout,"Parameter: model: fbc=%e\n",model->fbc);
  fprintf(stdout,"Parameter: model: rbi0=%e\n",model->rbi0);
  fprintf(stdout,"Parameter: model: vr0e=%e\n",model->vr0e);
  fprintf(stdout,"Parameter: model: vr0c=%e\n",model->vr0c);
  fprintf(stdout,"Parameter: model: fgeo=%e\n",model->fgeo);
  fprintf(stdout,"Parameter: model: rbx=%e\n",model->rbx);
  fprintf(stdout,"Parameter: model: rcx=%e\n",model->rcx);
  fprintf(stdout,"Parameter: model: re=%e\n",model->re);
  fprintf(stdout,"Parameter: model: itss=%e\n",model->itss);
  fprintf(stdout,"Parameter: model: msf=%e\n",model->msf);
  fprintf(stdout,"Parameter: model: iscs=%e\n",model->iscs);
  fprintf(stdout,"Parameter: model: msc=%e\n",model->msc);
  fprintf(stdout,"Parameter: model: cjs0=%e\n",model->cjs0);
  fprintf(stdout,"Parameter: model: vds=%e\n",model->vds);
  fprintf(stdout,"Parameter: model: zs=%e\n",model->zs);
  fprintf(stdout,"Parameter: model: vpts=%e\n",model->vpts);
  fprintf(stdout,"Parameter: model: cbcpar=%e\n",model->cbcpar);
  fprintf(stdout,"Parameter: model: cbepar=%e\n",model->cbepar);
  fprintf(stdout,"Parameter: model: eavl=%e\n",model->eavl);
  fprintf(stdout,"Parameter: model: kavl=%e\n",model->kavl);
  fprintf(stdout,"Parameter: model: kf=%e\n",model->kf);
  fprintf(stdout,"Parameter: model: af=%e\n",model->af);
  fprintf(stdout,"Parameter: model: vgb=%e\n",model->vgb);
  fprintf(stdout,"Parameter: model: vge=%e\n",model->vge);
  fprintf(stdout,"Parameter: model: vgc=%e\n",model->vgc);
  fprintf(stdout,"Parameter: model: vgs=%e\n",model->vgs);
  fprintf(stdout,"Parameter: model: f1vg=%e\n",model->f1vg);
  fprintf(stdout,"Parameter: model: f2vg=%e\n",model->f2vg);
  fprintf(stdout,"Parameter: model: alt0=%e\n",model->alt0);
  fprintf(stdout,"Parameter: model: kt0=%e\n",model->kt0);
  fprintf(stdout,"Parameter: model: zetact=%e\n",model->zetact);
  fprintf(stdout,"Parameter: model: zetabet=%e\n",model->zetabet);
  fprintf(stdout,"Parameter: model: zetaci=%e\n",model->zetaci);
  fprintf(stdout,"Parameter: model: alvs=%e\n",model->alvs);
  fprintf(stdout,"Parameter: model: alces=%e\n",model->alces);
  fprintf(stdout,"Parameter: model: zetarbi=%e\n",model->zetarbi);
  fprintf(stdout,"Parameter: model: zetarbx=%e\n",model->zetarbx);
  fprintf(stdout,"Parameter: model: zetarcx=%e\n",model->zetarcx);
  fprintf(stdout,"Parameter: model: zetare=%e\n",model->zetare);
  fprintf(stdout,"Parameter: model: alkav=%e\n",model->alkav);
  fprintf(stdout,"Parameter: model: aleav=%e\n",model->aleav);
  fprintf(stdout,"Parameter: model: flsh=%i\n",model->flsh);
  fprintf(stdout,"Parameter: model: rth=%e\n",model->rth);
  fprintf(stdout,"Parameter: model: cth=%e\n",model->cth);
  fprintf(stdout,"Parameter: model: npn=%i\n",model->npn);
  fprintf(stdout,"Parameter: model: pnp=%i\n",model->pnp);
  fprintf(stdout,"Parameter: model: tnom=%e\n",model->tnom);
  fprintf(stdout,"Parameter: instance: dt=%e\n",here->dt);
  fprintf(stdout,"model: HICUMtype=%e\n",model->HICUMtype);
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

int hicum0load(inModel,ckt)
     GENmodel *inModel;
     register CKTcircuit *ckt;
     /* actually load the current value into the 
      * sparse matrix previously provided 
      */
{
  register hicum0model *model = (hicum0model*)inModel;
  register hicum0instance *here;
  int ChargeComputationNeeded =  
                 ((ckt->CKTmode & (MODEAC | MODETRAN | MODEINITSMSIG)) ||
                 ((ckt->CKTmode & MODETRANOP) && (ckt->CKTmode & MODEUIC)))
                 ? 1 : 0;

  for ( ; model != NULL; model = model->hicum0nextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->hicum0instances; here != NULL ; here = here->hicum0nextInstance)
    {
{  here->JSVAL_bi_bi=0.0;
  here->JSVAL_bi_ei=0.0;
  here->JSVAL_ei_bi=0.0;
  here->JSVAL_ei_ei=0.0;
  here->JSVAL_bi_ci=0.0;
  here->JSVAL_ci_bi=0.0;
  here->JSVAL_ci_ci=0.0;
  here->JSVAL_b_s=0.0;
  here->JSVAL_b_ci=0.0;
  here->JSVAL_s_s=0.0;
  here->JSVAL_s_ci=0.0;
  here->JSVAL_b_b=0.0;
  here->JSVAL_s_b=0.0;
  here->JSVAL_b_tnode=0.0;
  here->JSVAL_s_tnode=0.0;
  here->JSVAL_s_bi=0.0;
  here->JSVAL_s_ei=0.0;
  here->JSVAL_ci_ei=0.0;
  here->JSVAL_ci_s=0.0;
  here->JSVAL_ci_tnode=0.0;
  here->JSVAL_ci_b=0.0;
  here->JSVAL_b_bi=0.0;
  here->JSVAL_e_e=0.0;
  here->JSVAL_ei_tnode=0.0;
  here->JSVAL_e_tnode=0.0;
  here->JSVAL_ei_e=0.0;
  here->JSVAL_e_ei=0.0;
  here->JSVAL_c_tnode=0.0;
  here->JSVAL_ci_c=0.0;
  here->JSVAL_c_ci=0.0;
  here->JSVAL_c_c=0.0;
  here->JSVAL_b_ei=0.0;
  here->JSVAL_bi_b=0.0;
  here->JSVAL_bi_tnode=0.0;
  here->JSVAL_ei_ci=0.0;
  here->JSVAL_ei_b=0.0;
  here->JSVAL_tnode_tnode=0.0;
  here->JSVAL_tnode_ci=0.0;
  here->JSVAL_tnode_ei=0.0;
  here->JSVAL_tnode_b=0.0;
  here->JSVAL_tnode_bi=0.0;
  here->JSVAL_tnode_s=0.0;
  here->JSVAL_tnode_e=0.0;
  here->JSVAL_tnode_c=0.0;
  here->JDVAL_bi_bi=0.0;
  here->JDVAL_bi_ei=0.0;
  here->JDVAL_ei_bi=0.0;
  here->JDVAL_ei_ei=0.0;
  here->JDVAL_bi_ci=0.0;
  here->JDVAL_ci_bi=0.0;
  here->JDVAL_ci_ci=0.0;
  here->JDVAL_b_ci=0.0;
  here->JDVAL_s_s=0.0;
  here->JDVAL_s_ci=0.0;
  here->JDVAL_b_b=0.0;
  here->JDVAL_s_b=0.0;
  here->JDVAL_b_tnode=0.0;
  here->JDVAL_s_tnode=0.0;
  here->JDVAL_s_bi=0.0;
  here->JDVAL_s_ei=0.0;
  here->JDVAL_ci_ei=0.0;
  here->JDVAL_ci_s=0.0;
  here->JDVAL_ci_tnode=0.0;
  here->JDVAL_ci_b=0.0;
  here->JDVAL_b_bi=0.0;
  here->JDVAL_b_e=0.0;
  here->JDVAL_e_b=0.0;
  here->JDVAL_e_e=0.0;
  here->JDVAL_ei_tnode=0.0;
  here->JDVAL_bi_b=0.0;
  here->JDVAL_bi_tnode=0.0;
  here->JDVAL_ei_ci=0.0;
  here->JDVAL_ei_b=0.0;
  here->JDVAL_tnode_tnode=0.0;

}
{
#include "hicum0.hxx"
}
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
