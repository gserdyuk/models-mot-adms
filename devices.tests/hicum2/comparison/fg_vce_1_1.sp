* hicum2

.include ../my-hicumL2V2p21.lib

VB B 0 1.4
VC C 0 1.0
VS S 0 0.0

X1 C B 0 S hicumL2V2p2_c_sbn


*  net1 - c
*  net2 - b
*  net3 - e
*  net4 - s

.dc vc 0.5 2.5 2  vb 0 1.2 0.02 
.print dc v(c) v(b) v(s) i(VC) i(Vb) i(Vs) 
.end
