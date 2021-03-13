
/*	$Id: windowlayout.h 355 2005-01-11 22:48:55Z andreradke $    */

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

#define windowlayoutinclude


#ifdef MACVERSION
	#if TARGET_API_MAC_CARBON
		#define iconrectheight 38
	#else
		#define iconrectheight 44 /*icons have labels, leave 12 pixels for the label, 32 for icon*/
	#endif
#endif
#ifdef WIN95VERSION
	#define iconrectheight 46 /*icons have labels, leave 12 pixels for the label, 32 for icon*/
#endif

#if TARGET_API_MAC_CARBON
	#define iconrectwidth 26
#else
	#define iconrectwidth 32
#endif

#define windowmargin 10 /*leave this much room all around*/


#ifdef MACVERSION
	#define msgfont geneva /*window messages should be drawn like this*/
#endif
#ifdef WIN95VERSION
	#define msgfont 0 /*what should this be?*/
#endif

#define msgsize 9

#define msgstyle 0


#define popupmsgwidth 50
#define popupbetweenwidth 10
#define popuparrowwidth 12


