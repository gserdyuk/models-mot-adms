/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 11 Apr 2010 16:28:31 ***/

#define NGSPICE_DEBUG_OK


#include "ngspice.h"
#include "cktdefs.h"
#include "rtestdefs.h"
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
void rtestdebug (CKTcircuit *ckt, rtestmodel *model, rtestinstance *here)
{
  fprintf(stdout,"voltage: top=%e\n",NP(top));
  fprintf(stdout,"voltage: low=%e\n",NP(low));
  fprintf(stdout,"Parameter: model: d=%i\n",model->d);
  fprintf(stdout,"Parameter: model: R1=%e\n",model->R1);
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

int rtestload(inModel,ckt)
     GENmodel *inModel;
     register CKTcircuit *ckt;
     /* actually load the current value into the 
      * sparse matrix previously provided 
      */
{
  register rtestmodel *model = (rtestmodel*)inModel;
  register rtestinstance *here;
  int ChargeComputationNeeded =  
                 ((ckt->CKTmode & (MODEAC | MODETRAN | MODEINITSMSIG)) ||
                 ((ckt->CKTmode & MODETRANOP) && (ckt->CKTmode & MODEUIC)))
                 ? 1 : 0;

  for ( ; model != NULL; model = model->rtestnextModel )
  {
    /* loop through all the instances of the model */
    for (here = model->rtestinstances; here != NULL ; here = here->rtestnextInstance)
    {
{  here->JSVAL_top_top=0.0;
  here->JSVAL_top_low=0.0;
  here->JSVAL_low_top=0.0;
  here->JSVAL_low_low=0.0;

}
{
#include "rtest.hxx"
}
    } /* End of Instance */
  } /* End of Model */
  return(OK);
}
