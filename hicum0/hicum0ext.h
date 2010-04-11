/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:13 ***/


#ifndef __hicum0EXT_H
#define __hicum0EXT_H


#include "hicum0defs.h"

extern int hicum0par(int,IFvalue*,GENinstance*,IFvalue*);
extern int hicum0mParam(int,IFvalue*,GENmodel*);
extern int hicum0load(GENmodel*,CKTcircuit*);
extern int hicum0setup(SMPmatrix*,GENmodel*,CKTcircuit*,int*);
extern int hicum0guesstopology(SMPmatrix *, CKTcircuit *, hicum0model *, hicum0instance *);
extern int hicum0temp(GENmodel*,CKTcircuit*);
extern int hicum0ask(CKTcircuit *,GENinstance*,int,IFvalue*,IFvalue*);
extern int hicum0mAsk(CKTcircuit*,GENmodel *,int, IFvalue*);
extern int hicum0acLoad(GENmodel *,CKTcircuit*);
extern int hicum0convTest(GENmodel *,CKTcircuit*);
extern int hicum0delete(GENmodel*,IFuid,GENinstance**);
extern int hicum0getic(GENmodel*,CKTcircuit*);
extern int hicum0mDelete(GENmodel**,IFuid,GENmodel*);
extern int hicum0noise(int,int,GENmodel*,CKTcircuit*,Ndata*,double*);
extern int hicum0pzLoad(GENmodel*,CKTcircuit*,SPcomplex*);
extern int hicum0trunc(GENmodel*,CKTcircuit*,double*);
extern int hicum0unsetup(GENmodel*,CKTcircuit*);
extern void hicum0destroy(GENmodel**);

#endif
