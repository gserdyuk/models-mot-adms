/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:45:17 ***/


#ifndef __mextramEXT_H
#define __mextramEXT_H


#include "mextramdefs.h"

extern int mextrampar(int,IFvalue*,GENinstance*,IFvalue*);
extern int mextrammParam(int,IFvalue*,GENmodel*);
extern int mextramload(GENmodel*,CKTcircuit*);
extern int mextramsetup(SMPmatrix*,GENmodel*,CKTcircuit*,int*);
extern int mextramguesstopology(SMPmatrix *, CKTcircuit *, mextrammodel *, mextraminstance *);
extern int mextramtemp(GENmodel*,CKTcircuit*);
extern int mextramask(CKTcircuit *,GENinstance*,int,IFvalue*,IFvalue*);
extern int mextrammAsk(CKTcircuit*,GENmodel *,int, IFvalue*);
extern int mextramacLoad(GENmodel *,CKTcircuit*);
extern int mextramconvTest(GENmodel *,CKTcircuit*);
extern int mextramdelete(GENmodel*,IFuid,GENinstance**);
extern int mextramgetic(GENmodel*,CKTcircuit*);
extern int mextrammDelete(GENmodel**,IFuid,GENmodel*);
extern int mextramnoise(int,int,GENmodel*,CKTcircuit*,Ndata*,double*);
extern int mextrampzLoad(GENmodel*,CKTcircuit*,SPcomplex*);
extern int mextramtrunc(GENmodel*,CKTcircuit*,double*);
extern int mextramunsetup(GENmodel*,CKTcircuit*);
extern void mextramdestroy(GENmodel**);

#endif
