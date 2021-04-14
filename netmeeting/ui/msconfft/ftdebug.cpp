/* ----------------------------------------------------------------------

	Copyright (c) 1994-1995, Microsoft Corporation
	All rights reserved

	ftDebug.cpp

  ---------------------------------------------------------------------- */

#include "mbftpch.h"

#ifdef DEBUG  /* THIS WHOLE FILE */


#define STRING_CASE(val)     case val: pcsz = #val; break

HDBGZONE ghZoneMbft = NULL;
static PTSTR _rgszZonesMbft[] = {
	TEXT("T.127"),
	TEXT("Send"),     // 0x0001  _TRACE_SEND    
	TEXT("Mcs"),      // 0x0002  _TRACE_MCS     
	TEXT("Receive"),  // 0x0004  _TRACE_RECEIVE 
	TEXT("State"),    // 0x0008  _TRACE_STATE   
	TEXT("Init"),     // 0x0010  _TRACE_INIT    
	TEXT("Gcc"),      // 0x0020  _TRACE_GCC     
	TEXT("Pdu"),      // 0x0040  _TRACE_PDU     
	TEXT("Delete"),   // 0x0080  _TRACE_DELETE  
	TEXT("Api"),      // 0x0100  _TRACE_API     
	TEXT("Compress"), // 0x0200  _TRACE_COMPRESS
	TEXT("Debug"),    // 0x0400  _TRACE_OTHER
};



///////////////////////////////////////////////////////////////////////////


VOID InitDebug(void)
{
	DBGINIT(&ghZoneMbft, _rgszZonesMbft);
	InitDebugModule(TEXT("FT"));
}


VOID DeInitDebugMbft(void)
{
	ExitDebugModule();
	DBGDEINIT(&ghZoneMbft);
}



void DbgMsgMbft(PCHAR pszFormat,...)    
{
	va_list arglist;

	va_start(arglist, pszFormat);
	DbgPrintf("mbft", pszFormat, arglist);
	va_end(arglist);
}


PCSTR FAR PASCAL GetMbftRcString(DWORD dwRc)
{
	PCSTR pcsz;
	static char sz[128] = {0};

	switch (dwRc)
		{
	default:
	{
		wsprintf(sz, "iMBFT err (%d)", dwRc);
		return sz;
	}
	STRING_CASE(iMBFT_OK);
	STRING_CASE(iMBFT_FIRST_ERROR);
	STRING_CASE(iMBFT_NOT_INITIALIZED);
	STRING_CASE(iMBFT_ALREADY_INITIALIZED);
	STRING_CASE(iMBFT_INVALID_SESSION_ID);
	STRING_CASE(iMBFT_INVALID_ATTACHMENT_HANDLE);
	STRING_CASE(iMBFT_NO_MORE_RECIPIENTS);
	STRING_CASE(iMBFT_NO_MORE_FILES);
	STRING_CASE(iMBFT_INVALID_EVENT_HANDLE);
	STRING_CASE(iMBFT_INVALID_FILE_HANDLE);
	STRING_CASE(iMBFT_INSUFFICIENT_DISK_SPACE);
	STRING_CASE(iMBFT_FILE_NOT_FOUND);
	STRING_CASE(iMBFT_FILE_IO_ERROR);
	STRING_CASE(iMBFT_MEMORY_ALLOCATION_ERROR);
	STRING_CASE(iMBFT_ASN1_ENCODING_ERROR);
	STRING_CASE(iMBFT_RECIPIENT_NOT_FOUND);
	STRING_CASE(iMBFT_SENDER_ABORTED);
	STRING_CASE(iMBFT_RECEIVER_ABORTED);
	STRING_CASE(iMBFT_RECEIVER_REJECTED);
	STRING_CASE(iMBFT_INVALID_PARAMETERS);
	STRING_CASE(iMBFT_COMPRESSION_ERROR);
	STRING_CASE(iMBFT_DECOMPRESSION_ERROR);
	STRING_CASE(iMBFT_INVALID_PATH);
	STRING_CASE(iMBFT_FILE_ACCESS_DENIED);
	STRING_CASE(iMBFT_FILE_HARD_IO_ERROR);
	STRING_CASE(iMBFT_FILE_SHARING_VIOLATION);
	STRING_CASE(iMBFT_DIRECTORY_FULL_ERROR);
	STRING_CASE(iMBFT_TOO_MANY_OPEN_FILES);
	STRING_CASE(iMBFT_OPERATION_IN_PROGRESS);
	STRING_CASE(iMBFT_INSUFFICIENT_PRIVILEGE);
	STRING_CASE(iMBFT_CONDUCTOR_ABORTED);
	STRING_CASE(iMBFT_PACKET_SIZE_ERROR);
	STRING_CASE(iMBFT_UNKNOWN_ERROR);
		}
	return pcsz;
}

LPCTSTR GetMcsErrorString(MCSError mcsError)
{
	LPCTSTR pcsz;
	static CHAR sz[MAX_PATH];

	switch (mcsError)
		{
	default:
		wsprintf(sz, "MCSError %d", mcsError);
		pcsz = sz;
		return pcsz;
	STRING_CASE(MCS_NO_ERROR);
	STRING_CASE(MCS_COMMAND_NOT_SUPPORTED);
	STRING_CASE(MCS_NOT_INITIALIZED);
	STRING_CASE(MCS_ALREADY_INITIALIZED);
	STRING_CASE(MCS_NO_TRANSPORT_STACKS);
	STRING_CASE(MCS_DOMAIN_ALREADY_EXISTS);
	STRING_CASE(MCS_NO_SUCH_DOMAIN);
	STRING_CASE(MCS_USER_NOT_ATTACHED);
	STRING_CASE(MCS_NO_SUCH_USER);
	STRING_CASE(MCS_TRANSMIT_BUFFER_FULL);
	STRING_CASE(MCS_NO_SUCH_CONNECTION);
	STRING_CASE(MCS_DOMAIN_NOT_HIERARCHICAL);
	STRING_CASE(MCS_INVALID_ADDRESS_PREFIX);
	STRING_CASE(MCS_ALLOCATION_FAILURE);
	STRING_CASE(MCS_INVALID_PARAMETER);
	STRING_CASE(MCS_CALLBACK_NOT_PROCESSED);
	STRING_CASE(MCS_DOMAIN_MERGING);
//	STRING_CASE(MCS_INVALID_TRANSPORT);
//	STRING_CASE(MCS_TRANSPORT_ALREADY_LOADED);
//	STRING_CASE(MCS_TRANSPORT_BUSY);
	STRING_CASE(MCS_TRANSPORT_NOT_READY);
	STRING_CASE(MCS_DOMAIN_PARAMETERS_UNACCEPTABLE);
		}
	return pcsz;
}



#endif /* DEBUG */