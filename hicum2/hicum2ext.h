/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 14:29:51 ***/


#ifndef __hicum2EXT_H
#define __hicum2EXT_H


#include "hicum2defs.h"

extern int hicum2par(int,IFvalue*,GENinstance*,IFvalue*);
extern int hicum2mParam(int,IFvalue*,GENmodel*);
extern int hicum2load(GENmodel*,CKTcircuit*);
extern int hicum2setup(SMPmatrix*,GENmodel*,CKTcircuit*,int*);
extern int hicum2guesstopology(SMPmatrix *, CKTcircuit *, hicum2model *, hicum2instance *);
extern int hicum2temp(GENmodel*,CKTcircuit*);
extern int hicum2ask(CKTcircuit *,GENinstance*,int,IFvalue*,IFvalue*);
extern int hicum2mAsk(CKTcircuit*,GENmodel *,int, IFvalue*);
extern int hicum2acLoad(GENmodel *,CKTcircuit*);
extern int hicum2convTest(GENmodel *,CKTcircuit*);
extern int hicum2delete(GENmodel*,IFuid,GENinstance**);
extern int hicum2getic(GENmodel*,CKTcircuit*);
extern int hicum2mDelete(GENmodel**,IFuid,GENmodel*);
extern int hicum2noise(int,int,GENmodel*,CKTcircuit*,Ndata*,double*);
extern int hicum2pzLoad(GENmodel*,CKTcircuit*,SPcomplex*);
extern int hicum2trunc(GENmodel*,CKTcircuit*,double*);
extern int hicum2unsetup(GENmodel*,CKTcircuit*);
extern void hicum2destroy(GENmodel**);

#endif
