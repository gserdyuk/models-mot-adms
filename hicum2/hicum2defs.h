/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:36 ***/


#ifndef hicum2
#define hicum2

#include "cktdefs.h"
#include "ifsim.h"
#include "gendefs.h"
#include "complex.h"
#include "noisedef.h"

#ifdef pnp
  #warning conflict: pnp is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'pnp' is also defined as a pragma.
  #warning conflict: Pragma 'pnp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pnp' in module 'hicum2'.
  #undef pnp
#endif
#ifdef npn
  #warning conflict: npn is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'npn' is also defined as a pragma.
  #warning conflict: Pragma 'npn' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'npn' in module 'hicum2'.
  #undef npn
#endif
#ifdef c10
  #warning conflict: c10 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'c10' is also defined as a pragma.
  #warning conflict: Pragma 'c10' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'c10' in module 'hicum2'.
  #undef c10
#endif
#ifdef qp0
  #warning conflict: qp0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'qp0' is also defined as a pragma.
  #warning conflict: Pragma 'qp0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qp0' in module 'hicum2'.
  #undef qp0
#endif
#ifdef ich
  #warning conflict: ich is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ich' is also defined as a pragma.
  #warning conflict: Pragma 'ich' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ich' in module 'hicum2'.
  #undef ich
#endif
#ifdef hfe
  #warning conflict: hfe is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'hfe' is also defined as a pragma.
  #warning conflict: Pragma 'hfe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'hfe' in module 'hicum2'.
  #undef hfe
#endif
#ifdef hfc
  #warning conflict: hfc is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'hfc' is also defined as a pragma.
  #warning conflict: Pragma 'hfc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'hfc' in module 'hicum2'.
  #undef hfc
#endif
#ifdef hjei
  #warning conflict: hjei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'hjei' is also defined as a pragma.
  #warning conflict: Pragma 'hjei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'hjei' in module 'hicum2'.
  #undef hjei
#endif
#ifdef hjci
  #warning conflict: hjci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'hjci' is also defined as a pragma.
  #warning conflict: Pragma 'hjci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'hjci' in module 'hicum2'.
  #undef hjci
#endif
#ifdef ibeis
  #warning conflict: ibeis is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibeis' is also defined as a pragma.
  #warning conflict: Pragma 'ibeis' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibeis' in module 'hicum2'.
  #undef ibeis
#endif
#ifdef mbei
  #warning conflict: mbei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'mbei' is also defined as a pragma.
  #warning conflict: Pragma 'mbei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mbei' in module 'hicum2'.
  #undef mbei
#endif
#ifdef ireis
  #warning conflict: ireis is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ireis' is also defined as a pragma.
  #warning conflict: Pragma 'ireis' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ireis' in module 'hicum2'.
  #undef ireis
#endif
#ifdef mrei
  #warning conflict: mrei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'mrei' is also defined as a pragma.
  #warning conflict: Pragma 'mrei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mrei' in module 'hicum2'.
  #undef mrei
#endif
#ifdef ibeps
  #warning conflict: ibeps is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibeps' is also defined as a pragma.
  #warning conflict: Pragma 'ibeps' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibeps' in module 'hicum2'.
  #undef ibeps
#endif
#ifdef mbep
  #warning conflict: mbep is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'mbep' is also defined as a pragma.
  #warning conflict: Pragma 'mbep' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mbep' in module 'hicum2'.
  #undef mbep
#endif
#ifdef ireps
  #warning conflict: ireps is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ireps' is also defined as a pragma.
  #warning conflict: Pragma 'ireps' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ireps' in module 'hicum2'.
  #undef ireps
#endif
#ifdef mrep
  #warning conflict: mrep is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'mrep' is also defined as a pragma.
  #warning conflict: Pragma 'mrep' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mrep' in module 'hicum2'.
  #undef mrep
#endif
#ifdef mcf
  #warning conflict: mcf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'mcf' is also defined as a pragma.
  #warning conflict: Pragma 'mcf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mcf' in module 'hicum2'.
  #undef mcf
#endif
#ifdef tbhrec
  #warning conflict: tbhrec is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'tbhrec' is also defined as a pragma.
  #warning conflict: Pragma 'tbhrec' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tbhrec' in module 'hicum2'.
  #undef tbhrec
#endif
#ifdef ibcis
  #warning conflict: ibcis is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibcis' is also defined as a pragma.
  #warning conflict: Pragma 'ibcis' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibcis' in module 'hicum2'.
  #undef ibcis
#endif
#ifdef mbci
  #warning conflict: mbci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'mbci' is also defined as a pragma.
  #warning conflict: Pragma 'mbci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mbci' in module 'hicum2'.
  #undef mbci
#endif
#ifdef ibcxs
  #warning conflict: ibcxs is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibcxs' is also defined as a pragma.
  #warning conflict: Pragma 'ibcxs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibcxs' in module 'hicum2'.
  #undef ibcxs
#endif
#ifdef mbcx
  #warning conflict: mbcx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'mbcx' is also defined as a pragma.
  #warning conflict: Pragma 'mbcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mbcx' in module 'hicum2'.
  #undef mbcx
#endif
#ifdef ibets
  #warning conflict: ibets is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibets' is also defined as a pragma.
  #warning conflict: Pragma 'ibets' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibets' in module 'hicum2'.
  #undef ibets
#endif
#ifdef abet
  #warning conflict: abet is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'abet' is also defined as a pragma.
  #warning conflict: Pragma 'abet' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'abet' in module 'hicum2'.
  #undef abet
#endif
#ifdef tunode
  #warning conflict: tunode is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'tunode' is also defined as a pragma.
  #warning conflict: Pragma 'tunode' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tunode' in module 'hicum2'.
  #undef tunode
#endif
#ifdef favl
  #warning conflict: favl is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'favl' is also defined as a pragma.
  #warning conflict: Pragma 'favl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'favl' in module 'hicum2'.
  #undef favl
#endif
#ifdef qavl
  #warning conflict: qavl is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'qavl' is also defined as a pragma.
  #warning conflict: Pragma 'qavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qavl' in module 'hicum2'.
  #undef qavl
#endif
#ifdef alfav
  #warning conflict: alfav is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'alfav' is also defined as a pragma.
  #warning conflict: Pragma 'alfav' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alfav' in module 'hicum2'.
  #undef alfav
#endif
#ifdef alqav
  #warning conflict: alqav is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'alqav' is also defined as a pragma.
  #warning conflict: Pragma 'alqav' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alqav' in module 'hicum2'.
  #undef alqav
#endif
#ifdef rbi0
  #warning conflict: rbi0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'rbi0' is also defined as a pragma.
  #warning conflict: Pragma 'rbi0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rbi0' in module 'hicum2'.
  #undef rbi0
#endif
#ifdef rbx
  #warning conflict: rbx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'rbx' is also defined as a pragma.
  #warning conflict: Pragma 'rbx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rbx' in module 'hicum2'.
  #undef rbx
#endif
#ifdef fgeo
  #warning conflict: fgeo is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'fgeo' is also defined as a pragma.
  #warning conflict: Pragma 'fgeo' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fgeo' in module 'hicum2'.
  #undef fgeo
#endif
#ifdef fdqr0
  #warning conflict: fdqr0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'fdqr0' is also defined as a pragma.
  #warning conflict: Pragma 'fdqr0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fdqr0' in module 'hicum2'.
  #undef fdqr0
#endif
#ifdef fcrbi
  #warning conflict: fcrbi is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'fcrbi' is also defined as a pragma.
  #warning conflict: Pragma 'fcrbi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fcrbi' in module 'hicum2'.
  #undef fcrbi
#endif
#ifdef fqi
  #warning conflict: fqi is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'fqi' is also defined as a pragma.
  #warning conflict: Pragma 'fqi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fqi' in module 'hicum2'.
  #undef fqi
#endif
#ifdef re
  #warning conflict: re is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 're' is also defined as a pragma.
  #warning conflict: Pragma 're' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 're' in module 'hicum2'.
  #undef re
#endif
#ifdef rcx
  #warning conflict: rcx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'rcx' is also defined as a pragma.
  #warning conflict: Pragma 'rcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rcx' in module 'hicum2'.
  #undef rcx
#endif
#ifdef itss
  #warning conflict: itss is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'itss' is also defined as a pragma.
  #warning conflict: Pragma 'itss' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itss' in module 'hicum2'.
  #undef itss
#endif
#ifdef msf
  #warning conflict: msf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'msf' is also defined as a pragma.
  #warning conflict: Pragma 'msf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'msf' in module 'hicum2'.
  #undef msf
#endif
#ifdef iscs
  #warning conflict: iscs is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'iscs' is also defined as a pragma.
  #warning conflict: Pragma 'iscs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iscs' in module 'hicum2'.
  #undef iscs
#endif
#ifdef msc
  #warning conflict: msc is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'msc' is also defined as a pragma.
  #warning conflict: Pragma 'msc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'msc' in module 'hicum2'.
  #undef msc
#endif
#ifdef tsf
  #warning conflict: tsf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'tsf' is also defined as a pragma.
  #warning conflict: Pragma 'tsf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tsf' in module 'hicum2'.
  #undef tsf
#endif
#ifdef rsu
  #warning conflict: rsu is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'rsu' is also defined as a pragma.
  #warning conflict: Pragma 'rsu' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rsu' in module 'hicum2'.
  #undef rsu
#endif
#ifdef csu
  #warning conflict: csu is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'csu' is also defined as a pragma.
  #warning conflict: Pragma 'csu' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'csu' in module 'hicum2'.
  #undef csu
#endif
#ifdef cjei0
  #warning conflict: cjei0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjei0' is also defined as a pragma.
  #warning conflict: Pragma 'cjei0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjei0' in module 'hicum2'.
  #undef cjei0
#endif
#ifdef vdei
  #warning conflict: vdei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vdei' is also defined as a pragma.
  #warning conflict: Pragma 'vdei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdei' in module 'hicum2'.
  #undef vdei
#endif
#ifdef zei
  #warning conflict: zei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zei' is also defined as a pragma.
  #warning conflict: Pragma 'zei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zei' in module 'hicum2'.
  #undef zei
#endif
#ifdef ajei
  #warning conflict: ajei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ajei' is also defined as a pragma.
  #warning conflict: Pragma 'ajei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ajei' in module 'hicum2'.
  #undef ajei
#endif
#ifdef cjep0
  #warning conflict: cjep0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjep0' is also defined as a pragma.
  #warning conflict: Pragma 'cjep0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjep0' in module 'hicum2'.
  #undef cjep0
#endif
#ifdef vdep
  #warning conflict: vdep is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vdep' is also defined as a pragma.
  #warning conflict: Pragma 'vdep' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdep' in module 'hicum2'.
  #undef vdep
#endif
#ifdef zep
  #warning conflict: zep is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zep' is also defined as a pragma.
  #warning conflict: Pragma 'zep' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zep' in module 'hicum2'.
  #undef zep
#endif
#ifdef ajep
  #warning conflict: ajep is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ajep' is also defined as a pragma.
  #warning conflict: Pragma 'ajep' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ajep' in module 'hicum2'.
  #undef ajep
#endif
#ifdef cjci0
  #warning conflict: cjci0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjci0' is also defined as a pragma.
  #warning conflict: Pragma 'cjci0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjci0' in module 'hicum2'.
  #undef cjci0
#endif
#ifdef vdci
  #warning conflict: vdci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vdci' is also defined as a pragma.
  #warning conflict: Pragma 'vdci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdci' in module 'hicum2'.
  #undef vdci
#endif
#ifdef zci
  #warning conflict: zci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zci' is also defined as a pragma.
  #warning conflict: Pragma 'zci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zci' in module 'hicum2'.
  #undef zci
#endif
#ifdef vptci
  #warning conflict: vptci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vptci' is also defined as a pragma.
  #warning conflict: Pragma 'vptci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vptci' in module 'hicum2'.
  #undef vptci
#endif
#ifdef cjcx0
  #warning conflict: cjcx0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjcx0' is also defined as a pragma.
  #warning conflict: Pragma 'cjcx0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjcx0' in module 'hicum2'.
  #undef cjcx0
#endif
#ifdef vdcx
  #warning conflict: vdcx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vdcx' is also defined as a pragma.
  #warning conflict: Pragma 'vdcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdcx' in module 'hicum2'.
  #undef vdcx
#endif
#ifdef zcx
  #warning conflict: zcx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zcx' is also defined as a pragma.
  #warning conflict: Pragma 'zcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zcx' in module 'hicum2'.
  #undef zcx
#endif
#ifdef vptcx
  #warning conflict: vptcx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vptcx' is also defined as a pragma.
  #warning conflict: Pragma 'vptcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vptcx' in module 'hicum2'.
  #undef vptcx
#endif
#ifdef fbcpar
  #warning conflict: fbcpar is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'fbcpar' is also defined as a pragma.
  #warning conflict: Pragma 'fbcpar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fbcpar' in module 'hicum2'.
  #undef fbcpar
#endif
#ifdef fbepar
  #warning conflict: fbepar is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'fbepar' is also defined as a pragma.
  #warning conflict: Pragma 'fbepar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fbepar' in module 'hicum2'.
  #undef fbepar
#endif
#ifdef cjs0
  #warning conflict: cjs0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjs0' is also defined as a pragma.
  #warning conflict: Pragma 'cjs0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjs0' in module 'hicum2'.
  #undef cjs0
#endif
#ifdef vds
  #warning conflict: vds is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vds' is also defined as a pragma.
  #warning conflict: Pragma 'vds' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vds' in module 'hicum2'.
  #undef vds
#endif
#ifdef zs
  #warning conflict: zs is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zs' is also defined as a pragma.
  #warning conflict: Pragma 'zs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zs' in module 'hicum2'.
  #undef zs
#endif
#ifdef vpts
  #warning conflict: vpts is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vpts' is also defined as a pragma.
  #warning conflict: Pragma 'vpts' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vpts' in module 'hicum2'.
  #undef vpts
#endif
#ifdef t0
  #warning conflict: t0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 't0' is also defined as a pragma.
  #warning conflict: Pragma 't0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 't0' in module 'hicum2'.
  #undef t0
#endif
#ifdef dt0h
  #warning conflict: dt0h is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'dt0h' is also defined as a pragma.
  #warning conflict: Pragma 'dt0h' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dt0h' in module 'hicum2'.
  #undef dt0h
#endif
#ifdef tbvl
  #warning conflict: tbvl is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'tbvl' is also defined as a pragma.
  #warning conflict: Pragma 'tbvl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tbvl' in module 'hicum2'.
  #undef tbvl
#endif
#ifdef tef0
  #warning conflict: tef0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'tef0' is also defined as a pragma.
  #warning conflict: Pragma 'tef0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tef0' in module 'hicum2'.
  #undef tef0
#endif
#ifdef gtfe
  #warning conflict: gtfe is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'gtfe' is also defined as a pragma.
  #warning conflict: Pragma 'gtfe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gtfe' in module 'hicum2'.
  #undef gtfe
#endif
#ifdef thcs
  #warning conflict: thcs is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'thcs' is also defined as a pragma.
  #warning conflict: Pragma 'thcs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'thcs' in module 'hicum2'.
  #undef thcs
#endif
#ifdef ahc
  #warning conflict: ahc is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ahc' is also defined as a pragma.
  #warning conflict: Pragma 'ahc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ahc' in module 'hicum2'.
  #undef ahc
#endif
#ifdef fthc
  #warning conflict: fthc is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'fthc' is also defined as a pragma.
  #warning conflict: Pragma 'fthc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fthc' in module 'hicum2'.
  #undef fthc
#endif
#ifdef rci0
  #warning conflict: rci0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'rci0' is also defined as a pragma.
  #warning conflict: Pragma 'rci0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rci0' in module 'hicum2'.
  #undef rci0
#endif
#ifdef vlim
  #warning conflict: vlim is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vlim' is also defined as a pragma.
  #warning conflict: Pragma 'vlim' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vlim' in module 'hicum2'.
  #undef vlim
#endif
#ifdef vces
  #warning conflict: vces is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vces' is also defined as a pragma.
  #warning conflict: Pragma 'vces' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vces' in module 'hicum2'.
  #undef vces
#endif
#ifdef vpt
  #warning conflict: vpt is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vpt' is also defined as a pragma.
  #warning conflict: Pragma 'vpt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vpt' in module 'hicum2'.
  #undef vpt
#endif
#ifdef tr
  #warning conflict: tr is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'tr' is also defined as a pragma.
  #warning conflict: Pragma 'tr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tr' in module 'hicum2'.
  #undef tr
#endif
#ifdef cbepar
  #warning conflict: cbepar is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cbepar' is also defined as a pragma.
  #warning conflict: Pragma 'cbepar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbepar' in module 'hicum2'.
  #undef cbepar
#endif
#ifdef cbcpar
  #warning conflict: cbcpar is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cbcpar' is also defined as a pragma.
  #warning conflict: Pragma 'cbcpar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbcpar' in module 'hicum2'.
  #undef cbcpar
#endif
#ifdef alqf
  #warning conflict: alqf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'alqf' is also defined as a pragma.
  #warning conflict: Pragma 'alqf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alqf' in module 'hicum2'.
  #undef alqf
#endif
#ifdef alit
  #warning conflict: alit is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'alit' is also defined as a pragma.
  #warning conflict: Pragma 'alit' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alit' in module 'hicum2'.
  #undef alit
#endif
#ifdef flnqs
  #warning conflict: flnqs is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'flnqs' is also defined as a pragma.
  #warning conflict: Pragma 'flnqs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'flnqs' in module 'hicum2'.
  #undef flnqs
#endif
#ifdef kf
  #warning conflict: kf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'kf' is also defined as a pragma.
  #warning conflict: Pragma 'kf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'kf' in module 'hicum2'.
  #undef kf
#endif
#ifdef af
  #warning conflict: af is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'af' is also defined as a pragma.
  #warning conflict: Pragma 'af' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'af' in module 'hicum2'.
  #undef af
#endif
#ifdef cfbe
  #warning conflict: cfbe is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cfbe' is also defined as a pragma.
  #warning conflict: Pragma 'cfbe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cfbe' in module 'hicum2'.
  #undef cfbe
#endif
#ifdef latb
  #warning conflict: latb is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'latb' is also defined as a pragma.
  #warning conflict: Pragma 'latb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'latb' in module 'hicum2'.
  #undef latb
#endif
#ifdef latl
  #warning conflict: latl is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'latl' is also defined as a pragma.
  #warning conflict: Pragma 'latl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'latl' in module 'hicum2'.
  #undef latl
#endif
#ifdef vgb
  #warning conflict: vgb is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vgb' is also defined as a pragma.
  #warning conflict: Pragma 'vgb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgb' in module 'hicum2'.
  #undef vgb
#endif
#ifdef alt0
  #warning conflict: alt0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'alt0' is also defined as a pragma.
  #warning conflict: Pragma 'alt0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alt0' in module 'hicum2'.
  #undef alt0
#endif
#ifdef kt0
  #warning conflict: kt0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'kt0' is also defined as a pragma.
  #warning conflict: Pragma 'kt0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'kt0' in module 'hicum2'.
  #undef kt0
#endif
#ifdef zetaci
  #warning conflict: zetaci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetaci' is also defined as a pragma.
  #warning conflict: Pragma 'zetaci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetaci' in module 'hicum2'.
  #undef zetaci
#endif
#ifdef alvs
  #warning conflict: alvs is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'alvs' is also defined as a pragma.
  #warning conflict: Pragma 'alvs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alvs' in module 'hicum2'.
  #undef alvs
#endif
#ifdef alces
  #warning conflict: alces is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'alces' is also defined as a pragma.
  #warning conflict: Pragma 'alces' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alces' in module 'hicum2'.
  #undef alces
#endif
#ifdef zetarbi
  #warning conflict: zetarbi is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetarbi' is also defined as a pragma.
  #warning conflict: Pragma 'zetarbi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetarbi' in module 'hicum2'.
  #undef zetarbi
#endif
#ifdef zetarbx
  #warning conflict: zetarbx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetarbx' is also defined as a pragma.
  #warning conflict: Pragma 'zetarbx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetarbx' in module 'hicum2'.
  #undef zetarbx
#endif
#ifdef zetarcx
  #warning conflict: zetarcx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetarcx' is also defined as a pragma.
  #warning conflict: Pragma 'zetarcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetarcx' in module 'hicum2'.
  #undef zetarcx
#endif
#ifdef zetare
  #warning conflict: zetare is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetare' is also defined as a pragma.
  #warning conflict: Pragma 'zetare' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetare' in module 'hicum2'.
  #undef zetare
#endif
#ifdef zetacx
  #warning conflict: zetacx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetacx' is also defined as a pragma.
  #warning conflict: Pragma 'zetacx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetacx' in module 'hicum2'.
  #undef zetacx
#endif
#ifdef vge
  #warning conflict: vge is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vge' is also defined as a pragma.
  #warning conflict: Pragma 'vge' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vge' in module 'hicum2'.
  #undef vge
#endif
#ifdef vgc
  #warning conflict: vgc is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vgc' is also defined as a pragma.
  #warning conflict: Pragma 'vgc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgc' in module 'hicum2'.
  #undef vgc
#endif
#ifdef vgs
  #warning conflict: vgs is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vgs' is also defined as a pragma.
  #warning conflict: Pragma 'vgs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgs' in module 'hicum2'.
  #undef vgs
#endif
#ifdef f1vg
  #warning conflict: f1vg is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'f1vg' is also defined as a pragma.
  #warning conflict: Pragma 'f1vg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'f1vg' in module 'hicum2'.
  #undef f1vg
#endif
#ifdef f2vg
  #warning conflict: f2vg is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'f2vg' is also defined as a pragma.
  #warning conflict: Pragma 'f2vg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'f2vg' in module 'hicum2'.
  #undef f2vg
#endif
#ifdef zetact
  #warning conflict: zetact is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetact' is also defined as a pragma.
  #warning conflict: Pragma 'zetact' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetact' in module 'hicum2'.
  #undef zetact
#endif
#ifdef zetabet
  #warning conflict: zetabet is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetabet' is also defined as a pragma.
  #warning conflict: Pragma 'zetabet' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetabet' in module 'hicum2'.
  #undef zetabet
#endif
#ifdef alb
  #warning conflict: alb is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'alb' is also defined as a pragma.
  #warning conflict: Pragma 'alb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alb' in module 'hicum2'.
  #undef alb
#endif
#ifdef flsh
  #warning conflict: flsh is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'flsh' is also defined as a pragma.
  #warning conflict: Pragma 'flsh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'flsh' in module 'hicum2'.
  #undef flsh
#endif
#ifdef rth
  #warning conflict: rth is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'rth' is also defined as a pragma.
  #warning conflict: Pragma 'rth' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rth' in module 'hicum2'.
  #undef rth
#endif
#ifdef cth
  #warning conflict: cth is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cth' is also defined as a pragma.
  #warning conflict: Pragma 'cth' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cth' in module 'hicum2'.
  #undef cth
#endif
#ifdef flcomp
  #warning conflict: flcomp is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'flcomp' is also defined as a pragma.
  #warning conflict: Pragma 'flcomp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'flcomp' in module 'hicum2'.
  #undef flcomp
#endif
#ifdef tnom
  #warning conflict: tnom is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'tnom' is also defined as a pragma.
  #warning conflict: Pragma 'tnom' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tnom' in module 'hicum2'.
  #undef tnom
#endif
#ifdef dt
  #warning conflict: dt is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'dt' is also defined as a pragma.
  #warning conflict: Pragma 'dt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dt' in module 'hicum2'.
  #undef dt
#endif
#ifdef _circuit_gmin
  #warning conflict: _circuit_gmin is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice '_circuit_gmin' is also defined as a pragma.
  #warning conflict: Pragma '_circuit_gmin' will be undefined.
  #warning conflict: You can solve the confict by renaming variable '_circuit_gmin' in module 'hicum2'.
  #undef _circuit_gmin
#endif
#ifdef VT
  #warning conflict: VT is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'VT' is also defined as a pragma.
  #warning conflict: Pragma 'VT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VT' in module 'hicum2'.
  #undef VT
#endif
#ifdef Tdev
  #warning conflict: Tdev is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Tdev' is also defined as a pragma.
  #warning conflict: Pragma 'Tdev' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tdev' in module 'hicum2'.
  #undef Tdev
#endif
#ifdef qtt0
  #warning conflict: qtt0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'qtt0' is also defined as a pragma.
  #warning conflict: Pragma 'qtt0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qtt0' in module 'hicum2'.
  #undef qtt0
#endif
#ifdef ln_qtt0
  #warning conflict: ln_qtt0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ln_qtt0' is also defined as a pragma.
  #warning conflict: Pragma 'ln_qtt0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ln_qtt0' in module 'hicum2'.
  #undef ln_qtt0
#endif
#ifdef r_VgVT
  #warning conflict: r_VgVT is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'r_VgVT' is also defined as a pragma.
  #warning conflict: Pragma 'r_VgVT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'r_VgVT' in module 'hicum2'.
  #undef r_VgVT
#endif
#ifdef V_gT
  #warning conflict: V_gT is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'V_gT' is also defined as a pragma.
  #warning conflict: Pragma 'V_gT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'V_gT' in module 'hicum2'.
  #undef V_gT
#endif
#ifdef dT
  #warning conflict: dT is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'dT' is also defined as a pragma.
  #warning conflict: Pragma 'dT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dT' in module 'hicum2'.
  #undef dT
#endif
#ifdef k
  #warning conflict: k is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'k' is also defined as a pragma.
  #warning conflict: Pragma 'k' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'k' in module 'hicum2'.
  #undef k
#endif
#ifdef ireis_t
  #warning conflict: ireis_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ireis_t' is also defined as a pragma.
  #warning conflict: Pragma 'ireis_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ireis_t' in module 'hicum2'.
  #undef ireis_t
#endif
#ifdef ibeis_t
  #warning conflict: ibeis_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibeis_t' is also defined as a pragma.
  #warning conflict: Pragma 'ibeis_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibeis_t' in module 'hicum2'.
  #undef ibeis_t
#endif
#ifdef ibcxs_t
  #warning conflict: ibcxs_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibcxs_t' is also defined as a pragma.
  #warning conflict: Pragma 'ibcxs_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibcxs_t' in module 'hicum2'.
  #undef ibcxs_t
#endif
#ifdef ibcis_t
  #warning conflict: ibcis_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibcis_t' is also defined as a pragma.
  #warning conflict: Pragma 'ibcis_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibcis_t' in module 'hicum2'.
  #undef ibcis_t
#endif
#ifdef iscs_t
  #warning conflict: iscs_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'iscs_t' is also defined as a pragma.
  #warning conflict: Pragma 'iscs_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iscs_t' in module 'hicum2'.
  #undef iscs_t
#endif
#ifdef cjci0_t
  #warning conflict: cjci0_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjci0_t' is also defined as a pragma.
  #warning conflict: Pragma 'cjci0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjci0_t' in module 'hicum2'.
  #undef cjci0_t
#endif
#ifdef cjs0_t
  #warning conflict: cjs0_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjs0_t' is also defined as a pragma.
  #warning conflict: Pragma 'cjs0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjs0_t' in module 'hicum2'.
  #undef cjs0_t
#endif
#ifdef rci0_t
  #warning conflict: rci0_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'rci0_t' is also defined as a pragma.
  #warning conflict: Pragma 'rci0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rci0_t' in module 'hicum2'.
  #undef rci0_t
#endif
#ifdef vlim_t
  #warning conflict: vlim_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vlim_t' is also defined as a pragma.
  #warning conflict: Pragma 'vlim_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vlim_t' in module 'hicum2'.
  #undef vlim_t
#endif
#ifdef vces_t
  #warning conflict: vces_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vces_t' is also defined as a pragma.
  #warning conflict: Pragma 'vces_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vces_t' in module 'hicum2'.
  #undef vces_t
#endif
#ifdef thcs_t
  #warning conflict: thcs_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'thcs_t' is also defined as a pragma.
  #warning conflict: Pragma 'thcs_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'thcs_t' in module 'hicum2'.
  #undef thcs_t
#endif
#ifdef tef0_t
  #warning conflict: tef0_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'tef0_t' is also defined as a pragma.
  #warning conflict: Pragma 'tef0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tef0_t' in module 'hicum2'.
  #undef tef0_t
#endif
#ifdef rbi0_t
  #warning conflict: rbi0_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'rbi0_t' is also defined as a pragma.
  #warning conflict: Pragma 'rbi0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rbi0_t' in module 'hicum2'.
  #undef rbi0_t
#endif
#ifdef rbx_t
  #warning conflict: rbx_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'rbx_t' is also defined as a pragma.
  #warning conflict: Pragma 'rbx_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rbx_t' in module 'hicum2'.
  #undef rbx_t
#endif
#ifdef rcx_t
  #warning conflict: rcx_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'rcx_t' is also defined as a pragma.
  #warning conflict: Pragma 'rcx_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rcx_t' in module 'hicum2'.
  #undef rcx_t
#endif
#ifdef re_t
  #warning conflict: re_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 're_t' is also defined as a pragma.
  #warning conflict: Pragma 're_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 're_t' in module 'hicum2'.
  #undef re_t
#endif
#ifdef t0_t
  #warning conflict: t0_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 't0_t' is also defined as a pragma.
  #warning conflict: Pragma 't0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 't0_t' in module 'hicum2'.
  #undef t0_t
#endif
#ifdef vdei_t
  #warning conflict: vdei_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vdei_t' is also defined as a pragma.
  #warning conflict: Pragma 'vdei_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdei_t' in module 'hicum2'.
  #undef vdei_t
#endif
#ifdef vdci_t
  #warning conflict: vdci_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vdci_t' is also defined as a pragma.
  #warning conflict: Pragma 'vdci_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdci_t' in module 'hicum2'.
  #undef vdci_t
#endif
#ifdef vpts_t
  #warning conflict: vpts_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vpts_t' is also defined as a pragma.
  #warning conflict: Pragma 'vpts_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vpts_t' in module 'hicum2'.
  #undef vpts_t
#endif
#ifdef itss_t
  #warning conflict: itss_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'itss_t' is also defined as a pragma.
  #warning conflict: Pragma 'itss_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itss_t' in module 'hicum2'.
  #undef itss_t
#endif
#ifdef tsf_t
  #warning conflict: tsf_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'tsf_t' is also defined as a pragma.
  #warning conflict: Pragma 'tsf_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tsf_t' in module 'hicum2'.
  #undef tsf_t
#endif
#ifdef c10_t
  #warning conflict: c10_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'c10_t' is also defined as a pragma.
  #warning conflict: Pragma 'c10_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'c10_t' in module 'hicum2'.
  #undef c10_t
#endif
#ifdef cjei0_t
  #warning conflict: cjei0_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjei0_t' is also defined as a pragma.
  #warning conflict: Pragma 'cjei0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjei0_t' in module 'hicum2'.
  #undef cjei0_t
#endif
#ifdef qp0_t
  #warning conflict: qp0_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'qp0_t' is also defined as a pragma.
  #warning conflict: Pragma 'qp0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qp0_t' in module 'hicum2'.
  #undef qp0_t
#endif
#ifdef vdcx_t
  #warning conflict: vdcx_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vdcx_t' is also defined as a pragma.
  #warning conflict: Pragma 'vdcx_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdcx_t' in module 'hicum2'.
  #undef vdcx_t
#endif
#ifdef vptcx_t
  #warning conflict: vptcx_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vptcx_t' is also defined as a pragma.
  #warning conflict: Pragma 'vptcx_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vptcx_t' in module 'hicum2'.
  #undef vptcx_t
#endif
#ifdef cjcx01_t
  #warning conflict: cjcx01_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjcx01_t' is also defined as a pragma.
  #warning conflict: Pragma 'cjcx01_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjcx01_t' in module 'hicum2'.
  #undef cjcx01_t
#endif
#ifdef cjcx02_t
  #warning conflict: cjcx02_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjcx02_t' is also defined as a pragma.
  #warning conflict: Pragma 'cjcx02_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjcx02_t' in module 'hicum2'.
  #undef cjcx02_t
#endif
#ifdef qjcx0_t_i
  #warning conflict: qjcx0_t_i is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'qjcx0_t_i' is also defined as a pragma.
  #warning conflict: Pragma 'qjcx0_t_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qjcx0_t_i' in module 'hicum2'.
  #undef qjcx0_t_i
#endif
#ifdef qjcx0_t_ii
  #warning conflict: qjcx0_t_ii is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'qjcx0_t_ii' is also defined as a pragma.
  #warning conflict: Pragma 'qjcx0_t_ii' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qjcx0_t_ii' in module 'hicum2'.
  #undef qjcx0_t_ii
#endif
#ifdef cratio_t
  #warning conflict: cratio_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cratio_t' is also defined as a pragma.
  #warning conflict: Pragma 'cratio_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cratio_t' in module 'hicum2'.
  #undef cratio_t
#endif
#ifdef ibeps_t
  #warning conflict: ibeps_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibeps_t' is also defined as a pragma.
  #warning conflict: Pragma 'ibeps_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibeps_t' in module 'hicum2'.
  #undef ibeps_t
#endif
#ifdef ireps_t
  #warning conflict: ireps_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ireps_t' is also defined as a pragma.
  #warning conflict: Pragma 'ireps_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ireps_t' in module 'hicum2'.
  #undef ireps_t
#endif
#ifdef cjep0_t
  #warning conflict: cjep0_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjep0_t' is also defined as a pragma.
  #warning conflict: Pragma 'cjep0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjep0_t' in module 'hicum2'.
  #undef cjep0_t
#endif
#ifdef ajei_t
  #warning conflict: ajei_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ajei_t' is also defined as a pragma.
  #warning conflict: Pragma 'ajei_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ajei_t' in module 'hicum2'.
  #undef ajei_t
#endif
#ifdef qavl_t
  #warning conflict: qavl_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'qavl_t' is also defined as a pragma.
  #warning conflict: Pragma 'qavl_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qavl_t' in module 'hicum2'.
  #undef qavl_t
#endif
#ifdef favl_t
  #warning conflict: favl_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'favl_t' is also defined as a pragma.
  #warning conflict: Pragma 'favl_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'favl_t' in module 'hicum2'.
  #undef favl_t
#endif
#ifdef ibets_t
  #warning conflict: ibets_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibets_t' is also defined as a pragma.
  #warning conflict: Pragma 'ibets_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibets_t' in module 'hicum2'.
  #undef ibets_t
#endif
#ifdef abet_t
  #warning conflict: abet_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'abet_t' is also defined as a pragma.
  #warning conflict: Pragma 'abet_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'abet_t' in module 'hicum2'.
  #undef abet_t
#endif
#ifdef vptci_t
  #warning conflict: vptci_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vptci_t' is also defined as a pragma.
  #warning conflict: Pragma 'vptci_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vptci_t' in module 'hicum2'.
  #undef vptci_t
#endif
#ifdef vdep_t
  #warning conflict: vdep_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vdep_t' is also defined as a pragma.
  #warning conflict: Pragma 'vdep_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdep_t' in module 'hicum2'.
  #undef vdep_t
#endif
#ifdef ajep_t
  #warning conflict: ajep_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ajep_t' is also defined as a pragma.
  #warning conflict: Pragma 'ajep_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ajep_t' in module 'hicum2'.
  #undef ajep_t
#endif
#ifdef zetatef
  #warning conflict: zetatef is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetatef' is also defined as a pragma.
  #warning conflict: Pragma 'zetatef' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetatef' in module 'hicum2'.
  #undef zetatef
#endif
#ifdef k1
  #warning conflict: k1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'k1' is also defined as a pragma.
  #warning conflict: Pragma 'k1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'k1' in module 'hicum2'.
  #undef k1
#endif
#ifdef k2
  #warning conflict: k2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'k2' is also defined as a pragma.
  #warning conflict: Pragma 'k2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'k2' in module 'hicum2'.
  #undef k2
#endif
#ifdef dvg0
  #warning conflict: dvg0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'dvg0' is also defined as a pragma.
  #warning conflict: Pragma 'dvg0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dvg0' in module 'hicum2'.
  #undef dvg0
#endif
#ifdef vge_t
  #warning conflict: vge_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vge_t' is also defined as a pragma.
  #warning conflict: Pragma 'vge_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vge_t' in module 'hicum2'.
  #undef vge_t
#endif
#ifdef vgb_t
  #warning conflict: vgb_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vgb_t' is also defined as a pragma.
  #warning conflict: Pragma 'vgb_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgb_t' in module 'hicum2'.
  #undef vgb_t
#endif
#ifdef vgbe_t
  #warning conflict: vgbe_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vgbe_t' is also defined as a pragma.
  #warning conflict: Pragma 'vgbe_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgbe_t' in module 'hicum2'.
  #undef vgbe_t
#endif
#ifdef vds_t
  #warning conflict: vds_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vds_t' is also defined as a pragma.
  #warning conflict: Pragma 'vds_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vds_t' in module 'hicum2'.
  #undef vds_t
#endif
#ifdef vt0
  #warning conflict: vt0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vt0' is also defined as a pragma.
  #warning conflict: Pragma 'vt0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vt0' in module 'hicum2'.
  #undef vt0
#endif
#ifdef Tnom
  #warning conflict: Tnom is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Tnom' is also defined as a pragma.
  #warning conflict: Pragma 'Tnom' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tnom' in module 'hicum2'.
  #undef Tnom
#endif
#ifdef Tamb
  #warning conflict: Tamb is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Tamb' is also defined as a pragma.
  #warning conflict: Pragma 'Tamb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tamb' in module 'hicum2'.
  #undef Tamb
#endif
#ifdef a
  #warning conflict: a is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'a' is also defined as a pragma.
  #warning conflict: Pragma 'a' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'a' in module 'hicum2'.
  #undef a
#endif
#ifdef avs
  #warning conflict: avs is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'avs' is also defined as a pragma.
  #warning conflict: Pragma 'avs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'avs' in module 'hicum2'.
  #undef avs
#endif
#ifdef zetabci
  #warning conflict: zetabci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetabci' is also defined as a pragma.
  #warning conflict: Pragma 'zetabci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetabci' in module 'hicum2'.
  #undef zetabci
#endif
#ifdef zetabcxt
  #warning conflict: zetabcxt is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetabcxt' is also defined as a pragma.
  #warning conflict: Pragma 'zetabcxt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetabcxt' in module 'hicum2'.
  #undef zetabcxt
#endif
#ifdef zetasct
  #warning conflict: zetasct is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zetasct' is also defined as a pragma.
  #warning conflict: Pragma 'zetasct' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zetasct' in module 'hicum2'.
  #undef zetasct
#endif
#ifdef vgbe0
  #warning conflict: vgbe0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vgbe0' is also defined as a pragma.
  #warning conflict: Pragma 'vgbe0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgbe0' in module 'hicum2'.
  #undef vgbe0
#endif
#ifdef mg
  #warning conflict: mg is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'mg' is also defined as a pragma.
  #warning conflict: Pragma 'mg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mg' in module 'hicum2'.
  #undef mg
#endif
#ifdef vgb_t0
  #warning conflict: vgb_t0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vgb_t0' is also defined as a pragma.
  #warning conflict: Pragma 'vgb_t0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgb_t0' in module 'hicum2'.
  #undef vgb_t0
#endif
#ifdef vge_t0
  #warning conflict: vge_t0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vge_t0' is also defined as a pragma.
  #warning conflict: Pragma 'vge_t0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vge_t0' in module 'hicum2'.
  #undef vge_t0
#endif
#ifdef vgbe_t0
  #warning conflict: vgbe_t0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vgbe_t0' is also defined as a pragma.
  #warning conflict: Pragma 'vgbe_t0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgbe_t0' in module 'hicum2'.
  #undef vgbe_t0
#endif
#ifdef vgbc0
  #warning conflict: vgbc0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vgbc0' is also defined as a pragma.
  #warning conflict: Pragma 'vgbc0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgbc0' in module 'hicum2'.
  #undef vgbc0
#endif
#ifdef vgsc0
  #warning conflict: vgsc0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vgsc0' is also defined as a pragma.
  #warning conflict: Pragma 'vgsc0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgsc0' in module 'hicum2'.
  #undef vgsc0
#endif
#ifdef cbcpar1
  #warning conflict: cbcpar1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cbcpar1' is also defined as a pragma.
  #warning conflict: Pragma 'cbcpar1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbcpar1' in module 'hicum2'.
  #undef cbcpar1
#endif
#ifdef cbcpar2
  #warning conflict: cbcpar2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cbcpar2' is also defined as a pragma.
  #warning conflict: Pragma 'cbcpar2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbcpar2' in module 'hicum2'.
  #undef cbcpar2
#endif
#ifdef cbepar2
  #warning conflict: cbepar2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cbepar2' is also defined as a pragma.
  #warning conflict: Pragma 'cbepar2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbepar2' in module 'hicum2'.
  #undef cbepar2
#endif
#ifdef cbepar1
  #warning conflict: cbepar1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cbepar1' is also defined as a pragma.
  #warning conflict: Pragma 'cbepar1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbepar1' in module 'hicum2'.
  #undef cbepar1
#endif
#ifdef Oich
  #warning conflict: Oich is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Oich' is also defined as a pragma.
  #warning conflict: Pragma 'Oich' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Oich' in module 'hicum2'.
  #undef Oich
#endif
#ifdef Ovpt
  #warning conflict: Ovpt is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Ovpt' is also defined as a pragma.
  #warning conflict: Pragma 'Ovpt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ovpt' in module 'hicum2'.
  #undef Ovpt
#endif
#ifdef Otbhrec
  #warning conflict: Otbhrec is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Otbhrec' is also defined as a pragma.
  #warning conflict: Pragma 'Otbhrec' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Otbhrec' in module 'hicum2'.
  #undef Otbhrec
#endif
#ifdef Qjci
  #warning conflict: Qjci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qjci' is also defined as a pragma.
  #warning conflict: Pragma 'Qjci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qjci' in module 'hicum2'.
  #undef Qjci
#endif
#ifdef Qjei
  #warning conflict: Qjei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qjei' is also defined as a pragma.
  #warning conflict: Pragma 'Qjei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qjei' in module 'hicum2'.
  #undef Qjei
#endif
#ifdef Qjep
  #warning conflict: Qjep is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qjep' is also defined as a pragma.
  #warning conflict: Pragma 'Qjep' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qjep' in module 'hicum2'.
  #undef Qjep
#endif
#ifdef it
  #warning conflict: it is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'it' is also defined as a pragma.
  #warning conflict: Pragma 'it' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'it' in module 'hicum2'.
  #undef it
#endif
#ifdef ibei
  #warning conflict: ibei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibei' is also defined as a pragma.
  #warning conflict: Pragma 'ibei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibei' in module 'hicum2'.
  #undef ibei
#endif
#ifdef irei
  #warning conflict: irei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'irei' is also defined as a pragma.
  #warning conflict: Pragma 'irei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'irei' in module 'hicum2'.
  #undef irei
#endif
#ifdef ibci
  #warning conflict: ibci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibci' is also defined as a pragma.
  #warning conflict: Pragma 'ibci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibci' in module 'hicum2'.
  #undef ibci
#endif
#ifdef ibep
  #warning conflict: ibep is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibep' is also defined as a pragma.
  #warning conflict: Pragma 'ibep' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibep' in module 'hicum2'.
  #undef ibep
#endif
#ifdef irep
  #warning conflict: irep is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'irep' is also defined as a pragma.
  #warning conflict: Pragma 'irep' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'irep' in module 'hicum2'.
  #undef irep
#endif
#ifdef ibh_rec
  #warning conflict: ibh_rec is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibh_rec' is also defined as a pragma.
  #warning conflict: Pragma 'ibh_rec' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibh_rec' in module 'hicum2'.
  #undef ibh_rec
#endif
#ifdef Qdei
  #warning conflict: Qdei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qdei' is also defined as a pragma.
  #warning conflict: Pragma 'Qdei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qdei' in module 'hicum2'.
  #undef Qdei
#endif
#ifdef Qdci
  #warning conflict: Qdci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qdci' is also defined as a pragma.
  #warning conflict: Pragma 'Qdci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qdci' in module 'hicum2'.
  #undef Qdci
#endif
#ifdef qrbi
  #warning conflict: qrbi is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'qrbi' is also defined as a pragma.
  #warning conflict: Pragma 'qrbi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qrbi' in module 'hicum2'.
  #undef qrbi
#endif
#ifdef ibet
  #warning conflict: ibet is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ibet' is also defined as a pragma.
  #warning conflict: Pragma 'ibet' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibet' in module 'hicum2'.
  #undef ibet
#endif
#ifdef iavl
  #warning conflict: iavl is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'iavl' is also defined as a pragma.
  #warning conflict: Pragma 'iavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iavl' in module 'hicum2'.
  #undef iavl
#endif
#ifdef ijbcx
  #warning conflict: ijbcx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ijbcx' is also defined as a pragma.
  #warning conflict: Pragma 'ijbcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijbcx' in module 'hicum2'.
  #undef ijbcx
#endif
#ifdef ijsc
  #warning conflict: ijsc is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ijsc' is also defined as a pragma.
  #warning conflict: Pragma 'ijsc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijsc' in module 'hicum2'.
  #undef ijsc
#endif
#ifdef Qjs
  #warning conflict: Qjs is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qjs' is also defined as a pragma.
  #warning conflict: Pragma 'Qjs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qjs' in module 'hicum2'.
  #undef Qjs
#endif
#ifdef HSUM
  #warning conflict: HSUM is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'HSUM' is also defined as a pragma.
  #warning conflict: Pragma 'HSUM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'HSUM' in module 'hicum2'.
  #undef HSUM
#endif
#ifdef HSI_Tsu
  #warning conflict: HSI_Tsu is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'HSI_Tsu' is also defined as a pragma.
  #warning conflict: Pragma 'HSI_Tsu' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'HSI_Tsu' in module 'hicum2'.
  #undef HSI_Tsu
#endif
#ifdef Qdsu
  #warning conflict: Qdsu is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qdsu' is also defined as a pragma.
  #warning conflict: Pragma 'Qdsu' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qdsu' in module 'hicum2'.
  #undef Qdsu
#endif
#ifdef rbi
  #warning conflict: rbi is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'rbi' is also defined as a pragma.
  #warning conflict: Pragma 'rbi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rbi' in module 'hicum2'.
  #undef rbi
#endif
#ifdef pterm
  #warning conflict: pterm is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'pterm' is also defined as a pragma.
  #warning conflict: Pragma 'pterm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pterm' in module 'hicum2'.
  #undef pterm
#endif
#ifdef vdj0
  #warning conflict: vdj0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vdj0' is also defined as a pragma.
  #warning conflict: Pragma 'vdj0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdj0' in module 'hicum2'.
  #undef vdj0
#endif
#ifdef vdjt
  #warning conflict: vdjt is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vdjt' is also defined as a pragma.
  #warning conflict: Pragma 'vdjt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdjt' in module 'hicum2'.
  #undef vdjt
#endif
#ifdef vdt
  #warning conflict: vdt is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vdt' is also defined as a pragma.
  #warning conflict: Pragma 'vdt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdt' in module 'hicum2'.
  #undef vdt
#endif
#ifdef k10
  #warning conflict: k10 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'k10' is also defined as a pragma.
  #warning conflict: Pragma 'k10' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'k10' in module 'hicum2'.
  #undef k10
#endif
#ifdef k20
  #warning conflict: k20 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'k20' is also defined as a pragma.
  #warning conflict: Pragma 'k20' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'k20' in module 'hicum2'.
  #undef k20
#endif
#ifdef C_1
  #warning conflict: C_1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'C_1' is also defined as a pragma.
  #warning conflict: Pragma 'C_1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'C_1' in module 'hicum2'.
  #undef C_1
#endif
#ifdef Cjci
  #warning conflict: Cjci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Cjci' is also defined as a pragma.
  #warning conflict: Pragma 'Cjci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Cjci' in module 'hicum2'.
  #undef Cjci
#endif
#ifdef Cjcit
  #warning conflict: Cjcit is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Cjcit' is also defined as a pragma.
  #warning conflict: Pragma 'Cjcit' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Cjcit' in module 'hicum2'.
  #undef Cjcit
#endif
#ifdef cc
  #warning conflict: cc is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cc' is also defined as a pragma.
  #warning conflict: Pragma 'cc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cc' in module 'hicum2'.
  #undef cc
#endif
#ifdef Cjei
  #warning conflict: Cjei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Cjei' is also defined as a pragma.
  #warning conflict: Pragma 'Cjei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Cjei' in module 'hicum2'.
  #undef Cjei
#endif
#ifdef Cjep
  #warning conflict: Cjep is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Cjep' is also defined as a pragma.
  #warning conflict: Pragma 'Cjep' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Cjep' in module 'hicum2'.
  #undef Cjep
#endif
#ifdef itf
  #warning conflict: itf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'itf' is also defined as a pragma.
  #warning conflict: Pragma 'itf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itf' in module 'hicum2'.
  #undef itf
#endif
#ifdef itr
  #warning conflict: itr is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'itr' is also defined as a pragma.
  #warning conflict: Pragma 'itr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itr' in module 'hicum2'.
  #undef itr
#endif
#ifdef Tf
  #warning conflict: Tf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Tf' is also defined as a pragma.
  #warning conflict: Pragma 'Tf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tf' in module 'hicum2'.
  #undef Tf
#endif
#ifdef Tr
  #warning conflict: Tr is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Tr' is also defined as a pragma.
  #warning conflict: Pragma 'Tr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Tr' in module 'hicum2'.
  #undef Tr
#endif
#ifdef VT_f
  #warning conflict: VT_f is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'VT_f' is also defined as a pragma.
  #warning conflict: Pragma 'VT_f' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VT_f' in module 'hicum2'.
  #undef VT_f
#endif
#ifdef i_0f
  #warning conflict: i_0f is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'i_0f' is also defined as a pragma.
  #warning conflict: Pragma 'i_0f' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'i_0f' in module 'hicum2'.
  #undef i_0f
#endif
#ifdef i_0r
  #warning conflict: i_0r is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'i_0r' is also defined as a pragma.
  #warning conflict: Pragma 'i_0r' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'i_0r' in module 'hicum2'.
  #undef i_0r
#endif
#ifdef a_bpt
  #warning conflict: a_bpt is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'a_bpt' is also defined as a pragma.
  #warning conflict: Pragma 'a_bpt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'a_bpt' in module 'hicum2'.
  #undef a_bpt
#endif
#ifdef Q_0
  #warning conflict: Q_0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Q_0' is also defined as a pragma.
  #warning conflict: Pragma 'Q_0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Q_0' in module 'hicum2'.
  #undef Q_0
#endif
#ifdef Q_p
  #warning conflict: Q_p is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Q_p' is also defined as a pragma.
  #warning conflict: Pragma 'Q_p' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Q_p' in module 'hicum2'.
  #undef Q_p
#endif
#ifdef Q_bpt
  #warning conflict: Q_bpt is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Q_bpt' is also defined as a pragma.
  #warning conflict: Pragma 'Q_bpt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Q_bpt' in module 'hicum2'.
  #undef Q_bpt
#endif
#ifdef Orci0_t
  #warning conflict: Orci0_t is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Orci0_t' is also defined as a pragma.
  #warning conflict: Pragma 'Orci0_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Orci0_t' in module 'hicum2'.
  #undef Orci0_t
#endif
#ifdef b_q
  #warning conflict: b_q is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'b_q' is also defined as a pragma.
  #warning conflict: Pragma 'b_q' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'b_q' in module 'hicum2'.
  #undef b_q
#endif
#ifdef Q_fC
  #warning conflict: Q_fC is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Q_fC' is also defined as a pragma.
  #warning conflict: Pragma 'Q_fC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Q_fC' in module 'hicum2'.
  #undef Q_fC
#endif
#ifdef T_fC
  #warning conflict: T_fC is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'T_fC' is also defined as a pragma.
  #warning conflict: Pragma 'T_fC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'T_fC' in module 'hicum2'.
  #undef T_fC
#endif
#ifdef T_cT
  #warning conflict: T_cT is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'T_cT' is also defined as a pragma.
  #warning conflict: Pragma 'T_cT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'T_cT' in module 'hicum2'.
  #undef T_cT
#endif
#ifdef I_Tf1
  #warning conflict: I_Tf1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'I_Tf1' is also defined as a pragma.
  #warning conflict: Pragma 'I_Tf1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'I_Tf1' in module 'hicum2'.
  #undef I_Tf1
#endif
#ifdef T_f0
  #warning conflict: T_f0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'T_f0' is also defined as a pragma.
  #warning conflict: Pragma 'T_f0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'T_f0' in module 'hicum2'.
  #undef T_f0
#endif
#ifdef Q_fT
  #warning conflict: Q_fT is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Q_fT' is also defined as a pragma.
  #warning conflict: Pragma 'Q_fT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Q_fT' in module 'hicum2'.
  #undef Q_fT
#endif
#ifdef T_fT
  #warning conflict: T_fT is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'T_fT' is also defined as a pragma.
  #warning conflict: Pragma 'T_fT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'T_fT' in module 'hicum2'.
  #undef T_fT
#endif
#ifdef Q_bf
  #warning conflict: Q_bf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Q_bf' is also defined as a pragma.
  #warning conflict: Pragma 'Q_bf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Q_bf' in module 'hicum2'.
  #undef Q_bf
#endif
#ifdef ICKa
  #warning conflict: ICKa is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ICKa' is also defined as a pragma.
  #warning conflict: Pragma 'ICKa' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ICKa' in module 'hicum2'.
  #undef ICKa
#endif
#ifdef d1
  #warning conflict: d1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'd1' is also defined as a pragma.
  #warning conflict: Pragma 'd1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'd1' in module 'hicum2'.
  #undef d1
#endif
#ifdef A
  #warning conflict: A is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'A' is also defined as a pragma.
  #warning conflict: Pragma 'A' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A' in module 'hicum2'.
  #undef A
#endif
#ifdef a_h
  #warning conflict: a_h is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'a_h' is also defined as a pragma.
  #warning conflict: Pragma 'a_h' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'a_h' in module 'hicum2'.
  #undef a_h
#endif
#ifdef Q_pT
  #warning conflict: Q_pT is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Q_pT' is also defined as a pragma.
  #warning conflict: Pragma 'Q_pT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Q_pT' in module 'hicum2'.
  #undef Q_pT
#endif
#ifdef d_Q
  #warning conflict: d_Q is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'd_Q' is also defined as a pragma.
  #warning conflict: Pragma 'd_Q' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'd_Q' in module 'hicum2'.
  #undef d_Q
#endif
#ifdef d_Q0
  #warning conflict: d_Q0 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'd_Q0' is also defined as a pragma.
  #warning conflict: Pragma 'd_Q0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'd_Q0' in module 'hicum2'.
  #undef d_Q0
#endif
#ifdef Qf
  #warning conflict: Qf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qf' is also defined as a pragma.
  #warning conflict: Pragma 'Qf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qf' in module 'hicum2'.
  #undef Qf
#endif
#ifdef Cdei
  #warning conflict: Cdei is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Cdei' is also defined as a pragma.
  #warning conflict: Pragma 'Cdei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Cdei' in module 'hicum2'.
  #undef Cdei
#endif
#ifdef Qr
  #warning conflict: Qr is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qr' is also defined as a pragma.
  #warning conflict: Pragma 'Qr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qr' in module 'hicum2'.
  #undef Qr
#endif
#ifdef Cdci
  #warning conflict: Cdci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Cdci' is also defined as a pragma.
  #warning conflict: Pragma 'Cdci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Cdci' in module 'hicum2'.
  #undef Cdci
#endif
#ifdef Crbi
  #warning conflict: Crbi is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Crbi' is also defined as a pragma.
  #warning conflict: Pragma 'Crbi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Crbi' in module 'hicum2'.
  #undef Crbi
#endif
#ifdef ick
  #warning conflict: ick is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ick' is also defined as a pragma.
  #warning conflict: Pragma 'ick' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ick' in module 'hicum2'.
  #undef ick
#endif
#ifdef vc
  #warning conflict: vc is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vc' is also defined as a pragma.
  #warning conflict: Pragma 'vc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vc' in module 'hicum2'.
  #undef vc
#endif
#ifdef vceff
  #warning conflict: vceff is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'vceff' is also defined as a pragma.
  #warning conflict: Pragma 'vceff' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vceff' in module 'hicum2'.
  #undef vceff
#endif
#ifdef cjcx01
  #warning conflict: cjcx01 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjcx01' is also defined as a pragma.
  #warning conflict: Pragma 'cjcx01' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjcx01' in module 'hicum2'.
  #undef cjcx01
#endif
#ifdef cjcx02
  #warning conflict: cjcx02 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'cjcx02' is also defined as a pragma.
  #warning conflict: Pragma 'cjcx02' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjcx02' in module 'hicum2'.
  #undef cjcx02
#endif
#ifdef HSa
  #warning conflict: HSa is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'HSa' is also defined as a pragma.
  #warning conflict: Pragma 'HSa' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'HSa' in module 'hicum2'.
  #undef HSa
#endif
#ifdef HSb
  #warning conflict: HSb is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'HSb' is also defined as a pragma.
  #warning conflict: Pragma 'HSb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'HSb' in module 'hicum2'.
  #undef HSb
#endif
#ifdef l_it
  #warning conflict: l_it is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'l_it' is also defined as a pragma.
  #warning conflict: Pragma 'l_it' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'l_it' in module 'hicum2'.
  #undef l_it
#endif
#ifdef DIOY
  #warning conflict: DIOY is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DIOY' is also defined as a pragma.
  #warning conflict: Pragma 'DIOY' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DIOY' in module 'hicum2'.
  #undef DIOY
#endif
#ifdef le
  #warning conflict: le is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'le' is also defined as a pragma.
  #warning conflict: Pragma 'le' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'le' in module 'hicum2'.
  #undef le
#endif
#ifdef FFT_fbS
  #warning conflict: FFT_fbS is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFT_fbS' is also defined as a pragma.
  #warning conflict: Pragma 'FFT_fbS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFT_fbS' in module 'hicum2'.
  #undef FFT_fbS
#endif
#ifdef FFa
  #warning conflict: FFa is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFa' is also defined as a pragma.
  #warning conflict: Pragma 'FFa' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFa' in module 'hicum2'.
  #undef FFa
#endif
#ifdef FFx
  #warning conflict: FFx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFx' is also defined as a pragma.
  #warning conflict: Pragma 'FFx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFx' in module 'hicum2'.
  #undef FFx
#endif
#ifdef FFs
  #warning conflict: FFs is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFs' is also defined as a pragma.
  #warning conflict: Pragma 'FFs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFs' in module 'hicum2'.
  #undef FFs
#endif
#ifdef FFw
  #warning conflict: FFw is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFw' is also defined as a pragma.
  #warning conflict: Pragma 'FFw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFw' in module 'hicum2'.
  #undef FFw
#endif
#ifdef FFw_2
  #warning conflict: FFw_2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFw_2' is also defined as a pragma.
  #warning conflict: Pragma 'FFw_2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFw_2' in module 'hicum2'.
  #undef FFw_2
#endif
#ifdef FFd_QfB
  #warning conflict: FFd_QfB is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFd_QfB' is also defined as a pragma.
  #warning conflict: Pragma 'FFd_QfB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFd_QfB' in module 'hicum2'.
  #undef FFd_QfB
#endif
#ifdef FFd_TfB
  #warning conflict: FFd_TfB is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFd_TfB' is also defined as a pragma.
  #warning conflict: Pragma 'FFd_TfB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFd_TfB' in module 'hicum2'.
  #undef FFd_TfB
#endif
#ifdef FFT_pcS
  #warning conflict: FFT_pcS is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFT_pcS' is also defined as a pragma.
  #warning conflict: Pragma 'FFT_pcS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFT_pcS' in module 'hicum2'.
  #undef FFT_pcS
#endif
#ifdef FFQ_fC
  #warning conflict: FFQ_fC is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFQ_fC' is also defined as a pragma.
  #warning conflict: Pragma 'FFQ_fC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFQ_fC' in module 'hicum2'.
  #undef FFQ_fC
#endif
#ifdef FFT_fC
  #warning conflict: FFT_fC is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFT_fC' is also defined as a pragma.
  #warning conflict: Pragma 'FFT_fC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFT_fC' in module 'hicum2'.
  #undef FFT_fC
#endif
#ifdef FFQ_cT
  #warning conflict: FFQ_cT is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFQ_cT' is also defined as a pragma.
  #warning conflict: Pragma 'FFQ_cT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFQ_cT' in module 'hicum2'.
  #undef FFQ_cT
#endif
#ifdef FFT_cT
  #warning conflict: FFT_cT is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFT_cT' is also defined as a pragma.
  #warning conflict: Pragma 'FFT_cT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFT_cT' in module 'hicum2'.
  #undef FFT_cT
#endif
#ifdef FFd_TfE
  #warning conflict: FFd_TfE is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFd_TfE' is also defined as a pragma.
  #warning conflict: Pragma 'FFd_TfE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFd_TfE' in module 'hicum2'.
  #undef FFd_TfE
#endif
#ifdef FFd_QfE
  #warning conflict: FFd_QfE is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFd_QfE' is also defined as a pragma.
  #warning conflict: Pragma 'FFd_QfE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFd_QfE' in module 'hicum2'.
  #undef FFd_QfE
#endif
#ifdef FFa_w
  #warning conflict: FFa_w is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FFa_w' is also defined as a pragma.
  #warning conflict: Pragma 'FFa_w' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FFa_w' in module 'hicum2'.
  #undef FFa_w
#endif
#ifdef FCz
  #warning conflict: FCz is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCz' is also defined as a pragma.
  #warning conflict: Pragma 'FCz' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCz' in module 'hicum2'.
  #undef FCz
#endif
#ifdef FCw2
  #warning conflict: FCw2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCw2' is also defined as a pragma.
  #warning conflict: Pragma 'FCw2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCw2' in module 'hicum2'.
  #undef FCw2
#endif
#ifdef FCf1
  #warning conflict: FCf1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCf1' is also defined as a pragma.
  #warning conflict: Pragma 'FCf1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCf1' in module 'hicum2'.
  #undef FCf1
#endif
#ifdef FCf2
  #warning conflict: FCf2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCf2' is also defined as a pragma.
  #warning conflict: Pragma 'FCf2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCf2' in module 'hicum2'.
  #undef FCf2
#endif
#ifdef FCf3
  #warning conflict: FCf3 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCf3' is also defined as a pragma.
  #warning conflict: Pragma 'FCf3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCf3' in module 'hicum2'.
  #undef FCf3
#endif
#ifdef FCf_ci
  #warning conflict: FCf_ci is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCf_ci' is also defined as a pragma.
  #warning conflict: Pragma 'FCf_ci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCf_ci' in module 'hicum2'.
  #undef FCf_ci
#endif
#ifdef FCz_1
  #warning conflict: FCz_1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCz_1' is also defined as a pragma.
  #warning conflict: Pragma 'FCz_1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCz_1' in module 'hicum2'.
  #undef FCz_1
#endif
#ifdef FCa1
  #warning conflict: FCa1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCa1' is also defined as a pragma.
  #warning conflict: Pragma 'FCa1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCa1' in module 'hicum2'.
  #undef FCa1
#endif
#ifdef FCa_ck
  #warning conflict: FCa_ck is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCa_ck' is also defined as a pragma.
  #warning conflict: Pragma 'FCa_ck' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCa_ck' in module 'hicum2'.
  #undef FCa_ck
#endif
#ifdef FCxl
  #warning conflict: FCxl is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCxl' is also defined as a pragma.
  #warning conflict: Pragma 'FCxl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCxl' in module 'hicum2'.
  #undef FCxl
#endif
#ifdef FCxb
  #warning conflict: FCxb is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCxb' is also defined as a pragma.
  #warning conflict: Pragma 'FCxb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCxb' in module 'hicum2'.
  #undef FCxb
#endif
#ifdef FCd_a
  #warning conflict: FCd_a is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCd_a' is also defined as a pragma.
  #warning conflict: Pragma 'FCd_a' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCd_a' in module 'hicum2'.
  #undef FCd_a
#endif
#ifdef FCdaick_ditf
  #warning conflict: FCdaick_ditf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCdaick_ditf' is also defined as a pragma.
  #warning conflict: Pragma 'FCdaick_ditf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCdaick_ditf' in module 'hicum2'.
  #undef FCdaick_ditf
#endif
#ifdef FCa
  #warning conflict: FCa is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCa' is also defined as a pragma.
  #warning conflict: Pragma 'FCa' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCa' in module 'hicum2'.
  #undef FCa
#endif
#ifdef FCw
  #warning conflict: FCw is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCw' is also defined as a pragma.
  #warning conflict: Pragma 'FCw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCw' in module 'hicum2'.
  #undef FCw
#endif
#ifdef FCdw_daick
  #warning conflict: FCdw_daick is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCdw_daick' is also defined as a pragma.
  #warning conflict: Pragma 'FCdw_daick' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCdw_daick' in module 'hicum2'.
  #undef FCdw_daick
#endif
#ifdef FCdfc_dw
  #warning conflict: FCdfc_dw is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCdfc_dw' is also defined as a pragma.
  #warning conflict: Pragma 'FCdfc_dw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCdfc_dw' in module 'hicum2'.
  #undef FCdfc_dw
#endif
#ifdef FCdw_ditf
  #warning conflict: FCdw_ditf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCdw_ditf' is also defined as a pragma.
  #warning conflict: Pragma 'FCdw_ditf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCdw_ditf' in module 'hicum2'.
  #undef FCdw_ditf
#endif
#ifdef FCdfc_ditf
  #warning conflict: FCdfc_ditf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCdfc_ditf' is also defined as a pragma.
  #warning conflict: Pragma 'FCdfc_ditf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCdfc_ditf' in module 'hicum2'.
  #undef FCdfc_ditf
#endif
#ifdef FCf_CT
  #warning conflict: FCf_CT is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCf_CT' is also defined as a pragma.
  #warning conflict: Pragma 'FCf_CT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCf_CT' in module 'hicum2'.
  #undef FCf_CT
#endif
#ifdef FCdfCT_ditf
  #warning conflict: FCdfCT_ditf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCdfCT_ditf' is also defined as a pragma.
  #warning conflict: Pragma 'FCdfCT_ditf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCdfCT_ditf' in module 'hicum2'.
  #undef FCdfCT_ditf
#endif
#ifdef FCrt
  #warning conflict: FCrt is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCrt' is also defined as a pragma.
  #warning conflict: Pragma 'FCrt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCrt' in module 'hicum2'.
  #undef FCrt
#endif
#ifdef FCln
  #warning conflict: FCln is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCln' is also defined as a pragma.
  #warning conflict: Pragma 'FCln' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCln' in module 'hicum2'.
  #undef FCln
#endif
#ifdef lnz
  #warning conflict: lnz is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'lnz' is also defined as a pragma.
  #warning conflict: Pragma 'lnz' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'lnz' in module 'hicum2'.
  #undef lnz
#endif
#ifdef FCda1_dw
  #warning conflict: FCda1_dw is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCda1_dw' is also defined as a pragma.
  #warning conflict: Pragma 'FCda1_dw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCda1_dw' in module 'hicum2'.
  #undef FCda1_dw
#endif
#ifdef FCdf1_dw
  #warning conflict: FCdf1_dw is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCdf1_dw' is also defined as a pragma.
  #warning conflict: Pragma 'FCdf1_dw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCdf1_dw' in module 'hicum2'.
  #undef FCdf1_dw
#endif
#ifdef FCdf2_dw
  #warning conflict: FCdf2_dw is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCdf2_dw' is also defined as a pragma.
  #warning conflict: Pragma 'FCdf2_dw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCdf2_dw' in module 'hicum2'.
  #undef FCdf2_dw
#endif
#ifdef FCdf3_dw
  #warning conflict: FCdf3_dw is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCdf3_dw' is also defined as a pragma.
  #warning conflict: Pragma 'FCdf3_dw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCdf3_dw' in module 'hicum2'.
  #undef FCdf3_dw
#endif
#ifdef FCd_f
  #warning conflict: FCd_f is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCd_f' is also defined as a pragma.
  #warning conflict: Pragma 'FCd_f' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCd_f' in module 'hicum2'.
  #undef FCd_f
#endif
#ifdef FCdfCT_dw
  #warning conflict: FCdfCT_dw is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'FCdfCT_dw' is also defined as a pragma.
  #warning conflict: Pragma 'FCdfCT_dw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCdfCT_dw' in module 'hicum2'.
  #undef FCdfCT_dw
#endif
#ifdef Dz_r
  #warning conflict: Dz_r is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Dz_r' is also defined as a pragma.
  #warning conflict: Pragma 'Dz_r' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dz_r' in module 'hicum2'.
  #undef Dz_r
#endif
#ifdef Dv_p
  #warning conflict: Dv_p is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Dv_p' is also defined as a pragma.
  #warning conflict: Pragma 'Dv_p' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dv_p' in module 'hicum2'.
  #undef Dv_p
#endif
#ifdef DV_f
  #warning conflict: DV_f is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DV_f' is also defined as a pragma.
  #warning conflict: Pragma 'DV_f' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DV_f' in module 'hicum2'.
  #undef DV_f
#endif
#ifdef DC_max
  #warning conflict: DC_max is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DC_max' is also defined as a pragma.
  #warning conflict: Pragma 'DC_max' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DC_max' in module 'hicum2'.
  #undef DC_max
#endif
#ifdef DC_c
  #warning conflict: DC_c is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DC_c' is also defined as a pragma.
  #warning conflict: Pragma 'DC_c' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DC_c' in module 'hicum2'.
  #undef DC_c
#endif
#ifdef Da
  #warning conflict: Da is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Da' is also defined as a pragma.
  #warning conflict: Pragma 'Da' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Da' in module 'hicum2'.
  #undef Da
#endif
#ifdef Dv_e
  #warning conflict: Dv_e is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Dv_e' is also defined as a pragma.
  #warning conflict: Pragma 'Dv_e' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dv_e' in module 'hicum2'.
  #undef Dv_e
#endif
#ifdef De
  #warning conflict: De is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'De' is also defined as a pragma.
  #warning conflict: Pragma 'De' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'De' in module 'hicum2'.
  #undef De
#endif
#ifdef De_1
  #warning conflict: De_1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'De_1' is also defined as a pragma.
  #warning conflict: Pragma 'De_1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'De_1' in module 'hicum2'.
  #undef De_1
#endif
#ifdef Dv_j1
  #warning conflict: Dv_j1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Dv_j1' is also defined as a pragma.
  #warning conflict: Pragma 'Dv_j1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dv_j1' in module 'hicum2'.
  #undef Dv_j1
#endif
#ifdef Dv_r
  #warning conflict: Dv_r is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Dv_r' is also defined as a pragma.
  #warning conflict: Pragma 'Dv_r' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dv_r' in module 'hicum2'.
  #undef Dv_r
#endif
#ifdef De_2
  #warning conflict: De_2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'De_2' is also defined as a pragma.
  #warning conflict: Pragma 'De_2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'De_2' in module 'hicum2'.
  #undef De_2
#endif
#ifdef Dv_j2
  #warning conflict: Dv_j2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Dv_j2' is also defined as a pragma.
  #warning conflict: Pragma 'Dv_j2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dv_j2' in module 'hicum2'.
  #undef Dv_j2
#endif
#ifdef Dv_j4
  #warning conflict: Dv_j4 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Dv_j4' is also defined as a pragma.
  #warning conflict: Pragma 'Dv_j4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dv_j4' in module 'hicum2'.
  #undef Dv_j4
#endif
#ifdef DQ_j1
  #warning conflict: DQ_j1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DQ_j1' is also defined as a pragma.
  #warning conflict: Pragma 'DQ_j1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DQ_j1' in module 'hicum2'.
  #undef DQ_j1
#endif
#ifdef DQ_j2
  #warning conflict: DQ_j2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DQ_j2' is also defined as a pragma.
  #warning conflict: Pragma 'DQ_j2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DQ_j2' in module 'hicum2'.
  #undef DQ_j2
#endif
#ifdef DQ_j3
  #warning conflict: DQ_j3 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DQ_j3' is also defined as a pragma.
  #warning conflict: Pragma 'DQ_j3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DQ_j3' in module 'hicum2'.
  #undef DQ_j3
#endif
#ifdef DCln1
  #warning conflict: DCln1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DCln1' is also defined as a pragma.
  #warning conflict: Pragma 'DCln1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DCln1' in module 'hicum2'.
  #undef DCln1
#endif
#ifdef DCln2
  #warning conflict: DCln2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DCln2' is also defined as a pragma.
  #warning conflict: Pragma 'DCln2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DCln2' in module 'hicum2'.
  #undef DCln2
#endif
#ifdef Dz1
  #warning conflict: Dz1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Dz1' is also defined as a pragma.
  #warning conflict: Pragma 'Dz1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dz1' in module 'hicum2'.
  #undef Dz1
#endif
#ifdef Dzr1
  #warning conflict: Dzr1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Dzr1' is also defined as a pragma.
  #warning conflict: Pragma 'Dzr1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dzr1' in module 'hicum2'.
  #undef Dzr1
#endif
#ifdef DFV_f
  #warning conflict: DFV_f is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DFV_f' is also defined as a pragma.
  #warning conflict: Pragma 'DFV_f' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DFV_f' in module 'hicum2'.
  #undef DFV_f
#endif
#ifdef DFv_e
  #warning conflict: DFv_e is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DFv_e' is also defined as a pragma.
  #warning conflict: Pragma 'DFv_e' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DFv_e' in module 'hicum2'.
  #undef DFv_e
#endif
#ifdef DFv_j
  #warning conflict: DFv_j is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DFv_j' is also defined as a pragma.
  #warning conflict: Pragma 'DFv_j' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DFv_j' in module 'hicum2'.
  #undef DFv_j
#endif
#ifdef DFb
  #warning conflict: DFb is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DFb' is also defined as a pragma.
  #warning conflict: Pragma 'DFb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DFb' in module 'hicum2'.
  #undef DFb
#endif
#ifdef DFQ_j
  #warning conflict: DFQ_j is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DFQ_j' is also defined as a pragma.
  #warning conflict: Pragma 'DFQ_j' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DFQ_j' in module 'hicum2'.
  #undef DFQ_j
#endif
#ifdef DFs_q
  #warning conflict: DFs_q is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DFs_q' is also defined as a pragma.
  #warning conflict: Pragma 'DFs_q' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DFs_q' in module 'hicum2'.
  #undef DFs_q
#endif
#ifdef DFs_q2
  #warning conflict: DFs_q2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'DFs_q2' is also defined as a pragma.
  #warning conflict: Pragma 'DFs_q2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DFs_q2' in module 'hicum2'.
  #undef DFs_q2
#endif
#ifdef z
  #warning conflict: z is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'z' is also defined as a pragma.
  #warning conflict: Pragma 'z' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'z' in module 'hicum2'.
  #undef z
#endif
#ifdef a2
  #warning conflict: a2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'a2' is also defined as a pragma.
  #warning conflict: Pragma 'a2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'a2' in module 'hicum2'.
  #undef a2
#endif
#ifdef a3
  #warning conflict: a3 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'a3' is also defined as a pragma.
  #warning conflict: Pragma 'a3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'a3' in module 'hicum2'.
  #undef a3
#endif
#ifdef r
  #warning conflict: r is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'r' is also defined as a pragma.
  #warning conflict: Pragma 'r' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'r' in module 'hicum2'.
  #undef r
#endif
#ifdef x
  #warning conflict: x is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'x' is also defined as a pragma.
  #warning conflict: Pragma 'x' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x' in module 'hicum2'.
  #undef x
#endif
#ifdef zb
  #warning conflict: zb is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zb' is also defined as a pragma.
  #warning conflict: Pragma 'zb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zb' in module 'hicum2'.
  #undef zb
#endif
#ifdef zl
  #warning conflict: zl is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'zl' is also defined as a pragma.
  #warning conflict: Pragma 'zl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zl' in module 'hicum2'.
  #undef zl
#endif
#ifdef lnzb
  #warning conflict: lnzb is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'lnzb' is also defined as a pragma.
  #warning conflict: Pragma 'lnzb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'lnzb' in module 'hicum2'.
  #undef lnzb
#endif
#ifdef w
  #warning conflict: w is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'w' is also defined as a pragma.
  #warning conflict: Pragma 'w' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'w' in module 'hicum2'.
  #undef w
#endif
#ifdef hicfcio
  #warning conflict: hicfcio is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'hicfcio' is also defined as a pragma.
  #warning conflict: Pragma 'hicfcio' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'hicfcio' in module 'hicum2'.
  #undef hicfcio
#endif
#ifdef dhicfcio_dw
  #warning conflict: dhicfcio_dw is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'dhicfcio_dw' is also defined as a pragma.
  #warning conflict: Pragma 'dhicfcio_dw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dhicfcio_dw' in module 'hicum2'.
  #undef dhicfcio_dw
#endif
#ifdef fourkt
  #warning conflict: fourkt is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'fourkt' is also defined as a pragma.
  #warning conflict: Pragma 'fourkt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fourkt' in module 'hicum2'.
  #undef fourkt
#endif
#ifdef twoq
  #warning conflict: twoq is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'twoq' is also defined as a pragma.
  #warning conflict: Pragma 'twoq' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'twoq' in module 'hicum2'.
  #undef twoq
#endif
#ifdef flicker_Pwr
  #warning conflict: flicker_Pwr is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'flicker_Pwr' is also defined as a pragma.
  #warning conflict: Pragma 'flicker_Pwr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'flicker_Pwr' in module 'hicum2'.
  #undef flicker_Pwr
#endif
#ifdef thermal_Rbx
  #warning conflict: thermal_Rbx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'thermal_Rbx' is also defined as a pragma.
  #warning conflict: Pragma 'thermal_Rbx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'thermal_Rbx' in module 'hicum2'.
  #undef thermal_Rbx
#endif
#ifdef thermal_Rbi
  #warning conflict: thermal_Rbi is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'thermal_Rbi' is also defined as a pragma.
  #warning conflict: Pragma 'thermal_Rbi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'thermal_Rbi' in module 'hicum2'.
  #undef thermal_Rbi
#endif
#ifdef thermal_Rcx
  #warning conflict: thermal_Rcx is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'thermal_Rcx' is also defined as a pragma.
  #warning conflict: Pragma 'thermal_Rcx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'thermal_Rcx' in module 'hicum2'.
  #undef thermal_Rcx
#endif
#ifdef thermal_Re
  #warning conflict: thermal_Re is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'thermal_Re' is also defined as a pragma.
  #warning conflict: Pragma 'thermal_Re' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'thermal_Re' in module 'hicum2'.
  #undef thermal_Re
#endif
#ifdef betad
  #warning conflict: betad is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'betad' is also defined as a pragma.
  #warning conflict: Pragma 'betad' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'betad' in module 'hicum2'.
  #undef betad
#endif
#ifdef betan
  #warning conflict: betan is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'betan' is also defined as a pragma.
  #warning conflict: Pragma 'betan' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'betan' in module 'hicum2'.
  #undef betan
#endif
#ifdef betadin
  #warning conflict: betadin is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'betadin' is also defined as a pragma.
  #warning conflict: Pragma 'betadin' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'betadin' in module 'hicum2'.
  #undef betadin
#endif
#ifdef betadc
  #warning conflict: betadc is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'betadc' is also defined as a pragma.
  #warning conflict: Pragma 'betadc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'betadc' in module 'hicum2'.
  #undef betadc
#endif
#ifdef icn
  #warning conflict: icn is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'icn' is also defined as a pragma.
  #warning conflict: Pragma 'icn' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'icn' in module 'hicum2'.
  #undef icn
#endif
#ifdef icn1
  #warning conflict: icn1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'icn1' is also defined as a pragma.
  #warning conflict: Pragma 'icn1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'icn1' in module 'hicum2'.
  #undef icn1
#endif
#ifdef icn2
  #warning conflict: icn2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'icn2' is also defined as a pragma.
  #warning conflict: Pragma 'icn2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'icn2' in module 'hicum2'.
  #undef icn2
#endif
#ifdef Ixf1
  #warning conflict: Ixf1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Ixf1' is also defined as a pragma.
  #warning conflict: Pragma 'Ixf1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ixf1' in module 'hicum2'.
  #undef Ixf1
#endif
#ifdef Ixf2
  #warning conflict: Ixf2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Ixf2' is also defined as a pragma.
  #warning conflict: Pragma 'Ixf2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ixf2' in module 'hicum2'.
  #undef Ixf2
#endif
#ifdef Qxf1
  #warning conflict: Qxf1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qxf1' is also defined as a pragma.
  #warning conflict: Pragma 'Qxf1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qxf1' in module 'hicum2'.
  #undef Qxf1
#endif
#ifdef Qxf2
  #warning conflict: Qxf2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qxf2' is also defined as a pragma.
  #warning conflict: Pragma 'Qxf2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qxf2' in module 'hicum2'.
  #undef Qxf2
#endif
#ifdef Vxf1
  #warning conflict: Vxf1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Vxf1' is also defined as a pragma.
  #warning conflict: Pragma 'Vxf1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vxf1' in module 'hicum2'.
  #undef Vxf1
#endif
#ifdef Vxf2
  #warning conflict: Vxf2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Vxf2' is also defined as a pragma.
  #warning conflict: Pragma 'Vxf2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vxf2' in module 'hicum2'.
  #undef Vxf2
#endif
#ifdef Itxf
  #warning conflict: Itxf is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Itxf' is also defined as a pragma.
  #warning conflict: Pragma 'Itxf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Itxf' in module 'hicum2'.
  #undef Itxf
#endif
#ifdef TD1
  #warning conflict: TD1 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'TD1' is also defined as a pragma.
  #warning conflict: Pragma 'TD1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TD1' in module 'hicum2'.
  #undef TD1
#endif
#ifdef Ixf3
  #warning conflict: Ixf3 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Ixf3' is also defined as a pragma.
  #warning conflict: Pragma 'Ixf3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ixf3' in module 'hicum2'.
  #undef Ixf3
#endif
#ifdef Ixf4
  #warning conflict: Ixf4 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Ixf4' is also defined as a pragma.
  #warning conflict: Pragma 'Ixf4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ixf4' in module 'hicum2'.
  #undef Ixf4
#endif
#ifdef Qxf3
  #warning conflict: Qxf3 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qxf3' is also defined as a pragma.
  #warning conflict: Pragma 'Qxf3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qxf3' in module 'hicum2'.
  #undef Qxf3
#endif
#ifdef Qxf4
  #warning conflict: Qxf4 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qxf4' is also defined as a pragma.
  #warning conflict: Pragma 'Qxf4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qxf4' in module 'hicum2'.
  #undef Qxf4
#endif
#ifdef Vxf3
  #warning conflict: Vxf3 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Vxf3' is also defined as a pragma.
  #warning conflict: Pragma 'Vxf3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vxf3' in module 'hicum2'.
  #undef Vxf3
#endif
#ifdef Vxf4
  #warning conflict: Vxf4 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Vxf4' is also defined as a pragma.
  #warning conflict: Pragma 'Vxf4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vxf4' in module 'hicum2'.
  #undef Vxf4
#endif
#ifdef Qdeix
  #warning conflict: Qdeix is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'Qdeix' is also defined as a pragma.
  #warning conflict: Pragma 'Qdeix' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qdeix' in module 'hicum2'.
  #undef Qdeix
#endif
#ifdef TD2
  #warning conflict: TD2 is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'TD2' is also defined as a pragma.
  #warning conflict: Pragma 'TD2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TD2' in module 'hicum2'.
  #undef TD2
#endif
#ifdef T
  #warning conflict: T is declared as a variable of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'T' is also defined as a pragma.
  #warning conflict: Pragma 'T' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'T' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: GND is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'GND' is also defined as a pragma.
  #warning conflict: Pragma 'GND' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GND' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: c is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'c' is also defined as a pragma.
  #warning conflict: Pragma 'c' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'c' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: b is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'b' is also defined as a pragma.
  #warning conflict: Pragma 'b' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'b' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: e is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'e' is also defined as a pragma.
  #warning conflict: Pragma 'e' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'e' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: s is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 's' is also defined as a pragma.
  #warning conflict: Pragma 's' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 's' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: tnode is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'tnode' is also defined as a pragma.
  #warning conflict: Pragma 'tnode' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tnode' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: ci is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ci' is also defined as a pragma.
  #warning conflict: Pragma 'ci' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ci' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: ei is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'ei' is also defined as a pragma.
  #warning conflict: Pragma 'ei' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ei' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: bp is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'bp' is also defined as a pragma.
  #warning conflict: Pragma 'bp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'bp' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: bi is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'bi' is also defined as a pragma.
  #warning conflict: Pragma 'bi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'bi' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: si is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'si' is also defined as a pragma.
  #warning conflict: Pragma 'si' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'si' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: xf1 is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'xf1' is also defined as a pragma.
  #warning conflict: Pragma 'xf1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xf1' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: xf2 is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'xf2' is also defined as a pragma.
  #warning conflict: Pragma 'xf2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xf2' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: xf3 is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'xf3' is also defined as a pragma.
  #warning conflict: Pragma 'xf3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xf3' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: xf4 is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'xf4' is also defined as a pragma.
  #warning conflict: Pragma 'xf4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xf4' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: n1 is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'n1' is also defined as a pragma.
  #warning conflict: Pragma 'n1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'n1' in module 'hicum2'.
  #undef T
#endif
#ifdef T
  #warning conflict: n2 is declared as a node of module 'hicum2'.
  #warning conflict: However in the API of ngspice 'n2' is also defined as a pragma.
  #warning conflict: Pragma 'n2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'n2' in module 'hicum2'.
  #undef T
#endif

#ifdef NGSPICE_DEBUG_OK
#define NGSPICE_DEBUG \
{ \
  if(getenv("ngspice_debug")) \
    hicum2debug(ckt,model,here); \
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

/* declarations for hicum2 MOSFETs */

/* information needed for each instance */
typedef struct shicum2instance {
  struct shicum2model *hicum2modPtr;           /* pointer to model */
  struct shicum2instance *hicum2nextInstance;  /* pointer to next instance of current model*/
  IFuid hicum2name; /* pointer to character string naming this instance */
  int hicum2owner;  /* number of owner process */
  int hicum2state; /* index into state table for this device */

  /* node */  int cNode;
  int bNode;
  int eNode;
  int sNode;
  int tnodeNode;
  int ciNode;
  int eiNode;
  int bpNode;
  int biNode;
  int siNode;
  int xf1Node;
  int xf2Node;
  int xf3Node;
  int xf4Node;
  int n1Node;
  int n2Node;

  /* instance parameters */
 // noise
  double fpnoise0, fenoise0;
  double fpnoise1, fenoise1;
  double wnoise0;
  double wnoise1;
  double wnoise2;
  double wnoise3;
  double wnoise4;
  double wnoise5;
  double wnoise6;
  double wnoise7;
  double wnoise8;
  double wnoise9;


  /* variables */  double ibei;
  double ibci;
  double ibep;
  double iavl;
  double ijbcx;
  double ijsc;
  double rbi;

  /* states */  int state_xf4_GND;
  int state_xf3_GND;
  int state_xf2_GND;
  int state_xf1_GND;
  int state_tnode_GND;
  int state_si_s;
  int state_si_ci;
  int state_bp_e;
  int state_b_e;
  int state_bp_ei;
  int state_bp_bi;
  int state_bp_ci;
  int state_b_ci;
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
  double *PTR_J_b_bi;
    int PTR_J_b_bi_required;
    double JDVAL_b_bi;
  double *PTR_J_b_ci;
    int PTR_J_b_ci_required;
    double JDVAL_b_ci;
  double *PTR_J_b_tnode;
    int PTR_J_b_tnode_required;
    double JSVAL_b_tnode;
    double JDVAL_b_tnode;
  double *PTR_J_ci_tnode;
    int PTR_J_ci_tnode_required;
    double JSVAL_ci_tnode;
    double JDVAL_ci_tnode;
  double *PTR_J_b_bp;
    int PTR_J_b_bp_required;
    double JSVAL_b_bp;
    double JDVAL_b_bp;
  double *PTR_J_ci_bp;
    int PTR_J_ci_bp_required;
    double JSVAL_ci_bp;
    double JDVAL_ci_bp;
  double *PTR_J_b_b;
    int PTR_J_b_b_required;
    double JSVAL_b_b;
    double JDVAL_b_b;
  double *PTR_J_ci_b;
    int PTR_J_ci_b_required;
    double JDVAL_ci_b;
  double *PTR_J_b_ei;
    int PTR_J_b_ei_required;
    double JDVAL_b_ei;
  double *PTR_J_ci_ei;
    int PTR_J_ci_ei_required;
    double JSVAL_ci_ei;
    double JDVAL_ci_ei;
  double *PTR_J_bp_bp;
    int PTR_J_bp_bp_required;
    double JSVAL_bp_bp;
    double JDVAL_bp_bp;
  double *PTR_J_bp_ci;
    int PTR_J_bp_ci_required;
    double JSVAL_bp_ci;
    double JDVAL_bp_ci;
  double *PTR_J_bp_tnode;
    int PTR_J_bp_tnode_required;
    double JSVAL_bp_tnode;
    double JDVAL_bp_tnode;
  double *PTR_J_bp_b;
    int PTR_J_bp_b_required;
    double JSVAL_bp_b;
  double *PTR_J_bp_ei;
    int PTR_J_bp_ei_required;
    double JSVAL_bp_ei;
    double JDVAL_bp_ei;
  double *PTR_J_bp_bi;
    int PTR_J_bp_bi_required;
    double JSVAL_bp_bi;
    double JDVAL_bp_bi;
  double *PTR_J_bi_tnode;
    int PTR_J_bi_tnode_required;
    double JSVAL_bi_tnode;
    double JDVAL_bi_tnode;
  double *PTR_J_bi_bp;
    int PTR_J_bi_bp_required;
    double JSVAL_bi_bp;
    double JDVAL_bi_bp;
  double *PTR_J_ei_tnode;
    int PTR_J_ei_tnode_required;
    double JSVAL_ei_tnode;
    double JDVAL_ei_tnode;
  double *PTR_J_ei_bp;
    int PTR_J_ei_bp_required;
    double JSVAL_ei_bp;
    double JDVAL_ei_bp;
  double *PTR_J_ei_ci;
    int PTR_J_ei_ci_required;
    double JSVAL_ei_ci;
    double JDVAL_ei_ci;
  double *PTR_J_bi_xf4;
    int PTR_J_bi_xf4_required;
    double JDVAL_bi_xf4;
  double *PTR_J_ei_xf4;
    int PTR_J_ei_xf4_required;
    double JDVAL_ei_xf4;
  double *PTR_J_bp_si;
    int PTR_J_bp_si_required;
    double JSVAL_bp_si;
  double *PTR_J_si_si;
    int PTR_J_si_si_required;
    double JSVAL_si_si;
    double JDVAL_si_si;
  double *PTR_J_si_ci;
    int PTR_J_si_ci_required;
    double JSVAL_si_ci;
    double JDVAL_si_ci;
  double *PTR_J_si_bp;
    int PTR_J_si_bp_required;
    double JSVAL_si_bp;
    double JDVAL_si_bp;
  double *PTR_J_si_tnode;
    int PTR_J_si_tnode_required;
    double JSVAL_si_tnode;
    double JDVAL_si_tnode;
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
  double *PTR_J_bp_e;
    int PTR_J_bp_e_required;
    double JDVAL_bp_e;
  double *PTR_J_e_bp;
    int PTR_J_e_bp_required;
    double JDVAL_e_bp;
  double *PTR_J_si_bi;
    int PTR_J_si_bi_required;
    double JSVAL_si_bi;
    double JDVAL_si_bi;
  double *PTR_J_si_ei;
    int PTR_J_si_ei_required;
    double JSVAL_si_ei;
    double JDVAL_si_ei;
  double *PTR_J_ci_si;
    int PTR_J_ci_si_required;
    double JSVAL_ci_si;
    double JDVAL_ci_si;
  double *PTR_J_si_b;
    int PTR_J_si_b_required;
    double JDVAL_si_b;
  double *PTR_J_ci_xf2;
    int PTR_J_ci_xf2_required;
    double JSVAL_ci_xf2;
  double *PTR_J_ei_xf2;
    int PTR_J_ei_xf2_required;
    double JSVAL_ei_xf2;
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
  double *PTR_J_e_tnode;
    int PTR_J_e_tnode_required;
    double JSVAL_e_tnode;
  double *PTR_J_ei_e;
    int PTR_J_ei_e_required;
    double JSVAL_ei_e;
  double *PTR_J_e_ei;
    int PTR_J_e_ei_required;
    double JSVAL_e_ei;
  double *PTR_J_si_s;
    int PTR_J_si_s_required;
    double JSVAL_si_s;
    double JDVAL_si_s;
  double *PTR_J_s_si;
    int PTR_J_s_si_required;
    double JSVAL_s_si;
    double JDVAL_s_si;
  double *PTR_J_s_s;
    int PTR_J_s_s_required;
    double JSVAL_s_s;
    double JDVAL_s_s;
  double *PTR_J_tnode_tnode;
    int PTR_J_tnode_tnode_required;
    double JSVAL_tnode_tnode;
    double JDVAL_tnode_tnode;
  double *PTR_J_tnode_bi;
    int PTR_J_tnode_bi_required;
    double JSVAL_tnode_bi;
  double *PTR_J_tnode_ci;
    int PTR_J_tnode_ci_required;
    double JSVAL_tnode_ci;
  double *PTR_J_tnode_ei;
    int PTR_J_tnode_ei_required;
    double JSVAL_tnode_ei;
  double *PTR_J_tnode_si;
    int PTR_J_tnode_si_required;
    double JSVAL_tnode_si;
  double *PTR_J_tnode_bp;
    int PTR_J_tnode_bp_required;
    double JSVAL_tnode_bp;
  double *PTR_J_tnode_e;
    int PTR_J_tnode_e_required;
    double JSVAL_tnode_e;
  double *PTR_J_tnode_c;
    int PTR_J_tnode_c_required;
    double JSVAL_tnode_c;
  double *PTR_J_tnode_b;
    int PTR_J_tnode_b_required;
    double JSVAL_tnode_b;
  double *PTR_J_xf1_bi;
    int PTR_J_xf1_bi_required;
    double JSVAL_xf1_bi;
  double *PTR_J_xf1_ci;
    int PTR_J_xf1_ci_required;
    double JSVAL_xf1_ci;
  double *PTR_J_xf1_ei;
    int PTR_J_xf1_ei_required;
    double JSVAL_xf1_ei;
  double *PTR_J_xf1_tnode;
    int PTR_J_xf1_tnode_required;
    double JSVAL_xf1_tnode;
  double *PTR_J_xf1_xf2;
    int PTR_J_xf1_xf2_required;
    double JSVAL_xf1_xf2;
  double *PTR_J_xf1_xf1;
    int PTR_J_xf1_xf1_required;
    double JSVAL_xf1_xf1;
    double JDVAL_xf1_xf1;
  double *PTR_J_xf2_bi;
    int PTR_J_xf2_bi_required;
    double JSVAL_xf2_bi;
  double *PTR_J_xf2_ci;
    int PTR_J_xf2_ci_required;
    double JSVAL_xf2_ci;
  double *PTR_J_xf2_tnode;
    int PTR_J_xf2_tnode_required;
    double JSVAL_xf2_tnode;
  double *PTR_J_xf2_ei;
    int PTR_J_xf2_ei_required;
    double JSVAL_xf2_ei;
  double *PTR_J_xf2_xf1;
    int PTR_J_xf2_xf1_required;
    double JSVAL_xf2_xf1;
  double *PTR_J_xf2_xf2;
    int PTR_J_xf2_xf2_required;
    double JSVAL_xf2_xf2;
    double JDVAL_xf2_xf2;
  double *PTR_J_xf3_bi;
    int PTR_J_xf3_bi_required;
    double JSVAL_xf3_bi;
  double *PTR_J_xf3_ei;
    int PTR_J_xf3_ei_required;
    double JSVAL_xf3_ei;
  double *PTR_J_xf3_ci;
    int PTR_J_xf3_ci_required;
    double JSVAL_xf3_ci;
  double *PTR_J_xf3_tnode;
    int PTR_J_xf3_tnode_required;
    double JSVAL_xf3_tnode;
  double *PTR_J_xf3_xf4;
    int PTR_J_xf3_xf4_required;
    double JSVAL_xf3_xf4;
  double *PTR_J_xf3_xf3;
    int PTR_J_xf3_xf3_required;
    double JSVAL_xf3_xf3;
    double JDVAL_xf3_xf3;
  double *PTR_J_xf4_bi;
    int PTR_J_xf4_bi_required;
    double JSVAL_xf4_bi;
  double *PTR_J_xf4_ci;
    int PTR_J_xf4_ci_required;
    double JSVAL_xf4_ci;
  double *PTR_J_xf4_tnode;
    int PTR_J_xf4_tnode_required;
    double JSVAL_xf4_tnode;
  double *PTR_J_xf4_ei;
    int PTR_J_xf4_ei_required;
    double JSVAL_xf4_ei;
  double *PTR_J_xf4_xf3;
    int PTR_J_xf4_xf3_required;
    double JSVAL_xf4_xf3;
  double *PTR_J_xf4_xf4;
    int PTR_J_xf4_xf4_required;
    double JSVAL_xf4_xf4;
    double JDVAL_xf4_xf4;
  double *PTR_J_s_tnode;
    int PTR_J_s_tnode_required;
    double JSVAL_s_tnode;


#define hicum2numStates 0

} hicum2instance ;


/* per model data */

typedef struct shicum2model {         /* model structure */
  int hicum2modType;        /* type index of this device type */
  struct shicum2model *hicum2nextModel; /* pointer to next possible model in linked list */
  hicum2instance * hicum2instances;  /* pointer to list of instances that have this model */
  IFuid hicum2modName;         /* pointer to the name of this model */

  /* model parameters */  int pnp;
  unsigned pnp_Given  :1;
  int npn;
  unsigned npn_Given  :1;
  double c10;
  unsigned c10_Given  :1;  /*c10*/
  double qp0;
  unsigned qp0_Given  :1;  /*qp0*/
  double ich;
  unsigned ich_Given  :1;  /*ich*/
  double hfe;
  unsigned hfe_Given  :1;  /*hfe*/
  double hfc;
  unsigned hfc_Given  :1;  /*hfc*/
  double hjei;
  unsigned hjei_Given  :1;  /*hjei*/
  double hjci;
  unsigned hjci_Given  :1;  /*hjci*/
  double ibeis;
  unsigned ibeis_Given  :1;  /*ibeis*/
  double mbei;
  unsigned mbei_Given  :1;  /*mbei*/
  double ireis;
  unsigned ireis_Given  :1;  /*ireis*/
  double mrei;
  unsigned mrei_Given  :1;  /*mrei*/
  double ibeps;
  unsigned ibeps_Given  :1;  /*ibeps*/
  double mbep;
  unsigned mbep_Given  :1;  /*mbep*/
  double ireps;
  unsigned ireps_Given  :1;  /*ireps*/
  double mrep;
  unsigned mrep_Given  :1;  /*mrep*/
  double mcf;
  unsigned mcf_Given  :1;  /*mcf*/
  double tbhrec;
  unsigned tbhrec_Given  :1;  /*tbhrec*/
  double ibcis;
  unsigned ibcis_Given  :1;  /*ibcis*/
  double mbci;
  unsigned mbci_Given  :1;  /*mbci*/
  double ibcxs;
  unsigned ibcxs_Given  :1;  /*ibcxs*/
  double mbcx;
  unsigned mbcx_Given  :1;  /*mbcx*/
  double ibets;
  unsigned ibets_Given  :1;  /*ibets*/
  double abet;
  unsigned abet_Given  :1;  /*abet*/
  int tunode;
  unsigned tunode_Given  :1;  /*tunode*/
  double favl;
  unsigned favl_Given  :1;  /*favl*/
  double qavl;
  unsigned qavl_Given  :1;  /*qavl*/
  double alfav;
  unsigned alfav_Given  :1;  /*alfav*/
  double alqav;
  unsigned alqav_Given  :1;  /*alqav*/
  double rbi0;
  unsigned rbi0_Given  :1;  /*rbi0*/
  double rbx;
  unsigned rbx_Given  :1;  /*rbx*/
  double fgeo;
  unsigned fgeo_Given  :1;  /*fgeo*/
  double fdqr0;
  unsigned fdqr0_Given  :1;  /*fdqr0*/
  double fcrbi;
  unsigned fcrbi_Given  :1;  /*fcrbi*/
  double fqi;
  unsigned fqi_Given  :1;  /*fqi*/
  double re;
  unsigned re_Given  :1;  /*re*/
  double rcx;
  unsigned rcx_Given  :1;  /*rcx*/
  double itss;
  unsigned itss_Given  :1;  /*itss*/
  double msf;
  unsigned msf_Given  :1;  /*msf*/
  double iscs;
  unsigned iscs_Given  :1;  /*iscs*/
  double msc;
  unsigned msc_Given  :1;  /*msc*/
  double tsf;
  unsigned tsf_Given  :1;  /*tsf*/
  double rsu;
  unsigned rsu_Given  :1;  /*rsu*/
  double csu;
  unsigned csu_Given  :1;  /*csu*/
  double cjei0;
  unsigned cjei0_Given  :1;  /*cjei0*/
  double vdei;
  unsigned vdei_Given  :1;  /*vdei*/
  double zei;
  unsigned zei_Given  :1;  /*zei*/
  double ajei;
  unsigned ajei_Given  :1;  /*ajei*/
  double cjep0;
  unsigned cjep0_Given  :1;  /*cjep0*/
  double vdep;
  unsigned vdep_Given  :1;  /*vdep*/
  double zep;
  unsigned zep_Given  :1;  /*zep*/
  double ajep;
  unsigned ajep_Given  :1;  /*ajep*/
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
  double fbcpar;
  unsigned fbcpar_Given  :1;  /*fbcpar*/
  double fbepar;
  unsigned fbepar_Given  :1;  /*fbepar*/
  double cjs0;
  unsigned cjs0_Given  :1;  /*cjs0*/
  double vds;
  unsigned vds_Given  :1;  /*vds*/
  double zs;
  unsigned zs_Given  :1;  /*zs*/
  double vpts;
  unsigned vpts_Given  :1;  /*vpts*/
  double t0;
  unsigned t0_Given  :1;  /*t0*/
  double dt0h;
  unsigned dt0h_Given  :1;  /*dt0h*/
  double tbvl;
  unsigned tbvl_Given  :1;  /*tbvl*/
  double tef0;
  unsigned tef0_Given  :1;  /*tef0*/
  double gtfe;
  unsigned gtfe_Given  :1;  /*gtfe*/
  double thcs;
  unsigned thcs_Given  :1;  /*thcs*/
  double ahc;
  unsigned ahc_Given  :1;  /*ahc*/
  double fthc;
  unsigned fthc_Given  :1;  /*fthc*/
  double rci0;
  unsigned rci0_Given  :1;  /*rci0*/
  double vlim;
  unsigned vlim_Given  :1;  /*vlim*/
  double vces;
  unsigned vces_Given  :1;  /*vces*/
  double vpt;
  unsigned vpt_Given  :1;  /*vpt*/
  double tr;
  unsigned tr_Given  :1;  /*tr*/
  double cbepar;
  unsigned cbepar_Given  :1;  /*cbepar*/
  double cbcpar;
  unsigned cbcpar_Given  :1;  /*cbcpar*/
  double alqf;
  unsigned alqf_Given  :1;  /*alqf*/
  double alit;
  unsigned alit_Given  :1;  /*alit*/
  int flnqs;
  unsigned flnqs_Given  :1;  /*flnqs*/
  double kf;
  unsigned kf_Given  :1;  /*kf*/
  double af;
  unsigned af_Given  :1;  /*af*/
  int cfbe;
  unsigned cfbe_Given  :1;  /*cfbe*/
  double latb;
  unsigned latb_Given  :1;  /*latb*/
  double latl;
  unsigned latl_Given  :1;  /*latl*/
  double vgb;
  unsigned vgb_Given  :1;  /*vgb*/
  double alt0;
  unsigned alt0_Given  :1;  /*alt0*/
  double kt0;
  unsigned kt0_Given  :1;  /*kt0*/
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
  double zetacx;
  unsigned zetacx_Given  :1;  /*zetacx*/
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
  double zetact;
  unsigned zetact_Given  :1;  /*zetact*/
  double zetabet;
  unsigned zetabet_Given  :1;  /*zetabet*/
  double alb;
  unsigned alb_Given  :1;  /*alb*/
  int flsh;
  unsigned flsh_Given  :1;  /*flsh*/
  double rth;
  unsigned rth_Given  :1;  /*rth*/
  double cth;
  unsigned cth_Given  :1;  /*cth*/
  double flcomp;
  unsigned flcomp_Given  :1;  /*flcomp*/
  double tnom;
  unsigned tnom_Given  :1;  /*tnom*/
  double dt;
  unsigned dt_Given  :1;  /*dt*/

  /* variable */  double VT;
  double Tdev;
  double qtt0;
  double ln_qtt0;
  double r_VgVT;
  double V_gT;
  double dT;
  double k;
  double ireis_t;
  double ibeis_t;
  double ibcxs_t;
  double ibcis_t;
  double iscs_t;
  double cjci0_t;
  double cjs0_t;
  double rci0_t;
  double vlim_t;
  double vces_t;
  double thcs_t;
  double tef0_t;
  double rbi0_t;
  double rbx_t;
  double rcx_t;
  double re_t;
  double t0_t;
  double vdei_t;
  double vdci_t;
  double vpts_t;
  double itss_t;
  double tsf_t;
  double c10_t;
  double cjei0_t;
  double qp0_t;
  double vdcx_t;
  double vptcx_t;
  double cjcx01_t;
  double cjcx02_t;
  double cratio_t;
  double ibeps_t;
  double ireps_t;
  double cjep0_t;
  double ajei_t;
  double qavl_t;
  double favl_t;
  double ibets_t;
  double abet_t;
  double vptci_t;
  double vdep_t;
  double ajep_t;
  double zetatef;
  double k1;
  double k2;
  double dvg0;
  double vge_t;
  double vgb_t;
  double vgbe_t;
  double vds_t;
  double vt0;
  double Tnom;
  double Tamb;
  double a;
  double avs;
  double zetabci;
  double zetabcxt;
  double zetasct;
  double vgbe0;
  double mg;
  double vgbe_t0;
  double vgbc0;
  double vgsc0;
  double cbcpar1;
  double cbcpar2;
  double cbepar2;
  double cbepar1;
  double Oich;
  double Ovpt;
  double Otbhrec;
  double vdj0;
  double vdjt;
  double vdt;
  double cjcx01;
  double cjcx02;


} hicum2model;
  /* flags */
typedef enum {
  hicum2_model_pnp,
  hicum2_model_npn,
  hicum2_model_c10,
  hicum2_model_qp0,
  hicum2_model_ich,
  hicum2_model_hfe,
  hicum2_model_hfc,
  hicum2_model_hjei,
  hicum2_model_hjci,
  hicum2_model_ibeis,
  hicum2_model_mbei,
  hicum2_model_ireis,
  hicum2_model_mrei,
  hicum2_model_ibeps,
  hicum2_model_mbep,
  hicum2_model_ireps,
  hicum2_model_mrep,
  hicum2_model_mcf,
  hicum2_model_tbhrec,
  hicum2_model_ibcis,
  hicum2_model_mbci,
  hicum2_model_ibcxs,
  hicum2_model_mbcx,
  hicum2_model_ibets,
  hicum2_model_abet,
  hicum2_model_tunode,
  hicum2_model_favl,
  hicum2_model_qavl,
  hicum2_model_alfav,
  hicum2_model_alqav,
  hicum2_model_rbi0,
  hicum2_model_rbx,
  hicum2_model_fgeo,
  hicum2_model_fdqr0,
  hicum2_model_fcrbi,
  hicum2_model_fqi,
  hicum2_model_re,
  hicum2_model_rcx,
  hicum2_model_itss,
  hicum2_model_msf,
  hicum2_model_iscs,
  hicum2_model_msc,
  hicum2_model_tsf,
  hicum2_model_rsu,
  hicum2_model_csu,
  hicum2_model_cjei0,
  hicum2_model_vdei,
  hicum2_model_zei,
  hicum2_model_ajei,
  hicum2_model_cjep0,
  hicum2_model_vdep,
  hicum2_model_zep,
  hicum2_model_ajep,
  hicum2_model_cjci0,
  hicum2_model_vdci,
  hicum2_model_zci,
  hicum2_model_vptci,
  hicum2_model_cjcx0,
  hicum2_model_vdcx,
  hicum2_model_zcx,
  hicum2_model_vptcx,
  hicum2_model_fbcpar,
  hicum2_model_fbepar,
  hicum2_model_cjs0,
  hicum2_model_vds,
  hicum2_model_zs,
  hicum2_model_vpts,
  hicum2_model_t0,
  hicum2_model_dt0h,
  hicum2_model_tbvl,
  hicum2_model_tef0,
  hicum2_model_gtfe,
  hicum2_model_thcs,
  hicum2_model_ahc,
  hicum2_model_fthc,
  hicum2_model_rci0,
  hicum2_model_vlim,
  hicum2_model_vces,
  hicum2_model_vpt,
  hicum2_model_tr,
  hicum2_model_cbepar,
  hicum2_model_cbcpar,
  hicum2_model_alqf,
  hicum2_model_alit,
  hicum2_model_flnqs,
  hicum2_model_kf,
  hicum2_model_af,
  hicum2_model_cfbe,
  hicum2_model_latb,
  hicum2_model_latl,
  hicum2_model_vgb,
  hicum2_model_alt0,
  hicum2_model_kt0,
  hicum2_model_zetaci,
  hicum2_model_alvs,
  hicum2_model_alces,
  hicum2_model_zetarbi,
  hicum2_model_zetarbx,
  hicum2_model_zetarcx,
  hicum2_model_zetare,
  hicum2_model_zetacx,
  hicum2_model_vge,
  hicum2_model_vgc,
  hicum2_model_vgs,
  hicum2_model_f1vg,
  hicum2_model_f2vg,
  hicum2_model_zetact,
  hicum2_model_zetabet,
  hicum2_model_alb,
  hicum2_model_flsh,
  hicum2_model_rth,
  hicum2_model_cth,
  hicum2_model_flcomp,
  hicum2_model_tnom,
  hicum2_model_dt,
  DUMMY_MODEL
} e_hicum2_model;
typedef enum {
  DUMMY_INSTANCE
} e_hicum2_instance;


#include "hicum2ext.h"

#endif /*hicum2*/
