extern "C" {
  #include "hicum2defs.h"
}

#define info	 hicum2info
#define INSTANCE hicum2instance
#define MODEL	 hicum2model

#define SPICE_LETTER "Q"
#define DEVICE_TYPE "ngspice_hicum2"
#define MIN_NET_NODES 3
#define MAX_NET_NODES 5

#define INTERNAL_NODES 9  

#define MODEL_TYPE "npn|pnp|npnhicum2|pnphicum2|npn8|pnp8"
#define UNCONNECTED_NODES uGROUND

static std::string port_names[] = {"c", "b", "e", "s", "tnode"};
static std::string state_names[] = {};

/* 
   FLNQS=1 may require INTERNAL_NODES 9 ; 
   FLNQS=0 - INTERNAL_NODES 5 
   it is necessary to test both cases
   not tested yet
  */
