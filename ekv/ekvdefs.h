/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Wed, 24 Mar 2010 00:50:59 ***/


#ifndef ekv
#define ekv

#include "cktdefs.h"
#include "ifsim.h"
#include "gendefs.h"
#include "complex.h"
#include "noisedef.h"

#ifdef nmos
  #warning conflict: nmos is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'nmos' is also defined as a pragma.
  #warning conflict: Pragma 'nmos' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'nmos' in module 'ekv'.
  #undef nmos
#endif
#ifdef pmos
  #warning conflict: pmos is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'pmos' is also defined as a pragma.
  #warning conflict: Pragma 'pmos' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'pmos' in module 'ekv'.
  #undef pmos
#endif
#ifdef MTYPE
  #warning conflict: MTYPE is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'MTYPE' is also defined as a pragma.
  #warning conflict: Pragma 'MTYPE' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MTYPE' in module 'ekv'.
  #undef MTYPE
#endif
#ifdef TNOM
  #warning conflict: TNOM is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'TNOM' is also defined as a pragma.
  #warning conflict: Pragma 'TNOM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TNOM' in module 'ekv'.
  #undef TNOM
#endif
#ifdef IMAX
  #warning conflict: IMAX is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'IMAX' is also defined as a pragma.
  #warning conflict: Pragma 'IMAX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IMAX' in module 'ekv'.
  #undef IMAX
#endif
#ifdef TOX
  #warning conflict: TOX is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'TOX' is also defined as a pragma.
  #warning conflict: Pragma 'TOX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TOX' in module 'ekv'.
  #undef TOX
#endif
#ifdef NSUB
  #warning conflict: NSUB is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'NSUB' is also defined as a pragma.
  #warning conflict: Pragma 'NSUB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NSUB' in module 'ekv'.
  #undef NSUB
#endif
#ifdef VFB
  #warning conflict: VFB is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'VFB' is also defined as a pragma.
  #warning conflict: Pragma 'VFB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VFB' in module 'ekv'.
  #undef VFB
#endif
#ifdef UO
  #warning conflict: UO is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'UO' is also defined as a pragma.
  #warning conflict: Pragma 'UO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'UO' in module 'ekv'.
  #undef UO
#endif
#ifdef VMAX
  #warning conflict: VMAX is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'VMAX' is also defined as a pragma.
  #warning conflict: Pragma 'VMAX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VMAX' in module 'ekv'.
  #undef VMAX
#endif
#ifdef THETA
  #warning conflict: THETA is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'THETA' is also defined as a pragma.
  #warning conflict: Pragma 'THETA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'THETA' in module 'ekv'.
  #undef THETA
#endif
#ifdef COX
  #warning conflict: COX is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'COX' is also defined as a pragma.
  #warning conflict: Pragma 'COX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'COX' in module 'ekv'.
  #undef COX
#endif
#ifdef XJ
  #warning conflict: XJ is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'XJ' is also defined as a pragma.
  #warning conflict: Pragma 'XJ' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XJ' in module 'ekv'.
  #undef XJ
#endif
#ifdef DL
  #warning conflict: DL is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'DL' is also defined as a pragma.
  #warning conflict: Pragma 'DL' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DL' in module 'ekv'.
  #undef DL
#endif
#ifdef DW
  #warning conflict: DW is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'DW' is also defined as a pragma.
  #warning conflict: Pragma 'DW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'DW' in module 'ekv'.
  #undef DW
#endif
#ifdef GAMMA
  #warning conflict: GAMMA is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'GAMMA' is also defined as a pragma.
  #warning conflict: Pragma 'GAMMA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GAMMA' in module 'ekv'.
  #undef GAMMA
#endif
#ifdef PHI
  #warning conflict: PHI is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'PHI' is also defined as a pragma.
  #warning conflict: Pragma 'PHI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PHI' in module 'ekv'.
  #undef PHI
#endif
#ifdef VTO
  #warning conflict: VTO is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'VTO' is also defined as a pragma.
  #warning conflict: Pragma 'VTO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'VTO' in module 'ekv'.
  #undef VTO
#endif
#ifdef KP
  #warning conflict: KP is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'KP' is also defined as a pragma.
  #warning conflict: Pragma 'KP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KP' in module 'ekv'.
  #undef KP
#endif
#ifdef UCRIT
  #warning conflict: UCRIT is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'UCRIT' is also defined as a pragma.
  #warning conflict: Pragma 'UCRIT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'UCRIT' in module 'ekv'.
  #undef UCRIT
#endif
#ifdef E0
  #warning conflict: E0 is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'E0' is also defined as a pragma.
  #warning conflict: Pragma 'E0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'E0' in module 'ekv'.
  #undef E0
#endif
#ifdef LAMBDA
  #warning conflict: LAMBDA is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'LAMBDA' is also defined as a pragma.
  #warning conflict: Pragma 'LAMBDA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LAMBDA' in module 'ekv'.
  #undef LAMBDA
#endif
#ifdef WETA
  #warning conflict: WETA is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'WETA' is also defined as a pragma.
  #warning conflict: Pragma 'WETA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'WETA' in module 'ekv'.
  #undef WETA
#endif
#ifdef LETA
  #warning conflict: LETA is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'LETA' is also defined as a pragma.
  #warning conflict: Pragma 'LETA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LETA' in module 'ekv'.
  #undef LETA
#endif
#ifdef Q0
  #warning conflict: Q0 is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'Q0' is also defined as a pragma.
  #warning conflict: Pragma 'Q0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'Q0' in module 'ekv'.
  #undef Q0
#endif
#ifdef LK
  #warning conflict: LK is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'LK' is also defined as a pragma.
  #warning conflict: Pragma 'LK' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'LK' in module 'ekv'.
  #undef LK
#endif
#ifdef IBA
  #warning conflict: IBA is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'IBA' is also defined as a pragma.
  #warning conflict: Pragma 'IBA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IBA' in module 'ekv'.
  #undef IBA
#endif
#ifdef IBB
  #warning conflict: IBB is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'IBB' is also defined as a pragma.
  #warning conflict: Pragma 'IBB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IBB' in module 'ekv'.
  #undef IBB
#endif
#ifdef IBN
  #warning conflict: IBN is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'IBN' is also defined as a pragma.
  #warning conflict: Pragma 'IBN' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IBN' in module 'ekv'.
  #undef IBN
#endif
#ifdef TCV
  #warning conflict: TCV is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'TCV' is also defined as a pragma.
  #warning conflict: Pragma 'TCV' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'TCV' in module 'ekv'.
  #undef TCV
#endif
#ifdef BEX
  #warning conflict: BEX is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'BEX' is also defined as a pragma.
  #warning conflict: Pragma 'BEX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'BEX' in module 'ekv'.
  #undef BEX
#endif
#ifdef UCEX
  #warning conflict: UCEX is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'UCEX' is also defined as a pragma.
  #warning conflict: Pragma 'UCEX' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'UCEX' in module 'ekv'.
  #undef UCEX
#endif
#ifdef IBBT
  #warning conflict: IBBT is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'IBBT' is also defined as a pragma.
  #warning conflict: Pragma 'IBBT' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'IBBT' in module 'ekv'.
  #undef IBBT
#endif
#ifdef AVTO
  #warning conflict: AVTO is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'AVTO' is also defined as a pragma.
  #warning conflict: Pragma 'AVTO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AVTO' in module 'ekv'.
  #undef AVTO
#endif
#ifdef AKP
  #warning conflict: AKP is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'AKP' is also defined as a pragma.
  #warning conflict: Pragma 'AKP' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AKP' in module 'ekv'.
  #undef AKP
#endif
#ifdef AGAMMA
  #warning conflict: AGAMMA is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'AGAMMA' is also defined as a pragma.
  #warning conflict: Pragma 'AGAMMA' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AGAMMA' in module 'ekv'.
  #undef AGAMMA
#endif
#ifdef KF
  #warning conflict: KF is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'KF' is also defined as a pragma.
  #warning conflict: Pragma 'KF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'KF' in module 'ekv'.
  #undef KF
#endif
#ifdef AF
  #warning conflict: AF is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'AF' is also defined as a pragma.
  #warning conflict: Pragma 'AF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AF' in module 'ekv'.
  #undef AF
#endif
#ifdef NQS
  #warning conflict: NQS is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'NQS' is also defined as a pragma.
  #warning conflict: Pragma 'NQS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NQS' in module 'ekv'.
  #undef NQS
#endif
#ifdef SATLIM
  #warning conflict: SATLIM is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'SATLIM' is also defined as a pragma.
  #warning conflict: Pragma 'SATLIM' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'SATLIM' in module 'ekv'.
  #undef SATLIM
#endif
#ifdef XQC
  #warning conflict: XQC is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'XQC' is also defined as a pragma.
  #warning conflict: Pragma 'XQC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XQC' in module 'ekv'.
  #undef XQC
#endif
#ifdef HDIF
  #warning conflict: HDIF is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'HDIF' is also defined as a pragma.
  #warning conflict: Pragma 'HDIF' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'HDIF' in module 'ekv'.
  #undef HDIF
#endif
#ifdef RSH
  #warning conflict: RSH is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'RSH' is also defined as a pragma.
  #warning conflict: Pragma 'RSH' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RSH' in module 'ekv'.
  #undef RSH
#endif
#ifdef JS
  #warning conflict: JS is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'JS' is also defined as a pragma.
  #warning conflict: Pragma 'JS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'JS' in module 'ekv'.
  #undef JS
#endif
#ifdef JSW
  #warning conflict: JSW is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'JSW' is also defined as a pragma.
  #warning conflict: Pragma 'JSW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'JSW' in module 'ekv'.
  #undef JSW
#endif
#ifdef XTI
  #warning conflict: XTI is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'XTI' is also defined as a pragma.
  #warning conflict: Pragma 'XTI' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'XTI' in module 'ekv'.
  #undef XTI
#endif
#ifdef N
  #warning conflict: N is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'N' is also defined as a pragma.
  #warning conflict: Pragma 'N' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'N' in module 'ekv'.
  #undef N
#endif
#ifdef CJ
  #warning conflict: CJ is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'CJ' is also defined as a pragma.
  #warning conflict: Pragma 'CJ' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJ' in module 'ekv'.
  #undef CJ
#endif
#ifdef CJSW
  #warning conflict: CJSW is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'CJSW' is also defined as a pragma.
  #warning conflict: Pragma 'CJSW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CJSW' in module 'ekv'.
  #undef CJSW
#endif
#ifdef PB
  #warning conflict: PB is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'PB' is also defined as a pragma.
  #warning conflict: Pragma 'PB' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PB' in module 'ekv'.
  #undef PB
#endif
#ifdef PBSW
  #warning conflict: PBSW is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'PBSW' is also defined as a pragma.
  #warning conflict: Pragma 'PBSW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PBSW' in module 'ekv'.
  #undef PBSW
#endif
#ifdef MJ
  #warning conflict: MJ is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'MJ' is also defined as a pragma.
  #warning conflict: Pragma 'MJ' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MJ' in module 'ekv'.
  #undef MJ
#endif
#ifdef MJSW
  #warning conflict: MJSW is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'MJSW' is also defined as a pragma.
  #warning conflict: Pragma 'MJSW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'MJSW' in module 'ekv'.
  #undef MJSW
#endif
#ifdef FC
  #warning conflict: FC is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'FC' is also defined as a pragma.
  #warning conflict: Pragma 'FC' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FC' in module 'ekv'.
  #undef FC
#endif
#ifdef FCSW
  #warning conflict: FCSW is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'FCSW' is also defined as a pragma.
  #warning conflict: Pragma 'FCSW' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'FCSW' in module 'ekv'.
  #undef FCSW
#endif
#ifdef CGSO
  #warning conflict: CGSO is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'CGSO' is also defined as a pragma.
  #warning conflict: Pragma 'CGSO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGSO' in module 'ekv'.
  #undef CGSO
#endif
#ifdef CGDO
  #warning conflict: CGDO is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'CGDO' is also defined as a pragma.
  #warning conflict: Pragma 'CGDO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGDO' in module 'ekv'.
  #undef CGDO
#endif
#ifdef CGBO
  #warning conflict: CGBO is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'CGBO' is also defined as a pragma.
  #warning conflict: Pragma 'CGBO' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'CGBO' in module 'ekv'.
  #undef CGBO
#endif
#ifdef L
  #warning conflict: L is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'L' is also defined as a pragma.
  #warning conflict: Pragma 'L' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'L' in module 'ekv'.
  #undef L
#endif
#ifdef W
  #warning conflict: W is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'W' is also defined as a pragma.
  #warning conflict: Pragma 'W' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'W' in module 'ekv'.
  #undef W
#endif
#ifdef M
  #warning conflict: M is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'M' is also defined as a pragma.
  #warning conflict: Pragma 'M' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'M' in module 'ekv'.
  #undef M
#endif
#ifdef AD
  #warning conflict: AD is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'AD' is also defined as a pragma.
  #warning conflict: Pragma 'AD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AD' in module 'ekv'.
  #undef AD
#endif
#ifdef AS
  #warning conflict: AS is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'AS' is also defined as a pragma.
  #warning conflict: Pragma 'AS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'AS' in module 'ekv'.
  #undef AS
#endif
#ifdef PD
  #warning conflict: PD is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'PD' is also defined as a pragma.
  #warning conflict: Pragma 'PD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PD' in module 'ekv'.
  #undef PD
#endif
#ifdef PS
  #warning conflict: PS is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'PS' is also defined as a pragma.
  #warning conflict: Pragma 'PS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'PS' in module 'ekv'.
  #undef PS
#endif
#ifdef NRD
  #warning conflict: NRD is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'NRD' is also defined as a pragma.
  #warning conflict: Pragma 'NRD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NRD' in module 'ekv'.
  #undef NRD
#endif
#ifdef NRS
  #warning conflict: NRS is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'NRS' is also defined as a pragma.
  #warning conflict: Pragma 'NRS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'NRS' in module 'ekv'.
  #undef NRS
#endif
#ifdef RS
  #warning conflict: RS is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'RS' is also defined as a pragma.
  #warning conflict: Pragma 'RS' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RS' in module 'ekv'.
  #undef RS
#endif
#ifdef RD
  #warning conflict: RD is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'RD' is also defined as a pragma.
  #warning conflict: Pragma 'RD' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'RD' in module 'ekv'.
  #undef RD
#endif
#ifdef mode
  #warning conflict: mode is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'mode' is also defined as a pragma.
  #warning conflict: Pragma 'mode' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'mode' in module 'ekv'.
  #undef mode
#endif
#ifdef lc
  #warning conflict: lc is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'lc' is also defined as a pragma.
  #warning conflict: Pragma 'lc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'lc' in module 'ekv'.
  #undef lc
#endif
#ifdef isat_s
  #warning conflict: isat_s is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'isat_s' is also defined as a pragma.
  #warning conflict: Pragma 'isat_s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'isat_s' in module 'ekv'.
  #undef isat_s
#endif
#ifdef vexp_s
  #warning conflict: vexp_s is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vexp_s' is also defined as a pragma.
  #warning conflict: Pragma 'vexp_s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vexp_s' in module 'ekv'.
  #undef vexp_s
#endif
#ifdef gexp_s
  #warning conflict: gexp_s is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'gexp_s' is also defined as a pragma.
  #warning conflict: Pragma 'gexp_s' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gexp_s' in module 'ekv'.
  #undef gexp_s
#endif
#ifdef isat_d
  #warning conflict: isat_d is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'isat_d' is also defined as a pragma.
  #warning conflict: Pragma 'isat_d' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'isat_d' in module 'ekv'.
  #undef isat_d
#endif
#ifdef vexp_d
  #warning conflict: vexp_d is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vexp_d' is also defined as a pragma.
  #warning conflict: Pragma 'vexp_d' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vexp_d' in module 'ekv'.
  #undef vexp_d
#endif
#ifdef gexp_d
  #warning conflict: gexp_d is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'gexp_d' is also defined as a pragma.
  #warning conflict: Pragma 'gexp_d' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gexp_d' in module 'ekv'.
  #undef gexp_d
#endif
#ifdef fact
  #warning conflict: fact is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'fact' is also defined as a pragma.
  #warning conflict: Pragma 'fact' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fact' in module 'ekv'.
  #undef fact
#endif
#ifdef weff
  #warning conflict: weff is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'weff' is also defined as a pragma.
  #warning conflict: Pragma 'weff' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'weff' in module 'ekv'.
  #undef weff
#endif
#ifdef leff
  #warning conflict: leff is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'leff' is also defined as a pragma.
  #warning conflict: Pragma 'leff' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'leff' in module 'ekv'.
  #undef leff
#endif
#ifdef np
  #warning conflict: np is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'np' is also defined as a pragma.
  #warning conflict: Pragma 'np' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'np' in module 'ekv'.
  #undef np
#endif
#ifdef ns
  #warning conflict: ns is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'ns' is also defined as a pragma.
  #warning conflict: Pragma 'ns' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ns' in module 'ekv'.
  #undef ns
#endif
#ifdef lmin
  #warning conflict: lmin is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'lmin' is also defined as a pragma.
  #warning conflict: Pragma 'lmin' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'lmin' in module 'ekv'.
  #undef lmin
#endif
#ifdef rd
  #warning conflict: rd is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'rd' is also defined as a pragma.
  #warning conflict: Pragma 'rd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rd' in module 'ekv'.
  #undef rd
#endif
#ifdef rs
  #warning conflict: rs is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'rs' is also defined as a pragma.
  #warning conflict: Pragma 'rs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'rs' in module 'ekv'.
  #undef rs
#endif
#ifdef ceps
  #warning conflict: ceps is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'ceps' is also defined as a pragma.
  #warning conflict: Pragma 'ceps' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ceps' in module 'ekv'.
  #undef ceps
#endif
#ifdef ca
  #warning conflict: ca is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'ca' is also defined as a pragma.
  #warning conflict: Pragma 'ca' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ca' in module 'ekv'.
  #undef ca
#endif
#ifdef xsi
  #warning conflict: xsi is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'xsi' is also defined as a pragma.
  #warning conflict: Pragma 'xsi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xsi' in module 'ekv'.
  #undef xsi
#endif
#ifdef dvrsce
  #warning conflict: dvrsce is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'dvrsce' is also defined as a pragma.
  #warning conflict: Pragma 'dvrsce' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dvrsce' in module 'ekv'.
  #undef dvrsce
#endif
#ifdef tempk
  #warning conflict: tempk is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'tempk' is also defined as a pragma.
  #warning conflict: Pragma 'tempk' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tempk' in module 'ekv'.
  #undef tempk
#endif
#ifdef vt
  #warning conflict: vt is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vt' is also defined as a pragma.
  #warning conflict: Pragma 'vt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vt' in module 'ekv'.
  #undef vt
#endif
#ifdef sqrt_A
  #warning conflict: sqrt_A is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'sqrt_A' is also defined as a pragma.
  #warning conflict: Pragma 'sqrt_A' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'sqrt_A' in module 'ekv'.
  #undef sqrt_A
#endif
#ifdef vto_a
  #warning conflict: vto_a is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vto_a' is also defined as a pragma.
  #warning conflict: Pragma 'vto_a' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vto_a' in module 'ekv'.
  #undef vto_a
#endif
#ifdef kp_a
  #warning conflict: kp_a is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'kp_a' is also defined as a pragma.
  #warning conflict: Pragma 'kp_a' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'kp_a' in module 'ekv'.
  #undef kp_a
#endif
#ifdef gamma_a
  #warning conflict: gamma_a is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'gamma_a' is also defined as a pragma.
  #warning conflict: Pragma 'gamma_a' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gamma_a' in module 'ekv'.
  #undef gamma_a
#endif
#ifdef ucrit
  #warning conflict: ucrit is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'ucrit' is also defined as a pragma.
  #warning conflict: Pragma 'ucrit' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ucrit' in module 'ekv'.
  #undef ucrit
#endif
#ifdef phi
  #warning conflict: phi is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'phi' is also defined as a pragma.
  #warning conflict: Pragma 'phi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'phi' in module 'ekv'.
  #undef phi
#endif
#ifdef ibb
  #warning conflict: ibb is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'ibb' is also defined as a pragma.
  #warning conflict: Pragma 'ibb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibb' in module 'ekv'.
  #undef ibb
#endif
#ifdef vc
  #warning conflict: vc is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vc' is also defined as a pragma.
  #warning conflict: Pragma 'vc' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vc' in module 'ekv'.
  #undef vc
#endif
#ifdef qb0
  #warning conflict: qb0 is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'qb0' is also defined as a pragma.
  #warning conflict: Pragma 'qb0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qb0' in module 'ekv'.
  #undef qb0
#endif
#ifdef vg
  #warning conflict: vg is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vg' is also defined as a pragma.
  #warning conflict: Pragma 'vg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vg' in module 'ekv'.
  #undef vg
#endif
#ifdef vd
  #warning conflict: vd is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vd' is also defined as a pragma.
  #warning conflict: Pragma 'vd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vd' in module 'ekv'.
  #undef vd
#endif
#ifdef vs
  #warning conflict: vs is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vs' is also defined as a pragma.
  #warning conflict: Pragma 'vs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vs' in module 'ekv'.
  #undef vs
#endif
#ifdef tmp
  #warning conflict: tmp is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'tmp' is also defined as a pragma.
  #warning conflict: Pragma 'tmp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'tmp' in module 'ekv'.
  #undef tmp
#endif
#ifdef vgprime
  #warning conflict: vgprime is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vgprime' is also defined as a pragma.
  #warning conflict: Pragma 'vgprime' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vgprime' in module 'ekv'.
  #undef vgprime
#endif
#ifdef vp0
  #warning conflict: vp0 is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vp0' is also defined as a pragma.
  #warning conflict: Pragma 'vp0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vp0' in module 'ekv'.
  #undef vp0
#endif
#ifdef vsprime
  #warning conflict: vsprime is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vsprime' is also defined as a pragma.
  #warning conflict: Pragma 'vsprime' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vsprime' in module 'ekv'.
  #undef vsprime
#endif
#ifdef vdprime
  #warning conflict: vdprime is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vdprime' is also defined as a pragma.
  #warning conflict: Pragma 'vdprime' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdprime' in module 'ekv'.
  #undef vdprime
#endif
#ifdef gamma0
  #warning conflict: gamma0 is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'gamma0' is also defined as a pragma.
  #warning conflict: Pragma 'gamma0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gamma0' in module 'ekv'.
  #undef gamma0
#endif
#ifdef gammaprime
  #warning conflict: gammaprime is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'gammaprime' is also defined as a pragma.
  #warning conflict: Pragma 'gammaprime' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'gammaprime' in module 'ekv'.
  #undef gammaprime
#endif
#ifdef vp
  #warning conflict: vp is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vp' is also defined as a pragma.
  #warning conflict: Pragma 'vp' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vp' in module 'ekv'.
  #undef vp
#endif
#ifdef n
  #warning conflict: n is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'n' is also defined as a pragma.
  #warning conflict: Pragma 'n' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'n' in module 'ekv'.
  #undef n
#endif
#ifdef ifwd
  #warning conflict: ifwd is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'ifwd' is also defined as a pragma.
  #warning conflict: Pragma 'ifwd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ifwd' in module 'ekv'.
  #undef ifwd
#endif
#ifdef vdss
  #warning conflict: vdss is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vdss' is also defined as a pragma.
  #warning conflict: Pragma 'vdss' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdss' in module 'ekv'.
  #undef vdss
#endif
#ifdef vdssprime
  #warning conflict: vdssprime is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vdssprime' is also defined as a pragma.
  #warning conflict: Pragma 'vdssprime' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vdssprime' in module 'ekv'.
  #undef vdssprime
#endif
#ifdef dv
  #warning conflict: dv is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'dv' is also defined as a pragma.
  #warning conflict: Pragma 'dv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dv' in module 'ekv'.
  #undef dv
#endif
#ifdef vds
  #warning conflict: vds is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vds' is also defined as a pragma.
  #warning conflict: Pragma 'vds' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vds' in module 'ekv'.
  #undef vds
#endif
#ifdef vip
  #warning conflict: vip is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vip' is also defined as a pragma.
  #warning conflict: Pragma 'vip' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vip' in module 'ekv'.
  #undef vip
#endif
#ifdef dl
  #warning conflict: dl is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'dl' is also defined as a pragma.
  #warning conflict: Pragma 'dl' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'dl' in module 'ekv'.
  #undef dl
#endif
#ifdef lprime
  #warning conflict: lprime is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'lprime' is also defined as a pragma.
  #warning conflict: Pragma 'lprime' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'lprime' in module 'ekv'.
  #undef lprime
#endif
#ifdef leq
  #warning conflict: leq is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'leq' is also defined as a pragma.
  #warning conflict: Pragma 'leq' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'leq' in module 'ekv'.
  #undef leq
#endif
#ifdef irprime
  #warning conflict: irprime is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'irprime' is also defined as a pragma.
  #warning conflict: Pragma 'irprime' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'irprime' in module 'ekv'.
  #undef irprime
#endif
#ifdef irev
  #warning conflict: irev is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'irev' is also defined as a pragma.
  #warning conflict: Pragma 'irev' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'irev' in module 'ekv'.
  #undef irev
#endif
#ifdef beta0
  #warning conflict: beta0 is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'beta0' is also defined as a pragma.
  #warning conflict: Pragma 'beta0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'beta0' in module 'ekv'.
  #undef beta0
#endif
#ifdef nau
  #warning conflict: nau is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'nau' is also defined as a pragma.
  #warning conflict: Pragma 'nau' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'nau' in module 'ekv'.
  #undef nau
#endif
#ifdef nq
  #warning conflict: nq is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'nq' is also defined as a pragma.
  #warning conflict: Pragma 'nq' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'nq' in module 'ekv'.
  #undef nq
#endif
#ifdef xf
  #warning conflict: xf is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'xf' is also defined as a pragma.
  #warning conflict: Pragma 'xf' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xf' in module 'ekv'.
  #undef xf
#endif
#ifdef xr
  #warning conflict: xr is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'xr' is also defined as a pragma.
  #warning conflict: Pragma 'xr' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'xr' in module 'ekv'.
  #undef xr
#endif
#ifdef qd
  #warning conflict: qd is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'qd' is also defined as a pragma.
  #warning conflict: Pragma 'qd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qd' in module 'ekv'.
  #undef qd
#endif
#ifdef qs
  #warning conflict: qs is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'qs' is also defined as a pragma.
  #warning conflict: Pragma 'qs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qs' in module 'ekv'.
  #undef qs
#endif
#ifdef qi
  #warning conflict: qi is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'qi' is also defined as a pragma.
  #warning conflict: Pragma 'qi' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qi' in module 'ekv'.
  #undef qi
#endif
#ifdef qb
  #warning conflict: qb is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'qb' is also defined as a pragma.
  #warning conflict: Pragma 'qb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qb' in module 'ekv'.
  #undef qb
#endif
#ifdef qg
  #warning conflict: qg is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'qg' is also defined as a pragma.
  #warning conflict: Pragma 'qg' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qg' in module 'ekv'.
  #undef qg
#endif
#ifdef beta0prime
  #warning conflict: beta0prime is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'beta0prime' is also defined as a pragma.
  #warning conflict: Pragma 'beta0prime' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'beta0prime' in module 'ekv'.
  #undef beta0prime
#endif
#ifdef beta
  #warning conflict: beta is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'beta' is also defined as a pragma.
  #warning conflict: Pragma 'beta' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'beta' in module 'ekv'.
  #undef beta
#endif
#ifdef vpprime
  #warning conflict: vpprime is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vpprime' is also defined as a pragma.
  #warning conflict: Pragma 'vpprime' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vpprime' in module 'ekv'.
  #undef vpprime
#endif
#ifdef is
  #warning conflict: is is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'is' is also defined as a pragma.
  #warning conflict: Pragma 'is' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'is' in module 'ekv'.
  #undef is
#endif
#ifdef ids
  #warning conflict: ids is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'ids' is also defined as a pragma.
  #warning conflict: Pragma 'ids' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ids' in module 'ekv'.
  #undef ids
#endif
#ifdef vib
  #warning conflict: vib is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'vib' is also defined as a pragma.
  #warning conflict: Pragma 'vib' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'vib' in module 'ekv'.
  #undef vib
#endif
#ifdef idb
  #warning conflict: idb is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'idb' is also defined as a pragma.
  #warning conflict: Pragma 'idb' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'idb' in module 'ekv'.
  #undef idb
#endif
#ifdef ibdj
  #warning conflict: ibdj is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'ibdj' is also defined as a pragma.
  #warning conflict: Pragma 'ibdj' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibdj' in module 'ekv'.
  #undef ibdj
#endif
#ifdef ibsj
  #warning conflict: ibsj is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'ibsj' is also defined as a pragma.
  #warning conflict: Pragma 'ibsj' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'ibsj' in module 'ekv'.
  #undef ibsj
#endif
#ifdef coxt
  #warning conflict: coxt is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'coxt' is also defined as a pragma.
  #warning conflict: Pragma 'coxt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'coxt' in module 'ekv'.
  #undef coxt
#endif
#ifdef qdt
  #warning conflict: qdt is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'qdt' is also defined as a pragma.
  #warning conflict: Pragma 'qdt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qdt' in module 'ekv'.
  #undef qdt
#endif
#ifdef qst
  #warning conflict: qst is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'qst' is also defined as a pragma.
  #warning conflict: Pragma 'qst' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qst' in module 'ekv'.
  #undef qst
#endif
#ifdef qgt
  #warning conflict: qgt is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'qgt' is also defined as a pragma.
  #warning conflict: Pragma 'qgt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qgt' in module 'ekv'.
  #undef qgt
#endif
#ifdef qbt
  #warning conflict: qbt is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'qbt' is also defined as a pragma.
  #warning conflict: Pragma 'qbt' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'qbt' in module 'ekv'.
  #undef qbt
#endif
#ifdef cbs0
  #warning conflict: cbs0 is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'cbs0' is also defined as a pragma.
  #warning conflict: Pragma 'cbs0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbs0' in module 'ekv'.
  #undef cbs0
#endif
#ifdef cbs0sw
  #warning conflict: cbs0sw is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'cbs0sw' is also defined as a pragma.
  #warning conflict: Pragma 'cbs0sw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbs0sw' in module 'ekv'.
  #undef cbs0sw
#endif
#ifdef cbs
  #warning conflict: cbs is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'cbs' is also defined as a pragma.
  #warning conflict: Pragma 'cbs' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbs' in module 'ekv'.
  #undef cbs
#endif
#ifdef cbd0
  #warning conflict: cbd0 is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'cbd0' is also defined as a pragma.
  #warning conflict: Pragma 'cbd0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbd0' in module 'ekv'.
  #undef cbd0
#endif
#ifdef cbd0sw
  #warning conflict: cbd0sw is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'cbd0sw' is also defined as a pragma.
  #warning conflict: Pragma 'cbd0sw' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbd0sw' in module 'ekv'.
  #undef cbd0sw
#endif
#ifdef cbd
  #warning conflict: cbd is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'cbd' is also defined as a pragma.
  #warning conflict: Pragma 'cbd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cbd' in module 'ekv'.
  #undef cbd
#endif
#ifdef fv
  #warning conflict: fv is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'fv' is also defined as a pragma.
  #warning conflict: Pragma 'fv' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'fv' in module 'ekv'.
  #undef fv
#endif
#ifdef z0
  #warning conflict: z0 is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'z0' is also defined as a pragma.
  #warning conflict: Pragma 'z0' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'z0' in module 'ekv'.
  #undef z0
#endif
#ifdef z1
  #warning conflict: z1 is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'z1' is also defined as a pragma.
  #warning conflict: Pragma 'z1' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'z1' in module 'ekv'.
  #undef z1
#endif
#ifdef y
  #warning conflict: y is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'y' is also defined as a pragma.
  #warning conflict: Pragma 'y' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'y' in module 'ekv'.
  #undef y
#endif
#ifdef cgso
  #warning conflict: cgso is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'cgso' is also defined as a pragma.
  #warning conflict: Pragma 'cgso' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cgso' in module 'ekv'.
  #undef cgso
#endif
#ifdef cgdo
  #warning conflict: cgdo is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'cgdo' is also defined as a pragma.
  #warning conflict: Pragma 'cgdo' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cgdo' in module 'ekv'.
  #undef cgdo
#endif
#ifdef cgbo
  #warning conflict: cgbo is declared as a variable of module 'ekv'.
  #warning conflict: However in the API of ngspice 'cgbo' is also defined as a pragma.
  #warning conflict: Pragma 'cgbo' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'cgbo' in module 'ekv'.
  #undef cgbo
#endif
#ifdef cgbo
  #warning conflict: GND is declared as a node of module 'ekv'.
  #warning conflict: However in the API of ngspice 'GND' is also defined as a pragma.
  #warning conflict: Pragma 'GND' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'GND' in module 'ekv'.
  #undef cgbo
#endif
#ifdef cgbo
  #warning conflict: d is declared as a node of module 'ekv'.
  #warning conflict: However in the API of ngspice 'd' is also defined as a pragma.
  #warning conflict: Pragma 'd' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'd' in module 'ekv'.
  #undef cgbo
#endif
#ifdef cgbo
  #warning conflict: g is declared as a node of module 'ekv'.
  #warning conflict: However in the API of ngspice 'g' is also defined as a pragma.
  #warning conflict: Pragma 'g' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'g' in module 'ekv'.
  #undef cgbo
#endif
#ifdef cgbo
  #warning conflict: s is declared as a node of module 'ekv'.
  #warning conflict: However in the API of ngspice 's' is also defined as a pragma.
  #warning conflict: Pragma 's' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 's' in module 'ekv'.
  #undef cgbo
#endif
#ifdef cgbo
  #warning conflict: b is declared as a node of module 'ekv'.
  #warning conflict: However in the API of ngspice 'b' is also defined as a pragma.
  #warning conflict: Pragma 'b' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'b' in module 'ekv'.
  #undef cgbo
#endif
#ifdef cgbo
  #warning conflict: di is declared as a node of module 'ekv'.
  #warning conflict: However in the API of ngspice 'di' is also defined as a pragma.
  #warning conflict: Pragma 'di' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'di' in module 'ekv'.
  #undef cgbo
#endif
#ifdef cgbo
  #warning conflict: si is declared as a node of module 'ekv'.
  #warning conflict: However in the API of ngspice 'si' is also defined as a pragma.
  #warning conflict: Pragma 'si' will be undefined.
  #warning conflict: You can solve the confict by renaming variable 'si' in module 'ekv'.
  #undef cgbo
#endif

#ifdef NGSPICE_DEBUG_OK
#define NGSPICE_DEBUG \
{ \
  if(getenv("ngspice_debug")) \
    ekvdebug(ckt,model,here); \
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

/* declarations for ekv MOSFETs */

/* information needed for each instance */
typedef struct sekvinstance {
  struct sekvmodel *ekvmodPtr;           /* pointer to model */
  struct sekvinstance *ekvnextInstance;  /* pointer to next instance of current model*/
  IFuid ekvname; /* pointer to character string naming this instance */
  int ekvowner;  /* number of owner process */
  int ekvstate; /* index into state table for this device */

  /* node */  int dNode;
  int gNode;
  int sNode;
  int bNode;
  int diNode;
  int siNode;

  /* instance parameters */  double L;
  unsigned L_Given  :1;  /*L*/
  double W;
  unsigned W_Given  :1;  /*W*/
  double M;
  unsigned M_Given  :1;  /*M*/
  double AD;
  unsigned AD_Given  :1;  /*AD*/
  double AS;
  unsigned AS_Given  :1;  /*AS*/
  double PD;
  unsigned PD_Given  :1;  /*PD*/
  double PS;
  unsigned PS_Given  :1;  /*PS*/
  double NRD;
  unsigned NRD_Given  :1;  /*NRD*/
  double NRS;
  unsigned NRS_Given  :1;  /*NRS*/
  double RS;
  unsigned RS_Given  :1;  /*RS*/
  double RD;
  unsigned RD_Given  :1;  /*RD*/

 // noise


  /* variables */  double isat_s;
  double vexp_s;
  double gexp_s;
  double isat_d;
  double vexp_d;
  double gexp_d;
  double weff;
  double leff;
  double np;
  double ns;
  double lmin;
  double rd;
  double rs;
  double dvrsce;
  double vt;
  double vto_a;
  double kp_a;
  double gamma_a;
  double ucrit;
  double phi;
  double ibb;
  double vc;
  double qb0;
  double tmp;
  double coxt;
  double cbs0;
  double cbs0sw;
  double cbd0;
  double cbd0sw;
  double cgso;
  double cgdo;
  double cgbo;

  /* states */  int state_g_b;
  int state_g_di;
  int state_g_si;
  int state_b_g;
  int state_b_di;
  int state_b_si;
  int state_si_g;
  int state_di_g;

  /* pointer to sparse matrix (+ values)*/  double *PTR_J_di_si;
    int PTR_J_di_si_required;
    double JSVAL_di_si;
    double JDVAL_di_si;
  double *PTR_J_di_b;
    int PTR_J_di_b_required;
    double JSVAL_di_b;
    double JDVAL_di_b;
  double *PTR_J_si_si;
    int PTR_J_si_si_required;
    double JSVAL_si_si;
    double JDVAL_si_si;
  double *PTR_J_si_b;
    int PTR_J_si_b_required;
    double JSVAL_si_b;
    double JDVAL_si_b;
  double *PTR_J_di_di;
    int PTR_J_di_di_required;
    double JSVAL_di_di;
    double JDVAL_di_di;
  double *PTR_J_si_di;
    int PTR_J_si_di_required;
    double JSVAL_si_di;
    double JDVAL_si_di;
  double *PTR_J_di_g;
    int PTR_J_di_g_required;
    double JSVAL_di_g;
    double JDVAL_di_g;
  double *PTR_J_si_g;
    int PTR_J_si_g_required;
    double JSVAL_si_g;
    double JDVAL_si_g;
  double *PTR_J_b_si;
    int PTR_J_b_si_required;
    double JSVAL_b_si;
    double JDVAL_b_si;
  double *PTR_J_b_b;
    int PTR_J_b_b_required;
    double JSVAL_b_b;
    double JDVAL_b_b;
  double *PTR_J_b_di;
    int PTR_J_b_di_required;
    double JSVAL_b_di;
    double JDVAL_b_di;
  double *PTR_J_b_g;
    int PTR_J_b_g_required;
    double JSVAL_b_g;
    double JDVAL_b_g;
  double *PTR_J_g_si;
    int PTR_J_g_si_required;
    double JDVAL_g_si;
  double *PTR_J_g_b;
    int PTR_J_g_b_required;
    double JDVAL_g_b;
  double *PTR_J_g_di;
    int PTR_J_g_di_required;
    double JDVAL_g_di;
  double *PTR_J_g_g;
    int PTR_J_g_g_required;
    double JDVAL_g_g;
  double *PTR_J_d_d;
    int PTR_J_d_d_required;
    double JSVAL_d_d;
  double *PTR_J_d_di;
    int PTR_J_d_di_required;
    double JSVAL_d_di;
  double *PTR_J_di_d;
    int PTR_J_di_d_required;
    double JSVAL_di_d;
  double *PTR_J_s_s;
    int PTR_J_s_s_required;
    double JSVAL_s_s;
  double *PTR_J_s_si;
    int PTR_J_s_si_required;
    double JSVAL_s_si;
  double *PTR_J_si_s;
    int PTR_J_si_s_required;
    double JSVAL_si_s;


#define ekvnumStates 0

} ekvinstance ;


/* per model data */

typedef struct sekvmodel {         /* model structure */
  int ekvmodType;        /* type index of this device type */
  struct sekvmodel *ekvnextModel; /* pointer to next possible model in linked list */
  ekvinstance * ekvinstances;  /* pointer to list of instances that have this model */
  IFuid ekvmodName;         /* pointer to the name of this model */

  /* model parameters */  int nmos;
  unsigned nmos_Given  :1;  /*nmos*/
  int pmos;
  unsigned pmos_Given  :1;  /*pmos*/
  int MTYPE;
  unsigned MTYPE_Given  :1;
  double TNOM;
  unsigned TNOM_Given  :1;  /*TNOM*/
  double IMAX;
  unsigned IMAX_Given  :1;  /*IMAX*/
  double TOX;
  unsigned TOX_Given  :1;  /*TOX*/
  double NSUB;
  unsigned NSUB_Given  :1;  /*NSUB*/
  double VFB;
  unsigned VFB_Given  :1;  /*VFB*/
  double UO;
  unsigned UO_Given  :1;  /*UO*/
  double VMAX;
  unsigned VMAX_Given  :1;  /*VMAX*/
  double THETA;
  unsigned THETA_Given  :1;  /*THETA*/
  double COX;
  unsigned COX_Given  :1;  /*COX*/
  double XJ;
  unsigned XJ_Given  :1;  /*XJ*/
  double DL;
  unsigned DL_Given  :1;  /*DL*/
  double DW;
  unsigned DW_Given  :1;  /*DW*/
  double GAMMA;
  unsigned GAMMA_Given  :1;  /*GAMMA*/
  double PHI;
  unsigned PHI_Given  :1;  /*PHI*/
  double VTO;
  unsigned VTO_Given  :1;  /*VTO*/
  double KP;
  unsigned KP_Given  :1;  /*KP*/
  double UCRIT;
  unsigned UCRIT_Given  :1;  /*UCRIT*/
  double E0;
  unsigned E0_Given  :1;  /*E0*/
  double LAMBDA;
  unsigned LAMBDA_Given  :1;  /*LAMBDA*/
  double WETA;
  unsigned WETA_Given  :1;  /*WETA*/
  double LETA;
  unsigned LETA_Given  :1;  /*LETA*/
  double Q0;
  unsigned Q0_Given  :1;  /*Q0*/
  double LK;
  unsigned LK_Given  :1;  /*LK*/
  double IBA;
  unsigned IBA_Given  :1;  /*IBA*/
  double IBB;
  unsigned IBB_Given  :1;  /*IBB*/
  double IBN;
  unsigned IBN_Given  :1;  /*IBN*/
  double TCV;
  unsigned TCV_Given  :1;  /*TCV*/
  double BEX;
  unsigned BEX_Given  :1;  /*BEX*/
  double UCEX;
  unsigned UCEX_Given  :1;  /*UCEX*/
  double IBBT;
  unsigned IBBT_Given  :1;  /*IBBT*/
  double AVTO;
  unsigned AVTO_Given  :1;  /*AVTO*/
  double AKP;
  unsigned AKP_Given  :1;  /*AKP*/
  double AGAMMA;
  unsigned AGAMMA_Given  :1;  /*AGAMMA*/
  double KF;
  unsigned KF_Given  :1;  /*KF*/
  double AF;
  unsigned AF_Given  :1;  /*AF*/
  double NQS;
  unsigned NQS_Given  :1;  /*NQS*/
  double SATLIM;
  unsigned SATLIM_Given  :1;  /*SATLIM*/
  double XQC;
  unsigned XQC_Given  :1;  /*XQC*/
  double HDIF;
  unsigned HDIF_Given  :1;  /*HDIF*/
  double RSH;
  unsigned RSH_Given  :1;  /*RSH*/
  double JS;
  unsigned JS_Given  :1;  /*JS*/
  double JSW;
  unsigned JSW_Given  :1;  /*JSW*/
  double XTI;
  unsigned XTI_Given  :1;  /*XTI*/
  double N;
  unsigned N_Given  :1;  /*N*/
  double CJ;
  unsigned CJ_Given  :1;  /*CJ*/
  double CJSW;
  unsigned CJSW_Given  :1;  /*CJSW*/
  double PB;
  unsigned PB_Given  :1;  /*PB*/
  double PBSW;
  unsigned PBSW_Given  :1;  /*PBSW*/
  double MJ;
  unsigned MJ_Given  :1;  /*MJ*/
  double MJSW;
  unsigned MJSW_Given  :1;  /*MJSW*/
  double FC;
  unsigned FC_Given  :1;  /*FC*/
  double FCSW;
  unsigned FCSW_Given  :1;  /*FCSW*/
  double CGSO;
  unsigned CGSO_Given  :1;  /*CGSO*/
  double CGDO;
  unsigned CGDO_Given  :1;  /*CGDO*/
  double CGBO;
  unsigned CGBO_Given  :1;  /*CGBO*/

  /* variable */  double lc;


} ekvmodel;
  /* flags */
typedef enum {
  ekv_model_nmos,
  ekv_model_pmos,
  ekv_model_MTYPE,
  ekv_model_TNOM,
  ekv_model_IMAX,
  ekv_model_TOX,
  ekv_model_NSUB,
  ekv_model_VFB,
  ekv_model_UO,
  ekv_model_VMAX,
  ekv_model_THETA,
  ekv_model_COX,
  ekv_model_XJ,
  ekv_model_DL,
  ekv_model_DW,
  ekv_model_GAMMA,
  ekv_model_PHI,
  ekv_model_VTO,
  ekv_model_KP,
  ekv_model_UCRIT,
  ekv_model_E0,
  ekv_model_LAMBDA,
  ekv_model_WETA,
  ekv_model_LETA,
  ekv_model_Q0,
  ekv_model_LK,
  ekv_model_IBA,
  ekv_model_IBB,
  ekv_model_IBN,
  ekv_model_TCV,
  ekv_model_BEX,
  ekv_model_UCEX,
  ekv_model_IBBT,
  ekv_model_AVTO,
  ekv_model_AKP,
  ekv_model_AGAMMA,
  ekv_model_KF,
  ekv_model_AF,
  ekv_model_NQS,
  ekv_model_SATLIM,
  ekv_model_XQC,
  ekv_model_HDIF,
  ekv_model_RSH,
  ekv_model_JS,
  ekv_model_JSW,
  ekv_model_XTI,
  ekv_model_N,
  ekv_model_CJ,
  ekv_model_CJSW,
  ekv_model_PB,
  ekv_model_PBSW,
  ekv_model_MJ,
  ekv_model_MJSW,
  ekv_model_FC,
  ekv_model_FCSW,
  ekv_model_CGSO,
  ekv_model_CGDO,
  ekv_model_CGBO,
  DUMMY_MODEL
} e_ekv_model;
typedef enum {
  ekv_instance_L,
  ekv_instance_W,
  ekv_instance_M,
  ekv_instance_AD,
  ekv_instance_AS,
  ekv_instance_PD,
  ekv_instance_PS,
  ekv_instance_NRD,
  ekv_instance_NRS,
  ekv_instance_RS,
  ekv_instance_RD,
  DUMMY_INSTANCE
} e_ekv_instance;


#include "ekvext.h"

#endif /*ekv*/
