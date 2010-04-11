/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:30:49 ***/


#ifndef __psp102EXT_H
#define __psp102EXT_H


#include "psp102defs.h"

extern int psp102par(int,IFvalue*,GENinstance*,IFvalue*);
extern int psp102mParam(int,IFvalue*,GENmodel*);
extern int psp102load(GENmodel*,CKTcircuit*);
extern int psp102setup(SMPmatrix*,GENmodel*,CKTcircuit*,int*);
extern int psp102guesstopology(SMPmatrix *, CKTcircuit *, psp102model *, psp102instance *);
extern int psp102temp(GENmodel*,CKTcircuit*);
extern int psp102ask(CKTcircuit *,GENinstance*,int,IFvalue*,IFvalue*);
extern int psp102mAsk(CKTcircuit*,GENmodel *,int, IFvalue*);
extern int psp102acLoad(GENmodel *,CKTcircuit*);
extern int psp102convTest(GENmodel *,CKTcircuit*);
extern int psp102delete(GENmodel*,IFuid,GENinstance**);
extern int psp102getic(GENmodel*,CKTcircuit*);
extern int psp102mDelete(GENmodel**,IFuid,GENmodel*);
extern int psp102noise(int,int,GENmodel*,CKTcircuit*,Ndata*,double*);
extern int psp102pzLoad(GENmodel*,CKTcircuit*,SPcomplex*);
extern int psp102trunc(GENmodel*,CKTcircuit*,double*);
extern int psp102unsetup(GENmodel*,CKTcircuit*);
extern void psp102destroy(GENmodel**);

#endif
