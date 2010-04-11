

/* arithmetics */
#define EXP90 1.220403294317841e+039
#define m00_hypot(v00,x,y)      v00 = sqrt((x)*(x)+(y)*(y));
#define m10_hypot(v10,v00,x,y)  v10 = (x)/(v00);
#define m11_hypot(v11,v00,x,y)  v11 = (y)/(v00);
#define m00_max(v00,x,y)        v00 = ((x)>(y))?(x):(y);
#define m10_max(v10,v00,x,y)    v10 = ((x)>(y))?1.0:0.0;
#define m11_max(v11,v00,x,y)    v11 = ((x)>(y))?0.0:1.0;
#define m00_min(v00,x,y)        v00 = ((x)<(y))?(x):(y);
#define m10_min(v10,v00,x,y)    v10 = ((x)<(y))?1.0:0.0;
#define m11_min(v11,v00,x,y)    v11 = ((x)<(y))?0.0:1.0;
#define m00_pow(v00,x,y)        v00 = pow(x,y);
#define m10_pow(v10,v00,x,y)    v10 = (x==0.0)?0.0:(v00)*(y)/(x);
#define m11_pow(v11,v00,x,y)    v11 = (x==0.0)?0.0:(log(x)*(v00));
#define m00_div(v00,v10,x,y)    double v10=1/(y); double v00=(x)*v10;
#define m10_div(v10,v00,vv,x,y)
#define m11_div(v11,v00,vv,x,y) double v11 = -v00*vv;
#define m00_mult(v00,v10,v11,x,y) double v10=(x); double v11=(y); double v00=v10*v11;
#define m00_add(v00,x,y)        double v00=(x)+(y);
#define m00_cos(v00,x)          v00 = cos(x);
#define m10_cos(v10,v00,x)      v10 = (-sin(x));
#define m00_sin(v00,x)          v00 = sin(x);
#define m10_sin(v10,v00,x)      v10 = (cos(x));
#define m00_tan(v00,x)          v00 = tan(x);
#define m10_tan(v10,v00,x)      v10 = (1.0/cos(x)/cos(x));
#define m00_cosh(v00,x)         v00 = cosh(x);
#define m10_cosh(v10,v00,x)     v10 = (sinh(x));
#define m00_sinh(v00,x)         v00 = sinh(x);
#define m10_sinh(v10,v00,x)     v10 = (cosh(x));
#define m00_tanh(v00,x)         v00 = tanh(x);
#define m10_tanh(v10,v00,x)     v10 = (1.0/cosh(x)/cosh(x));
#define m00_acos(v00,x)         v00 = acos(x);
#define m10_acos(v10,v00,x)     v10 = (-1.0/sqrt(1-x*x));
#define m00_asin(v00,x)         v00 = asin(x);
#define m10_asin(v10,v00,x)     v10 = (+1.0/sqrt(1-x*x));
#define m00_atan(v00,x)         v00 = atan(x);
#define m10_atan(v10,v00,x)     v10 = (+1.0/(1+x*x));
#define m00_logE(v00,x)         v00 = log(x);
#define m10_logE(v10,v00,x)     v10 = (1.0/x);
#define m00_log10(v00,x)        v00 = log10(x);
#define m10_log10(v10,v00,x)    v10 = (1.0/x/log(10));
#define m00_sqrt(v00,x)         v00 = sqrt(x);
#define m10_sqrt(v10,v00,x)     v10 = (0.5/v00);
#define m00_fabs(v00,x)         v00 = fabs(x);
#define m10_fabs(v10,v00,x)     v10 = (((x)>=0)?(+1.0):(-1.0));
#define m00_exp(v00,x)          v00 = exp(x);
#define m10_exp(v10,v00,x)      v10 = v00;
#define m00_abs(v00)            ((v00)<(0)?(-(v00)):(v00))
#define m00_limexp(v00,x)       v00 = ((x)<90.0?exp(x):EXP90*(x-89.0));
#define m10_limexp(v10,v00,x)   v10 = ((x)<90.0?(v00):EXP90);

#define m20_logE(v00)         (-1.0/v00/v00)
#define m20_exp(v00)          exp(v00)
#define m20_limexp(v00)       ((v00)<90.0?exp(v00):0.0)
#define m20_sqrt(v00)         (-0.25/(v00)/sqrt(v00))
#define m20_fabs(v00)         0.0

/*wrapper*/
#define pModel model
#define pInst here
#define mint_get_circuit_tempK() _circuit_temp
#define voltages(n) NP(n)
#define _DDT(q) q
#define _DDX
#define _DERIVATEFORDDX
#if defined(_DYNAMIC)
double cbd;
#if defined(_DERIVATE)
double cbd_Vb_di;
#endif
#endif
#if defined(_DYNAMIC)
double cbs;
#if defined(_DERIVATE)
double cbs_Vb_si;
#endif
#endif
#if defined(_DYNAMIC)
double qbt;
#if defined(_DERIVATE)
double qbt_Vg_b;
double qbt_Vdi_b;
double qbt_Vsi_b;
#endif
#endif
double qgt;
#if defined(_DYNAMIC)
double qst;
#if defined(_DERIVATE)
double qst_Vg_b;
double qst_Vdi_b;
double qst_Vsi_b;
#endif
#endif
#if defined(_DYNAMIC)
double qdt;
#if defined(_DERIVATE)
double qdt_Vg_b;
double qdt_Vdi_b;
double qdt_Vsi_b;
#endif
#endif
double ibdj;
#if defined(_DERIVATE)
double ibdj_Vg_b;
double ibdj_Vsi_b;
double ibdj_Vdi_b;
#endif
double ibsj;
#if defined(_DERIVATE)
double ibsj_Vg_b;
double ibsj_Vdi_b;
double ibsj_Vsi_b;
#endif
double idb;
#if defined(_DERIVATE)
double idb_Vg_b;
double idb_Vdi_b;
double idb_Vsi_b;
#endif
double vib;
#if defined(_DERIVATE)
double vib_Vsi_b;
double vib_Vdi_b;
double vib_Vg_b;
#endif
double ids;
#if defined(_DERIVATE)
double ids_Vg_b;
double ids_Vdi_b;
double ids_Vsi_b;
#endif
double is;
#if defined(_DERIVATE)
double is_Vg_b;
double is_Vdi_b;
double is_Vsi_b;
#endif
double vpprime;
#if defined(_DERIVATE)
double vpprime_Vg_b;
double vpprime_Vdi_b;
double vpprime_Vsi_b;
#endif
double beta;
#if defined(_DERIVATE)
double beta_Vsi_b;
double beta_Vdi_b;
double beta_Vg_b;
#endif
double beta0prime;
#if defined(_DERIVATE)
double beta0prime_Vsi_b;
double beta0prime_Vdi_b;
double beta0prime_Vg_b;
#endif
double qg;
double qb;
#if defined(_DERIVATE)
double qb_Vg_b;
double qb_Vdi_b;
double qb_Vsi_b;
#endif
double qi;
#if defined(_DERIVATE)
double qi_Vg_b;
double qi_Vdi_b;
double qi_Vsi_b;
#endif
double qs;
#if defined(_DERIVATE)
double qs_Vg_b;
double qs_Vdi_b;
double qs_Vsi_b;
#endif
double qd;
#if defined(_DERIVATE)
double qd_Vg_b;
double qd_Vdi_b;
double qd_Vsi_b;
#endif
double xr;
#if defined(_DERIVATE)
double xr_Vg_b;
double xr_Vdi_b;
double xr_Vsi_b;
#endif
double xf;
#if defined(_DERIVATE)
double xf_Vg_b;
double xf_Vdi_b;
double xf_Vsi_b;
#endif
double nq;
#if defined(_DERIVATE)
double nq_Vg_b;
double nq_Vdi_b;
double nq_Vsi_b;
#endif
double nau;
double beta0;
#if defined(_DERIVATE)
double beta0_Vsi_b;
double beta0_Vdi_b;
double beta0_Vg_b;
#endif
double irev;
#if defined(_DERIVATE)
double irev_Vg_b;
double irev_Vdi_b;
double irev_Vsi_b;
#endif
double irprime;
#if defined(_DERIVATE)
double irprime_Vg_b;
double irprime_Vdi_b;
double irprime_Vsi_b;
#endif
double leq;
#if defined(_DERIVATE)
double leq_Vsi_b;
double leq_Vdi_b;
double leq_Vg_b;
#endif
double lprime;
#if defined(_DERIVATE)
double lprime_Vsi_b;
double lprime_Vdi_b;
double lprime_Vg_b;
#endif
double dl;
#if defined(_DERIVATE)
double dl_Vsi_b;
double dl_Vdi_b;
double dl_Vg_b;
#endif
double vip;
#if defined(_DERIVATE)
double vip_Vg_b;
double vip_Vdi_b;
double vip_Vsi_b;
#endif
double vds;
#if defined(_DERIVATE)
double vds_Vsi_b;
double vds_Vdi_b;
#endif
double dv;
#if defined(_DERIVATE)
double dv_Vg_b;
double dv_Vdi_b;
double dv_Vsi_b;
#endif
double vdssprime;
#if defined(_DERIVATE)
double vdssprime_Vg_b;
double vdssprime_Vdi_b;
double vdssprime_Vsi_b;
#endif
double vdss;
#if defined(_DERIVATE)
double vdss_Vg_b;
double vdss_Vdi_b;
double vdss_Vsi_b;
#endif
double ifwd;
#if defined(_DERIVATE)
double ifwd_Vg_b;
double ifwd_Vdi_b;
double ifwd_Vsi_b;
#endif
double y;
#if defined(_DERIVATE)
double y_Vg_b;
double y_Vdi_b;
double y_Vsi_b;
#endif
double z1;
#if defined(_DERIVATE)
double z1_Vg_b;
double z1_Vdi_b;
double z1_Vsi_b;
#endif
double z0;
#if defined(_DERIVATE)
double z0_Vg_b;
double z0_Vdi_b;
double z0_Vsi_b;
#endif
double fv;
#if defined(_DERIVATE)
double fv_Vg_b;
double fv_Vdi_b;
double fv_Vsi_b;
#endif
double n;
#if defined(_DERIVATE)
double n_Vg_b;
double n_Vdi_b;
double n_Vsi_b;
#endif
double vp;
#if defined(_DERIVATE)
double vp_Vg_b;
double vp_Vdi_b;
double vp_Vsi_b;
#endif
double gammaprime;
#if defined(_DERIVATE)
double gammaprime_Vdi_b;
double gammaprime_Vsi_b;
double gammaprime_Vg_b;
#endif
double gamma0;
#if defined(_DERIVATE)
double gamma0_Vdi_b;
double gamma0_Vsi_b;
double gamma0_Vg_b;
#endif
double vp0;
#if defined(_DERIVATE)
double vp0_Vg_b;
#endif
double vdprime;
#if defined(_DERIVATE)
double vdprime_Vsi_b;
double vdprime_Vdi_b;
#endif
double vsprime;
#if defined(_DERIVATE)
double vsprime_Vdi_b;
double vsprime_Vsi_b;
#endif
double vgprime;
#if defined(_DERIVATE)
double vgprime_Vg_b;
#endif
#if defined(_DERIVATE)
double tmp_Vg_b;
double tmp_Vdi_b;
double tmp_Vsi_b;
#endif
int mode;
double vs;
#if defined(_DERIVATE)
double vs_Vdi_b;
double vs_Vsi_b;
#endif
double vd;
#if defined(_DERIVATE)
double vd_Vsi_b;
double vd_Vdi_b;
#endif
double vg;
#if defined(_DERIVATE)
double vg_Vg_b;
#endif
{
#if defined(_DERIVATE) /* probe=V(g:b) ddxprobe= */
vg_Vg_b=(pModel->MTYPE);
#endif
vg=(pModel->MTYPE*(NP(g)-NP(b)));
EXIT_IF_ISNAN((pModel->MTYPE*(NP(g)-NP(b))))
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b) ddxprobe= */
vd_Vsi_b=0.0;
vd_Vdi_b=(pModel->MTYPE);
#endif
vd=(pModel->MTYPE*(NP(di)-NP(b)));
EXIT_IF_ISNAN((pModel->MTYPE*(NP(di)-NP(b))))
#if defined(_DERIVATE) /* probe=V(di:b)V(si:b) ddxprobe= */
vs_Vdi_b=0.0;
vs_Vsi_b=(pModel->MTYPE);
#endif
vs=(pModel->MTYPE*(NP(si)-NP(b)));
EXIT_IF_ISNAN((pModel->MTYPE*(NP(si)-NP(b))))
if
((vd>=vs))
{
mode=1;
EXIT_IF_ISNAN(1)
}
else
{
mode=(-1);
EXIT_IF_ISNAN((-1))
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=0.0;
tmp_Vsi_b=vs_Vsi_b;
#endif
pInst->tmp=vs;
EXIT_IF_ISNAN(vs)
#if defined(_DERIVATE) /* probe=V(di:b)V(si:b) ddxprobe= */
vs_Vdi_b=vd_Vdi_b;
vs_Vsi_b=0.0;
#endif
vs=vd;
EXIT_IF_ISNAN(vd)
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b) ddxprobe= */
vd_Vsi_b=tmp_Vsi_b;
vd_Vdi_b=0.0;
#endif
vd=pInst->tmp;
EXIT_IF_ISNAN(pInst->tmp)
}
{
double m00_sqrt(d00_sqrt0,pInst->phi)
#if defined(_DERIVATE) /* probe=V(g:b) ddxprobe= */
vgprime_Vg_b=vg_Vg_b;
#endif
vgprime=((((vg-pInst->vto_a)-pInst->dvrsce)+pInst->phi)+(pInst->gamma_a*d00_sqrt0));
EXIT_IF_ISNAN(((((vg-pInst->vto_a)-pInst->dvrsce)+pInst->phi)+(pInst->gamma_a*d00_sqrt0)))
}
{
double m00_sqrt(d00_sqrt0,(((vs+pInst->phi)*(vs+pInst->phi))+(16*(pInst->vt*pInst->vt))))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(((vs+pInst->phi)*(vs+pInst->phi))+(16*(pInst->vt*pInst->vt))))
#endif
#if defined(_DERIVATE) /* probe=V(di:b)V(si:b) ddxprobe= */
vsprime_Vdi_b=(0.5*(vs_Vdi_b+((vs_Vdi_b*(vs+pInst->phi))+((vs+pInst->phi)*vs_Vdi_b))*d10_sqrt0));
vsprime_Vsi_b=(0.5*(vs_Vsi_b+((vs_Vsi_b*(vs+pInst->phi))+((vs+pInst->phi)*vs_Vsi_b))*d10_sqrt0));
#endif
vsprime=(0.5*((vs+pInst->phi)+d00_sqrt0));
EXIT_IF_ISNAN((0.5*((vs+pInst->phi)+d00_sqrt0)))
}
{
double m00_sqrt(d00_sqrt0,(((vd+pInst->phi)*(vd+pInst->phi))+(16*(pInst->vt*pInst->vt))))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(((vd+pInst->phi)*(vd+pInst->phi))+(16*(pInst->vt*pInst->vt))))
#endif
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b) ddxprobe= */
vdprime_Vsi_b=(0.5*(vd_Vsi_b+((vd_Vsi_b*(vd+pInst->phi))+((vd+pInst->phi)*vd_Vsi_b))*d10_sqrt0));
vdprime_Vdi_b=(0.5*(vd_Vdi_b+((vd_Vdi_b*(vd+pInst->phi))+((vd+pInst->phi)*vd_Vdi_b))*d10_sqrt0));
#endif
vdprime=(0.5*((vd+pInst->phi)+d00_sqrt0));
EXIT_IF_ISNAN((0.5*((vd+pInst->phi)+d00_sqrt0)))
}
if
((vgprime>=0))
{
{
double m00_sqrt(d00_sqrt0,(vgprime+(0.25*(pInst->gamma_a*pInst->gamma_a))))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(vgprime+(0.25*(pInst->gamma_a*pInst->gamma_a))))
#endif
#if defined(_DERIVATE) /* probe=V(g:b) ddxprobe= */
vp0_Vg_b=(vgprime_Vg_b-(pInst->gamma_a*vgprime_Vg_b*d10_sqrt0));
#endif
vp0=((vgprime-pInst->phi)-(pInst->gamma_a*(d00_sqrt0-(0.5*pInst->gamma_a))));
EXIT_IF_ISNAN(((vgprime-pInst->phi)-(pInst->gamma_a*(d00_sqrt0-(0.5*pInst->gamma_a)))))
}
{
double m00_sqrt(d00_sqrt0,vsprime)
double m00_sqrt(d00_sqrt1,vdprime)
double m00_sqrt(d00_sqrt2,(vp0+pInst->phi))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,vsprime)
double m10_sqrt(d10_sqrt1,d00_sqrt1,vdprime)
double m10_sqrt(d10_sqrt2,d00_sqrt2,(vp0+pInst->phi))
#endif
#if defined(_DERIVATE) /* probe=V(di:b)V(si:b)V(g:b) ddxprobe= */
gamma0_Vdi_b=(-(((8.854187817e-12*11.7)/pModel->COX)*((pModel->LETA/pInst->leff)*(vsprime_Vdi_b*d10_sqrt0+vdprime_Vdi_b*d10_sqrt1))));
gamma0_Vsi_b=(-(((8.854187817e-12*11.7)/pModel->COX)*((pModel->LETA/pInst->leff)*(vsprime_Vsi_b*d10_sqrt0+vdprime_Vsi_b*d10_sqrt1))));
gamma0_Vg_b=(-(((8.854187817e-12*11.7)/pModel->COX)*(-(((3*pModel->WETA)/pInst->weff)*vp0_Vg_b*d10_sqrt2))));
#endif
gamma0=(pInst->gamma_a-(((8.854187817e-12*11.7)/pModel->COX)*(((pModel->LETA/pInst->leff)*(d00_sqrt0+d00_sqrt1))-(((3*pModel->WETA)/pInst->weff)*d00_sqrt2))));
EXIT_IF_ISNAN((pInst->gamma_a-(((8.854187817e-12*11.7)/pModel->COX)*(((pModel->LETA/pInst->leff)*(d00_sqrt0+d00_sqrt1))-(((3*pModel->WETA)/pInst->weff)*d00_sqrt2)))))
}
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(g:b) ddxprobe= */
vp0_Vg_b=0.0;
#endif
vp0=(-pInst->phi);
EXIT_IF_ISNAN((-pInst->phi))
#endif
{
double m00_sqrt(d00_sqrt0,vsprime)
double m00_sqrt(d00_sqrt1,vdprime)
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,vsprime)
double m10_sqrt(d10_sqrt1,d00_sqrt1,vdprime)
#endif
#if defined(_DERIVATE) /* probe=V(di:b)V(si:b)V(g:b) ddxprobe= */
gamma0_Vdi_b=(-(((8.854187817e-12*11.7)/pModel->COX)*((pModel->LETA/pInst->leff)*(vsprime_Vdi_b*d10_sqrt0+vdprime_Vdi_b*d10_sqrt1))));
gamma0_Vsi_b=(-(((8.854187817e-12*11.7)/pModel->COX)*((pModel->LETA/pInst->leff)*(vsprime_Vsi_b*d10_sqrt0+vdprime_Vsi_b*d10_sqrt1))));
gamma0_Vg_b=0.0;
#endif
gamma0=(pInst->gamma_a-(((8.854187817e-12*11.7)/pModel->COX)*((pModel->LETA/pInst->leff)*(d00_sqrt0+d00_sqrt1))));
EXIT_IF_ISNAN((pInst->gamma_a-(((8.854187817e-12*11.7)/pModel->COX)*((pModel->LETA/pInst->leff)*(d00_sqrt0+d00_sqrt1)))))
}
}
{
double m00_sqrt(d00_sqrt0,((gamma0*gamma0)+(0.1*pInst->vt)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((gamma0*gamma0)+(0.1*pInst->vt)))
#endif
#if defined(_DERIVATE) /* probe=V(di:b)V(si:b)V(g:b) ddxprobe= */
gammaprime_Vdi_b=(0.5*(gamma0_Vdi_b+((gamma0_Vdi_b*gamma0)+(gamma0*gamma0_Vdi_b))*d10_sqrt0));
gammaprime_Vsi_b=(0.5*(gamma0_Vsi_b+((gamma0_Vsi_b*gamma0)+(gamma0*gamma0_Vsi_b))*d10_sqrt0));
gammaprime_Vg_b=(0.5*(gamma0_Vg_b+((gamma0_Vg_b*gamma0)+(gamma0*gamma0_Vg_b))*d10_sqrt0));
#endif
gammaprime=(0.5*(gamma0+d00_sqrt0));
EXIT_IF_ISNAN((0.5*(gamma0+d00_sqrt0)))
}
if
((vgprime>=0))
{
{
double m00_sqrt(d00_sqrt0,(vgprime+(0.25*(gammaprime*gammaprime))))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(vgprime+(0.25*(gammaprime*gammaprime))))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
vp_Vg_b=(vgprime_Vg_b-((gammaprime_Vg_b*(d00_sqrt0-(0.5*gammaprime)))+(gammaprime*((vgprime_Vg_b+(0.25*((gammaprime_Vg_b*gammaprime)+(gammaprime*gammaprime_Vg_b))))*d10_sqrt0-(0.5*gammaprime_Vg_b)))));
vp_Vdi_b=(-((gammaprime_Vdi_b*(d00_sqrt0-(0.5*gammaprime)))+(gammaprime*((0.25*((gammaprime_Vdi_b*gammaprime)+(gammaprime*gammaprime_Vdi_b)))*d10_sqrt0-(0.5*gammaprime_Vdi_b)))));
vp_Vsi_b=(-((gammaprime_Vsi_b*(d00_sqrt0-(0.5*gammaprime)))+(gammaprime*((0.25*((gammaprime_Vsi_b*gammaprime)+(gammaprime*gammaprime_Vsi_b)))*d10_sqrt0-(0.5*gammaprime_Vsi_b)))));
#endif
vp=((vgprime-pInst->phi)-(gammaprime*(d00_sqrt0-(0.5*gammaprime))));
EXIT_IF_ISNAN(((vgprime-pInst->phi)-(gammaprime*(d00_sqrt0-(0.5*gammaprime)))))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
vp_Vg_b=0.0;
vp_Vdi_b=0.0;
vp_Vsi_b=0.0;
#endif
vp=(-pInst->phi);
EXIT_IF_ISNAN((-pInst->phi))
}
{
double m00_sqrt(d00_sqrt0,((vp+pInst->phi)+(4*pInst->vt)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((vp+pInst->phi)+(4*pInst->vt)))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
n_Vg_b=(-(pInst->gamma_a*0.5)*vp_Vg_b*d10_sqrt0/d00_sqrt0/d00_sqrt0);
n_Vdi_b=(-(pInst->gamma_a*0.5)*vp_Vdi_b*d10_sqrt0/d00_sqrt0/d00_sqrt0);
n_Vsi_b=(-(pInst->gamma_a*0.5)*vp_Vsi_b*d10_sqrt0/d00_sqrt0/d00_sqrt0);
#endif
n=(1+((pInst->gamma_a*0.5)/d00_sqrt0));
EXIT_IF_ISNAN((1+((pInst->gamma_a*0.5)/d00_sqrt0)))
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
fv_Vg_b=(vp_Vg_b/pInst->vt);
fv_Vdi_b=((vp_Vdi_b-vs_Vdi_b)/pInst->vt);
fv_Vsi_b=((vp_Vsi_b-vs_Vsi_b)/pInst->vt);
#endif
fv=((vp-vs)/pInst->vt);
EXIT_IF_ISNAN(((vp-vs)/pInst->vt))
if
((fv>(-0.35)))
{
{
double m00_logE(d00_logE0,(fv+1.6))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(fv+1.6))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z0_Vg_b=(-2.0*(fv_Vg_b-fv_Vg_b*d10_logE0)/((1.3+fv)-d00_logE0)/((1.3+fv)-d00_logE0));
z0_Vdi_b=(-2.0*(fv_Vdi_b-fv_Vdi_b*d10_logE0)/((1.3+fv)-d00_logE0)/((1.3+fv)-d00_logE0));
z0_Vsi_b=(-2.0*(fv_Vsi_b-fv_Vsi_b*d10_logE0)/((1.3+fv)-d00_logE0)/((1.3+fv)-d00_logE0));
#endif
z0=(2.0/((1.3+fv)-d00_logE0));
EXIT_IF_ISNAN((2.0/((1.3+fv)-d00_logE0)))
}
{
double m00_logE(d00_logE0,z0)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z0)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z1_Vg_b=((z0_Vg_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vg_b+z0_Vg_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vdi_b=((z0_Vdi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vdi_b+z0_Vdi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vsi_b=((z0_Vsi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vsi_b+z0_Vsi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
#endif
z1=((2.0+z0)/((1.0+fv)+d00_logE0));
EXIT_IF_ISNAN(((2.0+z0)/((1.0+fv)+d00_logE0)))
}
{
double m00_logE(d00_logE0,z1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z1)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=(((fv_Vg_b+z1_Vg_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vg_b)/(2.0+z1)/(2.0+z1));
y_Vdi_b=(((fv_Vdi_b+z1_Vdi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vdi_b)/(2.0+z1)/(2.0+z1));
y_Vsi_b=(((fv_Vsi_b+z1_Vsi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vsi_b)/(2.0+z1)/(2.0+z1));
#endif
y=(((1.0+fv)+d00_logE0)/(2.0+z1));
EXIT_IF_ISNAN((((1.0+fv)+d00_logE0)/(2.0+z1)))
}
}
else
{
if
((fv>(-15)))
{
{
double m00_fabs(d00_fabs0,(-fv))
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,(-fv))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-fv_Vg_b)*d10_exp0;
tmp_Vdi_b=(-fv_Vdi_b)*d10_exp0;
tmp_Vsi_b=(-fv_Vsi_b)*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
(((-fv)<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-1.0e-100*(((-(-fv_Vg_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vg_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vg_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vdi_b=(-1.0e-100*(((-(-fv_Vdi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vdi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vdi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-(-fv_Vsi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vsi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vsi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(1.0e100*(((-fv_Vg_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vg_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vg_b)*3.3333333333333333e-01))))));
tmp_Vdi_b=(1.0e100*(((-fv_Vdi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vdi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vdi_b)*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*(((-fv_Vsi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vsi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vsi_b)*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z0_Vg_b=tmp_Vg_b;
z0_Vdi_b=tmp_Vdi_b;
z0_Vsi_b=tmp_Vsi_b;
#endif
z0=(1.55+pInst->tmp);
EXIT_IF_ISNAN((1.55+pInst->tmp))
{
double m00_logE(d00_logE0,z0)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z0)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z1_Vg_b=((z0_Vg_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vg_b+z0_Vg_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vdi_b=((z0_Vdi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vdi_b+z0_Vdi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vsi_b=((z0_Vsi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vsi_b+z0_Vsi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
#endif
z1=((2.0+z0)/((1.0+fv)+d00_logE0));
EXIT_IF_ISNAN(((2.0+z0)/((1.0+fv)+d00_logE0)))
}
{
double m00_logE(d00_logE0,z1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z1)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=(((fv_Vg_b+z1_Vg_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vg_b)/(2.0+z1)/(2.0+z1));
y_Vdi_b=(((fv_Vdi_b+z1_Vdi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vdi_b)/(2.0+z1)/(2.0+z1));
y_Vsi_b=(((fv_Vsi_b+z1_Vsi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vsi_b)/(2.0+z1)/(2.0+z1));
#endif
y=(((1.0+fv)+d00_logE0)/(2.0+z1));
EXIT_IF_ISNAN((((1.0+fv)+d00_logE0)/(2.0+z1)))
}
}
else
{
if
((fv>(-23.0)))
{
{
double m00_fabs(d00_fabs0,(-fv))
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,(-fv))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-fv_Vg_b)*d10_exp0;
tmp_Vdi_b=(-fv_Vdi_b)*d10_exp0;
tmp_Vsi_b=(-fv_Vsi_b)*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
(((-fv)<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-1.0e-100*(((-(-fv_Vg_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vg_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vg_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vdi_b=(-1.0e-100*(((-(-fv_Vdi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vdi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vdi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-(-fv_Vsi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vsi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vsi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(1.0e100*(((-fv_Vg_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vg_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vg_b)*3.3333333333333333e-01))))));
tmp_Vdi_b=(1.0e100*(((-fv_Vdi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vdi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vdi_b)*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*(((-fv_Vsi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vsi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vsi_b)*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=(-tmp_Vg_b/(2.0+pInst->tmp)/(2.0+pInst->tmp));
y_Vdi_b=(-tmp_Vdi_b/(2.0+pInst->tmp)/(2.0+pInst->tmp));
y_Vsi_b=(-tmp_Vsi_b/(2.0+pInst->tmp)/(2.0+pInst->tmp));
#endif
y=(1.0/(2.0+pInst->tmp));
EXIT_IF_ISNAN((1.0/(2.0+pInst->tmp)))
}
else
{
{
double m00_fabs(d00_fabs0,fv)
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,fv)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=fv_Vg_b*d10_exp0;
tmp_Vdi_b=fv_Vdi_b*d10_exp0;
tmp_Vsi_b=fv_Vsi_b*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
((fv<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-1.0e-100*(((-fv_Vg_b)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-fv)*(0.5*(((-fv_Vg_b)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-fv)*(-fv_Vg_b)*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
tmp_Vdi_b=(-1.0e-100*(((-fv_Vdi_b)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-fv)*(0.5*(((-fv_Vdi_b)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-fv)*(-fv_Vdi_b)*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-fv_Vsi_b)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-fv)*(0.5*(((-fv_Vsi_b)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-fv)*(-fv_Vsi_b)*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(1.0e100*((fv_Vg_b*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((fv-2.3025850929940458e+02)*(0.5*((fv_Vg_b*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))+((fv-2.3025850929940458e+02)*fv_Vg_b*3.3333333333333333e-01))))));
tmp_Vdi_b=(1.0e100*((fv_Vdi_b*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((fv-2.3025850929940458e+02)*(0.5*((fv_Vdi_b*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))+((fv-2.3025850929940458e+02)*fv_Vdi_b*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*((fv_Vsi_b*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((fv-2.3025850929940458e+02)*(0.5*((fv_Vsi_b*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))+((fv-2.3025850929940458e+02)*fv_Vsi_b*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+((fv-2.3025850929940458e+02)*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+((fv-2.3025850929940458e+02)*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=tmp_Vg_b;
y_Vdi_b=tmp_Vdi_b;
y_Vsi_b=tmp_Vsi_b;
#endif
y=(pInst->tmp+1.0e-64);
EXIT_IF_ISNAN((pInst->tmp+1.0e-64))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
ifwd_Vg_b=((y_Vg_b*(1.0+y))+(y*y_Vg_b));
ifwd_Vdi_b=((y_Vdi_b*(1.0+y))+(y*y_Vdi_b));
ifwd_Vsi_b=((y_Vsi_b*(1.0+y))+(y*y_Vsi_b));
#endif
ifwd=(y*(1.0+y));
EXIT_IF_ISNAN((y*(1.0+y)))
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z0_Vg_b=0.0;
z0_Vdi_b=0.0;
z0_Vsi_b=0.0;
#endif
z0=1;
EXIT_IF_ISNAN(1)
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z1_Vg_b=0.0;
z1_Vdi_b=0.0;
z1_Vsi_b=0.0;
#endif
z1=1;
EXIT_IF_ISNAN(1)
{
double m00_sqrt(d00_sqrt0,ifwd)
double m00_sqrt(d00_sqrt1,(0.25+((pInst->vt/pInst->vc)*d00_sqrt0)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,ifwd)
double m10_sqrt(d10_sqrt1,d00_sqrt1,(0.25+((pInst->vt/pInst->vc)*d00_sqrt0)))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
vdss_Vg_b=(pInst->vc*((pInst->vt/pInst->vc)*ifwd_Vg_b*d10_sqrt0)*d10_sqrt1);
vdss_Vdi_b=(pInst->vc*((pInst->vt/pInst->vc)*ifwd_Vdi_b*d10_sqrt0)*d10_sqrt1);
vdss_Vsi_b=(pInst->vc*((pInst->vt/pInst->vc)*ifwd_Vsi_b*d10_sqrt0)*d10_sqrt1);
#endif
vdss=(pInst->vc*(d00_sqrt1-0.5));
EXIT_IF_ISNAN((pInst->vc*(d00_sqrt1-0.5)))
}
{
double m00_sqrt(d00_sqrt0,ifwd)
double m00_logE(d00_logE1,ifwd)
double m00_sqrt(d00_sqrt2,(0.25+((pInst->vt/pInst->vc)*(d00_sqrt0-(0.75*d00_logE1)))))
double m00_logE(d00_logE3,((0.5*pInst->vc)/pInst->vt))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,ifwd)
double m10_logE(d10_logE1,d00_logE1,ifwd)
double m10_sqrt(d10_sqrt2,d00_sqrt2,(0.25+((pInst->vt/pInst->vc)*(d00_sqrt0-(0.75*d00_logE1)))))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
vdssprime_Vg_b=(pInst->vc*((pInst->vt/pInst->vc)*(ifwd_Vg_b*d10_sqrt0-(0.75*ifwd_Vg_b*d10_logE1)))*d10_sqrt2);
vdssprime_Vdi_b=(pInst->vc*((pInst->vt/pInst->vc)*(ifwd_Vdi_b*d10_sqrt0-(0.75*ifwd_Vdi_b*d10_logE1)))*d10_sqrt2);
vdssprime_Vsi_b=(pInst->vc*((pInst->vt/pInst->vc)*(ifwd_Vsi_b*d10_sqrt0-(0.75*ifwd_Vsi_b*d10_logE1)))*d10_sqrt2);
#endif
vdssprime=((pInst->vc*(d00_sqrt2-0.5))+(pInst->vt*(d00_logE3-0.6)));
EXIT_IF_ISNAN(((pInst->vc*(d00_sqrt2-0.5))+(pInst->vt*(d00_logE3-0.6))))
}
{
double m00_sqrt(d00_sqrt0,ifwd)
double m00_sqrt(d00_sqrt1,((pModel->LAMBDA*(d00_sqrt0-(vdss/pInst->vt)))+(1.0/64)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,ifwd)
double m10_sqrt(d10_sqrt1,d00_sqrt1,((pModel->LAMBDA*(d00_sqrt0-(vdss/pInst->vt)))+(1.0/64)))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
dv_Vg_b=((4*pInst->vt)*(pModel->LAMBDA*(ifwd_Vg_b*d10_sqrt0-(vdss_Vg_b/pInst->vt)))*d10_sqrt1);
dv_Vdi_b=((4*pInst->vt)*(pModel->LAMBDA*(ifwd_Vdi_b*d10_sqrt0-(vdss_Vdi_b/pInst->vt)))*d10_sqrt1);
dv_Vsi_b=((4*pInst->vt)*(pModel->LAMBDA*(ifwd_Vsi_b*d10_sqrt0-(vdss_Vsi_b/pInst->vt)))*d10_sqrt1);
#endif
dv=((4*pInst->vt)*d00_sqrt1);
EXIT_IF_ISNAN(((4*pInst->vt)*d00_sqrt1))
}
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b) ddxprobe= */
vds_Vsi_b=(0.5*(vd_Vsi_b-vs_Vsi_b));
vds_Vdi_b=(0.5*(vd_Vdi_b-vs_Vdi_b));
#endif
vds=(0.5*(vd-vs));
EXIT_IF_ISNAN((0.5*(vd-vs)))
{
double m00_sqrt(d00_sqrt0,((vdss*vdss)+(dv*dv)))
double m00_sqrt(d00_sqrt1,(((vds-vdss)*(vds-vdss))+(dv*dv)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((vdss*vdss)+(dv*dv)))
double m10_sqrt(d10_sqrt1,d00_sqrt1,(((vds-vdss)*(vds-vdss))+(dv*dv)))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
vip_Vg_b=((((vdss_Vg_b*vdss)+(vdss*vdss_Vg_b))+((dv_Vg_b*dv)+(dv*dv_Vg_b)))*d10_sqrt0-((((-vdss_Vg_b)*(vds-vdss))+((vds-vdss)*(-vdss_Vg_b)))+((dv_Vg_b*dv)+(dv*dv_Vg_b)))*d10_sqrt1);
vip_Vdi_b=((((vdss_Vdi_b*vdss)+(vdss*vdss_Vdi_b))+((dv_Vdi_b*dv)+(dv*dv_Vdi_b)))*d10_sqrt0-((((vds_Vdi_b-vdss_Vdi_b)*(vds-vdss))+((vds-vdss)*(vds_Vdi_b-vdss_Vdi_b)))+((dv_Vdi_b*dv)+(dv*dv_Vdi_b)))*d10_sqrt1);
vip_Vsi_b=((((vdss_Vsi_b*vdss)+(vdss*vdss_Vsi_b))+((dv_Vsi_b*dv)+(dv*dv_Vsi_b)))*d10_sqrt0-((((vds_Vsi_b-vdss_Vsi_b)*(vds-vdss))+((vds-vdss)*(vds_Vsi_b-vdss_Vsi_b)))+((dv_Vsi_b*dv)+(dv*dv_Vsi_b)))*d10_sqrt1);
#endif
vip=(d00_sqrt0-d00_sqrt1);
EXIT_IF_ISNAN((d00_sqrt0-d00_sqrt1))
}
{
double m00_logE(d00_logE0,(1+((vds-vip)/(pModel->lc*pInst->ucrit))))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1+((vds-vip)/(pModel->lc*pInst->ucrit))))
#endif
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b)V(g:b) ddxprobe= */
dl_Vsi_b=((pModel->LAMBDA*pModel->lc)*((vds_Vsi_b-vip_Vsi_b)/(pModel->lc*pInst->ucrit))*d10_logE0);
dl_Vdi_b=((pModel->LAMBDA*pModel->lc)*((vds_Vdi_b-vip_Vdi_b)/(pModel->lc*pInst->ucrit))*d10_logE0);
dl_Vg_b=((pModel->LAMBDA*pModel->lc)*((-vip_Vg_b)/(pModel->lc*pInst->ucrit))*d10_logE0);
#endif
dl=((pModel->LAMBDA*pModel->lc)*d00_logE0);
EXIT_IF_ISNAN(((pModel->LAMBDA*pModel->lc)*d00_logE0))
}
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b)V(g:b) ddxprobe= */
lprime_Vsi_b=((-dl_Vsi_b)+((vds_Vsi_b+vip_Vsi_b)/pInst->ucrit));
lprime_Vdi_b=((-dl_Vdi_b)+((vds_Vdi_b+vip_Vdi_b)/pInst->ucrit));
lprime_Vg_b=((-dl_Vg_b)+(vip_Vg_b/pInst->ucrit));
#endif
lprime=(((pInst->ns*pInst->leff)-dl)+((vds+vip)/pInst->ucrit));
EXIT_IF_ISNAN((((pInst->ns*pInst->leff)-dl)+((vds+vip)/pInst->ucrit)))
{
double m00_sqrt(d00_sqrt0,((lprime*lprime)+(pInst->lmin*pInst->lmin)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((lprime*lprime)+(pInst->lmin*pInst->lmin)))
#endif
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b)V(g:b) ddxprobe= */
leq_Vsi_b=(0.5*(lprime_Vsi_b+((lprime_Vsi_b*lprime)+(lprime*lprime_Vsi_b))*d10_sqrt0));
leq_Vdi_b=(0.5*(lprime_Vdi_b+((lprime_Vdi_b*lprime)+(lprime*lprime_Vdi_b))*d10_sqrt0));
leq_Vg_b=(0.5*(lprime_Vg_b+((lprime_Vg_b*lprime)+(lprime*lprime_Vg_b))*d10_sqrt0));
#endif
leq=(0.5*(lprime+d00_sqrt0));
EXIT_IF_ISNAN((0.5*(lprime+d00_sqrt0)))
}
{
double m00_sqrt(d00_sqrt0,((vdssprime*vdssprime)+(dv*dv)))
double m00_sqrt(d00_sqrt1,(((vds-vdssprime)*(vds-vdssprime))+(dv*dv)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((vdssprime*vdssprime)+(dv*dv)))
double m10_sqrt(d10_sqrt1,d00_sqrt1,(((vds-vdssprime)*(vds-vdssprime))+(dv*dv)))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
fv_Vg_b=(((vp_Vg_b-(((vdssprime_Vg_b*vdssprime)+(vdssprime*vdssprime_Vg_b))+((dv_Vg_b*dv)+(dv*dv_Vg_b)))*d10_sqrt0)+((((-vdssprime_Vg_b)*(vds-vdssprime))+((vds-vdssprime)*(-vdssprime_Vg_b)))+((dv_Vg_b*dv)+(dv*dv_Vg_b)))*d10_sqrt1)/pInst->vt);
fv_Vdi_b=(((((vp_Vdi_b-vds_Vdi_b)-vs_Vdi_b)-(((vdssprime_Vdi_b*vdssprime)+(vdssprime*vdssprime_Vdi_b))+((dv_Vdi_b*dv)+(dv*dv_Vdi_b)))*d10_sqrt0)+((((vds_Vdi_b-vdssprime_Vdi_b)*(vds-vdssprime))+((vds-vdssprime)*(vds_Vdi_b-vdssprime_Vdi_b)))+((dv_Vdi_b*dv)+(dv*dv_Vdi_b)))*d10_sqrt1)/pInst->vt);
fv_Vsi_b=(((((vp_Vsi_b-vds_Vsi_b)-vs_Vsi_b)-(((vdssprime_Vsi_b*vdssprime)+(vdssprime*vdssprime_Vsi_b))+((dv_Vsi_b*dv)+(dv*dv_Vsi_b)))*d10_sqrt0)+((((vds_Vsi_b-vdssprime_Vsi_b)*(vds-vdssprime))+((vds-vdssprime)*(vds_Vsi_b-vdssprime_Vsi_b)))+((dv_Vsi_b*dv)+(dv*dv_Vsi_b)))*d10_sqrt1)/pInst->vt);
#endif
fv=(((((vp-vds)-vs)-d00_sqrt0)+d00_sqrt1)/pInst->vt);
EXIT_IF_ISNAN((((((vp-vds)-vs)-d00_sqrt0)+d00_sqrt1)/pInst->vt))
}
if
((fv>(-0.35)))
{
{
double m00_logE(d00_logE0,(fv+1.6))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(fv+1.6))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z0_Vg_b=(-2.0*(fv_Vg_b-fv_Vg_b*d10_logE0)/((1.3+fv)-d00_logE0)/((1.3+fv)-d00_logE0));
z0_Vdi_b=(-2.0*(fv_Vdi_b-fv_Vdi_b*d10_logE0)/((1.3+fv)-d00_logE0)/((1.3+fv)-d00_logE0));
z0_Vsi_b=(-2.0*(fv_Vsi_b-fv_Vsi_b*d10_logE0)/((1.3+fv)-d00_logE0)/((1.3+fv)-d00_logE0));
#endif
z0=(2.0/((1.3+fv)-d00_logE0));
EXIT_IF_ISNAN((2.0/((1.3+fv)-d00_logE0)))
}
{
double m00_logE(d00_logE0,z0)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z0)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z1_Vg_b=((z0_Vg_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vg_b+z0_Vg_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vdi_b=((z0_Vdi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vdi_b+z0_Vdi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vsi_b=((z0_Vsi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vsi_b+z0_Vsi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
#endif
z1=((2.0+z0)/((1.0+fv)+d00_logE0));
EXIT_IF_ISNAN(((2.0+z0)/((1.0+fv)+d00_logE0)))
}
{
double m00_logE(d00_logE0,z1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z1)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=(((fv_Vg_b+z1_Vg_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vg_b)/(2.0+z1)/(2.0+z1));
y_Vdi_b=(((fv_Vdi_b+z1_Vdi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vdi_b)/(2.0+z1)/(2.0+z1));
y_Vsi_b=(((fv_Vsi_b+z1_Vsi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vsi_b)/(2.0+z1)/(2.0+z1));
#endif
y=(((1.0+fv)+d00_logE0)/(2.0+z1));
EXIT_IF_ISNAN((((1.0+fv)+d00_logE0)/(2.0+z1)))
}
}
else
{
if
((fv>(-15)))
{
{
double m00_fabs(d00_fabs0,(-fv))
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,(-fv))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-fv_Vg_b)*d10_exp0;
tmp_Vdi_b=(-fv_Vdi_b)*d10_exp0;
tmp_Vsi_b=(-fv_Vsi_b)*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
(((-fv)<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-1.0e-100*(((-(-fv_Vg_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vg_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vg_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vdi_b=(-1.0e-100*(((-(-fv_Vdi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vdi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vdi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-(-fv_Vsi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vsi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vsi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(1.0e100*(((-fv_Vg_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vg_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vg_b)*3.3333333333333333e-01))))));
tmp_Vdi_b=(1.0e100*(((-fv_Vdi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vdi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vdi_b)*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*(((-fv_Vsi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vsi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vsi_b)*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z0_Vg_b=tmp_Vg_b;
z0_Vdi_b=tmp_Vdi_b;
z0_Vsi_b=tmp_Vsi_b;
#endif
z0=(1.55+pInst->tmp);
EXIT_IF_ISNAN((1.55+pInst->tmp))
{
double m00_logE(d00_logE0,z0)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z0)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z1_Vg_b=((z0_Vg_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vg_b+z0_Vg_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vdi_b=((z0_Vdi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vdi_b+z0_Vdi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vsi_b=((z0_Vsi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vsi_b+z0_Vsi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
#endif
z1=((2.0+z0)/((1.0+fv)+d00_logE0));
EXIT_IF_ISNAN(((2.0+z0)/((1.0+fv)+d00_logE0)))
}
{
double m00_logE(d00_logE0,z1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z1)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=(((fv_Vg_b+z1_Vg_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vg_b)/(2.0+z1)/(2.0+z1));
y_Vdi_b=(((fv_Vdi_b+z1_Vdi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vdi_b)/(2.0+z1)/(2.0+z1));
y_Vsi_b=(((fv_Vsi_b+z1_Vsi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vsi_b)/(2.0+z1)/(2.0+z1));
#endif
y=(((1.0+fv)+d00_logE0)/(2.0+z1));
EXIT_IF_ISNAN((((1.0+fv)+d00_logE0)/(2.0+z1)))
}
}
else
{
if
((fv>(-23.0)))
{
{
double m00_fabs(d00_fabs0,(-fv))
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,(-fv))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-fv_Vg_b)*d10_exp0;
tmp_Vdi_b=(-fv_Vdi_b)*d10_exp0;
tmp_Vsi_b=(-fv_Vsi_b)*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
(((-fv)<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-1.0e-100*(((-(-fv_Vg_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vg_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vg_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vdi_b=(-1.0e-100*(((-(-fv_Vdi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vdi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vdi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-(-fv_Vsi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vsi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vsi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(1.0e100*(((-fv_Vg_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vg_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vg_b)*3.3333333333333333e-01))))));
tmp_Vdi_b=(1.0e100*(((-fv_Vdi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vdi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vdi_b)*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*(((-fv_Vsi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vsi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vsi_b)*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=(-tmp_Vg_b/(2.0+pInst->tmp)/(2.0+pInst->tmp));
y_Vdi_b=(-tmp_Vdi_b/(2.0+pInst->tmp)/(2.0+pInst->tmp));
y_Vsi_b=(-tmp_Vsi_b/(2.0+pInst->tmp)/(2.0+pInst->tmp));
#endif
y=(1.0/(2.0+pInst->tmp));
EXIT_IF_ISNAN((1.0/(2.0+pInst->tmp)))
}
else
{
{
double m00_fabs(d00_fabs0,fv)
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,fv)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=fv_Vg_b*d10_exp0;
tmp_Vdi_b=fv_Vdi_b*d10_exp0;
tmp_Vsi_b=fv_Vsi_b*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
((fv<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-1.0e-100*(((-fv_Vg_b)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-fv)*(0.5*(((-fv_Vg_b)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-fv)*(-fv_Vg_b)*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
tmp_Vdi_b=(-1.0e-100*(((-fv_Vdi_b)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-fv)*(0.5*(((-fv_Vdi_b)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-fv)*(-fv_Vdi_b)*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-fv_Vsi_b)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-fv)*(0.5*(((-fv_Vsi_b)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-fv)*(-fv_Vsi_b)*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(1.0e100*((fv_Vg_b*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((fv-2.3025850929940458e+02)*(0.5*((fv_Vg_b*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))+((fv-2.3025850929940458e+02)*fv_Vg_b*3.3333333333333333e-01))))));
tmp_Vdi_b=(1.0e100*((fv_Vdi_b*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((fv-2.3025850929940458e+02)*(0.5*((fv_Vdi_b*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))+((fv-2.3025850929940458e+02)*fv_Vdi_b*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*((fv_Vsi_b*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((fv-2.3025850929940458e+02)*(0.5*((fv_Vsi_b*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))+((fv-2.3025850929940458e+02)*fv_Vsi_b*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+((fv-2.3025850929940458e+02)*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+((fv-2.3025850929940458e+02)*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=tmp_Vg_b;
y_Vdi_b=tmp_Vdi_b;
y_Vsi_b=tmp_Vsi_b;
#endif
y=(pInst->tmp+1.0e-64);
EXIT_IF_ISNAN((pInst->tmp+1.0e-64))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
irprime_Vg_b=((y_Vg_b*(1.0+y))+(y*y_Vg_b));
irprime_Vdi_b=((y_Vdi_b*(1.0+y))+(y*y_Vdi_b));
irprime_Vsi_b=((y_Vsi_b*(1.0+y))+(y*y_Vsi_b));
#endif
irprime=(y*(1.0+y));
EXIT_IF_ISNAN((y*(1.0+y)))
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z0_Vg_b=0.0;
z0_Vdi_b=0.0;
z0_Vsi_b=0.0;
#endif
z0=1;
EXIT_IF_ISNAN(1)
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z1_Vg_b=0.0;
z1_Vdi_b=0.0;
z1_Vsi_b=0.0;
#endif
z1=1;
EXIT_IF_ISNAN(1)
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
fv_Vg_b=(vp_Vg_b/pInst->vt);
fv_Vdi_b=((vp_Vdi_b-vd_Vdi_b)/pInst->vt);
fv_Vsi_b=((vp_Vsi_b-vd_Vsi_b)/pInst->vt);
#endif
fv=((vp-vd)/pInst->vt);
EXIT_IF_ISNAN(((vp-vd)/pInst->vt))
if
((fv>(-0.35)))
{
{
double m00_logE(d00_logE0,(fv+1.6))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(fv+1.6))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z0_Vg_b=(-2.0*(fv_Vg_b-fv_Vg_b*d10_logE0)/((1.3+fv)-d00_logE0)/((1.3+fv)-d00_logE0));
z0_Vdi_b=(-2.0*(fv_Vdi_b-fv_Vdi_b*d10_logE0)/((1.3+fv)-d00_logE0)/((1.3+fv)-d00_logE0));
z0_Vsi_b=(-2.0*(fv_Vsi_b-fv_Vsi_b*d10_logE0)/((1.3+fv)-d00_logE0)/((1.3+fv)-d00_logE0));
#endif
z0=(2.0/((1.3+fv)-d00_logE0));
EXIT_IF_ISNAN((2.0/((1.3+fv)-d00_logE0)))
}
{
double m00_logE(d00_logE0,z0)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z0)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z1_Vg_b=((z0_Vg_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vg_b+z0_Vg_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vdi_b=((z0_Vdi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vdi_b+z0_Vdi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vsi_b=((z0_Vsi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vsi_b+z0_Vsi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
#endif
z1=((2.0+z0)/((1.0+fv)+d00_logE0));
EXIT_IF_ISNAN(((2.0+z0)/((1.0+fv)+d00_logE0)))
}
{
double m00_logE(d00_logE0,z1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z1)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=(((fv_Vg_b+z1_Vg_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vg_b)/(2.0+z1)/(2.0+z1));
y_Vdi_b=(((fv_Vdi_b+z1_Vdi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vdi_b)/(2.0+z1)/(2.0+z1));
y_Vsi_b=(((fv_Vsi_b+z1_Vsi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vsi_b)/(2.0+z1)/(2.0+z1));
#endif
y=(((1.0+fv)+d00_logE0)/(2.0+z1));
EXIT_IF_ISNAN((((1.0+fv)+d00_logE0)/(2.0+z1)))
}
}
else
{
if
((fv>(-15)))
{
{
double m00_fabs(d00_fabs0,(-fv))
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,(-fv))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-fv_Vg_b)*d10_exp0;
tmp_Vdi_b=(-fv_Vdi_b)*d10_exp0;
tmp_Vsi_b=(-fv_Vsi_b)*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
(((-fv)<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-1.0e-100*(((-(-fv_Vg_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vg_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vg_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vdi_b=(-1.0e-100*(((-(-fv_Vdi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vdi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vdi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-(-fv_Vsi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vsi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vsi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(1.0e100*(((-fv_Vg_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vg_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vg_b)*3.3333333333333333e-01))))));
tmp_Vdi_b=(1.0e100*(((-fv_Vdi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vdi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vdi_b)*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*(((-fv_Vsi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vsi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vsi_b)*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z0_Vg_b=tmp_Vg_b;
z0_Vdi_b=tmp_Vdi_b;
z0_Vsi_b=tmp_Vsi_b;
#endif
z0=(1.55+pInst->tmp);
EXIT_IF_ISNAN((1.55+pInst->tmp))
{
double m00_logE(d00_logE0,z0)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z0)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
z1_Vg_b=((z0_Vg_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vg_b+z0_Vg_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vdi_b=((z0_Vdi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vdi_b+z0_Vdi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
z1_Vsi_b=((z0_Vsi_b*((1.0+fv)+d00_logE0)-(2.0+z0)*(fv_Vsi_b+z0_Vsi_b*d10_logE0))/((1.0+fv)+d00_logE0)/((1.0+fv)+d00_logE0));
#endif
z1=((2.0+z0)/((1.0+fv)+d00_logE0));
EXIT_IF_ISNAN(((2.0+z0)/((1.0+fv)+d00_logE0)))
}
{
double m00_logE(d00_logE0,z1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,z1)
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=(((fv_Vg_b+z1_Vg_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vg_b)/(2.0+z1)/(2.0+z1));
y_Vdi_b=(((fv_Vdi_b+z1_Vdi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vdi_b)/(2.0+z1)/(2.0+z1));
y_Vsi_b=(((fv_Vsi_b+z1_Vsi_b*d10_logE0)*(2.0+z1)-((1.0+fv)+d00_logE0)*z1_Vsi_b)/(2.0+z1)/(2.0+z1));
#endif
y=(((1.0+fv)+d00_logE0)/(2.0+z1));
EXIT_IF_ISNAN((((1.0+fv)+d00_logE0)/(2.0+z1)))
}
}
else
{
if
((fv>(-23.0)))
{
{
double m00_fabs(d00_fabs0,(-fv))
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,(-fv))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-fv_Vg_b)*d10_exp0;
tmp_Vdi_b=(-fv_Vdi_b)*d10_exp0;
tmp_Vsi_b=(-fv_Vsi_b)*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
(((-fv)<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-1.0e-100*(((-(-fv_Vg_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vg_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vg_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vdi_b=(-1.0e-100*(((-(-fv_Vdi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vdi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vdi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-(-fv_Vsi_b))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(-fv))*(0.5*(((-(-fv_Vsi_b))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(-fv))*(-(-fv_Vsi_b))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-(-fv))*(1.0+(0.5*(((-2.3025850929940458e+02)-(-fv))*(1.0+(((-2.3025850929940458e+02)-(-fv))*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(1.0e100*(((-fv_Vg_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vg_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vg_b)*3.3333333333333333e-01))))));
tmp_Vdi_b=(1.0e100*(((-fv_Vdi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vdi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vdi_b)*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*(((-fv_Vsi_b)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((-fv)-2.3025850929940458e+02)*(0.5*(((-fv_Vsi_b)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((-fv)-2.3025850929940458e+02)*(-fv_Vsi_b)*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+(((-fv)-2.3025850929940458e+02)*(1.0+(0.5*(((-fv)-2.3025850929940458e+02)*(1.0+(((-fv)-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=(-tmp_Vg_b/(2.0+pInst->tmp)/(2.0+pInst->tmp));
y_Vdi_b=(-tmp_Vdi_b/(2.0+pInst->tmp)/(2.0+pInst->tmp));
y_Vsi_b=(-tmp_Vsi_b/(2.0+pInst->tmp)/(2.0+pInst->tmp));
#endif
y=(1.0/(2.0+pInst->tmp));
EXIT_IF_ISNAN((1.0/(2.0+pInst->tmp)))
}
else
{
{
double m00_fabs(d00_fabs0,fv)
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,fv)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=fv_Vg_b*d10_exp0;
tmp_Vdi_b=fv_Vdi_b*d10_exp0;
tmp_Vsi_b=fv_Vsi_b*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
((fv<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-1.0e-100*(((-fv_Vg_b)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-fv)*(0.5*(((-fv_Vg_b)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-fv)*(-fv_Vg_b)*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
tmp_Vdi_b=(-1.0e-100*(((-fv_Vdi_b)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-fv)*(0.5*(((-fv_Vdi_b)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-fv)*(-fv_Vdi_b)*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-fv_Vsi_b)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-fv)*(0.5*(((-fv_Vsi_b)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-fv)*(-fv_Vsi_b)*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-fv)*(1.0+(0.5*(((-2.3025850929940458e+02)-fv)*(1.0+(((-2.3025850929940458e+02)-fv)*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(1.0e100*((fv_Vg_b*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((fv-2.3025850929940458e+02)*(0.5*((fv_Vg_b*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))+((fv-2.3025850929940458e+02)*fv_Vg_b*3.3333333333333333e-01))))));
tmp_Vdi_b=(1.0e100*((fv_Vdi_b*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((fv-2.3025850929940458e+02)*(0.5*((fv_Vdi_b*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))+((fv-2.3025850929940458e+02)*fv_Vdi_b*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*((fv_Vsi_b*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((fv-2.3025850929940458e+02)*(0.5*((fv_Vsi_b*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))+((fv-2.3025850929940458e+02)*fv_Vsi_b*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+((fv-2.3025850929940458e+02)*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+((fv-2.3025850929940458e+02)*(1.0+(0.5*((fv-2.3025850929940458e+02)*(1.0+((fv-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
y_Vg_b=tmp_Vg_b;
y_Vdi_b=tmp_Vdi_b;
y_Vsi_b=tmp_Vsi_b;
#endif
y=(pInst->tmp+1.0e-64);
EXIT_IF_ISNAN((pInst->tmp+1.0e-64))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
irev_Vg_b=((y_Vg_b*(1.0+y))+(y*y_Vg_b));
irev_Vdi_b=((y_Vdi_b*(1.0+y))+(y*y_Vdi_b));
irev_Vsi_b=((y_Vsi_b*(1.0+y))+(y*y_Vsi_b));
#endif
irev=(y*(1.0+y));
EXIT_IF_ISNAN((y*(1.0+y)))
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b)V(g:b) ddxprobe= */
beta0_Vsi_b=(-((pInst->kp_a*pInst->np)*pInst->weff)*leq_Vsi_b/leq/leq);
beta0_Vdi_b=(-((pInst->kp_a*pInst->np)*pInst->weff)*leq_Vdi_b/leq/leq);
beta0_Vg_b=(-((pInst->kp_a*pInst->np)*pInst->weff)*leq_Vg_b/leq/leq);
#endif
beta0=(((pInst->kp_a*pInst->np)*pInst->weff)/leq);
EXIT_IF_ISNAN((((pInst->kp_a*pInst->np)*pInst->weff)/leq))
nau=((5+pModel->MTYPE)/12.0);
EXIT_IF_ISNAN(((5+pModel->MTYPE)/12.0))
{
double m00_sqrt(d00_sqrt0,((vp+pInst->phi)+1e-6))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((vp+pInst->phi)+1e-6))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
nq_Vg_b=(-(0.5*pInst->gamma_a)*vp_Vg_b*d10_sqrt0/d00_sqrt0/d00_sqrt0);
nq_Vdi_b=(-(0.5*pInst->gamma_a)*vp_Vdi_b*d10_sqrt0/d00_sqrt0/d00_sqrt0);
nq_Vsi_b=(-(0.5*pInst->gamma_a)*vp_Vsi_b*d10_sqrt0/d00_sqrt0/d00_sqrt0);
#endif
nq=(1+((0.5*pInst->gamma_a)/d00_sqrt0));
EXIT_IF_ISNAN((1+((0.5*pInst->gamma_a)/d00_sqrt0)))
}
{
double m00_sqrt(d00_sqrt0,(0.25+ifwd))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(0.25+ifwd))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
xf_Vg_b=ifwd_Vg_b*d10_sqrt0;
xf_Vdi_b=ifwd_Vdi_b*d10_sqrt0;
xf_Vsi_b=ifwd_Vsi_b*d10_sqrt0;
#endif
xf=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
{
double m00_sqrt(d00_sqrt0,(0.25+irev))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(0.25+irev))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
xr_Vg_b=irev_Vg_b*d10_sqrt0;
xr_Vdi_b=irev_Vdi_b*d10_sqrt0;
xr_Vsi_b=irev_Vsi_b*d10_sqrt0;
#endif
xr=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
qd_Vg_b=(((-nq_Vg_b)*((((4.0/15)*(((3*(xr*xr))*(xr+(2*xf)))+((2*(xf*xf))*(xf+(2*xr)))))/((xf+xr)*(xf+xr)))-0.5))+((-nq)*((((4.0/15)*((((3*((xr_Vg_b*xr)+(xr*xr_Vg_b)))*(xr+(2*xf)))+((3*(xr*xr))*(xr_Vg_b+(2*xf_Vg_b))))+(((2*((xf_Vg_b*xf)+(xf*xf_Vg_b)))*(xf+(2*xr)))+((2*(xf*xf))*(xf_Vg_b+(2*xr_Vg_b))))))*((xf+xr)*(xf+xr))-((4.0/15)*(((3*(xr*xr))*(xr+(2*xf)))+((2*(xf*xf))*(xf+(2*xr)))))*(((xf_Vg_b+xr_Vg_b)*(xf+xr))+((xf+xr)*(xf_Vg_b+xr_Vg_b))))/((xf+xr)*(xf+xr))/((xf+xr)*(xf+xr)))));
qd_Vdi_b=(((-nq_Vdi_b)*((((4.0/15)*(((3*(xr*xr))*(xr+(2*xf)))+((2*(xf*xf))*(xf+(2*xr)))))/((xf+xr)*(xf+xr)))-0.5))+((-nq)*((((4.0/15)*((((3*((xr_Vdi_b*xr)+(xr*xr_Vdi_b)))*(xr+(2*xf)))+((3*(xr*xr))*(xr_Vdi_b+(2*xf_Vdi_b))))+(((2*((xf_Vdi_b*xf)+(xf*xf_Vdi_b)))*(xf+(2*xr)))+((2*(xf*xf))*(xf_Vdi_b+(2*xr_Vdi_b))))))*((xf+xr)*(xf+xr))-((4.0/15)*(((3*(xr*xr))*(xr+(2*xf)))+((2*(xf*xf))*(xf+(2*xr)))))*(((xf_Vdi_b+xr_Vdi_b)*(xf+xr))+((xf+xr)*(xf_Vdi_b+xr_Vdi_b))))/((xf+xr)*(xf+xr))/((xf+xr)*(xf+xr)))));
qd_Vsi_b=(((-nq_Vsi_b)*((((4.0/15)*(((3*(xr*xr))*(xr+(2*xf)))+((2*(xf*xf))*(xf+(2*xr)))))/((xf+xr)*(xf+xr)))-0.5))+((-nq)*((((4.0/15)*((((3*((xr_Vsi_b*xr)+(xr*xr_Vsi_b)))*(xr+(2*xf)))+((3*(xr*xr))*(xr_Vsi_b+(2*xf_Vsi_b))))+(((2*((xf_Vsi_b*xf)+(xf*xf_Vsi_b)))*(xf+(2*xr)))+((2*(xf*xf))*(xf_Vsi_b+(2*xr_Vsi_b))))))*((xf+xr)*(xf+xr))-((4.0/15)*(((3*(xr*xr))*(xr+(2*xf)))+((2*(xf*xf))*(xf+(2*xr)))))*(((xf_Vsi_b+xr_Vsi_b)*(xf+xr))+((xf+xr)*(xf_Vsi_b+xr_Vsi_b))))/((xf+xr)*(xf+xr))/((xf+xr)*(xf+xr)))));
#endif
qd=((-nq)*((((4.0/15)*(((3*(xr*xr))*(xr+(2*xf)))+((2*(xf*xf))*(xf+(2*xr)))))/((xf+xr)*(xf+xr)))-0.5));
EXIT_IF_ISNAN(((-nq)*((((4.0/15)*(((3*(xr*xr))*(xr+(2*xf)))+((2*(xf*xf))*(xf+(2*xr)))))/((xf+xr)*(xf+xr)))-0.5)))
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
qs_Vg_b=(((-nq_Vg_b)*((((4.0/15)*(((3*(xf*xf))*(xf+(2*xr)))+((2*(xr*xr))*(xr+(2*xf)))))/((xf+xr)*(xf+xr)))-0.5))+((-nq)*((((4.0/15)*((((3*((xf_Vg_b*xf)+(xf*xf_Vg_b)))*(xf+(2*xr)))+((3*(xf*xf))*(xf_Vg_b+(2*xr_Vg_b))))+(((2*((xr_Vg_b*xr)+(xr*xr_Vg_b)))*(xr+(2*xf)))+((2*(xr*xr))*(xr_Vg_b+(2*xf_Vg_b))))))*((xf+xr)*(xf+xr))-((4.0/15)*(((3*(xf*xf))*(xf+(2*xr)))+((2*(xr*xr))*(xr+(2*xf)))))*(((xf_Vg_b+xr_Vg_b)*(xf+xr))+((xf+xr)*(xf_Vg_b+xr_Vg_b))))/((xf+xr)*(xf+xr))/((xf+xr)*(xf+xr)))));
qs_Vdi_b=(((-nq_Vdi_b)*((((4.0/15)*(((3*(xf*xf))*(xf+(2*xr)))+((2*(xr*xr))*(xr+(2*xf)))))/((xf+xr)*(xf+xr)))-0.5))+((-nq)*((((4.0/15)*((((3*((xf_Vdi_b*xf)+(xf*xf_Vdi_b)))*(xf+(2*xr)))+((3*(xf*xf))*(xf_Vdi_b+(2*xr_Vdi_b))))+(((2*((xr_Vdi_b*xr)+(xr*xr_Vdi_b)))*(xr+(2*xf)))+((2*(xr*xr))*(xr_Vdi_b+(2*xf_Vdi_b))))))*((xf+xr)*(xf+xr))-((4.0/15)*(((3*(xf*xf))*(xf+(2*xr)))+((2*(xr*xr))*(xr+(2*xf)))))*(((xf_Vdi_b+xr_Vdi_b)*(xf+xr))+((xf+xr)*(xf_Vdi_b+xr_Vdi_b))))/((xf+xr)*(xf+xr))/((xf+xr)*(xf+xr)))));
qs_Vsi_b=(((-nq_Vsi_b)*((((4.0/15)*(((3*(xf*xf))*(xf+(2*xr)))+((2*(xr*xr))*(xr+(2*xf)))))/((xf+xr)*(xf+xr)))-0.5))+((-nq)*((((4.0/15)*((((3*((xf_Vsi_b*xf)+(xf*xf_Vsi_b)))*(xf+(2*xr)))+((3*(xf*xf))*(xf_Vsi_b+(2*xr_Vsi_b))))+(((2*((xr_Vsi_b*xr)+(xr*xr_Vsi_b)))*(xr+(2*xf)))+((2*(xr*xr))*(xr_Vsi_b+(2*xf_Vsi_b))))))*((xf+xr)*(xf+xr))-((4.0/15)*(((3*(xf*xf))*(xf+(2*xr)))+((2*(xr*xr))*(xr+(2*xf)))))*(((xf_Vsi_b+xr_Vsi_b)*(xf+xr))+((xf+xr)*(xf_Vsi_b+xr_Vsi_b))))/((xf+xr)*(xf+xr))/((xf+xr)*(xf+xr)))));
#endif
qs=((-nq)*((((4.0/15)*(((3*(xf*xf))*(xf+(2*xr)))+((2*(xr*xr))*(xr+(2*xf)))))/((xf+xr)*(xf+xr)))-0.5));
EXIT_IF_ISNAN(((-nq)*((((4.0/15)*(((3*(xf*xf))*(xf+(2*xr)))+((2*(xr*xr))*(xr+(2*xf)))))/((xf+xr)*(xf+xr)))-0.5)))
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
qi_Vg_b=(qs_Vg_b+qd_Vg_b);
qi_Vdi_b=(qs_Vdi_b+qd_Vdi_b);
qi_Vsi_b=(qs_Vsi_b+qd_Vsi_b);
#endif
qi=(qs+qd);
EXIT_IF_ISNAN((qs+qd))
if
((vgprime>=0))
{
{
double m00_sqrt(d00_sqrt0,((vp+pInst->phi)+1e-6))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((vp+pInst->phi)+1e-6))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
qb_Vg_b=((((-pInst->gamma_a)*vp_Vg_b*d10_sqrt0)/pInst->vt)-((((nq_Vg_b*nq-(nq-1)*nq_Vg_b)/nq/nq)*qi)+(((nq-1)/nq)*qi_Vg_b)));
qb_Vdi_b=((((-pInst->gamma_a)*vp_Vdi_b*d10_sqrt0)/pInst->vt)-((((nq_Vdi_b*nq-(nq-1)*nq_Vdi_b)/nq/nq)*qi)+(((nq-1)/nq)*qi_Vdi_b)));
qb_Vsi_b=((((-pInst->gamma_a)*vp_Vsi_b*d10_sqrt0)/pInst->vt)-((((nq_Vsi_b*nq-(nq-1)*nq_Vsi_b)/nq/nq)*qi)+(((nq-1)/nq)*qi_Vsi_b)));
#endif
qb=((((-pInst->gamma_a)*d00_sqrt0)/pInst->vt)-(((nq-1)/nq)*qi));
EXIT_IF_ISNAN(((((-pInst->gamma_a)*d00_sqrt0)/pInst->vt)-(((nq-1)/nq)*qi)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
qb_Vg_b=((-vgprime_Vg_b)/pInst->vt);
qb_Vdi_b=0.0;
qb_Vsi_b=0.0;
#endif
qb=((-vgprime)/pInst->vt);
EXIT_IF_ISNAN(((-vgprime)/pInst->vt))
}
#if defined(_DYNAMIC)
qg=((-qi)-qb);
EXIT_IF_ISNAN(((-qi)-qb))
#endif
if
((pModel->E0!=0))
{
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b)V(g:b) ddxprobe= */
beta0prime_Vsi_b=beta0_Vsi_b*(1+((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->qb0));
beta0prime_Vdi_b=beta0_Vdi_b*(1+((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->qb0));
beta0prime_Vg_b=beta0_Vg_b*(1+((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->qb0));
#endif
beta0prime=(beta0*(1+((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->qb0)));
EXIT_IF_ISNAN((beta0*(1+((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->qb0))))
{
double m00_fabs(d00_fabs0,(qb+(nau*qi)))
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,(qb+(nau*qi)))
#endif
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b)V(g:b) ddxprobe= */
beta_Vsi_b=((beta0prime_Vsi_b*(1+(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*d00_fabs0))-beta0prime*(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*(qb_Vsi_b+(nau*qi_Vsi_b))*d10_fabs0))/(1+(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*d00_fabs0))/(1+(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*d00_fabs0)));
beta_Vdi_b=((beta0prime_Vdi_b*(1+(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*d00_fabs0))-beta0prime*(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*(qb_Vdi_b+(nau*qi_Vdi_b))*d10_fabs0))/(1+(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*d00_fabs0))/(1+(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*d00_fabs0)));
beta_Vg_b=((beta0prime_Vg_b*(1+(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*d00_fabs0))-beta0prime*(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*(qb_Vg_b+(nau*qi_Vg_b))*d10_fabs0))/(1+(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*d00_fabs0))/(1+(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*d00_fabs0)));
#endif
beta=(beta0prime/(1+(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*d00_fabs0)));
EXIT_IF_ISNAN((beta0prime/(1+(((pModel->COX/((pModel->E0*8.854187817e-12)*11.7))*pInst->vt)*d00_fabs0))))
}
}
else
{
{
double m00_sqrt(d00_sqrt0,((vp*vp)+(2*(pInst->vt*pInst->vt))))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((vp*vp)+(2*(pInst->vt*pInst->vt))))
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
vpprime_Vg_b=(0.5*(vp_Vg_b+((vp_Vg_b*vp)+(vp*vp_Vg_b))*d10_sqrt0));
vpprime_Vdi_b=(0.5*(vp_Vdi_b+((vp_Vdi_b*vp)+(vp*vp_Vdi_b))*d10_sqrt0));
vpprime_Vsi_b=(0.5*(vp_Vsi_b+((vp_Vsi_b*vp)+(vp*vp_Vsi_b))*d10_sqrt0));
#endif
vpprime=(0.5*(vp+d00_sqrt0));
EXIT_IF_ISNAN((0.5*(vp+d00_sqrt0)))
}
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b)V(g:b) ddxprobe= */
beta_Vsi_b=((beta0_Vsi_b*(1+(pModel->THETA*vpprime))-beta0*(pModel->THETA*vpprime_Vsi_b))/(1+(pModel->THETA*vpprime))/(1+(pModel->THETA*vpprime)));
beta_Vdi_b=((beta0_Vdi_b*(1+(pModel->THETA*vpprime))-beta0*(pModel->THETA*vpprime_Vdi_b))/(1+(pModel->THETA*vpprime))/(1+(pModel->THETA*vpprime)));
beta_Vg_b=((beta0_Vg_b*(1+(pModel->THETA*vpprime))-beta0*(pModel->THETA*vpprime_Vg_b))/(1+(pModel->THETA*vpprime))/(1+(pModel->THETA*vpprime)));
#endif
beta=(beta0/(1+(pModel->THETA*vpprime)));
EXIT_IF_ISNAN((beta0/(1+(pModel->THETA*vpprime))))
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
is_Vg_b=(((2*n_Vg_b)*beta)+((2*n)*beta_Vg_b))*(pInst->vt*pInst->vt);
is_Vdi_b=(((2*n_Vdi_b)*beta)+((2*n)*beta_Vdi_b))*(pInst->vt*pInst->vt);
is_Vsi_b=(((2*n_Vsi_b)*beta)+((2*n)*beta_Vsi_b))*(pInst->vt*pInst->vt);
#endif
is=(((2*n)*beta)*(pInst->vt*pInst->vt));
EXIT_IF_ISNAN((((2*n)*beta)*(pInst->vt*pInst->vt)))
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
ids_Vg_b=((is_Vg_b*(ifwd-irprime))+(is*(ifwd_Vg_b-irprime_Vg_b)));
ids_Vdi_b=((is_Vdi_b*(ifwd-irprime))+(is*(ifwd_Vdi_b-irprime_Vdi_b)));
ids_Vsi_b=((is_Vsi_b*(ifwd-irprime))+(is*(ifwd_Vsi_b-irprime_Vsi_b)));
#endif
ids=(is*(ifwd-irprime));
EXIT_IF_ISNAN((is*(ifwd-irprime)))
#if defined(_DERIVATE) /* probe=V(si:b)V(di:b)V(g:b) ddxprobe= */
vib_Vsi_b=((vd_Vsi_b-vs_Vsi_b)-((pModel->IBN*2)*vdss_Vsi_b));
vib_Vdi_b=((vd_Vdi_b-vs_Vdi_b)-((pModel->IBN*2)*vdss_Vdi_b));
vib_Vg_b=(-((pModel->IBN*2)*vdss_Vg_b));
#endif
vib=((vd-vs)-((pModel->IBN*2)*vdss));
EXIT_IF_ISNAN(((vd-vs)-((pModel->IBN*2)*vdss)))
if
((vib>0))
{
{
double m00_fabs(d00_fabs0,(((-pInst->ibb)*pModel->lc)/vib))
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,(((-pInst->ibb)*pModel->lc)/vib))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-((-pInst->ibb)*pModel->lc)*vib_Vg_b/vib/vib)*d10_exp0;
tmp_Vdi_b=(-((-pInst->ibb)*pModel->lc)*vib_Vdi_b/vib/vib)*d10_exp0;
tmp_Vsi_b=(-((-pInst->ibb)*pModel->lc)*vib_Vsi_b/vib/vib)*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
(((((-pInst->ibb)*pModel->lc)/vib)<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(-1.0e-100*(((-(-((-pInst->ibb)*pModel->lc)*vib_Vg_b/vib/vib))*(1.0+(0.5*(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(0.5*(((-(-((-pInst->ibb)*pModel->lc)*vib_Vg_b/vib/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(-(-((-pInst->ibb)*pModel->lc)*vib_Vg_b/vib/vib))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(0.5*(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(0.5*(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01))))))));
tmp_Vdi_b=(-1.0e-100*(((-(-((-pInst->ibb)*pModel->lc)*vib_Vdi_b/vib/vib))*(1.0+(0.5*(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(0.5*(((-(-((-pInst->ibb)*pModel->lc)*vib_Vdi_b/vib/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(-(-((-pInst->ibb)*pModel->lc)*vib_Vdi_b/vib/vib))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(0.5*(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(0.5*(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-(-((-pInst->ibb)*pModel->lc)*vib_Vsi_b/vib/vib))*(1.0+(0.5*(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(0.5*(((-(-((-pInst->ibb)*pModel->lc)*vib_Vsi_b/vib/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(-(-((-pInst->ibb)*pModel->lc)*vib_Vsi_b/vib/vib))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(0.5*(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(0.5*(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(0.5*(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(0.5*(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*(1.0+(((-2.3025850929940458e+02)-(((-pInst->ibb)*pModel->lc)/vib))*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=(1.0e100*(((-((-pInst->ibb)*pModel->lc)*vib_Vg_b/vib/vib)*(1.0+(0.5*(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(1.0+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(0.5*(((-((-pInst->ibb)*pModel->lc)*vib_Vg_b/vib/vib)*(1.0+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(-((-pInst->ibb)*pModel->lc)*vib_Vg_b/vib/vib)*3.3333333333333333e-01))))));
tmp_Vdi_b=(1.0e100*(((-((-pInst->ibb)*pModel->lc)*vib_Vdi_b/vib/vib)*(1.0+(0.5*(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(1.0+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(0.5*(((-((-pInst->ibb)*pModel->lc)*vib_Vdi_b/vib/vib)*(1.0+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(-((-pInst->ibb)*pModel->lc)*vib_Vdi_b/vib/vib)*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*(((-((-pInst->ibb)*pModel->lc)*vib_Vsi_b/vib/vib)*(1.0+(0.5*(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(1.0+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*3.3333333333333333e-01))))))+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(0.5*(((-((-pInst->ibb)*pModel->lc)*vib_Vsi_b/vib/vib)*(1.0+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*3.3333333333333333e-01)))+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(-((-pInst->ibb)*pModel->lc)*vib_Vsi_b/vib/vib)*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(1.0+(0.5*(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(1.0+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(1.0+(0.5*(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*(1.0+(((((-pInst->ibb)*pModel->lc)/vib)-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
idb_Vg_b=(((((ids_Vg_b*pModel->IBA/pInst->ibb)*vib)+(((ids*pModel->IBA)/pInst->ibb)*vib_Vg_b))*pInst->tmp)+((((ids*pModel->IBA)/pInst->ibb)*vib)*tmp_Vg_b));
idb_Vdi_b=(((((ids_Vdi_b*pModel->IBA/pInst->ibb)*vib)+(((ids*pModel->IBA)/pInst->ibb)*vib_Vdi_b))*pInst->tmp)+((((ids*pModel->IBA)/pInst->ibb)*vib)*tmp_Vdi_b));
idb_Vsi_b=(((((ids_Vsi_b*pModel->IBA/pInst->ibb)*vib)+(((ids*pModel->IBA)/pInst->ibb)*vib_Vsi_b))*pInst->tmp)+((((ids*pModel->IBA)/pInst->ibb)*vib)*tmp_Vsi_b));
#endif
idb=((((ids*pModel->IBA)/pInst->ibb)*vib)*pInst->tmp);
EXIT_IF_ISNAN(((((ids*pModel->IBA)/pInst->ibb)*vib)*pInst->tmp))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
idb_Vg_b=0.0;
idb_Vdi_b=0.0;
idb_Vsi_b=0.0;
#endif
idb=0;
EXIT_IF_ISNAN(0)
}
if
((mode>1))
{
if
((pInst->isat_s>0))
{
if
(((-vs)>pInst->vexp_s))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
ibsj_Vg_b=0.0;
ibsj_Vdi_b=(pInst->gexp_s*(-vs_Vdi_b));
ibsj_Vsi_b=(pInst->gexp_s*(-vs_Vsi_b));
#endif
ibsj=(pModel->IMAX+(pInst->gexp_s*((-vs)-pInst->vexp_s)));
EXIT_IF_ISNAN((pModel->IMAX+(pInst->gexp_s*((-vs)-pInst->vexp_s))))
}
else
{
{
double m00_fabs(d00_fabs0,((-vs)/(pModel->N*pInst->vt)))
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,((-vs)/(pModel->N*pInst->vt)))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=((-vs_Vdi_b)/(pModel->N*pInst->vt))*d10_exp0;
tmp_Vsi_b=((-vs_Vsi_b)/(pModel->N*pInst->vt))*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
((((-vs)/(pModel->N*pInst->vt))<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=(-1.0e-100*(((-((-vs_Vdi_b)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(0.5*(((-((-vs_Vdi_b)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(-((-vs_Vdi_b)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-((-vs_Vsi_b)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(0.5*(((-((-vs_Vsi_b)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(-((-vs_Vsi_b)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=(1.0e100*((((-vs_Vdi_b)/(pModel->N*pInst->vt))*(1.0+(0.5*((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(0.5*((((-vs_Vdi_b)/(pModel->N*pInst->vt))*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*((-vs_Vdi_b)/(pModel->N*pInst->vt))*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*((((-vs_Vsi_b)/(pModel->N*pInst->vt))*(1.0+(0.5*((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(0.5*((((-vs_Vsi_b)/(pModel->N*pInst->vt))*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*((-vs_Vsi_b)/(pModel->N*pInst->vt))*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+(0.5*((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+(0.5*((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
ibsj_Vg_b=(pInst->isat_s*tmp_Vg_b);
ibsj_Vdi_b=(pInst->isat_s*tmp_Vdi_b);
ibsj_Vsi_b=(pInst->isat_s*tmp_Vsi_b);
#endif
ibsj=(pInst->isat_s*(pInst->tmp-1));
EXIT_IF_ISNAN((pInst->isat_s*(pInst->tmp-1)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
ibsj_Vg_b=0.0;
ibsj_Vdi_b=0.0;
ibsj_Vsi_b=0.0;
#endif
ibsj=0;
EXIT_IF_ISNAN(0)
}
if
((pInst->isat_d>0))
{
if
(((-vd)>pInst->vexp_d))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(si:b)V(di:b) ddxprobe= */
ibdj_Vg_b=0.0;
ibdj_Vsi_b=(pInst->gexp_d*(-vd_Vsi_b));
ibdj_Vdi_b=(pInst->gexp_d*(-vd_Vdi_b));
#endif
ibdj=(pModel->IMAX+(pInst->gexp_d*((-vd)-pInst->vexp_d)));
EXIT_IF_ISNAN((pModel->IMAX+(pInst->gexp_d*((-vd)-pInst->vexp_d))))
}
else
{
{
double m00_fabs(d00_fabs0,((-vd)/(pModel->N*pInst->vt)))
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,((-vd)/(pModel->N*pInst->vt)))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=((-vd_Vdi_b)/(pModel->N*pInst->vt))*d10_exp0;
tmp_Vsi_b=((-vd_Vsi_b)/(pModel->N*pInst->vt))*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
((((-vd)/(pModel->N*pInst->vt))<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=(-1.0e-100*(((-((-vd_Vdi_b)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(0.5*(((-((-vd_Vdi_b)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(-((-vd_Vdi_b)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-((-vd_Vsi_b)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(0.5*(((-((-vd_Vsi_b)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(-((-vd_Vsi_b)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=(1.0e100*((((-vd_Vdi_b)/(pModel->N*pInst->vt))*(1.0+(0.5*((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(0.5*((((-vd_Vdi_b)/(pModel->N*pInst->vt))*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*((-vd_Vdi_b)/(pModel->N*pInst->vt))*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*((((-vd_Vsi_b)/(pModel->N*pInst->vt))*(1.0+(0.5*((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(0.5*((((-vd_Vsi_b)/(pModel->N*pInst->vt))*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*((-vd_Vsi_b)/(pModel->N*pInst->vt))*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+(0.5*((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+(0.5*((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(si:b)V(di:b) ddxprobe= */
ibdj_Vg_b=(pInst->isat_d*tmp_Vg_b);
ibdj_Vsi_b=(pInst->isat_d*tmp_Vsi_b);
ibdj_Vdi_b=(pInst->isat_d*tmp_Vdi_b);
#endif
ibdj=(pInst->isat_d*(pInst->tmp-1));
EXIT_IF_ISNAN((pInst->isat_d*(pInst->tmp-1)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(si:b)V(di:b) ddxprobe= */
ibdj_Vg_b=0.0;
ibdj_Vsi_b=0.0;
ibdj_Vdi_b=0.0;
#endif
ibdj=0;
EXIT_IF_ISNAN(0)
}
}
else
{
if
((pInst->isat_s>0))
{
if
(((-vd)>pInst->vexp_s))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
ibsj_Vg_b=0.0;
ibsj_Vdi_b=(pInst->gexp_s*(-vd_Vdi_b));
ibsj_Vsi_b=(pInst->gexp_s*(-vd_Vsi_b));
#endif
ibsj=(pModel->IMAX+(pInst->gexp_s*((-vd)-pInst->vexp_s)));
EXIT_IF_ISNAN((pModel->IMAX+(pInst->gexp_s*((-vd)-pInst->vexp_s))))
}
else
{
{
double m00_fabs(d00_fabs0,((-vd)/(pModel->N*pInst->vt)))
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,((-vd)/(pModel->N*pInst->vt)))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=((-vd_Vdi_b)/(pModel->N*pInst->vt))*d10_exp0;
tmp_Vsi_b=((-vd_Vsi_b)/(pModel->N*pInst->vt))*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
((((-vd)/(pModel->N*pInst->vt))<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=(-1.0e-100*(((-((-vd_Vdi_b)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(0.5*(((-((-vd_Vdi_b)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(-((-vd_Vdi_b)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-((-vd_Vsi_b)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(0.5*(((-((-vd_Vsi_b)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(-((-vd_Vsi_b)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vd)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=(1.0e100*((((-vd_Vdi_b)/(pModel->N*pInst->vt))*(1.0+(0.5*((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(0.5*((((-vd_Vdi_b)/(pModel->N*pInst->vt))*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*((-vd_Vdi_b)/(pModel->N*pInst->vt))*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*((((-vd_Vsi_b)/(pModel->N*pInst->vt))*(1.0+(0.5*((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(0.5*((((-vd_Vsi_b)/(pModel->N*pInst->vt))*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*((-vd_Vsi_b)/(pModel->N*pInst->vt))*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+(0.5*((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+(0.5*((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vd)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
ibsj_Vg_b=(pInst->isat_s*tmp_Vg_b);
ibsj_Vdi_b=(pInst->isat_s*tmp_Vdi_b);
ibsj_Vsi_b=(pInst->isat_s*tmp_Vsi_b);
#endif
ibsj=(pInst->isat_s*(pInst->tmp-1));
EXIT_IF_ISNAN((pInst->isat_s*(pInst->tmp-1)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
ibsj_Vg_b=0.0;
ibsj_Vdi_b=0.0;
ibsj_Vsi_b=0.0;
#endif
ibsj=0;
EXIT_IF_ISNAN(0)
}
if
((pInst->isat_d>0))
{
if
(((-vs)>pInst->vexp_d))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(si:b)V(di:b) ddxprobe= */
ibdj_Vg_b=0.0;
ibdj_Vsi_b=(pInst->gexp_d*(-vs_Vsi_b));
ibdj_Vdi_b=(pInst->gexp_d*(-vs_Vdi_b));
#endif
ibdj=(pModel->IMAX+(pInst->gexp_d*((-vs)-pInst->vexp_d)));
EXIT_IF_ISNAN((pModel->IMAX+(pInst->gexp_d*((-vs)-pInst->vexp_d))))
}
else
{
{
double m00_fabs(d00_fabs0,((-vs)/(pModel->N*pInst->vt)))
if
((d00_fabs0<2.3025850929940458e+02))
{
{
double m00_exp(d00_exp0,((-vs)/(pModel->N*pInst->vt)))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=((-vs_Vdi_b)/(pModel->N*pInst->vt))*d10_exp0;
tmp_Vsi_b=((-vs_Vsi_b)/(pModel->N*pInst->vt))*d10_exp0;
#endif
pInst->tmp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
if
((((-vs)/(pModel->N*pInst->vt))<(-2.3025850929940458e+02)))
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=(-1.0e-100*(((-((-vs_Vdi_b)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(0.5*(((-((-vs_Vdi_b)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(-((-vs_Vdi_b)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
tmp_Vsi_b=(-1.0e-100*(((-((-vs_Vsi_b)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(0.5*(((-((-vs_Vsi_b)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(-((-vs_Vsi_b)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
#endif
pInst->tmp=(1.0e-100/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e-100/(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(0.5*(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*(1.0+(((-2.3025850929940458e+02)-((-vs)/(pModel->N*pInst->vt)))*3.3333333333333333e-01)))))))))
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
tmp_Vg_b=0.0;
tmp_Vdi_b=(1.0e100*((((-vs_Vdi_b)/(pModel->N*pInst->vt))*(1.0+(0.5*((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(0.5*((((-vs_Vdi_b)/(pModel->N*pInst->vt))*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*((-vs_Vdi_b)/(pModel->N*pInst->vt))*3.3333333333333333e-01))))));
tmp_Vsi_b=(1.0e100*((((-vs_Vsi_b)/(pModel->N*pInst->vt))*(1.0+(0.5*((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(0.5*((((-vs_Vsi_b)/(pModel->N*pInst->vt))*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*((-vs_Vsi_b)/(pModel->N*pInst->vt))*3.3333333333333333e-01))))));
#endif
pInst->tmp=(1.0e100*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+(0.5*((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01))))))));
EXIT_IF_ISNAN((1.0e100*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+(0.5*((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*(1.0+((((-vs)/(pModel->N*pInst->vt))-2.3025850929940458e+02)*3.3333333333333333e-01)))))))))
}
}
}
#if defined(_DERIVATE) /* probe=V(g:b)V(si:b)V(di:b) ddxprobe= */
ibdj_Vg_b=(pInst->isat_d*tmp_Vg_b);
ibdj_Vsi_b=(pInst->isat_d*tmp_Vsi_b);
ibdj_Vdi_b=(pInst->isat_d*tmp_Vdi_b);
#endif
ibdj=(pInst->isat_d*(pInst->tmp-1));
EXIT_IF_ISNAN((pInst->isat_d*(pInst->tmp-1)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(g:b)V(si:b)V(di:b) ddxprobe= */
ibdj_Vg_b=0.0;
ibdj_Vsi_b=0.0;
ibdj_Vdi_b=0.0;
#endif
ibdj=0;
EXIT_IF_ISNAN(0)
}
}
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
qdt_Vg_b=((pInst->coxt*pInst->vt)*qd_Vg_b);
qdt_Vdi_b=((pInst->coxt*pInst->vt)*qd_Vdi_b);
qdt_Vsi_b=((pInst->coxt*pInst->vt)*qd_Vsi_b);
#endif
qdt=((pInst->coxt*pInst->vt)*qd);
EXIT_IF_ISNAN(((pInst->coxt*pInst->vt)*qd))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
qst_Vg_b=((pInst->coxt*pInst->vt)*qs_Vg_b);
qst_Vdi_b=((pInst->coxt*pInst->vt)*qs_Vdi_b);
qst_Vsi_b=((pInst->coxt*pInst->vt)*qs_Vsi_b);
#endif
qst=((pInst->coxt*pInst->vt)*qs);
EXIT_IF_ISNAN(((pInst->coxt*pInst->vt)*qs))
#endif
#if defined(_DYNAMIC)
qgt=((pInst->coxt*pInst->vt)*qg);
EXIT_IF_ISNAN(((pInst->coxt*pInst->vt)*qg))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(g:b)V(di:b)V(si:b) ddxprobe= */
qbt_Vg_b=((pInst->coxt*pInst->vt)*qb_Vg_b);
qbt_Vdi_b=((pInst->coxt*pInst->vt)*qb_Vdi_b);
qbt_Vsi_b=((pInst->coxt*pInst->vt)*qb_Vsi_b);
#endif
qbt=((pInst->coxt*pInst->vt)*qb);
EXIT_IF_ISNAN(((pInst->coxt*pInst->vt)*qb))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b:si) ddxprobe= */
cbs_Vb_si=0.0;
#endif
cbs=0;
EXIT_IF_ISNAN(0)
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b:di) ddxprobe= */
cbd_Vb_di=0.0;
#endif
cbd=0;
EXIT_IF_ISNAN(0)
#endif
#ifdef _DYNAMIC
if
((pInst->cbs0>0))
{
#ifdef _DYNAMIC
if
(((pModel->MTYPE*(NP(b)-NP(si)))>(pModel->FC*pModel->PB)))
{
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1-pModel->FC),pModel->MJ)
#if defined(_DERIVATE) /* probe=V(b:si) ddxprobe= */
cbs_Vb_si=(cbs_Vb_si+(((pInst->cbs0/d00_pow0)*(pModel->MJ*(pModel->MTYPE)))/(pModel->PB*(1-pModel->FC))));
#endif
cbs=(cbs+(((pInst->cbs0/d00_pow0)*(1+(pModel->MJ*((pModel->MTYPE*(NP(b)-NP(si)))-(pModel->PB*pModel->FC)))))/(pModel->PB*(1-pModel->FC))));
EXIT_IF_ISNAN((cbs+(((pInst->cbs0/d00_pow0)*(1+(pModel->MJ*((pModel->MTYPE*(NP(b)-NP(si)))-(pModel->PB*pModel->FC)))))/(pModel->PB*(1-pModel->FC)))))
}
#endif
}
else
{
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1-(pModel->MTYPE*(NP(b)-NP(si)))),pModel->MJ)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(1-(pModel->MTYPE*(NP(b)-NP(si)))),pModel->MJ)
#endif
#if defined(_DERIVATE) /* probe=V(b:si) ddxprobe= */
cbs_Vb_si=(cbs_Vb_si+(-pInst->cbs0*(d10_pow0*(-(pModel->MTYPE)))/d00_pow0/d00_pow0));
#endif
cbs=(cbs+(pInst->cbs0/d00_pow0));
EXIT_IF_ISNAN((cbs+(pInst->cbs0/d00_pow0)))
}
#endif
}
#endif /* if(...) */
}
#endif /* if(...) */
#ifdef _DYNAMIC
if
((pInst->cbd0>0))
{
#ifdef _DYNAMIC
if
(((pModel->MTYPE*(NP(b)-NP(di)))>(pModel->FC*pModel->PB)))
{
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1-pModel->FC),pModel->MJ)
#if defined(_DERIVATE) /* probe=V(b:di) ddxprobe= */
cbd_Vb_di=(cbd_Vb_di+(((pInst->cbd0/d00_pow0)*(pModel->MJ*(pModel->MTYPE)))/(pModel->PB*(1-pModel->FC))));
#endif
cbd=(cbd+(((pInst->cbd0/d00_pow0)*(1+(pModel->MJ*((pModel->MTYPE*(NP(b)-NP(di)))-(pModel->PB*pModel->FC)))))/(pModel->PB*(1-pModel->FC))));
EXIT_IF_ISNAN((cbd+(((pInst->cbd0/d00_pow0)*(1+(pModel->MJ*((pModel->MTYPE*(NP(b)-NP(di)))-(pModel->PB*pModel->FC)))))/(pModel->PB*(1-pModel->FC)))))
}
#endif
}
else
{
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1-(pModel->MTYPE*(NP(b)-NP(di)))),pModel->MJ)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(1-(pModel->MTYPE*(NP(b)-NP(di)))),pModel->MJ)
#endif
#if defined(_DERIVATE) /* probe=V(b:di) ddxprobe= */
cbd_Vb_di=(cbd_Vb_di+(-pInst->cbd0*(d10_pow0*(-(pModel->MTYPE)))/d00_pow0/d00_pow0));
#endif
cbd=(cbd+(pInst->cbd0/d00_pow0));
EXIT_IF_ISNAN((cbd+(pInst->cbd0/d00_pow0)))
}
#endif
}
#endif /* if(...) */
}
#endif /* if(...) */
#ifdef _DYNAMIC
if
((pInst->cbs0sw>0))
{
#ifdef _DYNAMIC
if
(((pModel->MTYPE*(NP(b)-NP(si)))>(pModel->FCSW*pModel->PBSW)))
{
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1-pModel->FCSW),pModel->MJSW)
#if defined(_DERIVATE) /* probe=V(b:si) ddxprobe= */
cbs_Vb_si=(cbs_Vb_si+(((pInst->cbs0sw/d00_pow0)*(pModel->MJSW*(pModel->MTYPE)))/(pModel->PBSW*(1-pModel->FCSW))));
#endif
cbs=(cbs+(((pInst->cbs0sw/d00_pow0)*(1+(pModel->MJSW*((pModel->MTYPE*(NP(b)-NP(si)))-(pModel->PBSW*pModel->FCSW)))))/(pModel->PBSW*(1-pModel->FCSW))));
EXIT_IF_ISNAN((cbs+(((pInst->cbs0sw/d00_pow0)*(1+(pModel->MJSW*((pModel->MTYPE*(NP(b)-NP(si)))-(pModel->PBSW*pModel->FCSW)))))/(pModel->PBSW*(1-pModel->FCSW)))))
}
#endif
}
else
{
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1-(pModel->MTYPE*(NP(b)-NP(si)))),pModel->MJSW)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(1-(pModel->MTYPE*(NP(b)-NP(si)))),pModel->MJSW)
#endif
#if defined(_DERIVATE) /* probe=V(b:si) ddxprobe= */
cbs_Vb_si=(cbs_Vb_si+(-pInst->cbs0sw*(d10_pow0*(-(pModel->MTYPE)))/d00_pow0/d00_pow0));
#endif
cbs=(cbs+(pInst->cbs0sw/d00_pow0));
EXIT_IF_ISNAN((cbs+(pInst->cbs0sw/d00_pow0)))
}
#endif
}
#endif /* if(...) */
}
#endif /* if(...) */
#ifdef _DYNAMIC
if
((pInst->cbd0sw>0))
{
#ifdef _DYNAMIC
if
(((pModel->MTYPE*(NP(b)-NP(di)))>(pModel->FCSW*pModel->PBSW)))
{
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1-pModel->FCSW),pModel->MJSW)
#if defined(_DERIVATE) /* probe=V(b:di) ddxprobe= */
cbd_Vb_di=(cbd_Vb_di+(((pInst->cbd0sw/d00_pow0)*(pModel->MJSW*(pModel->MTYPE)))/(pModel->PBSW*(1-pModel->FCSW))));
#endif
cbd=(cbd+(((pInst->cbd0sw/d00_pow0)*(1+(pModel->MJSW*((pModel->MTYPE*(NP(b)-NP(di)))-(pModel->PBSW*pModel->FCSW)))))/(pModel->PBSW*(1-pModel->FCSW))));
EXIT_IF_ISNAN((cbd+(((pInst->cbd0sw/d00_pow0)*(1+(pModel->MJSW*((pModel->MTYPE*(NP(b)-NP(di)))-(pModel->PBSW*pModel->FCSW)))))/(pModel->PBSW*(1-pModel->FCSW)))))
}
#endif
}
else
{
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1-(pModel->MTYPE*(NP(b)-NP(di)))),pModel->MJSW)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(1-(pModel->MTYPE*(NP(b)-NP(di)))),pModel->MJSW)
#endif
#if defined(_DERIVATE) /* probe=V(b:di) ddxprobe= */
cbd_Vb_di=(cbd_Vb_di+(-pInst->cbd0sw*(d10_pow0*(-(pModel->MTYPE)))/d00_pow0/d00_pow0));
#endif
cbd=(cbd+(pInst->cbd0sw/d00_pow0));
EXIT_IF_ISNAN((cbd+(pInst->cbd0sw/d00_pow0)))
}
#endif
}
#endif /* if(...) */
}
#endif /* if(...) */
}
{
  _load_static_residual2(di,si,((pModel->MTYPE*mode)*ids))
  _load_static_jacobian4(di,si,si,b,((pModel->MTYPE*mode)*ids_Vsi_b))
  _load_static_jacobian4(di,si,di,b,((pModel->MTYPE*mode)*ids_Vdi_b))
  _load_static_jacobian4(di,si,g,b,((pModel->MTYPE*mode)*ids_Vg_b))
if
((mode>0))
{
  _load_static_residual2(di,b,(pModel->MTYPE*idb))
  _load_static_jacobian4(di,b,si,b,(pModel->MTYPE*idb_Vsi_b))
  _load_static_jacobian4(di,b,di,b,(pModel->MTYPE*idb_Vdi_b))
  _load_static_jacobian4(di,b,g,b,(pModel->MTYPE*idb_Vg_b))
  _load_dynamic_residual2(di,g,(pModel->MTYPE*_DDT(qdt)))
  _load_dynamic_jacobian4(di,g,si,b,(pModel->MTYPE*qdt_Vsi_b))
  _load_dynamic_jacobian4(di,g,di,b,(pModel->MTYPE*qdt_Vdi_b))
  _load_dynamic_jacobian4(di,g,g,b,(pModel->MTYPE*qdt_Vg_b))
  _load_dynamic_residual2(si,g,(pModel->MTYPE*_DDT(qst)))
  _load_dynamic_jacobian4(si,g,si,b,(pModel->MTYPE*qst_Vsi_b))
  _load_dynamic_jacobian4(si,g,di,b,(pModel->MTYPE*qst_Vdi_b))
  _load_dynamic_jacobian4(si,g,g,b,(pModel->MTYPE*qst_Vg_b))
}
else
{
  _load_static_residual2(si,b,(pModel->MTYPE*idb))
  _load_static_jacobian4(si,b,si,b,(pModel->MTYPE*idb_Vsi_b))
  _load_static_jacobian4(si,b,di,b,(pModel->MTYPE*idb_Vdi_b))
  _load_static_jacobian4(si,b,g,b,(pModel->MTYPE*idb_Vg_b))
  _load_dynamic_residual2(si,g,(pModel->MTYPE*_DDT(qdt)))
  _load_dynamic_jacobian4(si,g,si,b,(pModel->MTYPE*qdt_Vsi_b))
  _load_dynamic_jacobian4(si,g,di,b,(pModel->MTYPE*qdt_Vdi_b))
  _load_dynamic_jacobian4(si,g,g,b,(pModel->MTYPE*qdt_Vg_b))
  _load_dynamic_residual2(di,g,(pModel->MTYPE*_DDT(qst)))
  _load_dynamic_jacobian4(di,g,si,b,(pModel->MTYPE*qst_Vsi_b))
  _load_dynamic_jacobian4(di,g,di,b,(pModel->MTYPE*qst_Vdi_b))
  _load_dynamic_jacobian4(di,g,g,b,(pModel->MTYPE*qst_Vg_b))
}
  _load_static_residual2(b,si,(pModel->MTYPE*ibsj))
  _load_static_jacobian4(b,si,si,b,(pModel->MTYPE*ibsj_Vsi_b))
  _load_static_jacobian4(b,si,di,b,(pModel->MTYPE*ibsj_Vdi_b))
  _load_static_jacobian4(b,si,g,b,(pModel->MTYPE*ibsj_Vg_b))
  _load_static_residual2(b,di,(pModel->MTYPE*ibdj))
  _load_static_jacobian4(b,di,di,b,(pModel->MTYPE*ibdj_Vdi_b))
  _load_static_jacobian4(b,di,si,b,(pModel->MTYPE*ibdj_Vsi_b))
  _load_static_jacobian4(b,di,g,b,(pModel->MTYPE*ibdj_Vg_b))
  _load_dynamic_residual2(b,g,(pModel->MTYPE*_DDT(qbt)))
  _load_dynamic_jacobian4(b,g,si,b,(pModel->MTYPE*qbt_Vsi_b))
  _load_dynamic_jacobian4(b,g,di,b,(pModel->MTYPE*qbt_Vdi_b))
  _load_dynamic_jacobian4(b,g,g,b,(pModel->MTYPE*qbt_Vg_b))
  _load_dynamic_residual2(g,si,(pInst->cgso*_DDT((NP(g)-NP(si)))))
  _load_dynamic_jacobian4(g,si,g,si,(pInst->cgso))
  _load_dynamic_residual2(g,di,(pInst->cgdo*_DDT((NP(g)-NP(di)))))
  _load_dynamic_jacobian4(g,di,g,di,(pInst->cgdo))
  _load_dynamic_residual2(g,b,(pInst->cgbo*_DDT((NP(g)-NP(b)))))
  _load_dynamic_jacobian4(g,b,g,b,(pInst->cgbo))
if
((pInst->RD>0))
{
  _load_static_residual2(d,di,((NP(d)-NP(di))/pInst->rd))
  _load_static_jacobian4(d,di,d,di,(1/pInst->rd))
}
else
{
  _load_static_residual2(d,di,0.0)
}
if
((pInst->RS>0))
{
  _load_static_residual2(s,si,((NP(s)-NP(si))/pInst->rs))
  _load_static_jacobian4(s,si,s,si,(1/pInst->rs))
}
else
{
  _load_static_residual2(s,si,0.0)
}
  _load_dynamic_residual2(b,si,(cbs*_DDT((NP(b)-NP(si)))))
  _load_dynamic_jacobian4(b,si,b,si,((cbs_Vb_si*_DDT((NP(b)-NP(si))))+cbs))
  _load_dynamic_residual2(b,di,(cbd*_DDT((NP(b)-NP(di)))))
  _load_dynamic_jacobian4(b,di,b,di,((cbd_Vb_di*_DDT((NP(b)-NP(di))))+cbd))
}
