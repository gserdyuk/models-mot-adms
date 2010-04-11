

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
pInst->wnoise0=0.0;
pInst->wnoise1=0.0;
pInst->wnoise2=0.0;
pInst->wnoise3=0.0;
pInst->wnoise4=0.0;
double flicker_Pwr;
#if defined(_DERIVATE)
double flicker_Pwr_Vtnode_GND;
double flicker_Pwr_Vbi_ei;
#endif
double twoq;
double fourkt;
#if defined(_DERIVATE)
double fourkt_Vtnode_GND;
#endif
#if defined(_DYNAMIC)
double Qbiei;
#if defined(_DERIVATE)
double Qbiei_Vtnode_GND;
double Qbiei_Vbi_ei;
double Qbiei_Vbi_ci;
double Qbiei_Vb_ci;
double Qbiei_Vci_ei;
#endif
#endif
#if defined(_DYNAMIC)
double Qbici;
#if defined(_DERIVATE)
double Qbici_Vbi_ci;
double Qbici_Vtnode_GND;
double Qbici_Vb_ci;
double Qbici_Vbi_ei;
double Qbici_Vci_ei;
#endif
#endif
#if defined(_DYNAMIC)
double Qbe;
#if defined(_DERIVATE)
double Qbe_Vb_e;
#endif
#endif
#if defined(_DYNAMIC)
double Qbci;
#if defined(_DERIVATE)
double Qbci_Vb_ci;
#endif
#endif
#if defined(_DERIVATE)
double Ibici_Vtnode_GND;
double Ibici_Vbi_ci;
double Ibici_Vbi_ei;
double Ibici_Vb_ci;
double Ibici_Vci_ei;
#endif
double pterm;
#if defined(_DERIVATE)
double pterm_Vci_c;
double pterm_Vei_e;
double pterm_Vb_bi;
double pterm_Vs_ci;
double pterm_Vtnode_GND;
double pterm_Vbi_ei;
double pterm_Vbi_ci;
double pterm_Vb_ci;
double pterm_Vci_ei;
#endif
#if defined(_DYNAMIC)
double qjs;
#if defined(_DERIVATE)
double qjs_Vci_ei;
double qjs_Vbi_ei;
double qjs_Vs_ci;
double qjs_Vbi_ci;
double qjs_Vtnode_GND;
double qjs_Vb_ci;
#endif
#endif
#if defined(_DERIVATE)
double ijsc_Vtnode_GND;
double ijsc_Vs_ci;
double ijsc_Vbi_ci;
double ijsc_Vbi_ei;
#endif
double HSI_Tsu;
#if defined(_DERIVATE)
double HSI_Tsu_Vtnode_GND;
double HSI_Tsu_Vb_ci;
double HSI_Tsu_Vs_ci;
#endif
double HSb;
#if defined(_DERIVATE)
double HSb_Vs_ci;
double HSb_Vtnode_GND;
#endif
double HSa;
#if defined(_DERIVATE)
double HSa_Vb_ci;
double HSa_Vtnode_GND;
#endif
double HSUM;
#if defined(_DERIVATE)
double HSUM_Vtnode_GND;
#endif
double rb;
#if defined(_DERIVATE)
double rb_Vtnode_GND;
double rb_Vbi_ei;
double rb_Vbi_ci;
double rb_Vb_ci;
double rb_Vci_ei;
#endif
double eta;
#if defined(_DERIVATE)
double eta_Vtnode_GND;
double eta_Vbi_ei;
double eta_Vbi_ci;
double eta_Vb_ci;
double eta_Vci_ei;
#endif
double rbi;
#if defined(_DERIVATE)
double rbi_Vtnode_GND;
double rbi_Vbi_ei;
double rbi_Vbi_ci;
double rbi_Vb_ci;
double rbi_Vci_ei;
#endif
double fQz;
#if defined(_DERIVATE)
double fQz_Vtnode_GND;
double fQz_Vbi_ei;
double fQz_Vbi_ci;
double fQz_Vb_ci;
double fQz_Vci_ei;
#endif
double Qz_nom;
#if defined(_DERIVATE)
double Qz_nom_Vtnode_GND;
double Qz_nom_Vbi_ei;
double Qz_nom_Vbi_ci;
double Qz_nom_Vb_ci;
double Qz_nom_Vci_ei;
#endif
double qje;
#if defined(_DERIVATE)
double qje_Vtnode_GND;
double qje_Vbi_ei;
double qje_Vbi_ci;
double qje_Vb_ci;
#endif
double lncc;
#if defined(_DERIVATE)
double lncc_Vtnode_GND;
double lncc_Vbi_ci;
double lncc_Vb_ci;
#endif
#if defined(_DERIVATE)
double iavl_Vtnode_GND;
double iavl_Vbi_ei;
double iavl_Vbi_ci;
double iavl_Vb_ci;
double iavl_Vci_ei;
#endif
double a_iavl;
#if defined(_DERIVATE)
double a_iavl_Vtnode_GND;
double a_iavl_Vbi_ci;
double a_iavl_Vb_ci;
#endif
double v_bord;
#if defined(_DERIVATE)
double v_bord_Vtnode_GND;
#endif
double ibi;
#if defined(_DERIVATE)
double ibi_Vtnode_GND;
double ibi_Vbi_ei;
double ibi_Vbi_ci;
#endif
#if defined(_DERIVATE)
double ijbc_Vtnode_GND;
double ijbc_Vbi_ci;
double ijbc_Vbi_ei;
#endif
#if defined(_DERIVATE)
double ijbe_Vtnode_GND;
double ijbe_Vbi_ei;
#endif
double ire;
#if defined(_DERIVATE)
double ire_Vtnode_GND;
double ire_Vbi_ei;
#endif
double ibe;
#if defined(_DERIVATE)
double ibe_Vtnode_GND;
double ibe_Vbi_ei;
#endif
double le;
#if defined(_DERIVATE)
double le_Vs_ci;
double le_Vbi_ci;
double le_Vbi_ei;
double le_Vtnode_GND;
#endif
double DIOY;
#if defined(_DERIVATE)
double DIOY_Vs_ci;
double DIOY_Vbi_ci;
double DIOY_Vbi_ei;
double DIOY_Vtnode_GND;
#endif
#if defined(_DYNAMIC)
double qr;
#if defined(_DERIVATE)
double qr_Vtnode_GND;
double qr_Vbi_ci;
double qr_Vb_ci;
double qr_Vbi_ei;
double qr_Vci_ei;
#endif
#endif
double tf;
#if defined(_DYNAMIC)
double qf;
#if defined(_DERIVATE)
double qf_Vtnode_GND;
double qf_Vbi_ci;
double qf_Vb_ci;
double qf_Vbi_ei;
double qf_Vci_ei;
#endif
#endif
#if defined(_DYNAMIC)
double dqef;
#if defined(_DERIVATE)
double dqef_Vtnode_GND;
double dqef_Vbi_ei;
double dqef_Vbi_ci;
double dqef_Vb_ci;
double dqef_Vci_ei;
#endif
#endif
#if defined(_DYNAMIC)
double dtef;
#if defined(_DERIVATE)
double dtef_Vtnode_GND;
double dtef_Vbi_ei;
double dtef_Vbi_ci;
double dtef_Vb_ci;
double dtef_Vci_ei;
#endif
#endif
double dtfh;
#if defined(_DYNAMIC)
double dqfh;
#if defined(_DERIVATE)
double dqfh_Vtnode_GND;
double dqfh_Vci_ei;
double dqfh_Vbi_ei;
double dqfh_Vbi_ci;
double dqfh_Vb_ci;
#endif
#endif
#if defined(_DYNAMIC)
double tww;
#if defined(_DERIVATE)
double tww_Vtnode_GND;
double tww_Vci_ei;
double tww_Vbi_ei;
double tww_Vbi_ci;
double tww_Vb_ci;
#endif
#endif
#if defined(_DYNAMIC)
double w;
#if defined(_DERIVATE)
double w_Vci_ei;
double w_Vbi_ei;
double w_Vbi_ci;
double w_Vb_ci;
double w_Vtnode_GND;
#endif
#endif
#if defined(_DYNAMIC)
double s3;
#if defined(_DERIVATE)
double s3_Vci_ei;
double s3_Vbi_ei;
double s3_Vbi_ci;
double s3_Vb_ci;
double s3_Vtnode_GND;
#endif
#endif
#if defined(_DYNAMIC)
double qf0;
#if defined(_DERIVATE)
double qf0_Vtnode_GND;
double qf0_Vbi_ci;
double qf0_Vb_ci;
double qf0_Vbi_ei;
double qf0_Vci_ei;
#endif
#endif
#if defined(_DERIVATE)
double it_Vtnode_GND;
double it_Vbi_ei;
double it_Vbi_ci;
double it_Vb_ci;
double it_Vci_ei;
#endif
double itr;
#if defined(_DERIVATE)
double itr_Vtnode_GND;
double itr_Vbi_ci;
double itr_Vb_ci;
double itr_Vbi_ei;
double itr_Vci_ei;
#endif
double itf;
#if defined(_DERIVATE)
double itf_Vtnode_GND;
double itf_Vbi_ei;
double itf_Vbi_ci;
double itf_Vb_ci;
double itf_Vci_ei;
#endif
double facl;
#if defined(_DERIVATE)
double facl_Vtnode_GND;
double facl_Vci_ei;
double facl_Vbi_ei;
double facl_Vbi_ci;
double facl_Vb_ci;
#endif
double d_qfh;
#if defined(_DERIVATE)
double d_qfh_Vtnode_GND;
double d_qfh_Vci_ei;
double d_qfh_Vbi_ei;
double d_qfh_Vbi_ci;
double d_qfh_Vb_ci;
#endif
double wl;
#if defined(_DERIVATE)
double wl_Vtnode_GND;
double wl_Vci_ei;
double wl_Vbi_ei;
double wl_Vbi_ci;
double wl_Vb_ci;
#endif
double s3l;
#if defined(_DERIVATE)
double s3l_Vtnode_GND;
double s3l_Vci_ei;
double s3l_Vbi_ei;
double s3l_Vbi_ci;
double s3l_Vb_ci;
#endif
double al;
#if defined(_DERIVATE)
double al_Vtnode_GND;
double al_Vci_ei;
double al_Vbi_ei;
double al_Vbi_ci;
double al_Vb_ci;
#endif
double itrl;
#if defined(_DERIVATE)
double itrl_Vtnode_GND;
double itrl_Vbi_ci;
double itrl_Vb_ci;
double itrl_Vbi_ei;
#endif
double itfl;
#if defined(_DERIVATE)
double itfl_Vtnode_GND;
double itfl_Vbi_ei;
double itfl_Vbi_ci;
double itfl_Vb_ci;
#endif
double qpt;
#if defined(_DERIVATE)
double qpt_Vbi_ci;
double qpt_Vtnode_GND;
double qpt_Vb_ci;
double qpt_Vbi_ei;
#endif
double qm;
#if defined(_DERIVATE)
double qm_Vtnode_GND;
double qm_Vbi_ei;
double qm_Vbi_ci;
#endif
double itri;
#if defined(_DERIVATE)
double itri_Vtnode_GND;
double itri_Vbi_ci;
#endif
double le2;
#if defined(_DERIVATE)
double le2_Vbi_ci;
double le2_Vtnode_GND;
#endif
double arg2;
#if defined(_DERIVATE)
double arg2_Vbi_ci;
double arg2_Vtnode_GND;
#endif
double itfi;
#if defined(_DERIVATE)
double itfi_Vtnode_GND;
double itfi_Vbi_ei;
#endif
double le1;
#if defined(_DERIVATE)
double le1_Vbi_ei;
double le1_Vtnode_GND;
#endif
double arg1;
#if defined(_DERIVATE)
double arg1_Vbi_ei;
double arg1_Vtnode_GND;
#endif
double ickr;
double ickf;
#if defined(_DYNAMIC)
double tf0;
#if defined(_DERIVATE)
double tf0_Vtnode_GND;
double tf0_Vbi_ci;
double tf0_Vb_ci;
#endif
#endif
double qj_2;
#if defined(_DERIVATE)
double qj_2_Vbi_ci;
double qj_2_Vtnode_GND;
double qj_2_Vb_ci;
#endif
double cc;
#if defined(_DERIVATE)
double cc_Vtnode_GND;
double cc_Vbi_ci;
double cc_Vb_ci;
#endif
double ick;
#if defined(_DERIVATE)
double ick_Vtnode_GND;
double ick_Vci_ei;
#endif
double vceff;
#if defined(_DERIVATE)
double vceff_Vtnode_GND;
double vceff_Vci_ei;
#endif
double uvc;
#if defined(_DERIVATE)
double uvc_Vci_ei;
double uvc_Vtnode_GND;
#endif
double vc;
#if defined(_DERIVATE)
double vc_Vci_ei;
double vc_Vtnode_GND;
#endif
double cjei;
#if defined(_DERIVATEFORDDX)
double qjei_Vtnode_GND;
double qjei_Vbi_ei;
double qjei_Vbi_ci;
double qjei_Vb_ci;
#if defined(_DERIVATE2)
  double qjei_Vbi_ci_Vtnode_GND;
  double qjei_Vbi_ci_Vbi_ei;
  double qjei_Vbi_ci_Vbi_ci;
  double qjei_Vbi_ci_Vb_ci;
  double qjei_Vbi_ei_Vtnode_GND;
  double qjei_Vbi_ei_Vbi_ei;
  double qjei_Vbi_ei_Vbi_ci;
  double qjei_Vbi_ei_Vb_ci;
#endif
#endif
double cjcii;
#if defined(_DERIVATE)
double cjcii_Vtnode_GND;
double cjcii_Vbi_ci;
double cjcii_Vb_ci;
#endif
double dvj;
#if defined(_DERIVATE)
double dvj_Vbi_ci;
double dvj_Vtnode_GND;
double dvj_Vb_ci;
#endif
#if defined(_DYNAMIC)
double qjcii;
#if defined(_DERIVATE)
double qjcii_Vbi_ci;
double qjcii_Vtnode_GND;
double qjcii_Vb_ci;
#endif
#endif
#if defined(_DERIVATE)
double qjci_Vbi_ci;
double qjci_Vtnode_GND;
double qjci_Vb_ci;
#endif
double cjcx0_t_ii;
#if defined(_DERIVATE)
double cjcx0_t_ii_Vtnode_GND;
#endif
double y;
#if defined(_DERIVATEFORDDX)
double y_Vci_ei;
double y_Vs_ci;
double y_Vbi_ei;
double y_Vbi_ci;
double y_Vtnode_GND;
double y_Vb_ci;
#if defined(_DERIVATE2)
  double y_Vbi_ci_Vci_ei;
  double y_Vbi_ci_Vs_ci;
  double y_Vbi_ci_Vbi_ei;
  double y_Vbi_ci_Vbi_ci;
  double y_Vbi_ci_Vtnode_GND;
  double y_Vbi_ci_Vb_ci;
  double y_Vbi_ei_Vci_ei;
  double y_Vbi_ei_Vs_ci;
  double y_Vbi_ei_Vbi_ei;
  double y_Vbi_ei_Vbi_ci;
  double y_Vbi_ei_Vtnode_GND;
  double y_Vbi_ei_Vb_ci;
#endif
#endif
double x;
#if defined(_DERIVATE)
double x_Vtnode_GND;
double x_Vci_ei;
#endif
double v_j;
#if defined(_DERIVATEFORDDX)
double v_j_Vs_ci;
double v_j_Vbi_ei;
double v_j_Vbi_ci;
double v_j_Vtnode_GND;
double v_j_Vb_ci;
#if defined(_DERIVATE2)
  double v_j_Vbi_ci_Vs_ci;
  double v_j_Vbi_ci_Vbi_ei;
  double v_j_Vbi_ci_Vbi_ci;
  double v_j_Vbi_ci_Vtnode_GND;
  double v_j_Vbi_ci_Vb_ci;
  double v_j_Vbi_ei_Vs_ci;
  double v_j_Vbi_ei_Vbi_ei;
  double v_j_Vbi_ei_Vbi_ci;
  double v_j_Vbi_ei_Vtnode_GND;
  double v_j_Vbi_ei_Vb_ci;
#endif
#endif
double xvf2;
#if defined(_DERIVATEFORDDX)
double xvf2_Vs_ci;
double xvf2_Vbi_ei;
double xvf2_Vbi_ci;
double xvf2_Vtnode_GND;
double xvf2_Vb_ci;
#if defined(_DERIVATE2)
  double xvf2_Vbi_ci_Vs_ci;
  double xvf2_Vbi_ci_Vbi_ei;
  double xvf2_Vbi_ci_Vbi_ci;
  double xvf2_Vbi_ci_Vtnode_GND;
  double xvf2_Vbi_ci_Vb_ci;
  double xvf2_Vbi_ei_Vs_ci;
  double xvf2_Vbi_ei_Vbi_ei;
  double xvf2_Vbi_ei_Vbi_ci;
  double xvf2_Vbi_ei_Vtnode_GND;
  double xvf2_Vbi_ei_Vb_ci;
#endif
#endif
double xvf;
#if defined(_DERIVATEFORDDX)
double xvf_Vs_ci;
double xvf_Vbi_ei;
double xvf_Vbi_ci;
double xvf_Vtnode_GND;
double xvf_Vb_ci;
#if defined(_DERIVATE2)
  double xvf_Vbi_ci_Vs_ci;
  double xvf_Vbi_ci_Vbi_ei;
  double xvf_Vbi_ci_Vbi_ci;
  double xvf_Vbi_ci_Vtnode_GND;
  double xvf_Vbi_ci_Vb_ci;
  double xvf_Vbi_ei_Vs_ci;
  double xvf_Vbi_ei_Vbi_ei;
  double xvf_Vbi_ei_Vbi_ci;
  double xvf_Vbi_ei_Vtnode_GND;
  double xvf_Vbi_ei_Vb_ci;
#endif
#endif
#if defined(_DYNAMIC)
double qjcx;
#if defined(_DERIVATE)
double qjcx_Vbi_ci;
double qjcx_Vtnode_GND;
double qjcx_Vb_ci;
#endif
#endif
double qj3;
#if defined(_DERIVATE)
double qj3_Vci_ei;
double qj3_Vbi_ei;
double qj3_Vs_ci;
double qj3_Vbi_ci;
double qj3_Vtnode_GND;
double qj3_Vb_ci;
#endif
double qj2;
#if defined(_DERIVATE)
double qj2_Vci_ei;
double qj2_Vbi_ei;
double qj2_Vs_ci;
double qj2_Vbi_ci;
double qj2_Vtnode_GND;
double qj2_Vb_ci;
#endif
double qj1;
#if defined(_DERIVATE)
double qj1_Vci_ei;
double qj1_Vbi_ei;
double qj1_Vs_ci;
double qj1_Vbi_ci;
double qj1_Vtnode_GND;
double qj1_Vb_ci;
#endif
double vdj2;
#if defined(_DERIVATE)
double vdj2_Vci_ei;
double vdj2_Vbi_ei;
double vdj2_Vs_ci;
double vdj2_Vbi_ci;
double vdj2_Vtnode_GND;
double vdj2_Vb_ci;
#endif
double vdj1;
#if defined(_DERIVATE)
double vdj1_Vci_ei;
double vdj1_Vbi_ei;
double vdj1_Vs_ci;
double vdj1_Vbi_ci;
double vdj1_Vtnode_GND;
double vdj1_Vb_ci;
#endif
double ezr;
double ez;
double vj4;
#if defined(_DERIVATE)
double vj4_Vs_ci;
double vj4_Vci_ei;
double vj4_Vbi_ei;
double vj4_Vbi_ci;
double vj4_Vb_ci;
double vj4_Vtnode_GND;
#endif
double vj2;
#if defined(_DERIVATE)
double vj2_Vci_ei;
double vj2_Vbi_ei;
double vj2_Vs_ci;
double vj2_Vbi_ci;
double vj2_Vtnode_GND;
double vj2_Vb_ci;
#endif
double vr;
#if defined(_DERIVATE)
double vr_Vci_ei;
double vr_Vbi_ei;
double vr_Vs_ci;
double vr_Vbi_ci;
double vr_Vtnode_GND;
double vr_Vb_ci;
#endif
double vj1;
#if defined(_DERIVATE)
double vj1_Vci_ei;
double vj1_Vbi_ei;
double vj1_Vs_ci;
double vj1_Vbi_ci;
double vj1_Vtnode_GND;
double vj1_Vb_ci;
#endif
double ee1;
#if defined(_DERIVATE)
double ee1_Vs_ci;
double ee1_Vci_ei;
double ee1_Vbi_ei;
double ee1_Vbi_ci;
double ee1_Vtnode_GND;
double ee1_Vb_ci;
#endif
double ex1;
#if defined(_DERIVATE)
double ex1_Vs_ci;
double ex1_Vci_ei;
double ex1_Vbi_ei;
double ex1_Vbi_ci;
double ex1_Vtnode_GND;
double ex1_Vb_ci;
#endif
double ve;
#if defined(_DERIVATE)
double ve_Vs_ci;
double ve_Vci_ei;
double ve_Vbi_ei;
double ve_Vbi_ci;
double ve_Vtnode_GND;
double ve_Vb_ci;
#endif
double a;
#if defined(_DERIVATE)
double a_Vci_ei;
double a_Vbi_ei;
double a_Vbi_ci;
double a_Vb_ci;
double a_Vtnode_GND;
#endif
double cr;
#if defined(_DERIVATE)
double cr_Vtnode_GND;
#endif
double cmax;
#if defined(_DERIVATE)
double cmax_Vtnode_GND;
#endif
double vf;
#if defined(_DERIVATE)
double vf_Vtnode_GND;
#endif
double vp;
#if defined(_DERIVATE)
double vp_Vtnode_GND;
#endif
double zr;
double cjcx0_t_i;
#if defined(_DERIVATE)
double cjcx0_t_i_Vtnode_GND;
#endif
#if defined(_DYNAMIC)
double qjcxi;
#if defined(_DERIVATE)
double qjcxi_Vbi_ci;
double qjcxi_Vtnode_GND;
double qjcxi_Vb_ci;
#endif
#endif
double cjci0_t_ii;
#if defined(_DERIVATE)
double cjci0_t_ii_Vtnode_GND;
#endif
double kavl_t;
#if defined(_DERIVATE)
double kavl_t_Vtnode_GND;
#endif
double eavl_t;
#if defined(_DERIVATE)
double eavl_t_Vtnode_GND;
#endif
double re_t;
#if defined(_DERIVATE)
double re_t_Vtnode_GND;
#endif
double rbi0_t;
#if defined(_DERIVATE)
double rbi0_t_Vtnode_GND;
#endif
double rcx_t;
#if defined(_DERIVATE)
double rcx_t_Vtnode_GND;
#endif
double rbx_t;
#if defined(_DERIVATE)
double rbx_t_Vtnode_GND;
#endif
#if defined(_DYNAMIC)
double tef0_t;
#if defined(_DERIVATE)
double tef0_t_Vtnode_GND;
#endif
#endif
#if defined(_DYNAMIC)
double dvg;
#endif
#if defined(_DYNAMIC)
double zetatef;
#endif
#if defined(_DYNAMIC)
double thcs_t;
#if defined(_DERIVATE)
double thcs_t_Vtnode_GND;
#endif
#endif
#if defined(_DYNAMIC)
double t0_t;
#if defined(_DERIVATE)
double t0_t_Vtnode_GND;
#endif
#endif
double vces_t;
#if defined(_DERIVATE)
double vces_t_Vtnode_GND;
#endif
double vlim_t;
#if defined(_DERIVATE)
double vlim_t_Vtnode_GND;
#endif
double rci0_t;
#if defined(_DERIVATE)
double rci0_t_Vtnode_GND;
#endif
#if defined(_DYNAMIC)
double cjs0_t;
#if defined(_DERIVATE)
double cjs0_t_Vtnode_GND;
#endif
#endif
#if defined(_DYNAMIC)
double vds_t;
#if defined(_DERIVATE)
double vds_t_Vtnode_GND;
#endif
#endif
double cjcx0_t;
#if defined(_DERIVATE)
double cjcx0_t_Vtnode_GND;
#endif
double vdcx_t;
#if defined(_DERIVATE)
double vdcx_t_Vtnode_GND;
#endif
double cjci0_t;
#if defined(_DERIVATE)
double cjci0_t_Vtnode_GND;
#endif
double vdci_t;
#if defined(_DERIVATE)
double vdci_t_Vtnode_GND;
#endif
double aje_t;
#if defined(_DERIVATE)
double aje_t_Vtnode_GND;
#endif
double cje0_t;
#if defined(_DERIVATE)
double cje0_t_Vtnode_GND;
#endif
double vde_t;
#if defined(_DERIVATE)
double vde_t_Vtnode_GND;
#endif
double vdjt;
#if defined(_DERIVATE)
double vdjt_Vtnode_GND;
#endif
double vdj0;
double arg;
double iscs_t;
#if defined(_DERIVATE)
double iscs_t_Vtnode_GND;
#endif
double itss_t;
#if defined(_DERIVATE)
double itss_t_Vtnode_GND;
#endif
double ibcs_t;
#if defined(_DERIVATE)
double ibcs_t_Vtnode_GND;
#endif
double ires_t;
#if defined(_DERIVATE)
double ires_t_Vtnode_GND;
#endif
double ibes_t;
#if defined(_DERIVATE)
double ibes_t_Vtnode_GND;
#endif
double is_t;
#if defined(_DERIVATE)
double is_t_Vtnode_GND;
#endif
double zetasct;
double zetabci;
double mg;
#if defined(_DYNAMIC)
double vgsc;
#endif
double vgbc;
double vgbe;
double avs;
double k2;
double k1;
double ln_qtt0;
#if defined(_DERIVATE)
double ln_qtt0_Vtnode_GND;
#endif
double qtt0;
#if defined(_DERIVATE)
double qtt0_Vtnode_GND;
#endif
double dT;
#if defined(_DERIVATE)
double dT_Vtnode_GND;
#endif
double VT;
#if defined(_DERIVATE)
double VT_Vtnode_GND;
#endif
double Vt0;
double Tdev;
#if defined(_DERIVATE)
double Tdev_Vtnode_GND;
#endif
double Tamb;
double Tnom;
double Vrth;
#if defined(_DERIVATE)
double Vrth_Vtnode_GND;
#endif
#if defined(_DYNAMIC)
double Vbe;
#if defined(_DERIVATE)
double Vbe_Vb_e;
#endif
#endif
double Vbbi;
#if defined(_DERIVATE)
double Vbbi_Vb_bi;
#endif
double Vcic;
#if defined(_DERIVATE)
double Vcic_Vci_c;
#endif
double Veie;
#if defined(_DERIVATE)
double Veie_Vei_e;
#endif
double Vsci;
#if defined(_DERIVATE)
double Vsci_Vs_ci;
#endif
double Vciei;
#if defined(_DERIVATE)
double Vciei_Vci_ei;
#endif
double Vbiei;
#if defined(_DERIVATEFORDDX)
double Vbiei_Vbi_ei;
#if defined(_DERIVATE2)
  double Vbiei_Vbi_ei_Vbi_ei;
#endif
#endif
double Vbici;
#if defined(_DERIVATEFORDDX)
double Vbici_Vbi_ci;
#if defined(_DERIVATE2)
  double Vbici_Vbi_ci_Vbi_ci;
#endif
#endif
double Vbci;
#if defined(_DERIVATE)
double Vbci_Vb_ci;
#endif
#if defined(_DERIVATE) /* probe=V(b:ci) ddxprobe=V(bi:GND) */
Vbci_Vb_ci=(pModel->HICUMtype);
#endif
Vbci=(pModel->HICUMtype*(NP(b)-NP(ci)));
EXIT_IF_ISNAN((pModel->HICUMtype*(NP(b)-NP(ci))))
#if defined(_DERIVATEFORDDX) /* probe=V(bi:ci) ddxprobe=V(bi:GND) */
Vbici_Vbi_ci=(pModel->HICUMtype);
#if defined(_DERIVATE2)
  Vbici_Vbi_ci_Vbi_ci=(+0.0*(NP(bi)-NP(ci))+0.0*1.0+0.0*1.0+pModel->HICUMtype*0.0);
#endif
#endif
Vbici=(pModel->HICUMtype*(NP(bi)-NP(ci)));
EXIT_IF_ISNAN((pModel->HICUMtype*(NP(bi)-NP(ci))))
#if defined(_DERIVATEFORDDX) /* probe=V(bi:ei) ddxprobe=V(bi:GND) */
Vbiei_Vbi_ei=(pModel->HICUMtype);
#if defined(_DERIVATE2)
  Vbiei_Vbi_ei_Vbi_ei=(+0.0*(NP(bi)-NP(ei))+0.0*1.0+0.0*1.0+pModel->HICUMtype*0.0);
#endif
#endif
Vbiei=(pModel->HICUMtype*(NP(bi)-NP(ei)));
EXIT_IF_ISNAN((pModel->HICUMtype*(NP(bi)-NP(ei))))
#if defined(_DERIVATE) /* probe=V(ci:ei) ddxprobe= */
Vciei_Vci_ei=(pModel->HICUMtype);
#endif
Vciei=(pModel->HICUMtype*(NP(ci)-NP(ei)));
EXIT_IF_ISNAN((pModel->HICUMtype*(NP(ci)-NP(ei))))
#if defined(_DERIVATE) /* probe=V(s:ci) ddxprobe= */
Vsci_Vs_ci=(pModel->HICUMtype);
#endif
Vsci=(pModel->HICUMtype*(NP(s)-NP(ci)));
EXIT_IF_ISNAN((pModel->HICUMtype*(NP(s)-NP(ci))))
#if defined(_DERIVATE) /* probe=V(ei:e) ddxprobe= */
Veie_Vei_e=1.0;
#endif
Veie=(NP(ei)-NP(e));
EXIT_IF_ISNAN((NP(ei)-NP(e)))
#if defined(_DERIVATE) /* probe=V(ci:c) ddxprobe= */
Vcic_Vci_c=1.0;
#endif
Vcic=(NP(ci)-NP(c));
EXIT_IF_ISNAN((NP(ci)-NP(c)))
#if defined(_DERIVATE) /* probe=V(b:bi) ddxprobe= */
Vbbi_Vb_bi=1.0;
#endif
Vbbi=(NP(b)-NP(bi));
EXIT_IF_ISNAN((NP(b)-NP(bi)))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b:e) ddxprobe= */
Vbe_Vb_e=(pModel->HICUMtype);
#endif
Vbe=(pModel->HICUMtype*(NP(b)-NP(e)));
EXIT_IF_ISNAN((pModel->HICUMtype*(NP(b)-NP(e))))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
Vrth_Vtnode_GND=1.0;
#endif
Vrth=NP(tnode);
EXIT_IF_ISNAN(NP(tnode))
Tnom=(pModel->tnom+273.15);
EXIT_IF_ISNAN((pModel->tnom+273.15))
Tamb=mint_get_circuit_tempK();
EXIT_IF_ISNAN(mint_get_circuit_tempK())
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
Tdev_Vtnode_GND=Vrth_Vtnode_GND;
#endif
Tdev=((Tamb+pInst->dt)+Vrth);
EXIT_IF_ISNAN(((Tamb+pInst->dt)+Vrth))
if
((Tdev<((-100.0)+273.15)))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
Tdev_Vtnode_GND=0.0;
#endif
Tdev=((-100.0)+273.15);
EXIT_IF_ISNAN(((-100.0)+273.15))
}
else
{
if
((Tdev>(326.85+273.15)))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
Tdev_Vtnode_GND=0.0;
#endif
Tdev=(326.85+273.15);
EXIT_IF_ISNAN((326.85+273.15))
}
}
Vt0=((1.3806503e-23*Tnom)/1.602176462e-19);
EXIT_IF_ISNAN(((1.3806503e-23*Tnom)/1.602176462e-19))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
VT_Vtnode_GND=((1.3806503e-23*Tdev_Vtnode_GND)/1.602176462e-19);
#endif
VT=((1.3806503e-23*Tdev)/1.602176462e-19);
EXIT_IF_ISNAN(((1.3806503e-23*Tdev)/1.602176462e-19))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
dT_Vtnode_GND=Tdev_Vtnode_GND;
#endif
dT=(Tdev-Tnom);
EXIT_IF_ISNAN((Tdev-Tnom))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
qtt0_Vtnode_GND=(Tdev_Vtnode_GND/Tnom);
#endif
qtt0=(Tdev/Tnom);
EXIT_IF_ISNAN((Tdev/Tnom))
{
double m00_logE(d00_logE0,qtt0)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,qtt0)
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
ln_qtt0_Vtnode_GND=qtt0_Vtnode_GND*d10_logE0;
#endif
ln_qtt0=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
#if defined(_DYNAMIC)
k1=(pModel->f1vg*Tnom);
EXIT_IF_ISNAN((pModel->f1vg*Tnom))
#endif
#if defined(_DYNAMIC)
{
double m00_logE(d00_logE0,Tnom)
k2=((pModel->f2vg*Tnom)+(k1*d00_logE0));
EXIT_IF_ISNAN(((pModel->f2vg*Tnom)+(k1*d00_logE0)))
}
#endif
avs=(pModel->alvs*Tnom);
EXIT_IF_ISNAN((pModel->alvs*Tnom))
vgbe=((pModel->vgb+pModel->vge)/2);
EXIT_IF_ISNAN(((pModel->vgb+pModel->vge)/2))
vgbc=((pModel->vgb+pModel->vgc)/2);
EXIT_IF_ISNAN(((pModel->vgb+pModel->vgc)/2))
#if defined(_DYNAMIC)
vgsc=((pModel->vgs+pModel->vgc)/2);
EXIT_IF_ISNAN(((pModel->vgs+pModel->vgc)/2))
#endif
mg=(3-((1.602176462e-19*pModel->f1vg)/1.3806503e-23));
EXIT_IF_ISNAN((3-((1.602176462e-19*pModel->f1vg)/1.3806503e-23)))
zetabci=((mg+1)-pModel->zetaci);
EXIT_IF_ISNAN(((mg+1)-pModel->zetaci))
zetasct=(mg-1.5);
EXIT_IF_ISNAN((mg-1.5))
{
double m00_exp(d00_exp0,((pModel->zetact*ln_qtt0)+((pModel->vgb/VT)*(qtt0-1))))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
is_t_Vtnode_GND=(pModel->is*((pModel->zetact*ln_qtt0_Vtnode_GND)+(((-pModel->vgb*VT_Vtnode_GND/VT/VT)*(qtt0-1))+((pModel->vgb/VT)*qtt0_Vtnode_GND)))*d10_exp0);
#endif
is_t=(pModel->is*d00_exp0);
EXIT_IF_ISNAN((pModel->is*d00_exp0))
}
{
double m00_exp(d00_exp0,((pModel->zetabet*ln_qtt0)+((pModel->vge/VT)*(qtt0-1))))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
ibes_t_Vtnode_GND=(pModel->ibes*((pModel->zetabet*ln_qtt0_Vtnode_GND)+(((-pModel->vge*VT_Vtnode_GND/VT/VT)*(qtt0-1))+((pModel->vge/VT)*qtt0_Vtnode_GND)))*d10_exp0);
#endif
ibes_t=(pModel->ibes*d00_exp0);
EXIT_IF_ISNAN((pModel->ibes*d00_exp0))
}
{
double m00_exp(d00_exp0,(((0.5*mg)*ln_qtt0)+(((0.5*vgbe)/VT)*(qtt0-1))))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
ires_t_Vtnode_GND=(pModel->ires*(((0.5*mg)*ln_qtt0_Vtnode_GND)+(((-(0.5*vgbe)*VT_Vtnode_GND/VT/VT)*(qtt0-1))+(((0.5*vgbe)/VT)*qtt0_Vtnode_GND)))*d10_exp0);
#endif
ires_t=(pModel->ires*d00_exp0);
EXIT_IF_ISNAN((pModel->ires*d00_exp0))
}
{
double m00_exp(d00_exp0,((zetabci*ln_qtt0)+((pModel->vgc/VT)*(qtt0-1))))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
ibcs_t_Vtnode_GND=(pModel->ibcs*((zetabci*ln_qtt0_Vtnode_GND)+(((-pModel->vgc*VT_Vtnode_GND/VT/VT)*(qtt0-1))+((pModel->vgc/VT)*qtt0_Vtnode_GND)))*d10_exp0);
#endif
ibcs_t=(pModel->ibcs*d00_exp0);
EXIT_IF_ISNAN((pModel->ibcs*d00_exp0))
}
{
double m00_exp(d00_exp0,((zetasct*ln_qtt0)+((pModel->vgc/VT)*(qtt0-1))))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
itss_t_Vtnode_GND=(pModel->itss*((zetasct*ln_qtt0_Vtnode_GND)+(((-pModel->vgc*VT_Vtnode_GND/VT/VT)*(qtt0-1))+((pModel->vgc/VT)*qtt0_Vtnode_GND)))*d10_exp0);
#endif
itss_t=(pModel->itss*d00_exp0);
EXIT_IF_ISNAN((pModel->itss*d00_exp0))
}
{
double m00_exp(d00_exp0,((zetasct*ln_qtt0)+((pModel->vgs/VT)*(qtt0-1))))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
iscs_t_Vtnode_GND=(pModel->iscs*((zetasct*ln_qtt0_Vtnode_GND)+(((-pModel->vgs*VT_Vtnode_GND/VT/VT)*(qtt0-1))+((pModel->vgs/VT)*qtt0_Vtnode_GND)))*d10_exp0);
#endif
iscs_t=(pModel->iscs*d00_exp0);
EXIT_IF_ISNAN((pModel->iscs*d00_exp0))
}
arg=((0.5*pModel->vde)/Vt0);
EXIT_IF_ISNAN(((0.5*pModel->vde)/Vt0))
{
double m00_exp(d00_exp0,arg)
double m00_exp(d00_exp1,(-arg))
double m00_logE(d00_logE2,(d00_exp0-d00_exp1))
vdj0=((2*Vt0)*d00_logE2);
EXIT_IF_ISNAN(((2*Vt0)*d00_logE2))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vdjt_Vtnode_GND=(((vdj0*qtt0_Vtnode_GND)+(vgbe*(-qtt0_Vtnode_GND)))-(((mg*VT_Vtnode_GND)*ln_qtt0)+((mg*VT)*ln_qtt0_Vtnode_GND)));
#endif
vdjt=(((vdj0*qtt0)+(vgbe*(1-qtt0)))-((mg*VT)*ln_qtt0));
EXIT_IF_ISNAN((((vdj0*qtt0)+(vgbe*(1-qtt0)))-((mg*VT)*ln_qtt0)))
{
double m00_exp(d00_exp0,((-vdjt)/VT))
double m00_sqrt(d00_sqrt1,(1+(4*d00_exp0)))
double m00_logE(d00_logE2,(0.5*(1+d00_sqrt1)))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_sqrt(d10_sqrt1,d00_sqrt1,(1+(4*d00_exp0)))
double m10_logE(d10_logE2,d00_logE2,(0.5*(1+d00_sqrt1)))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vde_t_Vtnode_GND=(vdjt_Vtnode_GND+(((2*VT_Vtnode_GND)*d00_logE2)+((2*VT)*(0.5*(4*(((-vdjt_Vtnode_GND)*VT-(-vdjt)*VT_Vtnode_GND)/VT/VT)*d10_exp0)*d10_sqrt1)*d10_logE2)));
#endif
vde_t=(vdjt+((2*VT)*d00_logE2));
EXIT_IF_ISNAN((vdjt+((2*VT)*d00_logE2)))
}
{
double m00_logE(d00_logE0,(pModel->vde/vde_t))
double m00_exp(d00_exp1,(pModel->ze*d00_logE0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(pModel->vde/vde_t))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
cje0_t_Vtnode_GND=(pModel->cje0*(pModel->ze*(-pModel->vde*vde_t_Vtnode_GND/vde_t/vde_t)*d10_logE0)*d10_exp1);
#endif
cje0_t=(pModel->cje0*d00_exp1);
EXIT_IF_ISNAN((pModel->cje0*d00_exp1))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
aje_t_Vtnode_GND=((pModel->aje*vde_t_Vtnode_GND)/pModel->vde);
#endif
aje_t=((pModel->aje*vde_t)/pModel->vde);
EXIT_IF_ISNAN(((pModel->aje*vde_t)/pModel->vde))
arg=((0.5*pModel->vdci)/Vt0);
EXIT_IF_ISNAN(((0.5*pModel->vdci)/Vt0))
{
double m00_exp(d00_exp0,arg)
double m00_exp(d00_exp1,(-arg))
double m00_logE(d00_logE2,(d00_exp0-d00_exp1))
vdj0=((2*Vt0)*d00_logE2);
EXIT_IF_ISNAN(((2*Vt0)*d00_logE2))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vdjt_Vtnode_GND=(((vdj0*qtt0_Vtnode_GND)+(vgbc*(-qtt0_Vtnode_GND)))-(((mg*VT_Vtnode_GND)*ln_qtt0)+((mg*VT)*ln_qtt0_Vtnode_GND)));
#endif
vdjt=(((vdj0*qtt0)+(vgbc*(1-qtt0)))-((mg*VT)*ln_qtt0));
EXIT_IF_ISNAN((((vdj0*qtt0)+(vgbc*(1-qtt0)))-((mg*VT)*ln_qtt0)))
{
double m00_exp(d00_exp0,((-vdjt)/VT))
double m00_sqrt(d00_sqrt1,(1+(4*d00_exp0)))
double m00_logE(d00_logE2,(0.5*(1+d00_sqrt1)))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_sqrt(d10_sqrt1,d00_sqrt1,(1+(4*d00_exp0)))
double m10_logE(d10_logE2,d00_logE2,(0.5*(1+d00_sqrt1)))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vdci_t_Vtnode_GND=(vdjt_Vtnode_GND+(((2*VT_Vtnode_GND)*d00_logE2)+((2*VT)*(0.5*(4*(((-vdjt_Vtnode_GND)*VT-(-vdjt)*VT_Vtnode_GND)/VT/VT)*d10_exp0)*d10_sqrt1)*d10_logE2)));
#endif
vdci_t=(vdjt+((2*VT)*d00_logE2));
EXIT_IF_ISNAN((vdjt+((2*VT)*d00_logE2)))
}
{
double m00_logE(d00_logE0,(pModel->vdci/vdci_t))
double m00_exp(d00_exp1,(pModel->zci*d00_logE0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(pModel->vdci/vdci_t))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cjci0_t_Vtnode_GND=(pModel->cjci0*(pModel->zci*(-pModel->vdci*vdci_t_Vtnode_GND/vdci_t/vdci_t)*d10_logE0)*d10_exp1);
#endif
cjci0_t=(pModel->cjci0*d00_exp1);
EXIT_IF_ISNAN((pModel->cjci0*d00_exp1))
}
arg=((0.5*pModel->vdcx)/Vt0);
EXIT_IF_ISNAN(((0.5*pModel->vdcx)/Vt0))
{
double m00_exp(d00_exp0,arg)
double m00_exp(d00_exp1,(-arg))
double m00_logE(d00_logE2,(d00_exp0-d00_exp1))
vdj0=((2*Vt0)*d00_logE2);
EXIT_IF_ISNAN(((2*Vt0)*d00_logE2))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vdjt_Vtnode_GND=(((vdj0*qtt0_Vtnode_GND)+(vgbc*(-qtt0_Vtnode_GND)))-(((mg*VT_Vtnode_GND)*ln_qtt0)+((mg*VT)*ln_qtt0_Vtnode_GND)));
#endif
vdjt=(((vdj0*qtt0)+(vgbc*(1-qtt0)))-((mg*VT)*ln_qtt0));
EXIT_IF_ISNAN((((vdj0*qtt0)+(vgbc*(1-qtt0)))-((mg*VT)*ln_qtt0)))
{
double m00_exp(d00_exp0,((-vdjt)/VT))
double m00_sqrt(d00_sqrt1,(1+(4*d00_exp0)))
double m00_logE(d00_logE2,(0.5*(1+d00_sqrt1)))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_sqrt(d10_sqrt1,d00_sqrt1,(1+(4*d00_exp0)))
double m10_logE(d10_logE2,d00_logE2,(0.5*(1+d00_sqrt1)))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vdcx_t_Vtnode_GND=(vdjt_Vtnode_GND+(((2*VT_Vtnode_GND)*d00_logE2)+((2*VT)*(0.5*(4*(((-vdjt_Vtnode_GND)*VT-(-vdjt)*VT_Vtnode_GND)/VT/VT)*d10_exp0)*d10_sqrt1)*d10_logE2)));
#endif
vdcx_t=(vdjt+((2*VT)*d00_logE2));
EXIT_IF_ISNAN((vdjt+((2*VT)*d00_logE2)))
}
{
double m00_logE(d00_logE0,(pModel->vdcx/vdcx_t))
double m00_exp(d00_exp1,(pModel->zcx*d00_logE0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(pModel->vdcx/vdcx_t))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cjcx0_t_Vtnode_GND=(pModel->cjcx0*(pModel->zcx*(-pModel->vdcx*vdcx_t_Vtnode_GND/vdcx_t/vdcx_t)*d10_logE0)*d10_exp1);
#endif
cjcx0_t=(pModel->cjcx0*d00_exp1);
EXIT_IF_ISNAN((pModel->cjcx0*d00_exp1))
}
#if defined(_DYNAMIC)
arg=((0.5*pModel->vds)/Vt0);
EXIT_IF_ISNAN(((0.5*pModel->vds)/Vt0))
#endif
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,arg)
double m00_exp(d00_exp1,(-arg))
double m00_logE(d00_logE2,(d00_exp0-d00_exp1))
vdj0=((2*Vt0)*d00_logE2);
EXIT_IF_ISNAN(((2*Vt0)*d00_logE2))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vdjt_Vtnode_GND=(((vdj0*qtt0_Vtnode_GND)+(vgsc*(-qtt0_Vtnode_GND)))-(((mg*VT_Vtnode_GND)*ln_qtt0)+((mg*VT)*ln_qtt0_Vtnode_GND)));
#endif
vdjt=(((vdj0*qtt0)+(vgsc*(1-qtt0)))-((mg*VT)*ln_qtt0));
EXIT_IF_ISNAN((((vdj0*qtt0)+(vgsc*(1-qtt0)))-((mg*VT)*ln_qtt0)))
#endif
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,((-vdjt)/VT))
double m00_sqrt(d00_sqrt1,(1+(4*d00_exp0)))
double m00_logE(d00_logE2,(0.5*(1+d00_sqrt1)))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
double m10_sqrt(d10_sqrt1,d00_sqrt1,(1+(4*d00_exp0)))
double m10_logE(d10_logE2,d00_logE2,(0.5*(1+d00_sqrt1)))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
vds_t_Vtnode_GND=(vdjt_Vtnode_GND+(((2*VT_Vtnode_GND)*d00_logE2)+((2*VT)*(0.5*(4*(((-vdjt_Vtnode_GND)*VT-(-vdjt)*VT_Vtnode_GND)/VT/VT)*d10_exp0)*d10_sqrt1)*d10_logE2)));
#endif
vds_t=(vdjt+((2*VT)*d00_logE2));
EXIT_IF_ISNAN((vdjt+((2*VT)*d00_logE2)))
}
#endif
#if defined(_DYNAMIC)
{
double m00_logE(d00_logE0,(pModel->vds/vds_t))
double m00_exp(d00_exp1,(pModel->zs*d00_logE0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(pModel->vds/vds_t))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cjs0_t_Vtnode_GND=(pModel->cjs0*(pModel->zs*(-pModel->vds*vds_t_Vtnode_GND/vds_t/vds_t)*d10_logE0)*d10_exp1);
#endif
cjs0_t=(pModel->cjs0*d00_exp1);
EXIT_IF_ISNAN((pModel->cjs0*d00_exp1))
}
#endif
{
double m00_exp(d00_exp0,(pModel->zetaci*ln_qtt0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
rci0_t_Vtnode_GND=(pModel->rci0*(pModel->zetaci*ln_qtt0_Vtnode_GND)*d10_exp0);
#endif
rci0_t=(pModel->rci0*d00_exp0);
EXIT_IF_ISNAN((pModel->rci0*d00_exp0))
}
{
double m00_exp(d00_exp0,((pModel->zetaci-avs)*ln_qtt0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
vlim_t_Vtnode_GND=(pModel->vlim*((pModel->zetaci-avs)*ln_qtt0_Vtnode_GND)*d10_exp0);
#endif
vlim_t=(pModel->vlim*d00_exp0);
EXIT_IF_ISNAN((pModel->vlim*d00_exp0))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
vces_t_Vtnode_GND=(pModel->vces*(pModel->alces*dT_Vtnode_GND));
#endif
vces_t=(pModel->vces*(1+(pModel->alces*dT)));
EXIT_IF_ISNAN((pModel->vces*(1+(pModel->alces*dT))))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
t0_t_Vtnode_GND=(pModel->t0*((pModel->alt0*dT_Vtnode_GND)+(((pModel->kt0*dT_Vtnode_GND)*dT)+((pModel->kt0*dT)*dT_Vtnode_GND))));
#endif
t0_t=(pModel->t0*((1+(pModel->alt0*dT))+((pModel->kt0*dT)*dT)));
EXIT_IF_ISNAN((pModel->t0*((1+(pModel->alt0*dT))+((pModel->kt0*dT)*dT))))
#endif
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,((pModel->zetaci-1)*ln_qtt0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
thcs_t_Vtnode_GND=(pModel->thcs*((pModel->zetaci-1)*ln_qtt0_Vtnode_GND)*d10_exp0);
#endif
thcs_t=(pModel->thcs*d00_exp0);
EXIT_IF_ISNAN((pModel->thcs*d00_exp0))
}
#endif
#if defined(_DYNAMIC)
zetatef=((pModel->zetabet-pModel->zetact)-0.5);
EXIT_IF_ISNAN(((pModel->zetabet-pModel->zetact)-0.5))
#endif
#if defined(_DYNAMIC)
dvg=(pModel->vgb-pModel->vge);
EXIT_IF_ISNAN((pModel->vgb-pModel->vge))
#endif
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,((zetatef*ln_qtt0)-((dvg/VT)*(qtt0-1))))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
tef0_t_Vtnode_GND=(pModel->tef0*((zetatef*ln_qtt0_Vtnode_GND)-(((-dvg*VT_Vtnode_GND/VT/VT)*(qtt0-1))+((dvg/VT)*qtt0_Vtnode_GND)))*d10_exp0);
#endif
tef0_t=(pModel->tef0*d00_exp0);
EXIT_IF_ISNAN((pModel->tef0*d00_exp0))
}
#endif
{
double m00_exp(d00_exp0,(pModel->zetarbx*ln_qtt0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
rbx_t_Vtnode_GND=(pModel->rbx*(pModel->zetarbx*ln_qtt0_Vtnode_GND)*d10_exp0);
#endif
rbx_t=(pModel->rbx*d00_exp0);
EXIT_IF_ISNAN((pModel->rbx*d00_exp0))
}
{
double m00_exp(d00_exp0,(pModel->zetarcx*ln_qtt0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
rcx_t_Vtnode_GND=(pModel->rcx*(pModel->zetarcx*ln_qtt0_Vtnode_GND)*d10_exp0);
#endif
rcx_t=(pModel->rcx*d00_exp0);
EXIT_IF_ISNAN((pModel->rcx*d00_exp0))
}
{
double m00_exp(d00_exp0,(pModel->zetarbi*ln_qtt0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
rbi0_t_Vtnode_GND=(pModel->rbi0*(pModel->zetarbi*ln_qtt0_Vtnode_GND)*d10_exp0);
#endif
rbi0_t=(pModel->rbi0*d00_exp0);
EXIT_IF_ISNAN((pModel->rbi0*d00_exp0))
}
{
double m00_exp(d00_exp0,(pModel->zetare*ln_qtt0))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
re_t_Vtnode_GND=(pModel->re*(pModel->zetare*ln_qtt0_Vtnode_GND)*d10_exp0);
#endif
re_t=(pModel->re*d00_exp0);
EXIT_IF_ISNAN((pModel->re*d00_exp0))
}
{
double m00_exp(d00_exp0,(pModel->aleav*dT))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
eavl_t_Vtnode_GND=(pModel->eavl*(pModel->aleav*dT_Vtnode_GND)*d10_exp0);
#endif
eavl_t=(pModel->eavl*d00_exp0);
EXIT_IF_ISNAN((pModel->eavl*d00_exp0))
}
{
double m00_exp(d00_exp0,(pModel->alkav*dT))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
kavl_t_Vtnode_GND=(pModel->kavl*(pModel->alkav*dT_Vtnode_GND)*d10_exp0);
#endif
kavl_t=(pModel->kavl*d00_exp0);
EXIT_IF_ISNAN((pModel->kavl*d00_exp0))
}
if
((cjcx0_t==0))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cjci0_t_ii_Vtnode_GND=cjci0_t_Vtnode_GND*pModel->fbc;
#endif
cjci0_t_ii=(cjci0_t*pModel->fbc);
EXIT_IF_ISNAN((cjci0_t*pModel->fbc))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcxi_Vbi_ci=0.0;
qjcxi_Vtnode_GND=0.0;
qjcxi_Vb_ci=0.0;
#endif
qjcxi=0;
EXIT_IF_ISNAN(0)
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cjcx0_t_i_Vtnode_GND=cjci0_t_Vtnode_GND*(1-pModel->fbc);
#endif
cjcx0_t_i=(cjci0_t*(1-pModel->fbc));
EXIT_IF_ISNAN((cjci0_t*(1-pModel->fbc)))
if
((pModel->vptci<1.0e2))
{
if
((cjcx0_t_i>0.0))
{
zr=(pModel->zci/4.0);
EXIT_IF_ISNAN((pModel->zci/4.0))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
vp_Vtnode_GND=(-vdci_t_Vtnode_GND);
#endif
vp=(pModel->vptci-vdci_t);
EXIT_IF_ISNAN((pModel->vptci-vdci_t))
{
double m00_logE(d00_logE0,2.4)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->zci))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=vdci_t_Vtnode_GND*(1.0-d00_exp1);
#endif
vf=(vdci_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vdci_t*(1.0-d00_exp1)))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cmax_Vtnode_GND=(2.4*cjcx0_t_i_Vtnode_GND);
#endif
cmax=(2.4*cjcx0_t_i);
EXIT_IF_ISNAN((2.4*cjcx0_t_i))
{
double m00_logE(d00_logE0,(vdci_t/pModel->vptci))
double m00_exp(d00_exp1,((pModel->zci-zr)*d00_logE0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(vdci_t/pModel->vptci))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cr_Vtnode_GND=((cjcx0_t_i_Vtnode_GND*d00_exp1)+(cjcx0_t_i*((pModel->zci-zr)*(vdci_t_Vtnode_GND/pModel->vptci)*d10_logE0)*d10_exp1));
#endif
cr=(cjcx0_t_i*d00_exp1);
EXIT_IF_ISNAN((cjcx0_t_i*d00_exp1))
}
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
a_Vci_ei=0.0;
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vb_ci=0.0;
a_Vtnode_GND=VT_Vtnode_GND;
#endif
a=VT;
EXIT_IF_ISNAN(VT)
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ve_Vs_ci=0.0;
ve_Vci_ei=0.0;
ve_Vbi_ei=0.0;
ve_Vbi_ci=0.0;
ve_Vtnode_GND=((vf_Vtnode_GND*a-(vf-Vbci)*a_Vtnode_GND)/a/a);
ve_Vb_ci=(((-Vbci_Vb_ci)*a-(vf-Vbci)*a_Vb_ci)/a/a);
#endif
ve=((vf-Vbci)/a);
EXIT_IF_ISNAN(((vf-Vbci)/a))
if
((ve<=80.0))
{
{
double m00_exp(d00_exp0,ve)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ex1_Vs_ci=0.0;
ex1_Vci_ei=0.0;
ex1_Vbi_ei=0.0;
ex1_Vbi_ci=0.0;
ex1_Vtnode_GND=ve_Vtnode_GND*d10_exp0;
ex1_Vb_ci=ve_Vb_ci*d10_exp0;
#endif
ex1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ee1_Vs_ci=0.0;
ee1_Vci_ei=0.0;
ee1_Vbi_ei=0.0;
ee1_Vbi_ci=0.0;
ee1_Vtnode_GND=ex1_Vtnode_GND;
ee1_Vb_ci=ex1_Vb_ci;
#endif
ee1=(1.0+ex1);
EXIT_IF_ISNAN((1.0+ex1))
{
double m00_logE(d00_logE0,ee1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,ee1)
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj1_Vci_ei=0.0;
vj1_Vbi_ei=0.0;
vj1_Vs_ci=0.0;
vj1_Vbi_ci=0.0;
vj1_Vtnode_GND=(vf_Vtnode_GND-((a_Vtnode_GND*d00_logE0)+(a*ee1_Vtnode_GND*d10_logE0)));
vj1_Vb_ci=(-((a_Vb_ci*d00_logE0)+(a*ee1_Vb_ci*d10_logE0)));
#endif
vj1=(vf-(a*d00_logE0));
EXIT_IF_ISNAN((vf-(a*d00_logE0)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj1_Vci_ei=0.0;
vj1_Vbi_ei=0.0;
vj1_Vs_ci=0.0;
vj1_Vbi_ci=0.0;
vj1_Vtnode_GND=0.0;
vj1_Vb_ci=Vbci_Vb_ci;
#endif
vj1=Vbci;
EXIT_IF_ISNAN(Vbci)
}
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
a_Vci_ei=0.0;
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vb_ci=0.0;
a_Vtnode_GND=((0.1*vp_Vtnode_GND)+(4.0*VT_Vtnode_GND));
#endif
a=((0.1*vp)+(4.0*VT));
EXIT_IF_ISNAN(((0.1*vp)+(4.0*VT)))
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vr_Vci_ei=0.0;
vr_Vbi_ei=0.0;
vr_Vs_ci=0.0;
vr_Vbi_ci=0.0;
vr_Vtnode_GND=(((vp_Vtnode_GND+vj1_Vtnode_GND)*a-(vp+vj1)*a_Vtnode_GND)/a/a);
vr_Vb_ci=((vj1_Vb_ci*a-(vp+vj1)*a_Vb_ci)/a/a);
#endif
vr=((vp+vj1)/a);
EXIT_IF_ISNAN(((vp+vj1)/a))
if
((vr<=80.0))
{
{
double m00_exp(d00_exp0,vr)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ex1_Vs_ci=0.0;
ex1_Vci_ei=0.0;
ex1_Vbi_ei=0.0;
ex1_Vbi_ci=0.0;
ex1_Vtnode_GND=vr_Vtnode_GND*d10_exp0;
ex1_Vb_ci=vr_Vb_ci*d10_exp0;
#endif
ex1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ee1_Vs_ci=0.0;
ee1_Vci_ei=0.0;
ee1_Vbi_ei=0.0;
ee1_Vbi_ci=0.0;
ee1_Vtnode_GND=ex1_Vtnode_GND;
ee1_Vb_ci=ex1_Vb_ci;
#endif
ee1=(1.0+ex1);
EXIT_IF_ISNAN((1.0+ex1))
{
double m00_logE(d00_logE0,ee1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,ee1)
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj2_Vci_ei=0.0;
vj2_Vbi_ei=0.0;
vj2_Vs_ci=0.0;
vj2_Vbi_ci=0.0;
vj2_Vtnode_GND=((-vp_Vtnode_GND)+((a_Vtnode_GND*d00_logE0)+(a*ee1_Vtnode_GND*d10_logE0)));
vj2_Vb_ci=((a_Vb_ci*d00_logE0)+(a*ee1_Vb_ci*d10_logE0));
#endif
vj2=((-vp)+(a*d00_logE0));
EXIT_IF_ISNAN(((-vp)+(a*d00_logE0)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj2_Vci_ei=0.0;
vj2_Vbi_ei=0.0;
vj2_Vs_ci=0.0;
vj2_Vbi_ci=0.0;
vj2_Vtnode_GND=vj1_Vtnode_GND;
vj2_Vb_ci=vj1_Vb_ci;
#endif
vj2=vj1;
EXIT_IF_ISNAN(vj1)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
vj4_Vs_ci=0.0;
vj4_Vci_ei=0.0;
vj4_Vbi_ei=0.0;
vj4_Vbi_ci=0.0;
vj4_Vb_ci=(Vbci_Vb_ci-vj1_Vb_ci);
vj4_Vtnode_GND=(-vj1_Vtnode_GND);
#endif
vj4=(Vbci-vj1);
EXIT_IF_ISNAN((Vbci-vj1))
ez=(1.0-pModel->zci);
EXIT_IF_ISNAN((1.0-pModel->zci))
ezr=(1.0-zr);
EXIT_IF_ISNAN((1.0-zr))
{
double m00_logE(d00_logE0,(1.0-(vj1/vdci_t)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0-(vj1/vdci_t)))
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vdj1_Vci_ei=0.0;
vdj1_Vbi_ei=0.0;
vdj1_Vs_ci=0.0;
vdj1_Vbi_ci=0.0;
vdj1_Vtnode_GND=(-((vj1_Vtnode_GND*vdci_t-vj1*vdci_t_Vtnode_GND)/vdci_t/vdci_t))*d10_logE0;
vdj1_Vb_ci=(-(vj1_Vb_ci/vdci_t))*d10_logE0;
#endif
vdj1=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
{
double m00_logE(d00_logE0,(1.0-(vj2/vdci_t)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0-(vj2/vdci_t)))
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vdj2_Vci_ei=0.0;
vdj2_Vbi_ei=0.0;
vdj2_Vs_ci=0.0;
vdj2_Vbi_ci=0.0;
vdj2_Vtnode_GND=(-((vj2_Vtnode_GND*vdci_t-vj2*vdci_t_Vtnode_GND)/vdci_t/vdci_t))*d10_logE0;
vdj2_Vb_ci=(-(vj2_Vb_ci/vdci_t))*d10_logE0;
#endif
vdj2=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
{
double m00_exp(d00_exp0,(vdj2*ez))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj1_Vci_ei=0.0;
qj1_Vbi_ei=0.0;
qj1_Vs_ci=0.0;
qj1_Vbi_ci=0.0;
qj1_Vtnode_GND=(((cjcx0_t_i_Vtnode_GND*(1.0-d00_exp0))+(cjcx0_t_i*(-vdj2_Vtnode_GND*ez*d10_exp0)))/ez);
qj1_Vb_ci=((cjcx0_t_i*(-vdj2_Vb_ci*ez*d10_exp0))/ez);
#endif
qj1=((cjcx0_t_i*(1.0-d00_exp0))/ez);
EXIT_IF_ISNAN(((cjcx0_t_i*(1.0-d00_exp0))/ez))
}
{
double m00_exp(d00_exp0,(vdj1*ezr))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj2_Vci_ei=0.0;
qj2_Vbi_ei=0.0;
qj2_Vs_ci=0.0;
qj2_Vbi_ci=0.0;
qj2_Vtnode_GND=(((cr_Vtnode_GND*(1.0-d00_exp0))+(cr*(-vdj1_Vtnode_GND*ezr*d10_exp0)))/ezr);
qj2_Vb_ci=((cr*(-vdj1_Vb_ci*ezr*d10_exp0))/ezr);
#endif
qj2=((cr*(1.0-d00_exp0))/ezr);
EXIT_IF_ISNAN(((cr*(1.0-d00_exp0))/ezr))
}
{
double m00_exp(d00_exp0,(vdj2*ezr))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj3_Vci_ei=0.0;
qj3_Vbi_ei=0.0;
qj3_Vs_ci=0.0;
qj3_Vbi_ci=0.0;
qj3_Vtnode_GND=(((cr_Vtnode_GND*(1.0-d00_exp0))+(cr*(-vdj2_Vtnode_GND*ezr*d10_exp0)))/ezr);
qj3_Vb_ci=((cr*(-vdj2_Vb_ci*ezr*d10_exp0))/ezr);
#endif
qj3=((cr*(1.0-d00_exp0))/ezr);
EXIT_IF_ISNAN(((cr*(1.0-d00_exp0))/ezr))
}
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcx_Vbi_ci=0.0;
qjcx_Vtnode_GND=(((((qj1_Vtnode_GND+qj2_Vtnode_GND)-qj3_Vtnode_GND)*vdci_t)+(((qj1+qj2)-qj3)*vdci_t_Vtnode_GND))+((cmax_Vtnode_GND*vj4)+(cmax*vj4_Vtnode_GND)));
qjcx_Vb_ci=(((qj1_Vb_ci+qj2_Vb_ci)-qj3_Vb_ci)*vdci_t+(cmax*vj4_Vb_ci));
#endif
qjcx=((((qj1+qj2)-qj3)*vdci_t)+(cmax*vj4));
EXIT_IF_ISNAN(((((qj1+qj2)-qj3)*vdci_t)+(cmax*vj4)))
#endif
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcx_Vbi_ci=0.0;
qjcx_Vtnode_GND=0.0;
qjcx_Vb_ci=0.0;
#endif
qjcx=0.0;
EXIT_IF_ISNAN(0.0)
#endif
}
}
else
{
if
((cjcx0_t_i>0.0))
{
{
double m00_logE(d00_logE0,2.4)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->zci))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=vdci_t_Vtnode_GND*(1.0-d00_exp1);
#endif
vf=(vdci_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vdci_t*(1.0-d00_exp1)))
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf_Vs_ci=0.0;
#endif
xvf_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  xvf_Vbi_ei_Vs_ci=0.0;
  xvf_Vbi_ei_Vbi_ei=0.0;
  xvf_Vbi_ei_Vbi_ci=0.0;
  xvf_Vbi_ei_Vtnode_GND=0.0;
  xvf_Vbi_ei_Vb_ci=0.0;
#endif
xvf_Vbi_ci=0.0;
#if defined(_DERIVATE2)
  xvf_Vbi_ci_Vs_ci=0.0;
  xvf_Vbi_ci_Vbi_ei=0.0;
  xvf_Vbi_ci_Vbi_ci=0.0;
  xvf_Vbi_ci_Vtnode_GND=0.0;
  xvf_Vbi_ci_Vb_ci=0.0;
#endif
#if defined(_DERIVATE)
xvf_Vtnode_GND=((vf_Vtnode_GND*VT-(vf-Vbci)*VT_Vtnode_GND)/VT/VT);
#endif
#if defined(_DERIVATE)
xvf_Vb_ci=((-Vbci_Vb_ci)/VT);
#endif
#endif
xvf=((vf-Vbci)/VT);
EXIT_IF_ISNAN(((vf-Vbci)/VT))
{
double m00_sqrt(d00_sqrt0,((xvf*xvf)+1.921812))
#if defined(_DERIVATEFORDDX)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((xvf*xvf)+1.921812))
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf2_Vs_ci=0.0;
#endif
xvf2_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ei_Vs_ci=0.0;
  xvf2_Vbi_ei_Vbi_ei=0.0;
  xvf2_Vbi_ei_Vbi_ci=0.0;
  xvf2_Vbi_ei_Vtnode_GND=0.0;
  xvf2_Vbi_ei_Vb_ci=0.0;
#endif
xvf2_Vbi_ci=0.0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ci_Vs_ci=0.0;
  xvf2_Vbi_ci_Vbi_ei=0.0;
  xvf2_Vbi_ci_Vbi_ci=0.0;
  xvf2_Vbi_ci_Vtnode_GND=0.0;
  xvf2_Vbi_ci_Vb_ci=0.0;
#endif
#if defined(_DERIVATE)
xvf2_Vtnode_GND=((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND))*d10_sqrt0;
#endif
#if defined(_DERIVATE)
xvf2_Vb_ci=((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci))*d10_sqrt0;
#endif
#endif
xvf2=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
v_j_Vs_ci=0.0;
#endif
v_j_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  v_j_Vbi_ei_Vs_ci=0.0;
  v_j_Vbi_ei_Vbi_ei=0.0;
  v_j_Vbi_ei_Vbi_ci=0.0;
  v_j_Vbi_ei_Vtnode_GND=0.0;
  v_j_Vbi_ei_Vb_ci=0.0;
#endif
v_j_Vbi_ci=0.0;
#if defined(_DERIVATE2)
  v_j_Vbi_ci_Vs_ci=0.0;
  v_j_Vbi_ci_Vbi_ei=0.0;
  v_j_Vbi_ci_Vbi_ci=0.0;
  v_j_Vbi_ci_Vtnode_GND=0.0;
  v_j_Vbi_ci_Vb_ci=0.0;
#endif
#if defined(_DERIVATE)
v_j_Vtnode_GND=(vf_Vtnode_GND-((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND)))*0.5);
#endif
#if defined(_DERIVATE)
v_j_Vb_ci=(-(VT*(xvf_Vb_ci+xvf2_Vb_ci))*0.5);
#endif
#endif
v_j=(vf-((VT*(xvf+xvf2))*0.5));
EXIT_IF_ISNAN((vf-((VT*(xvf+xvf2))*0.5)))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei) ddxprobe=V(bi:GND) */
x_Vtnode_GND=0.0;
x_Vci_ei=0.0;
#endif
x=(1.0-pModel->zci);
EXIT_IF_ISNAN((1.0-pModel->zci))
{
double m00_logE(d00_logE0,(1.0-(v_j/vdci_t)))
double m00_exp(d00_exp1,(x*d00_logE0))
#if defined(_DERIVATEFORDDX)
double m10_logE(d10_logE0,d00_logE0,(1.0-(v_j/vdci_t)))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(ci:ei)V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
y_Vci_ei=0.0;
#endif
#if defined(_DERIVATE)
y_Vs_ci=0.0;
#endif
y_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  y_Vbi_ei_Vci_ei=0.0;
  y_Vbi_ei_Vs_ci=0.0;
  y_Vbi_ei_Vbi_ei=0.0;
  y_Vbi_ei_Vbi_ci=0.0;
  y_Vbi_ei_Vtnode_GND=0.0;
  y_Vbi_ei_Vb_ci=0.0;
#endif
y_Vbi_ci=0.0;
#if defined(_DERIVATE2)
  y_Vbi_ci_Vci_ei=0.0;
  y_Vbi_ci_Vs_ci=0.0;
  y_Vbi_ci_Vbi_ei=0.0;
  y_Vbi_ci_Vbi_ci=0.0;
  y_Vbi_ci_Vtnode_GND=0.0;
  y_Vbi_ci_Vb_ci=0.0;
#endif
#if defined(_DERIVATE)
y_Vtnode_GND=(-((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vdci_t-v_j*vdci_t_Vtnode_GND)/vdci_t/vdci_t))*d10_logE0))*d10_exp1);
#endif
#if defined(_DERIVATE)
y_Vb_ci=(-(x*(-(v_j_Vb_ci/vdci_t))*d10_logE0)*d10_exp1);
#endif
#endif
y=(1.0-d00_exp1);
EXIT_IF_ISNAN((1.0-d00_exp1))
}
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcx_Vbi_ci=0.0;
qjcx_Vtnode_GND=(((((((cjcx0_t_i_Vtnode_GND*vdci_t)+(cjcx0_t_i*vdci_t_Vtnode_GND))*y)+((cjcx0_t_i*vdci_t)*y_Vtnode_GND))*x-((cjcx0_t_i*vdci_t)*y)*x_Vtnode_GND)/x/x)+(((2.4*cjcx0_t_i_Vtnode_GND)*(Vbci-v_j))+((2.4*cjcx0_t_i)*(-v_j_Vtnode_GND))));
qjcx_Vb_ci=((((cjcx0_t_i*vdci_t)*y_Vb_ci)/x)+((2.4*cjcx0_t_i)*(Vbci_Vb_ci-v_j_Vb_ci)));
#endif
qjcx=((((cjcx0_t_i*vdci_t)*y)/x)+((2.4*cjcx0_t_i)*(Vbci-v_j)));
EXIT_IF_ISNAN(((((cjcx0_t_i*vdci_t)*y)/x)+((2.4*cjcx0_t_i)*(Vbci-v_j))))
#endif
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcx_Vbi_ci=0.0;
qjcx_Vtnode_GND=0.0;
qjcx_Vb_ci=0.0;
#endif
qjcx=0.0;
EXIT_IF_ISNAN(0.0)
#endif
}
}
}
else
{
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cjci0_t_ii_Vtnode_GND=cjci0_t_Vtnode_GND;
#endif
cjci0_t_ii=cjci0_t;
EXIT_IF_ISNAN(cjci0_t)
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cjcx0_t_ii_Vtnode_GND=cjcx0_t_Vtnode_GND*pModel->fbc;
#endif
cjcx0_t_ii=(cjcx0_t*pModel->fbc);
EXIT_IF_ISNAN((cjcx0_t*pModel->fbc))
if
((pModel->vptcx<1.0e2))
{
if
((cjcx0_t_ii>0.0))
{
zr=(pModel->zcx/4.0);
EXIT_IF_ISNAN((pModel->zcx/4.0))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
vp_Vtnode_GND=(-vdcx_t_Vtnode_GND);
#endif
vp=(pModel->vptcx-vdcx_t);
EXIT_IF_ISNAN((pModel->vptcx-vdcx_t))
{
double m00_logE(d00_logE0,2.4)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->zcx))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=vdcx_t_Vtnode_GND*(1.0-d00_exp1);
#endif
vf=(vdcx_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vdcx_t*(1.0-d00_exp1)))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cmax_Vtnode_GND=(2.4*cjcx0_t_ii_Vtnode_GND);
#endif
cmax=(2.4*cjcx0_t_ii);
EXIT_IF_ISNAN((2.4*cjcx0_t_ii))
{
double m00_logE(d00_logE0,(vdcx_t/pModel->vptcx))
double m00_exp(d00_exp1,((pModel->zcx-zr)*d00_logE0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(vdcx_t/pModel->vptcx))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cr_Vtnode_GND=((cjcx0_t_ii_Vtnode_GND*d00_exp1)+(cjcx0_t_ii*((pModel->zcx-zr)*(vdcx_t_Vtnode_GND/pModel->vptcx)*d10_logE0)*d10_exp1));
#endif
cr=(cjcx0_t_ii*d00_exp1);
EXIT_IF_ISNAN((cjcx0_t_ii*d00_exp1))
}
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
a_Vci_ei=0.0;
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vb_ci=0.0;
a_Vtnode_GND=VT_Vtnode_GND;
#endif
a=VT;
EXIT_IF_ISNAN(VT)
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ve_Vs_ci=0.0;
ve_Vci_ei=0.0;
ve_Vbi_ei=0.0;
ve_Vbi_ci=(((-Vbici_Vbi_ci)*a-(vf-Vbici)*a_Vbi_ci)/a/a);
ve_Vtnode_GND=((vf_Vtnode_GND*a-(vf-Vbici)*a_Vtnode_GND)/a/a);
ve_Vb_ci=0.0;
#endif
ve=((vf-Vbici)/a);
EXIT_IF_ISNAN(((vf-Vbici)/a))
if
((ve<=80.0))
{
{
double m00_exp(d00_exp0,ve)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ex1_Vs_ci=0.0;
ex1_Vci_ei=0.0;
ex1_Vbi_ei=0.0;
ex1_Vbi_ci=ve_Vbi_ci*d10_exp0;
ex1_Vtnode_GND=ve_Vtnode_GND*d10_exp0;
ex1_Vb_ci=ve_Vb_ci*d10_exp0;
#endif
ex1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ee1_Vs_ci=0.0;
ee1_Vci_ei=0.0;
ee1_Vbi_ei=0.0;
ee1_Vbi_ci=ex1_Vbi_ci;
ee1_Vtnode_GND=ex1_Vtnode_GND;
ee1_Vb_ci=ex1_Vb_ci;
#endif
ee1=(1.0+ex1);
EXIT_IF_ISNAN((1.0+ex1))
{
double m00_logE(d00_logE0,ee1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,ee1)
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj1_Vci_ei=0.0;
vj1_Vbi_ei=0.0;
vj1_Vs_ci=0.0;
vj1_Vbi_ci=(-((a_Vbi_ci*d00_logE0)+(a*ee1_Vbi_ci*d10_logE0)));
vj1_Vtnode_GND=(vf_Vtnode_GND-((a_Vtnode_GND*d00_logE0)+(a*ee1_Vtnode_GND*d10_logE0)));
vj1_Vb_ci=(-((a_Vb_ci*d00_logE0)+(a*ee1_Vb_ci*d10_logE0)));
#endif
vj1=(vf-(a*d00_logE0));
EXIT_IF_ISNAN((vf-(a*d00_logE0)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj1_Vci_ei=0.0;
vj1_Vbi_ei=0.0;
vj1_Vs_ci=0.0;
vj1_Vbi_ci=Vbici_Vbi_ci;
vj1_Vtnode_GND=0.0;
vj1_Vb_ci=0.0;
#endif
vj1=Vbici;
EXIT_IF_ISNAN(Vbici)
}
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
a_Vci_ei=0.0;
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vb_ci=0.0;
a_Vtnode_GND=((0.1*vp_Vtnode_GND)+(4.0*VT_Vtnode_GND));
#endif
a=((0.1*vp)+(4.0*VT));
EXIT_IF_ISNAN(((0.1*vp)+(4.0*VT)))
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vr_Vci_ei=0.0;
vr_Vbi_ei=0.0;
vr_Vs_ci=0.0;
vr_Vbi_ci=((vj1_Vbi_ci*a-(vp+vj1)*a_Vbi_ci)/a/a);
vr_Vtnode_GND=(((vp_Vtnode_GND+vj1_Vtnode_GND)*a-(vp+vj1)*a_Vtnode_GND)/a/a);
vr_Vb_ci=((vj1_Vb_ci*a-(vp+vj1)*a_Vb_ci)/a/a);
#endif
vr=((vp+vj1)/a);
EXIT_IF_ISNAN(((vp+vj1)/a))
if
((vr<=80.0))
{
{
double m00_exp(d00_exp0,vr)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ex1_Vs_ci=0.0;
ex1_Vci_ei=0.0;
ex1_Vbi_ei=0.0;
ex1_Vbi_ci=vr_Vbi_ci*d10_exp0;
ex1_Vtnode_GND=vr_Vtnode_GND*d10_exp0;
ex1_Vb_ci=vr_Vb_ci*d10_exp0;
#endif
ex1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ee1_Vs_ci=0.0;
ee1_Vci_ei=0.0;
ee1_Vbi_ei=0.0;
ee1_Vbi_ci=ex1_Vbi_ci;
ee1_Vtnode_GND=ex1_Vtnode_GND;
ee1_Vb_ci=ex1_Vb_ci;
#endif
ee1=(1.0+ex1);
EXIT_IF_ISNAN((1.0+ex1))
{
double m00_logE(d00_logE0,ee1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,ee1)
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj2_Vci_ei=0.0;
vj2_Vbi_ei=0.0;
vj2_Vs_ci=0.0;
vj2_Vbi_ci=((a_Vbi_ci*d00_logE0)+(a*ee1_Vbi_ci*d10_logE0));
vj2_Vtnode_GND=((-vp_Vtnode_GND)+((a_Vtnode_GND*d00_logE0)+(a*ee1_Vtnode_GND*d10_logE0)));
vj2_Vb_ci=((a_Vb_ci*d00_logE0)+(a*ee1_Vb_ci*d10_logE0));
#endif
vj2=((-vp)+(a*d00_logE0));
EXIT_IF_ISNAN(((-vp)+(a*d00_logE0)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj2_Vci_ei=0.0;
vj2_Vbi_ei=0.0;
vj2_Vs_ci=0.0;
vj2_Vbi_ci=vj1_Vbi_ci;
vj2_Vtnode_GND=vj1_Vtnode_GND;
vj2_Vb_ci=vj1_Vb_ci;
#endif
vj2=vj1;
EXIT_IF_ISNAN(vj1)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
vj4_Vs_ci=0.0;
vj4_Vci_ei=0.0;
vj4_Vbi_ei=0.0;
vj4_Vbi_ci=(Vbici_Vbi_ci-vj1_Vbi_ci);
vj4_Vb_ci=(-vj1_Vb_ci);
vj4_Vtnode_GND=(-vj1_Vtnode_GND);
#endif
vj4=(Vbici-vj1);
EXIT_IF_ISNAN((Vbici-vj1))
ez=(1.0-pModel->zcx);
EXIT_IF_ISNAN((1.0-pModel->zcx))
ezr=(1.0-zr);
EXIT_IF_ISNAN((1.0-zr))
{
double m00_logE(d00_logE0,(1.0-(vj1/vdcx_t)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0-(vj1/vdcx_t)))
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vdj1_Vci_ei=0.0;
vdj1_Vbi_ei=0.0;
vdj1_Vs_ci=0.0;
vdj1_Vbi_ci=(-(vj1_Vbi_ci/vdcx_t))*d10_logE0;
vdj1_Vtnode_GND=(-((vj1_Vtnode_GND*vdcx_t-vj1*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*d10_logE0;
vdj1_Vb_ci=(-(vj1_Vb_ci/vdcx_t))*d10_logE0;
#endif
vdj1=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
{
double m00_logE(d00_logE0,(1.0-(vj2/vdcx_t)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0-(vj2/vdcx_t)))
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vdj2_Vci_ei=0.0;
vdj2_Vbi_ei=0.0;
vdj2_Vs_ci=0.0;
vdj2_Vbi_ci=(-(vj2_Vbi_ci/vdcx_t))*d10_logE0;
vdj2_Vtnode_GND=(-((vj2_Vtnode_GND*vdcx_t-vj2*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*d10_logE0;
vdj2_Vb_ci=(-(vj2_Vb_ci/vdcx_t))*d10_logE0;
#endif
vdj2=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
{
double m00_exp(d00_exp0,(vdj2*ez))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj1_Vci_ei=0.0;
qj1_Vbi_ei=0.0;
qj1_Vs_ci=0.0;
qj1_Vbi_ci=((cjcx0_t_ii*(-vdj2_Vbi_ci*ez*d10_exp0))/ez);
qj1_Vtnode_GND=(((cjcx0_t_ii_Vtnode_GND*(1.0-d00_exp0))+(cjcx0_t_ii*(-vdj2_Vtnode_GND*ez*d10_exp0)))/ez);
qj1_Vb_ci=((cjcx0_t_ii*(-vdj2_Vb_ci*ez*d10_exp0))/ez);
#endif
qj1=((cjcx0_t_ii*(1.0-d00_exp0))/ez);
EXIT_IF_ISNAN(((cjcx0_t_ii*(1.0-d00_exp0))/ez))
}
{
double m00_exp(d00_exp0,(vdj1*ezr))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj2_Vci_ei=0.0;
qj2_Vbi_ei=0.0;
qj2_Vs_ci=0.0;
qj2_Vbi_ci=((cr*(-vdj1_Vbi_ci*ezr*d10_exp0))/ezr);
qj2_Vtnode_GND=(((cr_Vtnode_GND*(1.0-d00_exp0))+(cr*(-vdj1_Vtnode_GND*ezr*d10_exp0)))/ezr);
qj2_Vb_ci=((cr*(-vdj1_Vb_ci*ezr*d10_exp0))/ezr);
#endif
qj2=((cr*(1.0-d00_exp0))/ezr);
EXIT_IF_ISNAN(((cr*(1.0-d00_exp0))/ezr))
}
{
double m00_exp(d00_exp0,(vdj2*ezr))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj3_Vci_ei=0.0;
qj3_Vbi_ei=0.0;
qj3_Vs_ci=0.0;
qj3_Vbi_ci=((cr*(-vdj2_Vbi_ci*ezr*d10_exp0))/ezr);
qj3_Vtnode_GND=(((cr_Vtnode_GND*(1.0-d00_exp0))+(cr*(-vdj2_Vtnode_GND*ezr*d10_exp0)))/ezr);
qj3_Vb_ci=((cr*(-vdj2_Vb_ci*ezr*d10_exp0))/ezr);
#endif
qj3=((cr*(1.0-d00_exp0))/ezr);
EXIT_IF_ISNAN(((cr*(1.0-d00_exp0))/ezr))
}
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcxi_Vbi_ci=(((qj1_Vbi_ci+qj2_Vbi_ci)-qj3_Vbi_ci)*vdcx_t+(cmax*vj4_Vbi_ci));
qjcxi_Vtnode_GND=(((((qj1_Vtnode_GND+qj2_Vtnode_GND)-qj3_Vtnode_GND)*vdcx_t)+(((qj1+qj2)-qj3)*vdcx_t_Vtnode_GND))+((cmax_Vtnode_GND*vj4)+(cmax*vj4_Vtnode_GND)));
qjcxi_Vb_ci=(((qj1_Vb_ci+qj2_Vb_ci)-qj3_Vb_ci)*vdcx_t+(cmax*vj4_Vb_ci));
#endif
qjcxi=((((qj1+qj2)-qj3)*vdcx_t)+(cmax*vj4));
EXIT_IF_ISNAN(((((qj1+qj2)-qj3)*vdcx_t)+(cmax*vj4)))
#endif
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcxi_Vbi_ci=0.0;
qjcxi_Vtnode_GND=0.0;
qjcxi_Vb_ci=0.0;
#endif
qjcxi=0.0;
EXIT_IF_ISNAN(0.0)
#endif
}
}
else
{
if
((cjcx0_t_ii>0.0))
{
{
double m00_logE(d00_logE0,2.4)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->zcx))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=vdcx_t_Vtnode_GND*(1.0-d00_exp1);
#endif
vf=(vdcx_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vdcx_t*(1.0-d00_exp1)))
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf_Vs_ci=0.0;
#endif
xvf_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  xvf_Vbi_ei_Vs_ci=0.0;
  xvf_Vbi_ei_Vbi_ei=0.0;
  xvf_Vbi_ei_Vbi_ci=0.0;
  xvf_Vbi_ei_Vtnode_GND=0.0;
  xvf_Vbi_ei_Vb_ci=0.0;
#endif
xvf_Vbi_ci=((-Vbici_Vbi_ci)/VT);
#if defined(_DERIVATE2)
  xvf_Vbi_ci_Vs_ci=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*0.0+0.0*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ci_Vbi_ei=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*0.0+0.0*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ci_Vbi_ci=((+0.0-Vbici_Vbi_ci_Vbi_ci)/VT-((-Vbici_Vbi_ci)*0.0+(-Vbici_Vbi_ci)*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ci_Vtnode_GND=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*VT_Vtnode_GND+vf_Vtnode_GND*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*VT_Vtnode_GND/VT/VT/VT);
  xvf_Vbi_ci_Vb_ci=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*0.0+0.0*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
#endif
#if defined(_DERIVATE)
xvf_Vtnode_GND=((vf_Vtnode_GND*VT-(vf-Vbici)*VT_Vtnode_GND)/VT/VT);
#endif
#if defined(_DERIVATE)
xvf_Vb_ci=0.0;
#endif
#endif
xvf=((vf-Vbici)/VT);
EXIT_IF_ISNAN(((vf-Vbici)/VT))
{
double m00_sqrt(d00_sqrt0,((xvf*xvf)+1.921812))
#if defined(_DERIVATEFORDDX)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((xvf*xvf)+1.921812))
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf2_Vs_ci=0.0;
#endif
xvf2_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ei_Vs_ci=0.0;
  xvf2_Vbi_ei_Vbi_ei=0.0;
  xvf2_Vbi_ei_Vbi_ci=0.0;
  xvf2_Vbi_ei_Vtnode_GND=0.0;
  xvf2_Vbi_ei_Vb_ci=0.0;
#endif
xvf2_Vbi_ci=((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))*d10_sqrt0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ci_Vs_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vs_ci*xvf)+(xvf*xvf_Vs_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vs_ci*xvf+xvf_Vbi_ci*xvf_Vs_ci+xvf_Vs_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vs_ci)+0.0));
  xvf2_Vbi_ci_Vbi_ei=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ei*xvf+xvf_Vbi_ci*xvf_Vbi_ei+xvf_Vbi_ei*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ei)+0.0));
  xvf2_Vbi_ci_Vbi_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ci*xvf+xvf_Vbi_ci*xvf_Vbi_ci+xvf_Vbi_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ci)+0.0));
  xvf2_Vbi_ci_Vtnode_GND=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vtnode_GND*xvf+xvf_Vbi_ci*xvf_Vtnode_GND+xvf_Vtnode_GND*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vtnode_GND)+0.0));
  xvf2_Vbi_ci_Vb_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vb_ci*xvf+xvf_Vbi_ci*xvf_Vb_ci+xvf_Vb_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vb_ci)+0.0));
#endif
#if defined(_DERIVATE)
xvf2_Vtnode_GND=((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND))*d10_sqrt0;
#endif
#if defined(_DERIVATE)
xvf2_Vb_ci=((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci))*d10_sqrt0;
#endif
#endif
xvf2=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
v_j_Vs_ci=0.0;
#endif
v_j_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  v_j_Vbi_ei_Vs_ci=0.0;
  v_j_Vbi_ei_Vbi_ei=0.0;
  v_j_Vbi_ei_Vbi_ci=0.0;
  v_j_Vbi_ei_Vtnode_GND=0.0;
  v_j_Vbi_ei_Vb_ci=0.0;
#endif
v_j_Vbi_ci=(-(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.5);
#if defined(_DERIVATE2)
  v_j_Vbi_ci_Vs_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vs_ci+xvf2_Vs_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vs_ci+xvf2_Vbi_ci_Vs_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vs_ci+xvf2_Vs_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ei=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ei+xvf2_Vbi_ci_Vbi_ei))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ei+xvf2_Vbi_ei)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ci+xvf2_Vbi_ci_Vbi_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ci+xvf2_Vbi_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vtnode_GND=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vtnode_GND+xvf2_Vtnode_GND)+VT_Vtnode_GND*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vtnode_GND+xvf2_Vbi_ci_Vtnode_GND))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+(((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND))))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vb_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vb_ci+xvf2_Vb_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vb_ci+xvf2_Vbi_ci_Vb_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vb_ci+xvf2_Vb_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
#endif
#if defined(_DERIVATE)
v_j_Vtnode_GND=(vf_Vtnode_GND-((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND)))*0.5);
#endif
#if defined(_DERIVATE)
v_j_Vb_ci=(-(VT*(xvf_Vb_ci+xvf2_Vb_ci))*0.5);
#endif
#endif
v_j=(vf-((VT*(xvf+xvf2))*0.5));
EXIT_IF_ISNAN((vf-((VT*(xvf+xvf2))*0.5)))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei) ddxprobe=V(bi:GND) */
x_Vtnode_GND=0.0;
x_Vci_ei=0.0;
#endif
x=(1.0-pModel->zcx);
EXIT_IF_ISNAN((1.0-pModel->zcx))
{
double m00_logE(d00_logE0,(1.0-(v_j/vdcx_t)))
double m00_exp(d00_exp1,(x*d00_logE0))
#if defined(_DERIVATEFORDDX)
double m10_logE(d10_logE0,d00_logE0,(1.0-(v_j/vdcx_t)))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(ci:ei)V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
y_Vci_ei=0.0;
#endif
#if defined(_DERIVATE)
y_Vs_ci=0.0;
#endif
y_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  y_Vbi_ei_Vci_ei=0.0;
  y_Vbi_ei_Vs_ci=0.0;
  y_Vbi_ei_Vbi_ei=0.0;
  y_Vbi_ei_Vbi_ci=0.0;
  y_Vbi_ei_Vtnode_GND=0.0;
  y_Vbi_ei_Vb_ci=0.0;
#endif
y_Vbi_ci=(-(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)*d10_exp1);
#if defined(_DERIVATE2)
  y_Vbi_ci_Vci_ei=(+0.0-(m20_exp((x*d00_logE0))*(x_Vci_ei*d00_logE0)*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*0.0+x_Vci_ei*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*0.0)));
  y_Vbi_ci_Vs_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vs_ci/vdcx_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vs_ci/vdcx_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdcx_t)))*(-(v_j_Vs_ci/vdcx_t))*(-(v_j_Vbi_ci/vdcx_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vs_ci/vdcx_t-(v_j_Vbi_ci*0.0+v_j_Vs_ci*0.0+v_j*0.0)/vdcx_t/vdcx_t+2*v_j*0.0*0.0/vdcx_t/vdcx_t/vdcx_t))))));
  y_Vbi_ci_Vbi_ei=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ei/vdcx_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ei/vdcx_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdcx_t)))*(-(v_j_Vbi_ei/vdcx_t))*(-(v_j_Vbi_ci/vdcx_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vbi_ei/vdcx_t-(v_j_Vbi_ci*0.0+v_j_Vbi_ei*0.0+v_j*0.0)/vdcx_t/vdcx_t+2*v_j*0.0*0.0/vdcx_t/vdcx_t/vdcx_t))))));
  y_Vbi_ci_Vbi_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdcx_t)))*(-(v_j_Vbi_ci/vdcx_t))*(-(v_j_Vbi_ci/vdcx_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vbi_ci/vdcx_t-(v_j_Vbi_ci*0.0+v_j_Vbi_ci*0.0+v_j*0.0)/vdcx_t/vdcx_t+2*v_j*0.0*0.0/vdcx_t/vdcx_t/vdcx_t))))));
  y_Vbi_ci_Vtnode_GND=(+0.0-(m20_exp((x*d00_logE0))*(((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vdcx_t-v_j*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*d10_logE0)))*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-((v_j_Vtnode_GND*vdcx_t-v_j*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*d10_logE0+x_Vtnode_GND*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdcx_t)))*(-((v_j_Vtnode_GND*vdcx_t-v_j*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*(-(v_j_Vbi_ci/vdcx_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vtnode_GND/vdcx_t-(v_j_Vbi_ci*vdcx_t_Vtnode_GND+v_j_Vtnode_GND*0.0+v_j*0.0)/vdcx_t/vdcx_t+2*v_j*0.0*vdcx_t_Vtnode_GND/vdcx_t/vdcx_t/vdcx_t))))));
  y_Vbi_ci_Vb_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vb_ci/vdcx_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vb_ci/vdcx_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdcx_t)))*(-(v_j_Vb_ci/vdcx_t))*(-(v_j_Vbi_ci/vdcx_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vb_ci/vdcx_t-(v_j_Vbi_ci*0.0+v_j_Vb_ci*0.0+v_j*0.0)/vdcx_t/vdcx_t+2*v_j*0.0*0.0/vdcx_t/vdcx_t/vdcx_t))))));
#endif
#if defined(_DERIVATE)
y_Vtnode_GND=(-((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vdcx_t-v_j*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*d10_logE0))*d10_exp1);
#endif
#if defined(_DERIVATE)
y_Vb_ci=(-(x*(-(v_j_Vb_ci/vdcx_t))*d10_logE0)*d10_exp1);
#endif
#endif
y=(1.0-d00_exp1);
EXIT_IF_ISNAN((1.0-d00_exp1))
}
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcxi_Vbi_ci=((((cjcx0_t_ii*vdcx_t)*y_Vbi_ci)/x)+((2.4*cjcx0_t_ii)*(Vbici_Vbi_ci-v_j_Vbi_ci)));
qjcxi_Vtnode_GND=(((((((cjcx0_t_ii_Vtnode_GND*vdcx_t)+(cjcx0_t_ii*vdcx_t_Vtnode_GND))*y)+((cjcx0_t_ii*vdcx_t)*y_Vtnode_GND))*x-((cjcx0_t_ii*vdcx_t)*y)*x_Vtnode_GND)/x/x)+(((2.4*cjcx0_t_ii_Vtnode_GND)*(Vbici-v_j))+((2.4*cjcx0_t_ii)*(-v_j_Vtnode_GND))));
qjcxi_Vb_ci=((((cjcx0_t_ii*vdcx_t)*y_Vb_ci)/x)+((2.4*cjcx0_t_ii)*(-v_j_Vb_ci)));
#endif
qjcxi=((((cjcx0_t_ii*vdcx_t)*y)/x)+((2.4*cjcx0_t_ii)*(Vbici-v_j)));
EXIT_IF_ISNAN(((((cjcx0_t_ii*vdcx_t)*y)/x)+((2.4*cjcx0_t_ii)*(Vbici-v_j))))
#endif
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcxi_Vbi_ci=0.0;
qjcxi_Vtnode_GND=0.0;
qjcxi_Vb_ci=0.0;
#endif
qjcxi=0.0;
EXIT_IF_ISNAN(0.0)
#endif
}
}
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cjcx0_t_i_Vtnode_GND=cjcx0_t_Vtnode_GND*(1-pModel->fbc);
#endif
cjcx0_t_i=(cjcx0_t*(1-pModel->fbc));
EXIT_IF_ISNAN((cjcx0_t*(1-pModel->fbc)))
if
((pModel->vptcx<1.0e2))
{
if
((cjcx0_t_i>0.0))
{
zr=(pModel->zcx/4.0);
EXIT_IF_ISNAN((pModel->zcx/4.0))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
vp_Vtnode_GND=(-vdcx_t_Vtnode_GND);
#endif
vp=(pModel->vptcx-vdcx_t);
EXIT_IF_ISNAN((pModel->vptcx-vdcx_t))
{
double m00_logE(d00_logE0,2.4)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->zcx))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=vdcx_t_Vtnode_GND*(1.0-d00_exp1);
#endif
vf=(vdcx_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vdcx_t*(1.0-d00_exp1)))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cmax_Vtnode_GND=(2.4*cjcx0_t_i_Vtnode_GND);
#endif
cmax=(2.4*cjcx0_t_i);
EXIT_IF_ISNAN((2.4*cjcx0_t_i))
{
double m00_logE(d00_logE0,(vdcx_t/pModel->vptcx))
double m00_exp(d00_exp1,((pModel->zcx-zr)*d00_logE0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(vdcx_t/pModel->vptcx))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cr_Vtnode_GND=((cjcx0_t_i_Vtnode_GND*d00_exp1)+(cjcx0_t_i*((pModel->zcx-zr)*(vdcx_t_Vtnode_GND/pModel->vptcx)*d10_logE0)*d10_exp1));
#endif
cr=(cjcx0_t_i*d00_exp1);
EXIT_IF_ISNAN((cjcx0_t_i*d00_exp1))
}
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
a_Vci_ei=0.0;
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vb_ci=0.0;
a_Vtnode_GND=VT_Vtnode_GND;
#endif
a=VT;
EXIT_IF_ISNAN(VT)
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ve_Vs_ci=0.0;
ve_Vci_ei=0.0;
ve_Vbi_ei=0.0;
ve_Vbi_ci=0.0;
ve_Vtnode_GND=((vf_Vtnode_GND*a-(vf-Vbci)*a_Vtnode_GND)/a/a);
ve_Vb_ci=(((-Vbci_Vb_ci)*a-(vf-Vbci)*a_Vb_ci)/a/a);
#endif
ve=((vf-Vbci)/a);
EXIT_IF_ISNAN(((vf-Vbci)/a))
if
((ve<=80.0))
{
{
double m00_exp(d00_exp0,ve)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ex1_Vs_ci=0.0;
ex1_Vci_ei=0.0;
ex1_Vbi_ei=0.0;
ex1_Vbi_ci=ve_Vbi_ci*d10_exp0;
ex1_Vtnode_GND=ve_Vtnode_GND*d10_exp0;
ex1_Vb_ci=ve_Vb_ci*d10_exp0;
#endif
ex1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ee1_Vs_ci=0.0;
ee1_Vci_ei=0.0;
ee1_Vbi_ei=0.0;
ee1_Vbi_ci=ex1_Vbi_ci;
ee1_Vtnode_GND=ex1_Vtnode_GND;
ee1_Vb_ci=ex1_Vb_ci;
#endif
ee1=(1.0+ex1);
EXIT_IF_ISNAN((1.0+ex1))
{
double m00_logE(d00_logE0,ee1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,ee1)
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj1_Vci_ei=0.0;
vj1_Vbi_ei=0.0;
vj1_Vs_ci=0.0;
vj1_Vbi_ci=(-((a_Vbi_ci*d00_logE0)+(a*ee1_Vbi_ci*d10_logE0)));
vj1_Vtnode_GND=(vf_Vtnode_GND-((a_Vtnode_GND*d00_logE0)+(a*ee1_Vtnode_GND*d10_logE0)));
vj1_Vb_ci=(-((a_Vb_ci*d00_logE0)+(a*ee1_Vb_ci*d10_logE0)));
#endif
vj1=(vf-(a*d00_logE0));
EXIT_IF_ISNAN((vf-(a*d00_logE0)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj1_Vci_ei=0.0;
vj1_Vbi_ei=0.0;
vj1_Vs_ci=0.0;
vj1_Vbi_ci=0.0;
vj1_Vtnode_GND=0.0;
vj1_Vb_ci=Vbci_Vb_ci;
#endif
vj1=Vbci;
EXIT_IF_ISNAN(Vbci)
}
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
a_Vci_ei=0.0;
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vb_ci=0.0;
a_Vtnode_GND=((0.1*vp_Vtnode_GND)+(4.0*VT_Vtnode_GND));
#endif
a=((0.1*vp)+(4.0*VT));
EXIT_IF_ISNAN(((0.1*vp)+(4.0*VT)))
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vr_Vci_ei=0.0;
vr_Vbi_ei=0.0;
vr_Vs_ci=0.0;
vr_Vbi_ci=((vj1_Vbi_ci*a-(vp+vj1)*a_Vbi_ci)/a/a);
vr_Vtnode_GND=(((vp_Vtnode_GND+vj1_Vtnode_GND)*a-(vp+vj1)*a_Vtnode_GND)/a/a);
vr_Vb_ci=((vj1_Vb_ci*a-(vp+vj1)*a_Vb_ci)/a/a);
#endif
vr=((vp+vj1)/a);
EXIT_IF_ISNAN(((vp+vj1)/a))
if
((vr<=80.0))
{
{
double m00_exp(d00_exp0,vr)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ex1_Vs_ci=0.0;
ex1_Vci_ei=0.0;
ex1_Vbi_ei=0.0;
ex1_Vbi_ci=vr_Vbi_ci*d10_exp0;
ex1_Vtnode_GND=vr_Vtnode_GND*d10_exp0;
ex1_Vb_ci=vr_Vb_ci*d10_exp0;
#endif
ex1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ee1_Vs_ci=0.0;
ee1_Vci_ei=0.0;
ee1_Vbi_ei=0.0;
ee1_Vbi_ci=ex1_Vbi_ci;
ee1_Vtnode_GND=ex1_Vtnode_GND;
ee1_Vb_ci=ex1_Vb_ci;
#endif
ee1=(1.0+ex1);
EXIT_IF_ISNAN((1.0+ex1))
{
double m00_logE(d00_logE0,ee1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,ee1)
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj2_Vci_ei=0.0;
vj2_Vbi_ei=0.0;
vj2_Vs_ci=0.0;
vj2_Vbi_ci=((a_Vbi_ci*d00_logE0)+(a*ee1_Vbi_ci*d10_logE0));
vj2_Vtnode_GND=((-vp_Vtnode_GND)+((a_Vtnode_GND*d00_logE0)+(a*ee1_Vtnode_GND*d10_logE0)));
vj2_Vb_ci=((a_Vb_ci*d00_logE0)+(a*ee1_Vb_ci*d10_logE0));
#endif
vj2=((-vp)+(a*d00_logE0));
EXIT_IF_ISNAN(((-vp)+(a*d00_logE0)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj2_Vci_ei=0.0;
vj2_Vbi_ei=0.0;
vj2_Vs_ci=0.0;
vj2_Vbi_ci=vj1_Vbi_ci;
vj2_Vtnode_GND=vj1_Vtnode_GND;
vj2_Vb_ci=vj1_Vb_ci;
#endif
vj2=vj1;
EXIT_IF_ISNAN(vj1)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
vj4_Vs_ci=0.0;
vj4_Vci_ei=0.0;
vj4_Vbi_ei=0.0;
vj4_Vbi_ci=(-vj1_Vbi_ci);
vj4_Vb_ci=(Vbci_Vb_ci-vj1_Vb_ci);
vj4_Vtnode_GND=(-vj1_Vtnode_GND);
#endif
vj4=(Vbci-vj1);
EXIT_IF_ISNAN((Vbci-vj1))
ez=(1.0-pModel->zcx);
EXIT_IF_ISNAN((1.0-pModel->zcx))
ezr=(1.0-zr);
EXIT_IF_ISNAN((1.0-zr))
{
double m00_logE(d00_logE0,(1.0-(vj1/vdcx_t)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0-(vj1/vdcx_t)))
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vdj1_Vci_ei=0.0;
vdj1_Vbi_ei=0.0;
vdj1_Vs_ci=0.0;
vdj1_Vbi_ci=(-(vj1_Vbi_ci/vdcx_t))*d10_logE0;
vdj1_Vtnode_GND=(-((vj1_Vtnode_GND*vdcx_t-vj1*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*d10_logE0;
vdj1_Vb_ci=(-(vj1_Vb_ci/vdcx_t))*d10_logE0;
#endif
vdj1=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
{
double m00_logE(d00_logE0,(1.0-(vj2/vdcx_t)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0-(vj2/vdcx_t)))
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vdj2_Vci_ei=0.0;
vdj2_Vbi_ei=0.0;
vdj2_Vs_ci=0.0;
vdj2_Vbi_ci=(-(vj2_Vbi_ci/vdcx_t))*d10_logE0;
vdj2_Vtnode_GND=(-((vj2_Vtnode_GND*vdcx_t-vj2*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*d10_logE0;
vdj2_Vb_ci=(-(vj2_Vb_ci/vdcx_t))*d10_logE0;
#endif
vdj2=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
{
double m00_exp(d00_exp0,(vdj2*ez))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj1_Vci_ei=0.0;
qj1_Vbi_ei=0.0;
qj1_Vs_ci=0.0;
qj1_Vbi_ci=((cjcx0_t_i*(-vdj2_Vbi_ci*ez*d10_exp0))/ez);
qj1_Vtnode_GND=(((cjcx0_t_i_Vtnode_GND*(1.0-d00_exp0))+(cjcx0_t_i*(-vdj2_Vtnode_GND*ez*d10_exp0)))/ez);
qj1_Vb_ci=((cjcx0_t_i*(-vdj2_Vb_ci*ez*d10_exp0))/ez);
#endif
qj1=((cjcx0_t_i*(1.0-d00_exp0))/ez);
EXIT_IF_ISNAN(((cjcx0_t_i*(1.0-d00_exp0))/ez))
}
{
double m00_exp(d00_exp0,(vdj1*ezr))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj2_Vci_ei=0.0;
qj2_Vbi_ei=0.0;
qj2_Vs_ci=0.0;
qj2_Vbi_ci=((cr*(-vdj1_Vbi_ci*ezr*d10_exp0))/ezr);
qj2_Vtnode_GND=(((cr_Vtnode_GND*(1.0-d00_exp0))+(cr*(-vdj1_Vtnode_GND*ezr*d10_exp0)))/ezr);
qj2_Vb_ci=((cr*(-vdj1_Vb_ci*ezr*d10_exp0))/ezr);
#endif
qj2=((cr*(1.0-d00_exp0))/ezr);
EXIT_IF_ISNAN(((cr*(1.0-d00_exp0))/ezr))
}
{
double m00_exp(d00_exp0,(vdj2*ezr))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj3_Vci_ei=0.0;
qj3_Vbi_ei=0.0;
qj3_Vs_ci=0.0;
qj3_Vbi_ci=((cr*(-vdj2_Vbi_ci*ezr*d10_exp0))/ezr);
qj3_Vtnode_GND=(((cr_Vtnode_GND*(1.0-d00_exp0))+(cr*(-vdj2_Vtnode_GND*ezr*d10_exp0)))/ezr);
qj3_Vb_ci=((cr*(-vdj2_Vb_ci*ezr*d10_exp0))/ezr);
#endif
qj3=((cr*(1.0-d00_exp0))/ezr);
EXIT_IF_ISNAN(((cr*(1.0-d00_exp0))/ezr))
}
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcx_Vbi_ci=(((qj1_Vbi_ci+qj2_Vbi_ci)-qj3_Vbi_ci)*vdcx_t+(cmax*vj4_Vbi_ci));
qjcx_Vtnode_GND=(((((qj1_Vtnode_GND+qj2_Vtnode_GND)-qj3_Vtnode_GND)*vdcx_t)+(((qj1+qj2)-qj3)*vdcx_t_Vtnode_GND))+((cmax_Vtnode_GND*vj4)+(cmax*vj4_Vtnode_GND)));
qjcx_Vb_ci=(((qj1_Vb_ci+qj2_Vb_ci)-qj3_Vb_ci)*vdcx_t+(cmax*vj4_Vb_ci));
#endif
qjcx=((((qj1+qj2)-qj3)*vdcx_t)+(cmax*vj4));
EXIT_IF_ISNAN(((((qj1+qj2)-qj3)*vdcx_t)+(cmax*vj4)))
#endif
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcx_Vbi_ci=0.0;
qjcx_Vtnode_GND=0.0;
qjcx_Vb_ci=0.0;
#endif
qjcx=0.0;
EXIT_IF_ISNAN(0.0)
#endif
}
}
else
{
if
((cjcx0_t_i>0.0))
{
{
double m00_logE(d00_logE0,2.4)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->zcx))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=vdcx_t_Vtnode_GND*(1.0-d00_exp1);
#endif
vf=(vdcx_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vdcx_t*(1.0-d00_exp1)))
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf_Vs_ci=0.0;
#endif
xvf_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  xvf_Vbi_ei_Vs_ci=0.0;
  xvf_Vbi_ei_Vbi_ei=0.0;
  xvf_Vbi_ei_Vbi_ci=0.0;
  xvf_Vbi_ei_Vtnode_GND=0.0;
  xvf_Vbi_ei_Vb_ci=0.0;
#endif
xvf_Vbi_ci=0.0;
#if defined(_DERIVATE2)
  xvf_Vbi_ci_Vs_ci=0.0;
  xvf_Vbi_ci_Vbi_ei=0.0;
  xvf_Vbi_ci_Vbi_ci=0.0;
  xvf_Vbi_ci_Vtnode_GND=0.0;
  xvf_Vbi_ci_Vb_ci=0.0;
#endif
#if defined(_DERIVATE)
xvf_Vtnode_GND=((vf_Vtnode_GND*VT-(vf-Vbci)*VT_Vtnode_GND)/VT/VT);
#endif
#if defined(_DERIVATE)
xvf_Vb_ci=((-Vbci_Vb_ci)/VT);
#endif
#endif
xvf=((vf-Vbci)/VT);
EXIT_IF_ISNAN(((vf-Vbci)/VT))
{
double m00_sqrt(d00_sqrt0,((xvf*xvf)+1.921812))
#if defined(_DERIVATEFORDDX)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((xvf*xvf)+1.921812))
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf2_Vs_ci=0.0;
#endif
xvf2_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ei_Vs_ci=0.0;
  xvf2_Vbi_ei_Vbi_ei=0.0;
  xvf2_Vbi_ei_Vbi_ci=0.0;
  xvf2_Vbi_ei_Vtnode_GND=0.0;
  xvf2_Vbi_ei_Vb_ci=0.0;
#endif
xvf2_Vbi_ci=((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))*d10_sqrt0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ci_Vs_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vs_ci*xvf)+(xvf*xvf_Vs_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vs_ci*xvf+xvf_Vbi_ci*xvf_Vs_ci+xvf_Vs_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vs_ci)+0.0));
  xvf2_Vbi_ci_Vbi_ei=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ei*xvf+xvf_Vbi_ci*xvf_Vbi_ei+xvf_Vbi_ei*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ei)+0.0));
  xvf2_Vbi_ci_Vbi_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ci*xvf+xvf_Vbi_ci*xvf_Vbi_ci+xvf_Vbi_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ci)+0.0));
  xvf2_Vbi_ci_Vtnode_GND=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vtnode_GND*xvf+xvf_Vbi_ci*xvf_Vtnode_GND+xvf_Vtnode_GND*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vtnode_GND)+0.0));
  xvf2_Vbi_ci_Vb_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vb_ci*xvf+xvf_Vbi_ci*xvf_Vb_ci+xvf_Vb_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vb_ci)+0.0));
#endif
#if defined(_DERIVATE)
xvf2_Vtnode_GND=((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND))*d10_sqrt0;
#endif
#if defined(_DERIVATE)
xvf2_Vb_ci=((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci))*d10_sqrt0;
#endif
#endif
xvf2=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
v_j_Vs_ci=0.0;
#endif
v_j_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  v_j_Vbi_ei_Vs_ci=0.0;
  v_j_Vbi_ei_Vbi_ei=0.0;
  v_j_Vbi_ei_Vbi_ci=0.0;
  v_j_Vbi_ei_Vtnode_GND=0.0;
  v_j_Vbi_ei_Vb_ci=0.0;
#endif
v_j_Vbi_ci=(-(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.5);
#if defined(_DERIVATE2)
  v_j_Vbi_ci_Vs_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vs_ci+xvf2_Vs_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vs_ci+xvf2_Vbi_ci_Vs_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vs_ci+xvf2_Vs_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ei=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ei+xvf2_Vbi_ci_Vbi_ei))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ei+xvf2_Vbi_ei)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ci+xvf2_Vbi_ci_Vbi_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ci+xvf2_Vbi_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vtnode_GND=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vtnode_GND+xvf2_Vtnode_GND)+VT_Vtnode_GND*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vtnode_GND+xvf2_Vbi_ci_Vtnode_GND))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+(((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND))))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vb_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vb_ci+xvf2_Vb_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vb_ci+xvf2_Vbi_ci_Vb_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vb_ci+xvf2_Vb_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
#endif
#if defined(_DERIVATE)
v_j_Vtnode_GND=(vf_Vtnode_GND-((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND)))*0.5);
#endif
#if defined(_DERIVATE)
v_j_Vb_ci=(-(VT*(xvf_Vb_ci+xvf2_Vb_ci))*0.5);
#endif
#endif
v_j=(vf-((VT*(xvf+xvf2))*0.5));
EXIT_IF_ISNAN((vf-((VT*(xvf+xvf2))*0.5)))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei) ddxprobe=V(bi:GND) */
x_Vtnode_GND=0.0;
x_Vci_ei=0.0;
#endif
x=(1.0-pModel->zcx);
EXIT_IF_ISNAN((1.0-pModel->zcx))
{
double m00_logE(d00_logE0,(1.0-(v_j/vdcx_t)))
double m00_exp(d00_exp1,(x*d00_logE0))
#if defined(_DERIVATEFORDDX)
double m10_logE(d10_logE0,d00_logE0,(1.0-(v_j/vdcx_t)))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(ci:ei)V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
y_Vci_ei=0.0;
#endif
#if defined(_DERIVATE)
y_Vs_ci=0.0;
#endif
y_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  y_Vbi_ei_Vci_ei=0.0;
  y_Vbi_ei_Vs_ci=0.0;
  y_Vbi_ei_Vbi_ei=0.0;
  y_Vbi_ei_Vbi_ci=0.0;
  y_Vbi_ei_Vtnode_GND=0.0;
  y_Vbi_ei_Vb_ci=0.0;
#endif
y_Vbi_ci=(-(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)*d10_exp1);
#if defined(_DERIVATE2)
  y_Vbi_ci_Vci_ei=(+0.0-(m20_exp((x*d00_logE0))*(x_Vci_ei*d00_logE0)*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*0.0+x_Vci_ei*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*0.0)));
  y_Vbi_ci_Vs_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vs_ci/vdcx_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vs_ci/vdcx_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdcx_t)))*(-(v_j_Vs_ci/vdcx_t))*(-(v_j_Vbi_ci/vdcx_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vs_ci/vdcx_t-(v_j_Vbi_ci*0.0+v_j_Vs_ci*0.0+v_j*0.0)/vdcx_t/vdcx_t+2*v_j*0.0*0.0/vdcx_t/vdcx_t/vdcx_t))))));
  y_Vbi_ci_Vbi_ei=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ei/vdcx_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ei/vdcx_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdcx_t)))*(-(v_j_Vbi_ei/vdcx_t))*(-(v_j_Vbi_ci/vdcx_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vbi_ei/vdcx_t-(v_j_Vbi_ci*0.0+v_j_Vbi_ei*0.0+v_j*0.0)/vdcx_t/vdcx_t+2*v_j*0.0*0.0/vdcx_t/vdcx_t/vdcx_t))))));
  y_Vbi_ci_Vbi_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdcx_t)))*(-(v_j_Vbi_ci/vdcx_t))*(-(v_j_Vbi_ci/vdcx_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vbi_ci/vdcx_t-(v_j_Vbi_ci*0.0+v_j_Vbi_ci*0.0+v_j*0.0)/vdcx_t/vdcx_t+2*v_j*0.0*0.0/vdcx_t/vdcx_t/vdcx_t))))));
  y_Vbi_ci_Vtnode_GND=(+0.0-(m20_exp((x*d00_logE0))*(((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vdcx_t-v_j*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*d10_logE0)))*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-((v_j_Vtnode_GND*vdcx_t-v_j*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*d10_logE0+x_Vtnode_GND*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdcx_t)))*(-((v_j_Vtnode_GND*vdcx_t-v_j*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*(-(v_j_Vbi_ci/vdcx_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vtnode_GND/vdcx_t-(v_j_Vbi_ci*vdcx_t_Vtnode_GND+v_j_Vtnode_GND*0.0+v_j*0.0)/vdcx_t/vdcx_t+2*v_j*0.0*vdcx_t_Vtnode_GND/vdcx_t/vdcx_t/vdcx_t))))));
  y_Vbi_ci_Vb_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vb_ci/vdcx_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vb_ci/vdcx_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdcx_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdcx_t)))*(-(v_j_Vb_ci/vdcx_t))*(-(v_j_Vbi_ci/vdcx_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vb_ci/vdcx_t-(v_j_Vbi_ci*0.0+v_j_Vb_ci*0.0+v_j*0.0)/vdcx_t/vdcx_t+2*v_j*0.0*0.0/vdcx_t/vdcx_t/vdcx_t))))));
#endif
#if defined(_DERIVATE)
y_Vtnode_GND=(-((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vdcx_t-v_j*vdcx_t_Vtnode_GND)/vdcx_t/vdcx_t))*d10_logE0))*d10_exp1);
#endif
#if defined(_DERIVATE)
y_Vb_ci=(-(x*(-(v_j_Vb_ci/vdcx_t))*d10_logE0)*d10_exp1);
#endif
#endif
y=(1.0-d00_exp1);
EXIT_IF_ISNAN((1.0-d00_exp1))
}
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcx_Vbi_ci=((((cjcx0_t_i*vdcx_t)*y_Vbi_ci)/x)+((2.4*cjcx0_t_i)*(-v_j_Vbi_ci)));
qjcx_Vtnode_GND=(((((((cjcx0_t_i_Vtnode_GND*vdcx_t)+(cjcx0_t_i*vdcx_t_Vtnode_GND))*y)+((cjcx0_t_i*vdcx_t)*y_Vtnode_GND))*x-((cjcx0_t_i*vdcx_t)*y)*x_Vtnode_GND)/x/x)+(((2.4*cjcx0_t_i_Vtnode_GND)*(Vbci-v_j))+((2.4*cjcx0_t_i)*(-v_j_Vtnode_GND))));
qjcx_Vb_ci=((((cjcx0_t_i*vdcx_t)*y_Vb_ci)/x)+((2.4*cjcx0_t_i)*(Vbci_Vb_ci-v_j_Vb_ci)));
#endif
qjcx=((((cjcx0_t_i*vdcx_t)*y)/x)+((2.4*cjcx0_t_i)*(Vbci-v_j)));
EXIT_IF_ISNAN(((((cjcx0_t_i*vdcx_t)*y)/x)+((2.4*cjcx0_t_i)*(Vbci-v_j))))
#endif
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcx_Vbi_ci=0.0;
qjcx_Vtnode_GND=0.0;
qjcx_Vb_ci=0.0;
#endif
qjcx=0.0;
EXIT_IF_ISNAN(0.0)
#endif
}
}
}
if
((pModel->vptci<1.0e2))
{
if
((cjci0_t_ii>0.0))
{
zr=(pModel->zci/4.0);
EXIT_IF_ISNAN((pModel->zci/4.0))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
vp_Vtnode_GND=(-vdci_t_Vtnode_GND);
#endif
vp=(pModel->vptci-vdci_t);
EXIT_IF_ISNAN((pModel->vptci-vdci_t))
{
double m00_logE(d00_logE0,2.4)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->zci))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=vdci_t_Vtnode_GND*(1.0-d00_exp1);
#endif
vf=(vdci_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vdci_t*(1.0-d00_exp1)))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cmax_Vtnode_GND=(2.4*cjci0_t_ii_Vtnode_GND);
#endif
cmax=(2.4*cjci0_t_ii);
EXIT_IF_ISNAN((2.4*cjci0_t_ii))
{
double m00_logE(d00_logE0,(vdci_t/pModel->vptci))
double m00_exp(d00_exp1,((pModel->zci-zr)*d00_logE0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(vdci_t/pModel->vptci))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cr_Vtnode_GND=((cjci0_t_ii_Vtnode_GND*d00_exp1)+(cjci0_t_ii*((pModel->zci-zr)*(vdci_t_Vtnode_GND/pModel->vptci)*d10_logE0)*d10_exp1));
#endif
cr=(cjci0_t_ii*d00_exp1);
EXIT_IF_ISNAN((cjci0_t_ii*d00_exp1))
}
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
a_Vci_ei=0.0;
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vb_ci=0.0;
a_Vtnode_GND=VT_Vtnode_GND;
#endif
a=VT;
EXIT_IF_ISNAN(VT)
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ve_Vs_ci=0.0;
ve_Vci_ei=0.0;
ve_Vbi_ei=0.0;
ve_Vbi_ci=(((-Vbici_Vbi_ci)*a-(vf-Vbici)*a_Vbi_ci)/a/a);
ve_Vtnode_GND=((vf_Vtnode_GND*a-(vf-Vbici)*a_Vtnode_GND)/a/a);
ve_Vb_ci=0.0;
#endif
ve=((vf-Vbici)/a);
EXIT_IF_ISNAN(((vf-Vbici)/a))
if
((ve<=80.0))
{
{
double m00_exp(d00_exp0,ve)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ex1_Vs_ci=0.0;
ex1_Vci_ei=0.0;
ex1_Vbi_ei=0.0;
ex1_Vbi_ci=ve_Vbi_ci*d10_exp0;
ex1_Vtnode_GND=ve_Vtnode_GND*d10_exp0;
ex1_Vb_ci=ve_Vb_ci*d10_exp0;
#endif
ex1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ee1_Vs_ci=0.0;
ee1_Vci_ei=0.0;
ee1_Vbi_ei=0.0;
ee1_Vbi_ci=ex1_Vbi_ci;
ee1_Vtnode_GND=ex1_Vtnode_GND;
ee1_Vb_ci=ex1_Vb_ci;
#endif
ee1=(1.0+ex1);
EXIT_IF_ISNAN((1.0+ex1))
{
double m00_logE(d00_logE0,ee1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,ee1)
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj1_Vci_ei=0.0;
vj1_Vbi_ei=0.0;
vj1_Vs_ci=0.0;
vj1_Vbi_ci=(-((a_Vbi_ci*d00_logE0)+(a*ee1_Vbi_ci*d10_logE0)));
vj1_Vtnode_GND=(vf_Vtnode_GND-((a_Vtnode_GND*d00_logE0)+(a*ee1_Vtnode_GND*d10_logE0)));
vj1_Vb_ci=(-((a_Vb_ci*d00_logE0)+(a*ee1_Vb_ci*d10_logE0)));
#endif
vj1=(vf-(a*d00_logE0));
EXIT_IF_ISNAN((vf-(a*d00_logE0)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj1_Vci_ei=0.0;
vj1_Vbi_ei=0.0;
vj1_Vs_ci=0.0;
vj1_Vbi_ci=Vbici_Vbi_ci;
vj1_Vtnode_GND=0.0;
vj1_Vb_ci=0.0;
#endif
vj1=Vbici;
EXIT_IF_ISNAN(Vbici)
}
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
a_Vci_ei=0.0;
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vb_ci=0.0;
a_Vtnode_GND=((0.1*vp_Vtnode_GND)+(4.0*VT_Vtnode_GND));
#endif
a=((0.1*vp)+(4.0*VT));
EXIT_IF_ISNAN(((0.1*vp)+(4.0*VT)))
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vr_Vci_ei=0.0;
vr_Vbi_ei=0.0;
vr_Vs_ci=0.0;
vr_Vbi_ci=((vj1_Vbi_ci*a-(vp+vj1)*a_Vbi_ci)/a/a);
vr_Vtnode_GND=(((vp_Vtnode_GND+vj1_Vtnode_GND)*a-(vp+vj1)*a_Vtnode_GND)/a/a);
vr_Vb_ci=((vj1_Vb_ci*a-(vp+vj1)*a_Vb_ci)/a/a);
#endif
vr=((vp+vj1)/a);
EXIT_IF_ISNAN(((vp+vj1)/a))
if
((vr<=80.0))
{
{
double m00_exp(d00_exp0,vr)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ex1_Vs_ci=0.0;
ex1_Vci_ei=0.0;
ex1_Vbi_ei=0.0;
ex1_Vbi_ci=vr_Vbi_ci*d10_exp0;
ex1_Vtnode_GND=vr_Vtnode_GND*d10_exp0;
ex1_Vb_ci=vr_Vb_ci*d10_exp0;
#endif
ex1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ee1_Vs_ci=0.0;
ee1_Vci_ei=0.0;
ee1_Vbi_ei=0.0;
ee1_Vbi_ci=ex1_Vbi_ci;
ee1_Vtnode_GND=ex1_Vtnode_GND;
ee1_Vb_ci=ex1_Vb_ci;
#endif
ee1=(1.0+ex1);
EXIT_IF_ISNAN((1.0+ex1))
{
double m00_logE(d00_logE0,ee1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,ee1)
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj2_Vci_ei=0.0;
vj2_Vbi_ei=0.0;
vj2_Vs_ci=0.0;
vj2_Vbi_ci=((a_Vbi_ci*d00_logE0)+(a*ee1_Vbi_ci*d10_logE0));
vj2_Vtnode_GND=((-vp_Vtnode_GND)+((a_Vtnode_GND*d00_logE0)+(a*ee1_Vtnode_GND*d10_logE0)));
vj2_Vb_ci=((a_Vb_ci*d00_logE0)+(a*ee1_Vb_ci*d10_logE0));
#endif
vj2=((-vp)+(a*d00_logE0));
EXIT_IF_ISNAN(((-vp)+(a*d00_logE0)))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj2_Vci_ei=0.0;
vj2_Vbi_ei=0.0;
vj2_Vs_ci=0.0;
vj2_Vbi_ci=vj1_Vbi_ci;
vj2_Vtnode_GND=vj1_Vtnode_GND;
vj2_Vb_ci=vj1_Vb_ci;
#endif
vj2=vj1;
EXIT_IF_ISNAN(vj1)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
vj4_Vs_ci=0.0;
vj4_Vci_ei=0.0;
vj4_Vbi_ei=0.0;
vj4_Vbi_ci=(Vbici_Vbi_ci-vj1_Vbi_ci);
vj4_Vb_ci=(-vj1_Vb_ci);
vj4_Vtnode_GND=(-vj1_Vtnode_GND);
#endif
vj4=(Vbici-vj1);
EXIT_IF_ISNAN((Vbici-vj1))
ez=(1.0-pModel->zci);
EXIT_IF_ISNAN((1.0-pModel->zci))
ezr=(1.0-zr);
EXIT_IF_ISNAN((1.0-zr))
{
double m00_logE(d00_logE0,(1.0-(vj1/vdci_t)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0-(vj1/vdci_t)))
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vdj1_Vci_ei=0.0;
vdj1_Vbi_ei=0.0;
vdj1_Vs_ci=0.0;
vdj1_Vbi_ci=(-(vj1_Vbi_ci/vdci_t))*d10_logE0;
vdj1_Vtnode_GND=(-((vj1_Vtnode_GND*vdci_t-vj1*vdci_t_Vtnode_GND)/vdci_t/vdci_t))*d10_logE0;
vdj1_Vb_ci=(-(vj1_Vb_ci/vdci_t))*d10_logE0;
#endif
vdj1=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
{
double m00_logE(d00_logE0,(1.0-(vj2/vdci_t)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0-(vj2/vdci_t)))
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vdj2_Vci_ei=0.0;
vdj2_Vbi_ei=0.0;
vdj2_Vs_ci=0.0;
vdj2_Vbi_ci=(-(vj2_Vbi_ci/vdci_t))*d10_logE0;
vdj2_Vtnode_GND=(-((vj2_Vtnode_GND*vdci_t-vj2*vdci_t_Vtnode_GND)/vdci_t/vdci_t))*d10_logE0;
vdj2_Vb_ci=(-(vj2_Vb_ci/vdci_t))*d10_logE0;
#endif
vdj2=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
{
double m00_exp(d00_exp0,(vdj2*ez))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj1_Vci_ei=0.0;
qj1_Vbi_ei=0.0;
qj1_Vs_ci=0.0;
qj1_Vbi_ci=((cjci0_t_ii*(-vdj2_Vbi_ci*ez*d10_exp0))/ez);
qj1_Vtnode_GND=(((cjci0_t_ii_Vtnode_GND*(1.0-d00_exp0))+(cjci0_t_ii*(-vdj2_Vtnode_GND*ez*d10_exp0)))/ez);
qj1_Vb_ci=((cjci0_t_ii*(-vdj2_Vb_ci*ez*d10_exp0))/ez);
#endif
qj1=((cjci0_t_ii*(1.0-d00_exp0))/ez);
EXIT_IF_ISNAN(((cjci0_t_ii*(1.0-d00_exp0))/ez))
}
{
double m00_exp(d00_exp0,(vdj1*ezr))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj2_Vci_ei=0.0;
qj2_Vbi_ei=0.0;
qj2_Vs_ci=0.0;
qj2_Vbi_ci=((cr*(-vdj1_Vbi_ci*ezr*d10_exp0))/ezr);
qj2_Vtnode_GND=(((cr_Vtnode_GND*(1.0-d00_exp0))+(cr*(-vdj1_Vtnode_GND*ezr*d10_exp0)))/ezr);
qj2_Vb_ci=((cr*(-vdj1_Vb_ci*ezr*d10_exp0))/ezr);
#endif
qj2=((cr*(1.0-d00_exp0))/ezr);
EXIT_IF_ISNAN(((cr*(1.0-d00_exp0))/ezr))
}
{
double m00_exp(d00_exp0,(vdj2*ezr))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj3_Vci_ei=0.0;
qj3_Vbi_ei=0.0;
qj3_Vs_ci=0.0;
qj3_Vbi_ci=((cr*(-vdj2_Vbi_ci*ezr*d10_exp0))/ezr);
qj3_Vtnode_GND=(((cr_Vtnode_GND*(1.0-d00_exp0))+(cr*(-vdj2_Vtnode_GND*ezr*d10_exp0)))/ezr);
qj3_Vb_ci=((cr*(-vdj2_Vb_ci*ezr*d10_exp0))/ezr);
#endif
qj3=((cr*(1.0-d00_exp0))/ezr);
EXIT_IF_ISNAN(((cr*(1.0-d00_exp0))/ezr))
}
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjci_Vbi_ci=(((qj1_Vbi_ci+qj2_Vbi_ci)-qj3_Vbi_ci)*vdci_t+(cmax*vj4_Vbi_ci));
qjci_Vtnode_GND=(((((qj1_Vtnode_GND+qj2_Vtnode_GND)-qj3_Vtnode_GND)*vdci_t)+(((qj1+qj2)-qj3)*vdci_t_Vtnode_GND))+((cmax_Vtnode_GND*vj4)+(cmax*vj4_Vtnode_GND)));
qjci_Vb_ci=(((qj1_Vb_ci+qj2_Vb_ci)-qj3_Vb_ci)*vdci_t+(cmax*vj4_Vb_ci));
#endif
pInst->qjci=((((qj1+qj2)-qj3)*vdci_t)+(cmax*vj4));
EXIT_IF_ISNAN(((((qj1+qj2)-qj3)*vdci_t)+(cmax*vj4)))
}
else
{
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjci_Vbi_ci=0.0;
qjci_Vtnode_GND=0.0;
qjci_Vb_ci=0.0;
#endif
pInst->qjci=0.0;
EXIT_IF_ISNAN(0.0)
}
}
else
{
if
((cjci0_t_ii>0.0))
{
{
double m00_logE(d00_logE0,2.4)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->zci))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=vdci_t_Vtnode_GND*(1.0-d00_exp1);
#endif
vf=(vdci_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vdci_t*(1.0-d00_exp1)))
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf_Vs_ci=0.0;
#endif
xvf_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  xvf_Vbi_ei_Vs_ci=0.0;
  xvf_Vbi_ei_Vbi_ei=0.0;
  xvf_Vbi_ei_Vbi_ci=0.0;
  xvf_Vbi_ei_Vtnode_GND=0.0;
  xvf_Vbi_ei_Vb_ci=0.0;
#endif
xvf_Vbi_ci=((-Vbici_Vbi_ci)/VT);
#if defined(_DERIVATE2)
  xvf_Vbi_ci_Vs_ci=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*0.0+0.0*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ci_Vbi_ei=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*0.0+0.0*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ci_Vbi_ci=((+0.0-Vbici_Vbi_ci_Vbi_ci)/VT-((-Vbici_Vbi_ci)*0.0+(-Vbici_Vbi_ci)*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ci_Vtnode_GND=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*VT_Vtnode_GND+vf_Vtnode_GND*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*VT_Vtnode_GND/VT/VT/VT);
  xvf_Vbi_ci_Vb_ci=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*0.0+0.0*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
#endif
#if defined(_DERIVATE)
xvf_Vtnode_GND=((vf_Vtnode_GND*VT-(vf-Vbici)*VT_Vtnode_GND)/VT/VT);
#endif
#if defined(_DERIVATE)
xvf_Vb_ci=0.0;
#endif
#endif
xvf=((vf-Vbici)/VT);
EXIT_IF_ISNAN(((vf-Vbici)/VT))
{
double m00_sqrt(d00_sqrt0,((xvf*xvf)+1.921812))
#if defined(_DERIVATEFORDDX)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((xvf*xvf)+1.921812))
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf2_Vs_ci=0.0;
#endif
xvf2_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ei_Vs_ci=0.0;
  xvf2_Vbi_ei_Vbi_ei=0.0;
  xvf2_Vbi_ei_Vbi_ci=0.0;
  xvf2_Vbi_ei_Vtnode_GND=0.0;
  xvf2_Vbi_ei_Vb_ci=0.0;
#endif
xvf2_Vbi_ci=((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))*d10_sqrt0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ci_Vs_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vs_ci*xvf)+(xvf*xvf_Vs_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vs_ci*xvf+xvf_Vbi_ci*xvf_Vs_ci+xvf_Vs_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vs_ci)+0.0));
  xvf2_Vbi_ci_Vbi_ei=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ei*xvf+xvf_Vbi_ci*xvf_Vbi_ei+xvf_Vbi_ei*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ei)+0.0));
  xvf2_Vbi_ci_Vbi_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ci*xvf+xvf_Vbi_ci*xvf_Vbi_ci+xvf_Vbi_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ci)+0.0));
  xvf2_Vbi_ci_Vtnode_GND=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vtnode_GND*xvf+xvf_Vbi_ci*xvf_Vtnode_GND+xvf_Vtnode_GND*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vtnode_GND)+0.0));
  xvf2_Vbi_ci_Vb_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vb_ci*xvf+xvf_Vbi_ci*xvf_Vb_ci+xvf_Vb_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vb_ci)+0.0));
#endif
#if defined(_DERIVATE)
xvf2_Vtnode_GND=((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND))*d10_sqrt0;
#endif
#if defined(_DERIVATE)
xvf2_Vb_ci=((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci))*d10_sqrt0;
#endif
#endif
xvf2=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
v_j_Vs_ci=0.0;
#endif
v_j_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  v_j_Vbi_ei_Vs_ci=0.0;
  v_j_Vbi_ei_Vbi_ei=0.0;
  v_j_Vbi_ei_Vbi_ci=0.0;
  v_j_Vbi_ei_Vtnode_GND=0.0;
  v_j_Vbi_ei_Vb_ci=0.0;
#endif
v_j_Vbi_ci=(-(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.5);
#if defined(_DERIVATE2)
  v_j_Vbi_ci_Vs_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vs_ci+xvf2_Vs_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vs_ci+xvf2_Vbi_ci_Vs_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vs_ci+xvf2_Vs_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ei=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ei+xvf2_Vbi_ci_Vbi_ei))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ei+xvf2_Vbi_ei)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ci+xvf2_Vbi_ci_Vbi_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ci+xvf2_Vbi_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vtnode_GND=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vtnode_GND+xvf2_Vtnode_GND)+VT_Vtnode_GND*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vtnode_GND+xvf2_Vbi_ci_Vtnode_GND))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+(((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND))))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vb_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vb_ci+xvf2_Vb_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vb_ci+xvf2_Vbi_ci_Vb_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vb_ci+xvf2_Vb_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
#endif
#if defined(_DERIVATE)
v_j_Vtnode_GND=(vf_Vtnode_GND-((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND)))*0.5);
#endif
#if defined(_DERIVATE)
v_j_Vb_ci=(-(VT*(xvf_Vb_ci+xvf2_Vb_ci))*0.5);
#endif
#endif
v_j=(vf-((VT*(xvf+xvf2))*0.5));
EXIT_IF_ISNAN((vf-((VT*(xvf+xvf2))*0.5)))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei) ddxprobe=V(bi:GND) */
x_Vtnode_GND=0.0;
x_Vci_ei=0.0;
#endif
x=(1.0-pModel->zci);
EXIT_IF_ISNAN((1.0-pModel->zci))
{
double m00_logE(d00_logE0,(1.0-(v_j/vdci_t)))
double m00_exp(d00_exp1,(x*d00_logE0))
#if defined(_DERIVATEFORDDX)
double m10_logE(d10_logE0,d00_logE0,(1.0-(v_j/vdci_t)))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(ci:ei)V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
y_Vci_ei=0.0;
#endif
#if defined(_DERIVATE)
y_Vs_ci=0.0;
#endif
y_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  y_Vbi_ei_Vci_ei=0.0;
  y_Vbi_ei_Vs_ci=0.0;
  y_Vbi_ei_Vbi_ei=0.0;
  y_Vbi_ei_Vbi_ci=0.0;
  y_Vbi_ei_Vtnode_GND=0.0;
  y_Vbi_ei_Vb_ci=0.0;
#endif
y_Vbi_ci=(-(x*(-(v_j_Vbi_ci/vdci_t))*d10_logE0)*d10_exp1);
#if defined(_DERIVATE2)
  y_Vbi_ci_Vci_ei=(+0.0-(m20_exp((x*d00_logE0))*(x_Vci_ei*d00_logE0)*(x*(-(v_j_Vbi_ci/vdci_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*0.0+x_Vci_ei*(-(v_j_Vbi_ci/vdci_t))*d10_logE0+x*0.0)));
  y_Vbi_ci_Vs_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vs_ci/vdci_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdci_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vs_ci/vdci_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdci_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdci_t)))*(-(v_j_Vs_ci/vdci_t))*(-(v_j_Vbi_ci/vdci_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vs_ci/vdci_t-(v_j_Vbi_ci*0.0+v_j_Vs_ci*0.0+v_j*0.0)/vdci_t/vdci_t+2*v_j*0.0*0.0/vdci_t/vdci_t/vdci_t))))));
  y_Vbi_ci_Vbi_ei=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ei/vdci_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdci_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ei/vdci_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdci_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdci_t)))*(-(v_j_Vbi_ei/vdci_t))*(-(v_j_Vbi_ci/vdci_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vbi_ei/vdci_t-(v_j_Vbi_ci*0.0+v_j_Vbi_ei*0.0+v_j*0.0)/vdci_t/vdci_t+2*v_j*0.0*0.0/vdci_t/vdci_t/vdci_t))))));
  y_Vbi_ci_Vbi_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ci/vdci_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdci_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ci/vdci_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdci_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdci_t)))*(-(v_j_Vbi_ci/vdci_t))*(-(v_j_Vbi_ci/vdci_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vbi_ci/vdci_t-(v_j_Vbi_ci*0.0+v_j_Vbi_ci*0.0+v_j*0.0)/vdci_t/vdci_t+2*v_j*0.0*0.0/vdci_t/vdci_t/vdci_t))))));
  y_Vbi_ci_Vtnode_GND=(+0.0-(m20_exp((x*d00_logE0))*(((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vdci_t-v_j*vdci_t_Vtnode_GND)/vdci_t/vdci_t))*d10_logE0)))*(x*(-(v_j_Vbi_ci/vdci_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-((v_j_Vtnode_GND*vdci_t-v_j*vdci_t_Vtnode_GND)/vdci_t/vdci_t))*d10_logE0+x_Vtnode_GND*(-(v_j_Vbi_ci/vdci_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdci_t)))*(-((v_j_Vtnode_GND*vdci_t-v_j*vdci_t_Vtnode_GND)/vdci_t/vdci_t))*(-(v_j_Vbi_ci/vdci_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vtnode_GND/vdci_t-(v_j_Vbi_ci*vdci_t_Vtnode_GND+v_j_Vtnode_GND*0.0+v_j*0.0)/vdci_t/vdci_t+2*v_j*0.0*vdci_t_Vtnode_GND/vdci_t/vdci_t/vdci_t))))));
  y_Vbi_ci_Vb_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vb_ci/vdci_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vdci_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vb_ci/vdci_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vdci_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vdci_t)))*(-(v_j_Vb_ci/vdci_t))*(-(v_j_Vbi_ci/vdci_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vb_ci/vdci_t-(v_j_Vbi_ci*0.0+v_j_Vb_ci*0.0+v_j*0.0)/vdci_t/vdci_t+2*v_j*0.0*0.0/vdci_t/vdci_t/vdci_t))))));
#endif
#if defined(_DERIVATE)
y_Vtnode_GND=(-((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vdci_t-v_j*vdci_t_Vtnode_GND)/vdci_t/vdci_t))*d10_logE0))*d10_exp1);
#endif
#if defined(_DERIVATE)
y_Vb_ci=(-(x*(-(v_j_Vb_ci/vdci_t))*d10_logE0)*d10_exp1);
#endif
#endif
y=(1.0-d00_exp1);
EXIT_IF_ISNAN((1.0-d00_exp1))
}
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjci_Vbi_ci=((((cjci0_t_ii*vdci_t)*y_Vbi_ci)/x)+((2.4*cjci0_t_ii)*(Vbici_Vbi_ci-v_j_Vbi_ci)));
qjci_Vtnode_GND=(((((((cjci0_t_ii_Vtnode_GND*vdci_t)+(cjci0_t_ii*vdci_t_Vtnode_GND))*y)+((cjci0_t_ii*vdci_t)*y_Vtnode_GND))*x-((cjci0_t_ii*vdci_t)*y)*x_Vtnode_GND)/x/x)+(((2.4*cjci0_t_ii_Vtnode_GND)*(Vbici-v_j))+((2.4*cjci0_t_ii)*(-v_j_Vtnode_GND))));
qjci_Vb_ci=((((cjci0_t_ii*vdci_t)*y_Vb_ci)/x)+((2.4*cjci0_t_ii)*(-v_j_Vb_ci)));
#endif
pInst->qjci=((((cjci0_t_ii*vdci_t)*y)/x)+((2.4*cjci0_t_ii)*(Vbici-v_j)));
EXIT_IF_ISNAN(((((cjci0_t_ii*vdci_t)*y)/x)+((2.4*cjci0_t_ii)*(Vbici-v_j))))
}
else
{
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjci_Vbi_ci=0.0;
qjci_Vtnode_GND=0.0;
qjci_Vb_ci=0.0;
#endif
pInst->qjci=0.0;
EXIT_IF_ISNAN(0.0)
}
}
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcii_Vbi_ci=(qjci_Vbi_ci+qjcxi_Vbi_ci);
qjcii_Vtnode_GND=(qjci_Vtnode_GND+qjcxi_Vtnode_GND);
qjcii_Vb_ci=(qjci_Vb_ci+qjcxi_Vb_ci);
#endif
qjcii=(pInst->qjci+qjcxi);
EXIT_IF_ISNAN((pInst->qjci+qjcxi))
#endif
if
((cjci0_t_ii>0.0))
{
{
double m00_logE(d00_logE0,2.4)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->zci))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=vdci_t_Vtnode_GND*(1.0-d00_exp1);
#endif
vf=(vdci_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vdci_t*(1.0-d00_exp1)))
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf_Vs_ci=0.0;
#endif
xvf_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  xvf_Vbi_ei_Vs_ci=0.0;
  xvf_Vbi_ei_Vbi_ei=0.0;
  xvf_Vbi_ei_Vbi_ci=0.0;
  xvf_Vbi_ei_Vtnode_GND=0.0;
  xvf_Vbi_ei_Vb_ci=0.0;
#endif
xvf_Vbi_ci=((-Vbici_Vbi_ci)/VT);
#if defined(_DERIVATE2)
  xvf_Vbi_ci_Vs_ci=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*0.0+0.0*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ci_Vbi_ei=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*0.0+0.0*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ci_Vbi_ci=((+0.0-Vbici_Vbi_ci_Vbi_ci)/VT-((-Vbici_Vbi_ci)*0.0+(-Vbici_Vbi_ci)*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ci_Vtnode_GND=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*VT_Vtnode_GND+vf_Vtnode_GND*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*VT_Vtnode_GND/VT/VT/VT);
  xvf_Vbi_ci_Vb_ci=((+0.0-0.0)/VT-((-Vbici_Vbi_ci)*0.0+0.0*0.0+(vf-Vbici)*0.0)/VT/VT+2*(vf-Vbici)*0.0*0.0/VT/VT/VT);
#endif
#if defined(_DERIVATE)
xvf_Vtnode_GND=((vf_Vtnode_GND*VT-(vf-Vbici)*VT_Vtnode_GND)/VT/VT);
#endif
#if defined(_DERIVATE)
xvf_Vb_ci=0.0;
#endif
#endif
xvf=((vf-Vbici)/VT);
EXIT_IF_ISNAN(((vf-Vbici)/VT))
{
double m00_sqrt(d00_sqrt0,((xvf*xvf)+1.921812))
#if defined(_DERIVATEFORDDX)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((xvf*xvf)+1.921812))
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf2_Vs_ci=0.0;
#endif
xvf2_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ei_Vs_ci=0.0;
  xvf2_Vbi_ei_Vbi_ei=0.0;
  xvf2_Vbi_ei_Vbi_ci=0.0;
  xvf2_Vbi_ei_Vtnode_GND=0.0;
  xvf2_Vbi_ei_Vb_ci=0.0;
#endif
xvf2_Vbi_ci=((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))*d10_sqrt0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ci_Vs_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vs_ci*xvf)+(xvf*xvf_Vs_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vs_ci*xvf+xvf_Vbi_ci*xvf_Vs_ci+xvf_Vs_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vs_ci)+0.0));
  xvf2_Vbi_ci_Vbi_ei=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ei*xvf+xvf_Vbi_ci*xvf_Vbi_ei+xvf_Vbi_ei*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ei)+0.0));
  xvf2_Vbi_ci_Vbi_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ci*xvf+xvf_Vbi_ci*xvf_Vbi_ci+xvf_Vbi_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ci)+0.0));
  xvf2_Vbi_ci_Vtnode_GND=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vtnode_GND*xvf+xvf_Vbi_ci*xvf_Vtnode_GND+xvf_Vtnode_GND*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vtnode_GND)+0.0));
  xvf2_Vbi_ci_Vb_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vb_ci*xvf+xvf_Vbi_ci*xvf_Vb_ci+xvf_Vb_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vb_ci)+0.0));
#endif
#if defined(_DERIVATE)
xvf2_Vtnode_GND=((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND))*d10_sqrt0;
#endif
#if defined(_DERIVATE)
xvf2_Vb_ci=((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci))*d10_sqrt0;
#endif
#endif
xvf2=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
v_j_Vs_ci=0.0;
#endif
v_j_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  v_j_Vbi_ei_Vs_ci=0.0;
  v_j_Vbi_ei_Vbi_ei=0.0;
  v_j_Vbi_ei_Vbi_ci=0.0;
  v_j_Vbi_ei_Vtnode_GND=0.0;
  v_j_Vbi_ei_Vb_ci=0.0;
#endif
v_j_Vbi_ci=(-(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.5);
#if defined(_DERIVATE2)
  v_j_Vbi_ci_Vs_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vs_ci+xvf2_Vs_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vs_ci+xvf2_Vbi_ci_Vs_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vs_ci+xvf2_Vs_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ei=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ei+xvf2_Vbi_ci_Vbi_ei))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ei+xvf2_Vbi_ei)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ci+xvf2_Vbi_ci_Vbi_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ci+xvf2_Vbi_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vtnode_GND=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vtnode_GND+xvf2_Vtnode_GND)+VT_Vtnode_GND*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vtnode_GND+xvf2_Vbi_ci_Vtnode_GND))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+(((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND))))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vb_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vb_ci+xvf2_Vb_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vb_ci+xvf2_Vbi_ci_Vb_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vb_ci+xvf2_Vb_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
#endif
#if defined(_DERIVATE)
v_j_Vtnode_GND=(vf_Vtnode_GND-((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND)))*0.5);
#endif
#if defined(_DERIVATE)
v_j_Vb_ci=(-(VT*(xvf_Vb_ci+xvf2_Vb_ci))*0.5);
#endif
#endif
v_j=(vf-((VT*(xvf+xvf2))*0.5));
EXIT_IF_ISNAN((vf-((VT*(xvf+xvf2))*0.5)))
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
dvj_Vbi_ci=(((0.5*(xvf_Vbi_ci+xvf2_Vbi_ci))*xvf2-(0.5*(xvf+xvf2))*xvf2_Vbi_ci)/xvf2/xvf2);
dvj_Vtnode_GND=(((0.5*(xvf_Vtnode_GND+xvf2_Vtnode_GND))*xvf2-(0.5*(xvf+xvf2))*xvf2_Vtnode_GND)/xvf2/xvf2);
dvj_Vb_ci=(((0.5*(xvf_Vb_ci+xvf2_Vb_ci))*xvf2-(0.5*(xvf+xvf2))*xvf2_Vb_ci)/xvf2/xvf2);
#endif
dvj=((0.5*(xvf+xvf2))/xvf2);
EXIT_IF_ISNAN(((0.5*(xvf+xvf2))/xvf2))
{
double m00_logE(d00_logE0,(1-(v_j/vdci_t)))
double m00_exp(d00_exp1,((-pModel->zci)*d00_logE0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1-(v_j/vdci_t)))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(b:ci) ddxprobe= */
cjcii_Vtnode_GND=(((((cjci0_t_ii_Vtnode_GND*d00_exp1)+(cjci0_t_ii*((-pModel->zci)*(-((v_j_Vtnode_GND*vdci_t-v_j*vdci_t_Vtnode_GND)/vdci_t/vdci_t))*d10_logE0)*d10_exp1))*dvj)+((cjci0_t_ii*d00_exp1)*dvj_Vtnode_GND))+(((2.4*cjci0_t_ii_Vtnode_GND)*(1-dvj))+((2.4*cjci0_t_ii)*(-dvj_Vtnode_GND))));
cjcii_Vbi_ci=((((cjci0_t_ii*((-pModel->zci)*(-(v_j_Vbi_ci/vdci_t))*d10_logE0)*d10_exp1)*dvj)+((cjci0_t_ii*d00_exp1)*dvj_Vbi_ci))+((2.4*cjci0_t_ii)*(-dvj_Vbi_ci)));
cjcii_Vb_ci=((((cjci0_t_ii*((-pModel->zci)*(-(v_j_Vb_ci/vdci_t))*d10_logE0)*d10_exp1)*dvj)+((cjci0_t_ii*d00_exp1)*dvj_Vb_ci))+((2.4*cjci0_t_ii)*(-dvj_Vb_ci)));
#endif
cjcii=(((cjci0_t_ii*d00_exp1)*dvj)+((2.4*cjci0_t_ii)*(1-dvj)));
EXIT_IF_ISNAN((((cjci0_t_ii*d00_exp1)*dvj)+((2.4*cjci0_t_ii)*(1-dvj))))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(b:ci) ddxprobe= */
cjcii_Vtnode_GND=0.0;
cjcii_Vbi_ci=0.0;
cjcii_Vb_ci=0.0;
#endif
cjcii=0.0;
EXIT_IF_ISNAN(0.0)
}
if
((cje0_t>0.0))
{
{
double m00_logE(d00_logE0,aje_t)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->ze))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,aje_t)
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=((vde_t_Vtnode_GND*(1.0-d00_exp1))+(vde_t*(-((-aje_t_Vtnode_GND*d10_logE0)/pModel->ze)*d10_exp1)));
#endif
vf=(vde_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vde_t*(1.0-d00_exp1)))
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf_Vs_ci=0.0;
#endif
xvf_Vbi_ei=((-Vbiei_Vbi_ei)/VT);
#if defined(_DERIVATE2)
  xvf_Vbi_ei_Vs_ci=((+0.0-0.0)/VT-((-Vbiei_Vbi_ei)*0.0+0.0*0.0+(vf-Vbiei)*0.0)/VT/VT+2*(vf-Vbiei)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ei_Vbi_ei=((+0.0-Vbiei_Vbi_ei_Vbi_ei)/VT-((-Vbiei_Vbi_ei)*0.0+(-Vbiei_Vbi_ei)*0.0+(vf-Vbiei)*0.0)/VT/VT+2*(vf-Vbiei)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ei_Vbi_ci=((+0.0-0.0)/VT-((-Vbiei_Vbi_ei)*0.0+0.0*0.0+(vf-Vbiei)*0.0)/VT/VT+2*(vf-Vbiei)*0.0*0.0/VT/VT/VT);
  xvf_Vbi_ei_Vtnode_GND=((+0.0-0.0)/VT-((-Vbiei_Vbi_ei)*VT_Vtnode_GND+vf_Vtnode_GND*0.0+(vf-Vbiei)*0.0)/VT/VT+2*(vf-Vbiei)*0.0*VT_Vtnode_GND/VT/VT/VT);
  xvf_Vbi_ei_Vb_ci=((+0.0-0.0)/VT-((-Vbiei_Vbi_ei)*0.0+0.0*0.0+(vf-Vbiei)*0.0)/VT/VT+2*(vf-Vbiei)*0.0*0.0/VT/VT/VT);
#endif
xvf_Vbi_ci=0.0;
#if defined(_DERIVATE2)
  xvf_Vbi_ci_Vs_ci=0.0;
  xvf_Vbi_ci_Vbi_ei=0.0;
  xvf_Vbi_ci_Vbi_ci=0.0;
  xvf_Vbi_ci_Vtnode_GND=0.0;
  xvf_Vbi_ci_Vb_ci=0.0;
#endif
#if defined(_DERIVATE)
xvf_Vtnode_GND=((vf_Vtnode_GND*VT-(vf-Vbiei)*VT_Vtnode_GND)/VT/VT);
#endif
#if defined(_DERIVATE)
xvf_Vb_ci=0.0;
#endif
#endif
xvf=((vf-Vbiei)/VT);
EXIT_IF_ISNAN(((vf-Vbiei)/VT))
{
double m00_sqrt(d00_sqrt0,((xvf*xvf)+1.921812))
#if defined(_DERIVATEFORDDX)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((xvf*xvf)+1.921812))
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf2_Vs_ci=0.0;
#endif
xvf2_Vbi_ei=((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))*d10_sqrt0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ei_Vs_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vs_ci*xvf)+(xvf*xvf_Vs_ci)))*((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))+d10_sqrt0*(+(+xvf_Vbi_ei_Vs_ci*xvf+xvf_Vbi_ei*xvf_Vs_ci+xvf_Vs_ci*xvf_Vbi_ei+xvf*xvf_Vbi_ei_Vs_ci)+0.0));
  xvf2_Vbi_ei_Vbi_ei=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei)))*((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))+d10_sqrt0*(+(+xvf_Vbi_ei_Vbi_ei*xvf+xvf_Vbi_ei*xvf_Vbi_ei+xvf_Vbi_ei*xvf_Vbi_ei+xvf*xvf_Vbi_ei_Vbi_ei)+0.0));
  xvf2_Vbi_ei_Vbi_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci)))*((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))+d10_sqrt0*(+(+xvf_Vbi_ei_Vbi_ci*xvf+xvf_Vbi_ei*xvf_Vbi_ci+xvf_Vbi_ci*xvf_Vbi_ei+xvf*xvf_Vbi_ei_Vbi_ci)+0.0));
  xvf2_Vbi_ei_Vtnode_GND=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND)))*((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))+d10_sqrt0*(+(+xvf_Vbi_ei_Vtnode_GND*xvf+xvf_Vbi_ei*xvf_Vtnode_GND+xvf_Vtnode_GND*xvf_Vbi_ei+xvf*xvf_Vbi_ei_Vtnode_GND)+0.0));
  xvf2_Vbi_ei_Vb_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci)))*((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))+d10_sqrt0*(+(+xvf_Vbi_ei_Vb_ci*xvf+xvf_Vbi_ei*xvf_Vb_ci+xvf_Vb_ci*xvf_Vbi_ei+xvf*xvf_Vbi_ei_Vb_ci)+0.0));
#endif
xvf2_Vbi_ci=((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))*d10_sqrt0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ci_Vs_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vs_ci*xvf)+(xvf*xvf_Vs_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vs_ci*xvf+xvf_Vbi_ci*xvf_Vs_ci+xvf_Vs_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vs_ci)+0.0));
  xvf2_Vbi_ci_Vbi_ei=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ei*xvf+xvf_Vbi_ci*xvf_Vbi_ei+xvf_Vbi_ei*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ei)+0.0));
  xvf2_Vbi_ci_Vbi_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ci*xvf+xvf_Vbi_ci*xvf_Vbi_ci+xvf_Vbi_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ci)+0.0));
  xvf2_Vbi_ci_Vtnode_GND=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vtnode_GND*xvf+xvf_Vbi_ci*xvf_Vtnode_GND+xvf_Vtnode_GND*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vtnode_GND)+0.0));
  xvf2_Vbi_ci_Vb_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vb_ci*xvf+xvf_Vbi_ci*xvf_Vb_ci+xvf_Vb_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vb_ci)+0.0));
#endif
#if defined(_DERIVATE)
xvf2_Vtnode_GND=((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND))*d10_sqrt0;
#endif
#if defined(_DERIVATE)
xvf2_Vb_ci=((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci))*d10_sqrt0;
#endif
#endif
xvf2=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
v_j_Vs_ci=0.0;
#endif
v_j_Vbi_ei=(-(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.5);
#if defined(_DERIVATE2)
  v_j_Vbi_ei_Vs_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vs_ci+xvf2_Vs_ci)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+VT*(+xvf_Vbi_ei_Vs_ci+xvf2_Vbi_ei_Vs_ci))*0.5+(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.0+((VT*(xvf_Vs_ci+xvf2_Vs_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ei_Vbi_ei=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+VT*(+xvf_Vbi_ei_Vbi_ei+xvf2_Vbi_ei_Vbi_ei))*0.5+(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.0+((VT*(xvf_Vbi_ei+xvf2_Vbi_ei)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ei_Vbi_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+VT*(+xvf_Vbi_ei_Vbi_ci+xvf2_Vbi_ei_Vbi_ci))*0.5+(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.0+((VT*(xvf_Vbi_ci+xvf2_Vbi_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ei_Vtnode_GND=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vtnode_GND+xvf2_Vtnode_GND)+VT_Vtnode_GND*(xvf_Vbi_ei+xvf2_Vbi_ei)+VT*(+xvf_Vbi_ei_Vtnode_GND+xvf2_Vbi_ei_Vtnode_GND))*0.5+(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.0+(((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND))))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ei_Vb_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vb_ci+xvf2_Vb_ci)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+VT*(+xvf_Vbi_ei_Vb_ci+xvf2_Vbi_ei_Vb_ci))*0.5+(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.0+((VT*(xvf_Vb_ci+xvf2_Vb_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
#endif
v_j_Vbi_ci=(-(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.5);
#if defined(_DERIVATE2)
  v_j_Vbi_ci_Vs_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vs_ci+xvf2_Vs_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vs_ci+xvf2_Vbi_ci_Vs_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vs_ci+xvf2_Vs_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ei=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ei+xvf2_Vbi_ci_Vbi_ei))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ei+xvf2_Vbi_ei)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ci+xvf2_Vbi_ci_Vbi_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ci+xvf2_Vbi_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vtnode_GND=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vtnode_GND+xvf2_Vtnode_GND)+VT_Vtnode_GND*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vtnode_GND+xvf2_Vbi_ci_Vtnode_GND))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+(((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND))))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vb_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vb_ci+xvf2_Vb_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vb_ci+xvf2_Vbi_ci_Vb_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vb_ci+xvf2_Vb_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
#endif
#if defined(_DERIVATE)
v_j_Vtnode_GND=(vf_Vtnode_GND-((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND)))*0.5);
#endif
#if defined(_DERIVATE)
v_j_Vb_ci=(-(VT*(xvf_Vb_ci+xvf2_Vb_ci))*0.5);
#endif
#endif
v_j=(vf-((VT*(xvf+xvf2))*0.5));
EXIT_IF_ISNAN((vf-((VT*(xvf+xvf2))*0.5)))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei) ddxprobe=V(bi:GND) */
x_Vtnode_GND=0.0;
x_Vci_ei=0.0;
#endif
x=(1.0-pModel->ze);
EXIT_IF_ISNAN((1.0-pModel->ze))
{
double m00_logE(d00_logE0,(1.0-(v_j/vde_t)))
double m00_exp(d00_exp1,(x*d00_logE0))
#if defined(_DERIVATEFORDDX)
double m10_logE(d10_logE0,d00_logE0,(1.0-(v_j/vde_t)))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(ci:ei)V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
y_Vci_ei=0.0;
#endif
#if defined(_DERIVATE)
y_Vs_ci=0.0;
#endif
y_Vbi_ei=(-(x*(-(v_j_Vbi_ei/vde_t))*d10_logE0)*d10_exp1);
#if defined(_DERIVATE2)
  y_Vbi_ei_Vci_ei=(+0.0-(m20_exp((x*d00_logE0))*(x_Vci_ei*d00_logE0)*(x*(-(v_j_Vbi_ei/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*0.0+x_Vci_ei*(-(v_j_Vbi_ei/vde_t))*d10_logE0+x*0.0)));
  y_Vbi_ei_Vs_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vs_ci/vde_t))*d10_logE0))*(x*(-(v_j_Vbi_ei/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vs_ci/vde_t))*d10_logE0+0.0*(-(v_j_Vbi_ei/vde_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vde_t)))*(-(v_j_Vs_ci/vde_t))*(-(v_j_Vbi_ei/vde_t))+d10_logE0*(+0.0-(v_j_Vbi_ei_Vs_ci/vde_t-(v_j_Vbi_ei*0.0+v_j_Vs_ci*0.0+v_j*0.0)/vde_t/vde_t+2*v_j*0.0*0.0/vde_t/vde_t/vde_t))))));
  y_Vbi_ei_Vbi_ei=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ei/vde_t))*d10_logE0))*(x*(-(v_j_Vbi_ei/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ei/vde_t))*d10_logE0+0.0*(-(v_j_Vbi_ei/vde_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vde_t)))*(-(v_j_Vbi_ei/vde_t))*(-(v_j_Vbi_ei/vde_t))+d10_logE0*(+0.0-(v_j_Vbi_ei_Vbi_ei/vde_t-(v_j_Vbi_ei*0.0+v_j_Vbi_ei*0.0+v_j*0.0)/vde_t/vde_t+2*v_j*0.0*0.0/vde_t/vde_t/vde_t))))));
  y_Vbi_ei_Vbi_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ci/vde_t))*d10_logE0))*(x*(-(v_j_Vbi_ei/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ci/vde_t))*d10_logE0+0.0*(-(v_j_Vbi_ei/vde_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vde_t)))*(-(v_j_Vbi_ci/vde_t))*(-(v_j_Vbi_ei/vde_t))+d10_logE0*(+0.0-(v_j_Vbi_ei_Vbi_ci/vde_t-(v_j_Vbi_ei*0.0+v_j_Vbi_ci*0.0+v_j*0.0)/vde_t/vde_t+2*v_j*0.0*0.0/vde_t/vde_t/vde_t))))));
  y_Vbi_ei_Vtnode_GND=(+0.0-(m20_exp((x*d00_logE0))*(((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vde_t-v_j*vde_t_Vtnode_GND)/vde_t/vde_t))*d10_logE0)))*(x*(-(v_j_Vbi_ei/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-((v_j_Vtnode_GND*vde_t-v_j*vde_t_Vtnode_GND)/vde_t/vde_t))*d10_logE0+x_Vtnode_GND*(-(v_j_Vbi_ei/vde_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vde_t)))*(-((v_j_Vtnode_GND*vde_t-v_j*vde_t_Vtnode_GND)/vde_t/vde_t))*(-(v_j_Vbi_ei/vde_t))+d10_logE0*(+0.0-(v_j_Vbi_ei_Vtnode_GND/vde_t-(v_j_Vbi_ei*vde_t_Vtnode_GND+v_j_Vtnode_GND*0.0+v_j*0.0)/vde_t/vde_t+2*v_j*0.0*vde_t_Vtnode_GND/vde_t/vde_t/vde_t))))));
  y_Vbi_ei_Vb_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vb_ci/vde_t))*d10_logE0))*(x*(-(v_j_Vbi_ei/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vb_ci/vde_t))*d10_logE0+0.0*(-(v_j_Vbi_ei/vde_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vde_t)))*(-(v_j_Vb_ci/vde_t))*(-(v_j_Vbi_ei/vde_t))+d10_logE0*(+0.0-(v_j_Vbi_ei_Vb_ci/vde_t-(v_j_Vbi_ei*0.0+v_j_Vb_ci*0.0+v_j*0.0)/vde_t/vde_t+2*v_j*0.0*0.0/vde_t/vde_t/vde_t))))));
#endif
y_Vbi_ci=(-(x*(-(v_j_Vbi_ci/vde_t))*d10_logE0)*d10_exp1);
#if defined(_DERIVATE2)
  y_Vbi_ci_Vci_ei=(+0.0-(m20_exp((x*d00_logE0))*(x_Vci_ei*d00_logE0)*(x*(-(v_j_Vbi_ci/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*0.0+x_Vci_ei*(-(v_j_Vbi_ci/vde_t))*d10_logE0+x*0.0)));
  y_Vbi_ci_Vs_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vs_ci/vde_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vs_ci/vde_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vde_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vde_t)))*(-(v_j_Vs_ci/vde_t))*(-(v_j_Vbi_ci/vde_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vs_ci/vde_t-(v_j_Vbi_ci*0.0+v_j_Vs_ci*0.0+v_j*0.0)/vde_t/vde_t+2*v_j*0.0*0.0/vde_t/vde_t/vde_t))))));
  y_Vbi_ci_Vbi_ei=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ei/vde_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ei/vde_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vde_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vde_t)))*(-(v_j_Vbi_ei/vde_t))*(-(v_j_Vbi_ci/vde_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vbi_ei/vde_t-(v_j_Vbi_ci*0.0+v_j_Vbi_ei*0.0+v_j*0.0)/vde_t/vde_t+2*v_j*0.0*0.0/vde_t/vde_t/vde_t))))));
  y_Vbi_ci_Vbi_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ci/vde_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ci/vde_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vde_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vde_t)))*(-(v_j_Vbi_ci/vde_t))*(-(v_j_Vbi_ci/vde_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vbi_ci/vde_t-(v_j_Vbi_ci*0.0+v_j_Vbi_ci*0.0+v_j*0.0)/vde_t/vde_t+2*v_j*0.0*0.0/vde_t/vde_t/vde_t))))));
  y_Vbi_ci_Vtnode_GND=(+0.0-(m20_exp((x*d00_logE0))*(((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vde_t-v_j*vde_t_Vtnode_GND)/vde_t/vde_t))*d10_logE0)))*(x*(-(v_j_Vbi_ci/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-((v_j_Vtnode_GND*vde_t-v_j*vde_t_Vtnode_GND)/vde_t/vde_t))*d10_logE0+x_Vtnode_GND*(-(v_j_Vbi_ci/vde_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vde_t)))*(-((v_j_Vtnode_GND*vde_t-v_j*vde_t_Vtnode_GND)/vde_t/vde_t))*(-(v_j_Vbi_ci/vde_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vtnode_GND/vde_t-(v_j_Vbi_ci*vde_t_Vtnode_GND+v_j_Vtnode_GND*0.0+v_j*0.0)/vde_t/vde_t+2*v_j*0.0*vde_t_Vtnode_GND/vde_t/vde_t/vde_t))))));
  y_Vbi_ci_Vb_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vb_ci/vde_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vde_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vb_ci/vde_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vde_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vde_t)))*(-(v_j_Vb_ci/vde_t))*(-(v_j_Vbi_ci/vde_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vb_ci/vde_t-(v_j_Vbi_ci*0.0+v_j_Vb_ci*0.0+v_j*0.0)/vde_t/vde_t+2*v_j*0.0*0.0/vde_t/vde_t/vde_t))))));
#endif
#if defined(_DERIVATE)
y_Vtnode_GND=(-((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vde_t-v_j*vde_t_Vtnode_GND)/vde_t/vde_t))*d10_logE0))*d10_exp1);
#endif
#if defined(_DERIVATE)
y_Vb_ci=(-(x*(-(v_j_Vb_ci/vde_t))*d10_logE0)*d10_exp1);
#endif
#endif
y=(1.0-d00_exp1);
EXIT_IF_ISNAN((1.0-d00_exp1))
}
#if defined(_DERIVATEFORDDX) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
qjei_Vtnode_GND=(((((((cje0_t_Vtnode_GND*vde_t)+(cje0_t*vde_t_Vtnode_GND))*y)+((cje0_t*vde_t)*y_Vtnode_GND))*x-((cje0_t*vde_t)*y)*x_Vtnode_GND)/x/x)+((((aje_t_Vtnode_GND*cje0_t)+(aje_t*cje0_t_Vtnode_GND))*(Vbiei-v_j))+((aje_t*cje0_t)*(-v_j_Vtnode_GND))));
#endif
qjei_Vbi_ei=((((cje0_t*vde_t)*y_Vbi_ei)/x)+((aje_t*cje0_t)*(Vbiei_Vbi_ei-v_j_Vbi_ei)));
#if defined(_DERIVATE2)
  qjei_Vbi_ei_Vtnode_GND=(+((+(+0.0*vde_t+0.0*vde_t_Vtnode_GND+cje0_t_Vtnode_GND*0.0+cje0_t*0.0)*y+0.0*y_Vtnode_GND+(((cje0_t_Vtnode_GND*vde_t)+(cje0_t*vde_t_Vtnode_GND)))*y_Vbi_ei+(cje0_t*vde_t)*y_Vbi_ei_Vtnode_GND)/x-(((cje0_t*vde_t)*y_Vbi_ei)*x_Vtnode_GND+((((((cje0_t_Vtnode_GND*vde_t)+(cje0_t*vde_t_Vtnode_GND)))*y)+((cje0_t*vde_t)*y_Vtnode_GND)))*0.0+((cje0_t*vde_t)*y)*0.0)/x/x+2*((cje0_t*vde_t)*y)*0.0*x_Vtnode_GND/x/x/x)+(+(+0.0*cje0_t+0.0*cje0_t_Vtnode_GND+aje_t_Vtnode_GND*0.0+aje_t*0.0)*(Vbiei-v_j)+0.0*(-v_j_Vtnode_GND)+(((aje_t_Vtnode_GND*cje0_t)+(aje_t*cje0_t_Vtnode_GND)))*(Vbiei_Vbi_ei-v_j_Vbi_ei)+(aje_t*cje0_t)*(+0.0-v_j_Vbi_ei_Vtnode_GND)));
  qjei_Vbi_ei_Vbi_ei=(+((+(+0.0*vde_t+0.0*0.0+0.0*0.0+cje0_t*0.0)*y+0.0*y_Vbi_ei+(0.0)*y_Vbi_ei+(cje0_t*vde_t)*y_Vbi_ei_Vbi_ei)/x-(((cje0_t*vde_t)*y_Vbi_ei)*0.0+((((0.0)*y)+((cje0_t*vde_t)*y_Vbi_ei)))*0.0+((cje0_t*vde_t)*y)*0.0)/x/x+2*((cje0_t*vde_t)*y)*0.0*0.0/x/x/x)+(+(+0.0*cje0_t+0.0*0.0+0.0*0.0+aje_t*0.0)*(Vbiei-v_j)+0.0*(Vbiei_Vbi_ei-v_j_Vbi_ei)+(0.0)*(Vbiei_Vbi_ei-v_j_Vbi_ei)+(aje_t*cje0_t)*(+Vbiei_Vbi_ei_Vbi_ei-v_j_Vbi_ei_Vbi_ei)));
  qjei_Vbi_ei_Vbi_ci=(+((+(+0.0*vde_t+0.0*0.0+0.0*0.0+cje0_t*0.0)*y+0.0*y_Vbi_ci+(0.0)*y_Vbi_ei+(cje0_t*vde_t)*y_Vbi_ei_Vbi_ci)/x-(((cje0_t*vde_t)*y_Vbi_ei)*0.0+((((0.0)*y)+((cje0_t*vde_t)*y_Vbi_ci)))*0.0+((cje0_t*vde_t)*y)*0.0)/x/x+2*((cje0_t*vde_t)*y)*0.0*0.0/x/x/x)+(+(+0.0*cje0_t+0.0*0.0+0.0*0.0+aje_t*0.0)*(Vbiei-v_j)+0.0*(-v_j_Vbi_ci)+(0.0)*(Vbiei_Vbi_ei-v_j_Vbi_ei)+(aje_t*cje0_t)*(+0.0-v_j_Vbi_ei_Vbi_ci)));
  qjei_Vbi_ei_Vb_ci=(+((+(+0.0*vde_t+0.0*0.0+0.0*0.0+cje0_t*0.0)*y+0.0*y_Vb_ci+(0.0)*y_Vbi_ei+(cje0_t*vde_t)*y_Vbi_ei_Vb_ci)/x-(((cje0_t*vde_t)*y_Vbi_ei)*0.0+((((0.0)*y)+((cje0_t*vde_t)*y_Vb_ci)))*0.0+((cje0_t*vde_t)*y)*0.0)/x/x+2*((cje0_t*vde_t)*y)*0.0*0.0/x/x/x)+(+(+0.0*cje0_t+0.0*0.0+0.0*0.0+aje_t*0.0)*(Vbiei-v_j)+0.0*(-v_j_Vb_ci)+(0.0)*(Vbiei_Vbi_ei-v_j_Vbi_ei)+(aje_t*cje0_t)*(+0.0-v_j_Vbi_ei_Vb_ci)));
#endif
qjei_Vbi_ci=((((cje0_t*vde_t)*y_Vbi_ci)/x)+((aje_t*cje0_t)*(-v_j_Vbi_ci)));
#if defined(_DERIVATE2)
  qjei_Vbi_ci_Vtnode_GND=(+((+(+0.0*vde_t+0.0*vde_t_Vtnode_GND+cje0_t_Vtnode_GND*0.0+cje0_t*0.0)*y+0.0*y_Vtnode_GND+(((cje0_t_Vtnode_GND*vde_t)+(cje0_t*vde_t_Vtnode_GND)))*y_Vbi_ci+(cje0_t*vde_t)*y_Vbi_ci_Vtnode_GND)/x-(((cje0_t*vde_t)*y_Vbi_ci)*x_Vtnode_GND+((((((cje0_t_Vtnode_GND*vde_t)+(cje0_t*vde_t_Vtnode_GND)))*y)+((cje0_t*vde_t)*y_Vtnode_GND)))*0.0+((cje0_t*vde_t)*y)*0.0)/x/x+2*((cje0_t*vde_t)*y)*0.0*x_Vtnode_GND/x/x/x)+(+(+0.0*cje0_t+0.0*cje0_t_Vtnode_GND+aje_t_Vtnode_GND*0.0+aje_t*0.0)*(Vbiei-v_j)+0.0*(-v_j_Vtnode_GND)+(((aje_t_Vtnode_GND*cje0_t)+(aje_t*cje0_t_Vtnode_GND)))*(-v_j_Vbi_ci)+(aje_t*cje0_t)*(+0.0-v_j_Vbi_ci_Vtnode_GND)));
  qjei_Vbi_ci_Vbi_ei=(+((+(+0.0*vde_t+0.0*0.0+0.0*0.0+cje0_t*0.0)*y+0.0*y_Vbi_ei+(0.0)*y_Vbi_ci+(cje0_t*vde_t)*y_Vbi_ci_Vbi_ei)/x-(((cje0_t*vde_t)*y_Vbi_ci)*0.0+((((0.0)*y)+((cje0_t*vde_t)*y_Vbi_ei)))*0.0+((cje0_t*vde_t)*y)*0.0)/x/x+2*((cje0_t*vde_t)*y)*0.0*0.0/x/x/x)+(+(+0.0*cje0_t+0.0*0.0+0.0*0.0+aje_t*0.0)*(Vbiei-v_j)+0.0*(Vbiei_Vbi_ei-v_j_Vbi_ei)+(0.0)*(-v_j_Vbi_ci)+(aje_t*cje0_t)*(+0.0-v_j_Vbi_ci_Vbi_ei)));
  qjei_Vbi_ci_Vbi_ci=(+((+(+0.0*vde_t+0.0*0.0+0.0*0.0+cje0_t*0.0)*y+0.0*y_Vbi_ci+(0.0)*y_Vbi_ci+(cje0_t*vde_t)*y_Vbi_ci_Vbi_ci)/x-(((cje0_t*vde_t)*y_Vbi_ci)*0.0+((((0.0)*y)+((cje0_t*vde_t)*y_Vbi_ci)))*0.0+((cje0_t*vde_t)*y)*0.0)/x/x+2*((cje0_t*vde_t)*y)*0.0*0.0/x/x/x)+(+(+0.0*cje0_t+0.0*0.0+0.0*0.0+aje_t*0.0)*(Vbiei-v_j)+0.0*(-v_j_Vbi_ci)+(0.0)*(-v_j_Vbi_ci)+(aje_t*cje0_t)*(+0.0-v_j_Vbi_ci_Vbi_ci)));
  qjei_Vbi_ci_Vb_ci=(+((+(+0.0*vde_t+0.0*0.0+0.0*0.0+cje0_t*0.0)*y+0.0*y_Vb_ci+(0.0)*y_Vbi_ci+(cje0_t*vde_t)*y_Vbi_ci_Vb_ci)/x-(((cje0_t*vde_t)*y_Vbi_ci)*0.0+((((0.0)*y)+((cje0_t*vde_t)*y_Vb_ci)))*0.0+((cje0_t*vde_t)*y)*0.0)/x/x+2*((cje0_t*vde_t)*y)*0.0*0.0/x/x/x)+(+(+0.0*cje0_t+0.0*0.0+0.0*0.0+aje_t*0.0)*(Vbiei-v_j)+0.0*(-v_j_Vb_ci)+(0.0)*(-v_j_Vbi_ci)+(aje_t*cje0_t)*(+0.0-v_j_Vbi_ci_Vb_ci)));
#endif
#if defined(_DERIVATE)
qjei_Vb_ci=((((cje0_t*vde_t)*y_Vb_ci)/x)+((aje_t*cje0_t)*(-v_j_Vb_ci)));
#endif
#endif
pInst->qjei=((((cje0_t*vde_t)*y)/x)+((aje_t*cje0_t)*(Vbiei-v_j)));
EXIT_IF_ISNAN(((((cje0_t*vde_t)*y)/x)+((aje_t*cje0_t)*(Vbiei-v_j))))
}
else
{
#if defined(_DERIVATEFORDDX) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
qjei_Vtnode_GND=0.0;
#endif
qjei_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  qjei_Vbi_ei_Vtnode_GND=0.0;
  qjei_Vbi_ei_Vbi_ei=0.0;
  qjei_Vbi_ei_Vbi_ci=0.0;
  qjei_Vbi_ei_Vb_ci=0.0;
#endif
qjei_Vbi_ci=0.0;
#if defined(_DERIVATE2)
  qjei_Vbi_ci_Vtnode_GND=0.0;
  qjei_Vbi_ci_Vbi_ei=0.0;
  qjei_Vbi_ci_Vbi_ci=0.0;
  qjei_Vbi_ci_Vb_ci=0.0;
#endif
#if defined(_DERIVATE)
qjei_Vb_ci=0.0;
#endif
#endif
pInst->qjei=0.0;
EXIT_IF_ISNAN(0.0)
}
#if defined(_DYNAMIC)
#if defined(_DDX)
cjei=+(qjei_Vbi_ei)+(qjei_Vbi_ci);
EXIT_IF_ISNAN(cjei)
#endif
#endif
#if defined(_DYNAMIC)
pInst->cjei_i=cjei;
EXIT_IF_ISNAN(cjei)
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(tnode:GND) ddxprobe= */
vc_Vci_ei=Vciei_Vci_ei;
vc_Vtnode_GND=(-vces_t_Vtnode_GND);
#endif
vc=(Vciei-vces_t);
EXIT_IF_ISNAN((Vciei-vces_t))
#if defined(_DERIVATE) /* probe=V(ci:ei)V(tnode:GND) ddxprobe= */
uvc_Vci_ei=(vc_Vci_ei/VT);
uvc_Vtnode_GND=((vc_Vtnode_GND*VT-vc*VT_Vtnode_GND)/VT/VT);
#endif
uvc=((vc/VT)-1);
EXIT_IF_ISNAN(((vc/VT)-1))
{
double m00_sqrt(d00_sqrt0,((uvc*uvc)+1.921812))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((uvc*uvc)+1.921812))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei) ddxprobe= */
vceff_Vtnode_GND=((VT_Vtnode_GND*(1+(0.5*(uvc+d00_sqrt0))))+(VT*(0.5*(uvc_Vtnode_GND+((uvc_Vtnode_GND*uvc)+(uvc*uvc_Vtnode_GND))*d10_sqrt0))));
vceff_Vci_ei=(VT*(0.5*(uvc_Vci_ei+((uvc_Vci_ei*uvc)+(uvc*uvc_Vci_ei))*d10_sqrt0)));
#endif
vceff=(VT*(1+(0.5*(uvc+d00_sqrt0))));
EXIT_IF_ISNAN((VT*(1+(0.5*(uvc+d00_sqrt0)))))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei) ddxprobe=V(bi:GND) */
x_Vtnode_GND=((vceff_Vtnode_GND-vlim_t_Vtnode_GND)/pModel->vpt);
x_Vci_ei=(vceff_Vci_ei/pModel->vpt);
#endif
x=((vceff-vlim_t)/pModel->vpt);
EXIT_IF_ISNAN(((vceff-vlim_t)/pModel->vpt))
{
double m00_sqrt(d00_sqrt0,((x*x)+1e-3))
double m00_sqrt(d00_sqrt1,(1+(((vceff*vceff)/vlim_t)/vlim_t)))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((x*x)+1e-3))
double m10_sqrt(d10_sqrt1,d00_sqrt1,(1+(((vceff*vceff)/vlim_t)/vlim_t)))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei) ddxprobe= */
ick_Vtnode_GND=((((((vceff_Vtnode_GND*(1+(0.5*(x+d00_sqrt0))))+(vceff*(0.5*(x_Vtnode_GND+((x_Vtnode_GND*x)+(x*x_Vtnode_GND))*d10_sqrt0))))*rci0_t-(vceff*(1+(0.5*(x+d00_sqrt0))))*rci0_t_Vtnode_GND)/rci0_t/rci0_t)*d00_sqrt1-((vceff*(1+(0.5*(x+d00_sqrt0))))/rci0_t)*((((((vceff_Vtnode_GND*vceff)+(vceff*vceff_Vtnode_GND))*vlim_t-(vceff*vceff)*vlim_t_Vtnode_GND)/vlim_t/vlim_t)*vlim_t-((vceff*vceff)/vlim_t)*vlim_t_Vtnode_GND)/vlim_t/vlim_t)*d10_sqrt1)/d00_sqrt1/d00_sqrt1);
ick_Vci_ei=(((((vceff_Vci_ei*(1+(0.5*(x+d00_sqrt0))))+(vceff*(0.5*(x_Vci_ei+((x_Vci_ei*x)+(x*x_Vci_ei))*d10_sqrt0))))/rci0_t)*d00_sqrt1-((vceff*(1+(0.5*(x+d00_sqrt0))))/rci0_t)*((((vceff_Vci_ei*vceff)+(vceff*vceff_Vci_ei))/vlim_t)/vlim_t)*d10_sqrt1)/d00_sqrt1/d00_sqrt1);
#endif
ick=(((vceff*(1+(0.5*(x+d00_sqrt0))))/rci0_t)/d00_sqrt1);
EXIT_IF_ISNAN((((vceff*(1+(0.5*(x+d00_sqrt0))))/rci0_t)/d00_sqrt1))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(b:ci) ddxprobe= */
cc_Vtnode_GND=((cjci0_t_ii_Vtnode_GND*cjcii-cjci0_t_ii*cjcii_Vtnode_GND)/cjcii/cjcii);
cc_Vbi_ci=(-cjci0_t_ii*cjcii_Vbi_ci/cjcii/cjcii);
cc_Vb_ci=(-cjci0_t_ii*cjcii_Vb_ci/cjcii/cjcii);
#endif
cc=(cjci0_t_ii/cjcii);
EXIT_IF_ISNAN((cjci0_t_ii/cjcii))
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjci_Vbi_ci=(qjci_Vbi_ci/cjci0_t_ii);
qjci_Vtnode_GND=((qjci_Vtnode_GND*cjci0_t_ii-pInst->qjci*cjci0_t_ii_Vtnode_GND)/cjci0_t_ii/cjci0_t_ii);
qjci_Vb_ci=(qjci_Vb_ci/cjci0_t_ii);
#endif
pInst->qjci=(pInst->qjci/cjci0_t_ii);
EXIT_IF_ISNAN((pInst->qjci/cjci0_t_ii))
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj_2_Vbi_ci=((qjci_Vbi_ci/pModel->vef)/2);
qj_2_Vtnode_GND=((qjci_Vtnode_GND/pModel->vef)/2);
qj_2_Vb_ci=((qjci_Vb_ci/pModel->vef)/2);
#endif
qj_2=((1+(pInst->qjci/pModel->vef))/2);
EXIT_IF_ISNAN(((1+(pInst->qjci/pModel->vef))/2))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(b:ci) ddxprobe= */
tf0_Vtnode_GND=((t0_t_Vtnode_GND+(pModel->dt0h*cc_Vtnode_GND))+(pModel->tbvl*(-1*cc_Vtnode_GND/cc/cc)));
tf0_Vbi_ci=((pModel->dt0h*cc_Vbi_ci)+(pModel->tbvl*(-1*cc_Vbi_ci/cc/cc)));
tf0_Vb_ci=((pModel->dt0h*cc_Vb_ci)+(pModel->tbvl*(-1*cc_Vb_ci/cc/cc)));
#endif
tf0=((t0_t+(pModel->dt0h*(cc-1)))+(pModel->tbvl*((1/cc)-1)));
EXIT_IF_ISNAN(((t0_t+(pModel->dt0h*(cc-1)))+(pModel->tbvl*((1/cc)-1))))
#endif
ickf=pModel->iqf;
EXIT_IF_ISNAN(pModel->iqf)
ickr=pModel->iqr;
EXIT_IF_ISNAN(pModel->iqr)
#if defined(_DERIVATE) /* probe=V(bi:ei)V(tnode:GND) ddxprobe= */
arg1_Vbi_ei=(Vbiei_Vbi_ei/(pModel->mcf*VT));
arg1_Vtnode_GND=(-Vbiei*(pModel->mcf*VT_Vtnode_GND)/(pModel->mcf*VT)/(pModel->mcf*VT));
#endif
arg1=(Vbiei/(pModel->mcf*VT));
EXIT_IF_ISNAN((Vbiei/(pModel->mcf*VT)))
if
((arg1>80))
{
#if defined(_DERIVATE) /* probe=V(bi:ei)V(tnode:GND) ddxprobe= */
le1_Vbi_ei=arg1_Vbi_ei;
le1_Vtnode_GND=arg1_Vtnode_GND;
#endif
le1=(1+(arg1-80));
EXIT_IF_ISNAN((1+(arg1-80)))
#if defined(_DERIVATE) /* probe=V(bi:ei)V(tnode:GND) ddxprobe= */
arg1_Vbi_ei=0.0;
arg1_Vtnode_GND=0.0;
#endif
arg1=80;
EXIT_IF_ISNAN(80)
}
else
{
#if defined(_DERIVATE) /* probe=V(bi:ei)V(tnode:GND) ddxprobe= */
le1_Vbi_ei=0.0;
le1_Vtnode_GND=0.0;
#endif
le1=1;
EXIT_IF_ISNAN(1)
}
{
double m00_limexp(d00_limexp0,arg1)
#if defined(_DERIVATE)
double m10_limexp(d10_limexp0,d00_limexp0,arg1)
#endif
#if defined(_DERIVATE) /* probe=V(bi:ei)V(tnode:GND) ddxprobe= */
le1_Vbi_ei=((le1_Vbi_ei*d00_limexp0)+(le1*arg1_Vbi_ei*d10_limexp0));
le1_Vtnode_GND=((le1_Vtnode_GND*d00_limexp0)+(le1*arg1_Vtnode_GND*d10_limexp0));
#endif
le1=(le1*d00_limexp0);
EXIT_IF_ISNAN((le1*d00_limexp0))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei) ddxprobe= */
itfi_Vtnode_GND=((is_t_Vtnode_GND*le1)+(is_t*le1_Vtnode_GND));
itfi_Vbi_ei=(is_t*le1_Vbi_ei);
#endif
itfi=(is_t*le1);
EXIT_IF_ISNAN((is_t*le1))
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND) ddxprobe= */
arg2_Vbi_ci=(Vbici_Vbi_ci/(pModel->mcr*VT));
arg2_Vtnode_GND=(-Vbici*(pModel->mcr*VT_Vtnode_GND)/(pModel->mcr*VT)/(pModel->mcr*VT));
#endif
arg2=(Vbici/(pModel->mcr*VT));
EXIT_IF_ISNAN((Vbici/(pModel->mcr*VT)))
if
((arg2>80))
{
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND) ddxprobe= */
le2_Vbi_ci=arg2_Vbi_ci;
le2_Vtnode_GND=arg2_Vtnode_GND;
#endif
le2=(1+(arg2-80));
EXIT_IF_ISNAN((1+(arg2-80)))
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND) ddxprobe= */
arg2_Vbi_ci=0.0;
arg2_Vtnode_GND=0.0;
#endif
arg2=80;
EXIT_IF_ISNAN(80)
}
else
{
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND) ddxprobe= */
le2_Vbi_ci=0.0;
le2_Vtnode_GND=0.0;
#endif
le2=1;
EXIT_IF_ISNAN(1)
}
{
double m00_limexp(d00_limexp0,arg2)
#if defined(_DERIVATE)
double m10_limexp(d10_limexp0,d00_limexp0,arg2)
#endif
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND) ddxprobe= */
le2_Vbi_ci=((le2_Vbi_ci*d00_limexp0)+(le2*arg2_Vbi_ci*d10_limexp0));
le2_Vtnode_GND=((le2_Vtnode_GND*d00_limexp0)+(le2*arg2_Vtnode_GND*d10_limexp0));
#endif
le2=(le2*d00_limexp0);
EXIT_IF_ISNAN((le2*d00_limexp0))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci) ddxprobe= */
itri_Vtnode_GND=((is_t_Vtnode_GND*le2)+(is_t*le2_Vtnode_GND));
itri_Vbi_ci=(is_t*le2_Vbi_ci);
#endif
itri=(is_t*le2);
EXIT_IF_ISNAN((is_t*le2))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci) ddxprobe= */
qm_Vtnode_GND=((itfi_Vtnode_GND/ickf)+(itri_Vtnode_GND/ickr));
qm_Vbi_ei=(itfi_Vbi_ei/ickf);
qm_Vbi_ci=(itri_Vbi_ci/ickr);
#endif
qm=((itfi/ickf)+(itri/ickr));
EXIT_IF_ISNAN(((itfi/ickf)+(itri/ickr)))
{
double m00_sqrt(d00_sqrt0,((qj_2*qj_2)+qm))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((qj_2*qj_2)+qm))
#endif
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci)V(bi:ei) ddxprobe= */
qpt_Vbi_ci=(qj_2_Vbi_ci+(((qj_2_Vbi_ci*qj_2)+(qj_2*qj_2_Vbi_ci))+qm_Vbi_ci)*d10_sqrt0);
qpt_Vtnode_GND=(qj_2_Vtnode_GND+(((qj_2_Vtnode_GND*qj_2)+(qj_2*qj_2_Vtnode_GND))+qm_Vtnode_GND)*d10_sqrt0);
qpt_Vb_ci=(qj_2_Vb_ci+((qj_2_Vb_ci*qj_2)+(qj_2*qj_2_Vb_ci))*d10_sqrt0);
qpt_Vbi_ei=qm_Vbi_ei*d10_sqrt0;
#endif
qpt=(qj_2+d00_sqrt0);
EXIT_IF_ISNAN((qj_2+d00_sqrt0))
}
if
((qpt<=1e-20))
{
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci)V(bi:ei) ddxprobe= */
qpt_Vbi_ci=0.0;
qpt_Vtnode_GND=0.0;
qpt_Vb_ci=0.0;
qpt_Vbi_ei=0.0;
#endif
qpt=1e-20;
EXIT_IF_ISNAN(1e-20)
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe= */
itfl_Vtnode_GND=((itfi_Vtnode_GND*qpt-itfi*qpt_Vtnode_GND)/qpt/qpt);
itfl_Vbi_ei=((itfi_Vbi_ei*qpt-itfi*qpt_Vbi_ei)/qpt/qpt);
itfl_Vbi_ci=(-itfi*qpt_Vbi_ci/qpt/qpt);
itfl_Vb_ci=(-itfi*qpt_Vb_ci/qpt/qpt);
#endif
itfl=(itfi/qpt);
EXIT_IF_ISNAN((itfi/qpt))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(b:ci)V(bi:ei) ddxprobe= */
itrl_Vtnode_GND=((itri_Vtnode_GND*qpt-itri*qpt_Vtnode_GND)/qpt/qpt);
itrl_Vbi_ci=((itri_Vbi_ci*qpt-itri*qpt_Vbi_ci)/qpt/qpt);
itrl_Vb_ci=(-itri*qpt_Vb_ci/qpt/qpt);
itrl_Vbi_ei=(-itri*qpt_Vbi_ei/qpt/qpt);
#endif
itrl=(itri/qpt);
EXIT_IF_ISNAN((itri/qpt))
if
((itfl<=1e-20))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe= */
itfl_Vtnode_GND=0.0;
itfl_Vbi_ei=0.0;
itfl_Vbi_ci=0.0;
itfl_Vb_ci=0.0;
#endif
itfl=1e-20;
EXIT_IF_ISNAN(1e-20)
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe= */
al_Vtnode_GND=(-((ick_Vtnode_GND*itfl-ick*itfl_Vtnode_GND)/itfl/itfl));
al_Vci_ei=(-(ick_Vci_ei/itfl));
al_Vbi_ei=(-(-ick*itfl_Vbi_ei/itfl/itfl));
al_Vbi_ci=(-(-ick*itfl_Vbi_ci/itfl/itfl));
al_Vb_ci=(-(-ick*itfl_Vb_ci/itfl/itfl));
#endif
al=(1-(ick/itfl));
EXIT_IF_ISNAN((1-(ick/itfl)))
{
double m00_sqrt(d00_sqrt0,((al*al)+pModel->ahc))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((al*al)+pModel->ahc))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe= */
s3l_Vtnode_GND=((al_Vtnode_GND*al)+(al*al_Vtnode_GND))*d10_sqrt0;
s3l_Vci_ei=((al_Vci_ei*al)+(al*al_Vci_ei))*d10_sqrt0;
s3l_Vbi_ei=((al_Vbi_ei*al)+(al*al_Vbi_ei))*d10_sqrt0;
s3l_Vbi_ci=((al_Vbi_ci*al)+(al*al_Vbi_ci))*d10_sqrt0;
s3l_Vb_ci=((al_Vb_ci*al)+(al*al_Vb_ci))*d10_sqrt0;
#endif
s3l=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
{
double m00_sqrt(d00_sqrt0,(1+pModel->ahc))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe= */
wl_Vtnode_GND=((al_Vtnode_GND+s3l_Vtnode_GND)/(1+d00_sqrt0));
wl_Vci_ei=((al_Vci_ei+s3l_Vci_ei)/(1+d00_sqrt0));
wl_Vbi_ei=((al_Vbi_ei+s3l_Vbi_ei)/(1+d00_sqrt0));
wl_Vbi_ci=((al_Vbi_ci+s3l_Vbi_ci)/(1+d00_sqrt0));
wl_Vb_ci=((al_Vb_ci+s3l_Vb_ci)/(1+d00_sqrt0));
#endif
wl=((al+s3l)/(1+d00_sqrt0));
EXIT_IF_ISNAN(((al+s3l)/(1+d00_sqrt0)))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe= */
d_qfh_Vtnode_GND=((((((wl_Vtnode_GND*wl)+(wl*wl_Vtnode_GND))+(((pModel->tfh*itfl_Vtnode_GND)*ick-(pModel->tfh*itfl)*ick_Vtnode_GND)/ick/ick))*itfl)+(((wl*wl)+((pModel->tfh*itfl)/ick))*itfl_Vtnode_GND))/pModel->iqfh);
d_qfh_Vci_ei=((((wl_Vci_ei*wl)+(wl*wl_Vci_ei))+(-(pModel->tfh*itfl)*ick_Vci_ei/ick/ick))*itfl/pModel->iqfh);
d_qfh_Vbi_ei=((((((wl_Vbi_ei*wl)+(wl*wl_Vbi_ei))+((pModel->tfh*itfl_Vbi_ei)/ick))*itfl)+(((wl*wl)+((pModel->tfh*itfl)/ick))*itfl_Vbi_ei))/pModel->iqfh);
d_qfh_Vbi_ci=((((((wl_Vbi_ci*wl)+(wl*wl_Vbi_ci))+((pModel->tfh*itfl_Vbi_ci)/ick))*itfl)+(((wl*wl)+((pModel->tfh*itfl)/ick))*itfl_Vbi_ci))/pModel->iqfh);
d_qfh_Vb_ci=((((((wl_Vb_ci*wl)+(wl*wl_Vb_ci))+((pModel->tfh*itfl_Vb_ci)/ick))*itfl)+(((wl*wl)+((pModel->tfh*itfl)/ick))*itfl_Vb_ci))/pModel->iqfh);
#endif
d_qfh=((((wl*wl)+((pModel->tfh*itfl)/ick))*itfl)/pModel->iqfh);
EXIT_IF_ISNAN(((((wl*wl)+((pModel->tfh*itfl)/ick))*itfl)/pModel->iqfh))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe= */
facl_Vtnode_GND=(-1*((d_qfh_Vtnode_GND*qpt-d_qfh*qpt_Vtnode_GND)/qpt/qpt)/(1+(d_qfh/qpt))/(1+(d_qfh/qpt)));
facl_Vci_ei=(-1*(d_qfh_Vci_ei/qpt)/(1+(d_qfh/qpt))/(1+(d_qfh/qpt)));
facl_Vbi_ei=(-1*((d_qfh_Vbi_ei*qpt-d_qfh*qpt_Vbi_ei)/qpt/qpt)/(1+(d_qfh/qpt))/(1+(d_qfh/qpt)));
facl_Vbi_ci=(-1*((d_qfh_Vbi_ci*qpt-d_qfh*qpt_Vbi_ci)/qpt/qpt)/(1+(d_qfh/qpt))/(1+(d_qfh/qpt)));
facl_Vb_ci=(-1*((d_qfh_Vb_ci*qpt-d_qfh*qpt_Vb_ci)/qpt/qpt)/(1+(d_qfh/qpt))/(1+(d_qfh/qpt)));
#endif
facl=(1/(1+(d_qfh/qpt)));
EXIT_IF_ISNAN((1/(1+(d_qfh/qpt))))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
itf_Vtnode_GND=((itfl_Vtnode_GND*facl)+(itfl*facl_Vtnode_GND));
itf_Vbi_ei=((itfl_Vbi_ei*facl)+(itfl*facl_Vbi_ei));
itf_Vbi_ci=((itfl_Vbi_ci*facl)+(itfl*facl_Vbi_ci));
itf_Vb_ci=((itfl_Vb_ci*facl)+(itfl*facl_Vb_ci));
itf_Vci_ei=(itfl*facl_Vci_ei);
#endif
itf=(itfl*facl);
EXIT_IF_ISNAN((itfl*facl))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(b:ci)V(bi:ei)V(ci:ei) ddxprobe= */
itr_Vtnode_GND=((itrl_Vtnode_GND*facl)+(itrl*facl_Vtnode_GND));
itr_Vbi_ci=((itrl_Vbi_ci*facl)+(itrl*facl_Vbi_ci));
itr_Vb_ci=((itrl_Vb_ci*facl)+(itrl*facl_Vb_ci));
itr_Vbi_ei=((itrl_Vbi_ei*facl)+(itrl*facl_Vbi_ei));
itr_Vci_ei=(itrl*facl_Vci_ei);
#endif
itr=(itrl*facl);
EXIT_IF_ISNAN((itrl*facl))
if
((itf<=1e-20))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
itf_Vtnode_GND=0.0;
itf_Vbi_ei=0.0;
itf_Vbi_ci=0.0;
itf_Vb_ci=0.0;
itf_Vci_ei=0.0;
#endif
itf=1e-20;
EXIT_IF_ISNAN(1e-20)
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
it_Vtnode_GND=(itf_Vtnode_GND-itr_Vtnode_GND);
it_Vbi_ei=(itf_Vbi_ei-itr_Vbi_ei);
it_Vbi_ci=(itf_Vbi_ci-itr_Vbi_ci);
it_Vb_ci=(itf_Vb_ci-itr_Vb_ci);
it_Vci_ei=(itf_Vci_ei-itr_Vci_ei);
#endif
pInst->it=(itf-itr);
EXIT_IF_ISNAN((itf-itr))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(b:ci)V(bi:ei)V(ci:ei) ddxprobe= */
qf0_Vtnode_GND=((tf0_Vtnode_GND*itf)+(tf0*itf_Vtnode_GND));
qf0_Vbi_ci=((tf0_Vbi_ci*itf)+(tf0*itf_Vbi_ci));
qf0_Vb_ci=((tf0_Vb_ci*itf)+(tf0*itf_Vb_ci));
qf0_Vbi_ei=(tf0*itf_Vbi_ei);
qf0_Vci_ei=(tf0*itf_Vci_ei);
#endif
qf0=(tf0*itf);
EXIT_IF_ISNAN((tf0*itf))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
a_Vci_ei=(-((ick_Vci_ei*itf-ick*itf_Vci_ei)/itf/itf));
a_Vbi_ei=(-(-ick*itf_Vbi_ei/itf/itf));
a_Vbi_ci=(-(-ick*itf_Vbi_ci/itf/itf));
a_Vb_ci=(-(-ick*itf_Vb_ci/itf/itf));
a_Vtnode_GND=(-((ick_Vtnode_GND*itf-ick*itf_Vtnode_GND)/itf/itf));
#endif
a=(1-(ick/itf));
EXIT_IF_ISNAN((1-(ick/itf)))
#endif
#if defined(_DYNAMIC)
{
double m00_sqrt(d00_sqrt0,((a*a)+pModel->ahc))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((a*a)+pModel->ahc))
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
s3_Vci_ei=((a_Vci_ei*a)+(a*a_Vci_ei))*d10_sqrt0;
s3_Vbi_ei=((a_Vbi_ei*a)+(a*a_Vbi_ei))*d10_sqrt0;
s3_Vbi_ci=((a_Vbi_ci*a)+(a*a_Vbi_ci))*d10_sqrt0;
s3_Vb_ci=((a_Vb_ci*a)+(a*a_Vb_ci))*d10_sqrt0;
s3_Vtnode_GND=((a_Vtnode_GND*a)+(a*a_Vtnode_GND))*d10_sqrt0;
#endif
s3=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
#endif
#if defined(_DYNAMIC)
{
double m00_sqrt(d00_sqrt0,(1+pModel->ahc))
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
w_Vci_ei=((a_Vci_ei+s3_Vci_ei)/(1+d00_sqrt0));
w_Vbi_ei=((a_Vbi_ei+s3_Vbi_ei)/(1+d00_sqrt0));
w_Vbi_ci=((a_Vbi_ci+s3_Vbi_ci)/(1+d00_sqrt0));
w_Vb_ci=((a_Vb_ci+s3_Vb_ci)/(1+d00_sqrt0));
w_Vtnode_GND=((a_Vtnode_GND+s3_Vtnode_GND)/(1+d00_sqrt0));
#endif
w=((a+s3)/(1+d00_sqrt0));
EXIT_IF_ISNAN(((a+s3)/(1+d00_sqrt0)))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe= */
tww_Vtnode_GND=((((thcs_t_Vtnode_GND*w)+(thcs_t*w_Vtnode_GND))*w)+((thcs_t*w)*w_Vtnode_GND));
tww_Vci_ei=(((thcs_t*w_Vci_ei)*w)+((thcs_t*w)*w_Vci_ei));
tww_Vbi_ei=(((thcs_t*w_Vbi_ei)*w)+((thcs_t*w)*w_Vbi_ei));
tww_Vbi_ci=(((thcs_t*w_Vbi_ci)*w)+((thcs_t*w)*w_Vbi_ci));
tww_Vb_ci=(((thcs_t*w_Vb_ci)*w)+((thcs_t*w)*w_Vb_ci));
#endif
tww=((thcs_t*w)*w);
EXIT_IF_ISNAN(((thcs_t*w)*w))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe= */
dqfh_Vtnode_GND=((tww_Vtnode_GND*itf)+(tww*itf_Vtnode_GND));
dqfh_Vci_ei=((tww_Vci_ei*itf)+(tww*itf_Vci_ei));
dqfh_Vbi_ei=((tww_Vbi_ei*itf)+(tww*itf_Vbi_ei));
dqfh_Vbi_ci=((tww_Vbi_ci*itf)+(tww*itf_Vbi_ci));
dqfh_Vb_ci=((tww_Vb_ci*itf)+(tww*itf_Vb_ci));
#endif
dqfh=(tww*itf);
EXIT_IF_ISNAN((tww*itf))
#endif
#if defined(_DYNAMIC)
dtfh=(tww*(1+(((2*ick)/itf)/s3)));
EXIT_IF_ISNAN((tww*(1+(((2*ick)/itf)/s3))))
#endif
#if defined(_DYNAMIC)
{
double m00_logE(d00_logE0,(itf/ick))
double m00_exp(d00_exp1,(pModel->gte*d00_logE0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(itf/ick))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
dtef_Vtnode_GND=((tef0_t_Vtnode_GND*d00_exp1)+(tef0_t*(pModel->gte*((itf_Vtnode_GND*ick-itf*ick_Vtnode_GND)/ick/ick)*d10_logE0)*d10_exp1));
dtef_Vbi_ei=(tef0_t*(pModel->gte*(itf_Vbi_ei/ick)*d10_logE0)*d10_exp1);
dtef_Vbi_ci=(tef0_t*(pModel->gte*(itf_Vbi_ci/ick)*d10_logE0)*d10_exp1);
dtef_Vb_ci=(tef0_t*(pModel->gte*(itf_Vb_ci/ick)*d10_logE0)*d10_exp1);
dtef_Vci_ei=(tef0_t*(pModel->gte*((itf_Vci_ei*ick-itf*ick_Vci_ei)/ick/ick)*d10_logE0)*d10_exp1);
#endif
dtef=(tef0_t*d00_exp1);
EXIT_IF_ISNAN((tef0_t*d00_exp1))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
dqef_Vtnode_GND=(((dtef_Vtnode_GND*itf)+(dtef*itf_Vtnode_GND))/(pModel->gte+1.0));
dqef_Vbi_ei=(((dtef_Vbi_ei*itf)+(dtef*itf_Vbi_ei))/(pModel->gte+1.0));
dqef_Vbi_ci=(((dtef_Vbi_ci*itf)+(dtef*itf_Vbi_ci))/(pModel->gte+1.0));
dqef_Vb_ci=(((dtef_Vb_ci*itf)+(dtef*itf_Vb_ci))/(pModel->gte+1.0));
dqef_Vci_ei=(((dtef_Vci_ei*itf)+(dtef*itf_Vci_ei))/(pModel->gte+1.0));
#endif
dqef=((dtef*itf)/(pModel->gte+1.0));
EXIT_IF_ISNAN(((dtef*itf)/(pModel->gte+1.0)))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(b:ci)V(bi:ei)V(ci:ei) ddxprobe= */
qf_Vtnode_GND=((qf0_Vtnode_GND+dqef_Vtnode_GND)+dqfh_Vtnode_GND);
qf_Vbi_ci=((qf0_Vbi_ci+dqef_Vbi_ci)+dqfh_Vbi_ci);
qf_Vb_ci=((qf0_Vb_ci+dqef_Vb_ci)+dqfh_Vb_ci);
qf_Vbi_ei=((qf0_Vbi_ei+dqef_Vbi_ei)+dqfh_Vbi_ei);
qf_Vci_ei=((qf0_Vci_ei+dqef_Vci_ei)+dqfh_Vci_ei);
#endif
qf=((qf0+dqef)+dqfh);
EXIT_IF_ISNAN(((qf0+dqef)+dqfh))
#endif
#if defined(_DYNAMIC)
tf=((tf0+dtfh)+dtef);
EXIT_IF_ISNAN(((tf0+dtfh)+dtef))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(b:ci)V(bi:ei)V(ci:ei) ddxprobe= */
qr_Vtnode_GND=(pModel->tr*itr_Vtnode_GND);
qr_Vbi_ci=(pModel->tr*itr_Vbi_ci);
qr_Vb_ci=(pModel->tr*itr_Vb_ci);
qr_Vbi_ei=(pModel->tr*itr_Vbi_ei);
qr_Vci_ei=(pModel->tr*itr_Vci_ei);
#endif
qr=(pModel->tr*itr);
EXIT_IF_ISNAN((pModel->tr*itr))
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
DIOY_Vs_ci=0.0;
DIOY_Vbi_ci=0.0;
DIOY_Vbi_ei=(Vbiei_Vbi_ei/(pModel->mbe*VT));
DIOY_Vtnode_GND=(-Vbiei*(pModel->mbe*VT_Vtnode_GND)/(pModel->mbe*VT)/(pModel->mbe*VT));
#endif
DIOY=(Vbiei/(pModel->mbe*VT));
EXIT_IF_ISNAN((Vbiei/(pModel->mbe*VT)))
if
((pModel->ibes>0.0))
{
if
((DIOY>80))
{
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=0.0;
le_Vbi_ci=0.0;
le_Vbi_ei=DIOY_Vbi_ei;
le_Vtnode_GND=DIOY_Vtnode_GND;
#endif
le=(1+(DIOY-80));
EXIT_IF_ISNAN((1+(DIOY-80)))
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
DIOY_Vs_ci=0.0;
DIOY_Vbi_ci=0.0;
DIOY_Vbi_ei=0.0;
DIOY_Vtnode_GND=0.0;
#endif
DIOY=80;
EXIT_IF_ISNAN(80)
}
else
{
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=0.0;
le_Vbi_ci=0.0;
le_Vbi_ei=0.0;
le_Vtnode_GND=0.0;
#endif
le=1;
EXIT_IF_ISNAN(1)
}
{
double m00_limexp(d00_limexp0,DIOY)
#if defined(_DERIVATE)
double m10_limexp(d10_limexp0,d00_limexp0,DIOY)
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=0.0;
le_Vbi_ci=0.0;
le_Vbi_ei=((le_Vbi_ei*d00_limexp0)+(le*DIOY_Vbi_ei*d10_limexp0));
le_Vtnode_GND=((le_Vtnode_GND*d00_limexp0)+(le*DIOY_Vtnode_GND*d10_limexp0));
#endif
le=(le*d00_limexp0);
EXIT_IF_ISNAN((le*d00_limexp0))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei) ddxprobe= */
ibe_Vtnode_GND=((ibes_t_Vtnode_GND*(le-1.0))+(ibes_t*le_Vtnode_GND));
ibe_Vbi_ei=(ibes_t*le_Vbi_ei);
#endif
ibe=(ibes_t*(le-1.0));
EXIT_IF_ISNAN((ibes_t*(le-1.0)))
if
((DIOY<=(-14.0)))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei) ddxprobe= */
ibe_Vtnode_GND=(-ibes_t_Vtnode_GND);
ibe_Vbi_ei=0.0;
#endif
ibe=(-ibes_t);
EXIT_IF_ISNAN((-ibes_t))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei) ddxprobe= */
ibe_Vtnode_GND=0.0;
ibe_Vbi_ei=0.0;
#endif
ibe=0.0;
EXIT_IF_ISNAN(0.0)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
DIOY_Vs_ci=0.0;
DIOY_Vbi_ci=0.0;
DIOY_Vbi_ei=(Vbiei_Vbi_ei/(pModel->mre*VT));
DIOY_Vtnode_GND=(-Vbiei*(pModel->mre*VT_Vtnode_GND)/(pModel->mre*VT)/(pModel->mre*VT));
#endif
DIOY=(Vbiei/(pModel->mre*VT));
EXIT_IF_ISNAN((Vbiei/(pModel->mre*VT)))
if
((pModel->ires>0.0))
{
if
((DIOY>80))
{
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=0.0;
le_Vbi_ci=0.0;
le_Vbi_ei=DIOY_Vbi_ei;
le_Vtnode_GND=DIOY_Vtnode_GND;
#endif
le=(1+(DIOY-80));
EXIT_IF_ISNAN((1+(DIOY-80)))
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
DIOY_Vs_ci=0.0;
DIOY_Vbi_ci=0.0;
DIOY_Vbi_ei=0.0;
DIOY_Vtnode_GND=0.0;
#endif
DIOY=80;
EXIT_IF_ISNAN(80)
}
else
{
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=0.0;
le_Vbi_ci=0.0;
le_Vbi_ei=0.0;
le_Vtnode_GND=0.0;
#endif
le=1;
EXIT_IF_ISNAN(1)
}
{
double m00_limexp(d00_limexp0,DIOY)
#if defined(_DERIVATE)
double m10_limexp(d10_limexp0,d00_limexp0,DIOY)
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=0.0;
le_Vbi_ci=0.0;
le_Vbi_ei=((le_Vbi_ei*d00_limexp0)+(le*DIOY_Vbi_ei*d10_limexp0));
le_Vtnode_GND=((le_Vtnode_GND*d00_limexp0)+(le*DIOY_Vtnode_GND*d10_limexp0));
#endif
le=(le*d00_limexp0);
EXIT_IF_ISNAN((le*d00_limexp0))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei) ddxprobe= */
ire_Vtnode_GND=((ires_t_Vtnode_GND*(le-1.0))+(ires_t*le_Vtnode_GND));
ire_Vbi_ei=(ires_t*le_Vbi_ei);
#endif
ire=(ires_t*(le-1.0));
EXIT_IF_ISNAN((ires_t*(le-1.0)))
if
((DIOY<=(-14.0)))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei) ddxprobe= */
ire_Vtnode_GND=(-ires_t_Vtnode_GND);
ire_Vbi_ei=0.0;
#endif
ire=(-ires_t);
EXIT_IF_ISNAN((-ires_t))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei) ddxprobe= */
ire_Vtnode_GND=0.0;
ire_Vbi_ei=0.0;
#endif
ire=0.0;
EXIT_IF_ISNAN(0.0)
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei) ddxprobe= */
ijbe_Vtnode_GND=(ibe_Vtnode_GND+ire_Vtnode_GND);
ijbe_Vbi_ei=(ibe_Vbi_ei+ire_Vbi_ei);
#endif
pInst->ijbe=(ibe+ire);
EXIT_IF_ISNAN((ibe+ire))
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
DIOY_Vs_ci=0.0;
DIOY_Vbi_ci=(Vbici_Vbi_ci/(pModel->mbc*VT));
DIOY_Vbi_ei=0.0;
DIOY_Vtnode_GND=(-Vbici*(pModel->mbc*VT_Vtnode_GND)/(pModel->mbc*VT)/(pModel->mbc*VT));
#endif
DIOY=(Vbici/(pModel->mbc*VT));
EXIT_IF_ISNAN((Vbici/(pModel->mbc*VT)))
if
((pModel->ibcs>0.0))
{
if
((DIOY>80))
{
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=0.0;
le_Vbi_ci=DIOY_Vbi_ci;
le_Vbi_ei=DIOY_Vbi_ei;
le_Vtnode_GND=DIOY_Vtnode_GND;
#endif
le=(1+(DIOY-80));
EXIT_IF_ISNAN((1+(DIOY-80)))
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
DIOY_Vs_ci=0.0;
DIOY_Vbi_ci=0.0;
DIOY_Vbi_ei=0.0;
DIOY_Vtnode_GND=0.0;
#endif
DIOY=80;
EXIT_IF_ISNAN(80)
}
else
{
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=0.0;
le_Vbi_ci=0.0;
le_Vbi_ei=0.0;
le_Vtnode_GND=0.0;
#endif
le=1;
EXIT_IF_ISNAN(1)
}
{
double m00_limexp(d00_limexp0,DIOY)
#if defined(_DERIVATE)
double m10_limexp(d10_limexp0,d00_limexp0,DIOY)
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=0.0;
le_Vbi_ci=((le_Vbi_ci*d00_limexp0)+(le*DIOY_Vbi_ci*d10_limexp0));
le_Vbi_ei=((le_Vbi_ei*d00_limexp0)+(le*DIOY_Vbi_ei*d10_limexp0));
le_Vtnode_GND=((le_Vtnode_GND*d00_limexp0)+(le*DIOY_Vtnode_GND*d10_limexp0));
#endif
le=(le*d00_limexp0);
EXIT_IF_ISNAN((le*d00_limexp0))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(bi:ei) ddxprobe= */
ijbc_Vtnode_GND=((ibcs_t_Vtnode_GND*(le-1.0))+(ibcs_t*le_Vtnode_GND));
ijbc_Vbi_ci=(ibcs_t*le_Vbi_ci);
ijbc_Vbi_ei=(ibcs_t*le_Vbi_ei);
#endif
pInst->ijbc=(ibcs_t*(le-1.0));
EXIT_IF_ISNAN((ibcs_t*(le-1.0)))
if
((DIOY<=(-14.0)))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(bi:ei) ddxprobe= */
ijbc_Vtnode_GND=(-ibcs_t_Vtnode_GND);
ijbc_Vbi_ci=0.0;
ijbc_Vbi_ei=0.0;
#endif
pInst->ijbc=(-ibcs_t);
EXIT_IF_ISNAN((-ibcs_t))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(bi:ei) ddxprobe= */
ijbc_Vtnode_GND=0.0;
ijbc_Vbi_ci=0.0;
ijbc_Vbi_ei=0.0;
#endif
pInst->ijbc=0.0;
EXIT_IF_ISNAN(0.0)
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci) ddxprobe= */
ibi_Vtnode_GND=(ijbe_Vtnode_GND+ijbc_Vtnode_GND);
ibi_Vbi_ei=(ijbe_Vbi_ei+ijbc_Vbi_ei);
ibi_Vbi_ci=ijbc_Vbi_ci;
#endif
ibi=(pInst->ijbe+pInst->ijbc);
EXIT_IF_ISNAN((pInst->ijbe+pInst->ijbc))
if
((Vbici<0))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
v_bord_Vtnode_GND=((eavl_t_Vtnode_GND*vdci_t)+(eavl_t*vdci_t_Vtnode_GND));
#endif
v_bord=(eavl_t*vdci_t);
EXIT_IF_ISNAN((eavl_t*vdci_t))
if
(((vdci_t-Vbici)>v_bord))
{
{
double m00_exp(d00_exp0,(-cc))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(b:ci) ddxprobe= */
a_iavl_Vtnode_GND=((((kavl_t_Vtnode_GND*vdci_t-kavl_t*vdci_t_Vtnode_GND)/vdci_t/vdci_t)*d00_exp0)+((kavl_t/vdci_t)*(-cc_Vtnode_GND)*d10_exp0));
a_iavl_Vbi_ci=((kavl_t/vdci_t)*(-cc_Vbi_ci)*d10_exp0);
a_iavl_Vb_ci=((kavl_t/vdci_t)*(-cc_Vb_ci)*d10_exp0);
#endif
a_iavl=((kavl_t/vdci_t)*d00_exp0);
EXIT_IF_ISNAN(((kavl_t/vdci_t)*d00_exp0))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
iavl_Vtnode_GND=((((itf_Vtnode_GND*a_iavl)+(itf*a_iavl_Vtnode_GND))*(v_bord+((1+cc)*((vdci_t-Vbici)-v_bord))))+((itf*a_iavl)*(v_bord_Vtnode_GND+((cc_Vtnode_GND*((vdci_t-Vbici)-v_bord))+((1+cc)*(vdci_t_Vtnode_GND-v_bord_Vtnode_GND))))));
iavl_Vbi_ei=itf_Vbi_ei*a_iavl*(v_bord+((1+cc)*((vdci_t-Vbici)-v_bord)));
iavl_Vbi_ci=((((itf_Vbi_ci*a_iavl)+(itf*a_iavl_Vbi_ci))*(v_bord+((1+cc)*((vdci_t-Vbici)-v_bord))))+((itf*a_iavl)*((cc_Vbi_ci*((vdci_t-Vbici)-v_bord))+((1+cc)*(-Vbici_Vbi_ci)))));
iavl_Vb_ci=((((itf_Vb_ci*a_iavl)+(itf*a_iavl_Vb_ci))*(v_bord+((1+cc)*((vdci_t-Vbici)-v_bord))))+((itf*a_iavl)*cc_Vb_ci*((vdci_t-Vbici)-v_bord)));
iavl_Vci_ei=itf_Vci_ei*a_iavl*(v_bord+((1+cc)*((vdci_t-Vbici)-v_bord)));
#endif
pInst->iavl=((itf*a_iavl)*(v_bord+((1+cc)*((vdci_t-Vbici)-v_bord))));
EXIT_IF_ISNAN(((itf*a_iavl)*(v_bord+((1+cc)*((vdci_t-Vbici)-v_bord)))))
}
else
{
{
double m00_logE(d00_logE0,(1/cc))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1/cc))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(b:ci) ddxprobe= */
lncc_Vtnode_GND=(-1*cc_Vtnode_GND/cc/cc)*d10_logE0;
lncc_Vbi_ci=(-1*cc_Vbi_ci/cc/cc)*d10_logE0;
lncc_Vb_ci=(-1*cc_Vb_ci/cc/cc)*d10_logE0;
#endif
lncc=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
{
double m00_exp(d00_exp0,(((1/pModel->zci)-1)*lncc))
double m00_exp(d00_exp1,((((-1)/pModel->zci)*lncc)-(eavl_t*d00_exp0)))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
iavl_Vtnode_GND=((((kavl_t_Vtnode_GND*itf)+(kavl_t*itf_Vtnode_GND))*d00_exp1)+((kavl_t*itf)*((((-1)/pModel->zci)*lncc_Vtnode_GND)-((eavl_t_Vtnode_GND*d00_exp0)+(eavl_t*(((1/pModel->zci)-1)*lncc_Vtnode_GND)*d10_exp0)))*d10_exp1));
iavl_Vbi_ei=(kavl_t*itf_Vbi_ei)*d00_exp1;
iavl_Vbi_ci=(((kavl_t*itf_Vbi_ci)*d00_exp1)+((kavl_t*itf)*((((-1)/pModel->zci)*lncc_Vbi_ci)-(eavl_t*(((1/pModel->zci)-1)*lncc_Vbi_ci)*d10_exp0))*d10_exp1));
iavl_Vb_ci=(((kavl_t*itf_Vb_ci)*d00_exp1)+((kavl_t*itf)*((((-1)/pModel->zci)*lncc_Vb_ci)-(eavl_t*(((1/pModel->zci)-1)*lncc_Vb_ci)*d10_exp0))*d10_exp1));
iavl_Vci_ei=(kavl_t*itf_Vci_ei)*d00_exp1;
#endif
pInst->iavl=((kavl_t*itf)*d00_exp1);
EXIT_IF_ISNAN(((kavl_t*itf)*d00_exp1))
}
}
}
else
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
iavl_Vtnode_GND=0.0;
iavl_Vbi_ei=0.0;
iavl_Vbi_ci=0.0;
iavl_Vb_ci=0.0;
iavl_Vci_ei=0.0;
#endif
pInst->iavl=0;
EXIT_IF_ISNAN(0)
}
if
((rbi0_t>0.0))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci) ddxprobe= */
qje_Vtnode_GND=((qjei_Vtnode_GND*cje0_t-pInst->qjei*cje0_t_Vtnode_GND)/cje0_t/cje0_t);
qje_Vbi_ei=(qjei_Vbi_ei/cje0_t);
qje_Vbi_ci=(qjei_Vbi_ci/cje0_t);
qje_Vb_ci=(qjei_Vb_ci/cje0_t);
#endif
qje=(pInst->qjei/cje0_t);
EXIT_IF_ISNAN((pInst->qjei/cje0_t))
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
Qz_nom_Vtnode_GND=((((qje_Vtnode_GND/pModel->vr0e)+(qjci_Vtnode_GND/pModel->vr0c))+(itf_Vtnode_GND/ickf))+(itr_Vtnode_GND/ickr));
Qz_nom_Vbi_ei=(((qje_Vbi_ei/pModel->vr0e)+(itf_Vbi_ei/ickf))+(itr_Vbi_ei/ickr));
Qz_nom_Vbi_ci=((((qje_Vbi_ci/pModel->vr0e)+(qjci_Vbi_ci/pModel->vr0c))+(itf_Vbi_ci/ickf))+(itr_Vbi_ci/ickr));
Qz_nom_Vb_ci=((((qje_Vb_ci/pModel->vr0e)+(qjci_Vb_ci/pModel->vr0c))+(itf_Vb_ci/ickf))+(itr_Vb_ci/ickr));
Qz_nom_Vci_ei=((itf_Vci_ei/ickf)+(itr_Vci_ei/ickr));
#endif
Qz_nom=((((1+(qje/pModel->vr0e))+(pInst->qjci/pModel->vr0c))+(itf/ickf))+(itr/ickr));
EXIT_IF_ISNAN(((((1+(qje/pModel->vr0e))+(pInst->qjci/pModel->vr0c))+(itf/ickf))+(itr/ickr)))
{
double m00_sqrt(d00_sqrt0,((Qz_nom*Qz_nom)+0.01))
#if defined(_DERIVATE)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((Qz_nom*Qz_nom)+0.01))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
fQz_Vtnode_GND=(0.5*(Qz_nom_Vtnode_GND+((Qz_nom_Vtnode_GND*Qz_nom)+(Qz_nom*Qz_nom_Vtnode_GND))*d10_sqrt0));
fQz_Vbi_ei=(0.5*(Qz_nom_Vbi_ei+((Qz_nom_Vbi_ei*Qz_nom)+(Qz_nom*Qz_nom_Vbi_ei))*d10_sqrt0));
fQz_Vbi_ci=(0.5*(Qz_nom_Vbi_ci+((Qz_nom_Vbi_ci*Qz_nom)+(Qz_nom*Qz_nom_Vbi_ci))*d10_sqrt0));
fQz_Vb_ci=(0.5*(Qz_nom_Vb_ci+((Qz_nom_Vb_ci*Qz_nom)+(Qz_nom*Qz_nom_Vb_ci))*d10_sqrt0));
fQz_Vci_ei=(0.5*(Qz_nom_Vci_ei+((Qz_nom_Vci_ei*Qz_nom)+(Qz_nom*Qz_nom_Vci_ei))*d10_sqrt0));
#endif
fQz=(0.5*(Qz_nom+d00_sqrt0));
EXIT_IF_ISNAN((0.5*(Qz_nom+d00_sqrt0)))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
rbi_Vtnode_GND=((rbi0_t_Vtnode_GND*fQz-rbi0_t*fQz_Vtnode_GND)/fQz/fQz);
rbi_Vbi_ei=(-rbi0_t*fQz_Vbi_ei/fQz/fQz);
rbi_Vbi_ci=(-rbi0_t*fQz_Vbi_ci/fQz/fQz);
rbi_Vb_ci=(-rbi0_t*fQz_Vb_ci/fQz/fQz);
rbi_Vci_ei=(-rbi0_t*fQz_Vci_ei/fQz/fQz);
#endif
rbi=(rbi0_t/fQz);
EXIT_IF_ISNAN((rbi0_t/fQz))
if
((ibi>0.0))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
eta_Vtnode_GND=(((((pModel->fgeo*rbi_Vtnode_GND)*ibi)+((pModel->fgeo*rbi)*ibi_Vtnode_GND))*VT-((pModel->fgeo*rbi)*ibi)*VT_Vtnode_GND)/VT/VT);
eta_Vbi_ei=((((pModel->fgeo*rbi_Vbi_ei)*ibi)+((pModel->fgeo*rbi)*ibi_Vbi_ei))/VT);
eta_Vbi_ci=((((pModel->fgeo*rbi_Vbi_ci)*ibi)+((pModel->fgeo*rbi)*ibi_Vbi_ci))/VT);
eta_Vb_ci=((pModel->fgeo*rbi_Vb_ci)*ibi/VT);
eta_Vci_ei=((pModel->fgeo*rbi_Vci_ei)*ibi/VT);
#endif
eta=(((pModel->fgeo*rbi)*ibi)/VT);
EXIT_IF_ISNAN((((pModel->fgeo*rbi)*ibi)/VT))
if
((eta<1e-6))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
rbi_Vtnode_GND=((rbi_Vtnode_GND*(1-(0.5*eta)))+(rbi*(-(0.5*eta_Vtnode_GND))));
rbi_Vbi_ei=((rbi_Vbi_ei*(1-(0.5*eta)))+(rbi*(-(0.5*eta_Vbi_ei))));
rbi_Vbi_ci=((rbi_Vbi_ci*(1-(0.5*eta)))+(rbi*(-(0.5*eta_Vbi_ci))));
rbi_Vb_ci=((rbi_Vb_ci*(1-(0.5*eta)))+(rbi*(-(0.5*eta_Vb_ci))));
rbi_Vci_ei=((rbi_Vci_ei*(1-(0.5*eta)))+(rbi*(-(0.5*eta_Vci_ei))));
#endif
rbi=(rbi*(1-(0.5*eta)));
EXIT_IF_ISNAN((rbi*(1-(0.5*eta))))
}
else
{
{
double m00_logE(d00_logE0,(eta+1))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(eta+1))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
rbi_Vtnode_GND=((((rbi_Vtnode_GND*d00_logE0)+(rbi*eta_Vtnode_GND*d10_logE0))*eta-(rbi*d00_logE0)*eta_Vtnode_GND)/eta/eta);
rbi_Vbi_ei=((((rbi_Vbi_ei*d00_logE0)+(rbi*eta_Vbi_ei*d10_logE0))*eta-(rbi*d00_logE0)*eta_Vbi_ei)/eta/eta);
rbi_Vbi_ci=((((rbi_Vbi_ci*d00_logE0)+(rbi*eta_Vbi_ci*d10_logE0))*eta-(rbi*d00_logE0)*eta_Vbi_ci)/eta/eta);
rbi_Vb_ci=((((rbi_Vb_ci*d00_logE0)+(rbi*eta_Vb_ci*d10_logE0))*eta-(rbi*d00_logE0)*eta_Vb_ci)/eta/eta);
rbi_Vci_ei=((((rbi_Vci_ei*d00_logE0)+(rbi*eta_Vci_ei*d10_logE0))*eta-(rbi*d00_logE0)*eta_Vci_ei)/eta/eta);
#endif
rbi=((rbi*d00_logE0)/eta);
EXIT_IF_ISNAN(((rbi*d00_logE0)/eta))
}
}
}
}
else
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
rbi_Vtnode_GND=0.0;
rbi_Vbi_ei=0.0;
rbi_Vbi_ci=0.0;
rbi_Vb_ci=0.0;
rbi_Vci_ei=0.0;
#endif
rbi=0.0;
EXIT_IF_ISNAN(0.0)
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
rb_Vtnode_GND=(rbi_Vtnode_GND+rbx_t_Vtnode_GND);
rb_Vbi_ei=rbi_Vbi_ei;
rb_Vbi_ci=rbi_Vbi_ci;
rb_Vb_ci=rbi_Vb_ci;
rb_Vci_ei=rbi_Vci_ei;
#endif
rb=(rbi+rbx_t);
EXIT_IF_ISNAN((rbi+rbx_t))
if
((pModel->itss>0.0))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
HSUM_Vtnode_GND=(pModel->msf*VT_Vtnode_GND);
#endif
HSUM=(pModel->msf*VT);
EXIT_IF_ISNAN((pModel->msf*VT))
{
double m00_limexp(d00_limexp0,(Vbci/HSUM))
#if defined(_DERIVATE)
double m10_limexp(d10_limexp0,d00_limexp0,(Vbci/HSUM))
#endif
#if defined(_DERIVATE) /* probe=V(b:ci)V(tnode:GND) ddxprobe= */
HSa_Vb_ci=(Vbci_Vb_ci/HSUM)*d10_limexp0;
HSa_Vtnode_GND=(-Vbci*HSUM_Vtnode_GND/HSUM/HSUM)*d10_limexp0;
#endif
HSa=d00_limexp0;
EXIT_IF_ISNAN(d00_limexp0)
}
{
double m00_limexp(d00_limexp0,(Vsci/HSUM))
#if defined(_DERIVATE)
double m10_limexp(d10_limexp0,d00_limexp0,(Vsci/HSUM))
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(tnode:GND) ddxprobe= */
HSb_Vs_ci=(Vsci_Vs_ci/HSUM)*d10_limexp0;
HSb_Vtnode_GND=(-Vsci*HSUM_Vtnode_GND/HSUM/HSUM)*d10_limexp0;
#endif
HSb=d00_limexp0;
EXIT_IF_ISNAN(d00_limexp0)
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(b:ci)V(s:ci) ddxprobe= */
HSI_Tsu_Vtnode_GND=((itss_t_Vtnode_GND*(HSa-HSb))+(itss_t*(HSa_Vtnode_GND-HSb_Vtnode_GND)));
HSI_Tsu_Vb_ci=(itss_t*HSa_Vb_ci);
HSI_Tsu_Vs_ci=(itss_t*(-HSb_Vs_ci));
#endif
HSI_Tsu=(itss_t*(HSa-HSb));
EXIT_IF_ISNAN((itss_t*(HSa-HSb)))
}
else
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(b:ci)V(s:ci) ddxprobe= */
HSI_Tsu_Vtnode_GND=0.0;
HSI_Tsu_Vb_ci=0.0;
HSI_Tsu_Vs_ci=0.0;
#endif
HSI_Tsu=0.0;
EXIT_IF_ISNAN(0.0)
}
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
DIOY_Vs_ci=(Vsci_Vs_ci/(pModel->msc*VT));
DIOY_Vbi_ci=0.0;
DIOY_Vbi_ei=0.0;
DIOY_Vtnode_GND=(-Vsci*(pModel->msc*VT_Vtnode_GND)/(pModel->msc*VT)/(pModel->msc*VT));
#endif
DIOY=(Vsci/(pModel->msc*VT));
EXIT_IF_ISNAN((Vsci/(pModel->msc*VT)))
if
((pModel->iscs>0.0))
{
if
((DIOY>80))
{
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=DIOY_Vs_ci;
le_Vbi_ci=DIOY_Vbi_ci;
le_Vbi_ei=DIOY_Vbi_ei;
le_Vtnode_GND=DIOY_Vtnode_GND;
#endif
le=(1+(DIOY-80));
EXIT_IF_ISNAN((1+(DIOY-80)))
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
DIOY_Vs_ci=0.0;
DIOY_Vbi_ci=0.0;
DIOY_Vbi_ei=0.0;
DIOY_Vtnode_GND=0.0;
#endif
DIOY=80;
EXIT_IF_ISNAN(80)
}
else
{
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=0.0;
le_Vbi_ci=0.0;
le_Vbi_ei=0.0;
le_Vtnode_GND=0.0;
#endif
le=1;
EXIT_IF_ISNAN(1)
}
{
double m00_limexp(d00_limexp0,DIOY)
#if defined(_DERIVATE)
double m10_limexp(d10_limexp0,d00_limexp0,DIOY)
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(bi:ci)V(bi:ei)V(tnode:GND) ddxprobe= */
le_Vs_ci=((le_Vs_ci*d00_limexp0)+(le*DIOY_Vs_ci*d10_limexp0));
le_Vbi_ci=((le_Vbi_ci*d00_limexp0)+(le*DIOY_Vbi_ci*d10_limexp0));
le_Vbi_ei=((le_Vbi_ei*d00_limexp0)+(le*DIOY_Vbi_ei*d10_limexp0));
le_Vtnode_GND=((le_Vtnode_GND*d00_limexp0)+(le*DIOY_Vtnode_GND*d10_limexp0));
#endif
le=(le*d00_limexp0);
EXIT_IF_ISNAN((le*d00_limexp0))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(s:ci)V(bi:ci)V(bi:ei) ddxprobe= */
ijsc_Vtnode_GND=((iscs_t_Vtnode_GND*(le-1.0))+(iscs_t*le_Vtnode_GND));
ijsc_Vs_ci=(iscs_t*le_Vs_ci);
ijsc_Vbi_ci=(iscs_t*le_Vbi_ci);
ijsc_Vbi_ei=(iscs_t*le_Vbi_ei);
#endif
pInst->ijsc=(iscs_t*(le-1.0));
EXIT_IF_ISNAN((iscs_t*(le-1.0)))
if
((DIOY<=(-14.0)))
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(s:ci)V(bi:ci)V(bi:ei) ddxprobe= */
ijsc_Vtnode_GND=(-iscs_t_Vtnode_GND);
ijsc_Vs_ci=0.0;
ijsc_Vbi_ci=0.0;
ijsc_Vbi_ei=0.0;
#endif
pInst->ijsc=(-iscs_t);
EXIT_IF_ISNAN((-iscs_t))
}
}
else
{
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(s:ci)V(bi:ci)V(bi:ei) ddxprobe= */
ijsc_Vtnode_GND=0.0;
ijsc_Vs_ci=0.0;
ijsc_Vbi_ci=0.0;
ijsc_Vbi_ei=0.0;
#endif
pInst->ijsc=0.0;
EXIT_IF_ISNAN(0.0)
}
#ifdef _DYNAMIC
if
((pModel->vpts<1.0e2))
{
#ifdef _DYNAMIC
if
((cjs0_t>0.0))
{
#if defined(_DYNAMIC)
zr=(pModel->zs/4.0);
EXIT_IF_ISNAN((pModel->zs/4.0))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
vp_Vtnode_GND=(-vds_t_Vtnode_GND);
#endif
vp=(pModel->vpts-vds_t);
EXIT_IF_ISNAN((pModel->vpts-vds_t))
#endif
#if defined(_DYNAMIC)
{
double m00_logE(d00_logE0,2.4)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->zs))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=vds_t_Vtnode_GND*(1.0-d00_exp1);
#endif
vf=(vds_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vds_t*(1.0-d00_exp1)))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cmax_Vtnode_GND=(2.4*cjs0_t_Vtnode_GND);
#endif
cmax=(2.4*cjs0_t);
EXIT_IF_ISNAN((2.4*cjs0_t))
#endif
#if defined(_DYNAMIC)
{
double m00_logE(d00_logE0,(vds_t/pModel->vpts))
double m00_exp(d00_exp1,((pModel->zs-zr)*d00_logE0))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(vds_t/pModel->vpts))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
cr_Vtnode_GND=((cjs0_t_Vtnode_GND*d00_exp1)+(cjs0_t*((pModel->zs-zr)*(vds_t_Vtnode_GND/pModel->vpts)*d10_logE0)*d10_exp1));
#endif
cr=(cjs0_t*d00_exp1);
EXIT_IF_ISNAN((cjs0_t*d00_exp1))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
a_Vci_ei=0.0;
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vb_ci=0.0;
a_Vtnode_GND=VT_Vtnode_GND;
#endif
a=VT;
EXIT_IF_ISNAN(VT)
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ve_Vs_ci=((-Vsci_Vs_ci)/a);
ve_Vci_ei=(-(vf-Vsci)*a_Vci_ei/a/a);
ve_Vbi_ei=(-(vf-Vsci)*a_Vbi_ei/a/a);
ve_Vbi_ci=(-(vf-Vsci)*a_Vbi_ci/a/a);
ve_Vtnode_GND=((vf_Vtnode_GND*a-(vf-Vsci)*a_Vtnode_GND)/a/a);
ve_Vb_ci=(-(vf-Vsci)*a_Vb_ci/a/a);
#endif
ve=((vf-Vsci)/a);
EXIT_IF_ISNAN(((vf-Vsci)/a))
#endif
#ifdef _DYNAMIC
if
((ve<=80.0))
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,ve)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ex1_Vs_ci=ve_Vs_ci*d10_exp0;
ex1_Vci_ei=ve_Vci_ei*d10_exp0;
ex1_Vbi_ei=ve_Vbi_ei*d10_exp0;
ex1_Vbi_ci=ve_Vbi_ci*d10_exp0;
ex1_Vtnode_GND=ve_Vtnode_GND*d10_exp0;
ex1_Vb_ci=ve_Vb_ci*d10_exp0;
#endif
ex1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ee1_Vs_ci=ex1_Vs_ci;
ee1_Vci_ei=ex1_Vci_ei;
ee1_Vbi_ei=ex1_Vbi_ei;
ee1_Vbi_ci=ex1_Vbi_ci;
ee1_Vtnode_GND=ex1_Vtnode_GND;
ee1_Vb_ci=ex1_Vb_ci;
#endif
ee1=(1.0+ex1);
EXIT_IF_ISNAN((1.0+ex1))
#endif
#if defined(_DYNAMIC)
{
double m00_logE(d00_logE0,ee1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,ee1)
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj1_Vci_ei=(-((a_Vci_ei*d00_logE0)+(a*ee1_Vci_ei*d10_logE0)));
vj1_Vbi_ei=(-((a_Vbi_ei*d00_logE0)+(a*ee1_Vbi_ei*d10_logE0)));
vj1_Vs_ci=(-(a*ee1_Vs_ci*d10_logE0));
vj1_Vbi_ci=(-((a_Vbi_ci*d00_logE0)+(a*ee1_Vbi_ci*d10_logE0)));
vj1_Vtnode_GND=(vf_Vtnode_GND-((a_Vtnode_GND*d00_logE0)+(a*ee1_Vtnode_GND*d10_logE0)));
vj1_Vb_ci=(-((a_Vb_ci*d00_logE0)+(a*ee1_Vb_ci*d10_logE0)));
#endif
vj1=(vf-(a*d00_logE0));
EXIT_IF_ISNAN((vf-(a*d00_logE0)))
}
#endif
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj1_Vci_ei=0.0;
vj1_Vbi_ei=0.0;
vj1_Vs_ci=Vsci_Vs_ci;
vj1_Vbi_ci=0.0;
vj1_Vtnode_GND=0.0;
vj1_Vb_ci=0.0;
#endif
vj1=Vsci;
EXIT_IF_ISNAN(Vsci)
#endif
}
#endif /* if(...) */
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
a_Vci_ei=0.0;
a_Vbi_ei=0.0;
a_Vbi_ci=0.0;
a_Vb_ci=0.0;
a_Vtnode_GND=((0.1*vp_Vtnode_GND)+(4.0*VT_Vtnode_GND));
#endif
a=((0.1*vp)+(4.0*VT));
EXIT_IF_ISNAN(((0.1*vp)+(4.0*VT)))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vr_Vci_ei=((vj1_Vci_ei*a-(vp+vj1)*a_Vci_ei)/a/a);
vr_Vbi_ei=((vj1_Vbi_ei*a-(vp+vj1)*a_Vbi_ei)/a/a);
vr_Vs_ci=(vj1_Vs_ci/a);
vr_Vbi_ci=((vj1_Vbi_ci*a-(vp+vj1)*a_Vbi_ci)/a/a);
vr_Vtnode_GND=(((vp_Vtnode_GND+vj1_Vtnode_GND)*a-(vp+vj1)*a_Vtnode_GND)/a/a);
vr_Vb_ci=((vj1_Vb_ci*a-(vp+vj1)*a_Vb_ci)/a/a);
#endif
vr=((vp+vj1)/a);
EXIT_IF_ISNAN(((vp+vj1)/a))
#endif
#ifdef _DYNAMIC
if
((vr<=80.0))
{
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,vr)
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ex1_Vs_ci=vr_Vs_ci*d10_exp0;
ex1_Vci_ei=vr_Vci_ei*d10_exp0;
ex1_Vbi_ei=vr_Vbi_ei*d10_exp0;
ex1_Vbi_ci=vr_Vbi_ci*d10_exp0;
ex1_Vtnode_GND=vr_Vtnode_GND*d10_exp0;
ex1_Vb_ci=vr_Vb_ci*d10_exp0;
#endif
ex1=d00_exp0;
EXIT_IF_ISNAN(d00_exp0)
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
ee1_Vs_ci=ex1_Vs_ci;
ee1_Vci_ei=ex1_Vci_ei;
ee1_Vbi_ei=ex1_Vbi_ei;
ee1_Vbi_ci=ex1_Vbi_ci;
ee1_Vtnode_GND=ex1_Vtnode_GND;
ee1_Vb_ci=ex1_Vb_ci;
#endif
ee1=(1.0+ex1);
EXIT_IF_ISNAN((1.0+ex1))
#endif
#if defined(_DYNAMIC)
{
double m00_logE(d00_logE0,ee1)
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,ee1)
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj2_Vci_ei=((a_Vci_ei*d00_logE0)+(a*ee1_Vci_ei*d10_logE0));
vj2_Vbi_ei=((a_Vbi_ei*d00_logE0)+(a*ee1_Vbi_ei*d10_logE0));
vj2_Vs_ci=(a*ee1_Vs_ci*d10_logE0);
vj2_Vbi_ci=((a_Vbi_ci*d00_logE0)+(a*ee1_Vbi_ci*d10_logE0));
vj2_Vtnode_GND=((-vp_Vtnode_GND)+((a_Vtnode_GND*d00_logE0)+(a*ee1_Vtnode_GND*d10_logE0)));
vj2_Vb_ci=((a_Vb_ci*d00_logE0)+(a*ee1_Vb_ci*d10_logE0));
#endif
vj2=((-vp)+(a*d00_logE0));
EXIT_IF_ISNAN(((-vp)+(a*d00_logE0)))
}
#endif
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vj2_Vci_ei=vj1_Vci_ei;
vj2_Vbi_ei=vj1_Vbi_ei;
vj2_Vs_ci=vj1_Vs_ci;
vj2_Vbi_ci=vj1_Vbi_ci;
vj2_Vtnode_GND=vj1_Vtnode_GND;
vj2_Vb_ci=vj1_Vb_ci;
#endif
vj2=vj1;
EXIT_IF_ISNAN(vj1)
#endif
}
#endif /* if(...) */
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(s:ci)V(ci:ei)V(bi:ei)V(bi:ci)V(b:ci)V(tnode:GND) ddxprobe= */
vj4_Vs_ci=(Vsci_Vs_ci-vj1_Vs_ci);
vj4_Vci_ei=(-vj1_Vci_ei);
vj4_Vbi_ei=(-vj1_Vbi_ei);
vj4_Vbi_ci=(-vj1_Vbi_ci);
vj4_Vb_ci=(-vj1_Vb_ci);
vj4_Vtnode_GND=(-vj1_Vtnode_GND);
#endif
vj4=(Vsci-vj1);
EXIT_IF_ISNAN((Vsci-vj1))
#endif
#if defined(_DYNAMIC)
ez=(1.0-pModel->zs);
EXIT_IF_ISNAN((1.0-pModel->zs))
#endif
#if defined(_DYNAMIC)
ezr=(1.0-zr);
EXIT_IF_ISNAN((1.0-zr))
#endif
#if defined(_DYNAMIC)
{
double m00_logE(d00_logE0,(1.0-(vj1/vds_t)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0-(vj1/vds_t)))
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vdj1_Vci_ei=(-(vj1_Vci_ei/vds_t))*d10_logE0;
vdj1_Vbi_ei=(-(vj1_Vbi_ei/vds_t))*d10_logE0;
vdj1_Vs_ci=(-(vj1_Vs_ci/vds_t))*d10_logE0;
vdj1_Vbi_ci=(-(vj1_Vbi_ci/vds_t))*d10_logE0;
vdj1_Vtnode_GND=(-((vj1_Vtnode_GND*vds_t-vj1*vds_t_Vtnode_GND)/vds_t/vds_t))*d10_logE0;
vdj1_Vb_ci=(-(vj1_Vb_ci/vds_t))*d10_logE0;
#endif
vdj1=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
#endif
#if defined(_DYNAMIC)
{
double m00_logE(d00_logE0,(1.0-(vj2/vds_t)))
#if defined(_DERIVATE)
double m10_logE(d10_logE0,d00_logE0,(1.0-(vj2/vds_t)))
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
vdj2_Vci_ei=(-(vj2_Vci_ei/vds_t))*d10_logE0;
vdj2_Vbi_ei=(-(vj2_Vbi_ei/vds_t))*d10_logE0;
vdj2_Vs_ci=(-(vj2_Vs_ci/vds_t))*d10_logE0;
vdj2_Vbi_ci=(-(vj2_Vbi_ci/vds_t))*d10_logE0;
vdj2_Vtnode_GND=(-((vj2_Vtnode_GND*vds_t-vj2*vds_t_Vtnode_GND)/vds_t/vds_t))*d10_logE0;
vdj2_Vb_ci=(-(vj2_Vb_ci/vds_t))*d10_logE0;
#endif
vdj2=d00_logE0;
EXIT_IF_ISNAN(d00_logE0)
}
#endif
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,(vdj2*ez))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj1_Vci_ei=((cjs0_t*(-vdj2_Vci_ei*ez*d10_exp0))/ez);
qj1_Vbi_ei=((cjs0_t*(-vdj2_Vbi_ei*ez*d10_exp0))/ez);
qj1_Vs_ci=((cjs0_t*(-vdj2_Vs_ci*ez*d10_exp0))/ez);
qj1_Vbi_ci=((cjs0_t*(-vdj2_Vbi_ci*ez*d10_exp0))/ez);
qj1_Vtnode_GND=(((cjs0_t_Vtnode_GND*(1.0-d00_exp0))+(cjs0_t*(-vdj2_Vtnode_GND*ez*d10_exp0)))/ez);
qj1_Vb_ci=((cjs0_t*(-vdj2_Vb_ci*ez*d10_exp0))/ez);
#endif
qj1=((cjs0_t*(1.0-d00_exp0))/ez);
EXIT_IF_ISNAN(((cjs0_t*(1.0-d00_exp0))/ez))
}
#endif
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,(vdj1*ezr))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj2_Vci_ei=((cr*(-vdj1_Vci_ei*ezr*d10_exp0))/ezr);
qj2_Vbi_ei=((cr*(-vdj1_Vbi_ei*ezr*d10_exp0))/ezr);
qj2_Vs_ci=((cr*(-vdj1_Vs_ci*ezr*d10_exp0))/ezr);
qj2_Vbi_ci=((cr*(-vdj1_Vbi_ci*ezr*d10_exp0))/ezr);
qj2_Vtnode_GND=(((cr_Vtnode_GND*(1.0-d00_exp0))+(cr*(-vdj1_Vtnode_GND*ezr*d10_exp0)))/ezr);
qj2_Vb_ci=((cr*(-vdj1_Vb_ci*ezr*d10_exp0))/ezr);
#endif
qj2=((cr*(1.0-d00_exp0))/ezr);
EXIT_IF_ISNAN(((cr*(1.0-d00_exp0))/ezr))
}
#endif
#if defined(_DYNAMIC)
{
double m00_exp(d00_exp0,(vdj2*ezr))
#if defined(_DERIVATE)
#define d10_exp0 d00_exp0
#endif
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qj3_Vci_ei=((cr*(-vdj2_Vci_ei*ezr*d10_exp0))/ezr);
qj3_Vbi_ei=((cr*(-vdj2_Vbi_ei*ezr*d10_exp0))/ezr);
qj3_Vs_ci=((cr*(-vdj2_Vs_ci*ezr*d10_exp0))/ezr);
qj3_Vbi_ci=((cr*(-vdj2_Vbi_ci*ezr*d10_exp0))/ezr);
qj3_Vtnode_GND=(((cr_Vtnode_GND*(1.0-d00_exp0))+(cr*(-vdj2_Vtnode_GND*ezr*d10_exp0)))/ezr);
qj3_Vb_ci=((cr*(-vdj2_Vb_ci*ezr*d10_exp0))/ezr);
#endif
qj3=((cr*(1.0-d00_exp0))/ezr);
EXIT_IF_ISNAN(((cr*(1.0-d00_exp0))/ezr))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjs_Vci_ei=(((qj1_Vci_ei+qj2_Vci_ei)-qj3_Vci_ei)*vds_t+(cmax*vj4_Vci_ei));
qjs_Vbi_ei=(((qj1_Vbi_ei+qj2_Vbi_ei)-qj3_Vbi_ei)*vds_t+(cmax*vj4_Vbi_ei));
qjs_Vs_ci=(((qj1_Vs_ci+qj2_Vs_ci)-qj3_Vs_ci)*vds_t+(cmax*vj4_Vs_ci));
qjs_Vbi_ci=(((qj1_Vbi_ci+qj2_Vbi_ci)-qj3_Vbi_ci)*vds_t+(cmax*vj4_Vbi_ci));
qjs_Vtnode_GND=(((((qj1_Vtnode_GND+qj2_Vtnode_GND)-qj3_Vtnode_GND)*vds_t)+(((qj1+qj2)-qj3)*vds_t_Vtnode_GND))+((cmax_Vtnode_GND*vj4)+(cmax*vj4_Vtnode_GND)));
qjs_Vb_ci=(((qj1_Vb_ci+qj2_Vb_ci)-qj3_Vb_ci)*vds_t+(cmax*vj4_Vb_ci));
#endif
qjs=((((qj1+qj2)-qj3)*vds_t)+(cmax*vj4));
EXIT_IF_ISNAN(((((qj1+qj2)-qj3)*vds_t)+(cmax*vj4)))
#endif
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjs_Vci_ei=0.0;
qjs_Vbi_ei=0.0;
qjs_Vs_ci=0.0;
qjs_Vbi_ci=0.0;
qjs_Vtnode_GND=0.0;
qjs_Vb_ci=0.0;
#endif
qjs=0.0;
EXIT_IF_ISNAN(0.0)
#endif
}
#endif /* if(...) */
}
else
{
#ifdef _DYNAMIC
if
((cjs0_t>0.0))
{
#if defined(_DYNAMIC)
{
double m00_logE(d00_logE0,2.4)
double m00_exp(d00_exp1,((-d00_logE0)/pModel->zs))
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe=V(bi:GND) */
vf_Vtnode_GND=vds_t_Vtnode_GND*(1.0-d00_exp1);
#endif
vf=(vds_t*(1.0-d00_exp1));
EXIT_IF_ISNAN((vds_t*(1.0-d00_exp1)))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf_Vs_ci=((-Vsci_Vs_ci)/VT);
#endif
xvf_Vbi_ei=0.0;
#if defined(_DERIVATE2)
  xvf_Vbi_ei_Vs_ci=0.0;
  xvf_Vbi_ei_Vbi_ei=0.0;
  xvf_Vbi_ei_Vbi_ci=0.0;
  xvf_Vbi_ei_Vtnode_GND=0.0;
  xvf_Vbi_ei_Vb_ci=0.0;
#endif
xvf_Vbi_ci=0.0;
#if defined(_DERIVATE2)
  xvf_Vbi_ci_Vs_ci=0.0;
  xvf_Vbi_ci_Vbi_ei=0.0;
  xvf_Vbi_ci_Vbi_ci=0.0;
  xvf_Vbi_ci_Vtnode_GND=0.0;
  xvf_Vbi_ci_Vb_ci=0.0;
#endif
#if defined(_DERIVATE)
xvf_Vtnode_GND=((vf_Vtnode_GND*VT-(vf-Vsci)*VT_Vtnode_GND)/VT/VT);
#endif
#if defined(_DERIVATE)
xvf_Vb_ci=0.0;
#endif
#endif
xvf=((vf-Vsci)/VT);
EXIT_IF_ISNAN(((vf-Vsci)/VT))
#endif
#if defined(_DYNAMIC)
{
double m00_sqrt(d00_sqrt0,((xvf*xvf)+1.921812))
#if defined(_DERIVATEFORDDX)
double m10_sqrt(d10_sqrt0,d00_sqrt0,((xvf*xvf)+1.921812))
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
xvf2_Vs_ci=((xvf_Vs_ci*xvf)+(xvf*xvf_Vs_ci))*d10_sqrt0;
#endif
xvf2_Vbi_ei=((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))*d10_sqrt0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ei_Vs_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vs_ci*xvf)+(xvf*xvf_Vs_ci)))*((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))+d10_sqrt0*(+(+xvf_Vbi_ei_Vs_ci*xvf+xvf_Vbi_ei*xvf_Vs_ci+xvf_Vs_ci*xvf_Vbi_ei+xvf*xvf_Vbi_ei_Vs_ci)+0.0));
  xvf2_Vbi_ei_Vbi_ei=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei)))*((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))+d10_sqrt0*(+(+xvf_Vbi_ei_Vbi_ei*xvf+xvf_Vbi_ei*xvf_Vbi_ei+xvf_Vbi_ei*xvf_Vbi_ei+xvf*xvf_Vbi_ei_Vbi_ei)+0.0));
  xvf2_Vbi_ei_Vbi_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci)))*((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))+d10_sqrt0*(+(+xvf_Vbi_ei_Vbi_ci*xvf+xvf_Vbi_ei*xvf_Vbi_ci+xvf_Vbi_ci*xvf_Vbi_ei+xvf*xvf_Vbi_ei_Vbi_ci)+0.0));
  xvf2_Vbi_ei_Vtnode_GND=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND)))*((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))+d10_sqrt0*(+(+xvf_Vbi_ei_Vtnode_GND*xvf+xvf_Vbi_ei*xvf_Vtnode_GND+xvf_Vtnode_GND*xvf_Vbi_ei+xvf*xvf_Vbi_ei_Vtnode_GND)+0.0));
  xvf2_Vbi_ei_Vb_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci)))*((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei))+d10_sqrt0*(+(+xvf_Vbi_ei_Vb_ci*xvf+xvf_Vbi_ei*xvf_Vb_ci+xvf_Vb_ci*xvf_Vbi_ei+xvf*xvf_Vbi_ei_Vb_ci)+0.0));
#endif
xvf2_Vbi_ci=((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))*d10_sqrt0;
#if defined(_DERIVATE2)
  xvf2_Vbi_ci_Vs_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vs_ci*xvf)+(xvf*xvf_Vs_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vs_ci*xvf+xvf_Vbi_ci*xvf_Vs_ci+xvf_Vs_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vs_ci)+0.0));
  xvf2_Vbi_ci_Vbi_ei=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ei*xvf)+(xvf*xvf_Vbi_ei)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ei*xvf+xvf_Vbi_ci*xvf_Vbi_ei+xvf_Vbi_ei*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ei)+0.0));
  xvf2_Vbi_ci_Vbi_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vbi_ci*xvf+xvf_Vbi_ci*xvf_Vbi_ci+xvf_Vbi_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vbi_ci)+0.0));
  xvf2_Vbi_ci_Vtnode_GND=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vtnode_GND*xvf+xvf_Vbi_ci*xvf_Vtnode_GND+xvf_Vtnode_GND*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vtnode_GND)+0.0));
  xvf2_Vbi_ci_Vb_ci=(m20_sqrt(((xvf*xvf)+1.921812))*(((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci)))*((xvf_Vbi_ci*xvf)+(xvf*xvf_Vbi_ci))+d10_sqrt0*(+(+xvf_Vbi_ci_Vb_ci*xvf+xvf_Vbi_ci*xvf_Vb_ci+xvf_Vb_ci*xvf_Vbi_ci+xvf*xvf_Vbi_ci_Vb_ci)+0.0));
#endif
#if defined(_DERIVATE)
xvf2_Vtnode_GND=((xvf_Vtnode_GND*xvf)+(xvf*xvf_Vtnode_GND))*d10_sqrt0;
#endif
#if defined(_DERIVATE)
xvf2_Vb_ci=((xvf_Vb_ci*xvf)+(xvf*xvf_Vb_ci))*d10_sqrt0;
#endif
#endif
xvf2=d00_sqrt0;
EXIT_IF_ISNAN(d00_sqrt0)
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATEFORDDX) /* probe=V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
v_j_Vs_ci=(-(VT*(xvf_Vs_ci+xvf2_Vs_ci))*0.5);
#endif
v_j_Vbi_ei=(-(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.5);
#if defined(_DERIVATE2)
  v_j_Vbi_ei_Vs_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vs_ci+xvf2_Vs_ci)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+VT*(+xvf_Vbi_ei_Vs_ci+xvf2_Vbi_ei_Vs_ci))*0.5+(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.0+((VT*(xvf_Vs_ci+xvf2_Vs_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ei_Vbi_ei=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+VT*(+xvf_Vbi_ei_Vbi_ei+xvf2_Vbi_ei_Vbi_ei))*0.5+(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.0+((VT*(xvf_Vbi_ei+xvf2_Vbi_ei)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ei_Vbi_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+VT*(+xvf_Vbi_ei_Vbi_ci+xvf2_Vbi_ei_Vbi_ci))*0.5+(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.0+((VT*(xvf_Vbi_ci+xvf2_Vbi_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ei_Vtnode_GND=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vtnode_GND+xvf2_Vtnode_GND)+VT_Vtnode_GND*(xvf_Vbi_ei+xvf2_Vbi_ei)+VT*(+xvf_Vbi_ei_Vtnode_GND+xvf2_Vbi_ei_Vtnode_GND))*0.5+(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.0+(((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND))))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ei_Vb_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vb_ci+xvf2_Vb_ci)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+VT*(+xvf_Vbi_ei_Vb_ci+xvf2_Vbi_ei_Vb_ci))*0.5+(VT*(xvf_Vbi_ei+xvf2_Vbi_ei))*0.0+((VT*(xvf_Vb_ci+xvf2_Vb_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
#endif
v_j_Vbi_ci=(-(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.5);
#if defined(_DERIVATE2)
  v_j_Vbi_ci_Vs_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vs_ci+xvf2_Vs_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vs_ci+xvf2_Vbi_ci_Vs_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vs_ci+xvf2_Vs_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ei=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ei+xvf2_Vbi_ei)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ei+xvf2_Vbi_ci_Vbi_ei))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ei+xvf2_Vbi_ei)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vbi_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vbi_ci+xvf2_Vbi_ci_Vbi_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vbi_ci+xvf2_Vbi_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vtnode_GND=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vtnode_GND+xvf2_Vtnode_GND)+VT_Vtnode_GND*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vtnode_GND+xvf2_Vbi_ci_Vtnode_GND))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+(((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND))))*0.0+(VT*(xvf+xvf2))*0.0));
  v_j_Vbi_ci_Vb_ci=(+0.0-(+(+0.0*(xvf+xvf2)+0.0*(xvf_Vb_ci+xvf2_Vb_ci)+0.0*(xvf_Vbi_ci+xvf2_Vbi_ci)+VT*(+xvf_Vbi_ci_Vb_ci+xvf2_Vbi_ci_Vb_ci))*0.5+(VT*(xvf_Vbi_ci+xvf2_Vbi_ci))*0.0+((VT*(xvf_Vb_ci+xvf2_Vb_ci)))*0.0+(VT*(xvf+xvf2))*0.0));
#endif
#if defined(_DERIVATE)
v_j_Vtnode_GND=(vf_Vtnode_GND-((VT_Vtnode_GND*(xvf+xvf2))+(VT*(xvf_Vtnode_GND+xvf2_Vtnode_GND)))*0.5);
#endif
#if defined(_DERIVATE)
v_j_Vb_ci=(-(VT*(xvf_Vb_ci+xvf2_Vb_ci))*0.5);
#endif
#endif
v_j=(vf-((VT*(xvf+xvf2))*0.5));
EXIT_IF_ISNAN((vf-((VT*(xvf+xvf2))*0.5)))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(ci:ei) ddxprobe=V(bi:GND) */
x_Vtnode_GND=0.0;
x_Vci_ei=0.0;
#endif
x=(1.0-pModel->zs);
EXIT_IF_ISNAN((1.0-pModel->zs))
#endif
#if defined(_DYNAMIC)
{
double m00_logE(d00_logE0,(1.0-(v_j/vds_t)))
double m00_exp(d00_exp1,(x*d00_logE0))
#if defined(_DERIVATEFORDDX)
double m10_logE(d10_logE0,d00_logE0,(1.0-(v_j/vds_t)))
#define d10_exp1 d00_exp1
#endif
#if defined(_DERIVATEFORDDX) /* probe=V(ci:ei)V(s:ci)V(bi:ei)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe=V(bi:GND) */
#if defined(_DERIVATE)
y_Vci_ei=(-x_Vci_ei*d00_logE0*d10_exp1);
#endif
#if defined(_DERIVATE)
y_Vs_ci=(-(x*(-(v_j_Vs_ci/vds_t))*d10_logE0)*d10_exp1);
#endif
y_Vbi_ei=(-(x*(-(v_j_Vbi_ei/vds_t))*d10_logE0)*d10_exp1);
#if defined(_DERIVATE2)
  y_Vbi_ei_Vci_ei=(+0.0-(m20_exp((x*d00_logE0))*(x_Vci_ei*d00_logE0)*(x*(-(v_j_Vbi_ei/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*0.0+x_Vci_ei*(-(v_j_Vbi_ei/vds_t))*d10_logE0+x*0.0)));
  y_Vbi_ei_Vs_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vs_ci/vds_t))*d10_logE0))*(x*(-(v_j_Vbi_ei/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vs_ci/vds_t))*d10_logE0+0.0*(-(v_j_Vbi_ei/vds_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vds_t)))*(-(v_j_Vs_ci/vds_t))*(-(v_j_Vbi_ei/vds_t))+d10_logE0*(+0.0-(v_j_Vbi_ei_Vs_ci/vds_t-(v_j_Vbi_ei*0.0+v_j_Vs_ci*0.0+v_j*0.0)/vds_t/vds_t+2*v_j*0.0*0.0/vds_t/vds_t/vds_t))))));
  y_Vbi_ei_Vbi_ei=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ei/vds_t))*d10_logE0))*(x*(-(v_j_Vbi_ei/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ei/vds_t))*d10_logE0+0.0*(-(v_j_Vbi_ei/vds_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vds_t)))*(-(v_j_Vbi_ei/vds_t))*(-(v_j_Vbi_ei/vds_t))+d10_logE0*(+0.0-(v_j_Vbi_ei_Vbi_ei/vds_t-(v_j_Vbi_ei*0.0+v_j_Vbi_ei*0.0+v_j*0.0)/vds_t/vds_t+2*v_j*0.0*0.0/vds_t/vds_t/vds_t))))));
  y_Vbi_ei_Vbi_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ci/vds_t))*d10_logE0))*(x*(-(v_j_Vbi_ei/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ci/vds_t))*d10_logE0+0.0*(-(v_j_Vbi_ei/vds_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vds_t)))*(-(v_j_Vbi_ci/vds_t))*(-(v_j_Vbi_ei/vds_t))+d10_logE0*(+0.0-(v_j_Vbi_ei_Vbi_ci/vds_t-(v_j_Vbi_ei*0.0+v_j_Vbi_ci*0.0+v_j*0.0)/vds_t/vds_t+2*v_j*0.0*0.0/vds_t/vds_t/vds_t))))));
  y_Vbi_ei_Vtnode_GND=(+0.0-(m20_exp((x*d00_logE0))*(((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vds_t-v_j*vds_t_Vtnode_GND)/vds_t/vds_t))*d10_logE0)))*(x*(-(v_j_Vbi_ei/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-((v_j_Vtnode_GND*vds_t-v_j*vds_t_Vtnode_GND)/vds_t/vds_t))*d10_logE0+x_Vtnode_GND*(-(v_j_Vbi_ei/vds_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vds_t)))*(-((v_j_Vtnode_GND*vds_t-v_j*vds_t_Vtnode_GND)/vds_t/vds_t))*(-(v_j_Vbi_ei/vds_t))+d10_logE0*(+0.0-(v_j_Vbi_ei_Vtnode_GND/vds_t-(v_j_Vbi_ei*vds_t_Vtnode_GND+v_j_Vtnode_GND*0.0+v_j*0.0)/vds_t/vds_t+2*v_j*0.0*vds_t_Vtnode_GND/vds_t/vds_t/vds_t))))));
  y_Vbi_ei_Vb_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vb_ci/vds_t))*d10_logE0))*(x*(-(v_j_Vbi_ei/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vb_ci/vds_t))*d10_logE0+0.0*(-(v_j_Vbi_ei/vds_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vds_t)))*(-(v_j_Vb_ci/vds_t))*(-(v_j_Vbi_ei/vds_t))+d10_logE0*(+0.0-(v_j_Vbi_ei_Vb_ci/vds_t-(v_j_Vbi_ei*0.0+v_j_Vb_ci*0.0+v_j*0.0)/vds_t/vds_t+2*v_j*0.0*0.0/vds_t/vds_t/vds_t))))));
#endif
y_Vbi_ci=(-(x*(-(v_j_Vbi_ci/vds_t))*d10_logE0)*d10_exp1);
#if defined(_DERIVATE2)
  y_Vbi_ci_Vci_ei=(+0.0-(m20_exp((x*d00_logE0))*(x_Vci_ei*d00_logE0)*(x*(-(v_j_Vbi_ci/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*0.0+x_Vci_ei*(-(v_j_Vbi_ci/vds_t))*d10_logE0+x*0.0)));
  y_Vbi_ci_Vs_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vs_ci/vds_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vs_ci/vds_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vds_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vds_t)))*(-(v_j_Vs_ci/vds_t))*(-(v_j_Vbi_ci/vds_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vs_ci/vds_t-(v_j_Vbi_ci*0.0+v_j_Vs_ci*0.0+v_j*0.0)/vds_t/vds_t+2*v_j*0.0*0.0/vds_t/vds_t/vds_t))))));
  y_Vbi_ci_Vbi_ei=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ei/vds_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ei/vds_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vds_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vds_t)))*(-(v_j_Vbi_ei/vds_t))*(-(v_j_Vbi_ci/vds_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vbi_ei/vds_t-(v_j_Vbi_ci*0.0+v_j_Vbi_ei*0.0+v_j*0.0)/vds_t/vds_t+2*v_j*0.0*0.0/vds_t/vds_t/vds_t))))));
  y_Vbi_ci_Vbi_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vbi_ci/vds_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vbi_ci/vds_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vds_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vds_t)))*(-(v_j_Vbi_ci/vds_t))*(-(v_j_Vbi_ci/vds_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vbi_ci/vds_t-(v_j_Vbi_ci*0.0+v_j_Vbi_ci*0.0+v_j*0.0)/vds_t/vds_t+2*v_j*0.0*0.0/vds_t/vds_t/vds_t))))));
  y_Vbi_ci_Vtnode_GND=(+0.0-(m20_exp((x*d00_logE0))*(((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vds_t-v_j*vds_t_Vtnode_GND)/vds_t/vds_t))*d10_logE0)))*(x*(-(v_j_Vbi_ci/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-((v_j_Vtnode_GND*vds_t-v_j*vds_t_Vtnode_GND)/vds_t/vds_t))*d10_logE0+x_Vtnode_GND*(-(v_j_Vbi_ci/vds_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vds_t)))*(-((v_j_Vtnode_GND*vds_t-v_j*vds_t_Vtnode_GND)/vds_t/vds_t))*(-(v_j_Vbi_ci/vds_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vtnode_GND/vds_t-(v_j_Vbi_ci*vds_t_Vtnode_GND+v_j_Vtnode_GND*0.0+v_j*0.0)/vds_t/vds_t+2*v_j*0.0*vds_t_Vtnode_GND/vds_t/vds_t/vds_t))))));
  y_Vbi_ci_Vb_ci=(+0.0-(m20_exp((x*d00_logE0))*((x*(-(v_j_Vb_ci/vds_t))*d10_logE0))*(x*(-(v_j_Vbi_ci/vds_t))*d10_logE0)+d10_exp1*(+0.0*d00_logE0+0.0*(-(v_j_Vb_ci/vds_t))*d10_logE0+0.0*(-(v_j_Vbi_ci/vds_t))*d10_logE0+x*(m20_logE((1.0-(v_j/vds_t)))*(-(v_j_Vb_ci/vds_t))*(-(v_j_Vbi_ci/vds_t))+d10_logE0*(+0.0-(v_j_Vbi_ci_Vb_ci/vds_t-(v_j_Vbi_ci*0.0+v_j_Vb_ci*0.0+v_j*0.0)/vds_t/vds_t+2*v_j*0.0*0.0/vds_t/vds_t/vds_t))))));
#endif
#if defined(_DERIVATE)
y_Vtnode_GND=(-((x_Vtnode_GND*d00_logE0)+(x*(-((v_j_Vtnode_GND*vds_t-v_j*vds_t_Vtnode_GND)/vds_t/vds_t))*d10_logE0))*d10_exp1);
#endif
#if defined(_DERIVATE)
y_Vb_ci=(-(x*(-(v_j_Vb_ci/vds_t))*d10_logE0)*d10_exp1);
#endif
#endif
y=(1.0-d00_exp1);
EXIT_IF_ISNAN((1.0-d00_exp1))
}
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjs_Vci_ei=((((cjs0_t*vds_t)*y_Vci_ei)*x-((cjs0_t*vds_t)*y)*x_Vci_ei)/x/x);
qjs_Vbi_ei=((((cjs0_t*vds_t)*y_Vbi_ei)/x)+((2.4*cjs0_t)*(-v_j_Vbi_ei)));
qjs_Vs_ci=((((cjs0_t*vds_t)*y_Vs_ci)/x)+((2.4*cjs0_t)*(Vsci_Vs_ci-v_j_Vs_ci)));
qjs_Vbi_ci=((((cjs0_t*vds_t)*y_Vbi_ci)/x)+((2.4*cjs0_t)*(-v_j_Vbi_ci)));
qjs_Vtnode_GND=(((((((cjs0_t_Vtnode_GND*vds_t)+(cjs0_t*vds_t_Vtnode_GND))*y)+((cjs0_t*vds_t)*y_Vtnode_GND))*x-((cjs0_t*vds_t)*y)*x_Vtnode_GND)/x/x)+(((2.4*cjs0_t_Vtnode_GND)*(Vsci-v_j))+((2.4*cjs0_t)*(-v_j_Vtnode_GND))));
qjs_Vb_ci=((((cjs0_t*vds_t)*y_Vb_ci)/x)+((2.4*cjs0_t)*(-v_j_Vb_ci)));
#endif
qjs=((((cjs0_t*vds_t)*y)/x)+((2.4*cjs0_t)*(Vsci-v_j)));
EXIT_IF_ISNAN(((((cjs0_t*vds_t)*y)/x)+((2.4*cjs0_t)*(Vsci-v_j))))
#endif
}
else
{
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjs_Vci_ei=0.0;
qjs_Vbi_ei=0.0;
qjs_Vs_ci=0.0;
qjs_Vbi_ci=0.0;
qjs_Vtnode_GND=0.0;
qjs_Vb_ci=0.0;
#endif
qjs=0.0;
EXIT_IF_ISNAN(0.0)
#endif
}
#endif /* if(...) */
}
#endif /* if(...) */
if
(((pModel->flsh==1)&&(pModel->rth>=0.001)))
{
#if defined(_DERIVATE) /* probe=V(ci:c)V(ei:e)V(b:bi)V(s:ci)V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
pterm_Vci_c=0.0;
pterm_Vei_e=0.0;
pterm_Vb_bi=0.0;
pterm_Vs_ci=0.0;
pterm_Vtnode_GND=(it_Vtnode_GND*Vciei+((iavl_Vtnode_GND*(vdci_t-Vbici))+(pInst->iavl*vdci_t_Vtnode_GND)));
pterm_Vbi_ei=(it_Vbi_ei*Vciei+iavl_Vbi_ei*(vdci_t-Vbici));
pterm_Vbi_ci=(it_Vbi_ci*Vciei+((iavl_Vbi_ci*(vdci_t-Vbici))+(pInst->iavl*(-Vbici_Vbi_ci))));
pterm_Vb_ci=(it_Vb_ci*Vciei+iavl_Vb_ci*(vdci_t-Vbici));
pterm_Vci_ei=(((it_Vci_ei*Vciei)+(pInst->it*Vciei_Vci_ei))+iavl_Vci_ei*(vdci_t-Vbici));
#endif
pterm=((pInst->it*Vciei)+(pInst->iavl*(vdci_t-Vbici)));
EXIT_IF_ISNAN(((pInst->it*Vciei)+(pInst->iavl*(vdci_t-Vbici))))
}
else
{
if
(((pModel->flsh==2)&&(pModel->rth>=0.001)))
{
#if defined(_DERIVATE) /* probe=V(ci:c)V(ei:e)V(b:bi)V(s:ci)V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
pterm_Vci_c=0.0;
pterm_Vei_e=0.0;
pterm_Vb_bi=0.0;
pterm_Vs_ci=((ijsc_Vs_ci*Vsci)+(pInst->ijsc*Vsci_Vs_ci));
pterm_Vtnode_GND=(((((Vciei*it_Vtnode_GND)+((vdci_t_Vtnode_GND*pInst->iavl)+((vdci_t-Vbici)*iavl_Vtnode_GND)))+ijbe_Vtnode_GND*Vbiei)+ijbc_Vtnode_GND*Vbici)+ijsc_Vtnode_GND*Vsci);
pterm_Vbi_ei=(((((Vciei*it_Vbi_ei)+((vdci_t-Vbici)*iavl_Vbi_ei))+((ijbe_Vbi_ei*Vbiei)+(pInst->ijbe*Vbiei_Vbi_ei)))+ijbc_Vbi_ei*Vbici)+ijsc_Vbi_ei*Vsci);
pterm_Vbi_ci=((((Vciei*it_Vbi_ci)+(((-Vbici_Vbi_ci)*pInst->iavl)+((vdci_t-Vbici)*iavl_Vbi_ci)))+((ijbc_Vbi_ci*Vbici)+(pInst->ijbc*Vbici_Vbi_ci)))+ijsc_Vbi_ci*Vsci);
pterm_Vb_ci=((Vciei*it_Vb_ci)+((vdci_t-Vbici)*iavl_Vb_ci));
pterm_Vci_ei=(((Vciei_Vci_ei*pInst->it)+(Vciei*it_Vci_ei))+((vdci_t-Vbici)*iavl_Vci_ei));
#endif
pterm=(((((Vciei*pInst->it)+((vdci_t-Vbici)*pInst->iavl))+(pInst->ijbe*Vbiei))+(pInst->ijbc*Vbici))+(pInst->ijsc*Vsci));
EXIT_IF_ISNAN((((((Vciei*pInst->it)+((vdci_t-Vbici)*pInst->iavl))+(pInst->ijbe*Vbiei))+(pInst->ijbc*Vbici))+(pInst->ijsc*Vsci)))
if
((rb>=0.001))
{
#if defined(_DERIVATE) /* probe=V(ci:c)V(ei:e)V(b:bi)V(s:ci)V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
pterm_Vci_c=0.0;
pterm_Vei_e=0.0;
pterm_Vb_bi=(pterm_Vb_bi+(((Vbbi_Vb_bi*Vbbi)+(Vbbi*Vbbi_Vb_bi))/rb));
pterm_Vs_ci=pterm_Vs_ci;
pterm_Vtnode_GND=(pterm_Vtnode_GND+(-(Vbbi*Vbbi)*rb_Vtnode_GND/rb/rb));
pterm_Vbi_ei=(pterm_Vbi_ei+(-(Vbbi*Vbbi)*rb_Vbi_ei/rb/rb));
pterm_Vbi_ci=(pterm_Vbi_ci+(-(Vbbi*Vbbi)*rb_Vbi_ci/rb/rb));
pterm_Vb_ci=(pterm_Vb_ci+(-(Vbbi*Vbbi)*rb_Vb_ci/rb/rb));
pterm_Vci_ei=(pterm_Vci_ei+(-(Vbbi*Vbbi)*rb_Vci_ei/rb/rb));
#endif
pterm=(pterm+((Vbbi*Vbbi)/rb));
EXIT_IF_ISNAN((pterm+((Vbbi*Vbbi)/rb)))
}
if
((re_t>=0.001))
{
#if defined(_DERIVATE) /* probe=V(ci:c)V(ei:e)V(b:bi)V(s:ci)V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
pterm_Vci_c=0.0;
pterm_Vei_e=(pterm_Vei_e+(((Veie_Vei_e*Veie)+(Veie*Veie_Vei_e))/re_t));
pterm_Vb_bi=pterm_Vb_bi;
pterm_Vs_ci=pterm_Vs_ci;
pterm_Vtnode_GND=(pterm_Vtnode_GND+(-(Veie*Veie)*re_t_Vtnode_GND/re_t/re_t));
pterm_Vbi_ei=pterm_Vbi_ei;
pterm_Vbi_ci=pterm_Vbi_ci;
pterm_Vb_ci=pterm_Vb_ci;
pterm_Vci_ei=pterm_Vci_ei;
#endif
pterm=(pterm+((Veie*Veie)/re_t));
EXIT_IF_ISNAN((pterm+((Veie*Veie)/re_t)))
}
if
((rcx_t>=0.001))
{
#if defined(_DERIVATE) /* probe=V(ci:c)V(ei:e)V(b:bi)V(s:ci)V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
pterm_Vci_c=(pterm_Vci_c+(((Vcic_Vci_c*Vcic)+(Vcic*Vcic_Vci_c))/rcx_t));
pterm_Vei_e=pterm_Vei_e;
pterm_Vb_bi=pterm_Vb_bi;
pterm_Vs_ci=pterm_Vs_ci;
pterm_Vtnode_GND=(pterm_Vtnode_GND+(-(Vcic*Vcic)*rcx_t_Vtnode_GND/rcx_t/rcx_t));
pterm_Vbi_ei=pterm_Vbi_ei;
pterm_Vbi_ci=pterm_Vbi_ci;
pterm_Vb_ci=pterm_Vb_ci;
pterm_Vci_ei=pterm_Vci_ei;
#endif
pterm=(pterm+((Vcic*Vcic)/rcx_t));
EXIT_IF_ISNAN((pterm+((Vcic*Vcic)/rcx_t)))
}
}
}
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(bi:ei)V(b:ci)V(ci:ei) ddxprobe= */
Ibici_Vtnode_GND=(ijbc_Vtnode_GND-iavl_Vtnode_GND);
Ibici_Vbi_ci=(ijbc_Vbi_ci-iavl_Vbi_ci);
Ibici_Vbi_ei=(ijbc_Vbi_ei-iavl_Vbi_ei);
Ibici_Vb_ci=(-iavl_Vb_ci);
Ibici_Vci_ei=(-iavl_Vci_ei);
#endif
pInst->Ibici=(pInst->ijbc-pInst->iavl);
EXIT_IF_ISNAN((pInst->ijbc-pInst->iavl))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b:ci) ddxprobe= */
Qbci_Vb_ci=(pModel->cbcpar*Vbci_Vb_ci);
#endif
Qbci=(pModel->cbcpar*Vbci);
EXIT_IF_ISNAN((pModel->cbcpar*Vbci))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b:e) ddxprobe= */
Qbe_Vb_e=(pModel->cbepar*Vbe_Vb_e);
#endif
Qbe=(pModel->cbepar*Vbe);
EXIT_IF_ISNAN((pModel->cbepar*Vbe))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci)V(bi:ei)V(ci:ei) ddxprobe= */
Qbici_Vbi_ci=(qjcii_Vbi_ci+qr_Vbi_ci);
Qbici_Vtnode_GND=(qjcii_Vtnode_GND+qr_Vtnode_GND);
Qbici_Vb_ci=(qjcii_Vb_ci+qr_Vb_ci);
Qbici_Vbi_ei=qr_Vbi_ei;
Qbici_Vci_ei=qr_Vci_ei;
#endif
Qbici=(qjcii+qr);
EXIT_IF_ISNAN((qjcii+qr))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
Qbiei_Vtnode_GND=(qjei_Vtnode_GND+qf_Vtnode_GND);
Qbiei_Vbi_ei=(qjei_Vbi_ei+qf_Vbi_ei);
Qbiei_Vbi_ci=(qjei_Vbi_ci+qf_Vbi_ci);
Qbiei_Vb_ci=(qjei_Vb_ci+qf_Vb_ci);
Qbiei_Vci_ei=qf_Vci_ei;
#endif
Qbiei=(pInst->qjei+qf);
EXIT_IF_ISNAN((pInst->qjei+qf))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(s:ci)V(bi:ci)V(bi:ei) ddxprobe= */
ijsc_Vtnode_GND=(pModel->HICUMtype*ijsc_Vtnode_GND);
ijsc_Vs_ci=(pModel->HICUMtype*ijsc_Vs_ci);
ijsc_Vbi_ci=(pModel->HICUMtype*ijsc_Vbi_ci);
ijsc_Vbi_ei=(pModel->HICUMtype*ijsc_Vbi_ei);
#endif
pInst->ijsc=(pModel->HICUMtype*pInst->ijsc);
EXIT_IF_ISNAN((pModel->HICUMtype*pInst->ijsc))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(ci:ei)V(bi:ei)V(s:ci)V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjs_Vci_ei=(pModel->HICUMtype*qjs_Vci_ei);
qjs_Vbi_ei=(pModel->HICUMtype*qjs_Vbi_ei);
qjs_Vs_ci=(pModel->HICUMtype*qjs_Vs_ci);
qjs_Vbi_ci=(pModel->HICUMtype*qjs_Vbi_ci);
qjs_Vtnode_GND=(pModel->HICUMtype*qjs_Vtnode_GND);
qjs_Vb_ci=(pModel->HICUMtype*qjs_Vb_ci);
#endif
qjs=(pModel->HICUMtype*qjs);
EXIT_IF_ISNAN((pModel->HICUMtype*qjs))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci) ddxprobe= */
qjcx_Vbi_ci=(pModel->HICUMtype*qjcx_Vbi_ci);
qjcx_Vtnode_GND=(pModel->HICUMtype*qjcx_Vtnode_GND);
qjcx_Vb_ci=(pModel->HICUMtype*qjcx_Vb_ci);
#endif
qjcx=(pModel->HICUMtype*qjcx);
EXIT_IF_ISNAN((pModel->HICUMtype*qjcx))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b:ci) ddxprobe= */
Qbci_Vb_ci=(pModel->HICUMtype*Qbci_Vb_ci);
#endif
Qbci=(pModel->HICUMtype*Qbci);
EXIT_IF_ISNAN((pModel->HICUMtype*Qbci))
#endif
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(b:e) ddxprobe= */
Qbe_Vb_e=(pModel->HICUMtype*Qbe_Vb_e);
#endif
Qbe=(pModel->HICUMtype*Qbe);
EXIT_IF_ISNAN((pModel->HICUMtype*Qbe))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ci)V(bi:ei)V(b:ci)V(ci:ei) ddxprobe= */
Ibici_Vtnode_GND=(pModel->HICUMtype*Ibici_Vtnode_GND);
Ibici_Vbi_ci=(pModel->HICUMtype*Ibici_Vbi_ci);
Ibici_Vbi_ei=(pModel->HICUMtype*Ibici_Vbi_ei);
Ibici_Vb_ci=(pModel->HICUMtype*Ibici_Vb_ci);
Ibici_Vci_ei=(pModel->HICUMtype*Ibici_Vci_ei);
#endif
pInst->Ibici=(pModel->HICUMtype*pInst->Ibici);
EXIT_IF_ISNAN((pModel->HICUMtype*pInst->Ibici))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(bi:ci)V(tnode:GND)V(b:ci)V(bi:ei)V(ci:ei) ddxprobe= */
Qbici_Vbi_ci=(pModel->HICUMtype*Qbici_Vbi_ci);
Qbici_Vtnode_GND=(pModel->HICUMtype*Qbici_Vtnode_GND);
Qbici_Vb_ci=(pModel->HICUMtype*Qbici_Vb_ci);
Qbici_Vbi_ei=(pModel->HICUMtype*Qbici_Vbi_ei);
Qbici_Vci_ei=(pModel->HICUMtype*Qbici_Vci_ei);
#endif
Qbici=(pModel->HICUMtype*Qbici);
EXIT_IF_ISNAN((pModel->HICUMtype*Qbici))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei) ddxprobe= */
ijbe_Vtnode_GND=(pModel->HICUMtype*ijbe_Vtnode_GND);
ijbe_Vbi_ei=(pModel->HICUMtype*ijbe_Vbi_ei);
#endif
pInst->ijbe=(pModel->HICUMtype*pInst->ijbe);
EXIT_IF_ISNAN((pModel->HICUMtype*pInst->ijbe))
#if defined(_DYNAMIC)
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
Qbiei_Vtnode_GND=(pModel->HICUMtype*Qbiei_Vtnode_GND);
Qbiei_Vbi_ei=(pModel->HICUMtype*Qbiei_Vbi_ei);
Qbiei_Vbi_ci=(pModel->HICUMtype*Qbiei_Vbi_ci);
Qbiei_Vb_ci=(pModel->HICUMtype*Qbiei_Vb_ci);
Qbiei_Vci_ei=(pModel->HICUMtype*Qbiei_Vci_ei);
#endif
Qbiei=(pModel->HICUMtype*Qbiei);
EXIT_IF_ISNAN((pModel->HICUMtype*Qbiei))
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei)V(bi:ci)V(b:ci)V(ci:ei) ddxprobe= */
it_Vtnode_GND=(pModel->HICUMtype*it_Vtnode_GND);
it_Vbi_ei=(pModel->HICUMtype*it_Vbi_ei);
it_Vbi_ci=(pModel->HICUMtype*it_Vbi_ci);
it_Vb_ci=(pModel->HICUMtype*it_Vb_ci);
it_Vci_ei=(pModel->HICUMtype*it_Vci_ei);
#endif
pInst->it=(pModel->HICUMtype*pInst->it);
EXIT_IF_ISNAN((pModel->HICUMtype*pInst->it))
  _load_static_residual2(bi,ei,(_circuit_gmin*(NP(bi)-NP(ei))))
  _load_static_jacobian4(bi,ei,bi,ei,(_circuit_gmin))
  _load_static_residual2(bi,ci,(_circuit_gmin*(NP(bi)-NP(ci))))
  _load_static_jacobian4(bi,ci,bi,ci,(_circuit_gmin))
  _load_static_residual2(b,s,HSI_Tsu)
  _load_static_jacobian4(b,s,s,ci,HSI_Tsu_Vs_ci)
  _load_static_jacobian4(b,s,b,ci,HSI_Tsu_Vb_ci)
  _load_static_jacobian2s(b,s,tnode,HSI_Tsu_Vtnode_GND)
  _load_static_residual2(s,ci,(pInst->ijsc+(_circuit_gmin*(NP(s)-NP(ci)))))
  _load_static_jacobian4(s,ci,bi,ei,ijsc_Vbi_ei)
  _load_static_jacobian4(s,ci,bi,ci,ijsc_Vbi_ci)
  _load_static_jacobian4(s,ci,s,ci,(ijsc_Vs_ci+(_circuit_gmin)))
  _load_static_jacobian2s(s,ci,tnode,ijsc_Vtnode_GND)
  _load_dynamic_residual2(s,ci,_DDT(qjs))
  _load_dynamic_jacobian4(s,ci,b,ci,qjs_Vb_ci)
  _load_dynamic_jacobian2s(s,ci,tnode,qjs_Vtnode_GND)
  _load_dynamic_jacobian4(s,ci,bi,ci,qjs_Vbi_ci)
  _load_dynamic_jacobian4(s,ci,s,ci,qjs_Vs_ci)
  _load_dynamic_jacobian4(s,ci,bi,ei,qjs_Vbi_ei)
  _load_dynamic_jacobian4(s,ci,ci,ei,qjs_Vci_ei)
  _load_dynamic_residual2(b,ci,_DDT(qjcx))
  _load_dynamic_jacobian4(b,ci,b,ci,qjcx_Vb_ci)
  _load_dynamic_jacobian2s(b,ci,tnode,qjcx_Vtnode_GND)
  _load_dynamic_jacobian4(b,ci,bi,ci,qjcx_Vbi_ci)
  _load_dynamic_residual2(b,ci,_DDT(Qbci))
  _load_dynamic_jacobian4(b,ci,b,ci,Qbci_Vb_ci)
  _load_dynamic_residual2(b,e,_DDT(Qbe))
  _load_dynamic_jacobian4(b,e,b,e,Qbe_Vb_e)
if
((pModel->re>=0.001))
{
  _load_static_residual2(ei,e,((Veie/re_t)+(_circuit_gmin*(NP(ei)-NP(e)))))
  _load_static_jacobian2s(ei,e,tnode,(-Veie*re_t_Vtnode_GND/re_t/re_t))
  _load_static_jacobian4(ei,e,ei,e,((Veie_Vei_e/re_t)+(_circuit_gmin)))
}
else
{
  _load_static_residual2(ei,e,0.0)
}
if
((pModel->rcx>=0.001))
{
  _load_static_residual2(ci,c,((Vcic/rcx_t)+(_circuit_gmin*(NP(ci)-NP(c)))))
  _load_static_jacobian2s(ci,c,tnode,(-Vcic*rcx_t_Vtnode_GND/rcx_t/rcx_t))
  _load_static_jacobian4(ci,c,ci,c,((Vcic_Vci_c/rcx_t)+(_circuit_gmin)))
}
else
{
  _load_static_residual2(ci,c,0.0)
}
if
(((pModel->rbi0>=0.001)||(pModel->rbx>=0.001)))
{
  _load_static_residual2(b,bi,((Vbbi/rb)+(_circuit_gmin*(NP(b)-NP(bi)))))
  _load_static_jacobian4(b,bi,ci,ei,(-Vbbi*rb_Vci_ei/rb/rb))
  _load_static_jacobian4(b,bi,b,ci,(-Vbbi*rb_Vb_ci/rb/rb))
  _load_static_jacobian4(b,bi,bi,ci,(-Vbbi*rb_Vbi_ci/rb/rb))
  _load_static_jacobian4(b,bi,bi,ei,(-Vbbi*rb_Vbi_ei/rb/rb))
  _load_static_jacobian2s(b,bi,tnode,(-Vbbi*rb_Vtnode_GND/rb/rb))
  _load_static_jacobian4(b,bi,b,bi,((Vbbi_Vb_bi/rb)+(_circuit_gmin)))
}
else
{
  _load_static_residual2(b,bi,0.0)
}
  _load_static_residual2(bi,ci,(pInst->Ibici+(_circuit_gmin*(NP(bi)-NP(ci)))))
  _load_static_jacobian4(bi,ci,ci,ei,Ibici_Vci_ei)
  _load_static_jacobian4(bi,ci,b,ci,Ibici_Vb_ci)
  _load_static_jacobian4(bi,ci,bi,ei,Ibici_Vbi_ei)
  _load_static_jacobian4(bi,ci,bi,ci,(Ibici_Vbi_ci+(_circuit_gmin)))
  _load_static_jacobian2s(bi,ci,tnode,Ibici_Vtnode_GND)
  _load_dynamic_residual2(bi,ci,_DDT(Qbici))
  _load_dynamic_jacobian4(bi,ci,ci,ei,Qbici_Vci_ei)
  _load_dynamic_jacobian4(bi,ci,bi,ei,Qbici_Vbi_ei)
  _load_dynamic_jacobian4(bi,ci,b,ci,Qbici_Vb_ci)
  _load_dynamic_jacobian2s(bi,ci,tnode,Qbici_Vtnode_GND)
  _load_dynamic_jacobian4(bi,ci,bi,ci,Qbici_Vbi_ci)
  _load_static_residual2(bi,ei,(pInst->ijbe+(_circuit_gmin*(NP(bi)-NP(ei)))))
  _load_static_jacobian4(bi,ei,bi,ei,(ijbe_Vbi_ei+(_circuit_gmin)))
  _load_static_jacobian2s(bi,ei,tnode,ijbe_Vtnode_GND)
  _load_dynamic_residual2(bi,ei,_DDT(Qbiei))
  _load_dynamic_jacobian4(bi,ei,ci,ei,Qbiei_Vci_ei)
  _load_dynamic_jacobian4(bi,ei,b,ci,Qbiei_Vb_ci)
  _load_dynamic_jacobian4(bi,ei,bi,ci,Qbiei_Vbi_ci)
  _load_dynamic_jacobian4(bi,ei,bi,ei,Qbiei_Vbi_ei)
  _load_dynamic_jacobian2s(bi,ei,tnode,Qbiei_Vtnode_GND)
  _load_static_residual2(ci,ei,pInst->it)
  _load_static_jacobian4(ci,ei,ci,ei,it_Vci_ei)
  _load_static_jacobian4(ci,ei,b,ci,it_Vb_ci)
  _load_static_jacobian4(ci,ei,bi,ci,it_Vbi_ci)
  _load_static_jacobian4(ci,ei,bi,ei,it_Vbi_ei)
  _load_static_jacobian2s(ci,ei,tnode,it_Vtnode_GND)
if
(((pModel->flsh==0)||(pModel->rth<0.001)))
{
  _load_static_residual1(tnode,(Vrth/0.001))
  _load_static_jacobian1(tnode,tnode,(Vrth_Vtnode_GND/0.001))
}
else
{
  _load_static_residual1(tnode,(((Vrth/pModel->rth)-pterm)+(_circuit_gmin*NP(tnode))))
  _load_static_jacobian2p(tnode,ci,ei,(-pterm_Vci_ei))
  _load_static_jacobian2p(tnode,b,ci,(-pterm_Vb_ci))
  _load_static_jacobian2p(tnode,bi,ci,(-pterm_Vbi_ci))
  _load_static_jacobian2p(tnode,bi,ei,(-pterm_Vbi_ei))
  _load_static_jacobian2p(tnode,s,ci,(-pterm_Vs_ci))
  _load_static_jacobian2p(tnode,b,bi,(-pterm_Vb_bi))
  _load_static_jacobian2p(tnode,ei,e,(-pterm_Vei_e))
  _load_static_jacobian2p(tnode,ci,c,(-pterm_Vci_c))
  _load_static_jacobian1(tnode,tnode,(((Vrth_Vtnode_GND/pModel->rth)-pterm_Vtnode_GND)+(_circuit_gmin)))
  _load_dynamic_residual1(tnode,_DDT((pModel->cth*Vrth)))
  _load_dynamic_jacobian1(tnode,tnode,(pModel->cth*Vrth_Vtnode_GND))
}
#if defined(_DERIVATE) /* probe=V(tnode:GND) ddxprobe= */
fourkt_Vtnode_GND=((4.0*1.3806503e-23)*Tdev_Vtnode_GND);
#endif
fourkt=((4.0*1.3806503e-23)*Tdev);
EXIT_IF_ISNAN(((4.0*1.3806503e-23)*Tdev))
if
(((pModel->rbx>=0.001)||(pModel->rbi0>=0.001)))
{
pInst->wnoise4=(fourkt/rb);
}
if
((pModel->rcx>=0.001))
{
pInst->wnoise3=(fourkt/rcx_t);
}
if
((pModel->re>=0.001))
{
pInst->wnoise2=(fourkt/re_t);
}
twoq=(2.0*1.602176462e-19);
EXIT_IF_ISNAN((2.0*1.602176462e-19))
pInst->wnoise1=(twoq*pInst->ijbe);
pInst->wnoise0=(twoq*pInst->it);
{
double m00_pow(d00_pow0,pInst->ijbe,pModel->af)
#if defined(_DERIVATE)
double m10_pow(d10_pow0,d00_pow0,pInst->ijbe,pModel->af)
#endif
#if defined(_DERIVATE) /* probe=V(tnode:GND)V(bi:ei) ddxprobe= */
flicker_Pwr_Vtnode_GND=(pModel->kf*(d10_pow0*ijbe_Vtnode_GND));
flicker_Pwr_Vbi_ei=(pModel->kf*(d10_pow0*ijbe_Vbi_ei));
#endif
flicker_Pwr=(pModel->kf*d00_pow0);
EXIT_IF_ISNAN((pModel->kf*d00_pow0))
}
pInst->fpnoise0=flicker_Pwr;
pInst->fenoise0=1.0;
