/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:12:43 ***/

#include "config.h"

#include "devdefs.h"


#include "ekvitf.h"
#include "ekvext.h"
#include "ekvinit.h"

SPICEdev ekvinfo = {
  {   "ekv",
      "ekv created by adms",
      &ekvnSize,
      &ekvnSize,
      ekvnames,
      &ekvpTSize,
      ekvpTable,
      &ekvmPTSize,
      ekvmPTable,
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

    ekvpar,    /* DEVparam       */
    ekvmParam,   /* DEVmodParam    */
    ekvload,     /* DEVload        */
    ekvsetup,    /* DEVsetup       */
    NULL,  /* DEVunsetup     */
    ekvsetup,    /* DEVpzSetup     */
    ekvtemp,     /* DEVtemperature */
    ekvtrunc,    /* DEVtrunc       */
    NULL,         /* DEVfindBranch  */
    ekvacLoad,   /* DEVacLoad      */
    NULL,         /* DEVaccept      */
    ekvdestroy,  /* DEVdestroy     */
    ekvmDelete,  /* DEVmodDelete   */
    ekvdelete,   /* DEVdelete      */
    NULL,    /* DEVsetic       */
    ekvask,      /* DEVask         */
    ekvmAsk,     /* DEVmodAsk      */
    ekvpzLoad,   /* DEVpzLoad      */
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
    &ekviSize,   /* DEVinstSize    */
    &ekvmSize    /* DEVmodSize     */

};

SPICEdev *
get_ekv_info(void)
{
    return &ekvinfo;
}
