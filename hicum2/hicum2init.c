/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Sun, 28 Feb 2010 22:28:36 ***/

#include "config.h"

#include "devdefs.h"


#include "hicum2itf.h"
#include "hicum2ext.h"
#include "hicum2init.h"

SPICEdev hicum2info = {
  {   "hicum2",
      "hicum2 created by adms",
      &hicum2nSize,
      &hicum2nSize,
      hicum2names,
      &hicum2pTSize,
      hicum2pTable,
      &hicum2mPTSize,
      hicum2mPTable,
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

    hicum2par,    /* DEVparam       */
    hicum2mParam,   /* DEVmodParam    */
    hicum2load,     /* DEVload        */
    hicum2setup,    /* DEVsetup       */
    NULL,  /* DEVunsetup     */
    hicum2setup,    /* DEVpzSetup     */
    hicum2temp,     /* DEVtemperature */
    hicum2trunc,    /* DEVtrunc       */
    NULL,         /* DEVfindBranch  */
    hicum2acLoad,   /* DEVacLoad      */
    NULL,         /* DEVaccept      */
    hicum2destroy,  /* DEVdestroy     */
    hicum2mDelete,  /* DEVmodDelete   */
    hicum2delete,   /* DEVdelete      */
    NULL,    /* DEVsetic       */
    hicum2ask,      /* DEVask         */
    hicum2mAsk,     /* DEVmodAsk      */
    hicum2pzLoad,   /* DEVpzLoad      */
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
    &hicum2iSize,   /* DEVinstSize    */
    &hicum2mSize    /* DEVmodSize     */

};

SPICEdev *
get_hicum2_info(void)
{
    return &hicum2info;
}
