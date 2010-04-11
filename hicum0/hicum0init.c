/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:13 ***/

#include "config.h"

#include "devdefs.h"


#include "hicum0itf.h"
#include "hicum0ext.h"
#include "hicum0init.h"

SPICEdev hicum0info = {
  {   "hicum0",
      "hicum0 created by adms",
      &hicum0nSize,
      &hicum0nSize,
      hicum0names,
      &hicum0pTSize,
      hicum0pTable,
      &hicum0mPTSize,
      hicum0mPTable,
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

    hicum0par,    /* DEVparam       */
    hicum0mParam,   /* DEVmodParam    */
    hicum0load,     /* DEVload        */
    hicum0setup,    /* DEVsetup       */
    NULL,  /* DEVunsetup     */
    hicum0setup,    /* DEVpzSetup     */
    hicum0temp,     /* DEVtemperature */
    hicum0trunc,    /* DEVtrunc       */
    NULL,         /* DEVfindBranch  */
    hicum0acLoad,   /* DEVacLoad      */
    NULL,         /* DEVaccept      */
    hicum0destroy,  /* DEVdestroy     */
    hicum0mDelete,  /* DEVmodDelete   */
    hicum0delete,   /* DEVdelete      */
    NULL,    /* DEVsetic       */
    hicum0ask,      /* DEVask         */
    hicum0mAsk,     /* DEVmodAsk      */
    hicum0pzLoad,   /* DEVpzLoad      */
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
    &hicum0iSize,   /* DEVinstSize    */
    &hicum0mSize    /* DEVmodSize     */

};

SPICEdev *
get_hicum0_info(void)
{
    return &hicum0info;
}
