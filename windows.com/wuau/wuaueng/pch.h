//#pragma warning( push, 3 )
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <stdio.h>
#include <windows.h>
#include <comdef.h>
#include "iucommon.h"
#include "criticalfixreg.h"
#include "audirectory.h"
#include "wuaulib.h"
#include "caustate.h"
#include "wuaueng.h"
#include "AUSessions.h"
#include "aucatalog.h"
#include "wuaustate.h"
#include "aucpl.h"
#include "prsheet.h"
#include "resource.h"
#include "wuverp.h"
#include "auservinternals.h"
#include <shlobj.h>
#include <advpub.h>
#include <sfcapip.h>
#include <shlwapi.h>
#include <tchar.h>
#include "download.h"
#include "wuauengi.h"
#include <initguid.h>
#include <Wtsapi32.h>
#include "Updates.h"
extern "C"
{
#include <winsta.h>
#include <syslib.h>
}
#include "ausvc.h"
#include <winsock2.h>
#include <aumsgs.h>
#include <auregkeys.h>
#include <auwait.h>
#include <safefunc.h>
#include <RedirectUtil.h>
#include <windowsx.h>
#include "AUEventLog.h"
#include "schemamisc.h"
#include "auxml.h"
#include "audownload.h"
#include "logging.h"
#include "aucomres.h"
#include "schemakeys.h"
#include "CAUWait.h"
#include "ausens.h"
#include "tscompat.h"
#include "service.h"
#include <userenv.h>
#include "AUEventMsgs.h"
#include "memutil.h"
#include <msiquery.h>
#include <msi.h>
#include <sddl.h>
#include "fileutil.h"
#include "WUTestKeys.h"
#include "wusafefn.h"
#include "MISTSafe.h"

//#pragma warning( pop ) 
