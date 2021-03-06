///////////////////////////////////////////////////////////////////////////
//
// Copyright(C) 1999 Microsoft Corporation all rights reserved.
//
// Module:      appmgrutils.h
//
// Project:     Chameleon
//
// Description: Appliance Manager Utility Functions
//
// Log:
//
// When         Who    What
// ----         ---    ----
// 02/08/1999   TLP    Initial Version
//
///////////////////////////////////////////////////////////////////////////////

#ifndef __INC_APPMGR_UTILS_H_
#define __INC_APPMGR_UTILS_H_

#include "resource.h"
#include <wbemprov.h>

/////////////////////////////////////////////////////////////////////////////
// Global Helper Functions
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
BSTR GetObjectClass(
              /*[in]*/ LPWSTR  pszObjectPath
                   );

/////////////////////////////////////////////////////////////////////////////
BSTR GetObjectKey(
             /*[in]*/ LPWSTR  pszObjectPath
                    );

/////////////////////////////////////////////////////////////////////////////
void SetNameSpace(
            /*[in*/ IWbemServices* pNameSpace
                 );

/////////////////////////////////////////////////////////////////////////////
IWbemServices* GetNameSpace(void);


/////////////////////////////////////////////////////////////////////////////
void SetEventSink(
            /*[in*/ IWbemObjectSink* pSink
                 );

/////////////////////////////////////////////////////////////////////////////
IWbemObjectSink* GetEventSink(void);


#endif // __INC_APPMGR_UTILS_H_
