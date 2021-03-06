/***
*** Interface: ads2002 2.2.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:14:44 ***/


#include "ngspice.h"
#include "devdefs.h"
#include "hicum0defs.h"
#include "suffix.h"
IFparm hicum0pTable[] = {
 IOP("dt",hicum0_instance_dt,IF_REAL,"dt")
};
IFparm hicum0mPTable[] = {
 IOP("is",hicum0_model_is,IF_REAL,"is"),
 IOP("mcf",hicum0_model_mcf,IF_REAL,"mcf"),
 IOP("mcr",hicum0_model_mcr,IF_REAL,"mcr"),
 IOP("vef",hicum0_model_vef,IF_REAL,"vef"),
 IOP("iqf",hicum0_model_iqf,IF_REAL,"iqf"),
 IOP("iqr",hicum0_model_iqr,IF_REAL,"iqr"),
 IOP("iqfh",hicum0_model_iqfh,IF_REAL,"iqfh"),
 IOP("tfh",hicum0_model_tfh,IF_REAL,"tfh"),
 IOP("ibes",hicum0_model_ibes,IF_REAL,"ibes"),
 IOP("mbe",hicum0_model_mbe,IF_REAL,"mbe"),
 IOP("ires",hicum0_model_ires,IF_REAL,"ires"),
 IOP("mre",hicum0_model_mre,IF_REAL,"mre"),
 IOP("ibcs",hicum0_model_ibcs,IF_REAL,"ibcs"),
 IOP("mbc",hicum0_model_mbc,IF_REAL,"mbc"),
 IOP("cje0",hicum0_model_cje0,IF_REAL,"cje0"),
 IOP("vde",hicum0_model_vde,IF_REAL,"vde"),
 IOP("ze",hicum0_model_ze,IF_REAL,"ze"),
 IOP("aje",hicum0_model_aje,IF_REAL,"aje"),
 IOP("t0",hicum0_model_t0,IF_REAL,"t0"),
 IOP("dt0h",hicum0_model_dt0h,IF_REAL,"dt0h"),
 IOP("tbvl",hicum0_model_tbvl,IF_REAL,"tbvl"),
 IOP("tef0",hicum0_model_tef0,IF_REAL,"tef0"),
 IOP("gte",hicum0_model_gte,IF_REAL,"gte"),
 IOP("thcs",hicum0_model_thcs,IF_REAL,"thcs"),
 IOP("ahc",hicum0_model_ahc,IF_REAL,"ahc"),
 IOP("tr",hicum0_model_tr,IF_REAL,"tr"),
 IOP("rci0",hicum0_model_rci0,IF_REAL,"rci0"),
 IOP("vlim",hicum0_model_vlim,IF_REAL,"vlim"),
 IOP("vpt",hicum0_model_vpt,IF_REAL,"vpt"),
 IOP("vces",hicum0_model_vces,IF_REAL,"vces"),
 IOP("cjci0",hicum0_model_cjci0,IF_REAL,"cjci0"),
 IOP("vdci",hicum0_model_vdci,IF_REAL,"vdci"),
 IOP("zci",hicum0_model_zci,IF_REAL,"zci"),
 IOP("vptci",hicum0_model_vptci,IF_REAL,"vptci"),
 IOP("cjcx0",hicum0_model_cjcx0,IF_REAL,"cjcx0"),
 IOP("vdcx",hicum0_model_vdcx,IF_REAL,"vdcx"),
 IOP("zcx",hicum0_model_zcx,IF_REAL,"zcx"),
 IOP("vptcx",hicum0_model_vptcx,IF_REAL,"vptcx"),
 IOP("fbc",hicum0_model_fbc,IF_REAL,"fbc"),
 IOP("rbi0",hicum0_model_rbi0,IF_REAL,"rbi0"),
 IOP("vr0e",hicum0_model_vr0e,IF_REAL,"vr0e"),
 IOP("vr0c",hicum0_model_vr0c,IF_REAL,"vr0c"),
 IOP("fgeo",hicum0_model_fgeo,IF_REAL,"fgeo"),
 IOP("rbx",hicum0_model_rbx,IF_REAL,"rbx"),
 IOP("rcx",hicum0_model_rcx,IF_REAL,"rcx"),
 IOP("re",hicum0_model_re,IF_REAL,"re"),
 IOP("itss",hicum0_model_itss,IF_REAL,"itss"),
 IOP("msf",hicum0_model_msf,IF_REAL,"msf"),
 IOP("iscs",hicum0_model_iscs,IF_REAL,"iscs"),
 IOP("msc",hicum0_model_msc,IF_REAL,"msc"),
 IOP("cjs0",hicum0_model_cjs0,IF_REAL,"cjs0"),
 IOP("vds",hicum0_model_vds,IF_REAL,"vds"),
 IOP("zs",hicum0_model_zs,IF_REAL,"zs"),
 IOP("vpts",hicum0_model_vpts,IF_REAL,"vpts"),
 IOP("cbcpar",hicum0_model_cbcpar,IF_REAL,"cbcpar"),
 IOP("cbepar",hicum0_model_cbepar,IF_REAL,"cbepar"),
 IOP("eavl",hicum0_model_eavl,IF_REAL,"eavl"),
 IOP("kavl",hicum0_model_kavl,IF_REAL,"kavl"),
 IOP("kf",hicum0_model_kf,IF_REAL,"kf"),
 IOP("af",hicum0_model_af,IF_REAL,"af"),
 IOP("vgb",hicum0_model_vgb,IF_REAL,"vgb"),
 IOP("vge",hicum0_model_vge,IF_REAL,"vge"),
 IOP("vgc",hicum0_model_vgc,IF_REAL,"vgc"),
 IOP("vgs",hicum0_model_vgs,IF_REAL,"vgs"),
 IOP("f1vg",hicum0_model_f1vg,IF_REAL,"f1vg"),
 IOP("f2vg",hicum0_model_f2vg,IF_REAL,"f2vg"),
 IOP("alt0",hicum0_model_alt0,IF_REAL,"alt0"),
 IOP("kt0",hicum0_model_kt0,IF_REAL,"kt0"),
 IOP("zetact",hicum0_model_zetact,IF_REAL,"zetact"),
 IOP("zetabet",hicum0_model_zetabet,IF_REAL,"zetabet"),
 IOP("zetaci",hicum0_model_zetaci,IF_REAL,"zetaci"),
 IOP("alvs",hicum0_model_alvs,IF_REAL,"alvs"),
 IOP("alces",hicum0_model_alces,IF_REAL,"alces"),
 IOP("zetarbi",hicum0_model_zetarbi,IF_REAL,"zetarbi"),
 IOP("zetarbx",hicum0_model_zetarbx,IF_REAL,"zetarbx"),
 IOP("zetarcx",hicum0_model_zetarcx,IF_REAL,"zetarcx"),
 IOP("zetare",hicum0_model_zetare,IF_REAL,"zetare"),
 IOP("alkav",hicum0_model_alkav,IF_REAL,"alkav"),
 IOP("aleav",hicum0_model_aleav,IF_REAL,"aleav"),
 IOP("flsh",hicum0_model_flsh,IF_INTEGER,"flsh"),
 IOP("rth",hicum0_model_rth,IF_REAL,"rth"),
 IOP("cth",hicum0_model_cth,IF_REAL,"cth"),
 IOP("npn",hicum0_model_npn,IF_INTEGER,"npn"),
 IOP("pnp",hicum0_model_pnp,IF_INTEGER,"pnp"),
 IOP("tnom",hicum0_model_tnom,IF_REAL,"tnom")
};


char *hicum0names[] = { "c",
 "b",
 "e",
 "s",
 "tnode",
 "ci",
 "bi",
 "ei"
};

int hicum0nSize = NUMELEMS(hicum0names);
int hicum0pTSize = NUMELEMS(hicum0pTable);
int hicum0mPTSize = NUMELEMS(hicum0mPTable);
int hicum0iSize = sizeof(hicum0instance);
int hicum0mSize = sizeof(hicum0model);
