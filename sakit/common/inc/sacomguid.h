/*++

Copyright (c) 2002 Microsoft Corporation

Module Name:

    sacomguid.h

Abstract:

    defines the guids for sacom components
Author:

    Serdar Unal (serdarun) 8-April-2002


Notes:


--*/

#ifndef _SACOMGUID_
#define _SACOMGUID_


#if !defined(__midl)

DEFINE_GUID( IID_ISaNvram, 0x38362A9B, 0xB73B, 0x46D2, 0xBB, 0x7A, 0x51, 0xA5, 0x0A, 0xC6, 0xC5, 0x71 );
//38362A9B-B73B-46D2-BB7A-51A50AC6C571
DEFINE_GUID( CLSID_SaNvram,0x1CB8F970, 0x7742, 0x4B1C, 0x80, 0x37, 0x66, 0xD0, 0xCE, 0xA2, 0xAB, 0x57 );
//1CB8F970-7742-4B1C-8037-66D0CEA2AB57

DEFINE_GUID( IID_ISaKeypad, 0xA6B88613, 0x2668, 0x44EF, 0xA4, 0x18, 0x10, 0x9B, 0x06, 0x23, 0x01, 0xE4 );
//A6B88613-2668-44EF-A418-109B062301E4
DEFINE_GUID( CLSID_SaKeypad,0x59BAE4E1, 0x3604, 0x489A, 0xA6, 0x01, 0xAC, 0x95, 0x58, 0xA5, 0x17, 0x3D );
//59BAE4E1-3604-489A-A601-AC9558A5173D

DEFINE_GUID( IID_ISaDisplay, 0x17797AF6, 0xE4AA, 0x46EC, 0xB9, 0xC5, 0xC5, 0xB3, 0x91, 0xFE, 0x19, 0x21 );
//17797AF6-E4AA-46EC-B9C5-C5B391FE1921
DEFINE_GUID( CLSID_SaDisplay,0x750CE1C2, 0x4BE7, 0x44D7, 0x97, 0xBD, 0x16, 0x4F, 0x6C, 0xF0, 0xD3, 0x73 );
//750CE1C2-4BE7-44D7-97BD-164F6CF0D373


#endif


#endif
