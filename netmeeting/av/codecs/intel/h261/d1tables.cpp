/* *************************************************************************
**    INTEL Corporation Proprietary Information
**
**    This listing is supplied under the terms of a license
**    agreement with INTEL Corporation and may not be copied
**    nor disclosed except in accordance with the terms of
**    that agreement.
**
**    Copyright (c) 1995 Intel Corporation.
**    All Rights Reserved.
**
** *************************************************************************
*/

;// $Author:   KMILLS  $
;// $Date:   22 Dec 1995 14:41:08  $
;// $Archive:   S:\h26x\src\dec\d1tables.cpv  $
;// $Header:   S:\h26x\src\dec\d1tables.cpv   1.11   22 Dec 1995 14:41:08   KMILLS  $
;// $Log:   S:\h26x\src\dec\d1tables.cpv  $
// 
//    Rev 1.11   22 Dec 1995 14:41:08   KMILLS
// 
// added new copyright notice
// 
//    Rev 1.10   26 Oct 1995 15:31:18   SCDAY
// Changed MV tables
// 
//    Rev 1.9   23 Oct 1995 16:14:20   SCDAY
// changed minor tables for >8 bit processing
// 
//    Rev 1.8   20 Oct 1995 13:16:52   SCDAY
// 
// Changed motion vector tables and the type for gTAB_MV_ADJUST
// 
//    Rev 1.7   18 Oct 1995 14:50:26   AKASAI
// Fixed bug in tcoeff tables.  tc1a table was missing a set of 8 entries.
// Had only 504 entries instead of 512.
// 
//    Rev 1.6   18 Oct 1995 11:01:26   SCDAY
// 
// Added motion vector table
// 
//    Rev 1.5   16 Oct 1995 13:51:02   SCDAY
// Merged in d1akktbl.cpp
// 
//    Rev 1.4   09 Oct 1995 08:21:30   SCDAY
// fixed gTAB_ZZ_RUN
// 
//    Rev 1.3   21 Sep 1995 18:05:00   AKASAI
// Updated Inverse quantization table, should now match version in d3tables.cp
// 
//    Rev 1.2   20 Sep 1995 15:34:14   SCDAY
// 
// added Mtype, MVD, CBP tables
// 
//    Rev 1.1   19 Sep 1995 15:22:14   SCDAY
// added MBA tables
// 
//    Rev 1.0   11 Sep 1995 13:51:54   SCDAY
// Initial revision.
// 
//    Rev 1.5   31 Aug 1995 16:42:48   CZHU
// Changed the format of MVD variable length decoder tables: major and minor
// 
//    Rev 1.4   24 Aug 1995 15:34:28   CZHU
// Fixed bugs in the inverse quant table, and TCOEFF minor tables 
// 
//    Rev 1.3   22 Aug 1995 17:39:00   CZHU
// 
// Modified the TCOEFF_MAJOR and MINOR tables for embedded run values.
// 
//    Rev 1.2   18 Aug 1995 15:01:00   CZHU
// Added run length tables ready for joint opt IDCT and RLD+ZZ
// 
//    Rev 1.1   16 Aug 1995 14:25:10   CZHU
// 
// Rebuild the tables for IQ, RLD for Transform coefficients
// 
//    Rev 1.0   11 Aug 1995 15:50:56   CZHU
// Initial revision.
;// 
;//    Rev 1.1   02 Aug 1995 11:47:04   CZHU
;// 
;// Added table for inverse quantization and RLD-ZZ
;// 
;//    Rev 1.0   31 Jul 1995 15:46:20   CZHU
;// Initial revision.

//Initialize global tables shared by all decoder instances:
//Huffman tables, etc
//declare the global static tables here

#include "precomp.h"

/* H261 tables */

U16 gTAB_MBA_MAJOR[256]= {
	
0xff18,				/* 0x00 */
0x0b22,
0xff00,
0xff10,
0xff08,
0xff00,
0x080f,
0x080e,

0x080d,
0x080c,
0x080b,
0x080a,
0x0709,
0x0709,
0x0708,
0x0708,

0x0507,				/* 0x10 */
0x0507,
0x0507,
0x0507,
0x0507,
0x0507,
0x0507,
0x0507,

0x0506,
0x0506,
0x0506,
0x0506,
0x0506,
0x0506,
0x0506,
0x0506,

0x0405,				/* 0x20 */
0x0405,
0x0405,
0x0405,
0x0405,
0x0405,
0x0405,
0x0405,

0x0405,
0x0405,
0x0405,
0x0405,
0x0405,
0x0405,
0x0405,
0x0405,

0x0404,				/* 0x30 */
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,

0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,

0x0303,				/* 0x40 */
0x0303,
0x0303,
0x0303,
0x0303,
0x0303,
0x0303,
0x0303,

0x0303,
0x0303,
0x0303,
0x0303,
0x0303,
0x0303,
0x0303,
0x0303,

0x0303,				/* 0x50 */
0x0303,	
0x0303,
0x0303,
0x0303,
0x0303,
0x0303,
0x0303,

0x0303,
0x0303,
0x0303,
0x0303,
0x0303,
0x0303,
0x0303,
0x0303,

0x0302,				/* 0x60 */
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,

0x0302,
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,

0x0302,				/* 0x70 */
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,

0x0302,
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,
0x0302,

0x0101,				/* 0x80 */
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,				/* 0x90 */
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,				/* 0xa0 */
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,				/* 0xb0 */
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,				/* 0xc0 */
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,				/* 0xd0 */
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,				/* 0xe0 */
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,				/* 0xf0 */
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,

0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101,
0x0101
};

U16 gTAB_MBA_MINOR[32]= {
0x0a13,			/* 16 - 19 */
0x0a13,
0x0a12,
0x0a12,
0x0a11,
0x0a11,
0x0a10,
0x0a10,

0x0b19,			/* 20 - 25 */
0x0b18,
0x0b17,
0x0b16,
0x0a15,
0x0a15,
0x0a14,
0x0a14,

0x0b21,			/* 26 - 33 */
0x0b20,
0x0b1f,
0x0b1e,
0x0b1d,
0x0b1c,
0x0b1b,
0x0b1a,

0x1023,			/* code 35  */
0x1023,
0x1023,
0x1023,
0x1023,
0x1023,
0x1023,
0x1023
};

U16 gTAB_MTYPE_MAJOR[]={
0xff00,				/* 0x00 */
0x0805,
0x0701,
0x0701,
0x0609,
0x0609,
0x0609,
0x0609,

0x0503,
0x0503,
0x0503,
0x0503,
0x0503,
0x0503,
0x0503,
0x0503,

0x0400,				/* 0x10 */
0x0400,
0x0400,
0x0400,
0x0400,
0x0400,
0x0400,
0x0400,

0x0400,
0x0400,
0x0400,
0x0400,
0x0400,
0x0400,
0x0400,
0x0400,

0x0307,				/* 0x20 */
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,

0x0307,
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,

0x0307,				/* 0x30 */
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,

0x0307,
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,
0x0307,

0x0208,				/* 0x40 */
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,

0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,

0x0208,				/* 0x50 */
0x0208,	
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,

0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,

0x0208,				/* 0x60 */
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,

0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,

0x0208,				/* 0x70 */
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,

0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,
0x0208,

0x0102,				/* 0x80 */
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,				/* 0x90 */
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,				/* 0xa0 */
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,				/* 0xb0 */
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,				/* 0xc0 */
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,				/* 0xd0 */
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,				/* 0xe0 */
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,				/* 0xf0 */
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,

0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102,
0x0102
};

U16 gTAB_MTYPE_MINOR[]={
0x0800,
0x0a06,
0x0904,
0x0904
};

U16 gTAB_MVD_MAJOR[]={
0xffff,				/* 0x00 */
0xffff,
0xffff,
0xff00,
0xff08,
0xff10,
0x0807,
0x08f9,

0x0806,
0x08fa,
0x0805,
0x08fb,
0x0704,
0x0704,
0x07fc,
0x07fc,

0x0503,				/* 0x10 */
0x0503,
0x0503,
0x0503,
0x0503,
0x0503,
0x0503,
0x0503,

0x05fd,
0x05fd,
0x05fd,
0x05fd,
0x05fd,
0x05fd,
0x05fd,
0x05fd,

0x0402,				/* 0x20 */
0x0402,
0x0402,
0x0402,
0x0402,
0x0402,
0x0402,
0x0402,

0x0402,
0x0402,
0x0402,
0x0402,
0x0402,
0x0402,
0x0402,
0x0402,

0x04fe,				/* 0x30 */
0x04fe,
0x04fe,
0x04fe,
0x04fe,
0x04fe,
0x04fe,
0x04fe,

0x04fe,
0x04fe,
0x04fe,
0x04fe,
0x04fe,
0x04fe,
0x04fe,
0x04fe,

0x0301,				/* 0x40 */
0x0301,
0x0301,
0x0301,
0x0301,
0x0301,
0x0301,
0x0301,

0x0301,
0x0301,
0x0301,
0x0301,
0x0301,
0x0301,
0x0301,
0x0301,

0x0301,				/* 0x50 */
0x0301,	
0x0301,
0x0301,
0x0301,
0x0301,
0x0301,
0x0301,

0x0301,
0x0301,
0x0301,
0x0301,
0x0301,
0x0301,
0x0301,
0x0301,

0x03ff,				/* 0x60 */
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,

0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,

0x03ff,				/* 0x70 */
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,

0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,
0x03ff,

0x0100,				/* 0x80 */
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,				/* 0x90 */
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,				/* 0xa0 */
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,				/* 0xb0 */
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,				/* 0xc0 */
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,				/* 0xd0 */
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,				/* 0xe0 */
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,				/* 0xf0 */
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,

0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100,
0x0100
};

U16 gTAB_MVD_MINOR[]={
0x0bff,			/* 0000 0011 */
0x0bf0,
0x0b0f,
0x0bf1,
0x0b0e,
0x0bf2,
0x0b0d,
0x0bf3,

0x0b0c,			/* 0000 0100 */
0x0bf4,
0x0b0b,
0x0bf5,
0x0a0a,
0x0a0a,
0x0af6,
0x0af6,

0x0a09,			/* 0000 0101 */
0x0a09,
0x0af7,
0x0af7,
0x0a08,
0x0a08,
0x0af8,
0x0af8
};

U16 gTAB_CBP[]={
0x00ff,			/* 0000 0000 x */
0x00ff,
0x0927,			/* 0000 0001 0 */
0x091b,			/* 0000 0001 1 */
0x093b,			/* 0000 0010 0 */
0x0937,			/* 0000 0010 1 */
0x092f,			/* 0000 0011 0 */
0x091f,			/* 0000 0011 1 */
0x083a,			/* 0000 0100 x */
0x083a,
0x0836,			/* 0000 0101 x */
0x0836,
0x082e,			/* 0000 0110 x */
0x082e,
0x081e,			/* 0000 0111 x */
0x081e,

0x0839,			/* 0000 1000 x */
0x0839,
0x0835,			/* 0000 1001 x */
0x0835,
0x082d,			/* 0000 1010 x */
0x082d,
0x081d,			/* 0000 1011 x */
0x081d,
0x0826,			/* 0000 1100 x */
0x0826,
0x081a,			/* 0000 1101 x */
0x081a,
0x0825,			/* 0000 1110 x */
0x0825,
0x0819,			/* 0000 1111 x */
0x0819,

0x082b,			/* 0001 0000 x */
0x082b,
0x0817,			/* 0001 0001 x */
0x0817,
0x0833,			/* 0001 0010 x */
0x0833,
0x080f,			/* 0001 0011 x */
0x080f,
0x082a,			/* 0001 0100 x */
0x082a,
0x0816,			/* 0001 0101 x */
0x0816,
0x0832,			/* 0001 0110 x */
0x0832,
0x080e,			/* 0001 0111 x */
0x080e,

0x0829,			/* 0001 1000 x */
0x0829,
0x0815,			/* 0001 1001 x */
0x0815,
0x0831,			/* 0001 1010 x */
0x0831,
0x080d,			/* 0001 1011 x */
0x080d,
0x0823,			/* 0001 1100 x */
0x0823,
0x0813,			/* 0001 1101 x */
0x0813,
0x080b,			/* 0001 1110 x */
0x080b,
0x0807,			/* 0001 1111 x */
0x0807,

0x0722,			/* 0010 000x x */
0x0722,
0x0722,
0x0722,
0x0712,			/* 0010 001x x */
0x0712,
0x0712,
0x0712,
0x070a,			/* 0010 010x x */
0x070a,
0x070a,
0x070a,
0x0706,			/* 0010 011x x */
0x0706,
0x0706,
0x0706,

0x0721,			/* 0010 100x x */
0x0721,
0x0721,
0x0721,
0x0711,			/* 0010 101x x */
0x0711,
0x0711,
0x0711,
0x0709,			/* 0010 110x x */
0x0709,
0x0709,
0x0709,
0x0705,			/* 0010 111x x */
0x0705,
0x0705,
0x0705,

0x063f,			/* 0011 00xx x */
0x063f,
0x063f,
0x063f,
0x063f,
0x063f,
0x063f,
0x063f,
0x0603,			/* 0011 01xx x */
0x0603,
0x0603,
0x0603,
0x0603,
0x0603,
0x0603,
0x0603,

0x0624,			/* 0011 10xx x */
0x0624,
0x0624,
0x0624,
0x0624,
0x0624,
0x0624,
0x0624,
0x0618,			/* 0011 11xx x */
0x0618,
0x0618,
0x0618,
0x0618,
0x0618,
0x0618,
0x0618,

0x053e,			/* 0100 0xxx x */
0x053e,
0x053e,
0x053e,
0x053e,
0x053e,
0x053e,
0x053e,
0x053e,
0x053e,
0x053e,
0x053e,
0x053e,
0x053e,
0x053e,
0x053e,

0x0502,			/* 0100 1xxx x */
0x0502,
0x0502,
0x0502,
0x0502,
0x0502,
0x0502,
0x0502,
0x0502,
0x0502,
0x0502,
0x0502,
0x0502,
0x0502,
0x0502,
0x0502,

0x053d,			/* 0101 0xxx x */
0x053d,
0x053d,	
0x053d,	
0x053d,
0x053d,
0x053d,
0x053d,
0x053d,
0x053d,
0x053d,
0x053d,
0x053d,
0x053d,
0x053d,
0x053d,

0x0501,			/* 0101 1xxx x */
0x0501,
0x0501,
0x0501,
0x0501,
0x0501,
0x0501,
0x0501,
0x0501,
0x0501,
0x0501,
0x0501,
0x0501,
0x0501,
0x0501,
0x0501,

0x0538,			/* 0110 0xxx x */
0x0538,
0x0538,
0x0538,
0x0538,
0x0538,
0x0538,
0x0538,
0x0538,
0x0538,
0x0538,
0x0538,
0x0538,
0x0538,
0x0538,
0x0538,

0x0534,			/* 0110 1xxx x */
0x0534,
0x0534,
0x0534,
0x0534,
0x0534,
0x0534,
0x0534,
0x0534,
0x0534,
0x0534,
0x0534,
0x0534,
0x0534,
0x0534,
0x0534,

0x052c,			/* 0111 0xxx x */
0x052c,
0x052c,
0x052c,
0x052c,
0x052c,
0x052c,
0x052c,
0x052c,
0x052c,
0x052c,
0x052c,
0x052c,
0x052c,
0x052c,
0x052c,

0x051c,			/* 0111 1xxx x */
0x051c,
0x051c,
0x051c,
0x051c,
0x051c,
0x051c,
0x051c,
0x051c,
0x051c,
0x051c,
0x051c,
0x051c,
0x051c,
0x051c,
0x051c,

0x0528,			/* 1000 0xxx x */
0x0528,
0x0528,
0x0528,
0x0528,
0x0528,
0x0528,
0x0528,
0x0528,
0x0528,
0x0528,
0x0528,
0x0528,
0x0528,
0x0528,
0x0528,

0x0514,			/* 1000 1xxx x */
0x0514,
0x0514,
0x0514,
0x0514,
0x0514,
0x0514,
0x0514,
0x0514,
0x0514,
0x0514,
0x0514,
0x0514,
0x0514,
0x0514,
0x0514,

0x0530,			/* 1001 0xxx x */
0x0530,
0x0530,
0x0530,
0x0530,
0x0530,
0x0530,
0x0530,
0x0530,
0x0530,
0x0530,
0x0530,
0x0530,
0x0530,
0x0530,
0x0530,

0x050c,			/* 1001 1xxx x */
0x050c,
0x050c,
0x050c,
0x050c,
0x050c,
0x050c,
0x050c,
0x050c,
0x050c,
0x050c,
0x050c,
0x050c,
0x050c,
0x050c,
0x050c,

0x0420,			/* 1010 xxxx x */
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,

0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,
0x0420,

0x0410,			/* 1011 xxxx x */
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,

0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,
0x0410,

0x0408,			/* 1100 xxxx x */
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,

0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,
0x0408,

0x0404,			/* 1101 xxxx x */
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,

0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,
0x0404,

0x033c,			/* 111x xxxx x */
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,

0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,

0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,

0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c,
0x033c
};

U8 gTAB_TCOEFF_tc1[512]={
0xa0, 0x00,               // prefix 0000 0000  
0xb0, 0x40,               // prefix 0000 0001  
0xd0, 0x00,               // prefix 0000 0010  
0xd0, 0x08,               // prefix 0000 0011  
0x5f, 0x02,               // escape  
0x5f, 0x02, 
0x5f, 0x02, 
0x5f, 0x02, 

0x72, 0x02,               // 0000 100s  
0x72, 0xfe, 
0x79, 0x01,               // 0000 101s  
0x79, 0xff, 
0x70, 0x04,               // 0000 110s  
0x70, 0xfc, 
0x78, 0x01,               // 0000 111s  
0x78, 0xff, 

0x67, 0x01,               // 0001 00s  
0x67, 0x01, 
0x67, 0xff, 
0x67, 0xff, 
0x66, 0x01,               // 0001 01s  
0x66, 0x01, 
0x66, 0xff, 
0x66, 0xff, 

0x61, 0x02,               // 0001 10s  
0x61, 0x02, 
0x61, 0xfe, 
0x61, 0xfe, 
0x65, 0x01,               // 0001 11s  
0x65, 0x01, 
0x65, 0xff, 
0x65, 0xff, 

0xf0, 0x10,               // prefix 0010 0000  
0xf0, 0x12,               // prefix 0010 0001  
0xf0, 0x14,               // prefix 0010 0010  
0xf0, 0x16,               // prefix 0010 0011  
0xf0, 0x18,               // prefix 0010 0100  
0xf0, 0x1a,               // prefix 0010 0101  
0xf0, 0x1c,               // prefix 0010 0110  
0xf0, 0x1e,               // prefix 0010 0111  

0x50, 0x03,               // 0010 1s  
0x50, 0x03, 
0x50, 0x03, 
0x50, 0x03, 
0x50, 0xfd, 
0x50, 0xfd, 
0x50, 0xfd, 
0x50, 0xfd, 

0x54, 0x01,               // 0011 0s  
0x54, 0x01, 
0x54, 0x01, 
0x54, 0x01, 
0x54, 0xff, 
0x54, 0xff, 
0x54, 0xff, 
0x54, 0xff, 

0x53, 0x01,               // 0011 1s  
0x53, 0x01, 
0x53, 0x01, 
0x53, 0x01, 
0x53, 0xff, 
0x53, 0xff, 
0x53, 0xff, 
0x53, 0xff, 

0x40, 0x02,               // 0100 s  
0x40, 0x02, 
0x40, 0x02, 
0x40, 0x02, 
0x40, 0x02, 
0x40, 0x02, 
0x40, 0x02, 
0x40, 0x02, 

0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 

0x42, 0x01,               // 0101 s  
0x42, 0x01, 
0x42, 0x01, 
0x42, 0x01, 
0x42, 0x01, 
0x42, 0x01, 
0x42, 0x01, 
0x42, 0x01, 

0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 

0x31, 0x01,               // 011s  
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 

0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 

0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 

0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 

0x10, 0x00,               // EOB dw 080  
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 

0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 

0x10, 0x00,               // dw 090  
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 

0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 

0x10, 0x00,               // dw 0a0  
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 

0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 

0x10, 0x00,               // dw 0b0  
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 

0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 
0x10, 0x00, 

0x20, 0x01,               // 11s  
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 

0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 

0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 

0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 
0x20, 0x01, 

0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 

0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 

0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 

0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff, 
0x20, 0xff 
};  //512 elements


U8 gTAB_TCOEFF_tc1a[512]={
0xa0, 0x00,               // prefix 0000 0000  
0xb0, 0x40,               // prefix 0000 0001  
0xd0, 0x00,               // prefix 0000 0010  
0xd0, 0x08,               // prefix 0000 0011  
0x5f, 0x02,               // escape  
0x5f, 0x02, 
0x5f, 0x02, 
0x5f, 0x02, 

0x72, 0x02,               // 0000 100s  
0x72, 0xfe, 
0x79, 0x01,               // 0000 101s  
0x79, 0xff, 
0x70, 0x04,               // 0000 110s  
0x70, 0xfc, 
0x78, 0x01,               // 0000 111s  
0x78, 0xff, 

0x67, 0x01,               // 0001 00s  
0x67, 0x01, 
0x67, 0xff, 
0x67, 0xff, 
0x66, 0x01,               // 0001 01s  
0x66, 0x01, 
0x66, 0xff, 
0x66, 0xff, 

0x61, 0x02,               // 0001 10s  
0x61, 0x02, 
0x61, 0xfe, 
0x61, 0xfe, 
0x65, 0x01,               // 0001 11s  
0x65, 0x01, 
0x65, 0xff, 
0x65, 0xff, 

0xf0, 0x10,               // prefix 0010 0000  
0xf0, 0x12,               // prefix 0010 0001  
0xf0, 0x14,               // prefix 0010 0010  
0xf0, 0x16,               // prefix 0010 0011  
0xf0, 0x18,               // prefix 0010 0100  
0xf0, 0x1a,               // prefix 0010 0101  
0xf0, 0x1c,               // prefix 0010 0110  
0xf0, 0x1e,               // prefix 0010 0111  

0x50, 0x03,               // 0010 1s  
0x50, 0x03, 
0x50, 0x03, 
0x50, 0x03, 
0x50, 0xfd, 
0x50, 0xfd, 
0x50, 0xfd, 
0x50, 0xfd, 

0x54, 0x01,               // 0011 0s  
0x54, 0x01, 
0x54, 0x01, 
0x54, 0x01, 
0x54, 0xff, 
0x54, 0xff, 
0x54, 0xff, 
0x54, 0xff, 

0x53, 0x01,               // 0011 1s  
0x53, 0x01, 
0x53, 0x01, 
0x53, 0x01, 
0x53, 0xff, 
0x53, 0xff, 
0x53, 0xff, 
0x53, 0xff, 

0x40, 0x02,               // 0100 s  
0x40, 0x02, 
0x40, 0x02, 
0x40, 0x02, 
0x40, 0x02, 
0x40, 0x02, 
0x40, 0x02, 
0x40, 0x02, 

0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 
0x40, 0xfe, 

0x42, 0x01,               // 0101 s  
0x42, 0x01, 
0x42, 0x01, 
0x42, 0x01, 
0x42, 0x01, 
0x42, 0x01, 
0x42, 0x01, 
0x42, 0x01, 

0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 
0x42, 0xff, 

0x31, 0x01,               // 011s  
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 

0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 
0x31, 0x01, 

0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 

0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 
0x31, 0xff, 

0x10, 0x01,               // 1s  
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 

0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 

0x10, 0x01,               // dw 090  
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 

0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 

0x10, 0x01,               // dw 0a0  
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 

0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 

0x10, 0x01,               // dw 0b0  
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 

0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 
0x10, 0x01, 

0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 

0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 

0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 

0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 

0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 

0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 

0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 

0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff, 
0x10, 0xff
};  // 512 elements 

U8 gTAB_TCOEFF_tc2[192]={
                    // for prefix 0000 0010  
0x10, 0x01,              // 00 s  
0x10, 0xff, 
0x05, 0x02,               // 01 s  
0x05, 0xfe, 
0x00, 0x07,               // 10 s  
0x00, 0xf9, 
0x02, 0x03,               // 11 s  
0x02, 0xfd, 

                    // for prefix 0000 0011  
0x01, 0x04,               // 00 s  
0x01, 0xfc, 
0x0f, 0x01,               // 01 s  
0x0f, 0xff, 
0x0e, 0x01,               // 10 s  
0x0e, 0xff, 
0x04, 0x02,               // 11 s  
0x04, 0xfe, 

0x0d, 0x01,               // for prefix 0010 0000  
0x0d, 0xff, 
0x00, 0x06,               // for prefix 0010 0001  
0x00, 0xfa, 
0x0c, 0x01,               // for prefix 0010 0010  
0x0c, 0xff, 
0x0b, 0x01,               // for prefix 0010 0011  
0x0b, 0xff, 

0x03, 0x02,               // for prefix 0010 0100  
0x03, 0xfe, 
0x01, 0x03,               // for prefix 0010 0101  
0x01, 0xfd, 
0x00, 0x05,               // for prefix 0010 0110  
0x00, 0xfb, 
0x0a, 0x01,               // for prefix 0010 0111  
0x0a, 0xff, 


// table for 0000 0000 prefix  

0x0a, 0x02,               // 1000 0s  
0x0a, 0xfe, 
0x09, 0x02,               // 1000 1s  
0x09, 0xfe, 
0x05, 0x03,               // 1001 0s  
0x05, 0xfd, 
0x03, 0x04,               // 1001 1s  
0x03, 0xfc, 

0x02, 0x05,               // 1010 0s  
0x02, 0xfb, 
0x01, 0x07,               // 1010 1s  
0x01, 0xf9, 
0x01, 0x06,               // 1011 0s  
0x01, 0xfa, 
0x00, 0x0f,               // 1011 1s  
0x00, 0xf1, 

0x00, 0x0e,               // 1100 0s  
0x00, 0xf2, 
0x00, 0x0d,               // 1100 1s  
0x00, 0xf3, 
0x00, 0x0c,               // 1101 0s  
0x00, 0xf4, 
0x1a, 0x01,               // 1101 1s  
0x1a, 0xff, 

0x19, 0x01,               // 1110 0s  
0x19, 0xff, 
0x18, 0x01,               // 1110 1s  
0x18, 0xff, 
0x17, 0x01,               // 1111 0s  
0x17, 0xff, 
0x16, 0x01,               // 1111 1s  
0x16, 0xff, 

// table for 0000 0001 prefix  

0x00, 0x0b,               // 0000 s  
0x00, 0xf5, 
0x08, 0x02,               // 0001 s  
0x08, 0xfe, 
0x04, 0x03,               // 0010 s  
0x04, 0xfd, 
0x00, 0x0a,               // 0011 s  
0x00, 0xf6, 

0x02, 0x04,               // 0100 s  
0x02, 0xfc, 
0x07, 0x02,               // 0101 s  
0x07, 0xfe, 
0x15, 0x01,               // 0110 s  
0x15, 0xff, 
0x14, 0x01,               // 0111 s  
0x14, 0xff, 

0x00, 0x09,               // 1000 s  
0x00, 0xf7, 
0x13, 0x01,               // 1001 s  
0x13, 0xff, 
0x12, 0x01,               // 1010 s  
0x12, 0xff, 
0x01, 0x05,               // 1011 s  
0x01, 0xfb, 

0x03, 0x03,               // 1100 s  
0x03, 0xfd, 
0x00, 0x08,               // 1101 s  
0x00, 0xf8, 
0x06, 0x02,               // 1110 s  
0x06, 0xfe, 
0x11, 0x01,               // 1111 s        ; error in doc?  
0x11, 0xff 
};  // 192 elements

I8 gTAB_MV_ADJUST[65] = {
	0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
	-16,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,
	0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
	-16,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,
	0};
	
I16 gTAB_INVERSE_Q[1024] = { 
  0, 
   0,    0,    0,    0,    0,    0,    0,    0, 
   0,    0,    0,    0,    0,    0,    0,    0, 
   0,    0,    0,    0,    0,    0,    0,    0, 
   0,    0,    0,    0,    0,    0,    0,    0, 
   0,    3,   -3,    5,   -5,    7,   -7,    9, 
  -9,   11,  -11,   13,  -13,   15,  -15,   17, 
 -17,   19,  -19,   21,  -21,   23,  -23,   25, 
 -25,   27,  -27,   29,  -29,   31,  -31,    0, 
   0,    5,   -5,    9,   -9,   13,  -13,   17, 
 -17,   21,  -21,   25,  -25,   29,  -29,   33, 
 -33,   37,  -37,   41,  -41,   45,  -45,   49, 
 -49,   53,  -53,   57,  -57,   61,  -61,    0, 
   0,    9,   -9,   15,  -15,   21,  -21,   27, 
 -27,   33,  -33,   39,  -39,   45,  -45,   51, 
 -51,   57,  -57,   63,  -63,   69,  -69,   75, 
 -75,   81,  -81,   87,  -87,   93,  -93,    0, 
   0,   11,  -11,   19,  -19,   27,  -27,   35, 
 -35,   43,  -43,   51,  -51,   59,  -59,   67, 
 -67,   75,  -75,   83,  -83,   91,  -91,   99, 
 -99,  107, -107,  115, -115,  123, -123,    0, 
   0,   15,  -15,   25,  -25,   35,  -35,   45, 
 -45,   55,  -55,   65,  -65,   75,  -75,   85, 
 -85,   95,  -95,  105, -105,  115, -115,  125, 
-125,  135, -135,  145, -145,  155, -155,    0, 
   0,   17,  -17,   29,  -29,   41,  -41,   53, 
 -53,   65,  -65,   77,  -77,   89,  -89,  101, 
-101,  113, -113,  125, -125,  137, -137,  149, 
-149,  161, -161,  173, -173,  185, -185,    0, 
   0,   21,  -21,   35,  -35,   49,  -49,   63, 
 -63,   77,  -77,   91,  -91,  105, -105,  119, 
-119,  133, -133,  147, -147,  161, -161,  175, 
-175,  189, -189,  203, -203,  217, -217,    0, 
   0,   23,  -23,   39,  -39,   55,  -55,   71, 
 -71,   87,  -87,  103, -103,  119, -119,  135, 
-135,  151, -151,  167, -167,  183, -183,  199, 
-199,  215, -215,  231, -231,  247, -247,    0, 
   0,   27,  -27,   45,  -45,   63,  -63,   81, 
 -81,   99,  -99,  117, -117,  135, -135,  153, 
-153,  171, -171,  189, -189,  207, -207,  225, 
-225,  243, -243,  261, -261,  279, -279,    0, 
   0,   29,  -29,   49,  -49,   69,  -69,   89, 
 -89,  109, -109,  129, -129,  149, -149,  169, 
-169,  189, -189,  209, -209,  229, -229,  249, 
-249,  269, -269,  289, -289,  309, -309,    0, 
   0,   33,  -33,   55,  -55,   77,  -77,   99, 
 -99,  121, -121,  143, -143,  165, -165,  187, 
-187,  209, -209,  231, -231,  253, -253,  275, 
-275,  297, -297,  319, -319,  341, -341,    0, 
   0,   35,  -35,   59,  -59,   83,  -83,  107, 
-107,  131, -131,  155, -155,  179, -179,  203, 
-203,  227, -227,  251, -251,  275, -275,  299, 
-299,  323, -323,  347, -347,  371, -371,    0, 
   0,   39,  -39,   65,  -65,   91,  -91,  117, 
-117,  143, -143,  169, -169,  195, -195,  221, 
-221,  247, -247,  273, -273,  299, -299,  325, 
-325,  351, -351,  377, -377,  403, -403,    0, 
   0,   41,  -41,   69,  -69,   97,  -97,  125, 
-125,  153, -153,  181, -181,  209, -209,  237, 
-237,  265, -265,  293, -293,  321, -321,  349, 
-349,  377, -377,  405, -405,  433, -433,    0, 
   0,   45,  -45,   75,  -75,  105, -105,  135, 
-135,  165, -165,  195, -195,  225, -225,  255, 
-255,  285, -285,  315, -315,  345, -345,  375, 
-375,  405, -405,  435, -435,  465, -465,    0, 
   0,   47, -47,   79,  -79,  111, -111,  143, 
-143,  175, -175,  207, -207,  239, -239,  271, 
-271,  303, -303,  335, -335,  367, -367,  399, 
-399,  431, -431,  463, -463,  495, -495,    0, 
   0,   51,  -51,   85,  -85,  119, -119,  153, 
-153,  187, -187,  221, -221,  255, -255,  289, 
-289,  323, -323,  357, -357,  391, -391,  425, 
-425,  459, -459,  493, -493,  527, -527,    0, 
   0,   53,  -53,   89,  -89,  125, -125,  161, 
-161,  197, -197,  233, -233,  269, -269,  305, 
-305,  341, -341,  377, -377,  413, -413,  449, 
-449,  485, -485,  521, -521,  557, -557,    0, 
   0,   57,  -57,   95,  -95,  133, -133,  171, 
-171,  209, -209,  247, -247,  285, -285,  323, 
-323,  361, -361,  399, -399,  437, -437,  475, 
-475,  513, -513,  551, -551,  589, -589,    0, 
   0,   59,  -59,   99,  -99,  139, -139,  179, 
-179,  219, -219,  259, -259,  299, -299,  339, 
-339,  379, -379,  419, -419,  459, -459,  499, 
-499,  539, -539,  579, -579,  619, -619,    0, 
   0,   63,  -63,  105, -105,  147, -147,  189, 
-189,  231, -231,  273, -273,  315, -315,  357, 
-357,  399, -399,  441, -441,  483, -483,  525, 
-525,  567, -567,  609, -609,  651, -651,    0, 
   0,   65,  -65,  109, -109,  153, -153,  197, 
-197,  241, -241,  285, -285,  329, -329,  373, 
-373,  417, -417,  461, -461,  505, -505,  549, 
-549,  593, -593,  637, -637,  681, -681,    0, 
   0,   69,  -69,  115, -115,  161, -161,  207, 
-207,  253, -253,  299, -299,  345, -345,  391, 
-391,  437, -437,  483, -483,  529, -529,  575, 
-575,  621, -621,  667, -667,  713, -713,    0, 
   0,   71,  -71,  119, -119,  167, -167,  215, 
-215,  263, -263,  311, -311,  359, -359,  407, 
-407,  455, -455,  503, -503,  551, -551,  599, 
-599,  647, -647,  695, -695,  743, -743,    0, 
   0,   75,  -75,  125, -125,  175, -175,  225, 
-225,  275, -275,  325, -325,  375, -375,  425, 
-425,  475, -475,  525, -525,  575, -575,  625, 
-625,  675, -675,  725, -725,  775, -775,    0, 
   0,   77,  -77,  129, -129,  181, -181,  233, 
-233,  285, -285,  337, -337,  389, -389,  441, 
-441,  493, -493,  545, -545,  597, -597,  649, 
-649,  701, -701,  753, -753,  805, -805,    0, 
   0,   81,  -81,  135, -135,  189, -189,  243, 
-243,  297, -297,  351, -351,  405, -405,  459, 
-459,  513, -513,  567, -567,  621, -621,  675, 
-675,  729, -729,  783, -783,  837, -837,    0, 
   0,   83,  -83,  139, -139,  195, -195,  251, 
-251,  307, -307,  363, -363,  419, -419,  475, 
-475,  531, -531,  587, -587,  643, -643,  699, 
-699,  755, -755,  811, -811,  867, -867,    0, 
   0,   87,  -87,  145, -145,  203, -203,  261, 
-261,  319, -319,  377, -377,  435, -435,  493, 
-493,  551, -551,  609, -609,  667, -667,  725, 
-725,  783, -783,  841, -841,  899, -899,    0, 
   0,   89,  -89,  149, -149,  209, -209,  269, 
-269,  329, -329,  389, -389,  449, -449,  509, 
-509,  569, -569,  629, -629,  689, -689,  749, 
-749,  809, -809,  869, -869,  929, -929,    0, 
   0,   93,  -93,  155, -155,  217, -217,  279, 
-279,  341, -341,  403, -403,  465, -465,  527, 
-527,  589, -589,  651, -651,  713, -713,  775, 
-775,  837, -837,  899, -899,  961, -961
};


U32 gTAB_ZZ_RUN[64]= { 0,  1,  8,  16, 9,  2,  3,  10,
                       17, 24, 32, 25, 18, 11, 4,  5,
					   12, 19, 26, 33, 40, 48, 41, 34, 
					   27, 20, 13, 6,  7,  14, 21, 28, 
					   35, 42, 49, 56, 57, 50, 43, 36, 
					   29, 22, 15, 23, 30, 37, 44, 51, 
					   58, 59, 52, 45, 38, 31, 39, 46,
					   53, 60, 61, 54, 47, 55, 62, 63
}
; //input is the cumulative run value
                   
