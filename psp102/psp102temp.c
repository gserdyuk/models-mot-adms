/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:46:01 ***/


#include "ngspice.h"
#include "cktdefs.h"
#include "smpdefs.h"
#include "psp102defs.h"
#include "const.h"
#include "sperror.h"
#include "ifsim.h"
#include "suffix.h"

#define _STATIC
#define _DYNAMIC

int psp102temp(GENmodel *inModel, CKTcircuit *ckt)
{
  register psp102model *model = (psp102model*)inModel;
  register psp102instance *here;
  for ( ; model != NULL; model = model->psp102nextModel )
  {
double deltaEgat=0.0/0.0;
double deltaEsti=0.0/0.0;
double deltaEbot=0.0/0.0;
#if defined(_DYNAMIC)
double cjogat=0.0/0.0;
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
double cjosti=0.0/0.0;
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
double cjobot=0.0/0.0;
#endif /*_DYNAMIC*/
double ubigat=0.0/0.0;
double ubisti=0.0/0.0;
double ubibot=0.0/0.0;
double phigdgat=0.0/0.0;
double phigdsti=0.0/0.0;
double phigdbot=0.0/0.0;
double deltaphigd=0.0/0.0;
double phigrgat=0.0/0.0;
double phigrsti=0.0/0.0;
double phigrbot=0.0/0.0;
double deltaphigr=0.0/0.0;
double phitrinv=0.0/0.0;
double KBOL_over_QELE=0.0/0.0;
double auxt=0.0/0.0;
double tkd=0.0/0.0;
double tkr=0.0/0.0;
double MEFFTATGAT_i=0.0/0.0;
double MEFFTATSTI_i=0.0/0.0;
double MEFFTATBOT_i=0.0/0.0;
double XJUNGAT_i=0.0/0.0;
double XJUNSTI_i=0.0/0.0;
double IDSATRGAT_i=0.0/0.0;
double IDSATRSTI_i=0.0/0.0;
double IDSATRBOT_i=0.0/0.0;
double CJORGAT_i=0.0/0.0;
double CJORSTI_i=0.0/0.0;
double CJORBOT_i=0.0/0.0;
double TRJ_i=0.0/0.0;
double TKD_sq=0.0/0.0;
double TKR=0.0/0.0;
double TR_i=0.0/0.0;
{
model->TOX_i=((model->TOXO>1e-10)?model->TOXO:1e-10);
EXIT_IF_ISNAN(model->TOX_i)
model->NSUBO_i=((model->NSUBO>1e20)?model->NSUBO:1e20);
EXIT_IF_ISNAN(model->NSUBO_i)
model->WSEG_i=((model->WSEG>1e-10)?model->WSEG:1e-10);
EXIT_IF_ISNAN(model->WSEG_i)
model->NPCK_i=((model->NPCK>0.0)?model->NPCK:0.0);
EXIT_IF_ISNAN(model->NPCK_i)
model->WSEGP_i=((model->WSEGP>1e-10)?model->WSEGP:1e-10);
EXIT_IF_ISNAN(model->WSEGP_i)
model->LPCK_i=((model->LPCK>1e-10)?model->LPCK:1e-10);
EXIT_IF_ISNAN(model->LPCK_i)
model->TOXOV_i=((model->TOXOVO>1e-10)?model->TOXOVO:1e-10);
EXIT_IF_ISNAN(model->TOXOV_i)
model->LOV_i=((model->LOV>0.0)?model->LOV:0.0);
EXIT_IF_ISNAN(model->LOV_i)
model->LP1_i=((model->LP1>1e-10)?model->LP1:1e-10);
EXIT_IF_ISNAN(model->LP1_i)
model->LP2_i=((model->LP2>1e-10)?model->LP2:1e-10);
EXIT_IF_ISNAN(model->LP2_i)
model->WBET_i=((model->WBET>1e-10)?model->WBET:1e-10);
EXIT_IF_ISNAN(model->WBET_i)
model->AXL_i=((model->AXL>0.0)?model->AXL:0.0);
EXIT_IF_ISNAN(model->AXL_i)
model->ALP1L2_i=((model->ALP1L2>0.0)?model->ALP1L2:0.0);
EXIT_IF_ISNAN(model->ALP1L2_i)
model->ALP2L2_i=((model->ALP2L2>0.0)?model->ALP2L2:0.0);
EXIT_IF_ISNAN(model->ALP2L2_i)
model->KVSAT_i=((model->KVSAT>(-1.0))?((model->KVSAT<1.0)?model->KVSAT:1.0):(-1.0));
EXIT_IF_ISNAN(model->KVSAT_i)
model->LLODKUO_i=((model->LLODKUO>0.0)?model->LLODKUO:0.0);
EXIT_IF_ISNAN(model->LLODKUO_i)
model->WLODKUO_i=((model->WLODKUO>0.0)?model->WLODKUO:0.0);
EXIT_IF_ISNAN(model->WLODKUO_i)
model->LLODVTH_i=((model->LLODVTH>0.0)?model->LLODVTH:0.0);
EXIT_IF_ISNAN(model->LLODVTH_i)
model->WLODVTH_i=((model->WLODVTH>0.0)?model->WLODVTH:0.0);
EXIT_IF_ISNAN(model->WLODVTH_i)
model->LODETAO_i=((model->LODETAO>0.0)?model->LODETAO:0.0);
EXIT_IF_ISNAN(model->LODETAO_i)
if
((model->TYPE>=0))
{
model->CHNL_TYPE=(+1);
EXIT_IF_ISNAN(model->CHNL_TYPE)
}
else
{
model->CHNL_TYPE=(-1);
EXIT_IF_ISNAN(model->CHNL_TYPE)
}
TR_i=((model->TR>(-273))?model->TR:(-273));
EXIT_IF_ISNAN(TR_i)
TKR=(273.15+TR_i);
EXIT_IF_ISNAN(TKR)
model->TKD=(_circuit_temp+model->DTA);
EXIT_IF_ISNAN(model->TKD)
TKD_sq=(model->TKD*model->TKD);
EXIT_IF_ISNAN(TKD_sq)
model->dT=(model->TKD-TKR);
EXIT_IF_ISNAN(model->dT)
model->rT=(model->TKD/TKR);
EXIT_IF_ISNAN(model->rT)
model->rTn=(TKR/model->TKD);
EXIT_IF_ISNAN(model->rTn)
model->phit=((model->TKD*1.3806505E-23)/1.6021918E-19);
EXIT_IF_ISNAN(model->phit)
model->inv_phit=(1.0/model->phit);
EXIT_IF_ISNAN(model->inv_phit)
model->Eg=((1.179-(9.025e-5*model->TKD))-(3.05e-7*TKD_sq));
EXIT_IF_ISNAN(model->Eg)
model->phibFac=((((1.045+(4.5e-4*model->TKD))*((0.523+(1.4e-3*model->TKD))-(1.48e-6*TKD_sq)))*TKD_sq)/9.0E4);
EXIT_IF_ISNAN(model->phibFac)
model->phibFac=((model->phibFac>1.0E-3)?model->phibFac:1.0E-3);
EXIT_IF_ISNAN(model->phibFac)
TRJ_i=((model->TRJ>(-250))?model->TRJ:(-250));
EXIT_IF_ISNAN(TRJ_i)
model->IMAX_i=((model->IMAX>1E-12)?model->IMAX:1E-12);
EXIT_IF_ISNAN(model->IMAX_i)
CJORBOT_i=((model->CJORBOT>1E-12)?model->CJORBOT:1E-12);
EXIT_IF_ISNAN(CJORBOT_i)
CJORSTI_i=((model->CJORSTI>1E-18)?model->CJORSTI:1E-18);
EXIT_IF_ISNAN(CJORSTI_i)
CJORGAT_i=((model->CJORGAT>1E-18)?model->CJORGAT:1E-18);
EXIT_IF_ISNAN(CJORGAT_i)
model->VBIRBOT_i=((model->VBIRBOT>0.050)?model->VBIRBOT:0.050);
EXIT_IF_ISNAN(model->VBIRBOT_i)
model->VBIRSTI_i=((model->VBIRSTI>0.050)?model->VBIRSTI:0.050);
EXIT_IF_ISNAN(model->VBIRSTI_i)
model->VBIRGAT_i=((model->VBIRGAT>0.050)?model->VBIRGAT:0.050);
EXIT_IF_ISNAN(model->VBIRGAT_i)
model->PBOT_i=((model->PBOT>0.05)?((model->PBOT<0.95)?model->PBOT:0.95):0.05);
EXIT_IF_ISNAN(model->PBOT_i)
model->PSTI_i=((model->PSTI>0.05)?((model->PSTI<0.95)?model->PSTI:0.95):0.05);
EXIT_IF_ISNAN(model->PSTI_i)
model->PGAT_i=((model->PGAT>0.05)?((model->PGAT<0.95)?model->PGAT:0.95):0.05);
EXIT_IF_ISNAN(model->PGAT_i)
IDSATRBOT_i=((model->IDSATRBOT>0)?model->IDSATRBOT:0);
EXIT_IF_ISNAN(IDSATRBOT_i)
IDSATRSTI_i=((model->IDSATRSTI>0)?model->IDSATRSTI:0);
EXIT_IF_ISNAN(IDSATRSTI_i)
IDSATRGAT_i=((model->IDSATRGAT>0)?model->IDSATRGAT:0);
EXIT_IF_ISNAN(IDSATRGAT_i)
model->CSRHBOT_i=((model->CSRHBOT>0)?model->CSRHBOT:0);
EXIT_IF_ISNAN(model->CSRHBOT_i)
model->CSRHSTI_i=((model->CSRHSTI>0)?model->CSRHSTI:0);
EXIT_IF_ISNAN(model->CSRHSTI_i)
model->CSRHGAT_i=((model->CSRHGAT>0)?model->CSRHGAT:0);
EXIT_IF_ISNAN(model->CSRHGAT_i)
XJUNSTI_i=((model->XJUNSTI>1E-9)?model->XJUNSTI:1E-9);
EXIT_IF_ISNAN(XJUNSTI_i)
XJUNGAT_i=((model->XJUNGAT>1E-9)?model->XJUNGAT:1E-9);
EXIT_IF_ISNAN(XJUNGAT_i)
model->CTATBOT_i=((model->CTATBOT>0)?model->CTATBOT:0);
EXIT_IF_ISNAN(model->CTATBOT_i)
model->CTATSTI_i=((model->CTATSTI>0)?model->CTATSTI:0);
EXIT_IF_ISNAN(model->CTATSTI_i)
model->CTATGAT_i=((model->CTATGAT>0)?model->CTATGAT:0);
EXIT_IF_ISNAN(model->CTATGAT_i)
MEFFTATBOT_i=((model->MEFFTATBOT>0.01)?model->MEFFTATBOT:0.01);
EXIT_IF_ISNAN(MEFFTATBOT_i)
MEFFTATSTI_i=((model->MEFFTATSTI>0.01)?model->MEFFTATSTI:0.01);
EXIT_IF_ISNAN(MEFFTATSTI_i)
MEFFTATGAT_i=((model->MEFFTATGAT>0.01)?model->MEFFTATGAT:0.01);
EXIT_IF_ISNAN(MEFFTATGAT_i)
model->CBBTBOT_i=((model->CBBTBOT>0)?model->CBBTBOT:0);
EXIT_IF_ISNAN(model->CBBTBOT_i)
model->CBBTSTI_i=((model->CBBTSTI>0)?model->CBBTSTI:0);
EXIT_IF_ISNAN(model->CBBTSTI_i)
model->CBBTGAT_i=((model->CBBTGAT>0)?model->CBBTGAT:0);
EXIT_IF_ISNAN(model->CBBTGAT_i)
model->VBRBOT_i=((model->VBRBOT>0.1)?model->VBRBOT:0.1);
EXIT_IF_ISNAN(model->VBRBOT_i)
model->VBRSTI_i=((model->VBRSTI>0.1)?model->VBRSTI:0.1);
EXIT_IF_ISNAN(model->VBRSTI_i)
model->VBRGAT_i=((model->VBRGAT>0.1)?model->VBRGAT:0.1);
EXIT_IF_ISNAN(model->VBRGAT_i)
model->PBRBOT_i=((model->PBRBOT>0.1)?model->PBRBOT:0.1);
EXIT_IF_ISNAN(model->PBRBOT_i)
model->PBRSTI_i=((model->PBRSTI>0.1)?model->PBRSTI:0.1);
EXIT_IF_ISNAN(model->PBRSTI_i)
model->PBRGAT_i=((model->PBRGAT>0.1)?model->PBRGAT:0.1);
EXIT_IF_ISNAN(model->PBRGAT_i)
tkr=(273.15+TRJ_i);
EXIT_IF_ISNAN(tkr)
{
double __max_0=0.0;
_max(__max_0,(_circuit_temp+model->DTA),(273.15+(-250)))
EXIT_IF_ISNAN(__max_0)
tkd=__max_0;
EXIT_IF_ISNAN(tkd)
}
auxt=(tkd/tkr);
EXIT_IF_ISNAN(auxt)
KBOL_over_QELE=(1.3806505E-23/1.6021918E-19);
EXIT_IF_ISNAN(KBOL_over_QELE)
model->phitr=(KBOL_over_QELE*tkr);
EXIT_IF_ISNAN(model->phitr)
phitrinv=(1.0/model->phitr);
EXIT_IF_ISNAN(phitrinv)
model->phitd=(KBOL_over_QELE*tkd);
EXIT_IF_ISNAN(model->phitd)
model->phitdinv=(1.0/model->phitd);
EXIT_IF_ISNAN(model->phitdinv)
deltaphigr=((-((7.02e-4*tkr)*tkr))/(1108.0+tkr));
EXIT_IF_ISNAN(deltaphigr)
phigrbot=(model->PHIGBOT+deltaphigr);
EXIT_IF_ISNAN(phigrbot)
phigrsti=(model->PHIGSTI+deltaphigr);
EXIT_IF_ISNAN(phigrsti)
phigrgat=(model->PHIGGAT+deltaphigr);
EXIT_IF_ISNAN(phigrgat)
deltaphigd=((-((7.02e-4*tkd)*tkd))/(1108.0+tkd));
EXIT_IF_ISNAN(deltaphigd)
phigdbot=(model->PHIGBOT+deltaphigd);
EXIT_IF_ISNAN(phigdbot)
phigdsti=(model->PHIGSTI+deltaphigd);
EXIT_IF_ISNAN(phigdsti)
phigdgat=(model->PHIGGAT+deltaphigd);
EXIT_IF_ISNAN(phigdgat)
{
double __pow_0=0.0;
double __exp_1=0.0;
_pow(__pow_0,auxt,1.5)
EXIT_IF_ISNAN(__pow_0)
_exp(__exp_1,((0.5*((phigrbot*phitrinv)-(phigdbot*model->phitdinv)))))
EXIT_IF_ISNAN(__exp_1)
model->ftdbot=(__pow_0*__exp_1);
EXIT_IF_ISNAN(model->ftdbot)
}
{
double __pow_0=0.0;
double __exp_1=0.0;
_pow(__pow_0,auxt,1.5)
EXIT_IF_ISNAN(__pow_0)
_exp(__exp_1,((0.5*((phigrsti*phitrinv)-(phigdsti*model->phitdinv)))))
EXIT_IF_ISNAN(__exp_1)
model->ftdsti=(__pow_0*__exp_1);
EXIT_IF_ISNAN(model->ftdsti)
}
{
double __pow_0=0.0;
double __exp_1=0.0;
_pow(__pow_0,auxt,1.5)
EXIT_IF_ISNAN(__pow_0)
_exp(__exp_1,((0.5*((phigrgat*phitrinv)-(phigdgat*model->phitdinv)))))
EXIT_IF_ISNAN(__exp_1)
model->ftdgat=(__pow_0*__exp_1);
EXIT_IF_ISNAN(model->ftdgat)
}
model->idsatbot=((IDSATRBOT_i*model->ftdbot)*model->ftdbot);
EXIT_IF_ISNAN(model->idsatbot)
model->idsatsti=((IDSATRSTI_i*model->ftdsti)*model->ftdsti);
EXIT_IF_ISNAN(model->idsatsti)
model->idsatgat=((IDSATRGAT_i*model->ftdgat)*model->ftdgat);
EXIT_IF_ISNAN(model->idsatgat)
{
double __logE_0=0.0;
_logE(__logE_0,(model->ftdbot))
EXIT_IF_ISNAN(__logE_0)
ubibot=((model->VBIRBOT_i*auxt)-((2*model->phitd)*__logE_0));
EXIT_IF_ISNAN(ubibot)
}
{
double __logE_0=0.0;
_logE(__logE_0,(model->ftdsti))
EXIT_IF_ISNAN(__logE_0)
ubisti=((model->VBIRSTI_i*auxt)-((2*model->phitd)*__logE_0));
EXIT_IF_ISNAN(ubisti)
}
{
double __logE_0=0.0;
_logE(__logE_0,(model->ftdgat))
EXIT_IF_ISNAN(__logE_0)
ubigat=((model->VBIRGAT_i*auxt)-((2*model->phitd)*__logE_0));
EXIT_IF_ISNAN(ubigat)
}
{
double __exp_0=0.0;
double __logE_1=0.0;
_exp(__exp_0,(((0.050-ubibot)*model->phitdinv)))
EXIT_IF_ISNAN(__exp_0)
_logE(__logE_1,((1+__exp_0)))
EXIT_IF_ISNAN(__logE_1)
model->vbibot=(ubibot+(model->phitd*__logE_1));
EXIT_IF_ISNAN(model->vbibot)
}
{
double __exp_0=0.0;
double __logE_1=0.0;
_exp(__exp_0,(((0.050-ubisti)*model->phitdinv)))
EXIT_IF_ISNAN(__exp_0)
_logE(__logE_1,((1+__exp_0)))
EXIT_IF_ISNAN(__logE_1)
model->vbisti=(ubisti+(model->phitd*__logE_1));
EXIT_IF_ISNAN(model->vbisti)
}
{
double __exp_0=0.0;
double __logE_1=0.0;
_exp(__exp_0,(((0.050-ubigat)*model->phitdinv)))
EXIT_IF_ISNAN(__exp_0)
_logE(__logE_1,((1+__exp_0)))
EXIT_IF_ISNAN(__logE_1)
model->vbigat=(ubigat+(model->phitd*__logE_1));
EXIT_IF_ISNAN(model->vbigat)
}
model->vbiinvbot=(1.0/model->vbibot);
EXIT_IF_ISNAN(model->vbiinvbot)
model->vbiinvsti=(1.0/model->vbisti);
EXIT_IF_ISNAN(model->vbiinvsti)
model->vbiinvgat=(1.0/model->vbigat);
EXIT_IF_ISNAN(model->vbiinvgat)
model->one_minus_PBOT=(1-model->PBOT_i);
EXIT_IF_ISNAN(model->one_minus_PBOT)
model->one_minus_PSTI=(1-model->PSTI_i);
EXIT_IF_ISNAN(model->one_minus_PSTI)
model->one_minus_PGAT=(1-model->PGAT_i);
EXIT_IF_ISNAN(model->one_minus_PGAT)
model->one_over_one_minus_PBOT=(1/model->one_minus_PBOT);
EXIT_IF_ISNAN(model->one_over_one_minus_PBOT)
model->one_over_one_minus_PSTI=(1/model->one_minus_PSTI);
EXIT_IF_ISNAN(model->one_over_one_minus_PSTI)
model->one_over_one_minus_PGAT=(1/model->one_minus_PGAT);
EXIT_IF_ISNAN(model->one_over_one_minus_PGAT)
#if defined(_DYNAMIC)
{
double __pow_0=0.0;
_pow(__pow_0,(model->VBIRBOT_i*model->vbiinvbot),model->PBOT_i)
EXIT_IF_ISNAN(__pow_0)
#if defined(_DYNAMIC)
cjobot=(CJORBOT_i*__pow_0);
EXIT_IF_ISNAN(cjobot)
#endif /*_DYNAMIC*/
}
#endif /* _DYNAMIC */
#if defined(_DYNAMIC)
{
double __pow_0=0.0;
_pow(__pow_0,(model->VBIRSTI_i*model->vbiinvsti),model->PSTI_i)
EXIT_IF_ISNAN(__pow_0)
#if defined(_DYNAMIC)
cjosti=(CJORSTI_i*__pow_0);
EXIT_IF_ISNAN(cjosti)
#endif /*_DYNAMIC*/
}
#endif /* _DYNAMIC */
#if defined(_DYNAMIC)
{
double __pow_0=0.0;
_pow(__pow_0,(model->VBIRGAT_i*model->vbiinvgat),model->PGAT_i)
EXIT_IF_ISNAN(__pow_0)
#if defined(_DYNAMIC)
cjogat=(CJORGAT_i*__pow_0);
EXIT_IF_ISNAN(cjogat)
#endif /*_DYNAMIC*/
}
#endif /* _DYNAMIC */
#if defined(_DYNAMIC)
model->qprefbot=((cjobot*model->vbibot)*model->one_over_one_minus_PBOT);
EXIT_IF_ISNAN(model->qprefbot)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->qprefsti=((cjosti*model->vbisti)*model->one_over_one_minus_PSTI);
EXIT_IF_ISNAN(model->qprefsti)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->qprefgat=((cjogat*model->vbigat)*model->one_over_one_minus_PGAT);
EXIT_IF_ISNAN(model->qprefgat)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->qpref2bot=(2*cjobot);
EXIT_IF_ISNAN(model->qpref2bot)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->qpref2sti=(2*cjosti);
EXIT_IF_ISNAN(model->qpref2sti)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
model->qpref2gat=(2*cjogat);
EXIT_IF_ISNAN(model->qpref2gat)
#endif /*_DYNAMIC*/
model->wdepnulrbot=(1.045E-10/CJORBOT_i);
EXIT_IF_ISNAN(model->wdepnulrbot)
model->wdepnulrsti=((XJUNSTI_i*1.045E-10)/CJORSTI_i);
EXIT_IF_ISNAN(model->wdepnulrsti)
model->wdepnulrgat=((XJUNGAT_i*1.045E-10)/CJORGAT_i);
EXIT_IF_ISNAN(model->wdepnulrgat)
model->wdepnulrinvbot=(1/model->wdepnulrbot);
EXIT_IF_ISNAN(model->wdepnulrinvbot)
model->wdepnulrinvsti=(1/model->wdepnulrsti);
EXIT_IF_ISNAN(model->wdepnulrinvsti)
model->wdepnulrinvgat=(1/model->wdepnulrgat);
EXIT_IF_ISNAN(model->wdepnulrinvgat)
model->VBIRBOTinv=(1/model->VBIRBOT_i);
EXIT_IF_ISNAN(model->VBIRBOTinv)
model->VBIRSTIinv=(1/model->VBIRSTI_i);
EXIT_IF_ISNAN(model->VBIRSTIinv)
model->VBIRGATinv=(1/model->VBIRGAT_i);
EXIT_IF_ISNAN(model->VBIRGATinv)
model->perfc=(1.77245385090551603*0.29214664);
EXIT_IF_ISNAN(model->perfc)
{
double __pow_0=0.0;
_pow(__pow_0,model->perfc,(-2))
EXIT_IF_ISNAN(__pow_0)
model->berfc=(((((-5)*0.29214664)+6)-__pow_0)/3);
EXIT_IF_ISNAN(model->berfc)
}
model->cerfc=((1.0-0.29214664)-model->berfc);
EXIT_IF_ISNAN(model->cerfc)
{
double __max_0=0.0;
_max(__max_0,(0.5*phigdbot),model->phitd)
EXIT_IF_ISNAN(__max_0)
deltaEbot=__max_0;
EXIT_IF_ISNAN(deltaEbot)
}
{
double __max_0=0.0;
_max(__max_0,(0.5*phigdsti),model->phitd)
EXIT_IF_ISNAN(__max_0)
deltaEsti=__max_0;
EXIT_IF_ISNAN(deltaEsti)
}
{
double __max_0=0.0;
_max(__max_0,(0.5*phigdgat),model->phitd)
EXIT_IF_ISNAN(__max_0)
deltaEgat=__max_0;
EXIT_IF_ISNAN(deltaEgat)
}
model->atatbot=(deltaEbot*model->phitdinv);
EXIT_IF_ISNAN(model->atatbot)
model->atatsti=(deltaEsti*model->phitdinv);
EXIT_IF_ISNAN(model->atatsti)
model->atatgat=(deltaEgat*model->phitdinv);
EXIT_IF_ISNAN(model->atatgat)
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(((((32*MEFFTATBOT_i)*9.1093826E-31)*1.6021918E-19)*((deltaEbot*deltaEbot)*deltaEbot))))
EXIT_IF_ISNAN(__sqrt_0)
model->btatpartbot=(__sqrt_0/(3*1.05457168E-34));
EXIT_IF_ISNAN(model->btatpartbot)
}
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(((((32*MEFFTATSTI_i)*9.1093826E-31)*1.6021918E-19)*((deltaEsti*deltaEsti)*deltaEsti))))
EXIT_IF_ISNAN(__sqrt_0)
model->btatpartsti=(__sqrt_0/(3*1.05457168E-34));
EXIT_IF_ISNAN(model->btatpartsti)
}
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(((((32*MEFFTATGAT_i)*9.1093826E-31)*1.6021918E-19)*((deltaEgat*deltaEgat)*deltaEgat))))
EXIT_IF_ISNAN(__sqrt_0)
model->btatpartgat=(__sqrt_0/(3*1.05457168E-34));
EXIT_IF_ISNAN(model->btatpartgat)
}
model->fbbtbot=(model->FBBTRBOT*(1+(model->STFBBTBOT*(tkd-tkr))));
EXIT_IF_ISNAN(model->fbbtbot)
model->fbbtsti=(model->FBBTRSTI*(1+(model->STFBBTSTI*(tkd-tkr))));
EXIT_IF_ISNAN(model->fbbtsti)
model->fbbtgat=(model->FBBTRGAT*(1+(model->STFBBTGAT*(tkd-tkr))));
EXIT_IF_ISNAN(model->fbbtgat)
{
double __pow_0=0.0;
_pow(__pow_0,0.999,model->PBRBOT_i)
EXIT_IF_ISNAN(__pow_0)
model->fstopbot=(1/(1-__pow_0));
EXIT_IF_ISNAN(model->fstopbot)
}
{
double __pow_0=0.0;
_pow(__pow_0,0.999,model->PBRSTI_i)
EXIT_IF_ISNAN(__pow_0)
model->fstopsti=(1/(1-__pow_0));
EXIT_IF_ISNAN(model->fstopsti)
}
{
double __pow_0=0.0;
_pow(__pow_0,0.999,model->PBRGAT_i)
EXIT_IF_ISNAN(__pow_0)
model->fstopgat=(1/(1-__pow_0));
EXIT_IF_ISNAN(model->fstopgat)
}
model->VBRinvbot=(1/model->VBRBOT_i);
EXIT_IF_ISNAN(model->VBRinvbot)
model->VBRinvsti=(1/model->VBRSTI_i);
EXIT_IF_ISNAN(model->VBRinvsti)
model->VBRinvgat=(1/model->VBRGAT_i);
EXIT_IF_ISNAN(model->VBRinvgat)
{
double __pow_0=0.0;
_pow(__pow_0,0.999,(model->PBRBOT_i-1))
EXIT_IF_ISNAN(__pow_0)
model->slopebot=(((-((model->fstopbot*model->fstopbot)*__pow_0))*model->PBRBOT_i)*model->VBRinvbot);
EXIT_IF_ISNAN(model->slopebot)
}
{
double __pow_0=0.0;
_pow(__pow_0,0.999,(model->PBRSTI_i-1))
EXIT_IF_ISNAN(__pow_0)
model->slopesti=(((-((model->fstopsti*model->fstopsti)*__pow_0))*model->PBRSTI_i)*model->VBRinvsti);
EXIT_IF_ISNAN(model->slopesti)
}
{
double __pow_0=0.0;
_pow(__pow_0,0.999,(model->PBRGAT_i-1))
EXIT_IF_ISNAN(__pow_0)
model->slopegat=(((-((model->fstopgat*model->fstopgat)*__pow_0))*model->PBRGAT_i)*model->VBRinvgat);
EXIT_IF_ISNAN(model->slopegat)
}
}

    /* loop through all the instances of the model */
    for (here = model->psp102instances; here != NULL ; here = here->psp102nextInstance)
    {
double vbigat2r=0.0/0.0;
double vbisti2r=0.0/0.0;
double vbibot2r=0.0/0.0;
double vbigat2=0.0/0.0;
double vbisti2=0.0/0.0;
double vbibot2=0.0/0.0;
double vmaxgat=0.0/0.0;
double vmaxsti=0.0/0.0;
double vmaxbot=0.0/0.0;
#if defined(_DERIVATE)
double vbi_minus_vjsrh_VD_B=0.0;
double vbi_minus_vjsrh_VS_B=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vav_VD_B=0.0;
double vav_VS_B=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double asrh_VD_B=0.0;
double asrh_VS_B=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double wsrh_VD_B=0.0;
double wsrh_VS_B=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double wdep_VD_B=0.0;
double wdep_VS_B=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double zinv_VD_B=0.0;
double zinv_VS_B=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vjsrh_VD_B=0.0;
double vjsrh_VS_B=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double idmult_VD_B=0.0;
double idmult_VS_B=0.0;
#endif /*_DERIVATE*/
#if defined(_DERIVATE)
double vj_VD_B=0.0;
double vj_VS_B=0.0;
#endif /*_DERIVATE*/
double tempM=0.0/0.0;
double tf_ig=0.0/0.0;
double tf_thesat=0.0/0.0;
double tf_ther=0.0/0.0;
double tf_xcor=0.0/0.0;
double tf_cs=0.0/0.0;
double tf_mue=0.0/0.0;
double tf_bet=0.0/0.0;
double CoxovPrime=0.0/0.0;
double phix2=0.0/0.0;
double dphibq=0.0/0.0;
double qb0=0.0/0.0;
double np=0.0/0.0;
double arg2max=0.0/0.0;
double tox_sq=0.0/0.0;
double CoxPrime=0.0/0.0;
double FNT_i=0.0/0.0;
double STBGIDL_i=0.0/0.0;
double STIG_i=0.0/0.0;
double GCO_i=0.0/0.0;
double STA2_i=0.0/0.0;
double VP_i=0.0/0.0;
double STTHESAT_i=0.0/0.0;
double STRS_i=0.0/0.0;
double RS_i=0.0/0.0;
double FETA_i=0.0/0.0;
double STXCOR_i=0.0/0.0;
double STCS_i=0.0/0.0;
double STTHEMU_i=0.0/0.0;
double STMUE_i=0.0/0.0;
double STBET_i=0.0/0.0;
double NOV_i=0.0/0.0;
double CT_i=0.0/0.0;
double QMC_i=0.0/0.0;
double NP_i=0.0/0.0;
double DPHIB_i=0.0/0.0;
double NEFF_i=0.0/0.0;
double STVFB_i=0.0/0.0;
double temp0=0.0/0.0;
double Kstressvth0=0.0/0.0;
double rhobetaref=0.0/0.0;
double rhobeta=0.0/0.0;
double Kstressu0=0.0/0.0;
double tempw=0.0/0.0;
double templ=0.0/0.0;
double Wx=0.0/0.0;
double Lx=0.0/0.0;
double Invsbref=0.0/0.0;
double Invsaref=0.0/0.0;
double Invsb=0.0/0.0;
double Invsa=0.0/0.0;
double NFC=0.0/0.0;
double NFB=0.0/0.0;
double NFA=0.0/0.0;
double FNT=0.0/0.0;
#if defined(_DYNAMIC)
double CFR=0.0/0.0;
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
double CGBOV=0.0/0.0;
#endif /*_DYNAMIC*/
double CGOV=0.0/0.0;
#if defined(_DYNAMIC)
double COX=0.0/0.0;
#endif /*_DYNAMIC*/
double CGIDL=0.0/0.0;
double STBGIDL=0.0/0.0;
double BGIDL=0.0/0.0;
double AGIDL=0.0/0.0;
double CHIB=0.0/0.0;
double GC3=0.0/0.0;
double GC2=0.0/0.0;
double STIG=0.0/0.0;
double IGOV=0.0/0.0;
double IGINV=0.0/0.0;
double GCO=0.0/0.0;
double A4=0.0/0.0;
double A3=0.0/0.0;
double STA2=0.0/0.0;
double A2=0.0/0.0;
double A1=0.0/0.0;
double VP=0.0/0.0;
double ALP2=0.0/0.0;
double ALP1=0.0/0.0;
double tmpx=0.0/0.0;
double ALP=0.0/0.0;
double AX=0.0/0.0;
double THESATG=0.0/0.0;
double THESATB=0.0/0.0;
double STTHESAT=0.0/0.0;
double THESAT=0.0/0.0;
double RSG=0.0/0.0;
double RSB=0.0/0.0;
double STRS=0.0/0.0;
double RS=0.0/0.0;
double FETA=0.0/0.0;
double STXCOR=0.0/0.0;
double XCOR=0.0/0.0;
double STCS=0.0/0.0;
double CS=0.0/0.0;
double STTHEMU=0.0/0.0;
double THEMU=0.0/0.0;
double STMUE=0.0/0.0;
double MUE=0.0/0.0;
double STBET=0.0/0.0;
double BETN=0.0/0.0;
double GWE=0.0/0.0;
double GPE=0.0/0.0;
double LP1e=0.0/0.0;
double FBET1e=0.0/0.0;
double CFB=0.0/0.0;
double CF=0.0/0.0;
double NOV=0.0/0.0;
double TOXOV=0.0/0.0;
double CT=0.0/0.0;
double NP=0.0/0.0;
double DPHIB=0.0/0.0;
double DNSUB=0.0/0.0;
double NSLP=0.0/0.0;
double VNSUB=0.0/0.0;
double NEFF=0.0/0.0;
double NSUB=0.0/0.0;
double BB=0.0/0.0;
double AA=0.0/0.0;
double LPCKe=0.0/0.0;
double NPCKe=0.0/0.0;
double NSUB0e=0.0/0.0;
double TOX=0.0/0.0;
double STVFB=0.0/0.0;
double VFB=0.0/0.0;
double juncapwidth=0.0/0.0;
double iWE=0.0/0.0;
double iLE=0.0/0.0;
#if defined(_DYNAMIC)
double Wcv=0.0/0.0;
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
double Lcv=0.0/0.0;
#endif /*_DYNAMIC*/
double WEcv=0.0/0.0;
#if defined(_DYNAMIC)
double LEcv=0.0/0.0;
#endif /*_DYNAMIC*/
double delWOD=0.0/0.0;
double delLPS=0.0/0.0;
double iW=0.0/0.0;
double iL=0.0/0.0;
double WEN=0.0/0.0;
double LEN=0.0/0.0;
double SB_i=0.0/0.0;
double SA_i=0.0/0.0;
double W_i=0.0/0.0;
double L_i=0.0/0.0;
double SBREF_i=0.0/0.0;
double SAREF_i=0.0/0.0;
{
SAREF_i=((model->SAREF>1e-9)?model->SAREF:1e-9);
EXIT_IF_ISNAN(SAREF_i)
SBREF_i=((model->SBREF>1e-9)?model->SBREF:1e-9);
EXIT_IF_ISNAN(SBREF_i)
L_i=((here->L>1e-9)?here->L:1e-9);
EXIT_IF_ISNAN(L_i)
W_i=((here->W>1e-9)?here->W:1e-9);
EXIT_IF_ISNAN(W_i)
SA_i=here->SA;
EXIT_IF_ISNAN(SA_i)
SB_i=here->SB;
EXIT_IF_ISNAN(SB_i)
LEN=1e-6;
EXIT_IF_ISNAN(LEN)
WEN=1e-6;
EXIT_IF_ISNAN(WEN)
iL=(LEN/L_i);
EXIT_IF_ISNAN(iL)
iW=(WEN/W_i);
EXIT_IF_ISNAN(iW)
delLPS=((model->LVARO*(1.0+(model->LVARL*iL)))*(1.0+(model->LVARW*iW)));
EXIT_IF_ISNAN(delLPS)
delWOD=((model->WVARO*(1.0+(model->WVARL*iL)))*(1.0+(model->WVARW*iW)));
EXIT_IF_ISNAN(delWOD)
here->LE_LE=((((L_i+delLPS)-(2.0*model->LAP))>1e-9)?((L_i+delLPS)-(2.0*model->LAP)):1e-9);
EXIT_IF_ISNAN(here->LE_LE)
here->WE=((((W_i+delWOD)-(2.0*model->WOT))>1e-9)?((W_i+delWOD)-(2.0*model->WOT)):1e-9);
EXIT_IF_ISNAN(here->WE)
#if defined(_DYNAMIC)
LEcv=(((((L_i+delLPS)-(2.0*model->LAP))+model->DLQ)>1e-9)?(((L_i+delLPS)-(2.0*model->LAP))+model->DLQ):1e-9);
EXIT_IF_ISNAN(LEcv)
#endif /*_DYNAMIC*/
WEcv=(((((W_i+delWOD)-(2.0*model->WOT))+model->DWQ)>1e-9)?(((W_i+delWOD)-(2.0*model->WOT))+model->DWQ):1e-9);
EXIT_IF_ISNAN(WEcv)
#if defined(_DYNAMIC)
Lcv=((((L_i+delLPS)+model->DLQ)>1e-9)?((L_i+delLPS)+model->DLQ):1e-9);
EXIT_IF_ISNAN(Lcv)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
Wcv=((((W_i+delWOD)+model->DWQ)>1e-9)?((W_i+delWOD)+model->DWQ):1e-9);
EXIT_IF_ISNAN(Wcv)
#endif /*_DYNAMIC*/
iLE=(LEN/here->LE_LE);
EXIT_IF_ISNAN(iLE)
iWE=(WEN/here->WE);
EXIT_IF_ISNAN(iWE)
juncapwidth=here->WE;
EXIT_IF_ISNAN(juncapwidth)
VFB=(((model->VFBO*(1.0+(model->VFBL*iLE)))*(1.0+(model->VFBW*iWE)))*(1.0+((model->VFBLW*iLE)*iWE)));
EXIT_IF_ISNAN(VFB)
STVFB=(((model->STVFBO*(1.0+(model->STVFBL*iLE)))*(1.0+(model->STVFBW*iWE)))*(1.0+((model->STVFBLW*iLE)*iWE)));
EXIT_IF_ISNAN(STVFB)
TOX=model->TOXO;
EXIT_IF_ISNAN(TOX)
{
double __logE_0=0.0;
double __logE_1=0.0;
_logE(__logE_0,((1.0+(here->WE/model->WSEG_i))))
EXIT_IF_ISNAN(__logE_0)
_logE(__logE_1,((1.0+(here->WE/model->WSEG_i))))
EXIT_IF_ISNAN(__logE_1)
NSUB0e=(model->NSUBO_i*(((1.0+((model->NSUBW*iWE)*__logE_0))>1.0E-03)?(1.0+((model->NSUBW*iWE)*__logE_1)):1.0E-03));
EXIT_IF_ISNAN(NSUB0e)
}
{
double __logE_0=0.0;
double __logE_1=0.0;
_logE(__logE_0,((1.0+(here->WE/model->WSEGP_i))))
EXIT_IF_ISNAN(__logE_0)
_logE(__logE_1,((1.0+(here->WE/model->WSEGP_i))))
EXIT_IF_ISNAN(__logE_1)
NPCKe=(model->NPCK_i*(((1.0+((model->NPCKW*iWE)*__logE_0))>1.0E-03)?(1.0+((model->NPCKW*iWE)*__logE_1)):1.0E-03));
EXIT_IF_ISNAN(NPCKe)
}
{
double __logE_0=0.0;
double __logE_1=0.0;
_logE(__logE_0,((1.0+(here->WE/model->WSEGP_i))))
EXIT_IF_ISNAN(__logE_0)
_logE(__logE_1,((1.0+(here->WE/model->WSEGP_i))))
EXIT_IF_ISNAN(__logE_1)
LPCKe=(model->LPCK_i*(((1.0+((model->LPCKW*iWE)*__logE_0))>1.0E-03)?(1.0+((model->LPCKW*iWE)*__logE_1)):1.0E-03));
EXIT_IF_ISNAN(LPCKe)
}
if
((here->LE_LE>(2*LPCKe)))
{
AA=7.5e10;
EXIT_IF_ISNAN(AA)
{
double __sqrt_0=0.0;
double __sqrt_1=0.0;
_sqrt(__sqrt_0,((NSUB0e+(0.5*NPCKe))))
EXIT_IF_ISNAN(__sqrt_0)
_sqrt(__sqrt_1,(NSUB0e))
EXIT_IF_ISNAN(__sqrt_1)
BB=(__sqrt_0-__sqrt_1);
EXIT_IF_ISNAN(BB)
}
{
double __sqrt_0=0.0;
double __exp_1=0.0;
double __logE_2=0.0;
_sqrt(__sqrt_0,(NSUB0e))
EXIT_IF_ISNAN(__sqrt_0)
_exp(__exp_1,((BB/AA)))
EXIT_IF_ISNAN(__exp_1)
_logE(__logE_2,((1+(((2*LPCKe)/here->LE_LE)*(__exp_1-1)))))
EXIT_IF_ISNAN(__logE_2)
NSUB=(__sqrt_0+(AA*__logE_2));
EXIT_IF_ISNAN(NSUB)
}
NSUB=(NSUB*NSUB);
EXIT_IF_ISNAN(NSUB)
}
else
{
if
((here->LE_LE>=LPCKe))
{
NSUB=(NSUB0e+((NPCKe*LPCKe)/here->LE_LE));
EXIT_IF_ISNAN(NSUB)
}
else
{
NSUB=(NSUB0e+(NPCKe*(2-(here->LE_LE/LPCKe))));
EXIT_IF_ISNAN(NSUB)
}
}
NEFF=(NSUB*((1-(model->FOL1*iLE))-((model->FOL2*iLE)*iLE)));
EXIT_IF_ISNAN(NEFF)
VNSUB=model->VNSUBO;
EXIT_IF_ISNAN(VNSUB)
NSLP=model->NSLPO;
EXIT_IF_ISNAN(NSLP)
DNSUB=model->DNSUBO;
EXIT_IF_ISNAN(DNSUB)
{
double __pow_0=0.0;
_pow(__pow_0,iLE,model->DPHIBLEXP)
EXIT_IF_ISNAN(__pow_0)
DPHIB=(((model->DPHIBO+(model->DPHIBL*__pow_0))*(1.0+(model->DPHIBW*iWE)))*(1.0+((model->DPHIBLW*iLE)*iWE)));
EXIT_IF_ISNAN(DPHIB)
}
NP=(model->NPO*((1e-6>(1.0+(model->NPL*iLE)))?1e-6:(1.0+(model->NPL*iLE))));
EXIT_IF_ISNAN(NP)
{
double __pow_0=0.0;
_pow(__pow_0,iLE,model->CTLEXP)
EXIT_IF_ISNAN(__pow_0)
CT=(((model->CTO+(model->CTL*__pow_0))*(1.0+(model->CTW*iWE)))*(1.0+((model->CTLW*iLE)*iWE)));
EXIT_IF_ISNAN(CT)
}
TOXOV=model->TOXOVO;
EXIT_IF_ISNAN(TOXOV)
NOV=model->NOVO;
EXIT_IF_ISNAN(NOV)
{
double __pow_0=0.0;
_pow(__pow_0,iLE,model->CFLEXP)
EXIT_IF_ISNAN(__pow_0)
CF=((model->CFL*__pow_0)*(1.0+(model->CFW*iWE)));
EXIT_IF_ISNAN(CF)
}
CFB=model->CFBO;
EXIT_IF_ISNAN(CFB)
FBET1e=(model->FBET1*(1.0+(model->FBET1W*iWE)));
EXIT_IF_ISNAN(FBET1e)
LP1e=(model->LP1_i*(((1.0+(model->LP1W*iWE))>1.0E-03)?(1.0+(model->LP1W*iWE)):1.0E-03));
EXIT_IF_ISNAN(LP1e)
{
double __exp_0=0.0;
double __exp_1=0.0;
_exp(__exp_0,(((-here->LE_LE)/LP1e)))
EXIT_IF_ISNAN(__exp_0)
_exp(__exp_1,(((-here->LE_LE)/model->LP2_i)))
EXIT_IF_ISNAN(__exp_1)
GPE=((1.0+(((FBET1e*LP1e)/here->LE_LE)*(1.0-__exp_0)))+(((model->FBET2*model->LP2_i)/here->LE_LE)*(1.0-__exp_1)));
EXIT_IF_ISNAN(GPE)
}
GPE=((GPE>1e-15)?GPE:1e-15);
EXIT_IF_ISNAN(GPE)
{
double __logE_0=0.0;
_logE(__logE_0,((1.0+(here->WE/model->WBET_i))))
EXIT_IF_ISNAN(__logE_0)
GWE=((1.0+(model->BETW1*iWE))+((model->BETW2*iWE)*__logE_0));
EXIT_IF_ISNAN(GWE)
}
BETN=(((model->UO*here->WE)/(GPE*here->LE_LE))*GWE);
EXIT_IF_ISNAN(BETN)
STBET=(((model->STBETO*(1.0+(model->STBETL*iLE)))*(1.0+(model->STBETW*iWE)))*(1.0+((model->STBETLW*iLE)*iWE)));
EXIT_IF_ISNAN(STBET)
MUE=(model->MUEO*(1.0+(model->MUEW*iWE)));
EXIT_IF_ISNAN(MUE)
STMUE=model->STMUEO;
EXIT_IF_ISNAN(STMUE)
THEMU=model->THEMUO;
EXIT_IF_ISNAN(THEMU)
STTHEMU=model->STTHEMUO;
EXIT_IF_ISNAN(STTHEMU)
{
double __pow_0=0.0;
_pow(__pow_0,iLE,model->CSLEXP)
EXIT_IF_ISNAN(__pow_0)
CS=(((model->CSO+(model->CSL*__pow_0))*(1.0+(model->CSW*iWE)))*(1.0+((model->CSLW*iLE)*iWE)));
EXIT_IF_ISNAN(CS)
}
STCS=model->STCSO;
EXIT_IF_ISNAN(STCS)
XCOR=(((model->XCORO*(1.0+(model->XCORL*iLE)))*(1.0+(model->XCORW*iWE)))*(1.0+((model->XCORLW*iLE)*iWE)));
EXIT_IF_ISNAN(XCOR)
STXCOR=model->STXCORO;
EXIT_IF_ISNAN(STXCOR)
FETA=model->FETAO;
EXIT_IF_ISNAN(FETA)
RS=((model->RSW1*iWE)*(1.0+(model->RSW2*iWE)));
EXIT_IF_ISNAN(RS)
STRS=model->STRSO;
EXIT_IF_ISNAN(STRS)
RSB=model->RSBO;
EXIT_IF_ISNAN(RSB)
RSG=model->RSGO;
EXIT_IF_ISNAN(RSG)
{
double __pow_0=0.0;
_pow(__pow_0,iLE,model->THESATLEXP)
EXIT_IF_ISNAN(__pow_0)
THESAT=(((model->THESATO+(((model->THESATL*GWE)/GPE)*__pow_0))*(1.0+(model->THESATW*iWE)))*(1.0+((model->THESATLW*iLE)*iWE)));
EXIT_IF_ISNAN(THESAT)
}
STTHESAT=(((model->STTHESATO*(1.0+(model->STTHESATL*iLE)))*(1.0+(model->STTHESATW*iWE)))*(1.0+((model->STTHESATLW*iLE)*iWE)));
EXIT_IF_ISNAN(STTHESAT)
THESATB=model->THESATBO;
EXIT_IF_ISNAN(THESATB)
THESATG=model->THESATGO;
EXIT_IF_ISNAN(THESATG)
AX=(model->AXO/(1.0+(model->AXL_i*iLE)));
EXIT_IF_ISNAN(AX)
{
double __pow_0=0.0;
_pow(__pow_0,iLE,model->ALPLEXP)
EXIT_IF_ISNAN(__pow_0)
ALP=((model->ALPL*__pow_0)*(1.0+(model->ALPW*iWE)));
EXIT_IF_ISNAN(ALP)
}
{
double __pow_0=0.0;
_pow(__pow_0,iLE,model->ALP1LEXP)
EXIT_IF_ISNAN(__pow_0)
tmpx=__pow_0;
EXIT_IF_ISNAN(tmpx)
}
ALP1=(((model->ALP1L1*tmpx)*(1.0+(model->ALP1W*iWE)))/(1.0+((model->ALP1L2_i*iLE)*tmpx)));
EXIT_IF_ISNAN(ALP1)
{
double __pow_0=0.0;
_pow(__pow_0,iLE,model->ALP2LEXP)
EXIT_IF_ISNAN(__pow_0)
tmpx=__pow_0;
EXIT_IF_ISNAN(tmpx)
}
ALP2=(((model->ALP2L1*tmpx)*(1.0+(model->ALP2W*iWE)))/(1.0+((model->ALP2L2_i*iLE)*tmpx)));
EXIT_IF_ISNAN(ALP2)
VP=model->VPO;
EXIT_IF_ISNAN(VP)
A1=((model->A1O*(1.0+(model->A1L*iLE)))*(1.0+(model->A1W*iWE)));
EXIT_IF_ISNAN(A1)
A2=model->A2O;
EXIT_IF_ISNAN(A2)
STA2=model->STA2O;
EXIT_IF_ISNAN(STA2)
A3=((model->A3O*(1.0+(model->A3L*iLE)))*(1.0+(model->A3W*iWE)));
EXIT_IF_ISNAN(A3)
A4=((model->A4O*(1.0+(model->A4L*iLE)))*(1.0+(model->A4W*iWE)));
EXIT_IF_ISNAN(A4)
GCO=model->GCOO;
EXIT_IF_ISNAN(GCO)
IGINV=(model->IGINVLW/(iWE*iLE));
EXIT_IF_ISNAN(IGINV)
IGOV=((model->IGOVW*model->LOV_i)/(LEN*iWE));
EXIT_IF_ISNAN(IGOV)
STIG=model->STIGO;
EXIT_IF_ISNAN(STIG)
GC2=model->GC2O;
EXIT_IF_ISNAN(GC2)
GC3=model->GC3O;
EXIT_IF_ISNAN(GC3)
CHIB=model->CHIBO;
EXIT_IF_ISNAN(CHIB)
AGIDL=((model->AGIDLW*model->LOV_i)/(LEN*iWE));
EXIT_IF_ISNAN(AGIDL)
BGIDL=model->BGIDLO;
EXIT_IF_ISNAN(BGIDL)
STBGIDL=model->STBGIDLO;
EXIT_IF_ISNAN(STBGIDL)
CGIDL=model->CGIDLO;
EXIT_IF_ISNAN(CGIDL)
#if defined(_DYNAMIC)
COX=(((3.453E-11*WEcv)*LEcv)/model->TOX_i);
EXIT_IF_ISNAN(COX)
#endif /*_DYNAMIC*/
CGOV=(((3.453E-11*WEcv)*model->LOV_i)/model->TOXOV_i);
EXIT_IF_ISNAN(CGOV)
#if defined(_DYNAMIC)
CGBOV=((model->CGBOVL*Lcv)/LEN);
EXIT_IF_ISNAN(CGBOV)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
CFR=((model->CFRW*Wcv)/WEN);
EXIT_IF_ISNAN(CFR)
#endif /*_DYNAMIC*/
FNT=model->FNTO;
EXIT_IF_ISNAN(FNT)
NFA=((iWE*iLE)*model->NFALW);
EXIT_IF_ISNAN(NFA)
NFB=((iWE*iLE)*model->NFBLW);
EXIT_IF_ISNAN(NFB)
NFC=((iWE*iLE)*model->NFCLW);
EXIT_IF_ISNAN(NFC)
if
(((SA_i>0)&&(SB_i>0)))
{
Invsa=(1.0/(SA_i+(0.5*L_i)));
EXIT_IF_ISNAN(Invsa)
Invsb=(1.0/(SB_i+(0.5*L_i)));
EXIT_IF_ISNAN(Invsb)
Invsaref=(1.0/(SAREF_i+(0.5*L_i)));
EXIT_IF_ISNAN(Invsaref)
Invsbref=(1.0/(SBREF_i+(0.5*L_i)));
EXIT_IF_ISNAN(Invsbref)
Lx=(((L_i+delLPS)>1e-9)?(L_i+delLPS):1e-9);
EXIT_IF_ISNAN(Lx)
Wx=((((W_i+delWOD)+model->WLOD)>1e-9)?((W_i+delWOD)+model->WLOD):1e-9);
EXIT_IF_ISNAN(Wx)
{
double __pow_0=0.0;
_pow(__pow_0,Lx,model->LLODKUO_i)
EXIT_IF_ISNAN(__pow_0)
templ=(1.0/__pow_0);
EXIT_IF_ISNAN(templ)
}
{
double __pow_0=0.0;
_pow(__pow_0,Wx,model->WLODKUO_i)
EXIT_IF_ISNAN(__pow_0)
tempw=(1.0/__pow_0);
EXIT_IF_ISNAN(tempw)
}
Kstressu0=((((1.0+(model->LKUO*templ))+(model->WKUO*tempw))+((model->PKUO*templ)*tempw))*(1.0+(model->TKUO*(model->rT-1.0))));
EXIT_IF_ISNAN(Kstressu0)
rhobeta=((model->KUO*(Invsa+Invsb))/Kstressu0);
EXIT_IF_ISNAN(rhobeta)
rhobetaref=((model->KUO*(Invsaref+Invsbref))/Kstressu0);
EXIT_IF_ISNAN(rhobetaref)
{
double __pow_0=0.0;
_pow(__pow_0,Lx,model->LLODVTH_i)
EXIT_IF_ISNAN(__pow_0)
templ=(1.0/__pow_0);
EXIT_IF_ISNAN(templ)
}
{
double __pow_0=0.0;
_pow(__pow_0,Wx,model->WLODVTH_i)
EXIT_IF_ISNAN(__pow_0)
tempw=(1.0/__pow_0);
EXIT_IF_ISNAN(tempw)
}
Kstressvth0=(((1.0+(model->LKVTHO*templ))+(model->WKVTHO*tempw))+((model->PKVTHO*templ)*tempw));
EXIT_IF_ISNAN(Kstressvth0)
temp0=(((Invsa+Invsb)-Invsaref)-Invsbref);
EXIT_IF_ISNAN(temp0)
BETN=((BETN*(1.0+rhobeta))/(1.0+rhobetaref));
EXIT_IF_ISNAN(BETN)
THESAT=(((THESAT*(1.0+rhobeta))*(1.0+(model->KVSAT_i*rhobetaref)))/((1.0+rhobetaref)*(1.0+(model->KVSAT_i*rhobeta))));
EXIT_IF_ISNAN(THESAT)
VFB=(VFB+((model->KVTHO*temp0)/Kstressvth0));
EXIT_IF_ISNAN(VFB)
{
double __pow_0=0.0;
_pow(__pow_0,Kstressvth0,model->LODETAO_i)
EXIT_IF_ISNAN(__pow_0)
CF=(CF+((model->STETAO*temp0)/__pow_0));
EXIT_IF_ISNAN(CF)
}
}
here->VFB_i=VFB;
EXIT_IF_ISNAN(here->VFB_i)
STVFB_i=STVFB;
EXIT_IF_ISNAN(STVFB_i)
model->TOX_i=((TOX>1e-10)?TOX:1e-10);
EXIT_IF_ISNAN(model->TOX_i)
NEFF_i=((NEFF>1e20)?((NEFF<1e26)?NEFF:1e26):1e20);
EXIT_IF_ISNAN(NEFF_i)
here->VNSUB_i=VNSUB;
EXIT_IF_ISNAN(here->VNSUB_i)
here->NSLP_i=((NSLP>1e-3)?NSLP:1e-3);
EXIT_IF_ISNAN(here->NSLP_i)
here->DNSUB_i=((DNSUB>0.0)?((DNSUB<1.0)?DNSUB:1.0):0.0);
EXIT_IF_ISNAN(here->DNSUB_i)
DPHIB_i=DPHIB;
EXIT_IF_ISNAN(DPHIB_i)
NP_i=((NP>0.0)?NP:0.0);
EXIT_IF_ISNAN(NP_i)
QMC_i=((model->QMC>0.0)?model->QMC:0.0);
EXIT_IF_ISNAN(QMC_i)
CT_i=((CT>0.0)?CT:0.0);
EXIT_IF_ISNAN(CT_i)
model->TOXOV_i=((TOXOV>1e-10)?TOXOV:1e-10);
EXIT_IF_ISNAN(model->TOXOV_i)
NOV_i=((NOV>1e20)?((NOV<1e27)?NOV:1e27):1e20);
EXIT_IF_ISNAN(NOV_i)
here->CF_i=((CF>0.0)?CF:0.0);
EXIT_IF_ISNAN(here->CF_i)
here->CFB_i=((CFB>0.0)?((CFB<1.0)?CFB:1.0):0.0);
EXIT_IF_ISNAN(here->CFB_i)
here->BET_i=((BETN>0.0)?BETN:0.0);
EXIT_IF_ISNAN(here->BET_i)
STBET_i=STBET;
EXIT_IF_ISNAN(STBET_i)
here->MUE_i=((MUE>0.0)?MUE:0.0);
EXIT_IF_ISNAN(here->MUE_i)
STMUE_i=STMUE;
EXIT_IF_ISNAN(STMUE_i)
here->THEMU_i=((THEMU>0.0)?THEMU:0.0);
EXIT_IF_ISNAN(here->THEMU_i)
STTHEMU_i=STTHEMU;
EXIT_IF_ISNAN(STTHEMU_i)
here->CS_i=((CS>0.0)?CS:0.0);
EXIT_IF_ISNAN(here->CS_i)
STCS_i=STCS;
EXIT_IF_ISNAN(STCS_i)
here->XCOR_i=((XCOR>0.0)?XCOR:0.0);
EXIT_IF_ISNAN(here->XCOR_i)
STXCOR_i=STXCOR;
EXIT_IF_ISNAN(STXCOR_i)
FETA_i=((FETA>0.0)?FETA:0.0);
EXIT_IF_ISNAN(FETA_i)
RS_i=((RS>0.0)?RS:0.0);
EXIT_IF_ISNAN(RS_i)
STRS_i=STRS;
EXIT_IF_ISNAN(STRS_i)
here->RSB_i=((RSB>(-0.5))?((RSB<1.0)?RSB:1.0):(-0.5));
EXIT_IF_ISNAN(here->RSB_i)
here->RSG_i=((RSG>(-0.5))?RSG:(-0.5));
EXIT_IF_ISNAN(here->RSG_i)
here->THESAT_i=((THESAT>0.0)?THESAT:0.0);
EXIT_IF_ISNAN(here->THESAT_i)
STTHESAT_i=STTHESAT;
EXIT_IF_ISNAN(STTHESAT_i)
here->THESATB_i=((THESATB>(-0.5))?((THESATB<1.0)?THESATB:1.0):(-0.5));
EXIT_IF_ISNAN(here->THESATB_i)
here->THESATG_i=((THESATG>(-0.5))?THESATG:(-0.5));
EXIT_IF_ISNAN(here->THESATG_i)
here->AX_i=((AX>2.0)?AX:2.0);
EXIT_IF_ISNAN(here->AX_i)
here->ALP_i=((ALP>0.0)?ALP:0.0);
EXIT_IF_ISNAN(here->ALP_i)
here->ALP1_i=((ALP1>0.0)?ALP1:0.0);
EXIT_IF_ISNAN(here->ALP1_i)
here->ALP2_i=((ALP2>0.0)?ALP2:0.0);
EXIT_IF_ISNAN(here->ALP2_i)
VP_i=((VP>1.0e-10)?VP:1.0e-10);
EXIT_IF_ISNAN(VP_i)
here->A1_i=((A1>0.0)?A1:0.0);
EXIT_IF_ISNAN(here->A1_i)
here->A2_i=((A2>0.0)?A2:0.0);
EXIT_IF_ISNAN(here->A2_i)
STA2_i=STA2;
EXIT_IF_ISNAN(STA2_i)
here->A3_i=((A3>0.0)?A3:0.0);
EXIT_IF_ISNAN(here->A3_i)
here->A4_i=((A4>0.0)?A4:0.0);
EXIT_IF_ISNAN(here->A4_i)
GCO_i=((GCO>(-10.0))?((GCO<10.0)?GCO:10.0):(-10.0));
EXIT_IF_ISNAN(GCO_i)
here->IGINV_i=((IGINV>0.0)?IGINV:0.0);
EXIT_IF_ISNAN(here->IGINV_i)
here->IGOV_i=((IGOV>0.0)?IGOV:0.0);
EXIT_IF_ISNAN(here->IGOV_i)
STIG_i=STIG;
EXIT_IF_ISNAN(STIG_i)
here->GC2_i=((GC2>0.0)?((GC2<10.0)?GC2:10.0):0.0);
EXIT_IF_ISNAN(here->GC2_i)
here->GC3_i=((GC3>(-10.0))?((GC3<10.0)?GC3:10.0):(-10.0));
EXIT_IF_ISNAN(here->GC3_i)
here->CHIB_i=((CHIB>1.0)?CHIB:1.0);
EXIT_IF_ISNAN(here->CHIB_i)
here->AGIDL_i=((AGIDL>0.0)?AGIDL:0.0);
EXIT_IF_ISNAN(here->AGIDL_i)
here->BGIDL_i=((BGIDL>0.0)?BGIDL:0.0);
EXIT_IF_ISNAN(here->BGIDL_i)
STBGIDL_i=STBGIDL;
EXIT_IF_ISNAN(STBGIDL_i)
here->CGIDL_i=CGIDL;
EXIT_IF_ISNAN(here->CGIDL_i)
#if defined(_DYNAMIC)
here->COX_i=((COX>0.0)?COX:0.0);
EXIT_IF_ISNAN(here->COX_i)
#endif /*_DYNAMIC*/
here->CGOV_i=((CGOV>0.0)?CGOV:0.0);
EXIT_IF_ISNAN(here->CGOV_i)
#if defined(_DYNAMIC)
here->CGBOV_i=((CGBOV>0.0)?CGBOV:0.0);
EXIT_IF_ISNAN(here->CGBOV_i)
#endif /*_DYNAMIC*/
#if defined(_DYNAMIC)
here->CFR_i=((CFR>0.0)?CFR:0.0);
EXIT_IF_ISNAN(here->CFR_i)
#endif /*_DYNAMIC*/
FNT_i=((FNT>0.0)?FNT:0.0);
EXIT_IF_ISNAN(FNT_i)
here->NFA_i=((NFA>0.0)?NFA:0.0);
EXIT_IF_ISNAN(here->NFA_i)
here->NFB_i=((NFB>0.0)?NFB:0.0);
EXIT_IF_ISNAN(here->NFB_i)
here->NFC_i=((NFC>0.0)?NFC:0.0);
EXIT_IF_ISNAN(here->NFC_i)
here->MULT_i=((here->MULT>0.0)?here->MULT:0.0);
EXIT_IF_ISNAN(here->MULT_i)
here->phit1=(model->phit*(1.0+(CT_i*model->rTn)));
EXIT_IF_ISNAN(here->phit1)
here->inv_phit1=(1.0/here->phit1);
EXIT_IF_ISNAN(here->inv_phit1)
here->VFB_i=(here->VFB_i+(STVFB_i*model->dT));
EXIT_IF_ISNAN(here->VFB_i)
{
double __pow_0=0.0;
double __logE_1=0.0;
_pow(__pow_0,model->phibFac,(-0.75))
EXIT_IF_ISNAN(__pow_0)
_logE(__logE_1,(((NEFF_i*__pow_0)*4.0e-26)))
EXIT_IF_ISNAN(__logE_1)
here->phib=((model->Eg+DPHIB_i)+((2.0*model->phit)*__logE_1));
EXIT_IF_ISNAN(here->phib)
}
here->phib=((here->phib>5.0E-2)?here->phib:5.0E-2);
EXIT_IF_ISNAN(here->phib)
CoxPrime=(3.453E-11/model->TOX_i);
EXIT_IF_ISNAN(CoxPrime)
tox_sq=(model->TOX_i*model->TOX_i);
EXIT_IF_ISNAN(tox_sq)
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(((((2.0*1.6021918E-19)*NEFF_i)*1.045E-10)*model->inv_phit)))
EXIT_IF_ISNAN(__sqrt_0)
here->G_0=(__sqrt_0/CoxPrime);
EXIT_IF_ISNAN(here->G_0)
}
here->kp=0.0;
EXIT_IF_ISNAN(here->kp)
if
((NP_i>0.0))
{
arg2max=(8.0e7/tox_sq);
EXIT_IF_ISNAN(arg2max)
np=((NP_i>arg2max)?NP_i:arg2max);
EXIT_IF_ISNAN(np)
np=((3.0e25>np)?3.0e25:np);
EXIT_IF_ISNAN(np)
here->kp=((((2.0*CoxPrime)*CoxPrime)*model->phit)/((1.6021918E-19*np)*1.045E-10));
EXIT_IF_ISNAN(here->kp)
}
#if defined(_DYNAMIC)
here->qlim2=((100.0*model->phit)*model->phit);
EXIT_IF_ISNAN(here->qlim2)
#endif /*_DYNAMIC*/
here->qq=0.0;
EXIT_IF_ISNAN(here->qq)
if
((QMC_i>0.0))
{
{
double __pow_0=0.0;
_pow(__pow_0,CoxPrime,6.6666666666666667e-01)
EXIT_IF_ISNAN(__pow_0)
here->qq=(((0.4*5.951993)*QMC_i)*__pow_0);
EXIT_IF_ISNAN(here->qq)
}
if
((model->CHNL_TYPE==(-1)))
{
here->qq=((7.448711/5.951993)*here->qq);
EXIT_IF_ISNAN(here->qq)
}
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,((((model->phit*here->G_0)*here->G_0)*here->phib)))
EXIT_IF_ISNAN(__sqrt_0)
qb0=__sqrt_0;
EXIT_IF_ISNAN(qb0)
}
{
double __pow_0=0.0;
_pow(__pow_0,qb0,6.6666666666666667e-01)
EXIT_IF_ISNAN(__pow_0)
dphibq=((0.75*here->qq)*__pow_0);
EXIT_IF_ISNAN(dphibq)
}
here->phib=(here->phib+dphibq);
EXIT_IF_ISNAN(here->phib)
here->G_0=(here->G_0*(1.0+(((2.0*6.6666666666666667e-01)*dphibq)/qb0)));
EXIT_IF_ISNAN(here->G_0)
}
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(here->phib))
EXIT_IF_ISNAN(__sqrt_0)
here->sqrt_phib=__sqrt_0;
EXIT_IF_ISNAN(here->sqrt_phib)
}
here->phix=(0.95*here->phib);
EXIT_IF_ISNAN(here->phix)
here->aphi=((0.0025*here->phib)*here->phib);
EXIT_IF_ISNAN(here->aphi)
here->bphi=here->aphi;
EXIT_IF_ISNAN(here->bphi)
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(here->bphi))
EXIT_IF_ISNAN(__sqrt_0)
phix2=(0.5*__sqrt_0);
EXIT_IF_ISNAN(phix2)
}
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,((((here->phix-phix2)*(here->phix-phix2))+here->aphi)))
EXIT_IF_ISNAN(__sqrt_0)
here->phix1=(0.5*((here->phix-phix2)-__sqrt_0));
EXIT_IF_ISNAN(here->phix1)
}
CoxovPrime=(3.453E-11/model->TOXOV_i);
EXIT_IF_ISNAN(CoxovPrime)
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,(((((2.0*1.6021918E-19)*NOV_i)*1.045E-10)*model->inv_phit)))
EXIT_IF_ISNAN(__sqrt_0)
here->GOV=(__sqrt_0/CoxovPrime);
EXIT_IF_ISNAN(here->GOV)
}
here->GOV2=(here->GOV*here->GOV);
EXIT_IF_ISNAN(here->GOV2)
here->xi_ov=(1.0+(here->GOV*7.0710678118654746e-01));
EXIT_IF_ISNAN(here->xi_ov)
here->inv_xi_ov=(1.0/here->xi_ov);
EXIT_IF_ISNAN(here->inv_xi_ov)
here->x_mrg_ov=(1.0e-5*here->xi_ov);
EXIT_IF_ISNAN(here->x_mrg_ov)
{
double __pow_0=0.0;
_pow(__pow_0,model->rTn,STBET_i)
EXIT_IF_ISNAN(__pow_0)
tf_bet=__pow_0;
EXIT_IF_ISNAN(tf_bet)
}
here->BET_i=((here->BET_i*CoxPrime)*tf_bet);
EXIT_IF_ISNAN(here->BET_i)
{
double __pow_0=0.0;
_pow(__pow_0,model->rTn,STTHEMU_i)
EXIT_IF_ISNAN(__pow_0)
here->THEMU_i=(here->THEMU_i*__pow_0);
EXIT_IF_ISNAN(here->THEMU_i)
}
{
double __pow_0=0.0;
_pow(__pow_0,model->rTn,STMUE_i)
EXIT_IF_ISNAN(__pow_0)
tf_mue=__pow_0;
EXIT_IF_ISNAN(tf_mue)
}
here->MUE_i=(here->MUE_i*tf_mue);
EXIT_IF_ISNAN(here->MUE_i)
{
double __pow_0=0.0;
_pow(__pow_0,model->rTn,STCS_i)
EXIT_IF_ISNAN(__pow_0)
tf_cs=__pow_0;
EXIT_IF_ISNAN(tf_cs)
}
here->CS_i=(here->CS_i*tf_cs);
EXIT_IF_ISNAN(here->CS_i)
{
double __pow_0=0.0;
_pow(__pow_0,model->rTn,STXCOR_i)
EXIT_IF_ISNAN(__pow_0)
tf_xcor=__pow_0;
EXIT_IF_ISNAN(tf_xcor)
}
here->XCOR_i=(here->XCOR_i*tf_xcor);
EXIT_IF_ISNAN(here->XCOR_i)
here->E_eff0=((1.0e-8*CoxPrime)/1.045E-10);
EXIT_IF_ISNAN(here->E_eff0)
here->eta_mu=(0.5*FETA_i);
EXIT_IF_ISNAN(here->eta_mu)
if
((model->CHNL_TYPE==(-1)))
{
here->eta_mu=(3.3333333333333333e-01*FETA_i);
EXIT_IF_ISNAN(here->eta_mu)
}
{
double __pow_0=0.0;
_pow(__pow_0,model->rTn,STRS_i)
EXIT_IF_ISNAN(__pow_0)
tf_ther=__pow_0;
EXIT_IF_ISNAN(tf_ther)
}
RS_i=(RS_i*tf_ther);
EXIT_IF_ISNAN(RS_i)
here->THER_i=((2*here->BET_i)*RS_i);
EXIT_IF_ISNAN(here->THER_i)
{
double __pow_0=0.0;
_pow(__pow_0,model->rTn,STTHESAT_i)
EXIT_IF_ISNAN(__pow_0)
tf_thesat=__pow_0;
EXIT_IF_ISNAN(tf_thesat)
}
here->THESAT_i=(here->THESAT_i*tf_thesat);
EXIT_IF_ISNAN(here->THESAT_i)
here->Vdsat_lim=(3.912023005*here->phit1);
EXIT_IF_ISNAN(here->Vdsat_lim)
here->inv_AX=(1.0/here->AX_i);
EXIT_IF_ISNAN(here->inv_AX)
here->inv_VP=(1.0/VP_i);
EXIT_IF_ISNAN(here->inv_VP)
{
double __pow_0=0.0;
_pow(__pow_0,model->rT,STA2_i)
EXIT_IF_ISNAN(__pow_0)
here->A2_i=(here->A2_i*__pow_0);
EXIT_IF_ISNAN(here->A2_i)
}
{
double __pow_0=0.0;
_pow(__pow_0,model->rT,STIG_i)
EXIT_IF_ISNAN(__pow_0)
tf_ig=__pow_0;
EXIT_IF_ISNAN(tf_ig)
}
here->IGINV_i=(here->IGINV_i*tf_ig);
EXIT_IF_ISNAN(here->IGINV_i)
here->IGOV_i=(here->IGOV_i*tf_ig);
EXIT_IF_ISNAN(here->IGOV_i)
here->inv_CHIB=(1.0/here->CHIB_i);
EXIT_IF_ISNAN(here->inv_CHIB)
{
double __sqrt_0=0.0;
_sqrt(__sqrt_0,((((2*1.6021918E-19)*9.1093826E-31)*here->CHIB_i)))
EXIT_IF_ISNAN(__sqrt_0)
tempM=(((4.0*3.3333333333333333e-01)*__sqrt_0)/1.05457168E-34);
EXIT_IF_ISNAN(tempM)
}
here->BCH=(tempM*model->TOX_i);
EXIT_IF_ISNAN(here->BCH)
here->BOV=(tempM*model->TOXOV_i);
EXIT_IF_ISNAN(here->BOV)
here->GCQ=0;
EXIT_IF_ISNAN(here->GCQ)
if
((here->GC3_i<0))
{
here->GCQ=(((-0.495)*here->GC2_i)/here->GC3_i);
EXIT_IF_ISNAN(here->GCQ)
}
here->alpha_b=(0.5*(here->phib+model->Eg));
EXIT_IF_ISNAN(here->alpha_b)
here->Dch=(GCO_i*here->phit1);
EXIT_IF_ISNAN(here->Dch)
here->Dov=(GCO_i*model->phit);
EXIT_IF_ISNAN(here->Dov)
here->AGIDL_i=((here->AGIDL_i*4e-18)/(model->TOXOV_i*model->TOXOV_i));
EXIT_IF_ISNAN(here->AGIDL_i)
tempM=(((1.0+(STBGIDL_i*model->dT))>0)?(1.0+(STBGIDL_i*model->dT)):0);
EXIT_IF_ISNAN(tempM)
here->BGIDL_i=(((here->BGIDL_i*tempM)*model->TOXOV_i)*5e8);
EXIT_IF_ISNAN(here->BGIDL_i)
here->nt=(((FNT_i*4)*1.3806505E-23)*model->TKD);
EXIT_IF_ISNAN(here->nt)
here->Cox_over_q=(CoxPrime/1.6021918E-19);
EXIT_IF_ISNAN(here->Cox_over_q)
here->Sfl_prefac=(((model->phit*model->phit)*here->BET_i)/here->Cox_over_q);
EXIT_IF_ISNAN(here->Sfl_prefac)
here->x1=1.25;
EXIT_IF_ISNAN(here->x1)
here->inv_xg1=(1.0/(here->x1+(here->GOV*7.324648775608221e-1)));
EXIT_IF_ISNAN(here->inv_xg1)
here->vbimins=0.0;
EXIT_IF_ISNAN(here->vbimins)
here->vfmins=0.0;
EXIT_IF_ISNAN(here->vfmins)
here->vchs=0.0;
EXIT_IF_ISNAN(here->vchs)
here->vbbtlims=0.0;
EXIT_IF_ISNAN(here->vbbtlims)
here->vbimind=0.0;
EXIT_IF_ISNAN(here->vbimind)
here->vfmind=0.0;
EXIT_IF_ISNAN(here->vfmind)
here->vchd=0.0;
EXIT_IF_ISNAN(here->vchd)
here->vbbtlimd=0.0;
EXIT_IF_ISNAN(here->vbbtlimd)
here->vj=0.0;
EXIT_IF_ISNAN(here->vj)
#if defined(_DERIVATE)
vj_VD_B=0.0;
vj_VS_B=0.0;
#endif /*_DERIVATE*/
here->idmult=0.0;
EXIT_IF_ISNAN(here->idmult)
#if defined(_DERIVATE)
idmult_VD_B=0.0;
idmult_VS_B=0.0;
#endif /*_DERIVATE*/
here->vjsrh=0.0;
EXIT_IF_ISNAN(here->vjsrh)
#if defined(_DERIVATE)
vjsrh_VD_B=0.0;
vjsrh_VS_B=0.0;
#endif /*_DERIVATE*/
here->zinv=0.0;
EXIT_IF_ISNAN(here->zinv)
#if defined(_DERIVATE)
zinv_VD_B=0.0;
zinv_VS_B=0.0;
#endif /*_DERIVATE*/
here->wdep=0.0;
EXIT_IF_ISNAN(here->wdep)
#if defined(_DERIVATE)
wdep_VD_B=0.0;
wdep_VS_B=0.0;
#endif /*_DERIVATE*/
here->wsrh=0.0;
EXIT_IF_ISNAN(here->wsrh)
#if defined(_DERIVATE)
wsrh_VD_B=0.0;
wsrh_VS_B=0.0;
#endif /*_DERIVATE*/
here->asrh=0.0;
EXIT_IF_ISNAN(here->asrh)
#if defined(_DERIVATE)
asrh_VD_B=0.0;
asrh_VS_B=0.0;
#endif /*_DERIVATE*/
here->vav=0.0;
EXIT_IF_ISNAN(here->vav)
#if defined(_DERIVATE)
vav_VD_B=0.0;
vav_VS_B=0.0;
#endif /*_DERIVATE*/
here->vbi_minus_vjsrh=0.0;
EXIT_IF_ISNAN(here->vbi_minus_vjsrh)
#if defined(_DERIVATE)
vbi_minus_vjsrh_VD_B=0.0;
vbi_minus_vjsrh_VS_B=0.0;
#endif /*_DERIVATE*/
if
((model->SWJUNCAP==0.0))
{
here->ABSOURCE_i=0.0;
EXIT_IF_ISNAN(here->ABSOURCE_i)
here->LSSOURCE_i=0.0;
EXIT_IF_ISNAN(here->LSSOURCE_i)
here->LGSOURCE_i=0.0;
EXIT_IF_ISNAN(here->LGSOURCE_i)
here->ABDRAIN_i=0.0;
EXIT_IF_ISNAN(here->ABDRAIN_i)
here->LSDRAIN_i=0.0;
EXIT_IF_ISNAN(here->LSDRAIN_i)
here->LGDRAIN_i=0.0;
EXIT_IF_ISNAN(here->LGDRAIN_i)
here->VMAXS=0.0;
EXIT_IF_ISNAN(here->VMAXS)
here->VMAXD=0.0;
EXIT_IF_ISNAN(here->VMAXD)
}
else
{
if
((model->SWJUNCAP==2.0))
{
here->ABSOURCE_i=((here->AS>0)?here->AS:0);
EXIT_IF_ISNAN(here->ABSOURCE_i)
here->LSSOURCE_i=((here->PS>0)?here->PS:0);
EXIT_IF_ISNAN(here->LSSOURCE_i)
here->LGSOURCE_i=juncapwidth;
EXIT_IF_ISNAN(here->LGSOURCE_i)
here->ABDRAIN_i=((here->AD>0)?here->AD:0);
EXIT_IF_ISNAN(here->ABDRAIN_i)
here->LSDRAIN_i=((here->PD>0)?here->PD:0);
EXIT_IF_ISNAN(here->LSDRAIN_i)
here->LGDRAIN_i=juncapwidth;
EXIT_IF_ISNAN(here->LGDRAIN_i)
}
else
{
if
((model->SWJUNCAP==3.0))
{
here->ABSOURCE_i=((here->AS>0)?here->AS:0);
EXIT_IF_ISNAN(here->ABSOURCE_i)
here->ABDRAIN_i=((here->AD>0)?here->AD:0);
EXIT_IF_ISNAN(here->ABDRAIN_i)
here->LSSOURCE_i=(((here->PS-juncapwidth)>0)?(here->PS-juncapwidth):0);
EXIT_IF_ISNAN(here->LSSOURCE_i)
here->LGSOURCE_i=juncapwidth;
EXIT_IF_ISNAN(here->LGSOURCE_i)
here->LSDRAIN_i=(((here->PD-juncapwidth)>0)?(here->PD-juncapwidth):0);
EXIT_IF_ISNAN(here->LSDRAIN_i)
here->LGDRAIN_i=juncapwidth;
EXIT_IF_ISNAN(here->LGDRAIN_i)
}
else
{
here->ABSOURCE_i=((here->ABSOURCE>0)?here->ABSOURCE:0);
EXIT_IF_ISNAN(here->ABSOURCE_i)
here->LSSOURCE_i=((here->LSSOURCE>0)?here->LSSOURCE:0);
EXIT_IF_ISNAN(here->LSSOURCE_i)
here->LGSOURCE_i=((here->LGSOURCE>0)?here->LGSOURCE:0);
EXIT_IF_ISNAN(here->LGSOURCE_i)
here->ABDRAIN_i=((here->ABDRAIN>0)?here->ABDRAIN:0);
EXIT_IF_ISNAN(here->ABDRAIN_i)
here->LSDRAIN_i=((here->LSDRAIN>0)?here->LSDRAIN:0);
EXIT_IF_ISNAN(here->LSDRAIN_i)
here->LGDRAIN_i=((here->LGDRAIN>0)?here->LGDRAIN:0);
EXIT_IF_ISNAN(here->LGDRAIN_i)
}
}
if
(((model->idsatbot*here->ABSOURCE_i)>0))
{
{
double __logE_0=0.0;
_logE(__logE_0,(((model->IMAX_i/(model->idsatbot*here->ABSOURCE_i))+1)))
EXIT_IF_ISNAN(__logE_0)
vmaxbot=(model->phitd*__logE_0);
EXIT_IF_ISNAN(vmaxbot)
}
}
else
{
vmaxbot=1E8;
EXIT_IF_ISNAN(vmaxbot)
}
if
(((model->idsatsti*here->LSSOURCE_i)>0))
{
{
double __logE_0=0.0;
_logE(__logE_0,(((model->IMAX_i/(model->idsatsti*here->LSSOURCE_i))+1)))
EXIT_IF_ISNAN(__logE_0)
vmaxsti=(model->phitd*__logE_0);
EXIT_IF_ISNAN(vmaxsti)
}
}
else
{
vmaxsti=1E8;
EXIT_IF_ISNAN(vmaxsti)
}
if
(((model->idsatgat*here->LGSOURCE_i)>0))
{
{
double __logE_0=0.0;
_logE(__logE_0,(((model->IMAX_i/(model->idsatgat*here->LGSOURCE_i))+1)))
EXIT_IF_ISNAN(__logE_0)
vmaxgat=(model->phitd*__logE_0);
EXIT_IF_ISNAN(vmaxgat)
}
}
else
{
vmaxgat=1E8;
EXIT_IF_ISNAN(vmaxgat)
}
{
double __min_0=0.0;
double __min_1=0.0;
_min(__min_0,vmaxbot,vmaxsti)
EXIT_IF_ISNAN(__min_0)
_min(__min_1,__min_0,vmaxgat)
EXIT_IF_ISNAN(__min_1)
here->VMAXS=__min_1;
EXIT_IF_ISNAN(here->VMAXS)
}
vbibot2=model->vbibot;
EXIT_IF_ISNAN(vbibot2)
vbisti2=model->vbisti;
EXIT_IF_ISNAN(vbisti2)
vbigat2=model->vbigat;
EXIT_IF_ISNAN(vbigat2)
if
((here->ABSOURCE_i==0))
{
vbibot2=(model->vbisti+model->vbigat);
EXIT_IF_ISNAN(vbibot2)
}
if
((here->LSSOURCE_i==0))
{
vbisti2=(model->vbibot+model->vbigat);
EXIT_IF_ISNAN(vbisti2)
}
if
((here->LGSOURCE_i==0))
{
vbigat2=(model->vbibot+model->vbisti);
EXIT_IF_ISNAN(vbigat2)
}
{
double __min_0=0.0;
double __min_1=0.0;
_min(__min_0,vbibot2,vbisti2)
EXIT_IF_ISNAN(__min_0)
_min(__min_1,__min_0,vbigat2)
EXIT_IF_ISNAN(__min_1)
here->vbimins=__min_1;
EXIT_IF_ISNAN(here->vbimins)
}
here->vchs=(here->vbimins*0.1);
EXIT_IF_ISNAN(here->vchs)
if
((here->vbimins==model->vbibot))
{
{
double __pow_0=0.0;
_pow(__pow_0,2,((-1.0)/model->PBOT_i))
EXIT_IF_ISNAN(__pow_0)
here->vfmins=(model->vbibot*(1-__pow_0));
EXIT_IF_ISNAN(here->vfmins)
}
}
if
((here->vbimins==model->vbisti))
{
{
double __pow_0=0.0;
_pow(__pow_0,2,((-1.0)/model->PSTI_i))
EXIT_IF_ISNAN(__pow_0)
here->vfmins=(model->vbisti*(1-__pow_0));
EXIT_IF_ISNAN(here->vfmins)
}
}
if
((here->vbimins==model->vbigat))
{
{
double __pow_0=0.0;
_pow(__pow_0,2,((-1.0)/model->PGAT_i))
EXIT_IF_ISNAN(__pow_0)
here->vfmins=(model->vbigat*(1-__pow_0));
EXIT_IF_ISNAN(here->vfmins)
}
}
vbibot2r=model->VBIRBOT_i;
EXIT_IF_ISNAN(vbibot2r)
vbisti2r=model->VBIRSTI_i;
EXIT_IF_ISNAN(vbisti2r)
vbigat2r=model->VBIRGAT_i;
EXIT_IF_ISNAN(vbigat2r)
if
((here->ABSOURCE_i==0))
{
vbibot2r=(model->VBIRSTI_i+model->VBIRGAT_i);
EXIT_IF_ISNAN(vbibot2r)
}
if
((here->LSSOURCE_i==0))
{
vbisti2r=(model->VBIRBOT_i+model->VBIRGAT_i);
EXIT_IF_ISNAN(vbisti2r)
}
if
((here->LGSOURCE_i==0))
{
vbigat2r=(model->VBIRBOT_i+model->VBIRSTI_i);
EXIT_IF_ISNAN(vbigat2r)
}
{
double __min_0=0.0;
double __min_1=0.0;
_min(__min_0,vbibot2r,vbisti2r)
EXIT_IF_ISNAN(__min_0)
_min(__min_1,__min_0,vbigat2r)
EXIT_IF_ISNAN(__min_1)
here->vbbtlims=(__min_1-0.050);
EXIT_IF_ISNAN(here->vbbtlims)
}
if
(((model->idsatbot*here->ABDRAIN_i)>0))
{
{
double __logE_0=0.0;
_logE(__logE_0,(((model->IMAX_i/(model->idsatbot*here->ABDRAIN_i))+1)))
EXIT_IF_ISNAN(__logE_0)
vmaxbot=(model->phitd*__logE_0);
EXIT_IF_ISNAN(vmaxbot)
}
}
else
{
vmaxbot=1E8;
EXIT_IF_ISNAN(vmaxbot)
}
if
(((model->idsatsti*here->LSDRAIN_i)>0))
{
{
double __logE_0=0.0;
_logE(__logE_0,(((model->IMAX_i/(model->idsatsti*here->LSDRAIN_i))+1)))
EXIT_IF_ISNAN(__logE_0)
vmaxsti=(model->phitd*__logE_0);
EXIT_IF_ISNAN(vmaxsti)
}
}
else
{
vmaxsti=1E8;
EXIT_IF_ISNAN(vmaxsti)
}
if
(((model->idsatgat*here->LGDRAIN_i)>0))
{
{
double __logE_0=0.0;
_logE(__logE_0,(((model->IMAX_i/(model->idsatgat*here->LGDRAIN_i))+1)))
EXIT_IF_ISNAN(__logE_0)
vmaxgat=(model->phitd*__logE_0);
EXIT_IF_ISNAN(vmaxgat)
}
}
else
{
vmaxgat=1E8;
EXIT_IF_ISNAN(vmaxgat)
}
{
double __min_0=0.0;
double __min_1=0.0;
_min(__min_0,vmaxbot,vmaxsti)
EXIT_IF_ISNAN(__min_0)
_min(__min_1,__min_0,vmaxgat)
EXIT_IF_ISNAN(__min_1)
here->VMAXD=__min_1;
EXIT_IF_ISNAN(here->VMAXD)
}
vbibot2=model->vbibot;
EXIT_IF_ISNAN(vbibot2)
vbisti2=model->vbisti;
EXIT_IF_ISNAN(vbisti2)
vbigat2=model->vbigat;
EXIT_IF_ISNAN(vbigat2)
if
((here->ABDRAIN_i==0))
{
vbibot2=(model->vbisti+model->vbigat);
EXIT_IF_ISNAN(vbibot2)
}
if
((here->LSDRAIN_i==0))
{
vbisti2=(model->vbibot+model->vbigat);
EXIT_IF_ISNAN(vbisti2)
}
if
((here->LGDRAIN_i==0))
{
vbigat2=(model->vbibot+model->vbisti);
EXIT_IF_ISNAN(vbigat2)
}
{
double __min_0=0.0;
double __min_1=0.0;
_min(__min_0,vbibot2,vbisti2)
EXIT_IF_ISNAN(__min_0)
_min(__min_1,__min_0,vbigat2)
EXIT_IF_ISNAN(__min_1)
here->vbimind=__min_1;
EXIT_IF_ISNAN(here->vbimind)
}
here->vchd=(here->vbimind*0.1);
EXIT_IF_ISNAN(here->vchd)
if
((here->vbimind==model->vbibot))
{
{
double __pow_0=0.0;
_pow(__pow_0,2,((-1.0)/model->PBOT_i))
EXIT_IF_ISNAN(__pow_0)
here->vfmind=(model->vbibot*(1-__pow_0));
EXIT_IF_ISNAN(here->vfmind)
}
}
if
((here->vbimind==model->vbisti))
{
{
double __pow_0=0.0;
_pow(__pow_0,2,((-1.0)/model->PSTI_i))
EXIT_IF_ISNAN(__pow_0)
here->vfmind=(model->vbisti*(1-__pow_0));
EXIT_IF_ISNAN(here->vfmind)
}
}
if
((here->vbimind==model->vbigat))
{
{
double __pow_0=0.0;
_pow(__pow_0,2,((-1.0)/model->PGAT_i))
EXIT_IF_ISNAN(__pow_0)
here->vfmind=(model->vbigat*(1-__pow_0));
EXIT_IF_ISNAN(here->vfmind)
}
}
vbibot2r=model->VBIRBOT_i;
EXIT_IF_ISNAN(vbibot2r)
vbisti2r=model->VBIRSTI_i;
EXIT_IF_ISNAN(vbisti2r)
vbigat2r=model->VBIRGAT_i;
EXIT_IF_ISNAN(vbigat2r)
if
((here->ABDRAIN_i==0))
{
vbibot2r=(model->VBIRSTI_i+model->VBIRGAT_i);
EXIT_IF_ISNAN(vbibot2r)
}
if
((here->LSDRAIN_i==0))
{
vbisti2r=(model->VBIRBOT_i+model->VBIRGAT_i);
EXIT_IF_ISNAN(vbisti2r)
}
if
((here->LGDRAIN_i==0))
{
vbigat2r=(model->VBIRBOT_i+model->VBIRSTI_i);
EXIT_IF_ISNAN(vbigat2r)
}
{
double __min_0=0.0;
double __min_1=0.0;
_min(__min_0,vbibot2r,vbisti2r)
EXIT_IF_ISNAN(__min_0)
_min(__min_1,__min_0,vbigat2r)
EXIT_IF_ISNAN(__min_1)
here->vbbtlimd=(__min_1-0.050);
EXIT_IF_ISNAN(here->vbbtlimd)
}
}
}

    } /* End of MOSFET Instance */
  } /* End of Model Instance */
  return(OK);
}
