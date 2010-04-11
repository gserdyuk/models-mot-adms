/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 11 Apr 2010 16:28:31 ***/


#ifndef rtest
#define rtest

#include "cktdefs.h"
#include "ifsim.h"
#include "gendefs.h"
#include "complex.h"
#include "noisedef.h"

#ifdef d
  #warning conflict: d is declared as a variable of module 'rtest'.
  #warning conflict: However in the API of ngspice 'd' is also defined as a pragma.
  #warning conflict: Pragma 'd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'd' in module 'rtest'.
  #undef d
#endif
#ifdef R1
  #warning conflict: R1 is declared as a variable of module 'rtest'.
  #warning conflict: However in the API of ngspice 'R1' is also defined as a pragma.
  #warning conflict: Pragma 'R1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'R1' in module 'rtest'.
  #undef R1
#endif
#ifdef v1
  #warning conflict: v1 is declared as a variable of module 'rtest'.
  #warning conflict: However in the API of ngspice 'v1' is also defined as a pragma.
  #warning conflict: Pragma 'v1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'v1' in module 'rtest'.
  #undef v1
#endif
#ifdef i1
  #warning conflict: i1 is declared as a variable of module 'rtest'.
  #warning conflict: However in the API of ngspice 'i1' is also defined as a pragma.
  #warning conflict: Pragma 'i1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'i1' in module 'rtest'.
  #undef i1
#endif
#ifdef i1
  #warning conflict: GND is declared as a node of module 'rtest'.
  #warning conflict: However in the API of ngspice 'GND' is also defined as a pragma.
  #warning conflict: Pragma 'GND' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GND' in module 'rtest'.
  #undef i1
#endif
#ifdef i1
  #warning conflict: top is declared as a node of module 'rtest'.
  #warning conflict: However in the API of ngspice 'top' is also defined as a pragma.
  #warning conflict: Pragma 'top' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'top' in module 'rtest'.
  #undef i1
#endif
#ifdef i1
  #warning conflict: low is declared as a node of module 'rtest'.
  #warning conflict: However in the API of ngspice 'low' is also defined as a pragma.
  #warning conflict: Pragma 'low' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'low' in module 'rtest'.
  #undef i1
#endif

#ifdef NGSPICE_DEBUG_OK
#define NGSPICE_DEBUG \
{ \
  if(getenv("ngspice_debug")) \
    rtestdebug(ckt,model,here); \
  else \
  { \
    printf("  To get more info run your simulation after setting shell variable ngspice_debug to 1\n"); \
    printf("  For example in sh shell just type: export ngspice_debug=1\n"); \
  } \
}
#else
#define NGSPICE_DEBUG
#endif

#define EXIT_IF_ISNAN(var) \
if(isnan((double) var)) \
{ \
  printf("%s:%i:bug:isnan:"#var"\n",__FILE__,__LINE__); \
  printf("Please send this message to laurent.lemaitre@freescale.com\n"); \
  NGSPICE_DEBUG \
  exit(1); /*__asm__ __volatile__ ("int $03");*/ \
} \
if(isinf((double) var)) \
{ \
  printf("%s:%i:bug:isinf:"#var"\n",__FILE__,__LINE__); \
  printf("Please send this message to laurent.lemaitre@freescale.com\n"); \
  NGSPICE_DEBUG \
  exit(1); /*__asm__ __volatile__ ("int $03");*/ \
}

/* ngspice $simparam variables
    gdev                (1/Ohms): Additional conductance to be added to nonlinear branches for conductance homotopy convergence algorithm.
    gmin                (1/Ohms): Minimum conductance placed in parallel with nonlinear branches.
    imax                (Amps)  : Branch current threshold above which the constitutive relation of a nonlinear branch should be linearized.
    imelt               (Amps)  : Branch current threshold indicating device failure.
    iteration                   : Iteration number of the analog solver.
    scale                       : Scale factor for device instance geometry parameters.
    shrink                      : Optical linear shrink factor.
    simulatorSubversion         : The simulator sub-version.
    simulatorVersion            : The simulator version.
    sourceScaleFactor           : Multiplicative factor for independent sources for source stepping homotopy convergence algorithm.
    tnom degrees       (Celsius): Default value of temperature at which model parameters were extracted.
*/

#define _circuit_gdev                ckt->CKTgmin
#define _circuit_gmin                ckt->CKTgmin
#define _circuit_imax                1.0
#define _circuit_imelt               1.0
#define _circuit_iteration           1.0
#define _circuit_scale               1.0
#define _circuit_shrink              1.0
#define _circuit_simulatorSubversion 0
#define _circuit_simulatorVersion    3.5
#define _circuit_sourceScaleFactor   1.0
#define _circuit_tnom                ckt->CKTnomTemp

#define _circuit_temp      ckt->CKTtemp
#define _scale             1.0

#define _cos(val,arg)            val = cos(arg);
#define _d_cos(val,dval,arg)     val = cos(arg);     dval = (-sin(arg));
#define _sin(val,arg)            val = sin(arg);
#define _d_sin(val,dval,arg)     val = sin(arg);     dval = (cos(arg));
#define _tan(val,arg)            val = tan(arg);
#define _d_tan(val,dval,arg)     val = tan(arg);     dval = (1.0/cos(arg)/cos(arg));
#define _hypot(xy,x,y)           xy = sqrt((x)*(x)+(y)*(y));
#define _dx_hypot(dx,xy,x,y)     dx = (x)/(xy);
#define _dy_hypot(dy,xy,x,y)     dy = (y)/(xy);
#define _max(xy,x,y)             xy = ((x)>(y))?(x):(y);
#define _dx_max(dx,xy,x,y)       dx = ((x)>(y))?1.0:0.0;
#define _dy_max(dy,xy,x,y)       dy = ((x)>(y))?0.0:1.0;
#define _min(xy,x,y)             xy = ((x)<(y))?(x):(y);
#define _dx_min(dx,xy,x,y)       dx = ((x)<(y))?1.0:0.0;
#define _dy_min(dy,xy,x,y)       dy = ((x)<(y))?0.0:1.0;
#define _cosh(val,arg)           val = cosh(arg);
#define _d_cosh(val,dval,arg)    val = cosh(arg);    dval = (sinh(arg));
#define _sinh(val,arg)           val = sinh(arg);
#define _d_sinh(val,dval,arg)    val = sinh(arg);    dval = (cosh(arg));
#define _tanh(val,arg)           val = tanh(arg);
#define _d_tanh(val,dval,arg)    val = tanh(arg);    dval = (1.0/cosh(arg)/cosh(arg));
#define _acos(val,arg)           val = acos(arg);
#define _d_acos(val,dval,arg)    val = acos(arg);    dval = (-1.0/sqrt(1-arg*arg));
#define _asin(val,arg)           val = asin(arg);
#define _d_asin(val,dval,arg)    val = asin(arg);    dval = (+1.0/sqrt(1-arg*arg));
#define _atan(val,arg)           val = atan(arg);
#define _d_atan(val,dval,arg)    val = atan(arg);    dval = (+1.0/(1+arg*arg));
#define _logE(val,arg)           val = log(arg);
#define _d_logE(val,dval,arg)    val = log(arg);     dval = (1.0/arg);
#define _log10(val,arg)          val = log10(arg);
#define _d_log10(val,dval,arg)   val = log10(arg);   dval = (1.0/arg/log(10));
#define _exp(val,arg)            val = exp(arg);
#define _d_exp(val,dval,arg)     val = exp(arg);     dval = val;
#define _sqrt(val,arg)           val = sqrt(arg);
#define _d_sqrt(val,dval,arg)    val = sqrt(arg);    dval = (1.0/val/2.0);
#define _pow(xy,x,y)             xy = pow(x,y);
#define _dx_pow(dx,xy,x,y)       dx = (x==0.0)?0.0:((y/x)*xy);
#define _dy_pow(dy,xy,x,y)       dy = (x==0.0)?0.0:((log(x)/exp(0.0))*xy);

#define _div1(x,y)               ((x)/(y))
#define _div0(xy,x,y)            xy=(x)/(y);
#define _div(xy,dx,x,y)          dx=1/(y); xy=(x)*dx;
#define _dx_div(dx,xy,x,y)
#define _dy_div(dy,dx,xy,x,y)    dy = -xy*dx;

#define _limexp(val,arg)         val = ((arg)<(90)) ? (exp(arg)) : (exp(90)*(1.0+(arg-90)));
#define _d_limexp(val,dval,arg)  val = ((arg)<(90)) ? (exp(arg)) : (exp(90)*(1.0+(arg-90))); dval = val;
#define _fabs(val,arg)           val = fabs(arg);
#define _d_fabs(val,dval,arg)    val = fabs(arg);    dval = (((val)>=0)?(+1.0):(-1.0));
#define _abs(val)                ((val)<(0) ? (-(val)):(val))

/* declarations for rtest MOSFETs */

/* information needed for each instance */
typedef struct srtestinstance {
  struct srtestmodel *rtestmodPtr;           /* pointer to model */
  struct srtestinstance *rtestnextInstance;  /* pointer to next instance of current model*/
  IFuid rtestname; /* pointer to character string naming this instance */
  int rtestowner;  /* number of owner process */
  int rteststate; /* index into state table for this device */

  /* node */  int topNode;
  int lowNode;

  /* instance parameters */
 // noise


  /* variables */
  /* states */
  /* pointer to sparse matrix (+ values)*/  double *PTR_J_top_top;
    int PTR_J_top_top_required;
    double JSVAL_top_top;
  double *PTR_J_top_low;
    int PTR_J_top_low_required;
    double JSVAL_top_low;
  double *PTR_J_low_top;
    int PTR_J_low_top_required;
    double JSVAL_low_top;
  double *PTR_J_low_low;
    int PTR_J_low_low_required;
    double JSVAL_low_low;


#define rtestnumStates 0

} rtestinstance ;


/* per model data */

typedef struct srtestmodel {         /* model structure */
  int rtestmodType;        /* type index of this device type */
  struct srtestmodel *rtestnextModel; /* pointer to next possible model in linked list */
  rtestinstance * rtestinstances;  /* pointer to list of instances that have this model */
  IFuid rtestmodName;         /* pointer to the name of this model */

  /* model parameters */  int d;
  unsigned d_Given  :1;
  double R1;
  unsigned R1_Given  :1;  /*R1*/

  /* variable */

} rtestmodel;
  /* flags */
typedef enum {
  rtest_model_d,
  rtest_model_R1,
  DUMMY_MODEL
} e_rtest_model;
typedef enum {
  DUMMY_INSTANCE
} e_rtest_instance;


#include "rtestext.h"

#endif /*rtest*/
