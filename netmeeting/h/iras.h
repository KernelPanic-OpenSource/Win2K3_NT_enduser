/*
 *  	File: iras.h
 *
 *      Gatekeeper status interface header file
 *
 *		Revision History:
 *
 *		08/28/98	mikev	created 
 *      
 */

#ifndef _IRAS_H
#define _IRAS_H

#include <pshpack8.h> /* Assume 8 byte packing throughout */

// RAS event codes
#define RAS_REG_TIMEOUT     0  // GK did not respond
#define RAS_REG_CONFIRM     1  // received RCF (registration confirmed)
#define RAS_UNREG_CONFIRM   2  // received UCF (unregistration confirmed) 
#define RAS_REJECTED        3  // received RRJ (registration rejected)
#define RAS_UNREG_REQ       4  // received URQ 
                                        // (unregistration request - means that  
                                        // gatekeeper booted the endpoint off)

// Note that if RRJ or URQ is received, no calls can be placed until 
// successfully registering.

// reason codes for RRJ.  Note that these map to the ASN.1 defined reason
// values in H.225. But the ASN.1 headers aren't exposed to the world.
// It would cause build nightmares to do so. The headers are generated by the 
// ASN.1 compiler from ASN.1 source that is sometimes updated. Sometimes
// duplicate names in the source result in name decoration in the generated headers
// and that causes compilation errors in anything that references what changed.

// fortunately, the code deep in the stack that actually propagates these upward 
// IS exposed to both headers, and has compile-time tests for equality.  If 
// these don't match the real codes, that code will not compile

#define RRJ_DISCOVERY_REQ       1  // discovery required 
#define RRJ_INVALID_REVISION    2
#define RRJ_INVALID_CALL_ADDR   3
#define RRJ_INVALID_RAS_ADDR    4
#define RRJ_DUPLICATE_ALIAS     5
#define RRJ_INVALID_TERMINAL_TYPE   6
#define RRJ_UNDEFINED           7
#define RRJ_TRANSPORT_NOT_SUPPORTED 8
#define RRJ_TRANSPORT_QOS_NOT_SUPPORTED 9
#define RRJ_RESOURCE_UNAVAILABLE    10
#define RRJ_INVALID_ALIAS       11
#define RRJ_SECURITY_DENIAL     12

// reason codes for GK initiated Unregistration Request

#define URQ_REREG_REQUIRED  1  // GK wants another registration
#define URQ_TTL_EXPIRED     2  // TimeToLive expired
#define URQ_SECURITY_DENIAL 3
#define URQ_UNDEFINED       4 

// reason codes for Admission Reject (ARJ)

#define ARJ_CALLEE_NOT_REGISTERED    1
#define ARJ_INVALID_PERMISSION       2
#define ARJ_REQUEST_DENIED           3
#define ARJ_UNDEFINED                4
#define ARJ_CALLER_NOT_REGISTERED    5
#define ARJ_ROUTE_TO_GK              6
#define ARJ_INVALID_ENDPOINT_ID      7
#define ARJ_RESOURCE_UNAVAILABLE     8
#define ARJ_SECURTY_DENIAL           9
#define ARJ_QOS_CONTROL_NOT_SUPPORTED 10
#define ARJ_INCOMPLETE_ADDRESS       11
#define MAX_ARJ_H225_REASON          ARJ_INCOMPLETE_ADDRESS
// The following is not a real H.225 reason code for ARJ.   
// It is generated internally when there is an ARJ timeout
#define ARJ_TIMEOUT MAX_ARJ_H225_REASON+1

typedef  VOID (__stdcall *RASNOTIFYPROC)(DWORD dwRasEvent, HRESULT hReason);
   

#include <poppack.h> /* End byte packing */
#endif	//#ifndef _IRAS_H



