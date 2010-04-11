/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:36 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "hicum2defs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

#define jacobian(a,b) here->PTR_J_##a##_##b##_required=1;
#define static_jacobian4(p,q,r,s)  jacobian(p,r) jacobian(p,s) jacobian(q,r) jacobian(q,s)
#define static_jacobian2s(p,q,r)   jacobian(p,r) jacobian(q,r)
#define static_jacobian2p(p,r,s)   jacobian(p,r) jacobian(p,s)
#define static_jacobian1(p,r)      jacobian(p,r)
#define dynamic_jacobian4(p,q,r,s) jacobian(p,r) jacobian(p,s) jacobian(q,r) jacobian(q,s)
#define dynamic_jacobian2s(p,q,r)  jacobian(p,r) jacobian(q,r)
#define dynamic_jacobian2p(p,r,s)  jacobian(p,r) jacobian(p,s)
#define dynamic_jacobian1(p,r)     jacobian(p,r)
#define whitenoise_jacobian4(p,q,r,s)
#define whitenoise_jacobian2s(p,q,r)
#define whitenoise_jacobian2p(p,r,s)
#define whitenoise_jacobian1(p)
#define flickernoise_jacobian4(p,q,r,s)
#define flickernoise_jacobian2s(p,q,r)
#define flickernoise_jacobian2p(p,r,s)
#define flickernoise_jacobian1(p)


int hicum2guesstopology (SMPmatrix *matrix, CKTcircuit *ckt, hicum2model *model, hicum2instance *here)
     /* guess topology */
{double twoq=0.0/0.0;
double czz=0.0/0.0;
double pocce=0.0/0.0;
double Q_j=0.0/0.0;
double v_j=0.0/0.0;
double s_q2=0.0/0.0;
double s_q=0.0/0.0;
double v_e=0.0/0.0;
double V_f=0.0/0.0;
double ETA=0.0/0.0;
double fQz=0.0/0.0;
double Qz_nom=0.0/0.0;
double Qz0=0.0/0.0;
double f_QR=0.0/0.0;
double avl=0.0/0.0;
double av=0.0/0.0;
double U0=0.0/0.0;
double v_q=0.0/0.0;
double v_bord=0.0/0.0;
double cdvj_dv=0.0/0.0;
double cv_j=0.0/0.0;
double cs_q2=0.0/0.0;
double cs_q=0.0/0.0;
double cv_e=0.0/0.0;
double cV_f=0.0/0.0;
double a_bpt=0.0/0.0;
double Tr=0.0/0.0;
double a_eg=0.0/0.0;
double aa=0.0/0.0;
double ab=0.0/0.0;
if
(((model->flsh!=0)&&(model->rth>=0.001)))
{
if
((model->cjei0>0.0))
{
model->vdj0=((2*model->vt0)*log((exp(((model->vdei*0.5)/model->vt0))-exp((((-0.5)*model->vdei)/model->vt0)))));
if
((1==1))
{
}
else
{
}
}
else
{
}
if
(((model->flcomp==0.0)||(model->flcomp==2.1)))
{
}
else
{
model->zetatef=((model->zetabet-model->zetact)-0.5);
model->dvg0=(model->vgb-model->vge);
}
if
((model->cjci0>0.0))
{
model->vdj0=((2*model->vt0)*log((exp(((model->vdci*0.5)/model->vt0))-exp((((-0.5)*model->vdci)/model->vt0)))));
if
((0==1))
{
}
else
{
}
}
else
{
}
if
((model->cjep0>0.0))
{
model->vdj0=((2*model->vt0)*log((exp(((model->vdep*0.5)/model->vt0))-exp((((-0.5)*model->vdep)/model->vt0)))));
if
((1==1))
{
}
else
{
}
}
else
{
}
ab=1.0;
aa=1.0;
a_eg=(model->vgbe_t0/model->vgbe_t);
ab=(((((model->cjep0_t/model->cjep0)*sqrt(a_eg))*model->vdep_t)*model->vdep_t)/(model->vdep*model->vdep));
aa=(((model->vdep/model->vdep_t)*(model->cjep0/model->cjep0_t))*pow(a_eg,(-1.5)));
ab=(((((model->cjei0_t/model->cjei0)*sqrt(a_eg))*model->vdei_t)*model->vdei_t)/(model->vdei*model->vdei));
aa=(((model->vdei/model->vdei_t)*(model->cjei0/model->cjei0_t))*pow(a_eg,(-1.5)));
if
((1.0>0.0))
{
model->vdj0=((2*model->vt0)*log((exp(((model->vdcx*0.5)/model->vt0))-exp((((-0.5)*model->vdcx)/model->vt0)))));
if
((0==1))
{
}
else
{
}
}
else
{
}
if
((model->cjs0>0.0))
{
model->vdj0=((2*model->vt0)*log((exp(((model->vds*0.5)/model->vt0))-exp((((-0.5)*model->vds)/model->vt0)))));
if
((0==1))
{
}
else
{
}
}
else
{
}
}
if
((model->flnqs!=0))
{
}
if
((model->ibeis>0.0))
{
}
else
{
}
if
((model->ireis>0.0))
{
}
else
{
}
Tr=model->tr;
a_bpt=0.05;
if
((model->ibcis>0.0))
{
}
else
{
}
if
((model->ibeps>0.0))
{
}
else
{
}
if
((model->ireps>0.0))
{
}
else
{
}
if
((model->ibcxs>0.0))
{
}
else
{
}
if
((model->itss>0.0))
{
if
((model->tsf>0.0))
{
}
else
{
}
}
else
{
}
if
((model->iscs>0.0))
{
}
else
{
}
if
(((model->flsh==1)&&(model->rth>=0.001)))
{
}
else
{
if
(((model->flsh==2)&&(model->rth>=0.001)))
{
}
}
if
((model->flnqs!=0))
{
}
  static_jacobian4(bi,ei,bi,ei)
  static_jacobian4(bi,ci,bi,ci)
  dynamic_jacobian4(b,ci,bi,ci)
  dynamic_jacobian2s(b,ci,tnode)
  dynamic_jacobian4(b,ci,bp,ci)
  dynamic_jacobian4(b,ci,b,ci)
  dynamic_jacobian4(b,ci,bi,ei)
  dynamic_jacobian4(b,ci,b,ci)
  dynamic_jacobian4(bp,ci,bp,ci)
if
((model->rbx>=0.001))
{
  static_jacobian2s(b,bp,tnode)
  static_jacobian4(b,bp,b,bp)
}
else
{
  static_jacobian4(b,bp,b,bp)
}
if
((model->rbi0>=0.001))
{
  static_jacobian4(bp,bi,ci,ei)
  static_jacobian4(bp,bi,bi,ci)
  static_jacobian4(bp,bi,bi,ei)
  static_jacobian2s(bp,bi,tnode)
  static_jacobian4(bp,bi,bp,bi)
  dynamic_jacobian4(bp,bi,bp,bi)
  dynamic_jacobian4(bp,bi,ci,ei)
  dynamic_jacobian4(bp,bi,bi,ci)
  dynamic_jacobian4(bp,bi,bi,ei)
  dynamic_jacobian2s(bp,bi,tnode)
}
else
{
  static_jacobian4(bp,bi,bp,bi)
}
if
((model->tunode==1.0))
{
  static_jacobian2s(bp,ei,tnode)
  static_jacobian4(bp,ei,bp,ei)
  static_jacobian4(bp,ei,bi,ei)
}
else
{
  static_jacobian2s(bi,ei,tnode)
  static_jacobian4(bi,ei,bp,ei)
  static_jacobian4(bi,ei,bi,ei)
}
  static_jacobian4(bp,ei,bi,ei)
  static_jacobian4(bp,ei,bi,ci)
  static_jacobian4(bp,ei,bp,ei)
  static_jacobian2s(bp,ei,tnode)
  static_jacobian4(bp,ei,bi,ei)
  static_jacobian4(bp,ei,bi,ci)
  static_jacobian4(bp,ei,bp,ei)
  static_jacobian2s(bp,ei,tnode)
  dynamic_jacobian4(bp,ei,bp,ei)
  dynamic_jacobian2s(bp,ei,tnode)
  static_jacobian4(bi,ei,bi,ei)
  static_jacobian2s(bi,ei,tnode)
  static_jacobian4(bi,ei,bi,ei)
  static_jacobian2s(bi,ei,tnode)
  static_jacobian4(bi,ei,ci,ei)
  static_jacobian4(bi,ei,bi,ci)
  static_jacobian4(bi,ei,bi,ei)
  static_jacobian2s(bi,ei,tnode)
  dynamic_jacobian4(bi,ei,bi,ei)
  dynamic_jacobian4(bi,ei,bi,ci)
  dynamic_jacobian2s(bi,ei,tnode)
  dynamic_jacobian4(bi,ei,ci,ei)
  dynamic_jacobian2s(bi,ei,xf4)
  static_jacobian4(bp,si,si,ci)
  static_jacobian4(bp,si,bp,ci)
  static_jacobian2s(bp,si,tnode)
  static_jacobian4(bp,ci,bi,ei)
  static_jacobian4(bp,ci,bi,ci)
  static_jacobian4(bp,ci,bp,ei)
  static_jacobian4(bp,ci,bp,ci)
  static_jacobian2s(bp,ci,tnode)
  dynamic_jacobian4(bp,ci,bi,ci)
  dynamic_jacobian2s(bp,ci,tnode)
  dynamic_jacobian4(bp,ci,bp,ci)
  dynamic_jacobian4(bp,ci,bi,ei)
  dynamic_jacobian4(b,e,b,e)
  dynamic_jacobian4(bp,e,bp,e)
  static_jacobian4(bi,ci,ci,ei)
  static_jacobian4(bi,ci,bi,ei)
  static_jacobian4(bi,ci,bi,ci)
  static_jacobian2s(bi,ci,tnode)
  dynamic_jacobian4(bi,ci,bi,ei)
  dynamic_jacobian4(bi,ci,bi,ci)
  dynamic_jacobian2s(bi,ci,tnode)
  dynamic_jacobian4(bi,ci,ci,ei)
  static_jacobian4(si,ci,bi,ei)
  static_jacobian4(si,ci,bi,ci)
  static_jacobian4(si,ci,bp,ei)
  static_jacobian4(si,ci,bp,ci)
  static_jacobian4(si,ci,si,ci)
  static_jacobian2s(si,ci,tnode)
  dynamic_jacobian4(si,ci,bi,ci)
  dynamic_jacobian2s(si,ci,tnode)
  dynamic_jacobian4(si,ci,bp,ci)
  dynamic_jacobian4(si,ci,b,ci)
  dynamic_jacobian4(si,ci,si,ci)
  dynamic_jacobian4(si,ci,bi,ei)
  static_jacobian4(ci,ei,bi,ci)
  static_jacobian4(ci,ei,bi,ei)
  static_jacobian2s(ci,ei,tnode)
  static_jacobian4(ci,ei,ci,ei)
  static_jacobian2s(ci,ei,xf2)
  static_jacobian4(ei,ci,bi,ei)
  static_jacobian4(ei,ci,bi,ci)
  static_jacobian2s(ei,ci,tnode)
  static_jacobian4(ei,ci,ci,ei)
if
((model->rcx>=0.001))
{
  static_jacobian2s(ci,c,tnode)
  static_jacobian4(ci,c,ci,c)
}
else
{
  static_jacobian4(ci,c,ci,c)
}
if
((model->re>=0.001))
{
  static_jacobian2s(ei,e,tnode)
  static_jacobian4(ei,e,ei,e)
}
else
{
  static_jacobian4(ei,e,ei,e)
}
if
((model->rsu>=0.001))
{
  static_jacobian4(si,s,si,s)
  dynamic_jacobian4(si,s,si,s)
}
else
{
  static_jacobian4(si,s,si,s)
}
if
(((model->flsh==0)||(model->rth<0.001)))
{
  static_jacobian1(tnode,tnode)
}
else
{
  static_jacobian2p(tnode,bi,ci)
  static_jacobian2p(tnode,bi,ei)
  static_jacobian2p(tnode,ci,ei)
  static_jacobian2p(tnode,si,ci)
  static_jacobian2p(tnode,bp,ci)
  static_jacobian2p(tnode,bp,ei)
  static_jacobian2p(tnode,bp,bi)
  static_jacobian2p(tnode,ei,e)
  static_jacobian2p(tnode,ci,c)
  static_jacobian2p(tnode,b,bp)
  static_jacobian1(tnode,tnode)
  dynamic_jacobian1(tnode,tnode)
}
if
((model->flnqs!=0))
{
  static_jacobian2p(xf1,bi,ci)
  static_jacobian2p(xf1,bi,ei)
  static_jacobian1(xf1,tnode)
  static_jacobian2p(xf1,ci,ei)
  static_jacobian1(xf1,xf2)
  dynamic_jacobian1(xf1,xf1)
  static_jacobian2p(xf2,bi,ci)
  static_jacobian1(xf2,tnode)
  static_jacobian2p(xf2,bi,ei)
  static_jacobian2p(xf2,ci,ei)
  static_jacobian1(xf2,xf1)
  static_jacobian1(xf2,xf2)
  dynamic_jacobian1(xf2,xf2)
  static_jacobian2p(xf3,bi,ei)
  static_jacobian2p(xf3,bi,ci)
  static_jacobian1(xf3,tnode)
  static_jacobian2p(xf3,ci,ei)
  static_jacobian1(xf3,xf4)
  dynamic_jacobian1(xf3,xf3)
  static_jacobian2p(xf4,bi,ci)
  static_jacobian1(xf4,tnode)
  static_jacobian2p(xf4,bi,ei)
  static_jacobian2p(xf4,ci,ei)
  static_jacobian1(xf4,xf3)
  static_jacobian1(xf4,xf4)
  dynamic_jacobian1(xf4,xf4)
}
else
{
  static_jacobian1(xf1,xf1)
  static_jacobian1(xf2,xf2)
  static_jacobian1(xf3,xf3)
  static_jacobian1(xf4,xf4)
}
if
((model->rbx>=0.001))
{
  static_jacobian2s(b,bp,tnode)
}
if
((model->rbi0>=0.001))
{
  static_jacobian4(bp,bi,ci,ei)
  static_jacobian4(bp,bi,bi,ci)
  static_jacobian4(bp,bi,bi,ei)
  static_jacobian2s(bp,bi,tnode)
}
if
((model->rcx>=0.001))
{
  static_jacobian2s(ci,c,tnode)
}
if
((model->re>=0.001))
{
  static_jacobian2s(ei,e,tnode)
}
if
((model->rsu>=0.001))
{
  static_jacobian2s(si,s,tnode)
}
if
((model->cfbe==(-1)))
{
  static_jacobian4(bi,ei,bi,ci)
  static_jacobian4(bi,ei,bp,ei)
  static_jacobian4(bi,ei,bi,ei)
  static_jacobian2s(bi,ei,tnode)
}
else
{
  static_jacobian4(bp,ei,bi,ci)
  static_jacobian4(bp,ei,bp,ei)
  static_jacobian4(bp,ei,bi,ei)
  static_jacobian2s(bp,ei,tnode)
}
twoq=(2.0*1.602176462e-19);
  static_jacobian4(ci,bi,bi,ci)
  static_jacobian4(ci,bi,bi,ei)
  static_jacobian2s(ci,bi,tnode)
  static_jacobian4(ci,bi,ci,ei)
  static_jacobian4(bi,ci,bi,ei)
  static_jacobian4(bi,ci,bi,ci)
  static_jacobian2s(bi,ci,tnode)
  static_jacobian4(bp,ei,bi,ei)
  static_jacobian4(bp,ei,bi,ci)
  static_jacobian4(bp,ei,bp,ei)
  static_jacobian2s(bp,ei,tnode)
  static_jacobian4(bp,ci,bi,ei)
  static_jacobian4(bp,ci,bi,ci)
  static_jacobian4(bp,ci,bp,ei)
  static_jacobian4(bp,ci,bp,ci)
  static_jacobian2s(bp,ci,tnode)
  static_jacobian4(si,ci,bi,ei)
  static_jacobian4(si,ci,bi,ci)
  static_jacobian4(si,ci,bp,ei)
  static_jacobian4(si,ci,bp,ci)
  static_jacobian4(si,ci,si,ci)
  static_jacobian2s(si,ci,tnode)

  return(OK);
}
