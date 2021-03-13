
/*	$Id: SetUpA5.h 1175 2006-04-01 13:30:11Z andreradke $    */

/******************************************************************************

    UserLand Frontier(tm) -- High performance Web content management,
    object database, system-level and Internet scripting environment,
    including source code editing and debugging.

    Copyright (C) 1992-2004 UserLand Software, Inc.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

******************************************************************************/

/*
	here's the scoop: when Frontier is servicing a component call, 
	running a script, it's A5 is set up.  when running a dialog, the 
	system gets confused if A5 isn't the same as that of the current 
	application.  (one way to make it flake out is to click in the 
	menu bar to pull down the dimmed menus.)  fortunately, we always 
	have the "correct" value at hand -- the low-mem global CurrentA5.
	
	these macros expand on those in Think C's SetUpA4.h by adding two 
	flavors of setting up A5, one to set it to CurrentA4, the other to 
	set it to the A5 that has been stashed away by calling RememberA5. 
	the latter value is Frontier's A5, which must be remembered before 
	setting A5 to CurrentA5.
	
	get it?  it works!
	
	2006-04-01 aradke: removed assembler code for Mac/68k and prepare for Mac/x86
*/

	
//Code change by Timothy Paustian Wednesday, July 12, 2000 1:59:26 PM
//A5 worlds have no relvance in Carbon so just define them away.
#if TARGET_API_MAC_CARBON == 1

	#define RememberA5()
	
	#define SetUpThisA5(A5) nil
	
	#define SetUpAppA5() nil
		
	#define SetUpCurA5() nil
		
	#define RestoreA5(savedA5)
	
	#define pushA5()
	
	#define popA5()

#else
	
	// 2006-04-01 aradke: only used for Classic Mac OS on PPC (which we actually don't even support anymore)
	
	static long __appA5;	/* 2004-10-28 aradke: not used on Carbon */

	#define RememberA5()	do {__appA5 = (long) LMGetCurrentA5 ();} while (0)

	#define SetUpThisA5(A5)	SetA5 (A5)

	#define SetUpAppA5()	SetA5 (__appA5);

	//	#define SetUpCurA5()	do { savedA5 = SetA5 ((long) LMGetCurrentA5 ()); } while (0)

	#define SetUpCurA5()	SetCurrentA5 ();

	#define RestoreA5(savedA5)	SetA5 (savedA5)

	#define pushA5()		SetUpCurA5 ()

	#define popA5()			RestoreA5 ()

#endif

