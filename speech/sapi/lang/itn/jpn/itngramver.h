/****************************************************************************
 *                                                                          *
 *      VERSION.H        -- Version information for internal builds         *
 *                                                                          *
 *      This file is only modified by the official builder to update the    *
 *      VERSION, VER_PRODUCTVERSION and VER_PRODUCTVERSION_STR values       *
 *                                                                          *
 *      version.h is created on the fly from verhead.bat and vertail.h,     *
 *      with the current version numbers inserted in between                *
 *                                                                          *
 ****************************************************************************/

#ifndef VER_H
/* ver.h defines constants needed by the VS_VERSION_INFO structure */
#include <winver.h>
#endif
#include <windows.h>
#define VER_FILETYPE                VFT_DLL
#define VER_FILESUBTYPE             VFT2_UNKNOWN
#define VER_FILEDESCRIPTION_STR     "Microsoft Speech Recognition ITN"
#define VER_INTERNALNAME_STR        "ITNGRAM"
#define VER_ORIGINALFILENAME_STR    "ITNGRAM.DLL"

/*--------------------------------------------------------------*/
/* the following entry should be phased out in favor of         */
/* VER_PRODUCTVERSION_STR, but is used in the shell today.      */
/*--------------------------------------------------------------*/


/*--------------------------------------------------------------*/
/* this include file is generated by the build process to       */
/* reflect the current build number                             */
/*--------------------------------------------------------------*/

#include "currver.inc"

#define OFFICIAL                    1
#define FINAL                       1

/*--------------------------------------------------------------*/
/* the following section defines values used in the version     */
/* data structure for all files, and which do not change.       */
/*--------------------------------------------------------------*/

/* default is nodebug */
#ifdef _DEBUG
#define VER_DEBUG                   VS_FF_DEBUG
#else
#define VER_DEBUG                   0
#endif

/* default is privatebuild */
#ifndef OFFICIAL
#define VER_PRIVATEBUILD            VS_FF_PRIVATEBUILD
#else
#define VER_PRIVATEBUILD            0
#endif

/* default is prerelease */
#ifndef FINAL
#define VER_PRERELEASE              VS_FF_PRERELEASE
#else
#define VER_PRERELEASE              0
#endif

#define VER_FILEFLAGSMASK           VS_FFI_FILEFLAGSMASK
#define VER_FILEOS                  VOS_DOS_WINDOWS32
#define VER_FILEFLAGS               (VER_PRIVATEBUILD|VER_PRERELEASE|VER_DEBUG)

#define VER_COMPANYNAME_STR         "Microsoft Corporation\0"
#define VER_PRODUCTNAME_STR         "Microsoft� Speech Engine\0"
#define VER_LEGALTRADEMARKS_STR     \
"Microsoft� is a registered trademark of Microsoft Corporation. Windows(TM) is a trademark of Microsoft Corporation.\0"

#include "_common.ver"
