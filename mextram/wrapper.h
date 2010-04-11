    extern "C" {
  #include "mextramdefs.h"
}

#define info	 mextraminfo
#define INSTANCE mextraminstance
#define MODEL	 mextrammodel

#define SPICE_LETTER "Q"
#define DEVICE_TYPE "ngspice_mextram"
#define MIN_NET_NODES 3
#define MAX_NET_NODES 5
#define INTERNAL_NODES 8  
/* for some reason INTERNAL_NODES 7 is insufficient, is "noi" noise node important? */
#define MODEL_TYPE "npnmextram|pnpmextram|npn504|pnp504"
#define UNCONNECTED_NODES uGROUND

static std::string port_names[] = {"c", "b", "e", "s", "dt"};
static std::string state_names[] = {};

/* 
  model defines 5 external nodes and 7 internal:
  noise is not considered yet
  
     electrical 	c     `P(info="external collector node");
     electrical 	b     `P(info="external base node");
     electrical 	e     `P(info="external emitter node");
     electrical 	s     `P(info="external substrate node");
     electrical 	dt    `P(info="external thermal node");
  
  // Internal nodes  
     electrical 	c1    `P(info="internal collector node 1");
     electrical 	e1    `P(info="internal emitter node");
     electrical 	b1    `P(info="internal base node 1");
     electrical 	b2    `P(info="internal base node 2");
     electrical 	c2    `P(info="internal collector node 2");
     electrical 	c3    `P(info="internal collector node 3");
     electrical 	c4    `P(info="internal collector node 4");
  //
     electrical 	noi   `P(info="internal noise node");


 */
