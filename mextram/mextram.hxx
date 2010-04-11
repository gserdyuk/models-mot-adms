

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
pInst->fpnoise0=0.0; pInst->fenoise0=0.0;
pInst->fpnoise1=0.0; pInst->fenoise1=0.0;
pInst->fpnoise2=0.0; pInst->fenoise2=0.0;
pInst->fpnoise3=0.0; pInst->fenoise3=0.0;
pInst->fpnoise4=0.0; pInst->fenoise4=0.0;
pInst->fpnoise5=0.0; pInst->fenoise5=0.0;
pInst->wnoise0=0.0;
pInst->wnoise1=0.0;
pInst->wnoise2=0.0;
pInst->wnoise3=0.0;
pInst->wnoise4=0.0;
pInst->wnoise5=0.0;
pInst->wnoise6=0.0;
pInst->wnoise7=0.0;
pInst->wnoise8=0.0;
pInst->wnoise9=0.0;
pInst->wnoise10=0.0;
pInst->wnoise11=0.0;
pInst->wnoise12=0.0;
pInst->wnoise13=0.0;
pInst->wnoise14=0.0;
pInst->wnoise15=0.0;
pInst->wnoise16=0.0;
pInst->wnoise17=0.0;
pInst->wnoise18=0.0;
pInst->wnoise19=0.0;
double powerCCS_A;
#if defined(_DERIVATE)
double powerCCS_A_Vdt_GND;
double powerCCS_A_Vb2_e1;
double powerCCS_A_Vb2_c2;
double powerCCS_A_Vb2_c1;
double powerCCS_A_Vc1_c2;
#endif
double twoqIavl;
#if defined(_DERIVATE)
double twoqIavl_Vdt_GND;
double twoqIavl_Vb2_c1;
double twoqIavl_Vb2_c2;
double twoqIavl_Vc1_c2;
double twoqIavl_Vb2_e1;
#endif
double powerSubsCS_BS;
#if defined(_DERIVATE)
double powerSubsCS_BS_Vdt_GND;
double powerSubsCS_BS_Vb_c;
double powerSubsCS_BS_Vb_b1;
double powerSubsCS_BS_Vb1_b2;
double powerSubsCS_BS_Vc4_c1;
double powerSubsCS_BS_Vc3_c1;
double powerSubsCS_BS_Vc3_c4;
double powerSubsCS_BS_Vb2_e1;
double powerSubsCS_BS_Vb2_c2;
double powerSubsCS_BS_Vb2_c1;
double powerSubsCS_BS_Vc1_c2;
#endif
double powerSubsCS_B1S;
#if defined(_DERIVATE)
double powerSubsCS_B1S_Vdt_GND;
double powerSubsCS_B1S_Vb1_b2;
double powerSubsCS_B1S_Vb2_c2;
double powerSubsCS_B1S_Vc1_c2;
double powerSubsCS_B1S_Vc4_c1;
#endif
double powerExC1fMOD;
#if defined(_DERIVATE)
double powerExC1fMOD_Vdt_GND;
double powerExC1fMOD_Vb_c;
double powerExC1fMOD_Vb_b1;
double powerExC1fMOD_Vb1_b2;
double powerExC1fMOD_Vc4_c1;
double powerExC1fMOD_Vc3_c1;
double powerExC1fMOD_Vc3_c4;
double powerExC1fMOD_Vb2_e1;
double powerExC1fMOD_Vb2_c2;
double powerExC1fMOD_Vb2_c1;
double powerExC1fMOD_Vc1_c2;
#endif
double powerExCSMOD;
#if defined(_DERIVATE)
double powerExCSMOD_Vdt_GND;
double powerExCSMOD_Vb_c;
double powerExCSMOD_Vb_b1;
double powerExCSMOD_Vb1_b2;
double powerExCSMOD_Vc4_c1;
double powerExCSMOD_Vc3_c1;
double powerExCSMOD_Vc3_c4;
double powerExCSMOD_Vb2_e1;
double powerExCSMOD_Vb2_c2;
double powerExCSMOD_Vb2_c1;
double powerExCSMOD_Vc1_c2;
#endif
double powerExC1f;
#if defined(_DERIVATE)
double powerExC1f_Vdt_GND;
double powerExC1f_Vb1_b2;
double powerExC1f_Vb2_c2;
double powerExC1f_Vc1_c2;
double powerExC1f_Vc4_c1;
#endif
double powerExCS;
#if defined(_DERIVATE)
double powerExCS_Vdt_GND;
double powerExCS_Vb1_b2;
double powerExCS_Vb2_c2;
double powerExCS_Vc1_c2;
double powerExCS_Vc4_c1;
#endif
double powerRBC1f;
#if defined(_DERIVATE)
double powerRBC1f_Vdt_GND;
double powerRBC1f_Vb1_b2;
double powerRBC1f_Vb2_c2;
double powerRBC1f_Vc1_c2;
double powerRBC1f_Vc4_c1;
double powerRBC1f_Vb2_e1;
#endif
double powerRBCS;
#if defined(_DERIVATE)
double powerRBCS_Vdt_GND;
double powerRBCS_Vb1_b2;
double powerRBCS_Vb2_c2;
double powerRBCS_Vc1_c2;
double powerRBCS_Vc4_c1;
double powerRBCS_Vb2_e1;
#endif
double powerEBSC1f;
#if defined(_DERIVATE)
double powerEBSC1f_Vdt_GND;
double powerEBSC1f_Vb1_e1;
#endif
double powerEBSCS;
#if defined(_DERIVATE)
double powerEBSCS_Vdt_GND;
double powerEBSCS_Vb1_e1;
#endif
double powerFBC1fB2;
#if defined(_DERIVATE)
double powerFBC1fB2_Vdt_GND;
double powerFBC1fB2_Vb2_e1;
#endif
double exponentFBC1fB2;
double powerFBC1fB1;
#if defined(_DERIVATE)
double powerFBC1fB1_Vb2_c2;
double powerFBC1fB1_Vb2_c1;
double powerFBC1fB1_Vc1_c2;
double powerFBC1fB1_Vdt_GND;
double powerFBC1fB1_Vb2_e1;
#endif
double powerFBCS;
#if defined(_DERIVATE)
double powerFBCS_Vb2_c2;
double powerFBCS_Vb2_c1;
double powerFBCS_Vc1_c2;
double powerFBCS_Vdt_GND;
double powerFBCS_Vb2_e1;
#endif
double powerCCS;
#if defined(_DERIVATE)
double powerCCS_Vdt_GND;
double powerCCS_Vb2_e1;
double powerCCS_Vb2_c2;
double powerCCS_Vb2_c1;
double powerCCS_Vc1_c2;
#endif
double powerRBV;
#if defined(_DERIVATE)
double powerRBV_Vdt_GND;
double powerRBV_Vb_c;
double powerRBV_Vb_b1;
double powerRBV_Vb1_b2;
double powerRBV_Vc4_c1;
double powerRBV_Vc3_c1;
double powerRBV_Vc3_c4;
double powerRBV_Vb2_e1;
double powerRBV_Vb2_c2;
double powerRBV_Vb2_c1;
double powerRBV_Vc1_c2;
#endif
double powerRCCin;
#if defined(_DERIVATE)
double powerRCCin_Vdt_GND;
#endif
double powerRCCex;
#if defined(_DERIVATE)
double powerRCCex_Vdt_GND;
#endif
double powerRCCxx;
#if defined(_DERIVATE)
double powerRCCxx_Vdt_GND;
#endif
double powerRBC;
#if defined(_DERIVATE)
double powerRBC_Vdt_GND;
#endif
double powerREC;
#if defined(_DERIVATE)
double powerREC_Vdt_GND;
#endif
double common;
#if defined(_DERIVATE)
double common_Vdt_GND;
#endif
double cor_exp_2;
#if defined(_DERIVATE)
double cor_exp_2_Vdt_GND;
double cor_exp_2_Vb2_c1;
double cor_exp_2_Vb2_c2;
double cor_exp_2_Vc1_c2;
double cor_exp_2_Vnoi_e1;
#endif
double cor_exp_1;
#if defined(_DERIVATE)
double cor_exp_1_Vdt_GND;
double cor_exp_1_Vb2_c1;
double cor_exp_1_Vb2_c2;
double cor_exp_1_Vc1_c2;
double cor_exp_1_Vnoi_e1;
#endif
#if defined(_DYNAMIC)
double Qbe;
#if defined(_DERIVATE)
double Qbe_Vdt_GND;
double Qbe_Vb2_e1;
double Qbe_Vb_c;
double Qbe_Vb_b1;
double Qbe_Vb1_b2;
double Qbe_Vc4_c1;
double Qbe_Vc3_c1;
double Qbe_Vc3_c4;
double Qbe_Vb2_c2;
double Qbe_Vb2_c1;
double Qbe_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double Qbc;
#if defined(_DERIVATE)
double Qbc_Vdt_GND;
double Qbc_Vb2_e1;
double Qbc_Vb_c;
double Qbc_Vb_b1;
double Qbc_Vb1_b2;
double Qbc_Vc4_c1;
double Qbc_Vc3_c1;
double Qbc_Vc3_c4;
double Qbc_Vb2_c2;
double Qbc_Vb2_c1;
double Qbc_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double dQeVb2e1;
#if defined(_DERIVATE)
double dQeVb2e1_Vdt_GND;
double dQeVb2e1_Vb1_b2;
double dQeVb2e1_Vb2_c2;
double dQeVb2e1_Vc1_c2;
double dQeVb2e1_Vc4_c1;
double dQeVb2e1_Vb2_e1;
#endif
#endif
#if defined(_DYNAMIC)
double dQbeVb2e1;
#if defined(_DERIVATE)
double dQbeVb2e1_Vdt_GND;
double dQbeVb2e1_Vb_c;
double dQbeVb2e1_Vb_b1;
double dQbeVb2e1_Vb1_b2;
double dQbeVb2e1_Vc4_c1;
double dQbeVb2e1_Vc3_c1;
double dQbeVb2e1_Vc3_c4;
double dQbeVb2e1_Vb2_e1;
double dQbeVb2e1_Vb2_c2;
double dQbeVb2e1_Vb2_c1;
double dQbeVb2e1_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double dn0Vb2e1;
#if defined(_DERIVATE)
double dn0Vb2e1_Vdt_GND;
double dn0Vb2e1_Vb2_e1;
#endif
#endif
#if defined(_DYNAMIC)
double dQteVb2e1;
#if defined(_DERIVATE)
double dQteVb2e1_Vdt_GND;
double dQteVb2e1_Vb2_e1;
double dQteVb2e1_Vb2_c2;
double dQteVb2e1_Vb2_c1;
double dQteVb2e1_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double dVteVb2e1;
#if defined(_DERIVATE)
double dVteVb2e1_Vb2_e1;
double dVteVb2e1_Vdt_GND;
double dVteVb2e1_Vb2_c2;
double dVteVb2e1_Vb2_c1;
double dVteVb2e1_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double dVjeVb2e1;
#if defined(_DERIVATE)
double dVjeVb2e1_Vb2_e1;
double dVjeVb2e1_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double Vb2e1Vfe;
#if defined(_DERIVATE)
double Vb2e1Vfe_Vb2_e1;
double Vb2e1Vfe_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double dVteVje;
#if defined(_DERIVATE)
double dVteVje_Vb2_e1;
double dVteVje_Vdt_GND;
double dVteVje_Vb2_c2;
double dVteVje_Vb2_c1;
double dVteVje_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double Qb1b2;
#if defined(_DERIVATE)
double Qb1b2_Vb1_b2;
double Qb1b2_Vdt_GND;
double Qb1b2_Vb2_e1;
double Qb1b2_Vb2_c2;
double Qb1b2_Vb2_c1;
double Qb1b2_Vc1_c2;
double Qb1b2_Vb_c;
double Qb1b2_Vb_b1;
double Qb1b2_Vc4_c1;
double Qb1b2_Vc3_c1;
double Qb1b2_Vc3_c4;
#endif
#endif
#if defined(_DYNAMIC)
double XpWex;
#if defined(_DERIVATE)
double XpWex_Vb_c;
double XpWex_Vb_b1;
double XpWex_Vb1_b2;
double XpWex_Vb2_c2;
double XpWex_Vc1_c2;
double XpWex_Vc4_c1;
double XpWex_Vc3_c1;
double XpWex_Vc3_c4;
double XpWex_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double Xg2;
#if defined(_DERIVATE)
double Xg2_Vb_c;
double Xg2_Vb_b1;
double Xg2_Vb1_b2;
double Xg2_Vb2_c2;
double Xg2_Vc1_c2;
double Xg2_Vc4_c1;
double Xg2_Vc3_c1;
double Xg2_Vc3_c4;
double Xg2_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double XQex;
#if defined(_DERIVATE)
double XQex_Vdt_GND;
double XQex_Vb_c;
double XQex_Vb_b1;
double XQex_Vb1_b2;
double XQex_Vc4_c1;
double XQex_Vc3_c1;
double XQex_Vc3_c4;
double XQex_Vb2_e1;
double XQex_Vb2_c2;
double XQex_Vb2_c1;
double XQex_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double Qex;
#if defined(_DERIVATE)
double Qex_Vdt_GND;
double Qex_Vb1_b2;
double Qex_Vb2_c2;
double Qex_Vc1_c2;
double Qex_Vc4_c1;
#endif
#endif
#if defined(_DYNAMIC)
double Qepi;
#if defined(_DERIVATE)
double Qepi_Vdt_GND;
double Qepi_Vb2_c2;
double Qepi_Vb2_c1;
double Qepi_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double Qepi0;
#if defined(_DERIVATE)
double Qepi0_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double Qe;
#if defined(_DERIVATE)
double Qe_Vdt_GND;
double Qe_Vb1_b2;
double Qe_Vb2_c2;
double Qe_Vc1_c2;
double Qe_Vc4_c1;
double Qe_Vb2_e1;
#endif
#endif
#if defined(_DYNAMIC)
double Qe0;
#if defined(_DERIVATE)
double Qe0_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double Qts;
#if defined(_DERIVATE)
double Qts_Vdt_GND;
double Qts_Vs_c1;
double Qts_Vb_c;
double Qts_Vb_b1;
double Qts_Vc3_c1;
double Qts_Vc3_c4;
double Qts_Vb1_b2;
double Qts_Vc4_c1;
double Qts_Vb1_e1;
double Qts_Vb2_e1;
double Qts_Vb2_c2;
double Qts_Vb2_c1;
double Qts_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double Vjs;
#if defined(_DERIVATE)
double Vjs_Vs_c1;
double Vjs_Vdt_GND;
double Vjs_Vb_c;
double Vjs_Vb_b1;
double Vjs_Vc3_c1;
double Vjs_Vc3_c4;
double Vjs_Vb1_b2;
double Vjs_Vc4_c1;
double Vjs_Vb1_e1;
double Vjs_Vb2_e1;
double Vjs_Vb2_c2;
double Vjs_Vb2_c1;
double Vjs_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double Vfs;
#if defined(_DERIVATE)
double Vfs_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double a_VDS;
#if defined(_DERIVATE)
double a_VDS_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double XQtex;
#if defined(_DERIVATE)
double XQtex_Vdt_GND;
double XQtex_Vb_c;
double XQtex_Vb_b1;
double XQtex_Vb1_b2;
double XQtex_Vb2_c2;
double XQtex_Vc1_c2;
double XQtex_Vc4_c1;
double XQtex_Vc3_c1;
double XQtex_Vc3_c4;
double XQtex_Vb1_e1;
double XQtex_Vb2_e1;
double XQtex_Vb2_c1;
#endif
#endif
#if defined(_DYNAMIC)
double XVtexv;
#if defined(_DERIVATE)
double XVtexv_Vdt_GND;
double XVtexv_Vb_c;
double XVtexv_Vb_b1;
double XVtexv_Vb1_b2;
double XVtexv_Vb2_c2;
double XVtexv_Vc1_c2;
double XVtexv_Vc4_c1;
double XVtexv_Vc3_c1;
double XVtexv_Vc3_c4;
double XVtexv_Vb1_e1;
double XVtexv_Vb2_e1;
double XVtexv_Vb2_c1;
#endif
#endif
#if defined(_DYNAMIC)
double XVjcex;
#if defined(_DERIVATE)
double XVjcex_Vb_c;
double XVjcex_Vb_b1;
double XVjcex_Vb1_b2;
double XVjcex_Vb2_c2;
double XVjcex_Vc1_c2;
double XVjcex_Vc4_c1;
double XVjcex_Vc3_c1;
double XVjcex_Vc3_c4;
double XVjcex_Vdt_GND;
double XVjcex_Vb1_e1;
double XVjcex_Vb2_e1;
double XVjcex_Vb2_c1;
#endif
#endif
#if defined(_DYNAMIC)
double Qtex;
#if defined(_DERIVATE)
double Qtex_Vdt_GND;
double Qtex_Vb1_b2;
double Qtex_Vb2_c2;
double Qtex_Vc1_c2;
double Qtex_Vc4_c1;
double Qtex_Vb1_e1;
double Qtex_Vb2_e1;
double Qtex_Vb2_c1;
#endif
#endif
#if defined(_DYNAMIC)
double Vtexv;
#if defined(_DERIVATE)
double Vtexv_Vdt_GND;
double Vtexv_Vb1_b2;
double Vtexv_Vb2_c2;
double Vtexv_Vc1_c2;
double Vtexv_Vc4_c1;
double Vtexv_Vb1_e1;
double Vtexv_Vb2_e1;
double Vtexv_Vb2_c1;
#endif
#endif
#if defined(_DYNAMIC)
double Vjcex;
#if defined(_DERIVATE)
double Vjcex_Vb1_b2;
double Vjcex_Vb2_c2;
double Vjcex_Vc1_c2;
double Vjcex_Vc4_c1;
double Vjcex_Vdt_GND;
double Vjcex_Vb1_e1;
double Vjcex_Vb2_e1;
double Vjcex_Vb2_c1;
#endif
#endif
#if defined(_DYNAMIC)
double a_VDC;
#if defined(_DERIVATE)
double a_VDC_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double Qbc_qs;
#if defined(_DERIVATE)
double Qbc_qs_Vdt_GND;
double Qbc_qs_Vb2_c2;
double Qbc_qs_Vb2_c1;
double Qbc_qs_Vc1_c2;
double Qbc_qs_Vb_c;
double Qbc_qs_Vb_b1;
double Qbc_qs_Vb1_b2;
double Qbc_qs_Vc4_c1;
double Qbc_qs_Vc3_c1;
double Qbc_qs_Vc3_c4;
double Qbc_qs_Vb2_e1;
#endif
#endif
#if defined(_DYNAMIC)
double Qbe_qs;
#if defined(_DERIVATE)
double Qbe_qs_Vdt_GND;
double Qbe_qs_Vb2_e1;
double Qbe_qs_Vb_c;
double Qbe_qs_Vb_b1;
double Qbe_qs_Vb1_b2;
double Qbe_qs_Vc4_c1;
double Qbe_qs_Vc3_c1;
double Qbe_qs_Vc3_c4;
double Qbe_qs_Vb2_c2;
double Qbe_qs_Vb2_c1;
double Qbe_qs_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double Qb0;
#if defined(_DERIVATE)
double Qb0_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double Qtc;
#if defined(_DERIVATE)
double Qtc_Vdt_GND;
double Qtc_Vb2_c2;
double Qtc_Vb2_c1;
double Qtc_Vc1_c2;
double Qtc_Vb2_e1;
#endif
#endif
#if defined(_DYNAMIC)
double Qte_s;
#if defined(_DERIVATE)
double Qte_s_Vdt_GND;
double Qte_s_Vb1_e1;
double Qte_s_Vb2_e1;
double Qte_s_Vb2_c2;
double Qte_s_Vb2_c1;
double Qte_s_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double Vje_s;
#if defined(_DERIVATE)
double Vje_s_Vb1_e1;
double Vje_s_Vdt_GND;
double Vje_s_Vb2_e1;
double Vje_s_Vb2_c2;
double Vje_s_Vb2_c1;
double Vje_s_Vc1_c2;
#endif
#endif
#if defined(_DYNAMIC)
double Qte;
#if defined(_DERIVATE)
double Qte_Vdt_GND;
double Qte_Vb2_e1;
double Qte_Vb2_c2;
double Qte_Vb2_c1;
double Qte_Vc1_c2;
#endif
#endif
double power;
#if defined(_DERIVATE)
double power_Vdt_GND;
double power_Vb2_e1;
double power_Vb2_c2;
double power_Vb2_c1;
double power_Vc1_c2;
double power_Vb_c;
double power_Vb_b1;
double power_Vb1_b2;
double power_Vc4_c1;
double power_Vc3_c1;
double power_Vc3_c4;
double power_Ve_e1;
double power_Vb1_e1;
double power_Vs_c1;
#endif
double Vb2c2star;
#if defined(_DERIVATE)
double Vb2c2star_Vdt_GND;
double Vb2c2star_Vb2_c2;
double Vb2c2star_Vb2_c1;
double Vb2c2star_Vc1_c2;
#endif
double Gmax;
#if defined(_DERIVATE)
double Gmax_Vdt_GND;
double Gmax_Vb2_c2;
double Gmax_Vb2_c1;
double Gmax_Vc1_c2;
double Gmax_Vb_c;
double Gmax_Vb_b1;
double Gmax_Vb1_b2;
double Gmax_Vc4_c1;
double Gmax_Vc3_c1;
double Gmax_Vc3_c4;
double Gmax_Vb2_e1;
#endif
double lambda;
#if defined(_DERIVATE)
double lambda_Vdt_GND;
double lambda_Vb2_c2;
double lambda_Vb2_c1;
double lambda_Vc1_c2;
#endif
double EmEav_Em;
#if defined(_DERIVATE)
double EmEav_Em_Vdt_GND;
double EmEav_Em_Vb2_c1;
double EmEav_Em_Vb2_c2;
double EmEav_Em_Vc1_c2;
#endif
double Ew;
#if defined(_DERIVATE)
double Ew_Vdt_GND;
double Ew_Vb2_c1;
double Ew_Vb2_c2;
double Ew_Vc1_c2;
#endif
double Efi;
double SHw;
#if defined(_DERIVATE)
double SHw_Vb2_c2;
double SHw_Vb2_c1;
double SHw_Vc1_c2;
double SHw_Vdt_GND;
#endif
double Em;
#if defined(_DERIVATE)
double Em_Vdt_GND;
double Em_Vb2_c1;
double Em_Vb2_c2;
double Em_Vc1_c2;
#endif
double E0;
#if defined(_DERIVATE)
double E0_Vdt_GND;
double E0_Vb2_c1;
double E0_Vb2_c2;
double E0_Vc1_c2;
#endif
double Eav;
#if defined(_DERIVATE)
double Eav_Vdt_GND;
double Eav_Vb2_c1;
double Eav_Vb2_c2;
double Eav_Vc1_c2;
#endif
double Wd;
#if defined(_DERIVATE)
double Wd_Vdt_GND;
double Wd_Vb2_c2;
double Wd_Vb2_c1;
double Wd_Vc1_c2;
#endif
double xi_w1;
#if defined(_DERIVATE)
double xi_w1_Vb2_c2;
double xi_w1_Vb2_c1;
double xi_w1_Vc1_c2;
double xi_w1_Vdt_GND;
#endif
double Weff;
#if defined(_DERIVATE)
double Weff_Vb2_c2;
double Weff_Vb2_c1;
double Weff_Vc1_c2;
double Weff_Vdt_GND;
#endif
double xd;
#if defined(_DERIVATE)
double xd_Vdt_GND;
double xd_Vb2_c2;
double xd_Vb2_c1;
double xd_Vc1_c2;
#endif
double dEdx0;
#if defined(_DERIVATE)
double Gem_Vdt_GND;
double Gem_Vb2_c1;
double Gem_Vb2_c2;
double Gem_Vc1_c2;
#endif
double Iavl;
#if defined(_DERIVATE)
double Iavl_Vdt_GND;
double Iavl_Vb2_c2;
double Iavl_Vb2_c1;
double Iavl_Vc1_c2;
double Iavl_Vb_c;
double Iavl_Vb_b1;
double Iavl_Vb1_b2;
double Iavl_Vc4_c1;
double Iavl_Vc3_c1;
double Iavl_Vc3_c4;
double Iavl_Vb2_e1;
#endif
double Ib1b2;
#if defined(_DERIVATE)
double Ib1b2_Vdt_GND;
double Ib1b2_Vb1_b2;
double Ib1b2_Vb_c;
double Ib1b2_Vb_b1;
double Ib1b2_Vc4_c1;
double Ib1b2_Vc3_c1;
double Ib1b2_Vc3_c4;
double Ib1b2_Vb2_e1;
double Ib1b2_Vb2_c2;
double Ib1b2_Vb2_c1;
double Ib1b2_Vc1_c2;
#endif
#if defined(_DERIVATE)
double Rb2_Vdt_GND;
double Rb2_Vb_c;
double Rb2_Vb_b1;
double Rb2_Vb1_b2;
double Rb2_Vc4_c1;
double Rb2_Vc3_c1;
double Rb2_Vc3_c4;
double Rb2_Vb2_e1;
double Rb2_Vb2_c2;
double Rb2_Vb2_c1;
double Rb2_Vc1_c2;
#endif
double qBQ;
#if defined(_DERIVATE)
double qBQ_Vdt_GND;
double qBQ_Vb_c;
double qBQ_Vb_b1;
double qBQ_Vb1_b2;
double qBQ_Vc4_c1;
double qBQ_Vc3_c1;
double qBQ_Vc3_c4;
double qBQ_Vb2_e1;
double qBQ_Vb2_c2;
double qBQ_Vb2_c1;
double qBQ_Vc1_c2;
#endif
double q1Q;
#if defined(_DERIVATE)
double q1Q_Vdt_GND;
double q1Q_Vb_c;
double q1Q_Vb_b1;
double q1Q_Vb1_b2;
double q1Q_Vc4_c1;
double q1Q_Vc3_c1;
double q1Q_Vc3_c4;
double q1Q_Vb2_e1;
double q1Q_Vb2_c2;
double q1Q_Vb2_c1;
double q1Q_Vc1_c2;
#endif
double q0Q;
#if defined(_DERIVATE)
double q0Q_Vdt_GND;
double q0Q_Vb2_e1;
double q0Q_Vb2_c2;
double q0Q_Vb2_c1;
double q0Q_Vc1_c2;
#endif
double Fex;
#if defined(_DERIVATE)
double Fex_Vdt_GND;
double Fex_Vb_c;
double Fex_Vb_b1;
double Fex_Vb1_b2;
double Fex_Vc4_c1;
double Fex_Vc3_c1;
double Fex_Vc3_c4;
double Fex_Vb2_e1;
double Fex_Vb2_c2;
double Fex_Vb2_c1;
double Fex_Vc1_c2;
#endif
double VBex;
#if defined(_DERIVATE)
double VBex_Vdt_GND;
double VBex_Vb_c;
double VBex_Vb_b1;
double VBex_Vb1_b2;
double VBex_Vc4_c1;
double VBex_Vc3_c1;
double VBex_Vc3_c4;
double VBex_Vb2_e1;
double VBex_Vb2_c2;
double VBex_Vb2_c1;
double VBex_Vc1_c2;
#endif
double vdif;
#if defined(_DERIVATE)
double vdif_Vb_c;
double vdif_Vb_b1;
double vdif_Vb1_b2;
double vdif_Vb2_c2;
double vdif_Vc1_c2;
double vdif_Vc4_c1;
double vdif_Vc3_c1;
double vdif_Vc3_c4;
double vdif_Vdt_GND;
#endif
double Vex;
#if defined(_DERIVATE)
double Vex_Vdt_GND;
#endif
double Vex_bias;
#if defined(_DERIVATE)
double Vex_bias_Vdt_GND;
#endif
double XIMsub;
#if defined(_DERIVATE)
double XIMsub_Vdt_GND;
double XIMsub_Vb_c;
double XIMsub_Vb_b1;
double XIMsub_Vb1_b2;
double XIMsub_Vb2_c2;
double XIMsub_Vc1_c2;
double XIMsub_Vc4_c1;
double XIMsub_Vc3_c1;
double XIMsub_Vc3_c4;
#endif
double XIMex;
#if defined(_DERIVATE)
double XIMex_Vdt_GND;
double XIMex_Vb_c;
double XIMex_Vb_b1;
double XIMex_Vb1_b2;
double XIMex_Vb2_c2;
double XIMex_Vc1_c2;
double XIMex_Vc4_c1;
double XIMex_Vc3_c1;
double XIMex_Vc3_c4;
#endif
double XnBex;
#if defined(_DERIVATE)
double XnBex_Vdt_GND;
double XnBex_Vb_c;
double XnBex_Vb_b1;
double XnBex_Vb1_b2;
double XnBex_Vb2_c2;
double XnBex_Vc1_c2;
double XnBex_Vc4_c1;
double XnBex_Vc3_c1;
double XnBex_Vc3_c4;
#endif
double Xg1;
#if defined(_DERIVATE)
double Xg1_Vdt_GND;
double Xg1_Vb_c;
double Xg1_Vb_b1;
double Xg1_Vb1_b2;
double Xg1_Vb2_c2;
double Xg1_Vc1_c2;
double Xg1_Vc4_c1;
double Xg1_Vc3_c1;
double Xg1_Vc3_c4;
#endif
#if defined(_DERIVATE)
double XIsub_Vdt_GND;
double XIsub_Vb_c;
double XIsub_Vb_b1;
double XIsub_Vb1_b2;
double XIsub_Vc4_c1;
double XIsub_Vc3_c1;
double XIsub_Vc3_c4;
double XIsub_Vb2_e1;
double XIsub_Vb2_c2;
double XIsub_Vb2_c1;
double XIsub_Vc1_c2;
#endif
#if defined(_DERIVATE)
double XIex_Vdt_GND;
double XIex_Vb_c;
double XIex_Vb_b1;
double XIex_Vb1_b2;
double XIex_Vc4_c1;
double XIex_Vc3_c1;
double XIex_Vc3_c4;
double XIex_Vb2_e1;
double XIex_Vb2_c2;
double XIex_Vb2_c1;
double XIex_Vc1_c2;
#endif
double Isf;
#if defined(_DERIVATE)
double Isf_Vdt_GND;
double Isf_Vs_c1;
#endif
#if defined(_DERIVATE)
double Isub_Vdt_GND;
double Isub_Vb1_b2;
double Isub_Vb2_c2;
double Isub_Vc1_c2;
double Isub_Vc4_c1;
#endif
#if defined(_DERIVATE)
double Iex_Vdt_GND;
double Iex_Vb1_b2;
double Iex_Vb2_c2;
double Iex_Vc1_c2;
double Iex_Vc4_c1;
#endif
#if defined(_DYNAMIC)
double pWex;
#if defined(_DERIVATE)
double pWex_Vb1_b2;
double pWex_Vb2_c2;
double pWex_Vc1_c2;
double pWex_Vc4_c1;
double pWex_Vdt_GND;
#endif
#endif
double nBex;
#if defined(_DERIVATE)
double nBex_Vdt_GND;
double nBex_Vb1_b2;
double nBex_Vb2_c2;
double nBex_Vc1_c2;
double nBex_Vc4_c1;
#endif
#if defined(_DYNAMIC)
double g2;
#if defined(_DERIVATE)
double g2_Vb1_b2;
double g2_Vb2_c2;
double g2_Vc1_c2;
double g2_Vc4_c1;
double g2_Vdt_GND;
#endif
#endif
double g1;
#if defined(_DERIVATE)
double g1_Vdt_GND;
double g1_Vb1_b2;
double g1_Vb2_c2;
double g1_Vc1_c2;
double g1_Vc4_c1;
#endif
#if defined(_DERIVATE)
double Ib3_Vdt_GND;
double Ib3_Vb1_b2;
double Ib3_Vb2_c2;
double Ib3_Vc1_c2;
double Ib3_Vc4_c1;
double Ib3_Vb2_e1;
#endif
#if defined(_DERIVATE)
double Ib2_Vdt_GND;
double Ib2_Vb2_e1;
#endif
double tmpExp;
#if defined(_DERIVATE)
double tmpExp_Vb1_b2;
double tmpExp_Vb2_c2;
double tmpExp_Vc1_c2;
double tmpExp_Vc4_c1;
double tmpExp_Vb2_e1;
double tmpExp_Vdt_GND;
#endif
#if defined(_DERIVATE)
double Ib1_s_Vdt_GND;
double Ib1_s_Vb1_e1;
#endif
#if defined(_DERIVATE)
double Ib1_Vb2_c2;
double Ib1_Vb2_c1;
double Ib1_Vc1_c2;
double Ib1_Vdt_GND;
double Ib1_Vb2_e1;
#endif
double Ibf0;
#if defined(_DERIVATE)
double Ibf0_Vdt_GND;
#endif
double In;
#if defined(_DERIVATE)
double In_Vdt_GND;
double In_Vb2_e1;
double In_Vb2_c2;
double In_Vb2_c1;
double In_Vc1_c2;
#endif
#if defined(_DERIVATE)
double If_Vdt_GND;
double If_Vb2_e1;
#endif
#if defined(_DERIVATE)
double Ir_Vdt_GND;
double Ir_Vb2_c2;
double Ir_Vb2_c1;
double Ir_Vc1_c2;
#endif
#if defined(_DERIVATE)
double qBI_Vdt_GND;
double qBI_Vb2_e1;
double qBI_Vb2_c2;
double qBI_Vb2_c1;
double qBI_Vc1_c2;
#endif
double q1I;
#if defined(_DERIVATE)
double q1I_Vdt_GND;
double q1I_Vb2_e1;
double q1I_Vb2_c2;
double q1I_Vb2_c1;
double q1I_Vc1_c2;
#endif
double termC;
#if defined(_DERIVATE)
double termC_Vdt_GND;
double termC_Vb2_c2;
double termC_Vb2_c1;
double termC_Vc1_c2;
double termC_Vb2_e1;
#endif
double termE;
#if defined(_DERIVATE)
double termE_Vdt_GND;
double termE_Vb2_e1;
double termE_Vb2_c2;
double termE_Vb2_c1;
double termE_Vc1_c2;
#endif
double q0I;
#if defined(_DERIVATE)
double q0I_Vdt_GND;
double q0I_Vb2_e1;
double q0I_Vb2_c2;
double q0I_Vb2_c1;
double q0I_Vc1_c2;
#endif
double nB;
#if defined(_DERIVATE)
double nB_Vdt_GND;
double nB_Vb2_c2;
double nB_Vb2_c1;
double nB_Vc1_c2;
#endif
double f2;
#if defined(_DERIVATE)
double f2_Vdt_GND;
double f2_Vb2_c2;
double f2_Vb2_c1;
double f2_Vc1_c2;
#endif
double n0;
#if defined(_DERIVATE)
double n0_Vdt_GND;
double n0_Vb2_e1;
#endif
double f1;
#if defined(_DERIVATE)
double f1_Vdt_GND;
double f1_Vb2_e1;
#endif
double If0;
#if defined(_DERIVATE)
double If0_Vdt_GND;
#endif
double Vtc;
#if defined(_DERIVATE)
double Vtc_Vdt_GND;
double Vtc_Vb2_c2;
double Vtc_Vb2_c1;
double Vtc_Vc1_c2;
double Vtc_Vb2_e1;
#endif
double Vcv;
#if defined(_DERIVATE)
double Vcv_Vdt_GND;
double Vcv_Vb2_c2;
double Vcv_Vb2_c1;
double Vcv_Vc1_c2;
double Vcv_Vb2_e1;
#endif
double fI;
#if defined(_DERIVATE)
double fI_Vdt_GND;
double fI_Vb2_c2;
double fI_Vb2_c1;
double fI_Vc1_c2;
#endif
double Vjc;
#if defined(_DERIVATE)
double Vjc_Vb2_c1;
double Vjc_Vdt_GND;
double Vjc_Vb2_c2;
double Vjc_Vc1_c2;
double Vjc_Vb2_e1;
#endif
double Vfc;
#if defined(_DERIVATE)
double Vfc_Vdt_GND;
#endif
double bjc;
#if defined(_DERIVATE)
double bjc_Vdt_GND;
#endif
double Vjunc;
#if defined(_DERIVATE)
double Vjunc_Vb2_c1;
double Vjunc_Vdt_GND;
double Vjunc_Vb2_c2;
double Vjunc_Vc1_c2;
#endif
double Vte;
#if defined(_DERIVATE)
double Vte_Vdt_GND;
double Vte_Vb2_e1;
double Vte_Vb2_c2;
double Vte_Vb2_c1;
double Vte_Vc1_c2;
#endif
double Vje;
#if defined(_DERIVATE)
double Vje_Vb2_e1;
double Vje_Vdt_GND;
double Vje_Vb2_c2;
double Vje_Vb2_c1;
double Vje_Vc1_c2;
#endif
double a_VDE;
#if defined(_DERIVATE)
double a_VDE_Vdt_GND;
#endif
double Vfe;
#if defined(_DERIVATE)
double Vfe_Vdt_GND;
#endif
double pav;
#if defined(_DERIVATE)
double pav_Vdt_GND;
double pav_Vb2_c2;
double pav_Vb2_c1;
double pav_Vc1_c2;
#endif
double Icap_IHC;
#if defined(_DERIVATE)
double Icap_IHC_Vdt_GND;
double Icap_IHC_Vb2_c2;
double Icap_IHC_Vb2_c1;
double Icap_IHC_Vc1_c2;
#endif
double Icap;
#if defined(_DERIVATE)
double Icap_Vdt_GND;
double Icap_Vb2_c2;
double Icap_Vb2_c1;
double Icap_Vc1_c2;
#endif
double Vch;
#if defined(_DERIVATE)
double Vch_Vdt_GND;
double Vch_Vb2_c2;
double Vch_Vb2_c1;
double Vch_Vc1_c2;
#endif
double Vxi0;
#if defined(_DERIVATE)
double Vxi0_Vdt_GND;
double Vxi0_Vb2_c2;
double Vxi0_Vb2_c1;
double Vxi0_Vc1_c2;
#endif
double B2;
#if defined(_DERIVATE)
double B2_Vdt_GND;
double B2_Vb2_c2;
double B2_Vb2_c1;
double B2_Vc1_c2;
#endif
double B1;
#if defined(_DERIVATE)
double B1_Vdt_GND;
double B1_Vb2_c2;
double B1_Vb2_c1;
double B1_Vc1_c2;
#endif
double eVb2c2star;
#if defined(_DERIVATE)
double eVb2c2star_Vdt_GND;
double eVb2c2star_Vb2_c2;
double eVb2c2star_Vb2_c1;
double eVb2c2star_Vc1_c2;
#endif
double p0star;
#if defined(_DERIVATE)
double p0star_Vdt_GND;
double p0star_Vb2_c2;
double p0star_Vb2_c1;
double p0star_Vc1_c2;
#endif
double sqr_arg;
#if defined(_DERIVATE)
double sqr_arg_Vdt_GND;
double sqr_arg_Vb2_c2;
double sqr_arg_Vb2_c1;
double sqr_arg_Vc1_c2;
#endif
double gp02;
#if defined(_DERIVATE)
double gp02_Vdt_GND;
double gp02_Vb2_c2;
double gp02_Vb2_c1;
double gp02_Vc1_c2;
#endif
double gp0_help;
#if defined(_DERIVATE)
double gp0_help_Vdt_GND;
double gp0_help_Vb2_c2;
double gp0_help_Vb2_c1;
double gp0_help_Vc1_c2;
#endif
double gp0;
#if defined(_DERIVATE)
double gp0_Vdt_GND;
double gp0_Vb2_c2;
double gp0_Vb2_c1;
double gp0_Vc1_c2;
#endif
double xi_w;
#if defined(_DERIVATE)
double xi_w_Vb2_c2;
double xi_w_Vb2_c1;
double xi_w_Vc1_c2;
double xi_w_Vdt_GND;
#endif
double yi;
#if defined(_DERIVATE)
double yi_Vb2_c2;
double yi_Vb2_c1;
double yi_Vc1_c2;
double yi_Vdt_GND;
#endif
double vyi;
#if defined(_DERIVATE)
double vyi_Vdt_GND;
double vyi_Vb2_c2;
double vyi_Vb2_c1;
double vyi_Vc1_c2;
#endif
double alpha;
#if defined(_DERIVATE)
double alpha_Vb2_c2;
double alpha_Vb2_c1;
double alpha_Vc1_c2;
double alpha_Vdt_GND;
#endif
double alpha1;
#if defined(_DERIVATE)
double alpha1_Vb2_c2;
double alpha1_Vb2_c1;
double alpha1_Vc1_c2;
double alpha1_Vdt_GND;
#endif
double Ic1c2_Iqs;
#if defined(_DERIVATE)
double Ic1c2_Iqs_Vdt_GND;
double Ic1c2_Iqs_Vb2_c2;
double Ic1c2_Iqs_Vb2_c1;
double Ic1c2_Iqs_Vc1_c2;
#endif
double Iqs;
#if defined(_DERIVATE)
double Iqs_Vdt_GND;
double Iqs_Vb2_c2;
double Iqs_Vb2_c1;
double Iqs_Vc1_c2;
#endif
double Vqs;
#if defined(_DERIVATE)
double Vqs_Vdt_GND;
double Vqs_Vb2_c2;
double Vqs_Vb2_c1;
double Vqs_Vc1_c2;
#endif
double x2;
#if defined(_DERIVATE)
double x2_Vb_c;
double x2_Vb_b1;
double x2_Vb1_b2;
double x2_Vc4_c1;
double x2_Vc3_c1;
double x2_Vc3_c4;
double x2_Vb2_e1;
double x2_Vdt_GND;
double x2_Vb2_c2;
double x2_Vb2_c1;
double x2_Vc1_c2;
#endif
double eps2;
#if defined(_DERIVATE)
double eps2_Vdt_GND;
#endif
double eps_VDC;
#if defined(_DERIVATE)
double eps_VDC_Vdt_GND;
#endif
double Vqs_th;
#if defined(_DERIVATE)
double Vqs_th_Vdt_GND;
double Vqs_th_Vb2_c2;
double Vqs_th_Vb2_c1;
double Vqs_th_Vc1_c2;
#endif
double tmpV;
#if defined(_DERIVATE)
double tmpV_Vb2_c1;
#endif
double Ic1c2;
#if defined(_DERIVATE)
double Ic1c2_Vdt_GND;
double Ic1c2_Vb2_c2;
double Ic1c2_Vb2_c1;
double Ic1c2_Vc1_c2;
#endif
double Ec;
#if defined(_DERIVATE)
double Ec_Vdt_GND;
double Ec_Vb2_c2;
double Ec_Vb2_c1;
#endif
double pW;
#if defined(_DERIVATE)
double pW_Vb2_c1;
double pW_Vdt_GND;
#endif
double Kw;
#if defined(_DERIVATE)
double Kw_Vb2_c1;
double Kw_Vdt_GND;
#endif
double K0;
#if defined(_DERIVATE)
double K0_Vb2_c2;
double K0_Vdt_GND;
#endif
double eVb2c1VDC;
#if defined(_DERIVATE)
double eVb2c1VDC_Vb2_c1;
double eVb2c1VDC_Vdt_GND;
#endif
double eVb2c2VDC;
#if defined(_DERIVATE)
double eVb2c2VDC_Vb2_c2;
double eVb2c2VDC_Vdt_GND;
#endif
#if defined(_DYNAMIC)
double eVb1c4VDC;
#if defined(_DERIVATE)
double eVb1c4VDC_Vb1_b2;
double eVb1c4VDC_Vb2_c2;
double eVb1c4VDC_Vc1_c2;
double eVb1c4VDC_Vc4_c1;
double eVb1c4VDC_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double eVbc3VDC;
#if defined(_DERIVATE)
double eVbc3VDC_Vb_c;
double eVbc3VDC_Vb_b1;
double eVbc3VDC_Vb1_b2;
double eVbc3VDC_Vb2_c2;
double eVbc3VDC_Vc1_c2;
double eVbc3VDC_Vc4_c1;
double eVbc3VDC_Vc3_c1;
double eVbc3VDC_Vc3_c4;
double eVbc3VDC_Vdt_GND;
#endif
#endif
double eVsc1;
#if defined(_DERIVATE)
double eVsc1_Vs_c1;
double eVsc1_Vdt_GND;
#endif
double eVbc3;
#if defined(_DERIVATE)
double eVbc3_Vb_c;
double eVbc3_Vb_b1;
double eVbc3_Vb1_b2;
double eVbc3_Vb2_c2;
double eVbc3_Vc1_c2;
double eVbc3_Vc4_c1;
double eVbc3_Vc3_c1;
double eVbc3_Vc3_c4;
double eVbc3_Vdt_GND;
#endif
#if defined(_DERIVATE)
double eVb1b2_Vb1_b2;
double eVb1b2_Vdt_GND;
#endif
double eVb1c4;
#if defined(_DERIVATE)
double eVb1c4_Vb1_b2;
double eVb1c4_Vb2_c2;
double eVb1c4_Vc1_c2;
double eVb1c4_Vc4_c1;
double eVb1c4_Vdt_GND;
#endif
double eVb1e1;
#if defined(_DERIVATE)
double eVb1e1_Vb1_e1;
double eVb1e1_Vdt_GND;
#endif
double eVb2e1;
#if defined(_DERIVATE)
double eVb2e1_Vb2_e1;
double eVb2e1_Vdt_GND;
#endif
double expl;
double eVb2c2;
#if defined(_DERIVATE)
double eVb2c2_Vb2_c2;
double eVb2c2_Vdt_GND;
#endif
double Vsc3;
#if defined(_DERIVATE)
double Vsc3_Vs_c1;
double Vsc3_Vc4_c1;
double Vsc3_Vc3_c1;
double Vsc3_Vc3_c4;
#endif
double Vsc4;
#if defined(_DERIVATE)
double Vsc4_Vs_c1;
double Vsc4_Vc4_c1;
#endif
double Vbc3;
#if defined(_DERIVATE)
double Vbc3_Vb_c;
double Vbc3_Vb_b1;
double Vbc3_Vb1_b2;
double Vbc3_Vb2_c2;
double Vbc3_Vc1_c2;
double Vbc3_Vc4_c1;
double Vbc3_Vc3_c1;
double Vbc3_Vc3_c4;
#endif
double Vcc3;
#if defined(_DERIVATE)
double Vcc3_Vb_c;
double Vcc3_Vb_b1;
double Vcc3_Vb1_b2;
double Vcc3_Vb2_c2;
double Vcc3_Vc1_c2;
double Vcc3_Vc4_c1;
double Vcc3_Vc3_c1;
double Vcc3_Vc3_c4;
#endif
double Vb1c4;
#if defined(_DERIVATE)
double Vb1c4_Vb1_b2;
double Vb1c4_Vb2_c2;
double Vb1c4_Vc1_c2;
double Vb1c4_Vc4_c1;
#endif
double Vc3c4;
#if defined(_DERIVATE)
double Vc3c4_Vc3_c1;
double Vc3c4_Vc3_c4;
#endif
double Vc4c1;
#if defined(_DERIVATE)
double Vc4c1_Vc4_c1;
#endif
double Vbc;
#if defined(_DERIVATE)
double Vbc_Vb_c;
#endif
#if defined(_DYNAMIC)
double Vbe;
#if defined(_DERIVATE)
double Vbe_Vb_e;
#endif
#endif
double Vbb1;
#if defined(_DERIVATE)
double Vbb1_Vb_b1;
#endif
double Vee1;
#if defined(_DERIVATE)
double Vee1_Ve_e1;
#endif
double Vc1c2;
#if defined(_DERIVATE)
double Vc1c2_Vc1_c2;
#endif
double Vsc1;
#if defined(_DERIVATE)
double Vsc1_Vs_c1;
#endif
double Vb1b2;
#if defined(_DERIVATE)
double Vb1b2_Vb1_b2;
#endif
double Vb1e1;
#if defined(_DERIVATE)
double Vb1e1_Vb1_e1;
#endif
double Vb2e1;
#if defined(_DERIVATE)
double Vb2e1_Vb2_e1;
#endif
double Vb2c2;
#if defined(_DERIVATE)
double Vb2c2_Vb2_c2;
#endif
double Vb2c1;
#if defined(_DERIVATE)
double Vb2c1_Vb2_c1;
#endif
double RTH_Tamb_M;
#if defined(_DERIVATE)
double GCCin_TM_Vdt_GND;
#endif
#if defined(_DERIVATE)
double GCCex_TM_Vdt_GND;
#endif
#if defined(_DERIVATE)
double GCCxx_TM_Vdt_GND;
#endif
double RCV_TM;
#if defined(_DERIVATE)
double RCV_TM_Vdt_GND;
#endif
double RCCin_TM;
#if defined(_DERIVATE)
double RCCin_TM_Vdt_GND;
#endif
double RCCex_TM;
#if defined(_DERIVATE)
double RCCex_TM_Vdt_GND;
#endif
double RCCxx_TM;
#if defined(_DERIVATE)
double RCCxx_TM_Vdt_GND;
#endif
double RBV_TM;
#if defined(_DERIVATE)
double RBV_TM_Vdt_GND;
#endif
#if defined(_DERIVATE)
double RBC_TM_Vdt_GND;
#endif
#if defined(_DERIVATE)
double RE_TM_Vdt_GND;
#endif
#if defined(_DYNAMIC)
double CJS_TM;
#if defined(_DERIVATE)
double CJS_TM_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double CJC_TM;
#if defined(_DERIVATE)
double CJC_TM_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double CJE_TM;
#if defined(_DERIVATE)
double CJE_TM_Vdt_GND;
#endif
#endif
double IKS_TM;
#if defined(_DERIVATE)
double IKS_TM_Vdt_GND;
#endif
double ISS_TM;
#if defined(_DERIVATE)
double ISS_TM_Vdt_GND;
#endif
double IHC_M;
double IBR_TM;
#if defined(_DERIVATE)
double IBR_TM_Vdt_GND;
#endif
double IBF_TM;
#if defined(_DERIVATE)
double IBF_TM_Vdt_GND;
#endif
double IK_TM;
#if defined(_DERIVATE)
double IK_TM_Vdt_GND;
#endif
double IS_TM;
#if defined(_DERIVATE)
double IS_TM_Vdt_GND;
#endif
double RTH_Tamb;
double DEG_T;
#if defined(_DERIVATE)
double DEG_T_Vdt_GND;
#endif
double BnT;
#if defined(_DERIVATE)
double BnT_Vdt_GND;
#endif
double Tk300;
#if defined(_DERIVATE)
double Tk300_Vdt_GND;
#endif
#if defined(_DYNAMIC)
double TAUR_T;
#if defined(_DERIVATE)
double TAUR_T_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double TEPI_T;
#if defined(_DERIVATE)
double TEPI_T_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double TAUB_T;
#if defined(_DERIVATE)
double TAUB_T_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double TAUE_T;
#if defined(_DERIVATE)
double TAUE_T_Vdt_GND;
#endif
#endif
double IKS_T;
#if defined(_DERIVATE)
double IKS_T_Vdt_GND;
#endif
double ISS_T;
#if defined(_DERIVATE)
double ISS_T_Vdt_GND;
#endif
double VER_T;
#if defined(_DERIVATE)
double VER_T_Vdt_GND;
#endif
double VEF_T;
#if defined(_DERIVATE)
double VEF_T_Vdt_GND;
#endif
double IBR_T;
#if defined(_DERIVATE)
double IBR_T_Vdt_GND;
#endif
double IBF_T;
#if defined(_DERIVATE)
double IBF_T_Vdt_GND;
#endif
double IK_T;
#if defined(_DERIVATE)
double IK_T_Vdt_GND;
#endif
double IS_T;
#if defined(_DERIVATE)
double IS_T_Vdt_GND;
#endif
double BRI_T;
#if defined(_DERIVATE)
double BRI_T_Vdt_GND;
#endif
double BF_T;
#if defined(_DERIVATE)
double BF_T_Vdt_GND;
#endif
double RCV_T;
#if defined(_DERIVATE)
double RCV_T_Vdt_GND;
#endif
double RCCin_T;
#if defined(_DERIVATE)
double RCCin_T_Vdt_GND;
#endif
double RCCex_T;
#if defined(_DERIVATE)
double RCCex_T_Vdt_GND;
#endif
double RCCxx_T;
#if defined(_DERIVATE)
double RCCxx_T_Vdt_GND;
#endif
double RBC_T;
#if defined(_DERIVATE)
double RBC_T_Vdt_GND;
#endif
double RBV_T;
#if defined(_DERIVATE)
double RBV_T_Vdt_GND;
#endif
double RE_T;
#if defined(_DERIVATE)
double RE_T_Vdt_GND;
#endif
double XP_T;
#if defined(_DERIVATE)
double XP_T_Vdt_GND;
#endif
#if defined(_DYNAMIC)
double CJC_T;
#if defined(_DERIVATE)
double CJC_T_Vdt_GND;
#endif
#endif
double CJCscaleINV;
#if defined(_DERIVATE)
double CJCscaleINV_Vdt_GND;
#endif
double CJCscale;
#if defined(_DERIVATE)
double CJCscale_Vdt_GND;
#endif
#if defined(_DYNAMIC)
double CJS_T;
#if defined(_DERIVATE)
double CJS_T_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double CJE_T;
#if defined(_DERIVATE)
double CJE_T_Vdt_GND;
#endif
#endif
#if defined(_DYNAMIC)
double VDS_T;
#if defined(_DERIVATE)
double VDS_T_Vdt_GND;
#endif
#endif
double UdsT;
#if defined(_DERIVATE)
double UdsT_Vdt_GND;
#endif
double VDC_T;
#if defined(_DERIVATE)
double VDC_T_Vdt_GND;
#endif
double UdcT;
#if defined(_DERIVATE)
double UdcT_Vdt_GND;
#endif
double VDE_T;
#if defined(_DERIVATE)
double VDE_T_Vdt_GND;
#endif
double dxa;
#if defined(_DERIVATE)
double dxa_Vs_c1;
double dxa_Vb_c;
double dxa_Vb_b1;
double dxa_Vc3_c1;
double dxa_Vc3_c4;
double dxa_Vb1_b2;
double dxa_Vc4_c1;
double dxa_Vb1_e1;
double dxa_Vb2_e1;
double dxa_Vb2_c2;
double dxa_Vb2_c1;
double dxa_Vc1_c2;
double dxa_Vdt_GND;
#endif
double UdeT;
#if defined(_DERIVATE)
double UdeT_Vdt_GND;
#endif
double VdtINV;
#if defined(_DERIVATE)
double VdtINV_Vdt_GND;
#endif
double VtrINV;
double VtINV;
#if defined(_DERIVATE)
double VtINV_Vdt_GND;
#endif
double Vtr;
double Vt;
#if defined(_DERIVATE)
double Vt_Vdt_GND;
#endif
double tN;
#if defined(_DERIVATE)
double tN_Vdt_GND;
#endif
double Tamb;
#if defined(_DERIVATE)
double Tk_Vdt_GND;
#endif
double Trk;
double Vdt;
#if defined(_DERIVATE)
double Vdt_Vdt_GND;
#endif
double Tki;
#if defined(_DERIVATE)
double Tki_Vdt_GND;
#endif
double SCRCV_M;
double invMULT;
#if defined(_DYNAMIC)
double CBCO_M;
#endif
#if defined(_DYNAMIC)
double CBEO_M;
#endif
#if defined(_DYNAMIC)
double CTH_M;
#endif
double Xext1;
double Bn;
double An;
if
((pModel->TYPE==1))
{
An=7.03e7;
EXIT_IF_ISNAN(7.03e7)
Bn=1.23e8;
EXIT_IF_ISNAN(1.23e8)
}
else
{
An=1.58e8;
EXIT_IF_ISNAN(1.58e8)
Bn=2.04e8;
EXIT_IF_ISNAN(2.04e8)
}
Xext1=(1.0-pModel->XEXT);
EXIT_IF_ISNAN((1.0-pModel->XEXT))
#if defined(_DYNAMIC)
CTH_M=(pModel->CTH*pModel->MULT);
EXIT_IF_ISNAN((pModel->CTH*pModel->MULT))
#endif
#if defined(_DYNAMIC)
CBEO_M=(pModel->CBEO*pModel->MULT);
EXIT_IF_ISNAN((pModel->CBEO*pModel->MULT))
#endif
#if defined(_DYNAMIC)
CBCO_M=(pModel->CBCO*pModel->MULT);
EXIT_IF_ISNAN((pModel->CBCO*pModel->MULT))
#endif
invMULT=(1.0/pModel->MULT);
EXIT_IF_ISNAN((1.0/pModel->MULT))
SCRCV_M=(pModel->SCRCV*invMULT);
EXIT_IF_ISNAN((pModel->SCRCV*invMULT))
{
double m00_pow(d00_pow0,pModel->MULT,(1.0-pModel->AF))
pInst->KF_M=(pModel->KF*d00_pow0);
EXIT_IF_ISNAN((pModel->KF*d00_pow0))
}
{
double m00_pow(d00_pow0,pModel->MULT,(1.0-((2.0*(pModel->MLF-1.0))+(pModel->AF*(2.0-pModel->MLF)))))
pInst->KFN_M=(pModel->KFN*d00_pow0);
EXIT_IF_ISNAN((pModel->KFN*d00_pow0))
}
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Tki_Vdt_GND=1.0;
#endif
Tki=NP(dt);
EXIT_IF_ISNAN(NP(dt))
if
((Tki<0.0))
{
{
double m00_logE(d00_logE0,(1.0-Tki))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0-Tki))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Tki_Vdt_GND=(-(-Tki_Vdt_GND)*d10_logE0);
#endif
Tki=(-d00_logE0);
EXIT_IF_ISNAN((-d00_logE0))
}
}
if
((Tki<200.0))
{
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Vdt_Vdt_GND=Tki_Vdt_GND;
#endif
Vdt=Tki;
EXIT_IF_ISNAN(Tki)
}
else
{
{
double m00_logE(d00_logE0,(1.0+(Tki-200.0)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0+(Tki-200.0)))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Vdt_Vdt_GND=Tki_Vdt_GND*d10_logE0;
#endif
Vdt=(200.0+d00_logE0);
EXIT_IF_ISNAN((200.0+d00_logE0))
}
}
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Vdt_Vdt_GND=Vdt_Vdt_GND;
#endif
Vdt=Vdt;
EXIT_IF_ISNAN(Vdt)
Trk=(pModel->TREF+273.15);
EXIT_IF_ISNAN((pModel->TREF+273.15))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Tk_Vdt_GND=Vdt_Vdt_GND;
#endif
pInst->Tk=((Trk+pModel->DTA)+Vdt);
EXIT_IF_ISNAN(((Trk+pModel->DTA)+Vdt))
Tamb=(Trk+pModel->DTA);
EXIT_IF_ISNAN((Trk+pModel->DTA))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
tN_Vdt_GND=(Tk_Vdt_GND/Trk);
#endif
tN=(pInst->Tk/Trk);
EXIT_IF_ISNAN((pInst->Tk/Trk))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Vt_Vdt_GND=(8.61708691805812512584e-5*Tk_Vdt_GND);
#endif
Vt=(8.61708691805812512584e-5*pInst->Tk);
EXIT_IF_ISNAN((8.61708691805812512584e-5*pInst->Tk))
Vtr=(8.61708691805812512584e-5*Trk);
EXIT_IF_ISNAN((8.61708691805812512584e-5*Trk))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VtINV_Vdt_GND=(-Vt_Vdt_GND/Vt/Vt);
#endif
VtINV=(1.0/Vt);
EXIT_IF_ISNAN((1.0/Vt))
VtrINV=(1.0/Vtr);
EXIT_IF_ISNAN((1.0/Vtr))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VdtINV_Vdt_GND=VtINV_Vdt_GND;
#endif
VdtINV=(VtINV-VtrINV);
EXIT_IF_ISNAN((VtINV-VtrINV))
{
double m00_logE(d00_logE0,tN)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,tN)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
UdeT_Vdt_GND=((((((-3.0)*Vt_Vdt_GND)*d00_logE0)+(((-3.0)*Vt)*tN_Vdt_GND*d10_logE0))+(pModel->VDE*tN_Vdt_GND))+(-tN_Vdt_GND)*pModel->VGB);
#endif
UdeT=(((((-3.0)*Vt)*d00_logE0)+(pModel->VDE*tN))+((1.0-tN)*pModel->VGB));
EXIT_IF_ISNAN((((((-3.0)*Vt)*d00_logE0)+(pModel->VDE*tN))+((1.0-tN)*pModel->VGB)))
}
#if defined(_DERIVATE) /* probe=V(s:c1)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
dxa_Vs_c1=0.0;
dxa_Vb_c=0.0;
dxa_Vb_b1=0.0;
dxa_Vc3_c1=0.0;
dxa_Vc3_c4=0.0;
dxa_Vb1_b2=0.0;
dxa_Vc4_c1=0.0;
dxa_Vb1_e1=0.0;
dxa_Vb2_e1=0.0;
dxa_Vb2_c2=0.0;
dxa_Vb2_c1=0.0;
dxa_Vc1_c2=0.0;
dxa_Vdt_GND=(((-UdeT_Vdt_GND)*Vt-(0.05-UdeT)*Vt_Vdt_GND)/Vt/Vt);
#endif
dxa=((0.05-UdeT)/Vt);
EXIT_IF_ISNAN(((0.05-UdeT)/Vt))
if
((0.05<UdeT))
{
{
double m00_exp(d00_exp0,dxa)
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VDE_T_Vdt_GND=(UdeT_Vdt_GND+((Vt_Vdt_GND*d00_logE1)+(Vt*dxa_Vdt_GND*d10_exp0*d10_logE1)));
#endif
VDE_T=(UdeT+(Vt*d00_logE1));
EXIT_IF_ISNAN((UdeT+(Vt*d00_logE1)))
}
}
else
{
{
double m00_exp(d00_exp0,(-dxa))
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VDE_T_Vdt_GND=((Vt_Vdt_GND*d00_logE1)+(Vt*(-dxa_Vdt_GND)*d10_exp0*d10_logE1));
#endif
VDE_T=(0.05+(Vt*d00_logE1));
EXIT_IF_ISNAN((0.05+(Vt*d00_logE1)))
}
}
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VDE_T_Vdt_GND=VDE_T_Vdt_GND;
#endif
VDE_T=VDE_T;
EXIT_IF_ISNAN(VDE_T)
{
double m00_logE(d00_logE0,tN)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,tN)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
UdcT_Vdt_GND=((((((-3.0)*Vt_Vdt_GND)*d00_logE0)+(((-3.0)*Vt)*tN_Vdt_GND*d10_logE0))+(pModel->VDC*tN_Vdt_GND))+(-tN_Vdt_GND)*pModel->VGC);
#endif
UdcT=(((((-3.0)*Vt)*d00_logE0)+(pModel->VDC*tN))+((1.0-tN)*pModel->VGC));
EXIT_IF_ISNAN((((((-3.0)*Vt)*d00_logE0)+(pModel->VDC*tN))+((1.0-tN)*pModel->VGC)))
}
#if defined(_DERIVATE) /* probe=V(s:c1)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
dxa_Vs_c1=0.0;
dxa_Vb_c=0.0;
dxa_Vb_b1=0.0;
dxa_Vc3_c1=0.0;
dxa_Vc3_c4=0.0;
dxa_Vb1_b2=0.0;
dxa_Vc4_c1=0.0;
dxa_Vb1_e1=0.0;
dxa_Vb2_e1=0.0;
dxa_Vb2_c2=0.0;
dxa_Vb2_c1=0.0;
dxa_Vc1_c2=0.0;
dxa_Vdt_GND=(((-UdcT_Vdt_GND)*Vt-(0.05-UdcT)*Vt_Vdt_GND)/Vt/Vt);
#endif
dxa=((0.05-UdcT)/Vt);
EXIT_IF_ISNAN(((0.05-UdcT)/Vt))
if
((0.05<UdcT))
{
{
double m00_exp(d00_exp0,dxa)
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VDC_T_Vdt_GND=(UdcT_Vdt_GND+((Vt_Vdt_GND*d00_logE1)+(Vt*dxa_Vdt_GND*d10_exp0*d10_logE1)));
#endif
VDC_T=(UdcT+(Vt*d00_logE1));
EXIT_IF_ISNAN((UdcT+(Vt*d00_logE1)))
}
}
else
{
{
double m00_exp(d00_exp0,(-dxa))
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VDC_T_Vdt_GND=((Vt_Vdt_GND*d00_logE1)+(Vt*(-dxa_Vdt_GND)*d10_exp0*d10_logE1));
#endif
VDC_T=(0.05+(Vt*d00_logE1));
EXIT_IF_ISNAN((0.05+(Vt*d00_logE1)))
}
}
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VDC_T_Vdt_GND=VDC_T_Vdt_GND;
#endif
VDC_T=VDC_T;
EXIT_IF_ISNAN(VDC_T)
{
double m00_logE(d00_logE0,tN)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,tN)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
UdsT_Vdt_GND=((((((-3.0)*Vt_Vdt_GND)*d00_logE0)+(((-3.0)*Vt)*tN_Vdt_GND*d10_logE0))+(pModel->VDS*tN_Vdt_GND))+(-tN_Vdt_GND)*pModel->VGS);
#endif
UdsT=(((((-3.0)*Vt)*d00_logE0)+(pModel->VDS*tN))+((1.0-tN)*pModel->VGS));
EXIT_IF_ISNAN((((((-3.0)*Vt)*d00_logE0)+(pModel->VDS*tN))+((1.0-tN)*pModel->VGS)))
}
#if defined(_DERIVATE) /* probe=V(s:c1)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
dxa_Vs_c1=0.0;
dxa_Vb_c=0.0;
dxa_Vb_b1=0.0;
dxa_Vc3_c1=0.0;
dxa_Vc3_c4=0.0;
dxa_Vb1_b2=0.0;
dxa_Vc4_c1=0.0;
dxa_Vb1_e1=0.0;
dxa_Vb2_e1=0.0;
dxa_Vb2_c2=0.0;
dxa_Vb2_c1=0.0;
dxa_Vc1_c2=0.0;
dxa_Vdt_GND=(((-UdsT_Vdt_GND)*Vt-(0.05-UdsT)*Vt_Vdt_GND)/Vt/Vt);
#endif
dxa=((0.05-UdsT)/Vt);
EXIT_IF_ISNAN(((0.05-UdsT)/Vt))
#ifdef _DYNAMIC
if
((0.05<UdsT))
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,dxa)
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VDS_T_Vdt_GND=(UdsT_Vdt_GND+((Vt_Vdt_GND*d00_logE1)+(Vt*dxa_Vdt_GND*d10_exp0*d10_logE1)));
#endif
VDS_T=(UdsT+(Vt*d00_logE1));
EXIT_IF_ISNAN((UdsT+(Vt*d00_logE1)))
}
#endif
}
else
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,(-dxa))
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VDS_T_Vdt_GND=((Vt_Vdt_GND*d00_logE1)+(Vt*(-dxa_Vdt_GND)*d10_exp0*d10_logE1));
#endif
VDS_T=(0.05+(Vt*d00_logE1));
EXIT_IF_ISNAN((0.05+(Vt*d00_logE1)))
}
#endif
}
#endif /* if(...) */
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VDS_T_Vdt_GND=VDS_T_Vdt_GND;
#endif
VDS_T=VDS_T;
EXIT_IF_ISNAN(VDS_T)
#endif
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(pModel->VDE/VDE_T),pModel->PE)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(pModel->VDE/VDE_T),pModel->PE)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
CJE_T_Vdt_GND=(pModel->CJE*(d10_pow0*(-pModel->VDE*VDE_T_Vdt_GND/VDE_T/VDE_T)));
#endif
CJE_T=(pModel->CJE*d00_pow0);
EXIT_IF_ISNAN((pModel->CJE*d00_pow0))
}
#endif
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(pModel->VDS/VDS_T),pModel->PS)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(pModel->VDS/VDS_T),pModel->PS)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
CJS_T_Vdt_GND=(pModel->CJS*(d10_pow0*(-pModel->VDS*VDS_T_Vdt_GND/VDS_T/VDS_T)));
#endif
CJS_T=(pModel->CJS*d00_pow0);
EXIT_IF_ISNAN((pModel->CJS*d00_pow0))
}
#endif
{
double m00_pow(d00_pow0,(pModel->VDC/VDC_T),pModel->PC)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(pModel->VDC/VDC_T),pModel->PC)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
CJCscale_Vdt_GND=((1.0-pModel->XP)*(d10_pow0*(-pModel->VDC*VDC_T_Vdt_GND/VDC_T/VDC_T)));
#endif
CJCscale=(((1.0-pModel->XP)*d00_pow0)+pModel->XP);
EXIT_IF_ISNAN((((1.0-pModel->XP)*d00_pow0)+pModel->XP))
}
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
CJCscaleINV_Vdt_GND=(-CJCscale_Vdt_GND/CJCscale/CJCscale);
#endif
CJCscaleINV=(1.0/CJCscale);
EXIT_IF_ISNAN((1.0/CJCscale))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
CJC_T_Vdt_GND=(pModel->CJC*CJCscale_Vdt_GND);
#endif
CJC_T=(pModel->CJC*CJCscale);
EXIT_IF_ISNAN((pModel->CJC*CJCscale))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
XP_T_Vdt_GND=(pModel->XP*CJCscaleINV_Vdt_GND);
#endif
XP_T=(pModel->XP*CJCscaleINV);
EXIT_IF_ISNAN((pModel->XP*CJCscaleINV))
{
double m00_pow(d00_pow0,tN,pModel->AE)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,pModel->AE)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RE_T_Vdt_GND=(pModel->RE*(d10_pow0*tN_Vdt_GND));
#endif
RE_T=(pModel->RE*d00_pow0);
EXIT_IF_ISNAN((pModel->RE*d00_pow0))
}
{
double m00_pow(d00_pow0,tN,(pModel->AB-pModel->AQBO))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,(pModel->AB-pModel->AQBO))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RBV_T_Vdt_GND=(pModel->RBV*(d10_pow0*tN_Vdt_GND));
#endif
RBV_T=(pModel->RBV*d00_pow0);
EXIT_IF_ISNAN((pModel->RBV*d00_pow0))
}
{
double m00_pow(d00_pow0,tN,pModel->AEX)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,pModel->AEX)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RBC_T_Vdt_GND=(pModel->RBC*(d10_pow0*tN_Vdt_GND));
#endif
RBC_T=(pModel->RBC*d00_pow0);
EXIT_IF_ISNAN((pModel->RBC*d00_pow0))
}
{
double m00_pow(d00_pow0,tN,pModel->AC)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,pModel->AC)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RCCxx_T_Vdt_GND=(pModel->RCC*(d10_pow0*tN_Vdt_GND));
#endif
RCCxx_T=(pModel->RCC*d00_pow0);
EXIT_IF_ISNAN((pModel->RCC*d00_pow0))
}
{
double m00_pow(d00_pow0,tN,pModel->ACBL)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,pModel->ACBL)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RCCex_T_Vdt_GND=(pModel->RCBLX*(d10_pow0*tN_Vdt_GND));
#endif
RCCex_T=(pModel->RCBLX*d00_pow0);
EXIT_IF_ISNAN((pModel->RCBLX*d00_pow0))
}
{
double m00_pow(d00_pow0,tN,pModel->ACBL)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,pModel->ACBL)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RCCin_T_Vdt_GND=(pModel->RCBLI*(d10_pow0*tN_Vdt_GND));
#endif
RCCin_T=(pModel->RCBLI*d00_pow0);
EXIT_IF_ISNAN((pModel->RCBLI*d00_pow0))
}
{
double m00_pow(d00_pow0,tN,pModel->AEPI)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,pModel->AEPI)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RCV_T_Vdt_GND=(pModel->RCV*(d10_pow0*tN_Vdt_GND));
#endif
RCV_T=(pModel->RCV*d00_pow0);
EXIT_IF_ISNAN((pModel->RCV*d00_pow0))
}
{
double m00_pow(d00_pow0,tN,((pModel->AE-pModel->AB)-pModel->AQBO))
double m00_exp(d00_exp1,((-pModel->DVGBF)*VdtINV))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,((pModel->AE-pModel->AB)-pModel->AQBO))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
BF_T_Vdt_GND=(((pModel->BF*(d10_pow0*tN_Vdt_GND))*d00_exp1)+((pModel->BF*d00_pow0)*((-pModel->DVGBF)*VdtINV_Vdt_GND)*d10_exp1));
#endif
BF_T=((pModel->BF*d00_pow0)*d00_exp1);
EXIT_IF_ISNAN(((pModel->BF*d00_pow0)*d00_exp1))
}
{
double m00_exp(d00_exp0,((-pModel->DVGBR)*VdtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
BRI_T_Vdt_GND=(pModel->BRI*((-pModel->DVGBR)*VdtINV_Vdt_GND)*d10_exp0);
#endif
BRI_T=(pModel->BRI*d00_exp0);
EXIT_IF_ISNAN((pModel->BRI*d00_exp0))
}
{
double m00_pow(d00_pow0,tN,(((4.0-pModel->AB)-pModel->AQBO)+pModel->DAIS))
double m00_exp(d00_exp1,((-pModel->VGB)*VdtINV))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,(((4.0-pModel->AB)-pModel->AQBO)+pModel->DAIS))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
IS_T_Vdt_GND=(((pModel->IS*(d10_pow0*tN_Vdt_GND))*d00_exp1)+((pModel->IS*d00_pow0)*((-pModel->VGB)*VdtINV_Vdt_GND)*d10_exp1));
#endif
IS_T=((pModel->IS*d00_pow0)*d00_exp1);
EXIT_IF_ISNAN(((pModel->IS*d00_pow0)*d00_exp1))
}
{
double m00_pow(d00_pow0,tN,(1.0-pModel->AB))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,(1.0-pModel->AB))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
IK_T_Vdt_GND=(pModel->IK*(d10_pow0*tN_Vdt_GND));
#endif
IK_T=(pModel->IK*d00_pow0);
EXIT_IF_ISNAN((pModel->IK*d00_pow0))
}
{
double m00_pow(d00_pow0,tN,(6.0-(2.0*pModel->MLF)))
double m00_exp(d00_exp1,(((-pModel->VGJ)*VdtINV)/pModel->MLF))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,(6.0-(2.0*pModel->MLF)))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
IBF_T_Vdt_GND=(((pModel->IBF*(d10_pow0*tN_Vdt_GND))*d00_exp1)+((pModel->IBF*d00_pow0)*(((-pModel->VGJ)*VdtINV_Vdt_GND)/pModel->MLF)*d10_exp1));
#endif
IBF_T=((pModel->IBF*d00_pow0)*d00_exp1);
EXIT_IF_ISNAN(((pModel->IBF*d00_pow0)*d00_exp1))
}
{
double m00_exp(d00_exp0,(((-pModel->VGC)*VdtINV)/2.0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
IBR_T_Vdt_GND=(((((pModel->IBR*tN_Vdt_GND)*tN)+((pModel->IBR*tN)*tN_Vdt_GND))*d00_exp0)+(((pModel->IBR*tN)*tN)*(((-pModel->VGC)*VdtINV_Vdt_GND)/2.0)*d10_exp0));
#endif
IBR_T=(((pModel->IBR*tN)*tN)*d00_exp0);
EXIT_IF_ISNAN((((pModel->IBR*tN)*tN)*d00_exp0))
}
{
double m00_pow(d00_pow0,tN,pModel->AQBO)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,pModel->AQBO)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VEF_T_Vdt_GND=(((pModel->VEF*(d10_pow0*tN_Vdt_GND))*CJCscaleINV)+((pModel->VEF*d00_pow0)*CJCscaleINV_Vdt_GND));
#endif
VEF_T=((pModel->VEF*d00_pow0)*CJCscaleINV);
EXIT_IF_ISNAN(((pModel->VEF*d00_pow0)*CJCscaleINV))
}
{
double m00_pow(d00_pow0,tN,pModel->AQBO)
double m00_pow(d00_pow1,(pModel->VDE/VDE_T),(-pModel->PE))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,pModel->AQBO)
double m10_pow(d10_pow1,d00_pow1,(pModel->VDE/VDE_T),(-pModel->PE))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
VER_T_Vdt_GND=(((pModel->VER*(d10_pow0*tN_Vdt_GND))*d00_pow1)+((pModel->VER*d00_pow0)*(d10_pow1*(-pModel->VDE*VDE_T_Vdt_GND/VDE_T/VDE_T))));
#endif
VER_T=((pModel->VER*d00_pow0)*d00_pow1);
EXIT_IF_ISNAN(((pModel->VER*d00_pow0)*d00_pow1))
}
{
double m00_pow(d00_pow0,tN,(4.0-pModel->AS))
double m00_exp(d00_exp1,((-pModel->VGS)*VdtINV))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,(4.0-pModel->AS))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
ISS_T_Vdt_GND=(((pModel->ISS*(d10_pow0*tN_Vdt_GND))*d00_exp1)+((pModel->ISS*d00_pow0)*((-pModel->VGS)*VdtINV_Vdt_GND)*d10_exp1));
#endif
ISS_T=((pModel->ISS*d00_pow0)*d00_exp1);
EXIT_IF_ISNAN(((pModel->ISS*d00_pow0)*d00_exp1))
}
if
((ISS_T>0.0))
{
{
double m00_pow(d00_pow0,tN,(1.0-pModel->AS))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,(1.0-pModel->AS))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
IKS_T_Vdt_GND=(((((pModel->IKS*(d10_pow0*tN_Vdt_GND))*(IS_T/pModel->IS))+((pModel->IKS*d00_pow0)*(IS_T_Vdt_GND/pModel->IS)))*(pModel->ISS/ISS_T))+(((pModel->IKS*d00_pow0)*(IS_T/pModel->IS))*(-pModel->ISS*ISS_T_Vdt_GND/ISS_T/ISS_T)));
#endif
IKS_T=(((pModel->IKS*d00_pow0)*(IS_T/pModel->IS))*(pModel->ISS/ISS_T));
EXIT_IF_ISNAN((((pModel->IKS*d00_pow0)*(IS_T/pModel->IS))*(pModel->ISS/ISS_T)))
}
}
else
{
{
double m00_pow(d00_pow0,tN,(1.0-pModel->AS))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,(1.0-pModel->AS))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
IKS_T_Vdt_GND=(pModel->IKS*(d10_pow0*tN_Vdt_GND));
#endif
IKS_T=(pModel->IKS*d00_pow0);
EXIT_IF_ISNAN((pModel->IKS*d00_pow0))
}
}
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,tN,(pModel->AB-2.0))
double m00_exp(d00_exp1,((-pModel->DVGTE)*VdtINV))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,(pModel->AB-2.0))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
TAUE_T_Vdt_GND=(((pModel->TAUE*(d10_pow0*tN_Vdt_GND))*d00_exp1)+((pModel->TAUE*d00_pow0)*((-pModel->DVGTE)*VdtINV_Vdt_GND)*d10_exp1));
#endif
TAUE_T=((pModel->TAUE*d00_pow0)*d00_exp1);
EXIT_IF_ISNAN(((pModel->TAUE*d00_pow0)*d00_exp1))
}
#endif
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,tN,((pModel->AQBO+pModel->AB)-1.0))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,((pModel->AQBO+pModel->AB)-1.0))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
TAUB_T_Vdt_GND=(pModel->TAUB*(d10_pow0*tN_Vdt_GND));
#endif
TAUB_T=(pModel->TAUB*d00_pow0);
EXIT_IF_ISNAN((pModel->TAUB*d00_pow0))
}
#endif
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,tN,(pModel->AEPI-1.0))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,(pModel->AEPI-1.0))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
TEPI_T_Vdt_GND=(pModel->TEPI*(d10_pow0*tN_Vdt_GND));
#endif
TEPI_T=(pModel->TEPI*d00_pow0);
EXIT_IF_ISNAN((pModel->TEPI*d00_pow0))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
TAUR_T_Vdt_GND=((pModel->TAUR*(TAUB_T_Vdt_GND+TEPI_T_Vdt_GND))/(pModel->TAUB+pModel->TEPI));
#endif
TAUR_T=((pModel->TAUR*(TAUB_T+TEPI_T))/(pModel->TAUB+pModel->TEPI));
EXIT_IF_ISNAN(((pModel->TAUR*(TAUB_T+TEPI_T))/(pModel->TAUB+pModel->TEPI)))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Tk300_Vdt_GND=Tk_Vdt_GND;
#endif
Tk300=(pInst->Tk-300.0);
EXIT_IF_ISNAN((pInst->Tk-300.0))
if
((pInst->Tk<525.0))
{
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
BnT_Vdt_GND=(Bn*((7.2e-4*Tk300_Vdt_GND)-(((1.6e-6*Tk300_Vdt_GND)*Tk300)+((1.6e-6*Tk300)*Tk300_Vdt_GND))));
#endif
BnT=(Bn*((1.0+(7.2e-4*Tk300))-((1.6e-6*Tk300)*Tk300)));
EXIT_IF_ISNAN((Bn*((1.0+(7.2e-4*Tk300))-((1.6e-6*Tk300)*Tk300))))
}
else
{
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
BnT_Vdt_GND=0.0;
#endif
BnT=(Bn*1.081);
EXIT_IF_ISNAN((Bn*1.081))
}
{
double m00_pow(d00_pow0,tN,pModel->AQBO)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,tN,pModel->AQBO)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
DEG_T_Vdt_GND=(pModel->DEG*(d10_pow0*tN_Vdt_GND));
#endif
DEG_T=(pModel->DEG*d00_pow0);
EXIT_IF_ISNAN((pModel->DEG*d00_pow0))
}
{
double m00_pow(d00_pow0,(Tamb/Trk),pModel->ATH)
RTH_Tamb=(pModel->RTH*d00_pow0);
EXIT_IF_ISNAN((pModel->RTH*d00_pow0))
}
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
IS_TM_Vdt_GND=IS_T_Vdt_GND*pModel->MULT;
#endif
IS_TM=(IS_T*pModel->MULT);
EXIT_IF_ISNAN((IS_T*pModel->MULT))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
IK_TM_Vdt_GND=IK_T_Vdt_GND*pModel->MULT;
#endif
IK_TM=(IK_T*pModel->MULT);
EXIT_IF_ISNAN((IK_T*pModel->MULT))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
IBF_TM_Vdt_GND=IBF_T_Vdt_GND*pModel->MULT;
#endif
IBF_TM=(IBF_T*pModel->MULT);
EXIT_IF_ISNAN((IBF_T*pModel->MULT))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
IBR_TM_Vdt_GND=IBR_T_Vdt_GND*pModel->MULT;
#endif
IBR_TM=(IBR_T*pModel->MULT);
EXIT_IF_ISNAN((IBR_T*pModel->MULT))
IHC_M=(pModel->IHC*pModel->MULT);
EXIT_IF_ISNAN((pModel->IHC*pModel->MULT))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
ISS_TM_Vdt_GND=ISS_T_Vdt_GND*pModel->MULT;
#endif
ISS_TM=(ISS_T*pModel->MULT);
EXIT_IF_ISNAN((ISS_T*pModel->MULT))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
IKS_TM_Vdt_GND=IKS_T_Vdt_GND*pModel->MULT;
#endif
IKS_TM=(IKS_T*pModel->MULT);
EXIT_IF_ISNAN((IKS_T*pModel->MULT))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
CJE_TM_Vdt_GND=CJE_T_Vdt_GND*pModel->MULT;
#endif
CJE_TM=(CJE_T*pModel->MULT);
EXIT_IF_ISNAN((CJE_T*pModel->MULT))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
CJC_TM_Vdt_GND=CJC_T_Vdt_GND*pModel->MULT;
#endif
CJC_TM=(CJC_T*pModel->MULT);
EXIT_IF_ISNAN((CJC_T*pModel->MULT))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
CJS_TM_Vdt_GND=CJS_T_Vdt_GND*pModel->MULT;
#endif
CJS_TM=(CJS_T*pModel->MULT);
EXIT_IF_ISNAN((CJS_T*pModel->MULT))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RE_TM_Vdt_GND=RE_T_Vdt_GND*invMULT;
#endif
pInst->RE_TM=(RE_T*invMULT);
EXIT_IF_ISNAN((RE_T*invMULT))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RBC_TM_Vdt_GND=RBC_T_Vdt_GND*invMULT;
#endif
pInst->RBC_TM=(RBC_T*invMULT);
EXIT_IF_ISNAN((RBC_T*invMULT))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RBV_TM_Vdt_GND=RBV_T_Vdt_GND*invMULT;
#endif
RBV_TM=(RBV_T*invMULT);
EXIT_IF_ISNAN((RBV_T*invMULT))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RCCxx_TM_Vdt_GND=RCCxx_T_Vdt_GND*invMULT;
#endif
RCCxx_TM=(RCCxx_T*invMULT);
EXIT_IF_ISNAN((RCCxx_T*invMULT))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RCCex_TM_Vdt_GND=RCCex_T_Vdt_GND*invMULT;
#endif
RCCex_TM=(RCCex_T*invMULT);
EXIT_IF_ISNAN((RCCex_T*invMULT))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RCCin_TM_Vdt_GND=RCCin_T_Vdt_GND*invMULT;
#endif
RCCin_TM=(RCCin_T*invMULT);
EXIT_IF_ISNAN((RCCin_T*invMULT))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
RCV_TM_Vdt_GND=RCV_T_Vdt_GND*invMULT;
#endif
RCV_TM=(RCV_T*invMULT);
EXIT_IF_ISNAN((RCV_T*invMULT))
if
((pModel->RCC>0.0))
{
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
GCCxx_TM_Vdt_GND=(-RCCxx_TM_Vdt_GND/RCCxx_TM/RCCxx_TM);
#endif
pInst->GCCxx_TM=(1.0/RCCxx_TM);
EXIT_IF_ISNAN((1.0/RCCxx_TM))
}
else
{
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
GCCxx_TM_Vdt_GND=0.0;
#endif
pInst->GCCxx_TM=0;
EXIT_IF_ISNAN(0)
}
if
((pModel->RCBLX>0.0))
{
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
GCCex_TM_Vdt_GND=(-RCCex_TM_Vdt_GND/RCCex_TM/RCCex_TM);
#endif
pInst->GCCex_TM=(1.0/RCCex_TM);
EXIT_IF_ISNAN((1.0/RCCex_TM))
}
else
{
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
GCCex_TM_Vdt_GND=0.0;
#endif
pInst->GCCex_TM=0;
EXIT_IF_ISNAN(0)
}
if
((pModel->RCBLI>0.0))
{
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
GCCin_TM_Vdt_GND=(-RCCin_TM_Vdt_GND/RCCin_TM/RCCin_TM);
#endif
pInst->GCCin_TM=(1.0/RCCin_TM);
EXIT_IF_ISNAN((1.0/RCCin_TM))
}
else
{
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
GCCin_TM_Vdt_GND=0.0;
#endif
pInst->GCCin_TM=0;
EXIT_IF_ISNAN(0)
}
RTH_Tamb_M=(RTH_Tamb*invMULT);
EXIT_IF_ISNAN((RTH_Tamb*invMULT))
{
#if defined(_DERIVATE) /* probe=V(b2:c1) ddxprobe= */
Vb2c1_Vb2_c1=(pModel->TYPE);
#endif
Vb2c1=(pModel->TYPE*(NP(b2)-NP(c1)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(b2)-NP(c1))))
#if defined(_DERIVATE) /* probe=V(b2:c2) ddxprobe= */
Vb2c2_Vb2_c2=(pModel->TYPE);
#endif
Vb2c2=(pModel->TYPE*(NP(b2)-NP(c2)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(b2)-NP(c2))))
#if defined(_DERIVATE) /* probe=V(b2:e1) ddxprobe= */
Vb2e1_Vb2_e1=(pModel->TYPE);
#endif
Vb2e1=(pModel->TYPE*(NP(b2)-NP(e1)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(b2)-NP(e1))))
#if defined(_DERIVATE) /* probe=V(b1:e1) ddxprobe= */
Vb1e1_Vb1_e1=(pModel->TYPE);
#endif
Vb1e1=(pModel->TYPE*(NP(b1)-NP(e1)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(b1)-NP(e1))))
#if defined(_DERIVATE) /* probe=V(b1:b2) ddxprobe= */
Vb1b2_Vb1_b2=(pModel->TYPE);
#endif
Vb1b2=(pModel->TYPE*(NP(b1)-NP(b2)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(b1)-NP(b2))))
#if defined(_DERIVATE) /* probe=V(s:c1) ddxprobe= */
Vsc1_Vs_c1=(pModel->TYPE);
#endif
Vsc1=(pModel->TYPE*(NP(s)-NP(c1)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(s)-NP(c1))))
#if defined(_DERIVATE) /* probe=V(c1:c2) ddxprobe= */
Vc1c2_Vc1_c2=(pModel->TYPE);
#endif
Vc1c2=(pModel->TYPE*(NP(c1)-NP(c2)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(c1)-NP(c2))))
#if defined(_DERIVATE) /* probe=V(e:e1) ddxprobe= */
Vee1_Ve_e1=(pModel->TYPE);
#endif
Vee1=(pModel->TYPE*(NP(e)-NP(e1)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(e)-NP(e1))))
#if defined(_DERIVATE) /* probe=V(b:b1) ddxprobe= */
Vbb1_Vb_b1=(pModel->TYPE);
#endif
Vbb1=(pModel->TYPE*(NP(b)-NP(b1)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(b)-NP(b1))))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b:e) ddxprobe= */
Vbe_Vb_e=(pModel->TYPE);
#endif
Vbe=(pModel->TYPE*(NP(b)-NP(e)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(b)-NP(e))))
#endif
#if defined(_DERIVATE) /* probe=V(b:c) ddxprobe= */
Vbc_Vb_c=(pModel->TYPE);
#endif
Vbc=(pModel->TYPE*(NP(b)-NP(c)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(b)-NP(c))))
if
((pModel->RCBLX>0.0))
{
if
((pModel->RCBLI>0.0))
{
#if defined(_DERIVATE) /* probe=V(c4:c1) ddxprobe= */
Vc4c1_Vc4_c1=(pModel->TYPE);
#endif
Vc4c1=(pModel->TYPE*(NP(c4)-NP(c1)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(c4)-NP(c1))))
#if defined(_DERIVATE) /* probe=V(c3:c1)V(c3:c4) ddxprobe= */
Vc3c4_Vc3_c1=0.0;
Vc3c4_Vc3_c4=(pModel->TYPE);
#endif
Vc3c4=(pModel->TYPE*(NP(c3)-NP(c4)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(c3)-NP(c4))))
}
else
{
#if defined(_DERIVATE) /* probe=V(c4:c1) ddxprobe= */
Vc4c1_Vc4_c1=0.0;
#endif
Vc4c1=0;
EXIT_IF_ISNAN(0)
#if defined(_DERIVATE) /* probe=V(c3:c1)V(c3:c4) ddxprobe= */
Vc3c4_Vc3_c1=(pModel->TYPE);
Vc3c4_Vc3_c4=0.0;
#endif
Vc3c4=(pModel->TYPE*(NP(c3)-NP(c1)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(c3)-NP(c1))))
}
}
else
{
if
((pModel->RCBLI>0.0))
{
#if defined(_DERIVATE) /* probe=V(c4:c1) ddxprobe= */
Vc4c1_Vc4_c1=(pModel->TYPE);
#endif
Vc4c1=(pModel->TYPE*(NP(c4)-NP(c1)));
EXIT_IF_ISNAN((pModel->TYPE*(NP(c4)-NP(c1))))
#if defined(_DERIVATE) /* probe=V(c3:c1)V(c3:c4) ddxprobe= */
Vc3c4_Vc3_c1=0.0;
Vc3c4_Vc3_c4=0.0;
#endif
Vc3c4=0;
EXIT_IF_ISNAN(0)
}
else
{
#if defined(_DERIVATE) /* probe=V(c4:c1) ddxprobe= */
Vc4c1_Vc4_c1=0.0;
#endif
Vc4c1=0;
EXIT_IF_ISNAN(0)
#if defined(_DERIVATE) /* probe=V(c3:c1)V(c3:c4) ddxprobe= */
Vc3c4_Vc3_c1=0.0;
Vc3c4_Vc3_c4=0.0;
#endif
Vc3c4=0;
EXIT_IF_ISNAN(0)
}
}
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
Vb1c4_Vb1_b2=Vb1b2_Vb1_b2;
Vb1c4_Vb2_c2=Vb2c2_Vb2_c2;
Vb1c4_Vc1_c2=(-Vc1c2_Vc1_c2);
Vb1c4_Vc4_c1=(-Vc4c1_Vc4_c1);
#endif
Vb1c4=(((Vb1b2+Vb2c2)-Vc1c2)-Vc4c1);
EXIT_IF_ISNAN((((Vb1b2+Vb2c2)-Vc1c2)-Vc4c1))
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4) ddxprobe= */
Vcc3_Vb_c=(-Vbc_Vb_c);
Vcc3_Vb_b1=Vbb1_Vb_b1;
Vcc3_Vb1_b2=Vb1c4_Vb1_b2;
Vcc3_Vb2_c2=Vb1c4_Vb2_c2;
Vcc3_Vc1_c2=Vb1c4_Vc1_c2;
Vcc3_Vc4_c1=Vb1c4_Vc4_c1;
Vcc3_Vc3_c1=(-Vc3c4_Vc3_c1);
Vcc3_Vc3_c4=(-Vc3c4_Vc3_c4);
#endif
Vcc3=((((-Vbc)+Vbb1)+Vb1c4)-Vc3c4);
EXIT_IF_ISNAN(((((-Vbc)+Vbb1)+Vb1c4)-Vc3c4))
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4) ddxprobe= */
Vbc3_Vb_c=(Vbc_Vb_c+Vcc3_Vb_c);
Vbc3_Vb_b1=Vcc3_Vb_b1;
Vbc3_Vb1_b2=Vcc3_Vb1_b2;
Vbc3_Vb2_c2=Vcc3_Vb2_c2;
Vbc3_Vc1_c2=Vcc3_Vc1_c2;
Vbc3_Vc4_c1=Vcc3_Vc4_c1;
Vbc3_Vc3_c1=Vcc3_Vc3_c1;
Vbc3_Vc3_c4=Vcc3_Vc3_c4;
#endif
Vbc3=(Vbc+Vcc3);
EXIT_IF_ISNAN((Vbc+Vcc3))
#if defined(_DERIVATE) /* probe=V(s:c1)V(c4:c1) ddxprobe= */
Vsc4_Vs_c1=Vsc1_Vs_c1;
Vsc4_Vc4_c1=(-Vc4c1_Vc4_c1);
#endif
Vsc4=(Vsc1-Vc4c1);
EXIT_IF_ISNAN((Vsc1-Vc4c1))
#if defined(_DERIVATE) /* probe=V(s:c1)V(c4:c1)V(c3:c1)V(c3:c4) ddxprobe= */
Vsc3_Vs_c1=Vsc4_Vs_c1;
Vsc3_Vc4_c1=Vsc4_Vc4_c1;
Vsc3_Vc3_c1=(-Vc3c4_Vc3_c1);
Vsc3_Vc3_c4=(-Vc3c4_Vc3_c4);
#endif
Vsc3=(Vsc4-Vc3c4);
EXIT_IF_ISNAN((Vsc4-Vc3c4))
if
(((Vb2c2*VtINV)<200.0))
{
{
double m00_exp(d00_exp0,(Vb2c2*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b2:c2)V(dt:GND) ddxprobe= */
eVb2c2_Vb2_c2=Vb2c2_Vb2_c2*VtINV*d10_exp0;
eVb2c2_Vdt_GND=(Vb2c2*VtINV_Vdt_GND)*d10_exp0;
#endif
eVb2c2=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(b2:c2)V(dt:GND) ddxprobe= */
eVb2c2_Vb2_c2=(expl*Vb2c2_Vb2_c2*VtINV);
eVb2c2_Vdt_GND=(expl*(Vb2c2*VtINV_Vdt_GND));
#endif
eVb2c2=(expl*(1.0+((Vb2c2*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+((Vb2c2*VtINV)-200.0))))
}
if
(((Vb2e1*VtINV)<200.0))
{
{
double m00_exp(d00_exp0,(Vb2e1*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b2:e1)V(dt:GND) ddxprobe= */
eVb2e1_Vb2_e1=Vb2e1_Vb2_e1*VtINV*d10_exp0;
eVb2e1_Vdt_GND=(Vb2e1*VtINV_Vdt_GND)*d10_exp0;
#endif
eVb2e1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(b2:e1)V(dt:GND) ddxprobe= */
eVb2e1_Vb2_e1=(expl*Vb2e1_Vb2_e1*VtINV);
eVb2e1_Vdt_GND=(expl*(Vb2e1*VtINV_Vdt_GND));
#endif
eVb2e1=(expl*(1.0+((Vb2e1*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+((Vb2e1*VtINV)-200.0))))
}
if
(((Vb1e1*VtINV)<200.0))
{
{
double m00_exp(d00_exp0,(Vb1e1*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b1:e1)V(dt:GND) ddxprobe= */
eVb1e1_Vb1_e1=Vb1e1_Vb1_e1*VtINV*d10_exp0;
eVb1e1_Vdt_GND=(Vb1e1*VtINV_Vdt_GND)*d10_exp0;
#endif
eVb1e1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(b1:e1)V(dt:GND) ddxprobe= */
eVb1e1_Vb1_e1=(expl*Vb1e1_Vb1_e1*VtINV);
eVb1e1_Vdt_GND=(expl*(Vb1e1*VtINV_Vdt_GND));
#endif
eVb1e1=(expl*(1.0+((Vb1e1*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+((Vb1e1*VtINV)-200.0))))
}
if
(((Vb1c4*VtINV)<200.0))
{
{
double m00_exp(d00_exp0,(Vb1c4*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(dt:GND) ddxprobe= */
eVb1c4_Vb1_b2=Vb1c4_Vb1_b2*VtINV*d10_exp0;
eVb1c4_Vb2_c2=Vb1c4_Vb2_c2*VtINV*d10_exp0;
eVb1c4_Vc1_c2=Vb1c4_Vc1_c2*VtINV*d10_exp0;
eVb1c4_Vc4_c1=Vb1c4_Vc4_c1*VtINV*d10_exp0;
eVb1c4_Vdt_GND=(Vb1c4*VtINV_Vdt_GND)*d10_exp0;
#endif
eVb1c4=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(dt:GND) ddxprobe= */
eVb1c4_Vb1_b2=(expl*Vb1c4_Vb1_b2*VtINV);
eVb1c4_Vb2_c2=(expl*Vb1c4_Vb2_c2*VtINV);
eVb1c4_Vc1_c2=(expl*Vb1c4_Vc1_c2*VtINV);
eVb1c4_Vc4_c1=(expl*Vb1c4_Vc4_c1*VtINV);
eVb1c4_Vdt_GND=(expl*(Vb1c4*VtINV_Vdt_GND));
#endif
eVb1c4=(expl*(1.0+((Vb1c4*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+((Vb1c4*VtINV)-200.0))))
}
if
(((Vb1b2*VtINV)<200.0))
{
{
double m00_exp(d00_exp0,(Vb1b2*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b1:b2)V(dt:GND) ddxprobe= */
eVb1b2_Vb1_b2=Vb1b2_Vb1_b2*VtINV*d10_exp0;
eVb1b2_Vdt_GND=(Vb1b2*VtINV_Vdt_GND)*d10_exp0;
#endif
pInst->eVb1b2=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(b1:b2)V(dt:GND) ddxprobe= */
eVb1b2_Vb1_b2=(expl*Vb1b2_Vb1_b2*VtINV);
eVb1b2_Vdt_GND=(expl*(Vb1b2*VtINV_Vdt_GND));
#endif
pInst->eVb1b2=(expl*(1.0+((Vb1b2*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+((Vb1b2*VtINV)-200.0))))
}
if
(((Vbc3*VtINV)<200.0))
{
{
double m00_exp(d00_exp0,(Vbc3*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(dt:GND) ddxprobe= */
eVbc3_Vb_c=Vbc3_Vb_c*VtINV*d10_exp0;
eVbc3_Vb_b1=Vbc3_Vb_b1*VtINV*d10_exp0;
eVbc3_Vb1_b2=Vbc3_Vb1_b2*VtINV*d10_exp0;
eVbc3_Vb2_c2=Vbc3_Vb2_c2*VtINV*d10_exp0;
eVbc3_Vc1_c2=Vbc3_Vc1_c2*VtINV*d10_exp0;
eVbc3_Vc4_c1=Vbc3_Vc4_c1*VtINV*d10_exp0;
eVbc3_Vc3_c1=Vbc3_Vc3_c1*VtINV*d10_exp0;
eVbc3_Vc3_c4=Vbc3_Vc3_c4*VtINV*d10_exp0;
eVbc3_Vdt_GND=(Vbc3*VtINV_Vdt_GND)*d10_exp0;
#endif
eVbc3=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(dt:GND) ddxprobe= */
eVbc3_Vb_c=(expl*Vbc3_Vb_c*VtINV);
eVbc3_Vb_b1=(expl*Vbc3_Vb_b1*VtINV);
eVbc3_Vb1_b2=(expl*Vbc3_Vb1_b2*VtINV);
eVbc3_Vb2_c2=(expl*Vbc3_Vb2_c2*VtINV);
eVbc3_Vc1_c2=(expl*Vbc3_Vc1_c2*VtINV);
eVbc3_Vc4_c1=(expl*Vbc3_Vc4_c1*VtINV);
eVbc3_Vc3_c1=(expl*Vbc3_Vc3_c1*VtINV);
eVbc3_Vc3_c4=(expl*Vbc3_Vc3_c4*VtINV);
eVbc3_Vdt_GND=(expl*(Vbc3*VtINV_Vdt_GND));
#endif
eVbc3=(expl*(1.0+((Vbc3*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+((Vbc3*VtINV)-200.0))))
}
if
(((Vsc1*VtINV)<200.0))
{
{
double m00_exp(d00_exp0,(Vsc1*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(s:c1)V(dt:GND) ddxprobe= */
eVsc1_Vs_c1=Vsc1_Vs_c1*VtINV*d10_exp0;
eVsc1_Vdt_GND=(Vsc1*VtINV_Vdt_GND)*d10_exp0;
#endif
eVsc1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(s:c1)V(dt:GND) ddxprobe= */
eVsc1_Vs_c1=(expl*Vsc1_Vs_c1*VtINV);
eVsc1_Vdt_GND=(expl*(Vsc1*VtINV_Vdt_GND));
#endif
eVsc1=(expl*(1.0+((Vsc1*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+((Vsc1*VtINV)-200.0))))
}
if
((((Vbc3-VDC_T)*VtINV)<200.0))
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,((Vbc3-VDC_T)*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(dt:GND) ddxprobe= */
eVbc3VDC_Vb_c=Vbc3_Vb_c*VtINV*d10_exp0;
eVbc3VDC_Vb_b1=Vbc3_Vb_b1*VtINV*d10_exp0;
eVbc3VDC_Vb1_b2=Vbc3_Vb1_b2*VtINV*d10_exp0;
eVbc3VDC_Vb2_c2=Vbc3_Vb2_c2*VtINV*d10_exp0;
eVbc3VDC_Vc1_c2=Vbc3_Vc1_c2*VtINV*d10_exp0;
eVbc3VDC_Vc4_c1=Vbc3_Vc4_c1*VtINV*d10_exp0;
eVbc3VDC_Vc3_c1=Vbc3_Vc3_c1*VtINV*d10_exp0;
eVbc3VDC_Vc3_c4=Vbc3_Vc3_c4*VtINV*d10_exp0;
eVbc3VDC_Vdt_GND=(((-VDC_T_Vdt_GND)*VtINV)+((Vbc3-VDC_T)*VtINV_Vdt_GND))*d10_exp0;
#endif
eVbc3VDC=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#endif
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(dt:GND) ddxprobe= */
eVbc3VDC_Vb_c=(expl*Vbc3_Vb_c*VtINV);
eVbc3VDC_Vb_b1=(expl*Vbc3_Vb_b1*VtINV);
eVbc3VDC_Vb1_b2=(expl*Vbc3_Vb1_b2*VtINV);
eVbc3VDC_Vb2_c2=(expl*Vbc3_Vb2_c2*VtINV);
eVbc3VDC_Vc1_c2=(expl*Vbc3_Vc1_c2*VtINV);
eVbc3VDC_Vc4_c1=(expl*Vbc3_Vc4_c1*VtINV);
eVbc3VDC_Vc3_c1=(expl*Vbc3_Vc3_c1*VtINV);
eVbc3VDC_Vc3_c4=(expl*Vbc3_Vc3_c4*VtINV);
eVbc3VDC_Vdt_GND=(expl*(((-VDC_T_Vdt_GND)*VtINV)+((Vbc3-VDC_T)*VtINV_Vdt_GND)));
#endif
eVbc3VDC=(expl*(1.0+(((Vbc3-VDC_T)*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+(((Vbc3-VDC_T)*VtINV)-200.0))))
#endif
}
if
((((Vb1c4-VDC_T)*VtINV)<200.0))
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,((Vb1c4-VDC_T)*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(dt:GND) ddxprobe= */
eVb1c4VDC_Vb1_b2=Vb1c4_Vb1_b2*VtINV*d10_exp0;
eVb1c4VDC_Vb2_c2=Vb1c4_Vb2_c2*VtINV*d10_exp0;
eVb1c4VDC_Vc1_c2=Vb1c4_Vc1_c2*VtINV*d10_exp0;
eVb1c4VDC_Vc4_c1=Vb1c4_Vc4_c1*VtINV*d10_exp0;
eVb1c4VDC_Vdt_GND=(((-VDC_T_Vdt_GND)*VtINV)+((Vb1c4-VDC_T)*VtINV_Vdt_GND))*d10_exp0;
#endif
eVb1c4VDC=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#endif
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(dt:GND) ddxprobe= */
eVb1c4VDC_Vb1_b2=(expl*Vb1c4_Vb1_b2*VtINV);
eVb1c4VDC_Vb2_c2=(expl*Vb1c4_Vb2_c2*VtINV);
eVb1c4VDC_Vc1_c2=(expl*Vb1c4_Vc1_c2*VtINV);
eVb1c4VDC_Vc4_c1=(expl*Vb1c4_Vc4_c1*VtINV);
eVb1c4VDC_Vdt_GND=(expl*(((-VDC_T_Vdt_GND)*VtINV)+((Vb1c4-VDC_T)*VtINV_Vdt_GND)));
#endif
eVb1c4VDC=(expl*(1.0+(((Vb1c4-VDC_T)*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+(((Vb1c4-VDC_T)*VtINV)-200.0))))
#endif
}
if
((((Vb2c2-VDC_T)*VtINV)<200.0))
{
{
double m00_exp(d00_exp0,((Vb2c2-VDC_T)*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b2:c2)V(dt:GND) ddxprobe= */
eVb2c2VDC_Vb2_c2=Vb2c2_Vb2_c2*VtINV*d10_exp0;
eVb2c2VDC_Vdt_GND=(((-VDC_T_Vdt_GND)*VtINV)+((Vb2c2-VDC_T)*VtINV_Vdt_GND))*d10_exp0;
#endif
eVb2c2VDC=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(b2:c2)V(dt:GND) ddxprobe= */
eVb2c2VDC_Vb2_c2=(expl*Vb2c2_Vb2_c2*VtINV);
eVb2c2VDC_Vdt_GND=(expl*(((-VDC_T_Vdt_GND)*VtINV)+((Vb2c2-VDC_T)*VtINV_Vdt_GND)));
#endif
eVb2c2VDC=(expl*(1.0+(((Vb2c2-VDC_T)*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+(((Vb2c2-VDC_T)*VtINV)-200.0))))
}
if
((((Vb2c1-VDC_T)*VtINV)<200.0))
{
{
double m00_exp(d00_exp0,((Vb2c1-VDC_T)*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b2:c1)V(dt:GND) ddxprobe= */
eVb2c1VDC_Vb2_c1=Vb2c1_Vb2_c1*VtINV*d10_exp0;
eVb2c1VDC_Vdt_GND=(((-VDC_T_Vdt_GND)*VtINV)+((Vb2c1-VDC_T)*VtINV_Vdt_GND))*d10_exp0;
#endif
eVb2c1VDC=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(b2:c1)V(dt:GND) ddxprobe= */
eVb2c1VDC_Vb2_c1=(expl*Vb2c1_Vb2_c1*VtINV);
eVb2c1VDC_Vdt_GND=(expl*(((-VDC_T_Vdt_GND)*VtINV)+((Vb2c1-VDC_T)*VtINV_Vdt_GND)));
#endif
eVb2c1VDC=(expl*(1.0+(((Vb2c1-VDC_T)*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+(((Vb2c1-VDC_T)*VtINV)-200.0))))
}
{
double m00_sqrt(d00_sqrt0,(1.0+(4.0*eVb2c2VDC)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+(4.0*eVb2c2VDC)))
#endif
#if defined(_DERIVATE) /* probe=V(b2:c2)V(dt:GND) ddxprobe= */
K0_Vb2_c2=(4.0*eVb2c2VDC_Vb2_c2)*d10_sqrt0;
K0_Vdt_GND=(4.0*eVb2c2VDC_Vdt_GND)*d10_sqrt0;
#endif
K0=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
{
double m00_sqrt(d00_sqrt0,(1.0+(4.0*eVb2c1VDC)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+(4.0*eVb2c1VDC)))
#endif
#if defined(_DERIVATE) /* probe=V(b2:c1)V(dt:GND) ddxprobe= */
Kw_Vb2_c1=(4.0*eVb2c1VDC_Vb2_c1)*d10_sqrt0;
Kw_Vdt_GND=(4.0*eVb2c1VDC_Vdt_GND)*d10_sqrt0;
#endif
Kw=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
#if defined(_DERIVATE) /* probe=V(b2:c1)V(dt:GND) ddxprobe= */
pW_Vb2_c1=(((2.0*eVb2c1VDC_Vb2_c1)*(1.0+Kw)-(2.0*eVb2c1VDC)*Kw_Vb2_c1)/(1.0+Kw)/(1.0+Kw));
pW_Vdt_GND=(((2.0*eVb2c1VDC_Vdt_GND)*(1.0+Kw)-(2.0*eVb2c1VDC)*Kw_Vdt_GND)/(1.0+Kw)/(1.0+Kw));
#endif
pW=((2.0*eVb2c1VDC)/(1.0+Kw));
EXIT_IF_ISNAN(((2.0*eVb2c1VDC)/(1.0+Kw)))
if
((pW<1.0e-40))
{
#if defined(_DERIVATE) /* probe=V(b2:c1)V(dt:GND) ddxprobe= */
pW_Vb2_c1=0.0;
pW_Vdt_GND=0.0;
#endif
pW=0;
EXIT_IF_ISNAN(0)
}
{
double m00_logE(d00_logE0,((K0+1.0)/(Kw+1.0)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,((K0+1.0)/(Kw+1.0)))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1) ddxprobe= */
Ec_Vdt_GND=((Vt_Vdt_GND*((K0-Kw)-d00_logE0))+(Vt*((K0_Vdt_GND-Kw_Vdt_GND)-((K0_Vdt_GND*(Kw+1.0)-(K0+1.0)*Kw_Vdt_GND)/(Kw+1.0)/(Kw+1.0))*d10_logE0)));
Ec_Vb2_c2=(Vt*(K0_Vb2_c2-(K0_Vb2_c2/(Kw+1.0))*d10_logE0));
Ec_Vb2_c1=(Vt*((-Kw_Vb2_c1)-(-(K0+1.0)*Kw_Vb2_c1/(Kw+1.0)/(Kw+1.0))*d10_logE0));
#endif
Ec=(Vt*((K0-Kw)-d00_logE0));
EXIT_IF_ISNAN((Vt*((K0-Kw)-d00_logE0)))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Ic1c2_Vdt_GND=((Ec_Vdt_GND*RCV_TM-(Ec+Vc1c2)*RCV_TM_Vdt_GND)/RCV_TM/RCV_TM);
Ic1c2_Vb2_c2=(Ec_Vb2_c2/RCV_TM);
Ic1c2_Vb2_c1=(Ec_Vb2_c1/RCV_TM);
Ic1c2_Vc1_c2=(Vc1c2_Vc1_c2/RCV_TM);
#endif
Ic1c2=((Ec+Vc1c2)/RCV_TM);
EXIT_IF_ISNAN(((Ec+Vc1c2)/RCV_TM))
if
((Ic1c2>0.0))
{
if
((Vb2c1<100.0))
{
#if defined(_DERIVATE) /* probe=V(b2:c1) ddxprobe= */
tmpV_Vb2_c1=Vb2c1_Vb2_c1;
#endif
tmpV=Vb2c1;
EXIT_IF_ISNAN(Vb2c1)
}
else
{
{
double m00_logE(d00_logE0,(1.0+(Vb2c1-100.0)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0+(Vb2c1-100.0)))
#endif
#if defined(_DERIVATE) /* probe=V(b2:c1) ddxprobe= */
tmpV_Vb2_c1=Vb2c1_Vb2_c1*d10_logE0;
#endif
tmpV=(100.0+d00_logE0);
EXIT_IF_ISNAN((100.0+d00_logE0))
}
}
#if defined(_DERIVATE) /* probe=V(b2:c1) ddxprobe= */
tmpV_Vb2_c1=tmpV_Vb2_c1;
#endif
tmpV=tmpV;
EXIT_IF_ISNAN(tmpV)
{
double m00_logE(d00_logE0,((((0.5*Ic1c2)*RCV_TM)*VtINV)+1.0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,((((0.5*Ic1c2)*RCV_TM)*VtINV)+1.0))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vqs_th_Vdt_GND=(VDC_T_Vdt_GND+(((2.0*Vt_Vdt_GND)*d00_logE0)+((2.0*Vt)*(((((0.5*Ic1c2_Vdt_GND)*RCV_TM)+((0.5*Ic1c2)*RCV_TM_Vdt_GND))*VtINV)+(((0.5*Ic1c2)*RCV_TM)*VtINV_Vdt_GND))*d10_logE0)));
Vqs_th_Vb2_c2=((2.0*Vt)*(0.5*Ic1c2_Vb2_c2)*RCV_TM*VtINV*d10_logE0);
Vqs_th_Vb2_c1=(((2.0*Vt)*(0.5*Ic1c2_Vb2_c1)*RCV_TM*VtINV*d10_logE0)-tmpV_Vb2_c1);
Vqs_th_Vc1_c2=((2.0*Vt)*(0.5*Ic1c2_Vc1_c2)*RCV_TM*VtINV*d10_logE0);
#endif
Vqs_th=((VDC_T+((2.0*Vt)*d00_logE0))-tmpV);
EXIT_IF_ISNAN(((VDC_T+((2.0*Vt)*d00_logE0))-tmpV))
}
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
eps_VDC_Vdt_GND=(0.2*VDC_T_Vdt_GND);
#endif
eps_VDC=(0.2*VDC_T);
EXIT_IF_ISNAN((0.2*VDC_T))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
eps2_Vdt_GND=((eps_VDC_Vdt_GND*eps_VDC)+(eps_VDC*eps_VDC_Vdt_GND));
#endif
eps2=(eps_VDC*eps_VDC);
EXIT_IF_ISNAN((eps_VDC*eps_VDC))
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
x2_Vb_c=0.0;
x2_Vb_b1=0.0;
x2_Vb1_b2=0.0;
x2_Vc4_c1=0.0;
x2_Vc3_c1=0.0;
x2_Vc3_c4=0.0;
x2_Vb2_e1=0.0;
x2_Vdt_GND=((Vqs_th_Vdt_GND*Vqs_th)+(Vqs_th*Vqs_th_Vdt_GND));
x2_Vb2_c2=((Vqs_th_Vb2_c2*Vqs_th)+(Vqs_th*Vqs_th_Vb2_c2));
x2_Vb2_c1=((Vqs_th_Vb2_c1*Vqs_th)+(Vqs_th*Vqs_th_Vb2_c1));
x2_Vc1_c2=((Vqs_th_Vc1_c2*Vqs_th)+(Vqs_th*Vqs_th_Vc1_c2));
#endif
x2=(Vqs_th*Vqs_th);
EXIT_IF_ISNAN((Vqs_th*Vqs_th))
if
((Vqs_th<0.0))
{
{
double m00_sqrt(d00_sqrt0,(x2+eps2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(x2+eps2))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vqs_Vdt_GND=(((0.5*eps2_Vdt_GND)*(d00_sqrt0-Vqs_th)-(0.5*eps2)*((x2_Vdt_GND+eps2_Vdt_GND)*d10_sqrt0-Vqs_th_Vdt_GND))/(d00_sqrt0-Vqs_th)/(d00_sqrt0-Vqs_th));
Vqs_Vb2_c2=(-(0.5*eps2)*(x2_Vb2_c2*d10_sqrt0-Vqs_th_Vb2_c2)/(d00_sqrt0-Vqs_th)/(d00_sqrt0-Vqs_th));
Vqs_Vb2_c1=(-(0.5*eps2)*(x2_Vb2_c1*d10_sqrt0-Vqs_th_Vb2_c1)/(d00_sqrt0-Vqs_th)/(d00_sqrt0-Vqs_th));
Vqs_Vc1_c2=(-(0.5*eps2)*(x2_Vc1_c2*d10_sqrt0-Vqs_th_Vc1_c2)/(d00_sqrt0-Vqs_th)/(d00_sqrt0-Vqs_th));
#endif
Vqs=((0.5*eps2)/(d00_sqrt0-Vqs_th));
EXIT_IF_ISNAN(((0.5*eps2)/(d00_sqrt0-Vqs_th)))
}
}
else
{
{
double m00_sqrt(d00_sqrt0,(x2+eps2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(x2+eps2))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vqs_Vdt_GND=(0.5*((x2_Vdt_GND+eps2_Vdt_GND)*d10_sqrt0+Vqs_th_Vdt_GND));
Vqs_Vb2_c2=(0.5*(x2_Vb2_c2*d10_sqrt0+Vqs_th_Vb2_c2));
Vqs_Vb2_c1=(0.5*(x2_Vb2_c1*d10_sqrt0+Vqs_th_Vb2_c1));
Vqs_Vc1_c2=(0.5*(x2_Vc1_c2*d10_sqrt0+Vqs_th_Vc1_c2));
#endif
Vqs=(0.5*(d00_sqrt0+Vqs_th));
EXIT_IF_ISNAN((0.5*(d00_sqrt0+Vqs_th)))
}
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vqs_Vdt_GND=Vqs_Vdt_GND;
Vqs_Vb2_c2=Vqs_Vb2_c2;
Vqs_Vb2_c1=Vqs_Vb2_c1;
Vqs_Vc1_c2=Vqs_Vc1_c2;
#endif
Vqs=Vqs;
EXIT_IF_ISNAN(Vqs)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Iqs_Vdt_GND=((((Vqs_Vdt_GND*(Vqs+(IHC_M*SCRCV_M)))+(Vqs*Vqs_Vdt_GND))*(SCRCV_M*(Vqs+(IHC_M*RCV_TM)))-(Vqs*(Vqs+(IHC_M*SCRCV_M)))*(SCRCV_M*(Vqs_Vdt_GND+(IHC_M*RCV_TM_Vdt_GND))))/(SCRCV_M*(Vqs+(IHC_M*RCV_TM)))/(SCRCV_M*(Vqs+(IHC_M*RCV_TM))));
Iqs_Vb2_c2=((((Vqs_Vb2_c2*(Vqs+(IHC_M*SCRCV_M)))+(Vqs*Vqs_Vb2_c2))*(SCRCV_M*(Vqs+(IHC_M*RCV_TM)))-(Vqs*(Vqs+(IHC_M*SCRCV_M)))*(SCRCV_M*Vqs_Vb2_c2))/(SCRCV_M*(Vqs+(IHC_M*RCV_TM)))/(SCRCV_M*(Vqs+(IHC_M*RCV_TM))));
Iqs_Vb2_c1=((((Vqs_Vb2_c1*(Vqs+(IHC_M*SCRCV_M)))+(Vqs*Vqs_Vb2_c1))*(SCRCV_M*(Vqs+(IHC_M*RCV_TM)))-(Vqs*(Vqs+(IHC_M*SCRCV_M)))*(SCRCV_M*Vqs_Vb2_c1))/(SCRCV_M*(Vqs+(IHC_M*RCV_TM)))/(SCRCV_M*(Vqs+(IHC_M*RCV_TM))));
Iqs_Vc1_c2=((((Vqs_Vc1_c2*(Vqs+(IHC_M*SCRCV_M)))+(Vqs*Vqs_Vc1_c2))*(SCRCV_M*(Vqs+(IHC_M*RCV_TM)))-(Vqs*(Vqs+(IHC_M*SCRCV_M)))*(SCRCV_M*Vqs_Vc1_c2))/(SCRCV_M*(Vqs+(IHC_M*RCV_TM)))/(SCRCV_M*(Vqs+(IHC_M*RCV_TM))));
#endif
Iqs=((Vqs*(Vqs+(IHC_M*SCRCV_M)))/(SCRCV_M*(Vqs+(IHC_M*RCV_TM))));
EXIT_IF_ISNAN(((Vqs*(Vqs+(IHC_M*SCRCV_M)))/(SCRCV_M*(Vqs+(IHC_M*RCV_TM)))))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Ic1c2_Iqs_Vdt_GND=((Ic1c2_Vdt_GND*Iqs-Ic1c2*Iqs_Vdt_GND)/Iqs/Iqs);
Ic1c2_Iqs_Vb2_c2=((Ic1c2_Vb2_c2*Iqs-Ic1c2*Iqs_Vb2_c2)/Iqs/Iqs);
Ic1c2_Iqs_Vb2_c1=((Ic1c2_Vb2_c1*Iqs-Ic1c2*Iqs_Vb2_c1)/Iqs/Iqs);
Ic1c2_Iqs_Vc1_c2=((Ic1c2_Vc1_c2*Iqs-Ic1c2*Iqs_Vc1_c2)/Iqs/Iqs);
#endif
Ic1c2_Iqs=(Ic1c2/Iqs);
EXIT_IF_ISNAN((Ic1c2/Iqs))
#if defined(_DERIVATE) /* probe=V(s:c1)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
dxa_Vs_c1=0.0;
dxa_Vb_c=0.0;
dxa_Vb_b1=0.0;
dxa_Vc3_c1=0.0;
dxa_Vc3_c4=0.0;
dxa_Vb1_b2=0.0;
dxa_Vc4_c1=0.0;
dxa_Vb1_e1=0.0;
dxa_Vb2_e1=0.0;
dxa_Vb2_c2=(Ic1c2_Iqs_Vb2_c2/pModel->AXI);
dxa_Vb2_c1=(Ic1c2_Iqs_Vb2_c1/pModel->AXI);
dxa_Vc1_c2=(Ic1c2_Iqs_Vc1_c2/pModel->AXI);
dxa_Vdt_GND=(Ic1c2_Iqs_Vdt_GND/pModel->AXI);
#endif
dxa=((Ic1c2_Iqs-1.0)/pModel->AXI);
EXIT_IF_ISNAN(((Ic1c2_Iqs-1.0)/pModel->AXI))
if
((Ic1c2_Iqs<1.0))
{
{
double m00_exp(d00_exp0,dxa)
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
alpha1_Vb2_c2=(pModel->AXI*dxa_Vb2_c2*d10_exp0*d10_logE1);
alpha1_Vb2_c1=(pModel->AXI*dxa_Vb2_c1*d10_exp0*d10_logE1);
alpha1_Vc1_c2=(pModel->AXI*dxa_Vc1_c2*d10_exp0*d10_logE1);
alpha1_Vdt_GND=(pModel->AXI*dxa_Vdt_GND*d10_exp0*d10_logE1);
#endif
alpha1=(1.0+(pModel->AXI*d00_logE1));
EXIT_IF_ISNAN((1.0+(pModel->AXI*d00_logE1)))
}
}
else
{
{
double m00_exp(d00_exp0,(-dxa))
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
alpha1_Vb2_c2=(Ic1c2_Iqs_Vb2_c2+(pModel->AXI*(-dxa_Vb2_c2)*d10_exp0*d10_logE1));
alpha1_Vb2_c1=(Ic1c2_Iqs_Vb2_c1+(pModel->AXI*(-dxa_Vb2_c1)*d10_exp0*d10_logE1));
alpha1_Vc1_c2=(Ic1c2_Iqs_Vc1_c2+(pModel->AXI*(-dxa_Vc1_c2)*d10_exp0*d10_logE1));
alpha1_Vdt_GND=(Ic1c2_Iqs_Vdt_GND+(pModel->AXI*(-dxa_Vdt_GND)*d10_exp0*d10_logE1));
#endif
alpha1=(Ic1c2_Iqs+(pModel->AXI*d00_logE1));
EXIT_IF_ISNAN((Ic1c2_Iqs+(pModel->AXI*d00_logE1)))
}
}
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
alpha1_Vb2_c2=alpha1_Vb2_c2;
alpha1_Vb2_c1=alpha1_Vb2_c1;
alpha1_Vc1_c2=alpha1_Vc1_c2;
alpha1_Vdt_GND=alpha1_Vdt_GND;
#endif
alpha1=alpha1;
EXIT_IF_ISNAN(alpha1)
{
double m00_exp(d00_exp0,((-1.0)/pModel->AXI))
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
alpha_Vb2_c2=(alpha1_Vb2_c2/(1.0+(pModel->AXI*d00_logE1)));
alpha_Vb2_c1=(alpha1_Vb2_c1/(1.0+(pModel->AXI*d00_logE1)));
alpha_Vc1_c2=(alpha1_Vc1_c2/(1.0+(pModel->AXI*d00_logE1)));
alpha_Vdt_GND=(alpha1_Vdt_GND/(1.0+(pModel->AXI*d00_logE1)));
#endif
alpha=(alpha1/(1.0+(pModel->AXI*d00_logE1)));
EXIT_IF_ISNAN((alpha1/(1.0+(pModel->AXI*d00_logE1))))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
vyi_Vdt_GND=(Vqs_Vdt_GND/(IHC_M*SCRCV_M));
vyi_Vb2_c2=(Vqs_Vb2_c2/(IHC_M*SCRCV_M));
vyi_Vb2_c1=(Vqs_Vb2_c1/(IHC_M*SCRCV_M));
vyi_Vc1_c2=(Vqs_Vc1_c2/(IHC_M*SCRCV_M));
#endif
vyi=(Vqs/(IHC_M*SCRCV_M));
EXIT_IF_ISNAN((Vqs/(IHC_M*SCRCV_M)))
{
double m00_sqrt(d00_sqrt0,(1.0+(((4.0*alpha)*vyi)*(1.0+vyi))))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+(((4.0*alpha)*vyi)*(1.0+vyi))))
#endif
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
yi_Vb2_c2=(((((((4.0*alpha_Vb2_c2)*vyi)+((4.0*alpha)*vyi_Vb2_c2))*(1.0+vyi))+(((4.0*alpha)*vyi)*vyi_Vb2_c2))*d10_sqrt0*((2.0*alpha)*(1.0+vyi))-(1.0+d00_sqrt0)*(((2.0*alpha_Vb2_c2)*(1.0+vyi))+((2.0*alpha)*vyi_Vb2_c2)))/((2.0*alpha)*(1.0+vyi))/((2.0*alpha)*(1.0+vyi)));
yi_Vb2_c1=(((((((4.0*alpha_Vb2_c1)*vyi)+((4.0*alpha)*vyi_Vb2_c1))*(1.0+vyi))+(((4.0*alpha)*vyi)*vyi_Vb2_c1))*d10_sqrt0*((2.0*alpha)*(1.0+vyi))-(1.0+d00_sqrt0)*(((2.0*alpha_Vb2_c1)*(1.0+vyi))+((2.0*alpha)*vyi_Vb2_c1)))/((2.0*alpha)*(1.0+vyi))/((2.0*alpha)*(1.0+vyi)));
yi_Vc1_c2=(((((((4.0*alpha_Vc1_c2)*vyi)+((4.0*alpha)*vyi_Vc1_c2))*(1.0+vyi))+(((4.0*alpha)*vyi)*vyi_Vc1_c2))*d10_sqrt0*((2.0*alpha)*(1.0+vyi))-(1.0+d00_sqrt0)*(((2.0*alpha_Vc1_c2)*(1.0+vyi))+((2.0*alpha)*vyi_Vc1_c2)))/((2.0*alpha)*(1.0+vyi))/((2.0*alpha)*(1.0+vyi)));
yi_Vdt_GND=(((((((4.0*alpha_Vdt_GND)*vyi)+((4.0*alpha)*vyi_Vdt_GND))*(1.0+vyi))+(((4.0*alpha)*vyi)*vyi_Vdt_GND))*d10_sqrt0*((2.0*alpha)*(1.0+vyi))-(1.0+d00_sqrt0)*(((2.0*alpha_Vdt_GND)*(1.0+vyi))+((2.0*alpha)*vyi_Vdt_GND)))/((2.0*alpha)*(1.0+vyi))/((2.0*alpha)*(1.0+vyi)));
#endif
yi=((1.0+d00_sqrt0)/((2.0*alpha)*(1.0+vyi)));
EXIT_IF_ISNAN(((1.0+d00_sqrt0)/((2.0*alpha)*(1.0+vyi))))
}
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
xi_w_Vb2_c2=(-((yi_Vb2_c2*(1.0+(pW*yi))-yi*(pW*yi_Vb2_c2))/(1.0+(pW*yi))/(1.0+(pW*yi))));
xi_w_Vb2_c1=(-((yi_Vb2_c1*(1.0+(pW*yi))-yi*((pW_Vb2_c1*yi)+(pW*yi_Vb2_c1)))/(1.0+(pW*yi))/(1.0+(pW*yi))));
xi_w_Vc1_c2=(-((yi_Vc1_c2*(1.0+(pW*yi))-yi*(pW*yi_Vc1_c2))/(1.0+(pW*yi))/(1.0+(pW*yi))));
xi_w_Vdt_GND=(-((yi_Vdt_GND*(1.0+(pW*yi))-yi*((pW_Vdt_GND*yi)+(pW*yi_Vdt_GND)))/(1.0+(pW*yi))/(1.0+(pW*yi))));
#endif
xi_w=(1.0-(yi/(1.0+(pW*yi))));
EXIT_IF_ISNAN((1.0-(yi/(1.0+(pW*yi)))))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
gp0_Vdt_GND=(((((((0.5*Ic1c2_Vdt_GND)*RCV_TM)+((0.5*Ic1c2)*RCV_TM_Vdt_GND))*xi_w)+(((0.5*Ic1c2)*RCV_TM)*xi_w_Vdt_GND))*VtINV)+((((0.5*Ic1c2)*RCV_TM)*xi_w)*VtINV_Vdt_GND));
gp0_Vb2_c2=(((0.5*Ic1c2_Vb2_c2)*RCV_TM*xi_w)+(((0.5*Ic1c2)*RCV_TM)*xi_w_Vb2_c2))*VtINV;
gp0_Vb2_c1=(((0.5*Ic1c2_Vb2_c1)*RCV_TM*xi_w)+(((0.5*Ic1c2)*RCV_TM)*xi_w_Vb2_c1))*VtINV;
gp0_Vc1_c2=(((0.5*Ic1c2_Vc1_c2)*RCV_TM*xi_w)+(((0.5*Ic1c2)*RCV_TM)*xi_w_Vc1_c2))*VtINV;
#endif
gp0=((((0.5*Ic1c2)*RCV_TM)*xi_w)*VtINV);
EXIT_IF_ISNAN(((((0.5*Ic1c2)*RCV_TM)*xi_w)*VtINV))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
gp0_help_Vdt_GND=((2.0*gp0_Vdt_GND)+((pW_Vdt_GND*((pW+gp0)+1.0))+(pW*(pW_Vdt_GND+gp0_Vdt_GND))));
gp0_help_Vb2_c2=((2.0*gp0_Vb2_c2)+(pW*gp0_Vb2_c2));
gp0_help_Vb2_c1=((2.0*gp0_Vb2_c1)+((pW_Vb2_c1*((pW+gp0)+1.0))+(pW*(pW_Vb2_c1+gp0_Vb2_c1))));
gp0_help_Vc1_c2=((2.0*gp0_Vc1_c2)+(pW*gp0_Vc1_c2));
#endif
gp0_help=((2.0*gp0)+(pW*((pW+gp0)+1.0)));
EXIT_IF_ISNAN(((2.0*gp0)+(pW*((pW+gp0)+1.0))))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
gp02_Vdt_GND=(0.5*gp0_Vdt_GND);
gp02_Vb2_c2=(0.5*gp0_Vb2_c2);
gp02_Vb2_c1=(0.5*gp0_Vb2_c1);
gp02_Vc1_c2=(0.5*gp0_Vc1_c2);
#endif
gp02=(0.5*(gp0-1.0));
EXIT_IF_ISNAN((0.5*(gp0-1.0)))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
sqr_arg_Vdt_GND=(((gp02_Vdt_GND*gp02)+(gp02*gp02_Vdt_GND))+gp0_help_Vdt_GND);
sqr_arg_Vb2_c2=(((gp02_Vb2_c2*gp02)+(gp02*gp02_Vb2_c2))+gp0_help_Vb2_c2);
sqr_arg_Vb2_c1=(((gp02_Vb2_c1*gp02)+(gp02*gp02_Vb2_c1))+gp0_help_Vb2_c1);
sqr_arg_Vc1_c2=(((gp02_Vc1_c2*gp02)+(gp02*gp02_Vc1_c2))+gp0_help_Vc1_c2);
#endif
sqr_arg=((gp02*gp02)+gp0_help);
EXIT_IF_ISNAN(((gp02*gp02)+gp0_help))
if
((gp0>=1.0))
{
{
double m00_sqrt(d00_sqrt0,sqr_arg)
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,sqr_arg)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
p0star_Vdt_GND=(gp02_Vdt_GND+sqr_arg_Vdt_GND*d10_sqrt0);
p0star_Vb2_c2=(gp02_Vb2_c2+sqr_arg_Vb2_c2*d10_sqrt0);
p0star_Vb2_c1=(gp02_Vb2_c1+sqr_arg_Vb2_c1*d10_sqrt0);
p0star_Vc1_c2=(gp02_Vc1_c2+sqr_arg_Vc1_c2*d10_sqrt0);
#endif
p0star=(gp02+d00_sqrt0);
EXIT_IF_ISNAN((gp02+d00_sqrt0))
}
}
else
{
{
double m00_sqrt(d00_sqrt0,sqr_arg)
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,sqr_arg)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
p0star_Vdt_GND=((gp0_help_Vdt_GND*(d00_sqrt0-gp02)-gp0_help*(sqr_arg_Vdt_GND*d10_sqrt0-gp02_Vdt_GND))/(d00_sqrt0-gp02)/(d00_sqrt0-gp02));
p0star_Vb2_c2=((gp0_help_Vb2_c2*(d00_sqrt0-gp02)-gp0_help*(sqr_arg_Vb2_c2*d10_sqrt0-gp02_Vb2_c2))/(d00_sqrt0-gp02)/(d00_sqrt0-gp02));
p0star_Vb2_c1=((gp0_help_Vb2_c1*(d00_sqrt0-gp02)-gp0_help*(sqr_arg_Vb2_c1*d10_sqrt0-gp02_Vb2_c1))/(d00_sqrt0-gp02)/(d00_sqrt0-gp02));
p0star_Vc1_c2=((gp0_help_Vc1_c2*(d00_sqrt0-gp02)-gp0_help*(sqr_arg_Vc1_c2*d10_sqrt0-gp02_Vc1_c2))/(d00_sqrt0-gp02)/(d00_sqrt0-gp02));
#endif
p0star=(gp0_help/(d00_sqrt0-gp02));
EXIT_IF_ISNAN((gp0_help/(d00_sqrt0-gp02)))
}
}
if
((p0star<1.0e-40))
{
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
p0star_Vdt_GND=0.0;
p0star_Vb2_c2=0.0;
p0star_Vb2_c1=0.0;
p0star_Vc1_c2=0.0;
#endif
p0star=0.0;
EXIT_IF_ISNAN(0.0)
}
{
double m00_exp(d00_exp0,(VDC_T*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
eVb2c2star_Vdt_GND=((((p0star_Vdt_GND*(p0star+1.0))+(p0star*p0star_Vdt_GND))*d00_exp0)+((p0star*(p0star+1.0))*((VDC_T_Vdt_GND*VtINV)+(VDC_T*VtINV_Vdt_GND))*d10_exp0));
eVb2c2star_Vb2_c2=((p0star_Vb2_c2*(p0star+1.0))+(p0star*p0star_Vb2_c2))*d00_exp0;
eVb2c2star_Vb2_c1=((p0star_Vb2_c1*(p0star+1.0))+(p0star*p0star_Vb2_c1))*d00_exp0;
eVb2c2star_Vc1_c2=((p0star_Vc1_c2*(p0star+1.0))+(p0star*p0star_Vc1_c2))*d00_exp0;
#endif
eVb2c2star=((p0star*(p0star+1.0))*d00_exp0);
EXIT_IF_ISNAN(((p0star*(p0star+1.0))*d00_exp0))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
B1_Vdt_GND=((0.5*SCRCV_M)*Ic1c2_Vdt_GND);
B1_Vb2_c2=((0.5*SCRCV_M)*Ic1c2_Vb2_c2);
B1_Vb2_c1=((0.5*SCRCV_M)*Ic1c2_Vb2_c1);
B1_Vc1_c2=((0.5*SCRCV_M)*Ic1c2_Vc1_c2);
#endif
B1=((0.5*SCRCV_M)*(Ic1c2-IHC_M));
EXIT_IF_ISNAN(((0.5*SCRCV_M)*(Ic1c2-IHC_M)))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
B2_Vdt_GND=(((SCRCV_M*RCV_TM_Vdt_GND)*IHC_M*Ic1c2)+(((SCRCV_M*RCV_TM)*IHC_M)*Ic1c2_Vdt_GND));
B2_Vb2_c2=(((SCRCV_M*RCV_TM)*IHC_M)*Ic1c2_Vb2_c2);
B2_Vb2_c1=(((SCRCV_M*RCV_TM)*IHC_M)*Ic1c2_Vb2_c1);
B2_Vc1_c2=(((SCRCV_M*RCV_TM)*IHC_M)*Ic1c2_Vc1_c2);
#endif
B2=(((SCRCV_M*RCV_TM)*IHC_M)*Ic1c2);
EXIT_IF_ISNAN((((SCRCV_M*RCV_TM)*IHC_M)*Ic1c2))
{
double m00_sqrt(d00_sqrt0,((B1*B1)+B2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((B1*B1)+B2))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vxi0_Vdt_GND=(B1_Vdt_GND+(((B1_Vdt_GND*B1)+(B1*B1_Vdt_GND))+B2_Vdt_GND)*d10_sqrt0);
Vxi0_Vb2_c2=(B1_Vb2_c2+(((B1_Vb2_c2*B1)+(B1*B1_Vb2_c2))+B2_Vb2_c2)*d10_sqrt0);
Vxi0_Vb2_c1=(B1_Vb2_c1+(((B1_Vb2_c1*B1)+(B1*B1_Vb2_c1))+B2_Vb2_c1)*d10_sqrt0);
Vxi0_Vc1_c2=(B1_Vc1_c2+(((B1_Vc1_c2*B1)+(B1*B1_Vc1_c2))+B2_Vc1_c2)*d10_sqrt0);
#endif
Vxi0=(B1+d00_sqrt0);
EXIT_IF_ISNAN((B1+d00_sqrt0))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vch_Vdt_GND=((VDC_T_Vdt_GND*(0.1+((2.0*Ic1c2)/(Ic1c2+Iqs))))+(VDC_T*(((2.0*Ic1c2_Vdt_GND)*(Ic1c2+Iqs)-(2.0*Ic1c2)*(Ic1c2_Vdt_GND+Iqs_Vdt_GND))/(Ic1c2+Iqs)/(Ic1c2+Iqs))));
Vch_Vb2_c2=(VDC_T*(((2.0*Ic1c2_Vb2_c2)*(Ic1c2+Iqs)-(2.0*Ic1c2)*(Ic1c2_Vb2_c2+Iqs_Vb2_c2))/(Ic1c2+Iqs)/(Ic1c2+Iqs)));
Vch_Vb2_c1=(VDC_T*(((2.0*Ic1c2_Vb2_c1)*(Ic1c2+Iqs)-(2.0*Ic1c2)*(Ic1c2_Vb2_c1+Iqs_Vb2_c1))/(Ic1c2+Iqs)/(Ic1c2+Iqs)));
Vch_Vc1_c2=(VDC_T*(((2.0*Ic1c2_Vc1_c2)*(Ic1c2+Iqs)-(2.0*Ic1c2)*(Ic1c2_Vc1_c2+Iqs_Vc1_c2))/(Ic1c2+Iqs)/(Ic1c2+Iqs)));
#endif
Vch=(VDC_T*(0.1+((2.0*Ic1c2)/(Ic1c2+Iqs))));
EXIT_IF_ISNAN((VDC_T*(0.1+((2.0*Ic1c2)/(Ic1c2+Iqs)))))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Icap_Vdt_GND=(((IHC_M*Ic1c2_Vdt_GND)*(IHC_M+Ic1c2)-(IHC_M*Ic1c2)*Ic1c2_Vdt_GND)/(IHC_M+Ic1c2)/(IHC_M+Ic1c2));
Icap_Vb2_c2=(((IHC_M*Ic1c2_Vb2_c2)*(IHC_M+Ic1c2)-(IHC_M*Ic1c2)*Ic1c2_Vb2_c2)/(IHC_M+Ic1c2)/(IHC_M+Ic1c2));
Icap_Vb2_c1=(((IHC_M*Ic1c2_Vb2_c1)*(IHC_M+Ic1c2)-(IHC_M*Ic1c2)*Ic1c2_Vb2_c1)/(IHC_M+Ic1c2)/(IHC_M+Ic1c2));
Icap_Vc1_c2=(((IHC_M*Ic1c2_Vc1_c2)*(IHC_M+Ic1c2)-(IHC_M*Ic1c2)*Ic1c2_Vc1_c2)/(IHC_M+Ic1c2)/(IHC_M+Ic1c2));
#endif
Icap=((IHC_M*Ic1c2)/(IHC_M+Ic1c2));
EXIT_IF_ISNAN(((IHC_M*Ic1c2)/(IHC_M+Ic1c2)))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Icap_IHC_Vdt_GND=(-IHC_M*Ic1c2_Vdt_GND/(IHC_M+Ic1c2)/(IHC_M+Ic1c2));
Icap_IHC_Vb2_c2=(-IHC_M*Ic1c2_Vb2_c2/(IHC_M+Ic1c2)/(IHC_M+Ic1c2));
Icap_IHC_Vb2_c1=(-IHC_M*Ic1c2_Vb2_c1/(IHC_M+Ic1c2)/(IHC_M+Ic1c2));
Icap_IHC_Vc1_c2=(-IHC_M*Ic1c2_Vc1_c2/(IHC_M+Ic1c2)/(IHC_M+Ic1c2));
#endif
Icap_IHC=(IHC_M/(IHC_M+Ic1c2));
EXIT_IF_ISNAN((IHC_M/(IHC_M+Ic1c2)))
}
else
{
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
p0star_Vdt_GND=(((2.0*eVb2c2VDC_Vdt_GND)*(1.0+K0)-(2.0*eVb2c2VDC)*K0_Vdt_GND)/(1.0+K0)/(1.0+K0));
p0star_Vb2_c2=(((2.0*eVb2c2VDC_Vb2_c2)*(1.0+K0)-(2.0*eVb2c2VDC)*K0_Vb2_c2)/(1.0+K0)/(1.0+K0));
p0star_Vb2_c1=0.0;
p0star_Vc1_c2=0.0;
#endif
p0star=((2.0*eVb2c2VDC)/(1.0+K0));
EXIT_IF_ISNAN(((2.0*eVb2c2VDC)/(1.0+K0)))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
eVb2c2star_Vdt_GND=eVb2c2_Vdt_GND;
eVb2c2star_Vb2_c2=eVb2c2_Vb2_c2;
eVb2c2star_Vb2_c1=0.0;
eVb2c2star_Vc1_c2=0.0;
#endif
eVb2c2star=eVb2c2;
EXIT_IF_ISNAN(eVb2c2)
{
double m00_fabs(d00_fabs0,Vc1c2)
double m00_fabs(d00_fabs1,Ec)
if
(((d00_fabs0<(1.0e-5*Vt))||(d00_fabs1<((1.0e-40*Vt)*(K0+Kw)))))
{
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
pav_Vdt_GND=(0.5*(p0star_Vdt_GND+pW_Vdt_GND));
pav_Vb2_c2=(0.5*p0star_Vb2_c2);
pav_Vb2_c1=(0.5*(p0star_Vb2_c1+pW_Vb2_c1));
pav_Vc1_c2=(0.5*p0star_Vc1_c2);
#endif
pav=(0.5*(p0star+pW));
EXIT_IF_ISNAN((0.5*(p0star+pW)))
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
xi_w_Vb2_c2=((pav_Vb2_c2*(pav+1.0)-pav*pav_Vb2_c2)/(pav+1.0)/(pav+1.0));
xi_w_Vb2_c1=((pav_Vb2_c1*(pav+1.0)-pav*pav_Vb2_c1)/(pav+1.0)/(pav+1.0));
xi_w_Vc1_c2=((pav_Vc1_c2*(pav+1.0)-pav*pav_Vc1_c2)/(pav+1.0)/(pav+1.0));
xi_w_Vdt_GND=((pav_Vdt_GND*(pav+1.0)-pav*pav_Vdt_GND)/(pav+1.0)/(pav+1.0));
#endif
xi_w=(pav/(pav+1.0));
EXIT_IF_ISNAN((pav/(pav+1.0)))
}
else
{
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
xi_w_Vb2_c2=((Ec_Vb2_c2*((Ec+Vb2c2)-Vb2c1)-Ec*(Ec_Vb2_c2+Vb2c2_Vb2_c2))/((Ec+Vb2c2)-Vb2c1)/((Ec+Vb2c2)-Vb2c1));
xi_w_Vb2_c1=((Ec_Vb2_c1*((Ec+Vb2c2)-Vb2c1)-Ec*(Ec_Vb2_c1-Vb2c1_Vb2_c1))/((Ec+Vb2c2)-Vb2c1)/((Ec+Vb2c2)-Vb2c1));
xi_w_Vc1_c2=0.0;
xi_w_Vdt_GND=((Ec_Vdt_GND*((Ec+Vb2c2)-Vb2c1)-Ec*Ec_Vdt_GND)/((Ec+Vb2c2)-Vb2c1)/((Ec+Vb2c2)-Vb2c1));
#endif
xi_w=(Ec/((Ec+Vb2c2)-Vb2c1));
EXIT_IF_ISNAN((Ec/((Ec+Vb2c2)-Vb2c1)))
}
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vxi0_Vdt_GND=0.0;
Vxi0_Vb2_c2=0.0;
Vxi0_Vb2_c1=0.0;
Vxi0_Vc1_c2=Vc1c2_Vc1_c2;
#endif
Vxi0=Vc1c2;
EXIT_IF_ISNAN(Vc1c2)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vch_Vdt_GND=(0.1*VDC_T_Vdt_GND);
Vch_Vb2_c2=0.0;
Vch_Vb2_c1=0.0;
Vch_Vc1_c2=0.0;
#endif
Vch=(0.1*VDC_T);
EXIT_IF_ISNAN((0.1*VDC_T))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Icap_Vdt_GND=Ic1c2_Vdt_GND;
Icap_Vb2_c2=Ic1c2_Vb2_c2;
Icap_Vb2_c1=Ic1c2_Vb2_c1;
Icap_Vc1_c2=Ic1c2_Vc1_c2;
#endif
Icap=Ic1c2;
EXIT_IF_ISNAN(Ic1c2)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Icap_IHC_Vdt_GND=(-(Icap_Vdt_GND/IHC_M));
Icap_IHC_Vb2_c2=(-(Icap_Vb2_c2/IHC_M));
Icap_IHC_Vb2_c1=(-(Icap_Vb2_c1/IHC_M));
Icap_IHC_Vc1_c2=(-(Icap_Vc1_c2/IHC_M));
#endif
Icap_IHC=(1.0-(Icap/IHC_M));
EXIT_IF_ISNAN((1.0-(Icap/IHC_M)))
}
{
double m00_pow(d00_pow0,3.0,((-1.0)/pModel->PE))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Vfe_Vdt_GND=VDE_T_Vdt_GND*(1.0-d00_pow0);
#endif
Vfe=(VDE_T*(1.0-d00_pow0));
EXIT_IF_ISNAN((VDE_T*(1.0-d00_pow0)))
}
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
a_VDE_Vdt_GND=(0.1*VDE_T_Vdt_GND);
#endif
a_VDE=(0.1*VDE_T);
EXIT_IF_ISNAN((0.1*VDE_T))
#if defined(_DERIVATE) /* probe=V(s:c1)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
dxa_Vs_c1=0.0;
dxa_Vb_c=0.0;
dxa_Vb_b1=0.0;
dxa_Vc3_c1=0.0;
dxa_Vc3_c4=0.0;
dxa_Vb1_b2=0.0;
dxa_Vc4_c1=0.0;
dxa_Vb1_e1=0.0;
dxa_Vb2_e1=(Vb2e1_Vb2_e1/a_VDE);
dxa_Vb2_c2=0.0;
dxa_Vb2_c1=0.0;
dxa_Vc1_c2=0.0;
dxa_Vdt_GND=(((-Vfe_Vdt_GND)*a_VDE-(Vb2e1-Vfe)*a_VDE_Vdt_GND)/a_VDE/a_VDE);
#endif
dxa=((Vb2e1-Vfe)/a_VDE);
EXIT_IF_ISNAN(((Vb2e1-Vfe)/a_VDE))
if
((Vb2e1<Vfe))
{
{
double m00_exp(d00_exp0,dxa)
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b2:e1)V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vje_Vb2_e1=(Vb2e1_Vb2_e1-(a_VDE*dxa_Vb2_e1*d10_exp0*d10_logE1));
Vje_Vdt_GND=(-((a_VDE_Vdt_GND*d00_logE1)+(a_VDE*dxa_Vdt_GND*d10_exp0*d10_logE1)));
Vje_Vb2_c2=(-(a_VDE*dxa_Vb2_c2*d10_exp0*d10_logE1));
Vje_Vb2_c1=(-(a_VDE*dxa_Vb2_c1*d10_exp0*d10_logE1));
Vje_Vc1_c2=(-(a_VDE*dxa_Vc1_c2*d10_exp0*d10_logE1));
#endif
Vje=(Vb2e1-(a_VDE*d00_logE1));
EXIT_IF_ISNAN((Vb2e1-(a_VDE*d00_logE1)))
}
}
else
{
{
double m00_exp(d00_exp0,(-dxa))
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b2:e1)V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vje_Vb2_e1=(-(a_VDE*(-dxa_Vb2_e1)*d10_exp0*d10_logE1));
Vje_Vdt_GND=(Vfe_Vdt_GND-((a_VDE_Vdt_GND*d00_logE1)+(a_VDE*(-dxa_Vdt_GND)*d10_exp0*d10_logE1)));
Vje_Vb2_c2=(-(a_VDE*(-dxa_Vb2_c2)*d10_exp0*d10_logE1));
Vje_Vb2_c1=(-(a_VDE*(-dxa_Vb2_c1)*d10_exp0*d10_logE1));
Vje_Vc1_c2=(-(a_VDE*(-dxa_Vc1_c2)*d10_exp0*d10_logE1));
#endif
Vje=(Vfe-(a_VDE*d00_logE1));
EXIT_IF_ISNAN((Vfe-(a_VDE*d00_logE1)))
}
}
#if defined(_DERIVATE) /* probe=V(b2:e1)V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vje_Vb2_e1=Vje_Vb2_e1;
Vje_Vdt_GND=Vje_Vdt_GND;
Vje_Vb2_c2=Vje_Vb2_c2;
Vje_Vb2_c1=Vje_Vb2_c1;
Vje_Vc1_c2=Vje_Vc1_c2;
#endif
Vje=Vje;
EXIT_IF_ISNAN(Vje)
{
double m00_pow(d00_pow0,(1.0-(Vje/VDE_T)),(1.0-pModel->PE))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(1.0-(Vje/VDE_T)),(1.0-pModel->PE))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vte_Vdt_GND=((((VDE_T_Vdt_GND/(1.0-pModel->PE))*(1.0-d00_pow0))+((VDE_T/(1.0-pModel->PE))*(-(d10_pow0*(-((Vje_Vdt_GND*VDE_T-Vje*VDE_T_Vdt_GND)/VDE_T/VDE_T))))))+(3.0*(-Vje_Vdt_GND)));
Vte_Vb2_e1=(((VDE_T/(1.0-pModel->PE))*(-(d10_pow0*(-(Vje_Vb2_e1/VDE_T)))))+(3.0*(Vb2e1_Vb2_e1-Vje_Vb2_e1)));
Vte_Vb2_c2=(((VDE_T/(1.0-pModel->PE))*(-(d10_pow0*(-(Vje_Vb2_c2/VDE_T)))))+(3.0*(-Vje_Vb2_c2)));
Vte_Vb2_c1=(((VDE_T/(1.0-pModel->PE))*(-(d10_pow0*(-(Vje_Vb2_c1/VDE_T)))))+(3.0*(-Vje_Vb2_c1)));
Vte_Vc1_c2=(((VDE_T/(1.0-pModel->PE))*(-(d10_pow0*(-(Vje_Vc1_c2/VDE_T)))))+(3.0*(-Vje_Vc1_c2)));
#endif
Vte=(((VDE_T/(1.0-pModel->PE))*(1.0-d00_pow0))+(3.0*(Vb2e1-Vje)));
EXIT_IF_ISNAN((((VDE_T/(1.0-pModel->PE))*(1.0-d00_pow0))+(3.0*(Vb2e1-Vje))))
}
#if defined(_DERIVATE) /* probe=V(b2:c1)V(dt:GND)V(b2:c2)V(c1:c2) ddxprobe= */
Vjunc_Vb2_c1=(Vb2c1_Vb2_c1+Vxi0_Vb2_c1);
Vjunc_Vdt_GND=Vxi0_Vdt_GND;
Vjunc_Vb2_c2=Vxi0_Vb2_c2;
Vjunc_Vc1_c2=Vxi0_Vc1_c2;
#endif
Vjunc=(Vb2c1+Vxi0);
EXIT_IF_ISNAN((Vb2c1+Vxi0))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
bjc_Vdt_GND=(((-XP_T_Vdt_GND)*(1.0-XP_T)-(2.0-XP_T)*(-XP_T_Vdt_GND))/(1.0-XP_T)/(1.0-XP_T));
#endif
bjc=((2.0-XP_T)/(1.0-XP_T));
EXIT_IF_ISNAN(((2.0-XP_T)/(1.0-XP_T)))
{
double m00_pow(d00_pow0,bjc,((-1.0)/pModel->PC))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,bjc,((-1.0)/pModel->PC))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Vfc_Vdt_GND=((VDC_T_Vdt_GND*(1.0-d00_pow0))+(VDC_T*(-(d10_pow0*bjc_Vdt_GND))));
#endif
Vfc=(VDC_T*(1.0-d00_pow0));
EXIT_IF_ISNAN((VDC_T*(1.0-d00_pow0)))
}
#if defined(_DERIVATE) /* probe=V(s:c1)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
dxa_Vs_c1=0.0;
dxa_Vb_c=0.0;
dxa_Vb_b1=0.0;
dxa_Vc3_c1=0.0;
dxa_Vc3_c4=0.0;
dxa_Vb1_b2=0.0;
dxa_Vc4_c1=0.0;
dxa_Vb1_e1=0.0;
dxa_Vb2_e1=0.0;
dxa_Vb2_c2=((Vjunc_Vb2_c2*Vch-(Vjunc-Vfc)*Vch_Vb2_c2)/Vch/Vch);
dxa_Vb2_c1=((Vjunc_Vb2_c1*Vch-(Vjunc-Vfc)*Vch_Vb2_c1)/Vch/Vch);
dxa_Vc1_c2=((Vjunc_Vc1_c2*Vch-(Vjunc-Vfc)*Vch_Vc1_c2)/Vch/Vch);
dxa_Vdt_GND=(((Vjunc_Vdt_GND-Vfc_Vdt_GND)*Vch-(Vjunc-Vfc)*Vch_Vdt_GND)/Vch/Vch);
#endif
dxa=((Vjunc-Vfc)/Vch);
EXIT_IF_ISNAN(((Vjunc-Vfc)/Vch))
if
((Vjunc<Vfc))
{
{
double m00_exp(d00_exp0,dxa)
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b2:c1)V(dt:GND)V(b2:c2)V(c1:c2)V(b2:e1) ddxprobe= */
Vjc_Vb2_c1=(Vjunc_Vb2_c1-((Vch_Vb2_c1*d00_logE1)+(Vch*dxa_Vb2_c1*d10_exp0*d10_logE1)));
Vjc_Vdt_GND=(Vjunc_Vdt_GND-((Vch_Vdt_GND*d00_logE1)+(Vch*dxa_Vdt_GND*d10_exp0*d10_logE1)));
Vjc_Vb2_c2=(Vjunc_Vb2_c2-((Vch_Vb2_c2*d00_logE1)+(Vch*dxa_Vb2_c2*d10_exp0*d10_logE1)));
Vjc_Vc1_c2=(Vjunc_Vc1_c2-((Vch_Vc1_c2*d00_logE1)+(Vch*dxa_Vc1_c2*d10_exp0*d10_logE1)));
Vjc_Vb2_e1=(-(Vch*dxa_Vb2_e1*d10_exp0*d10_logE1));
#endif
Vjc=(Vjunc-(Vch*d00_logE1));
EXIT_IF_ISNAN((Vjunc-(Vch*d00_logE1)))
}
}
else
{
{
double m00_exp(d00_exp0,(-dxa))
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b2:c1)V(dt:GND)V(b2:c2)V(c1:c2)V(b2:e1) ddxprobe= */
Vjc_Vb2_c1=(-((Vch_Vb2_c1*d00_logE1)+(Vch*(-dxa_Vb2_c1)*d10_exp0*d10_logE1)));
Vjc_Vdt_GND=(Vfc_Vdt_GND-((Vch_Vdt_GND*d00_logE1)+(Vch*(-dxa_Vdt_GND)*d10_exp0*d10_logE1)));
Vjc_Vb2_c2=(-((Vch_Vb2_c2*d00_logE1)+(Vch*(-dxa_Vb2_c2)*d10_exp0*d10_logE1)));
Vjc_Vc1_c2=(-((Vch_Vc1_c2*d00_logE1)+(Vch*(-dxa_Vc1_c2)*d10_exp0*d10_logE1)));
Vjc_Vb2_e1=(-(Vch*(-dxa_Vb2_e1)*d10_exp0*d10_logE1));
#endif
Vjc=(Vfc-(Vch*d00_logE1));
EXIT_IF_ISNAN((Vfc-(Vch*d00_logE1)))
}
}
#if defined(_DERIVATE) /* probe=V(b2:c1)V(dt:GND)V(b2:c2)V(c1:c2)V(b2:e1) ddxprobe= */
Vjc_Vb2_c1=Vjc_Vb2_c1;
Vjc_Vdt_GND=Vjc_Vdt_GND;
Vjc_Vb2_c2=Vjc_Vb2_c2;
Vjc_Vc1_c2=Vjc_Vc1_c2;
Vjc_Vb2_e1=Vjc_Vb2_e1;
#endif
Vjc=Vjc;
EXIT_IF_ISNAN(Vjc)
{
double m00_pow(d00_pow0,Icap_IHC,pModel->MC)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,Icap_IHC,pModel->MC)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
fI_Vdt_GND=(d10_pow0*Icap_IHC_Vdt_GND);
fI_Vb2_c2=(d10_pow0*Icap_IHC_Vb2_c2);
fI_Vb2_c1=(d10_pow0*Icap_IHC_Vb2_c1);
fI_Vc1_c2=(d10_pow0*Icap_IHC_Vc1_c2);
#endif
fI=d00_pow0;
EXIT_IF_ISNAN(d00_pow0)
}
{
double m00_pow(d00_pow0,(1.0-(Vjc/VDC_T)),(1.0-pModel->PC))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(1.0-(Vjc/VDC_T)),(1.0-pModel->PC))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2)V(b2:e1) ddxprobe= */
Vcv_Vdt_GND=((((VDC_T_Vdt_GND/(1.0-pModel->PC))*(1.0-(fI*d00_pow0)))+((VDC_T/(1.0-pModel->PC))*(-((fI_Vdt_GND*d00_pow0)+(fI*(d10_pow0*(-((Vjc_Vdt_GND*VDC_T-Vjc*VDC_T_Vdt_GND)/VDC_T/VDC_T))))))))+((((fI_Vdt_GND*bjc)+(fI*bjc_Vdt_GND))*(Vjunc-Vjc))+((fI*bjc)*(Vjunc_Vdt_GND-Vjc_Vdt_GND))));
Vcv_Vb2_c2=(((VDC_T/(1.0-pModel->PC))*(-((fI_Vb2_c2*d00_pow0)+(fI*(d10_pow0*(-(Vjc_Vb2_c2/VDC_T)))))))+((fI_Vb2_c2*bjc*(Vjunc-Vjc))+((fI*bjc)*(Vjunc_Vb2_c2-Vjc_Vb2_c2))));
Vcv_Vb2_c1=(((VDC_T/(1.0-pModel->PC))*(-((fI_Vb2_c1*d00_pow0)+(fI*(d10_pow0*(-(Vjc_Vb2_c1/VDC_T)))))))+((fI_Vb2_c1*bjc*(Vjunc-Vjc))+((fI*bjc)*(Vjunc_Vb2_c1-Vjc_Vb2_c1))));
Vcv_Vc1_c2=(((VDC_T/(1.0-pModel->PC))*(-((fI_Vc1_c2*d00_pow0)+(fI*(d10_pow0*(-(Vjc_Vc1_c2/VDC_T)))))))+((fI_Vc1_c2*bjc*(Vjunc-Vjc))+((fI*bjc)*(Vjunc_Vc1_c2-Vjc_Vc1_c2))));
Vcv_Vb2_e1=(((VDC_T/(1.0-pModel->PC))*(-(fI*(d10_pow0*(-(Vjc_Vb2_e1/VDC_T))))))+((fI*bjc)*(-Vjc_Vb2_e1)));
#endif
Vcv=(((VDC_T/(1.0-pModel->PC))*(1.0-(fI*d00_pow0)))+((fI*bjc)*(Vjunc-Vjc)));
EXIT_IF_ISNAN((((VDC_T/(1.0-pModel->PC))*(1.0-(fI*d00_pow0)))+((fI*bjc)*(Vjunc-Vjc))))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2)V(b2:e1) ddxprobe= */
Vtc_Vdt_GND=((((-XP_T_Vdt_GND)*Vcv)+((1.0-XP_T)*Vcv_Vdt_GND))+XP_T_Vdt_GND*Vb2c1);
Vtc_Vb2_c2=((1.0-XP_T)*Vcv_Vb2_c2);
Vtc_Vb2_c1=(((1.0-XP_T)*Vcv_Vb2_c1)+(XP_T*Vb2c1_Vb2_c1));
Vtc_Vc1_c2=((1.0-XP_T)*Vcv_Vc1_c2);
Vtc_Vb2_e1=((1.0-XP_T)*Vcv_Vb2_e1);
#endif
Vtc=(((1.0-XP_T)*Vcv)+(XP_T*Vb2c1));
EXIT_IF_ISNAN((((1.0-XP_T)*Vcv)+(XP_T*Vb2c1)))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
If0_Vdt_GND=(((4.0*IS_TM_Vdt_GND)*IK_TM-(4.0*IS_TM)*IK_TM_Vdt_GND)/IK_TM/IK_TM);
#endif
If0=((4.0*IS_TM)/IK_TM);
EXIT_IF_ISNAN(((4.0*IS_TM)/IK_TM))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1) ddxprobe= */
f1_Vdt_GND=((If0_Vdt_GND*eVb2e1)+(If0*eVb2e1_Vdt_GND));
f1_Vb2_e1=(If0*eVb2e1_Vb2_e1);
#endif
f1=(If0*eVb2e1);
EXIT_IF_ISNAN((If0*eVb2e1))
{
double m00_sqrt(d00_sqrt0,(1.0+f1))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+f1))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1) ddxprobe= */
n0_Vdt_GND=((f1_Vdt_GND*(1.0+d00_sqrt0)-f1*f1_Vdt_GND*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
n0_Vb2_e1=((f1_Vb2_e1*(1.0+d00_sqrt0)-f1*f1_Vb2_e1*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
#endif
n0=(f1/(1.0+d00_sqrt0));
EXIT_IF_ISNAN((f1/(1.0+d00_sqrt0)))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
f2_Vdt_GND=((If0_Vdt_GND*eVb2c2star)+(If0*eVb2c2star_Vdt_GND));
f2_Vb2_c2=(If0*eVb2c2star_Vb2_c2);
f2_Vb2_c1=(If0*eVb2c2star_Vb2_c1);
f2_Vc1_c2=(If0*eVb2c2star_Vc1_c2);
#endif
f2=(If0*eVb2c2star);
EXIT_IF_ISNAN((If0*eVb2c2star))
{
double m00_sqrt(d00_sqrt0,(1.0+f2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+f2))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
nB_Vdt_GND=((f2_Vdt_GND*(1.0+d00_sqrt0)-f2*f2_Vdt_GND*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
nB_Vb2_c2=((f2_Vb2_c2*(1.0+d00_sqrt0)-f2*f2_Vb2_c2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
nB_Vb2_c1=((f2_Vb2_c1*(1.0+d00_sqrt0)-f2*f2_Vb2_c1*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
nB_Vc1_c2=((f2_Vc1_c2*(1.0+d00_sqrt0)-f2*f2_Vc1_c2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
#endif
nB=(f2/(1.0+d00_sqrt0));
EXIT_IF_ISNAN((f2/(1.0+d00_sqrt0)))
}
if
((pModel->DEG==0.0))
{
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
q0I_Vdt_GND=(((Vte_Vdt_GND*VER_T-Vte*VER_T_Vdt_GND)/VER_T/VER_T)+((Vtc_Vdt_GND*VEF_T-Vtc*VEF_T_Vdt_GND)/VEF_T/VEF_T));
q0I_Vb2_e1=((Vte_Vb2_e1/VER_T)+(Vtc_Vb2_e1/VEF_T));
q0I_Vb2_c2=((Vte_Vb2_c2/VER_T)+(Vtc_Vb2_c2/VEF_T));
q0I_Vb2_c1=((Vte_Vb2_c1/VER_T)+(Vtc_Vb2_c1/VEF_T));
q0I_Vc1_c2=((Vte_Vc1_c2/VER_T)+(Vtc_Vc1_c2/VEF_T));
#endif
q0I=((1.0+(Vte/VER_T))+(Vtc/VEF_T));
EXIT_IF_ISNAN(((1.0+(Vte/VER_T))+(Vtc/VEF_T)))
}
else
{
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
termE_Vdt_GND=((((((Vte_Vdt_GND*VER_T-Vte*VER_T_Vdt_GND)/VER_T/VER_T)*DEG_T)+(((Vte/VER_T)+1.0)*DEG_T_Vdt_GND))*VtINV)+((((Vte/VER_T)+1.0)*DEG_T)*VtINV_Vdt_GND));
termE_Vb2_e1=(Vte_Vb2_e1/VER_T)*DEG_T*VtINV;
termE_Vb2_c2=(Vte_Vb2_c2/VER_T)*DEG_T*VtINV;
termE_Vb2_c1=(Vte_Vb2_c1/VER_T)*DEG_T*VtINV;
termE_Vc1_c2=(Vte_Vc1_c2/VER_T)*DEG_T*VtINV;
#endif
termE=((((Vte/VER_T)+1.0)*DEG_T)*VtINV);
EXIT_IF_ISNAN(((((Vte/VER_T)+1.0)*DEG_T)*VtINV))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2)V(b2:e1) ddxprobe= */
termC_Vdt_GND=(((((((-Vtc_Vdt_GND)*VEF_T-(-Vtc)*VEF_T_Vdt_GND)/VEF_T/VEF_T)*DEG_T)+(((-Vtc)/VEF_T)*DEG_T_Vdt_GND))*VtINV)+((((-Vtc)/VEF_T)*DEG_T)*VtINV_Vdt_GND));
termC_Vb2_c2=((-Vtc_Vb2_c2)/VEF_T)*DEG_T*VtINV;
termC_Vb2_c1=((-Vtc_Vb2_c1)/VEF_T)*DEG_T*VtINV;
termC_Vc1_c2=((-Vtc_Vc1_c2)/VEF_T)*DEG_T*VtINV;
termC_Vb2_e1=((-Vtc_Vb2_e1)/VEF_T)*DEG_T*VtINV;
#endif
termC=((((-Vtc)/VEF_T)*DEG_T)*VtINV);
EXIT_IF_ISNAN(((((-Vtc)/VEF_T)*DEG_T)*VtINV))
{
double m00_exp(d00_exp0,termE)
double m00_exp(d00_exp1,termC)
double m00_exp(d00_exp2,(DEG_T*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#define d10_exp1 d00_exp1
#define d10_exp2 d00_exp2
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
q0I_Vdt_GND=(((termE_Vdt_GND*d10_exp0-termC_Vdt_GND*d10_exp1)*(d00_exp2-1.0)-(d00_exp0-d00_exp1)*((DEG_T_Vdt_GND*VtINV)+(DEG_T*VtINV_Vdt_GND))*d10_exp2)/(d00_exp2-1.0)/(d00_exp2-1.0));
q0I_Vb2_e1=((termE_Vb2_e1*d10_exp0-termC_Vb2_e1*d10_exp1)/(d00_exp2-1.0));
q0I_Vb2_c2=((termE_Vb2_c2*d10_exp0-termC_Vb2_c2*d10_exp1)/(d00_exp2-1.0));
q0I_Vb2_c1=((termE_Vb2_c1*d10_exp0-termC_Vb2_c1*d10_exp1)/(d00_exp2-1.0));
q0I_Vc1_c2=((termE_Vc1_c2*d10_exp0-termC_Vc1_c2*d10_exp1)/(d00_exp2-1.0));
#endif
q0I=((d00_exp0-d00_exp1)/(d00_exp2-1.0));
EXIT_IF_ISNAN(((d00_exp0-d00_exp1)/(d00_exp2-1.0)))
}
}
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
eps2_Vdt_GND=0.0;
#endif
eps2=(0.1*0.1);
EXIT_IF_ISNAN((0.1*0.1))
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
x2_Vb_c=0.0;
x2_Vb_b1=0.0;
x2_Vb1_b2=0.0;
x2_Vc4_c1=0.0;
x2_Vc3_c1=0.0;
x2_Vc3_c4=0.0;
x2_Vb2_e1=((q0I_Vb2_e1*q0I)+(q0I*q0I_Vb2_e1));
x2_Vdt_GND=((q0I_Vdt_GND*q0I)+(q0I*q0I_Vdt_GND));
x2_Vb2_c2=((q0I_Vb2_c2*q0I)+(q0I*q0I_Vb2_c2));
x2_Vb2_c1=((q0I_Vb2_c1*q0I)+(q0I*q0I_Vb2_c1));
x2_Vc1_c2=((q0I_Vc1_c2*q0I)+(q0I*q0I_Vc1_c2));
#endif
x2=(q0I*q0I);
EXIT_IF_ISNAN((q0I*q0I))
if
((q0I<0.0))
{
{
double m00_sqrt(d00_sqrt0,(x2+eps2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(x2+eps2))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
q1I_Vdt_GND=(((0.5*eps2_Vdt_GND)*(d00_sqrt0-q0I)-(0.5*eps2)*((x2_Vdt_GND+eps2_Vdt_GND)*d10_sqrt0-q0I_Vdt_GND))/(d00_sqrt0-q0I)/(d00_sqrt0-q0I));
q1I_Vb2_e1=(-(0.5*eps2)*(x2_Vb2_e1*d10_sqrt0-q0I_Vb2_e1)/(d00_sqrt0-q0I)/(d00_sqrt0-q0I));
q1I_Vb2_c2=(-(0.5*eps2)*(x2_Vb2_c2*d10_sqrt0-q0I_Vb2_c2)/(d00_sqrt0-q0I)/(d00_sqrt0-q0I));
q1I_Vb2_c1=(-(0.5*eps2)*(x2_Vb2_c1*d10_sqrt0-q0I_Vb2_c1)/(d00_sqrt0-q0I)/(d00_sqrt0-q0I));
q1I_Vc1_c2=(-(0.5*eps2)*(x2_Vc1_c2*d10_sqrt0-q0I_Vc1_c2)/(d00_sqrt0-q0I)/(d00_sqrt0-q0I));
#endif
q1I=((0.5*eps2)/(d00_sqrt0-q0I));
EXIT_IF_ISNAN(((0.5*eps2)/(d00_sqrt0-q0I)))
}
}
else
{
{
double m00_sqrt(d00_sqrt0,(x2+eps2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(x2+eps2))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
q1I_Vdt_GND=(0.5*((x2_Vdt_GND+eps2_Vdt_GND)*d10_sqrt0+q0I_Vdt_GND));
q1I_Vb2_e1=(0.5*(x2_Vb2_e1*d10_sqrt0+q0I_Vb2_e1));
q1I_Vb2_c2=(0.5*(x2_Vb2_c2*d10_sqrt0+q0I_Vb2_c2));
q1I_Vb2_c1=(0.5*(x2_Vb2_c1*d10_sqrt0+q0I_Vb2_c1));
q1I_Vc1_c2=(0.5*(x2_Vc1_c2*d10_sqrt0+q0I_Vc1_c2));
#endif
q1I=(0.5*(d00_sqrt0+q0I));
EXIT_IF_ISNAN((0.5*(d00_sqrt0+q0I)))
}
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
q1I_Vdt_GND=q1I_Vdt_GND;
q1I_Vb2_e1=q1I_Vb2_e1;
q1I_Vb2_c2=q1I_Vb2_c2;
q1I_Vb2_c1=q1I_Vb2_c1;
q1I_Vc1_c2=q1I_Vc1_c2;
#endif
q1I=q1I;
EXIT_IF_ISNAN(q1I)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
qBI_Vdt_GND=((q1I_Vdt_GND*(1.0+(0.5*(n0+nB))))+(q1I*(0.5*(n0_Vdt_GND+nB_Vdt_GND))));
qBI_Vb2_e1=((q1I_Vb2_e1*(1.0+(0.5*(n0+nB))))+(q1I*(0.5*n0_Vb2_e1)));
qBI_Vb2_c2=((q1I_Vb2_c2*(1.0+(0.5*(n0+nB))))+(q1I*(0.5*nB_Vb2_c2)));
qBI_Vb2_c1=((q1I_Vb2_c1*(1.0+(0.5*(n0+nB))))+(q1I*(0.5*nB_Vb2_c1)));
qBI_Vc1_c2=((q1I_Vc1_c2*(1.0+(0.5*(n0+nB))))+(q1I*(0.5*nB_Vc1_c2)));
#endif
pInst->qBI=(q1I*(1.0+(0.5*(n0+nB))));
EXIT_IF_ISNAN((q1I*(1.0+(0.5*(n0+nB)))))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Ir_Vdt_GND=((IS_TM_Vdt_GND*eVb2c2star)+(IS_TM*eVb2c2star_Vdt_GND));
Ir_Vb2_c2=(IS_TM*eVb2c2star_Vb2_c2);
Ir_Vb2_c1=(IS_TM*eVb2c2star_Vb2_c1);
Ir_Vc1_c2=(IS_TM*eVb2c2star_Vc1_c2);
#endif
pInst->Ir=(IS_TM*eVb2c2star);
EXIT_IF_ISNAN((IS_TM*eVb2c2star))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1) ddxprobe= */
If_Vdt_GND=((IS_TM_Vdt_GND*eVb2e1)+(IS_TM*eVb2e1_Vdt_GND));
If_Vb2_e1=(IS_TM*eVb2e1_Vb2_e1);
#endif
pInst->If=(IS_TM*eVb2e1);
EXIT_IF_ISNAN((IS_TM*eVb2e1))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
In_Vdt_GND=(((If_Vdt_GND-Ir_Vdt_GND)*pInst->qBI-(pInst->If-pInst->Ir)*qBI_Vdt_GND)/pInst->qBI/pInst->qBI);
In_Vb2_e1=((If_Vb2_e1*pInst->qBI-(pInst->If-pInst->Ir)*qBI_Vb2_e1)/pInst->qBI/pInst->qBI);
In_Vb2_c2=(((-Ir_Vb2_c2)*pInst->qBI-(pInst->If-pInst->Ir)*qBI_Vb2_c2)/pInst->qBI/pInst->qBI);
In_Vb2_c1=(((-Ir_Vb2_c1)*pInst->qBI-(pInst->If-pInst->Ir)*qBI_Vb2_c1)/pInst->qBI/pInst->qBI);
In_Vc1_c2=(((-Ir_Vc1_c2)*pInst->qBI-(pInst->If-pInst->Ir)*qBI_Vc1_c2)/pInst->qBI/pInst->qBI);
#endif
In=((pInst->If-pInst->Ir)/pInst->qBI);
EXIT_IF_ISNAN(((pInst->If-pInst->Ir)/pInst->qBI))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Ibf0_Vdt_GND=((IS_TM_Vdt_GND*BF_T-IS_TM*BF_T_Vdt_GND)/BF_T/BF_T);
#endif
Ibf0=(IS_TM/BF_T);
EXIT_IF_ISNAN((IS_TM/BF_T))
if
((pModel->XREC==0.0))
{
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND)V(b2:e1) ddxprobe= */
Ib1_Vb2_c2=0.0;
Ib1_Vb2_c1=0.0;
Ib1_Vc1_c2=0.0;
Ib1_Vdt_GND=((((1.0-pModel->XIBI)*Ibf0_Vdt_GND)*(eVb2e1-1.0))+(((1.0-pModel->XIBI)*Ibf0)*eVb2e1_Vdt_GND));
Ib1_Vb2_e1=(((1.0-pModel->XIBI)*Ibf0)*eVb2e1_Vb2_e1);
#endif
pInst->Ib1=(((1.0-pModel->XIBI)*Ibf0)*(eVb2e1-1.0));
EXIT_IF_ISNAN((((1.0-pModel->XIBI)*Ibf0)*(eVb2e1-1.0)))
}
else
{
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND)V(b2:e1) ddxprobe= */
Ib1_Vb2_c2=(((1.0-pModel->XIBI)*Ibf0)*(((pModel->XREC*eVb2c2star_Vb2_c2)*(1.0+(Vtc/VEF_T)))+((pModel->XREC*((eVb2e1+eVb2c2star)-2.0))*(Vtc_Vb2_c2/VEF_T))));
Ib1_Vb2_c1=(((1.0-pModel->XIBI)*Ibf0)*(((pModel->XREC*eVb2c2star_Vb2_c1)*(1.0+(Vtc/VEF_T)))+((pModel->XREC*((eVb2e1+eVb2c2star)-2.0))*(Vtc_Vb2_c1/VEF_T))));
Ib1_Vc1_c2=(((1.0-pModel->XIBI)*Ibf0)*(((pModel->XREC*eVb2c2star_Vc1_c2)*(1.0+(Vtc/VEF_T)))+((pModel->XREC*((eVb2e1+eVb2c2star)-2.0))*(Vtc_Vc1_c2/VEF_T))));
Ib1_Vdt_GND=((((1.0-pModel->XIBI)*Ibf0_Vdt_GND)*(((1.0-pModel->XREC)*(eVb2e1-1.0))+((pModel->XREC*((eVb2e1+eVb2c2star)-2.0))*(1.0+(Vtc/VEF_T)))))+(((1.0-pModel->XIBI)*Ibf0)*(((1.0-pModel->XREC)*eVb2e1_Vdt_GND)+(((pModel->XREC*(eVb2e1_Vdt_GND+eVb2c2star_Vdt_GND))*(1.0+(Vtc/VEF_T)))+((pModel->XREC*((eVb2e1+eVb2c2star)-2.0))*((Vtc_Vdt_GND*VEF_T-Vtc*VEF_T_Vdt_GND)/VEF_T/VEF_T))))));
Ib1_Vb2_e1=(((1.0-pModel->XIBI)*Ibf0)*(((1.0-pModel->XREC)*eVb2e1_Vb2_e1)+(((pModel->XREC*eVb2e1_Vb2_e1)*(1.0+(Vtc/VEF_T)))+((pModel->XREC*((eVb2e1+eVb2c2star)-2.0))*(Vtc_Vb2_e1/VEF_T)))));
#endif
pInst->Ib1=(((1.0-pModel->XIBI)*Ibf0)*(((1.0-pModel->XREC)*(eVb2e1-1.0))+((pModel->XREC*((eVb2e1+eVb2c2star)-2.0))*(1.0+(Vtc/VEF_T)))));
EXIT_IF_ISNAN((((1.0-pModel->XIBI)*Ibf0)*(((1.0-pModel->XREC)*(eVb2e1-1.0))+((pModel->XREC*((eVb2e1+eVb2c2star)-2.0))*(1.0+(Vtc/VEF_T))))))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:e1) ddxprobe= */
Ib1_s_Vdt_GND=(((pModel->XIBI*Ibf0_Vdt_GND)*(eVb1e1-1.0))+((pModel->XIBI*Ibf0)*eVb1e1_Vdt_GND));
Ib1_s_Vb1_e1=((pModel->XIBI*Ibf0)*eVb1e1_Vb1_e1);
#endif
pInst->Ib1_s=((pModel->XIBI*Ibf0)*(eVb1e1-1.0));
EXIT_IF_ISNAN(((pModel->XIBI*Ibf0)*(eVb1e1-1.0)))
if
((((Vb2e1*VtINV)/pModel->MLF)<200.0))
{
{
double m00_exp(d00_exp0,((Vb2e1*VtINV)/pModel->MLF))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b2:e1)V(dt:GND) ddxprobe= */
tmpExp_Vb1_b2=0.0;
tmpExp_Vb2_c2=0.0;
tmpExp_Vc1_c2=0.0;
tmpExp_Vc4_c1=0.0;
tmpExp_Vb2_e1=(Vb2e1_Vb2_e1*VtINV/pModel->MLF)*d10_exp0;
tmpExp_Vdt_GND=((Vb2e1*VtINV_Vdt_GND)/pModel->MLF)*d10_exp0;
#endif
tmpExp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b2:e1)V(dt:GND) ddxprobe= */
tmpExp_Vb1_b2=0.0;
tmpExp_Vb2_c2=0.0;
tmpExp_Vc1_c2=0.0;
tmpExp_Vc4_c1=0.0;
tmpExp_Vb2_e1=(expl*(Vb2e1_Vb2_e1*VtINV/pModel->MLF));
tmpExp_Vdt_GND=(expl*((Vb2e1*VtINV_Vdt_GND)/pModel->MLF));
#endif
tmpExp=(expl*(1.0+(((Vb2e1*VtINV)/pModel->MLF)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+(((Vb2e1*VtINV)/pModel->MLF)-200.0))))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1) ddxprobe= */
Ib2_Vdt_GND=((IBF_TM_Vdt_GND*(tmpExp-1.0))+(IBF_TM*tmpExp_Vdt_GND));
Ib2_Vb2_e1=((IBF_TM*tmpExp_Vb2_e1)+(_circuit_gmin*Vb2e1_Vb2_e1));
#endif
pInst->Ib2=((IBF_TM*(tmpExp-1.0))+(_circuit_gmin*Vb2e1));
EXIT_IF_ISNAN(((IBF_TM*(tmpExp-1.0))+(_circuit_gmin*Vb2e1)))
if
((((0.5*Vb1c4)*VtINV)<200.0))
{
{
double m00_exp(d00_exp0,((0.5*Vb1c4)*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b2:e1)V(dt:GND) ddxprobe= */
tmpExp_Vb1_b2=(0.5*Vb1c4_Vb1_b2)*VtINV*d10_exp0;
tmpExp_Vb2_c2=(0.5*Vb1c4_Vb2_c2)*VtINV*d10_exp0;
tmpExp_Vc1_c2=(0.5*Vb1c4_Vc1_c2)*VtINV*d10_exp0;
tmpExp_Vc4_c1=(0.5*Vb1c4_Vc4_c1)*VtINV*d10_exp0;
tmpExp_Vb2_e1=0.0;
tmpExp_Vdt_GND=((0.5*Vb1c4)*VtINV_Vdt_GND)*d10_exp0;
#endif
tmpExp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
}
else
{
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b2:e1)V(dt:GND) ddxprobe= */
tmpExp_Vb1_b2=(expl*(0.5*Vb1c4_Vb1_b2)*VtINV);
tmpExp_Vb2_c2=(expl*(0.5*Vb1c4_Vb2_c2)*VtINV);
tmpExp_Vc1_c2=(expl*(0.5*Vb1c4_Vc1_c2)*VtINV);
tmpExp_Vc4_c1=(expl*(0.5*Vb1c4_Vc4_c1)*VtINV);
tmpExp_Vb2_e1=0.0;
tmpExp_Vdt_GND=(expl*((0.5*Vb1c4)*VtINV_Vdt_GND));
#endif
tmpExp=(expl*(1.0+(((0.5*Vb1c4)*VtINV)-200.0)));
EXIT_IF_ISNAN((expl*(1.0+(((0.5*Vb1c4)*VtINV)-200.0))))
}
{
double m00_exp(d00_exp0,((0.5*pModel->VLR)*VtINV))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b2:e1) ddxprobe= */
Ib3_Vdt_GND=((((IBR_TM_Vdt_GND*(eVb1c4-1.0))+(IBR_TM*eVb1c4_Vdt_GND))*(tmpExp+d00_exp0)-(IBR_TM*(eVb1c4-1.0))*(tmpExp_Vdt_GND+((0.5*pModel->VLR)*VtINV_Vdt_GND)*d10_exp0))/(tmpExp+d00_exp0)/(tmpExp+d00_exp0));
Ib3_Vb1_b2=((((IBR_TM*eVb1c4_Vb1_b2)*(tmpExp+d00_exp0)-(IBR_TM*(eVb1c4-1.0))*tmpExp_Vb1_b2)/(tmpExp+d00_exp0)/(tmpExp+d00_exp0))+(_circuit_gmin*Vb1c4_Vb1_b2));
Ib3_Vb2_c2=((((IBR_TM*eVb1c4_Vb2_c2)*(tmpExp+d00_exp0)-(IBR_TM*(eVb1c4-1.0))*tmpExp_Vb2_c2)/(tmpExp+d00_exp0)/(tmpExp+d00_exp0))+(_circuit_gmin*Vb1c4_Vb2_c2));
Ib3_Vc1_c2=((((IBR_TM*eVb1c4_Vc1_c2)*(tmpExp+d00_exp0)-(IBR_TM*(eVb1c4-1.0))*tmpExp_Vc1_c2)/(tmpExp+d00_exp0)/(tmpExp+d00_exp0))+(_circuit_gmin*Vb1c4_Vc1_c2));
Ib3_Vc4_c1=((((IBR_TM*eVb1c4_Vc4_c1)*(tmpExp+d00_exp0)-(IBR_TM*(eVb1c4-1.0))*tmpExp_Vc4_c1)/(tmpExp+d00_exp0)/(tmpExp+d00_exp0))+(_circuit_gmin*Vb1c4_Vc4_c1));
Ib3_Vb2_e1=(-(IBR_TM*(eVb1c4-1.0))*tmpExp_Vb2_e1/(tmpExp+d00_exp0)/(tmpExp+d00_exp0));
#endif
pInst->Ib3=(((IBR_TM*(eVb1c4-1.0))/(tmpExp+d00_exp0))+(_circuit_gmin*Vb1c4));
EXIT_IF_ISNAN((((IBR_TM*(eVb1c4-1.0))/(tmpExp+d00_exp0))+(_circuit_gmin*Vb1c4)))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
g1_Vdt_GND=((If0_Vdt_GND*eVb1c4)+(If0*eVb1c4_Vdt_GND));
g1_Vb1_b2=(If0*eVb1c4_Vb1_b2);
g1_Vb2_c2=(If0*eVb1c4_Vb2_c2);
g1_Vc1_c2=(If0*eVb1c4_Vc1_c2);
g1_Vc4_c1=(If0*eVb1c4_Vc4_c1);
#endif
g1=(If0*eVb1c4);
EXIT_IF_ISNAN((If0*eVb1c4))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(dt:GND) ddxprobe= */
g2_Vb1_b2=(4.0*eVb1c4VDC_Vb1_b2);
g2_Vb2_c2=(4.0*eVb1c4VDC_Vb2_c2);
g2_Vc1_c2=(4.0*eVb1c4VDC_Vc1_c2);
g2_Vc4_c1=(4.0*eVb1c4VDC_Vc4_c1);
g2_Vdt_GND=(4.0*eVb1c4VDC_Vdt_GND);
#endif
g2=(4.0*eVb1c4VDC);
EXIT_IF_ISNAN((4.0*eVb1c4VDC))
#endif
{
double m00_sqrt(d00_sqrt0,(1.0+g1))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+g1))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
nBex_Vdt_GND=((g1_Vdt_GND*(1.0+d00_sqrt0)-g1*g1_Vdt_GND*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
nBex_Vb1_b2=((g1_Vb1_b2*(1.0+d00_sqrt0)-g1*g1_Vb1_b2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
nBex_Vb2_c2=((g1_Vb2_c2*(1.0+d00_sqrt0)-g1*g1_Vb2_c2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
nBex_Vc1_c2=((g1_Vc1_c2*(1.0+d00_sqrt0)-g1*g1_Vc1_c2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
nBex_Vc4_c1=((g1_Vc4_c1*(1.0+d00_sqrt0)-g1*g1_Vc4_c1*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
#endif
nBex=(g1/(1.0+d00_sqrt0));
EXIT_IF_ISNAN((g1/(1.0+d00_sqrt0)))
}
#if defined(_DYNAMIC)
{
double m00_sqrt(d00_sqrt0,(1.0+g2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+g2))
#endif
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(dt:GND) ddxprobe= */
pWex_Vb1_b2=((g2_Vb1_b2*(1.0+d00_sqrt0)-g2*g2_Vb1_b2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
pWex_Vb2_c2=((g2_Vb2_c2*(1.0+d00_sqrt0)-g2*g2_Vb2_c2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
pWex_Vc1_c2=((g2_Vc1_c2*(1.0+d00_sqrt0)-g2*g2_Vc1_c2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
pWex_Vc4_c1=((g2_Vc4_c1*(1.0+d00_sqrt0)-g2*g2_Vc4_c1*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
pWex_Vdt_GND=((g2_Vdt_GND*(1.0+d00_sqrt0)-g2*g2_Vdt_GND*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
#endif
pWex=(g2/(1.0+d00_sqrt0));
EXIT_IF_ISNAN((g2/(1.0+d00_sqrt0)))
}
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
Iex_Vdt_GND=(((-BRI_T_Vdt_GND/BRI_T/BRI_T)*(((0.5*IK_TM)*nBex)-IS_TM))+((1.0/BRI_T)*((((0.5*IK_TM_Vdt_GND)*nBex)+((0.5*IK_TM)*nBex_Vdt_GND))-IS_TM_Vdt_GND)));
Iex_Vb1_b2=((1.0/BRI_T)*((0.5*IK_TM)*nBex_Vb1_b2));
Iex_Vb2_c2=((1.0/BRI_T)*((0.5*IK_TM)*nBex_Vb2_c2));
Iex_Vc1_c2=((1.0/BRI_T)*((0.5*IK_TM)*nBex_Vc1_c2));
Iex_Vc4_c1=((1.0/BRI_T)*((0.5*IK_TM)*nBex_Vc4_c1));
#endif
pInst->Iex=((1.0/BRI_T)*(((0.5*IK_TM)*nBex)-IS_TM));
EXIT_IF_ISNAN(((1.0/BRI_T)*(((0.5*IK_TM)*nBex)-IS_TM)))
{
double m00_sqrt(d00_sqrt0,(1.0+((4.0*(IS_TM/IKS_TM))*eVb1c4)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+((4.0*(IS_TM/IKS_TM))*eVb1c4)))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
Isub_Vdt_GND=(((((2.0*ISS_TM_Vdt_GND)*(eVb1c4-1.0))+((2.0*ISS_TM)*eVb1c4_Vdt_GND))*(1.0+d00_sqrt0)-((2.0*ISS_TM)*(eVb1c4-1.0))*(((4.0*((IS_TM_Vdt_GND*IKS_TM-IS_TM*IKS_TM_Vdt_GND)/IKS_TM/IKS_TM))*eVb1c4)+((4.0*(IS_TM/IKS_TM))*eVb1c4_Vdt_GND))*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
Isub_Vb1_b2=((((2.0*ISS_TM)*eVb1c4_Vb1_b2)*(1.0+d00_sqrt0)-((2.0*ISS_TM)*(eVb1c4-1.0))*((4.0*(IS_TM/IKS_TM))*eVb1c4_Vb1_b2)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
Isub_Vb2_c2=((((2.0*ISS_TM)*eVb1c4_Vb2_c2)*(1.0+d00_sqrt0)-((2.0*ISS_TM)*(eVb1c4-1.0))*((4.0*(IS_TM/IKS_TM))*eVb1c4_Vb2_c2)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
Isub_Vc1_c2=((((2.0*ISS_TM)*eVb1c4_Vc1_c2)*(1.0+d00_sqrt0)-((2.0*ISS_TM)*(eVb1c4-1.0))*((4.0*(IS_TM/IKS_TM))*eVb1c4_Vc1_c2)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
Isub_Vc4_c1=((((2.0*ISS_TM)*eVb1c4_Vc4_c1)*(1.0+d00_sqrt0)-((2.0*ISS_TM)*(eVb1c4-1.0))*((4.0*(IS_TM/IKS_TM))*eVb1c4_Vc4_c1)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
#endif
pInst->Isub=(((2.0*ISS_TM)*(eVb1c4-1.0))/(1.0+d00_sqrt0));
EXIT_IF_ISNAN((((2.0*ISS_TM)*(eVb1c4-1.0))/(1.0+d00_sqrt0)))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(s:c1) ddxprobe= */
Isf_Vdt_GND=((ISS_TM_Vdt_GND*(eVsc1-1.0))+(ISS_TM*eVsc1_Vdt_GND));
Isf_Vs_c1=(ISS_TM*eVsc1_Vs_c1);
#endif
Isf=(ISS_TM*(eVsc1-1.0));
EXIT_IF_ISNAN((ISS_TM*(eVsc1-1.0)))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
XIex_Vdt_GND=0.0;
XIex_Vb_c=0.0;
XIex_Vb_b1=0.0;
XIex_Vb1_b2=0.0;
XIex_Vc4_c1=0.0;
XIex_Vc3_c1=0.0;
XIex_Vc3_c4=0.0;
XIex_Vb2_e1=0.0;
XIex_Vb2_c2=0.0;
XIex_Vb2_c1=0.0;
XIex_Vc1_c2=0.0;
#endif
pInst->XIex=0.0;
EXIT_IF_ISNAN(0.0)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
XIsub_Vdt_GND=0.0;
XIsub_Vb_c=0.0;
XIsub_Vb_b1=0.0;
XIsub_Vb1_b2=0.0;
XIsub_Vc4_c1=0.0;
XIsub_Vc3_c1=0.0;
XIsub_Vc3_c4=0.0;
XIsub_Vb2_e1=0.0;
XIsub_Vb2_c2=0.0;
XIsub_Vb2_c1=0.0;
XIsub_Vc1_c2=0.0;
#endif
pInst->XIsub=0.0;
EXIT_IF_ISNAN(0.0)
if
((pModel->EXMOD==1))
{
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
Iex_Vdt_GND=Iex_Vdt_GND*Xext1;
Iex_Vb1_b2=Iex_Vb1_b2*Xext1;
Iex_Vb2_c2=Iex_Vb2_c2*Xext1;
Iex_Vc1_c2=Iex_Vc1_c2*Xext1;
Iex_Vc4_c1=Iex_Vc4_c1*Xext1;
#endif
pInst->Iex=(pInst->Iex*Xext1);
EXIT_IF_ISNAN((pInst->Iex*Xext1))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
Isub_Vdt_GND=Isub_Vdt_GND*Xext1;
Isub_Vb1_b2=Isub_Vb1_b2*Xext1;
Isub_Vb2_c2=Isub_Vb2_c2*Xext1;
Isub_Vc1_c2=Isub_Vc1_c2*Xext1;
Isub_Vc4_c1=Isub_Vc4_c1*Xext1;
#endif
pInst->Isub=(pInst->Isub*Xext1);
EXIT_IF_ISNAN((pInst->Isub*Xext1))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4) ddxprobe= */
Xg1_Vdt_GND=((If0_Vdt_GND*eVbc3)+(If0*eVbc3_Vdt_GND));
Xg1_Vb_c=(If0*eVbc3_Vb_c);
Xg1_Vb_b1=(If0*eVbc3_Vb_b1);
Xg1_Vb1_b2=(If0*eVbc3_Vb1_b2);
Xg1_Vb2_c2=(If0*eVbc3_Vb2_c2);
Xg1_Vc1_c2=(If0*eVbc3_Vc1_c2);
Xg1_Vc4_c1=(If0*eVbc3_Vc4_c1);
Xg1_Vc3_c1=(If0*eVbc3_Vc3_c1);
Xg1_Vc3_c4=(If0*eVbc3_Vc3_c4);
#endif
Xg1=(If0*eVbc3);
EXIT_IF_ISNAN((If0*eVbc3))
{
double m00_sqrt(d00_sqrt0,(1.0+Xg1))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+Xg1))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4) ddxprobe= */
XnBex_Vdt_GND=((Xg1_Vdt_GND*(1.0+d00_sqrt0)-Xg1*Xg1_Vdt_GND*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XnBex_Vb_c=((Xg1_Vb_c*(1.0+d00_sqrt0)-Xg1*Xg1_Vb_c*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XnBex_Vb_b1=((Xg1_Vb_b1*(1.0+d00_sqrt0)-Xg1*Xg1_Vb_b1*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XnBex_Vb1_b2=((Xg1_Vb1_b2*(1.0+d00_sqrt0)-Xg1*Xg1_Vb1_b2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XnBex_Vb2_c2=((Xg1_Vb2_c2*(1.0+d00_sqrt0)-Xg1*Xg1_Vb2_c2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XnBex_Vc1_c2=((Xg1_Vc1_c2*(1.0+d00_sqrt0)-Xg1*Xg1_Vc1_c2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XnBex_Vc4_c1=((Xg1_Vc4_c1*(1.0+d00_sqrt0)-Xg1*Xg1_Vc4_c1*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XnBex_Vc3_c1=((Xg1_Vc3_c1*(1.0+d00_sqrt0)-Xg1*Xg1_Vc3_c1*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XnBex_Vc3_c4=((Xg1_Vc3_c4*(1.0+d00_sqrt0)-Xg1*Xg1_Vc3_c4*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
#endif
XnBex=(Xg1/(1.0+d00_sqrt0));
EXIT_IF_ISNAN((Xg1/(1.0+d00_sqrt0)))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4) ddxprobe= */
XIMex_Vdt_GND=(((pModel->XEXT*((((0.5*IK_TM_Vdt_GND)*XnBex)+((0.5*IK_TM)*XnBex_Vdt_GND))-IS_TM_Vdt_GND))*BRI_T-(pModel->XEXT*(((0.5*IK_TM)*XnBex)-IS_TM))*BRI_T_Vdt_GND)/BRI_T/BRI_T);
XIMex_Vb_c=((pModel->XEXT*((0.5*IK_TM)*XnBex_Vb_c))/BRI_T);
XIMex_Vb_b1=((pModel->XEXT*((0.5*IK_TM)*XnBex_Vb_b1))/BRI_T);
XIMex_Vb1_b2=((pModel->XEXT*((0.5*IK_TM)*XnBex_Vb1_b2))/BRI_T);
XIMex_Vb2_c2=((pModel->XEXT*((0.5*IK_TM)*XnBex_Vb2_c2))/BRI_T);
XIMex_Vc1_c2=((pModel->XEXT*((0.5*IK_TM)*XnBex_Vc1_c2))/BRI_T);
XIMex_Vc4_c1=((pModel->XEXT*((0.5*IK_TM)*XnBex_Vc4_c1))/BRI_T);
XIMex_Vc3_c1=((pModel->XEXT*((0.5*IK_TM)*XnBex_Vc3_c1))/BRI_T);
XIMex_Vc3_c4=((pModel->XEXT*((0.5*IK_TM)*XnBex_Vc3_c4))/BRI_T);
#endif
XIMex=((pModel->XEXT*(((0.5*IK_TM)*XnBex)-IS_TM))/BRI_T);
EXIT_IF_ISNAN(((pModel->XEXT*(((0.5*IK_TM)*XnBex)-IS_TM))/BRI_T))
{
double m00_sqrt(d00_sqrt0,(1.0+(((4.0*IS_T)/IKS_T)*eVbc3)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+(((4.0*IS_T)/IKS_T)*eVbc3)))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4) ddxprobe= */
XIMsub_Vdt_GND=((((((pModel->XEXT*2.0)*ISS_TM_Vdt_GND)*(eVbc3-1.0))+(((pModel->XEXT*2.0)*ISS_TM)*eVbc3_Vdt_GND))*(1.0+d00_sqrt0)-(((pModel->XEXT*2.0)*ISS_TM)*(eVbc3-1.0))*(((((4.0*IS_T_Vdt_GND)*IKS_T-(4.0*IS_T)*IKS_T_Vdt_GND)/IKS_T/IKS_T)*eVbc3)+(((4.0*IS_T)/IKS_T)*eVbc3_Vdt_GND))*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XIMsub_Vb_c=(((((pModel->XEXT*2.0)*ISS_TM)*eVbc3_Vb_c)*(1.0+d00_sqrt0)-(((pModel->XEXT*2.0)*ISS_TM)*(eVbc3-1.0))*(((4.0*IS_T)/IKS_T)*eVbc3_Vb_c)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XIMsub_Vb_b1=(((((pModel->XEXT*2.0)*ISS_TM)*eVbc3_Vb_b1)*(1.0+d00_sqrt0)-(((pModel->XEXT*2.0)*ISS_TM)*(eVbc3-1.0))*(((4.0*IS_T)/IKS_T)*eVbc3_Vb_b1)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XIMsub_Vb1_b2=(((((pModel->XEXT*2.0)*ISS_TM)*eVbc3_Vb1_b2)*(1.0+d00_sqrt0)-(((pModel->XEXT*2.0)*ISS_TM)*(eVbc3-1.0))*(((4.0*IS_T)/IKS_T)*eVbc3_Vb1_b2)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XIMsub_Vb2_c2=(((((pModel->XEXT*2.0)*ISS_TM)*eVbc3_Vb2_c2)*(1.0+d00_sqrt0)-(((pModel->XEXT*2.0)*ISS_TM)*(eVbc3-1.0))*(((4.0*IS_T)/IKS_T)*eVbc3_Vb2_c2)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XIMsub_Vc1_c2=(((((pModel->XEXT*2.0)*ISS_TM)*eVbc3_Vc1_c2)*(1.0+d00_sqrt0)-(((pModel->XEXT*2.0)*ISS_TM)*(eVbc3-1.0))*(((4.0*IS_T)/IKS_T)*eVbc3_Vc1_c2)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XIMsub_Vc4_c1=(((((pModel->XEXT*2.0)*ISS_TM)*eVbc3_Vc4_c1)*(1.0+d00_sqrt0)-(((pModel->XEXT*2.0)*ISS_TM)*(eVbc3-1.0))*(((4.0*IS_T)/IKS_T)*eVbc3_Vc4_c1)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XIMsub_Vc3_c1=(((((pModel->XEXT*2.0)*ISS_TM)*eVbc3_Vc3_c1)*(1.0+d00_sqrt0)-(((pModel->XEXT*2.0)*ISS_TM)*(eVbc3-1.0))*(((4.0*IS_T)/IKS_T)*eVbc3_Vc3_c1)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XIMsub_Vc3_c4=(((((pModel->XEXT*2.0)*ISS_TM)*eVbc3_Vc3_c4)*(1.0+d00_sqrt0)-(((pModel->XEXT*2.0)*ISS_TM)*(eVbc3-1.0))*(((4.0*IS_T)/IKS_T)*eVbc3_Vc3_c4)*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
#endif
XIMsub=((((pModel->XEXT*2.0)*ISS_TM)*(eVbc3-1.0))/(1.0+d00_sqrt0));
EXIT_IF_ISNAN(((((pModel->XEXT*2.0)*ISS_TM)*(eVbc3-1.0))/(1.0+d00_sqrt0)))
}
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Vex_bias_Vdt_GND=(((pModel->XEXT*(((IS_TM_Vdt_GND*BRI_T-IS_TM*BRI_T_Vdt_GND)/BRI_T/BRI_T)+ISS_TM_Vdt_GND))*RCCxx_TM)+((pModel->XEXT*((IS_TM/BRI_T)+ISS_TM))*RCCxx_TM_Vdt_GND));
#endif
Vex_bias=((pModel->XEXT*((IS_TM/BRI_T)+ISS_TM))*RCCxx_TM);
EXIT_IF_ISNAN(((pModel->XEXT*((IS_TM/BRI_T)+ISS_TM))*RCCxx_TM))
{
double m00_logE(d00_logE0,(Vex_bias*VtINV))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(Vex_bias*VtINV))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Vex_Vdt_GND=((Vt_Vdt_GND*(2.0-d00_logE0))+(Vt*(-((Vex_bias_Vdt_GND*VtINV)+(Vex_bias*VtINV_Vdt_GND))*d10_logE0)));
#endif
Vex=(Vt*(2.0-d00_logE0));
EXIT_IF_ISNAN((Vt*(2.0-d00_logE0)))
}
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(dt:GND) ddxprobe= */
vdif_Vb_c=Vbc3_Vb_c;
vdif_Vb_b1=Vbc3_Vb_b1;
vdif_Vb1_b2=Vbc3_Vb1_b2;
vdif_Vb2_c2=Vbc3_Vb2_c2;
vdif_Vc1_c2=Vbc3_Vc1_c2;
vdif_Vc4_c1=Vbc3_Vc4_c1;
vdif_Vc3_c1=Vbc3_Vc3_c1;
vdif_Vc3_c4=Vbc3_Vc3_c4;
vdif_Vdt_GND=(-Vex_Vdt_GND);
#endif
vdif=(Vbc3-Vex);
EXIT_IF_ISNAN((Vbc3-Vex))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
eps2_Vdt_GND=0.0;
#endif
eps2=(0.11*0.11);
EXIT_IF_ISNAN((0.11*0.11))
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
x2_Vb_c=((vdif_Vb_c*vdif)+(vdif*vdif_Vb_c));
x2_Vb_b1=((vdif_Vb_b1*vdif)+(vdif*vdif_Vb_b1));
x2_Vb1_b2=((vdif_Vb1_b2*vdif)+(vdif*vdif_Vb1_b2));
x2_Vc4_c1=((vdif_Vc4_c1*vdif)+(vdif*vdif_Vc4_c1));
x2_Vc3_c1=((vdif_Vc3_c1*vdif)+(vdif*vdif_Vc3_c1));
x2_Vc3_c4=((vdif_Vc3_c4*vdif)+(vdif*vdif_Vc3_c4));
x2_Vb2_e1=0.0;
x2_Vdt_GND=((vdif_Vdt_GND*vdif)+(vdif*vdif_Vdt_GND));
x2_Vb2_c2=((vdif_Vb2_c2*vdif)+(vdif*vdif_Vb2_c2));
x2_Vb2_c1=0.0;
x2_Vc1_c2=((vdif_Vc1_c2*vdif)+(vdif*vdif_Vc1_c2));
#endif
x2=(vdif*vdif);
EXIT_IF_ISNAN((vdif*vdif))
if
((vdif<0.0))
{
{
double m00_sqrt(d00_sqrt0,(x2+eps2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(x2+eps2))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
VBex_Vdt_GND=(((0.5*eps2_Vdt_GND)*(d00_sqrt0-vdif)-(0.5*eps2)*((x2_Vdt_GND+eps2_Vdt_GND)*d10_sqrt0-vdif_Vdt_GND))/(d00_sqrt0-vdif)/(d00_sqrt0-vdif));
VBex_Vb_c=(-(0.5*eps2)*(x2_Vb_c*d10_sqrt0-vdif_Vb_c)/(d00_sqrt0-vdif)/(d00_sqrt0-vdif));
VBex_Vb_b1=(-(0.5*eps2)*(x2_Vb_b1*d10_sqrt0-vdif_Vb_b1)/(d00_sqrt0-vdif)/(d00_sqrt0-vdif));
VBex_Vb1_b2=(-(0.5*eps2)*(x2_Vb1_b2*d10_sqrt0-vdif_Vb1_b2)/(d00_sqrt0-vdif)/(d00_sqrt0-vdif));
VBex_Vc4_c1=(-(0.5*eps2)*(x2_Vc4_c1*d10_sqrt0-vdif_Vc4_c1)/(d00_sqrt0-vdif)/(d00_sqrt0-vdif));
VBex_Vc3_c1=(-(0.5*eps2)*(x2_Vc3_c1*d10_sqrt0-vdif_Vc3_c1)/(d00_sqrt0-vdif)/(d00_sqrt0-vdif));
VBex_Vc3_c4=(-(0.5*eps2)*(x2_Vc3_c4*d10_sqrt0-vdif_Vc3_c4)/(d00_sqrt0-vdif)/(d00_sqrt0-vdif));
VBex_Vb2_e1=(-(0.5*eps2)*x2_Vb2_e1*d10_sqrt0/(d00_sqrt0-vdif)/(d00_sqrt0-vdif));
VBex_Vb2_c2=(-(0.5*eps2)*(x2_Vb2_c2*d10_sqrt0-vdif_Vb2_c2)/(d00_sqrt0-vdif)/(d00_sqrt0-vdif));
VBex_Vb2_c1=(-(0.5*eps2)*x2_Vb2_c1*d10_sqrt0/(d00_sqrt0-vdif)/(d00_sqrt0-vdif));
VBex_Vc1_c2=(-(0.5*eps2)*(x2_Vc1_c2*d10_sqrt0-vdif_Vc1_c2)/(d00_sqrt0-vdif)/(d00_sqrt0-vdif));
#endif
VBex=((0.5*eps2)/(d00_sqrt0-vdif));
EXIT_IF_ISNAN(((0.5*eps2)/(d00_sqrt0-vdif)))
}
}
else
{
{
double m00_sqrt(d00_sqrt0,(x2+eps2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(x2+eps2))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
VBex_Vdt_GND=(0.5*((x2_Vdt_GND+eps2_Vdt_GND)*d10_sqrt0+vdif_Vdt_GND));
VBex_Vb_c=(0.5*(x2_Vb_c*d10_sqrt0+vdif_Vb_c));
VBex_Vb_b1=(0.5*(x2_Vb_b1*d10_sqrt0+vdif_Vb_b1));
VBex_Vb1_b2=(0.5*(x2_Vb1_b2*d10_sqrt0+vdif_Vb1_b2));
VBex_Vc4_c1=(0.5*(x2_Vc4_c1*d10_sqrt0+vdif_Vc4_c1));
VBex_Vc3_c1=(0.5*(x2_Vc3_c1*d10_sqrt0+vdif_Vc3_c1));
VBex_Vc3_c4=(0.5*(x2_Vc3_c4*d10_sqrt0+vdif_Vc3_c4));
VBex_Vb2_e1=(0.5*x2_Vb2_e1*d10_sqrt0);
VBex_Vb2_c2=(0.5*(x2_Vb2_c2*d10_sqrt0+vdif_Vb2_c2));
VBex_Vb2_c1=(0.5*x2_Vb2_c1*d10_sqrt0);
VBex_Vc1_c2=(0.5*(x2_Vc1_c2*d10_sqrt0+vdif_Vc1_c2));
#endif
VBex=(0.5*(d00_sqrt0+vdif));
EXIT_IF_ISNAN((0.5*(d00_sqrt0+vdif)))
}
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
VBex_Vdt_GND=VBex_Vdt_GND;
VBex_Vb_c=VBex_Vb_c;
VBex_Vb_b1=VBex_Vb_b1;
VBex_Vb1_b2=VBex_Vb1_b2;
VBex_Vc4_c1=VBex_Vc4_c1;
VBex_Vc3_c1=VBex_Vc3_c1;
VBex_Vc3_c4=VBex_Vc3_c4;
VBex_Vb2_e1=VBex_Vb2_e1;
VBex_Vb2_c2=VBex_Vb2_c2;
VBex_Vb2_c1=VBex_Vb2_c1;
VBex_Vc1_c2=VBex_Vc1_c2;
#endif
VBex=VBex;
EXIT_IF_ISNAN(VBex)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Fex_Vdt_GND=((VBex_Vdt_GND*((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)-VBex*((Vex_bias_Vdt_GND+(((XIMex_Vdt_GND+XIMsub_Vdt_GND)*RCCxx_TM)+((XIMex+XIMsub)*RCCxx_TM_Vdt_GND)))+VBex_Vdt_GND))/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
Fex_Vb_c=((VBex_Vb_c*((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)-VBex*((XIMex_Vb_c+XIMsub_Vb_c)*RCCxx_TM+VBex_Vb_c))/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
Fex_Vb_b1=((VBex_Vb_b1*((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)-VBex*((XIMex_Vb_b1+XIMsub_Vb_b1)*RCCxx_TM+VBex_Vb_b1))/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
Fex_Vb1_b2=((VBex_Vb1_b2*((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)-VBex*((XIMex_Vb1_b2+XIMsub_Vb1_b2)*RCCxx_TM+VBex_Vb1_b2))/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
Fex_Vc4_c1=((VBex_Vc4_c1*((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)-VBex*((XIMex_Vc4_c1+XIMsub_Vc4_c1)*RCCxx_TM+VBex_Vc4_c1))/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
Fex_Vc3_c1=((VBex_Vc3_c1*((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)-VBex*((XIMex_Vc3_c1+XIMsub_Vc3_c1)*RCCxx_TM+VBex_Vc3_c1))/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
Fex_Vc3_c4=((VBex_Vc3_c4*((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)-VBex*((XIMex_Vc3_c4+XIMsub_Vc3_c4)*RCCxx_TM+VBex_Vc3_c4))/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
Fex_Vb2_e1=((VBex_Vb2_e1*((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)-VBex*VBex_Vb2_e1)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
Fex_Vb2_c2=((VBex_Vb2_c2*((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)-VBex*((XIMex_Vb2_c2+XIMsub_Vb2_c2)*RCCxx_TM+VBex_Vb2_c2))/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
Fex_Vb2_c1=((VBex_Vb2_c1*((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)-VBex*VBex_Vb2_c1)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
Fex_Vc1_c2=((VBex_Vc1_c2*((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)-VBex*((XIMex_Vc1_c2+XIMsub_Vc1_c2)*RCCxx_TM+VBex_Vc1_c2))/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
#endif
Fex=(VBex/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex));
EXIT_IF_ISNAN((VBex/((Vex_bias+((XIMex+XIMsub)*RCCxx_TM))+VBex)))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
XIex_Vdt_GND=((Fex_Vdt_GND*XIMex)+(Fex*XIMex_Vdt_GND));
XIex_Vb_c=((Fex_Vb_c*XIMex)+(Fex*XIMex_Vb_c));
XIex_Vb_b1=((Fex_Vb_b1*XIMex)+(Fex*XIMex_Vb_b1));
XIex_Vb1_b2=((Fex_Vb1_b2*XIMex)+(Fex*XIMex_Vb1_b2));
XIex_Vc4_c1=((Fex_Vc4_c1*XIMex)+(Fex*XIMex_Vc4_c1));
XIex_Vc3_c1=((Fex_Vc3_c1*XIMex)+(Fex*XIMex_Vc3_c1));
XIex_Vc3_c4=((Fex_Vc3_c4*XIMex)+(Fex*XIMex_Vc3_c4));
XIex_Vb2_e1=Fex_Vb2_e1*XIMex;
XIex_Vb2_c2=((Fex_Vb2_c2*XIMex)+(Fex*XIMex_Vb2_c2));
XIex_Vb2_c1=Fex_Vb2_c1*XIMex;
XIex_Vc1_c2=((Fex_Vc1_c2*XIMex)+(Fex*XIMex_Vc1_c2));
#endif
pInst->XIex=(Fex*XIMex);
EXIT_IF_ISNAN((Fex*XIMex))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
XIsub_Vdt_GND=((Fex_Vdt_GND*XIMsub)+(Fex*XIMsub_Vdt_GND));
XIsub_Vb_c=((Fex_Vb_c*XIMsub)+(Fex*XIMsub_Vb_c));
XIsub_Vb_b1=((Fex_Vb_b1*XIMsub)+(Fex*XIMsub_Vb_b1));
XIsub_Vb1_b2=((Fex_Vb1_b2*XIMsub)+(Fex*XIMsub_Vb1_b2));
XIsub_Vc4_c1=((Fex_Vc4_c1*XIMsub)+(Fex*XIMsub_Vc4_c1));
XIsub_Vc3_c1=((Fex_Vc3_c1*XIMsub)+(Fex*XIMsub_Vc3_c1));
XIsub_Vc3_c4=((Fex_Vc3_c4*XIMsub)+(Fex*XIMsub_Vc3_c4));
XIsub_Vb2_e1=Fex_Vb2_e1*XIMsub;
XIsub_Vb2_c2=((Fex_Vb2_c2*XIMsub)+(Fex*XIMsub_Vb2_c2));
XIsub_Vb2_c1=Fex_Vb2_c1*XIMsub;
XIsub_Vc1_c2=((Fex_Vc1_c2*XIMsub)+(Fex*XIMsub_Vc1_c2));
#endif
pInst->XIsub=(Fex*XIMsub);
EXIT_IF_ISNAN((Fex*XIMsub))
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Fex_Vdt_GND=0.0;
Fex_Vb_c=0.0;
Fex_Vb_b1=0.0;
Fex_Vb1_b2=0.0;
Fex_Vc4_c1=0.0;
Fex_Vc3_c1=0.0;
Fex_Vc3_c4=0.0;
Fex_Vb2_e1=0.0;
Fex_Vb2_c2=0.0;
Fex_Vb2_c1=0.0;
Fex_Vc1_c2=0.0;
#endif
Fex=0;
EXIT_IF_ISNAN(0)
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4) ddxprobe= */
XnBex_Vdt_GND=0.0;
XnBex_Vb_c=0.0;
XnBex_Vb_b1=0.0;
XnBex_Vb1_b2=0.0;
XnBex_Vb2_c2=0.0;
XnBex_Vc1_c2=0.0;
XnBex_Vc4_c1=0.0;
XnBex_Vc3_c1=0.0;
XnBex_Vc3_c4=0.0;
#endif
XnBex=0;
EXIT_IF_ISNAN(0)
#endif
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
q0Q_Vdt_GND=(((Vte_Vdt_GND*VER_T-Vte*VER_T_Vdt_GND)/VER_T/VER_T)+((Vtc_Vdt_GND*VEF_T-Vtc*VEF_T_Vdt_GND)/VEF_T/VEF_T));
q0Q_Vb2_e1=((Vte_Vb2_e1/VER_T)+(Vtc_Vb2_e1/VEF_T));
q0Q_Vb2_c2=((Vte_Vb2_c2/VER_T)+(Vtc_Vb2_c2/VEF_T));
q0Q_Vb2_c1=((Vte_Vb2_c1/VER_T)+(Vtc_Vb2_c1/VEF_T));
q0Q_Vc1_c2=((Vte_Vc1_c2/VER_T)+(Vtc_Vc1_c2/VEF_T));
#endif
q0Q=((1.0+(Vte/VER_T))+(Vtc/VEF_T));
EXIT_IF_ISNAN(((1.0+(Vte/VER_T))+(Vtc/VEF_T)))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
eps2_Vdt_GND=0.0;
#endif
eps2=(0.1*0.1);
EXIT_IF_ISNAN((0.1*0.1))
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
x2_Vb_c=0.0;
x2_Vb_b1=0.0;
x2_Vb1_b2=0.0;
x2_Vc4_c1=0.0;
x2_Vc3_c1=0.0;
x2_Vc3_c4=0.0;
x2_Vb2_e1=((q0Q_Vb2_e1*q0Q)+(q0Q*q0Q_Vb2_e1));
x2_Vdt_GND=((q0Q_Vdt_GND*q0Q)+(q0Q*q0Q_Vdt_GND));
x2_Vb2_c2=((q0Q_Vb2_c2*q0Q)+(q0Q*q0Q_Vb2_c2));
x2_Vb2_c1=((q0Q_Vb2_c1*q0Q)+(q0Q*q0Q_Vb2_c1));
x2_Vc1_c2=((q0Q_Vc1_c2*q0Q)+(q0Q*q0Q_Vc1_c2));
#endif
x2=(q0Q*q0Q);
EXIT_IF_ISNAN((q0Q*q0Q))
if
((q0Q<0.0))
{
{
double m00_sqrt(d00_sqrt0,(x2+eps2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(x2+eps2))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
q1Q_Vdt_GND=(((0.5*eps2_Vdt_GND)*(d00_sqrt0-q0Q)-(0.5*eps2)*((x2_Vdt_GND+eps2_Vdt_GND)*d10_sqrt0-q0Q_Vdt_GND))/(d00_sqrt0-q0Q)/(d00_sqrt0-q0Q));
q1Q_Vb_c=(-(0.5*eps2)*x2_Vb_c*d10_sqrt0/(d00_sqrt0-q0Q)/(d00_sqrt0-q0Q));
q1Q_Vb_b1=(-(0.5*eps2)*x2_Vb_b1*d10_sqrt0/(d00_sqrt0-q0Q)/(d00_sqrt0-q0Q));
q1Q_Vb1_b2=(-(0.5*eps2)*x2_Vb1_b2*d10_sqrt0/(d00_sqrt0-q0Q)/(d00_sqrt0-q0Q));
q1Q_Vc4_c1=(-(0.5*eps2)*x2_Vc4_c1*d10_sqrt0/(d00_sqrt0-q0Q)/(d00_sqrt0-q0Q));
q1Q_Vc3_c1=(-(0.5*eps2)*x2_Vc3_c1*d10_sqrt0/(d00_sqrt0-q0Q)/(d00_sqrt0-q0Q));
q1Q_Vc3_c4=(-(0.5*eps2)*x2_Vc3_c4*d10_sqrt0/(d00_sqrt0-q0Q)/(d00_sqrt0-q0Q));
q1Q_Vb2_e1=(-(0.5*eps2)*(x2_Vb2_e1*d10_sqrt0-q0Q_Vb2_e1)/(d00_sqrt0-q0Q)/(d00_sqrt0-q0Q));
q1Q_Vb2_c2=(-(0.5*eps2)*(x2_Vb2_c2*d10_sqrt0-q0Q_Vb2_c2)/(d00_sqrt0-q0Q)/(d00_sqrt0-q0Q));
q1Q_Vb2_c1=(-(0.5*eps2)*(x2_Vb2_c1*d10_sqrt0-q0Q_Vb2_c1)/(d00_sqrt0-q0Q)/(d00_sqrt0-q0Q));
q1Q_Vc1_c2=(-(0.5*eps2)*(x2_Vc1_c2*d10_sqrt0-q0Q_Vc1_c2)/(d00_sqrt0-q0Q)/(d00_sqrt0-q0Q));
#endif
q1Q=((0.5*eps2)/(d00_sqrt0-q0Q));
EXIT_IF_ISNAN(((0.5*eps2)/(d00_sqrt0-q0Q)))
}
}
else
{
{
double m00_sqrt(d00_sqrt0,(x2+eps2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(x2+eps2))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
q1Q_Vdt_GND=(0.5*((x2_Vdt_GND+eps2_Vdt_GND)*d10_sqrt0+q0Q_Vdt_GND));
q1Q_Vb_c=(0.5*x2_Vb_c*d10_sqrt0);
q1Q_Vb_b1=(0.5*x2_Vb_b1*d10_sqrt0);
q1Q_Vb1_b2=(0.5*x2_Vb1_b2*d10_sqrt0);
q1Q_Vc4_c1=(0.5*x2_Vc4_c1*d10_sqrt0);
q1Q_Vc3_c1=(0.5*x2_Vc3_c1*d10_sqrt0);
q1Q_Vc3_c4=(0.5*x2_Vc3_c4*d10_sqrt0);
q1Q_Vb2_e1=(0.5*(x2_Vb2_e1*d10_sqrt0+q0Q_Vb2_e1));
q1Q_Vb2_c2=(0.5*(x2_Vb2_c2*d10_sqrt0+q0Q_Vb2_c2));
q1Q_Vb2_c1=(0.5*(x2_Vb2_c1*d10_sqrt0+q0Q_Vb2_c1));
q1Q_Vc1_c2=(0.5*(x2_Vc1_c2*d10_sqrt0+q0Q_Vc1_c2));
#endif
q1Q=(0.5*(d00_sqrt0+q0Q));
EXIT_IF_ISNAN((0.5*(d00_sqrt0+q0Q)))
}
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
q1Q_Vdt_GND=q1Q_Vdt_GND;
q1Q_Vb_c=q1Q_Vb_c;
q1Q_Vb_b1=q1Q_Vb_b1;
q1Q_Vb1_b2=q1Q_Vb1_b2;
q1Q_Vc4_c1=q1Q_Vc4_c1;
q1Q_Vc3_c1=q1Q_Vc3_c1;
q1Q_Vc3_c4=q1Q_Vc3_c4;
q1Q_Vb2_e1=q1Q_Vb2_e1;
q1Q_Vb2_c2=q1Q_Vb2_c2;
q1Q_Vb2_c1=q1Q_Vb2_c1;
q1Q_Vc1_c2=q1Q_Vc1_c2;
#endif
q1Q=q1Q;
EXIT_IF_ISNAN(q1Q)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
qBQ_Vdt_GND=((q1Q_Vdt_GND*(1.0+(0.5*(n0+nB))))+(q1Q*(0.5*(n0_Vdt_GND+nB_Vdt_GND))));
qBQ_Vb_c=q1Q_Vb_c*(1.0+(0.5*(n0+nB)));
qBQ_Vb_b1=q1Q_Vb_b1*(1.0+(0.5*(n0+nB)));
qBQ_Vb1_b2=q1Q_Vb1_b2*(1.0+(0.5*(n0+nB)));
qBQ_Vc4_c1=q1Q_Vc4_c1*(1.0+(0.5*(n0+nB)));
qBQ_Vc3_c1=q1Q_Vc3_c1*(1.0+(0.5*(n0+nB)));
qBQ_Vc3_c4=q1Q_Vc3_c4*(1.0+(0.5*(n0+nB)));
qBQ_Vb2_e1=((q1Q_Vb2_e1*(1.0+(0.5*(n0+nB))))+(q1Q*(0.5*n0_Vb2_e1)));
qBQ_Vb2_c2=((q1Q_Vb2_c2*(1.0+(0.5*(n0+nB))))+(q1Q*(0.5*nB_Vb2_c2)));
qBQ_Vb2_c1=((q1Q_Vb2_c1*(1.0+(0.5*(n0+nB))))+(q1Q*(0.5*nB_Vb2_c1)));
qBQ_Vc1_c2=((q1Q_Vc1_c2*(1.0+(0.5*(n0+nB))))+(q1Q*(0.5*nB_Vc1_c2)));
#endif
qBQ=(q1Q*(1.0+(0.5*(n0+nB))));
EXIT_IF_ISNAN((q1Q*(1.0+(0.5*(n0+nB)))))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Rb2_Vdt_GND=(((3.0*RBV_TM_Vdt_GND)*qBQ-(3.0*RBV_TM)*qBQ_Vdt_GND)/qBQ/qBQ);
Rb2_Vb_c=(-(3.0*RBV_TM)*qBQ_Vb_c/qBQ/qBQ);
Rb2_Vb_b1=(-(3.0*RBV_TM)*qBQ_Vb_b1/qBQ/qBQ);
Rb2_Vb1_b2=(-(3.0*RBV_TM)*qBQ_Vb1_b2/qBQ/qBQ);
Rb2_Vc4_c1=(-(3.0*RBV_TM)*qBQ_Vc4_c1/qBQ/qBQ);
Rb2_Vc3_c1=(-(3.0*RBV_TM)*qBQ_Vc3_c1/qBQ/qBQ);
Rb2_Vc3_c4=(-(3.0*RBV_TM)*qBQ_Vc3_c4/qBQ/qBQ);
Rb2_Vb2_e1=(-(3.0*RBV_TM)*qBQ_Vb2_e1/qBQ/qBQ);
Rb2_Vb2_c2=(-(3.0*RBV_TM)*qBQ_Vb2_c2/qBQ/qBQ);
Rb2_Vb2_c1=(-(3.0*RBV_TM)*qBQ_Vb2_c1/qBQ/qBQ);
Rb2_Vc1_c2=(-(3.0*RBV_TM)*qBQ_Vc1_c2/qBQ/qBQ);
#endif
pInst->Rb2=((3.0*RBV_TM)/qBQ);
EXIT_IF_ISNAN(((3.0*RBV_TM)/qBQ))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b:c)V(b:b1)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Ib1b2_Vdt_GND=(((((2.0*Vt_Vdt_GND)*(pInst->eVb1b2-1.0))+((2.0*Vt)*eVb1b2_Vdt_GND))*pInst->Rb2-(((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)*Rb2_Vdt_GND)/pInst->Rb2/pInst->Rb2);
Ib1b2_Vb1_b2=(((((2.0*Vt)*eVb1b2_Vb1_b2)+Vb1b2_Vb1_b2)*pInst->Rb2-(((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)*Rb2_Vb1_b2)/pInst->Rb2/pInst->Rb2);
Ib1b2_Vb_c=(-(((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)*Rb2_Vb_c/pInst->Rb2/pInst->Rb2);
Ib1b2_Vb_b1=(-(((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)*Rb2_Vb_b1/pInst->Rb2/pInst->Rb2);
Ib1b2_Vc4_c1=(-(((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)*Rb2_Vc4_c1/pInst->Rb2/pInst->Rb2);
Ib1b2_Vc3_c1=(-(((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)*Rb2_Vc3_c1/pInst->Rb2/pInst->Rb2);
Ib1b2_Vc3_c4=(-(((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)*Rb2_Vc3_c4/pInst->Rb2/pInst->Rb2);
Ib1b2_Vb2_e1=(-(((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)*Rb2_Vb2_e1/pInst->Rb2/pInst->Rb2);
Ib1b2_Vb2_c2=(-(((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)*Rb2_Vb2_c2/pInst->Rb2/pInst->Rb2);
Ib1b2_Vb2_c1=(-(((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)*Rb2_Vb2_c1/pInst->Rb2/pInst->Rb2);
Ib1b2_Vc1_c2=(-(((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)*Rb2_Vc1_c2/pInst->Rb2/pInst->Rb2);
#endif
Ib1b2=((((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)/pInst->Rb2);
EXIT_IF_ISNAN(((((2.0*Vt)*(pInst->eVb1b2-1.0))+Vb1b2)/pInst->Rb2))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1) ddxprobe= */
Iavl_Vdt_GND=0.0;
Iavl_Vb2_c2=0.0;
Iavl_Vb2_c1=0.0;
Iavl_Vc1_c2=0.0;
Iavl_Vb_c=0.0;
Iavl_Vb_b1=0.0;
Iavl_Vb1_b2=0.0;
Iavl_Vc4_c1=0.0;
Iavl_Vc3_c1=0.0;
Iavl_Vc3_c4=0.0;
Iavl_Vb2_e1=0.0;
#endif
Iavl=0.0;
EXIT_IF_ISNAN(0.0)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2) ddxprobe= */
Gem_Vdt_GND=0.0;
Gem_Vb2_c1=0.0;
Gem_Vb2_c2=0.0;
Gem_Vc1_c2=0.0;
#endif
pInst->Gem=0.0;
EXIT_IF_ISNAN(0.0)
if
(((Ic1c2>0.0)&&(Vb2c1<VDC_T)))
{
dEdx0=((2.0*pModel->VAVL)/(pModel->WAVL*pModel->WAVL));
EXIT_IF_ISNAN(((2.0*pModel->VAVL)/(pModel->WAVL*pModel->WAVL)))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
sqr_arg_Vdt_GND=((VDC_T_Vdt_GND*Icap_IHC-(VDC_T-Vb2c1)*Icap_IHC_Vdt_GND)/Icap_IHC/Icap_IHC);
sqr_arg_Vb2_c2=(-(VDC_T-Vb2c1)*Icap_IHC_Vb2_c2/Icap_IHC/Icap_IHC);
sqr_arg_Vb2_c1=(((-Vb2c1_Vb2_c1)*Icap_IHC-(VDC_T-Vb2c1)*Icap_IHC_Vb2_c1)/Icap_IHC/Icap_IHC);
sqr_arg_Vc1_c2=(-(VDC_T-Vb2c1)*Icap_IHC_Vc1_c2/Icap_IHC/Icap_IHC);
#endif
sqr_arg=((VDC_T-Vb2c1)/Icap_IHC);
EXIT_IF_ISNAN(((VDC_T-Vb2c1)/Icap_IHC))
{
double m00_sqrt(d00_sqrt0,((2.0*sqr_arg)/dEdx0))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((2.0*sqr_arg)/dEdx0))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
xd_Vdt_GND=((2.0*sqr_arg_Vdt_GND)/dEdx0)*d10_sqrt0;
xd_Vb2_c2=((2.0*sqr_arg_Vb2_c2)/dEdx0)*d10_sqrt0;
xd_Vb2_c1=((2.0*sqr_arg_Vb2_c1)/dEdx0)*d10_sqrt0;
xd_Vc1_c2=((2.0*sqr_arg_Vc1_c2)/dEdx0)*d10_sqrt0;
#endif
xd=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
if
((pModel->EXAVL==0.0))
{
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
Weff_Vb2_c2=0.0;
Weff_Vb2_c1=0.0;
Weff_Vc1_c2=0.0;
Weff_Vdt_GND=0.0;
#endif
Weff=pModel->WAVL;
EXIT_IF_ISNAN(pModel->WAVL)
}
else
{
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
xi_w1_Vb2_c2=(-(0.5*xi_w_Vb2_c2));
xi_w1_Vb2_c1=(-(0.5*xi_w_Vb2_c1));
xi_w1_Vc1_c2=(-(0.5*xi_w_Vc1_c2));
xi_w1_Vdt_GND=(-(0.5*xi_w_Vdt_GND));
#endif
xi_w1=(1.0-(0.5*xi_w));
EXIT_IF_ISNAN((1.0-(0.5*xi_w)))
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
Weff_Vb2_c2=(((pModel->WAVL*xi_w1_Vb2_c2)*xi_w1)+((pModel->WAVL*xi_w1)*xi_w1_Vb2_c2));
Weff_Vb2_c1=(((pModel->WAVL*xi_w1_Vb2_c1)*xi_w1)+((pModel->WAVL*xi_w1)*xi_w1_Vb2_c1));
Weff_Vc1_c2=(((pModel->WAVL*xi_w1_Vc1_c2)*xi_w1)+((pModel->WAVL*xi_w1)*xi_w1_Vc1_c2));
Weff_Vdt_GND=(((pModel->WAVL*xi_w1_Vdt_GND)*xi_w1)+((pModel->WAVL*xi_w1)*xi_w1_Vdt_GND));
#endif
Weff=((pModel->WAVL*xi_w1)*xi_w1);
EXIT_IF_ISNAN(((pModel->WAVL*xi_w1)*xi_w1))
}
{
double m00_sqrt(d00_sqrt0,((xd*xd)+(Weff*Weff)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((xd*xd)+(Weff*Weff)))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Wd_Vdt_GND=((((xd_Vdt_GND*Weff)+(xd*Weff_Vdt_GND))*d00_sqrt0-(xd*Weff)*(((xd_Vdt_GND*xd)+(xd*xd_Vdt_GND))+((Weff_Vdt_GND*Weff)+(Weff*Weff_Vdt_GND)))*d10_sqrt0)/d00_sqrt0/d00_sqrt0);
Wd_Vb2_c2=((((xd_Vb2_c2*Weff)+(xd*Weff_Vb2_c2))*d00_sqrt0-(xd*Weff)*(((xd_Vb2_c2*xd)+(xd*xd_Vb2_c2))+((Weff_Vb2_c2*Weff)+(Weff*Weff_Vb2_c2)))*d10_sqrt0)/d00_sqrt0/d00_sqrt0);
Wd_Vb2_c1=((((xd_Vb2_c1*Weff)+(xd*Weff_Vb2_c1))*d00_sqrt0-(xd*Weff)*(((xd_Vb2_c1*xd)+(xd*xd_Vb2_c1))+((Weff_Vb2_c1*Weff)+(Weff*Weff_Vb2_c1)))*d10_sqrt0)/d00_sqrt0/d00_sqrt0);
Wd_Vc1_c2=((((xd_Vc1_c2*Weff)+(xd*Weff_Vc1_c2))*d00_sqrt0-(xd*Weff)*(((xd_Vc1_c2*xd)+(xd*xd_Vc1_c2))+((Weff_Vc1_c2*Weff)+(Weff*Weff_Vc1_c2)))*d10_sqrt0)/d00_sqrt0/d00_sqrt0);
#endif
Wd=((xd*Weff)/d00_sqrt0);
EXIT_IF_ISNAN(((xd*Weff)/d00_sqrt0))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2) ddxprobe= */
Eav_Vdt_GND=((VDC_T_Vdt_GND*Wd-(VDC_T-Vb2c1)*Wd_Vdt_GND)/Wd/Wd);
Eav_Vb2_c1=(((-Vb2c1_Vb2_c1)*Wd-(VDC_T-Vb2c1)*Wd_Vb2_c1)/Wd/Wd);
Eav_Vb2_c2=(-(VDC_T-Vb2c1)*Wd_Vb2_c2/Wd/Wd);
Eav_Vc1_c2=(-(VDC_T-Vb2c1)*Wd_Vc1_c2/Wd/Wd);
#endif
Eav=((VDC_T-Vb2c1)/Wd);
EXIT_IF_ISNAN(((VDC_T-Vb2c1)/Wd))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2) ddxprobe= */
E0_Vdt_GND=(Eav_Vdt_GND+(((0.5*Wd_Vdt_GND)*dEdx0*Icap_IHC)+(((0.5*Wd)*dEdx0)*Icap_IHC_Vdt_GND)));
E0_Vb2_c1=(Eav_Vb2_c1+(((0.5*Wd_Vb2_c1)*dEdx0*Icap_IHC)+(((0.5*Wd)*dEdx0)*Icap_IHC_Vb2_c1)));
E0_Vb2_c2=(Eav_Vb2_c2+(((0.5*Wd_Vb2_c2)*dEdx0*Icap_IHC)+(((0.5*Wd)*dEdx0)*Icap_IHC_Vb2_c2)));
E0_Vc1_c2=(Eav_Vc1_c2+(((0.5*Wd_Vc1_c2)*dEdx0*Icap_IHC)+(((0.5*Wd)*dEdx0)*Icap_IHC_Vc1_c2)));
#endif
E0=(Eav+(((0.5*Wd)*dEdx0)*Icap_IHC));
EXIT_IF_ISNAN((Eav+(((0.5*Wd)*dEdx0)*Icap_IHC)))
if
((pModel->EXAVL==0))
{
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2) ddxprobe= */
Em_Vdt_GND=E0_Vdt_GND;
Em_Vb2_c1=E0_Vb2_c1;
Em_Vb2_c2=E0_Vb2_c2;
Em_Vc1_c2=E0_Vc1_c2;
#endif
Em=E0;
EXIT_IF_ISNAN(E0)
}
else
{
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
SHw_Vb2_c2=((2.0*pModel->SFH)*(2.0*xi_w_Vb2_c2));
SHw_Vb2_c1=((2.0*pModel->SFH)*(2.0*xi_w_Vb2_c1));
SHw_Vc1_c2=((2.0*pModel->SFH)*(2.0*xi_w_Vc1_c2));
SHw_Vdt_GND=((2.0*pModel->SFH)*(2.0*xi_w_Vdt_GND));
#endif
SHw=(1.0+((2.0*pModel->SFH)*(1.0+(2.0*xi_w))));
EXIT_IF_ISNAN((1.0+((2.0*pModel->SFH)*(1.0+(2.0*xi_w)))))
Efi=((1.0+pModel->SFH)/(1.0+(2.0*pModel->SFH)));
EXIT_IF_ISNAN(((1.0+pModel->SFH)/(1.0+(2.0*pModel->SFH))))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2) ddxprobe= */
Ew_Vdt_GND=(Eav_Vdt_GND-(((0.5*Wd_Vdt_GND)*dEdx0*(Efi-(Ic1c2/(IHC_M*SHw))))+(((0.5*Wd)*dEdx0)*(-((Ic1c2_Vdt_GND*(IHC_M*SHw)-Ic1c2*(IHC_M*SHw_Vdt_GND))/(IHC_M*SHw)/(IHC_M*SHw))))));
Ew_Vb2_c1=(Eav_Vb2_c1-(((0.5*Wd_Vb2_c1)*dEdx0*(Efi-(Ic1c2/(IHC_M*SHw))))+(((0.5*Wd)*dEdx0)*(-((Ic1c2_Vb2_c1*(IHC_M*SHw)-Ic1c2*(IHC_M*SHw_Vb2_c1))/(IHC_M*SHw)/(IHC_M*SHw))))));
Ew_Vb2_c2=(Eav_Vb2_c2-(((0.5*Wd_Vb2_c2)*dEdx0*(Efi-(Ic1c2/(IHC_M*SHw))))+(((0.5*Wd)*dEdx0)*(-((Ic1c2_Vb2_c2*(IHC_M*SHw)-Ic1c2*(IHC_M*SHw_Vb2_c2))/(IHC_M*SHw)/(IHC_M*SHw))))));
Ew_Vc1_c2=(Eav_Vc1_c2-(((0.5*Wd_Vc1_c2)*dEdx0*(Efi-(Ic1c2/(IHC_M*SHw))))+(((0.5*Wd)*dEdx0)*(-((Ic1c2_Vc1_c2*(IHC_M*SHw)-Ic1c2*(IHC_M*SHw_Vc1_c2))/(IHC_M*SHw)/(IHC_M*SHw))))));
#endif
Ew=(Eav-(((0.5*Wd)*dEdx0)*(Efi-(Ic1c2/(IHC_M*SHw)))));
EXIT_IF_ISNAN((Eav-(((0.5*Wd)*dEdx0)*(Efi-(Ic1c2/(IHC_M*SHw))))))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
sqr_arg_Vdt_GND=((((Ew_Vdt_GND-E0_Vdt_GND)*(Ew-E0))+((Ew-E0)*(Ew_Vdt_GND-E0_Vdt_GND)))+((((((0.1*Eav_Vdt_GND)*Eav)+((0.1*Eav)*Eav_Vdt_GND))*Icap)+(((0.1*Eav)*Eav)*Icap_Vdt_GND))/IHC_M));
sqr_arg_Vb2_c2=((((Ew_Vb2_c2-E0_Vb2_c2)*(Ew-E0))+((Ew-E0)*(Ew_Vb2_c2-E0_Vb2_c2)))+((((((0.1*Eav_Vb2_c2)*Eav)+((0.1*Eav)*Eav_Vb2_c2))*Icap)+(((0.1*Eav)*Eav)*Icap_Vb2_c2))/IHC_M));
sqr_arg_Vb2_c1=((((Ew_Vb2_c1-E0_Vb2_c1)*(Ew-E0))+((Ew-E0)*(Ew_Vb2_c1-E0_Vb2_c1)))+((((((0.1*Eav_Vb2_c1)*Eav)+((0.1*Eav)*Eav_Vb2_c1))*Icap)+(((0.1*Eav)*Eav)*Icap_Vb2_c1))/IHC_M));
sqr_arg_Vc1_c2=((((Ew_Vc1_c2-E0_Vc1_c2)*(Ew-E0))+((Ew-E0)*(Ew_Vc1_c2-E0_Vc1_c2)))+((((((0.1*Eav_Vc1_c2)*Eav)+((0.1*Eav)*Eav_Vc1_c2))*Icap)+(((0.1*Eav)*Eav)*Icap_Vc1_c2))/IHC_M));
#endif
sqr_arg=(((Ew-E0)*(Ew-E0))+((((0.1*Eav)*Eav)*Icap)/IHC_M));
EXIT_IF_ISNAN((((Ew-E0)*(Ew-E0))+((((0.1*Eav)*Eav)*Icap)/IHC_M)))
{
double m00_sqrt(d00_sqrt0,sqr_arg)
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,sqr_arg)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2) ddxprobe= */
Em_Vdt_GND=(0.5*((Ew_Vdt_GND+E0_Vdt_GND)+sqr_arg_Vdt_GND*d10_sqrt0));
Em_Vb2_c1=(0.5*((Ew_Vb2_c1+E0_Vb2_c1)+sqr_arg_Vb2_c1*d10_sqrt0));
Em_Vb2_c2=(0.5*((Ew_Vb2_c2+E0_Vb2_c2)+sqr_arg_Vb2_c2*d10_sqrt0));
Em_Vc1_c2=(0.5*((Ew_Vc1_c2+E0_Vc1_c2)+sqr_arg_Vc1_c2*d10_sqrt0));
#endif
Em=(0.5*((Ew+E0)+d00_sqrt0));
EXIT_IF_ISNAN((0.5*((Ew+E0)+d00_sqrt0)))
}
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2) ddxprobe= */
EmEav_Em_Vdt_GND=(((Em_Vdt_GND-Eav_Vdt_GND)*Em-(Em-Eav)*Em_Vdt_GND)/Em/Em);
EmEav_Em_Vb2_c1=(((Em_Vb2_c1-Eav_Vb2_c1)*Em-(Em-Eav)*Em_Vb2_c1)/Em/Em);
EmEav_Em_Vb2_c2=(((Em_Vb2_c2-Eav_Vb2_c2)*Em-(Em-Eav)*Em_Vb2_c2)/Em/Em);
EmEav_Em_Vc1_c2=(((Em_Vc1_c2-Eav_Vc1_c2)*Em-(Em-Eav)*Em_Vc1_c2)/Em/Em);
#endif
EmEav_Em=((Em-Eav)/Em);
EXIT_IF_ISNAN(((Em-Eav)/Em))
{
double m00_fabs(d00_fabs0,EmEav_Em)
if
((d00_fabs0>1.0e-7))
{
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
lambda_Vdt_GND=(((0.5*Wd_Vdt_GND)*EmEav_Em-(0.5*Wd)*EmEav_Em_Vdt_GND)/EmEav_Em/EmEav_Em);
lambda_Vb2_c2=(((0.5*Wd_Vb2_c2)*EmEav_Em-(0.5*Wd)*EmEav_Em_Vb2_c2)/EmEav_Em/EmEav_Em);
lambda_Vb2_c1=(((0.5*Wd_Vb2_c1)*EmEav_Em-(0.5*Wd)*EmEav_Em_Vb2_c1)/EmEav_Em/EmEav_Em);
lambda_Vc1_c2=(((0.5*Wd_Vc1_c2)*EmEav_Em-(0.5*Wd)*EmEav_Em_Vc1_c2)/EmEav_Em/EmEav_Em);
#endif
lambda=((0.5*Wd)/EmEav_Em);
EXIT_IF_ISNAN(((0.5*Wd)/EmEav_Em))
{
double m00_exp(d00_exp0,((-BnT)/Em))
double m00_exp(d00_exp1,(((-BnT)/Em)*(1.0+(Weff/lambda))))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2) ddxprobe= */
Gem_Vdt_GND=(((((((-An*BnT_Vdt_GND/BnT/BnT)*Em)+((An/BnT)*Em_Vdt_GND))*lambda)+(((An/BnT)*Em)*lambda_Vdt_GND))*(d00_exp0-d00_exp1))+((((An/BnT)*Em)*lambda)*((((-BnT_Vdt_GND)*Em-(-BnT)*Em_Vdt_GND)/Em/Em)*d10_exp0-(((((-BnT_Vdt_GND)*Em-(-BnT)*Em_Vdt_GND)/Em/Em)*(1.0+(Weff/lambda)))+(((-BnT)/Em)*((Weff_Vdt_GND*lambda-Weff*lambda_Vdt_GND)/lambda/lambda)))*d10_exp1)));
Gem_Vb2_c1=((((((An/BnT)*Em_Vb2_c1)*lambda)+(((An/BnT)*Em)*lambda_Vb2_c1))*(d00_exp0-d00_exp1))+((((An/BnT)*Em)*lambda)*((-(-BnT)*Em_Vb2_c1/Em/Em)*d10_exp0-(((-(-BnT)*Em_Vb2_c1/Em/Em)*(1.0+(Weff/lambda)))+(((-BnT)/Em)*((Weff_Vb2_c1*lambda-Weff*lambda_Vb2_c1)/lambda/lambda)))*d10_exp1)));
Gem_Vb2_c2=((((((An/BnT)*Em_Vb2_c2)*lambda)+(((An/BnT)*Em)*lambda_Vb2_c2))*(d00_exp0-d00_exp1))+((((An/BnT)*Em)*lambda)*((-(-BnT)*Em_Vb2_c2/Em/Em)*d10_exp0-(((-(-BnT)*Em_Vb2_c2/Em/Em)*(1.0+(Weff/lambda)))+(((-BnT)/Em)*((Weff_Vb2_c2*lambda-Weff*lambda_Vb2_c2)/lambda/lambda)))*d10_exp1)));
Gem_Vc1_c2=((((((An/BnT)*Em_Vc1_c2)*lambda)+(((An/BnT)*Em)*lambda_Vc1_c2))*(d00_exp0-d00_exp1))+((((An/BnT)*Em)*lambda)*((-(-BnT)*Em_Vc1_c2/Em/Em)*d10_exp0-(((-(-BnT)*Em_Vc1_c2/Em/Em)*(1.0+(Weff/lambda)))+(((-BnT)/Em)*((Weff_Vc1_c2*lambda-Weff*lambda_Vc1_c2)/lambda/lambda)))*d10_exp1)));
#endif
pInst->Gem=((((An/BnT)*Em)*lambda)*(d00_exp0-d00_exp1));
EXIT_IF_ISNAN(((((An/BnT)*Em)*lambda)*(d00_exp0-d00_exp1)))
}
}
else
{
{
double m00_exp(d00_exp0,((-BnT)/Em))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2) ddxprobe= */
Gem_Vdt_GND=(((An*Weff_Vdt_GND)*d00_exp0)+((An*Weff)*(((-BnT_Vdt_GND)*Em-(-BnT)*Em_Vdt_GND)/Em/Em)*d10_exp0));
Gem_Vb2_c1=(((An*Weff_Vb2_c1)*d00_exp0)+((An*Weff)*(-(-BnT)*Em_Vb2_c1/Em/Em)*d10_exp0));
Gem_Vb2_c2=(((An*Weff_Vb2_c2)*d00_exp0)+((An*Weff)*(-(-BnT)*Em_Vb2_c2/Em/Em)*d10_exp0));
Gem_Vc1_c2=(((An*Weff_Vc1_c2)*d00_exp0)+((An*Weff)*(-(-BnT)*Em_Vc1_c2/Em/Em)*d10_exp0));
#endif
pInst->Gem=((An*Weff)*d00_exp0);
EXIT_IF_ISNAN(((An*Weff)*d00_exp0))
}
}
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1) ddxprobe= */
Gmax_Vdt_GND=((((Vt_Vdt_GND*(Ic1c2*(pInst->RBC_TM+pInst->Rb2))-Vt*((Ic1c2_Vdt_GND*(pInst->RBC_TM+pInst->Rb2))+(Ic1c2*(RBC_TM_Vdt_GND+Rb2_Vdt_GND))))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+((qBI_Vdt_GND*BF_T-pInst->qBI*BF_T_Vdt_GND)/BF_T/BF_T))+((RE_TM_Vdt_GND*(pInst->RBC_TM+pInst->Rb2)-pInst->RE_TM*(RBC_TM_Vdt_GND+Rb2_Vdt_GND))/(pInst->RBC_TM+pInst->Rb2)/(pInst->RBC_TM+pInst->Rb2)));
Gmax_Vb2_c2=(((-Vt*((Ic1c2_Vb2_c2*(pInst->RBC_TM+pInst->Rb2))+(Ic1c2*Rb2_Vb2_c2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(qBI_Vb2_c2/BF_T))+(-pInst->RE_TM*Rb2_Vb2_c2/(pInst->RBC_TM+pInst->Rb2)/(pInst->RBC_TM+pInst->Rb2)));
Gmax_Vb2_c1=(((-Vt*((Ic1c2_Vb2_c1*(pInst->RBC_TM+pInst->Rb2))+(Ic1c2*Rb2_Vb2_c1))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(qBI_Vb2_c1/BF_T))+(-pInst->RE_TM*Rb2_Vb2_c1/(pInst->RBC_TM+pInst->Rb2)/(pInst->RBC_TM+pInst->Rb2)));
Gmax_Vc1_c2=(((-Vt*((Ic1c2_Vc1_c2*(pInst->RBC_TM+pInst->Rb2))+(Ic1c2*Rb2_Vc1_c2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(qBI_Vc1_c2/BF_T))+(-pInst->RE_TM*Rb2_Vc1_c2/(pInst->RBC_TM+pInst->Rb2)/(pInst->RBC_TM+pInst->Rb2)));
Gmax_Vb_c=((-Vt*(Ic1c2*Rb2_Vb_c)/(Ic1c2*(pInst->RBC_TM+pInst->Rb2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(-pInst->RE_TM*Rb2_Vb_c/(pInst->RBC_TM+pInst->Rb2)/(pInst->RBC_TM+pInst->Rb2)));
Gmax_Vb_b1=((-Vt*(Ic1c2*Rb2_Vb_b1)/(Ic1c2*(pInst->RBC_TM+pInst->Rb2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(-pInst->RE_TM*Rb2_Vb_b1/(pInst->RBC_TM+pInst->Rb2)/(pInst->RBC_TM+pInst->Rb2)));
Gmax_Vb1_b2=((-Vt*(Ic1c2*Rb2_Vb1_b2)/(Ic1c2*(pInst->RBC_TM+pInst->Rb2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(-pInst->RE_TM*Rb2_Vb1_b2/(pInst->RBC_TM+pInst->Rb2)/(pInst->RBC_TM+pInst->Rb2)));
Gmax_Vc4_c1=((-Vt*(Ic1c2*Rb2_Vc4_c1)/(Ic1c2*(pInst->RBC_TM+pInst->Rb2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(-pInst->RE_TM*Rb2_Vc4_c1/(pInst->RBC_TM+pInst->Rb2)/(pInst->RBC_TM+pInst->Rb2)));
Gmax_Vc3_c1=((-Vt*(Ic1c2*Rb2_Vc3_c1)/(Ic1c2*(pInst->RBC_TM+pInst->Rb2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(-pInst->RE_TM*Rb2_Vc3_c1/(pInst->RBC_TM+pInst->Rb2)/(pInst->RBC_TM+pInst->Rb2)));
Gmax_Vc3_c4=((-Vt*(Ic1c2*Rb2_Vc3_c4)/(Ic1c2*(pInst->RBC_TM+pInst->Rb2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(-pInst->RE_TM*Rb2_Vc3_c4/(pInst->RBC_TM+pInst->Rb2)/(pInst->RBC_TM+pInst->Rb2)));
Gmax_Vb2_e1=(((-Vt*(Ic1c2*Rb2_Vb2_e1)/(Ic1c2*(pInst->RBC_TM+pInst->Rb2))/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(qBI_Vb2_e1/BF_T))+(-pInst->RE_TM*Rb2_Vb2_e1/(pInst->RBC_TM+pInst->Rb2)/(pInst->RBC_TM+pInst->Rb2)));
#endif
Gmax=(((Vt/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(pInst->qBI/BF_T))+(pInst->RE_TM/(pInst->RBC_TM+pInst->Rb2)));
EXIT_IF_ISNAN((((Vt/(Ic1c2*(pInst->RBC_TM+pInst->Rb2)))+(pInst->qBI/BF_T))+(pInst->RE_TM/(pInst->RBC_TM+pInst->Rb2))))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1) ddxprobe= */
Iavl_Vdt_GND=((((Ic1c2_Vdt_GND*pInst->Gem)+(Ic1c2*Gem_Vdt_GND))*((pInst->Gem+(pInst->Gem/Gmax))+1.0)-(Ic1c2*pInst->Gem)*(Gem_Vdt_GND+((Gem_Vdt_GND*Gmax-pInst->Gem*Gmax_Vdt_GND)/Gmax/Gmax)))/((pInst->Gem+(pInst->Gem/Gmax))+1.0)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
Iavl_Vb2_c2=((((Ic1c2_Vb2_c2*pInst->Gem)+(Ic1c2*Gem_Vb2_c2))*((pInst->Gem+(pInst->Gem/Gmax))+1.0)-(Ic1c2*pInst->Gem)*(Gem_Vb2_c2+((Gem_Vb2_c2*Gmax-pInst->Gem*Gmax_Vb2_c2)/Gmax/Gmax)))/((pInst->Gem+(pInst->Gem/Gmax))+1.0)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
Iavl_Vb2_c1=((((Ic1c2_Vb2_c1*pInst->Gem)+(Ic1c2*Gem_Vb2_c1))*((pInst->Gem+(pInst->Gem/Gmax))+1.0)-(Ic1c2*pInst->Gem)*(Gem_Vb2_c1+((Gem_Vb2_c1*Gmax-pInst->Gem*Gmax_Vb2_c1)/Gmax/Gmax)))/((pInst->Gem+(pInst->Gem/Gmax))+1.0)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
Iavl_Vc1_c2=((((Ic1c2_Vc1_c2*pInst->Gem)+(Ic1c2*Gem_Vc1_c2))*((pInst->Gem+(pInst->Gem/Gmax))+1.0)-(Ic1c2*pInst->Gem)*(Gem_Vc1_c2+((Gem_Vc1_c2*Gmax-pInst->Gem*Gmax_Vc1_c2)/Gmax/Gmax)))/((pInst->Gem+(pInst->Gem/Gmax))+1.0)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
Iavl_Vb_c=(-(Ic1c2*pInst->Gem)*(-pInst->Gem*Gmax_Vb_c/Gmax/Gmax)/((pInst->Gem+(pInst->Gem/Gmax))+1.0)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
Iavl_Vb_b1=(-(Ic1c2*pInst->Gem)*(-pInst->Gem*Gmax_Vb_b1/Gmax/Gmax)/((pInst->Gem+(pInst->Gem/Gmax))+1.0)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
Iavl_Vb1_b2=(-(Ic1c2*pInst->Gem)*(-pInst->Gem*Gmax_Vb1_b2/Gmax/Gmax)/((pInst->Gem+(pInst->Gem/Gmax))+1.0)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
Iavl_Vc4_c1=(-(Ic1c2*pInst->Gem)*(-pInst->Gem*Gmax_Vc4_c1/Gmax/Gmax)/((pInst->Gem+(pInst->Gem/Gmax))+1.0)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
Iavl_Vc3_c1=(-(Ic1c2*pInst->Gem)*(-pInst->Gem*Gmax_Vc3_c1/Gmax/Gmax)/((pInst->Gem+(pInst->Gem/Gmax))+1.0)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
Iavl_Vc3_c4=(-(Ic1c2*pInst->Gem)*(-pInst->Gem*Gmax_Vc3_c4/Gmax/Gmax)/((pInst->Gem+(pInst->Gem/Gmax))+1.0)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
Iavl_Vb2_e1=(-(Ic1c2*pInst->Gem)*(-pInst->Gem*Gmax_Vb2_e1/Gmax/Gmax)/((pInst->Gem+(pInst->Gem/Gmax))+1.0)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
#endif
Iavl=((Ic1c2*pInst->Gem)/((pInst->Gem+(pInst->Gem/Gmax))+1.0));
EXIT_IF_ISNAN(((Ic1c2*pInst->Gem)/((pInst->Gem+(pInst->Gem/Gmax))+1.0)))
}
if
((eVb2c2star>0.0))
{
{
double m00_logE(d00_logE0,eVb2c2star)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,eVb2c2star)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vb2c2star_Vdt_GND=((Vt_Vdt_GND*d00_logE0)+(Vt*eVb2c2star_Vdt_GND*d10_logE0));
Vb2c2star_Vb2_c2=(Vt*eVb2c2star_Vb2_c2*d10_logE0);
Vb2c2star_Vb2_c1=(Vt*eVb2c2star_Vb2_c1*d10_logE0);
Vb2c2star_Vc1_c2=(Vt*eVb2c2star_Vc1_c2*d10_logE0);
#endif
Vb2c2star=(Vt*d00_logE0);
EXIT_IF_ISNAN((Vt*d00_logE0))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vb2c2star_Vdt_GND=0.0;
Vb2c2star_Vb2_c2=Vb2c2_Vb2_c2;
Vb2c2star_Vb2_c1=0.0;
Vb2c2star_Vc1_c2=0.0;
#endif
Vb2c2star=Vb2c2;
EXIT_IF_ISNAN(Vb2c2)
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(e:e1)V(b1:e1)V(s:c1) ddxprobe= */
power_Vdt_GND=(((((((((((((((((In_Vdt_GND*(Vb2e1-Vb2c2star))+(In*(-Vb2c2star_Vdt_GND)))+((Ic1c2_Vdt_GND*(Vb2c2star-Vb2c1))+(Ic1c2*Vb2c2star_Vdt_GND)))-((Iavl_Vdt_GND*Vb2c2star)+(Iavl*Vb2c2star_Vdt_GND)))+(-(Vee1*Vee1)*RE_TM_Vdt_GND/pInst->RE_TM/pInst->RE_TM))+((Vcc3*Vcc3)*GCCxx_TM_Vdt_GND))+((Vc3c4*Vc3c4)*GCCex_TM_Vdt_GND))+((Vc4c1*Vc4c1)*GCCin_TM_Vdt_GND))+(-(Vbb1*Vbb1)*RBC_TM_Vdt_GND/pInst->RBC_TM/pInst->RBC_TM))+Ib1b2_Vdt_GND*Vb1b2)+(Ib1_Vdt_GND+Ib2_Vdt_GND)*Vb2e1)+Ib1_s_Vdt_GND*Vb1e1)+(Iex_Vdt_GND+Ib3_Vdt_GND)*Vb1c4)+XIex_Vdt_GND*Vbc3)+Isub_Vdt_GND*(Vb1c4-Vsc4))+XIsub_Vdt_GND*(Vbc3-Vsc3))+Isf_Vdt_GND*Vsc1);
power_Vb2_e1=((((((((In_Vb2_e1*(Vb2e1-Vb2c2star))+(In*Vb2e1_Vb2_e1))-Iavl_Vb2_e1*Vb2c2star)+Ib1b2_Vb2_e1*Vb1b2)+(((Ib1_Vb2_e1+Ib2_Vb2_e1)*Vb2e1)+((pInst->Ib1+pInst->Ib2)*Vb2e1_Vb2_e1)))+Ib3_Vb2_e1*Vb1c4)+XIex_Vb2_e1*Vbc3)+XIsub_Vb2_e1*(Vbc3-Vsc3));
power_Vb2_c2=(((((((((((In_Vb2_c2*(Vb2e1-Vb2c2star))+(In*(-Vb2c2star_Vb2_c2)))+((Ic1c2_Vb2_c2*(Vb2c2star-Vb2c1))+(Ic1c2*Vb2c2star_Vb2_c2)))-((Iavl_Vb2_c2*Vb2c2star)+(Iavl*Vb2c2star_Vb2_c2)))+((Vcc3_Vb2_c2*Vcc3)+(Vcc3*Vcc3_Vb2_c2))*pInst->GCCxx_TM)+Ib1b2_Vb2_c2*Vb1b2)+Ib1_Vb2_c2*Vb2e1)+(((Iex_Vb2_c2+Ib3_Vb2_c2)*Vb1c4)+((pInst->Iex+pInst->Ib3)*Vb1c4_Vb2_c2)))+((XIex_Vb2_c2*Vbc3)+(pInst->XIex*Vbc3_Vb2_c2)))+((Isub_Vb2_c2*(Vb1c4-Vsc4))+(pInst->Isub*Vb1c4_Vb2_c2)))+((XIsub_Vb2_c2*(Vbc3-Vsc3))+(pInst->XIsub*Vbc3_Vb2_c2)));
power_Vb2_c1=((((((((In_Vb2_c1*(Vb2e1-Vb2c2star))+(In*(-Vb2c2star_Vb2_c1)))+((Ic1c2_Vb2_c1*(Vb2c2star-Vb2c1))+(Ic1c2*(Vb2c2star_Vb2_c1-Vb2c1_Vb2_c1))))-((Iavl_Vb2_c1*Vb2c2star)+(Iavl*Vb2c2star_Vb2_c1)))+Ib1b2_Vb2_c1*Vb1b2)+Ib1_Vb2_c1*Vb2e1)+XIex_Vb2_c1*Vbc3)+XIsub_Vb2_c1*(Vbc3-Vsc3));
power_Vc1_c2=(((((((((((In_Vc1_c2*(Vb2e1-Vb2c2star))+(In*(-Vb2c2star_Vc1_c2)))+((Ic1c2_Vc1_c2*(Vb2c2star-Vb2c1))+(Ic1c2*Vb2c2star_Vc1_c2)))-((Iavl_Vc1_c2*Vb2c2star)+(Iavl*Vb2c2star_Vc1_c2)))+((Vcc3_Vc1_c2*Vcc3)+(Vcc3*Vcc3_Vc1_c2))*pInst->GCCxx_TM)+Ib1b2_Vc1_c2*Vb1b2)+Ib1_Vc1_c2*Vb2e1)+(((Iex_Vc1_c2+Ib3_Vc1_c2)*Vb1c4)+((pInst->Iex+pInst->Ib3)*Vb1c4_Vc1_c2)))+((XIex_Vc1_c2*Vbc3)+(pInst->XIex*Vbc3_Vc1_c2)))+((Isub_Vc1_c2*(Vb1c4-Vsc4))+(pInst->Isub*Vb1c4_Vc1_c2)))+((XIsub_Vc1_c2*(Vbc3-Vsc3))+(pInst->XIsub*Vbc3_Vc1_c2)));
power_Vb_c=(((((-Iavl_Vb_c*Vb2c2star)+((Vcc3_Vb_c*Vcc3)+(Vcc3*Vcc3_Vb_c))*pInst->GCCxx_TM)+Ib1b2_Vb_c*Vb1b2)+((XIex_Vb_c*Vbc3)+(pInst->XIex*Vbc3_Vb_c)))+((XIsub_Vb_c*(Vbc3-Vsc3))+(pInst->XIsub*Vbc3_Vb_c)));
power_Vb_b1=((((((-Iavl_Vb_b1*Vb2c2star)+((Vcc3_Vb_b1*Vcc3)+(Vcc3*Vcc3_Vb_b1))*pInst->GCCxx_TM)+(((Vbb1_Vb_b1*Vbb1)+(Vbb1*Vbb1_Vb_b1))/pInst->RBC_TM))+Ib1b2_Vb_b1*Vb1b2)+((XIex_Vb_b1*Vbc3)+(pInst->XIex*Vbc3_Vb_b1)))+((XIsub_Vb_b1*(Vbc3-Vsc3))+(pInst->XIsub*Vbc3_Vb_b1)));
power_Vb1_b2=(((((((-Iavl_Vb1_b2*Vb2c2star)+((Vcc3_Vb1_b2*Vcc3)+(Vcc3*Vcc3_Vb1_b2))*pInst->GCCxx_TM)+((Ib1b2_Vb1_b2*Vb1b2)+(Ib1b2*Vb1b2_Vb1_b2)))+(((Iex_Vb1_b2+Ib3_Vb1_b2)*Vb1c4)+((pInst->Iex+pInst->Ib3)*Vb1c4_Vb1_b2)))+((XIex_Vb1_b2*Vbc3)+(pInst->XIex*Vbc3_Vb1_b2)))+((Isub_Vb1_b2*(Vb1c4-Vsc4))+(pInst->Isub*Vb1c4_Vb1_b2)))+((XIsub_Vb1_b2*(Vbc3-Vsc3))+(pInst->XIsub*Vbc3_Vb1_b2)));
power_Vc4_c1=((((((((-Iavl_Vc4_c1*Vb2c2star)+((Vcc3_Vc4_c1*Vcc3)+(Vcc3*Vcc3_Vc4_c1))*pInst->GCCxx_TM)+((Vc4c1_Vc4_c1*Vc4c1)+(Vc4c1*Vc4c1_Vc4_c1))*pInst->GCCin_TM)+Ib1b2_Vc4_c1*Vb1b2)+(((Iex_Vc4_c1+Ib3_Vc4_c1)*Vb1c4)+((pInst->Iex+pInst->Ib3)*Vb1c4_Vc4_c1)))+((XIex_Vc4_c1*Vbc3)+(pInst->XIex*Vbc3_Vc4_c1)))+((Isub_Vc4_c1*(Vb1c4-Vsc4))+(pInst->Isub*(Vb1c4_Vc4_c1-Vsc4_Vc4_c1))))+((XIsub_Vc4_c1*(Vbc3-Vsc3))+(pInst->XIsub*(Vbc3_Vc4_c1-Vsc3_Vc4_c1))));
power_Vc3_c1=((((((-Iavl_Vc3_c1*Vb2c2star)+((Vcc3_Vc3_c1*Vcc3)+(Vcc3*Vcc3_Vc3_c1))*pInst->GCCxx_TM)+((Vc3c4_Vc3_c1*Vc3c4)+(Vc3c4*Vc3c4_Vc3_c1))*pInst->GCCex_TM)+Ib1b2_Vc3_c1*Vb1b2)+((XIex_Vc3_c1*Vbc3)+(pInst->XIex*Vbc3_Vc3_c1)))+((XIsub_Vc3_c1*(Vbc3-Vsc3))+(pInst->XIsub*(Vbc3_Vc3_c1-Vsc3_Vc3_c1))));
power_Vc3_c4=((((((-Iavl_Vc3_c4*Vb2c2star)+((Vcc3_Vc3_c4*Vcc3)+(Vcc3*Vcc3_Vc3_c4))*pInst->GCCxx_TM)+((Vc3c4_Vc3_c4*Vc3c4)+(Vc3c4*Vc3c4_Vc3_c4))*pInst->GCCex_TM)+Ib1b2_Vc3_c4*Vb1b2)+((XIex_Vc3_c4*Vbc3)+(pInst->XIex*Vbc3_Vc3_c4)))+((XIsub_Vc3_c4*(Vbc3-Vsc3))+(pInst->XIsub*(Vbc3_Vc3_c4-Vsc3_Vc3_c4))));
power_Ve_e1=(((Vee1_Ve_e1*Vee1)+(Vee1*Vee1_Ve_e1))/pInst->RE_TM);
power_Vb1_e1=((Ib1_s_Vb1_e1*Vb1e1)+(pInst->Ib1_s*Vb1e1_Vb1_e1));
power_Vs_c1=(((pInst->Isub*(-Vsc4_Vs_c1))+(pInst->XIsub*(-Vsc3_Vs_c1)))+((Isf_Vs_c1*Vsc1)+(Isf*Vsc1_Vs_c1)));
#endif
power=((((((((((((((((In*(Vb2e1-Vb2c2star))+(Ic1c2*(Vb2c2star-Vb2c1)))-(Iavl*Vb2c2star))+((Vee1*Vee1)/pInst->RE_TM))+((Vcc3*Vcc3)*pInst->GCCxx_TM))+((Vc3c4*Vc3c4)*pInst->GCCex_TM))+((Vc4c1*Vc4c1)*pInst->GCCin_TM))+((Vbb1*Vbb1)/pInst->RBC_TM))+(Ib1b2*Vb1b2))+((pInst->Ib1+pInst->Ib2)*Vb2e1))+(pInst->Ib1_s*Vb1e1))+((pInst->Iex+pInst->Ib3)*Vb1c4))+(pInst->XIex*Vbc3))+(pInst->Isub*(Vb1c4-Vsc4)))+(pInst->XIsub*(Vbc3-Vsc3)))+(Isf*Vsc1));
EXIT_IF_ISNAN(((((((((((((((((In*(Vb2e1-Vb2c2star))+(Ic1c2*(Vb2c2star-Vb2c1)))-(Iavl*Vb2c2star))+((Vee1*Vee1)/pInst->RE_TM))+((Vcc3*Vcc3)*pInst->GCCxx_TM))+((Vc3c4*Vc3c4)*pInst->GCCex_TM))+((Vc4c1*Vc4c1)*pInst->GCCin_TM))+((Vbb1*Vbb1)/pInst->RBC_TM))+(Ib1b2*Vb1b2))+((pInst->Ib1+pInst->Ib2)*Vb2e1))+(pInst->Ib1_s*Vb1e1))+((pInst->Iex+pInst->Ib3)*Vb1c4))+(pInst->XIex*Vbc3))+(pInst->Isub*(Vb1c4-Vsc4)))+(pInst->XIsub*(Vbc3-Vsc3)))+(Isf*Vsc1)))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Qte_Vdt_GND=((((1.0-pModel->XCJE)*CJE_TM_Vdt_GND)*Vte)+(((1.0-pModel->XCJE)*CJE_TM)*Vte_Vdt_GND));
Qte_Vb2_e1=(((1.0-pModel->XCJE)*CJE_TM)*Vte_Vb2_e1);
Qte_Vb2_c2=(((1.0-pModel->XCJE)*CJE_TM)*Vte_Vb2_c2);
Qte_Vb2_c1=(((1.0-pModel->XCJE)*CJE_TM)*Vte_Vb2_c1);
Qte_Vc1_c2=(((1.0-pModel->XCJE)*CJE_TM)*Vte_Vc1_c2);
#endif
Qte=(((1.0-pModel->XCJE)*CJE_TM)*Vte);
EXIT_IF_ISNAN((((1.0-pModel->XCJE)*CJE_TM)*Vte))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(s:c1)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
dxa_Vs_c1=0.0;
dxa_Vb_c=0.0;
dxa_Vb_b1=0.0;
dxa_Vc3_c1=0.0;
dxa_Vc3_c4=0.0;
dxa_Vb1_b2=0.0;
dxa_Vc4_c1=0.0;
dxa_Vb1_e1=(Vb1e1_Vb1_e1/a_VDE);
dxa_Vb2_e1=0.0;
dxa_Vb2_c2=0.0;
dxa_Vb2_c1=0.0;
dxa_Vc1_c2=0.0;
dxa_Vdt_GND=(((-Vfe_Vdt_GND)*a_VDE-(Vb1e1-Vfe)*a_VDE_Vdt_GND)/a_VDE/a_VDE);
#endif
dxa=((Vb1e1-Vfe)/a_VDE);
EXIT_IF_ISNAN(((Vb1e1-Vfe)/a_VDE))
#endif
#ifdef _DYNAMIC
if
((Vb1e1<Vfe))
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,dxa)
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b1:e1)V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vje_s_Vb1_e1=(Vb1e1_Vb1_e1-(a_VDE*dxa_Vb1_e1*d10_exp0*d10_logE1));
Vje_s_Vdt_GND=(-((a_VDE_Vdt_GND*d00_logE1)+(a_VDE*dxa_Vdt_GND*d10_exp0*d10_logE1)));
Vje_s_Vb2_e1=(-(a_VDE*dxa_Vb2_e1*d10_exp0*d10_logE1));
Vje_s_Vb2_c2=(-(a_VDE*dxa_Vb2_c2*d10_exp0*d10_logE1));
Vje_s_Vb2_c1=(-(a_VDE*dxa_Vb2_c1*d10_exp0*d10_logE1));
Vje_s_Vc1_c2=(-(a_VDE*dxa_Vc1_c2*d10_exp0*d10_logE1));
#endif
Vje_s=(Vb1e1-(a_VDE*d00_logE1));
EXIT_IF_ISNAN((Vb1e1-(a_VDE*d00_logE1)))
}
#endif
}
else
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,(-dxa))
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b1:e1)V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vje_s_Vb1_e1=(-(a_VDE*(-dxa_Vb1_e1)*d10_exp0*d10_logE1));
Vje_s_Vdt_GND=(Vfe_Vdt_GND-((a_VDE_Vdt_GND*d00_logE1)+(a_VDE*(-dxa_Vdt_GND)*d10_exp0*d10_logE1)));
Vje_s_Vb2_e1=(-(a_VDE*(-dxa_Vb2_e1)*d10_exp0*d10_logE1));
Vje_s_Vb2_c2=(-(a_VDE*(-dxa_Vb2_c2)*d10_exp0*d10_logE1));
Vje_s_Vb2_c1=(-(a_VDE*(-dxa_Vb2_c1)*d10_exp0*d10_logE1));
Vje_s_Vc1_c2=(-(a_VDE*(-dxa_Vc1_c2)*d10_exp0*d10_logE1));
#endif
Vje_s=(Vfe-(a_VDE*d00_logE1));
EXIT_IF_ISNAN((Vfe-(a_VDE*d00_logE1)))
}
#endif
}
#endif /* if(...) */
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b1:e1)V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vje_s_Vb1_e1=Vje_s_Vb1_e1;
Vje_s_Vdt_GND=Vje_s_Vdt_GND;
Vje_s_Vb2_e1=Vje_s_Vb2_e1;
Vje_s_Vb2_c2=Vje_s_Vb2_c2;
Vje_s_Vb2_c1=Vje_s_Vb2_c1;
Vje_s_Vc1_c2=Vje_s_Vc1_c2;
#endif
Vje_s=Vje_s;
EXIT_IF_ISNAN(Vje_s)
#endif
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1.0-(Vje_s/VDE_T)),(1.0-pModel->PE))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(1.0-(Vje_s/VDE_T)),(1.0-pModel->PE))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Qte_s_Vdt_GND=(((pModel->XCJE*CJE_TM_Vdt_GND)*(((VDE_T/(1.0-pModel->PE))*(1.0-d00_pow0))+(3.0*(Vb1e1-Vje_s))))+((pModel->XCJE*CJE_TM)*((((VDE_T_Vdt_GND/(1.0-pModel->PE))*(1.0-d00_pow0))+((VDE_T/(1.0-pModel->PE))*(-(d10_pow0*(-((Vje_s_Vdt_GND*VDE_T-Vje_s*VDE_T_Vdt_GND)/VDE_T/VDE_T))))))+(3.0*(-Vje_s_Vdt_GND)))));
Qte_s_Vb1_e1=((pModel->XCJE*CJE_TM)*(((VDE_T/(1.0-pModel->PE))*(-(d10_pow0*(-(Vje_s_Vb1_e1/VDE_T)))))+(3.0*(Vb1e1_Vb1_e1-Vje_s_Vb1_e1))));
Qte_s_Vb2_e1=((pModel->XCJE*CJE_TM)*(((VDE_T/(1.0-pModel->PE))*(-(d10_pow0*(-(Vje_s_Vb2_e1/VDE_T)))))+(3.0*(-Vje_s_Vb2_e1))));
Qte_s_Vb2_c2=((pModel->XCJE*CJE_TM)*(((VDE_T/(1.0-pModel->PE))*(-(d10_pow0*(-(Vje_s_Vb2_c2/VDE_T)))))+(3.0*(-Vje_s_Vb2_c2))));
Qte_s_Vb2_c1=((pModel->XCJE*CJE_TM)*(((VDE_T/(1.0-pModel->PE))*(-(d10_pow0*(-(Vje_s_Vb2_c1/VDE_T)))))+(3.0*(-Vje_s_Vb2_c1))));
Qte_s_Vc1_c2=((pModel->XCJE*CJE_TM)*(((VDE_T/(1.0-pModel->PE))*(-(d10_pow0*(-(Vje_s_Vc1_c2/VDE_T)))))+(3.0*(-Vje_s_Vc1_c2))));
#endif
Qte_s=((pModel->XCJE*CJE_TM)*(((VDE_T/(1.0-pModel->PE))*(1.0-d00_pow0))+(3.0*(Vb1e1-Vje_s))));
EXIT_IF_ISNAN(((pModel->XCJE*CJE_TM)*(((VDE_T/(1.0-pModel->PE))*(1.0-d00_pow0))+(3.0*(Vb1e1-Vje_s)))))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2)V(b2:e1) ddxprobe= */
Qtc_Vdt_GND=(((pModel->XCJC*CJC_TM_Vdt_GND)*Vtc)+((pModel->XCJC*CJC_TM)*Vtc_Vdt_GND));
Qtc_Vb2_c2=((pModel->XCJC*CJC_TM)*Vtc_Vb2_c2);
Qtc_Vb2_c1=((pModel->XCJC*CJC_TM)*Vtc_Vb2_c1);
Qtc_Vc1_c2=((pModel->XCJC*CJC_TM)*Vtc_Vc1_c2);
Qtc_Vb2_e1=((pModel->XCJC*CJC_TM)*Vtc_Vb2_e1);
#endif
Qtc=((pModel->XCJC*CJC_TM)*Vtc);
EXIT_IF_ISNAN(((pModel->XCJC*CJC_TM)*Vtc))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Qb0_Vdt_GND=((TAUB_T_Vdt_GND*IK_TM)+(TAUB_T*IK_TM_Vdt_GND));
#endif
Qb0=(TAUB_T*IK_TM);
EXIT_IF_ISNAN((TAUB_T*IK_TM))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Qbe_qs_Vdt_GND=(((((0.5*Qb0_Vdt_GND)*n0)+((0.5*Qb0)*n0_Vdt_GND))*q1Q)+(((0.5*Qb0)*n0)*q1Q_Vdt_GND));
Qbe_qs_Vb2_e1=((((0.5*Qb0)*n0_Vb2_e1)*q1Q)+(((0.5*Qb0)*n0)*q1Q_Vb2_e1));
Qbe_qs_Vb_c=(((0.5*Qb0)*n0)*q1Q_Vb_c);
Qbe_qs_Vb_b1=(((0.5*Qb0)*n0)*q1Q_Vb_b1);
Qbe_qs_Vb1_b2=(((0.5*Qb0)*n0)*q1Q_Vb1_b2);
Qbe_qs_Vc4_c1=(((0.5*Qb0)*n0)*q1Q_Vc4_c1);
Qbe_qs_Vc3_c1=(((0.5*Qb0)*n0)*q1Q_Vc3_c1);
Qbe_qs_Vc3_c4=(((0.5*Qb0)*n0)*q1Q_Vc3_c4);
Qbe_qs_Vb2_c2=(((0.5*Qb0)*n0)*q1Q_Vb2_c2);
Qbe_qs_Vb2_c1=(((0.5*Qb0)*n0)*q1Q_Vb2_c1);
Qbe_qs_Vc1_c2=(((0.5*Qb0)*n0)*q1Q_Vc1_c2);
#endif
Qbe_qs=(((0.5*Qb0)*n0)*q1Q);
EXIT_IF_ISNAN((((0.5*Qb0)*n0)*q1Q))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1) ddxprobe= */
Qbc_qs_Vdt_GND=(((((0.5*Qb0_Vdt_GND)*nB)+((0.5*Qb0)*nB_Vdt_GND))*q1Q)+(((0.5*Qb0)*nB)*q1Q_Vdt_GND));
Qbc_qs_Vb2_c2=((((0.5*Qb0)*nB_Vb2_c2)*q1Q)+(((0.5*Qb0)*nB)*q1Q_Vb2_c2));
Qbc_qs_Vb2_c1=((((0.5*Qb0)*nB_Vb2_c1)*q1Q)+(((0.5*Qb0)*nB)*q1Q_Vb2_c1));
Qbc_qs_Vc1_c2=((((0.5*Qb0)*nB_Vc1_c2)*q1Q)+(((0.5*Qb0)*nB)*q1Q_Vc1_c2));
Qbc_qs_Vb_c=(((0.5*Qb0)*nB)*q1Q_Vb_c);
Qbc_qs_Vb_b1=(((0.5*Qb0)*nB)*q1Q_Vb_b1);
Qbc_qs_Vb1_b2=(((0.5*Qb0)*nB)*q1Q_Vb1_b2);
Qbc_qs_Vc4_c1=(((0.5*Qb0)*nB)*q1Q_Vc4_c1);
Qbc_qs_Vc3_c1=(((0.5*Qb0)*nB)*q1Q_Vc3_c1);
Qbc_qs_Vc3_c4=(((0.5*Qb0)*nB)*q1Q_Vc3_c4);
Qbc_qs_Vb2_e1=(((0.5*Qb0)*nB)*q1Q_Vb2_e1);
#endif
Qbc_qs=(((0.5*Qb0)*nB)*q1Q);
EXIT_IF_ISNAN((((0.5*Qb0)*nB)*q1Q))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
a_VDC_Vdt_GND=(0.1*VDC_T_Vdt_GND);
#endif
a_VDC=(0.1*VDC_T);
EXIT_IF_ISNAN((0.1*VDC_T))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(s:c1)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
dxa_Vs_c1=0.0;
dxa_Vb_c=0.0;
dxa_Vb_b1=0.0;
dxa_Vc3_c1=0.0;
dxa_Vc3_c4=0.0;
dxa_Vb1_b2=(Vb1c4_Vb1_b2/a_VDC);
dxa_Vc4_c1=(Vb1c4_Vc4_c1/a_VDC);
dxa_Vb1_e1=0.0;
dxa_Vb2_e1=0.0;
dxa_Vb2_c2=(Vb1c4_Vb2_c2/a_VDC);
dxa_Vb2_c1=0.0;
dxa_Vc1_c2=(Vb1c4_Vc1_c2/a_VDC);
dxa_Vdt_GND=(((-Vfc_Vdt_GND)*a_VDC-(Vb1c4-Vfc)*a_VDC_Vdt_GND)/a_VDC/a_VDC);
#endif
dxa=((Vb1c4-Vfc)/a_VDC);
EXIT_IF_ISNAN(((Vb1c4-Vfc)/a_VDC))
#endif
#ifdef _DYNAMIC
if
((Vb1c4<Vfc))
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,dxa)
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(dt:GND)V(b1:e1)V(b2:e1)V(b2:c1) ddxprobe= */
Vjcex_Vb1_b2=(Vb1c4_Vb1_b2-(a_VDC*dxa_Vb1_b2*d10_exp0*d10_logE1));
Vjcex_Vb2_c2=(Vb1c4_Vb2_c2-(a_VDC*dxa_Vb2_c2*d10_exp0*d10_logE1));
Vjcex_Vc1_c2=(Vb1c4_Vc1_c2-(a_VDC*dxa_Vc1_c2*d10_exp0*d10_logE1));
Vjcex_Vc4_c1=(Vb1c4_Vc4_c1-(a_VDC*dxa_Vc4_c1*d10_exp0*d10_logE1));
Vjcex_Vdt_GND=(-((a_VDC_Vdt_GND*d00_logE1)+(a_VDC*dxa_Vdt_GND*d10_exp0*d10_logE1)));
Vjcex_Vb1_e1=(-(a_VDC*dxa_Vb1_e1*d10_exp0*d10_logE1));
Vjcex_Vb2_e1=(-(a_VDC*dxa_Vb2_e1*d10_exp0*d10_logE1));
Vjcex_Vb2_c1=(-(a_VDC*dxa_Vb2_c1*d10_exp0*d10_logE1));
#endif
Vjcex=(Vb1c4-(a_VDC*d00_logE1));
EXIT_IF_ISNAN((Vb1c4-(a_VDC*d00_logE1)))
}
#endif
}
else
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,(-dxa))
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(dt:GND)V(b1:e1)V(b2:e1)V(b2:c1) ddxprobe= */
Vjcex_Vb1_b2=(-(a_VDC*(-dxa_Vb1_b2)*d10_exp0*d10_logE1));
Vjcex_Vb2_c2=(-(a_VDC*(-dxa_Vb2_c2)*d10_exp0*d10_logE1));
Vjcex_Vc1_c2=(-(a_VDC*(-dxa_Vc1_c2)*d10_exp0*d10_logE1));
Vjcex_Vc4_c1=(-(a_VDC*(-dxa_Vc4_c1)*d10_exp0*d10_logE1));
Vjcex_Vdt_GND=(Vfc_Vdt_GND-((a_VDC_Vdt_GND*d00_logE1)+(a_VDC*(-dxa_Vdt_GND)*d10_exp0*d10_logE1)));
Vjcex_Vb1_e1=(-(a_VDC*(-dxa_Vb1_e1)*d10_exp0*d10_logE1));
Vjcex_Vb2_e1=(-(a_VDC*(-dxa_Vb2_e1)*d10_exp0*d10_logE1));
Vjcex_Vb2_c1=(-(a_VDC*(-dxa_Vb2_c1)*d10_exp0*d10_logE1));
#endif
Vjcex=(Vfc-(a_VDC*d00_logE1));
EXIT_IF_ISNAN((Vfc-(a_VDC*d00_logE1)))
}
#endif
}
#endif /* if(...) */
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(dt:GND)V(b1:e1)V(b2:e1)V(b2:c1) ddxprobe= */
Vjcex_Vb1_b2=Vjcex_Vb1_b2;
Vjcex_Vb2_c2=Vjcex_Vb2_c2;
Vjcex_Vc1_c2=Vjcex_Vc1_c2;
Vjcex_Vc4_c1=Vjcex_Vc4_c1;
Vjcex_Vdt_GND=Vjcex_Vdt_GND;
Vjcex_Vb1_e1=Vjcex_Vb1_e1;
Vjcex_Vb2_e1=Vjcex_Vb2_e1;
Vjcex_Vb2_c1=Vjcex_Vb2_c1;
#endif
Vjcex=Vjcex;
EXIT_IF_ISNAN(Vjcex)
#endif
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1.0-(Vjcex/VDC_T)),(1.0-pModel->PC))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(1.0-(Vjcex/VDC_T)),(1.0-pModel->PC))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c1) ddxprobe= */
Vtexv_Vdt_GND=((((VDC_T_Vdt_GND/(1.0-pModel->PC))*(1.0-d00_pow0))+((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-((Vjcex_Vdt_GND*VDC_T-Vjcex*VDC_T_Vdt_GND)/VDC_T/VDC_T))))))+((bjc_Vdt_GND*(Vb1c4-Vjcex))+(bjc*(-Vjcex_Vdt_GND))));
Vtexv_Vb1_b2=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(Vjcex_Vb1_b2/VDC_T)))))+(bjc*(Vb1c4_Vb1_b2-Vjcex_Vb1_b2)));
Vtexv_Vb2_c2=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(Vjcex_Vb2_c2/VDC_T)))))+(bjc*(Vb1c4_Vb2_c2-Vjcex_Vb2_c2)));
Vtexv_Vc1_c2=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(Vjcex_Vc1_c2/VDC_T)))))+(bjc*(Vb1c4_Vc1_c2-Vjcex_Vc1_c2)));
Vtexv_Vc4_c1=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(Vjcex_Vc4_c1/VDC_T)))))+(bjc*(Vb1c4_Vc4_c1-Vjcex_Vc4_c1)));
Vtexv_Vb1_e1=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(Vjcex_Vb1_e1/VDC_T)))))+(bjc*(-Vjcex_Vb1_e1)));
Vtexv_Vb2_e1=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(Vjcex_Vb2_e1/VDC_T)))))+(bjc*(-Vjcex_Vb2_e1)));
Vtexv_Vb2_c1=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(Vjcex_Vb2_c1/VDC_T)))))+(bjc*(-Vjcex_Vb2_c1)));
#endif
Vtexv=(((VDC_T/(1.0-pModel->PC))*(1.0-d00_pow0))+(bjc*(Vb1c4-Vjcex)));
EXIT_IF_ISNAN((((VDC_T/(1.0-pModel->PC))*(1.0-d00_pow0))+(bjc*(Vb1c4-Vjcex))))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c1) ddxprobe= */
Qtex_Vdt_GND=((CJC_TM_Vdt_GND*(((1.0-XP_T)*Vtexv)+(XP_T*Vb1c4)))+(CJC_TM*((((-XP_T_Vdt_GND)*Vtexv)+((1.0-XP_T)*Vtexv_Vdt_GND))+XP_T_Vdt_GND*Vb1c4)))*(1.0-pModel->XCJC)*(1.0-pModel->XEXT);
Qtex_Vb1_b2=(CJC_TM*(((1.0-XP_T)*Vtexv_Vb1_b2)+(XP_T*Vb1c4_Vb1_b2)))*(1.0-pModel->XCJC)*(1.0-pModel->XEXT);
Qtex_Vb2_c2=(CJC_TM*(((1.0-XP_T)*Vtexv_Vb2_c2)+(XP_T*Vb1c4_Vb2_c2)))*(1.0-pModel->XCJC)*(1.0-pModel->XEXT);
Qtex_Vc1_c2=(CJC_TM*(((1.0-XP_T)*Vtexv_Vc1_c2)+(XP_T*Vb1c4_Vc1_c2)))*(1.0-pModel->XCJC)*(1.0-pModel->XEXT);
Qtex_Vc4_c1=(CJC_TM*(((1.0-XP_T)*Vtexv_Vc4_c1)+(XP_T*Vb1c4_Vc4_c1)))*(1.0-pModel->XCJC)*(1.0-pModel->XEXT);
Qtex_Vb1_e1=(CJC_TM*((1.0-XP_T)*Vtexv_Vb1_e1))*(1.0-pModel->XCJC)*(1.0-pModel->XEXT);
Qtex_Vb2_e1=(CJC_TM*((1.0-XP_T)*Vtexv_Vb2_e1))*(1.0-pModel->XCJC)*(1.0-pModel->XEXT);
Qtex_Vb2_c1=(CJC_TM*((1.0-XP_T)*Vtexv_Vb2_c1))*(1.0-pModel->XCJC)*(1.0-pModel->XEXT);
#endif
Qtex=(((CJC_TM*(((1.0-XP_T)*Vtexv)+(XP_T*Vb1c4)))*(1.0-pModel->XCJC))*(1.0-pModel->XEXT));
EXIT_IF_ISNAN((((CJC_TM*(((1.0-XP_T)*Vtexv)+(XP_T*Vb1c4)))*(1.0-pModel->XCJC))*(1.0-pModel->XEXT)))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(s:c1)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
dxa_Vs_c1=0.0;
dxa_Vb_c=(Vbc3_Vb_c/a_VDC);
dxa_Vb_b1=(Vbc3_Vb_b1/a_VDC);
dxa_Vc3_c1=(Vbc3_Vc3_c1/a_VDC);
dxa_Vc3_c4=(Vbc3_Vc3_c4/a_VDC);
dxa_Vb1_b2=(Vbc3_Vb1_b2/a_VDC);
dxa_Vc4_c1=(Vbc3_Vc4_c1/a_VDC);
dxa_Vb1_e1=0.0;
dxa_Vb2_e1=0.0;
dxa_Vb2_c2=(Vbc3_Vb2_c2/a_VDC);
dxa_Vb2_c1=0.0;
dxa_Vc1_c2=(Vbc3_Vc1_c2/a_VDC);
dxa_Vdt_GND=(((-Vfc_Vdt_GND)*a_VDC-(Vbc3-Vfc)*a_VDC_Vdt_GND)/a_VDC/a_VDC);
#endif
dxa=((Vbc3-Vfc)/a_VDC);
EXIT_IF_ISNAN(((Vbc3-Vfc)/a_VDC))
#endif
#ifdef _DYNAMIC
if
((Vbc3<Vfc))
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,dxa)
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(dt:GND)V(b1:e1)V(b2:e1)V(b2:c1) ddxprobe= */
XVjcex_Vb_c=(Vbc3_Vb_c-(a_VDC*dxa_Vb_c*d10_exp0*d10_logE1));
XVjcex_Vb_b1=(Vbc3_Vb_b1-(a_VDC*dxa_Vb_b1*d10_exp0*d10_logE1));
XVjcex_Vb1_b2=(Vbc3_Vb1_b2-(a_VDC*dxa_Vb1_b2*d10_exp0*d10_logE1));
XVjcex_Vb2_c2=(Vbc3_Vb2_c2-(a_VDC*dxa_Vb2_c2*d10_exp0*d10_logE1));
XVjcex_Vc1_c2=(Vbc3_Vc1_c2-(a_VDC*dxa_Vc1_c2*d10_exp0*d10_logE1));
XVjcex_Vc4_c1=(Vbc3_Vc4_c1-(a_VDC*dxa_Vc4_c1*d10_exp0*d10_logE1));
XVjcex_Vc3_c1=(Vbc3_Vc3_c1-(a_VDC*dxa_Vc3_c1*d10_exp0*d10_logE1));
XVjcex_Vc3_c4=(Vbc3_Vc3_c4-(a_VDC*dxa_Vc3_c4*d10_exp0*d10_logE1));
XVjcex_Vdt_GND=(-((a_VDC_Vdt_GND*d00_logE1)+(a_VDC*dxa_Vdt_GND*d10_exp0*d10_logE1)));
XVjcex_Vb1_e1=(-(a_VDC*dxa_Vb1_e1*d10_exp0*d10_logE1));
XVjcex_Vb2_e1=(-(a_VDC*dxa_Vb2_e1*d10_exp0*d10_logE1));
XVjcex_Vb2_c1=(-(a_VDC*dxa_Vb2_c1*d10_exp0*d10_logE1));
#endif
XVjcex=(Vbc3-(a_VDC*d00_logE1));
EXIT_IF_ISNAN((Vbc3-(a_VDC*d00_logE1)))
}
#endif
}
else
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,(-dxa))
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(dt:GND)V(b1:e1)V(b2:e1)V(b2:c1) ddxprobe= */
XVjcex_Vb_c=(-(a_VDC*(-dxa_Vb_c)*d10_exp0*d10_logE1));
XVjcex_Vb_b1=(-(a_VDC*(-dxa_Vb_b1)*d10_exp0*d10_logE1));
XVjcex_Vb1_b2=(-(a_VDC*(-dxa_Vb1_b2)*d10_exp0*d10_logE1));
XVjcex_Vb2_c2=(-(a_VDC*(-dxa_Vb2_c2)*d10_exp0*d10_logE1));
XVjcex_Vc1_c2=(-(a_VDC*(-dxa_Vc1_c2)*d10_exp0*d10_logE1));
XVjcex_Vc4_c1=(-(a_VDC*(-dxa_Vc4_c1)*d10_exp0*d10_logE1));
XVjcex_Vc3_c1=(-(a_VDC*(-dxa_Vc3_c1)*d10_exp0*d10_logE1));
XVjcex_Vc3_c4=(-(a_VDC*(-dxa_Vc3_c4)*d10_exp0*d10_logE1));
XVjcex_Vdt_GND=(Vfc_Vdt_GND-((a_VDC_Vdt_GND*d00_logE1)+(a_VDC*(-dxa_Vdt_GND)*d10_exp0*d10_logE1)));
XVjcex_Vb1_e1=(-(a_VDC*(-dxa_Vb1_e1)*d10_exp0*d10_logE1));
XVjcex_Vb2_e1=(-(a_VDC*(-dxa_Vb2_e1)*d10_exp0*d10_logE1));
XVjcex_Vb2_c1=(-(a_VDC*(-dxa_Vb2_c1)*d10_exp0*d10_logE1));
#endif
XVjcex=(Vfc-(a_VDC*d00_logE1));
EXIT_IF_ISNAN((Vfc-(a_VDC*d00_logE1)))
}
#endif
}
#endif /* if(...) */
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(dt:GND)V(b1:e1)V(b2:e1)V(b2:c1) ddxprobe= */
XVjcex_Vb_c=XVjcex_Vb_c;
XVjcex_Vb_b1=XVjcex_Vb_b1;
XVjcex_Vb1_b2=XVjcex_Vb1_b2;
XVjcex_Vb2_c2=XVjcex_Vb2_c2;
XVjcex_Vc1_c2=XVjcex_Vc1_c2;
XVjcex_Vc4_c1=XVjcex_Vc4_c1;
XVjcex_Vc3_c1=XVjcex_Vc3_c1;
XVjcex_Vc3_c4=XVjcex_Vc3_c4;
XVjcex_Vdt_GND=XVjcex_Vdt_GND;
XVjcex_Vb1_e1=XVjcex_Vb1_e1;
XVjcex_Vb2_e1=XVjcex_Vb2_e1;
XVjcex_Vb2_c1=XVjcex_Vb2_c1;
#endif
XVjcex=XVjcex;
EXIT_IF_ISNAN(XVjcex)
#endif
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1.0-(XVjcex/VDC_T)),(1.0-pModel->PC))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(1.0-(XVjcex/VDC_T)),(1.0-pModel->PC))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(b1:e1)V(b2:e1)V(b2:c1) ddxprobe= */
XVtexv_Vdt_GND=((((VDC_T_Vdt_GND/(1.0-pModel->PC))*(1.0-d00_pow0))+((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-((XVjcex_Vdt_GND*VDC_T-XVjcex*VDC_T_Vdt_GND)/VDC_T/VDC_T))))))+((bjc_Vdt_GND*(Vbc3-XVjcex))+(bjc*(-XVjcex_Vdt_GND))));
XVtexv_Vb_c=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(XVjcex_Vb_c/VDC_T)))))+(bjc*(Vbc3_Vb_c-XVjcex_Vb_c)));
XVtexv_Vb_b1=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(XVjcex_Vb_b1/VDC_T)))))+(bjc*(Vbc3_Vb_b1-XVjcex_Vb_b1)));
XVtexv_Vb1_b2=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(XVjcex_Vb1_b2/VDC_T)))))+(bjc*(Vbc3_Vb1_b2-XVjcex_Vb1_b2)));
XVtexv_Vb2_c2=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(XVjcex_Vb2_c2/VDC_T)))))+(bjc*(Vbc3_Vb2_c2-XVjcex_Vb2_c2)));
XVtexv_Vc1_c2=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(XVjcex_Vc1_c2/VDC_T)))))+(bjc*(Vbc3_Vc1_c2-XVjcex_Vc1_c2)));
XVtexv_Vc4_c1=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(XVjcex_Vc4_c1/VDC_T)))))+(bjc*(Vbc3_Vc4_c1-XVjcex_Vc4_c1)));
XVtexv_Vc3_c1=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(XVjcex_Vc3_c1/VDC_T)))))+(bjc*(Vbc3_Vc3_c1-XVjcex_Vc3_c1)));
XVtexv_Vc3_c4=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(XVjcex_Vc3_c4/VDC_T)))))+(bjc*(Vbc3_Vc3_c4-XVjcex_Vc3_c4)));
XVtexv_Vb1_e1=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(XVjcex_Vb1_e1/VDC_T)))))+(bjc*(-XVjcex_Vb1_e1)));
XVtexv_Vb2_e1=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(XVjcex_Vb2_e1/VDC_T)))))+(bjc*(-XVjcex_Vb2_e1)));
XVtexv_Vb2_c1=(((VDC_T/(1.0-pModel->PC))*(-(d10_pow0*(-(XVjcex_Vb2_c1/VDC_T)))))+(bjc*(-XVjcex_Vb2_c1)));
#endif
XVtexv=(((VDC_T/(1.0-pModel->PC))*(1.0-d00_pow0))+(bjc*(Vbc3-XVjcex)));
EXIT_IF_ISNAN((((VDC_T/(1.0-pModel->PC))*(1.0-d00_pow0))+(bjc*(Vbc3-XVjcex))))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(b1:e1)V(b2:e1)V(b2:c1) ddxprobe= */
XQtex_Vdt_GND=((CJC_TM_Vdt_GND*(((1.0-XP_T)*XVtexv)+(XP_T*Vbc3)))+(CJC_TM*((((-XP_T_Vdt_GND)*XVtexv)+((1.0-XP_T)*XVtexv_Vdt_GND))+XP_T_Vdt_GND*Vbc3)))*(1.0-pModel->XCJC)*pModel->XEXT;
XQtex_Vb_c=(CJC_TM*(((1.0-XP_T)*XVtexv_Vb_c)+(XP_T*Vbc3_Vb_c)))*(1.0-pModel->XCJC)*pModel->XEXT;
XQtex_Vb_b1=(CJC_TM*(((1.0-XP_T)*XVtexv_Vb_b1)+(XP_T*Vbc3_Vb_b1)))*(1.0-pModel->XCJC)*pModel->XEXT;
XQtex_Vb1_b2=(CJC_TM*(((1.0-XP_T)*XVtexv_Vb1_b2)+(XP_T*Vbc3_Vb1_b2)))*(1.0-pModel->XCJC)*pModel->XEXT;
XQtex_Vb2_c2=(CJC_TM*(((1.0-XP_T)*XVtexv_Vb2_c2)+(XP_T*Vbc3_Vb2_c2)))*(1.0-pModel->XCJC)*pModel->XEXT;
XQtex_Vc1_c2=(CJC_TM*(((1.0-XP_T)*XVtexv_Vc1_c2)+(XP_T*Vbc3_Vc1_c2)))*(1.0-pModel->XCJC)*pModel->XEXT;
XQtex_Vc4_c1=(CJC_TM*(((1.0-XP_T)*XVtexv_Vc4_c1)+(XP_T*Vbc3_Vc4_c1)))*(1.0-pModel->XCJC)*pModel->XEXT;
XQtex_Vc3_c1=(CJC_TM*(((1.0-XP_T)*XVtexv_Vc3_c1)+(XP_T*Vbc3_Vc3_c1)))*(1.0-pModel->XCJC)*pModel->XEXT;
XQtex_Vc3_c4=(CJC_TM*(((1.0-XP_T)*XVtexv_Vc3_c4)+(XP_T*Vbc3_Vc3_c4)))*(1.0-pModel->XCJC)*pModel->XEXT;
XQtex_Vb1_e1=(CJC_TM*((1.0-XP_T)*XVtexv_Vb1_e1))*(1.0-pModel->XCJC)*pModel->XEXT;
XQtex_Vb2_e1=(CJC_TM*((1.0-XP_T)*XVtexv_Vb2_e1))*(1.0-pModel->XCJC)*pModel->XEXT;
XQtex_Vb2_c1=(CJC_TM*((1.0-XP_T)*XVtexv_Vb2_c1))*(1.0-pModel->XCJC)*pModel->XEXT;
#endif
XQtex=(((CJC_TM*(((1.0-XP_T)*XVtexv)+(XP_T*Vbc3)))*(1.0-pModel->XCJC))*pModel->XEXT);
EXIT_IF_ISNAN((((CJC_TM*(((1.0-XP_T)*XVtexv)+(XP_T*Vbc3)))*(1.0-pModel->XCJC))*pModel->XEXT))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
a_VDS_Vdt_GND=(0.1*VDS_T_Vdt_GND);
#endif
a_VDS=(0.1*VDS_T);
EXIT_IF_ISNAN((0.1*VDS_T))
#endif
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,2.0,((-1.0)/pModel->PS))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Vfs_Vdt_GND=VDS_T_Vdt_GND*(1.0-d00_pow0);
#endif
Vfs=(VDS_T*(1.0-d00_pow0));
EXIT_IF_ISNAN((VDS_T*(1.0-d00_pow0)))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(s:c1)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND) ddxprobe= */
dxa_Vs_c1=(Vsc1_Vs_c1/a_VDS);
dxa_Vb_c=0.0;
dxa_Vb_b1=0.0;
dxa_Vc3_c1=0.0;
dxa_Vc3_c4=0.0;
dxa_Vb1_b2=0.0;
dxa_Vc4_c1=0.0;
dxa_Vb1_e1=0.0;
dxa_Vb2_e1=0.0;
dxa_Vb2_c2=0.0;
dxa_Vb2_c1=0.0;
dxa_Vc1_c2=0.0;
dxa_Vdt_GND=(((-Vfs_Vdt_GND)*a_VDS-(Vsc1-Vfs)*a_VDS_Vdt_GND)/a_VDS/a_VDS);
#endif
dxa=((Vsc1-Vfs)/a_VDS);
EXIT_IF_ISNAN(((Vsc1-Vfs)/a_VDS))
#endif
#ifdef _DYNAMIC
if
((Vsc1<Vfs))
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,dxa)
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(s:c1)V(dt:GND)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vjs_Vs_c1=(Vsc1_Vs_c1-(a_VDS*dxa_Vs_c1*d10_exp0*d10_logE1));
Vjs_Vdt_GND=(-((a_VDS_Vdt_GND*d00_logE1)+(a_VDS*dxa_Vdt_GND*d10_exp0*d10_logE1)));
Vjs_Vb_c=(-(a_VDS*dxa_Vb_c*d10_exp0*d10_logE1));
Vjs_Vb_b1=(-(a_VDS*dxa_Vb_b1*d10_exp0*d10_logE1));
Vjs_Vc3_c1=(-(a_VDS*dxa_Vc3_c1*d10_exp0*d10_logE1));
Vjs_Vc3_c4=(-(a_VDS*dxa_Vc3_c4*d10_exp0*d10_logE1));
Vjs_Vb1_b2=(-(a_VDS*dxa_Vb1_b2*d10_exp0*d10_logE1));
Vjs_Vc4_c1=(-(a_VDS*dxa_Vc4_c1*d10_exp0*d10_logE1));
Vjs_Vb1_e1=(-(a_VDS*dxa_Vb1_e1*d10_exp0*d10_logE1));
Vjs_Vb2_e1=(-(a_VDS*dxa_Vb2_e1*d10_exp0*d10_logE1));
Vjs_Vb2_c2=(-(a_VDS*dxa_Vb2_c2*d10_exp0*d10_logE1));
Vjs_Vb2_c1=(-(a_VDS*dxa_Vb2_c1*d10_exp0*d10_logE1));
Vjs_Vc1_c2=(-(a_VDS*dxa_Vc1_c2*d10_exp0*d10_logE1));
#endif
Vjs=(Vsc1-(a_VDS*d00_logE1));
EXIT_IF_ISNAN((Vsc1-(a_VDS*d00_logE1)))
}
#endif
}
else
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,(-dxa))
double m00_logE(d00_logE1,(1.0+d00_exp0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_logE(d10_logE1,d00_logE1,(1.0+d00_exp0))
#endif
#if defined(_DERIVATE) /* probe=V(s:c1)V(dt:GND)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vjs_Vs_c1=(-(a_VDS*(-dxa_Vs_c1)*d10_exp0*d10_logE1));
Vjs_Vdt_GND=(Vfs_Vdt_GND-((a_VDS_Vdt_GND*d00_logE1)+(a_VDS*(-dxa_Vdt_GND)*d10_exp0*d10_logE1)));
Vjs_Vb_c=(-(a_VDS*(-dxa_Vb_c)*d10_exp0*d10_logE1));
Vjs_Vb_b1=(-(a_VDS*(-dxa_Vb_b1)*d10_exp0*d10_logE1));
Vjs_Vc3_c1=(-(a_VDS*(-dxa_Vc3_c1)*d10_exp0*d10_logE1));
Vjs_Vc3_c4=(-(a_VDS*(-dxa_Vc3_c4)*d10_exp0*d10_logE1));
Vjs_Vb1_b2=(-(a_VDS*(-dxa_Vb1_b2)*d10_exp0*d10_logE1));
Vjs_Vc4_c1=(-(a_VDS*(-dxa_Vc4_c1)*d10_exp0*d10_logE1));
Vjs_Vb1_e1=(-(a_VDS*(-dxa_Vb1_e1)*d10_exp0*d10_logE1));
Vjs_Vb2_e1=(-(a_VDS*(-dxa_Vb2_e1)*d10_exp0*d10_logE1));
Vjs_Vb2_c2=(-(a_VDS*(-dxa_Vb2_c2)*d10_exp0*d10_logE1));
Vjs_Vb2_c1=(-(a_VDS*(-dxa_Vb2_c1)*d10_exp0*d10_logE1));
Vjs_Vc1_c2=(-(a_VDS*(-dxa_Vc1_c2)*d10_exp0*d10_logE1));
#endif
Vjs=(Vfs-(a_VDS*d00_logE1));
EXIT_IF_ISNAN((Vfs-(a_VDS*d00_logE1)))
}
#endif
}
#endif /* if(...) */
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(s:c1)V(dt:GND)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Vjs_Vs_c1=Vjs_Vs_c1;
Vjs_Vdt_GND=Vjs_Vdt_GND;
Vjs_Vb_c=Vjs_Vb_c;
Vjs_Vb_b1=Vjs_Vb_b1;
Vjs_Vc3_c1=Vjs_Vc3_c1;
Vjs_Vc3_c4=Vjs_Vc3_c4;
Vjs_Vb1_b2=Vjs_Vb1_b2;
Vjs_Vc4_c1=Vjs_Vc4_c1;
Vjs_Vb1_e1=Vjs_Vb1_e1;
Vjs_Vb2_e1=Vjs_Vb2_e1;
Vjs_Vb2_c2=Vjs_Vb2_c2;
Vjs_Vb2_c1=Vjs_Vb2_c1;
Vjs_Vc1_c2=Vjs_Vc1_c2;
#endif
Vjs=Vjs;
EXIT_IF_ISNAN(Vjs)
#endif
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1.0-(Vjs/VDS_T)),(1.0-pModel->PS))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(1.0-(Vjs/VDS_T)),(1.0-pModel->PS))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(s:c1)V(b:c)V(b:b1)V(c3:c1)V(c3:c4)V(b1:b2)V(c4:c1)V(b1:e1)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Qts_Vdt_GND=((CJS_TM_Vdt_GND*(((VDS_T/(1.0-pModel->PS))*(1.0-d00_pow0))+(2.0*(Vsc1-Vjs))))+(CJS_TM*((((VDS_T_Vdt_GND/(1.0-pModel->PS))*(1.0-d00_pow0))+((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-((Vjs_Vdt_GND*VDS_T-Vjs*VDS_T_Vdt_GND)/VDS_T/VDS_T))))))+(2.0*(-Vjs_Vdt_GND)))));
Qts_Vs_c1=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vs_c1/VDS_T)))))+(2.0*(Vsc1_Vs_c1-Vjs_Vs_c1))));
Qts_Vb_c=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vb_c/VDS_T)))))+(2.0*(-Vjs_Vb_c))));
Qts_Vb_b1=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vb_b1/VDS_T)))))+(2.0*(-Vjs_Vb_b1))));
Qts_Vc3_c1=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vc3_c1/VDS_T)))))+(2.0*(-Vjs_Vc3_c1))));
Qts_Vc3_c4=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vc3_c4/VDS_T)))))+(2.0*(-Vjs_Vc3_c4))));
Qts_Vb1_b2=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vb1_b2/VDS_T)))))+(2.0*(-Vjs_Vb1_b2))));
Qts_Vc4_c1=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vc4_c1/VDS_T)))))+(2.0*(-Vjs_Vc4_c1))));
Qts_Vb1_e1=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vb1_e1/VDS_T)))))+(2.0*(-Vjs_Vb1_e1))));
Qts_Vb2_e1=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vb2_e1/VDS_T)))))+(2.0*(-Vjs_Vb2_e1))));
Qts_Vb2_c2=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vb2_c2/VDS_T)))))+(2.0*(-Vjs_Vb2_c2))));
Qts_Vb2_c1=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vb2_c1/VDS_T)))))+(2.0*(-Vjs_Vb2_c1))));
Qts_Vc1_c2=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(-(d10_pow0*(-(Vjs_Vc1_c2/VDS_T)))))+(2.0*(-Vjs_Vc1_c2))));
#endif
Qts=(CJS_TM*(((VDS_T/(1.0-pModel->PS))*(1.0-d00_pow0))+(2.0*(Vsc1-Vjs))));
EXIT_IF_ISNAN((CJS_TM*(((VDS_T/(1.0-pModel->PS))*(1.0-d00_pow0))+(2.0*(Vsc1-Vjs)))))
}
#endif
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(IS_TM/IK_TM),(1.0/pModel->MTAU))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(IS_TM/IK_TM),(1.0/pModel->MTAU))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Qe0_Vdt_GND=((((TAUE_T_Vdt_GND*IK_TM)+(TAUE_T*IK_TM_Vdt_GND))*d00_pow0)+((TAUE_T*IK_TM)*(d10_pow0*((IS_TM_Vdt_GND*IK_TM-IS_TM*IK_TM_Vdt_GND)/IK_TM/IK_TM))));
#endif
Qe0=((TAUE_T*IK_TM)*d00_pow0);
EXIT_IF_ISNAN(((TAUE_T*IK_TM)*d00_pow0))
}
#endif
#ifdef _DYNAMIC
if
(((Vb2e1/(pModel->MTAU*Vt))<200.0))
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,(Vb2e1/(pModel->MTAU*Vt)))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b2:e1)V(dt:GND) ddxprobe= */
tmpExp_Vb1_b2=0.0;
tmpExp_Vb2_c2=0.0;
tmpExp_Vc1_c2=0.0;
tmpExp_Vc4_c1=0.0;
tmpExp_Vb2_e1=(Vb2e1_Vb2_e1/(pModel->MTAU*Vt))*d10_exp0;
tmpExp_Vdt_GND=(-Vb2e1*(pModel->MTAU*Vt_Vdt_GND)/(pModel->MTAU*Vt)/(pModel->MTAU*Vt))*d10_exp0;
#endif
tmpExp=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#endif
}
else
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,200.0)
expl=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b2:e1)V(dt:GND) ddxprobe= */
tmpExp_Vb1_b2=0.0;
tmpExp_Vb2_c2=0.0;
tmpExp_Vc1_c2=0.0;
tmpExp_Vc4_c1=0.0;
tmpExp_Vb2_e1=(expl*(Vb2e1_Vb2_e1/(pModel->MTAU*Vt)));
tmpExp_Vdt_GND=(expl*(-Vb2e1*(pModel->MTAU*Vt_Vdt_GND)/(pModel->MTAU*Vt)/(pModel->MTAU*Vt)));
#endif
tmpExp=(expl*(1.0+((Vb2e1/(pModel->MTAU*Vt))-200.0)));
EXIT_IF_ISNAN((expl*(1.0+((Vb2e1/(pModel->MTAU*Vt))-200.0))))
#endif
}
#endif /* if(...) */
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b2:e1) ddxprobe= */
Qe_Vdt_GND=((Qe0_Vdt_GND*(tmpExp-1.0))+(Qe0*tmpExp_Vdt_GND));
Qe_Vb1_b2=(Qe0*tmpExp_Vb1_b2);
Qe_Vb2_c2=(Qe0*tmpExp_Vb2_c2);
Qe_Vc1_c2=(Qe0*tmpExp_Vc1_c2);
Qe_Vc4_c1=(Qe0*tmpExp_Vc4_c1);
Qe_Vb2_e1=(Qe0*tmpExp_Vb2_e1);
#endif
Qe=(Qe0*(tmpExp-1.0));
EXIT_IF_ISNAN((Qe0*(tmpExp-1.0)))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
Qepi0_Vdt_GND=(((((4.0*TEPI_T_Vdt_GND)*Vt)+((4.0*TEPI_T)*Vt_Vdt_GND))*RCV_TM-((4.0*TEPI_T)*Vt)*RCV_TM_Vdt_GND)/RCV_TM/RCV_TM);
#endif
Qepi0=(((4.0*TEPI_T)*Vt)/RCV_TM);
EXIT_IF_ISNAN((((4.0*TEPI_T)*Vt)/RCV_TM))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Qepi_Vdt_GND=(((((0.5*Qepi0_Vdt_GND)*xi_w)+((0.5*Qepi0)*xi_w_Vdt_GND))*((p0star+pW)+2.0))+(((0.5*Qepi0)*xi_w)*(p0star_Vdt_GND+pW_Vdt_GND)));
Qepi_Vb2_c2=((((0.5*Qepi0)*xi_w_Vb2_c2)*((p0star+pW)+2.0))+(((0.5*Qepi0)*xi_w)*p0star_Vb2_c2));
Qepi_Vb2_c1=((((0.5*Qepi0)*xi_w_Vb2_c1)*((p0star+pW)+2.0))+(((0.5*Qepi0)*xi_w)*(p0star_Vb2_c1+pW_Vb2_c1)));
Qepi_Vc1_c2=((((0.5*Qepi0)*xi_w_Vc1_c2)*((p0star+pW)+2.0))+(((0.5*Qepi0)*xi_w)*p0star_Vc1_c2));
#endif
Qepi=(((0.5*Qepi0)*xi_w)*((p0star+pW)+2.0));
EXIT_IF_ISNAN((((0.5*Qepi0)*xi_w)*((p0star+pW)+2.0)))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
Qex_Vdt_GND=((((TAUR_T_Vdt_GND*0.5*((Qb0*nBex)+(Qepi0*pWex)))+((TAUR_T*0.5)*(((Qb0_Vdt_GND*nBex)+(Qb0*nBex_Vdt_GND))+((Qepi0_Vdt_GND*pWex)+(Qepi0*pWex_Vdt_GND)))))*(TAUB_T+TEPI_T)-((TAUR_T*0.5)*((Qb0*nBex)+(Qepi0*pWex)))*(TAUB_T_Vdt_GND+TEPI_T_Vdt_GND))/(TAUB_T+TEPI_T)/(TAUB_T+TEPI_T));
Qex_Vb1_b2=(((TAUR_T*0.5)*((Qb0*nBex_Vb1_b2)+(Qepi0*pWex_Vb1_b2)))/(TAUB_T+TEPI_T));
Qex_Vb2_c2=(((TAUR_T*0.5)*((Qb0*nBex_Vb2_c2)+(Qepi0*pWex_Vb2_c2)))/(TAUB_T+TEPI_T));
Qex_Vc1_c2=(((TAUR_T*0.5)*((Qb0*nBex_Vc1_c2)+(Qepi0*pWex_Vc1_c2)))/(TAUB_T+TEPI_T));
Qex_Vc4_c1=(((TAUR_T*0.5)*((Qb0*nBex_Vc4_c1)+(Qepi0*pWex_Vc4_c1)))/(TAUB_T+TEPI_T));
#endif
Qex=(((TAUR_T*0.5)*((Qb0*nBex)+(Qepi0*pWex)))/(TAUB_T+TEPI_T));
EXIT_IF_ISNAN((((TAUR_T*0.5)*((Qb0*nBex)+(Qepi0*pWex)))/(TAUB_T+TEPI_T)))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
XQex_Vdt_GND=0.0;
XQex_Vb_c=0.0;
XQex_Vb_b1=0.0;
XQex_Vb1_b2=0.0;
XQex_Vc4_c1=0.0;
XQex_Vc3_c1=0.0;
XQex_Vc3_c4=0.0;
XQex_Vb2_e1=0.0;
XQex_Vb2_c2=0.0;
XQex_Vb2_c1=0.0;
XQex_Vc1_c2=0.0;
#endif
XQex=0.0;
EXIT_IF_ISNAN(0.0)
#endif
#ifdef _DYNAMIC
if
((pModel->EXMOD==1))
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
Qex_Vdt_GND=Qex_Vdt_GND*(1.0-pModel->XEXT);
Qex_Vb1_b2=Qex_Vb1_b2*(1.0-pModel->XEXT);
Qex_Vb2_c2=Qex_Vb2_c2*(1.0-pModel->XEXT);
Qex_Vc1_c2=Qex_Vc1_c2*(1.0-pModel->XEXT);
Qex_Vc4_c1=Qex_Vc4_c1*(1.0-pModel->XEXT);
#endif
Qex=(Qex*(1.0-pModel->XEXT));
EXIT_IF_ISNAN((Qex*(1.0-pModel->XEXT)))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(dt:GND) ddxprobe= */
Xg2_Vb_c=(4.0*eVbc3VDC_Vb_c);
Xg2_Vb_b1=(4.0*eVbc3VDC_Vb_b1);
Xg2_Vb1_b2=(4.0*eVbc3VDC_Vb1_b2);
Xg2_Vb2_c2=(4.0*eVbc3VDC_Vb2_c2);
Xg2_Vc1_c2=(4.0*eVbc3VDC_Vc1_c2);
Xg2_Vc4_c1=(4.0*eVbc3VDC_Vc4_c1);
Xg2_Vc3_c1=(4.0*eVbc3VDC_Vc3_c1);
Xg2_Vc3_c4=(4.0*eVbc3VDC_Vc3_c4);
Xg2_Vdt_GND=(4.0*eVbc3VDC_Vdt_GND);
#endif
Xg2=(4.0*eVbc3VDC);
EXIT_IF_ISNAN((4.0*eVbc3VDC))
#endif
#if defined(_DYNAMIC)
{
double m00_sqrt(d00_sqrt0,(1.0+Xg2))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+Xg2))
#endif
#if defined(_DERIVATE) /* probe=V(b:c)V(b:b1)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(c3:c1)V(c3:c4)V(dt:GND) ddxprobe= */
XpWex_Vb_c=((Xg2_Vb_c*(1.0+d00_sqrt0)-Xg2*Xg2_Vb_c*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XpWex_Vb_b1=((Xg2_Vb_b1*(1.0+d00_sqrt0)-Xg2*Xg2_Vb_b1*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XpWex_Vb1_b2=((Xg2_Vb1_b2*(1.0+d00_sqrt0)-Xg2*Xg2_Vb1_b2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XpWex_Vb2_c2=((Xg2_Vb2_c2*(1.0+d00_sqrt0)-Xg2*Xg2_Vb2_c2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XpWex_Vc1_c2=((Xg2_Vc1_c2*(1.0+d00_sqrt0)-Xg2*Xg2_Vc1_c2*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XpWex_Vc4_c1=((Xg2_Vc4_c1*(1.0+d00_sqrt0)-Xg2*Xg2_Vc4_c1*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XpWex_Vc3_c1=((Xg2_Vc3_c1*(1.0+d00_sqrt0)-Xg2*Xg2_Vc3_c1*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XpWex_Vc3_c4=((Xg2_Vc3_c4*(1.0+d00_sqrt0)-Xg2*Xg2_Vc3_c4*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
XpWex_Vdt_GND=((Xg2_Vdt_GND*(1.0+d00_sqrt0)-Xg2*Xg2_Vdt_GND*d10_sqrt0)/(1.0+d00_sqrt0)/(1.0+d00_sqrt0));
#endif
XpWex=(Xg2/(1.0+d00_sqrt0));
EXIT_IF_ISNAN((Xg2/(1.0+d00_sqrt0)))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
XQex_Vdt_GND=(((((((0.5*Fex_Vdt_GND)*pModel->XEXT*TAUR_T)+(((0.5*Fex)*pModel->XEXT)*TAUR_T_Vdt_GND))*((Qb0*XnBex)+(Qepi0*XpWex)))+((((0.5*Fex)*pModel->XEXT)*TAUR_T)*(((Qb0_Vdt_GND*XnBex)+(Qb0*XnBex_Vdt_GND))+((Qepi0_Vdt_GND*XpWex)+(Qepi0*XpWex_Vdt_GND)))))*(TAUB_T+TEPI_T)-((((0.5*Fex)*pModel->XEXT)*TAUR_T)*((Qb0*XnBex)+(Qepi0*XpWex)))*(TAUB_T_Vdt_GND+TEPI_T_Vdt_GND))/(TAUB_T+TEPI_T)/(TAUB_T+TEPI_T));
XQex_Vb_c=((((0.5*Fex_Vb_c)*pModel->XEXT*TAUR_T*((Qb0*XnBex)+(Qepi0*XpWex)))+((((0.5*Fex)*pModel->XEXT)*TAUR_T)*((Qb0*XnBex_Vb_c)+(Qepi0*XpWex_Vb_c))))/(TAUB_T+TEPI_T));
XQex_Vb_b1=((((0.5*Fex_Vb_b1)*pModel->XEXT*TAUR_T*((Qb0*XnBex)+(Qepi0*XpWex)))+((((0.5*Fex)*pModel->XEXT)*TAUR_T)*((Qb0*XnBex_Vb_b1)+(Qepi0*XpWex_Vb_b1))))/(TAUB_T+TEPI_T));
XQex_Vb1_b2=((((0.5*Fex_Vb1_b2)*pModel->XEXT*TAUR_T*((Qb0*XnBex)+(Qepi0*XpWex)))+((((0.5*Fex)*pModel->XEXT)*TAUR_T)*((Qb0*XnBex_Vb1_b2)+(Qepi0*XpWex_Vb1_b2))))/(TAUB_T+TEPI_T));
XQex_Vc4_c1=((((0.5*Fex_Vc4_c1)*pModel->XEXT*TAUR_T*((Qb0*XnBex)+(Qepi0*XpWex)))+((((0.5*Fex)*pModel->XEXT)*TAUR_T)*((Qb0*XnBex_Vc4_c1)+(Qepi0*XpWex_Vc4_c1))))/(TAUB_T+TEPI_T));
XQex_Vc3_c1=((((0.5*Fex_Vc3_c1)*pModel->XEXT*TAUR_T*((Qb0*XnBex)+(Qepi0*XpWex)))+((((0.5*Fex)*pModel->XEXT)*TAUR_T)*((Qb0*XnBex_Vc3_c1)+(Qepi0*XpWex_Vc3_c1))))/(TAUB_T+TEPI_T));
XQex_Vc3_c4=((((0.5*Fex_Vc3_c4)*pModel->XEXT*TAUR_T*((Qb0*XnBex)+(Qepi0*XpWex)))+((((0.5*Fex)*pModel->XEXT)*TAUR_T)*((Qb0*XnBex_Vc3_c4)+(Qepi0*XpWex_Vc3_c4))))/(TAUB_T+TEPI_T));
XQex_Vb2_e1=((0.5*Fex_Vb2_e1)*pModel->XEXT*TAUR_T*((Qb0*XnBex)+(Qepi0*XpWex))/(TAUB_T+TEPI_T));
XQex_Vb2_c2=((((0.5*Fex_Vb2_c2)*pModel->XEXT*TAUR_T*((Qb0*XnBex)+(Qepi0*XpWex)))+((((0.5*Fex)*pModel->XEXT)*TAUR_T)*((Qb0*XnBex_Vb2_c2)+(Qepi0*XpWex_Vb2_c2))))/(TAUB_T+TEPI_T));
XQex_Vb2_c1=((0.5*Fex_Vb2_c1)*pModel->XEXT*TAUR_T*((Qb0*XnBex)+(Qepi0*XpWex))/(TAUB_T+TEPI_T));
XQex_Vc1_c2=((((0.5*Fex_Vc1_c2)*pModel->XEXT*TAUR_T*((Qb0*XnBex)+(Qepi0*XpWex)))+((((0.5*Fex)*pModel->XEXT)*TAUR_T)*((Qb0*XnBex_Vc1_c2)+(Qepi0*XpWex_Vc1_c2))))/(TAUB_T+TEPI_T));
#endif
XQex=(((((0.5*Fex)*pModel->XEXT)*TAUR_T)*((Qb0*XnBex)+(Qepi0*XpWex)))/(TAUB_T+TEPI_T));
EXIT_IF_ISNAN((((((0.5*Fex)*pModel->XEXT)*TAUR_T)*((Qb0*XnBex)+(Qepi0*XpWex)))/(TAUB_T+TEPI_T)))
#endif
}
#endif /* if(...) */
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b1:b2)V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(b:c)V(b:b1)V(c4:c1)V(c3:c1)V(c3:c4) ddxprobe= */
Qb1b2_Vb1_b2=0.0;
Qb1b2_Vdt_GND=0.0;
Qb1b2_Vb2_e1=0.0;
Qb1b2_Vb2_c2=0.0;
Qb1b2_Vb2_c1=0.0;
Qb1b2_Vc1_c2=0.0;
Qb1b2_Vb_c=0.0;
Qb1b2_Vb_b1=0.0;
Qb1b2_Vc4_c1=0.0;
Qb1b2_Vc3_c1=0.0;
Qb1b2_Vc3_c4=0.0;
#endif
Qb1b2=0.0;
EXIT_IF_ISNAN(0.0)
#endif
#ifdef _DYNAMIC
if
((pModel->EXPHI==1))
{
#if defined(_DYNAMIC)
{
double m00_pow(d00_pow0,(1.0-(Vje/VDE_T)),(-pModel->PE))
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,(1.0-(Vje/VDE_T)),(-pModel->PE))
#endif
#if defined(_DERIVATE) /* probe=V(b2:e1)V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
dVteVje_Vb2_e1=(d10_pow0*(-(Vje_Vb2_e1/VDE_T)));
dVteVje_Vdt_GND=(d10_pow0*(-((Vje_Vdt_GND*VDE_T-Vje*VDE_T_Vdt_GND)/VDE_T/VDE_T)));
dVteVje_Vb2_c2=(d10_pow0*(-(Vje_Vb2_c2/VDE_T)));
dVteVje_Vb2_c1=(d10_pow0*(-(Vje_Vb2_c1/VDE_T)));
dVteVje_Vc1_c2=(d10_pow0*(-(Vje_Vc1_c2/VDE_T)));
#endif
dVteVje=(d00_pow0-3.0);
EXIT_IF_ISNAN((d00_pow0-3.0))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b2:e1)V(dt:GND) ddxprobe= */
Vb2e1Vfe_Vb2_e1=(Vb2e1_Vb2_e1/a_VDE);
Vb2e1Vfe_Vdt_GND=(((-Vfe_Vdt_GND)*a_VDE-(Vb2e1-Vfe)*a_VDE_Vdt_GND)/a_VDE/a_VDE);
#endif
Vb2e1Vfe=((Vb2e1-Vfe)/a_VDE);
EXIT_IF_ISNAN(((Vb2e1-Vfe)/a_VDE))
#endif
#ifdef _DYNAMIC
if
((Vb2e1Vfe<0.0))
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,Vb2e1Vfe)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(b2:e1)V(dt:GND) ddxprobe= */
dVjeVb2e1_Vb2_e1=(-Vb2e1Vfe_Vb2_e1*d10_exp0/(1.0+d00_exp0)/(1.0+d00_exp0));
dVjeVb2e1_Vdt_GND=(-Vb2e1Vfe_Vdt_GND*d10_exp0/(1.0+d00_exp0)/(1.0+d00_exp0));
#endif
dVjeVb2e1=(1.0/(1.0+d00_exp0));
EXIT_IF_ISNAN((1.0/(1.0+d00_exp0)))
}
#endif
}
else
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,(-Vb2e1Vfe))
double m00_exp(d00_exp1,(-Vb2e1Vfe))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(b2:e1)V(dt:GND) ddxprobe= */
dVjeVb2e1_Vb2_e1=(((-Vb2e1Vfe_Vb2_e1)*d10_exp0*(1.0+d00_exp1)-d00_exp0*(-Vb2e1Vfe_Vb2_e1)*d10_exp1)/(1.0+d00_exp1)/(1.0+d00_exp1));
dVjeVb2e1_Vdt_GND=(((-Vb2e1Vfe_Vdt_GND)*d10_exp0*(1.0+d00_exp1)-d00_exp0*(-Vb2e1Vfe_Vdt_GND)*d10_exp1)/(1.0+d00_exp1)/(1.0+d00_exp1));
#endif
dVjeVb2e1=(d00_exp0/(1.0+d00_exp1));
EXIT_IF_ISNAN((d00_exp0/(1.0+d00_exp1)))
}
#endif
}
#endif /* if(...) */
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b2:e1)V(dt:GND)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
dVteVb2e1_Vb2_e1=((dVteVje_Vb2_e1*dVjeVb2e1)+(dVteVje*dVjeVb2e1_Vb2_e1));
dVteVb2e1_Vdt_GND=((dVteVje_Vdt_GND*dVjeVb2e1)+(dVteVje*dVjeVb2e1_Vdt_GND));
dVteVb2e1_Vb2_c2=dVteVje_Vb2_c2*dVjeVb2e1;
dVteVb2e1_Vb2_c1=dVteVje_Vb2_c1*dVjeVb2e1;
dVteVb2e1_Vc1_c2=dVteVje_Vc1_c2*dVjeVb2e1;
#endif
dVteVb2e1=((dVteVje*dVjeVb2e1)+3.0);
EXIT_IF_ISNAN(((dVteVje*dVjeVb2e1)+3.0))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
dQteVb2e1_Vdt_GND=((((1.0-pModel->XCJE)*CJE_TM_Vdt_GND)*dVteVb2e1)+(((1.0-pModel->XCJE)*CJE_TM)*dVteVb2e1_Vdt_GND));
dQteVb2e1_Vb2_e1=(((1.0-pModel->XCJE)*CJE_TM)*dVteVb2e1_Vb2_e1);
dQteVb2e1_Vb2_c2=(((1.0-pModel->XCJE)*CJE_TM)*dVteVb2e1_Vb2_c2);
dQteVb2e1_Vb2_c1=(((1.0-pModel->XCJE)*CJE_TM)*dVteVb2e1_Vb2_c1);
dQteVb2e1_Vc1_c2=(((1.0-pModel->XCJE)*CJE_TM)*dVteVb2e1_Vc1_c2);
#endif
dQteVb2e1=(((1.0-pModel->XCJE)*CJE_TM)*dVteVb2e1);
EXIT_IF_ISNAN((((1.0-pModel->XCJE)*CJE_TM)*dVteVb2e1))
#endif
#if defined(_DYNAMIC)
{
double m00_sqrt(d00_sqrt0,(1.0+f1))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+f1))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1) ddxprobe= */
dn0Vb2e1_Vdt_GND=((((((If0_Vdt_GND*eVb2e1)+(If0*eVb2e1_Vdt_GND))*VtINV)+((If0*eVb2e1)*VtINV_Vdt_GND))*(0.5/d00_sqrt0))+(((If0*eVb2e1)*VtINV)*(-0.5*f1_Vdt_GND*d10_sqrt0/d00_sqrt0/d00_sqrt0)));
dn0Vb2e1_Vb2_e1=(((If0*eVb2e1_Vb2_e1)*VtINV*(0.5/d00_sqrt0))+(((If0*eVb2e1)*VtINV)*(-0.5*f1_Vb2_e1*d10_sqrt0/d00_sqrt0/d00_sqrt0)));
#endif
dn0Vb2e1=(((If0*eVb2e1)*VtINV)*(0.5/d00_sqrt0));
EXIT_IF_ISNAN((((If0*eVb2e1)*VtINV)*(0.5/d00_sqrt0)))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
dQbeVb2e1_Vdt_GND=(((((0.5*Qb0_Vdt_GND)*q1Q)+((0.5*Qb0)*q1Q_Vdt_GND))*dn0Vb2e1)+(((0.5*Qb0)*q1Q)*dn0Vb2e1_Vdt_GND));
dQbeVb2e1_Vb_c=((0.5*Qb0)*q1Q_Vb_c)*dn0Vb2e1;
dQbeVb2e1_Vb_b1=((0.5*Qb0)*q1Q_Vb_b1)*dn0Vb2e1;
dQbeVb2e1_Vb1_b2=((0.5*Qb0)*q1Q_Vb1_b2)*dn0Vb2e1;
dQbeVb2e1_Vc4_c1=((0.5*Qb0)*q1Q_Vc4_c1)*dn0Vb2e1;
dQbeVb2e1_Vc3_c1=((0.5*Qb0)*q1Q_Vc3_c1)*dn0Vb2e1;
dQbeVb2e1_Vc3_c4=((0.5*Qb0)*q1Q_Vc3_c4)*dn0Vb2e1;
dQbeVb2e1_Vb2_e1=((((0.5*Qb0)*q1Q_Vb2_e1)*dn0Vb2e1)+(((0.5*Qb0)*q1Q)*dn0Vb2e1_Vb2_e1));
dQbeVb2e1_Vb2_c2=((0.5*Qb0)*q1Q_Vb2_c2)*dn0Vb2e1;
dQbeVb2e1_Vb2_c1=((0.5*Qb0)*q1Q_Vb2_c1)*dn0Vb2e1;
dQbeVb2e1_Vc1_c2=((0.5*Qb0)*q1Q_Vc1_c2)*dn0Vb2e1;
#endif
dQbeVb2e1=(((0.5*Qb0)*q1Q)*dn0Vb2e1);
EXIT_IF_ISNAN((((0.5*Qb0)*q1Q)*dn0Vb2e1))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b2:e1) ddxprobe= */
dQeVb2e1_Vdt_GND=(((Qe_Vdt_GND+Qe0_Vdt_GND)*(pModel->MTAU*Vt)-(Qe+Qe0)*(pModel->MTAU*Vt_Vdt_GND))/(pModel->MTAU*Vt)/(pModel->MTAU*Vt));
dQeVb2e1_Vb1_b2=(Qe_Vb1_b2/(pModel->MTAU*Vt));
dQeVb2e1_Vb2_c2=(Qe_Vb2_c2/(pModel->MTAU*Vt));
dQeVb2e1_Vc1_c2=(Qe_Vc1_c2/(pModel->MTAU*Vt));
dQeVb2e1_Vc4_c1=(Qe_Vc4_c1/(pModel->MTAU*Vt));
dQeVb2e1_Vb2_e1=(Qe_Vb2_e1/(pModel->MTAU*Vt));
#endif
dQeVb2e1=((Qe+Qe0)/(pModel->MTAU*Vt));
EXIT_IF_ISNAN(((Qe+Qe0)/(pModel->MTAU*Vt)))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b1:b2)V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2)V(b:c)V(b:b1)V(c4:c1)V(c3:c1)V(c3:c4) ddxprobe= */
Qb1b2_Vb1_b2=(((0.2*Vb1b2_Vb1_b2)*((dQteVb2e1+dQbeVb2e1)+dQeVb2e1))+((0.2*Vb1b2)*(dQbeVb2e1_Vb1_b2+dQeVb2e1_Vb1_b2)));
Qb1b2_Vdt_GND=((0.2*Vb1b2)*((dQteVb2e1_Vdt_GND+dQbeVb2e1_Vdt_GND)+dQeVb2e1_Vdt_GND));
Qb1b2_Vb2_e1=((0.2*Vb1b2)*((dQteVb2e1_Vb2_e1+dQbeVb2e1_Vb2_e1)+dQeVb2e1_Vb2_e1));
Qb1b2_Vb2_c2=((0.2*Vb1b2)*((dQteVb2e1_Vb2_c2+dQbeVb2e1_Vb2_c2)+dQeVb2e1_Vb2_c2));
Qb1b2_Vb2_c1=((0.2*Vb1b2)*(dQteVb2e1_Vb2_c1+dQbeVb2e1_Vb2_c1));
Qb1b2_Vc1_c2=((0.2*Vb1b2)*((dQteVb2e1_Vc1_c2+dQbeVb2e1_Vc1_c2)+dQeVb2e1_Vc1_c2));
Qb1b2_Vb_c=((0.2*Vb1b2)*dQbeVb2e1_Vb_c);
Qb1b2_Vb_b1=((0.2*Vb1b2)*dQbeVb2e1_Vb_b1);
Qb1b2_Vc4_c1=((0.2*Vb1b2)*(dQbeVb2e1_Vc4_c1+dQeVb2e1_Vc4_c1));
Qb1b2_Vc3_c1=((0.2*Vb1b2)*dQbeVb2e1_Vc3_c1);
Qb1b2_Vc3_c4=((0.2*Vb1b2)*dQbeVb2e1_Vc3_c4);
#endif
Qb1b2=((0.2*Vb1b2)*((dQteVb2e1+dQbeVb2e1)+dQeVb2e1));
EXIT_IF_ISNAN(((0.2*Vb1b2)*((dQteVb2e1+dQbeVb2e1)+dQeVb2e1)))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Qbc_Vdt_GND=((Qbe_qs_Vdt_GND/3.0)+Qbc_qs_Vdt_GND);
Qbc_Vb2_e1=((Qbe_qs_Vb2_e1/3.0)+Qbc_qs_Vb2_e1);
Qbc_Vb_c=((Qbe_qs_Vb_c/3.0)+Qbc_qs_Vb_c);
Qbc_Vb_b1=((Qbe_qs_Vb_b1/3.0)+Qbc_qs_Vb_b1);
Qbc_Vb1_b2=((Qbe_qs_Vb1_b2/3.0)+Qbc_qs_Vb1_b2);
Qbc_Vc4_c1=((Qbe_qs_Vc4_c1/3.0)+Qbc_qs_Vc4_c1);
Qbc_Vc3_c1=((Qbe_qs_Vc3_c1/3.0)+Qbc_qs_Vc3_c1);
Qbc_Vc3_c4=((Qbe_qs_Vc3_c4/3.0)+Qbc_qs_Vc3_c4);
Qbc_Vb2_c2=((Qbe_qs_Vb2_c2/3.0)+Qbc_qs_Vb2_c2);
Qbc_Vb2_c1=((Qbe_qs_Vb2_c1/3.0)+Qbc_qs_Vb2_c1);
Qbc_Vc1_c2=((Qbe_qs_Vc1_c2/3.0)+Qbc_qs_Vc1_c2);
#endif
Qbc=((Qbe_qs/3.0)+Qbc_qs);
EXIT_IF_ISNAN(((Qbe_qs/3.0)+Qbc_qs))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Qbe_Vdt_GND=((2.0*Qbe_qs_Vdt_GND)/3.0);
Qbe_Vb2_e1=((2.0*Qbe_qs_Vb2_e1)/3.0);
Qbe_Vb_c=((2.0*Qbe_qs_Vb_c)/3.0);
Qbe_Vb_b1=((2.0*Qbe_qs_Vb_b1)/3.0);
Qbe_Vb1_b2=((2.0*Qbe_qs_Vb1_b2)/3.0);
Qbe_Vc4_c1=((2.0*Qbe_qs_Vc4_c1)/3.0);
Qbe_Vc3_c1=((2.0*Qbe_qs_Vc3_c1)/3.0);
Qbe_Vc3_c4=((2.0*Qbe_qs_Vc3_c4)/3.0);
Qbe_Vb2_c2=((2.0*Qbe_qs_Vb2_c2)/3.0);
Qbe_Vb2_c1=((2.0*Qbe_qs_Vb2_c1)/3.0);
Qbe_Vc1_c2=((2.0*Qbe_qs_Vc1_c2)/3.0);
#endif
Qbe=((2.0*Qbe_qs)/3.0);
EXIT_IF_ISNAN(((2.0*Qbe_qs)/3.0))
#endif
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Qbe_Vdt_GND=Qbe_qs_Vdt_GND;
Qbe_Vb2_e1=Qbe_qs_Vb2_e1;
Qbe_Vb_c=Qbe_qs_Vb_c;
Qbe_Vb_b1=Qbe_qs_Vb_b1;
Qbe_Vb1_b2=Qbe_qs_Vb1_b2;
Qbe_Vc4_c1=Qbe_qs_Vc4_c1;
Qbe_Vc3_c1=Qbe_qs_Vc3_c1;
Qbe_Vc3_c4=Qbe_qs_Vc3_c4;
Qbe_Vb2_c2=Qbe_qs_Vb2_c2;
Qbe_Vb2_c1=Qbe_qs_Vb2_c1;
Qbe_Vc1_c2=Qbe_qs_Vc1_c2;
#endif
Qbe=Qbe_qs;
EXIT_IF_ISNAN(Qbe_qs)
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
Qbc_Vdt_GND=Qbc_qs_Vdt_GND;
Qbc_Vb2_e1=Qbc_qs_Vb2_e1;
Qbc_Vb_c=Qbc_qs_Vb_c;
Qbc_Vb_b1=Qbc_qs_Vb_b1;
Qbc_Vb1_b2=Qbc_qs_Vb1_b2;
Qbc_Vc4_c1=Qbc_qs_Vc4_c1;
Qbc_Vc3_c1=Qbc_qs_Vc3_c1;
Qbc_Vc3_c4=Qbc_qs_Vc3_c4;
Qbc_Vb2_c2=Qbc_qs_Vb2_c2;
Qbc_Vb2_c1=Qbc_qs_Vb2_c1;
Qbc_Vc1_c2=Qbc_qs_Vc1_c2;
#endif
Qbc=Qbc_qs;
EXIT_IF_ISNAN(Qbc_qs)
#endif
}
#endif /* if(...) */
  _load_static_residual2(c1,c2,(pModel->TYPE*Ic1c2))
  _load_static_jacobian4(c1,c2,c1,c2,(pModel->TYPE*Ic1c2_Vc1_c2))
  _load_static_jacobian4(c1,c2,b2,c1,(pModel->TYPE*Ic1c2_Vb2_c1))
  _load_static_jacobian4(c1,c2,b2,c2,(pModel->TYPE*Ic1c2_Vb2_c2))
  _load_static_jacobian2s(c1,c2,dt,(pModel->TYPE*Ic1c2_Vdt_GND))
  _load_static_residual2(c2,e1,(pModel->TYPE*In))
  _load_static_jacobian4(c2,e1,c1,c2,(pModel->TYPE*In_Vc1_c2))
  _load_static_jacobian4(c2,e1,b2,c1,(pModel->TYPE*In_Vb2_c1))
  _load_static_jacobian4(c2,e1,b2,c2,(pModel->TYPE*In_Vb2_c2))
  _load_static_jacobian4(c2,e1,b2,e1,(pModel->TYPE*In_Vb2_e1))
  _load_static_jacobian2s(c2,e1,dt,(pModel->TYPE*In_Vdt_GND))
  _load_static_residual2(b1,e1,(pModel->TYPE*pInst->Ib1_s))
  _load_static_jacobian4(b1,e1,b1,e1,(pModel->TYPE*Ib1_s_Vb1_e1))
  _load_static_jacobian2s(b1,e1,dt,(pModel->TYPE*Ib1_s_Vdt_GND))
  _load_static_residual2(b2,e1,(pModel->TYPE*(pInst->Ib1+pInst->Ib2)))
  _load_static_jacobian4(b2,e1,b2,e1,(pModel->TYPE*(Ib1_Vb2_e1+Ib2_Vb2_e1)))
  _load_static_jacobian2s(b2,e1,dt,(pModel->TYPE*(Ib1_Vdt_GND+Ib2_Vdt_GND)))
  _load_static_jacobian4(b2,e1,c1,c2,(pModel->TYPE*Ib1_Vc1_c2))
  _load_static_jacobian4(b2,e1,b2,c1,(pModel->TYPE*Ib1_Vb2_c1))
  _load_static_jacobian4(b2,e1,b2,c2,(pModel->TYPE*Ib1_Vb2_c2))
  _load_static_residual2(b1,s,(pModel->TYPE*pInst->Isub))
  _load_static_jacobian4(b1,s,c4,c1,(pModel->TYPE*Isub_Vc4_c1))
  _load_static_jacobian4(b1,s,c1,c2,(pModel->TYPE*Isub_Vc1_c2))
  _load_static_jacobian4(b1,s,b2,c2,(pModel->TYPE*Isub_Vb2_c2))
  _load_static_jacobian4(b1,s,b1,b2,(pModel->TYPE*Isub_Vb1_b2))
  _load_static_jacobian2s(b1,s,dt,(pModel->TYPE*Isub_Vdt_GND))
  _load_static_residual2(b,s,(pModel->TYPE*pInst->XIsub))
  _load_static_jacobian4(b,s,c1,c2,(pModel->TYPE*XIsub_Vc1_c2))
  _load_static_jacobian4(b,s,b2,c1,(pModel->TYPE*XIsub_Vb2_c1))
  _load_static_jacobian4(b,s,b2,c2,(pModel->TYPE*XIsub_Vb2_c2))
  _load_static_jacobian4(b,s,b2,e1,(pModel->TYPE*XIsub_Vb2_e1))
  _load_static_jacobian4(b,s,c3,c4,(pModel->TYPE*XIsub_Vc3_c4))
  _load_static_jacobian4(b,s,c3,c1,(pModel->TYPE*XIsub_Vc3_c1))
  _load_static_jacobian4(b,s,c4,c1,(pModel->TYPE*XIsub_Vc4_c1))
  _load_static_jacobian4(b,s,b1,b2,(pModel->TYPE*XIsub_Vb1_b2))
  _load_static_jacobian4(b,s,b,b1,(pModel->TYPE*XIsub_Vb_b1))
  _load_static_jacobian4(b,s,b,c,(pModel->TYPE*XIsub_Vb_c))
  _load_static_jacobian2s(b,s,dt,(pModel->TYPE*XIsub_Vdt_GND))
  _load_static_residual2(s,c1,(pModel->TYPE*Isf))
  _load_static_jacobian4(s,c1,s,c1,(pModel->TYPE*Isf_Vs_c1))
  _load_static_jacobian2s(s,c1,dt,(pModel->TYPE*Isf_Vdt_GND))
  _load_static_residual2(b1,b2,(pModel->TYPE*Ib1b2))
  _load_static_jacobian4(b1,b2,c1,c2,(pModel->TYPE*Ib1b2_Vc1_c2))
  _load_static_jacobian4(b1,b2,b2,c1,(pModel->TYPE*Ib1b2_Vb2_c1))
  _load_static_jacobian4(b1,b2,b2,c2,(pModel->TYPE*Ib1b2_Vb2_c2))
  _load_static_jacobian4(b1,b2,b2,e1,(pModel->TYPE*Ib1b2_Vb2_e1))
  _load_static_jacobian4(b1,b2,c3,c4,(pModel->TYPE*Ib1b2_Vc3_c4))
  _load_static_jacobian4(b1,b2,c3,c1,(pModel->TYPE*Ib1b2_Vc3_c1))
  _load_static_jacobian4(b1,b2,c4,c1,(pModel->TYPE*Ib1b2_Vc4_c1))
  _load_static_jacobian4(b1,b2,b,b1,(pModel->TYPE*Ib1b2_Vb_b1))
  _load_static_jacobian4(b1,b2,b,c,(pModel->TYPE*Ib1b2_Vb_c))
  _load_static_jacobian4(b1,b2,b1,b2,(pModel->TYPE*Ib1b2_Vb1_b2))
  _load_static_jacobian2s(b1,b2,dt,(pModel->TYPE*Ib1b2_Vdt_GND))
  _load_static_residual2(b2,c2,(pModel->TYPE*((-1.0)*Iavl)))
  _load_static_jacobian4(b2,c2,b2,e1,(pModel->TYPE*((-1.0)*Iavl_Vb2_e1)))
  _load_static_jacobian4(b2,c2,c3,c4,(pModel->TYPE*((-1.0)*Iavl_Vc3_c4)))
  _load_static_jacobian4(b2,c2,c3,c1,(pModel->TYPE*((-1.0)*Iavl_Vc3_c1)))
  _load_static_jacobian4(b2,c2,c4,c1,(pModel->TYPE*((-1.0)*Iavl_Vc4_c1)))
  _load_static_jacobian4(b2,c2,b1,b2,(pModel->TYPE*((-1.0)*Iavl_Vb1_b2)))
  _load_static_jacobian4(b2,c2,b,b1,(pModel->TYPE*((-1.0)*Iavl_Vb_b1)))
  _load_static_jacobian4(b2,c2,b,c,(pModel->TYPE*((-1.0)*Iavl_Vb_c)))
  _load_static_jacobian4(b2,c2,c1,c2,(pModel->TYPE*((-1.0)*Iavl_Vc1_c2)))
  _load_static_jacobian4(b2,c2,b2,c1,(pModel->TYPE*((-1.0)*Iavl_Vb2_c1)))
  _load_static_jacobian4(b2,c2,b2,c2,(pModel->TYPE*((-1.0)*Iavl_Vb2_c2)))
  _load_static_jacobian2s(b2,c2,dt,(pModel->TYPE*((-1.0)*Iavl_Vdt_GND)))
  _load_static_residual2(e,e1,((pModel->TYPE*Vee1)/pInst->RE_TM))
  _load_static_jacobian2s(e,e1,dt,(-(pModel->TYPE*Vee1)*RE_TM_Vdt_GND/pInst->RE_TM/pInst->RE_TM))
  _load_static_jacobian4(e,e1,e,e1,((pModel->TYPE*Vee1_Ve_e1)/pInst->RE_TM))
  _load_static_residual2(b,b1,((pModel->TYPE*Vbb1)/pInst->RBC_TM))
  _load_static_jacobian2s(b,b1,dt,(-(pModel->TYPE*Vbb1)*RBC_TM_Vdt_GND/pInst->RBC_TM/pInst->RBC_TM))
  _load_static_jacobian4(b,b1,b,b1,((pModel->TYPE*Vbb1_Vb_b1)/pInst->RBC_TM))
  _load_static_residual1(dt,(NP(dt)/RTH_Tamb_M))
  _load_static_jacobian1(dt,dt,(1/RTH_Tamb_M))
  _load_dynamic_residual1(dt,_DDT((CTH_M*NP(dt))))
  _load_dynamic_jacobian1(dt,dt,(CTH_M))
  _load_static_residual1(dt,((-1.0)*power))
  _load_static_jacobian2p(dt,s,c1,((-1.0)*power_Vs_c1))
  _load_static_jacobian2p(dt,b1,e1,((-1.0)*power_Vb1_e1))
  _load_static_jacobian2p(dt,e,e1,((-1.0)*power_Ve_e1))
  _load_static_jacobian2p(dt,c3,c4,((-1.0)*power_Vc3_c4))
  _load_static_jacobian2p(dt,c3,c1,((-1.0)*power_Vc3_c1))
  _load_static_jacobian2p(dt,c4,c1,((-1.0)*power_Vc4_c1))
  _load_static_jacobian2p(dt,b1,b2,((-1.0)*power_Vb1_b2))
  _load_static_jacobian2p(dt,b,b1,((-1.0)*power_Vb_b1))
  _load_static_jacobian2p(dt,b,c,((-1.0)*power_Vb_c))
  _load_static_jacobian2p(dt,c1,c2,((-1.0)*power_Vc1_c2))
  _load_static_jacobian2p(dt,b2,c1,((-1.0)*power_Vb2_c1))
  _load_static_jacobian2p(dt,b2,c2,((-1.0)*power_Vb2_c2))
  _load_static_jacobian2p(dt,b2,e1,((-1.0)*power_Vb2_e1))
  _load_static_jacobian1(dt,dt,((-1.0)*power_Vdt_GND))
  _load_static_residual2(noi,e1,(NP(noi)-NP(e1)))
  _load_static_jacobian4(noi,e1,noi,e1,1.0)
{
double m00_sqrt(d00_sqrt0,(1.0+(2.0*pInst->Gem)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+(2.0*pInst->Gem)))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2)V(noi:e1) ddxprobe= */
cor_exp_1_Vdt_GND=(2.0*Gem_Vdt_GND)*d10_sqrt0*(NP(noi)-NP(e1));
cor_exp_1_Vb2_c1=(2.0*Gem_Vb2_c1)*d10_sqrt0*(NP(noi)-NP(e1));
cor_exp_1_Vb2_c2=(2.0*Gem_Vb2_c2)*d10_sqrt0*(NP(noi)-NP(e1));
cor_exp_1_Vc1_c2=(2.0*Gem_Vc1_c2)*d10_sqrt0*(NP(noi)-NP(e1));
cor_exp_1_Vnoi_e1=(d00_sqrt0);
#endif
cor_exp_1=(d00_sqrt0*(NP(noi)-NP(e1)));
EXIT_IF_ISNAN((d00_sqrt0*(NP(noi)-NP(e1))))
}
  _load_static_residual2(b2,e1,cor_exp_1)
  _load_static_jacobian4(b2,e1,noi,e1,cor_exp_1_Vnoi_e1)
  _load_static_jacobian4(b2,e1,c1,c2,cor_exp_1_Vc1_c2)
  _load_static_jacobian4(b2,e1,b2,c2,cor_exp_1_Vb2_c2)
  _load_static_jacobian4(b2,e1,b2,c1,cor_exp_1_Vb2_c1)
  _load_static_jacobian2s(b2,e1,dt,cor_exp_1_Vdt_GND)
{
double m00_sqrt(d00_sqrt0,(1.0+(2.0*pInst->Gem)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,(1.0+(2.0*pInst->Gem)))
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2)V(noi:e1) ddxprobe= */
cor_exp_2_Vdt_GND=(((2.0*Gem_Vdt_GND)*d00_sqrt0-(2.0+(2.0*pInst->Gem))*(2.0*Gem_Vdt_GND)*d10_sqrt0)/d00_sqrt0/d00_sqrt0)*(NP(noi)-NP(e1));
cor_exp_2_Vb2_c1=(((2.0*Gem_Vb2_c1)*d00_sqrt0-(2.0+(2.0*pInst->Gem))*(2.0*Gem_Vb2_c1)*d10_sqrt0)/d00_sqrt0/d00_sqrt0)*(NP(noi)-NP(e1));
cor_exp_2_Vb2_c2=(((2.0*Gem_Vb2_c2)*d00_sqrt0-(2.0+(2.0*pInst->Gem))*(2.0*Gem_Vb2_c2)*d10_sqrt0)/d00_sqrt0/d00_sqrt0)*(NP(noi)-NP(e1));
cor_exp_2_Vc1_c2=(((2.0*Gem_Vc1_c2)*d00_sqrt0-(2.0+(2.0*pInst->Gem))*(2.0*Gem_Vc1_c2)*d10_sqrt0)/d00_sqrt0/d00_sqrt0)*(NP(noi)-NP(e1));
cor_exp_2_Vnoi_e1=(((2.0+(2.0*pInst->Gem))/d00_sqrt0));
#endif
cor_exp_2=(((2.0+(2.0*pInst->Gem))/d00_sqrt0)*(NP(noi)-NP(e1)));
EXIT_IF_ISNAN((((2.0+(2.0*pInst->Gem))/d00_sqrt0)*(NP(noi)-NP(e1))))
}
  _load_static_residual2(e1,c2,cor_exp_2)
  _load_static_jacobian4(e1,c2,noi,e1,cor_exp_2_Vnoi_e1)
  _load_static_jacobian4(e1,c2,c1,c2,cor_exp_2_Vc1_c2)
  _load_static_jacobian4(e1,c2,b2,c2,cor_exp_2_Vb2_c2)
  _load_static_jacobian4(e1,c2,b2,c1,cor_exp_2_Vb2_c1)
  _load_static_jacobian2s(e1,c2,dt,cor_exp_2_Vdt_GND)
  _load_dynamic_residual2(b2,e1,_DDT((pModel->TYPE*((Qte+Qbe)+Qe))))
  _load_dynamic_jacobian4(b2,e1,c3,c4,(pModel->TYPE*Qbe_Vc3_c4))
  _load_dynamic_jacobian4(b2,e1,c3,c1,(pModel->TYPE*Qbe_Vc3_c1))
  _load_dynamic_jacobian4(b2,e1,c4,c1,(pModel->TYPE*(Qbe_Vc4_c1+Qe_Vc4_c1)))
  _load_dynamic_jacobian4(b2,e1,b1,b2,(pModel->TYPE*(Qbe_Vb1_b2+Qe_Vb1_b2)))
  _load_dynamic_jacobian4(b2,e1,b,b1,(pModel->TYPE*Qbe_Vb_b1))
  _load_dynamic_jacobian4(b2,e1,b,c,(pModel->TYPE*Qbe_Vb_c))
  _load_dynamic_jacobian4(b2,e1,c1,c2,(pModel->TYPE*((Qte_Vc1_c2+Qbe_Vc1_c2)+Qe_Vc1_c2)))
  _load_dynamic_jacobian4(b2,e1,b2,c1,(pModel->TYPE*(Qte_Vb2_c1+Qbe_Vb2_c1)))
  _load_dynamic_jacobian4(b2,e1,b2,c2,(pModel->TYPE*((Qte_Vb2_c2+Qbe_Vb2_c2)+Qe_Vb2_c2)))
  _load_dynamic_jacobian4(b2,e1,b2,e1,(pModel->TYPE*((Qte_Vb2_e1+Qbe_Vb2_e1)+Qe_Vb2_e1)))
  _load_dynamic_jacobian2s(b2,e1,dt,(pModel->TYPE*((Qte_Vdt_GND+Qbe_Vdt_GND)+Qe_Vdt_GND)))
  _load_dynamic_residual2(b1,e1,_DDT((pModel->TYPE*Qte_s)))
  _load_dynamic_jacobian4(b1,e1,c1,c2,(pModel->TYPE*Qte_s_Vc1_c2))
  _load_dynamic_jacobian4(b1,e1,b2,c1,(pModel->TYPE*Qte_s_Vb2_c1))
  _load_dynamic_jacobian4(b1,e1,b2,c2,(pModel->TYPE*Qte_s_Vb2_c2))
  _load_dynamic_jacobian4(b1,e1,b2,e1,(pModel->TYPE*Qte_s_Vb2_e1))
  _load_dynamic_jacobian4(b1,e1,b1,e1,(pModel->TYPE*Qte_s_Vb1_e1))
  _load_dynamic_jacobian2s(b1,e1,dt,(pModel->TYPE*Qte_s_Vdt_GND))
  _load_dynamic_residual2(b2,c2,_DDT((pModel->TYPE*((Qtc+Qbc)+Qepi))))
  _load_dynamic_jacobian4(b2,c2,c3,c4,(pModel->TYPE*Qbc_Vc3_c4))
  _load_dynamic_jacobian4(b2,c2,c3,c1,(pModel->TYPE*Qbc_Vc3_c1))
  _load_dynamic_jacobian4(b2,c2,c4,c1,(pModel->TYPE*Qbc_Vc4_c1))
  _load_dynamic_jacobian4(b2,c2,b1,b2,(pModel->TYPE*Qbc_Vb1_b2))
  _load_dynamic_jacobian4(b2,c2,b,b1,(pModel->TYPE*Qbc_Vb_b1))
  _load_dynamic_jacobian4(b2,c2,b,c,(pModel->TYPE*Qbc_Vb_c))
  _load_dynamic_jacobian4(b2,c2,b2,e1,(pModel->TYPE*(Qtc_Vb2_e1+Qbc_Vb2_e1)))
  _load_dynamic_jacobian4(b2,c2,c1,c2,(pModel->TYPE*((Qtc_Vc1_c2+Qbc_Vc1_c2)+Qepi_Vc1_c2)))
  _load_dynamic_jacobian4(b2,c2,b2,c1,(pModel->TYPE*((Qtc_Vb2_c1+Qbc_Vb2_c1)+Qepi_Vb2_c1)))
  _load_dynamic_jacobian4(b2,c2,b2,c2,(pModel->TYPE*((Qtc_Vb2_c2+Qbc_Vb2_c2)+Qepi_Vb2_c2)))
  _load_dynamic_jacobian2s(b2,c2,dt,(pModel->TYPE*((Qtc_Vdt_GND+Qbc_Vdt_GND)+Qepi_Vdt_GND)))
  _load_dynamic_residual2(s,c1,_DDT((pModel->TYPE*Qts)))
  _load_dynamic_jacobian4(s,c1,c1,c2,(pModel->TYPE*Qts_Vc1_c2))
  _load_dynamic_jacobian4(s,c1,b2,c1,(pModel->TYPE*Qts_Vb2_c1))
  _load_dynamic_jacobian4(s,c1,b2,c2,(pModel->TYPE*Qts_Vb2_c2))
  _load_dynamic_jacobian4(s,c1,b2,e1,(pModel->TYPE*Qts_Vb2_e1))
  _load_dynamic_jacobian4(s,c1,b1,e1,(pModel->TYPE*Qts_Vb1_e1))
  _load_dynamic_jacobian4(s,c1,c4,c1,(pModel->TYPE*Qts_Vc4_c1))
  _load_dynamic_jacobian4(s,c1,b1,b2,(pModel->TYPE*Qts_Vb1_b2))
  _load_dynamic_jacobian4(s,c1,c3,c4,(pModel->TYPE*Qts_Vc3_c4))
  _load_dynamic_jacobian4(s,c1,c3,c1,(pModel->TYPE*Qts_Vc3_c1))
  _load_dynamic_jacobian4(s,c1,b,b1,(pModel->TYPE*Qts_Vb_b1))
  _load_dynamic_jacobian4(s,c1,b,c,(pModel->TYPE*Qts_Vb_c))
  _load_dynamic_jacobian4(s,c1,s,c1,(pModel->TYPE*Qts_Vs_c1))
  _load_dynamic_jacobian2s(s,c1,dt,(pModel->TYPE*Qts_Vdt_GND))
  _load_dynamic_residual2(b1,b2,_DDT((pModel->TYPE*Qb1b2)))
  _load_dynamic_jacobian4(b1,b2,c3,c4,(pModel->TYPE*Qb1b2_Vc3_c4))
  _load_dynamic_jacobian4(b1,b2,c3,c1,(pModel->TYPE*Qb1b2_Vc3_c1))
  _load_dynamic_jacobian4(b1,b2,c4,c1,(pModel->TYPE*Qb1b2_Vc4_c1))
  _load_dynamic_jacobian4(b1,b2,b,b1,(pModel->TYPE*Qb1b2_Vb_b1))
  _load_dynamic_jacobian4(b1,b2,b,c,(pModel->TYPE*Qb1b2_Vb_c))
  _load_dynamic_jacobian4(b1,b2,c1,c2,(pModel->TYPE*Qb1b2_Vc1_c2))
  _load_dynamic_jacobian4(b1,b2,b2,c1,(pModel->TYPE*Qb1b2_Vb2_c1))
  _load_dynamic_jacobian4(b1,b2,b2,c2,(pModel->TYPE*Qb1b2_Vb2_c2))
  _load_dynamic_jacobian4(b1,b2,b2,e1,(pModel->TYPE*Qb1b2_Vb2_e1))
  _load_dynamic_jacobian2s(b1,b2,dt,(pModel->TYPE*Qb1b2_Vdt_GND))
  _load_dynamic_jacobian4(b1,b2,b1,b2,(pModel->TYPE*Qb1b2_Vb1_b2))
  _load_dynamic_residual2(b,e,_DDT(((pModel->TYPE*CBEO_M)*Vbe)))
  _load_dynamic_jacobian4(b,e,b,e,((pModel->TYPE*CBEO_M)*Vbe_Vb_e))
  _load_dynamic_residual2(b,c,_DDT(((pModel->TYPE*CBCO_M)*Vbc)))
  _load_dynamic_jacobian4(b,c,b,c,((pModel->TYPE*CBCO_M)*Vbc_Vb_c))
}
if
((pModel->RCBLX>0.0))
{
  _load_static_residual2(b,c3,(pModel->TYPE*pInst->XIex))
  _load_static_jacobian4(b,c3,c1,c2,(pModel->TYPE*XIex_Vc1_c2))
  _load_static_jacobian4(b,c3,b2,c1,(pModel->TYPE*XIex_Vb2_c1))
  _load_static_jacobian4(b,c3,b2,c2,(pModel->TYPE*XIex_Vb2_c2))
  _load_static_jacobian4(b,c3,b2,e1,(pModel->TYPE*XIex_Vb2_e1))
  _load_static_jacobian4(b,c3,c3,c4,(pModel->TYPE*XIex_Vc3_c4))
  _load_static_jacobian4(b,c3,c3,c1,(pModel->TYPE*XIex_Vc3_c1))
  _load_static_jacobian4(b,c3,c4,c1,(pModel->TYPE*XIex_Vc4_c1))
  _load_static_jacobian4(b,c3,b1,b2,(pModel->TYPE*XIex_Vb1_b2))
  _load_static_jacobian4(b,c3,b,b1,(pModel->TYPE*XIex_Vb_b1))
  _load_static_jacobian4(b,c3,b,c,(pModel->TYPE*XIex_Vb_c))
  _load_static_jacobian2s(b,c3,dt,(pModel->TYPE*XIex_Vdt_GND))
  _load_static_residual2(c,c3,((pModel->TYPE*Vcc3)*pInst->GCCxx_TM))
  _load_static_jacobian2s(c,c3,dt,((pModel->TYPE*Vcc3)*GCCxx_TM_Vdt_GND))
  _load_static_jacobian4(c,c3,c3,c4,(pModel->TYPE*Vcc3_Vc3_c4)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c3,c3,c1,(pModel->TYPE*Vcc3_Vc3_c1)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c3,c4,c1,(pModel->TYPE*Vcc3_Vc4_c1)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c3,c1,c2,(pModel->TYPE*Vcc3_Vc1_c2)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c3,b2,c2,(pModel->TYPE*Vcc3_Vb2_c2)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c3,b1,b2,(pModel->TYPE*Vcc3_Vb1_b2)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c3,b,b1,(pModel->TYPE*Vcc3_Vb_b1)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c3,b,c,(pModel->TYPE*Vcc3_Vb_c)*pInst->GCCxx_TM)
  _load_dynamic_residual2(b,c3,_DDT((pModel->TYPE*(XQtex+XQex))))
  _load_dynamic_jacobian4(b,c3,b2,c1,(pModel->TYPE*(XQtex_Vb2_c1+XQex_Vb2_c1)))
  _load_dynamic_jacobian4(b,c3,b2,e1,(pModel->TYPE*(XQtex_Vb2_e1+XQex_Vb2_e1)))
  _load_dynamic_jacobian4(b,c3,b1,e1,(pModel->TYPE*XQtex_Vb1_e1))
  _load_dynamic_jacobian4(b,c3,c3,c4,(pModel->TYPE*(XQtex_Vc3_c4+XQex_Vc3_c4)))
  _load_dynamic_jacobian4(b,c3,c3,c1,(pModel->TYPE*(XQtex_Vc3_c1+XQex_Vc3_c1)))
  _load_dynamic_jacobian4(b,c3,c4,c1,(pModel->TYPE*(XQtex_Vc4_c1+XQex_Vc4_c1)))
  _load_dynamic_jacobian4(b,c3,c1,c2,(pModel->TYPE*(XQtex_Vc1_c2+XQex_Vc1_c2)))
  _load_dynamic_jacobian4(b,c3,b2,c2,(pModel->TYPE*(XQtex_Vb2_c2+XQex_Vb2_c2)))
  _load_dynamic_jacobian4(b,c3,b1,b2,(pModel->TYPE*(XQtex_Vb1_b2+XQex_Vb1_b2)))
  _load_dynamic_jacobian4(b,c3,b,b1,(pModel->TYPE*(XQtex_Vb_b1+XQex_Vb_b1)))
  _load_dynamic_jacobian4(b,c3,b,c,(pModel->TYPE*(XQtex_Vb_c+XQex_Vb_c)))
  _load_dynamic_jacobian2s(b,c3,dt,(pModel->TYPE*(XQtex_Vdt_GND+XQex_Vdt_GND)))
if
((pModel->RCBLI>0.0))
{
  _load_static_residual2(c4,c1,((pModel->TYPE*Vc4c1)*pInst->GCCin_TM))
  _load_static_jacobian2s(c4,c1,dt,((pModel->TYPE*Vc4c1)*GCCin_TM_Vdt_GND))
  _load_static_jacobian4(c4,c1,c4,c1,(pModel->TYPE*Vc4c1_Vc4_c1)*pInst->GCCin_TM)
  _load_static_residual2(b1,c4,(pModel->TYPE*(pInst->Ib3+pInst->Iex)))
  _load_static_jacobian4(b1,c4,b2,e1,(pModel->TYPE*Ib3_Vb2_e1))
  _load_static_jacobian4(b1,c4,c4,c1,(pModel->TYPE*(Ib3_Vc4_c1+Iex_Vc4_c1)))
  _load_static_jacobian4(b1,c4,c1,c2,(pModel->TYPE*(Ib3_Vc1_c2+Iex_Vc1_c2)))
  _load_static_jacobian4(b1,c4,b2,c2,(pModel->TYPE*(Ib3_Vb2_c2+Iex_Vb2_c2)))
  _load_static_jacobian4(b1,c4,b1,b2,(pModel->TYPE*(Ib3_Vb1_b2+Iex_Vb1_b2)))
  _load_static_jacobian2s(b1,c4,dt,(pModel->TYPE*(Ib3_Vdt_GND+Iex_Vdt_GND)))
  _load_static_residual2(c3,c4,((pModel->TYPE*Vc3c4)*pInst->GCCex_TM))
  _load_static_jacobian2s(c3,c4,dt,((pModel->TYPE*Vc3c4)*GCCex_TM_Vdt_GND))
  _load_static_jacobian4(c3,c4,c3,c4,(pModel->TYPE*Vc3c4_Vc3_c4)*pInst->GCCex_TM)
  _load_static_jacobian4(c3,c4,c3,c1,(pModel->TYPE*Vc3c4_Vc3_c1)*pInst->GCCex_TM)
  _load_dynamic_residual2(b1,c4,_DDT((pModel->TYPE*(Qtex+Qex))))
  _load_dynamic_jacobian4(b1,c4,b2,c1,(pModel->TYPE*Qtex_Vb2_c1))
  _load_dynamic_jacobian4(b1,c4,b2,e1,(pModel->TYPE*Qtex_Vb2_e1))
  _load_dynamic_jacobian4(b1,c4,b1,e1,(pModel->TYPE*Qtex_Vb1_e1))
  _load_dynamic_jacobian4(b1,c4,c4,c1,(pModel->TYPE*(Qtex_Vc4_c1+Qex_Vc4_c1)))
  _load_dynamic_jacobian4(b1,c4,c1,c2,(pModel->TYPE*(Qtex_Vc1_c2+Qex_Vc1_c2)))
  _load_dynamic_jacobian4(b1,c4,b2,c2,(pModel->TYPE*(Qtex_Vb2_c2+Qex_Vb2_c2)))
  _load_dynamic_jacobian4(b1,c4,b1,b2,(pModel->TYPE*(Qtex_Vb1_b2+Qex_Vb1_b2)))
  _load_dynamic_jacobian2s(b1,c4,dt,(pModel->TYPE*(Qtex_Vdt_GND+Qex_Vdt_GND)))
}
else
{
  _load_static_residual2(c4,c1,0.0)
  _load_static_residual2(b1,c1,(pModel->TYPE*(pInst->Ib3+pInst->Iex)))
  _load_static_jacobian4(b1,c1,b2,e1,(pModel->TYPE*Ib3_Vb2_e1))
  _load_static_jacobian4(b1,c1,c4,c1,(pModel->TYPE*(Ib3_Vc4_c1+Iex_Vc4_c1)))
  _load_static_jacobian4(b1,c1,c1,c2,(pModel->TYPE*(Ib3_Vc1_c2+Iex_Vc1_c2)))
  _load_static_jacobian4(b1,c1,b2,c2,(pModel->TYPE*(Ib3_Vb2_c2+Iex_Vb2_c2)))
  _load_static_jacobian4(b1,c1,b1,b2,(pModel->TYPE*(Ib3_Vb1_b2+Iex_Vb1_b2)))
  _load_static_jacobian2s(b1,c1,dt,(pModel->TYPE*(Ib3_Vdt_GND+Iex_Vdt_GND)))
  _load_dynamic_residual2(b1,c1,_DDT((pModel->TYPE*(Qtex+Qex))))
  _load_dynamic_jacobian4(b1,c1,b2,c1,(pModel->TYPE*Qtex_Vb2_c1))
  _load_dynamic_jacobian4(b1,c1,b2,e1,(pModel->TYPE*Qtex_Vb2_e1))
  _load_dynamic_jacobian4(b1,c1,b1,e1,(pModel->TYPE*Qtex_Vb1_e1))
  _load_dynamic_jacobian4(b1,c1,c4,c1,(pModel->TYPE*(Qtex_Vc4_c1+Qex_Vc4_c1)))
  _load_dynamic_jacobian4(b1,c1,c1,c2,(pModel->TYPE*(Qtex_Vc1_c2+Qex_Vc1_c2)))
  _load_dynamic_jacobian4(b1,c1,b2,c2,(pModel->TYPE*(Qtex_Vb2_c2+Qex_Vb2_c2)))
  _load_dynamic_jacobian4(b1,c1,b1,b2,(pModel->TYPE*(Qtex_Vb1_b2+Qex_Vb1_b2)))
  _load_dynamic_jacobian2s(b1,c1,dt,(pModel->TYPE*(Qtex_Vdt_GND+Qex_Vdt_GND)))
  _load_static_residual2(c3,c1,((pModel->TYPE*Vc3c4)*pInst->GCCex_TM))
  _load_static_jacobian2s(c3,c1,dt,((pModel->TYPE*Vc3c4)*GCCex_TM_Vdt_GND))
  _load_static_jacobian4(c3,c1,c3,c4,(pModel->TYPE*Vc3c4_Vc3_c4)*pInst->GCCex_TM)
  _load_static_jacobian4(c3,c1,c3,c1,(pModel->TYPE*Vc3c4_Vc3_c1)*pInst->GCCex_TM)
}
}
else
{
  _load_static_residual2(c3,c4,0)
if
((pModel->RCBLI>0.0))
{
  _load_static_residual2(b,c4,(pModel->TYPE*pInst->XIex))
  _load_static_jacobian4(b,c4,c1,c2,(pModel->TYPE*XIex_Vc1_c2))
  _load_static_jacobian4(b,c4,b2,c1,(pModel->TYPE*XIex_Vb2_c1))
  _load_static_jacobian4(b,c4,b2,c2,(pModel->TYPE*XIex_Vb2_c2))
  _load_static_jacobian4(b,c4,b2,e1,(pModel->TYPE*XIex_Vb2_e1))
  _load_static_jacobian4(b,c4,c3,c4,(pModel->TYPE*XIex_Vc3_c4))
  _load_static_jacobian4(b,c4,c3,c1,(pModel->TYPE*XIex_Vc3_c1))
  _load_static_jacobian4(b,c4,c4,c1,(pModel->TYPE*XIex_Vc4_c1))
  _load_static_jacobian4(b,c4,b1,b2,(pModel->TYPE*XIex_Vb1_b2))
  _load_static_jacobian4(b,c4,b,b1,(pModel->TYPE*XIex_Vb_b1))
  _load_static_jacobian4(b,c4,b,c,(pModel->TYPE*XIex_Vb_c))
  _load_static_jacobian2s(b,c4,dt,(pModel->TYPE*XIex_Vdt_GND))
  _load_static_residual2(c,c4,((pModel->TYPE*Vcc3)*pInst->GCCxx_TM))
  _load_static_jacobian2s(c,c4,dt,((pModel->TYPE*Vcc3)*GCCxx_TM_Vdt_GND))
  _load_static_jacobian4(c,c4,c3,c4,(pModel->TYPE*Vcc3_Vc3_c4)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c4,c3,c1,(pModel->TYPE*Vcc3_Vc3_c1)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c4,c4,c1,(pModel->TYPE*Vcc3_Vc4_c1)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c4,c1,c2,(pModel->TYPE*Vcc3_Vc1_c2)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c4,b2,c2,(pModel->TYPE*Vcc3_Vb2_c2)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c4,b1,b2,(pModel->TYPE*Vcc3_Vb1_b2)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c4,b,b1,(pModel->TYPE*Vcc3_Vb_b1)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c4,b,c,(pModel->TYPE*Vcc3_Vb_c)*pInst->GCCxx_TM)
  _load_static_residual2(c4,c1,((pModel->TYPE*Vc4c1)*pInst->GCCin_TM))
  _load_static_jacobian2s(c4,c1,dt,((pModel->TYPE*Vc4c1)*GCCin_TM_Vdt_GND))
  _load_static_jacobian4(c4,c1,c4,c1,(pModel->TYPE*Vc4c1_Vc4_c1)*pInst->GCCin_TM)
  _load_static_residual2(b1,c4,(pModel->TYPE*(pInst->Ib3+pInst->Iex)))
  _load_static_jacobian4(b1,c4,b2,e1,(pModel->TYPE*Ib3_Vb2_e1))
  _load_static_jacobian4(b1,c4,c4,c1,(pModel->TYPE*(Ib3_Vc4_c1+Iex_Vc4_c1)))
  _load_static_jacobian4(b1,c4,c1,c2,(pModel->TYPE*(Ib3_Vc1_c2+Iex_Vc1_c2)))
  _load_static_jacobian4(b1,c4,b2,c2,(pModel->TYPE*(Ib3_Vb2_c2+Iex_Vb2_c2)))
  _load_static_jacobian4(b1,c4,b1,b2,(pModel->TYPE*(Ib3_Vb1_b2+Iex_Vb1_b2)))
  _load_static_jacobian2s(b1,c4,dt,(pModel->TYPE*(Ib3_Vdt_GND+Iex_Vdt_GND)))
  _load_dynamic_residual2(b1,c4,_DDT((pModel->TYPE*(Qtex+Qex))))
  _load_dynamic_jacobian4(b1,c4,b2,c1,(pModel->TYPE*Qtex_Vb2_c1))
  _load_dynamic_jacobian4(b1,c4,b2,e1,(pModel->TYPE*Qtex_Vb2_e1))
  _load_dynamic_jacobian4(b1,c4,b1,e1,(pModel->TYPE*Qtex_Vb1_e1))
  _load_dynamic_jacobian4(b1,c4,c4,c1,(pModel->TYPE*(Qtex_Vc4_c1+Qex_Vc4_c1)))
  _load_dynamic_jacobian4(b1,c4,c1,c2,(pModel->TYPE*(Qtex_Vc1_c2+Qex_Vc1_c2)))
  _load_dynamic_jacobian4(b1,c4,b2,c2,(pModel->TYPE*(Qtex_Vb2_c2+Qex_Vb2_c2)))
  _load_dynamic_jacobian4(b1,c4,b1,b2,(pModel->TYPE*(Qtex_Vb1_b2+Qex_Vb1_b2)))
  _load_dynamic_jacobian2s(b1,c4,dt,(pModel->TYPE*(Qtex_Vdt_GND+Qex_Vdt_GND)))
  _load_dynamic_residual2(b,c4,_DDT((pModel->TYPE*(XQtex+XQex))))
  _load_dynamic_jacobian4(b,c4,b2,c1,(pModel->TYPE*(XQtex_Vb2_c1+XQex_Vb2_c1)))
  _load_dynamic_jacobian4(b,c4,b2,e1,(pModel->TYPE*(XQtex_Vb2_e1+XQex_Vb2_e1)))
  _load_dynamic_jacobian4(b,c4,b1,e1,(pModel->TYPE*XQtex_Vb1_e1))
  _load_dynamic_jacobian4(b,c4,c3,c4,(pModel->TYPE*(XQtex_Vc3_c4+XQex_Vc3_c4)))
  _load_dynamic_jacobian4(b,c4,c3,c1,(pModel->TYPE*(XQtex_Vc3_c1+XQex_Vc3_c1)))
  _load_dynamic_jacobian4(b,c4,c4,c1,(pModel->TYPE*(XQtex_Vc4_c1+XQex_Vc4_c1)))
  _load_dynamic_jacobian4(b,c4,c1,c2,(pModel->TYPE*(XQtex_Vc1_c2+XQex_Vc1_c2)))
  _load_dynamic_jacobian4(b,c4,b2,c2,(pModel->TYPE*(XQtex_Vb2_c2+XQex_Vb2_c2)))
  _load_dynamic_jacobian4(b,c4,b1,b2,(pModel->TYPE*(XQtex_Vb1_b2+XQex_Vb1_b2)))
  _load_dynamic_jacobian4(b,c4,b,b1,(pModel->TYPE*(XQtex_Vb_b1+XQex_Vb_b1)))
  _load_dynamic_jacobian4(b,c4,b,c,(pModel->TYPE*(XQtex_Vb_c+XQex_Vb_c)))
  _load_dynamic_jacobian2s(b,c4,dt,(pModel->TYPE*(XQtex_Vdt_GND+XQex_Vdt_GND)))
}
else
{
  _load_static_residual2(b,c1,(pModel->TYPE*pInst->XIex))
  _load_static_jacobian4(b,c1,c1,c2,(pModel->TYPE*XIex_Vc1_c2))
  _load_static_jacobian4(b,c1,b2,c1,(pModel->TYPE*XIex_Vb2_c1))
  _load_static_jacobian4(b,c1,b2,c2,(pModel->TYPE*XIex_Vb2_c2))
  _load_static_jacobian4(b,c1,b2,e1,(pModel->TYPE*XIex_Vb2_e1))
  _load_static_jacobian4(b,c1,c3,c4,(pModel->TYPE*XIex_Vc3_c4))
  _load_static_jacobian4(b,c1,c3,c1,(pModel->TYPE*XIex_Vc3_c1))
  _load_static_jacobian4(b,c1,c4,c1,(pModel->TYPE*XIex_Vc4_c1))
  _load_static_jacobian4(b,c1,b1,b2,(pModel->TYPE*XIex_Vb1_b2))
  _load_static_jacobian4(b,c1,b,b1,(pModel->TYPE*XIex_Vb_b1))
  _load_static_jacobian4(b,c1,b,c,(pModel->TYPE*XIex_Vb_c))
  _load_static_jacobian2s(b,c1,dt,(pModel->TYPE*XIex_Vdt_GND))
  _load_static_residual2(c,c1,((pModel->TYPE*Vcc3)*pInst->GCCxx_TM))
  _load_static_jacobian2s(c,c1,dt,((pModel->TYPE*Vcc3)*GCCxx_TM_Vdt_GND))
  _load_static_jacobian4(c,c1,c3,c4,(pModel->TYPE*Vcc3_Vc3_c4)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c1,c3,c1,(pModel->TYPE*Vcc3_Vc3_c1)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c1,c4,c1,(pModel->TYPE*Vcc3_Vc4_c1)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c1,c1,c2,(pModel->TYPE*Vcc3_Vc1_c2)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c1,b2,c2,(pModel->TYPE*Vcc3_Vb2_c2)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c1,b1,b2,(pModel->TYPE*Vcc3_Vb1_b2)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c1,b,b1,(pModel->TYPE*Vcc3_Vb_b1)*pInst->GCCxx_TM)
  _load_static_jacobian4(c,c1,b,c,(pModel->TYPE*Vcc3_Vb_c)*pInst->GCCxx_TM)
  _load_static_residual2(c4,c1,0.0)
  _load_static_residual2(b1,c1,(pModel->TYPE*(pInst->Ib3+pInst->Iex)))
  _load_static_jacobian4(b1,c1,b2,e1,(pModel->TYPE*Ib3_Vb2_e1))
  _load_static_jacobian4(b1,c1,c4,c1,(pModel->TYPE*(Ib3_Vc4_c1+Iex_Vc4_c1)))
  _load_static_jacobian4(b1,c1,c1,c2,(pModel->TYPE*(Ib3_Vc1_c2+Iex_Vc1_c2)))
  _load_static_jacobian4(b1,c1,b2,c2,(pModel->TYPE*(Ib3_Vb2_c2+Iex_Vb2_c2)))
  _load_static_jacobian4(b1,c1,b1,b2,(pModel->TYPE*(Ib3_Vb1_b2+Iex_Vb1_b2)))
  _load_static_jacobian2s(b1,c1,dt,(pModel->TYPE*(Ib3_Vdt_GND+Iex_Vdt_GND)))
  _load_dynamic_residual2(b1,c1,_DDT((pModel->TYPE*(Qtex+Qex))))
  _load_dynamic_jacobian4(b1,c1,b2,c1,(pModel->TYPE*Qtex_Vb2_c1))
  _load_dynamic_jacobian4(b1,c1,b2,e1,(pModel->TYPE*Qtex_Vb2_e1))
  _load_dynamic_jacobian4(b1,c1,b1,e1,(pModel->TYPE*Qtex_Vb1_e1))
  _load_dynamic_jacobian4(b1,c1,c4,c1,(pModel->TYPE*(Qtex_Vc4_c1+Qex_Vc4_c1)))
  _load_dynamic_jacobian4(b1,c1,c1,c2,(pModel->TYPE*(Qtex_Vc1_c2+Qex_Vc1_c2)))
  _load_dynamic_jacobian4(b1,c1,b2,c2,(pModel->TYPE*(Qtex_Vb2_c2+Qex_Vb2_c2)))
  _load_dynamic_jacobian4(b1,c1,b1,b2,(pModel->TYPE*(Qtex_Vb1_b2+Qex_Vb1_b2)))
  _load_dynamic_jacobian2s(b1,c1,dt,(pModel->TYPE*(Qtex_Vdt_GND+Qex_Vdt_GND)))
  _load_dynamic_residual2(b,c1,_DDT((pModel->TYPE*(XQtex+XQex))))
  _load_dynamic_jacobian4(b,c1,b2,c1,(pModel->TYPE*(XQtex_Vb2_c1+XQex_Vb2_c1)))
  _load_dynamic_jacobian4(b,c1,b2,e1,(pModel->TYPE*(XQtex_Vb2_e1+XQex_Vb2_e1)))
  _load_dynamic_jacobian4(b,c1,b1,e1,(pModel->TYPE*XQtex_Vb1_e1))
  _load_dynamic_jacobian4(b,c1,c3,c4,(pModel->TYPE*(XQtex_Vc3_c4+XQex_Vc3_c4)))
  _load_dynamic_jacobian4(b,c1,c3,c1,(pModel->TYPE*(XQtex_Vc3_c1+XQex_Vc3_c1)))
  _load_dynamic_jacobian4(b,c1,c4,c1,(pModel->TYPE*(XQtex_Vc4_c1+XQex_Vc4_c1)))
  _load_dynamic_jacobian4(b,c1,c1,c2,(pModel->TYPE*(XQtex_Vc1_c2+XQex_Vc1_c2)))
  _load_dynamic_jacobian4(b,c1,b2,c2,(pModel->TYPE*(XQtex_Vb2_c2+XQex_Vb2_c2)))
  _load_dynamic_jacobian4(b,c1,b1,b2,(pModel->TYPE*(XQtex_Vb1_b2+XQex_Vb1_b2)))
  _load_dynamic_jacobian4(b,c1,b,b1,(pModel->TYPE*(XQtex_Vb_b1+XQex_Vb_b1)))
  _load_dynamic_jacobian4(b,c1,b,c,(pModel->TYPE*(XQtex_Vb_c+XQex_Vb_c)))
  _load_dynamic_jacobian2s(b,c1,dt,(pModel->TYPE*(XQtex_Vdt_GND+XQex_Vdt_GND)))
  _load_static_residual2(c3,c1,((pModel->TYPE*Vc3c4)*pInst->GCCex_TM))
  _load_static_jacobian2s(c3,c1,dt,((pModel->TYPE*Vc3c4)*GCCex_TM_Vdt_GND))
  _load_static_jacobian4(c3,c1,c3,c4,(pModel->TYPE*Vc3c4_Vc3_c4)*pInst->GCCex_TM)
  _load_static_jacobian4(c3,c1,c3,c1,(pModel->TYPE*Vc3c4_Vc3_c1)*pInst->GCCex_TM)
}
}
{
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
common_Vdt_GND=((4.0*1.3806226e-23)*Tk_Vdt_GND);
#endif
common=((4.0*1.3806226e-23)*pInst->Tk);
EXIT_IF_ISNAN(((4.0*1.3806226e-23)*pInst->Tk))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
powerREC_Vdt_GND=((common_Vdt_GND*pInst->RE_TM-common*RE_TM_Vdt_GND)/pInst->RE_TM/pInst->RE_TM);
#endif
powerREC=(common/pInst->RE_TM);
EXIT_IF_ISNAN((common/pInst->RE_TM))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
powerRBC_Vdt_GND=((common_Vdt_GND*pInst->RBC_TM-common*RBC_TM_Vdt_GND)/pInst->RBC_TM/pInst->RBC_TM);
#endif
powerRBC=(common/pInst->RBC_TM);
EXIT_IF_ISNAN((common/pInst->RBC_TM))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
powerRCCxx_Vdt_GND=((common_Vdt_GND*pInst->GCCxx_TM)+(common*GCCxx_TM_Vdt_GND));
#endif
powerRCCxx=(common*pInst->GCCxx_TM);
EXIT_IF_ISNAN((common*pInst->GCCxx_TM))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
powerRCCex_Vdt_GND=((common_Vdt_GND*pInst->GCCex_TM)+(common*GCCex_TM_Vdt_GND));
#endif
powerRCCex=(common*pInst->GCCex_TM);
EXIT_IF_ISNAN((common*pInst->GCCex_TM))
#if defined(_DERIVATE) /* probe=V(dt:GND) ddxprobe= */
powerRCCin_Vdt_GND=((common_Vdt_GND*pInst->GCCin_TM)+(common*GCCin_TM_Vdt_GND));
#endif
powerRCCin=(common*pInst->GCCin_TM);
EXIT_IF_ISNAN((common*pInst->GCCin_TM))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
powerRBV_Vdt_GND=(((((common_Vdt_GND*pInst->Rb2-common*Rb2_Vdt_GND)/pInst->Rb2/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0))+((common/pInst->Rb2)*(4.0*eVb1b2_Vdt_GND)))/3.0);
powerRBV_Vb_c=((-common*Rb2_Vb_c/pInst->Rb2/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0)/3.0);
powerRBV_Vb_b1=((-common*Rb2_Vb_b1/pInst->Rb2/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0)/3.0);
powerRBV_Vb1_b2=((((-common*Rb2_Vb1_b2/pInst->Rb2/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0))+((common/pInst->Rb2)*(4.0*eVb1b2_Vb1_b2)))/3.0);
powerRBV_Vc4_c1=((-common*Rb2_Vc4_c1/pInst->Rb2/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0)/3.0);
powerRBV_Vc3_c1=((-common*Rb2_Vc3_c1/pInst->Rb2/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0)/3.0);
powerRBV_Vc3_c4=((-common*Rb2_Vc3_c4/pInst->Rb2/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0)/3.0);
powerRBV_Vb2_e1=((-common*Rb2_Vb2_e1/pInst->Rb2/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0)/3.0);
powerRBV_Vb2_c2=((-common*Rb2_Vb2_c2/pInst->Rb2/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0)/3.0);
powerRBV_Vb2_c1=((-common*Rb2_Vb2_c1/pInst->Rb2/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0)/3.0);
powerRBV_Vc1_c2=((-common*Rb2_Vc1_c2/pInst->Rb2/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0)/3.0);
#endif
powerRBV=(((common/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0))/3.0);
EXIT_IF_ISNAN((((common/pInst->Rb2)*((4.0*pInst->eVb1b2)+5.0))/3.0))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
powerCCS_Vdt_GND=((((2.0*1.6021918e-19)*(If_Vdt_GND+Ir_Vdt_GND))*pInst->qBI-((2.0*1.6021918e-19)*(pInst->If+pInst->Ir))*qBI_Vdt_GND)/pInst->qBI/pInst->qBI);
powerCCS_Vb2_e1=((((2.0*1.6021918e-19)*If_Vb2_e1)*pInst->qBI-((2.0*1.6021918e-19)*(pInst->If+pInst->Ir))*qBI_Vb2_e1)/pInst->qBI/pInst->qBI);
powerCCS_Vb2_c2=((((2.0*1.6021918e-19)*Ir_Vb2_c2)*pInst->qBI-((2.0*1.6021918e-19)*(pInst->If+pInst->Ir))*qBI_Vb2_c2)/pInst->qBI/pInst->qBI);
powerCCS_Vb2_c1=((((2.0*1.6021918e-19)*Ir_Vb2_c1)*pInst->qBI-((2.0*1.6021918e-19)*(pInst->If+pInst->Ir))*qBI_Vb2_c1)/pInst->qBI/pInst->qBI);
powerCCS_Vc1_c2=((((2.0*1.6021918e-19)*Ir_Vc1_c2)*pInst->qBI-((2.0*1.6021918e-19)*(pInst->If+pInst->Ir))*qBI_Vc1_c2)/pInst->qBI/pInst->qBI);
#endif
powerCCS=(((2.0*1.6021918e-19)*(pInst->If+pInst->Ir))/pInst->qBI);
EXIT_IF_ISNAN((((2.0*1.6021918e-19)*(pInst->If+pInst->Ir))/pInst->qBI))
{
double m00_fabs(d00_fabs0,pInst->Ib1)
double m00_fabs(d00_fabs1,pInst->Ib2)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->Ib1)
double m10_fabs(d10_fabs1,d00_fabs1,pInst->Ib2)
#endif
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND)V(b2:e1) ddxprobe= */
powerFBCS_Vb2_c2=((2.0*1.6021918e-19)*Ib1_Vb2_c2*d10_fabs0);
powerFBCS_Vb2_c1=((2.0*1.6021918e-19)*Ib1_Vb2_c1*d10_fabs0);
powerFBCS_Vc1_c2=((2.0*1.6021918e-19)*Ib1_Vc1_c2*d10_fabs0);
powerFBCS_Vdt_GND=((2.0*1.6021918e-19)*(Ib1_Vdt_GND*d10_fabs0+Ib2_Vdt_GND*d10_fabs1));
powerFBCS_Vb2_e1=((2.0*1.6021918e-19)*(Ib1_Vb2_e1*d10_fabs0+Ib2_Vb2_e1*d10_fabs1));
#endif
powerFBCS=((2.0*1.6021918e-19)*(d00_fabs0+d00_fabs1));
EXIT_IF_ISNAN(((2.0*1.6021918e-19)*(d00_fabs0+d00_fabs1)))
}
{
double m00_fabs(d00_fabs0,pInst->Ib1)
double m00_pow(d00_pow1,(d00_fabs0/(1-pModel->XIBI)),pModel->AF)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->Ib1)
double m10_pow(d10_pow1,d00_pow1,(d00_fabs0/(1-pModel->XIBI)),pModel->AF)
#endif
#if defined(_DERIVATE) /* probe=V(b2:c2)V(b2:c1)V(c1:c2)V(dt:GND)V(b2:e1) ddxprobe= */
powerFBC1fB1_Vb2_c2=((1.0-pModel->XIBI)*(d10_pow1*(Ib1_Vb2_c2*d10_fabs0/(1-pModel->XIBI))))*pInst->KF_M;
powerFBC1fB1_Vb2_c1=((1.0-pModel->XIBI)*(d10_pow1*(Ib1_Vb2_c1*d10_fabs0/(1-pModel->XIBI))))*pInst->KF_M;
powerFBC1fB1_Vc1_c2=((1.0-pModel->XIBI)*(d10_pow1*(Ib1_Vc1_c2*d10_fabs0/(1-pModel->XIBI))))*pInst->KF_M;
powerFBC1fB1_Vdt_GND=((1.0-pModel->XIBI)*(d10_pow1*(Ib1_Vdt_GND*d10_fabs0/(1-pModel->XIBI))))*pInst->KF_M;
powerFBC1fB1_Vb2_e1=((1.0-pModel->XIBI)*(d10_pow1*(Ib1_Vb2_e1*d10_fabs0/(1-pModel->XIBI))))*pInst->KF_M;
#endif
powerFBC1fB1=(((1.0-pModel->XIBI)*d00_pow1)*pInst->KF_M);
EXIT_IF_ISNAN((((1.0-pModel->XIBI)*d00_pow1)*pInst->KF_M))
}
exponentFBC1fB2=((2.0*(pModel->MLF-1.0))+(pModel->AF*(2.0-pModel->MLF)));
EXIT_IF_ISNAN(((2.0*(pModel->MLF-1.0))+(pModel->AF*(2.0-pModel->MLF))))
{
double m00_fabs(d00_fabs0,pInst->Ib2)
double m00_pow(d00_pow1,d00_fabs0,exponentFBC1fB2)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->Ib2)
double m10_pow(d10_pow1,d00_pow1,d00_fabs0,exponentFBC1fB2)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1) ddxprobe= */
powerFBC1fB2_Vdt_GND=(pInst->KFN_M*(d10_pow1*Ib2_Vdt_GND*d10_fabs0));
powerFBC1fB2_Vb2_e1=(pInst->KFN_M*(d10_pow1*Ib2_Vb2_e1*d10_fabs0));
#endif
powerFBC1fB2=(pInst->KFN_M*d00_pow1);
EXIT_IF_ISNAN((pInst->KFN_M*d00_pow1))
}
{
double m00_fabs(d00_fabs0,pInst->Ib1_s)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->Ib1_s)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:e1) ddxprobe= */
powerEBSCS_Vdt_GND=((2.0*1.6021918e-19)*Ib1_s_Vdt_GND*d10_fabs0);
powerEBSCS_Vb1_e1=((2.0*1.6021918e-19)*Ib1_s_Vb1_e1*d10_fabs0);
#endif
powerEBSCS=((2.0*1.6021918e-19)*d00_fabs0);
EXIT_IF_ISNAN(((2.0*1.6021918e-19)*d00_fabs0))
}
if
((pModel->XIBI==0))
{
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:e1) ddxprobe= */
powerEBSC1f_Vdt_GND=0.0;
powerEBSC1f_Vb1_e1=0.0;
#endif
powerEBSC1f=0.0;
EXIT_IF_ISNAN(0.0)
}
else
{
{
double m00_fabs(d00_fabs0,(pInst->Ib1_s/pModel->XIBI))
double m00_pow(d00_pow1,d00_fabs0,pModel->AF)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,(pInst->Ib1_s/pModel->XIBI))
double m10_pow(d10_pow1,d00_pow1,d00_fabs0,pModel->AF)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:e1) ddxprobe= */
powerEBSC1f_Vdt_GND=((pInst->KF_M*pModel->XIBI)*(d10_pow1*(Ib1_s_Vdt_GND/pModel->XIBI)*d10_fabs0));
powerEBSC1f_Vb1_e1=((pInst->KF_M*pModel->XIBI)*(d10_pow1*(Ib1_s_Vb1_e1/pModel->XIBI)*d10_fabs0));
#endif
powerEBSC1f=((pInst->KF_M*pModel->XIBI)*d00_pow1);
EXIT_IF_ISNAN(((pInst->KF_M*pModel->XIBI)*d00_pow1))
}
}
{
double m00_fabs(d00_fabs0,pInst->Ib3)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->Ib3)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b2:e1) ddxprobe= */
powerRBCS_Vdt_GND=((2.0*1.6021918e-19)*Ib3_Vdt_GND*d10_fabs0);
powerRBCS_Vb1_b2=((2.0*1.6021918e-19)*Ib3_Vb1_b2*d10_fabs0);
powerRBCS_Vb2_c2=((2.0*1.6021918e-19)*Ib3_Vb2_c2*d10_fabs0);
powerRBCS_Vc1_c2=((2.0*1.6021918e-19)*Ib3_Vc1_c2*d10_fabs0);
powerRBCS_Vc4_c1=((2.0*1.6021918e-19)*Ib3_Vc4_c1*d10_fabs0);
powerRBCS_Vb2_e1=((2.0*1.6021918e-19)*Ib3_Vb2_e1*d10_fabs0);
#endif
powerRBCS=((2.0*1.6021918e-19)*d00_fabs0);
EXIT_IF_ISNAN(((2.0*1.6021918e-19)*d00_fabs0))
}
{
double m00_fabs(d00_fabs0,pInst->Ib3)
double m00_pow(d00_pow1,d00_fabs0,pModel->AF)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->Ib3)
double m10_pow(d10_pow1,d00_pow1,d00_fabs0,pModel->AF)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1)V(b2:e1) ddxprobe= */
powerRBC1f_Vdt_GND=(pInst->KF_M*(d10_pow1*Ib3_Vdt_GND*d10_fabs0));
powerRBC1f_Vb1_b2=(pInst->KF_M*(d10_pow1*Ib3_Vb1_b2*d10_fabs0));
powerRBC1f_Vb2_c2=(pInst->KF_M*(d10_pow1*Ib3_Vb2_c2*d10_fabs0));
powerRBC1f_Vc1_c2=(pInst->KF_M*(d10_pow1*Ib3_Vc1_c2*d10_fabs0));
powerRBC1f_Vc4_c1=(pInst->KF_M*(d10_pow1*Ib3_Vc4_c1*d10_fabs0));
powerRBC1f_Vb2_e1=(pInst->KF_M*(d10_pow1*Ib3_Vb2_e1*d10_fabs0));
#endif
powerRBC1f=(pInst->KF_M*d00_pow1);
EXIT_IF_ISNAN((pInst->KF_M*d00_pow1))
}
{
double m00_fabs(d00_fabs0,pInst->Iex)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->Iex)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
powerExCS_Vdt_GND=((2.0*1.6021918e-19)*Iex_Vdt_GND*d10_fabs0);
powerExCS_Vb1_b2=((2.0*1.6021918e-19)*Iex_Vb1_b2*d10_fabs0);
powerExCS_Vb2_c2=((2.0*1.6021918e-19)*Iex_Vb2_c2*d10_fabs0);
powerExCS_Vc1_c2=((2.0*1.6021918e-19)*Iex_Vc1_c2*d10_fabs0);
powerExCS_Vc4_c1=((2.0*1.6021918e-19)*Iex_Vc4_c1*d10_fabs0);
#endif
powerExCS=((2.0*1.6021918e-19)*d00_fabs0);
EXIT_IF_ISNAN(((2.0*1.6021918e-19)*d00_fabs0))
}
{
double m00_fabs(d00_fabs0,pInst->Iex)
double m00_pow(d00_pow1,(d00_fabs0/(1-(pModel->EXMOD*pModel->XEXT))),pModel->AF)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->Iex)
double m10_pow(d10_pow1,d00_pow1,(d00_fabs0/(1-(pModel->EXMOD*pModel->XEXT))),pModel->AF)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
powerExC1f_Vdt_GND=((pInst->KF_M*(1-(pModel->EXMOD*pModel->XEXT)))*(d10_pow1*(Iex_Vdt_GND*d10_fabs0/(1-(pModel->EXMOD*pModel->XEXT)))));
powerExC1f_Vb1_b2=((pInst->KF_M*(1-(pModel->EXMOD*pModel->XEXT)))*(d10_pow1*(Iex_Vb1_b2*d10_fabs0/(1-(pModel->EXMOD*pModel->XEXT)))));
powerExC1f_Vb2_c2=((pInst->KF_M*(1-(pModel->EXMOD*pModel->XEXT)))*(d10_pow1*(Iex_Vb2_c2*d10_fabs0/(1-(pModel->EXMOD*pModel->XEXT)))));
powerExC1f_Vc1_c2=((pInst->KF_M*(1-(pModel->EXMOD*pModel->XEXT)))*(d10_pow1*(Iex_Vc1_c2*d10_fabs0/(1-(pModel->EXMOD*pModel->XEXT)))));
powerExC1f_Vc4_c1=((pInst->KF_M*(1-(pModel->EXMOD*pModel->XEXT)))*(d10_pow1*(Iex_Vc4_c1*d10_fabs0/(1-(pModel->EXMOD*pModel->XEXT)))));
#endif
powerExC1f=((pInst->KF_M*(1-(pModel->EXMOD*pModel->XEXT)))*d00_pow1);
EXIT_IF_ISNAN(((pInst->KF_M*(1-(pModel->EXMOD*pModel->XEXT)))*d00_pow1))
}
{
double m00_fabs(d00_fabs0,pInst->XIex)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->XIex)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
powerExCSMOD_Vdt_GND=((2.0*1.6021918e-19)*XIex_Vdt_GND*d10_fabs0)*pModel->EXMOD;
powerExCSMOD_Vb_c=((2.0*1.6021918e-19)*XIex_Vb_c*d10_fabs0)*pModel->EXMOD;
powerExCSMOD_Vb_b1=((2.0*1.6021918e-19)*XIex_Vb_b1*d10_fabs0)*pModel->EXMOD;
powerExCSMOD_Vb1_b2=((2.0*1.6021918e-19)*XIex_Vb1_b2*d10_fabs0)*pModel->EXMOD;
powerExCSMOD_Vc4_c1=((2.0*1.6021918e-19)*XIex_Vc4_c1*d10_fabs0)*pModel->EXMOD;
powerExCSMOD_Vc3_c1=((2.0*1.6021918e-19)*XIex_Vc3_c1*d10_fabs0)*pModel->EXMOD;
powerExCSMOD_Vc3_c4=((2.0*1.6021918e-19)*XIex_Vc3_c4*d10_fabs0)*pModel->EXMOD;
powerExCSMOD_Vb2_e1=((2.0*1.6021918e-19)*XIex_Vb2_e1*d10_fabs0)*pModel->EXMOD;
powerExCSMOD_Vb2_c2=((2.0*1.6021918e-19)*XIex_Vb2_c2*d10_fabs0)*pModel->EXMOD;
powerExCSMOD_Vb2_c1=((2.0*1.6021918e-19)*XIex_Vb2_c1*d10_fabs0)*pModel->EXMOD;
powerExCSMOD_Vc1_c2=((2.0*1.6021918e-19)*XIex_Vc1_c2*d10_fabs0)*pModel->EXMOD;
#endif
powerExCSMOD=(((2.0*1.6021918e-19)*d00_fabs0)*pModel->EXMOD);
EXIT_IF_ISNAN((((2.0*1.6021918e-19)*d00_fabs0)*pModel->EXMOD))
}
if
((pModel->XEXT==0.0))
{
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
powerExC1fMOD_Vdt_GND=0.0;
powerExC1fMOD_Vb_c=0.0;
powerExC1fMOD_Vb_b1=0.0;
powerExC1fMOD_Vb1_b2=0.0;
powerExC1fMOD_Vc4_c1=0.0;
powerExC1fMOD_Vc3_c1=0.0;
powerExC1fMOD_Vc3_c4=0.0;
powerExC1fMOD_Vb2_e1=0.0;
powerExC1fMOD_Vb2_c2=0.0;
powerExC1fMOD_Vb2_c1=0.0;
powerExC1fMOD_Vc1_c2=0.0;
#endif
powerExC1fMOD=0.0;
EXIT_IF_ISNAN(0.0)
}
else
{
{
double m00_fabs(d00_fabs0,pInst->XIex)
double m00_pow(d00_pow1,(d00_fabs0/pModel->XEXT),pModel->AF)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->XIex)
double m10_pow(d10_pow1,d00_pow1,(d00_fabs0/pModel->XEXT),pModel->AF)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
powerExC1fMOD_Vdt_GND=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*(d10_pow1*(XIex_Vdt_GND*d10_fabs0/pModel->XEXT)));
powerExC1fMOD_Vb_c=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*(d10_pow1*(XIex_Vb_c*d10_fabs0/pModel->XEXT)));
powerExC1fMOD_Vb_b1=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*(d10_pow1*(XIex_Vb_b1*d10_fabs0/pModel->XEXT)));
powerExC1fMOD_Vb1_b2=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*(d10_pow1*(XIex_Vb1_b2*d10_fabs0/pModel->XEXT)));
powerExC1fMOD_Vc4_c1=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*(d10_pow1*(XIex_Vc4_c1*d10_fabs0/pModel->XEXT)));
powerExC1fMOD_Vc3_c1=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*(d10_pow1*(XIex_Vc3_c1*d10_fabs0/pModel->XEXT)));
powerExC1fMOD_Vc3_c4=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*(d10_pow1*(XIex_Vc3_c4*d10_fabs0/pModel->XEXT)));
powerExC1fMOD_Vb2_e1=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*(d10_pow1*(XIex_Vb2_e1*d10_fabs0/pModel->XEXT)));
powerExC1fMOD_Vb2_c2=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*(d10_pow1*(XIex_Vb2_c2*d10_fabs0/pModel->XEXT)));
powerExC1fMOD_Vb2_c1=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*(d10_pow1*(XIex_Vb2_c1*d10_fabs0/pModel->XEXT)));
powerExC1fMOD_Vc1_c2=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*(d10_pow1*(XIex_Vc1_c2*d10_fabs0/pModel->XEXT)));
#endif
powerExC1fMOD=(((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*d00_pow1);
EXIT_IF_ISNAN((((pInst->KF_M*pModel->EXMOD)*pModel->XEXT)*d00_pow1))
}
}
{
double m00_fabs(d00_fabs0,pInst->Isub)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->Isub)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b1:b2)V(b2:c2)V(c1:c2)V(c4:c1) ddxprobe= */
powerSubsCS_B1S_Vdt_GND=((2.0*1.6021918e-19)*Isub_Vdt_GND*d10_fabs0);
powerSubsCS_B1S_Vb1_b2=((2.0*1.6021918e-19)*Isub_Vb1_b2*d10_fabs0);
powerSubsCS_B1S_Vb2_c2=((2.0*1.6021918e-19)*Isub_Vb2_c2*d10_fabs0);
powerSubsCS_B1S_Vc1_c2=((2.0*1.6021918e-19)*Isub_Vc1_c2*d10_fabs0);
powerSubsCS_B1S_Vc4_c1=((2.0*1.6021918e-19)*Isub_Vc4_c1*d10_fabs0);
#endif
powerSubsCS_B1S=((2.0*1.6021918e-19)*d00_fabs0);
EXIT_IF_ISNAN(((2.0*1.6021918e-19)*d00_fabs0))
}
{
double m00_fabs(d00_fabs0,pInst->XIsub)
#if defined(_DERIVATE)
double m10_fabs(d10_fabs0,d00_fabs0,pInst->XIsub)
#endif
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b:c)V(b:b1)V(b1:b2)V(c4:c1)V(c3:c1)V(c3:c4)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
powerSubsCS_BS_Vdt_GND=((2.0*1.6021918e-19)*XIsub_Vdt_GND*d10_fabs0);
powerSubsCS_BS_Vb_c=((2.0*1.6021918e-19)*XIsub_Vb_c*d10_fabs0);
powerSubsCS_BS_Vb_b1=((2.0*1.6021918e-19)*XIsub_Vb_b1*d10_fabs0);
powerSubsCS_BS_Vb1_b2=((2.0*1.6021918e-19)*XIsub_Vb1_b2*d10_fabs0);
powerSubsCS_BS_Vc4_c1=((2.0*1.6021918e-19)*XIsub_Vc4_c1*d10_fabs0);
powerSubsCS_BS_Vc3_c1=((2.0*1.6021918e-19)*XIsub_Vc3_c1*d10_fabs0);
powerSubsCS_BS_Vc3_c4=((2.0*1.6021918e-19)*XIsub_Vc3_c4*d10_fabs0);
powerSubsCS_BS_Vb2_e1=((2.0*1.6021918e-19)*XIsub_Vb2_e1*d10_fabs0);
powerSubsCS_BS_Vb2_c2=((2.0*1.6021918e-19)*XIsub_Vb2_c2*d10_fabs0);
powerSubsCS_BS_Vb2_c1=((2.0*1.6021918e-19)*XIsub_Vb2_c1*d10_fabs0);
powerSubsCS_BS_Vc1_c2=((2.0*1.6021918e-19)*XIsub_Vc1_c2*d10_fabs0);
#endif
powerSubsCS_BS=((2.0*1.6021918e-19)*d00_fabs0);
EXIT_IF_ISNAN(((2.0*1.6021918e-19)*d00_fabs0))
}
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:c1)V(b2:c2)V(c1:c2)V(b2:e1) ddxprobe= */
twoqIavl_Vdt_GND=(((pModel->KAVL*Gem_Vdt_GND)*powerCCS)+((pModel->KAVL*pInst->Gem)*powerCCS_Vdt_GND));
twoqIavl_Vb2_c1=(((pModel->KAVL*Gem_Vb2_c1)*powerCCS)+((pModel->KAVL*pInst->Gem)*powerCCS_Vb2_c1));
twoqIavl_Vb2_c2=(((pModel->KAVL*Gem_Vb2_c2)*powerCCS)+((pModel->KAVL*pInst->Gem)*powerCCS_Vb2_c2));
twoqIavl_Vc1_c2=(((pModel->KAVL*Gem_Vc1_c2)*powerCCS)+((pModel->KAVL*pInst->Gem)*powerCCS_Vc1_c2));
twoqIavl_Vb2_e1=((pModel->KAVL*pInst->Gem)*powerCCS_Vb2_e1);
#endif
twoqIavl=((pModel->KAVL*pInst->Gem)*powerCCS);
EXIT_IF_ISNAN(((pModel->KAVL*pInst->Gem)*powerCCS))
#if defined(_DERIVATE) /* probe=V(dt:GND)V(b2:e1)V(b2:c2)V(b2:c1)V(c1:c2) ddxprobe= */
powerCCS_A_Vdt_GND=(powerCCS_Vdt_GND+((twoqIavl_Vdt_GND*((3.0+(2.0*pInst->Gem))-(((2.0+(2.0*pInst->Gem))*(2.0+(2.0*pInst->Gem)))/(1.0+(2.0*pInst->Gem)))))+(twoqIavl*((2.0*Gem_Vdt_GND)-(((((2.0*Gem_Vdt_GND)*(2.0+(2.0*pInst->Gem)))+((2.0+(2.0*pInst->Gem))*(2.0*Gem_Vdt_GND)))*(1.0+(2.0*pInst->Gem))-((2.0+(2.0*pInst->Gem))*(2.0+(2.0*pInst->Gem)))*(2.0*Gem_Vdt_GND))/(1.0+(2.0*pInst->Gem))/(1.0+(2.0*pInst->Gem)))))));
powerCCS_A_Vb2_e1=(powerCCS_Vb2_e1+twoqIavl_Vb2_e1*((3.0+(2.0*pInst->Gem))-(((2.0+(2.0*pInst->Gem))*(2.0+(2.0*pInst->Gem)))/(1.0+(2.0*pInst->Gem)))));
powerCCS_A_Vb2_c2=(powerCCS_Vb2_c2+((twoqIavl_Vb2_c2*((3.0+(2.0*pInst->Gem))-(((2.0+(2.0*pInst->Gem))*(2.0+(2.0*pInst->Gem)))/(1.0+(2.0*pInst->Gem)))))+(twoqIavl*((2.0*Gem_Vb2_c2)-(((((2.0*Gem_Vb2_c2)*(2.0+(2.0*pInst->Gem)))+((2.0+(2.0*pInst->Gem))*(2.0*Gem_Vb2_c2)))*(1.0+(2.0*pInst->Gem))-((2.0+(2.0*pInst->Gem))*(2.0+(2.0*pInst->Gem)))*(2.0*Gem_Vb2_c2))/(1.0+(2.0*pInst->Gem))/(1.0+(2.0*pInst->Gem)))))));
powerCCS_A_Vb2_c1=(powerCCS_Vb2_c1+((twoqIavl_Vb2_c1*((3.0+(2.0*pInst->Gem))-(((2.0+(2.0*pInst->Gem))*(2.0+(2.0*pInst->Gem)))/(1.0+(2.0*pInst->Gem)))))+(twoqIavl*((2.0*Gem_Vb2_c1)-(((((2.0*Gem_Vb2_c1)*(2.0+(2.0*pInst->Gem)))+((2.0+(2.0*pInst->Gem))*(2.0*Gem_Vb2_c1)))*(1.0+(2.0*pInst->Gem))-((2.0+(2.0*pInst->Gem))*(2.0+(2.0*pInst->Gem)))*(2.0*Gem_Vb2_c1))/(1.0+(2.0*pInst->Gem))/(1.0+(2.0*pInst->Gem)))))));
powerCCS_A_Vc1_c2=(powerCCS_Vc1_c2+((twoqIavl_Vc1_c2*((3.0+(2.0*pInst->Gem))-(((2.0+(2.0*pInst->Gem))*(2.0+(2.0*pInst->Gem)))/(1.0+(2.0*pInst->Gem)))))+(twoqIavl*((2.0*Gem_Vc1_c2)-(((((2.0*Gem_Vc1_c2)*(2.0+(2.0*pInst->Gem)))+((2.0+(2.0*pInst->Gem))*(2.0*Gem_Vc1_c2)))*(1.0+(2.0*pInst->Gem))-((2.0+(2.0*pInst->Gem))*(2.0+(2.0*pInst->Gem)))*(2.0*Gem_Vc1_c2))/(1.0+(2.0*pInst->Gem))/(1.0+(2.0*pInst->Gem)))))));
#endif
powerCCS_A=(powerCCS+(twoqIavl*((3.0+(2.0*pInst->Gem))-(((2.0+(2.0*pInst->Gem))*(2.0+(2.0*pInst->Gem)))/(1.0+(2.0*pInst->Gem))))));
EXIT_IF_ISNAN((powerCCS+(twoqIavl*((3.0+(2.0*pInst->Gem))-(((2.0+(2.0*pInst->Gem))*(2.0+(2.0*pInst->Gem)))/(1.0+(2.0*pInst->Gem)))))))
pInst->wnoise19=powerREC;
pInst->wnoise18=powerRBC;
pInst->wnoise17=powerRBV;
pInst->wnoise16=twoqIavl;
pInst->wnoise15=powerCCS_A;
pInst->wnoise14=powerFBCS;
pInst->fpnoise5=powerFBC1fB1;
pInst->fenoise5=1;
pInst->fpnoise4=powerFBC1fB2;
pInst->fenoise4=1;
pInst->wnoise13=powerEBSCS;
pInst->fpnoise3=powerEBSC1f;
pInst->fenoise3=1;
pInst->wnoise12=powerRBCS;
pInst->fpnoise2=powerRBC1f;
pInst->fenoise2=1;
pInst->wnoise11=powerExCS;
pInst->fpnoise1=powerExC1f;
pInst->fenoise1=1;
pInst->wnoise10=powerExCSMOD;
pInst->fpnoise0=powerExC1fMOD;
pInst->fenoise0=1;
pInst->wnoise9=powerSubsCS_B1S;
pInst->wnoise8=powerSubsCS_BS;
if
((pModel->RCBLX>0.0))
{
if
((pModel->RCBLI>0.0))
{
pInst->wnoise7=powerRCCxx;
pInst->wnoise6=powerRCCex;
pInst->wnoise5=powerRCCin;
}
else
{
pInst->wnoise4=powerRCCxx;
pInst->wnoise3=powerRCCex;
}
}
else
{
if
((pModel->RCBLI>0.0))
{
pInst->wnoise2=powerRCCxx;
pInst->wnoise1=powerRCCin;
}
else
{
pInst->wnoise0=powerRCCxx;
}
}
}
{
}
