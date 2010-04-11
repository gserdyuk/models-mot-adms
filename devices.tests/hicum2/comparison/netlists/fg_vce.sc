
simulator lang=spectre 

global 0

include "model-card-hicumL2V2p2.lib"

ahdl_include "hicumL2V2p2.va"

simulator1Options options temp=26.85 saveahdlvars=selected 

X1 (net1 net2 net3 net4) hicumL2V2p2_c_sbn 

V1 (net1 0) vsource dc=p4 type=dc
V2 (net2 0) vsource type=dc
V3 (net3 0) vsource dc=0 type=dc
V4 (net4 0) vsource dc=p5 type=dc

simulator2Options options reltol=1e-3 vabstol=1e-6 iabstol=1e-15  \\
    scalem=1.0 scale=1.0 gmin=1e-12 rforce=1 maxnotes=5 \\
    maxwarns=5 digits=5 cols=80 pivrel=1e-3 ckptclock=1800 \\
    useprobes=yes 

dc dc dev=V2 param=dc start=p1 stop=p2 lin=p3 annotate=status

save V2:2 V1:2 V4:2 net1 net2 net4
