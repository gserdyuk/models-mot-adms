/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:46:01 ***/


#ifndef psp102
#define psp102

#include "cktdefs.h"
#include "ifsim.h"
#include "gendefs.h"
#include "complex.h"
#include "noisedef.h"

#ifdef pmos
  #warning conflict: pmos is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'pmos' is also defined as a pragma.
  #warning conflict: Pragma 'pmos' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pmos' in module 'psp102'.
  #undef pmos
#endif
#ifdef nmos
  #warning conflict: nmos is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'nmos' is also defined as a pragma.
  #warning conflict: Pragma 'nmos' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'nmos' in module 'psp102'.
  #undef nmos
#endif
#ifdef LEVEL
  #warning conflict: LEVEL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LEVEL' is also defined as a pragma.
  #warning conflict: Pragma 'LEVEL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LEVEL' in module 'psp102'.
  #undef LEVEL
#endif
#ifdef TYPE
  #warning conflict: TYPE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TYPE' is also defined as a pragma.
  #warning conflict: Pragma 'TYPE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TYPE' in module 'psp102'.
  #undef TYPE
#endif
#ifdef TR
  #warning conflict: TR is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TR' is also defined as a pragma.
  #warning conflict: Pragma 'TR' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TR' in module 'psp102'.
  #undef TR
#endif
#ifdef SWIGATE
  #warning conflict: SWIGATE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SWIGATE' is also defined as a pragma.
  #warning conflict: Pragma 'SWIGATE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SWIGATE' in module 'psp102'.
  #undef SWIGATE
#endif
#ifdef SWIMPACT
  #warning conflict: SWIMPACT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SWIMPACT' is also defined as a pragma.
  #warning conflict: Pragma 'SWIMPACT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SWIMPACT' in module 'psp102'.
  #undef SWIMPACT
#endif
#ifdef SWGIDL
  #warning conflict: SWGIDL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SWGIDL' is also defined as a pragma.
  #warning conflict: Pragma 'SWGIDL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SWGIDL' in module 'psp102'.
  #undef SWGIDL
#endif
#ifdef SWJUNCAP
  #warning conflict: SWJUNCAP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SWJUNCAP' is also defined as a pragma.
  #warning conflict: Pragma 'SWJUNCAP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SWJUNCAP' in module 'psp102'.
  #undef SWJUNCAP
#endif
#ifdef QMC
  #warning conflict: QMC is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'QMC' is also defined as a pragma.
  #warning conflict: Pragma 'QMC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'QMC' in module 'psp102'.
  #undef QMC
#endif
#ifdef LVARO
  #warning conflict: LVARO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LVARO' is also defined as a pragma.
  #warning conflict: Pragma 'LVARO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LVARO' in module 'psp102'.
  #undef LVARO
#endif
#ifdef LVARL
  #warning conflict: LVARL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LVARL' is also defined as a pragma.
  #warning conflict: Pragma 'LVARL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LVARL' in module 'psp102'.
  #undef LVARL
#endif
#ifdef LVARW
  #warning conflict: LVARW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LVARW' is also defined as a pragma.
  #warning conflict: Pragma 'LVARW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LVARW' in module 'psp102'.
  #undef LVARW
#endif
#ifdef LAP
  #warning conflict: LAP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LAP' is also defined as a pragma.
  #warning conflict: Pragma 'LAP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LAP' in module 'psp102'.
  #undef LAP
#endif
#ifdef WVARO
  #warning conflict: WVARO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WVARO' is also defined as a pragma.
  #warning conflict: Pragma 'WVARO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WVARO' in module 'psp102'.
  #undef WVARO
#endif
#ifdef WVARL
  #warning conflict: WVARL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WVARL' is also defined as a pragma.
  #warning conflict: Pragma 'WVARL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WVARL' in module 'psp102'.
  #undef WVARL
#endif
#ifdef WVARW
  #warning conflict: WVARW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WVARW' is also defined as a pragma.
  #warning conflict: Pragma 'WVARW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WVARW' in module 'psp102'.
  #undef WVARW
#endif
#ifdef WOT
  #warning conflict: WOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WOT' is also defined as a pragma.
  #warning conflict: Pragma 'WOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WOT' in module 'psp102'.
  #undef WOT
#endif
#ifdef DLQ
  #warning conflict: DLQ is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DLQ' is also defined as a pragma.
  #warning conflict: Pragma 'DLQ' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DLQ' in module 'psp102'.
  #undef DLQ
#endif
#ifdef DWQ
  #warning conflict: DWQ is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DWQ' is also defined as a pragma.
  #warning conflict: Pragma 'DWQ' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DWQ' in module 'psp102'.
  #undef DWQ
#endif
#ifdef VFBO
  #warning conflict: VFBO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VFBO' is also defined as a pragma.
  #warning conflict: Pragma 'VFBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VFBO' in module 'psp102'.
  #undef VFBO
#endif
#ifdef VFBL
  #warning conflict: VFBL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VFBL' is also defined as a pragma.
  #warning conflict: Pragma 'VFBL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VFBL' in module 'psp102'.
  #undef VFBL
#endif
#ifdef VFBW
  #warning conflict: VFBW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VFBW' is also defined as a pragma.
  #warning conflict: Pragma 'VFBW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VFBW' in module 'psp102'.
  #undef VFBW
#endif
#ifdef VFBLW
  #warning conflict: VFBLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VFBLW' is also defined as a pragma.
  #warning conflict: Pragma 'VFBLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VFBLW' in module 'psp102'.
  #undef VFBLW
#endif
#ifdef STVFBO
  #warning conflict: STVFBO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STVFBO' is also defined as a pragma.
  #warning conflict: Pragma 'STVFBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STVFBO' in module 'psp102'.
  #undef STVFBO
#endif
#ifdef STVFBL
  #warning conflict: STVFBL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STVFBL' is also defined as a pragma.
  #warning conflict: Pragma 'STVFBL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STVFBL' in module 'psp102'.
  #undef STVFBL
#endif
#ifdef STVFBW
  #warning conflict: STVFBW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STVFBW' is also defined as a pragma.
  #warning conflict: Pragma 'STVFBW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STVFBW' in module 'psp102'.
  #undef STVFBW
#endif
#ifdef STVFBLW
  #warning conflict: STVFBLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STVFBLW' is also defined as a pragma.
  #warning conflict: Pragma 'STVFBLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STVFBLW' in module 'psp102'.
  #undef STVFBLW
#endif
#ifdef TOXO
  #warning conflict: TOXO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TOXO' is also defined as a pragma.
  #warning conflict: Pragma 'TOXO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TOXO' in module 'psp102'.
  #undef TOXO
#endif
#ifdef NSUBO
  #warning conflict: NSUBO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NSUBO' is also defined as a pragma.
  #warning conflict: Pragma 'NSUBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NSUBO' in module 'psp102'.
  #undef NSUBO
#endif
#ifdef NSUBW
  #warning conflict: NSUBW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NSUBW' is also defined as a pragma.
  #warning conflict: Pragma 'NSUBW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NSUBW' in module 'psp102'.
  #undef NSUBW
#endif
#ifdef WSEG
  #warning conflict: WSEG is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WSEG' is also defined as a pragma.
  #warning conflict: Pragma 'WSEG' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WSEG' in module 'psp102'.
  #undef WSEG
#endif
#ifdef NPCK
  #warning conflict: NPCK is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NPCK' is also defined as a pragma.
  #warning conflict: Pragma 'NPCK' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NPCK' in module 'psp102'.
  #undef NPCK
#endif
#ifdef NPCKW
  #warning conflict: NPCKW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NPCKW' is also defined as a pragma.
  #warning conflict: Pragma 'NPCKW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NPCKW' in module 'psp102'.
  #undef NPCKW
#endif
#ifdef WSEGP
  #warning conflict: WSEGP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WSEGP' is also defined as a pragma.
  #warning conflict: Pragma 'WSEGP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WSEGP' in module 'psp102'.
  #undef WSEGP
#endif
#ifdef LPCK
  #warning conflict: LPCK is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LPCK' is also defined as a pragma.
  #warning conflict: Pragma 'LPCK' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LPCK' in module 'psp102'.
  #undef LPCK
#endif
#ifdef LPCKW
  #warning conflict: LPCKW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LPCKW' is also defined as a pragma.
  #warning conflict: Pragma 'LPCKW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LPCKW' in module 'psp102'.
  #undef LPCKW
#endif
#ifdef FOL1
  #warning conflict: FOL1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FOL1' is also defined as a pragma.
  #warning conflict: Pragma 'FOL1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FOL1' in module 'psp102'.
  #undef FOL1
#endif
#ifdef FOL2
  #warning conflict: FOL2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FOL2' is also defined as a pragma.
  #warning conflict: Pragma 'FOL2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FOL2' in module 'psp102'.
  #undef FOL2
#endif
#ifdef VNSUBO
  #warning conflict: VNSUBO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VNSUBO' is also defined as a pragma.
  #warning conflict: Pragma 'VNSUBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VNSUBO' in module 'psp102'.
  #undef VNSUBO
#endif
#ifdef NSLPO
  #warning conflict: NSLPO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NSLPO' is also defined as a pragma.
  #warning conflict: Pragma 'NSLPO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NSLPO' in module 'psp102'.
  #undef NSLPO
#endif
#ifdef DNSUBO
  #warning conflict: DNSUBO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DNSUBO' is also defined as a pragma.
  #warning conflict: Pragma 'DNSUBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DNSUBO' in module 'psp102'.
  #undef DNSUBO
#endif
#ifdef DPHIBO
  #warning conflict: DPHIBO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DPHIBO' is also defined as a pragma.
  #warning conflict: Pragma 'DPHIBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DPHIBO' in module 'psp102'.
  #undef DPHIBO
#endif
#ifdef DPHIBL
  #warning conflict: DPHIBL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DPHIBL' is also defined as a pragma.
  #warning conflict: Pragma 'DPHIBL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DPHIBL' in module 'psp102'.
  #undef DPHIBL
#endif
#ifdef DPHIBLEXP
  #warning conflict: DPHIBLEXP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DPHIBLEXP' is also defined as a pragma.
  #warning conflict: Pragma 'DPHIBLEXP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DPHIBLEXP' in module 'psp102'.
  #undef DPHIBLEXP
#endif
#ifdef DPHIBW
  #warning conflict: DPHIBW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DPHIBW' is also defined as a pragma.
  #warning conflict: Pragma 'DPHIBW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DPHIBW' in module 'psp102'.
  #undef DPHIBW
#endif
#ifdef DPHIBLW
  #warning conflict: DPHIBLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DPHIBLW' is also defined as a pragma.
  #warning conflict: Pragma 'DPHIBLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DPHIBLW' in module 'psp102'.
  #undef DPHIBLW
#endif
#ifdef NPO
  #warning conflict: NPO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NPO' is also defined as a pragma.
  #warning conflict: Pragma 'NPO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NPO' in module 'psp102'.
  #undef NPO
#endif
#ifdef NPL
  #warning conflict: NPL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NPL' is also defined as a pragma.
  #warning conflict: Pragma 'NPL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NPL' in module 'psp102'.
  #undef NPL
#endif
#ifdef CTO
  #warning conflict: CTO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CTO' is also defined as a pragma.
  #warning conflict: Pragma 'CTO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTO' in module 'psp102'.
  #undef CTO
#endif
#ifdef CTL
  #warning conflict: CTL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CTL' is also defined as a pragma.
  #warning conflict: Pragma 'CTL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTL' in module 'psp102'.
  #undef CTL
#endif
#ifdef CTLEXP
  #warning conflict: CTLEXP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CTLEXP' is also defined as a pragma.
  #warning conflict: Pragma 'CTLEXP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTLEXP' in module 'psp102'.
  #undef CTLEXP
#endif
#ifdef CTW
  #warning conflict: CTW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CTW' is also defined as a pragma.
  #warning conflict: Pragma 'CTW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTW' in module 'psp102'.
  #undef CTW
#endif
#ifdef CTLW
  #warning conflict: CTLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CTLW' is also defined as a pragma.
  #warning conflict: Pragma 'CTLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTLW' in module 'psp102'.
  #undef CTLW
#endif
#ifdef TOXOVO
  #warning conflict: TOXOVO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TOXOVO' is also defined as a pragma.
  #warning conflict: Pragma 'TOXOVO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TOXOVO' in module 'psp102'.
  #undef TOXOVO
#endif
#ifdef LOV
  #warning conflict: LOV is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LOV' is also defined as a pragma.
  #warning conflict: Pragma 'LOV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LOV' in module 'psp102'.
  #undef LOV
#endif
#ifdef NOVO
  #warning conflict: NOVO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NOVO' is also defined as a pragma.
  #warning conflict: Pragma 'NOVO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NOVO' in module 'psp102'.
  #undef NOVO
#endif
#ifdef CFL
  #warning conflict: CFL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CFL' is also defined as a pragma.
  #warning conflict: Pragma 'CFL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CFL' in module 'psp102'.
  #undef CFL
#endif
#ifdef CFLEXP
  #warning conflict: CFLEXP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CFLEXP' is also defined as a pragma.
  #warning conflict: Pragma 'CFLEXP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CFLEXP' in module 'psp102'.
  #undef CFLEXP
#endif
#ifdef CFW
  #warning conflict: CFW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CFW' is also defined as a pragma.
  #warning conflict: Pragma 'CFW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CFW' in module 'psp102'.
  #undef CFW
#endif
#ifdef CFBO
  #warning conflict: CFBO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CFBO' is also defined as a pragma.
  #warning conflict: Pragma 'CFBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CFBO' in module 'psp102'.
  #undef CFBO
#endif
#ifdef UO
  #warning conflict: UO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'UO' is also defined as a pragma.
  #warning conflict: Pragma 'UO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'UO' in module 'psp102'.
  #undef UO
#endif
#ifdef FBET1
  #warning conflict: FBET1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FBET1' is also defined as a pragma.
  #warning conflict: Pragma 'FBET1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FBET1' in module 'psp102'.
  #undef FBET1
#endif
#ifdef FBET1W
  #warning conflict: FBET1W is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FBET1W' is also defined as a pragma.
  #warning conflict: Pragma 'FBET1W' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FBET1W' in module 'psp102'.
  #undef FBET1W
#endif
#ifdef LP1
  #warning conflict: LP1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LP1' is also defined as a pragma.
  #warning conflict: Pragma 'LP1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LP1' in module 'psp102'.
  #undef LP1
#endif
#ifdef LP1W
  #warning conflict: LP1W is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LP1W' is also defined as a pragma.
  #warning conflict: Pragma 'LP1W' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LP1W' in module 'psp102'.
  #undef LP1W
#endif
#ifdef FBET2
  #warning conflict: FBET2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FBET2' is also defined as a pragma.
  #warning conflict: Pragma 'FBET2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FBET2' in module 'psp102'.
  #undef FBET2
#endif
#ifdef LP2
  #warning conflict: LP2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LP2' is also defined as a pragma.
  #warning conflict: Pragma 'LP2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LP2' in module 'psp102'.
  #undef LP2
#endif
#ifdef BETW1
  #warning conflict: BETW1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'BETW1' is also defined as a pragma.
  #warning conflict: Pragma 'BETW1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BETW1' in module 'psp102'.
  #undef BETW1
#endif
#ifdef BETW2
  #warning conflict: BETW2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'BETW2' is also defined as a pragma.
  #warning conflict: Pragma 'BETW2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BETW2' in module 'psp102'.
  #undef BETW2
#endif
#ifdef WBET
  #warning conflict: WBET is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WBET' is also defined as a pragma.
  #warning conflict: Pragma 'WBET' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WBET' in module 'psp102'.
  #undef WBET
#endif
#ifdef STBETO
  #warning conflict: STBETO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STBETO' is also defined as a pragma.
  #warning conflict: Pragma 'STBETO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STBETO' in module 'psp102'.
  #undef STBETO
#endif
#ifdef STBETL
  #warning conflict: STBETL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STBETL' is also defined as a pragma.
  #warning conflict: Pragma 'STBETL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STBETL' in module 'psp102'.
  #undef STBETL
#endif
#ifdef STBETW
  #warning conflict: STBETW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STBETW' is also defined as a pragma.
  #warning conflict: Pragma 'STBETW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STBETW' in module 'psp102'.
  #undef STBETW
#endif
#ifdef STBETLW
  #warning conflict: STBETLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STBETLW' is also defined as a pragma.
  #warning conflict: Pragma 'STBETLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STBETLW' in module 'psp102'.
  #undef STBETLW
#endif
#ifdef MUEO
  #warning conflict: MUEO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MUEO' is also defined as a pragma.
  #warning conflict: Pragma 'MUEO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MUEO' in module 'psp102'.
  #undef MUEO
#endif
#ifdef MUEW
  #warning conflict: MUEW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MUEW' is also defined as a pragma.
  #warning conflict: Pragma 'MUEW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MUEW' in module 'psp102'.
  #undef MUEW
#endif
#ifdef STMUEO
  #warning conflict: STMUEO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STMUEO' is also defined as a pragma.
  #warning conflict: Pragma 'STMUEO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STMUEO' in module 'psp102'.
  #undef STMUEO
#endif
#ifdef THEMUO
  #warning conflict: THEMUO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THEMUO' is also defined as a pragma.
  #warning conflict: Pragma 'THEMUO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THEMUO' in module 'psp102'.
  #undef THEMUO
#endif
#ifdef STTHEMUO
  #warning conflict: STTHEMUO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STTHEMUO' is also defined as a pragma.
  #warning conflict: Pragma 'STTHEMUO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STTHEMUO' in module 'psp102'.
  #undef STTHEMUO
#endif
#ifdef CSO
  #warning conflict: CSO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CSO' is also defined as a pragma.
  #warning conflict: Pragma 'CSO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CSO' in module 'psp102'.
  #undef CSO
#endif
#ifdef CSL
  #warning conflict: CSL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CSL' is also defined as a pragma.
  #warning conflict: Pragma 'CSL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CSL' in module 'psp102'.
  #undef CSL
#endif
#ifdef CSLEXP
  #warning conflict: CSLEXP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CSLEXP' is also defined as a pragma.
  #warning conflict: Pragma 'CSLEXP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CSLEXP' in module 'psp102'.
  #undef CSLEXP
#endif
#ifdef CSW
  #warning conflict: CSW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CSW' is also defined as a pragma.
  #warning conflict: Pragma 'CSW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CSW' in module 'psp102'.
  #undef CSW
#endif
#ifdef CSLW
  #warning conflict: CSLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CSLW' is also defined as a pragma.
  #warning conflict: Pragma 'CSLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CSLW' in module 'psp102'.
  #undef CSLW
#endif
#ifdef STCSO
  #warning conflict: STCSO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STCSO' is also defined as a pragma.
  #warning conflict: Pragma 'STCSO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STCSO' in module 'psp102'.
  #undef STCSO
#endif
#ifdef XCORO
  #warning conflict: XCORO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'XCORO' is also defined as a pragma.
  #warning conflict: Pragma 'XCORO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XCORO' in module 'psp102'.
  #undef XCORO
#endif
#ifdef XCORL
  #warning conflict: XCORL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'XCORL' is also defined as a pragma.
  #warning conflict: Pragma 'XCORL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XCORL' in module 'psp102'.
  #undef XCORL
#endif
#ifdef XCORW
  #warning conflict: XCORW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'XCORW' is also defined as a pragma.
  #warning conflict: Pragma 'XCORW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XCORW' in module 'psp102'.
  #undef XCORW
#endif
#ifdef XCORLW
  #warning conflict: XCORLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'XCORLW' is also defined as a pragma.
  #warning conflict: Pragma 'XCORLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XCORLW' in module 'psp102'.
  #undef XCORLW
#endif
#ifdef STXCORO
  #warning conflict: STXCORO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STXCORO' is also defined as a pragma.
  #warning conflict: Pragma 'STXCORO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STXCORO' in module 'psp102'.
  #undef STXCORO
#endif
#ifdef FETAO
  #warning conflict: FETAO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FETAO' is also defined as a pragma.
  #warning conflict: Pragma 'FETAO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FETAO' in module 'psp102'.
  #undef FETAO
#endif
#ifdef RSW1
  #warning conflict: RSW1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'RSW1' is also defined as a pragma.
  #warning conflict: Pragma 'RSW1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RSW1' in module 'psp102'.
  #undef RSW1
#endif
#ifdef RSW2
  #warning conflict: RSW2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'RSW2' is also defined as a pragma.
  #warning conflict: Pragma 'RSW2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RSW2' in module 'psp102'.
  #undef RSW2
#endif
#ifdef STRSO
  #warning conflict: STRSO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STRSO' is also defined as a pragma.
  #warning conflict: Pragma 'STRSO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STRSO' in module 'psp102'.
  #undef STRSO
#endif
#ifdef RSBO
  #warning conflict: RSBO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'RSBO' is also defined as a pragma.
  #warning conflict: Pragma 'RSBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RSBO' in module 'psp102'.
  #undef RSBO
#endif
#ifdef RSGO
  #warning conflict: RSGO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'RSGO' is also defined as a pragma.
  #warning conflict: Pragma 'RSGO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RSGO' in module 'psp102'.
  #undef RSGO
#endif
#ifdef THESATO
  #warning conflict: THESATO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESATO' is also defined as a pragma.
  #warning conflict: Pragma 'THESATO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESATO' in module 'psp102'.
  #undef THESATO
#endif
#ifdef THESATL
  #warning conflict: THESATL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESATL' is also defined as a pragma.
  #warning conflict: Pragma 'THESATL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESATL' in module 'psp102'.
  #undef THESATL
#endif
#ifdef THESATLEXP
  #warning conflict: THESATLEXP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESATLEXP' is also defined as a pragma.
  #warning conflict: Pragma 'THESATLEXP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESATLEXP' in module 'psp102'.
  #undef THESATLEXP
#endif
#ifdef THESATW
  #warning conflict: THESATW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESATW' is also defined as a pragma.
  #warning conflict: Pragma 'THESATW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESATW' in module 'psp102'.
  #undef THESATW
#endif
#ifdef THESATLW
  #warning conflict: THESATLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESATLW' is also defined as a pragma.
  #warning conflict: Pragma 'THESATLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESATLW' in module 'psp102'.
  #undef THESATLW
#endif
#ifdef STTHESATO
  #warning conflict: STTHESATO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STTHESATO' is also defined as a pragma.
  #warning conflict: Pragma 'STTHESATO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STTHESATO' in module 'psp102'.
  #undef STTHESATO
#endif
#ifdef STTHESATL
  #warning conflict: STTHESATL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STTHESATL' is also defined as a pragma.
  #warning conflict: Pragma 'STTHESATL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STTHESATL' in module 'psp102'.
  #undef STTHESATL
#endif
#ifdef STTHESATW
  #warning conflict: STTHESATW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STTHESATW' is also defined as a pragma.
  #warning conflict: Pragma 'STTHESATW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STTHESATW' in module 'psp102'.
  #undef STTHESATW
#endif
#ifdef STTHESATLW
  #warning conflict: STTHESATLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STTHESATLW' is also defined as a pragma.
  #warning conflict: Pragma 'STTHESATLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STTHESATLW' in module 'psp102'.
  #undef STTHESATLW
#endif
#ifdef THESATBO
  #warning conflict: THESATBO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESATBO' is also defined as a pragma.
  #warning conflict: Pragma 'THESATBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESATBO' in module 'psp102'.
  #undef THESATBO
#endif
#ifdef THESATGO
  #warning conflict: THESATGO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESATGO' is also defined as a pragma.
  #warning conflict: Pragma 'THESATGO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESATGO' in module 'psp102'.
  #undef THESATGO
#endif
#ifdef AXO
  #warning conflict: AXO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'AXO' is also defined as a pragma.
  #warning conflict: Pragma 'AXO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AXO' in module 'psp102'.
  #undef AXO
#endif
#ifdef AXL
  #warning conflict: AXL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'AXL' is also defined as a pragma.
  #warning conflict: Pragma 'AXL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AXL' in module 'psp102'.
  #undef AXL
#endif
#ifdef ALPL
  #warning conflict: ALPL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALPL' is also defined as a pragma.
  #warning conflict: Pragma 'ALPL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALPL' in module 'psp102'.
  #undef ALPL
#endif
#ifdef ALPLEXP
  #warning conflict: ALPLEXP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALPLEXP' is also defined as a pragma.
  #warning conflict: Pragma 'ALPLEXP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALPLEXP' in module 'psp102'.
  #undef ALPLEXP
#endif
#ifdef ALPW
  #warning conflict: ALPW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALPW' is also defined as a pragma.
  #warning conflict: Pragma 'ALPW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALPW' in module 'psp102'.
  #undef ALPW
#endif
#ifdef ALP1L1
  #warning conflict: ALP1L1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP1L1' is also defined as a pragma.
  #warning conflict: Pragma 'ALP1L1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP1L1' in module 'psp102'.
  #undef ALP1L1
#endif
#ifdef ALP1LEXP
  #warning conflict: ALP1LEXP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP1LEXP' is also defined as a pragma.
  #warning conflict: Pragma 'ALP1LEXP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP1LEXP' in module 'psp102'.
  #undef ALP1LEXP
#endif
#ifdef ALP1L2
  #warning conflict: ALP1L2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP1L2' is also defined as a pragma.
  #warning conflict: Pragma 'ALP1L2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP1L2' in module 'psp102'.
  #undef ALP1L2
#endif
#ifdef ALP1W
  #warning conflict: ALP1W is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP1W' is also defined as a pragma.
  #warning conflict: Pragma 'ALP1W' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP1W' in module 'psp102'.
  #undef ALP1W
#endif
#ifdef ALP2L1
  #warning conflict: ALP2L1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP2L1' is also defined as a pragma.
  #warning conflict: Pragma 'ALP2L1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP2L1' in module 'psp102'.
  #undef ALP2L1
#endif
#ifdef ALP2LEXP
  #warning conflict: ALP2LEXP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP2LEXP' is also defined as a pragma.
  #warning conflict: Pragma 'ALP2LEXP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP2LEXP' in module 'psp102'.
  #undef ALP2LEXP
#endif
#ifdef ALP2L2
  #warning conflict: ALP2L2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP2L2' is also defined as a pragma.
  #warning conflict: Pragma 'ALP2L2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP2L2' in module 'psp102'.
  #undef ALP2L2
#endif
#ifdef ALP2W
  #warning conflict: ALP2W is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP2W' is also defined as a pragma.
  #warning conflict: Pragma 'ALP2W' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP2W' in module 'psp102'.
  #undef ALP2W
#endif
#ifdef VPO
  #warning conflict: VPO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VPO' is also defined as a pragma.
  #warning conflict: Pragma 'VPO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VPO' in module 'psp102'.
  #undef VPO
#endif
#ifdef A1O
  #warning conflict: A1O is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A1O' is also defined as a pragma.
  #warning conflict: Pragma 'A1O' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A1O' in module 'psp102'.
  #undef A1O
#endif
#ifdef A1L
  #warning conflict: A1L is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A1L' is also defined as a pragma.
  #warning conflict: Pragma 'A1L' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A1L' in module 'psp102'.
  #undef A1L
#endif
#ifdef A1W
  #warning conflict: A1W is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A1W' is also defined as a pragma.
  #warning conflict: Pragma 'A1W' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A1W' in module 'psp102'.
  #undef A1W
#endif
#ifdef A2O
  #warning conflict: A2O is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A2O' is also defined as a pragma.
  #warning conflict: Pragma 'A2O' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A2O' in module 'psp102'.
  #undef A2O
#endif
#ifdef STA2O
  #warning conflict: STA2O is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STA2O' is also defined as a pragma.
  #warning conflict: Pragma 'STA2O' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STA2O' in module 'psp102'.
  #undef STA2O
#endif
#ifdef A3O
  #warning conflict: A3O is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A3O' is also defined as a pragma.
  #warning conflict: Pragma 'A3O' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A3O' in module 'psp102'.
  #undef A3O
#endif
#ifdef A3L
  #warning conflict: A3L is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A3L' is also defined as a pragma.
  #warning conflict: Pragma 'A3L' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A3L' in module 'psp102'.
  #undef A3L
#endif
#ifdef A3W
  #warning conflict: A3W is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A3W' is also defined as a pragma.
  #warning conflict: Pragma 'A3W' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A3W' in module 'psp102'.
  #undef A3W
#endif
#ifdef A4O
  #warning conflict: A4O is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A4O' is also defined as a pragma.
  #warning conflict: Pragma 'A4O' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A4O' in module 'psp102'.
  #undef A4O
#endif
#ifdef A4L
  #warning conflict: A4L is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A4L' is also defined as a pragma.
  #warning conflict: Pragma 'A4L' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A4L' in module 'psp102'.
  #undef A4L
#endif
#ifdef A4W
  #warning conflict: A4W is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A4W' is also defined as a pragma.
  #warning conflict: Pragma 'A4W' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A4W' in module 'psp102'.
  #undef A4W
#endif
#ifdef GCOO
  #warning conflict: GCOO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GCOO' is also defined as a pragma.
  #warning conflict: Pragma 'GCOO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GCOO' in module 'psp102'.
  #undef GCOO
#endif
#ifdef IGINVLW
  #warning conflict: IGINVLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IGINVLW' is also defined as a pragma.
  #warning conflict: Pragma 'IGINVLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IGINVLW' in module 'psp102'.
  #undef IGINVLW
#endif
#ifdef IGOVW
  #warning conflict: IGOVW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IGOVW' is also defined as a pragma.
  #warning conflict: Pragma 'IGOVW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IGOVW' in module 'psp102'.
  #undef IGOVW
#endif
#ifdef STIGO
  #warning conflict: STIGO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STIGO' is also defined as a pragma.
  #warning conflict: Pragma 'STIGO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STIGO' in module 'psp102'.
  #undef STIGO
#endif
#ifdef GC2O
  #warning conflict: GC2O is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GC2O' is also defined as a pragma.
  #warning conflict: Pragma 'GC2O' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GC2O' in module 'psp102'.
  #undef GC2O
#endif
#ifdef GC3O
  #warning conflict: GC3O is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GC3O' is also defined as a pragma.
  #warning conflict: Pragma 'GC3O' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GC3O' in module 'psp102'.
  #undef GC3O
#endif
#ifdef CHIBO
  #warning conflict: CHIBO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CHIBO' is also defined as a pragma.
  #warning conflict: Pragma 'CHIBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CHIBO' in module 'psp102'.
  #undef CHIBO
#endif
#ifdef AGIDLW
  #warning conflict: AGIDLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'AGIDLW' is also defined as a pragma.
  #warning conflict: Pragma 'AGIDLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AGIDLW' in module 'psp102'.
  #undef AGIDLW
#endif
#ifdef BGIDLO
  #warning conflict: BGIDLO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'BGIDLO' is also defined as a pragma.
  #warning conflict: Pragma 'BGIDLO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BGIDLO' in module 'psp102'.
  #undef BGIDLO
#endif
#ifdef STBGIDLO
  #warning conflict: STBGIDLO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STBGIDLO' is also defined as a pragma.
  #warning conflict: Pragma 'STBGIDLO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STBGIDLO' in module 'psp102'.
  #undef STBGIDLO
#endif
#ifdef CGIDLO
  #warning conflict: CGIDLO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CGIDLO' is also defined as a pragma.
  #warning conflict: Pragma 'CGIDLO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGIDLO' in module 'psp102'.
  #undef CGIDLO
#endif
#ifdef CGBOVL
  #warning conflict: CGBOVL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CGBOVL' is also defined as a pragma.
  #warning conflict: Pragma 'CGBOVL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGBOVL' in module 'psp102'.
  #undef CGBOVL
#endif
#ifdef CFRW
  #warning conflict: CFRW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CFRW' is also defined as a pragma.
  #warning conflict: Pragma 'CFRW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CFRW' in module 'psp102'.
  #undef CFRW
#endif
#ifdef FNTO
  #warning conflict: FNTO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FNTO' is also defined as a pragma.
  #warning conflict: Pragma 'FNTO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FNTO' in module 'psp102'.
  #undef FNTO
#endif
#ifdef NFALW
  #warning conflict: NFALW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NFALW' is also defined as a pragma.
  #warning conflict: Pragma 'NFALW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NFALW' in module 'psp102'.
  #undef NFALW
#endif
#ifdef NFBLW
  #warning conflict: NFBLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NFBLW' is also defined as a pragma.
  #warning conflict: Pragma 'NFBLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NFBLW' in module 'psp102'.
  #undef NFBLW
#endif
#ifdef NFCLW
  #warning conflict: NFCLW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NFCLW' is also defined as a pragma.
  #warning conflict: Pragma 'NFCLW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NFCLW' in module 'psp102'.
  #undef NFCLW
#endif
#ifdef DTA
  #warning conflict: DTA is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DTA' is also defined as a pragma.
  #warning conflict: Pragma 'DTA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DTA' in module 'psp102'.
  #undef DTA
#endif
#ifdef SAREF
  #warning conflict: SAREF is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SAREF' is also defined as a pragma.
  #warning conflict: Pragma 'SAREF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SAREF' in module 'psp102'.
  #undef SAREF
#endif
#ifdef SBREF
  #warning conflict: SBREF is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SBREF' is also defined as a pragma.
  #warning conflict: Pragma 'SBREF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SBREF' in module 'psp102'.
  #undef SBREF
#endif
#ifdef WLOD
  #warning conflict: WLOD is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WLOD' is also defined as a pragma.
  #warning conflict: Pragma 'WLOD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WLOD' in module 'psp102'.
  #undef WLOD
#endif
#ifdef KUO
  #warning conflict: KUO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'KUO' is also defined as a pragma.
  #warning conflict: Pragma 'KUO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KUO' in module 'psp102'.
  #undef KUO
#endif
#ifdef KVSAT
  #warning conflict: KVSAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'KVSAT' is also defined as a pragma.
  #warning conflict: Pragma 'KVSAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KVSAT' in module 'psp102'.
  #undef KVSAT
#endif
#ifdef TKUO
  #warning conflict: TKUO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TKUO' is also defined as a pragma.
  #warning conflict: Pragma 'TKUO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TKUO' in module 'psp102'.
  #undef TKUO
#endif
#ifdef LKUO
  #warning conflict: LKUO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LKUO' is also defined as a pragma.
  #warning conflict: Pragma 'LKUO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LKUO' in module 'psp102'.
  #undef LKUO
#endif
#ifdef WKUO
  #warning conflict: WKUO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WKUO' is also defined as a pragma.
  #warning conflict: Pragma 'WKUO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WKUO' in module 'psp102'.
  #undef WKUO
#endif
#ifdef PKUO
  #warning conflict: PKUO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PKUO' is also defined as a pragma.
  #warning conflict: Pragma 'PKUO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PKUO' in module 'psp102'.
  #undef PKUO
#endif
#ifdef LLODKUO
  #warning conflict: LLODKUO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LLODKUO' is also defined as a pragma.
  #warning conflict: Pragma 'LLODKUO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LLODKUO' in module 'psp102'.
  #undef LLODKUO
#endif
#ifdef WLODKUO
  #warning conflict: WLODKUO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WLODKUO' is also defined as a pragma.
  #warning conflict: Pragma 'WLODKUO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WLODKUO' in module 'psp102'.
  #undef WLODKUO
#endif
#ifdef KVTHO
  #warning conflict: KVTHO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'KVTHO' is also defined as a pragma.
  #warning conflict: Pragma 'KVTHO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KVTHO' in module 'psp102'.
  #undef KVTHO
#endif
#ifdef LKVTHO
  #warning conflict: LKVTHO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LKVTHO' is also defined as a pragma.
  #warning conflict: Pragma 'LKVTHO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LKVTHO' in module 'psp102'.
  #undef LKVTHO
#endif
#ifdef WKVTHO
  #warning conflict: WKVTHO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WKVTHO' is also defined as a pragma.
  #warning conflict: Pragma 'WKVTHO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WKVTHO' in module 'psp102'.
  #undef WKVTHO
#endif
#ifdef PKVTHO
  #warning conflict: PKVTHO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PKVTHO' is also defined as a pragma.
  #warning conflict: Pragma 'PKVTHO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PKVTHO' in module 'psp102'.
  #undef PKVTHO
#endif
#ifdef LLODVTH
  #warning conflict: LLODVTH is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LLODVTH' is also defined as a pragma.
  #warning conflict: Pragma 'LLODVTH' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LLODVTH' in module 'psp102'.
  #undef LLODVTH
#endif
#ifdef WLODVTH
  #warning conflict: WLODVTH is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WLODVTH' is also defined as a pragma.
  #warning conflict: Pragma 'WLODVTH' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WLODVTH' in module 'psp102'.
  #undef WLODVTH
#endif
#ifdef STETAO
  #warning conflict: STETAO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STETAO' is also defined as a pragma.
  #warning conflict: Pragma 'STETAO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STETAO' in module 'psp102'.
  #undef STETAO
#endif
#ifdef LODETAO
  #warning conflict: LODETAO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LODETAO' is also defined as a pragma.
  #warning conflict: Pragma 'LODETAO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LODETAO' in module 'psp102'.
  #undef LODETAO
#endif
#ifdef TRJ
  #warning conflict: TRJ is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TRJ' is also defined as a pragma.
  #warning conflict: Pragma 'TRJ' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TRJ' in module 'psp102'.
  #undef TRJ
#endif
#ifdef IMAX
  #warning conflict: IMAX is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IMAX' is also defined as a pragma.
  #warning conflict: Pragma 'IMAX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IMAX' in module 'psp102'.
  #undef IMAX
#endif
#ifdef CJORBOT
  #warning conflict: CJORBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CJORBOT' is also defined as a pragma.
  #warning conflict: Pragma 'CJORBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJORBOT' in module 'psp102'.
  #undef CJORBOT
#endif
#ifdef CJORSTI
  #warning conflict: CJORSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CJORSTI' is also defined as a pragma.
  #warning conflict: Pragma 'CJORSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJORSTI' in module 'psp102'.
  #undef CJORSTI
#endif
#ifdef CJORGAT
  #warning conflict: CJORGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CJORGAT' is also defined as a pragma.
  #warning conflict: Pragma 'CJORGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJORGAT' in module 'psp102'.
  #undef CJORGAT
#endif
#ifdef VBIRBOT
  #warning conflict: VBIRBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBIRBOT' is also defined as a pragma.
  #warning conflict: Pragma 'VBIRBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBIRBOT' in module 'psp102'.
  #undef VBIRBOT
#endif
#ifdef VBIRSTI
  #warning conflict: VBIRSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBIRSTI' is also defined as a pragma.
  #warning conflict: Pragma 'VBIRSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBIRSTI' in module 'psp102'.
  #undef VBIRSTI
#endif
#ifdef VBIRGAT
  #warning conflict: VBIRGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBIRGAT' is also defined as a pragma.
  #warning conflict: Pragma 'VBIRGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBIRGAT' in module 'psp102'.
  #undef VBIRGAT
#endif
#ifdef PBOT
  #warning conflict: PBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PBOT' is also defined as a pragma.
  #warning conflict: Pragma 'PBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PBOT' in module 'psp102'.
  #undef PBOT
#endif
#ifdef PSTI
  #warning conflict: PSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PSTI' is also defined as a pragma.
  #warning conflict: Pragma 'PSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PSTI' in module 'psp102'.
  #undef PSTI
#endif
#ifdef PGAT
  #warning conflict: PGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PGAT' is also defined as a pragma.
  #warning conflict: Pragma 'PGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PGAT' in module 'psp102'.
  #undef PGAT
#endif
#ifdef PHIGBOT
  #warning conflict: PHIGBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PHIGBOT' is also defined as a pragma.
  #warning conflict: Pragma 'PHIGBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PHIGBOT' in module 'psp102'.
  #undef PHIGBOT
#endif
#ifdef PHIGSTI
  #warning conflict: PHIGSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PHIGSTI' is also defined as a pragma.
  #warning conflict: Pragma 'PHIGSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PHIGSTI' in module 'psp102'.
  #undef PHIGSTI
#endif
#ifdef PHIGGAT
  #warning conflict: PHIGGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PHIGGAT' is also defined as a pragma.
  #warning conflict: Pragma 'PHIGGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PHIGGAT' in module 'psp102'.
  #undef PHIGGAT
#endif
#ifdef IDSATRBOT
  #warning conflict: IDSATRBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IDSATRBOT' is also defined as a pragma.
  #warning conflict: Pragma 'IDSATRBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IDSATRBOT' in module 'psp102'.
  #undef IDSATRBOT
#endif
#ifdef IDSATRSTI
  #warning conflict: IDSATRSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IDSATRSTI' is also defined as a pragma.
  #warning conflict: Pragma 'IDSATRSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IDSATRSTI' in module 'psp102'.
  #undef IDSATRSTI
#endif
#ifdef IDSATRGAT
  #warning conflict: IDSATRGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IDSATRGAT' is also defined as a pragma.
  #warning conflict: Pragma 'IDSATRGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IDSATRGAT' in module 'psp102'.
  #undef IDSATRGAT
#endif
#ifdef CSRHBOT
  #warning conflict: CSRHBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CSRHBOT' is also defined as a pragma.
  #warning conflict: Pragma 'CSRHBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CSRHBOT' in module 'psp102'.
  #undef CSRHBOT
#endif
#ifdef CSRHSTI
  #warning conflict: CSRHSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CSRHSTI' is also defined as a pragma.
  #warning conflict: Pragma 'CSRHSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CSRHSTI' in module 'psp102'.
  #undef CSRHSTI
#endif
#ifdef CSRHGAT
  #warning conflict: CSRHGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CSRHGAT' is also defined as a pragma.
  #warning conflict: Pragma 'CSRHGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CSRHGAT' in module 'psp102'.
  #undef CSRHGAT
#endif
#ifdef XJUNSTI
  #warning conflict: XJUNSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'XJUNSTI' is also defined as a pragma.
  #warning conflict: Pragma 'XJUNSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XJUNSTI' in module 'psp102'.
  #undef XJUNSTI
#endif
#ifdef XJUNGAT
  #warning conflict: XJUNGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'XJUNGAT' is also defined as a pragma.
  #warning conflict: Pragma 'XJUNGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XJUNGAT' in module 'psp102'.
  #undef XJUNGAT
#endif
#ifdef CTATBOT
  #warning conflict: CTATBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CTATBOT' is also defined as a pragma.
  #warning conflict: Pragma 'CTATBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTATBOT' in module 'psp102'.
  #undef CTATBOT
#endif
#ifdef CTATSTI
  #warning conflict: CTATSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CTATSTI' is also defined as a pragma.
  #warning conflict: Pragma 'CTATSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTATSTI' in module 'psp102'.
  #undef CTATSTI
#endif
#ifdef CTATGAT
  #warning conflict: CTATGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CTATGAT' is also defined as a pragma.
  #warning conflict: Pragma 'CTATGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTATGAT' in module 'psp102'.
  #undef CTATGAT
#endif
#ifdef MEFFTATBOT
  #warning conflict: MEFFTATBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MEFFTATBOT' is also defined as a pragma.
  #warning conflict: Pragma 'MEFFTATBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MEFFTATBOT' in module 'psp102'.
  #undef MEFFTATBOT
#endif
#ifdef MEFFTATSTI
  #warning conflict: MEFFTATSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MEFFTATSTI' is also defined as a pragma.
  #warning conflict: Pragma 'MEFFTATSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MEFFTATSTI' in module 'psp102'.
  #undef MEFFTATSTI
#endif
#ifdef MEFFTATGAT
  #warning conflict: MEFFTATGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MEFFTATGAT' is also defined as a pragma.
  #warning conflict: Pragma 'MEFFTATGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MEFFTATGAT' in module 'psp102'.
  #undef MEFFTATGAT
#endif
#ifdef CBBTBOT
  #warning conflict: CBBTBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CBBTBOT' is also defined as a pragma.
  #warning conflict: Pragma 'CBBTBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CBBTBOT' in module 'psp102'.
  #undef CBBTBOT
#endif
#ifdef CBBTSTI
  #warning conflict: CBBTSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CBBTSTI' is also defined as a pragma.
  #warning conflict: Pragma 'CBBTSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CBBTSTI' in module 'psp102'.
  #undef CBBTSTI
#endif
#ifdef CBBTGAT
  #warning conflict: CBBTGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CBBTGAT' is also defined as a pragma.
  #warning conflict: Pragma 'CBBTGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CBBTGAT' in module 'psp102'.
  #undef CBBTGAT
#endif
#ifdef FBBTRBOT
  #warning conflict: FBBTRBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FBBTRBOT' is also defined as a pragma.
  #warning conflict: Pragma 'FBBTRBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FBBTRBOT' in module 'psp102'.
  #undef FBBTRBOT
#endif
#ifdef FBBTRSTI
  #warning conflict: FBBTRSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FBBTRSTI' is also defined as a pragma.
  #warning conflict: Pragma 'FBBTRSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FBBTRSTI' in module 'psp102'.
  #undef FBBTRSTI
#endif
#ifdef FBBTRGAT
  #warning conflict: FBBTRGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FBBTRGAT' is also defined as a pragma.
  #warning conflict: Pragma 'FBBTRGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FBBTRGAT' in module 'psp102'.
  #undef FBBTRGAT
#endif
#ifdef STFBBTBOT
  #warning conflict: STFBBTBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STFBBTBOT' is also defined as a pragma.
  #warning conflict: Pragma 'STFBBTBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STFBBTBOT' in module 'psp102'.
  #undef STFBBTBOT
#endif
#ifdef STFBBTSTI
  #warning conflict: STFBBTSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STFBBTSTI' is also defined as a pragma.
  #warning conflict: Pragma 'STFBBTSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STFBBTSTI' in module 'psp102'.
  #undef STFBBTSTI
#endif
#ifdef STFBBTGAT
  #warning conflict: STFBBTGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STFBBTGAT' is also defined as a pragma.
  #warning conflict: Pragma 'STFBBTGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STFBBTGAT' in module 'psp102'.
  #undef STFBBTGAT
#endif
#ifdef VBRBOT
  #warning conflict: VBRBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBRBOT' is also defined as a pragma.
  #warning conflict: Pragma 'VBRBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBRBOT' in module 'psp102'.
  #undef VBRBOT
#endif
#ifdef VBRSTI
  #warning conflict: VBRSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBRSTI' is also defined as a pragma.
  #warning conflict: Pragma 'VBRSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBRSTI' in module 'psp102'.
  #undef VBRSTI
#endif
#ifdef VBRGAT
  #warning conflict: VBRGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBRGAT' is also defined as a pragma.
  #warning conflict: Pragma 'VBRGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBRGAT' in module 'psp102'.
  #undef VBRGAT
#endif
#ifdef PBRBOT
  #warning conflict: PBRBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PBRBOT' is also defined as a pragma.
  #warning conflict: Pragma 'PBRBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PBRBOT' in module 'psp102'.
  #undef PBRBOT
#endif
#ifdef PBRSTI
  #warning conflict: PBRSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PBRSTI' is also defined as a pragma.
  #warning conflict: Pragma 'PBRSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PBRSTI' in module 'psp102'.
  #undef PBRSTI
#endif
#ifdef PBRGAT
  #warning conflict: PBRGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PBRGAT' is also defined as a pragma.
  #warning conflict: Pragma 'PBRGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PBRGAT' in module 'psp102'.
  #undef PBRGAT
#endif
#ifdef L
  #warning conflict: L is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'L' is also defined as a pragma.
  #warning conflict: Pragma 'L' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'L' in module 'psp102'.
  #undef L
#endif
#ifdef W
  #warning conflict: W is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'W' is also defined as a pragma.
  #warning conflict: Pragma 'W' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'W' in module 'psp102'.
  #undef W
#endif
#ifdef SA
  #warning conflict: SA is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SA' is also defined as a pragma.
  #warning conflict: Pragma 'SA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SA' in module 'psp102'.
  #undef SA
#endif
#ifdef SB
  #warning conflict: SB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SB' is also defined as a pragma.
  #warning conflict: Pragma 'SB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SB' in module 'psp102'.
  #undef SB
#endif
#ifdef ABSOURCE
  #warning conflict: ABSOURCE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ABSOURCE' is also defined as a pragma.
  #warning conflict: Pragma 'ABSOURCE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ABSOURCE' in module 'psp102'.
  #undef ABSOURCE
#endif
#ifdef LSSOURCE
  #warning conflict: LSSOURCE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LSSOURCE' is also defined as a pragma.
  #warning conflict: Pragma 'LSSOURCE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LSSOURCE' in module 'psp102'.
  #undef LSSOURCE
#endif
#ifdef LGSOURCE
  #warning conflict: LGSOURCE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LGSOURCE' is also defined as a pragma.
  #warning conflict: Pragma 'LGSOURCE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LGSOURCE' in module 'psp102'.
  #undef LGSOURCE
#endif
#ifdef ABDRAIN
  #warning conflict: ABDRAIN is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ABDRAIN' is also defined as a pragma.
  #warning conflict: Pragma 'ABDRAIN' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ABDRAIN' in module 'psp102'.
  #undef ABDRAIN
#endif
#ifdef LSDRAIN
  #warning conflict: LSDRAIN is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LSDRAIN' is also defined as a pragma.
  #warning conflict: Pragma 'LSDRAIN' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LSDRAIN' in module 'psp102'.
  #undef LSDRAIN
#endif
#ifdef LGDRAIN
  #warning conflict: LGDRAIN is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LGDRAIN' is also defined as a pragma.
  #warning conflict: Pragma 'LGDRAIN' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LGDRAIN' in module 'psp102'.
  #undef LGDRAIN
#endif
#ifdef AS
  #warning conflict: AS is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'AS' is also defined as a pragma.
  #warning conflict: Pragma 'AS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AS' in module 'psp102'.
  #undef AS
#endif
#ifdef PS
  #warning conflict: PS is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PS' is also defined as a pragma.
  #warning conflict: Pragma 'PS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PS' in module 'psp102'.
  #undef PS
#endif
#ifdef AD
  #warning conflict: AD is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'AD' is also defined as a pragma.
  #warning conflict: Pragma 'AD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AD' in module 'psp102'.
  #undef AD
#endif
#ifdef PD
  #warning conflict: PD is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PD' is also defined as a pragma.
  #warning conflict: Pragma 'PD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PD' in module 'psp102'.
  #undef PD
#endif
#ifdef MULT
  #warning conflict: MULT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MULT' is also defined as a pragma.
  #warning conflict: Pragma 'MULT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MULT' in module 'psp102'.
  #undef MULT
#endif
#ifdef L_i
  #warning conflict: L_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'L_i' is also defined as a pragma.
  #warning conflict: Pragma 'L_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'L_i' in module 'psp102'.
  #undef L_i
#endif
#ifdef W_i
  #warning conflict: W_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'W_i' is also defined as a pragma.
  #warning conflict: Pragma 'W_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'W_i' in module 'psp102'.
  #undef W_i
#endif
#ifdef SA_i
  #warning conflict: SA_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SA_i' is also defined as a pragma.
  #warning conflict: Pragma 'SA_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SA_i' in module 'psp102'.
  #undef SA_i
#endif
#ifdef SB_i
  #warning conflict: SB_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SB_i' is also defined as a pragma.
  #warning conflict: Pragma 'SB_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SB_i' in module 'psp102'.
  #undef SB_i
#endif
#ifdef LEN
  #warning conflict: LEN is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LEN' is also defined as a pragma.
  #warning conflict: Pragma 'LEN' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LEN' in module 'psp102'.
  #undef LEN
#endif
#ifdef WEN
  #warning conflict: WEN is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WEN' is also defined as a pragma.
  #warning conflict: Pragma 'WEN' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WEN' in module 'psp102'.
  #undef WEN
#endif
#ifdef iL
  #warning conflict: iL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'iL' is also defined as a pragma.
  #warning conflict: Pragma 'iL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iL' in module 'psp102'.
  #undef iL
#endif
#ifdef iW
  #warning conflict: iW is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'iW' is also defined as a pragma.
  #warning conflict: Pragma 'iW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iW' in module 'psp102'.
  #undef iW
#endif
#ifdef delLPS
  #warning conflict: delLPS is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'delLPS' is also defined as a pragma.
  #warning conflict: Pragma 'delLPS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'delLPS' in module 'psp102'.
  #undef delLPS
#endif
#ifdef delWOD
  #warning conflict: delWOD is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'delWOD' is also defined as a pragma.
  #warning conflict: Pragma 'delWOD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'delWOD' in module 'psp102'.
  #undef delWOD
#endif
#ifdef LE_LE
  #warning conflict: LE_LE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LE_LE' is also defined as a pragma.
  #warning conflict: Pragma 'LE_LE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LE_LE' in module 'psp102'.
  #undef LE_LE
#endif
#ifdef WE
  #warning conflict: WE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WE' is also defined as a pragma.
  #warning conflict: Pragma 'WE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WE' in module 'psp102'.
  #undef WE
#endif
#ifdef iLE
  #warning conflict: iLE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'iLE' is also defined as a pragma.
  #warning conflict: Pragma 'iLE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iLE' in module 'psp102'.
  #undef iLE
#endif
#ifdef iWE
  #warning conflict: iWE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'iWE' is also defined as a pragma.
  #warning conflict: Pragma 'iWE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iWE' in module 'psp102'.
  #undef iWE
#endif
#ifdef Lcv
  #warning conflict: Lcv is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Lcv' is also defined as a pragma.
  #warning conflict: Pragma 'Lcv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Lcv' in module 'psp102'.
  #undef Lcv
#endif
#ifdef Wcv
  #warning conflict: Wcv is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Wcv' is also defined as a pragma.
  #warning conflict: Pragma 'Wcv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Wcv' in module 'psp102'.
  #undef Wcv
#endif
#ifdef LEcv
  #warning conflict: LEcv is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LEcv' is also defined as a pragma.
  #warning conflict: Pragma 'LEcv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LEcv' in module 'psp102'.
  #undef LEcv
#endif
#ifdef WEcv
  #warning conflict: WEcv is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WEcv' is also defined as a pragma.
  #warning conflict: Pragma 'WEcv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WEcv' in module 'psp102'.
  #undef WEcv
#endif
#ifdef NSUBO_i
  #warning conflict: NSUBO_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NSUBO_i' is also defined as a pragma.
  #warning conflict: Pragma 'NSUBO_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NSUBO_i' in module 'psp102'.
  #undef NSUBO_i
#endif
#ifdef WSEG_i
  #warning conflict: WSEG_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WSEG_i' is also defined as a pragma.
  #warning conflict: Pragma 'WSEG_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WSEG_i' in module 'psp102'.
  #undef WSEG_i
#endif
#ifdef NPCK_i
  #warning conflict: NPCK_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NPCK_i' is also defined as a pragma.
  #warning conflict: Pragma 'NPCK_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NPCK_i' in module 'psp102'.
  #undef NPCK_i
#endif
#ifdef WSEGP_i
  #warning conflict: WSEGP_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WSEGP_i' is also defined as a pragma.
  #warning conflict: Pragma 'WSEGP_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WSEGP_i' in module 'psp102'.
  #undef WSEGP_i
#endif
#ifdef LPCK_i
  #warning conflict: LPCK_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LPCK_i' is also defined as a pragma.
  #warning conflict: Pragma 'LPCK_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LPCK_i' in module 'psp102'.
  #undef LPCK_i
#endif
#ifdef LOV_i
  #warning conflict: LOV_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LOV_i' is also defined as a pragma.
  #warning conflict: Pragma 'LOV_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LOV_i' in module 'psp102'.
  #undef LOV_i
#endif
#ifdef LP1_i
  #warning conflict: LP1_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LP1_i' is also defined as a pragma.
  #warning conflict: Pragma 'LP1_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LP1_i' in module 'psp102'.
  #undef LP1_i
#endif
#ifdef LP2_i
  #warning conflict: LP2_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LP2_i' is also defined as a pragma.
  #warning conflict: Pragma 'LP2_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LP2_i' in module 'psp102'.
  #undef LP2_i
#endif
#ifdef WBET_i
  #warning conflict: WBET_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WBET_i' is also defined as a pragma.
  #warning conflict: Pragma 'WBET_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WBET_i' in module 'psp102'.
  #undef WBET_i
#endif
#ifdef AXL_i
  #warning conflict: AXL_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'AXL_i' is also defined as a pragma.
  #warning conflict: Pragma 'AXL_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AXL_i' in module 'psp102'.
  #undef AXL_i
#endif
#ifdef ALP1L2_i
  #warning conflict: ALP1L2_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP1L2_i' is also defined as a pragma.
  #warning conflict: Pragma 'ALP1L2_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP1L2_i' in module 'psp102'.
  #undef ALP1L2_i
#endif
#ifdef ALP2L2_i
  #warning conflict: ALP2L2_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP2L2_i' is also defined as a pragma.
  #warning conflict: Pragma 'ALP2L2_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP2L2_i' in module 'psp102'.
  #undef ALP2L2_i
#endif
#ifdef NSUB
  #warning conflict: NSUB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NSUB' is also defined as a pragma.
  #warning conflict: Pragma 'NSUB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NSUB' in module 'psp102'.
  #undef NSUB
#endif
#ifdef AA
  #warning conflict: AA is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'AA' is also defined as a pragma.
  #warning conflict: Pragma 'AA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AA' in module 'psp102'.
  #undef AA
#endif
#ifdef BB
  #warning conflict: BB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'BB' is also defined as a pragma.
  #warning conflict: Pragma 'BB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BB' in module 'psp102'.
  #undef BB
#endif
#ifdef NSUB0e
  #warning conflict: NSUB0e is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NSUB0e' is also defined as a pragma.
  #warning conflict: Pragma 'NSUB0e' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NSUB0e' in module 'psp102'.
  #undef NSUB0e
#endif
#ifdef NPCKe
  #warning conflict: NPCKe is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NPCKe' is also defined as a pragma.
  #warning conflict: Pragma 'NPCKe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NPCKe' in module 'psp102'.
  #undef NPCKe
#endif
#ifdef LPCKe
  #warning conflict: LPCKe is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LPCKe' is also defined as a pragma.
  #warning conflict: Pragma 'LPCKe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LPCKe' in module 'psp102'.
  #undef LPCKe
#endif
#ifdef FBET1e
  #warning conflict: FBET1e is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FBET1e' is also defined as a pragma.
  #warning conflict: Pragma 'FBET1e' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FBET1e' in module 'psp102'.
  #undef FBET1e
#endif
#ifdef LP1e
  #warning conflict: LP1e is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LP1e' is also defined as a pragma.
  #warning conflict: Pragma 'LP1e' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LP1e' in module 'psp102'.
  #undef LP1e
#endif
#ifdef GPE
  #warning conflict: GPE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GPE' is also defined as a pragma.
  #warning conflict: Pragma 'GPE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GPE' in module 'psp102'.
  #undef GPE
#endif
#ifdef GWE
  #warning conflict: GWE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GWE' is also defined as a pragma.
  #warning conflict: Pragma 'GWE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GWE' in module 'psp102'.
  #undef GWE
#endif
#ifdef tmpx
  #warning conflict: tmpx is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tmpx' is also defined as a pragma.
  #warning conflict: Pragma 'tmpx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tmpx' in module 'psp102'.
  #undef tmpx
#endif
#ifdef VFB
  #warning conflict: VFB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VFB' is also defined as a pragma.
  #warning conflict: Pragma 'VFB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VFB' in module 'psp102'.
  #undef VFB
#endif
#ifdef STVFB
  #warning conflict: STVFB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STVFB' is also defined as a pragma.
  #warning conflict: Pragma 'STVFB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STVFB' in module 'psp102'.
  #undef STVFB
#endif
#ifdef TOX
  #warning conflict: TOX is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TOX' is also defined as a pragma.
  #warning conflict: Pragma 'TOX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TOX' in module 'psp102'.
  #undef TOX
#endif
#ifdef NEFF
  #warning conflict: NEFF is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NEFF' is also defined as a pragma.
  #warning conflict: Pragma 'NEFF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NEFF' in module 'psp102'.
  #undef NEFF
#endif
#ifdef VNSUB
  #warning conflict: VNSUB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VNSUB' is also defined as a pragma.
  #warning conflict: Pragma 'VNSUB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VNSUB' in module 'psp102'.
  #undef VNSUB
#endif
#ifdef NSLP
  #warning conflict: NSLP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NSLP' is also defined as a pragma.
  #warning conflict: Pragma 'NSLP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NSLP' in module 'psp102'.
  #undef NSLP
#endif
#ifdef DNSUB
  #warning conflict: DNSUB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DNSUB' is also defined as a pragma.
  #warning conflict: Pragma 'DNSUB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DNSUB' in module 'psp102'.
  #undef DNSUB
#endif
#ifdef DPHIB
  #warning conflict: DPHIB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DPHIB' is also defined as a pragma.
  #warning conflict: Pragma 'DPHIB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DPHIB' in module 'psp102'.
  #undef DPHIB
#endif
#ifdef NP
  #warning conflict: NP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NP' is also defined as a pragma.
  #warning conflict: Pragma 'NP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NP' in module 'psp102'.
  #undef NP
#endif
#ifdef CT
  #warning conflict: CT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CT' is also defined as a pragma.
  #warning conflict: Pragma 'CT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CT' in module 'psp102'.
  #undef CT
#endif
#ifdef TOXOV
  #warning conflict: TOXOV is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TOXOV' is also defined as a pragma.
  #warning conflict: Pragma 'TOXOV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TOXOV' in module 'psp102'.
  #undef TOXOV
#endif
#ifdef NOV
  #warning conflict: NOV is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NOV' is also defined as a pragma.
  #warning conflict: Pragma 'NOV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NOV' in module 'psp102'.
  #undef NOV
#endif
#ifdef CF
  #warning conflict: CF is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CF' is also defined as a pragma.
  #warning conflict: Pragma 'CF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CF' in module 'psp102'.
  #undef CF
#endif
#ifdef CFB
  #warning conflict: CFB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CFB' is also defined as a pragma.
  #warning conflict: Pragma 'CFB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CFB' in module 'psp102'.
  #undef CFB
#endif
#ifdef BETN
  #warning conflict: BETN is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'BETN' is also defined as a pragma.
  #warning conflict: Pragma 'BETN' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BETN' in module 'psp102'.
  #undef BETN
#endif
#ifdef STBET
  #warning conflict: STBET is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STBET' is also defined as a pragma.
  #warning conflict: Pragma 'STBET' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STBET' in module 'psp102'.
  #undef STBET
#endif
#ifdef MUE
  #warning conflict: MUE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MUE' is also defined as a pragma.
  #warning conflict: Pragma 'MUE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MUE' in module 'psp102'.
  #undef MUE
#endif
#ifdef STMUE
  #warning conflict: STMUE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STMUE' is also defined as a pragma.
  #warning conflict: Pragma 'STMUE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STMUE' in module 'psp102'.
  #undef STMUE
#endif
#ifdef THEMU
  #warning conflict: THEMU is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THEMU' is also defined as a pragma.
  #warning conflict: Pragma 'THEMU' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THEMU' in module 'psp102'.
  #undef THEMU
#endif
#ifdef STTHEMU
  #warning conflict: STTHEMU is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STTHEMU' is also defined as a pragma.
  #warning conflict: Pragma 'STTHEMU' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STTHEMU' in module 'psp102'.
  #undef STTHEMU
#endif
#ifdef CS
  #warning conflict: CS is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CS' is also defined as a pragma.
  #warning conflict: Pragma 'CS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CS' in module 'psp102'.
  #undef CS
#endif
#ifdef STCS
  #warning conflict: STCS is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STCS' is also defined as a pragma.
  #warning conflict: Pragma 'STCS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STCS' in module 'psp102'.
  #undef STCS
#endif
#ifdef XCOR
  #warning conflict: XCOR is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'XCOR' is also defined as a pragma.
  #warning conflict: Pragma 'XCOR' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XCOR' in module 'psp102'.
  #undef XCOR
#endif
#ifdef STXCOR
  #warning conflict: STXCOR is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STXCOR' is also defined as a pragma.
  #warning conflict: Pragma 'STXCOR' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STXCOR' in module 'psp102'.
  #undef STXCOR
#endif
#ifdef FETA
  #warning conflict: FETA is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FETA' is also defined as a pragma.
  #warning conflict: Pragma 'FETA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FETA' in module 'psp102'.
  #undef FETA
#endif
#ifdef RS
  #warning conflict: RS is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'RS' is also defined as a pragma.
  #warning conflict: Pragma 'RS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RS' in module 'psp102'.
  #undef RS
#endif
#ifdef STRS
  #warning conflict: STRS is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STRS' is also defined as a pragma.
  #warning conflict: Pragma 'STRS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STRS' in module 'psp102'.
  #undef STRS
#endif
#ifdef RSB
  #warning conflict: RSB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'RSB' is also defined as a pragma.
  #warning conflict: Pragma 'RSB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RSB' in module 'psp102'.
  #undef RSB
#endif
#ifdef RSG
  #warning conflict: RSG is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'RSG' is also defined as a pragma.
  #warning conflict: Pragma 'RSG' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RSG' in module 'psp102'.
  #undef RSG
#endif
#ifdef THESAT
  #warning conflict: THESAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESAT' is also defined as a pragma.
  #warning conflict: Pragma 'THESAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESAT' in module 'psp102'.
  #undef THESAT
#endif
#ifdef STTHESAT
  #warning conflict: STTHESAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STTHESAT' is also defined as a pragma.
  #warning conflict: Pragma 'STTHESAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STTHESAT' in module 'psp102'.
  #undef STTHESAT
#endif
#ifdef THESATB
  #warning conflict: THESATB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESATB' is also defined as a pragma.
  #warning conflict: Pragma 'THESATB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESATB' in module 'psp102'.
  #undef THESATB
#endif
#ifdef THESATG
  #warning conflict: THESATG is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESATG' is also defined as a pragma.
  #warning conflict: Pragma 'THESATG' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESATG' in module 'psp102'.
  #undef THESATG
#endif
#ifdef AX
  #warning conflict: AX is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'AX' is also defined as a pragma.
  #warning conflict: Pragma 'AX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AX' in module 'psp102'.
  #undef AX
#endif
#ifdef ALP
  #warning conflict: ALP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP' is also defined as a pragma.
  #warning conflict: Pragma 'ALP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP' in module 'psp102'.
  #undef ALP
#endif
#ifdef ALP1
  #warning conflict: ALP1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP1' is also defined as a pragma.
  #warning conflict: Pragma 'ALP1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP1' in module 'psp102'.
  #undef ALP1
#endif
#ifdef ALP2
  #warning conflict: ALP2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP2' is also defined as a pragma.
  #warning conflict: Pragma 'ALP2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP2' in module 'psp102'.
  #undef ALP2
#endif
#ifdef VP
  #warning conflict: VP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VP' is also defined as a pragma.
  #warning conflict: Pragma 'VP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VP' in module 'psp102'.
  #undef VP
#endif
#ifdef A1
  #warning conflict: A1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A1' is also defined as a pragma.
  #warning conflict: Pragma 'A1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A1' in module 'psp102'.
  #undef A1
#endif
#ifdef A2
  #warning conflict: A2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A2' is also defined as a pragma.
  #warning conflict: Pragma 'A2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A2' in module 'psp102'.
  #undef A2
#endif
#ifdef STA2
  #warning conflict: STA2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STA2' is also defined as a pragma.
  #warning conflict: Pragma 'STA2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STA2' in module 'psp102'.
  #undef STA2
#endif
#ifdef A3
  #warning conflict: A3 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A3' is also defined as a pragma.
  #warning conflict: Pragma 'A3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A3' in module 'psp102'.
  #undef A3
#endif
#ifdef A4
  #warning conflict: A4 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A4' is also defined as a pragma.
  #warning conflict: Pragma 'A4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A4' in module 'psp102'.
  #undef A4
#endif
#ifdef GCO
  #warning conflict: GCO is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GCO' is also defined as a pragma.
  #warning conflict: Pragma 'GCO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GCO' in module 'psp102'.
  #undef GCO
#endif
#ifdef IGINV
  #warning conflict: IGINV is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IGINV' is also defined as a pragma.
  #warning conflict: Pragma 'IGINV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IGINV' in module 'psp102'.
  #undef IGINV
#endif
#ifdef IGOV
  #warning conflict: IGOV is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IGOV' is also defined as a pragma.
  #warning conflict: Pragma 'IGOV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IGOV' in module 'psp102'.
  #undef IGOV
#endif
#ifdef STIG
  #warning conflict: STIG is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STIG' is also defined as a pragma.
  #warning conflict: Pragma 'STIG' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STIG' in module 'psp102'.
  #undef STIG
#endif
#ifdef GC2
  #warning conflict: GC2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GC2' is also defined as a pragma.
  #warning conflict: Pragma 'GC2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GC2' in module 'psp102'.
  #undef GC2
#endif
#ifdef GC3
  #warning conflict: GC3 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GC3' is also defined as a pragma.
  #warning conflict: Pragma 'GC3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GC3' in module 'psp102'.
  #undef GC3
#endif
#ifdef CHIB
  #warning conflict: CHIB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CHIB' is also defined as a pragma.
  #warning conflict: Pragma 'CHIB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CHIB' in module 'psp102'.
  #undef CHIB
#endif
#ifdef AGIDL
  #warning conflict: AGIDL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'AGIDL' is also defined as a pragma.
  #warning conflict: Pragma 'AGIDL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AGIDL' in module 'psp102'.
  #undef AGIDL
#endif
#ifdef BGIDL
  #warning conflict: BGIDL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'BGIDL' is also defined as a pragma.
  #warning conflict: Pragma 'BGIDL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BGIDL' in module 'psp102'.
  #undef BGIDL
#endif
#ifdef STBGIDL
  #warning conflict: STBGIDL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STBGIDL' is also defined as a pragma.
  #warning conflict: Pragma 'STBGIDL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STBGIDL' in module 'psp102'.
  #undef STBGIDL
#endif
#ifdef CGIDL
  #warning conflict: CGIDL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CGIDL' is also defined as a pragma.
  #warning conflict: Pragma 'CGIDL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGIDL' in module 'psp102'.
  #undef CGIDL
#endif
#ifdef COX
  #warning conflict: COX is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'COX' is also defined as a pragma.
  #warning conflict: Pragma 'COX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'COX' in module 'psp102'.
  #undef COX
#endif
#ifdef CGOV
  #warning conflict: CGOV is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CGOV' is also defined as a pragma.
  #warning conflict: Pragma 'CGOV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGOV' in module 'psp102'.
  #undef CGOV
#endif
#ifdef CGBOV
  #warning conflict: CGBOV is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CGBOV' is also defined as a pragma.
  #warning conflict: Pragma 'CGBOV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGBOV' in module 'psp102'.
  #undef CGBOV
#endif
#ifdef CFR
  #warning conflict: CFR is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CFR' is also defined as a pragma.
  #warning conflict: Pragma 'CFR' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CFR' in module 'psp102'.
  #undef CFR
#endif
#ifdef FNT
  #warning conflict: FNT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FNT' is also defined as a pragma.
  #warning conflict: Pragma 'FNT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FNT' in module 'psp102'.
  #undef FNT
#endif
#ifdef NFA
  #warning conflict: NFA is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NFA' is also defined as a pragma.
  #warning conflict: Pragma 'NFA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NFA' in module 'psp102'.
  #undef NFA
#endif
#ifdef NFB
  #warning conflict: NFB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NFB' is also defined as a pragma.
  #warning conflict: Pragma 'NFB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NFB' in module 'psp102'.
  #undef NFB
#endif
#ifdef NFC
  #warning conflict: NFC is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NFC' is also defined as a pragma.
  #warning conflict: Pragma 'NFC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NFC' in module 'psp102'.
  #undef NFC
#endif
#ifdef SAREF_i
  #warning conflict: SAREF_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SAREF_i' is also defined as a pragma.
  #warning conflict: Pragma 'SAREF_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SAREF_i' in module 'psp102'.
  #undef SAREF_i
#endif
#ifdef SBREF_i
  #warning conflict: SBREF_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SBREF_i' is also defined as a pragma.
  #warning conflict: Pragma 'SBREF_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SBREF_i' in module 'psp102'.
  #undef SBREF_i
#endif
#ifdef KVSAT_i
  #warning conflict: KVSAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'KVSAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'KVSAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KVSAT_i' in module 'psp102'.
  #undef KVSAT_i
#endif
#ifdef LLODKUO_i
  #warning conflict: LLODKUO_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LLODKUO_i' is also defined as a pragma.
  #warning conflict: Pragma 'LLODKUO_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LLODKUO_i' in module 'psp102'.
  #undef LLODKUO_i
#endif
#ifdef WLODKUO_i
  #warning conflict: WLODKUO_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WLODKUO_i' is also defined as a pragma.
  #warning conflict: Pragma 'WLODKUO_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WLODKUO_i' in module 'psp102'.
  #undef WLODKUO_i
#endif
#ifdef LLODVTH_i
  #warning conflict: LLODVTH_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LLODVTH_i' is also defined as a pragma.
  #warning conflict: Pragma 'LLODVTH_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LLODVTH_i' in module 'psp102'.
  #undef LLODVTH_i
#endif
#ifdef WLODVTH_i
  #warning conflict: WLODVTH_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'WLODVTH_i' is also defined as a pragma.
  #warning conflict: Pragma 'WLODVTH_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WLODVTH_i' in module 'psp102'.
  #undef WLODVTH_i
#endif
#ifdef LODETAO_i
  #warning conflict: LODETAO_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LODETAO_i' is also defined as a pragma.
  #warning conflict: Pragma 'LODETAO_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LODETAO_i' in module 'psp102'.
  #undef LODETAO_i
#endif
#ifdef Invsa
  #warning conflict: Invsa is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Invsa' is also defined as a pragma.
  #warning conflict: Pragma 'Invsa' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Invsa' in module 'psp102'.
  #undef Invsa
#endif
#ifdef Invsb
  #warning conflict: Invsb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Invsb' is also defined as a pragma.
  #warning conflict: Pragma 'Invsb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Invsb' in module 'psp102'.
  #undef Invsb
#endif
#ifdef Invsaref
  #warning conflict: Invsaref is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Invsaref' is also defined as a pragma.
  #warning conflict: Pragma 'Invsaref' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Invsaref' in module 'psp102'.
  #undef Invsaref
#endif
#ifdef Invsbref
  #warning conflict: Invsbref is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Invsbref' is also defined as a pragma.
  #warning conflict: Pragma 'Invsbref' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Invsbref' in module 'psp102'.
  #undef Invsbref
#endif
#ifdef Kstressu0
  #warning conflict: Kstressu0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Kstressu0' is also defined as a pragma.
  #warning conflict: Pragma 'Kstressu0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Kstressu0' in module 'psp102'.
  #undef Kstressu0
#endif
#ifdef rhobeta
  #warning conflict: rhobeta is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'rhobeta' is also defined as a pragma.
  #warning conflict: Pragma 'rhobeta' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rhobeta' in module 'psp102'.
  #undef rhobeta
#endif
#ifdef rhobetaref
  #warning conflict: rhobetaref is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'rhobetaref' is also defined as a pragma.
  #warning conflict: Pragma 'rhobetaref' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rhobetaref' in module 'psp102'.
  #undef rhobetaref
#endif
#ifdef Kstressvth0
  #warning conflict: Kstressvth0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Kstressvth0' is also defined as a pragma.
  #warning conflict: Pragma 'Kstressvth0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Kstressvth0' in module 'psp102'.
  #undef Kstressvth0
#endif
#ifdef temp0
  #warning conflict: temp0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'temp0' is also defined as a pragma.
  #warning conflict: Pragma 'temp0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'temp0' in module 'psp102'.
  #undef temp0
#endif
#ifdef templ
  #warning conflict: templ is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'templ' is also defined as a pragma.
  #warning conflict: Pragma 'templ' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'templ' in module 'psp102'.
  #undef templ
#endif
#ifdef tempw
  #warning conflict: tempw is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tempw' is also defined as a pragma.
  #warning conflict: Pragma 'tempw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tempw' in module 'psp102'.
  #undef tempw
#endif
#ifdef Lx
  #warning conflict: Lx is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Lx' is also defined as a pragma.
  #warning conflict: Pragma 'Lx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Lx' in module 'psp102'.
  #undef Lx
#endif
#ifdef Wx
  #warning conflict: Wx is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Wx' is also defined as a pragma.
  #warning conflict: Pragma 'Wx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Wx' in module 'psp102'.
  #undef Wx
#endif
#ifdef VFB_i
  #warning conflict: VFB_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VFB_i' is also defined as a pragma.
  #warning conflict: Pragma 'VFB_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VFB_i' in module 'psp102'.
  #undef VFB_i
#endif
#ifdef STVFB_i
  #warning conflict: STVFB_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STVFB_i' is also defined as a pragma.
  #warning conflict: Pragma 'STVFB_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STVFB_i' in module 'psp102'.
  #undef STVFB_i
#endif
#ifdef TOX_i
  #warning conflict: TOX_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TOX_i' is also defined as a pragma.
  #warning conflict: Pragma 'TOX_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TOX_i' in module 'psp102'.
  #undef TOX_i
#endif
#ifdef NEFF_i
  #warning conflict: NEFF_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NEFF_i' is also defined as a pragma.
  #warning conflict: Pragma 'NEFF_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NEFF_i' in module 'psp102'.
  #undef NEFF_i
#endif
#ifdef VNSUB_i
  #warning conflict: VNSUB_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VNSUB_i' is also defined as a pragma.
  #warning conflict: Pragma 'VNSUB_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VNSUB_i' in module 'psp102'.
  #undef VNSUB_i
#endif
#ifdef NSLP_i
  #warning conflict: NSLP_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NSLP_i' is also defined as a pragma.
  #warning conflict: Pragma 'NSLP_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NSLP_i' in module 'psp102'.
  #undef NSLP_i
#endif
#ifdef DNSUB_i
  #warning conflict: DNSUB_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DNSUB_i' is also defined as a pragma.
  #warning conflict: Pragma 'DNSUB_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DNSUB_i' in module 'psp102'.
  #undef DNSUB_i
#endif
#ifdef NP_i
  #warning conflict: NP_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NP_i' is also defined as a pragma.
  #warning conflict: Pragma 'NP_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NP_i' in module 'psp102'.
  #undef NP_i
#endif
#ifdef QMC_i
  #warning conflict: QMC_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'QMC_i' is also defined as a pragma.
  #warning conflict: Pragma 'QMC_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'QMC_i' in module 'psp102'.
  #undef QMC_i
#endif
#ifdef CT_i
  #warning conflict: CT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CT_i' is also defined as a pragma.
  #warning conflict: Pragma 'CT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CT_i' in module 'psp102'.
  #undef CT_i
#endif
#ifdef TOXOV_i
  #warning conflict: TOXOV_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TOXOV_i' is also defined as a pragma.
  #warning conflict: Pragma 'TOXOV_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TOXOV_i' in module 'psp102'.
  #undef TOXOV_i
#endif
#ifdef NOV_i
  #warning conflict: NOV_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NOV_i' is also defined as a pragma.
  #warning conflict: Pragma 'NOV_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NOV_i' in module 'psp102'.
  #undef NOV_i
#endif
#ifdef CF_i
  #warning conflict: CF_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CF_i' is also defined as a pragma.
  #warning conflict: Pragma 'CF_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CF_i' in module 'psp102'.
  #undef CF_i
#endif
#ifdef CFB_i
  #warning conflict: CFB_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CFB_i' is also defined as a pragma.
  #warning conflict: Pragma 'CFB_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CFB_i' in module 'psp102'.
  #undef CFB_i
#endif
#ifdef DPHIB_i
  #warning conflict: DPHIB_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'DPHIB_i' is also defined as a pragma.
  #warning conflict: Pragma 'DPHIB_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DPHIB_i' in module 'psp102'.
  #undef DPHIB_i
#endif
#ifdef BET_i
  #warning conflict: BET_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'BET_i' is also defined as a pragma.
  #warning conflict: Pragma 'BET_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BET_i' in module 'psp102'.
  #undef BET_i
#endif
#ifdef STBET_i
  #warning conflict: STBET_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STBET_i' is also defined as a pragma.
  #warning conflict: Pragma 'STBET_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STBET_i' in module 'psp102'.
  #undef STBET_i
#endif
#ifdef MUE_i
  #warning conflict: MUE_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MUE_i' is also defined as a pragma.
  #warning conflict: Pragma 'MUE_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MUE_i' in module 'psp102'.
  #undef MUE_i
#endif
#ifdef STMUE_i
  #warning conflict: STMUE_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STMUE_i' is also defined as a pragma.
  #warning conflict: Pragma 'STMUE_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STMUE_i' in module 'psp102'.
  #undef STMUE_i
#endif
#ifdef THEMU_i
  #warning conflict: THEMU_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THEMU_i' is also defined as a pragma.
  #warning conflict: Pragma 'THEMU_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THEMU_i' in module 'psp102'.
  #undef THEMU_i
#endif
#ifdef STTHEMU_i
  #warning conflict: STTHEMU_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STTHEMU_i' is also defined as a pragma.
  #warning conflict: Pragma 'STTHEMU_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STTHEMU_i' in module 'psp102'.
  #undef STTHEMU_i
#endif
#ifdef CS_i
  #warning conflict: CS_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CS_i' is also defined as a pragma.
  #warning conflict: Pragma 'CS_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CS_i' in module 'psp102'.
  #undef CS_i
#endif
#ifdef STCS_i
  #warning conflict: STCS_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STCS_i' is also defined as a pragma.
  #warning conflict: Pragma 'STCS_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STCS_i' in module 'psp102'.
  #undef STCS_i
#endif
#ifdef XCOR_i
  #warning conflict: XCOR_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'XCOR_i' is also defined as a pragma.
  #warning conflict: Pragma 'XCOR_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XCOR_i' in module 'psp102'.
  #undef XCOR_i
#endif
#ifdef STXCOR_i
  #warning conflict: STXCOR_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STXCOR_i' is also defined as a pragma.
  #warning conflict: Pragma 'STXCOR_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STXCOR_i' in module 'psp102'.
  #undef STXCOR_i
#endif
#ifdef FETA_i
  #warning conflict: FETA_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FETA_i' is also defined as a pragma.
  #warning conflict: Pragma 'FETA_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FETA_i' in module 'psp102'.
  #undef FETA_i
#endif
#ifdef RS_i
  #warning conflict: RS_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'RS_i' is also defined as a pragma.
  #warning conflict: Pragma 'RS_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RS_i' in module 'psp102'.
  #undef RS_i
#endif
#ifdef THER_i
  #warning conflict: THER_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THER_i' is also defined as a pragma.
  #warning conflict: Pragma 'THER_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THER_i' in module 'psp102'.
  #undef THER_i
#endif
#ifdef STRS_i
  #warning conflict: STRS_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STRS_i' is also defined as a pragma.
  #warning conflict: Pragma 'STRS_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STRS_i' in module 'psp102'.
  #undef STRS_i
#endif
#ifdef RSB_i
  #warning conflict: RSB_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'RSB_i' is also defined as a pragma.
  #warning conflict: Pragma 'RSB_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RSB_i' in module 'psp102'.
  #undef RSB_i
#endif
#ifdef RSG_i
  #warning conflict: RSG_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'RSG_i' is also defined as a pragma.
  #warning conflict: Pragma 'RSG_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RSG_i' in module 'psp102'.
  #undef RSG_i
#endif
#ifdef THESAT_i
  #warning conflict: THESAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'THESAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESAT_i' in module 'psp102'.
  #undef THESAT_i
#endif
#ifdef STTHESAT_i
  #warning conflict: STTHESAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STTHESAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'STTHESAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STTHESAT_i' in module 'psp102'.
  #undef STTHESAT_i
#endif
#ifdef THESATB_i
  #warning conflict: THESATB_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESATB_i' is also defined as a pragma.
  #warning conflict: Pragma 'THESATB_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESATB_i' in module 'psp102'.
  #undef THESATB_i
#endif
#ifdef THESATG_i
  #warning conflict: THESATG_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'THESATG_i' is also defined as a pragma.
  #warning conflict: Pragma 'THESATG_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THESATG_i' in module 'psp102'.
  #undef THESATG_i
#endif
#ifdef AX_i
  #warning conflict: AX_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'AX_i' is also defined as a pragma.
  #warning conflict: Pragma 'AX_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AX_i' in module 'psp102'.
  #undef AX_i
#endif
#ifdef ALP_i
  #warning conflict: ALP_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP_i' is also defined as a pragma.
  #warning conflict: Pragma 'ALP_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP_i' in module 'psp102'.
  #undef ALP_i
#endif
#ifdef ALP1_i
  #warning conflict: ALP1_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP1_i' is also defined as a pragma.
  #warning conflict: Pragma 'ALP1_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP1_i' in module 'psp102'.
  #undef ALP1_i
#endif
#ifdef ALP2_i
  #warning conflict: ALP2_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ALP2_i' is also defined as a pragma.
  #warning conflict: Pragma 'ALP2_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ALP2_i' in module 'psp102'.
  #undef ALP2_i
#endif
#ifdef VP_i
  #warning conflict: VP_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VP_i' is also defined as a pragma.
  #warning conflict: Pragma 'VP_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VP_i' in module 'psp102'.
  #undef VP_i
#endif
#ifdef A1_i
  #warning conflict: A1_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A1_i' is also defined as a pragma.
  #warning conflict: Pragma 'A1_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A1_i' in module 'psp102'.
  #undef A1_i
#endif
#ifdef A2_i
  #warning conflict: A2_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A2_i' is also defined as a pragma.
  #warning conflict: Pragma 'A2_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A2_i' in module 'psp102'.
  #undef A2_i
#endif
#ifdef STA2_i
  #warning conflict: STA2_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STA2_i' is also defined as a pragma.
  #warning conflict: Pragma 'STA2_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STA2_i' in module 'psp102'.
  #undef STA2_i
#endif
#ifdef A3_i
  #warning conflict: A3_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A3_i' is also defined as a pragma.
  #warning conflict: Pragma 'A3_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A3_i' in module 'psp102'.
  #undef A3_i
#endif
#ifdef A4_i
  #warning conflict: A4_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'A4_i' is also defined as a pragma.
  #warning conflict: Pragma 'A4_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'A4_i' in module 'psp102'.
  #undef A4_i
#endif
#ifdef GCO_i
  #warning conflict: GCO_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GCO_i' is also defined as a pragma.
  #warning conflict: Pragma 'GCO_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GCO_i' in module 'psp102'.
  #undef GCO_i
#endif
#ifdef IGINV_i
  #warning conflict: IGINV_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IGINV_i' is also defined as a pragma.
  #warning conflict: Pragma 'IGINV_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IGINV_i' in module 'psp102'.
  #undef IGINV_i
#endif
#ifdef IGOV_i
  #warning conflict: IGOV_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IGOV_i' is also defined as a pragma.
  #warning conflict: Pragma 'IGOV_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IGOV_i' in module 'psp102'.
  #undef IGOV_i
#endif
#ifdef STIG_i
  #warning conflict: STIG_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STIG_i' is also defined as a pragma.
  #warning conflict: Pragma 'STIG_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STIG_i' in module 'psp102'.
  #undef STIG_i
#endif
#ifdef GC2_i
  #warning conflict: GC2_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GC2_i' is also defined as a pragma.
  #warning conflict: Pragma 'GC2_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GC2_i' in module 'psp102'.
  #undef GC2_i
#endif
#ifdef GC3_i
  #warning conflict: GC3_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GC3_i' is also defined as a pragma.
  #warning conflict: Pragma 'GC3_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GC3_i' in module 'psp102'.
  #undef GC3_i
#endif
#ifdef CHIB_i
  #warning conflict: CHIB_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CHIB_i' is also defined as a pragma.
  #warning conflict: Pragma 'CHIB_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CHIB_i' in module 'psp102'.
  #undef CHIB_i
#endif
#ifdef AGIDL_i
  #warning conflict: AGIDL_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'AGIDL_i' is also defined as a pragma.
  #warning conflict: Pragma 'AGIDL_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AGIDL_i' in module 'psp102'.
  #undef AGIDL_i
#endif
#ifdef BGIDL_i
  #warning conflict: BGIDL_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'BGIDL_i' is also defined as a pragma.
  #warning conflict: Pragma 'BGIDL_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BGIDL_i' in module 'psp102'.
  #undef BGIDL_i
#endif
#ifdef STBGIDL_i
  #warning conflict: STBGIDL_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'STBGIDL_i' is also defined as a pragma.
  #warning conflict: Pragma 'STBGIDL_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'STBGIDL_i' in module 'psp102'.
  #undef STBGIDL_i
#endif
#ifdef CGIDL_i
  #warning conflict: CGIDL_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CGIDL_i' is also defined as a pragma.
  #warning conflict: Pragma 'CGIDL_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGIDL_i' in module 'psp102'.
  #undef CGIDL_i
#endif
#ifdef COX_i
  #warning conflict: COX_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'COX_i' is also defined as a pragma.
  #warning conflict: Pragma 'COX_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'COX_i' in module 'psp102'.
  #undef COX_i
#endif
#ifdef CGOV_i
  #warning conflict: CGOV_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CGOV_i' is also defined as a pragma.
  #warning conflict: Pragma 'CGOV_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGOV_i' in module 'psp102'.
  #undef CGOV_i
#endif
#ifdef CGBOV_i
  #warning conflict: CGBOV_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CGBOV_i' is also defined as a pragma.
  #warning conflict: Pragma 'CGBOV_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGBOV_i' in module 'psp102'.
  #undef CGBOV_i
#endif
#ifdef CFR_i
  #warning conflict: CFR_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CFR_i' is also defined as a pragma.
  #warning conflict: Pragma 'CFR_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CFR_i' in module 'psp102'.
  #undef CFR_i
#endif
#ifdef FNT_i
  #warning conflict: FNT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FNT_i' is also defined as a pragma.
  #warning conflict: Pragma 'FNT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FNT_i' in module 'psp102'.
  #undef FNT_i
#endif
#ifdef NFA_i
  #warning conflict: NFA_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NFA_i' is also defined as a pragma.
  #warning conflict: Pragma 'NFA_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NFA_i' in module 'psp102'.
  #undef NFA_i
#endif
#ifdef NFB_i
  #warning conflict: NFB_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NFB_i' is also defined as a pragma.
  #warning conflict: Pragma 'NFB_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NFB_i' in module 'psp102'.
  #undef NFB_i
#endif
#ifdef NFC_i
  #warning conflict: NFC_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NFC_i' is also defined as a pragma.
  #warning conflict: Pragma 'NFC_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NFC_i' in module 'psp102'.
  #undef NFC_i
#endif
#ifdef TR_i
  #warning conflict: TR_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TR_i' is also defined as a pragma.
  #warning conflict: Pragma 'TR_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TR_i' in module 'psp102'.
  #undef TR_i
#endif
#ifdef MULT_i
  #warning conflict: MULT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MULT_i' is also defined as a pragma.
  #warning conflict: Pragma 'MULT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MULT_i' in module 'psp102'.
  #undef MULT_i
#endif
#ifdef temp
  #warning conflict: temp is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'temp' is also defined as a pragma.
  #warning conflict: Pragma 'temp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'temp' in module 'psp102'.
  #undef temp
#endif
#ifdef temp1
  #warning conflict: temp1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'temp1' is also defined as a pragma.
  #warning conflict: Pragma 'temp1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'temp1' in module 'psp102'.
  #undef temp1
#endif
#ifdef temp2
  #warning conflict: temp2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'temp2' is also defined as a pragma.
  #warning conflict: Pragma 'temp2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'temp2' in module 'psp102'.
  #undef temp2
#endif
#ifdef tempM
  #warning conflict: tempM is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tempM' is also defined as a pragma.
  #warning conflict: Pragma 'tempM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tempM' in module 'psp102'.
  #undef tempM
#endif
#ifdef help
  #warning conflict: help is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'help' is also defined as a pragma.
  #warning conflict: Pragma 'help' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'help' in module 'psp102'.
  #undef help
#endif
#ifdef TKR
  #warning conflict: TKR is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TKR' is also defined as a pragma.
  #warning conflict: Pragma 'TKR' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TKR' in module 'psp102'.
  #undef TKR
#endif
#ifdef TKD
  #warning conflict: TKD is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TKD' is also defined as a pragma.
  #warning conflict: Pragma 'TKD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TKD' in module 'psp102'.
  #undef TKD
#endif
#ifdef TKD_sq
  #warning conflict: TKD_sq is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TKD_sq' is also defined as a pragma.
  #warning conflict: Pragma 'TKD_sq' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TKD_sq' in module 'psp102'.
  #undef TKD_sq
#endif
#ifdef dT
  #warning conflict: dT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'dT' is also defined as a pragma.
  #warning conflict: Pragma 'dT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dT' in module 'psp102'.
  #undef dT
#endif
#ifdef rT
  #warning conflict: rT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'rT' is also defined as a pragma.
  #warning conflict: Pragma 'rT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rT' in module 'psp102'.
  #undef rT
#endif
#ifdef rTn
  #warning conflict: rTn is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'rTn' is also defined as a pragma.
  #warning conflict: Pragma 'rTn' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rTn' in module 'psp102'.
  #undef rTn
#endif
#ifdef phit
  #warning conflict: phit is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phit' is also defined as a pragma.
  #warning conflict: Pragma 'phit' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phit' in module 'psp102'.
  #undef phit
#endif
#ifdef inv_phit
  #warning conflict: inv_phit is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'inv_phit' is also defined as a pragma.
  #warning conflict: Pragma 'inv_phit' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_phit' in module 'psp102'.
  #undef inv_phit
#endif
#ifdef Eg
  #warning conflict: Eg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Eg' is also defined as a pragma.
  #warning conflict: Pragma 'Eg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Eg' in module 'psp102'.
  #undef Eg
#endif
#ifdef phibFac
  #warning conflict: phibFac is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phibFac' is also defined as a pragma.
  #warning conflict: Pragma 'phibFac' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phibFac' in module 'psp102'.
  #undef phibFac
#endif
#ifdef CoxPrime
  #warning conflict: CoxPrime is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CoxPrime' is also defined as a pragma.
  #warning conflict: Pragma 'CoxPrime' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CoxPrime' in module 'psp102'.
  #undef CoxPrime
#endif
#ifdef tox_sq
  #warning conflict: tox_sq is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tox_sq' is also defined as a pragma.
  #warning conflict: Pragma 'tox_sq' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tox_sq' in module 'psp102'.
  #undef tox_sq
#endif
#ifdef delVg
  #warning conflict: delVg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'delVg' is also defined as a pragma.
  #warning conflict: Pragma 'delVg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'delVg' in module 'psp102'.
  #undef delVg
#endif
#ifdef CoxovPrime
  #warning conflict: CoxovPrime is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CoxovPrime' is also defined as a pragma.
  #warning conflict: Pragma 'CoxovPrime' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CoxovPrime' in module 'psp102'.
  #undef CoxovPrime
#endif
#ifdef GOV
  #warning conflict: GOV is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GOV' is also defined as a pragma.
  #warning conflict: Pragma 'GOV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GOV' in module 'psp102'.
  #undef GOV
#endif
#ifdef GOV2
  #warning conflict: GOV2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GOV2' is also defined as a pragma.
  #warning conflict: Pragma 'GOV2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GOV2' in module 'psp102'.
  #undef GOV2
#endif
#ifdef np
  #warning conflict: np is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'np' is also defined as a pragma.
  #warning conflict: Pragma 'np' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'np' in module 'psp102'.
  #undef np
#endif
#ifdef kp
  #warning conflict: kp is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'kp' is also defined as a pragma.
  #warning conflict: Pragma 'kp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'kp' in module 'psp102'.
  #undef kp
#endif
#ifdef qq
  #warning conflict: qq is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qq' is also defined as a pragma.
  #warning conflict: Pragma 'qq' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qq' in module 'psp102'.
  #undef qq
#endif
#ifdef qb0
  #warning conflict: qb0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qb0' is also defined as a pragma.
  #warning conflict: Pragma 'qb0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qb0' in module 'psp102'.
  #undef qb0
#endif
#ifdef dphibq
  #warning conflict: dphibq is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'dphibq' is also defined as a pragma.
  #warning conflict: Pragma 'dphibq' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dphibq' in module 'psp102'.
  #undef dphibq
#endif
#ifdef qlim2
  #warning conflict: qlim2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qlim2' is also defined as a pragma.
  #warning conflict: Pragma 'qlim2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qlim2' in module 'psp102'.
  #undef qlim2
#endif
#ifdef E_eff0
  #warning conflict: E_eff0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'E_eff0' is also defined as a pragma.
  #warning conflict: Pragma 'E_eff0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'E_eff0' in module 'psp102'.
  #undef E_eff0
#endif
#ifdef eta_mu
  #warning conflict: eta_mu is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'eta_mu' is also defined as a pragma.
  #warning conflict: Pragma 'eta_mu' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eta_mu' in module 'psp102'.
  #undef eta_mu
#endif
#ifdef BCH
  #warning conflict: BCH is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'BCH' is also defined as a pragma.
  #warning conflict: Pragma 'BCH' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BCH' in module 'psp102'.
  #undef BCH
#endif
#ifdef BOV
  #warning conflict: BOV is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'BOV' is also defined as a pragma.
  #warning conflict: Pragma 'BOV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BOV' in module 'psp102'.
  #undef BOV
#endif
#ifdef inv_CHIB
  #warning conflict: inv_CHIB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'inv_CHIB' is also defined as a pragma.
  #warning conflict: Pragma 'inv_CHIB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_CHIB' in module 'psp102'.
  #undef inv_CHIB
#endif
#ifdef GCQ
  #warning conflict: GCQ is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GCQ' is also defined as a pragma.
  #warning conflict: Pragma 'GCQ' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GCQ' in module 'psp102'.
  #undef GCQ
#endif
#ifdef Dch
  #warning conflict: Dch is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Dch' is also defined as a pragma.
  #warning conflict: Pragma 'Dch' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dch' in module 'psp102'.
  #undef Dch
#endif
#ifdef Dov
  #warning conflict: Dov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Dov' is also defined as a pragma.
  #warning conflict: Pragma 'Dov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dov' in module 'psp102'.
  #undef Dov
#endif
#ifdef tf_bet
  #warning conflict: tf_bet is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tf_bet' is also defined as a pragma.
  #warning conflict: Pragma 'tf_bet' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tf_bet' in module 'psp102'.
  #undef tf_bet
#endif
#ifdef tf_mue
  #warning conflict: tf_mue is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tf_mue' is also defined as a pragma.
  #warning conflict: Pragma 'tf_mue' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tf_mue' in module 'psp102'.
  #undef tf_mue
#endif
#ifdef tf_cs
  #warning conflict: tf_cs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tf_cs' is also defined as a pragma.
  #warning conflict: Pragma 'tf_cs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tf_cs' in module 'psp102'.
  #undef tf_cs
#endif
#ifdef tf_xcor
  #warning conflict: tf_xcor is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tf_xcor' is also defined as a pragma.
  #warning conflict: Pragma 'tf_xcor' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tf_xcor' in module 'psp102'.
  #undef tf_xcor
#endif
#ifdef tf_ther
  #warning conflict: tf_ther is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tf_ther' is also defined as a pragma.
  #warning conflict: Pragma 'tf_ther' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tf_ther' in module 'psp102'.
  #undef tf_ther
#endif
#ifdef tf_thesat
  #warning conflict: tf_thesat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tf_thesat' is also defined as a pragma.
  #warning conflict: Pragma 'tf_thesat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tf_thesat' in module 'psp102'.
  #undef tf_thesat
#endif
#ifdef tf_ig
  #warning conflict: tf_ig is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tf_ig' is also defined as a pragma.
  #warning conflict: Pragma 'tf_ig' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tf_ig' in module 'psp102'.
  #undef tf_ig
#endif
#ifdef xi_ov
  #warning conflict: xi_ov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xi_ov' is also defined as a pragma.
  #warning conflict: Pragma 'xi_ov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xi_ov' in module 'psp102'.
  #undef xi_ov
#endif
#ifdef inv_xi_ov
  #warning conflict: inv_xi_ov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'inv_xi_ov' is also defined as a pragma.
  #warning conflict: Pragma 'inv_xi_ov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_xi_ov' in module 'psp102'.
  #undef inv_xi_ov
#endif
#ifdef x_mrg_ov
  #warning conflict: x_mrg_ov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'x_mrg_ov' is also defined as a pragma.
  #warning conflict: Pragma 'x_mrg_ov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x_mrg_ov' in module 'psp102'.
  #undef x_mrg_ov
#endif
#ifdef x1
  #warning conflict: x1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'x1' is also defined as a pragma.
  #warning conflict: Pragma 'x1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x1' in module 'psp102'.
  #undef x1
#endif
#ifdef inv_xg1
  #warning conflict: inv_xg1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'inv_xg1' is also defined as a pragma.
  #warning conflict: Pragma 'inv_xg1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_xg1' in module 'psp102'.
  #undef inv_xg1
#endif
#ifdef Vdsat_lim
  #warning conflict: Vdsat_lim is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vdsat_lim' is also defined as a pragma.
  #warning conflict: Pragma 'Vdsat_lim' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vdsat_lim' in module 'psp102'.
  #undef Vdsat_lim
#endif
#ifdef nt
  #warning conflict: nt is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'nt' is also defined as a pragma.
  #warning conflict: Pragma 'nt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'nt' in module 'psp102'.
  #undef nt
#endif
#ifdef Cox_over_q
  #warning conflict: Cox_over_q is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Cox_over_q' is also defined as a pragma.
  #warning conflict: Pragma 'Cox_over_q' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Cox_over_q' in module 'psp102'.
  #undef Cox_over_q
#endif
#ifdef phib
  #warning conflict: phib is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phib' is also defined as a pragma.
  #warning conflict: Pragma 'phib' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phib' in module 'psp102'.
  #undef phib
#endif
#ifdef sqrt_phib
  #warning conflict: sqrt_phib is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sqrt_phib' is also defined as a pragma.
  #warning conflict: Pragma 'sqrt_phib' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sqrt_phib' in module 'psp102'.
  #undef sqrt_phib
#endif
#ifdef phix
  #warning conflict: phix is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phix' is also defined as a pragma.
  #warning conflict: Pragma 'phix' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phix' in module 'psp102'.
  #undef phix
#endif
#ifdef aphi
  #warning conflict: aphi is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'aphi' is also defined as a pragma.
  #warning conflict: Pragma 'aphi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'aphi' in module 'psp102'.
  #undef aphi
#endif
#ifdef bphi
  #warning conflict: bphi is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'bphi' is also defined as a pragma.
  #warning conflict: Pragma 'bphi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'bphi' in module 'psp102'.
  #undef bphi
#endif
#ifdef phix1
  #warning conflict: phix1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phix1' is also defined as a pragma.
  #warning conflict: Pragma 'phix1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phix1' in module 'psp102'.
  #undef phix1
#endif
#ifdef phix2
  #warning conflict: phix2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phix2' is also defined as a pragma.
  #warning conflict: Pragma 'phix2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phix2' in module 'psp102'.
  #undef phix2
#endif
#ifdef G_0
  #warning conflict: G_0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'G_0' is also defined as a pragma.
  #warning conflict: Pragma 'G_0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'G_0' in module 'psp102'.
  #undef G_0
#endif
#ifdef phit1
  #warning conflict: phit1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phit1' is also defined as a pragma.
  #warning conflict: Pragma 'phit1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phit1' in module 'psp102'.
  #undef phit1
#endif
#ifdef inv_phit1
  #warning conflict: inv_phit1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'inv_phit1' is also defined as a pragma.
  #warning conflict: Pragma 'inv_phit1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_phit1' in module 'psp102'.
  #undef inv_phit1
#endif
#ifdef alpha_b
  #warning conflict: alpha_b is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'alpha_b' is also defined as a pragma.
  #warning conflict: Pragma 'alpha_b' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alpha_b' in module 'psp102'.
  #undef alpha_b
#endif
#ifdef inv_VP
  #warning conflict: inv_VP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'inv_VP' is also defined as a pragma.
  #warning conflict: Pragma 'inv_VP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_VP' in module 'psp102'.
  #undef inv_VP
#endif
#ifdef inv_AX
  #warning conflict: inv_AX is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'inv_AX' is also defined as a pragma.
  #warning conflict: Pragma 'inv_AX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_AX' in module 'psp102'.
  #undef inv_AX
#endif
#ifdef Sfl_prefac
  #warning conflict: Sfl_prefac is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Sfl_prefac' is also defined as a pragma.
  #warning conflict: Pragma 'Sfl_prefac' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Sfl_prefac' in module 'psp102'.
  #undef Sfl_prefac
#endif
#ifdef Vgs
  #warning conflict: Vgs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vgs' is also defined as a pragma.
  #warning conflict: Pragma 'Vgs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vgs' in module 'psp102'.
  #undef Vgs
#endif
#ifdef Vgd
  #warning conflict: Vgd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vgd' is also defined as a pragma.
  #warning conflict: Pragma 'Vgd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vgd' in module 'psp102'.
  #undef Vgd
#endif
#ifdef Vds
  #warning conflict: Vds is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vds' is also defined as a pragma.
  #warning conflict: Pragma 'Vds' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vds' in module 'psp102'.
  #undef Vds
#endif
#ifdef Vsb
  #warning conflict: Vsb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vsb' is also defined as a pragma.
  #warning conflict: Pragma 'Vsb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vsb' in module 'psp102'.
  #undef Vsb
#endif
#ifdef Vsbstar
  #warning conflict: Vsbstar is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vsbstar' is also defined as a pragma.
  #warning conflict: Pragma 'Vsbstar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vsbstar' in module 'psp102'.
  #undef Vsbstar
#endif
#ifdef Vgb
  #warning conflict: Vgb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vgb' is also defined as a pragma.
  #warning conflict: Pragma 'Vgb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vgb' in module 'psp102'.
  #undef Vgb
#endif
#ifdef Vgb1
  #warning conflict: Vgb1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vgb1' is also defined as a pragma.
  #warning conflict: Pragma 'Vgb1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vgb1' in module 'psp102'.
  #undef Vgb1
#endif
#ifdef Vgbstar
  #warning conflict: Vgbstar is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vgbstar' is also defined as a pragma.
  #warning conflict: Pragma 'Vgbstar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vgbstar' in module 'psp102'.
  #undef Vgbstar
#endif
#ifdef Vdb
  #warning conflict: Vdb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vdb' is also defined as a pragma.
  #warning conflict: Pragma 'Vdb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vdb' in module 'psp102'.
  #undef Vdb
#endif
#ifdef Vdbstar
  #warning conflict: Vdbstar is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vdbstar' is also defined as a pragma.
  #warning conflict: Pragma 'Vdbstar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vdbstar' in module 'psp102'.
  #undef Vdbstar
#endif
#ifdef Vdsx
  #warning conflict: Vdsx is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vdsx' is also defined as a pragma.
  #warning conflict: Pragma 'Vdsx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vdsx' in module 'psp102'.
  #undef Vdsx
#endif
#ifdef Vsbx
  #warning conflict: Vsbx is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vsbx' is also defined as a pragma.
  #warning conflict: Pragma 'Vsbx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vsbx' in module 'psp102'.
  #undef Vsbx
#endif
#ifdef Dnsub
  #warning conflict: Dnsub is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Dnsub' is also defined as a pragma.
  #warning conflict: Pragma 'Dnsub' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dnsub' in module 'psp102'.
  #undef Dnsub
#endif
#ifdef Igidl
  #warning conflict: Igidl is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igidl' is also defined as a pragma.
  #warning conflict: Pragma 'Igidl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igidl' in module 'psp102'.
  #undef Igidl
#endif
#ifdef Igisl
  #warning conflict: Igisl is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igisl' is also defined as a pragma.
  #warning conflict: Pragma 'Igisl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igisl' in module 'psp102'.
  #undef Igisl
#endif
#ifdef Vtovd
  #warning conflict: Vtovd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vtovd' is also defined as a pragma.
  #warning conflict: Pragma 'Vtovd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vtovd' in module 'psp102'.
  #undef Vtovd
#endif
#ifdef Vtovs
  #warning conflict: Vtovs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vtovs' is also defined as a pragma.
  #warning conflict: Pragma 'Vtovs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vtovs' in module 'psp102'.
  #undef Vtovs
#endif
#ifdef x_s
  #warning conflict: x_s is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'x_s' is also defined as a pragma.
  #warning conflict: Pragma 'x_s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x_s' in module 'psp102'.
  #undef x_s
#endif
#ifdef sqm
  #warning conflict: sqm is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sqm' is also defined as a pragma.
  #warning conflict: Pragma 'sqm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sqm' in module 'psp102'.
  #undef sqm
#endif
#ifdef alpha
  #warning conflict: alpha is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'alpha' is also defined as a pragma.
  #warning conflict: Pragma 'alpha' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alpha' in module 'psp102'.
  #undef alpha
#endif
#ifdef alpha1
  #warning conflict: alpha1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'alpha1' is also defined as a pragma.
  #warning conflict: Pragma 'alpha1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'alpha1' in module 'psp102'.
  #undef alpha1
#endif
#ifdef eta_p
  #warning conflict: eta_p is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'eta_p' is also defined as a pragma.
  #warning conflict: Pragma 'eta_p' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'eta_p' in module 'psp102'.
  #undef eta_p
#endif
#ifdef phi_inf
  #warning conflict: phi_inf is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phi_inf' is also defined as a pragma.
  #warning conflict: Pragma 'phi_inf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phi_inf' in module 'psp102'.
  #undef phi_inf
#endif
#ifdef za
  #warning conflict: za is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'za' is also defined as a pragma.
  #warning conflict: Pragma 'za' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'za' in module 'psp102'.
  #undef za
#endif
#ifdef xitsb
  #warning conflict: xitsb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xitsb' is also defined as a pragma.
  #warning conflict: Pragma 'xitsb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xitsb' in module 'psp102'.
  #undef xitsb
#endif
#ifdef rhob
  #warning conflict: rhob is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'rhob' is also defined as a pragma.
  #warning conflict: Pragma 'rhob' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rhob' in module 'psp102'.
  #undef rhob
#endif
#ifdef thesat1
  #warning conflict: thesat1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'thesat1' is also defined as a pragma.
  #warning conflict: Pragma 'thesat1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'thesat1' in module 'psp102'.
  #undef thesat1
#endif
#ifdef wsat
  #warning conflict: wsat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wsat' is also defined as a pragma.
  #warning conflict: Pragma 'wsat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wsat' in module 'psp102'.
  #undef wsat
#endif
#ifdef ysat
  #warning conflict: ysat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ysat' is also defined as a pragma.
  #warning conflict: Pragma 'ysat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ysat' in module 'psp102'.
  #undef ysat
#endif
#ifdef zsat
  #warning conflict: zsat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'zsat' is also defined as a pragma.
  #warning conflict: Pragma 'zsat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zsat' in module 'psp102'.
  #undef zsat
#endif
#ifdef r1
  #warning conflict: r1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'r1' is also defined as a pragma.
  #warning conflict: Pragma 'r1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'r1' in module 'psp102'.
  #undef r1
#endif
#ifdef r2
  #warning conflict: r2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'r2' is also defined as a pragma.
  #warning conflict: Pragma 'r2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'r2' in module 'psp102'.
  #undef r2
#endif
#ifdef dL
  #warning conflict: dL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'dL' is also defined as a pragma.
  #warning conflict: Pragma 'dL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dL' in module 'psp102'.
  #undef dL
#endif
#ifdef GdL
  #warning conflict: GdL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GdL' is also defined as a pragma.
  #warning conflict: Pragma 'GdL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GdL' in module 'psp102'.
  #undef GdL
#endif
#ifdef dL1
  #warning conflict: dL1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'dL1' is also defined as a pragma.
  #warning conflict: Pragma 'dL1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dL1' in module 'psp102'.
  #undef dL1
#endif
#ifdef FdL
  #warning conflict: FdL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'FdL' is also defined as a pragma.
  #warning conflict: Pragma 'FdL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FdL' in module 'psp102'.
  #undef FdL
#endif
#ifdef GR
  #warning conflict: GR is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GR' is also defined as a pragma.
  #warning conflict: Pragma 'GR' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GR' in module 'psp102'.
  #undef GR
#endif
#ifdef Gmob
  #warning conflict: Gmob is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Gmob' is also defined as a pragma.
  #warning conflict: Pragma 'Gmob' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Gmob' in module 'psp102'.
  #undef Gmob
#endif
#ifdef Gmob_dL
  #warning conflict: Gmob_dL is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Gmob_dL' is also defined as a pragma.
  #warning conflict: Pragma 'Gmob_dL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Gmob_dL' in module 'psp102'.
  #undef Gmob_dL
#endif
#ifdef Gvsat
  #warning conflict: Gvsat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Gvsat' is also defined as a pragma.
  #warning conflict: Pragma 'Gvsat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Gvsat' in module 'psp102'.
  #undef Gvsat
#endif
#ifdef Gvsatinv
  #warning conflict: Gvsatinv is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Gvsatinv' is also defined as a pragma.
  #warning conflict: Pragma 'Gvsatinv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Gvsatinv' in module 'psp102'.
  #undef Gvsatinv
#endif
#ifdef QCLM
  #warning conflict: QCLM is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'QCLM' is also defined as a pragma.
  #warning conflict: Pragma 'QCLM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'QCLM' in module 'psp102'.
  #undef QCLM
#endif
#ifdef xgm
  #warning conflict: xgm is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xgm' is also defined as a pragma.
  #warning conflict: Pragma 'xgm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xgm' in module 'psp102'.
  #undef xgm
#endif
#ifdef Voxm
  #warning conflict: Voxm is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Voxm' is also defined as a pragma.
  #warning conflict: Pragma 'Voxm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Voxm' in module 'psp102'.
  #undef Voxm
#endif
#ifdef dps
  #warning conflict: dps is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'dps' is also defined as a pragma.
  #warning conflict: Pragma 'dps' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dps' in module 'psp102'.
  #undef dps
#endif
#ifdef qim
  #warning conflict: qim is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qim' is also defined as a pragma.
  #warning conflict: Pragma 'qim' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qim' in module 'psp102'.
  #undef qim
#endif
#ifdef qim1
  #warning conflict: qim1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qim1' is also defined as a pragma.
  #warning conflict: Pragma 'qim1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qim1' in module 'psp102'.
  #undef qim1
#endif
#ifdef qim1_1
  #warning conflict: qim1_1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qim1_1' is also defined as a pragma.
  #warning conflict: Pragma 'qim1_1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qim1_1' in module 'psp102'.
  #undef qim1_1
#endif
#ifdef xgs_ov
  #warning conflict: xgs_ov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xgs_ov' is also defined as a pragma.
  #warning conflict: Pragma 'xgs_ov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xgs_ov' in module 'psp102'.
  #undef xgs_ov
#endif
#ifdef xgd_ov
  #warning conflict: xgd_ov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xgd_ov' is also defined as a pragma.
  #warning conflict: Pragma 'xgd_ov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xgd_ov' in module 'psp102'.
  #undef xgd_ov
#endif
#ifdef sigVds
  #warning conflict: sigVds is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sigVds' is also defined as a pragma.
  #warning conflict: Pragma 'sigVds' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sigVds' in module 'psp102'.
  #undef sigVds
#endif
#ifdef Ux
  #warning conflict: Ux is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Ux' is also defined as a pragma.
  #warning conflict: Pragma 'Ux' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ux' in module 'psp102'.
  #undef Ux
#endif
#ifdef xg
  #warning conflict: xg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xg' is also defined as a pragma.
  #warning conflict: Pragma 'xg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xg' in module 'psp102'.
  #undef xg
#endif
#ifdef mu
  #warning conflict: mu is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'mu' is also defined as a pragma.
  #warning conflict: Pragma 'mu' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mu' in module 'psp102'.
  #undef mu
#endif
#ifdef nu
  #warning conflict: nu is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'nu' is also defined as a pragma.
  #warning conflict: Pragma 'nu' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'nu' in module 'psp102'.
  #undef nu
#endif
#ifdef xn_s
  #warning conflict: xn_s is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xn_s' is also defined as a pragma.
  #warning conflict: Pragma 'xn_s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xn_s' in module 'psp102'.
  #undef xn_s
#endif
#ifdef delta_ns
  #warning conflict: delta_ns is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'delta_ns' is also defined as a pragma.
  #warning conflict: Pragma 'delta_ns' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'delta_ns' in module 'psp102'.
  #undef delta_ns
#endif
#ifdef Gf
  #warning conflict: Gf is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Gf' is also defined as a pragma.
  #warning conflict: Pragma 'Gf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Gf' in module 'psp102'.
  #undef Gf
#endif
#ifdef Gf2
  #warning conflict: Gf2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Gf2' is also defined as a pragma.
  #warning conflict: Pragma 'Gf2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Gf2' in module 'psp102'.
  #undef Gf2
#endif
#ifdef inv_Gf2
  #warning conflict: inv_Gf2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'inv_Gf2' is also defined as a pragma.
  #warning conflict: Pragma 'inv_Gf2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_Gf2' in module 'psp102'.
  #undef inv_Gf2
#endif
#ifdef xi
  #warning conflict: xi is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xi' is also defined as a pragma.
  #warning conflict: Pragma 'xi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xi' in module 'psp102'.
  #undef xi
#endif
#ifdef inv_xi
  #warning conflict: inv_xi is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'inv_xi' is also defined as a pragma.
  #warning conflict: Pragma 'inv_xi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_xi' in module 'psp102'.
  #undef inv_xi
#endif
#ifdef margin
  #warning conflict: margin is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'margin' is also defined as a pragma.
  #warning conflict: Pragma 'margin' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'margin' in module 'psp102'.
  #undef margin
#endif
#ifdef qeff
  #warning conflict: qeff is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qeff' is also defined as a pragma.
  #warning conflict: Pragma 'qeff' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qeff' in module 'psp102'.
  #undef qeff
#endif
#ifdef COX_qm
  #warning conflict: COX_qm is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'COX_qm' is also defined as a pragma.
  #warning conflict: Pragma 'COX_qm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'COX_qm' in module 'psp102'.
  #undef COX_qm
#endif
#ifdef SP_xg1
  #warning conflict: SP_xg1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_xg1' is also defined as a pragma.
  #warning conflict: Pragma 'SP_xg1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_xg1' in module 'psp102'.
  #undef SP_xg1
#endif
#ifdef SP_S_temp
  #warning conflict: SP_S_temp is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_temp' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_temp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_temp' in module 'psp102'.
  #undef SP_S_temp
#endif
#ifdef SP_S_temp1
  #warning conflict: SP_S_temp1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_temp1' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_temp1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_temp1' in module 'psp102'.
  #undef SP_S_temp1
#endif
#ifdef SP_S_temp2
  #warning conflict: SP_S_temp2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_temp2' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_temp2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_temp2' in module 'psp102'.
  #undef SP_S_temp2
#endif
#ifdef SP_S_yg
  #warning conflict: SP_S_yg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_yg' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_yg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_yg' in module 'psp102'.
  #undef SP_S_yg
#endif
#ifdef SP_S_ysub
  #warning conflict: SP_S_ysub is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_ysub' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_ysub' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_ysub' in module 'psp102'.
  #undef SP_S_ysub
#endif
#ifdef SP_S_y0
  #warning conflict: SP_S_y0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_y0' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_y0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_y0' in module 'psp102'.
  #undef SP_S_y0
#endif
#ifdef SP_S_a
  #warning conflict: SP_S_a is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_a' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_a' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_a' in module 'psp102'.
  #undef SP_S_a
#endif
#ifdef SP_S_b
  #warning conflict: SP_S_b is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_b' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_b' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_b' in module 'psp102'.
  #undef SP_S_b
#endif
#ifdef SP_S_c
  #warning conflict: SP_S_c is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_c' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_c' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_c' in module 'psp102'.
  #undef SP_S_c
#endif
#ifdef SP_S_bx
  #warning conflict: SP_S_bx is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_bx' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_bx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_bx' in module 'psp102'.
  #undef SP_S_bx
#endif
#ifdef SP_S_tau
  #warning conflict: SP_S_tau is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_tau' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_tau' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_tau' in module 'psp102'.
  #undef SP_S_tau
#endif
#ifdef SP_S_eta
  #warning conflict: SP_S_eta is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_eta' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_eta' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_eta' in module 'psp102'.
  #undef SP_S_eta
#endif
#ifdef SP_S_delta0
  #warning conflict: SP_S_delta0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_delta0' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_delta0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_delta0' in module 'psp102'.
  #undef SP_S_delta0
#endif
#ifdef SP_S_delta1
  #warning conflict: SP_S_delta1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_delta1' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_delta1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_delta1' in module 'psp102'.
  #undef SP_S_delta1
#endif
#ifdef SP_S_pC
  #warning conflict: SP_S_pC is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_pC' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_pC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_pC' in module 'psp102'.
  #undef SP_S_pC
#endif
#ifdef SP_S_qC
  #warning conflict: SP_S_qC is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_qC' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_qC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_qC' in module 'psp102'.
  #undef SP_S_qC
#endif
#ifdef SP_S_A_fac
  #warning conflict: SP_S_A_fac is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_A_fac' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_A_fac' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_A_fac' in module 'psp102'.
  #undef SP_S_A_fac
#endif
#ifdef SP_S_x1
  #warning conflict: SP_S_x1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_x1' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_x1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_x1' in module 'psp102'.
  #undef SP_S_x1
#endif
#ifdef SP_S_w
  #warning conflict: SP_S_w is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_w' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_w' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_w' in module 'psp102'.
  #undef SP_S_w
#endif
#ifdef SP_S_xbar
  #warning conflict: SP_S_xbar is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_xbar' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_xbar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_xbar' in module 'psp102'.
  #undef SP_S_xbar
#endif
#ifdef SP_S_x0
  #warning conflict: SP_S_x0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_x0' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_x0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_x0' in module 'psp102'.
  #undef SP_S_x0
#endif
#ifdef SP_S_xi0
  #warning conflict: SP_S_xi0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_xi0' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_xi0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_xi0' in module 'psp102'.
  #undef SP_S_xi0
#endif
#ifdef SP_S_xi1
  #warning conflict: SP_S_xi1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_xi1' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_xi1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_xi1' in module 'psp102'.
  #undef SP_S_xi1
#endif
#ifdef SP_S_xi2
  #warning conflict: SP_S_xi2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_S_xi2' is also defined as a pragma.
  #warning conflict: Pragma 'SP_S_xi2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_S_xi2' in module 'psp102'.
  #undef SP_S_xi2
#endif
#ifdef SP_OV_yg
  #warning conflict: SP_OV_yg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_yg' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_yg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_yg' in module 'psp102'.
  #undef SP_OV_yg
#endif
#ifdef SP_OV_z
  #warning conflict: SP_OV_z is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_z' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_z' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_z' in module 'psp102'.
  #undef SP_OV_z
#endif
#ifdef SP_OV_eta
  #warning conflict: SP_OV_eta is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_eta' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_eta' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_eta' in module 'psp102'.
  #undef SP_OV_eta
#endif
#ifdef SP_OV_a
  #warning conflict: SP_OV_a is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_a' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_a' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_a' in module 'psp102'.
  #undef SP_OV_a
#endif
#ifdef SP_OV_c
  #warning conflict: SP_OV_c is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_c' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_c' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_c' in module 'psp102'.
  #undef SP_OV_c
#endif
#ifdef SP_OV_tau
  #warning conflict: SP_OV_tau is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_tau' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_tau' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_tau' in module 'psp102'.
  #undef SP_OV_tau
#endif
#ifdef SP_OV_D0
  #warning conflict: SP_OV_D0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_D0' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_D0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_D0' in module 'psp102'.
  #undef SP_OV_D0
#endif
#ifdef SP_OV_y0
  #warning conflict: SP_OV_y0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_y0' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_y0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_y0' in module 'psp102'.
  #undef SP_OV_y0
#endif
#ifdef SP_OV_xi
  #warning conflict: SP_OV_xi is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_xi' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_xi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_xi' in module 'psp102'.
  #undef SP_OV_xi
#endif
#ifdef SP_OV_temp
  #warning conflict: SP_OV_temp is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_temp' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_temp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_temp' in module 'psp102'.
  #undef SP_OV_temp
#endif
#ifdef SP_OV_p
  #warning conflict: SP_OV_p is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_p' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_p' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_p' in module 'psp102'.
  #undef SP_OV_p
#endif
#ifdef SP_OV_q
  #warning conflict: SP_OV_q is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_q' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_q' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_q' in module 'psp102'.
  #undef SP_OV_q
#endif
#ifdef SP_OV_w
  #warning conflict: SP_OV_w is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_w' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_w' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_w' in module 'psp102'.
  #undef SP_OV_w
#endif
#ifdef SP_OV_Afac
  #warning conflict: SP_OV_Afac is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_Afac' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_Afac' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_Afac' in module 'psp102'.
  #undef SP_OV_Afac
#endif
#ifdef SP_OV_xbar
  #warning conflict: SP_OV_xbar is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_xbar' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_xbar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_xbar' in module 'psp102'.
  #undef SP_OV_xbar
#endif
#ifdef SP_OV_x0
  #warning conflict: SP_OV_x0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_x0' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_x0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_x0' in module 'psp102'.
  #undef SP_OV_x0
#endif
#ifdef SP_OV_u
  #warning conflict: SP_OV_u is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'SP_OV_u' is also defined as a pragma.
  #warning conflict: Pragma 'SP_OV_u' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SP_OV_u' in module 'psp102'.
  #undef SP_OV_u
#endif
#ifdef x_d
  #warning conflict: x_d is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'x_d' is also defined as a pragma.
  #warning conflict: Pragma 'x_d' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x_d' in module 'psp102'.
  #undef x_d
#endif
#ifdef x_m
  #warning conflict: x_m is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'x_m' is also defined as a pragma.
  #warning conflict: Pragma 'x_m' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x_m' in module 'psp102'.
  #undef x_m
#endif
#ifdef x_ds
  #warning conflict: x_ds is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'x_ds' is also defined as a pragma.
  #warning conflict: Pragma 'x_ds' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x_ds' in module 'psp102'.
  #undef x_ds
#endif
#ifdef Rxcor
  #warning conflict: Rxcor is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Rxcor' is also defined as a pragma.
  #warning conflict: Pragma 'Rxcor' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Rxcor' in module 'psp102'.
  #undef Rxcor
#endif
#ifdef delta_1s
  #warning conflict: delta_1s is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'delta_1s' is also defined as a pragma.
  #warning conflict: Pragma 'delta_1s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'delta_1s' in module 'psp102'.
  #undef delta_1s
#endif
#ifdef xi0s
  #warning conflict: xi0s is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xi0s' is also defined as a pragma.
  #warning conflict: Pragma 'xi0s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xi0s' in module 'psp102'.
  #undef xi0s
#endif
#ifdef xi1s
  #warning conflict: xi1s is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xi1s' is also defined as a pragma.
  #warning conflict: Pragma 'xi1s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xi1s' in module 'psp102'.
  #undef xi1s
#endif
#ifdef xi2s
  #warning conflict: xi2s is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xi2s' is also defined as a pragma.
  #warning conflict: Pragma 'xi2s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xi2s' in module 'psp102'.
  #undef xi2s
#endif
#ifdef xi0d
  #warning conflict: xi0d is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xi0d' is also defined as a pragma.
  #warning conflict: Pragma 'xi0d' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xi0d' in module 'psp102'.
  #undef xi0d
#endif
#ifdef Es
  #warning conflict: Es is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Es' is also defined as a pragma.
  #warning conflict: Pragma 'Es' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Es' in module 'psp102'.
  #undef Es
#endif
#ifdef Em
  #warning conflict: Em is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Em' is also defined as a pragma.
  #warning conflict: Pragma 'Em' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Em' in module 'psp102'.
  #undef Em
#endif
#ifdef Ed
  #warning conflict: Ed is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Ed' is also defined as a pragma.
  #warning conflict: Pragma 'Ed' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ed' in module 'psp102'.
  #undef Ed
#endif
#ifdef Ds
  #warning conflict: Ds is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Ds' is also defined as a pragma.
  #warning conflict: Pragma 'Ds' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ds' in module 'psp102'.
  #undef Ds
#endif
#ifdef Dm
  #warning conflict: Dm is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Dm' is also defined as a pragma.
  #warning conflict: Pragma 'Dm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dm' in module 'psp102'.
  #undef Dm
#endif
#ifdef Dd
  #warning conflict: Dd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Dd' is also defined as a pragma.
  #warning conflict: Pragma 'Dd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dd' in module 'psp102'.
  #undef Dd
#endif
#ifdef Ps
  #warning conflict: Ps is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Ps' is also defined as a pragma.
  #warning conflict: Pragma 'Ps' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ps' in module 'psp102'.
  #undef Ps
#endif
#ifdef xgs
  #warning conflict: xgs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xgs' is also defined as a pragma.
  #warning conflict: Pragma 'xgs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xgs' in module 'psp102'.
  #undef xgs
#endif
#ifdef qis
  #warning conflict: qis is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qis' is also defined as a pragma.
  #warning conflict: Pragma 'qis' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qis' in module 'psp102'.
  #undef qis
#endif
#ifdef qbs
  #warning conflict: qbs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qbs' is also defined as a pragma.
  #warning conflict: Pragma 'qbs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qbs' in module 'psp102'.
  #undef qbs
#endif
#ifdef qbm
  #warning conflict: qbm is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qbm' is also defined as a pragma.
  #warning conflict: Pragma 'qbm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qbm' in module 'psp102'.
  #undef qbm
#endif
#ifdef Eeffm
  #warning conflict: Eeffm is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Eeffm' is also defined as a pragma.
  #warning conflict: Pragma 'Eeffm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Eeffm' in module 'psp102'.
  #undef Eeffm
#endif
#ifdef Vm
  #warning conflict: Vm is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vm' is also defined as a pragma.
  #warning conflict: Pragma 'Vm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vm' in module 'psp102'.
  #undef Vm
#endif
#ifdef Phi_0
  #warning conflict: Phi_0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Phi_0' is also defined as a pragma.
  #warning conflict: Pragma 'Phi_0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Phi_0' in module 'psp102'.
  #undef Phi_0
#endif
#ifdef Phi_2
  #warning conflict: Phi_2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Phi_2' is also defined as a pragma.
  #warning conflict: Pragma 'Phi_2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Phi_2' in module 'psp102'.
  #undef Phi_2
#endif
#ifdef asat
  #warning conflict: asat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'asat' is also defined as a pragma.
  #warning conflict: Pragma 'asat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'asat' in module 'psp102'.
  #undef asat
#endif
#ifdef Phi_0_2
  #warning conflict: Phi_0_2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Phi_0_2' is also defined as a pragma.
  #warning conflict: Pragma 'Phi_0_2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Phi_0_2' in module 'psp102'.
  #undef Phi_0_2
#endif
#ifdef Phi0_Phi2
  #warning conflict: Phi0_Phi2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Phi0_Phi2' is also defined as a pragma.
  #warning conflict: Pragma 'Phi0_Phi2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Phi0_Phi2' in module 'psp102'.
  #undef Phi0_Phi2
#endif
#ifdef Vdse
  #warning conflict: Vdse is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vdse' is also defined as a pragma.
  #warning conflict: Pragma 'Vdse' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vdse' in module 'psp102'.
  #undef Vdse
#endif
#ifdef Vdsat
  #warning conflict: Vdsat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vdsat' is also defined as a pragma.
  #warning conflict: Pragma 'Vdsat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vdsat' in module 'psp102'.
  #undef Vdsat
#endif
#ifdef xn_d
  #warning conflict: xn_d is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xn_d' is also defined as a pragma.
  #warning conflict: Pragma 'xn_d' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xn_d' in module 'psp102'.
  #undef xn_d
#endif
#ifdef k_ds
  #warning conflict: k_ds is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'k_ds' is also defined as a pragma.
  #warning conflict: Pragma 'k_ds' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'k_ds' in module 'psp102'.
  #undef k_ds
#endif
#ifdef Udse
  #warning conflict: Udse is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Udse' is also defined as a pragma.
  #warning conflict: Pragma 'Udse' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Udse' in module 'psp102'.
  #undef Udse
#endif
#ifdef Mutmp
  #warning conflict: Mutmp is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Mutmp' is also defined as a pragma.
  #warning conflict: Pragma 'Mutmp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Mutmp' in module 'psp102'.
  #undef Mutmp
#endif
#ifdef Phi_sat
  #warning conflict: Phi_sat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Phi_sat' is also defined as a pragma.
  #warning conflict: Pragma 'Phi_sat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Phi_sat' in module 'psp102'.
  #undef Phi_sat
#endif
#ifdef delta_nd
  #warning conflict: delta_nd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'delta_nd' is also defined as a pragma.
  #warning conflict: Pragma 'delta_nd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'delta_nd' in module 'psp102'.
  #undef delta_nd
#endif
#ifdef pC
  #warning conflict: pC is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'pC' is also defined as a pragma.
  #warning conflict: Pragma 'pC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pC' in module 'psp102'.
  #undef pC
#endif
#ifdef qC
  #warning conflict: qC is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qC' is also defined as a pragma.
  #warning conflict: Pragma 'qC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qC' in module 'psp102'.
  #undef qC
#endif
#ifdef Pm
  #warning conflict: Pm is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Pm' is also defined as a pragma.
  #warning conflict: Pragma 'Pm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Pm' in module 'psp102'.
  #undef Pm
#endif
#ifdef d0
  #warning conflict: d0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'd0' is also defined as a pragma.
  #warning conflict: Pragma 'd0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'd0' in module 'psp102'.
  #undef d0
#endif
#ifdef D_bar
  #warning conflict: D_bar is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'D_bar' is also defined as a pragma.
  #warning conflict: Pragma 'D_bar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'D_bar' in module 'psp102'.
  #undef D_bar
#endif
#ifdef km
  #warning conflict: km is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'km' is also defined as a pragma.
  #warning conflict: Pragma 'km' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'km' in module 'psp102'.
  #undef km
#endif
#ifdef x_pm
  #warning conflict: x_pm is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'x_pm' is also defined as a pragma.
  #warning conflict: Pragma 'x_pm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x_pm' in module 'psp102'.
  #undef x_pm
#endif
#ifdef xi_pd
  #warning conflict: xi_pd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xi_pd' is also defined as a pragma.
  #warning conflict: Pragma 'xi_pd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xi_pd' in module 'psp102'.
  #undef xi_pd
#endif
#ifdef p_pd
  #warning conflict: p_pd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'p_pd' is also defined as a pragma.
  #warning conflict: Pragma 'p_pd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'p_pd' in module 'psp102'.
  #undef p_pd
#endif
#ifdef u_pd
  #warning conflict: u_pd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'u_pd' is also defined as a pragma.
  #warning conflict: Pragma 'u_pd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'u_pd' in module 'psp102'.
  #undef u_pd
#endif
#ifdef q_pd
  #warning conflict: q_pd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'q_pd' is also defined as a pragma.
  #warning conflict: Pragma 'q_pd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'q_pd' in module 'psp102'.
  #undef q_pd
#endif
#ifdef xs_ov
  #warning conflict: xs_ov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xs_ov' is also defined as a pragma.
  #warning conflict: Pragma 'xs_ov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xs_ov' in module 'psp102'.
  #undef xs_ov
#endif
#ifdef xd_ov
  #warning conflict: xd_ov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xd_ov' is also defined as a pragma.
  #warning conflict: Pragma 'xd_ov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xd_ov' in module 'psp102'.
  #undef xd_ov
#endif
#ifdef Vovs
  #warning conflict: Vovs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vovs' is also defined as a pragma.
  #warning conflict: Pragma 'Vovs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vovs' in module 'psp102'.
  #undef Vovs
#endif
#ifdef Vovd
  #warning conflict: Vovd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vovd' is also defined as a pragma.
  #warning conflict: Pragma 'Vovd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vovd' in module 'psp102'.
  #undef Vovd
#endif
#ifdef psi_t
  #warning conflict: psi_t is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'psi_t' is also defined as a pragma.
  #warning conflict: Pragma 'psi_t' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'psi_t' in module 'psp102'.
  #undef psi_t
#endif
#ifdef zg
  #warning conflict: zg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'zg' is also defined as a pragma.
  #warning conflict: Pragma 'zg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zg' in module 'psp102'.
  #undef zg
#endif
#ifdef delVsat
  #warning conflict: delVsat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'delVsat' is also defined as a pragma.
  #warning conflict: Pragma 'delVsat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'delVsat' in module 'psp102'.
  #undef delVsat
#endif
#ifdef TP
  #warning conflict: TP is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TP' is also defined as a pragma.
  #warning conflict: Pragma 'TP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TP' in module 'psp102'.
  #undef TP
#endif
#ifdef Dsi
  #warning conflict: Dsi is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Dsi' is also defined as a pragma.
  #warning conflict: Pragma 'Dsi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dsi' in module 'psp102'.
  #undef Dsi
#endif
#ifdef Dgate
  #warning conflict: Dgate is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Dgate' is also defined as a pragma.
  #warning conflict: Pragma 'Dgate' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Dgate' in module 'psp102'.
  #undef Dgate
#endif
#ifdef u0
  #warning conflict: u0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'u0' is also defined as a pragma.
  #warning conflict: Pragma 'u0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'u0' in module 'psp102'.
  #undef u0
#endif
#ifdef u0_div_H
  #warning conflict: u0_div_H is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'u0_div_H' is also defined as a pragma.
  #warning conflict: Pragma 'u0_div_H' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'u0_div_H' in module 'psp102'.
  #undef u0_div_H
#endif
#ifdef x
  #warning conflict: x is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'x' is also defined as a pragma.
  #warning conflict: Pragma 'x' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'x' in module 'psp102'.
  #undef x
#endif
#ifdef xsq
  #warning conflict: xsq is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xsq' is also defined as a pragma.
  #warning conflict: Pragma 'xsq' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xsq' in module 'psp102'.
  #undef xsq
#endif
#ifdef inv_x
  #warning conflict: inv_x is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'inv_x' is also defined as a pragma.
  #warning conflict: Pragma 'inv_x' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_x' in module 'psp102'.
  #undef inv_x
#endif
#ifdef ex
  #warning conflict: ex is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ex' is also defined as a pragma.
  #warning conflict: Pragma 'ex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ex' in module 'psp102'.
  #undef ex
#endif
#ifdef inv_ex
  #warning conflict: inv_ex is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'inv_ex' is also defined as a pragma.
  #warning conflict: Pragma 'inv_ex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'inv_ex' in module 'psp102'.
  #undef inv_ex
#endif
#ifdef Ag
  #warning conflict: Ag is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Ag' is also defined as a pragma.
  #warning conflict: Pragma 'Ag' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ag' in module 'psp102'.
  #undef Ag
#endif
#ifdef Bg
  #warning conflict: Bg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Bg' is also defined as a pragma.
  #warning conflict: Pragma 'Bg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Bg' in module 'psp102'.
  #undef Bg
#endif
#ifdef Sg
  #warning conflict: Sg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Sg' is also defined as a pragma.
  #warning conflict: Pragma 'Sg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Sg' in module 'psp102'.
  #undef Sg
#endif
#ifdef H
  #warning conflict: H is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'H' is also defined as a pragma.
  #warning conflict: Pragma 'H' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'H' in module 'psp102'.
  #undef H
#endif
#ifdef Fj
  #warning conflict: Fj is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Fj' is also defined as a pragma.
  #warning conflict: Pragma 'Fj' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Fj' in module 'psp102'.
  #undef Fj
#endif
#ifdef Fj2
  #warning conflict: Fj2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Fj2' is also defined as a pragma.
  #warning conflict: Pragma 'Fj2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Fj2' in module 'psp102'.
  #undef Fj2
#endif
#ifdef N1
  #warning conflict: N1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'N1' is also defined as a pragma.
  #warning conflict: Pragma 'N1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'N1' in module 'psp102'.
  #undef N1
#endif
#ifdef Nm1
  #warning conflict: Nm1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Nm1' is also defined as a pragma.
  #warning conflict: Pragma 'Nm1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Nm1' in module 'psp102'.
  #undef Nm1
#endif
#ifdef Delta_N1
  #warning conflict: Delta_N1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Delta_N1' is also defined as a pragma.
  #warning conflict: Pragma 'Delta_N1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Delta_N1' in module 'psp102'.
  #undef Delta_N1
#endif
#ifdef Sfl
  #warning conflict: Sfl is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Sfl' is also defined as a pragma.
  #warning conflict: Pragma 'Sfl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Sfl' in module 'psp102'.
  #undef Sfl
#endif
#ifdef H0
  #warning conflict: H0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'H0' is also defined as a pragma.
  #warning conflict: Pragma 'H0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'H0' in module 'psp102'.
  #undef H0
#endif
#ifdef t1
  #warning conflict: t1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 't1' is also defined as a pragma.
  #warning conflict: Pragma 't1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 't1' in module 'psp102'.
  #undef t1
#endif
#ifdef t2
  #warning conflict: t2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 't2' is also defined as a pragma.
  #warning conflict: Pragma 't2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 't2' in module 'psp102'.
  #undef t2
#endif
#ifdef sqt2
  #warning conflict: sqt2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sqt2' is also defined as a pragma.
  #warning conflict: Pragma 'sqt2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sqt2' in module 'psp102'.
  #undef sqt2
#endif
#ifdef r
  #warning conflict: r is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'r' is also defined as a pragma.
  #warning conflict: Pragma 'r' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'r' in module 'psp102'.
  #undef r
#endif
#ifdef lc
  #warning conflict: lc is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'lc' is also defined as a pragma.
  #warning conflict: Pragma 'lc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'lc' in module 'psp102'.
  #undef lc
#endif
#ifdef lcinv2
  #warning conflict: lcinv2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'lcinv2' is also defined as a pragma.
  #warning conflict: Pragma 'lcinv2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'lcinv2' in module 'psp102'.
  #undef lcinv2
#endif
#ifdef g_ideal
  #warning conflict: g_ideal is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'g_ideal' is also defined as a pragma.
  #warning conflict: Pragma 'g_ideal' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'g_ideal' in module 'psp102'.
  #undef g_ideal
#endif
#ifdef CGeff
  #warning conflict: CGeff is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CGeff' is also defined as a pragma.
  #warning conflict: Pragma 'CGeff' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGeff' in module 'psp102'.
  #undef CGeff
#endif
#ifdef mid
  #warning conflict: mid is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'mid' is also defined as a pragma.
  #warning conflict: Pragma 'mid' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mid' in module 'psp102'.
  #undef mid
#endif
#ifdef mig
  #warning conflict: mig is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'mig' is also defined as a pragma.
  #warning conflict: Pragma 'mig' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mig' in module 'psp102'.
  #undef mig
#endif
#ifdef migid
  #warning conflict: migid is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'migid' is also defined as a pragma.
  #warning conflict: Pragma 'migid' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'migid' in module 'psp102'.
  #undef migid
#endif
#ifdef c_igid
  #warning conflict: c_igid is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'c_igid' is also defined as a pragma.
  #warning conflict: Pragma 'c_igid' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'c_igid' in module 'psp102'.
  #undef c_igid
#endif
#ifdef sqid
  #warning conflict: sqid is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sqid' is also defined as a pragma.
  #warning conflict: Pragma 'sqid' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sqid' in module 'psp102'.
  #undef sqid
#endif
#ifdef sqig
  #warning conflict: sqig is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sqig' is also defined as a pragma.
  #warning conflict: Pragma 'sqig' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sqig' in module 'psp102'.
  #undef sqig
#endif
#ifdef shot_igs
  #warning conflict: shot_igs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'shot_igs' is also defined as a pragma.
  #warning conflict: Pragma 'shot_igs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'shot_igs' in module 'psp102'.
  #undef shot_igs
#endif
#ifdef shot_igsx
  #warning conflict: shot_igsx is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'shot_igsx' is also defined as a pragma.
  #warning conflict: Pragma 'shot_igsx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'shot_igsx' in module 'psp102'.
  #undef shot_igsx
#endif
#ifdef shot_igd
  #warning conflict: shot_igd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'shot_igd' is also defined as a pragma.
  #warning conflict: Pragma 'shot_igd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'shot_igd' in module 'psp102'.
  #undef shot_igd
#endif
#ifdef shot_igdx
  #warning conflict: shot_igdx is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'shot_igdx' is also defined as a pragma.
  #warning conflict: Pragma 'shot_igdx' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'shot_igdx' in module 'psp102'.
  #undef shot_igdx
#endif
#ifdef shot_iavl
  #warning conflict: shot_iavl is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'shot_iavl' is also defined as a pragma.
  #warning conflict: Pragma 'shot_iavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'shot_iavl' in module 'psp102'.
  #undef shot_iavl
#endif
#ifdef Ids
  #warning conflict: Ids is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Ids' is also defined as a pragma.
  #warning conflict: Pragma 'Ids' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Ids' in module 'psp102'.
  #undef Ids
#endif
#ifdef Iimpact
  #warning conflict: Iimpact is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Iimpact' is also defined as a pragma.
  #warning conflict: Pragma 'Iimpact' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Iimpact' in module 'psp102'.
  #undef Iimpact
#endif
#ifdef mavl
  #warning conflict: mavl is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'mavl' is also defined as a pragma.
  #warning conflict: Pragma 'mavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mavl' in module 'psp102'.
  #undef mavl
#endif
#ifdef Igdov
  #warning conflict: Igdov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igdov' is also defined as a pragma.
  #warning conflict: Pragma 'Igdov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igdov' in module 'psp102'.
  #undef Igdov
#endif
#ifdef Igsov
  #warning conflict: Igsov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igsov' is also defined as a pragma.
  #warning conflict: Pragma 'Igsov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igsov' in module 'psp102'.
  #undef Igsov
#endif
#ifdef Igc0
  #warning conflict: Igc0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igc0' is also defined as a pragma.
  #warning conflict: Pragma 'Igc0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igc0' in module 'psp102'.
  #undef Igc0
#endif
#ifdef igc
  #warning conflict: igc is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'igc' is also defined as a pragma.
  #warning conflict: Pragma 'igc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'igc' in module 'psp102'.
  #undef igc
#endif
#ifdef igcd_h
  #warning conflict: igcd_h is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'igcd_h' is also defined as a pragma.
  #warning conflict: Pragma 'igcd_h' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'igcd_h' in module 'psp102'.
  #undef igcd_h
#endif
#ifdef Igc
  #warning conflict: Igc is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igc' is also defined as a pragma.
  #warning conflict: Pragma 'Igc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igc' in module 'psp102'.
  #undef Igc
#endif
#ifdef Igcd
  #warning conflict: Igcd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igcd' is also defined as a pragma.
  #warning conflict: Pragma 'Igcd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igcd' in module 'psp102'.
  #undef Igcd
#endif
#ifdef Igcs
  #warning conflict: Igcs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igcs' is also defined as a pragma.
  #warning conflict: Pragma 'Igcs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igcs' in module 'psp102'.
  #undef Igcs
#endif
#ifdef Igb
  #warning conflict: Igb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igb' is also defined as a pragma.
  #warning conflict: Pragma 'Igb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igb' in module 'psp102'.
  #undef Igb
#endif
#ifdef Igs
  #warning conflict: Igs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igs' is also defined as a pragma.
  #warning conflict: Pragma 'Igs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igs' in module 'psp102'.
  #undef Igs
#endif
#ifdef Igd
  #warning conflict: Igd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igd' is also defined as a pragma.
  #warning conflict: Pragma 'Igd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igd' in module 'psp102'.
  #undef Igd
#endif
#ifdef Idse
  #warning conflict: Idse is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Idse' is also defined as a pragma.
  #warning conflict: Pragma 'Idse' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Idse' in module 'psp102'.
  #undef Idse
#endif
#ifdef Igbe
  #warning conflict: Igbe is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igbe' is also defined as a pragma.
  #warning conflict: Pragma 'Igbe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igbe' in module 'psp102'.
  #undef Igbe
#endif
#ifdef Igse
  #warning conflict: Igse is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igse' is also defined as a pragma.
  #warning conflict: Pragma 'Igse' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igse' in module 'psp102'.
  #undef Igse
#endif
#ifdef Igde
  #warning conflict: Igde is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igde' is also defined as a pragma.
  #warning conflict: Pragma 'Igde' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igde' in module 'psp102'.
  #undef Igde
#endif
#ifdef Igidle
  #warning conflict: Igidle is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igidle' is also defined as a pragma.
  #warning conflict: Pragma 'Igidle' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igidle' in module 'psp102'.
  #undef Igidle
#endif
#ifdef Igisle
  #warning conflict: Igisle is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Igisle' is also defined as a pragma.
  #warning conflict: Pragma 'Igisle' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Igisle' in module 'psp102'.
  #undef Igisle
#endif
#ifdef Iimpacte
  #warning conflict: Iimpacte is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Iimpacte' is also defined as a pragma.
  #warning conflict: Pragma 'Iimpacte' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Iimpacte' in module 'psp102'.
  #undef Iimpacte
#endif
#ifdef QI
  #warning conflict: QI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'QI' is also defined as a pragma.
  #warning conflict: Pragma 'QI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'QI' in module 'psp102'.
  #undef QI
#endif
#ifdef QD
  #warning conflict: QD is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'QD' is also defined as a pragma.
  #warning conflict: Pragma 'QD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'QD' in module 'psp102'.
  #undef QD
#endif
#ifdef QB
  #warning conflict: QB is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'QB' is also defined as a pragma.
  #warning conflict: Pragma 'QB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'QB' in module 'psp102'.
  #undef QB
#endif
#ifdef QG
  #warning conflict: QG is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'QG' is also defined as a pragma.
  #warning conflict: Pragma 'QG' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'QG' in module 'psp102'.
  #undef QG
#endif
#ifdef Qg
  #warning conflict: Qg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Qg' is also defined as a pragma.
  #warning conflict: Pragma 'Qg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qg' in module 'psp102'.
  #undef Qg
#endif
#ifdef Qd
  #warning conflict: Qd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Qd' is also defined as a pragma.
  #warning conflict: Pragma 'Qd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qd' in module 'psp102'.
  #undef Qd
#endif
#ifdef Qb
  #warning conflict: Qb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Qb' is also defined as a pragma.
  #warning conflict: Pragma 'Qb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qb' in module 'psp102'.
  #undef Qb
#endif
#ifdef Qs
  #warning conflict: Qs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Qs' is also defined as a pragma.
  #warning conflict: Pragma 'Qs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qs' in module 'psp102'.
  #undef Qs
#endif
#ifdef Qgs_ov
  #warning conflict: Qgs_ov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Qgs_ov' is also defined as a pragma.
  #warning conflict: Pragma 'Qgs_ov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qgs_ov' in module 'psp102'.
  #undef Qgs_ov
#endif
#ifdef Qgd_ov
  #warning conflict: Qgd_ov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Qgd_ov' is also defined as a pragma.
  #warning conflict: Pragma 'Qgd_ov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qgd_ov' in module 'psp102'.
  #undef Qgd_ov
#endif
#ifdef Qfgs
  #warning conflict: Qfgs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Qfgs' is also defined as a pragma.
  #warning conflict: Pragma 'Qfgs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qfgs' in module 'psp102'.
  #undef Qfgs
#endif
#ifdef Qfgd
  #warning conflict: Qfgd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Qfgd' is also defined as a pragma.
  #warning conflict: Pragma 'Qfgd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qfgd' in module 'psp102'.
  #undef Qfgd
#endif
#ifdef Qgb_ov
  #warning conflict: Qgb_ov is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Qgb_ov' is also defined as a pragma.
  #warning conflict: Pragma 'Qgb_ov' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Qgb_ov' in module 'psp102'.
  #undef Qgb_ov
#endif
#ifdef arg1
  #warning conflict: arg1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'arg1' is also defined as a pragma.
  #warning conflict: Pragma 'arg1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'arg1' in module 'psp102'.
  #undef arg1
#endif
#ifdef arg2max
  #warning conflict: arg2max is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'arg2max' is also defined as a pragma.
  #warning conflict: Pragma 'arg2max' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'arg2max' in module 'psp102'.
  #undef arg2max
#endif
#ifdef arg2mina
  #warning conflict: arg2mina is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'arg2mina' is also defined as a pragma.
  #warning conflict: Pragma 'arg2mina' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'arg2mina' in module 'psp102'.
  #undef arg2mina
#endif
#ifdef CHNL_TYPE
  #warning conflict: CHNL_TYPE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CHNL_TYPE' is also defined as a pragma.
  #warning conflict: Pragma 'CHNL_TYPE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CHNL_TYPE' in module 'psp102'.
  #undef CHNL_TYPE
#endif
#ifdef ysq
  #warning conflict: ysq is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ysq' is also defined as a pragma.
  #warning conflict: Pragma 'ysq' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ysq' in module 'psp102'.
  #undef ysq
#endif
#ifdef terfc
  #warning conflict: terfc is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'terfc' is also defined as a pragma.
  #warning conflict: Pragma 'terfc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'terfc' in module 'psp102'.
  #undef terfc
#endif
#ifdef erfcpos
  #warning conflict: erfcpos is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'erfcpos' is also defined as a pragma.
  #warning conflict: Pragma 'erfcpos' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'erfcpos' in module 'psp102'.
  #undef erfcpos
#endif
#ifdef h1
  #warning conflict: h1 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'h1' is also defined as a pragma.
  #warning conflict: Pragma 'h1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'h1' in module 'psp102'.
  #undef h1
#endif
#ifdef h2
  #warning conflict: h2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'h2' is also defined as a pragma.
  #warning conflict: Pragma 'h2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'h2' in module 'psp102'.
  #undef h2
#endif
#ifdef h2d
  #warning conflict: h2d is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'h2d' is also defined as a pragma.
  #warning conflict: Pragma 'h2d' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'h2d' in module 'psp102'.
  #undef h2d
#endif
#ifdef h3
  #warning conflict: h3 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'h3' is also defined as a pragma.
  #warning conflict: Pragma 'h3' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'h3' in module 'psp102'.
  #undef h3
#endif
#ifdef h4
  #warning conflict: h4 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'h4' is also defined as a pragma.
  #warning conflict: Pragma 'h4' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'h4' in module 'psp102'.
  #undef h4
#endif
#ifdef h5
  #warning conflict: h5 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'h5' is also defined as a pragma.
  #warning conflict: Pragma 'h5' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'h5' in module 'psp102'.
  #undef h5
#endif
#ifdef tmp
  #warning conflict: tmp is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tmp' is also defined as a pragma.
  #warning conflict: Pragma 'tmp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tmp' in module 'psp102'.
  #undef tmp
#endif
#ifdef id
  #warning conflict: id is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'id' is also defined as a pragma.
  #warning conflict: Pragma 'id' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'id' in module 'psp102'.
  #undef id
#endif
#ifdef isrh
  #warning conflict: isrh is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'isrh' is also defined as a pragma.
  #warning conflict: Pragma 'isrh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'isrh' in module 'psp102'.
  #undef isrh
#endif
#ifdef vbi_minus_vjsrh
  #warning conflict: vbi_minus_vjsrh is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbi_minus_vjsrh' is also defined as a pragma.
  #warning conflict: Pragma 'vbi_minus_vjsrh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbi_minus_vjsrh' in module 'psp102'.
  #undef vbi_minus_vjsrh
#endif
#ifdef wsrhstep
  #warning conflict: wsrhstep is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wsrhstep' is also defined as a pragma.
  #warning conflict: Pragma 'wsrhstep' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wsrhstep' in module 'psp102'.
  #undef wsrhstep
#endif
#ifdef dwsrh
  #warning conflict: dwsrh is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'dwsrh' is also defined as a pragma.
  #warning conflict: Pragma 'dwsrh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dwsrh' in module 'psp102'.
  #undef dwsrh
#endif
#ifdef wsrh
  #warning conflict: wsrh is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wsrh' is also defined as a pragma.
  #warning conflict: Pragma 'wsrh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wsrh' in module 'psp102'.
  #undef wsrh
#endif
#ifdef wdep
  #warning conflict: wdep is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wdep' is also defined as a pragma.
  #warning conflict: Pragma 'wdep' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wdep' in module 'psp102'.
  #undef wdep
#endif
#ifdef asrh
  #warning conflict: asrh is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'asrh' is also defined as a pragma.
  #warning conflict: Pragma 'asrh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'asrh' in module 'psp102'.
  #undef asrh
#endif
#ifdef itat
  #warning conflict: itat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'itat' is also defined as a pragma.
  #warning conflict: Pragma 'itat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'itat' in module 'psp102'.
  #undef itat
#endif
#ifdef btat
  #warning conflict: btat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'btat' is also defined as a pragma.
  #warning conflict: Pragma 'btat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'btat' in module 'psp102'.
  #undef btat
#endif
#ifdef twoatatoverthreebtat
  #warning conflict: twoatatoverthreebtat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'twoatatoverthreebtat' is also defined as a pragma.
  #warning conflict: Pragma 'twoatatoverthreebtat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'twoatatoverthreebtat' in module 'psp102'.
  #undef twoatatoverthreebtat
#endif
#ifdef umaxbeforelimiting
  #warning conflict: umaxbeforelimiting is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'umaxbeforelimiting' is also defined as a pragma.
  #warning conflict: Pragma 'umaxbeforelimiting' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'umaxbeforelimiting' in module 'psp102'.
  #undef umaxbeforelimiting
#endif
#ifdef umax
  #warning conflict: umax is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'umax' is also defined as a pragma.
  #warning conflict: Pragma 'umax' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'umax' in module 'psp102'.
  #undef umax
#endif
#ifdef sqrtumax
  #warning conflict: sqrtumax is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sqrtumax' is also defined as a pragma.
  #warning conflict: Pragma 'sqrtumax' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sqrtumax' in module 'psp102'.
  #undef sqrtumax
#endif
#ifdef umaxpoweronepointfive
  #warning conflict: umaxpoweronepointfive is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'umaxpoweronepointfive' is also defined as a pragma.
  #warning conflict: Pragma 'umaxpoweronepointfive' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'umaxpoweronepointfive' in module 'psp102'.
  #undef umaxpoweronepointfive
#endif
#ifdef wgamma
  #warning conflict: wgamma is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wgamma' is also defined as a pragma.
  #warning conflict: Pragma 'wgamma' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wgamma' in module 'psp102'.
  #undef wgamma
#endif
#ifdef wtat
  #warning conflict: wtat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wtat' is also defined as a pragma.
  #warning conflict: Pragma 'wtat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wtat' in module 'psp102'.
  #undef wtat
#endif
#ifdef ktat
  #warning conflict: ktat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ktat' is also defined as a pragma.
  #warning conflict: Pragma 'ktat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ktat' in module 'psp102'.
  #undef ktat
#endif
#ifdef ltat
  #warning conflict: ltat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ltat' is also defined as a pragma.
  #warning conflict: Pragma 'ltat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ltat' in module 'psp102'.
  #undef ltat
#endif
#ifdef mtat
  #warning conflict: mtat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'mtat' is also defined as a pragma.
  #warning conflict: Pragma 'mtat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mtat' in module 'psp102'.
  #undef mtat
#endif
#ifdef xerfc
  #warning conflict: xerfc is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'xerfc' is also defined as a pragma.
  #warning conflict: Pragma 'xerfc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xerfc' in module 'psp102'.
  #undef xerfc
#endif
#ifdef erfctimesexpmtat
  #warning conflict: erfctimesexpmtat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'erfctimesexpmtat' is also defined as a pragma.
  #warning conflict: Pragma 'erfctimesexpmtat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'erfctimesexpmtat' in module 'psp102'.
  #undef erfctimesexpmtat
#endif
#ifdef gammamax
  #warning conflict: gammamax is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'gammamax' is also defined as a pragma.
  #warning conflict: Pragma 'gammamax' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gammamax' in module 'psp102'.
  #undef gammamax
#endif
#ifdef ibbt
  #warning conflict: ibbt is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ibbt' is also defined as a pragma.
  #warning conflict: Pragma 'ibbt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibbt' in module 'psp102'.
  #undef ibbt
#endif
#ifdef Fmaxr
  #warning conflict: Fmaxr is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Fmaxr' is also defined as a pragma.
  #warning conflict: Pragma 'Fmaxr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Fmaxr' in module 'psp102'.
  #undef Fmaxr
#endif
#ifdef fbreakdown
  #warning conflict: fbreakdown is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'fbreakdown' is also defined as a pragma.
  #warning conflict: Pragma 'fbreakdown' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fbreakdown' in module 'psp102'.
  #undef fbreakdown
#endif
#ifdef TRJ_i
  #warning conflict: TRJ_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'TRJ_i' is also defined as a pragma.
  #warning conflict: Pragma 'TRJ_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TRJ_i' in module 'psp102'.
  #undef TRJ_i
#endif
#ifdef IMAX_i
  #warning conflict: IMAX_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IMAX_i' is also defined as a pragma.
  #warning conflict: Pragma 'IMAX_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IMAX_i' in module 'psp102'.
  #undef IMAX_i
#endif
#ifdef CJORBOT_i
  #warning conflict: CJORBOT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CJORBOT_i' is also defined as a pragma.
  #warning conflict: Pragma 'CJORBOT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJORBOT_i' in module 'psp102'.
  #undef CJORBOT_i
#endif
#ifdef CJORSTI_i
  #warning conflict: CJORSTI_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CJORSTI_i' is also defined as a pragma.
  #warning conflict: Pragma 'CJORSTI_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJORSTI_i' in module 'psp102'.
  #undef CJORSTI_i
#endif
#ifdef CJORGAT_i
  #warning conflict: CJORGAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CJORGAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'CJORGAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJORGAT_i' in module 'psp102'.
  #undef CJORGAT_i
#endif
#ifdef VBIRBOT_i
  #warning conflict: VBIRBOT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBIRBOT_i' is also defined as a pragma.
  #warning conflict: Pragma 'VBIRBOT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBIRBOT_i' in module 'psp102'.
  #undef VBIRBOT_i
#endif
#ifdef VBIRSTI_i
  #warning conflict: VBIRSTI_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBIRSTI_i' is also defined as a pragma.
  #warning conflict: Pragma 'VBIRSTI_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBIRSTI_i' in module 'psp102'.
  #undef VBIRSTI_i
#endif
#ifdef VBIRGAT_i
  #warning conflict: VBIRGAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBIRGAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'VBIRGAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBIRGAT_i' in module 'psp102'.
  #undef VBIRGAT_i
#endif
#ifdef PBOT_i
  #warning conflict: PBOT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PBOT_i' is also defined as a pragma.
  #warning conflict: Pragma 'PBOT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PBOT_i' in module 'psp102'.
  #undef PBOT_i
#endif
#ifdef PSTI_i
  #warning conflict: PSTI_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PSTI_i' is also defined as a pragma.
  #warning conflict: Pragma 'PSTI_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PSTI_i' in module 'psp102'.
  #undef PSTI_i
#endif
#ifdef PGAT_i
  #warning conflict: PGAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PGAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'PGAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PGAT_i' in module 'psp102'.
  #undef PGAT_i
#endif
#ifdef IDSATRBOT_i
  #warning conflict: IDSATRBOT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IDSATRBOT_i' is also defined as a pragma.
  #warning conflict: Pragma 'IDSATRBOT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IDSATRBOT_i' in module 'psp102'.
  #undef IDSATRBOT_i
#endif
#ifdef IDSATRSTI_i
  #warning conflict: IDSATRSTI_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IDSATRSTI_i' is also defined as a pragma.
  #warning conflict: Pragma 'IDSATRSTI_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IDSATRSTI_i' in module 'psp102'.
  #undef IDSATRSTI_i
#endif
#ifdef IDSATRGAT_i
  #warning conflict: IDSATRGAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'IDSATRGAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'IDSATRGAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IDSATRGAT_i' in module 'psp102'.
  #undef IDSATRGAT_i
#endif
#ifdef XJUNSTI_i
  #warning conflict: XJUNSTI_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'XJUNSTI_i' is also defined as a pragma.
  #warning conflict: Pragma 'XJUNSTI_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XJUNSTI_i' in module 'psp102'.
  #undef XJUNSTI_i
#endif
#ifdef XJUNGAT_i
  #warning conflict: XJUNGAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'XJUNGAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'XJUNGAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XJUNGAT_i' in module 'psp102'.
  #undef XJUNGAT_i
#endif
#ifdef CSRHBOT_i
  #warning conflict: CSRHBOT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CSRHBOT_i' is also defined as a pragma.
  #warning conflict: Pragma 'CSRHBOT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CSRHBOT_i' in module 'psp102'.
  #undef CSRHBOT_i
#endif
#ifdef CSRHSTI_i
  #warning conflict: CSRHSTI_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CSRHSTI_i' is also defined as a pragma.
  #warning conflict: Pragma 'CSRHSTI_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CSRHSTI_i' in module 'psp102'.
  #undef CSRHSTI_i
#endif
#ifdef CSRHGAT_i
  #warning conflict: CSRHGAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CSRHGAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'CSRHGAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CSRHGAT_i' in module 'psp102'.
  #undef CSRHGAT_i
#endif
#ifdef CTATBOT_i
  #warning conflict: CTATBOT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CTATBOT_i' is also defined as a pragma.
  #warning conflict: Pragma 'CTATBOT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTATBOT_i' in module 'psp102'.
  #undef CTATBOT_i
#endif
#ifdef CTATSTI_i
  #warning conflict: CTATSTI_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CTATSTI_i' is also defined as a pragma.
  #warning conflict: Pragma 'CTATSTI_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTATSTI_i' in module 'psp102'.
  #undef CTATSTI_i
#endif
#ifdef CTATGAT_i
  #warning conflict: CTATGAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CTATGAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'CTATGAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CTATGAT_i' in module 'psp102'.
  #undef CTATGAT_i
#endif
#ifdef MEFFTATBOT_i
  #warning conflict: MEFFTATBOT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MEFFTATBOT_i' is also defined as a pragma.
  #warning conflict: Pragma 'MEFFTATBOT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MEFFTATBOT_i' in module 'psp102'.
  #undef MEFFTATBOT_i
#endif
#ifdef MEFFTATSTI_i
  #warning conflict: MEFFTATSTI_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MEFFTATSTI_i' is also defined as a pragma.
  #warning conflict: Pragma 'MEFFTATSTI_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MEFFTATSTI_i' in module 'psp102'.
  #undef MEFFTATSTI_i
#endif
#ifdef MEFFTATGAT_i
  #warning conflict: MEFFTATGAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'MEFFTATGAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'MEFFTATGAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MEFFTATGAT_i' in module 'psp102'.
  #undef MEFFTATGAT_i
#endif
#ifdef CBBTBOT_i
  #warning conflict: CBBTBOT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CBBTBOT_i' is also defined as a pragma.
  #warning conflict: Pragma 'CBBTBOT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CBBTBOT_i' in module 'psp102'.
  #undef CBBTBOT_i
#endif
#ifdef CBBTSTI_i
  #warning conflict: CBBTSTI_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CBBTSTI_i' is also defined as a pragma.
  #warning conflict: Pragma 'CBBTSTI_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CBBTSTI_i' in module 'psp102'.
  #undef CBBTSTI_i
#endif
#ifdef CBBTGAT_i
  #warning conflict: CBBTGAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'CBBTGAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'CBBTGAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CBBTGAT_i' in module 'psp102'.
  #undef CBBTGAT_i
#endif
#ifdef VBRBOT_i
  #warning conflict: VBRBOT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBRBOT_i' is also defined as a pragma.
  #warning conflict: Pragma 'VBRBOT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBRBOT_i' in module 'psp102'.
  #undef VBRBOT_i
#endif
#ifdef VBRSTI_i
  #warning conflict: VBRSTI_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBRSTI_i' is also defined as a pragma.
  #warning conflict: Pragma 'VBRSTI_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBRSTI_i' in module 'psp102'.
  #undef VBRSTI_i
#endif
#ifdef VBRGAT_i
  #warning conflict: VBRGAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBRGAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'VBRGAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBRGAT_i' in module 'psp102'.
  #undef VBRGAT_i
#endif
#ifdef PBRBOT_i
  #warning conflict: PBRBOT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PBRBOT_i' is also defined as a pragma.
  #warning conflict: Pragma 'PBRBOT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PBRBOT_i' in module 'psp102'.
  #undef PBRBOT_i
#endif
#ifdef PBRSTI_i
  #warning conflict: PBRSTI_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PBRSTI_i' is also defined as a pragma.
  #warning conflict: Pragma 'PBRSTI_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PBRSTI_i' in module 'psp102'.
  #undef PBRSTI_i
#endif
#ifdef PBRGAT_i
  #warning conflict: PBRGAT_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'PBRGAT_i' is also defined as a pragma.
  #warning conflict: Pragma 'PBRGAT_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PBRGAT_i' in module 'psp102'.
  #undef PBRGAT_i
#endif
#ifdef tkr
  #warning conflict: tkr is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tkr' is also defined as a pragma.
  #warning conflict: Pragma 'tkr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tkr' in module 'psp102'.
  #undef tkr
#endif
#ifdef tkd
  #warning conflict: tkd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'tkd' is also defined as a pragma.
  #warning conflict: Pragma 'tkd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tkd' in module 'psp102'.
  #undef tkd
#endif
#ifdef auxt
  #warning conflict: auxt is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'auxt' is also defined as a pragma.
  #warning conflict: Pragma 'auxt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'auxt' in module 'psp102'.
  #undef auxt
#endif
#ifdef KBOL_over_QELE
  #warning conflict: KBOL_over_QELE is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'KBOL_over_QELE' is also defined as a pragma.
  #warning conflict: Pragma 'KBOL_over_QELE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KBOL_over_QELE' in module 'psp102'.
  #undef KBOL_over_QELE
#endif
#ifdef phitr
  #warning conflict: phitr is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phitr' is also defined as a pragma.
  #warning conflict: Pragma 'phitr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phitr' in module 'psp102'.
  #undef phitr
#endif
#ifdef phitrinv
  #warning conflict: phitrinv is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phitrinv' is also defined as a pragma.
  #warning conflict: Pragma 'phitrinv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phitrinv' in module 'psp102'.
  #undef phitrinv
#endif
#ifdef phitd
  #warning conflict: phitd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phitd' is also defined as a pragma.
  #warning conflict: Pragma 'phitd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phitd' in module 'psp102'.
  #undef phitd
#endif
#ifdef phitdinv
  #warning conflict: phitdinv is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phitdinv' is also defined as a pragma.
  #warning conflict: Pragma 'phitdinv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phitdinv' in module 'psp102'.
  #undef phitdinv
#endif
#ifdef deltaphigr
  #warning conflict: deltaphigr is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'deltaphigr' is also defined as a pragma.
  #warning conflict: Pragma 'deltaphigr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'deltaphigr' in module 'psp102'.
  #undef deltaphigr
#endif
#ifdef phigrbot
  #warning conflict: phigrbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phigrbot' is also defined as a pragma.
  #warning conflict: Pragma 'phigrbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phigrbot' in module 'psp102'.
  #undef phigrbot
#endif
#ifdef phigrsti
  #warning conflict: phigrsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phigrsti' is also defined as a pragma.
  #warning conflict: Pragma 'phigrsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phigrsti' in module 'psp102'.
  #undef phigrsti
#endif
#ifdef phigrgat
  #warning conflict: phigrgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phigrgat' is also defined as a pragma.
  #warning conflict: Pragma 'phigrgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phigrgat' in module 'psp102'.
  #undef phigrgat
#endif
#ifdef deltaphigd
  #warning conflict: deltaphigd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'deltaphigd' is also defined as a pragma.
  #warning conflict: Pragma 'deltaphigd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'deltaphigd' in module 'psp102'.
  #undef deltaphigd
#endif
#ifdef phigdbot
  #warning conflict: phigdbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phigdbot' is also defined as a pragma.
  #warning conflict: Pragma 'phigdbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phigdbot' in module 'psp102'.
  #undef phigdbot
#endif
#ifdef phigdsti
  #warning conflict: phigdsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phigdsti' is also defined as a pragma.
  #warning conflict: Pragma 'phigdsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phigdsti' in module 'psp102'.
  #undef phigdsti
#endif
#ifdef phigdgat
  #warning conflict: phigdgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'phigdgat' is also defined as a pragma.
  #warning conflict: Pragma 'phigdgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phigdgat' in module 'psp102'.
  #undef phigdgat
#endif
#ifdef ftdbot
  #warning conflict: ftdbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ftdbot' is also defined as a pragma.
  #warning conflict: Pragma 'ftdbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ftdbot' in module 'psp102'.
  #undef ftdbot
#endif
#ifdef ftdsti
  #warning conflict: ftdsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ftdsti' is also defined as a pragma.
  #warning conflict: Pragma 'ftdsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ftdsti' in module 'psp102'.
  #undef ftdsti
#endif
#ifdef ftdgat
  #warning conflict: ftdgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ftdgat' is also defined as a pragma.
  #warning conflict: Pragma 'ftdgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ftdgat' in module 'psp102'.
  #undef ftdgat
#endif
#ifdef idsatbot
  #warning conflict: idsatbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'idsatbot' is also defined as a pragma.
  #warning conflict: Pragma 'idsatbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'idsatbot' in module 'psp102'.
  #undef idsatbot
#endif
#ifdef idsatsti
  #warning conflict: idsatsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'idsatsti' is also defined as a pragma.
  #warning conflict: Pragma 'idsatsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'idsatsti' in module 'psp102'.
  #undef idsatsti
#endif
#ifdef idsatgat
  #warning conflict: idsatgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'idsatgat' is also defined as a pragma.
  #warning conflict: Pragma 'idsatgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'idsatgat' in module 'psp102'.
  #undef idsatgat
#endif
#ifdef exp_VMAX_over_phitd
  #warning conflict: exp_VMAX_over_phitd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'exp_VMAX_over_phitd' is also defined as a pragma.
  #warning conflict: Pragma 'exp_VMAX_over_phitd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'exp_VMAX_over_phitd' in module 'psp102'.
  #undef exp_VMAX_over_phitd
#endif
#ifdef ubibot
  #warning conflict: ubibot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ubibot' is also defined as a pragma.
  #warning conflict: Pragma 'ubibot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ubibot' in module 'psp102'.
  #undef ubibot
#endif
#ifdef ubisti
  #warning conflict: ubisti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ubisti' is also defined as a pragma.
  #warning conflict: Pragma 'ubisti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ubisti' in module 'psp102'.
  #undef ubisti
#endif
#ifdef ubigat
  #warning conflict: ubigat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ubigat' is also defined as a pragma.
  #warning conflict: Pragma 'ubigat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ubigat' in module 'psp102'.
  #undef ubigat
#endif
#ifdef vbibot
  #warning conflict: vbibot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbibot' is also defined as a pragma.
  #warning conflict: Pragma 'vbibot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbibot' in module 'psp102'.
  #undef vbibot
#endif
#ifdef vbisti
  #warning conflict: vbisti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbisti' is also defined as a pragma.
  #warning conflict: Pragma 'vbisti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbisti' in module 'psp102'.
  #undef vbisti
#endif
#ifdef vbigat
  #warning conflict: vbigat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbigat' is also defined as a pragma.
  #warning conflict: Pragma 'vbigat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbigat' in module 'psp102'.
  #undef vbigat
#endif
#ifdef vbibot2
  #warning conflict: vbibot2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbibot2' is also defined as a pragma.
  #warning conflict: Pragma 'vbibot2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbibot2' in module 'psp102'.
  #undef vbibot2
#endif
#ifdef vbisti2
  #warning conflict: vbisti2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbisti2' is also defined as a pragma.
  #warning conflict: Pragma 'vbisti2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbisti2' in module 'psp102'.
  #undef vbisti2
#endif
#ifdef vbigat2
  #warning conflict: vbigat2 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbigat2' is also defined as a pragma.
  #warning conflict: Pragma 'vbigat2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbigat2' in module 'psp102'.
  #undef vbigat2
#endif
#ifdef vbibot2r
  #warning conflict: vbibot2r is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbibot2r' is also defined as a pragma.
  #warning conflict: Pragma 'vbibot2r' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbibot2r' in module 'psp102'.
  #undef vbibot2r
#endif
#ifdef vbisti2r
  #warning conflict: vbisti2r is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbisti2r' is also defined as a pragma.
  #warning conflict: Pragma 'vbisti2r' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbisti2r' in module 'psp102'.
  #undef vbisti2r
#endif
#ifdef vbigat2r
  #warning conflict: vbigat2r is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbigat2r' is also defined as a pragma.
  #warning conflict: Pragma 'vbigat2r' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbigat2r' in module 'psp102'.
  #undef vbigat2r
#endif
#ifdef vbiinvbot
  #warning conflict: vbiinvbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbiinvbot' is also defined as a pragma.
  #warning conflict: Pragma 'vbiinvbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbiinvbot' in module 'psp102'.
  #undef vbiinvbot
#endif
#ifdef vbiinvsti
  #warning conflict: vbiinvsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbiinvsti' is also defined as a pragma.
  #warning conflict: Pragma 'vbiinvsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbiinvsti' in module 'psp102'.
  #undef vbiinvsti
#endif
#ifdef vbiinvgat
  #warning conflict: vbiinvgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbiinvgat' is also defined as a pragma.
  #warning conflict: Pragma 'vbiinvgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbiinvgat' in module 'psp102'.
  #undef vbiinvgat
#endif
#ifdef one_minus_PBOT
  #warning conflict: one_minus_PBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'one_minus_PBOT' is also defined as a pragma.
  #warning conflict: Pragma 'one_minus_PBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'one_minus_PBOT' in module 'psp102'.
  #undef one_minus_PBOT
#endif
#ifdef one_minus_PSTI
  #warning conflict: one_minus_PSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'one_minus_PSTI' is also defined as a pragma.
  #warning conflict: Pragma 'one_minus_PSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'one_minus_PSTI' in module 'psp102'.
  #undef one_minus_PSTI
#endif
#ifdef one_minus_PGAT
  #warning conflict: one_minus_PGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'one_minus_PGAT' is also defined as a pragma.
  #warning conflict: Pragma 'one_minus_PGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'one_minus_PGAT' in module 'psp102'.
  #undef one_minus_PGAT
#endif
#ifdef one_over_one_minus_PBOT
  #warning conflict: one_over_one_minus_PBOT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'one_over_one_minus_PBOT' is also defined as a pragma.
  #warning conflict: Pragma 'one_over_one_minus_PBOT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'one_over_one_minus_PBOT' in module 'psp102'.
  #undef one_over_one_minus_PBOT
#endif
#ifdef one_over_one_minus_PSTI
  #warning conflict: one_over_one_minus_PSTI is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'one_over_one_minus_PSTI' is also defined as a pragma.
  #warning conflict: Pragma 'one_over_one_minus_PSTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'one_over_one_minus_PSTI' in module 'psp102'.
  #undef one_over_one_minus_PSTI
#endif
#ifdef one_over_one_minus_PGAT
  #warning conflict: one_over_one_minus_PGAT is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'one_over_one_minus_PGAT' is also defined as a pragma.
  #warning conflict: Pragma 'one_over_one_minus_PGAT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'one_over_one_minus_PGAT' in module 'psp102'.
  #undef one_over_one_minus_PGAT
#endif
#ifdef cjobot
  #warning conflict: cjobot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cjobot' is also defined as a pragma.
  #warning conflict: Pragma 'cjobot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjobot' in module 'psp102'.
  #undef cjobot
#endif
#ifdef cjosti
  #warning conflict: cjosti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cjosti' is also defined as a pragma.
  #warning conflict: Pragma 'cjosti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjosti' in module 'psp102'.
  #undef cjosti
#endif
#ifdef cjogat
  #warning conflict: cjogat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cjogat' is also defined as a pragma.
  #warning conflict: Pragma 'cjogat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjogat' in module 'psp102'.
  #undef cjogat
#endif
#ifdef qprefbot
  #warning conflict: qprefbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qprefbot' is also defined as a pragma.
  #warning conflict: Pragma 'qprefbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qprefbot' in module 'psp102'.
  #undef qprefbot
#endif
#ifdef qprefsti
  #warning conflict: qprefsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qprefsti' is also defined as a pragma.
  #warning conflict: Pragma 'qprefsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qprefsti' in module 'psp102'.
  #undef qprefsti
#endif
#ifdef qprefgat
  #warning conflict: qprefgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qprefgat' is also defined as a pragma.
  #warning conflict: Pragma 'qprefgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qprefgat' in module 'psp102'.
  #undef qprefgat
#endif
#ifdef vbimin
  #warning conflict: vbimin is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbimin' is also defined as a pragma.
  #warning conflict: Pragma 'vbimin' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbimin' in module 'psp102'.
  #undef vbimin
#endif
#ifdef vch
  #warning conflict: vch is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vch' is also defined as a pragma.
  #warning conflict: Pragma 'vch' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vch' in module 'psp102'.
  #undef vch
#endif
#ifdef vfmin
  #warning conflict: vfmin is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vfmin' is also defined as a pragma.
  #warning conflict: Pragma 'vfmin' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vfmin' in module 'psp102'.
  #undef vfmin
#endif
#ifdef vbbtlim
  #warning conflict: vbbtlim is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbbtlim' is also defined as a pragma.
  #warning conflict: Pragma 'vbbtlim' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbbtlim' in module 'psp102'.
  #undef vbbtlim
#endif
#ifdef qpref2bot
  #warning conflict: qpref2bot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qpref2bot' is also defined as a pragma.
  #warning conflict: Pragma 'qpref2bot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qpref2bot' in module 'psp102'.
  #undef qpref2bot
#endif
#ifdef qpref2sti
  #warning conflict: qpref2sti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qpref2sti' is also defined as a pragma.
  #warning conflict: Pragma 'qpref2sti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qpref2sti' in module 'psp102'.
  #undef qpref2sti
#endif
#ifdef qpref2gat
  #warning conflict: qpref2gat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qpref2gat' is also defined as a pragma.
  #warning conflict: Pragma 'qpref2gat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qpref2gat' in module 'psp102'.
  #undef qpref2gat
#endif
#ifdef wdepnulrbot
  #warning conflict: wdepnulrbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wdepnulrbot' is also defined as a pragma.
  #warning conflict: Pragma 'wdepnulrbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wdepnulrbot' in module 'psp102'.
  #undef wdepnulrbot
#endif
#ifdef wdepnulrsti
  #warning conflict: wdepnulrsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wdepnulrsti' is also defined as a pragma.
  #warning conflict: Pragma 'wdepnulrsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wdepnulrsti' in module 'psp102'.
  #undef wdepnulrsti
#endif
#ifdef wdepnulrgat
  #warning conflict: wdepnulrgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wdepnulrgat' is also defined as a pragma.
  #warning conflict: Pragma 'wdepnulrgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wdepnulrgat' in module 'psp102'.
  #undef wdepnulrgat
#endif
#ifdef wdepnulrinvbot
  #warning conflict: wdepnulrinvbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wdepnulrinvbot' is also defined as a pragma.
  #warning conflict: Pragma 'wdepnulrinvbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wdepnulrinvbot' in module 'psp102'.
  #undef wdepnulrinvbot
#endif
#ifdef wdepnulrinvsti
  #warning conflict: wdepnulrinvsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wdepnulrinvsti' is also defined as a pragma.
  #warning conflict: Pragma 'wdepnulrinvsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wdepnulrinvsti' in module 'psp102'.
  #undef wdepnulrinvsti
#endif
#ifdef wdepnulrinvgat
  #warning conflict: wdepnulrinvgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'wdepnulrinvgat' is also defined as a pragma.
  #warning conflict: Pragma 'wdepnulrinvgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'wdepnulrinvgat' in module 'psp102'.
  #undef wdepnulrinvgat
#endif
#ifdef VBIRBOTinv
  #warning conflict: VBIRBOTinv is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBIRBOTinv' is also defined as a pragma.
  #warning conflict: Pragma 'VBIRBOTinv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBIRBOTinv' in module 'psp102'.
  #undef VBIRBOTinv
#endif
#ifdef VBIRSTIinv
  #warning conflict: VBIRSTIinv is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBIRSTIinv' is also defined as a pragma.
  #warning conflict: Pragma 'VBIRSTIinv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBIRSTIinv' in module 'psp102'.
  #undef VBIRSTIinv
#endif
#ifdef VBIRGATinv
  #warning conflict: VBIRGATinv is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBIRGATinv' is also defined as a pragma.
  #warning conflict: Pragma 'VBIRGATinv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBIRGATinv' in module 'psp102'.
  #undef VBIRGATinv
#endif
#ifdef perfc
  #warning conflict: perfc is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'perfc' is also defined as a pragma.
  #warning conflict: Pragma 'perfc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'perfc' in module 'psp102'.
  #undef perfc
#endif
#ifdef berfc
  #warning conflict: berfc is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'berfc' is also defined as a pragma.
  #warning conflict: Pragma 'berfc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'berfc' in module 'psp102'.
  #undef berfc
#endif
#ifdef cerfc
  #warning conflict: cerfc is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cerfc' is also defined as a pragma.
  #warning conflict: Pragma 'cerfc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cerfc' in module 'psp102'.
  #undef cerfc
#endif
#ifdef deltaEbot
  #warning conflict: deltaEbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'deltaEbot' is also defined as a pragma.
  #warning conflict: Pragma 'deltaEbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'deltaEbot' in module 'psp102'.
  #undef deltaEbot
#endif
#ifdef deltaEsti
  #warning conflict: deltaEsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'deltaEsti' is also defined as a pragma.
  #warning conflict: Pragma 'deltaEsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'deltaEsti' in module 'psp102'.
  #undef deltaEsti
#endif
#ifdef deltaEgat
  #warning conflict: deltaEgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'deltaEgat' is also defined as a pragma.
  #warning conflict: Pragma 'deltaEgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'deltaEgat' in module 'psp102'.
  #undef deltaEgat
#endif
#ifdef atatbot
  #warning conflict: atatbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'atatbot' is also defined as a pragma.
  #warning conflict: Pragma 'atatbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'atatbot' in module 'psp102'.
  #undef atatbot
#endif
#ifdef atatsti
  #warning conflict: atatsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'atatsti' is also defined as a pragma.
  #warning conflict: Pragma 'atatsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'atatsti' in module 'psp102'.
  #undef atatsti
#endif
#ifdef atatgat
  #warning conflict: atatgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'atatgat' is also defined as a pragma.
  #warning conflict: Pragma 'atatgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'atatgat' in module 'psp102'.
  #undef atatgat
#endif
#ifdef btatpartbot
  #warning conflict: btatpartbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'btatpartbot' is also defined as a pragma.
  #warning conflict: Pragma 'btatpartbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'btatpartbot' in module 'psp102'.
  #undef btatpartbot
#endif
#ifdef btatpartsti
  #warning conflict: btatpartsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'btatpartsti' is also defined as a pragma.
  #warning conflict: Pragma 'btatpartsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'btatpartsti' in module 'psp102'.
  #undef btatpartsti
#endif
#ifdef btatpartgat
  #warning conflict: btatpartgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'btatpartgat' is also defined as a pragma.
  #warning conflict: Pragma 'btatpartgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'btatpartgat' in module 'psp102'.
  #undef btatpartgat
#endif
#ifdef fbbtbot
  #warning conflict: fbbtbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'fbbtbot' is also defined as a pragma.
  #warning conflict: Pragma 'fbbtbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fbbtbot' in module 'psp102'.
  #undef fbbtbot
#endif
#ifdef fbbtsti
  #warning conflict: fbbtsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'fbbtsti' is also defined as a pragma.
  #warning conflict: Pragma 'fbbtsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fbbtsti' in module 'psp102'.
  #undef fbbtsti
#endif
#ifdef fbbtgat
  #warning conflict: fbbtgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'fbbtgat' is also defined as a pragma.
  #warning conflict: Pragma 'fbbtgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fbbtgat' in module 'psp102'.
  #undef fbbtgat
#endif
#ifdef fstopbot
  #warning conflict: fstopbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'fstopbot' is also defined as a pragma.
  #warning conflict: Pragma 'fstopbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fstopbot' in module 'psp102'.
  #undef fstopbot
#endif
#ifdef fstopsti
  #warning conflict: fstopsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'fstopsti' is also defined as a pragma.
  #warning conflict: Pragma 'fstopsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fstopsti' in module 'psp102'.
  #undef fstopsti
#endif
#ifdef fstopgat
  #warning conflict: fstopgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'fstopgat' is also defined as a pragma.
  #warning conflict: Pragma 'fstopgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fstopgat' in module 'psp102'.
  #undef fstopgat
#endif
#ifdef VBRinvbot
  #warning conflict: VBRinvbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBRinvbot' is also defined as a pragma.
  #warning conflict: Pragma 'VBRinvbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBRinvbot' in module 'psp102'.
  #undef VBRinvbot
#endif
#ifdef VBRinvsti
  #warning conflict: VBRinvsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBRinvsti' is also defined as a pragma.
  #warning conflict: Pragma 'VBRinvsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBRinvsti' in module 'psp102'.
  #undef VBRinvsti
#endif
#ifdef VBRinvgat
  #warning conflict: VBRinvgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VBRinvgat' is also defined as a pragma.
  #warning conflict: Pragma 'VBRinvgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VBRinvgat' in module 'psp102'.
  #undef VBRinvgat
#endif
#ifdef slopebot
  #warning conflict: slopebot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'slopebot' is also defined as a pragma.
  #warning conflict: Pragma 'slopebot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'slopebot' in module 'psp102'.
  #undef slopebot
#endif
#ifdef slopesti
  #warning conflict: slopesti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'slopesti' is also defined as a pragma.
  #warning conflict: Pragma 'slopesti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'slopesti' in module 'psp102'.
  #undef slopesti
#endif
#ifdef slopegat
  #warning conflict: slopegat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'slopegat' is also defined as a pragma.
  #warning conflict: Pragma 'slopegat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'slopegat' in module 'psp102'.
  #undef slopegat
#endif
#ifdef vmaxbot
  #warning conflict: vmaxbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vmaxbot' is also defined as a pragma.
  #warning conflict: Pragma 'vmaxbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vmaxbot' in module 'psp102'.
  #undef vmaxbot
#endif
#ifdef vmaxsti
  #warning conflict: vmaxsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vmaxsti' is also defined as a pragma.
  #warning conflict: Pragma 'vmaxsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vmaxsti' in module 'psp102'.
  #undef vmaxsti
#endif
#ifdef vmaxgat
  #warning conflict: vmaxgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vmaxgat' is also defined as a pragma.
  #warning conflict: Pragma 'vmaxgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vmaxgat' in module 'psp102'.
  #undef vmaxgat
#endif
#ifdef VMAX
  #warning conflict: VMAX is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VMAX' is also defined as a pragma.
  #warning conflict: Pragma 'VMAX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VMAX' in module 'psp102'.
  #undef VMAX
#endif
#ifdef VAK
  #warning conflict: VAK is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VAK' is also defined as a pragma.
  #warning conflict: Pragma 'VAK' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VAK' in module 'psp102'.
  #undef VAK
#endif
#ifdef idmult
  #warning conflict: idmult is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'idmult' is also defined as a pragma.
  #warning conflict: Pragma 'idmult' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'idmult' in module 'psp102'.
  #undef idmult
#endif
#ifdef vj
  #warning conflict: vj is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vj' is also defined as a pragma.
  #warning conflict: Pragma 'vj' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vj' in module 'psp102'.
  #undef vj
#endif
#ifdef z
  #warning conflict: z is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'z' is also defined as a pragma.
  #warning conflict: Pragma 'z' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'z' in module 'psp102'.
  #undef z
#endif
#ifdef zinv
  #warning conflict: zinv is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'zinv' is also defined as a pragma.
  #warning conflict: Pragma 'zinv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'zinv' in module 'psp102'.
  #undef zinv
#endif
#ifdef two_psistar
  #warning conflict: two_psistar is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'two_psistar' is also defined as a pragma.
  #warning conflict: Pragma 'two_psistar' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'two_psistar' in module 'psp102'.
  #undef two_psistar
#endif
#ifdef vjlim
  #warning conflict: vjlim is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vjlim' is also defined as a pragma.
  #warning conflict: Pragma 'vjlim' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vjlim' in module 'psp102'.
  #undef vjlim
#endif
#ifdef vjsrh
  #warning conflict: vjsrh is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vjsrh' is also defined as a pragma.
  #warning conflict: Pragma 'vjsrh' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vjsrh' in module 'psp102'.
  #undef vjsrh
#endif
#ifdef vbbt
  #warning conflict: vbbt is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbbt' is also defined as a pragma.
  #warning conflict: Pragma 'vbbt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbbt' in module 'psp102'.
  #undef vbbt
#endif
#ifdef vav
  #warning conflict: vav is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vav' is also defined as a pragma.
  #warning conflict: Pragma 'vav' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vav' in module 'psp102'.
  #undef vav
#endif
#ifdef isjunbot
  #warning conflict: isjunbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'isjunbot' is also defined as a pragma.
  #warning conflict: Pragma 'isjunbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'isjunbot' in module 'psp102'.
  #undef isjunbot
#endif
#ifdef qsjunbot
  #warning conflict: qsjunbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qsjunbot' is also defined as a pragma.
  #warning conflict: Pragma 'qsjunbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qsjunbot' in module 'psp102'.
  #undef qsjunbot
#endif
#ifdef isjunsti
  #warning conflict: isjunsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'isjunsti' is also defined as a pragma.
  #warning conflict: Pragma 'isjunsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'isjunsti' in module 'psp102'.
  #undef isjunsti
#endif
#ifdef qsjunsti
  #warning conflict: qsjunsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qsjunsti' is also defined as a pragma.
  #warning conflict: Pragma 'qsjunsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qsjunsti' in module 'psp102'.
  #undef qsjunsti
#endif
#ifdef isjungat
  #warning conflict: isjungat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'isjungat' is also defined as a pragma.
  #warning conflict: Pragma 'isjungat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'isjungat' in module 'psp102'.
  #undef isjungat
#endif
#ifdef qsjungat
  #warning conflict: qsjungat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qsjungat' is also defined as a pragma.
  #warning conflict: Pragma 'qsjungat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qsjungat' in module 'psp102'.
  #undef qsjungat
#endif
#ifdef isjun
  #warning conflict: isjun is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'isjun' is also defined as a pragma.
  #warning conflict: Pragma 'isjun' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'isjun' in module 'psp102'.
  #undef isjun
#endif
#ifdef qsjun
  #warning conflict: qsjun is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qsjun' is also defined as a pragma.
  #warning conflict: Pragma 'qsjun' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qsjun' in module 'psp102'.
  #undef qsjun
#endif
#ifdef sjnoise
  #warning conflict: sjnoise is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sjnoise' is also defined as a pragma.
  #warning conflict: Pragma 'sjnoise' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sjnoise' in module 'psp102'.
  #undef sjnoise
#endif
#ifdef sjnoisex
  #warning conflict: sjnoisex is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sjnoisex' is also defined as a pragma.
  #warning conflict: Pragma 'sjnoisex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sjnoisex' in module 'psp102'.
  #undef sjnoisex
#endif
#ifdef idjunbot
  #warning conflict: idjunbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'idjunbot' is also defined as a pragma.
  #warning conflict: Pragma 'idjunbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'idjunbot' in module 'psp102'.
  #undef idjunbot
#endif
#ifdef qdjunbot
  #warning conflict: qdjunbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qdjunbot' is also defined as a pragma.
  #warning conflict: Pragma 'qdjunbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qdjunbot' in module 'psp102'.
  #undef qdjunbot
#endif
#ifdef idjunsti
  #warning conflict: idjunsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'idjunsti' is also defined as a pragma.
  #warning conflict: Pragma 'idjunsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'idjunsti' in module 'psp102'.
  #undef idjunsti
#endif
#ifdef qdjunsti
  #warning conflict: qdjunsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qdjunsti' is also defined as a pragma.
  #warning conflict: Pragma 'qdjunsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qdjunsti' in module 'psp102'.
  #undef qdjunsti
#endif
#ifdef idjungat
  #warning conflict: idjungat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'idjungat' is also defined as a pragma.
  #warning conflict: Pragma 'idjungat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'idjungat' in module 'psp102'.
  #undef idjungat
#endif
#ifdef qdjungat
  #warning conflict: qdjungat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qdjungat' is also defined as a pragma.
  #warning conflict: Pragma 'qdjungat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qdjungat' in module 'psp102'.
  #undef qdjungat
#endif
#ifdef idjun
  #warning conflict: idjun is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'idjun' is also defined as a pragma.
  #warning conflict: Pragma 'idjun' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'idjun' in module 'psp102'.
  #undef idjun
#endif
#ifdef qdjun
  #warning conflict: qdjun is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'qdjun' is also defined as a pragma.
  #warning conflict: Pragma 'qdjun' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qdjun' in module 'psp102'.
  #undef qdjun
#endif
#ifdef djnoise
  #warning conflict: djnoise is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'djnoise' is also defined as a pragma.
  #warning conflict: Pragma 'djnoise' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'djnoise' in module 'psp102'.
  #undef djnoise
#endif
#ifdef djnoisex
  #warning conflict: djnoisex is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'djnoisex' is also defined as a pragma.
  #warning conflict: Pragma 'djnoisex' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'djnoisex' in module 'psp102'.
  #undef djnoisex
#endif
#ifdef Vjuns
  #warning conflict: Vjuns is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vjuns' is also defined as a pragma.
  #warning conflict: Pragma 'Vjuns' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vjuns' in module 'psp102'.
  #undef Vjuns
#endif
#ifdef Vjund
  #warning conflict: Vjund is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'Vjund' is also defined as a pragma.
  #warning conflict: Pragma 'Vjund' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Vjund' in module 'psp102'.
  #undef Vjund
#endif
#ifdef VMAXS
  #warning conflict: VMAXS is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VMAXS' is also defined as a pragma.
  #warning conflict: Pragma 'VMAXS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VMAXS' in module 'psp102'.
  #undef VMAXS
#endif
#ifdef VMAXD
  #warning conflict: VMAXD is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'VMAXD' is also defined as a pragma.
  #warning conflict: Pragma 'VMAXD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VMAXD' in module 'psp102'.
  #undef VMAXD
#endif
#ifdef vbimins
  #warning conflict: vbimins is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbimins' is also defined as a pragma.
  #warning conflict: Pragma 'vbimins' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbimins' in module 'psp102'.
  #undef vbimins
#endif
#ifdef vchs
  #warning conflict: vchs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vchs' is also defined as a pragma.
  #warning conflict: Pragma 'vchs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vchs' in module 'psp102'.
  #undef vchs
#endif
#ifdef vfmins
  #warning conflict: vfmins is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vfmins' is also defined as a pragma.
  #warning conflict: Pragma 'vfmins' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vfmins' in module 'psp102'.
  #undef vfmins
#endif
#ifdef vbbtlims
  #warning conflict: vbbtlims is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbbtlims' is also defined as a pragma.
  #warning conflict: Pragma 'vbbtlims' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbbtlims' in module 'psp102'.
  #undef vbbtlims
#endif
#ifdef vbimind
  #warning conflict: vbimind is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbimind' is also defined as a pragma.
  #warning conflict: Pragma 'vbimind' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbimind' in module 'psp102'.
  #undef vbimind
#endif
#ifdef vchd
  #warning conflict: vchd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vchd' is also defined as a pragma.
  #warning conflict: Pragma 'vchd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vchd' in module 'psp102'.
  #undef vchd
#endif
#ifdef vfmind
  #warning conflict: vfmind is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vfmind' is also defined as a pragma.
  #warning conflict: Pragma 'vfmind' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vfmind' in module 'psp102'.
  #undef vfmind
#endif
#ifdef vbbtlimd
  #warning conflict: vbbtlimd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vbbtlimd' is also defined as a pragma.
  #warning conflict: Pragma 'vbbtlimd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vbbtlimd' in module 'psp102'.
  #undef vbbtlimd
#endif
#ifdef ABSOURCE_i
  #warning conflict: ABSOURCE_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ABSOURCE_i' is also defined as a pragma.
  #warning conflict: Pragma 'ABSOURCE_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ABSOURCE_i' in module 'psp102'.
  #undef ABSOURCE_i
#endif
#ifdef LSSOURCE_i
  #warning conflict: LSSOURCE_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LSSOURCE_i' is also defined as a pragma.
  #warning conflict: Pragma 'LSSOURCE_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LSSOURCE_i' in module 'psp102'.
  #undef LSSOURCE_i
#endif
#ifdef LGSOURCE_i
  #warning conflict: LGSOURCE_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LGSOURCE_i' is also defined as a pragma.
  #warning conflict: Pragma 'LGSOURCE_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LGSOURCE_i' in module 'psp102'.
  #undef LGSOURCE_i
#endif
#ifdef ABDRAIN_i
  #warning conflict: ABDRAIN_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ABDRAIN_i' is also defined as a pragma.
  #warning conflict: Pragma 'ABDRAIN_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ABDRAIN_i' in module 'psp102'.
  #undef ABDRAIN_i
#endif
#ifdef LSDRAIN_i
  #warning conflict: LSDRAIN_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LSDRAIN_i' is also defined as a pragma.
  #warning conflict: Pragma 'LSDRAIN_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LSDRAIN_i' in module 'psp102'.
  #undef LSDRAIN_i
#endif
#ifdef LGDRAIN_i
  #warning conflict: LGDRAIN_i is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'LGDRAIN_i' is also defined as a pragma.
  #warning conflict: Pragma 'LGDRAIN_i' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LGDRAIN_i' in module 'psp102'.
  #undef LGDRAIN_i
#endif
#ifdef juncapwidth
  #warning conflict: juncapwidth is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'juncapwidth' is also defined as a pragma.
  #warning conflict: Pragma 'juncapwidth' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'juncapwidth' in module 'psp102'.
  #undef juncapwidth
#endif
#ifdef id_op
  #warning conflict: id_op is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'id_op' is also defined as a pragma.
  #warning conflict: Pragma 'id_op' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'id_op' in module 'psp102'.
  #undef id_op
#endif
#ifdef is
  #warning conflict: is is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'is' is also defined as a pragma.
  #warning conflict: Pragma 'is' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'is' in module 'psp102'.
  #undef is
#endif
#ifdef ig
  #warning conflict: ig is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ig' is also defined as a pragma.
  #warning conflict: Pragma 'ig' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ig' in module 'psp102'.
  #undef ig
#endif
#ifdef ib
  #warning conflict: ib is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ib' is also defined as a pragma.
  #warning conflict: Pragma 'ib' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ib' in module 'psp102'.
  #undef ib
#endif
#ifdef P_D
  #warning conflict: P_D is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'P_D' is also defined as a pragma.
  #warning conflict: Pragma 'P_D' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'P_D' in module 'psp102'.
  #undef P_D
#endif
#ifdef facvsb
  #warning conflict: facvsb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'facvsb' is also defined as a pragma.
  #warning conflict: Pragma 'facvsb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'facvsb' in module 'psp102'.
  #undef facvsb
#endif
#ifdef facvsb0
  #warning conflict: facvsb0 is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'facvsb0' is also defined as a pragma.
  #warning conflict: Pragma 'facvsb0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'facvsb0' in module 'psp102'.
  #undef facvsb0
#endif
#ifdef sig1k
  #warning conflict: sig1k is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sig1k' is also defined as a pragma.
  #warning conflict: Pragma 'sig1k' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sig1k' in module 'psp102'.
  #undef sig1k
#endif
#ifdef ctype
  #warning conflict: ctype is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ctype' is also defined as a pragma.
  #warning conflict: Pragma 'ctype' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ctype' in module 'psp102'.
  #undef ctype
#endif
#ifdef sdint
  #warning conflict: sdint is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sdint' is also defined as a pragma.
  #warning conflict: Pragma 'sdint' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sdint' in module 'psp102'.
  #undef sdint
#endif
#ifdef ise
  #warning conflict: ise is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ise' is also defined as a pragma.
  #warning conflict: Pragma 'ise' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ise' in module 'psp102'.
  #undef ise
#endif
#ifdef ige
  #warning conflict: ige is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ige' is also defined as a pragma.
  #warning conflict: Pragma 'ige' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ige' in module 'psp102'.
  #undef ige
#endif
#ifdef ide
  #warning conflict: ide is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ide' is also defined as a pragma.
  #warning conflict: Pragma 'ide' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ide' in module 'psp102'.
  #undef ide
#endif
#ifdef ibe
  #warning conflict: ibe is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ibe' is also defined as a pragma.
  #warning conflict: Pragma 'ibe' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibe' in module 'psp102'.
  #undef ibe
#endif
#ifdef ids
  #warning conflict: ids is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ids' is also defined as a pragma.
  #warning conflict: Pragma 'ids' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ids' in module 'psp102'.
  #undef ids
#endif
#ifdef idb
  #warning conflict: idb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'idb' is also defined as a pragma.
  #warning conflict: Pragma 'idb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'idb' in module 'psp102'.
  #undef idb
#endif
#ifdef isb
  #warning conflict: isb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'isb' is also defined as a pragma.
  #warning conflict: Pragma 'isb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'isb' in module 'psp102'.
  #undef isb
#endif
#ifdef igs
  #warning conflict: igs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'igs' is also defined as a pragma.
  #warning conflict: Pragma 'igs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'igs' in module 'psp102'.
  #undef igs
#endif
#ifdef igd
  #warning conflict: igd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'igd' is also defined as a pragma.
  #warning conflict: Pragma 'igd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'igd' in module 'psp102'.
  #undef igd
#endif
#ifdef igb
  #warning conflict: igb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'igb' is also defined as a pragma.
  #warning conflict: Pragma 'igb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'igb' in module 'psp102'.
  #undef igb
#endif
#ifdef igcs
  #warning conflict: igcs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'igcs' is also defined as a pragma.
  #warning conflict: Pragma 'igcs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'igcs' in module 'psp102'.
  #undef igcs
#endif
#ifdef igcd
  #warning conflict: igcd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'igcd' is also defined as a pragma.
  #warning conflict: Pragma 'igcd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'igcd' in module 'psp102'.
  #undef igcd
#endif
#ifdef iavl
  #warning conflict: iavl is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'iavl' is also defined as a pragma.
  #warning conflict: Pragma 'iavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'iavl' in module 'psp102'.
  #undef iavl
#endif
#ifdef igisl
  #warning conflict: igisl is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'igisl' is also defined as a pragma.
  #warning conflict: Pragma 'igisl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'igisl' in module 'psp102'.
  #undef igisl
#endif
#ifdef igidl
  #warning conflict: igidl is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'igidl' is also defined as a pragma.
  #warning conflict: Pragma 'igidl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'igidl' in module 'psp102'.
  #undef igidl
#endif
#ifdef ijs
  #warning conflict: ijs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ijs' is also defined as a pragma.
  #warning conflict: Pragma 'ijs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijs' in module 'psp102'.
  #undef ijs
#endif
#ifdef ijsbot
  #warning conflict: ijsbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ijsbot' is also defined as a pragma.
  #warning conflict: Pragma 'ijsbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijsbot' in module 'psp102'.
  #undef ijsbot
#endif
#ifdef ijsgat
  #warning conflict: ijsgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ijsgat' is also defined as a pragma.
  #warning conflict: Pragma 'ijsgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijsgat' in module 'psp102'.
  #undef ijsgat
#endif
#ifdef ijssti
  #warning conflict: ijssti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ijssti' is also defined as a pragma.
  #warning conflict: Pragma 'ijssti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijssti' in module 'psp102'.
  #undef ijssti
#endif
#ifdef ijd
  #warning conflict: ijd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ijd' is also defined as a pragma.
  #warning conflict: Pragma 'ijd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijd' in module 'psp102'.
  #undef ijd
#endif
#ifdef ijdbot
  #warning conflict: ijdbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ijdbot' is also defined as a pragma.
  #warning conflict: Pragma 'ijdbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijdbot' in module 'psp102'.
  #undef ijdbot
#endif
#ifdef ijdgat
  #warning conflict: ijdgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ijdgat' is also defined as a pragma.
  #warning conflict: Pragma 'ijdgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijdgat' in module 'psp102'.
  #undef ijdgat
#endif
#ifdef ijdsti
  #warning conflict: ijdsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ijdsti' is also defined as a pragma.
  #warning conflict: Pragma 'ijdsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ijdsti' in module 'psp102'.
  #undef ijdsti
#endif
#ifdef vds
  #warning conflict: vds is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vds' is also defined as a pragma.
  #warning conflict: Pragma 'vds' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vds' in module 'psp102'.
  #undef vds
#endif
#ifdef vgs
  #warning conflict: vgs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vgs' is also defined as a pragma.
  #warning conflict: Pragma 'vgs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgs' in module 'psp102'.
  #undef vgs
#endif
#ifdef vsb
  #warning conflict: vsb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vsb' is also defined as a pragma.
  #warning conflict: Pragma 'vsb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vsb' in module 'psp102'.
  #undef vsb
#endif
#ifdef vto
  #warning conflict: vto is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vto' is also defined as a pragma.
  #warning conflict: Pragma 'vto' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vto' in module 'psp102'.
  #undef vto
#endif
#ifdef vts
  #warning conflict: vts is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vts' is also defined as a pragma.
  #warning conflict: Pragma 'vts' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vts' in module 'psp102'.
  #undef vts
#endif
#ifdef vth
  #warning conflict: vth is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vth' is also defined as a pragma.
  #warning conflict: Pragma 'vth' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vth' in module 'psp102'.
  #undef vth
#endif
#ifdef vgt
  #warning conflict: vgt is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vgt' is also defined as a pragma.
  #warning conflict: Pragma 'vgt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgt' in module 'psp102'.
  #undef vgt
#endif
#ifdef vdss
  #warning conflict: vdss is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vdss' is also defined as a pragma.
  #warning conflict: Pragma 'vdss' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdss' in module 'psp102'.
  #undef vdss
#endif
#ifdef vsat
  #warning conflict: vsat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vsat' is also defined as a pragma.
  #warning conflict: Pragma 'vsat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vsat' in module 'psp102'.
  #undef vsat
#endif
#ifdef gm
  #warning conflict: gm is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'gm' is also defined as a pragma.
  #warning conflict: Pragma 'gm' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gm' in module 'psp102'.
  #undef gm
#endif
#ifdef gmb
  #warning conflict: gmb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'gmb' is also defined as a pragma.
  #warning conflict: Pragma 'gmb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gmb' in module 'psp102'.
  #undef gmb
#endif
#ifdef gds
  #warning conflict: gds is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'gds' is also defined as a pragma.
  #warning conflict: Pragma 'gds' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gds' in module 'psp102'.
  #undef gds
#endif
#ifdef gjs
  #warning conflict: gjs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'gjs' is also defined as a pragma.
  #warning conflict: Pragma 'gjs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gjs' in module 'psp102'.
  #undef gjs
#endif
#ifdef gjd
  #warning conflict: gjd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'gjd' is also defined as a pragma.
  #warning conflict: Pragma 'gjd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gjd' in module 'psp102'.
  #undef gjd
#endif
#ifdef cdd
  #warning conflict: cdd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cdd' is also defined as a pragma.
  #warning conflict: Pragma 'cdd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cdd' in module 'psp102'.
  #undef cdd
#endif
#ifdef cdg
  #warning conflict: cdg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cdg' is also defined as a pragma.
  #warning conflict: Pragma 'cdg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cdg' in module 'psp102'.
  #undef cdg
#endif
#ifdef cds
  #warning conflict: cds is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cds' is also defined as a pragma.
  #warning conflict: Pragma 'cds' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cds' in module 'psp102'.
  #undef cds
#endif
#ifdef cdb
  #warning conflict: cdb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cdb' is also defined as a pragma.
  #warning conflict: Pragma 'cdb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cdb' in module 'psp102'.
  #undef cdb
#endif
#ifdef cgd
  #warning conflict: cgd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cgd' is also defined as a pragma.
  #warning conflict: Pragma 'cgd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cgd' in module 'psp102'.
  #undef cgd
#endif
#ifdef cgg
  #warning conflict: cgg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cgg' is also defined as a pragma.
  #warning conflict: Pragma 'cgg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cgg' in module 'psp102'.
  #undef cgg
#endif
#ifdef cgs
  #warning conflict: cgs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cgs' is also defined as a pragma.
  #warning conflict: Pragma 'cgs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cgs' in module 'psp102'.
  #undef cgs
#endif
#ifdef cgb
  #warning conflict: cgb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cgb' is also defined as a pragma.
  #warning conflict: Pragma 'cgb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cgb' in module 'psp102'.
  #undef cgb
#endif
#ifdef csd
  #warning conflict: csd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'csd' is also defined as a pragma.
  #warning conflict: Pragma 'csd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'csd' in module 'psp102'.
  #undef csd
#endif
#ifdef csg
  #warning conflict: csg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'csg' is also defined as a pragma.
  #warning conflict: Pragma 'csg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'csg' in module 'psp102'.
  #undef csg
#endif
#ifdef css
  #warning conflict: css is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'css' is also defined as a pragma.
  #warning conflict: Pragma 'css' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'css' in module 'psp102'.
  #undef css
#endif
#ifdef csb
  #warning conflict: csb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'csb' is also defined as a pragma.
  #warning conflict: Pragma 'csb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'csb' in module 'psp102'.
  #undef csb
#endif
#ifdef cbd
  #warning conflict: cbd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cbd' is also defined as a pragma.
  #warning conflict: Pragma 'cbd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbd' in module 'psp102'.
  #undef cbd
#endif
#ifdef cbg
  #warning conflict: cbg is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cbg' is also defined as a pragma.
  #warning conflict: Pragma 'cbg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbg' in module 'psp102'.
  #undef cbg
#endif
#ifdef cbs
  #warning conflict: cbs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cbs' is also defined as a pragma.
  #warning conflict: Pragma 'cbs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbs' in module 'psp102'.
  #undef cbs
#endif
#ifdef cbb
  #warning conflict: cbb is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cbb' is also defined as a pragma.
  #warning conflict: Pragma 'cbb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbb' in module 'psp102'.
  #undef cbb
#endif
#ifdef cgsol
  #warning conflict: cgsol is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cgsol' is also defined as a pragma.
  #warning conflict: Pragma 'cgsol' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cgsol' in module 'psp102'.
  #undef cgsol
#endif
#ifdef cgdol
  #warning conflict: cgdol is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cgdol' is also defined as a pragma.
  #warning conflict: Pragma 'cgdol' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cgdol' in module 'psp102'.
  #undef cgdol
#endif
#ifdef cjs
  #warning conflict: cjs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cjs' is also defined as a pragma.
  #warning conflict: Pragma 'cjs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjs' in module 'psp102'.
  #undef cjs
#endif
#ifdef cjsbot
  #warning conflict: cjsbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cjsbot' is also defined as a pragma.
  #warning conflict: Pragma 'cjsbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjsbot' in module 'psp102'.
  #undef cjsbot
#endif
#ifdef cjsgat
  #warning conflict: cjsgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cjsgat' is also defined as a pragma.
  #warning conflict: Pragma 'cjsgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjsgat' in module 'psp102'.
  #undef cjsgat
#endif
#ifdef cjssti
  #warning conflict: cjssti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cjssti' is also defined as a pragma.
  #warning conflict: Pragma 'cjssti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjssti' in module 'psp102'.
  #undef cjssti
#endif
#ifdef cjd
  #warning conflict: cjd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cjd' is also defined as a pragma.
  #warning conflict: Pragma 'cjd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjd' in module 'psp102'.
  #undef cjd
#endif
#ifdef cjdbot
  #warning conflict: cjdbot is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cjdbot' is also defined as a pragma.
  #warning conflict: Pragma 'cjdbot' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjdbot' in module 'psp102'.
  #undef cjdbot
#endif
#ifdef cjdgat
  #warning conflict: cjdgat is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cjdgat' is also defined as a pragma.
  #warning conflict: Pragma 'cjdgat' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjdgat' in module 'psp102'.
  #undef cjdgat
#endif
#ifdef cjdsti
  #warning conflict: cjdsti is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cjdsti' is also defined as a pragma.
  #warning conflict: Pragma 'cjdsti' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cjdsti' in module 'psp102'.
  #undef cjdsti
#endif
#ifdef weff
  #warning conflict: weff is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'weff' is also defined as a pragma.
  #warning conflict: Pragma 'weff' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'weff' in module 'psp102'.
  #undef weff
#endif
#ifdef leff
  #warning conflict: leff is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'leff' is also defined as a pragma.
  #warning conflict: Pragma 'leff' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'leff' in module 'psp102'.
  #undef leff
#endif
#ifdef u
  #warning conflict: u is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'u' is also defined as a pragma.
  #warning conflict: Pragma 'u' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'u' in module 'psp102'.
  #undef u
#endif
#ifdef rout
  #warning conflict: rout is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'rout' is also defined as a pragma.
  #warning conflict: Pragma 'rout' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rout' in module 'psp102'.
  #undef rout
#endif
#ifdef vearly
  #warning conflict: vearly is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'vearly' is also defined as a pragma.
  #warning conflict: Pragma 'vearly' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vearly' in module 'psp102'.
  #undef vearly
#endif
#ifdef beff
  #warning conflict: beff is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'beff' is also defined as a pragma.
  #warning conflict: Pragma 'beff' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'beff' in module 'psp102'.
  #undef beff
#endif
#ifdef fug
  #warning conflict: fug is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'fug' is also defined as a pragma.
  #warning conflict: Pragma 'fug' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fug' in module 'psp102'.
  #undef fug
#endif
#ifdef sfl
  #warning conflict: sfl is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sfl' is also defined as a pragma.
  #warning conflict: Pragma 'sfl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sfl' in module 'psp102'.
  #undef sfl
#endif
#ifdef sqrtsff
  #warning conflict: sqrtsff is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sqrtsff' is also defined as a pragma.
  #warning conflict: Pragma 'sqrtsff' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sqrtsff' in module 'psp102'.
  #undef sqrtsff
#endif
#ifdef sqrtsfw
  #warning conflict: sqrtsfw is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sqrtsfw' is also defined as a pragma.
  #warning conflict: Pragma 'sqrtsfw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sqrtsfw' in module 'psp102'.
  #undef sqrtsfw
#endif
#ifdef sid
  #warning conflict: sid is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sid' is also defined as a pragma.
  #warning conflict: Pragma 'sid' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sid' in module 'psp102'.
  #undef sid
#endif
#ifdef sig
  #warning conflict: sig is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sig' is also defined as a pragma.
  #warning conflict: Pragma 'sig' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sig' in module 'psp102'.
  #undef sig
#endif
#ifdef cigid
  #warning conflict: cigid is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'cigid' is also defined as a pragma.
  #warning conflict: Pragma 'cigid' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cigid' in module 'psp102'.
  #undef cigid
#endif
#ifdef fknee
  #warning conflict: fknee is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'fknee' is also defined as a pragma.
  #warning conflict: Pragma 'fknee' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fknee' in module 'psp102'.
  #undef fknee
#endif
#ifdef sigs
  #warning conflict: sigs is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sigs' is also defined as a pragma.
  #warning conflict: Pragma 'sigs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sigs' in module 'psp102'.
  #undef sigs
#endif
#ifdef sigd
  #warning conflict: sigd is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sigd' is also defined as a pragma.
  #warning conflict: Pragma 'sigd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sigd' in module 'psp102'.
  #undef sigd
#endif
#ifdef siavl
  #warning conflict: siavl is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'siavl' is also defined as a pragma.
  #warning conflict: Pragma 'siavl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'siavl' in module 'psp102'.
  #undef siavl
#endif
#ifdef ssi
  #warning conflict: ssi is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'ssi' is also defined as a pragma.
  #warning conflict: Pragma 'ssi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ssi' in module 'psp102'.
  #undef ssi
#endif
#ifdef sdi
  #warning conflict: sdi is declared as a variable of module 'psp102'.
  #warning conflict: However in the API of ngspice 'sdi' is also defined as a pragma.
  #warning conflict: Pragma 'sdi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sdi' in module 'psp102'.
  #undef sdi
#endif
#ifdef sdi
  #warning conflict: GND is declared as a node of module 'psp102'.
  #warning conflict: However in the API of ngspice 'GND' is also defined as a pragma.
  #warning conflict: Pragma 'GND' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GND' in module 'psp102'.
  #undef sdi
#endif
#ifdef sdi
  #warning conflict: D is declared as a node of module 'psp102'.
  #warning conflict: However in the API of ngspice 'D' is also defined as a pragma.
  #warning conflict: Pragma 'D' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'D' in module 'psp102'.
  #undef sdi
#endif
#ifdef sdi
  #warning conflict: G is declared as a node of module 'psp102'.
  #warning conflict: However in the API of ngspice 'G' is also defined as a pragma.
  #warning conflict: Pragma 'G' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'G' in module 'psp102'.
  #undef sdi
#endif
#ifdef sdi
  #warning conflict: S is declared as a node of module 'psp102'.
  #warning conflict: However in the API of ngspice 'S' is also defined as a pragma.
  #warning conflict: Pragma 'S' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'S' in module 'psp102'.
  #undef sdi
#endif
#ifdef sdi
  #warning conflict: B is declared as a node of module 'psp102'.
  #warning conflict: However in the API of ngspice 'B' is also defined as a pragma.
  #warning conflict: Pragma 'B' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'B' in module 'psp102'.
  #undef sdi
#endif
#ifdef sdi
  #warning conflict: NOI is declared as a node of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NOI' is also defined as a pragma.
  #warning conflict: Pragma 'NOI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NOI' in module 'psp102'.
  #undef sdi
#endif
#ifdef sdi
  #warning conflict: NOI2 is declared as a node of module 'psp102'.
  #warning conflict: However in the API of ngspice 'NOI2' is also defined as a pragma.
  #warning conflict: Pragma 'NOI2' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NOI2' in module 'psp102'.
  #undef sdi
#endif

#ifdef NGSPICE_DEBUG_OK
#define NGSPICE_DEBUG \
{ \
  if(getenv("ngspice_debug")) \
    psp102debug(ckt,model,here); \
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

/* declarations for psp102 MOSFETs */

/* information needed for each instance */
typedef struct spsp102instance {
  struct spsp102model *psp102modPtr;           /* pointer to model */
  struct spsp102instance *psp102nextInstance;  /* pointer to next instance of current model*/
  IFuid psp102name; /* pointer to character string naming this instance */
  int psp102owner;  /* number of owner process */
  int psp102state; /* index into state table for this device */

  /* node */  int DNode;
  int GNode;
  int SNode;
  int BNode;
  int NOINode;
  int NOI2Node;

  /* instance parameters */  double L;
  unsigned L_Given  :1;  /*L*/
  double W;
  unsigned W_Given  :1;  /*W*/
  double SA;
  unsigned SA_Given  :1;  /*SA*/
  double SB;
  unsigned SB_Given  :1;  /*SB*/
  double ABSOURCE;
  unsigned ABSOURCE_Given  :1;  /*ABSOURCE*/
  double LSSOURCE;
  unsigned LSSOURCE_Given  :1;  /*LSSOURCE*/
  double LGSOURCE;
  unsigned LGSOURCE_Given  :1;  /*LGSOURCE*/
  double ABDRAIN;
  unsigned ABDRAIN_Given  :1;  /*ABDRAIN*/
  double LSDRAIN;
  unsigned LSDRAIN_Given  :1;  /*LSDRAIN*/
  double LGDRAIN;
  unsigned LGDRAIN_Given  :1;  /*LGDRAIN*/
  double AS;
  unsigned AS_Given  :1;  /*AS*/
  double PS;
  unsigned PS_Given  :1;  /*PS*/
  double AD;
  unsigned AD_Given  :1;  /*AD*/
  double PD;
  unsigned PD_Given  :1;  /*PD*/
  double MULT;
  unsigned MULT_Given  :1;  /*MULT*/

 // noise
  double fpnoise0, fenoise0;
  double wnoise0;
  double wnoise1;
  double wnoise2;
  double wnoise3;
  double wnoise4;
  double wnoise5;
  double wnoise6;


  /* variables */  double LE_LE;
  double WE;
  double VFB_i;
  double VNSUB_i;
  double NSLP_i;
  double DNSUB_i;
  double CF_i;
  double CFB_i;
  double BET_i;
  double MUE_i;
  double THEMU_i;
  double CS_i;
  double XCOR_i;
  double THER_i;
  double RSB_i;
  double RSG_i;
  double THESAT_i;
  double THESATB_i;
  double THESATG_i;
  double AX_i;
  double ALP_i;
  double ALP1_i;
  double ALP2_i;
  double A1_i;
  double A2_i;
  double A3_i;
  double A4_i;
  double IGINV_i;
  double IGOV_i;
  double GC2_i;
  double GC3_i;
  double CHIB_i;
  double AGIDL_i;
  double BGIDL_i;
  double CGIDL_i;
  double COX_i;
  double CGOV_i;
  double CGBOV_i;
  double CFR_i;
  double NFA_i;
  double NFB_i;
  double NFC_i;
  double MULT_i;
  double GOV;
  double GOV2;
  double kp;
  double qq;
  double qlim2;
  double E_eff0;
  double eta_mu;
  double BCH;
  double BOV;
  double inv_CHIB;
  double GCQ;
  double Dch;
  double Dov;
  double xi_ov;
  double inv_xi_ov;
  double x_mrg_ov;
  double x1;
  double inv_xg1;
  double Vdsat_lim;
  double nt;
  double Cox_over_q;
  double phib;
  double sqrt_phib;
  double phix;
  double aphi;
  double bphi;
  double phix1;
  double G_0;
  double phit1;
  double inv_phit1;
  double alpha_b;
  double inv_VP;
  double inv_AX;
  double Sfl_prefac;
  double alpha;
  double eta_p;
  double FdL;
  double Gmob_dL;
  double Gvsat;
  double Gvsatinv;
  double dps;
  double qim;
  double qim1;
  double sigVds;
  double xg;
  double COX_qm;
  double H;
  double Sfl;
  double CGeff;
  double mig;
  double c_igid;
  double sqid;
  double shot_igsx;
  double shot_igdx;
  double shot_iavl;
  double Ids;
  double mavl;
  double Igse;
  double Igde;
  double Iimpacte;
  double vbi_minus_vjsrh;
  double wsrh;
  double wdep;
  double asrh;
  double idmult;
  double vj;
  double zinv;
  double vjsrh;
  double vav;
  double isjun;
  double sjnoisex;
  double idjun;
  double djnoisex;
  double VMAXS;
  double VMAXD;
  double vbimins;
  double vchs;
  double vfmins;
  double vbbtlims;
  double vbimind;
  double vchd;
  double vfmind;
  double vbbtlimd;
  double ABSOURCE_i;
  double LSSOURCE_i;
  double LGSOURCE_i;
  double ABDRAIN_i;
  double LSDRAIN_i;
  double LGDRAIN_i;
  double ctype;
  /*info*/  double sdint;
  /*info*/  double ise;
  /*info*/  double ige;
  /*info*/  double ide;
  /*info*/  double ibe;
  /*info*/  double ids;
  /*info*/  double idb;
  /*info*/  double isb;
  /*info*/  double igs;
  /*info*/  double igd;
  /*info*/  double igb;
  /*info*/  double igcs;
  /*info*/  double igcd;
  /*info*/  double iavl;
  /*info*/  double igisl;
  /*info*/  double igidl;
  /*info*/  double ijs;
  /*info*/  double ijsbot;
  /*info*/  double ijsgat;
  /*info*/  double ijssti;
  /*info*/  double ijd;
  /*info*/  double ijdbot;
  /*info*/  double ijdgat;
  /*info*/  double ijdsti;
  /*info*/  double vds;
  /*info*/  double vgs;
  /*info*/  double vsb;
  /*info*/  double vto;
  /*info*/  double vts;
  /*info*/  double vth;
  /*info*/  double vgt;
  /*info*/  double vdss;
  /*info*/  double vsat;
  /*info*/  double gm;
  /*info*/  double gmb;
  /*info*/  double gds;
  /*info*/  double gjs;
  /*info*/  double gjd;
  /*info*/  double cdd;
  /*info*/  double cdg;
  /*info*/  double cds;
  /*info*/  double cdb;
  /*info*/  double cgd;
  /*info*/  double cgg;
  /*info*/  double cgs;
  /*info*/  double cgb;
  /*info*/  double csd;
  /*info*/  double csg;
  /*info*/  double css;
  /*info*/  double csb;
  /*info*/  double cbd;
  /*info*/  double cbg;
  /*info*/  double cbs;
  /*info*/  double cbb;
  /*info*/  double cgsol;
  /*info*/  double cgdol;
  /*info*/  double cjs;
  /*info*/  double cjsbot;
  /*info*/  double cjsgat;
  /*info*/  double cjssti;
  /*info*/  double cjd;
  /*info*/  double cjdbot;
  /*info*/  double cjdgat;
  /*info*/  double cjdsti;
  /*info*/  double weff;
  /*info*/  double leff;
  /*info*/  double u;
  /*info*/  double rout;
  /*info*/  double vearly;
  /*info*/  double beff;
  /*info*/  double fug;
  /*info*/  double sfl;
  /*info*/  double sqrtsff;
  /*info*/  double sqrtsfw;
  /*info*/  double sid;
  /*info*/  double sig;
  /*info*/  double cigid;
  /*info*/  double fknee;
  /*info*/  double sigs;
  /*info*/  double sigd;
  /*info*/  double siavl;
  /*info*/  double ssi;
  /*info*/  double sdi;
  /*info*/
  /* states */  int state_NOI_GND;
  int state_B_D;
  int state_B_S;
  int state_G_B;
  int state_G_D;
  int state_G_S;
  int state_D_S;

  /* pointer to sparse matrix (+ values)*/  double *PTR_J_D_S;
    int PTR_J_D_S_required;
    double JSVAL_D_S;
    double JDVAL_D_S;
  double *PTR_J_D_B;
    int PTR_J_D_B_required;
    double JSVAL_D_B;
    double JDVAL_D_B;
  double *PTR_J_B_S;
    int PTR_J_B_S_required;
    double JSVAL_B_S;
    double JDVAL_B_S;
  double *PTR_J_B_B;
    int PTR_J_B_B_required;
    double JSVAL_B_B;
    double JDVAL_B_B;
  double *PTR_J_D_D;
    int PTR_J_D_D_required;
    double JSVAL_D_D;
    double JDVAL_D_D;
  double *PTR_J_B_D;
    int PTR_J_B_D_required;
    double JSVAL_B_D;
    double JDVAL_B_D;
  double *PTR_J_D_G;
    int PTR_J_D_G_required;
    double JSVAL_D_G;
    double JDVAL_D_G;
  double *PTR_J_B_G;
    int PTR_J_B_G_required;
    double JSVAL_B_G;
    double JDVAL_B_G;
  double *PTR_J_S_S;
    int PTR_J_S_S_required;
    double JSVAL_S_S;
    double JDVAL_S_S;
  double *PTR_J_S_B;
    int PTR_J_S_B_required;
    double JSVAL_S_B;
    double JDVAL_S_B;
  double *PTR_J_S_D;
    int PTR_J_S_D_required;
    double JSVAL_S_D;
    double JDVAL_S_D;
  double *PTR_J_S_G;
    int PTR_J_S_G_required;
    double JSVAL_S_G;
    double JDVAL_S_G;
  double *PTR_J_G_S;
    int PTR_J_G_S_required;
    double JSVAL_G_S;
    double JDVAL_G_S;
  double *PTR_J_G_B;
    int PTR_J_G_B_required;
    double JSVAL_G_B;
    double JDVAL_G_B;
  double *PTR_J_G_D;
    int PTR_J_G_D_required;
    double JSVAL_G_D;
    double JDVAL_G_D;
  double *PTR_J_G_G;
    int PTR_J_G_G_required;
    double JSVAL_G_G;
    double JDVAL_G_G;
  double *PTR_J_NOI2_NOI2;
    int PTR_J_NOI2_NOI2_required;
    double JSVAL_NOI2_NOI2;
  double *PTR_J_NOI2_S;
    int PTR_J_NOI2_S_required;
    double JSVAL_NOI2_S;
  double *PTR_J_NOI2_B;
    int PTR_J_NOI2_B_required;
    double JSVAL_NOI2_B;
  double *PTR_J_NOI2_G;
    int PTR_J_NOI2_G_required;
    double JSVAL_NOI2_G;
  double *PTR_J_NOI2_D;
    int PTR_J_NOI2_D_required;
    double JSVAL_NOI2_D;
  double *PTR_J_NOI_S;
    int PTR_J_NOI_S_required;
    double JSVAL_NOI_S;
    double JDVAL_NOI_S;
  double *PTR_J_NOI_B;
    int PTR_J_NOI_B_required;
    double JSVAL_NOI_B;
    double JDVAL_NOI_B;
  double *PTR_J_NOI_G;
    int PTR_J_NOI_G_required;
    double JSVAL_NOI_G;
    double JDVAL_NOI_G;
  double *PTR_J_NOI_D;
    int PTR_J_NOI_D_required;
    double JSVAL_NOI_D;
    double JDVAL_NOI_D;
  double *PTR_J_NOI_NOI2;
    int PTR_J_NOI_NOI2_required;
    double JSVAL_NOI_NOI2;
  double *PTR_J_NOI_NOI;
    int PTR_J_NOI_NOI_required;
    double JSVAL_NOI_NOI;
    double JDVAL_NOI_NOI;
  double *PTR_J_D_NOI2;
    int PTR_J_D_NOI2_required;
    double JSVAL_D_NOI2;
  double *PTR_J_S_NOI2;
    int PTR_J_S_NOI2_required;
    double JSVAL_S_NOI2;
  double *PTR_J_G_NOI;
    int PTR_J_G_NOI_required;
    double JDVAL_G_NOI;
  double *PTR_J_S_NOI;
    int PTR_J_S_NOI_required;
    double JDVAL_S_NOI;
  double *PTR_J_D_NOI;
    int PTR_J_D_NOI_required;
    double JDVAL_D_NOI;


#define psp102numStates 0

} psp102instance ;


/* per model data */

typedef struct spsp102model {         /* model structure */
  int psp102modType;        /* type index of this device type */
  struct spsp102model *psp102nextModel; /* pointer to next possible model in linked list */
  psp102instance * psp102instances;  /* pointer to list of instances that have this model */
  IFuid psp102modName;         /* pointer to the name of this model */

  /* model parameters */  int pmos;
  unsigned pmos_Given  :1;
  int nmos;
  unsigned nmos_Given  :1;
  double LEVEL;
  unsigned LEVEL_Given  :1;  /*LEVEL*/
  double TYPE;
  unsigned TYPE_Given  :1;  /*TYPE*/
  double TR;
  unsigned TR_Given  :1;  /*TR*/
  double SWIGATE;
  unsigned SWIGATE_Given  :1;  /*SWIGATE*/
  double SWIMPACT;
  unsigned SWIMPACT_Given  :1;  /*SWIMPACT*/
  double SWGIDL;
  unsigned SWGIDL_Given  :1;  /*SWGIDL*/
  double SWJUNCAP;
  unsigned SWJUNCAP_Given  :1;  /*SWJUNCAP*/
  double QMC;
  unsigned QMC_Given  :1;  /*QMC*/
  double LVARO;
  unsigned LVARO_Given  :1;  /*LVARO*/
  double LVARL;
  unsigned LVARL_Given  :1;  /*LVARL*/
  double LVARW;
  unsigned LVARW_Given  :1;  /*LVARW*/
  double LAP;
  unsigned LAP_Given  :1;  /*LAP*/
  double WVARO;
  unsigned WVARO_Given  :1;  /*WVARO*/
  double WVARL;
  unsigned WVARL_Given  :1;  /*WVARL*/
  double WVARW;
  unsigned WVARW_Given  :1;  /*WVARW*/
  double WOT;
  unsigned WOT_Given  :1;  /*WOT*/
  double DLQ;
  unsigned DLQ_Given  :1;  /*DLQ*/
  double DWQ;
  unsigned DWQ_Given  :1;  /*DWQ*/
  double VFBO;
  unsigned VFBO_Given  :1;  /*VFBO*/
  double VFBL;
  unsigned VFBL_Given  :1;  /*VFBL*/
  double VFBW;
  unsigned VFBW_Given  :1;  /*VFBW*/
  double VFBLW;
  unsigned VFBLW_Given  :1;  /*VFBLW*/
  double STVFBO;
  unsigned STVFBO_Given  :1;  /*STVFBO*/
  double STVFBL;
  unsigned STVFBL_Given  :1;  /*STVFBL*/
  double STVFBW;
  unsigned STVFBW_Given  :1;  /*STVFBW*/
  double STVFBLW;
  unsigned STVFBLW_Given  :1;  /*STVFBLW*/
  double TOXO;
  unsigned TOXO_Given  :1;  /*TOXO*/
  double NSUBO;
  unsigned NSUBO_Given  :1;  /*NSUBO*/
  double NSUBW;
  unsigned NSUBW_Given  :1;  /*NSUBW*/
  double WSEG;
  unsigned WSEG_Given  :1;  /*WSEG*/
  double NPCK;
  unsigned NPCK_Given  :1;  /*NPCK*/
  double NPCKW;
  unsigned NPCKW_Given  :1;  /*NPCKW*/
  double WSEGP;
  unsigned WSEGP_Given  :1;  /*WSEGP*/
  double LPCK;
  unsigned LPCK_Given  :1;  /*LPCK*/
  double LPCKW;
  unsigned LPCKW_Given  :1;  /*LPCKW*/
  double FOL1;
  unsigned FOL1_Given  :1;  /*FOL1*/
  double FOL2;
  unsigned FOL2_Given  :1;  /*FOL2*/
  double VNSUBO;
  unsigned VNSUBO_Given  :1;  /*VNSUBO*/
  double NSLPO;
  unsigned NSLPO_Given  :1;  /*NSLPO*/
  double DNSUBO;
  unsigned DNSUBO_Given  :1;  /*DNSUBO*/
  double DPHIBO;
  unsigned DPHIBO_Given  :1;  /*DPHIBO*/
  double DPHIBL;
  unsigned DPHIBL_Given  :1;  /*DPHIBL*/
  double DPHIBLEXP;
  unsigned DPHIBLEXP_Given  :1;  /*DPHIBLEXP*/
  double DPHIBW;
  unsigned DPHIBW_Given  :1;  /*DPHIBW*/
  double DPHIBLW;
  unsigned DPHIBLW_Given  :1;  /*DPHIBLW*/
  double NPO;
  unsigned NPO_Given  :1;  /*NPO*/
  double NPL;
  unsigned NPL_Given  :1;  /*NPL*/
  double CTO;
  unsigned CTO_Given  :1;  /*CTO*/
  double CTL;
  unsigned CTL_Given  :1;  /*CTL*/
  double CTLEXP;
  unsigned CTLEXP_Given  :1;  /*CTLEXP*/
  double CTW;
  unsigned CTW_Given  :1;  /*CTW*/
  double CTLW;
  unsigned CTLW_Given  :1;  /*CTLW*/
  double TOXOVO;
  unsigned TOXOVO_Given  :1;  /*TOXOVO*/
  double LOV;
  unsigned LOV_Given  :1;  /*LOV*/
  double NOVO;
  unsigned NOVO_Given  :1;  /*NOVO*/
  double CFL;
  unsigned CFL_Given  :1;  /*CFL*/
  double CFLEXP;
  unsigned CFLEXP_Given  :1;  /*CFLEXP*/
  double CFW;
  unsigned CFW_Given  :1;  /*CFW*/
  double CFBO;
  unsigned CFBO_Given  :1;  /*CFBO*/
  double UO;
  unsigned UO_Given  :1;  /*UO*/
  double FBET1;
  unsigned FBET1_Given  :1;  /*FBET1*/
  double FBET1W;
  unsigned FBET1W_Given  :1;  /*FBET1W*/
  double LP1;
  unsigned LP1_Given  :1;  /*LP1*/
  double LP1W;
  unsigned LP1W_Given  :1;  /*LP1W*/
  double FBET2;
  unsigned FBET2_Given  :1;  /*FBET2*/
  double LP2;
  unsigned LP2_Given  :1;  /*LP2*/
  double BETW1;
  unsigned BETW1_Given  :1;  /*BETW1*/
  double BETW2;
  unsigned BETW2_Given  :1;  /*BETW2*/
  double WBET;
  unsigned WBET_Given  :1;  /*WBET*/
  double STBETO;
  unsigned STBETO_Given  :1;  /*STBETO*/
  double STBETL;
  unsigned STBETL_Given  :1;  /*STBETL*/
  double STBETW;
  unsigned STBETW_Given  :1;  /*STBETW*/
  double STBETLW;
  unsigned STBETLW_Given  :1;  /*STBETLW*/
  double MUEO;
  unsigned MUEO_Given  :1;  /*MUEO*/
  double MUEW;
  unsigned MUEW_Given  :1;  /*MUEW*/
  double STMUEO;
  unsigned STMUEO_Given  :1;  /*STMUEO*/
  double THEMUO;
  unsigned THEMUO_Given  :1;  /*THEMUO*/
  double STTHEMUO;
  unsigned STTHEMUO_Given  :1;  /*STTHEMUO*/
  double CSO;
  unsigned CSO_Given  :1;  /*CSO*/
  double CSL;
  unsigned CSL_Given  :1;  /*CSL*/
  double CSLEXP;
  unsigned CSLEXP_Given  :1;  /*CSLEXP*/
  double CSW;
  unsigned CSW_Given  :1;  /*CSW*/
  double CSLW;
  unsigned CSLW_Given  :1;  /*CSLW*/
  double STCSO;
  unsigned STCSO_Given  :1;  /*STCSO*/
  double XCORO;
  unsigned XCORO_Given  :1;  /*XCORO*/
  double XCORL;
  unsigned XCORL_Given  :1;  /*XCORL*/
  double XCORW;
  unsigned XCORW_Given  :1;  /*XCORW*/
  double XCORLW;
  unsigned XCORLW_Given  :1;  /*XCORLW*/
  double STXCORO;
  unsigned STXCORO_Given  :1;  /*STXCORO*/
  double FETAO;
  unsigned FETAO_Given  :1;  /*FETAO*/
  double RSW1;
  unsigned RSW1_Given  :1;  /*RSW1*/
  double RSW2;
  unsigned RSW2_Given  :1;  /*RSW2*/
  double STRSO;
  unsigned STRSO_Given  :1;  /*STRSO*/
  double RSBO;
  unsigned RSBO_Given  :1;  /*RSBO*/
  double RSGO;
  unsigned RSGO_Given  :1;  /*RSGO*/
  double THESATO;
  unsigned THESATO_Given  :1;  /*THESATO*/
  double THESATL;
  unsigned THESATL_Given  :1;  /*THESATL*/
  double THESATLEXP;
  unsigned THESATLEXP_Given  :1;  /*THESATLEXP*/
  double THESATW;
  unsigned THESATW_Given  :1;  /*THESATW*/
  double THESATLW;
  unsigned THESATLW_Given  :1;  /*THESATLW*/
  double STTHESATO;
  unsigned STTHESATO_Given  :1;  /*STTHESATO*/
  double STTHESATL;
  unsigned STTHESATL_Given  :1;  /*STTHESATL*/
  double STTHESATW;
  unsigned STTHESATW_Given  :1;  /*STTHESATW*/
  double STTHESATLW;
  unsigned STTHESATLW_Given  :1;  /*STTHESATLW*/
  double THESATBO;
  unsigned THESATBO_Given  :1;  /*THESATBO*/
  double THESATGO;
  unsigned THESATGO_Given  :1;  /*THESATGO*/
  double AXO;
  unsigned AXO_Given  :1;  /*AXO*/
  double AXL;
  unsigned AXL_Given  :1;  /*AXL*/
  double ALPL;
  unsigned ALPL_Given  :1;  /*ALPL*/
  double ALPLEXP;
  unsigned ALPLEXP_Given  :1;  /*ALPLEXP*/
  double ALPW;
  unsigned ALPW_Given  :1;  /*ALPW*/
  double ALP1L1;
  unsigned ALP1L1_Given  :1;  /*ALP1L1*/
  double ALP1LEXP;
  unsigned ALP1LEXP_Given  :1;  /*ALP1LEXP*/
  double ALP1L2;
  unsigned ALP1L2_Given  :1;  /*ALP1L2*/
  double ALP1W;
  unsigned ALP1W_Given  :1;  /*ALP1W*/
  double ALP2L1;
  unsigned ALP2L1_Given  :1;  /*ALP2L1*/
  double ALP2LEXP;
  unsigned ALP2LEXP_Given  :1;  /*ALP2LEXP*/
  double ALP2L2;
  unsigned ALP2L2_Given  :1;  /*ALP2L2*/
  double ALP2W;
  unsigned ALP2W_Given  :1;  /*ALP2W*/
  double VPO;
  unsigned VPO_Given  :1;  /*VPO*/
  double A1O;
  unsigned A1O_Given  :1;  /*A1O*/
  double A1L;
  unsigned A1L_Given  :1;  /*A1L*/
  double A1W;
  unsigned A1W_Given  :1;  /*A1W*/
  double A2O;
  unsigned A2O_Given  :1;  /*A2O*/
  double STA2O;
  unsigned STA2O_Given  :1;  /*STA2O*/
  double A3O;
  unsigned A3O_Given  :1;  /*A3O*/
  double A3L;
  unsigned A3L_Given  :1;  /*A3L*/
  double A3W;
  unsigned A3W_Given  :1;  /*A3W*/
  double A4O;
  unsigned A4O_Given  :1;  /*A4O*/
  double A4L;
  unsigned A4L_Given  :1;  /*A4L*/
  double A4W;
  unsigned A4W_Given  :1;  /*A4W*/
  double GCOO;
  unsigned GCOO_Given  :1;  /*GCOO*/
  double IGINVLW;
  unsigned IGINVLW_Given  :1;  /*IGINVLW*/
  double IGOVW;
  unsigned IGOVW_Given  :1;  /*IGOVW*/
  double STIGO;
  unsigned STIGO_Given  :1;  /*STIGO*/
  double GC2O;
  unsigned GC2O_Given  :1;  /*GC2O*/
  double GC3O;
  unsigned GC3O_Given  :1;  /*GC3O*/
  double CHIBO;
  unsigned CHIBO_Given  :1;  /*CHIBO*/
  double AGIDLW;
  unsigned AGIDLW_Given  :1;  /*AGIDLW*/
  double BGIDLO;
  unsigned BGIDLO_Given  :1;  /*BGIDLO*/
  double STBGIDLO;
  unsigned STBGIDLO_Given  :1;  /*STBGIDLO*/
  double CGIDLO;
  unsigned CGIDLO_Given  :1;  /*CGIDLO*/
  double CGBOVL;
  unsigned CGBOVL_Given  :1;  /*CGBOVL*/
  double CFRW;
  unsigned CFRW_Given  :1;  /*CFRW*/
  double FNTO;
  unsigned FNTO_Given  :1;  /*FNTO*/
  double NFALW;
  unsigned NFALW_Given  :1;  /*NFALW*/
  double NFBLW;
  unsigned NFBLW_Given  :1;  /*NFBLW*/
  double NFCLW;
  unsigned NFCLW_Given  :1;  /*NFCLW*/
  double DTA;
  unsigned DTA_Given  :1;  /*DTA*/
  double SAREF;
  unsigned SAREF_Given  :1;  /*SAREF*/
  double SBREF;
  unsigned SBREF_Given  :1;  /*SBREF*/
  double WLOD;
  unsigned WLOD_Given  :1;  /*WLOD*/
  double KUO;
  unsigned KUO_Given  :1;  /*KUO*/
  double KVSAT;
  unsigned KVSAT_Given  :1;  /*KVSAT*/
  double TKUO;
  unsigned TKUO_Given  :1;  /*TKUO*/
  double LKUO;
  unsigned LKUO_Given  :1;  /*LKUO*/
  double WKUO;
  unsigned WKUO_Given  :1;  /*WKUO*/
  double PKUO;
  unsigned PKUO_Given  :1;  /*PKUO*/
  double LLODKUO;
  unsigned LLODKUO_Given  :1;  /*LLODKUO*/
  double WLODKUO;
  unsigned WLODKUO_Given  :1;  /*WLODKUO*/
  double KVTHO;
  unsigned KVTHO_Given  :1;  /*KVTHO*/
  double LKVTHO;
  unsigned LKVTHO_Given  :1;  /*LKVTHO*/
  double WKVTHO;
  unsigned WKVTHO_Given  :1;  /*WKVTHO*/
  double PKVTHO;
  unsigned PKVTHO_Given  :1;  /*PKVTHO*/
  double LLODVTH;
  unsigned LLODVTH_Given  :1;  /*LLODVTH*/
  double WLODVTH;
  unsigned WLODVTH_Given  :1;  /*WLODVTH*/
  double STETAO;
  unsigned STETAO_Given  :1;  /*STETAO*/
  double LODETAO;
  unsigned LODETAO_Given  :1;  /*LODETAO*/
  double TRJ;
  unsigned TRJ_Given  :1;  /*TRJ*/
  double IMAX;
  unsigned IMAX_Given  :1;  /*IMAX*/
  double CJORBOT;
  unsigned CJORBOT_Given  :1;  /*CJORBOT*/
  double CJORSTI;
  unsigned CJORSTI_Given  :1;  /*CJORSTI*/
  double CJORGAT;
  unsigned CJORGAT_Given  :1;  /*CJORGAT*/
  double VBIRBOT;
  unsigned VBIRBOT_Given  :1;  /*VBIRBOT*/
  double VBIRSTI;
  unsigned VBIRSTI_Given  :1;  /*VBIRSTI*/
  double VBIRGAT;
  unsigned VBIRGAT_Given  :1;  /*VBIRGAT*/
  double PBOT;
  unsigned PBOT_Given  :1;  /*PBOT*/
  double PSTI;
  unsigned PSTI_Given  :1;  /*PSTI*/
  double PGAT;
  unsigned PGAT_Given  :1;  /*PGAT*/
  double PHIGBOT;
  unsigned PHIGBOT_Given  :1;  /*PHIGBOT*/
  double PHIGSTI;
  unsigned PHIGSTI_Given  :1;  /*PHIGSTI*/
  double PHIGGAT;
  unsigned PHIGGAT_Given  :1;  /*PHIGGAT*/
  double IDSATRBOT;
  unsigned IDSATRBOT_Given  :1;  /*IDSATRBOT*/
  double IDSATRSTI;
  unsigned IDSATRSTI_Given  :1;  /*IDSATRSTI*/
  double IDSATRGAT;
  unsigned IDSATRGAT_Given  :1;  /*IDSATRGAT*/
  double CSRHBOT;
  unsigned CSRHBOT_Given  :1;  /*CSRHBOT*/
  double CSRHSTI;
  unsigned CSRHSTI_Given  :1;  /*CSRHSTI*/
  double CSRHGAT;
  unsigned CSRHGAT_Given  :1;  /*CSRHGAT*/
  double XJUNSTI;
  unsigned XJUNSTI_Given  :1;  /*XJUNSTI*/
  double XJUNGAT;
  unsigned XJUNGAT_Given  :1;  /*XJUNGAT*/
  double CTATBOT;
  unsigned CTATBOT_Given  :1;  /*CTATBOT*/
  double CTATSTI;
  unsigned CTATSTI_Given  :1;  /*CTATSTI*/
  double CTATGAT;
  unsigned CTATGAT_Given  :1;  /*CTATGAT*/
  double MEFFTATBOT;
  unsigned MEFFTATBOT_Given  :1;  /*MEFFTATBOT*/
  double MEFFTATSTI;
  unsigned MEFFTATSTI_Given  :1;  /*MEFFTATSTI*/
  double MEFFTATGAT;
  unsigned MEFFTATGAT_Given  :1;  /*MEFFTATGAT*/
  double CBBTBOT;
  unsigned CBBTBOT_Given  :1;  /*CBBTBOT*/
  double CBBTSTI;
  unsigned CBBTSTI_Given  :1;  /*CBBTSTI*/
  double CBBTGAT;
  unsigned CBBTGAT_Given  :1;  /*CBBTGAT*/
  double FBBTRBOT;
  unsigned FBBTRBOT_Given  :1;  /*FBBTRBOT*/
  double FBBTRSTI;
  unsigned FBBTRSTI_Given  :1;  /*FBBTRSTI*/
  double FBBTRGAT;
  unsigned FBBTRGAT_Given  :1;  /*FBBTRGAT*/
  double STFBBTBOT;
  unsigned STFBBTBOT_Given  :1;  /*STFBBTBOT*/
  double STFBBTSTI;
  unsigned STFBBTSTI_Given  :1;  /*STFBBTSTI*/
  double STFBBTGAT;
  unsigned STFBBTGAT_Given  :1;  /*STFBBTGAT*/
  double VBRBOT;
  unsigned VBRBOT_Given  :1;  /*VBRBOT*/
  double VBRSTI;
  unsigned VBRSTI_Given  :1;  /*VBRSTI*/
  double VBRGAT;
  unsigned VBRGAT_Given  :1;  /*VBRGAT*/
  double PBRBOT;
  unsigned PBRBOT_Given  :1;  /*PBRBOT*/
  double PBRSTI;
  unsigned PBRSTI_Given  :1;  /*PBRSTI*/
  double PBRGAT;
  unsigned PBRGAT_Given  :1;  /*PBRGAT*/

  /* variable */  double NSUBO_i;
  double WSEG_i;
  double NPCK_i;
  double WSEGP_i;
  double LPCK_i;
  double LOV_i;
  double LP1_i;
  double LP2_i;
  double WBET_i;
  double AXL_i;
  double ALP1L2_i;
  double ALP2L2_i;
  double KVSAT_i;
  double LLODKUO_i;
  double WLODKUO_i;
  double LLODVTH_i;
  double WLODVTH_i;
  double LODETAO_i;
  double TOX_i;
  double TOXOV_i;
  double TKD;
  double dT;
  double rT;
  double rTn;
  double phit;
  double inv_phit;
  double Eg;
  double phibFac;
  int CHNL_TYPE;
  double IMAX_i;
  double VBIRBOT_i;
  double VBIRSTI_i;
  double VBIRGAT_i;
  double PBOT_i;
  double PSTI_i;
  double PGAT_i;
  double CSRHBOT_i;
  double CSRHSTI_i;
  double CSRHGAT_i;
  double CTATBOT_i;
  double CTATSTI_i;
  double CTATGAT_i;
  double CBBTBOT_i;
  double CBBTSTI_i;
  double CBBTGAT_i;
  double VBRBOT_i;
  double VBRSTI_i;
  double VBRGAT_i;
  double PBRBOT_i;
  double PBRSTI_i;
  double PBRGAT_i;
  double phitr;
  double phitd;
  double phitdinv;
  double ftdbot;
  double ftdsti;
  double ftdgat;
  double idsatbot;
  double idsatsti;
  double idsatgat;
  double vbibot;
  double vbisti;
  double vbigat;
  double vbiinvbot;
  double vbiinvsti;
  double vbiinvgat;
  double one_minus_PBOT;
  double one_minus_PSTI;
  double one_minus_PGAT;
  double one_over_one_minus_PBOT;
  double one_over_one_minus_PSTI;
  double one_over_one_minus_PGAT;
  double qprefbot;
  double qprefsti;
  double qprefgat;
  double qpref2bot;
  double qpref2sti;
  double qpref2gat;
  double wdepnulrbot;
  double wdepnulrsti;
  double wdepnulrgat;
  double wdepnulrinvbot;
  double wdepnulrinvsti;
  double wdepnulrinvgat;
  double VBIRBOTinv;
  double VBIRSTIinv;
  double VBIRGATinv;
  double perfc;
  double berfc;
  double cerfc;
  double atatbot;
  double atatsti;
  double atatgat;
  double btatpartbot;
  double btatpartsti;
  double btatpartgat;
  double fbbtbot;
  double fbbtsti;
  double fbbtgat;
  double fstopbot;
  double fstopsti;
  double fstopgat;
  double VBRinvbot;
  double VBRinvsti;
  double VBRinvgat;
  double slopebot;
  double slopesti;
  double slopegat;


} psp102model;
  /* flags */
typedef enum {
  psp102_model_pmos,
  psp102_model_nmos,
  psp102_model_LEVEL,
  psp102_model_TYPE,
  psp102_model_TR,
  psp102_model_SWIGATE,
  psp102_model_SWIMPACT,
  psp102_model_SWGIDL,
  psp102_model_SWJUNCAP,
  psp102_model_QMC,
  psp102_model_LVARO,
  psp102_model_LVARL,
  psp102_model_LVARW,
  psp102_model_LAP,
  psp102_model_WVARO,
  psp102_model_WVARL,
  psp102_model_WVARW,
  psp102_model_WOT,
  psp102_model_DLQ,
  psp102_model_DWQ,
  psp102_model_VFBO,
  psp102_model_VFBL,
  psp102_model_VFBW,
  psp102_model_VFBLW,
  psp102_model_STVFBO,
  psp102_model_STVFBL,
  psp102_model_STVFBW,
  psp102_model_STVFBLW,
  psp102_model_TOXO,
  psp102_model_NSUBO,
  psp102_model_NSUBW,
  psp102_model_WSEG,
  psp102_model_NPCK,
  psp102_model_NPCKW,
  psp102_model_WSEGP,
  psp102_model_LPCK,
  psp102_model_LPCKW,
  psp102_model_FOL1,
  psp102_model_FOL2,
  psp102_model_VNSUBO,
  psp102_model_NSLPO,
  psp102_model_DNSUBO,
  psp102_model_DPHIBO,
  psp102_model_DPHIBL,
  psp102_model_DPHIBLEXP,
  psp102_model_DPHIBW,
  psp102_model_DPHIBLW,
  psp102_model_NPO,
  psp102_model_NPL,
  psp102_model_CTO,
  psp102_model_CTL,
  psp102_model_CTLEXP,
  psp102_model_CTW,
  psp102_model_CTLW,
  psp102_model_TOXOVO,
  psp102_model_LOV,
  psp102_model_NOVO,
  psp102_model_CFL,
  psp102_model_CFLEXP,
  psp102_model_CFW,
  psp102_model_CFBO,
  psp102_model_UO,
  psp102_model_FBET1,
  psp102_model_FBET1W,
  psp102_model_LP1,
  psp102_model_LP1W,
  psp102_model_FBET2,
  psp102_model_LP2,
  psp102_model_BETW1,
  psp102_model_BETW2,
  psp102_model_WBET,
  psp102_model_STBETO,
  psp102_model_STBETL,
  psp102_model_STBETW,
  psp102_model_STBETLW,
  psp102_model_MUEO,
  psp102_model_MUEW,
  psp102_model_STMUEO,
  psp102_model_THEMUO,
  psp102_model_STTHEMUO,
  psp102_model_CSO,
  psp102_model_CSL,
  psp102_model_CSLEXP,
  psp102_model_CSW,
  psp102_model_CSLW,
  psp102_model_STCSO,
  psp102_model_XCORO,
  psp102_model_XCORL,
  psp102_model_XCORW,
  psp102_model_XCORLW,
  psp102_model_STXCORO,
  psp102_model_FETAO,
  psp102_model_RSW1,
  psp102_model_RSW2,
  psp102_model_STRSO,
  psp102_model_RSBO,
  psp102_model_RSGO,
  psp102_model_THESATO,
  psp102_model_THESATL,
  psp102_model_THESATLEXP,
  psp102_model_THESATW,
  psp102_model_THESATLW,
  psp102_model_STTHESATO,
  psp102_model_STTHESATL,
  psp102_model_STTHESATW,
  psp102_model_STTHESATLW,
  psp102_model_THESATBO,
  psp102_model_THESATGO,
  psp102_model_AXO,
  psp102_model_AXL,
  psp102_model_ALPL,
  psp102_model_ALPLEXP,
  psp102_model_ALPW,
  psp102_model_ALP1L1,
  psp102_model_ALP1LEXP,
  psp102_model_ALP1L2,
  psp102_model_ALP1W,
  psp102_model_ALP2L1,
  psp102_model_ALP2LEXP,
  psp102_model_ALP2L2,
  psp102_model_ALP2W,
  psp102_model_VPO,
  psp102_model_A1O,
  psp102_model_A1L,
  psp102_model_A1W,
  psp102_model_A2O,
  psp102_model_STA2O,
  psp102_model_A3O,
  psp102_model_A3L,
  psp102_model_A3W,
  psp102_model_A4O,
  psp102_model_A4L,
  psp102_model_A4W,
  psp102_model_GCOO,
  psp102_model_IGINVLW,
  psp102_model_IGOVW,
  psp102_model_STIGO,
  psp102_model_GC2O,
  psp102_model_GC3O,
  psp102_model_CHIBO,
  psp102_model_AGIDLW,
  psp102_model_BGIDLO,
  psp102_model_STBGIDLO,
  psp102_model_CGIDLO,
  psp102_model_CGBOVL,
  psp102_model_CFRW,
  psp102_model_FNTO,
  psp102_model_NFALW,
  psp102_model_NFBLW,
  psp102_model_NFCLW,
  psp102_model_DTA,
  psp102_model_SAREF,
  psp102_model_SBREF,
  psp102_model_WLOD,
  psp102_model_KUO,
  psp102_model_KVSAT,
  psp102_model_TKUO,
  psp102_model_LKUO,
  psp102_model_WKUO,
  psp102_model_PKUO,
  psp102_model_LLODKUO,
  psp102_model_WLODKUO,
  psp102_model_KVTHO,
  psp102_model_LKVTHO,
  psp102_model_WKVTHO,
  psp102_model_PKVTHO,
  psp102_model_LLODVTH,
  psp102_model_WLODVTH,
  psp102_model_STETAO,
  psp102_model_LODETAO,
  psp102_model_TRJ,
  psp102_model_IMAX,
  psp102_model_CJORBOT,
  psp102_model_CJORSTI,
  psp102_model_CJORGAT,
  psp102_model_VBIRBOT,
  psp102_model_VBIRSTI,
  psp102_model_VBIRGAT,
  psp102_model_PBOT,
  psp102_model_PSTI,
  psp102_model_PGAT,
  psp102_model_PHIGBOT,
  psp102_model_PHIGSTI,
  psp102_model_PHIGGAT,
  psp102_model_IDSATRBOT,
  psp102_model_IDSATRSTI,
  psp102_model_IDSATRGAT,
  psp102_model_CSRHBOT,
  psp102_model_CSRHSTI,
  psp102_model_CSRHGAT,
  psp102_model_XJUNSTI,
  psp102_model_XJUNGAT,
  psp102_model_CTATBOT,
  psp102_model_CTATSTI,
  psp102_model_CTATGAT,
  psp102_model_MEFFTATBOT,
  psp102_model_MEFFTATSTI,
  psp102_model_MEFFTATGAT,
  psp102_model_CBBTBOT,
  psp102_model_CBBTSTI,
  psp102_model_CBBTGAT,
  psp102_model_FBBTRBOT,
  psp102_model_FBBTRSTI,
  psp102_model_FBBTRGAT,
  psp102_model_STFBBTBOT,
  psp102_model_STFBBTSTI,
  psp102_model_STFBBTGAT,
  psp102_model_VBRBOT,
  psp102_model_VBRSTI,
  psp102_model_VBRGAT,
  psp102_model_PBRBOT,
  psp102_model_PBRSTI,
  psp102_model_PBRGAT,
  DUMMY_MODEL
} e_psp102_model;
typedef enum {
  psp102_instance_L,
  psp102_instance_W,
  psp102_instance_SA,
  psp102_instance_SB,
  psp102_instance_ABSOURCE,
  psp102_instance_LSSOURCE,
  psp102_instance_LGSOURCE,
  psp102_instance_ABDRAIN,
  psp102_instance_LSDRAIN,
  psp102_instance_LGDRAIN,
  psp102_instance_AS,
  psp102_instance_PS,
  psp102_instance_AD,
  psp102_instance_PD,
  psp102_instance_MULT,
  DUMMY_INSTANCE
} e_psp102_instance;


#include "psp102ext.h"

#endif /*psp102*/
