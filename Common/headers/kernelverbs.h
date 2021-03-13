
/*	$Id: kernelverbs.h 619 2006-03-10 21:21:01Z icreedon $    */

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

#define kernelverbsinclude


/*prototypes for initialization*/

extern boolean fileinitverbs (void); /*fileverbs.c*/

extern boolean filelaunchanythingverb (hdltreenode, tyvaluerecord *);

extern boolean stringinitverbs (void); /*stringverbs.c*/

extern boolean sysinitverbs (void); /*shellsysverbs.c*/

extern boolean dbinitverbs (void); /*dbverbs.c*/

extern boolean dbcloseallfiles (long refcon);

extern boolean xmlinitverbs (void); /*langxml.c*/

extern boolean windowinitverbs (void); /*shellwindowverbs.c*/

extern boolean htmlinitverbs (void); /*langhtml.c*/

extern boolean quicktimeinitverbs (void); /*langquicktime.c*/

extern boolean regexpinitverbs (void); /* langregexp.c */

extern boolean mathinitverbs (void); /* langmath.c */

extern boolean cryptinitverbs (void); /* langcrypt.c */

