
/*	$Id: iowascript.h 355 2005-01-11 22:48:55Z andreradke $    */

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

#define iowascriptinclude


#ifndef __COMPONENTS__

	#include <Components.h>
	
#endif


#ifndef __OSA__

	#include <OSA.h>

#endif


typedef struct tylangcomponentrecord {
	
	ComponentInstance instance;
	
	OSType idlanguage;
	
	Handle hname;
	
	boolean flrealcomponent; /*if false, it's implemented w/o calls thru the component manager*/
	} tylangcomponentrecord, **hdllangcomponentrecord;
	
	
extern tylangcomponentrecord **langcomponentarray; /*dynamic array of language components*/


ComponentInstance findlangcomponent (long);

void initlangcomponents (void);

void closelangcomponents (void);

short countlangcomponents (void);

boolean runlangscript (Handle, Handle, long, boolean, bigstring, Handle *);

boolean getlangmenu (MenuHandle *);

void getlanguageid (short, OSType *);
