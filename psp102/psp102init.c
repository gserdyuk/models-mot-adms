/***
*** Interface: ngspice 1.0.0.0
 *** created by: admsXml-2.3.0 - Mon, 12 Apr 2010 19:24:54 ***/

#include "config.h"

#include "devdefs.h"


#include "psp102itf.h"
#include "psp102ext.h"
#include "psp102init.h"

SPICEdev psp102info = {
  {   "psp102",
      "psp102 created by adms",
      &psp102nSize,
      &psp102nSize,
      psp102names,
      &psp102pTSize,
      psp102pTable,
      &psp102mPTSize,
      psp102mPTable,
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

    psp102par,    /* DEVparam       */
    psp102mParam,   /* DEVmodParam    */
    psp102load,     /* DEVload        */
    psp102setup,    /* DEVsetup       */
    NULL,  /* DEVunsetup     */
    psp102setup,    /* DEVpzSetup     */
    psp102temp,     /* DEVtemperature */
    psp102trunc,    /* DEVtrunc       */
    NULL,         /* DEVfindBranch  */
    psp102acLoad,   /* DEVacLoad      */
    NULL,         /* DEVaccept      */
    psp102destroy,  /* DEVdestroy     */
    psp102mDelete,  /* DEVmodDelete   */
    psp102delete,   /* DEVdelete      */
    NULL,    /* DEVsetic       */
    psp102ask,      /* DEVask         */
    psp102mAsk,     /* DEVmodAsk      */
    psp102pzLoad,   /* DEVpzLoad      */
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
    &psp102iSize,   /* DEVinstSize    */
    &psp102mSize    /* DEVmodSize     */

};

SPICEdev *
get_psp102_info(void)
{
    return &psp102info;
}
