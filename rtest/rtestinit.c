/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:46:34 ***/

#include "config.h"

#include "devdefs.h"


#include "rtestitf.h"
#include "rtestext.h"
#include "rtestinit.h"

SPICEdev rtestinfo = {
  {   "rtest",
      "rtest created by adms",
      &rtestnSize,
      &rtestnSize,
      rtestnames,
      &rtestpTSize,
      rtestpTable,
      &rtestmPTSize,
      rtestmPTable,
#ifdef XSPICE
/*----  Fixed by SDB 5.2.2003 to enable XSPICE/tclspice integration  -----*/
        NULL,  /* This is a SPICE device, it has no MIF info data */

        0,     /* This is a SPICE device, it has no MIF info data */
        NULL,  /* This is a SPICE device, it has no MIF info data */

        0,     /* This is a SPICE device, it has no MIF info data */
        NULL,  /* This is a SPICE device, it has no MIF info data */

        0,     /* This is a SPICE device, it has no MIF info data */
        NULL,  /* This is a SPICE device, it has no MIF info data */
/*---------------------------  End of SDB fix   -------------------------*/
#endif
      DEV_DEFAULT
  },

    rtestpar,    /* DEVparam       */
    rtestmParam,   /* DEVmodParam    */
    rtestload,     /* DEVload        */
    rtestsetup,    /* DEVsetup       */
    NULL,  /* DEVunsetup     */
    rtestsetup,    /* DEVpzSetup     */
    rtesttemp,     /* DEVtemperature */
    rtesttrunc,    /* DEVtrunc       */
    NULL,         /* DEVfindBranch  */
    rtestacLoad,   /* DEVacLoad      */
    NULL,         /* DEVaccept      */
    rtestdestroy,  /* DEVdestroy     */
    rtestmDelete,  /* DEVmodDelete   */
    rtestdelete,   /* DEVdelete      */
    NULL,    /* DEVsetic       */
    rtestask,      /* DEVask         */
    rtestmAsk,     /* DEVmodAsk      */
    rtestpzLoad,   /* DEVpzLoad      */
    NULL, /* DEVconvTest    */
    NULL,         /* DEVsenSetup    */
    NULL,         /* DEVsenLoad     */
    NULL,         /* DEVsenUpdate   */
    NULL,         /* DEVsenAcLoad   */
    NULL,         /* DEVsenPrint    */
    NULL,         /* DEVsenTrunc    */
    NULL,         /* DEVdisto       */
    NULL,         /* DEVnoise       */
#ifdef CIDER
    NULL,         /* DEVdump       */
    NULL,         /* DEVacct       */
#endif                                                         
    &rtestiSize,   /* DEVinstSize    */
    &rtestmSize    /* DEVmodSize     */

};

SPICEdev *
get_rtest_info(void)
{
    return &rtestinfo;
}
