
simulator lang=spectre 

global 0

include "model-card-hicumL2V2p2.lib"

ahdl_include "hicumL2V2p2.va"

simulator1Options options temp=26.85 saveahdlvars=selected 

X1 (net1 net2 net3 net4) hicumL2V2p2_c_sbn 
X2 (net3 net4 net3 net4) hicumL2V2p2_c_sbn 
V2 (net2 0) vsource dc=p4     type=dc mag=1
V1 (net1 0) vsource dc=p4-p5  type=dc
V4 (net4 0) vsource dc=p4     type=dc
V3 (net3 0) vsource dc=p4-p5  type=dc mag=1


simulator2Options options reltol=1e-3 vabstol=1e-6 iabstol=1e-12 \\
     scalem=1.0 scale=1.0 gmin=1e-12 rforce=1 maxnotes=5 \\
    maxwarns=5 digits=5 cols=80 pivrel=1e-3 ckptclock=1800


ac ac start=p1 stop=p2 log=p3 annotate=status
dc dc
save V1:2 V2:2 V3:2 V4:2 net1 net2

