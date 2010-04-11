* test circuit psp102
.options drop_spice_comments
.include ./psp102.sp.par

Mpsp 1 2 3 4 nmospsp102 W = 2e-05 L = 2e-05

* DEF SOURCES
VG 2 0 DC 0
VS 3 0 DC 0
VD 1 0 DC 0.05
VB 4 0 DC 0

* END SOURCES

.DC VG 0 2.51 0.1 VD 0 5.0 0.5 basic
.PRINT DC v(2)  v(1)  I(VD) 


.end
