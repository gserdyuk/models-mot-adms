    extern "C" {
  #include "ekvdefs.h"
}

#define info	 ekvinfo
#define INSTANCE ekvinstance
#define MODEL	 ekvmodel

#define SPICE_LETTER "M"
#define DEVICE_TYPE "ngspice_ekv"
#define MIN_NET_NODES 3
#define MAX_NET_NODES 4
#define INTERNAL_NODES 2
#define MODEL_TYPE "nmosekv|pmosekv|nmos44|pmos44"
#define UNCONNECTED_NODES uGROUND

static std::string port_names[] = {"d", "g", "s", "b"};
static std::string state_names[] = {};

/* 
 3-4 external nodes
 2  internal nodes
*/
