//------------------------- � 1994-1995 by James G. Stout --------------------------// File		: qdCDEF.h// Purpose	: prototypes for routines in qdCDEF.c//// Date		: 23 June 1992//----------------------------------------------------------------------------------extern	short		getOff			(CGrafPtr * offPort, Rect * r);extern PixMapHandle getLockedPixels	(CGrafPtr * offPort, short qdVers);extern void 		unlockPixels	(PixMapHandle pmHdl, short qdVers);extern	short		getQDVers		(void);