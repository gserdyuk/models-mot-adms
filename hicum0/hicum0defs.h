/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:14:44 ***/


#ifndef hicum0
#define hicum0

#include "cktdefs.h"
#include "ifsim.h"
#include "gendefs.h"
#include "complex.h"
#include "noisedef.h"

#ifdef is
  #warning conflict: is is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'is' is also defined as a pragma.
  #warning conflict: Pragma 'is' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'is' in module 'hicum0'.
  #undef is
#endif
#ifdef mcf
  #warning conflict: mcf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'mcf' is also defined as a pragma.
  #warning conflict: Pragma 'mcf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mcf' in module 'hicum0'.
  #undef mcf
#endif
#ifdef mcr
  #warning conflict: mcr is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'mcr' is also defined as a pragma.
  #warning conflict: Pragma 'mcr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mcr' in module 'hicum0'.
  #undef mcr
#endif
#ifdef vef
  #warning conflict: vef is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vef' is also defined as a pragma.
  #warning conflict: Pragma 'vef' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vef' in module 'hicum0'.
  #undef vef
#endif
#ifdef iqf
  #warning conflict: iqf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'iqf' is also defined as a pragma.
  #warning conflict: Pragma 'iqf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iqf' in module 'hicum0'.
  #undef iqf
#endif
#ifdef iqr
  #warning conflict: iqr is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'iqr' is also defined as a pragma.
  #warning conflict: Pragma 'iqr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iqr' in module 'hicum0'.
  #undef iqr
#endif
#ifdef iqfh
  #warning conflict: iqfh is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'iqfh' is also defined as a pragma.
  #warning conflict: Pragma 'iqfh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iqfh' in module 'hicum0'.
  #undef iqfh
#endif
#ifdef tfh
  #warning conflict: tfh is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'tfh' is also defined as a pragma.
  #warning conflict: Pragma 'tfh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tfh' in module 'hicum0'.
  #undef tfh
#endif
#ifdef ibes
  #warning conflict: ibes is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ibes' is also defined as a pragma.
  #warning conflict: Pragma 'ibes' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibes' in module 'hicum0'.
  #undef ibes
#endif
#ifdef mbe
  #warning conflict: mbe is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'mbe' is also defined as a pragma.
  #warning conflict: Pragma 'mbe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mbe' in module 'hicum0'.
  #undef mbe
#endif
#ifdef ires
  #warning conflict: ires is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ires' is also defined as a pragma.
  #warning conflict: Pragma 'ires' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ires' in module 'hicum0'.
  #undef ires
#endif
#ifdef mre
  #warning conflict: mre is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'mre' is also defined as a pragma.
  #warning conflict: Pragma 'mre' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mre' in module 'hicum0'.
  #undef mre
#endif
#ifdef ibcs
  #warning conflict: ibcs is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ibcs' is also defined as a pragma.
  #warning conflict: Pragma 'ibcs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibcs' in module 'hicum0'.
  #undef ibcs
#endif
#ifdef mbc
  #warning conflict: mbc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'mbc' is also defined as a pragma.
  #warning conflict: Pragma 'mbc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mbc' in module 'hicum0'.
  #undef mbc
#endif
#ifdef cje0
  #warning conflict: cje0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cje0' is also defined as a pragma.
  #warning conflict: Pragma 'cje0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cje0' in module 'hicum0'.
  #undef cje0
#endif
#ifdef vde
  #warning conflict: vde is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vde' is also defined as a pragma.
  #warning conflict: Pragma 'vde' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vde' in module 'hicum0'.
  #undef vde
#endif
#ifdef ze
  #warning conflict: ze is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ze' is also defined as a pragma.
  #warning conflict: Pragma 'ze' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ze' in module 'hicum0'.
  #undef ze
#endif
#ifdef aje
  #warning conflict: aje is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'aje' is also defined as a pragma.
  #warning conflict: Pragma 'aje' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'aje' in module 'hicum0'.
  #undef aje
#endif
#ifdef t0
  #warning conflict: t0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 't0' is also defined as a pragma.
  #warning conflict: Pragma 't0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 't0' in module 'hicum0'.
  #undef t0
#endif
#ifdef dt0h
  #warning conflict: dt0h is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'dt0h' is also defined as a pragma.
  #warning conflict: Pragma 'dt0h' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dt0h' in module 'hicum0'.
  #undef dt0h
#endif
#ifdef tbvl
  #warning conflict: tbvl is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'tbvl' is also defined as a pragma.
  #warning conflict: Pragma 'tbvl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tbvl' in module 'hicum0'.
  #undef tbvl
#endif
#ifdef tef0
  #warning conflict: tef0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'tef0' is also defined as a pragma.
  #warning conflict: Pragma 'tef0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tef0' in module 'hicum0'.
  #undef tef0
#endif
#ifdef gte
  #warning conflict: gte is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'gte' is also defined as a pragma.
  #warning conflict: Pragma 'gte' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gte' in module 'hicum0'.
  #undef gte
#endif
#ifdef thcs
  #warning conflict: thcs is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'thcs' is also defined as a pragma.
  #warning conflict: Pragma 'thcs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'thcs' in module 'hicum0'.
  #undef thcs
#endif
#ifdef ahc
  #warning conflict: ahc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ahc' is also defined as a pragma.
  #warning conflict: Pragma 'ahc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ahc' in module 'hicum0'.
  #undef ahc
#endif
#ifdef tr
  #warning conflict: tr is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'tr' is also defined as a pragma.
  #warning conflict: Pragma 'tr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tr' in module 'hicum0'.
  #undef tr
#endif
#ifdef rci0
  #warning conflict: rci0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'rci0' is also defined as a pragma.
  #warning conflict: Pragma 'rci0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rci0' in module 'hicum0'.
  #undef rci0
#endif
#ifdef vlim
  #warning conflict: vlim is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vlim' is also defined as a pragma.
  #warning conflict: Pragma 'vlim' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vlim' in module 'hicum0'.
  #undef vlim
#endif
#ifdef vpt
  #warning conflict: vpt is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vpt' is also defined as a pragma.
  #warning conflict: Pragma 'vpt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vpt' in module 'hicum0'.
  #undef vpt
#endif
#ifdef vces
  #warning conflict: vces is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vces' is also defined as a pragma.
  #warning conflict: Pragma 'vces' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vces' in module 'hicum0'.
  #undef vces
#endif
#ifdef cjci0
  #warning conflict: cjci0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjci0' is also defined as a pragma.
  #warning conflict: Pragma 'cjci0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjci0' in module 'hicum0'.
  #undef cjci0
#endif
#ifdef vdci
  #warning conflict: vdci is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vdci' is also defined as a pragma.
  #warning conflict: Pragma 'vdci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdci' in module 'hicum0'.
  #undef vdci
#endif
#ifdef zci
  #warning conflict: zci is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zci' is also defined as a pragma.
  #warning conflict: Pragma 'zci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zci' in module 'hicum0'.
  #undef zci
#endif
#ifdef vptci
  #warning conflict: vptci is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vptci' is also defined as a pragma.
  #warning conflict: Pragma 'vptci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vptci' in module 'hicum0'.
  #undef vptci
#endif
#ifdef cjcx0
  #warning conflict: cjcx0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjcx0' is also defined as a pragma.
  #warning conflict: Pragma 'cjcx0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjcx0' in module 'hicum0'.
  #undef cjcx0
#endif
#ifdef vdcx
  #warning conflict: vdcx is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vdcx' is also defined as a pragma.
  #warning conflict: Pragma 'vdcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdcx' in module 'hicum0'.
  #undef vdcx
#endif
#ifdef zcx
  #warning conflict: zcx is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zcx' is also defined as a pragma.
  #warning conflict: Pragma 'zcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zcx' in module 'hicum0'.
  #undef zcx
#endif
#ifdef vptcx
  #warning conflict: vptcx is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vptcx' is also defined as a pragma.
  #warning conflict: Pragma 'vptcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vptcx' in module 'hicum0'.
  #undef vptcx
#endif
#ifdef fbc
  #warning conflict: fbc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'fbc' is also defined as a pragma.
  #warning conflict: Pragma 'fbc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fbc' in module 'hicum0'.
  #undef fbc
#endif
#ifdef rbi0
  #warning conflict: rbi0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'rbi0' is also defined as a pragma.
  #warning conflict: Pragma 'rbi0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rbi0' in module 'hicum0'.
  #undef rbi0
#endif
#ifdef vr0e
  #warning conflict: vr0e is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vr0e' is also defined as a pragma.
  #warning conflict: Pragma 'vr0e' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vr0e' in module 'hicum0'.
  #undef vr0e
#endif
#ifdef vr0c
  #warning conflict: vr0c is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vr0c' is also defined as a pragma.
  #warning conflict: Pragma 'vr0c' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vr0c' in module 'hicum0'.
  #undef vr0c
#endif
#ifdef fgeo
  #warning conflict: fgeo is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'fgeo' is also defined as a pragma.
  #warning conflict: Pragma 'fgeo' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fgeo' in module 'hicum0'.
  #undef fgeo
#endif
#ifdef rbx
  #warning conflict: rbx is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'rbx' is also defined as a pragma.
  #warning conflict: Pragma 'rbx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rbx' in module 'hicum0'.
  #undef rbx
#endif
#ifdef rcx
  #warning conflict: rcx is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'rcx' is also defined as a pragma.
  #warning conflict: Pragma 'rcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rcx' in module 'hicum0'.
  #undef rcx
#endif
#ifdef re
  #warning conflict: re is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 're' is also defined as a pragma.
  #warning conflict: Pragma 're' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 're' in module 'hicum0'.
  #undef re
#endif
#ifdef itss
  #warning conflict: itss is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'itss' is also defined as a pragma.
  #warning conflict: Pragma 'itss' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itss' in module 'hicum0'.
  #undef itss
#endif
#ifdef msf
  #warning conflict: msf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'msf' is also defined as a pragma.
  #warning conflict: Pragma 'msf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'msf' in module 'hicum0'.
  #undef msf
#endif
#ifdef iscs
  #warning conflict: iscs is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'iscs' is also defined as a pragma.
  #warning conflict: Pragma 'iscs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iscs' in module 'hicum0'.
  #undef iscs
#endif
#ifdef msc
  #warning conflict: msc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'msc' is also defined as a pragma.
  #warning conflict: Pragma 'msc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'msc' in module 'hicum0'.
  #undef msc
#endif
#ifdef cjs0
  #warning conflict: cjs0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjs0' is also defined as a pragma.
  #warning conflict: Pragma 'cjs0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjs0' in module 'hicum0'.
  #undef cjs0
#endif
#ifdef vds
  #warning conflict: vds is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vds' is also defined as a pragma.
  #warning conflict: Pragma 'vds' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vds' in module 'hicum0'.
  #undef vds
#endif
#ifdef zs
  #warning conflict: zs is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zs' is also defined as a pragma.
  #warning conflict: Pragma 'zs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zs' in module 'hicum0'.
  #undef zs
#endif
#ifdef vpts
  #warning conflict: vpts is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vpts' is also defined as a pragma.
  #warning conflict: Pragma 'vpts' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vpts' in module 'hicum0'.
  #undef vpts
#endif
#ifdef cbcpar
  #warning conflict: cbcpar is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cbcpar' is also defined as a pragma.
  #warning conflict: Pragma 'cbcpar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbcpar' in module 'hicum0'.
  #undef cbcpar
#endif
#ifdef cbepar
  #warning conflict: cbepar is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cbepar' is also defined as a pragma.
  #warning conflict: Pragma 'cbepar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbepar' in module 'hicum0'.
  #undef cbepar
#endif
#ifdef eavl
  #warning conflict: eavl is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'eavl' is also defined as a pragma.
  #warning conflict: Pragma 'eavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eavl' in module 'hicum0'.
  #undef eavl
#endif
#ifdef kavl
  #warning conflict: kavl is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'kavl' is also defined as a pragma.
  #warning conflict: Pragma 'kavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'kavl' in module 'hicum0'.
  #undef kavl
#endif
#ifdef kf
  #warning conflict: kf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'kf' is also defined as a pragma.
  #warning conflict: Pragma 'kf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'kf' in module 'hicum0'.
  #undef kf
#endif
#ifdef af
  #warning conflict: af is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'af' is also defined as a pragma.
  #warning conflict: Pragma 'af' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'af' in module 'hicum0'.
  #undef af
#endif
#ifdef vgb
  #warning conflict: vgb is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vgb' is also defined as a pragma.
  #warning conflict: Pragma 'vgb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgb' in module 'hicum0'.
  #undef vgb
#endif
#ifdef vge
  #warning conflict: vge is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vge' is also defined as a pragma.
  #warning conflict: Pragma 'vge' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vge' in module 'hicum0'.
  #undef vge
#endif
#ifdef vgc
  #warning conflict: vgc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vgc' is also defined as a pragma.
  #warning conflict: Pragma 'vgc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgc' in module 'hicum0'.
  #undef vgc
#endif
#ifdef vgs
  #warning conflict: vgs is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vgs' is also defined as a pragma.
  #warning conflict: Pragma 'vgs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgs' in module 'hicum0'.
  #undef vgs
#endif
#ifdef f1vg
  #warning conflict: f1vg is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'f1vg' is also defined as a pragma.
  #warning conflict: Pragma 'f1vg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'f1vg' in module 'hicum0'.
  #undef f1vg
#endif
#ifdef f2vg
  #warning conflict: f2vg is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'f2vg' is also defined as a pragma.
  #warning conflict: Pragma 'f2vg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'f2vg' in module 'hicum0'.
  #undef f2vg
#endif
#ifdef alt0
  #warning conflict: alt0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'alt0' is also defined as a pragma.
  #warning conflict: Pragma 'alt0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alt0' in module 'hicum0'.
  #undef alt0
#endif
#ifdef kt0
  #warning conflict: kt0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'kt0' is also defined as a pragma.
  #warning conflict: Pragma 'kt0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'kt0' in module 'hicum0'.
  #undef kt0
#endif
#ifdef zetact
  #warning conflict: zetact is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zetact' is also defined as a pragma.
  #warning conflict: Pragma 'zetact' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetact' in module 'hicum0'.
  #undef zetact
#endif
#ifdef zetabet
  #warning conflict: zetabet is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zetabet' is also defined as a pragma.
  #warning conflict: Pragma 'zetabet' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetabet' in module 'hicum0'.
  #undef zetabet
#endif
#ifdef zetaci
  #warning conflict: zetaci is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zetaci' is also defined as a pragma.
  #warning conflict: Pragma 'zetaci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetaci' in module 'hicum0'.
  #undef zetaci
#endif
#ifdef alvs
  #warning conflict: alvs is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'alvs' is also defined as a pragma.
  #warning conflict: Pragma 'alvs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alvs' in module 'hicum0'.
  #undef alvs
#endif
#ifdef alces
  #warning conflict: alces is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'alces' is also defined as a pragma.
  #warning conflict: Pragma 'alces' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alces' in module 'hicum0'.
  #undef alces
#endif
#ifdef zetarbi
  #warning conflict: zetarbi is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zetarbi' is also defined as a pragma.
  #warning conflict: Pragma 'zetarbi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetarbi' in module 'hicum0'.
  #undef zetarbi
#endif
#ifdef zetarbx
  #warning conflict: zetarbx is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zetarbx' is also defined as a pragma.
  #warning conflict: Pragma 'zetarbx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetarbx' in module 'hicum0'.
  #undef zetarbx
#endif
#ifdef zetarcx
  #warning conflict: zetarcx is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zetarcx' is also defined as a pragma.
  #warning conflict: Pragma 'zetarcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetarcx' in module 'hicum0'.
  #undef zetarcx
#endif
#ifdef zetare
  #warning conflict: zetare is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zetare' is also defined as a pragma.
  #warning conflict: Pragma 'zetare' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetare' in module 'hicum0'.
  #undef zetare
#endif
#ifdef alkav
  #warning conflict: alkav is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'alkav' is also defined as a pragma.
  #warning conflict: Pragma 'alkav' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alkav' in module 'hicum0'.
  #undef alkav
#endif
#ifdef aleav
  #warning conflict: aleav is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'aleav' is also defined as a pragma.
  #warning conflict: Pragma 'aleav' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'aleav' in module 'hicum0'.
  #undef aleav
#endif
#ifdef flsh
  #warning conflict: flsh is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'flsh' is also defined as a pragma.
  #warning conflict: Pragma 'flsh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'flsh' in module 'hicum0'.
  #undef flsh
#endif
#ifdef rth
  #warning conflict: rth is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'rth' is also defined as a pragma.
  #warning conflict: Pragma 'rth' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rth' in module 'hicum0'.
  #undef rth
#endif
#ifdef cth
  #warning conflict: cth is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cth' is also defined as a pragma.
  #warning conflict: Pragma 'cth' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cth' in module 'hicum0'.
  #undef cth
#endif
#ifdef npn
  #warning conflict: npn is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'npn' is also defined as a pragma.
  #warning conflict: Pragma 'npn' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'npn' in module 'hicum0'.
  #undef npn
#endif
#ifdef pnp
  #warning conflict: pnp is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'pnp' is also defined as a pragma.
  #warning conflict: Pragma 'pnp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pnp' in module 'hicum0'.
  #undef pnp
#endif
#ifdef tnom
  #warning conflict: tnom is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'tnom' is also defined as a pragma.
  #warning conflict: Pragma 'tnom' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tnom' in module 'hicum0'.
  #undef tnom
#endif
#ifdef dt
  #warning conflict: dt is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'dt' is also defined as a pragma.
  #warning conflict: Pragma 'dt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dt' in module 'hicum0'.
  #undef dt
#endif
#ifdef _circuit_gmin
  #warning conflict: _circuit_gmin is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice '_circuit_gmin' is also defined as a pragma.
  #warning conflict: Pragma '_circuit_gmin' will be undefined.
  #warning conflict: You can solve the confict by renaming variable '_circuit_gmin' in module 'hicum0'.
  #undef _circuit_gmin
#endif
#ifdef HICUMtype
  #warning conflict: HICUMtype is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'HICUMtype' is also defined as a pragma.
  #warning conflict: Pragma 'HICUMtype' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'HICUMtype' in module 'hicum0'.
  #undef HICUMtype
#endif
#ifdef cj0
  #warning conflict: cj0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cj0' is also defined as a pragma.
  #warning conflict: Pragma 'cj0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cj0' in module 'hicum0'.
  #undef cj0
#endif
#ifdef vd
  #warning conflict: vd is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vd' is also defined as a pragma.
  #warning conflict: Pragma 'vd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vd' in module 'hicum0'.
  #undef vd
#endif
#ifdef z
  #warning conflict: z is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'z' is also defined as a pragma.
  #warning conflict: Pragma 'z' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'z' in module 'hicum0'.
  #undef z
#endif
#ifdef aj
  #warning conflict: aj is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'aj' is also defined as a pragma.
  #warning conflict: Pragma 'aj' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'aj' in module 'hicum0'.
  #undef aj
#endif
#ifdef zr
  #warning conflict: zr is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zr' is also defined as a pragma.
  #warning conflict: Pragma 'zr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zr' in module 'hicum0'.
  #undef zr
#endif
#ifdef vp
  #warning conflict: vp is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vp' is also defined as a pragma.
  #warning conflict: Pragma 'vp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vp' in module 'hicum0'.
  #undef vp
#endif
#ifdef cmax
  #warning conflict: cmax is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cmax' is also defined as a pragma.
  #warning conflict: Pragma 'cmax' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cmax' in module 'hicum0'.
  #undef cmax
#endif
#ifdef cr
  #warning conflict: cr is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cr' is also defined as a pragma.
  #warning conflict: Pragma 'cr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cr' in module 'hicum0'.
  #undef cr
#endif
#ifdef ve
  #warning conflict: ve is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 've' is also defined as a pragma.
  #warning conflict: Pragma 've' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 've' in module 'hicum0'.
  #undef ve
#endif
#ifdef ee1
  #warning conflict: ee1 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ee1' is also defined as a pragma.
  #warning conflict: Pragma 'ee1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ee1' in module 'hicum0'.
  #undef ee1
#endif
#ifdef ez
  #warning conflict: ez is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ez' is also defined as a pragma.
  #warning conflict: Pragma 'ez' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ez' in module 'hicum0'.
  #undef ez
#endif
#ifdef ezr
  #warning conflict: ezr is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ezr' is also defined as a pragma.
  #warning conflict: Pragma 'ezr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ezr' in module 'hicum0'.
  #undef ezr
#endif
#ifdef vdj1
  #warning conflict: vdj1 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vdj1' is also defined as a pragma.
  #warning conflict: Pragma 'vdj1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdj1' in module 'hicum0'.
  #undef vdj1
#endif
#ifdef vdj2
  #warning conflict: vdj2 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vdj2' is also defined as a pragma.
  #warning conflict: Pragma 'vdj2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdj2' in module 'hicum0'.
  #undef vdj2
#endif
#ifdef ex1
  #warning conflict: ex1 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ex1' is also defined as a pragma.
  #warning conflict: Pragma 'ex1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ex1' in module 'hicum0'.
  #undef ex1
#endif
#ifdef vr
  #warning conflict: vr is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vr' is also defined as a pragma.
  #warning conflict: Pragma 'vr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vr' in module 'hicum0'.
  #undef vr
#endif
#ifdef vj1
  #warning conflict: vj1 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vj1' is also defined as a pragma.
  #warning conflict: Pragma 'vj1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vj1' in module 'hicum0'.
  #undef vj1
#endif
#ifdef vj2
  #warning conflict: vj2 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vj2' is also defined as a pragma.
  #warning conflict: Pragma 'vj2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vj2' in module 'hicum0'.
  #undef vj2
#endif
#ifdef vj4
  #warning conflict: vj4 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vj4' is also defined as a pragma.
  #warning conflict: Pragma 'vj4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vj4' in module 'hicum0'.
  #undef vj4
#endif
#ifdef qj1
  #warning conflict: qj1 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qj1' is also defined as a pragma.
  #warning conflict: Pragma 'qj1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qj1' in module 'hicum0'.
  #undef qj1
#endif
#ifdef qj2
  #warning conflict: qj2 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qj2' is also defined as a pragma.
  #warning conflict: Pragma 'qj2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qj2' in module 'hicum0'.
  #undef qj2
#endif
#ifdef qj3
  #warning conflict: qj3 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qj3' is also defined as a pragma.
  #warning conflict: Pragma 'qj3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qj3' in module 'hicum0'.
  #undef qj3
#endif
#ifdef qjf
  #warning conflict: qjf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qjf' is also defined as a pragma.
  #warning conflict: Pragma 'qjf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qjf' in module 'hicum0'.
  #undef qjf
#endif
#ifdef cj1
  #warning conflict: cj1 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cj1' is also defined as a pragma.
  #warning conflict: Pragma 'cj1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cj1' in module 'hicum0'.
  #undef cj1
#endif
#ifdef cj2
  #warning conflict: cj2 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cj2' is also defined as a pragma.
  #warning conflict: Pragma 'cj2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cj2' in module 'hicum0'.
  #undef cj2
#endif
#ifdef cj3
  #warning conflict: cj3 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cj3' is also defined as a pragma.
  #warning conflict: Pragma 'cj3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cj3' in module 'hicum0'.
  #undef cj3
#endif
#ifdef cjf
  #warning conflict: cjf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjf' is also defined as a pragma.
  #warning conflict: Pragma 'cjf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjf' in module 'hicum0'.
  #undef cjf
#endif
#ifdef vg
  #warning conflict: vg is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vg' is also defined as a pragma.
  #warning conflict: Pragma 'vg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vg' in module 'hicum0'.
  #undef vg
#endif
#ifdef vdj0
  #warning conflict: vdj0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vdj0' is also defined as a pragma.
  #warning conflict: Pragma 'vdj0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdj0' in module 'hicum0'.
  #undef vdj0
#endif
#ifdef vdjt
  #warning conflict: vdjt is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vdjt' is also defined as a pragma.
  #warning conflict: Pragma 'vdjt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdjt' in module 'hicum0'.
  #undef vdjt
#endif
#ifdef cj0_t
  #warning conflict: cj0_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cj0_t' is also defined as a pragma.
  #warning conflict: Pragma 'cj0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cj0_t' in module 'hicum0'.
  #undef cj0_t
#endif
#ifdef vd_t
  #warning conflict: vd_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vd_t' is also defined as a pragma.
  #warning conflict: Pragma 'vd_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vd_t' in module 'hicum0'.
  #undef vd_t
#endif
#ifdef aj_t
  #warning conflict: aj_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'aj_t' is also defined as a pragma.
  #warning conflict: Pragma 'aj_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'aj_t' in module 'hicum0'.
  #undef aj_t
#endif
#ifdef VT
  #warning conflict: VT is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'VT' is also defined as a pragma.
  #warning conflict: Pragma 'VT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VT' in module 'hicum0'.
  #undef VT
#endif
#ifdef Tamb
  #warning conflict: Tamb is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Tamb' is also defined as a pragma.
  #warning conflict: Pragma 'Tamb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tamb' in module 'hicum0'.
  #undef Tamb
#endif
#ifdef Tdev
  #warning conflict: Tdev is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Tdev' is also defined as a pragma.
  #warning conflict: Pragma 'Tdev' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tdev' in module 'hicum0'.
  #undef Tdev
#endif
#ifdef Tnom
  #warning conflict: Tnom is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Tnom' is also defined as a pragma.
  #warning conflict: Pragma 'Tnom' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tnom' in module 'hicum0'.
  #undef Tnom
#endif
#ifdef dT
  #warning conflict: dT is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'dT' is also defined as a pragma.
  #warning conflict: Pragma 'dT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dT' in module 'hicum0'.
  #undef dT
#endif
#ifdef qtt0
  #warning conflict: qtt0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qtt0' is also defined as a pragma.
  #warning conflict: Pragma 'qtt0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qtt0' in module 'hicum0'.
  #undef qtt0
#endif
#ifdef ln_qtt0
  #warning conflict: ln_qtt0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ln_qtt0' is also defined as a pragma.
  #warning conflict: Pragma 'ln_qtt0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ln_qtt0' in module 'hicum0'.
  #undef ln_qtt0
#endif
#ifdef vde_t
  #warning conflict: vde_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vde_t' is also defined as a pragma.
  #warning conflict: Pragma 'vde_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vde_t' in module 'hicum0'.
  #undef vde_t
#endif
#ifdef vdci_t
  #warning conflict: vdci_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vdci_t' is also defined as a pragma.
  #warning conflict: Pragma 'vdci_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdci_t' in module 'hicum0'.
  #undef vdci_t
#endif
#ifdef vdcx_t
  #warning conflict: vdcx_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vdcx_t' is also defined as a pragma.
  #warning conflict: Pragma 'vdcx_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdcx_t' in module 'hicum0'.
  #undef vdcx_t
#endif
#ifdef vds_t
  #warning conflict: vds_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vds_t' is also defined as a pragma.
  #warning conflict: Pragma 'vds_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vds_t' in module 'hicum0'.
  #undef vds_t
#endif
#ifdef is_t
  #warning conflict: is_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'is_t' is also defined as a pragma.
  #warning conflict: Pragma 'is_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'is_t' in module 'hicum0'.
  #undef is_t
#endif
#ifdef ires_t
  #warning conflict: ires_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ires_t' is also defined as a pragma.
  #warning conflict: Pragma 'ires_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ires_t' in module 'hicum0'.
  #undef ires_t
#endif
#ifdef ibes_t
  #warning conflict: ibes_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ibes_t' is also defined as a pragma.
  #warning conflict: Pragma 'ibes_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibes_t' in module 'hicum0'.
  #undef ibes_t
#endif
#ifdef ibcs_t
  #warning conflict: ibcs_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ibcs_t' is also defined as a pragma.
  #warning conflict: Pragma 'ibcs_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibcs_t' in module 'hicum0'.
  #undef ibcs_t
#endif
#ifdef itss_t
  #warning conflict: itss_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'itss_t' is also defined as a pragma.
  #warning conflict: Pragma 'itss_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itss_t' in module 'hicum0'.
  #undef itss_t
#endif
#ifdef iscs_t
  #warning conflict: iscs_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'iscs_t' is also defined as a pragma.
  #warning conflict: Pragma 'iscs_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iscs_t' in module 'hicum0'.
  #undef iscs_t
#endif
#ifdef cje0_t
  #warning conflict: cje0_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cje0_t' is also defined as a pragma.
  #warning conflict: Pragma 'cje0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cje0_t' in module 'hicum0'.
  #undef cje0_t
#endif
#ifdef cjci0_t
  #warning conflict: cjci0_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjci0_t' is also defined as a pragma.
  #warning conflict: Pragma 'cjci0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjci0_t' in module 'hicum0'.
  #undef cjci0_t
#endif
#ifdef cjcx0_t
  #warning conflict: cjcx0_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjcx0_t' is also defined as a pragma.
  #warning conflict: Pragma 'cjcx0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjcx0_t' in module 'hicum0'.
  #undef cjcx0_t
#endif
#ifdef cjs0_t
  #warning conflict: cjs0_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjs0_t' is also defined as a pragma.
  #warning conflict: Pragma 'cjs0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjs0_t' in module 'hicum0'.
  #undef cjs0_t
#endif
#ifdef rci0_t
  #warning conflict: rci0_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'rci0_t' is also defined as a pragma.
  #warning conflict: Pragma 'rci0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rci0_t' in module 'hicum0'.
  #undef rci0_t
#endif
#ifdef vlim_t
  #warning conflict: vlim_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vlim_t' is also defined as a pragma.
  #warning conflict: Pragma 'vlim_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vlim_t' in module 'hicum0'.
  #undef vlim_t
#endif
#ifdef vces_t
  #warning conflict: vces_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vces_t' is also defined as a pragma.
  #warning conflict: Pragma 'vces_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vces_t' in module 'hicum0'.
  #undef vces_t
#endif
#ifdef thcs_t
  #warning conflict: thcs_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'thcs_t' is also defined as a pragma.
  #warning conflict: Pragma 'thcs_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'thcs_t' in module 'hicum0'.
  #undef thcs_t
#endif
#ifdef tef0_t
  #warning conflict: tef0_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'tef0_t' is also defined as a pragma.
  #warning conflict: Pragma 'tef0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tef0_t' in module 'hicum0'.
  #undef tef0_t
#endif
#ifdef rbi0_t
  #warning conflict: rbi0_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'rbi0_t' is also defined as a pragma.
  #warning conflict: Pragma 'rbi0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rbi0_t' in module 'hicum0'.
  #undef rbi0_t
#endif
#ifdef rbx_t
  #warning conflict: rbx_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'rbx_t' is also defined as a pragma.
  #warning conflict: Pragma 'rbx_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rbx_t' in module 'hicum0'.
  #undef rbx_t
#endif
#ifdef rcx_t
  #warning conflict: rcx_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'rcx_t' is also defined as a pragma.
  #warning conflict: Pragma 'rcx_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rcx_t' in module 'hicum0'.
  #undef rcx_t
#endif
#ifdef re_t
  #warning conflict: re_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 're_t' is also defined as a pragma.
  #warning conflict: Pragma 're_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 're_t' in module 'hicum0'.
  #undef re_t
#endif
#ifdef t0_t
  #warning conflict: t0_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 't0_t' is also defined as a pragma.
  #warning conflict: Pragma 't0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 't0_t' in module 'hicum0'.
  #undef t0_t
#endif
#ifdef eavl_t
  #warning conflict: eavl_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'eavl_t' is also defined as a pragma.
  #warning conflict: Pragma 'eavl_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eavl_t' in module 'hicum0'.
  #undef eavl_t
#endif
#ifdef kavl_t
  #warning conflict: kavl_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'kavl_t' is also defined as a pragma.
  #warning conflict: Pragma 'kavl_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'kavl_t' in module 'hicum0'.
  #undef kavl_t
#endif
#ifdef aje_t
  #warning conflict: aje_t is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'aje_t' is also defined as a pragma.
  #warning conflict: Pragma 'aje_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'aje_t' in module 'hicum0'.
  #undef aje_t
#endif
#ifdef qjci
  #warning conflict: qjci is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qjci' is also defined as a pragma.
  #warning conflict: Pragma 'qjci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qjci' in module 'hicum0'.
  #undef qjci
#endif
#ifdef qjcx
  #warning conflict: qjcx is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qjcx' is also defined as a pragma.
  #warning conflict: Pragma 'qjcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qjcx' in module 'hicum0'.
  #undef qjcx
#endif
#ifdef qjcii
  #warning conflict: qjcii is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qjcii' is also defined as a pragma.
  #warning conflict: Pragma 'qjcii' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qjcii' in module 'hicum0'.
  #undef qjcii
#endif
#ifdef cjcii
  #warning conflict: cjcii is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjcii' is also defined as a pragma.
  #warning conflict: Pragma 'cjcii' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjcii' in module 'hicum0'.
  #undef cjcii
#endif
#ifdef qjcxi
  #warning conflict: qjcxi is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qjcxi' is also defined as a pragma.
  #warning conflict: Pragma 'qjcxi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qjcxi' in module 'hicum0'.
  #undef qjcxi
#endif
#ifdef qjciii
  #warning conflict: qjciii is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qjciii' is also defined as a pragma.
  #warning conflict: Pragma 'qjciii' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qjciii' in module 'hicum0'.
  #undef qjciii
#endif
#ifdef cjci0_t_ii
  #warning conflict: cjci0_t_ii is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjci0_t_ii' is also defined as a pragma.
  #warning conflict: Pragma 'cjci0_t_ii' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjci0_t_ii' in module 'hicum0'.
  #undef cjci0_t_ii
#endif
#ifdef cjcx0_t_ii
  #warning conflict: cjcx0_t_ii is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjcx0_t_ii' is also defined as a pragma.
  #warning conflict: Pragma 'cjcx0_t_ii' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjcx0_t_ii' in module 'hicum0'.
  #undef cjcx0_t_ii
#endif
#ifdef cjcx0_t_i
  #warning conflict: cjcx0_t_i is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjcx0_t_i' is also defined as a pragma.
  #warning conflict: Pragma 'cjcx0_t_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjcx0_t_i' in module 'hicum0'.
  #undef cjcx0_t_i
#endif
#ifdef v_j
  #warning conflict: v_j is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'v_j' is also defined as a pragma.
  #warning conflict: Pragma 'v_j' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'v_j' in module 'hicum0'.
  #undef v_j
#endif
#ifdef qjei
  #warning conflict: qjei is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qjei' is also defined as a pragma.
  #warning conflict: Pragma 'qjei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qjei' in module 'hicum0'.
  #undef qjei
#endif
#ifdef cjei_i
  #warning conflict: cjei_i is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjei_i' is also defined as a pragma.
  #warning conflict: Pragma 'cjei_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjei_i' in module 'hicum0'.
  #undef cjei_i
#endif
#ifdef cjei
  #warning conflict: cjei is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cjei' is also defined as a pragma.
  #warning conflict: Pragma 'cjei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjei' in module 'hicum0'.
  #undef cjei
#endif
#ifdef vf
  #warning conflict: vf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vf' is also defined as a pragma.
  #warning conflict: Pragma 'vf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vf' in module 'hicum0'.
  #undef vf
#endif
#ifdef vj
  #warning conflict: vj is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vj' is also defined as a pragma.
  #warning conflict: Pragma 'vj' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vj' in module 'hicum0'.
  #undef vj
#endif
#ifdef x
  #warning conflict: x is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'x' is also defined as a pragma.
  #warning conflict: Pragma 'x' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x' in module 'hicum0'.
  #undef x
#endif
#ifdef y
  #warning conflict: y is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'y' is also defined as a pragma.
  #warning conflict: Pragma 'y' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'y' in module 'hicum0'.
  #undef y
#endif
#ifdef e1
  #warning conflict: e1 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'e1' is also defined as a pragma.
  #warning conflict: Pragma 'e1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'e1' in module 'hicum0'.
  #undef e1
#endif
#ifdef e2
  #warning conflict: e2 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'e2' is also defined as a pragma.
  #warning conflict: Pragma 'e2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'e2' in module 'hicum0'.
  #undef e2
#endif
#ifdef cc
  #warning conflict: cc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'cc' is also defined as a pragma.
  #warning conflict: Pragma 'cc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cc' in module 'hicum0'.
  #undef cc
#endif
#ifdef qj_2
  #warning conflict: qj_2 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qj_2' is also defined as a pragma.
  #warning conflict: Pragma 'qj_2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qj_2' in module 'hicum0'.
  #undef qj_2
#endif
#ifdef facl
  #warning conflict: facl is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'facl' is also defined as a pragma.
  #warning conflict: Pragma 'facl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'facl' in module 'hicum0'.
  #undef facl
#endif
#ifdef tf0
  #warning conflict: tf0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'tf0' is also defined as a pragma.
  #warning conflict: Pragma 'tf0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tf0' in module 'hicum0'.
  #undef tf0
#endif
#ifdef ickf
  #warning conflict: ickf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ickf' is also defined as a pragma.
  #warning conflict: Pragma 'ickf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ickf' in module 'hicum0'.
  #undef ickf
#endif
#ifdef ickr
  #warning conflict: ickr is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ickr' is also defined as a pragma.
  #warning conflict: Pragma 'ickr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ickr' in module 'hicum0'.
  #undef ickr
#endif
#ifdef itfi
  #warning conflict: itfi is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'itfi' is also defined as a pragma.
  #warning conflict: Pragma 'itfi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itfi' in module 'hicum0'.
  #undef itfi
#endif
#ifdef itri
  #warning conflict: itri is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'itri' is also defined as a pragma.
  #warning conflict: Pragma 'itri' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itri' in module 'hicum0'.
  #undef itri
#endif
#ifdef qm
  #warning conflict: qm is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qm' is also defined as a pragma.
  #warning conflict: Pragma 'qm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qm' in module 'hicum0'.
  #undef qm
#endif
#ifdef qpt
  #warning conflict: qpt is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qpt' is also defined as a pragma.
  #warning conflict: Pragma 'qpt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qpt' in module 'hicum0'.
  #undef qpt
#endif
#ifdef itf
  #warning conflict: itf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'itf' is also defined as a pragma.
  #warning conflict: Pragma 'itf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itf' in module 'hicum0'.
  #undef itf
#endif
#ifdef itr
  #warning conflict: itr is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'itr' is also defined as a pragma.
  #warning conflict: Pragma 'itr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itr' in module 'hicum0'.
  #undef itr
#endif
#ifdef it
  #warning conflict: it is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'it' is also defined as a pragma.
  #warning conflict: Pragma 'it' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'it' in module 'hicum0'.
  #undef it
#endif
#ifdef ibe
  #warning conflict: ibe is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ibe' is also defined as a pragma.
  #warning conflict: Pragma 'ibe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibe' in module 'hicum0'.
  #undef ibe
#endif
#ifdef ire
  #warning conflict: ire is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ire' is also defined as a pragma.
  #warning conflict: Pragma 'ire' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ire' in module 'hicum0'.
  #undef ire
#endif
#ifdef ibi
  #warning conflict: ibi is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ibi' is also defined as a pragma.
  #warning conflict: Pragma 'ibi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibi' in module 'hicum0'.
  #undef ibi
#endif
#ifdef itfl
  #warning conflict: itfl is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'itfl' is also defined as a pragma.
  #warning conflict: Pragma 'itfl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itfl' in module 'hicum0'.
  #undef itfl
#endif
#ifdef itrl
  #warning conflict: itrl is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'itrl' is also defined as a pragma.
  #warning conflict: Pragma 'itrl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itrl' in module 'hicum0'.
  #undef itrl
#endif
#ifdef al
  #warning conflict: al is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'al' is also defined as a pragma.
  #warning conflict: Pragma 'al' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'al' in module 'hicum0'.
  #undef al
#endif
#ifdef s3l
  #warning conflict: s3l is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 's3l' is also defined as a pragma.
  #warning conflict: Pragma 's3l' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 's3l' in module 'hicum0'.
  #undef s3l
#endif
#ifdef wl
  #warning conflict: wl is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'wl' is also defined as a pragma.
  #warning conflict: Pragma 'wl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wl' in module 'hicum0'.
  #undef wl
#endif
#ifdef d_qfh
  #warning conflict: d_qfh is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'd_qfh' is also defined as a pragma.
  #warning conflict: Pragma 'd_qfh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'd_qfh' in module 'hicum0'.
  #undef d_qfh
#endif
#ifdef qf
  #warning conflict: qf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qf' is also defined as a pragma.
  #warning conflict: Pragma 'qf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qf' in module 'hicum0'.
  #undef qf
#endif
#ifdef qf0
  #warning conflict: qf0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qf0' is also defined as a pragma.
  #warning conflict: Pragma 'qf0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qf0' in module 'hicum0'.
  #undef qf0
#endif
#ifdef dqfh
  #warning conflict: dqfh is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'dqfh' is also defined as a pragma.
  #warning conflict: Pragma 'dqfh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dqfh' in module 'hicum0'.
  #undef dqfh
#endif
#ifdef dqef
  #warning conflict: dqef is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'dqef' is also defined as a pragma.
  #warning conflict: Pragma 'dqef' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dqef' in module 'hicum0'.
  #undef dqef
#endif
#ifdef dtef
  #warning conflict: dtef is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'dtef' is also defined as a pragma.
  #warning conflict: Pragma 'dtef' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dtef' in module 'hicum0'.
  #undef dtef
#endif
#ifdef dtfh
  #warning conflict: dtfh is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'dtfh' is also defined as a pragma.
  #warning conflict: Pragma 'dtfh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dtfh' in module 'hicum0'.
  #undef dtfh
#endif
#ifdef tf
  #warning conflict: tf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'tf' is also defined as a pragma.
  #warning conflict: Pragma 'tf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tf' in module 'hicum0'.
  #undef tf
#endif
#ifdef ick
  #warning conflict: ick is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ick' is also defined as a pragma.
  #warning conflict: Pragma 'ick' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ick' in module 'hicum0'.
  #undef ick
#endif
#ifdef vc
  #warning conflict: vc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vc' is also defined as a pragma.
  #warning conflict: Pragma 'vc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vc' in module 'hicum0'.
  #undef vc
#endif
#ifdef vceff
  #warning conflict: vceff is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vceff' is also defined as a pragma.
  #warning conflict: Pragma 'vceff' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vceff' in module 'hicum0'.
  #undef vceff
#endif
#ifdef s3
  #warning conflict: s3 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 's3' is also defined as a pragma.
  #warning conflict: Pragma 's3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 's3' in module 'hicum0'.
  #undef s3
#endif
#ifdef w
  #warning conflict: w is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'w' is also defined as a pragma.
  #warning conflict: Pragma 'w' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'w' in module 'hicum0'.
  #undef w
#endif
#ifdef a
  #warning conflict: a is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'a' is also defined as a pragma.
  #warning conflict: Pragma 'a' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'a' in module 'hicum0'.
  #undef a
#endif
#ifdef tww
  #warning conflict: tww is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'tww' is also defined as a pragma.
  #warning conflict: Pragma 'tww' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tww' in module 'hicum0'.
  #undef tww
#endif
#ifdef qr
  #warning conflict: qr is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qr' is also defined as a pragma.
  #warning conflict: Pragma 'qr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qr' in module 'hicum0'.
  #undef qr
#endif
#ifdef v_bord
  #warning conflict: v_bord is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'v_bord' is also defined as a pragma.
  #warning conflict: Pragma 'v_bord' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'v_bord' in module 'hicum0'.
  #undef v_bord
#endif
#ifdef a_iavl
  #warning conflict: a_iavl is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'a_iavl' is also defined as a pragma.
  #warning conflict: Pragma 'a_iavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'a_iavl' in module 'hicum0'.
  #undef a_iavl
#endif
#ifdef lncc
  #warning conflict: lncc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'lncc' is also defined as a pragma.
  #warning conflict: Pragma 'lncc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'lncc' in module 'hicum0'.
  #undef lncc
#endif
#ifdef rb
  #warning conflict: rb is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'rb' is also defined as a pragma.
  #warning conflict: Pragma 'rb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rb' in module 'hicum0'.
  #undef rb
#endif
#ifdef eta
  #warning conflict: eta is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'eta' is also defined as a pragma.
  #warning conflict: Pragma 'eta' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eta' in module 'hicum0'.
  #undef eta
#endif
#ifdef rbi
  #warning conflict: rbi is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'rbi' is also defined as a pragma.
  #warning conflict: Pragma 'rbi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rbi' in module 'hicum0'.
  #undef rbi
#endif
#ifdef qje
  #warning conflict: qje is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qje' is also defined as a pragma.
  #warning conflict: Pragma 'qje' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qje' in module 'hicum0'.
  #undef qje
#endif
#ifdef Qz_nom
  #warning conflict: Qz_nom is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Qz_nom' is also defined as a pragma.
  #warning conflict: Pragma 'Qz_nom' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qz_nom' in module 'hicum0'.
  #undef Qz_nom
#endif
#ifdef fQz
  #warning conflict: fQz is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'fQz' is also defined as a pragma.
  #warning conflict: Pragma 'fQz' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fQz' in module 'hicum0'.
  #undef fQz
#endif
#ifdef qjs
  #warning conflict: qjs is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'qjs' is also defined as a pragma.
  #warning conflict: Pragma 'qjs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qjs' in module 'hicum0'.
  #undef qjs
#endif
#ifdef HSa
  #warning conflict: HSa is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'HSa' is also defined as a pragma.
  #warning conflict: Pragma 'HSa' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'HSa' in module 'hicum0'.
  #undef HSa
#endif
#ifdef HSb
  #warning conflict: HSb is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'HSb' is also defined as a pragma.
  #warning conflict: Pragma 'HSb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'HSb' in module 'hicum0'.
  #undef HSb
#endif
#ifdef HSI_Tsu
  #warning conflict: HSI_Tsu is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'HSI_Tsu' is also defined as a pragma.
  #warning conflict: Pragma 'HSI_Tsu' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'HSI_Tsu' in module 'hicum0'.
  #undef HSI_Tsu
#endif
#ifdef HSUM
  #warning conflict: HSUM is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'HSUM' is also defined as a pragma.
  #warning conflict: Pragma 'HSUM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'HSUM' in module 'hicum0'.
  #undef HSUM
#endif
#ifdef pterm
  #warning conflict: pterm is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'pterm' is also defined as a pragma.
  #warning conflict: Pragma 'pterm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pterm' in module 'hicum0'.
  #undef pterm
#endif
#ifdef mg
  #warning conflict: mg is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'mg' is also defined as a pragma.
  #warning conflict: Pragma 'mg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mg' in module 'hicum0'.
  #undef mg
#endif
#ifdef zetabci
  #warning conflict: zetabci is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zetabci' is also defined as a pragma.
  #warning conflict: Pragma 'zetabci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetabci' in module 'hicum0'.
  #undef zetabci
#endif
#ifdef zetasct
  #warning conflict: zetasct is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zetasct' is also defined as a pragma.
  #warning conflict: Pragma 'zetasct' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetasct' in module 'hicum0'.
  #undef zetasct
#endif
#ifdef zetatef
  #warning conflict: zetatef is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'zetatef' is also defined as a pragma.
  #warning conflict: Pragma 'zetatef' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetatef' in module 'hicum0'.
  #undef zetatef
#endif
#ifdef avs
  #warning conflict: avs is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'avs' is also defined as a pragma.
  #warning conflict: Pragma 'avs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'avs' in module 'hicum0'.
  #undef avs
#endif
#ifdef k1
  #warning conflict: k1 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'k1' is also defined as a pragma.
  #warning conflict: Pragma 'k1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'k1' in module 'hicum0'.
  #undef k1
#endif
#ifdef k2
  #warning conflict: k2 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'k2' is also defined as a pragma.
  #warning conflict: Pragma 'k2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'k2' in module 'hicum0'.
  #undef k2
#endif
#ifdef vgbe
  #warning conflict: vgbe is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vgbe' is also defined as a pragma.
  #warning conflict: Pragma 'vgbe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgbe' in module 'hicum0'.
  #undef vgbe
#endif
#ifdef vgbc
  #warning conflict: vgbc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vgbc' is also defined as a pragma.
  #warning conflict: Pragma 'vgbc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgbc' in module 'hicum0'.
  #undef vgbc
#endif
#ifdef vgsc
  #warning conflict: vgsc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'vgsc' is also defined as a pragma.
  #warning conflict: Pragma 'vgsc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgsc' in module 'hicum0'.
  #undef vgsc
#endif
#ifdef dvg
  #warning conflict: dvg is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'dvg' is also defined as a pragma.
  #warning conflict: Pragma 'dvg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dvg' in module 'hicum0'.
  #undef dvg
#endif
#ifdef xvf
  #warning conflict: xvf is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'xvf' is also defined as a pragma.
  #warning conflict: Pragma 'xvf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xvf' in module 'hicum0'.
  #undef xvf
#endif
#ifdef xvf2
  #warning conflict: xvf2 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'xvf2' is also defined as a pragma.
  #warning conflict: Pragma 'xvf2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xvf2' in module 'hicum0'.
  #undef xvf2
#endif
#ifdef dvj
  #warning conflict: dvj is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'dvj' is also defined as a pragma.
  #warning conflict: Pragma 'dvj' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dvj' in module 'hicum0'.
  #undef dvj
#endif
#ifdef uvc
  #warning conflict: uvc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'uvc' is also defined as a pragma.
  #warning conflict: Pragma 'uvc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'uvc' in module 'hicum0'.
  #undef uvc
#endif
#ifdef Vt0
  #warning conflict: Vt0 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Vt0' is also defined as a pragma.
  #warning conflict: Pragma 'Vt0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vt0' in module 'hicum0'.
  #undef Vt0
#endif
#ifdef flicker_Pwr
  #warning conflict: flicker_Pwr is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'flicker_Pwr' is also defined as a pragma.
  #warning conflict: Pragma 'flicker_Pwr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'flicker_Pwr' in module 'hicum0'.
  #undef flicker_Pwr
#endif
#ifdef fourkt
  #warning conflict: fourkt is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'fourkt' is also defined as a pragma.
  #warning conflict: Pragma 'fourkt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fourkt' in module 'hicum0'.
  #undef fourkt
#endif
#ifdef twoq
  #warning conflict: twoq is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'twoq' is also defined as a pragma.
  #warning conflict: Pragma 'twoq' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'twoq' in module 'hicum0'.
  #undef twoq
#endif
#ifdef le
  #warning conflict: le is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'le' is also defined as a pragma.
  #warning conflict: Pragma 'le' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'le' in module 'hicum0'.
  #undef le
#endif
#ifdef arg
  #warning conflict: arg is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'arg' is also defined as a pragma.
  #warning conflict: Pragma 'arg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'arg' in module 'hicum0'.
  #undef arg
#endif
#ifdef le1
  #warning conflict: le1 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'le1' is also defined as a pragma.
  #warning conflict: Pragma 'le1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'le1' in module 'hicum0'.
  #undef le1
#endif
#ifdef arg1
  #warning conflict: arg1 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'arg1' is also defined as a pragma.
  #warning conflict: Pragma 'arg1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'arg1' in module 'hicum0'.
  #undef arg1
#endif
#ifdef le2
  #warning conflict: le2 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'le2' is also defined as a pragma.
  #warning conflict: Pragma 'le2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'le2' in module 'hicum0'.
  #undef le2
#endif
#ifdef arg2
  #warning conflict: arg2 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'arg2' is also defined as a pragma.
  #warning conflict: Pragma 'arg2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'arg2' in module 'hicum0'.
  #undef arg2
#endif
#ifdef IS
  #warning conflict: IS is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'IS' is also defined as a pragma.
  #warning conflict: Pragma 'IS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IS' in module 'hicum0'.
  #undef IS
#endif
#ifdef IST
  #warning conflict: IST is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'IST' is also defined as a pragma.
  #warning conflict: Pragma 'IST' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IST' in module 'hicum0'.
  #undef IST
#endif
#ifdef UM1
  #warning conflict: UM1 is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'UM1' is also defined as a pragma.
  #warning conflict: Pragma 'UM1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'UM1' in module 'hicum0'.
  #undef UM1
#endif
#ifdef U
  #warning conflict: U is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'U' is also defined as a pragma.
  #warning conflict: Pragma 'U' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'U' in module 'hicum0'.
  #undef U
#endif
#ifdef Iz
  #warning conflict: Iz is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Iz' is also defined as a pragma.
  #warning conflict: Pragma 'Iz' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Iz' in module 'hicum0'.
  #undef Iz
#endif
#ifdef DIOY
  #warning conflict: DIOY is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'DIOY' is also defined as a pragma.
  #warning conflict: Pragma 'DIOY' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DIOY' in module 'hicum0'.
  #undef DIOY
#endif
#ifdef Vbci
  #warning conflict: Vbci is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Vbci' is also defined as a pragma.
  #warning conflict: Pragma 'Vbci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vbci' in module 'hicum0'.
  #undef Vbci
#endif
#ifdef Vbici
  #warning conflict: Vbici is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Vbici' is also defined as a pragma.
  #warning conflict: Pragma 'Vbici' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vbici' in module 'hicum0'.
  #undef Vbici
#endif
#ifdef Vbiei
  #warning conflict: Vbiei is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Vbiei' is also defined as a pragma.
  #warning conflict: Pragma 'Vbiei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vbiei' in module 'hicum0'.
  #undef Vbiei
#endif
#ifdef Vciei
  #warning conflict: Vciei is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Vciei' is also defined as a pragma.
  #warning conflict: Pragma 'Vciei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vciei' in module 'hicum0'.
  #undef Vciei
#endif
#ifdef Vsci
  #warning conflict: Vsci is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Vsci' is also defined as a pragma.
  #warning conflict: Pragma 'Vsci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vsci' in module 'hicum0'.
  #undef Vsci
#endif
#ifdef Veie
  #warning conflict: Veie is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Veie' is also defined as a pragma.
  #warning conflict: Pragma 'Veie' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Veie' in module 'hicum0'.
  #undef Veie
#endif
#ifdef Vbbi
  #warning conflict: Vbbi is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Vbbi' is also defined as a pragma.
  #warning conflict: Pragma 'Vbbi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vbbi' in module 'hicum0'.
  #undef Vbbi
#endif
#ifdef Vcic
  #warning conflict: Vcic is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Vcic' is also defined as a pragma.
  #warning conflict: Pragma 'Vcic' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vcic' in module 'hicum0'.
  #undef Vcic
#endif
#ifdef Vbe
  #warning conflict: Vbe is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Vbe' is also defined as a pragma.
  #warning conflict: Pragma 'Vbe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vbe' in module 'hicum0'.
  #undef Vbe
#endif
#ifdef Vrth
  #warning conflict: Vrth is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Vrth' is also defined as a pragma.
  #warning conflict: Pragma 'Vrth' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vrth' in module 'hicum0'.
  #undef Vrth
#endif
#ifdef ijbc
  #warning conflict: ijbc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ijbc' is also defined as a pragma.
  #warning conflict: Pragma 'ijbc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijbc' in module 'hicum0'.
  #undef ijbc
#endif
#ifdef iavl
  #warning conflict: iavl is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'iavl' is also defined as a pragma.
  #warning conflict: Pragma 'iavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iavl' in module 'hicum0'.
  #undef iavl
#endif
#ifdef ijsc
  #warning conflict: ijsc is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ijsc' is also defined as a pragma.
  #warning conflict: Pragma 'ijsc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijsc' in module 'hicum0'.
  #undef ijsc
#endif
#ifdef Ieei
  #warning conflict: Ieei is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Ieei' is also defined as a pragma.
  #warning conflict: Pragma 'Ieei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ieei' in module 'hicum0'.
  #undef Ieei
#endif
#ifdef Icci
  #warning conflict: Icci is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Icci' is also defined as a pragma.
  #warning conflict: Pragma 'Icci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Icci' in module 'hicum0'.
  #undef Icci
#endif
#ifdef Ibbi
  #warning conflict: Ibbi is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Ibbi' is also defined as a pragma.
  #warning conflict: Pragma 'Ibbi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ibbi' in module 'hicum0'.
  #undef Ibbi
#endif
#ifdef Ibici
  #warning conflict: Ibici is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Ibici' is also defined as a pragma.
  #warning conflict: Pragma 'Ibici' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ibici' in module 'hicum0'.
  #undef Ibici
#endif
#ifdef ijbe
  #warning conflict: ijbe is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ijbe' is also defined as a pragma.
  #warning conflict: Pragma 'ijbe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijbe' in module 'hicum0'.
  #undef ijbe
#endif
#ifdef Qbci
  #warning conflict: Qbci is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Qbci' is also defined as a pragma.
  #warning conflict: Pragma 'Qbci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qbci' in module 'hicum0'.
  #undef Qbci
#endif
#ifdef Qbe
  #warning conflict: Qbe is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Qbe' is also defined as a pragma.
  #warning conflict: Pragma 'Qbe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qbe' in module 'hicum0'.
  #undef Qbe
#endif
#ifdef Qbici
  #warning conflict: Qbici is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Qbici' is also defined as a pragma.
  #warning conflict: Pragma 'Qbici' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qbici' in module 'hicum0'.
  #undef Qbici
#endif
#ifdef Qbiei
  #warning conflict: Qbiei is declared as a variable of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'Qbiei' is also defined as a pragma.
  #warning conflict: Pragma 'Qbiei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qbiei' in module 'hicum0'.
  #undef Qbiei
#endif
#ifdef Qbiei
  #warning conflict: GND is declared as a node of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'GND' is also defined as a pragma.
  #warning conflict: Pragma 'GND' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GND' in module 'hicum0'.
  #undef Qbiei
#endif
#ifdef Qbiei
  #warning conflict: c is declared as a node of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'c' is also defined as a pragma.
  #warning conflict: Pragma 'c' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'c' in module 'hicum0'.
  #undef Qbiei
#endif
#ifdef Qbiei
  #warning conflict: b is declared as a node of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'b' is also defined as a pragma.
  #warning conflict: Pragma 'b' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'b' in module 'hicum0'.
  #undef Qbiei
#endif
#ifdef Qbiei
  #warning conflict: e is declared as a node of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'e' is also defined as a pragma.
  #warning conflict: Pragma 'e' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'e' in module 'hicum0'.
  #undef Qbiei
#endif
#ifdef Qbiei
  #warning conflict: s is declared as a node of module 'hicum0'.
  #warning conflict: However in the API of ngspice 's' is also defined as a pragma.
  #warning conflict: Pragma 's' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 's' in module 'hicum0'.
  #undef Qbiei
#endif
#ifdef Qbiei
  #warning conflict: tnode is declared as a node of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'tnode' is also defined as a pragma.
  #warning conflict: Pragma 'tnode' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tnode' in module 'hicum0'.
  #undef Qbiei
#endif
#ifdef Qbiei
  #warning conflict: ci is declared as a node of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ci' is also defined as a pragma.
  #warning conflict: Pragma 'ci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ci' in module 'hicum0'.
  #undef Qbiei
#endif
#ifdef Qbiei
  #warning conflict: bi is declared as a node of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'bi' is also defined as a pragma.
  #warning conflict: Pragma 'bi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'bi' in module 'hicum0'.
  #undef Qbiei
#endif
#ifdef Qbiei
  #warning conflict: ei is declared as a node of module 'hicum0'.
  #warning conflict: However in the API of ngspice 'ei' is also defined as a pragma.
  #warning conflict: Pragma 'ei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ei' in module 'hicum0'.
  #undef Qbiei
#endif

#ifdef NGSPICE_DEBUG_OK
#define NGSPICE_DEBUG \
{ \
  if(getenv("ngspice_debug")) \
    hicum0debug(ckt,model,here); \
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

/* declarations for hicum0 MOSFETs */

/* information needed for each instance */
typedef struct shicum0instance {
  struct shicum0model *hicum0modPtr;           /* pointer to model */
  struct shicum0instance *hicum0nextInstance;  /* pointer to next instance of current model*/
  IFuid hicum0name; /* pointer to character string naming this instance */
  int hicum0owner;  /* number of owner process */
  int hicum0state; /* index into state table for this device */

  /* node */  int cNode;  /*c*/
  int bNode;  /*b*/
  int eNode;  /*e*/
  int sNode;  /*s*/
  int tnodeNode;  /*tnode*/
  int ciNode;  /*ci*/
  int biNode;  /*bi*/
  int eiNode;  /*ei*/

  /* instance parameters */  double dt;
  unsigned dt_Given  :1;  /*dt*/

 // noise
  double fpnoise0, fenoise0;
  double wnoise0;
  double wnoise1;
  double wnoise2;
  double wnoise3;
  double wnoise4;


  /* variables */  double qjci;
  /*info*/  double qjei;
  /*info*/  double cjei_i;
  /*info*/  double it;
  /*info*/  double ijbc;
  /*info*/  double iavl;
  /*info*/  double ijsc;
  /*info*/  double Ieei;
  /*info*/  double Icci;
  /*info*/  double Ibbi;
  /*info*/  double Ibici;
  /*info*/  double ijbe;
  /*info*/
  /* states */  int state_tnode_GND;
  int state_b_e;
  int state_b_ci;
  int state_s_ci;
  int state_bi_ci;
  int state_bi_ei;

  /* pointer to sparse matrix (+ values)*/  double *PTR_J_bi_bi;
    int PTR_J_bi_bi_required;
    double JSVAL_bi_bi;
    double JDVAL_bi_bi;
  double *PTR_J_bi_ei;
    int PTR_J_bi_ei_required;
    double JSVAL_bi_ei;
    double JDVAL_bi_ei;
  double *PTR_J_ei_bi;
    int PTR_J_ei_bi_required;
    double JSVAL_ei_bi;
    double JDVAL_ei_bi;
  double *PTR_J_ei_ei;
    int PTR_J_ei_ei_required;
    double JSVAL_ei_ei;
    double JDVAL_ei_ei;
  double *PTR_J_bi_ci;
    int PTR_J_bi_ci_required;
    double JSVAL_bi_ci;
    double JDVAL_bi_ci;
  double *PTR_J_ci_bi;
    int PTR_J_ci_bi_required;
    double JSVAL_ci_bi;
    double JDVAL_ci_bi;
  double *PTR_J_ci_ci;
    int PTR_J_ci_ci_required;
    double JSVAL_ci_ci;
    double JDVAL_ci_ci;
  double *PTR_J_b_s;
    int PTR_J_b_s_required;
    double JSVAL_b_s;
  double *PTR_J_b_ci;
    int PTR_J_b_ci_required;
    double JSVAL_b_ci;
    double JDVAL_b_ci;
  double *PTR_J_s_s;
    int PTR_J_s_s_required;
    double JSVAL_s_s;
    double JDVAL_s_s;
  double *PTR_J_s_ci;
    int PTR_J_s_ci_required;
    double JSVAL_s_ci;
    double JDVAL_s_ci;
  double *PTR_J_b_b;
    int PTR_J_b_b_required;
    double JSVAL_b_b;
    double JDVAL_b_b;
  double *PTR_J_s_b;
    int PTR_J_s_b_required;
    double JSVAL_s_b;
    double JDVAL_s_b;
  double *PTR_J_b_tnode;
    int PTR_J_b_tnode_required;
    double JSVAL_b_tnode;
    double JDVAL_b_tnode;
  double *PTR_J_s_tnode;
    int PTR_J_s_tnode_required;
    double JSVAL_s_tnode;
    double JDVAL_s_tnode;
  double *PTR_J_s_bi;
    int PTR_J_s_bi_required;
    double JSVAL_s_bi;
    double JDVAL_s_bi;
  double *PTR_J_s_ei;
    int PTR_J_s_ei_required;
    double JSVAL_s_ei;
    double JDVAL_s_ei;
  double *PTR_J_ci_ei;
    int PTR_J_ci_ei_required;
    double JSVAL_ci_ei;
    double JDVAL_ci_ei;
  double *PTR_J_ci_s;
    int PTR_J_ci_s_required;
    double JSVAL_ci_s;
    double JDVAL_ci_s;
  double *PTR_J_ci_tnode;
    int PTR_J_ci_tnode_required;
    double JSVAL_ci_tnode;
    double JDVAL_ci_tnode;
  double *PTR_J_ci_b;
    int PTR_J_ci_b_required;
    double JSVAL_ci_b;
    double JDVAL_ci_b;
  double *PTR_J_b_bi;
    int PTR_J_b_bi_required;
    double JSVAL_b_bi;
    double JDVAL_b_bi;
  double *PTR_J_b_e;
    int PTR_J_b_e_required;
    double JDVAL_b_e;
  double *PTR_J_e_b;
    int PTR_J_e_b_required;
    double JDVAL_e_b;
  double *PTR_J_e_e;
    int PTR_J_e_e_required;
    double JSVAL_e_e;
    double JDVAL_e_e;
  double *PTR_J_ei_tnode;
    int PTR_J_ei_tnode_required;
    double JSVAL_ei_tnode;
    double JDVAL_ei_tnode;
  double *PTR_J_e_tnode;
    int PTR_J_e_tnode_required;
    double JSVAL_e_tnode;
  double *PTR_J_ei_e;
    int PTR_J_ei_e_required;
    double JSVAL_ei_e;
  double *PTR_J_e_ei;
    int PTR_J_e_ei_required;
    double JSVAL_e_ei;
  double *PTR_J_c_tnode;
    int PTR_J_c_tnode_required;
    double JSVAL_c_tnode;
  double *PTR_J_ci_c;
    int PTR_J_ci_c_required;
    double JSVAL_ci_c;
  double *PTR_J_c_ci;
    int PTR_J_c_ci_required;
    double JSVAL_c_ci;
  double *PTR_J_c_c;
    int PTR_J_c_c_required;
    double JSVAL_c_c;
  double *PTR_J_b_ei;
    int PTR_J_b_ei_required;
    double JSVAL_b_ei;
  double *PTR_J_bi_b;
    int PTR_J_bi_b_required;
    double JSVAL_bi_b;
    double JDVAL_bi_b;
  double *PTR_J_bi_tnode;
    int PTR_J_bi_tnode_required;
    double JSVAL_bi_tnode;
    double JDVAL_bi_tnode;
  double *PTR_J_ei_ci;
    int PTR_J_ei_ci_required;
    double JSVAL_ei_ci;
    double JDVAL_ei_ci;
  double *PTR_J_ei_b;
    int PTR_J_ei_b_required;
    double JSVAL_ei_b;
    double JDVAL_ei_b;
  double *PTR_J_tnode_tnode;
    int PTR_J_tnode_tnode_required;
    double JSVAL_tnode_tnode;
    double JDVAL_tnode_tnode;
  double *PTR_J_tnode_ci;
    int PTR_J_tnode_ci_required;
    double JSVAL_tnode_ci;
  double *PTR_J_tnode_ei;
    int PTR_J_tnode_ei_required;
    double JSVAL_tnode_ei;
  double *PTR_J_tnode_b;
    int PTR_J_tnode_b_required;
    double JSVAL_tnode_b;
  double *PTR_J_tnode_bi;
    int PTR_J_tnode_bi_required;
    double JSVAL_tnode_bi;
  double *PTR_J_tnode_s;
    int PTR_J_tnode_s_required;
    double JSVAL_tnode_s;
  double *PTR_J_tnode_e;
    int PTR_J_tnode_e_required;
    double JSVAL_tnode_e;
  double *PTR_J_tnode_c;
    int PTR_J_tnode_c_required;
    double JSVAL_tnode_c;


#define hicum0numStates 0

} hicum0instance ;


/* per model data */

typedef struct shicum0model {         /* model structure */
  int hicum0modType;        /* type index of this device type */
  struct shicum0model *hicum0nextModel; /* pointer to next possible model in linked list */
  hicum0instance * hicum0instances;  /* pointer to list of instances that have this model */
  IFuid hicum0modName;         /* pointer to the name of this model */

  /* model parameters */  double is;
  unsigned is_Given  :1;  /*is*/
  double mcf;
  unsigned mcf_Given  :1;  /*mcf*/
  double mcr;
  unsigned mcr_Given  :1;  /*mcr*/
  double vef;
  unsigned vef_Given  :1;  /*vef*/
  double iqf;
  unsigned iqf_Given  :1;  /*iqf*/
  double iqr;
  unsigned iqr_Given  :1;  /*iqr*/
  double iqfh;
  unsigned iqfh_Given  :1;  /*iqfh*/
  double tfh;
  unsigned tfh_Given  :1;  /*tfh*/
  double ibes;
  unsigned ibes_Given  :1;  /*ibes*/
  double mbe;
  unsigned mbe_Given  :1;  /*mbe*/
  double ires;
  unsigned ires_Given  :1;  /*ires*/
  double mre;
  unsigned mre_Given  :1;  /*mre*/
  double ibcs;
  unsigned ibcs_Given  :1;  /*ibcs*/
  double mbc;
  unsigned mbc_Given  :1;  /*mbc*/
  double cje0;
  unsigned cje0_Given  :1;  /*cje0*/
  double vde;
  unsigned vde_Given  :1;  /*vde*/
  double ze;
  unsigned ze_Given  :1;  /*ze*/
  double aje;
  unsigned aje_Given  :1;  /*aje*/
  double t0;
  unsigned t0_Given  :1;  /*t0*/
  double dt0h;
  unsigned dt0h_Given  :1;
  double tbvl;
  unsigned tbvl_Given  :1;  /*tbvl*/
  double tef0;
  unsigned tef0_Given  :1;  /*tef0*/
  double gte;
  unsigned gte_Given  :1;  /*gte*/
  double thcs;
  unsigned thcs_Given  :1;  /*thcs*/
  double ahc;
  unsigned ahc_Given  :1;  /*ahc*/
  double tr;
  unsigned tr_Given  :1;  /*tr*/
  double rci0;
  unsigned rci0_Given  :1;  /*rci0*/
  double vlim;
  unsigned vlim_Given  :1;  /*vlim*/
  double vpt;
  unsigned vpt_Given  :1;  /*vpt*/
  double vces;
  unsigned vces_Given  :1;  /*vces*/
  double cjci0;
  unsigned cjci0_Given  :1;  /*cjci0*/
  double vdci;
  unsigned vdci_Given  :1;  /*vdci*/
  double zci;
  unsigned zci_Given  :1;  /*zci*/
  double vptci;
  unsigned vptci_Given  :1;  /*vptci*/
  double cjcx0;
  unsigned cjcx0_Given  :1;  /*cjcx0*/
  double vdcx;
  unsigned vdcx_Given  :1;  /*vdcx*/
  double zcx;
  unsigned zcx_Given  :1;  /*zcx*/
  double vptcx;
  unsigned vptcx_Given  :1;  /*vptcx*/
  double fbc;
  unsigned fbc_Given  :1;  /*fbc*/
  double rbi0;
  unsigned rbi0_Given  :1;  /*rbi0*/
  double vr0e;
  unsigned vr0e_Given  :1;  /*vr0e*/
  double vr0c;
  unsigned vr0c_Given  :1;  /*vr0c*/
  double fgeo;
  unsigned fgeo_Given  :1;  /*fgeo*/
  double rbx;
  unsigned rbx_Given  :1;  /*rbx*/
  double rcx;
  unsigned rcx_Given  :1;  /*rcx*/
  double re;
  unsigned re_Given  :1;  /*re*/
  double itss;
  unsigned itss_Given  :1;  /*itss*/
  double msf;
  unsigned msf_Given  :1;  /*msf*/
  double iscs;
  unsigned iscs_Given  :1;  /*iscs*/
  double msc;
  unsigned msc_Given  :1;  /*msc*/
  double cjs0;
  unsigned cjs0_Given  :1;  /*cjs0*/
  double vds;
  unsigned vds_Given  :1;  /*vds*/
  double zs;
  unsigned zs_Given  :1;  /*zs*/
  double vpts;
  unsigned vpts_Given  :1;  /*vpts*/
  double cbcpar;
  unsigned cbcpar_Given  :1;  /*cbcpar*/
  double cbepar;
  unsigned cbepar_Given  :1;  /*cbepar*/
  double eavl;
  unsigned eavl_Given  :1;  /*eavl*/
  double kavl;
  unsigned kavl_Given  :1;  /*kavl*/
  double kf;
  unsigned kf_Given  :1;  /*kf*/
  double af;
  unsigned af_Given  :1;  /*af*/
  double vgb;
  unsigned vgb_Given  :1;  /*vgb*/
  double vge;
  unsigned vge_Given  :1;  /*vge*/
  double vgc;
  unsigned vgc_Given  :1;  /*vgc*/
  double vgs;
  unsigned vgs_Given  :1;  /*vgs*/
  double f1vg;
  unsigned f1vg_Given  :1;  /*f1vg*/
  double f2vg;
  unsigned f2vg_Given  :1;  /*f2vg*/
  double alt0;
  unsigned alt0_Given  :1;  /*alt0*/
  double kt0;
  unsigned kt0_Given  :1;  /*kt0*/
  double zetact;
  unsigned zetact_Given  :1;  /*zetact*/
  double zetabet;
  unsigned zetabet_Given  :1;  /*zetabet*/
  double zetaci;
  unsigned zetaci_Given  :1;  /*zetaci*/
  double alvs;
  unsigned alvs_Given  :1;  /*alvs*/
  double alces;
  unsigned alces_Given  :1;  /*alces*/
  double zetarbi;
  unsigned zetarbi_Given  :1;  /*zetarbi*/
  double zetarbx;
  unsigned zetarbx_Given  :1;  /*zetarbx*/
  double zetarcx;
  unsigned zetarcx_Given  :1;  /*zetarcx*/
  double zetare;
  unsigned zetare_Given  :1;  /*zetare*/
  double alkav;
  unsigned alkav_Given  :1;  /*alkav*/
  double aleav;
  unsigned aleav_Given  :1;  /*aleav*/
  int flsh;
  unsigned flsh_Given  :1;  /*flsh*/
  double rth;
  unsigned rth_Given  :1;  /*rth*/
  double cth;
  unsigned cth_Given  :1;  /*cth*/
  int npn;
  unsigned npn_Given  :1;  /*npn*/
  int pnp;
  unsigned pnp_Given  :1;  /*pnp*/
  double tnom;
  unsigned tnom_Given  :1;  /*tnom*/

  /* variable */  double HICUMtype;
  /*info*/

} hicum0model;
  /* flags */
typedef enum {
  hicum0_model_is,
  hicum0_model_mcf,
  hicum0_model_mcr,
  hicum0_model_vef,
  hicum0_model_iqf,
  hicum0_model_iqr,
  hicum0_model_iqfh,
  hicum0_model_tfh,
  hicum0_model_ibes,
  hicum0_model_mbe,
  hicum0_model_ires,
  hicum0_model_mre,
  hicum0_model_ibcs,
  hicum0_model_mbc,
  hicum0_model_cje0,
  hicum0_model_vde,
  hicum0_model_ze,
  hicum0_model_aje,
  hicum0_model_t0,
  hicum0_model_dt0h,
  hicum0_model_tbvl,
  hicum0_model_tef0,
  hicum0_model_gte,
  hicum0_model_thcs,
  hicum0_model_ahc,
  hicum0_model_tr,
  hicum0_model_rci0,
  hicum0_model_vlim,
  hicum0_model_vpt,
  hicum0_model_vces,
  hicum0_model_cjci0,
  hicum0_model_vdci,
  hicum0_model_zci,
  hicum0_model_vptci,
  hicum0_model_cjcx0,
  hicum0_model_vdcx,
  hicum0_model_zcx,
  hicum0_model_vptcx,
  hicum0_model_fbc,
  hicum0_model_rbi0,
  hicum0_model_vr0e,
  hicum0_model_vr0c,
  hicum0_model_fgeo,
  hicum0_model_rbx,
  hicum0_model_rcx,
  hicum0_model_re,
  hicum0_model_itss,
  hicum0_model_msf,
  hicum0_model_iscs,
  hicum0_model_msc,
  hicum0_model_cjs0,
  hicum0_model_vds,
  hicum0_model_zs,
  hicum0_model_vpts,
  hicum0_model_cbcpar,
  hicum0_model_cbepar,
  hicum0_model_eavl,
  hicum0_model_kavl,
  hicum0_model_kf,
  hicum0_model_af,
  hicum0_model_vgb,
  hicum0_model_vge,
  hicum0_model_vgc,
  hicum0_model_vgs,
  hicum0_model_f1vg,
  hicum0_model_f2vg,
  hicum0_model_alt0,
  hicum0_model_kt0,
  hicum0_model_zetact,
  hicum0_model_zetabet,
  hicum0_model_zetaci,
  hicum0_model_alvs,
  hicum0_model_alces,
  hicum0_model_zetarbi,
  hicum0_model_zetarbx,
  hicum0_model_zetarcx,
  hicum0_model_zetare,
  hicum0_model_alkav,
  hicum0_model_aleav,
  hicum0_model_flsh,
  hicum0_model_rth,
  hicum0_model_cth,
  hicum0_model_npn,
  hicum0_model_pnp,
  hicum0_model_tnom,
  DUMMY_MODEL
} e_hicum0_model;
typedef enum {
  hicum0_instance_dt,
  DUMMY_INSTANCE
} e_hicum0_instance;


#include "hicum0ext.h"

#endif /*hicum0*/
