
/*	$Id: resources.h 451 2005-09-07 17:45:53Z icreedon $    */

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

#ifndef resourcesinclude
#define resourcesinclude


#ifndef shelltypesinclude

	#include "shelltypes.h"

#endif


/*prototypes*/

/*
2005-09-02 creedon: added support for fork parameter, added short to many of the prototypes, see resources.c: openresourcefile and pushresourcefile	
*/ 

extern boolean getstringlist (short, short, bigstring);

extern boolean findstringlist (bigstring, short, short *);

extern boolean closeresourcefile (short);

extern boolean openresourcefile (const tyfilespec *, short *, short);

extern boolean writeresource (ResType, short, bigstring, long, void *);

extern boolean copyresource (short, short, ResType, short);

extern boolean copyallresources (short, short);

extern Handle getresourcehandle (ResType, short);

extern void releaseresourcehandle (Handle);

extern Handle filegetresource (short, ResType, short, bigstring);

extern boolean filereadresource (short, ResType, short, bigstring, long, void *);

extern boolean filewriteresource (short, ResType, short, bigstring, long, void *);

extern boolean saveresource (const tyfilespec *, short, ResType, short, bigstring, long, void *, short);

extern boolean saveresourcehandle (const tyfilespec *, ResType, short, bigstring, Handle, short);

extern boolean loadresource (const tyfilespec *, short, ResType, short, bigstring, long, void *, short);

extern boolean loadresourcehandle (const tyfilespec *, ResType, short, bigstring, Handle *, short);

extern boolean deleteresource (const tyfilespec *, ResType, short, bigstring, short);

extern boolean getnumresourcetypes (const tyfilespec *, short *, short);

extern boolean getnthresourcetype (const tyfilespec *, short, ResType *, short);

extern boolean getnumresources (const tyfilespec *, ResType, short *, short);

extern boolean getnthresourcehandle (const tyfilespec *, ResType, short, short *, bigstring, Handle *, short);

extern boolean getresourceattributes (const tyfilespec *, ResType, short, bigstring, short *, short);

extern boolean setresourceattributes (const tyfilespec *, ResType, short, bigstring, short, short);

#endif


/*constants*/

typedef enum tyforktype {

	resourcefork = 1, 

	datafork

	} tyforktype;

