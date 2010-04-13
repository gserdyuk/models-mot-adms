/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:12:43 ***/

#define NGSPICE_DEBUG_OK


#include "ngspice.h"
#include "cktdefs.h"
#include "ekvdefs.h"
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
void ekvdebug (CKTcircuit *ckt, ekvmodel *model, ekvinstance *here)
{
  fprintf(stdout,"voltage: d=%e\n",NP(d));
  fprintf(stdout,"voltage: g=%e\n",NP(g));
  fprintf(stdout,"voltage: s=%e\n",NP(s));
  fprintf(stdout,"voltage: b=%e\n",NP(b));
  fprintf(stdout,"voltage: di=%e\n",NP(di));
  fprintf(stdout,"voltage: si=%e\n",NP(si));
  fprintf(stdout,"Parameter: model: nmos=%i\n",model->nmos);
  fprintf(stdout,"Parameter: model: pmos=%i\n",model->pmos);
  fprintf(stdout,"Parameter: model: MTYPE=%i\n",model->MTYPE);
  fprintf(stdout,"Parameter: model: TNOM=%e\n",model->TNOM);
  fprintf(stdout,"Parameter: model: IMAX=%e\n",model->IMAX);
  fprintf(stdout,"Parameter: model: TOX=%e\n",model->TOX);
  fprintf(stdout,"Parameter: model: NSUB=%e\n",model->NSUB);
  fprintf(stdout,"Parameter: model: VFB=%e\n",model->VFB);
  fprintf(stdout,"Parameter: model: UO=%e\n",model->UO);
  fprintf(stdout,"Parameter: model: VMAX=%e\n",model->VMAX);
  fprintf(stdout,"Parameter: model: THETA=%e\n",model->THETA);
  fprintf(stdout,"Parameter: model: COX=%e\n",model->COX);
  fprintf(stdout,"Parameter: model: XJ=%e\n",model->XJ);
  fprintf(stdout,"Parameter: model: DL=%e\n",model->DL);
  fprintf(stdout,"Parameter: model: DW=%e\n",model->DW);
  fprintf(stdout,"Parameter: model: GAMMA=%e\n",model->GAMMA);
  fprintf(stdout,"Parameter: model: PHI=%e\n",model->PHI);
  fprintf(stdout,"Parameter: model: VTO=%e\n",model->VTO);
  fprintf(stdout,"Parameter: model: KP=%e\n",model->KP);
  fprintf(stdout,"Parameter: model: UCRIT=%e\n",model->UCRIT);
  fprintf(stdout,"Parameter: model: E0=%e\n",model->E0);
  fprintf(stdout,"Parameter: model: LAMBDA=%e\n",model->LAMBDA);
  fprintf(stdout,"Parameter: model: WETA=%e\n",model->WETA);
  fprintf(stdout,"Parameter: model: LETA=%e\n",model->LETA);
  fprintf(stdout,"Parameter: model: Q0=%e\n",model->Q0);
  fprintf(stdout,"Parameter: model: LK=%e\n",model->LK);
  fprintf(stdout,"Parameter: model: IBA=%e\n",model->IBA);
  fprintf(stdout,"Parameter: model: IBB=%e\n",model->IBB);
  fprintf(stdout,"Parameter: model: IBN=%e\n",model->IBN);
  fprintf(stdout,"Parameter: model: TCV=%e\n",model->TCV);
  fprintf(stdout,"Parameter: model: BEX=%e\n",model->BEX);
  fprintf(stdout,"Parameter: model: UCEX=%e\n",model->UCEX);
  fprintf(stdout,"Parameter: model: IBBT=%e\n",model->IBBT);
  fprintf(stdout,"Parameter: model: AVTO=%e\n",model->AVTO);
  fprintf(stdout,"Parameter: model: AKP=%e\n",model->AKP);
  fprintf(stdout,"Parameter: model: AGAMMA=%e\n",model->AGAMMA);
  fprintf(stdout,"Parameter: model: KF=%e\n",model->KF);
  fprintf(stdout,"Parameter: model: AF=%e\n",model->AF);
  fprintf(stdout,"Parameter: model: NQS=%e\n",model->NQS);
  fprintf(stdout,"Parameter: model: SATLIM=%e\n",model->SATLIM);
  fprintf(stdout,"Parameter: model: XQC=%e\n",model->XQC);
  fprintf(stdout,"Parameter: model: HDIF=%e\n",model->HDIF);
  fprintf(stdout,"Parameter: model: RSH=%e\n",model->RSH);
  fprintf(stdout,"Parameter: model: JS=%e\n",model->JS);
  fprintf(stdout,"Parameter: model: JSW=%e\n",model->JSW);
  fprintf(stdout,"Parameter: model: XTI=%e\n",model->XTI);
  fprintf(stdout,"Parameter: model: N=%e\n",model->N);
  fprintf(stdout,"Parameter: model: CJ=%e\n",model->CJ);
  fprintf(stdout,"Parameter: model: CJSW=%e\n",model->CJSW);
  fprintf(stdout,"Parameter: model: PB=%e\n",model->PB);
  fprintf(stdout,"Parameter: model: PBSW=%e\n",model->PBSW);
  fprintf(stdout,"Parameter: model: MJ=%e\n",model->MJ);
  fprintf(stdout,"Parameter: model: MJSW=%e\n",model->MJSW);
  fprintf(stdout,"Parameter: model: FC=%e\n",model->FC);
  fprintf(stdout,"Parameter: model: FCSW=%e\n",model->FCSW);
  fprintf(stdout,"Parameter: model: CGSO=%e\n",model->CGSO);
  fprintf(stdout,"Parameter: model: CGDO=%e\n",model->CGDO);
  fprintf(stdout,"Parameter: model: CGBO=%e\n",model->CGBO);
  fprintf(stdout,"Parameter: instance: L=%e\n",here->L);
  fprintf(stdout,"Parameter: instance: W=%e\n",here->W);
  fprintf(stdout,"Parameter: instance: M=%e\n",here->M);
  fprintf(stdout,"Parameter: instance: AD=%e\n",here->AD);
  fprintf(stdout,"Parameter: instance: AS=%e\n",here->AS);
  fprintf(stdout,"Parameter: instance: PD=%e\n",here->PD);
  fprintf(stdout,"Parameter: instance: PS=%e\n",here->PS);
  fprintf(stdout,"Parameter: instance: NRD=%e\n",here->NRD);
  fprintf(stdout,"Parameter: instance: NRS=%e\n",here->NRS);
  fprintf(stdout,"Parameter: instance: RS=%e\n",here->RS);
  fprintf(stdout,"Parameter: instance: RD=%e\n",here->RD);
  fprintf(stdout,"model: lc=%e\n",model->lc);
  fprintf(stdout,"instance: isat_s=%e\n",here->isat_s);
  fprintf(stdout,"instance: vexp_s=%e\n",here->vexp_s);
  fprintf(stdout,"instance: gexp_s=%e\n",here->gexp_s);
  fprintf(stdout,"instance: isat_d=%e\n",here->isat_d);
  fprintf(stdout,"instance: vexp_d=%e\n",here->vexp_d);
  fprintf(stdout,"instance: gexp_d=%e\n",here->gexp_d);
  fprintf(stdout,"instance: weff=%e\n",here->weff);
  fprintf(stdout,"instance: leff=%e\n",here->leff);
  fprintf(stdout,"instance: np=%e\n",here->np);
  fprintf(stdout,"instance: ns=%e\n",here->ns);
  fprintf(stdout,"instance: lmin=%e\n",here->lmin);
  fprintf(stdout,"instance: rd=%e\n",here->rd);
  fprintf(stdout,"instance: rs=%e\n",here->rs);
  fprintf(stdout,"instance: dvrsce=%e\n",here->dvrsce);
  fprintf(stdout,"instance: vt=%e\n",here->vt);
  fprintf(stdout,"instance: vto_a=%e\n",here->vto_a);
  fprintf(stdout,"instance: kp_a=%e\n",here->kp_a);
  fprintf(stdout,"instance: gamma_a=%e\n",here->gamma_a);
  fprintf(stdout,"instance: ucrit=%e\n",here->ucrit);
  fprintf(stdout,"instance: phi=%e\n",here->phi);
  fprintf(stdout,"instance: ibb=%e\n",here->ibb);
  fprintf(stdout,"instance: vc=%e\n",here->vc);
  fprintf(stdout,"instance: qb0=%e\n",here->qb0);
  fprintf(stdout,"instance: tmp=%e\n",here->tmp);
  fprintf(stdout,"instance: coxt=%e\n",here->coxt);
  fprintf(stdout,"instance: cbs0=%e\n",here->cbs0);
  fprintf(stdout,"instance: cbs0sw=%e\n",here->cbs0sw);
  fprintf(stdout,"instance: cbd0=%e\n",here->cbd0);
  fprintf(stdout,"instance: cbd0sw=%e\n",here->cbd0sw);
  fprintf(stdout,"instance: cgso=%e\n",here->cgso);
  fprintf(stdout,"instance: cgdo=%e\n",here->cgdo);
  fprintf(stdout,"instance: cgbo=%e\n",here->cgbo);
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

int ekvload(inModel,ckt)
     GENmodel *inModel;
     register CKTcircuit *ckt;
     /* actually load the current value into the 
      * sparse matrix previously provided 
      */
{
  register ekvmodel *model = (ekvmodel*)inModel;
  register ekvinstance *here;
  int ChargeComputationNeeded =  
                 ((ckt->CKTmode & (MODEAC | MODETRAN | MODEINITSMSIG)) ||
                 ((ckt->CKTmode & MODETRANOP) && (ckt->CKTmode & MODEUIC)))
                 ? 1 : 0;

  for ( ; model != NULL; model = model->ekvnextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->ekvinstances; here != NULL ; here = here->ekvnextInstance)
    {
{  here->JSVAL_di_si=0.0;
  here->JSVAL_di_b=0.0;
  here->JSVAL_si_si=0.0;
  here->JSVAL_si_b=0.0;
  here->JSVAL_di_di=0.0;
  here->JSVAL_si_di=0.0;
  here->JSVAL_di_g=0.0;
  here->JSVAL_si_g=0.0;
  here->JSVAL_b_si=0.0;
  here->JSVAL_b_b=0.0;
  here->JSVAL_b_di=0.0;
  here->JSVAL_b_g=0.0;
  here->JSVAL_d_d=0.0;
  here->JSVAL_d_di=0.0;
  here->JSVAL_di_d=0.0;
  here->JSVAL_s_s=0.0;
  here->JSVAL_s_si=0.0;
  here->JSVAL_si_s=0.0;
  here->JDVAL_di_si=0.0;
  here->JDVAL_di_b=0.0;
  here->JDVAL_si_si=0.0;
  here->JDVAL_si_b=0.0;
  here->JDVAL_di_di=0.0;
  here->JDVAL_si_di=0.0;
  here->JDVAL_di_g=0.0;
  here->JDVAL_si_g=0.0;
  here->JDVAL_b_si=0.0;
  here->JDVAL_b_b=0.0;
  here->JDVAL_b_di=0.0;
  here->JDVAL_b_g=0.0;
  here->JDVAL_g_si=0.0;
  here->JDVAL_g_b=0.0;
  here->JDVAL_g_di=0.0;
  here->JDVAL_g_g=0.0;

}
{
#include "ekv.hxx"
}
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
