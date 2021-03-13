
/*	$Id: landcallbacks.c 355 2005-01-11 22:48:55Z andreradke $    */

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

#include "landinternal.h"



boolean landnoparamcallback (landcallback cb) {
	
	if (cb == nil) /*defensive driving*/
		return (false);
		
	#ifdef THINKC
	
		if (!CallPascalW (cb))
			return (false);
			
	#else
	
		if (!((tynoparamcallback) *cb) ())
			return (false);
			
	#endif
	
	return (true);
	} /*landnoparamcallback*/


boolean landverbrecordcallback (hdlverbrecord hverb, landcallback cb) {
	
	register boolean fl;
	
	if (cb == nil) /*defensive driving*/
		return (false);
		
	#ifdef THINKC
	
		fl = (CallPascalW (hverb, cb) != 0);	
		
	#else
	
		fl = ((tyverbrecordcallback) *cb) (hverb);
		
	#endif
	
	return (fl);
	} /*landverbrecordcallback*/
	

boolean landfilespeccallback (FSSpec *fs, landcallback cb) {
	
	register boolean fl;
	
	if (cb == nil) /*defensive driving*/
		return (false);
		
	#ifdef THINKC
	
		fl = (CallPascalW (fs, cb) != 0);
		
	#else
	
		fl = ((tyfilespeccallback) *cb) (fs);
		
	#endif
	
	return (fl);
	} /*landfilespeccallback*/
	

