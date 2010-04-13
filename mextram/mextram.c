/***
*** Interface: ads2002 2.2.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:45:17 ***/


#include "ngspice.h"
#include "devdefs.h"
#include "mextramdefs.h"
#include "suffix.h"
IFparm mextrampTable[] = {

};
IFparm mextrammPTable[] = {
 IOP("pnp",mextram_model_pnp,IF_INTEGER,"pnp"),
 IOP("npn",mextram_model_npn,IF_INTEGER,"npn"),
 IOP("level",mextram_model_LEVEL,IF_INTEGER,"LEVEL"),
 IOP("tref",mextram_model_TREF,IF_REAL,"TREF"),
 IOP("dta",mextram_model_DTA,IF_REAL,"DTA"),
 IOP("exmod",mextram_model_EXMOD,IF_INTEGER,"EXMOD"),
 IOP("exphi",mextram_model_EXPHI,IF_INTEGER,"EXPHI"),
 IOP("exavl",mextram_model_EXAVL,IF_INTEGER,"EXAVL"),
 IOP("is",mextram_model_IS,IF_REAL,"IS"),
 IOP("ik",mextram_model_IK,IF_REAL,"IK"),
 IOP("ver",mextram_model_VER,IF_REAL,"VER"),
 IOP("vef",mextram_model_VEF,IF_REAL,"VEF"),
 IOP("bf",mextram_model_BF,IF_REAL,"BF"),
 IOP("ibf",mextram_model_IBF,IF_REAL,"IBF"),
 IOP("mlf",mextram_model_MLF,IF_REAL,"MLF"),
 IOP("xibi",mextram_model_XIBI,IF_REAL,"XIBI"),
 IOP("bri",mextram_model_BRI,IF_REAL,"BRI"),
 IOP("ibr",mextram_model_IBR,IF_REAL,"IBR"),
 IOP("vlr",mextram_model_VLR,IF_REAL,"VLR"),
 IOP("xext",mextram_model_XEXT,IF_REAL,"XEXT"),
 IOP("wavl",mextram_model_WAVL,IF_REAL,"WAVL"),
 IOP("vavl",mextram_model_VAVL,IF_REAL,"VAVL"),
 IOP("sfh",mextram_model_SFH,IF_REAL,"SFH"),
 IOP("re",mextram_model_RE,IF_REAL,"RE"),
 IOP("rbc",mextram_model_RBC,IF_REAL,"RBC"),
 IOP("rbv",mextram_model_RBV,IF_REAL,"RBV"),
 IOP("rcc",mextram_model_RCC,IF_REAL,"RCC"),
 IOP("rcv",mextram_model_RCV,IF_REAL,"RCV"),
 IOP("scrcv",mextram_model_SCRCV,IF_REAL,"SCRCV"),
 IOP("ihc",mextram_model_IHC,IF_REAL,"IHC"),
 IOP("axi",mextram_model_AXI,IF_REAL,"AXI"),
 IOP("cje",mextram_model_CJE,IF_REAL,"CJE"),
 IOP("vde",mextram_model_VDE,IF_REAL,"VDE"),
 IOP("pe",mextram_model_PE,IF_REAL,"PE"),
 IOP("xcje",mextram_model_XCJE,IF_REAL,"XCJE"),
 IOP("cbeo",mextram_model_CBEO,IF_REAL,"CBEO"),
 IOP("cjc",mextram_model_CJC,IF_REAL,"CJC"),
 IOP("vdc",mextram_model_VDC,IF_REAL,"VDC"),
 IOP("pc",mextram_model_PC,IF_REAL,"PC"),
 IOP("xp",mextram_model_XP,IF_REAL,"XP"),
 IOP("mc",mextram_model_MC,IF_REAL,"MC"),
 IOP("xcjc",mextram_model_XCJC,IF_REAL,"XCJC"),
 IOP("rcblx",mextram_model_RCBLX,IF_REAL,"RCBLX"),
 IOP("rcbli",mextram_model_RCBLI,IF_REAL,"RCBLI"),
 IOP("cbco",mextram_model_CBCO,IF_REAL,"CBCO"),
 IOP("mtau",mextram_model_MTAU,IF_REAL,"MTAU"),
 IOP("taue",mextram_model_TAUE,IF_REAL,"TAUE"),
 IOP("taub",mextram_model_TAUB,IF_REAL,"TAUB"),
 IOP("tepi",mextram_model_TEPI,IF_REAL,"TEPI"),
 IOP("taur",mextram_model_TAUR,IF_REAL,"TAUR"),
 IOP("deg",mextram_model_DEG,IF_REAL,"DEG"),
 IOP("xrec",mextram_model_XREC,IF_REAL,"XREC"),
 IOP("aqbo",mextram_model_AQBO,IF_REAL,"AQBO"),
 IOP("ae",mextram_model_AE,IF_REAL,"AE"),
 IOP("ab",mextram_model_AB,IF_REAL,"AB"),
 IOP("aepi",mextram_model_AEPI,IF_REAL,"AEPI"),
 IOP("aex",mextram_model_AEX,IF_REAL,"AEX"),
 IOP("ac",mextram_model_AC,IF_REAL,"AC"),
 IOP("acbl",mextram_model_ACBL,IF_REAL,"ACBL"),
 IOP("dvgbf",mextram_model_DVGBF,IF_REAL,"DVGBF"),
 IOP("dvgbr",mextram_model_DVGBR,IF_REAL,"DVGBR"),
 IOP("vgb",mextram_model_VGB,IF_REAL,"VGB"),
 IOP("vgc",mextram_model_VGC,IF_REAL,"VGC"),
 IOP("vgj",mextram_model_VGJ,IF_REAL,"VGJ"),
 IOP("dvgte",mextram_model_DVGTE,IF_REAL,"DVGTE"),
 IOP("dais",mextram_model_DAIS,IF_REAL,"DAIS"),
 IOP("af",mextram_model_AF,IF_REAL,"AF"),
 IOP("kf",mextram_model_KF,IF_REAL,"KF"),
 IOP("kfn",mextram_model_KFN,IF_REAL,"KFN"),
 IOP("kavl",mextram_model_KAVL,IF_INTEGER,"KAVL"),
 IOP("iss",mextram_model_ISS,IF_REAL,"ISS"),
 IOP("iks",mextram_model_IKS,IF_REAL,"IKS"),
 IOP("cjs",mextram_model_CJS,IF_REAL,"CJS"),
 IOP("vds",mextram_model_VDS,IF_REAL,"VDS"),
 IOP("ps",mextram_model_PS,IF_REAL,"PS"),
 IOP("vgs",mextram_model_VGS,IF_REAL,"VGS"),
 IOP("as",mextram_model_AS,IF_REAL,"AS"),
 IOP("rth",mextram_model_RTH,IF_REAL,"RTH"),
 IOP("cth",mextram_model_CTH,IF_REAL,"CTH"),
 IOP("ath",mextram_model_ATH,IF_REAL,"ATH"),
 IOP("mult",mextram_model_MULT,IF_REAL,"MULT"),
 IOP("type",mextram_model_TYPE,IF_INTEGER,"TYPE")
};


char *mextramnames[] = { "c",
 "b",
 "e",
 "s",
 "dt",
 "c1",
 "e1",
 "b1",
 "b2",
 "c2",
 "c3",
 "c4",
 "noi"
};

int mextramnSize = NUMELEMS(mextramnames);
int mextrampTSize = NUMELEMS(mextrampTable);
int mextrammPTSize = NUMELEMS(mextrammPTable);
int mextramiSize = sizeof(mextraminstance);
int mextrammSize = sizeof(mextrammodel);
