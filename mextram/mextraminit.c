/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:45:17 ***/

#include "config.h"

#include "devdefs.h"


#include "mextramitf.h"
#include "mextramext.h"
#include "mextraminit.h"

SPICEdev mextraminfo = {
  {   "mextram",
      "mextram created by adms",
      &mextramnSize,
      &mextramnSize,
      mextramnames,
      &mextrampTSize,
      mextrampTable,
      &mextrammPTSize,
      mextrammPTable,
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

    mextrampar,    /* DEVparam       */
    mextrammParam,   /* DEVmodParam    */
    mextramload,     /* DEVload        */
    mextramsetup,    /* DEVsetup       */
    NULL,  /* DEVunsetup     */
    mextramsetup,    /* DEVpzSetup     */
    mextramtemp,     /* DEVtemperature */
    mextramtrunc,    /* DEVtrunc       */
    NULL,         /* DEVfindBranch  */
    mextramacLoad,   /* DEVacLoad      */
    NULL,         /* DEVaccept      */
    mextramdestroy,  /* DEVdestroy     */
    mextrammDelete,  /* DEVmodDelete   */
    mextramdelete,   /* DEVdelete      */
    NULL,    /* DEVsetic       */
    mextramask,      /* DEVask         */
    mextrammAsk,     /* DEVmodAsk      */
    mextrampzLoad,   /* DEVpzLoad      */
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
    &mextramiSize,   /* DEVinstSize    */
    &mextrammSize    /* DEVmodSize     */

};

SPICEdev *
get_mextram_info(void)
{
    return &mextraminfo;
}
