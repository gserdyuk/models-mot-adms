* gnucap mextram test vce

.include my-mextram.spinc

VB B 0 dc 1.0
VC C 0 dc 3.0
VS S 0 dc 0.0
X1 C B 0 S dt mextram_ckt

.dc vb 0 2 0.1 
.print dc  v(b) v(c) v(b) v(s) i(VC) i(vb) i(Vs) 
 
.end
