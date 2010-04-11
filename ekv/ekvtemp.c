/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Wed, 24 Mar 2010 00:50:59 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "ekvdefs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

#define _STATIC
#define _DYNAMIC

int ekvtemp(GENmodel *inModel, CKTcircuit *ckt)
{
  register ekvmodel *model = (ekvmodel*)inModel;
  register ekvinstance *here;
  for ( ; model != NULL; model = model->ekvnextModel )
  {
{
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,((((8.854187817e-12*11.7)/model->COX)*model->XJ)))
EXIT_IF_ISNAN(__sqrt_0)
model->lc=__sqrt_0;
EXIT_IF_ISNAN(model->lc)
}
}

    /* loop through all the instances of the model */
    for (here = model->ekvinstances; here != NULL ; here = here->ekvnextInstance)
    {
double xsi=0.0/0.0;
double ca=0.0/0.0;
double ceps=0.0/0.0;
{
here->weff=(here->W+model->DW);
EXIT_IF_ISNAN(here->weff)
here->leff=(here->L+model->DL);
EXIT_IF_ISNAN(here->leff)
here->np=here->M;
EXIT_IF_ISNAN(here->np)
here->ns=1;
EXIT_IF_ISNAN(here->ns)
here->lmin=((0.1*here->ns)*here->leff);
EXIT_IF_ISNAN(here->lmin)
here->rs=((here->ns/here->np)*here->RS);
EXIT_IF_ISNAN(here->rs)
here->rd=((here->ns/here->np)*here->RD);
EXIT_IF_ISNAN(here->rd)
ceps=((4*22e-3)*22e-3);
EXIT_IF_ISNAN(ceps)
ca=0.028;
EXIT_IF_ISNAN(ca)
xsi=(ca*(((10*here->leff)/model->LK)-1));
EXIT_IF_ISNAN(xsi)
{
double __sqrt_0=0.0;
double __sqrt_1=0.0;
_sqrt(__sqrt_0,(((xsi*xsi)+ceps)))
EXIT_IF_ISNAN(__sqrt_0)
_sqrt(__sqrt_1,(((xsi*xsi)+ceps)))
EXIT_IF_ISNAN(__sqrt_1)
here->dvrsce=(((2*model->Q0)/model->COX)/((1+(0.5*(xsi+__sqrt_0)))*(1+(0.5*(xsi+__sqrt_1)))));
EXIT_IF_ISNAN(here->dvrsce)
}
#if defined(_DYNAMIC)
here->coxt=((((here->np*here->ns)*model->COX)*here->weff)*here->leff);
EXIT_IF_ISNAN(here->coxt)
#endif /*_DYNAMIC*/
}
#if defined(_DERIVATE)
double tmp_Vg_b=0.0;
double tmp_Vdi_b=0.0;
double tmp_Vsi_b=0.0;
#endif /*_DERIVATE*/
double fact=0.0/0.0;
double sqrt_A=0.0/0.0;
double tempk=0.0/0.0;
{
tempk=_circuit_temp;
EXIT_IF_ISNAN(tempk)
here->vt=((1.3806503e-23*tempk)/1.602176462e-19);
EXIT_IF_ISNAN(here->vt)
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,((((here->np*here->weff)*here->ns)*here->leff)))
EXIT_IF_ISNAN(__sqrt_0)
sqrt_A=__sqrt_0;
EXIT_IF_ISNAN(sqrt_A)
}
here->vto_a=((model->MTYPE*(model->VTO+(model->TCV*(tempk-(model->TNOM+273.15)))))+(model->AVTO/sqrt_A));
EXIT_IF_ISNAN(here->vto_a)
{
double __pow_0=0.0;
_pow(__pow_0,(tempk/(model->TNOM+273.15)),model->BEX)
EXIT_IF_ISNAN(__pow_0)
here->kp_a=((model->KP*__pow_0)*(1+(model->AKP/sqrt_A)));
EXIT_IF_ISNAN(here->kp_a)
}
here->gamma_a=(model->GAMMA+(model->AGAMMA/sqrt_A));
EXIT_IF_ISNAN(here->gamma_a)
{
double __pow_0=0.0;
_pow(__pow_0,(tempk/(model->TNOM+273.15)),model->UCEX)
EXIT_IF_ISNAN(__pow_0)
here->ucrit=(model->UCRIT*__pow_0);
EXIT_IF_ISNAN(here->ucrit)
}
{
double __logE_0=0.0;
_logE(__logE_0,((tempk/(model->TNOM+273.15))))
EXIT_IF_ISNAN(__logE_0)
here->phi=(((((model->PHI*tempk)/(model->TNOM+273.15))-((3*here->vt)*__logE_0))-(((1.16-((0.000702*((model->TNOM+273.15)*(model->TNOM+273.15)))/((model->TNOM+273.15)+1108)))*tempk)/(model->TNOM+273.15)))+(1.16-((0.000702*(tempk*tempk))/(tempk+1108))));
EXIT_IF_ISNAN(here->phi)
}
here->ibb=(model->IBB*(1+(model->IBBT*(tempk-(model->TNOM+273.15)))));
EXIT_IF_ISNAN(here->ibb)
here->vc=((here->ucrit*here->ns)*here->leff);
EXIT_IF_ISNAN(here->vc)
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(here->phi))
EXIT_IF_ISNAN(__sqrt_0)
here->qb0=(here->gamma_a*__sqrt_0);
EXIT_IF_ISNAN(here->qb0)
}
{
double __pow_0=0.0;
_pow(__pow_0,(tempk/(model->TNOM+273.15)),model->XTI)
EXIT_IF_ISNAN(__pow_0)
fact=((((1.16-((0.000702*((model->TNOM+273.15)*(model->TNOM+273.15)))/((model->TNOM+273.15)+1108)))/((1.3806503e-23*model->TNOM)+(273.15/1.602176462e-19)))-((1.16-((0.000702*(tempk*tempk))/(tempk+1108)))/here->vt))*__pow_0);
EXIT_IF_ISNAN(fact)
}
{
double __fabs_0=0.0;
_fabs(__fabs_0,(fact))
EXIT_IF_ISNAN(__fabs_0)
if
((__fabs_0<2.3025850929940458e+02))
{
{
double __exp_0=0.0;
_exp(__exp_0,(fact))
EXIT_IF_ISNAN(__exp_0)
here->tmp=__exp_0;
EXIT_IF_ISNAN(here->tmp)
#if defined(_DERIVATE)
tmp_Vg_b=0.0;
tmp_Vdi_b=0.0;
tmp_Vsi_b=0.0;
#endif /*_DERIVATE*/
}
}
else
{
if
((fact<(-2.3025850929940458e+02)))
{
here->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-fact)*(1.0+(0.5*(((-2.3025850929940458e+02)-fact)*(1.0+(((-2.3025850929940458e+02)-fact)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN(here->tmp)
#if defined(_DERIVATE)
tmp_Vg_b=0.0;
tmp_Vdi_b=0.0;
tmp_Vsi_b=0.0;
#endif /*_DERIVATE*/
}
else
{
here->tmp=(1.0e100*(1.0+((fact-2.3025850929940458e+02)*(1.0+(0.5*((fact-2.3025850929940458e+02)*(1.0+((fact-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN(here->tmp)
#if defined(_DERIVATE)
tmp_Vg_b=0.0;
tmp_Vdi_b=0.0;
tmp_Vsi_b=0.0;
#endif /*_DERIVATE*/
}
}
}
;
here->isat_s=(((here->np*here->ns)*((model->JS*here->AS)+(model->JSW*here->PS)))*here->tmp);
EXIT_IF_ISNAN(here->isat_s)
here->isat_d=(((here->np*here->ns)*((model->JS*here->AD)+(model->JSW*here->PD)))*here->tmp);
EXIT_IF_ISNAN(here->isat_d)
if
((here->isat_s>0))
{
{
double __logE_0=0.0;
_logE(__logE_0,(((model->IMAX/here->isat_s)+1)))
EXIT_IF_ISNAN(__logE_0)
here->vexp_s=(here->vt*__logE_0);
EXIT_IF_ISNAN(here->vexp_s)
}
here->gexp_s=((model->IMAX+here->isat_s)/here->vt);
EXIT_IF_ISNAN(here->gexp_s)
}
else
{
here->vexp_s=(-1e9);
EXIT_IF_ISNAN(here->vexp_s)
here->gexp_s=0;
EXIT_IF_ISNAN(here->gexp_s)
}
if
((here->isat_d>0))
{
{
double __logE_0=0.0;
_logE(__logE_0,(((model->IMAX/here->isat_d)+1)))
EXIT_IF_ISNAN(__logE_0)
here->vexp_d=(here->vt*__logE_0);
EXIT_IF_ISNAN(here->vexp_d)
}
here->gexp_d=((model->IMAX+here->isat_d)/here->vt);
EXIT_IF_ISNAN(here->gexp_d)
}
else
{
here->vexp_d=(-1e9);
EXIT_IF_ISNAN(here->vexp_d)
here->gexp_d=0;
EXIT_IF_ISNAN(here->gexp_d)
}
#if defined(_DYNAMIC)
here->cbs0=(((here->np*here->ns)*model->CJ)*here->AS);
EXIT_IF_ISNAN(here->cbs0)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
here->cbd0=(((here->np*here->ns)*model->CJ)*here->AD);
EXIT_IF_ISNAN(here->cbd0)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
here->cbs0sw=(((here->np*here->ns)*model->CJSW)*here->PS);
EXIT_IF_ISNAN(here->cbs0sw)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
here->cbd0sw=(((here->np*here->ns)*model->CJSW)*here->PD);
EXIT_IF_ISNAN(here->cbd0sw)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
here->cgso=(((here->np*here->ns)*model->CGSO)*here->weff);
EXIT_IF_ISNAN(here->cgso)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
here->cgdo=(((here->np*here->ns)*model->CGDO)*here->weff);
EXIT_IF_ISNAN(here->cgdo)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
here->cgbo=(((here->np*here->ns)*model->CGBO)*here->leff);
EXIT_IF_ISNAN(here->cgbo)
#endif /*_DYNAMIC*/
}

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
