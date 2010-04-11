/***
*** Interface: ads2002 2.2.0.0
 *** created by: admsXml-2.3.0 - Sun, 11 Apr 2010 16:28:31 ***/


#include "ngspice.h"
#include "devdefs.h"
#include "rtestdefs.h"
#include "suffix.h"
IFparm rtestpTable[] = {

};
IFparm rtestmPTable[] = {
 IOP("d",rtest_model_d,IF_INTEGER,"d"),
 IOP("r1",rtest_model_R1,IF_REAL,"R1")
};


char *rtestnames[] = { "top",
 "low"
};

int rtestnSize = NUMELEMS(rtestnames);
int rtestpTSize = NUMELEMS(rtestpTable);
int rtestmPTSize = NUMELEMS(rtestmPTable);
int rtestiSize = sizeof(rtestinstance);
int rtestmSize = sizeof(rtestmodel);
