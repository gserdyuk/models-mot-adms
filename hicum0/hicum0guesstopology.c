/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:14:44 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "hicum0defs.h"
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


int hicum0guesstopology (SMPmatrix *matrix, CKTcircuit *ckt, hicum0model *model, hicum0instance *here)
     /* guess topology */
{double twoq=0.0/0.0;
double ickr=0.0/0.0;
double ickf=0.0/0.0;
double dvg=0.0/0.0;
double zetatef=0.0/0.0;
double vdj0=0.0/0.0;
double arg=0.0/0.0;
double zetasct=0.0/0.0;
double zetabci=0.0/0.0;
double mg=0.0/0.0;
double vgsc=0.0/0.0;
double vgbc=0.0/0.0;
double vgbe=0.0/0.0;
double avs=0.0/0.0;
double Vt0=0.0/0.0;
double Tamb=0.0/0.0;
double Tnom=0.0/0.0;
Tnom=(model->tnom+273.15);
Tamb=_circuit_temp;
Vt0=((1.3806503e-23*Tnom)/1.602176462e-19);
avs=(model->alvs*Tnom);
vgbe=((model->vgb+model->vge)/2);
vgbc=((model->vgb+model->vgc)/2);
vgsc=((model->vgs+model->vgc)/2);
mg=(3-((1.602176462e-19*model->f1vg)/1.3806503e-23));
zetabci=((mg+1)-model->zetaci);
zetasct=(mg-1.5);
arg=((0.5*model->vde)/Vt0);
vdj0=((2*Vt0)*log((exp(arg)-exp((-arg)))));
arg=((0.5*model->vdci)/Vt0);
vdj0=((2*Vt0)*log((exp(arg)-exp((-arg)))));
arg=((0.5*model->vdcx)/Vt0);
vdj0=((2*Vt0)*log((exp(arg)-exp((-arg)))));
arg=((0.5*model->vds)/Vt0);
vdj0=((2*Vt0)*log((exp(arg)-exp((-arg)))));
zetatef=((model->zetabet-model->zetact)-0.5);
dvg=(model->vgb-model->vge);
if
((model->vptci<1.0e2))
{
}
else
{
}
ickf=model->iqf;
ickr=model->iqr;
if
((model->ibes>0.0))
{
}
else
{
}
if
((model->ires>0.0))
{
}
else
{
}
if
((model->ibcs>0.0))
{
}
else
{
}
if
((model->itss>0.0))
{
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
((model->vpts<1.0e2))
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
  static_jacobian4(bi,ei,bi,ei)
  static_jacobian4(bi,ci,bi,ci)
  static_jacobian4(b,s,s,ci)
  static_jacobian4(b,s,b,ci)
  static_jacobian2s(b,s,tnode)
  static_jacobian4(s,ci,bi,ei)
  static_jacobian4(s,ci,bi,ci)
  static_jacobian4(s,ci,s,ci)
  static_jacobian2s(s,ci,tnode)
  dynamic_jacobian4(s,ci,b,ci)
  dynamic_jacobian2s(s,ci,tnode)
  dynamic_jacobian4(s,ci,bi,ci)
  dynamic_jacobian4(s,ci,s,ci)
  dynamic_jacobian4(s,ci,bi,ei)
  dynamic_jacobian4(s,ci,ci,ei)
  dynamic_jacobian4(b,ci,b,ci)
  dynamic_jacobian2s(b,ci,tnode)
  dynamic_jacobian4(b,ci,bi,ci)
  dynamic_jacobian4(b,ci,b,ci)
  dynamic_jacobian4(b,e,b,e)
if
((model->re>=0.001))
{
  static_jacobian2s(ei,e,tnode)
  static_jacobian4(ei,e,ei,e)
}
else
{
here->eiNode = here->eNode; /* pnode collapsed */ 
}
if
((model->rcx>=0.001))
{
  static_jacobian2s(ci,c,tnode)
  static_jacobian4(ci,c,ci,c)
}
else
{
here->ciNode = here->cNode; /* pnode collapsed */ 
}
if
(((model->rbi0>=0.001)||(model->rbx>=0.001)))
{
  static_jacobian4(b,bi,ci,ei)
  static_jacobian4(b,bi,b,ci)
  static_jacobian4(b,bi,bi,ci)
  static_jacobian4(b,bi,bi,ei)
  static_jacobian2s(b,bi,tnode)
  static_jacobian4(b,bi,b,bi)
}
else
{
here->biNode = here->bNode; /* nnode collapsed */ 
}
  static_jacobian4(bi,ci,ci,ei)
  static_jacobian4(bi,ci,b,ci)
  static_jacobian4(bi,ci,bi,ei)
  static_jacobian4(bi,ci,bi,ci)
  static_jacobian2s(bi,ci,tnode)
  dynamic_jacobian4(bi,ci,ci,ei)
  dynamic_jacobian4(bi,ci,bi,ei)
  dynamic_jacobian4(bi,ci,b,ci)
  dynamic_jacobian2s(bi,ci,tnode)
  dynamic_jacobian4(bi,ci,bi,ci)
  static_jacobian4(bi,ei,bi,ei)
  static_jacobian2s(bi,ei,tnode)
  dynamic_jacobian4(bi,ei,ci,ei)
  dynamic_jacobian4(bi,ei,b,ci)
  dynamic_jacobian4(bi,ei,bi,ci)
  dynamic_jacobian4(bi,ei,bi,ei)
  dynamic_jacobian2s(bi,ei,tnode)
  static_jacobian4(ci,ei,ci,ei)
  static_jacobian4(ci,ei,b,ci)
  static_jacobian4(ci,ei,bi,ci)
  static_jacobian4(ci,ei,bi,ei)
  static_jacobian2s(ci,ei,tnode)
if
(((model->flsh==0)||(model->rth<0.001)))
{
  static_jacobian1(tnode,tnode)
}
else
{
  static_jacobian2p(tnode,ci,ei)
  static_jacobian2p(tnode,b,ci)
  static_jacobian2p(tnode,bi,ci)
  static_jacobian2p(tnode,bi,ei)
  static_jacobian2p(tnode,s,ci)
  static_jacobian2p(tnode,b,bi)
  static_jacobian2p(tnode,ei,e)
  static_jacobian2p(tnode,ci,c)
  static_jacobian1(tnode,tnode)
  dynamic_jacobian1(tnode,tnode)
}
if
(((model->rbx>=0.001)||(model->rbi0>=0.001)))
{
  static_jacobian4(b,bi,ci,ei)
  static_jacobian4(b,bi,b,ci)
  static_jacobian4(b,bi,bi,ci)
  static_jacobian4(b,bi,bi,ei)
  static_jacobian2s(b,bi,tnode)
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
twoq=(2.0*1.602176462e-19);
  static_jacobian4(bi,ei,bi,ei)
  static_jacobian2s(bi,ei,tnode)
  static_jacobian4(ci,ei,ci,ei)
  static_jacobian4(ci,ei,b,ci)
  static_jacobian4(ci,ei,bi,ci)
  static_jacobian4(ci,ei,bi,ei)
  static_jacobian2s(ci,ei,tnode)
  static_jacobian4(bi,ei,bi,ei)
  static_jacobian2s(bi,ei,tnode)

  return(OK);
}
