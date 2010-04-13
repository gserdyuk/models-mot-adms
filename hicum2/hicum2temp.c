/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 14:29:51 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "hicum2defs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

#define _STATIC
#define _DYNAMIC

int hicum2temp(GENmodel *inModel, CKTcircuit *ckt)
{
  register hicum2model *model = (hicum2model*)inModel;
  register hicum2instance *here;
  for ( ; model != NULL; model = model->hicum2nextModel )
  {
#if defined(_DERIVATE)
double vpts_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double cjs0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vds_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double tsf_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double re_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double rbx_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double rcx_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double cjcx02_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double cjcx01_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vptcx_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double cratio_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vdcx_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double abet_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double ibets_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
double a_eg=0.0/0.0;
double aa=0.0/0.0;
double ab=0.0/0.0;
#if defined(_DERIVATE)
double ajep_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double cjep0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vdep_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double rbi0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double qavl_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double favl_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double thcs_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double t0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vptci_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double cjci0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vdci_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vces_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double rci0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double c10_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double tef0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vlim_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double k_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double qp0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double iscs_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double itss_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double ibcxs_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double ibcis_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double ireps_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double ibeps_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double ireis_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double ibeis_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double a_Vbi_ei=0.0;
double a_Vbi_ci=0.0;
double a_Vci_ei=0.0;
double a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double r_VgVT_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double V_gT_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double ajei_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double cjei0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vdei_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vdt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vdjt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vgbe_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vge_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vgb_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double k2_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double k1_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double ln_qtt0_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double qtt0_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double dT_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double VT_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double Tdev_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DYNAMIC)
double C_1=0.0/0.0;
#endif /*_DYNAMIC*/
double vge_t0=0.0/0.0;
double vgb_t0=0.0/0.0;
double k20=0.0/0.0;
double k10=0.0/0.0;
{
model->Tnom=(model->tnom+273.15);
EXIT_IF_ISNAN(model->Tnom)
model->Tamb=_circuit_temp;
EXIT_IF_ISNAN(model->Tamb)
model->vt0=((1.3806503e-23*model->Tnom)/1.602176462e-19);
EXIT_IF_ISNAN(model->vt0)
{
double __logE_0=0.0;
_logE(__logE_0,(model->Tnom))
EXIT_IF_ISNAN(__logE_0)
k10=((model->f1vg*model->Tnom)*__logE_0);
EXIT_IF_ISNAN(k10)
}
k20=(model->f2vg*model->Tnom);
EXIT_IF_ISNAN(k20)
model->avs=(model->alvs*model->Tnom);
EXIT_IF_ISNAN(model->avs)
vgb_t0=((model->vgb+k10)+k20);
EXIT_IF_ISNAN(vgb_t0)
vge_t0=((model->vge+k10)+k20);
EXIT_IF_ISNAN(vge_t0)
model->vgbe_t0=((vgb_t0+vge_t0)/2);
EXIT_IF_ISNAN(model->vgbe_t0)
model->vgbe0=((model->vgb+model->vge)/2);
EXIT_IF_ISNAN(model->vgbe0)
model->vgbc0=((model->vgb+model->vgc)/2);
EXIT_IF_ISNAN(model->vgbc0)
model->vgsc0=((model->vgs+model->vgc)/2);
EXIT_IF_ISNAN(model->vgsc0)
model->mg=(3-((1.602176462e-19*model->f1vg)/1.3806503e-23));
EXIT_IF_ISNAN(model->mg)
model->zetabci=((model->mg+1)-model->zetaci);
EXIT_IF_ISNAN(model->zetabci)
model->zetabcxt=((model->mg+1)-model->zetacx);
EXIT_IF_ISNAN(model->zetabcxt)
model->zetasct=(model->mg-1.5);
EXIT_IF_ISNAN(model->zetasct)
#if defined(_DYNAMIC)
C_1=((1.0-model->fbcpar)*(model->cjcx0+model->cbcpar));
EXIT_IF_ISNAN(C_1)
#endif /*_DYNAMIC*/
#ifdef _DYNAMIC /*<dynamic_ifthenelse>*/
if
((C_1>=model->cbcpar))
{
#if defined(_DYNAMIC)
model->cbcpar1=model->cbcpar;
EXIT_IF_ISNAN(model->cbcpar1)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->cbcpar2=0.0;
EXIT_IF_ISNAN(model->cbcpar2)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->cjcx01=(C_1-model->cbcpar);
EXIT_IF_ISNAN(model->cjcx01)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->cjcx02=(model->cjcx0-model->cjcx01);
EXIT_IF_ISNAN(model->cjcx02)
#endif /*_DYNAMIC*/
}
else
{
#if defined(_DYNAMIC)
model->cbcpar1=C_1;
EXIT_IF_ISNAN(model->cbcpar1)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->cbcpar2=(model->cbcpar-model->cbcpar1);
EXIT_IF_ISNAN(model->cbcpar2)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->cjcx01=0.0;
EXIT_IF_ISNAN(model->cjcx01)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->cjcx02=model->cjcx0;
EXIT_IF_ISNAN(model->cjcx02)
#endif /*_DYNAMIC*/
}
#endif /*</dynamic_ifthenelse>*/
#if defined(_DYNAMIC)
model->cbepar2=(model->fbepar*model->cbepar);
EXIT_IF_ISNAN(model->cbepar2)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->cbepar1=(model->cbepar-model->cbepar2);
EXIT_IF_ISNAN(model->cbepar1)
#endif /*_DYNAMIC*/
if
((model->ich!=0.0))
{
model->Oich=(1.0/model->ich);
EXIT_IF_ISNAN(model->Oich)
}
else
{
model->Oich=0.0;
EXIT_IF_ISNAN(model->Oich)
}
if
((model->tbhrec!=0.0))
{
model->Otbhrec=(1.0/model->tbhrec);
EXIT_IF_ISNAN(model->Otbhrec)
}
else
{
model->Otbhrec=0.0;
EXIT_IF_ISNAN(model->Otbhrec)
}
if
((model->vpt!=0.0))
{
model->Ovpt=(1.0/model->vpt);
EXIT_IF_ISNAN(model->Ovpt)
}
else
{
model->Ovpt=0.0;
EXIT_IF_ISNAN(model->Ovpt)
}
if
(((model->flsh==0)||(model->rth<0.001)))
{
model->Tdev=(model->Tamb+model->dt);
EXIT_IF_ISNAN(model->Tdev)
#if defined(_DERIVATE)
Tdev_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
if
((model->Tdev<((-100.0)+273.15)))
{
model->Tdev=((-100.0)+273.15);
EXIT_IF_ISNAN(model->Tdev)
#if defined(_DERIVATE)
Tdev_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
else
{
if
((model->Tdev>(326.85+273.15)))
{
model->Tdev=(326.85+273.15);
EXIT_IF_ISNAN(model->Tdev)
#if defined(_DERIVATE)
Tdev_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
}
model->VT=((1.3806503e-23*model->Tdev)/1.602176462e-19);
EXIT_IF_ISNAN(model->VT)
#if defined(_DERIVATE)
VT_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->dT=(model->Tdev-model->Tnom);
EXIT_IF_ISNAN(model->dT)
#if defined(_DERIVATE)
dT_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->qtt0=(model->Tdev/model->Tnom);
EXIT_IF_ISNAN(model->qtt0)
#if defined(_DERIVATE)
qtt0_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __logE_0=0.0;
_logE(__logE_0,(model->qtt0))
EXIT_IF_ISNAN(__logE_0)
model->ln_qtt0=__logE_0;
EXIT_IF_ISNAN(model->ln_qtt0)
#if defined(_DERIVATE)
ln_qtt0_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __logE_0=0.0;
_logE(__logE_0,(model->Tdev))
EXIT_IF_ISNAN(__logE_0)
model->k1=((model->f1vg*model->Tdev)*__logE_0);
EXIT_IF_ISNAN(model->k1)
#if defined(_DERIVATE)
k1_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->k2=(model->f2vg*model->Tdev);
EXIT_IF_ISNAN(model->k2)
#if defined(_DERIVATE)
k2_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->vgb_t=((model->vgb+model->k1)+model->k2);
EXIT_IF_ISNAN(model->vgb_t)
#if defined(_DERIVATE)
vgb_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->vge_t=((model->vge+model->k1)+model->k2);
EXIT_IF_ISNAN(model->vge_t)
#if defined(_DERIVATE)
vge_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->vgbe_t=((model->vgb_t+model->vge_t)/2);
EXIT_IF_ISNAN(model->vgbe_t)
#if defined(_DERIVATE)
vgbe_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
if
((model->cjei0>0.0))
{
{
double __exp_0=0.0;
double __exp_1=0.0;
double __logE_2=0.0;
_exp(__exp_0,(((model->vdei*0.5)/model->vt0)))
EXIT_IF_ISNAN(__exp_0)
_exp(__exp_1,((((-0.5)*model->vdei)/model->vt0)))
EXIT_IF_ISNAN(__exp_1)
_logE(__logE_2,((__exp_0-__exp_1)))
EXIT_IF_ISNAN(__logE_2)
model->vdj0=((2*model->vt0)*__logE_2);
EXIT_IF_ISNAN(model->vdj0)
}
model->vdjt=(((model->vdj0*model->qtt0)+(model->vgbe0*(1-model->qtt0)))-((model->mg*model->VT)*model->ln_qtt0));
EXIT_IF_ISNAN(model->vdjt)
#if defined(_DERIVATE)
vdjt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
double __sqrt_1=0.0;
double __logE_2=0.0;
_exp(__exp_0,(((-model->vdjt)/model->VT)))
EXIT_IF_ISNAN(__exp_0)
_sqrt(__sqrt_1,((1+(4*__exp_0))))
EXIT_IF_ISNAN(__sqrt_1)
_logE(__logE_2,((0.5*(1+__sqrt_1))))
EXIT_IF_ISNAN(__logE_2)
model->vdt=(model->vdjt+((2*model->VT)*__logE_2));
EXIT_IF_ISNAN(model->vdt)
#if defined(_DERIVATE)
vdt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->vdei_t=model->vdt;
EXIT_IF_ISNAN(model->vdei_t)
#if defined(_DERIVATE)
vdei_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __logE_0=0.0;
double __exp_1=0.0;
_logE(__logE_0,((model->vdei/model->vdei_t)))
EXIT_IF_ISNAN(__logE_0)
_exp(__exp_1,((model->zei*__logE_0)))
EXIT_IF_ISNAN(__exp_1)
model->cjei0_t=(model->cjei0*__exp_1);
EXIT_IF_ISNAN(model->cjei0_t)
#if defined(_DERIVATE)
cjei0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
if
((1==1))
{
model->ajei_t=((model->ajei*model->vdei_t)/model->vdei);
EXIT_IF_ISNAN(model->ajei_t)
#if defined(_DERIVATE)
ajei_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
else
{
model->ajei_t=model->ajei;
EXIT_IF_ISNAN(model->ajei_t)
#if defined(_DERIVATE)
ajei_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
}
else
{
model->cjei0_t=model->cjei0;
EXIT_IF_ISNAN(model->cjei0_t)
#if defined(_DERIVATE)
cjei0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->vdei_t=model->vdei;
EXIT_IF_ISNAN(model->vdei_t)
#if defined(_DERIVATE)
vdei_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->ajei_t=model->ajei;
EXIT_IF_ISNAN(model->ajei_t)
#if defined(_DERIVATE)
ajei_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
if
(((model->flcomp==0.0)||(model->flcomp==2.1)))
{
model->V_gT=(((3.0*model->VT)*model->ln_qtt0)+(model->vgb*(model->qtt0-1.0)));
EXIT_IF_ISNAN(model->V_gT)
#if defined(_DERIVATE)
V_gT_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->r_VgVT=(model->V_gT/model->VT);
EXIT_IF_ISNAN(model->r_VgVT)
#if defined(_DERIVATE)
r_VgVT_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->a=(((model->mcf*model->r_VgVT)/model->mbei)-(model->alb*model->dT));
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,(model->a))
EXIT_IF_ISNAN(__exp_0)
model->ibeis_t=(model->ibeis*__exp_0);
EXIT_IF_ISNAN(model->ibeis_t)
#if defined(_DERIVATE)
ibeis_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->a=(((model->mcf*model->r_VgVT)/model->mrei)-(model->alb*model->dT));
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,(model->a))
EXIT_IF_ISNAN(__exp_0)
model->ireis_t=(model->ireis*__exp_0);
EXIT_IF_ISNAN(model->ireis_t)
#if defined(_DERIVATE)
ireis_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->a=(((model->mcf*model->r_VgVT)/model->mbep)-(model->alb*model->dT));
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,(model->a))
EXIT_IF_ISNAN(__exp_0)
model->ibeps_t=(model->ibeps*__exp_0);
EXIT_IF_ISNAN(model->ibeps_t)
#if defined(_DERIVATE)
ibeps_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->a=(((model->mcf*model->r_VgVT)/model->mrep)-(model->alb*model->dT));
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,(model->a))
EXIT_IF_ISNAN(__exp_0)
model->ireps_t=(model->ireps*__exp_0);
EXIT_IF_ISNAN(model->ireps_t)
#if defined(_DERIVATE)
ireps_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->a=(model->r_VgVT/model->mbci);
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,(model->a))
EXIT_IF_ISNAN(__exp_0)
model->ibcis_t=(model->ibcis*__exp_0);
EXIT_IF_ISNAN(model->ibcis_t)
#if defined(_DERIVATE)
ibcis_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->a=(model->r_VgVT/model->mbcx);
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,(model->a))
EXIT_IF_ISNAN(__exp_0)
model->ibcxs_t=(model->ibcxs*__exp_0);
EXIT_IF_ISNAN(model->ibcxs_t)
#if defined(_DERIVATE)
ibcxs_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->a=(model->r_VgVT/model->msf);
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,(model->a))
EXIT_IF_ISNAN(__exp_0)
model->itss_t=(model->itss*__exp_0);
EXIT_IF_ISNAN(model->itss_t)
#if defined(_DERIVATE)
itss_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->a=(model->r_VgVT/model->msc);
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,(model->a))
EXIT_IF_ISNAN(__exp_0)
model->iscs_t=(model->iscs*__exp_0);
EXIT_IF_ISNAN(model->iscs_t)
#if defined(_DERIVATE)
iscs_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->a=(model->vdei_t/model->vdei);
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->qp0_t=(model->qp0*(1.0+((0.5*model->zei)*(1.0-model->a))));
EXIT_IF_ISNAN(model->qp0_t)
#if defined(_DERIVATE)
qp0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,((model->zetaci*model->ln_qtt0)))
EXIT_IF_ISNAN(__exp_0)
model->a=((model->vlim*(1.0-(model->alvs*model->dT)))*__exp_0);
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->k=((model->a-model->VT)/model->VT);
EXIT_IF_ISNAN(model->k)
#if defined(_DERIVATE)
k_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
if
((model->k<11.0))
{
{
double __exp_0=0.0;
double __logE_1=0.0;
_exp(__exp_0,(model->k))
EXIT_IF_ISNAN(__exp_0)
_logE(__logE_1,((1.0+__exp_0)))
EXIT_IF_ISNAN(__logE_1)
model->vlim_t=(model->VT+(model->VT*__logE_1));
EXIT_IF_ISNAN(model->vlim_t)
#if defined(_DERIVATE)
vlim_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
}
else
{
model->vlim_t=model->a;
EXIT_IF_ISNAN(model->vlim_t)
#if defined(_DERIVATE)
vlim_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->a=(1.0+(model->alb*model->dT));
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(((model->a*model->a)+0.01)))
EXIT_IF_ISNAN(__sqrt_0)
model->k=(0.5*(model->a+__sqrt_0));
EXIT_IF_ISNAN(model->k)
#if defined(_DERIVATE)
k_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->tef0_t=((model->tef0*model->qtt0)/model->k);
EXIT_IF_ISNAN(model->tef0_t)
#if defined(_DERIVATE)
tef0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
else
{
{
double __exp_0=0.0;
_exp(__exp_0,(((model->zetabet*model->ln_qtt0)+((model->vge/model->VT)*(model->qtt0-1)))))
EXIT_IF_ISNAN(__exp_0)
model->ibeis_t=(model->ibeis*__exp_0);
EXIT_IF_ISNAN(model->ibeis_t)
#if defined(_DERIVATE)
ibeis_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,((((0.5*model->mg)*model->ln_qtt0)+(((0.5*model->vgbe0)/model->VT)*(model->qtt0-1)))))
EXIT_IF_ISNAN(__exp_0)
model->ireis_t=(model->ireis*__exp_0);
EXIT_IF_ISNAN(model->ireis_t)
#if defined(_DERIVATE)
ireis_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,(((model->zetabet*model->ln_qtt0)+((model->vge/model->VT)*(model->qtt0-1)))))
EXIT_IF_ISNAN(__exp_0)
model->ibeps_t=(model->ibeps*__exp_0);
EXIT_IF_ISNAN(model->ibeps_t)
#if defined(_DERIVATE)
ibeps_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,((((0.5*model->mg)*model->ln_qtt0)+(((0.5*model->vgbe0)/model->VT)*(model->qtt0-1)))))
EXIT_IF_ISNAN(__exp_0)
model->ireps_t=(model->ireps*__exp_0);
EXIT_IF_ISNAN(model->ireps_t)
#if defined(_DERIVATE)
ireps_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,(((model->zetabci*model->ln_qtt0)+((model->vgc/model->VT)*(model->qtt0-1)))))
EXIT_IF_ISNAN(__exp_0)
model->ibcis_t=(model->ibcis*__exp_0);
EXIT_IF_ISNAN(model->ibcis_t)
#if defined(_DERIVATE)
ibcis_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,(((model->zetabcxt*model->ln_qtt0)+((model->vgc/model->VT)*(model->qtt0-1)))))
EXIT_IF_ISNAN(__exp_0)
model->ibcxs_t=(model->ibcxs*__exp_0);
EXIT_IF_ISNAN(model->ibcxs_t)
#if defined(_DERIVATE)
ibcxs_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,(((model->zetasct*model->ln_qtt0)+((model->vgc/model->VT)*(model->qtt0-1)))))
EXIT_IF_ISNAN(__exp_0)
model->itss_t=(model->itss*__exp_0);
EXIT_IF_ISNAN(model->itss_t)
#if defined(_DERIVATE)
itss_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,(((model->zetasct*model->ln_qtt0)+((model->vgs/model->VT)*(model->qtt0-1)))))
EXIT_IF_ISNAN(__exp_0)
model->iscs_t=(model->iscs*__exp_0);
EXIT_IF_ISNAN(model->iscs_t)
#if defined(_DERIVATE)
iscs_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __logE_0=0.0;
double __exp_1=0.0;
_logE(__logE_0,((model->vdei_t/model->vdei)))
EXIT_IF_ISNAN(__logE_0)
_exp(__exp_1,((model->zei*__logE_0)))
EXIT_IF_ISNAN(__exp_1)
model->a=__exp_1;
EXIT_IF_ISNAN(model->a)
#if defined(_DERIVATE)
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vci_ei=0.0;
a_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->qp0_t=(model->qp0*(2.0-model->a));
EXIT_IF_ISNAN(model->qp0_t)
#if defined(_DERIVATE)
qp0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,(((model->zetaci-model->avs)*model->ln_qtt0)))
EXIT_IF_ISNAN(__exp_0)
model->vlim_t=(model->vlim*__exp_0);
EXIT_IF_ISNAN(model->vlim_t)
#if defined(_DERIVATE)
vlim_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->zetatef=((model->zetabet-model->zetact)-0.5);
EXIT_IF_ISNAN(model->zetatef)
model->dvg0=(model->vgb-model->vge);
EXIT_IF_ISNAN(model->dvg0)
{
double __exp_0=0.0;
_exp(__exp_0,(((model->zetatef*model->ln_qtt0)-((model->dvg0/model->VT)*(model->qtt0-1)))))
EXIT_IF_ISNAN(__exp_0)
model->tef0_t=(model->tef0*__exp_0);
EXIT_IF_ISNAN(model->tef0_t)
#if defined(_DERIVATE)
tef0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
}
{
double __exp_0=0.0;
_exp(__exp_0,(((model->zetact*model->ln_qtt0)+((model->vgb/model->VT)*(model->qtt0-1)))))
EXIT_IF_ISNAN(__exp_0)
model->c10_t=(model->c10*__exp_0);
EXIT_IF_ISNAN(model->c10_t)
#if defined(_DERIVATE)
c10_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,((model->zetaci*model->ln_qtt0)))
EXIT_IF_ISNAN(__exp_0)
model->rci0_t=(model->rci0*__exp_0);
EXIT_IF_ISNAN(model->rci0_t)
#if defined(_DERIVATE)
rci0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->vces_t=(model->vces*(1+(model->alces*model->dT)));
EXIT_IF_ISNAN(model->vces_t)
#if defined(_DERIVATE)
vces_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
if
((model->cjci0>0.0))
{
{
double __exp_0=0.0;
double __exp_1=0.0;
double __logE_2=0.0;
_exp(__exp_0,(((model->vdci*0.5)/model->vt0)))
EXIT_IF_ISNAN(__exp_0)
_exp(__exp_1,((((-0.5)*model->vdci)/model->vt0)))
EXIT_IF_ISNAN(__exp_1)
_logE(__logE_2,((__exp_0-__exp_1)))
EXIT_IF_ISNAN(__logE_2)
model->vdj0=((2*model->vt0)*__logE_2);
EXIT_IF_ISNAN(model->vdj0)
}
model->vdjt=(((model->vdj0*model->qtt0)+(model->vgbc0*(1-model->qtt0)))-((model->mg*model->VT)*model->ln_qtt0));
EXIT_IF_ISNAN(model->vdjt)
#if defined(_DERIVATE)
vdjt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
double __sqrt_1=0.0;
double __logE_2=0.0;
_exp(__exp_0,(((-model->vdjt)/model->VT)))
EXIT_IF_ISNAN(__exp_0)
_sqrt(__sqrt_1,((1+(4*__exp_0))))
EXIT_IF_ISNAN(__sqrt_1)
_logE(__logE_2,((0.5*(1+__sqrt_1))))
EXIT_IF_ISNAN(__logE_2)
model->vdt=(model->vdjt+((2*model->VT)*__logE_2));
EXIT_IF_ISNAN(model->vdt)
#if defined(_DERIVATE)
vdt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->vdci_t=model->vdt;
EXIT_IF_ISNAN(model->vdci_t)
#if defined(_DERIVATE)
vdci_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __logE_0=0.0;
double __exp_1=0.0;
_logE(__logE_0,((model->vdci/model->vdci_t)))
EXIT_IF_ISNAN(__logE_0)
_exp(__exp_1,((model->zci*__logE_0)))
EXIT_IF_ISNAN(__exp_1)
model->cjci0_t=(model->cjci0*__exp_1);
EXIT_IF_ISNAN(model->cjci0_t)
#if defined(_DERIVATE)
cjci0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
if
((0==1))
{
model->vptci_t=((model->vptci*model->vdci_t)/model->vdci);
EXIT_IF_ISNAN(model->vptci_t)
#if defined(_DERIVATE)
vptci_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
else
{
model->vptci_t=model->vptci;
EXIT_IF_ISNAN(model->vptci_t)
#if defined(_DERIVATE)
vptci_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
}
else
{
model->cjci0_t=model->cjci0;
EXIT_IF_ISNAN(model->cjci0_t)
#if defined(_DERIVATE)
cjci0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->vdci_t=model->vdci;
EXIT_IF_ISNAN(model->vdci_t)
#if defined(_DERIVATE)
vdci_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->vptci_t=model->vptci;
EXIT_IF_ISNAN(model->vptci_t)
#if defined(_DERIVATE)
vptci_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->t0_t=(model->t0*((1+(model->alt0*model->dT))+((model->kt0*model->dT)*model->dT)));
EXIT_IF_ISNAN(model->t0_t)
#if defined(_DERIVATE)
t0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,(((model->zetaci-1)*model->ln_qtt0)))
EXIT_IF_ISNAN(__exp_0)
model->thcs_t=(model->thcs*__exp_0);
EXIT_IF_ISNAN(model->thcs_t)
#if defined(_DERIVATE)
thcs_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,((model->alfav*model->dT)))
EXIT_IF_ISNAN(__exp_0)
model->favl_t=(model->favl*__exp_0);
EXIT_IF_ISNAN(model->favl_t)
#if defined(_DERIVATE)
favl_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,((model->alqav*model->dT)))
EXIT_IF_ISNAN(__exp_0)
model->qavl_t=(model->qavl*__exp_0);
EXIT_IF_ISNAN(model->qavl_t)
#if defined(_DERIVATE)
qavl_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,((model->zetarbi*model->ln_qtt0)))
EXIT_IF_ISNAN(__exp_0)
model->rbi0_t=(model->rbi0*__exp_0);
EXIT_IF_ISNAN(model->rbi0_t)
#if defined(_DERIVATE)
rbi0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
if
((model->cjep0>0.0))
{
{
double __exp_0=0.0;
double __exp_1=0.0;
double __logE_2=0.0;
_exp(__exp_0,(((model->vdep*0.5)/model->vt0)))
EXIT_IF_ISNAN(__exp_0)
_exp(__exp_1,((((-0.5)*model->vdep)/model->vt0)))
EXIT_IF_ISNAN(__exp_1)
_logE(__logE_2,((__exp_0-__exp_1)))
EXIT_IF_ISNAN(__logE_2)
model->vdj0=((2*model->vt0)*__logE_2);
EXIT_IF_ISNAN(model->vdj0)
}
model->vdjt=(((model->vdj0*model->qtt0)+(model->vgbe0*(1-model->qtt0)))-((model->mg*model->VT)*model->ln_qtt0));
EXIT_IF_ISNAN(model->vdjt)
#if defined(_DERIVATE)
vdjt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
double __sqrt_1=0.0;
double __logE_2=0.0;
_exp(__exp_0,(((-model->vdjt)/model->VT)))
EXIT_IF_ISNAN(__exp_0)
_sqrt(__sqrt_1,((1+(4*__exp_0))))
EXIT_IF_ISNAN(__sqrt_1)
_logE(__logE_2,((0.5*(1+__sqrt_1))))
EXIT_IF_ISNAN(__logE_2)
model->vdt=(model->vdjt+((2*model->VT)*__logE_2));
EXIT_IF_ISNAN(model->vdt)
#if defined(_DERIVATE)
vdt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
model->vdep_t=model->vdt;
EXIT_IF_ISNAN(model->vdep_t)
#if defined(_DERIVATE)
vdep_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __logE_0=0.0;
double __exp_1=0.0;
_logE(__logE_0,((model->vdep/model->vdep_t)))
EXIT_IF_ISNAN(__logE_0)
_exp(__exp_1,((model->zep*__logE_0)))
EXIT_IF_ISNAN(__exp_1)
model->cjep0_t=(model->cjep0*__exp_1);
EXIT_IF_ISNAN(model->cjep0_t)
#if defined(_DERIVATE)
cjep0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
if
((1==1))
{
model->ajep_t=((model->ajep*model->vdep_t)/model->vdep);
EXIT_IF_ISNAN(model->ajep_t)
#if defined(_DERIVATE)
ajep_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
else
{
model->ajep_t=model->ajep;
EXIT_IF_ISNAN(model->ajep_t)
#if defined(_DERIVATE)
ajep_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
}
else
{
model->cjep0_t=model->cjep0;
EXIT_IF_ISNAN(model->cjep0_t)
#if defined(_DERIVATE)
cjep0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->vdep_t=model->vdep;
EXIT_IF_ISNAN(model->vdep_t)
#if defined(_DERIVATE)
vdep_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->ajep_t=model->ajep;
EXIT_IF_ISNAN(model->ajep_t)
#if defined(_DERIVATE)
ajep_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double a_eg;
double ab;
double aa;
ab=1.0;
EXIT_IF_ISNAN(ab)
aa=1.0;
EXIT_IF_ISNAN(aa)
a_eg=(model->vgbe_t0/model->vgbe_t);
EXIT_IF_ISNAN(a_eg)
if
((((model->tunode==1)&&(model->cjep0>0.0))&&(model->vdep>0.0)))
{
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(a_eg))
EXIT_IF_ISNAN(__sqrt_0)
ab=(((((model->cjep0_t/model->cjep0)*__sqrt_0)*model->vdep_t)*model->vdep_t)/(model->vdep*model->vdep));
EXIT_IF_ISNAN(ab)
}
{
double __pow_0=0.0;
_pow(__pow_0,a_eg,(-1.5))
EXIT_IF_ISNAN(__pow_0)
aa=(((model->vdep/model->vdep_t)*(model->cjep0/model->cjep0_t))*__pow_0);
EXIT_IF_ISNAN(aa)
}
}
else
{
if
((((model->tunode==0)&&(model->cjei0>0.0))&&(model->vdei>0.0)))
{
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(a_eg))
EXIT_IF_ISNAN(__sqrt_0)
ab=(((((model->cjei0_t/model->cjei0)*__sqrt_0)*model->vdei_t)*model->vdei_t)/(model->vdei*model->vdei));
EXIT_IF_ISNAN(ab)
}
{
double __pow_0=0.0;
_pow(__pow_0,a_eg,(-1.5))
EXIT_IF_ISNAN(__pow_0)
aa=(((model->vdei/model->vdei_t)*(model->cjei0/model->cjei0_t))*__pow_0);
EXIT_IF_ISNAN(aa)
}
}
}
model->ibets_t=(model->ibets*ab);
EXIT_IF_ISNAN(model->ibets_t)
#if defined(_DERIVATE)
ibets_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
model->abet_t=(model->abet*aa);
EXIT_IF_ISNAN(model->abet_t)
#if defined(_DERIVATE)
abet_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
if
((1.0>0.0))
{
{
double __exp_0=0.0;
double __exp_1=0.0;
double __logE_2=0.0;
_exp(__exp_0,(((model->vdcx*0.5)/model->vt0)))
EXIT_IF_ISNAN(__exp_0)
_exp(__exp_1,((((-0.5)*model->vdcx)/model->vt0)))
EXIT_IF_ISNAN(__exp_1)
_logE(__logE_2,((__exp_0-__exp_1)))
EXIT_IF_ISNAN(__logE_2)
model->vdj0=((2*model->vt0)*__logE_2);
EXIT_IF_ISNAN(model->vdj0)
}
model->vdjt=(((model->vdj0*model->qtt0)+(model->vgbc0*(1-model->qtt0)))-((model->mg*model->VT)*model->ln_qtt0));
EXIT_IF_ISNAN(model->vdjt)
#if defined(_DERIVATE)
vdjt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
double __sqrt_1=0.0;
double __logE_2=0.0;
_exp(__exp_0,(((-model->vdjt)/model->VT)))
EXIT_IF_ISNAN(__exp_0)
_sqrt(__sqrt_1,((1+(4*__exp_0))))
EXIT_IF_ISNAN(__sqrt_1)
_logE(__logE_2,((0.5*(1+__sqrt_1))))
EXIT_IF_ISNAN(__logE_2)
model->vdt=(model->vdjt+((2*model->VT)*__logE_2));
EXIT_IF_ISNAN(model->vdt)
#if defined(_DERIVATE)
vdt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
#if defined(_DYNAMIC)
model->vdcx_t=model->vdt;
EXIT_IF_ISNAN(model->vdcx_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
vdcx_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DYNAMIC)
{
double __logE_0=0.0;
double __exp_1=0.0;
_logE(__logE_0,((model->vdcx/model->vdcx_t)))
EXIT_IF_ISNAN(__logE_0)
_exp(__exp_1,((model->zcx*__logE_0)))
EXIT_IF_ISNAN(__exp_1)
#if defined(_DYNAMIC)
model->cratio_t=(1.0*__exp_1);
EXIT_IF_ISNAN(model->cratio_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
cratio_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
#endif /* _DYNAMIC */
#ifdef _DYNAMIC /*<dynamic_ifthenelse>*/
if
((0==1))
{
#if defined(_DYNAMIC)
model->vptcx_t=((model->vptcx*model->vdcx_t)/model->vdcx);
EXIT_IF_ISNAN(model->vptcx_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
vptcx_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
else
{
#if defined(_DYNAMIC)
model->vptcx_t=model->vptcx;
EXIT_IF_ISNAN(model->vptcx_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
vptcx_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
#endif /*</dynamic_ifthenelse>*/
}
else
{
#if defined(_DYNAMIC)
model->cratio_t=1.0;
EXIT_IF_ISNAN(model->cratio_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
cratio_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DYNAMIC)
model->vdcx_t=model->vdcx;
EXIT_IF_ISNAN(model->vdcx_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
vdcx_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DYNAMIC)
model->vptcx_t=model->vptcx;
EXIT_IF_ISNAN(model->vptcx_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
vptcx_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
#if defined(_DYNAMIC)
model->cjcx01_t=(model->cratio_t*model->cjcx01);
EXIT_IF_ISNAN(model->cjcx01_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
cjcx01_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DYNAMIC)
model->cjcx02_t=(model->cratio_t*model->cjcx02);
EXIT_IF_ISNAN(model->cjcx02_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
cjcx02_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
_exp(__exp_0,((model->zetarcx*model->ln_qtt0)))
EXIT_IF_ISNAN(__exp_0)
model->rcx_t=(model->rcx*__exp_0);
EXIT_IF_ISNAN(model->rcx_t)
#if defined(_DERIVATE)
rcx_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,((model->zetarbx*model->ln_qtt0)))
EXIT_IF_ISNAN(__exp_0)
model->rbx_t=(model->rbx*__exp_0);
EXIT_IF_ISNAN(model->rbx_t)
#if defined(_DERIVATE)
rbx_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
{
double __exp_0=0.0;
_exp(__exp_0,((model->zetare*model->ln_qtt0)))
EXIT_IF_ISNAN(__exp_0)
model->re_t=(model->re*__exp_0);
EXIT_IF_ISNAN(model->re_t)
#if defined(_DERIVATE)
re_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
#if defined(_DYNAMIC)
{
double __exp_0=0.0;
_exp(__exp_0,(((model->zetacx-1.0)*model->ln_qtt0)))
EXIT_IF_ISNAN(__exp_0)
#if defined(_DYNAMIC)
model->tsf_t=(model->tsf*__exp_0);
EXIT_IF_ISNAN(model->tsf_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
tsf_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
#endif /* _DYNAMIC */
if
((model->cjs0>0.0))
{
{
double __exp_0=0.0;
double __exp_1=0.0;
double __logE_2=0.0;
_exp(__exp_0,(((model->vds*0.5)/model->vt0)))
EXIT_IF_ISNAN(__exp_0)
_exp(__exp_1,((((-0.5)*model->vds)/model->vt0)))
EXIT_IF_ISNAN(__exp_1)
_logE(__logE_2,((__exp_0-__exp_1)))
EXIT_IF_ISNAN(__logE_2)
model->vdj0=((2*model->vt0)*__logE_2);
EXIT_IF_ISNAN(model->vdj0)
}
model->vdjt=(((model->vdj0*model->qtt0)+(model->vgsc0*(1-model->qtt0)))-((model->mg*model->VT)*model->ln_qtt0));
EXIT_IF_ISNAN(model->vdjt)
#if defined(_DERIVATE)
vdjt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
{
double __exp_0=0.0;
double __sqrt_1=0.0;
double __logE_2=0.0;
_exp(__exp_0,(((-model->vdjt)/model->VT)))
EXIT_IF_ISNAN(__exp_0)
_sqrt(__sqrt_1,((1+(4*__exp_0))))
EXIT_IF_ISNAN(__sqrt_1)
_logE(__logE_2,((0.5*(1+__sqrt_1))))
EXIT_IF_ISNAN(__logE_2)
model->vdt=(model->vdjt+((2*model->VT)*__logE_2));
EXIT_IF_ISNAN(model->vdt)
#if defined(_DERIVATE)
vdt_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
#if defined(_DYNAMIC)
model->vds_t=model->vdt;
EXIT_IF_ISNAN(model->vds_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
vds_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DYNAMIC)
{
double __logE_0=0.0;
double __exp_1=0.0;
_logE(__logE_0,((model->vds/model->vds_t)))
EXIT_IF_ISNAN(__logE_0)
_exp(__exp_1,((model->zs*__logE_0)))
EXIT_IF_ISNAN(__exp_1)
#if defined(_DYNAMIC)
model->cjs0_t=(model->cjs0*__exp_1);
EXIT_IF_ISNAN(model->cjs0_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
cjs0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
#endif /* _DYNAMIC */
#ifdef _DYNAMIC /*<dynamic_ifthenelse>*/
if
((0==1))
{
#if defined(_DYNAMIC)
model->vpts_t=((model->vpts*model->vds_t)/model->vds);
EXIT_IF_ISNAN(model->vpts_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
vpts_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
else
{
#if defined(_DYNAMIC)
model->vpts_t=model->vpts;
EXIT_IF_ISNAN(model->vpts_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
vpts_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
#endif /*</dynamic_ifthenelse>*/
}
else
{
#if defined(_DYNAMIC)
model->cjs0_t=model->cjs0;
EXIT_IF_ISNAN(model->cjs0_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
cjs0_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DYNAMIC)
model->vds_t=model->vds;
EXIT_IF_ISNAN(model->vds_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
vds_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
#if defined(_DYNAMIC)
model->vpts_t=model->vpts;
EXIT_IF_ISNAN(model->vpts_t)
#endif /*_DYNAMIC*/
#if defined(_DERIVATE)
vpts_t_Vtnode_GND=0.0;
#endif /*_DERIVATE*/
}
}
}

    /* loop through all the instances of the model */
    for (here = model->hicum2instances; here != NULL ; here = here->hicum2nextInstance)
    {

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
