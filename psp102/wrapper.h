    extern "C" {
  #include "psp102defs.h"
}

#define info	 psp102info
#define INSTANCE psp102instance
#define MODEL	 psp102model

#define SPICE_LETTER "M"
#define DEVICE_TYPE "ngspice_psp102"
#define MIN_NET_NODES 3
#define MAX_NET_NODES 4
#define INTERNAL_NODES 2
/*NQSmodel is not defined */
#define MODEL_TYPE "nmospsp102|pmospsp102|nmos45|pmos45|nmos102|pmos102"
#define UNCONNECTED_NODES uGROUND

static std::string port_names[] = {"d", "g", "s", "b"};
static std::string state_names[] = {};

/* 
 4 external nodes
 2 noise nodes
 5 +  9 internal nodes

....
    //  Node definitions
    inout      D, G, S, B;
    electrical D;
    electrical G;
    electrical S;
    electrical B;

    // Extra internal nodes for correlated drain and gate noise
    electrical NOI;
    electrical NOI2;
    
    // Extra branches for correlated drain and gate noise
    branch (NOI) NOII;
    branch (NOI) NOIR;
    branch (NOI) NOIC;

`ifdef NQSmodel
    // Internal nodes for gate and bulk resistors
    electrical GP;
    electrical BP;
    electrical BI;
    electrical BS;
    electrical BD;

    // Internal nodes for spline collocation
    electrical INT1;
    electrical INT2;
    electrical INT3;
    electrical INT4;
    electrical INT5;
    electrical INT6;
    electrical INT7;
    electrical INT8;
    electrical INT9;
  

 */
