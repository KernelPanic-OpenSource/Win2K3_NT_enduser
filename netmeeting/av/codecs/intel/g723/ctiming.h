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

/*
 * ctiming.h
 *
 * DESCRIPTION:
 *		Common timing functions.  
 *
 *		I extracted this code from meantime.h in HQV's decode directory.
 */

// $Header:   S:\h26x\src\common\ctiming.h_v   1.2   26 Dec 1995 17:43:06   DBRUCKS  $
// $Log:   S:\h26x\src\common\ctiming.h_v  $
;// 
;//    Rev 1.2   26 Dec 1995 17:43:06   DBRUCKS
;// changed bTimerIsOn to bTimerIsActive
;// 
;//    Rev 1.1   26 Dec 1995 12:40:54   DBRUCKS
;// added higher level macros to simplify use
;// 
;//    Rev 1.0   20 Dec 1995 15:06:14   DBRUCKS
;// Initial revision.

#ifndef __CTIMING_H__
#define __CTIMING_H__

/* The following timing overhead numbers were generated by Tom Walsh
 * based on static variables for startlow, starthigh, and elapsed.
 * 
 * When timing sections of code with low clock numbers be careful to
 * minimize the timing overhead.  Store the sub totals to a stack variable
 * instead of to the instance via a pointer indirection and offset.
 */
#define P5TIMING_OVERHEAD 13
#define P6TIMING_OVERHEAD 33

/* Low Level Macros
 */
#define __RDTSC__ __asm { __asm __emit 0Fh __asm __emit 31h }

#define STARTCLOCK(startlow,starthigh) { \
	__asm {	\
		__asm __RDTSC__ \
		__asm mov	startlow,	eax	\
		__asm mov	starthigh,	edx	\
	} \
}

#define STOPCLOCKP5(startlow,starthigh,elapsed) { \
	__asm {	\
		__asm __RDTSC__ \
		__asm sub	eax,	startlow	\
		__asm sbb	edx,	starthigh	\
		__asm sub	eax,	P5TIMING_OVERHEAD		\
		__asm sbb	edx,	0		\
		__asm mov	elapsed,eax		\
	} \
}

#define STOPCLOCKP6(startlow,starthigh,elapsed) { \
	__asm {	\
		__asm __RDTSC__ \
		__asm sub	eax,	startlow	\
		__asm sbb	edx,	starthigh	\
		__asm sub	eax,	P6TIMING_OVERHEAD		\
		__asm sbb	edx,	0		\
		__asm mov	elapsed,eax		\
	} \
}

/* High Level Macros
 *
 * Call TIMER_START and TIMER_STOP in the main function that you wish to time.
 * TIMER_BEFORE and TIMER_AFTER should be used inside of that main function.
 * Fo example:
 *
 *		TIMER_START
 *			TIMER_BEFORE
 *			TIMER_AFTER_P5
 *			TIMER_BEFORE
 *			TIMER_AFTER_P5
 *		TIMER_STOP
 * 
 * Variable Definitions
 *		DWORD dwStartLow;		 // temporary set in TIMER_START 
 *		DWORD dwStartHigh;		 // temporary set in TIMER_START
 *		DWORD dwElapsed;		 // temporary used in TIMER_AFTER_*
 *		DWORD dwBefore;			 // temporary used in TIMER_BEFORE and TIMER_AFTER_*
 *		DWORD dwResult;			 // result variable
 *		int   bTimerIsActive	 // boolean - true if timing this frame
 *
 * WARNING: TIMER_AFTER_P5 and TIMER_AFTER_P6 add to the result variable.
 */
#define	TIMER_START(bTimerIsActive,dwStartLow,dwStartHigh) \
{ \
	bTimerIsActive = 1; \
	STARTCLOCK(dwStartLow,dwStartHigh); \
}

#define TIMER_BEFORE(bTimerIsActive,dwStartLow,dwStartHigh,dwBefore) \
{ \
	if (bTimerIsActive)	\
	{	\
		STOPCLOCKP5(dwStartLow,dwStartHigh,dwBefore); \
	} \
}

#define TIMER_AFTER_P5(bTimerIsActive,dwStartLow,dwStartHigh,dwBefore,dwElapsed,dwResult) \
{ \
	if (bTimerIsActive)	\
	{ \
		STOPCLOCKP5(dwStartLow,dwStartHigh,dwElapsed); \
		dwResult += dwElapsed - dwBefore;	    \
	} \
}

#define TIMER_STOP(bTimerIsActive,dwStartLow,dwStartHigh,dwResult) \
{ \
	if (bTimerIsActive)	\
	{ \
		STOPCLOCKP5(dwStartLow,dwStartHigh,dwResult);	\
	} \
}

#endif /* __CTIMING_H__ */
