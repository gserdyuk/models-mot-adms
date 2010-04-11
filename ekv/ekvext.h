/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Wed, 24 Mar 2010 00:50:59 ***/


#ifndef __ekvEXT_H
#define __ekvEXT_H


#include "ekvdefs.h"

extern int ekvpar(int,IFvalue*,GENinstance*,IFvalue*);
extern int ekvmParam(int,IFvalue*,GENmodel*);
extern int ekvload(GENmodel*,CKTcircuit*);
extern int ekvsetup(SMPmatrix*,GENmodel*,CKTcircuit*,int*);
extern int ekvguesstopology(SMPmatrix *, CKTcircuit *, ekvmodel *, ekvinstance *);
extern int ekvtemp(GENmodel*,CKTcircuit*);
extern int ekvask(CKTcircuit *,GENinstance*,int,IFvalue*,IFvalue*);
extern int ekvmAsk(CKTcircuit*,GENmodel *,int, IFvalue*);
extern int ekvacLoad(GENmodel *,CKTcircuit*);
extern int ekvconvTest(GENmodel *,CKTcircuit*);
extern int ekvdelete(GENmodel*,IFuid,GENinstance**);
extern int ekvgetic(GENmodel*,CKTcircuit*);
extern int ekvmDelete(GENmodel**,IFuid,GENmodel*);
extern int ekvnoise(int,int,GENmodel*,CKTcircuit*,Ndata*,double*);
extern int ekvpzLoad(GENmodel*,CKTcircuit*,SPcomplex*);
extern int ekvtrunc(GENmodel*,CKTcircuit*,double*);
extern int ekvunsetup(GENmodel*,CKTcircuit*);
extern void ekvdestroy(GENmodel**);

#endif
