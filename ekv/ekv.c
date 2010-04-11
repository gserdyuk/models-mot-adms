/***
*** Interface: ads2002 2.2.0.0
 *** created by: admsXml-2.3.0 - Wed, 24 Mar 2010 00:50:59 ***/


#include "ngspice.h"
#include "devdefs.h"
#include "ekvdefs.h"
#include "suffix.h"
IFparm ekvpTable[] = {
 IOP("l",ekv_instance_L,IF_REAL,"L"),
 IOP("w",ekv_instance_W,IF_REAL,"W"),
 IOP("m",ekv_instance_M,IF_REAL,"M"),
 IOP("ad",ekv_instance_AD,IF_REAL,"AD"),
 IOP("as",ekv_instance_AS,IF_REAL,"AS"),
 IOP("pd",ekv_instance_PD,IF_REAL,"PD"),
 IOP("ps",ekv_instance_PS,IF_REAL,"PS"),
 IOP("nrd",ekv_instance_NRD,IF_REAL,"NRD"),
 IOP("nrs",ekv_instance_NRS,IF_REAL,"NRS"),
 IOP("rs",ekv_instance_RS,IF_REAL,"RS"),
 IOP("rd",ekv_instance_RD,IF_REAL,"RD")
};
IFparm ekvmPTable[] = {
 IOP("nmos",ekv_model_nmos,IF_INTEGER,"nmos"),
 IOP("pmos",ekv_model_pmos,IF_INTEGER,"pmos"),
 IOP("mtype",ekv_model_MTYPE,IF_INTEGER,"MTYPE"),
 IOP("tnom",ekv_model_TNOM,IF_REAL,"TNOM"),
 IOP("imax",ekv_model_IMAX,IF_REAL,"IMAX"),
 IOP("tox",ekv_model_TOX,IF_REAL,"TOX"),
 IOP("nsub",ekv_model_NSUB,IF_REAL,"NSUB"),
 IOP("vfb",ekv_model_VFB,IF_REAL,"VFB"),
 IOP("uo",ekv_model_UO,IF_REAL,"UO"),
 IOP("vmax",ekv_model_VMAX,IF_REAL,"VMAX"),
 IOP("theta",ekv_model_THETA,IF_REAL,"THETA"),
 IOP("cox",ekv_model_COX,IF_REAL,"COX"),
 IOP("xj",ekv_model_XJ,IF_REAL,"XJ"),
 IOP("dl",ekv_model_DL,IF_REAL,"DL"),
 IOP("dw",ekv_model_DW,IF_REAL,"DW"),
 IOP("gamma",ekv_model_GAMMA,IF_REAL,"GAMMA"),
 IOP("phi",ekv_model_PHI,IF_REAL,"PHI"),
 IOP("vto",ekv_model_VTO,IF_REAL,"VTO"),
 IOP("kp",ekv_model_KP,IF_REAL,"KP"),
 IOP("ucrit",ekv_model_UCRIT,IF_REAL,"UCRIT"),
 IOP("e0",ekv_model_E0,IF_REAL,"E0"),
 IOP("lambda",ekv_model_LAMBDA,IF_REAL,"LAMBDA"),
 IOP("weta",ekv_model_WETA,IF_REAL,"WETA"),
 IOP("leta",ekv_model_LETA,IF_REAL,"LETA"),
 IOP("q0",ekv_model_Q0,IF_REAL,"Q0"),
 IOP("lk",ekv_model_LK,IF_REAL,"LK"),
 IOP("iba",ekv_model_IBA,IF_REAL,"IBA"),
 IOP("ibb",ekv_model_IBB,IF_REAL,"IBB"),
 IOP("ibn",ekv_model_IBN,IF_REAL,"IBN"),
 IOP("tcv",ekv_model_TCV,IF_REAL,"TCV"),
 IOP("bex",ekv_model_BEX,IF_REAL,"BEX"),
 IOP("ucex",ekv_model_UCEX,IF_REAL,"UCEX"),
 IOP("ibbt",ekv_model_IBBT,IF_REAL,"IBBT"),
 IOP("avto",ekv_model_AVTO,IF_REAL,"AVTO"),
 IOP("akp",ekv_model_AKP,IF_REAL,"AKP"),
 IOP("agamma",ekv_model_AGAMMA,IF_REAL,"AGAMMA"),
 IOP("kf",ekv_model_KF,IF_REAL,"KF"),
 IOP("af",ekv_model_AF,IF_REAL,"AF"),
 IOP("nqs",ekv_model_NQS,IF_REAL,"NQS"),
 IOP("satlim",ekv_model_SATLIM,IF_REAL,"SATLIM"),
 IOP("xqc",ekv_model_XQC,IF_REAL,"XQC"),
 IOP("hdif",ekv_model_HDIF,IF_REAL,"HDIF"),
 IOP("rsh",ekv_model_RSH,IF_REAL,"RSH"),
 IOP("js",ekv_model_JS,IF_REAL,"JS"),
 IOP("jsw",ekv_model_JSW,IF_REAL,"JSW"),
 IOP("xti",ekv_model_XTI,IF_REAL,"XTI"),
 IOP("n",ekv_model_N,IF_REAL,"N"),
 IOP("cj",ekv_model_CJ,IF_REAL,"CJ"),
 IOP("cjsw",ekv_model_CJSW,IF_REAL,"CJSW"),
 IOP("pb",ekv_model_PB,IF_REAL,"PB"),
 IOP("pbsw",ekv_model_PBSW,IF_REAL,"PBSW"),
 IOP("mj",ekv_model_MJ,IF_REAL,"MJ"),
 IOP("mjsw",ekv_model_MJSW,IF_REAL,"MJSW"),
 IOP("fc",ekv_model_FC,IF_REAL,"FC"),
 IOP("fcsw",ekv_model_FCSW,IF_REAL,"FCSW"),
 IOP("cgso",ekv_model_CGSO,IF_REAL,"CGSO"),
 IOP("cgdo",ekv_model_CGDO,IF_REAL,"CGDO"),
 IOP("cgbo",ekv_model_CGBO,IF_REAL,"CGBO")
};


char *ekvnames[] = { "d",
 "g",
 "s",
 "b",
 "di",
 "si"
};

int ekvnSize = NUMELEMS(ekvnames);
int ekvpTSize = NUMELEMS(ekvpTable);
int ekvmPTSize = NUMELEMS(ekvmPTable);
int ekviSize = sizeof(ekvinstance);
int ekvmSize = sizeof(ekvmodel);
