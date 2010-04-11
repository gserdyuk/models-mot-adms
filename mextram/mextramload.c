/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:15 ***/

#define NGSPICE_DEBUG_OK


#include "ngspice.h"
#include "cktdefs.h"
#include "mextramdefs.h"
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
void mextramdebug (CKTcircuit *ckt, mextrammodel *model, mextraminstance *here)
{
  fprintf(stdout,"voltage: c=%e\n",NP(c));
  fprintf(stdout,"voltage: b=%e\n",NP(b));
  fprintf(stdout,"voltage: e=%e\n",NP(e));
  fprintf(stdout,"voltage: s=%e\n",NP(s));
  fprintf(stdout,"voltage: dt=%e\n",NP(dt));
  fprintf(stdout,"voltage: c1=%e\n",NP(c1));
  fprintf(stdout,"voltage: e1=%e\n",NP(e1));
  fprintf(stdout,"voltage: b1=%e\n",NP(b1));
  fprintf(stdout,"voltage: b2=%e\n",NP(b2));
  fprintf(stdout,"voltage: c2=%e\n",NP(c2));
  fprintf(stdout,"voltage: c3=%e\n",NP(c3));
  fprintf(stdout,"voltage: c4=%e\n",NP(c4));
  fprintf(stdout,"voltage: noi=%e\n",NP(noi));
  fprintf(stdout,"Parameter: model: pnp=%i\n",model->pnp);
  fprintf(stdout,"Parameter: model: npn=%i\n",model->npn);
  fprintf(stdout,"Parameter: model: LEVEL=%i\n",model->LEVEL);
  fprintf(stdout,"Parameter: model: TREF=%e\n",model->TREF);
  fprintf(stdout,"Parameter: model: DTA=%e\n",model->DTA);
  fprintf(stdout,"Parameter: model: EXMOD=%i\n",model->EXMOD);
  fprintf(stdout,"Parameter: model: EXPHI=%i\n",model->EXPHI);
  fprintf(stdout,"Parameter: model: EXAVL=%i\n",model->EXAVL);
  fprintf(stdout,"Parameter: model: IS=%e\n",model->IS);
  fprintf(stdout,"Parameter: model: IK=%e\n",model->IK);
  fprintf(stdout,"Parameter: model: VER=%e\n",model->VER);
  fprintf(stdout,"Parameter: model: VEF=%e\n",model->VEF);
  fprintf(stdout,"Parameter: model: BF=%e\n",model->BF);
  fprintf(stdout,"Parameter: model: IBF=%e\n",model->IBF);
  fprintf(stdout,"Parameter: model: MLF=%e\n",model->MLF);
  fprintf(stdout,"Parameter: model: XIBI=%e\n",model->XIBI);
  fprintf(stdout,"Parameter: model: BRI=%e\n",model->BRI);
  fprintf(stdout,"Parameter: model: IBR=%e\n",model->IBR);
  fprintf(stdout,"Parameter: model: VLR=%e\n",model->VLR);
  fprintf(stdout,"Parameter: model: XEXT=%e\n",model->XEXT);
  fprintf(stdout,"Parameter: model: WAVL=%e\n",model->WAVL);
  fprintf(stdout,"Parameter: model: VAVL=%e\n",model->VAVL);
  fprintf(stdout,"Parameter: model: SFH=%e\n",model->SFH);
  fprintf(stdout,"Parameter: model: RE=%e\n",model->RE);
  fprintf(stdout,"Parameter: model: RBC=%e\n",model->RBC);
  fprintf(stdout,"Parameter: model: RBV=%e\n",model->RBV);
  fprintf(stdout,"Parameter: model: RCC=%e\n",model->RCC);
  fprintf(stdout,"Parameter: model: RCV=%e\n",model->RCV);
  fprintf(stdout,"Parameter: model: SCRCV=%e\n",model->SCRCV);
  fprintf(stdout,"Parameter: model: IHC=%e\n",model->IHC);
  fprintf(stdout,"Parameter: model: AXI=%e\n",model->AXI);
  fprintf(stdout,"Parameter: model: CJE=%e\n",model->CJE);
  fprintf(stdout,"Parameter: model: VDE=%e\n",model->VDE);
  fprintf(stdout,"Parameter: model: PE=%e\n",model->PE);
  fprintf(stdout,"Parameter: model: XCJE=%e\n",model->XCJE);
  fprintf(stdout,"Parameter: model: CBEO=%e\n",model->CBEO);
  fprintf(stdout,"Parameter: model: CJC=%e\n",model->CJC);
  fprintf(stdout,"Parameter: model: VDC=%e\n",model->VDC);
  fprintf(stdout,"Parameter: model: PC=%e\n",model->PC);
  fprintf(stdout,"Parameter: model: XP=%e\n",model->XP);
  fprintf(stdout,"Parameter: model: MC=%e\n",model->MC);
  fprintf(stdout,"Parameter: model: XCJC=%e\n",model->XCJC);
  fprintf(stdout,"Parameter: model: RCBLX=%e\n",model->RCBLX);
  fprintf(stdout,"Parameter: model: RCBLI=%e\n",model->RCBLI);
  fprintf(stdout,"Parameter: model: CBCO=%e\n",model->CBCO);
  fprintf(stdout,"Parameter: model: MTAU=%e\n",model->MTAU);
  fprintf(stdout,"Parameter: model: TAUE=%e\n",model->TAUE);
  fprintf(stdout,"Parameter: model: TAUB=%e\n",model->TAUB);
  fprintf(stdout,"Parameter: model: TEPI=%e\n",model->TEPI);
  fprintf(stdout,"Parameter: model: TAUR=%e\n",model->TAUR);
  fprintf(stdout,"Parameter: model: DEG=%e\n",model->DEG);
  fprintf(stdout,"Parameter: model: XREC=%e\n",model->XREC);
  fprintf(stdout,"Parameter: model: AQBO=%e\n",model->AQBO);
  fprintf(stdout,"Parameter: model: AE=%e\n",model->AE);
  fprintf(stdout,"Parameter: model: AB=%e\n",model->AB);
  fprintf(stdout,"Parameter: model: AEPI=%e\n",model->AEPI);
  fprintf(stdout,"Parameter: model: AEX=%e\n",model->AEX);
  fprintf(stdout,"Parameter: model: AC=%e\n",model->AC);
  fprintf(stdout,"Parameter: model: ACBL=%e\n",model->ACBL);
  fprintf(stdout,"Parameter: model: DVGBF=%e\n",model->DVGBF);
  fprintf(stdout,"Parameter: model: DVGBR=%e\n",model->DVGBR);
  fprintf(stdout,"Parameter: model: VGB=%e\n",model->VGB);
  fprintf(stdout,"Parameter: model: VGC=%e\n",model->VGC);
  fprintf(stdout,"Parameter: model: VGJ=%e\n",model->VGJ);
  fprintf(stdout,"Parameter: model: DVGTE=%e\n",model->DVGTE);
  fprintf(stdout,"Parameter: model: DAIS=%e\n",model->DAIS);
  fprintf(stdout,"Parameter: model: AF=%e\n",model->AF);
  fprintf(stdout,"Parameter: model: KF=%e\n",model->KF);
  fprintf(stdout,"Parameter: model: KFN=%e\n",model->KFN);
  fprintf(stdout,"Parameter: model: KAVL=%i\n",model->KAVL);
  fprintf(stdout,"Parameter: model: ISS=%e\n",model->ISS);
  fprintf(stdout,"Parameter: model: IKS=%e\n",model->IKS);
  fprintf(stdout,"Parameter: model: CJS=%e\n",model->CJS);
  fprintf(stdout,"Parameter: model: VDS=%e\n",model->VDS);
  fprintf(stdout,"Parameter: model: PS=%e\n",model->PS);
  fprintf(stdout,"Parameter: model: VGS=%e\n",model->VGS);
  fprintf(stdout,"Parameter: model: AS=%e\n",model->AS);
  fprintf(stdout,"Parameter: model: RTH=%e\n",model->RTH);
  fprintf(stdout,"Parameter: model: CTH=%e\n",model->CTH);
  fprintf(stdout,"Parameter: model: ATH=%e\n",model->ATH);
  fprintf(stdout,"Parameter: model: MULT=%e\n",model->MULT);
  fprintf(stdout,"Parameter: model: TYPE=%i\n",model->TYPE);
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

int mextramload(inModel,ckt)
     GENmodel *inModel;
     register CKTcircuit *ckt;
     /* actually load the current value into the 
      * sparse matrix previously provided 
      */
{
  register mextrammodel *model = (mextrammodel*)inModel;
  register mextraminstance *here;
  int ChargeComputationNeeded =  
                 ((ckt->CKTmode & (MODEAC | MODETRAN | MODEINITSMSIG)) ||
                 ((ckt->CKTmode & MODETRANOP) && (ckt->CKTmode & MODEUIC)))
                 ? 1 : 0;

  for ( ; model != NULL; model = model->mextramnextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->mextraminstances; here != NULL ; here = here->mextramnextInstance)
    {
{  here->JSVAL_c1_c1=0.0;
  here->JSVAL_c1_c2=0.0;
  here->JSVAL_c2_c1=0.0;
  here->JSVAL_c2_c2=0.0;
  here->JSVAL_c1_b2=0.0;
  here->JSVAL_c2_b2=0.0;
  here->JSVAL_c1_dt=0.0;
  here->JSVAL_c2_dt=0.0;
  here->JSVAL_e1_c1=0.0;
  here->JSVAL_e1_c2=0.0;
  here->JSVAL_e1_b2=0.0;
  here->JSVAL_c2_e1=0.0;
  here->JSVAL_e1_e1=0.0;
  here->JSVAL_e1_dt=0.0;
  here->JSVAL_b1_b1=0.0;
  here->JSVAL_b1_e1=0.0;
  here->JSVAL_e1_b1=0.0;
  here->JSVAL_b1_dt=0.0;
  here->JSVAL_b2_b2=0.0;
  here->JSVAL_b2_e1=0.0;
  here->JSVAL_b2_dt=0.0;
  here->JSVAL_b2_c1=0.0;
  here->JSVAL_b2_c2=0.0;
  here->JSVAL_b1_c4=0.0;
  here->JSVAL_b1_c1=0.0;
  here->JSVAL_s_c4=0.0;
  here->JSVAL_s_c1=0.0;
  here->JSVAL_b1_c2=0.0;
  here->JSVAL_s_c2=0.0;
  here->JSVAL_b1_b2=0.0;
  here->JSVAL_s_b2=0.0;
  here->JSVAL_s_b1=0.0;
  here->JSVAL_s_dt=0.0;
  here->JSVAL_b_c1=0.0;
  here->JSVAL_b_c2=0.0;
  here->JSVAL_b_b2=0.0;
  here->JSVAL_b_e1=0.0;
  here->JSVAL_s_e1=0.0;
  here->JSVAL_b_c3=0.0;
  here->JSVAL_b_c4=0.0;
  here->JSVAL_s_c3=0.0;
  here->JSVAL_b_b1=0.0;
  here->JSVAL_b_b=0.0;
  here->JSVAL_s_b=0.0;
  here->JSVAL_b_c=0.0;
  here->JSVAL_s_c=0.0;
  here->JSVAL_b_dt=0.0;
  here->JSVAL_s_s=0.0;
  here->JSVAL_c1_s=0.0;
  here->JSVAL_b1_c3=0.0;
  here->JSVAL_b2_c3=0.0;
  here->JSVAL_b2_c4=0.0;
  here->JSVAL_b1_b=0.0;
  here->JSVAL_b2_b=0.0;
  here->JSVAL_b2_b1=0.0;
  here->JSVAL_b1_c=0.0;
  here->JSVAL_b2_c=0.0;
  here->JSVAL_c2_c3=0.0;
  here->JSVAL_c2_c4=0.0;
  here->JSVAL_c2_b1=0.0;
  here->JSVAL_c2_b=0.0;
  here->JSVAL_c2_c=0.0;
  here->JSVAL_e_dt=0.0;
  here->JSVAL_e_e=0.0;
  here->JSVAL_e_e1=0.0;
  here->JSVAL_e1_e=0.0;
  here->JSVAL_dt_dt=0.0;
  here->JSVAL_dt_s=0.0;
  here->JSVAL_dt_c1=0.0;
  here->JSVAL_dt_b1=0.0;
  here->JSVAL_dt_e1=0.0;
  here->JSVAL_dt_e=0.0;
  here->JSVAL_dt_c3=0.0;
  here->JSVAL_dt_c4=0.0;
  here->JSVAL_dt_b2=0.0;
  here->JSVAL_dt_b=0.0;
  here->JSVAL_dt_c=0.0;
  here->JSVAL_dt_c2=0.0;
  here->JSVAL_noi_noi=0.0;
  here->JSVAL_noi_e1=0.0;
  here->JSVAL_e1_noi=0.0;
  here->JSVAL_b2_noi=0.0;
  here->JSVAL_c2_noi=0.0;
  here->JSVAL_c1_e1=0.0;
  here->JSVAL_c1_b1=0.0;
  here->JSVAL_c1_c4=0.0;
  here->JSVAL_c1_c3=0.0;
  here->JSVAL_c1_b=0.0;
  here->JSVAL_c1_c=0.0;
  here->JSVAL_c_b=0.0;
  here->JSVAL_c_c=0.0;
  here->JSVAL_c3_c1=0.0;
  here->JSVAL_c3_c2=0.0;
  here->JSVAL_c3_b2=0.0;
  here->JSVAL_c3_e1=0.0;
  here->JSVAL_c3_c3=0.0;
  here->JSVAL_c3_c4=0.0;
  here->JSVAL_c3_b1=0.0;
  here->JSVAL_c3_b=0.0;
  here->JSVAL_c3_c=0.0;
  here->JSVAL_c3_dt=0.0;
  here->JSVAL_c_dt=0.0;
  here->JSVAL_c_c3=0.0;
  here->JSVAL_c_c4=0.0;
  here->JSVAL_c_c1=0.0;
  here->JSVAL_c_c2=0.0;
  here->JSVAL_c_b2=0.0;
  here->JSVAL_c_b1=0.0;
  here->JSVAL_c4_dt=0.0;
  here->JSVAL_c4_c4=0.0;
  here->JSVAL_c4_c1=0.0;
  here->JSVAL_c4_b2=0.0;
  here->JSVAL_c4_e1=0.0;
  here->JSVAL_c4_c2=0.0;
  here->JSVAL_c4_b1=0.0;
  here->JSVAL_c4_c3=0.0;
  here->JSVAL_c4_b=0.0;
  here->JSVAL_c4_c=0.0;
  here->JSVAL_noi_b2=0.0;
  here->JSVAL_noi_c1=0.0;
  here->JSVAL_noi_c2=0.0;
  here->JSVAL_noi_dt=0.0;
  here->JDVAL_c1_c1=0.0;
  here->JDVAL_c1_c2=0.0;
  here->JDVAL_c2_c1=0.0;
  here->JDVAL_c2_c2=0.0;
  here->JDVAL_c1_b2=0.0;
  here->JDVAL_c2_b2=0.0;
  here->JDVAL_c1_dt=0.0;
  here->JDVAL_c2_dt=0.0;
  here->JDVAL_e1_c1=0.0;
  here->JDVAL_e1_c2=0.0;
  here->JDVAL_e1_b2=0.0;
  here->JDVAL_c2_e1=0.0;
  here->JDVAL_e1_e1=0.0;
  here->JDVAL_e1_dt=0.0;
  here->JDVAL_b1_b1=0.0;
  here->JDVAL_b1_e1=0.0;
  here->JDVAL_e1_b1=0.0;
  here->JDVAL_b1_dt=0.0;
  here->JDVAL_b2_b2=0.0;
  here->JDVAL_b2_e1=0.0;
  here->JDVAL_b2_dt=0.0;
  here->JDVAL_b2_c1=0.0;
  here->JDVAL_b2_c2=0.0;
  here->JDVAL_b1_c4=0.0;
  here->JDVAL_b1_c1=0.0;
  here->JDVAL_s_c4=0.0;
  here->JDVAL_s_c1=0.0;
  here->JDVAL_b1_c2=0.0;
  here->JDVAL_s_c2=0.0;
  here->JDVAL_b1_b2=0.0;
  here->JDVAL_s_b2=0.0;
  here->JDVAL_s_b1=0.0;
  here->JDVAL_s_dt=0.0;
  here->JDVAL_b_c1=0.0;
  here->JDVAL_b_c2=0.0;
  here->JDVAL_b_b2=0.0;
  here->JDVAL_b_e1=0.0;
  here->JDVAL_s_e1=0.0;
  here->JDVAL_b_c3=0.0;
  here->JDVAL_b_c4=0.0;
  here->JDVAL_s_c3=0.0;
  here->JDVAL_b_b1=0.0;
  here->JDVAL_b_b=0.0;
  here->JDVAL_s_b=0.0;
  here->JDVAL_b_c=0.0;
  here->JDVAL_s_c=0.0;
  here->JDVAL_b_dt=0.0;
  here->JDVAL_s_s=0.0;
  here->JDVAL_c1_s=0.0;
  here->JDVAL_b1_c3=0.0;
  here->JDVAL_b2_c3=0.0;
  here->JDVAL_b2_c4=0.0;
  here->JDVAL_b1_b=0.0;
  here->JDVAL_b2_b=0.0;
  here->JDVAL_b2_b1=0.0;
  here->JDVAL_b1_c=0.0;
  here->JDVAL_b2_c=0.0;
  here->JDVAL_c2_c3=0.0;
  here->JDVAL_c2_c4=0.0;
  here->JDVAL_c2_b1=0.0;
  here->JDVAL_c2_b=0.0;
  here->JDVAL_c2_c=0.0;
  here->JDVAL_e_e=0.0;
  here->JDVAL_dt_dt=0.0;
  here->JDVAL_e1_c3=0.0;
  here->JDVAL_e1_c4=0.0;
  here->JDVAL_e1_b=0.0;
  here->JDVAL_e1_c=0.0;
  here->JDVAL_c1_e1=0.0;
  here->JDVAL_c1_b1=0.0;
  here->JDVAL_c1_c4=0.0;
  here->JDVAL_c1_c3=0.0;
  here->JDVAL_c1_b=0.0;
  here->JDVAL_c1_c=0.0;
  here->JDVAL_b_e=0.0;
  here->JDVAL_e_b=0.0;
  here->JDVAL_c_b=0.0;
  here->JDVAL_c_c=0.0;
  here->JDVAL_c3_c1=0.0;
  here->JDVAL_c3_c2=0.0;
  here->JDVAL_c3_b2=0.0;
  here->JDVAL_c3_e1=0.0;
  here->JDVAL_c3_c3=0.0;
  here->JDVAL_c3_c4=0.0;
  here->JDVAL_c3_b1=0.0;
  here->JDVAL_c3_b=0.0;
  here->JDVAL_c3_c=0.0;
  here->JDVAL_c3_dt=0.0;
  here->JDVAL_c4_dt=0.0;
  here->JDVAL_c4_c4=0.0;
  here->JDVAL_c4_c1=0.0;
  here->JDVAL_c4_b2=0.0;
  here->JDVAL_c4_e1=0.0;
  here->JDVAL_c4_c2=0.0;
  here->JDVAL_c4_b1=0.0;
  here->JDVAL_c4_c3=0.0;
  here->JDVAL_c4_b=0.0;
  here->JDVAL_c4_c=0.0;

}
{
#include "mextram.hxx"
}
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
