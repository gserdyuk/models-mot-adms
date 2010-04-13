/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:12:43 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "ekvdefs.h"
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


int ekvguesstopology (SMPmatrix *matrix, CKTcircuit *ckt, ekvmodel *model, ekvinstance *here)
     /* guess topology */
{double nau=0.0/0.0;
nau=((5+model->MTYPE)/12.0);
if
((model->E0!=0))
{
}
else
{
}
if
((here->cbs0>0))
{
}
if
((here->cbd0>0))
{
}
if
((here->cbs0sw>0))
{
}
if
((here->cbd0sw>0))
{
}
  static_jacobian4(di,si,si,b)
  static_jacobian4(di,si,di,b)
  static_jacobian4(di,si,g,b)
  static_jacobian4(b,si,si,b)
  static_jacobian4(b,si,di,b)
  static_jacobian4(b,si,g,b)
  static_jacobian4(b,di,di,b)
  static_jacobian4(b,di,si,b)
  static_jacobian4(b,di,g,b)
  dynamic_jacobian4(b,g,si,b)
  dynamic_jacobian4(b,g,di,b)
  dynamic_jacobian4(b,g,g,b)
  dynamic_jacobian4(g,si,g,si)
  dynamic_jacobian4(g,di,g,di)
  dynamic_jacobian4(g,b,g,b)
if
((here->RD>0))
{
  static_jacobian4(d,di,d,di)
}
else
{
here->diNode = here->dNode; /* nnode collapsed */ 
}
if
((here->RS>0))
{
  static_jacobian4(s,si,s,si)
}
else
{
here->siNode = here->sNode; /* nnode collapsed */ 
}
  dynamic_jacobian4(b,si,b,si)
  dynamic_jacobian4(b,di,b,di)

  return(OK);
}
