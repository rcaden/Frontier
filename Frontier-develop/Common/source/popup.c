
/*	$Id$    */

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

#include "frontier.h"
#include "standard.h"

#include "quickdraw.h"
#include "font.h"
#include "cursor.h"
#include "menu.h"
#include "mouse.h"
#include "bitmaps.h"
#include "strings.h"
#include "smallicon.h"
#include "popup.h"
#include "frontierwindows.h"
#include "windowlayout.h"
#include "shell.h"


boolean pushpopupitem (hdlmenu hmenu, bigstring bs, boolean flenabled, short commandid) {

	/*
	7.1b23 PBS: commandid is new parameter: allow caller to specify the command id of
	the menu item. This is needed for hierarchical popup menus. It's passed to pushmenuitem.
	*/
	
	if (!pushmenuitem (hmenu, defaultpopupmenuid, bs, commandid))
		return (false);
	
	if (!flenabled)
		disablemenuitem (hmenu, countmenuitems (hmenu));
	
	return (true);
	} /*pushpopupitem*/


static short handlepopup (hdlmenu hmenu, Rect r, short item) {
	
	/*
	display the popup menu and let the user interact with it.  return the item
	number the user selected.
	
	the indicated item is highlighted when the menu pops up.
	
	note that the menu must be inserted in the menu list before you call us.  this
	is done by InsertMenu (hmenu, -1).
	
	7.1b23 PBS: For hierarchical menu support, some callers want the *commandID*
	of the item rather than its position -- since, with sub-menus, multiple items
	will have the same position. (First item in the menu and the first item in a submenu
	both have the position of 1.) So, if the commandID has been set, return that
	instead of the position.
	
	2002-10-12 AR: We can only return the commandID, if an item was actually selected
	from the popup menu. On the Mac, if nothing was selected, GetMenuHandle returns
	a nil handle and the subsequent call to GetMenuItemCommandID would return an OS error
	instead of setting the commandID. Now, we check the menu handle before calling
	GetMenuItemCommandID, and we only return the commandID (instead of iditem) if
	the GetMenuItemCommandID call actually succeeded.
	*/
	
	Point pt;

	short idmenu;
	short iditem;
	long menuresult;
	long commandid;
	hdlmenu hchosenmenu;
	
	setcursortype (cursorisarrow); /*arrow cursor is more appropriate here*/
	
	pt.v = r.top;
	
	pt.h = r.left; 
	
	if (item == 0) { /*no item selected*/
		#if ACCESSOR_CALLS_ARE_FUNCTIONS == 1
		SInt16 menuHeight;
		CalcMenuSize (hmenu); 
		//Code change by Timothy Paustian Monday, May 1, 2000 9:44:34 PM
		//Changed to Opaque call for Carbon
		//This needs to be tested.
		menuHeight = GetMenuHeight(hmenu);
		pt.v -= menuHeight / 2;
		#else
		//old code
		pt.v -= (**hmenu).menuHeight / 2;
		#endif
		}
		
	localtoglobalpoint (getfrontwindow (), &pt);
	
	menuresult = PopUpMenuSelect (hmenu, pt.v, pt.h, item);
	
	idmenu = HiWord (menuresult);
	
	iditem = LoWord (menuresult);
	
	hchosenmenu = GetMenuHandle (idmenu);
	
	if (hchosenmenu != nil) /* 2002-10-12 AR */
		if (GetMenuItemCommandID (hchosenmenu, iditem, (MenuCommand *)(&commandid)) == noErr)
			if (commandid > 0)
				return (commandid);
	/*
	GetMenuItemCommandID (hchosenmenu, iditem, &commandid);
	
	if (commandid > 0)
		return (commandid);
	*/
	
	//return (LoWord (PopUpMenuSelect (hmenu, pt.v, pt.h, item)));
	
	return (iditem);


	} /*handlepopup*/


boolean popupmenuhit (Rect r, boolean flgeneva9, fillpopupcallback fillpopuproutine, popupselectcallback popupselectroutine) {
	
	/*
	12/19/91 dmb: don't do DeleteMenu if it wasn't inserted
	
	4/15/92 dmb: if checkeditem is negative, select it but don't check it
	*/
	
	register boolean fl = true;
	hdlmenu hmenu;
	short checkeditem;
	short itemselected;
	short idmenu;

	if (flgeneva9) {
		
		insetrect (&r, 0, 2);
		
		idmenu = defaultpopupmenuid; //geneva9popupmenuid;
		}
	else
		idmenu = defaultpopupmenuid;
	
	hmenu = getresourcemenu (idmenu); /*name is irrelevent in a popup*/

	if (hmenu == nil)
		return (false);
	
	if (!(*fillpopuproutine) (hmenu, &checkeditem)) {
		
		fl = false;
		
		sysbeep ();
		
		goto exit;
		}
	
	if (checkeditem < 0)
		checkeditem = -checkeditem;
	
	else {
		
		//#if !TARGET_API_MAC_CARBON == 1
		
			//if (flgeneva9)
				//markmenuitem (hmenu, checkeditem, '�');
			//else
		
		//#endif
		
			checkmenuitem (hmenu, checkeditem, true);
		
		}
	
		inserthierarchicmenu (hmenu, -1); /*see IM-V, p 236*/
		

		
			if (flgeneva9)
		
				SetMenuFont (hmenu, 0, 10); /*smaller font in OS X*/
		
	
	itemselected = handlepopup (hmenu, r, checkeditem); /*menus are 1-based*/
	
	if (itemselected > 0) { /*something selected*/
		
		(*popupselectroutine) (hmenu, itemselected);
		}

		removemenu (idmenu);
	
	exit:
	
	disposemenu (hmenu);
	
	return (fl);
	} /*popupmenuhit*/


#ifdef xxxWIN95VERSION

	short popupfont = -1;

	static void initpopupfont (void) {
		
		if (popupfont == -1) {
			
			fontgetnumber ("\x0d" "MS Sans Serif", &popupfont);

			if (popupfont == 0)
				fontgetnumber ("\x05" "Ariel", &popupfont);
			}
		} /*initpopupfont*/

#else
	#define initpopupfont() ((void *) 0)
#endif



static void
MyThemeButtonDrawCallback (
		const Rect					*bounds,
		ThemeButtonKind				 kind,
		const ThemeButtonDrawInfo	*info,
		UInt32						 userData,
		SInt16						 depth,
		Boolean						 isColorDev)
{
#pragma unused (kind, info, depth, isColorDev)

	/*
	 7.0b48 PBS: draw the label for a popup menu.
	 */

	bigstring bs;

	pushstyle (popupfont, popupfontsize, 0);

	texthandletostring ((Handle) userData, bs);

	movepento ((*bounds).left, (*bounds).top + 10);

	pendrawstring (bs);

	popstyle ();
	} /*MyThemeButtonDrawCallback*/



boolean drawpopup (Rect rpopup, bigstring bs, boolean flbitmap) {
#	pragma unused (flbitmap)

	Rect r;
	Handle h;
	ThemeButtonDrawUPP drawupp;
	ThemeButtonDrawInfo drawinfo;

	
	drawupp = NewThemeButtonDrawUPP (MyThemeButtonDrawCallback);

	drawinfo.state = kThemeButtonOn;

	drawinfo.value = kThemeStateActive;

	drawinfo.adornment = 0;

	setrect (&r, rpopup.top, rpopup.left, rpopup.bottom + 1, rpopup.right + 1);

	eraserect (r);

	newtexthandle (bs, &h); 

	DrawThemeButton (&r, kThemePopupButton, &drawinfo, nil, nil, drawupp, (unsigned long) h);

	//DisposeThemeButtonDrawUPP (MyThemeButtonDrawCallback);
	DisposeThemeButtonDrawUPP (drawupp);

	return (true);

	} /*drawpopup*/


boolean adjustpopupcursor (Point pt, Rect r) {
	
	/*
	r.left = r.right - popuparrowwidth;
	*/
	
	if (!pointinrect (pt, r)) 
		return (false);
	
	setcursortype (cursorispopup);
	
	return (true);
	} /*adjustpopupcursor*/




