/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:46:34 ***/


#ifndef __rtestEXT_H
#define __rtestEXT_H


#include "rtestdefs.h"

extern int rtestpar(int,IFvalue*,GENinstance*,IFvalue*);
extern int rtestmParam(int,IFvalue*,GENmodel*);
extern int rtestload(GENmodel*,CKTcircuit*);
extern int rtestsetup(SMPmatrix*,GENmodel*,CKTcircuit*,int*);
extern int rtestguesstopology(SMPmatrix *, CKTcircuit *, rtestmodel *, rtestinstance *);
extern int rtesttemp(GENmodel*,CKTcircuit*);
extern int rtestask(CKTcircuit *,GENinstance*,int,IFvalue*,IFvalue*);
extern int rtestmAsk(CKTcircuit*,GENmodel *,int, IFvalue*);
extern int rtestacLoad(GENmodel *,CKTcircuit*);
extern int rtestconvTest(GENmodel *,CKTcircuit*);
extern int rtestdelete(GENmodel*,IFuid,GENinstance**);
extern int rtestgetic(GENmodel*,CKTcircuit*);
extern int rtestmDelete(GENmodel**,IFuid,GENmodel*);
extern int rtestnoise(int,int,GENmodel*,CKTcircuit*,Ndata*,double*);
extern int rtestpzLoad(GENmodel*,CKTcircuit*,SPcomplex*);
extern int rtesttrunc(GENmodel*,CKTcircuit*,double*);
extern int rtestunsetup(GENmodel*,CKTcircuit*);
extern void rtestdestroy(GENmodel**);

#endif
