
/*	$Id: shellhooks.h 355 2005-01-11 22:48:55Z andreradke $    */

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

#ifndef shellhooksinclude
#define shellhooksinclude

#ifndef processinclude
	#include "process.h"
#endif


/*types*/

typedef boolean (*menuhookcallback) (short, short);

typedef boolean (*eventhookcallback) (EventRecord *, WindowPtr);

typedef boolean (*errorhookcallback) (bigstring);

typedef boolean (*scraphookcallback) (Handle);

typedef boolean (*memoryhookcallback) (long *);

typedef boolean (*wakeuphookcallback) (struct tythreadglobals **);


/*globals*/

#define maxerrorhooks 5

extern short cterrorhooks;

extern errorhookcallback errorhooks [maxerrorhooks];


/*prototypes*/

extern boolean shellpushkeyboardhook (callback);

extern boolean shellcallkeyboardhooks (void);

extern boolean shellpushdirtyhook (callback);

extern boolean shellcalldirtyhooks (void);

extern boolean shellpushmenuhook (menuhookcallback);

extern boolean shellcallmenuhooks (short, short);

extern boolean shellpusheventhook (eventhookcallback);

extern boolean shellpopeventhook (void);

extern boolean shellcalleventhooks (EventRecord *, WindowPtr);

extern boolean shellpusherrorhook (errorhookcallback);

extern boolean shellpoperrorhook (void);

extern boolean shellcallerrorhooks (bigstring);

extern boolean shellpushscraphook (scraphookcallback);

extern boolean shellcallscraphooks (Handle);

extern boolean shellpushmemoryhook (memoryhookcallback);

extern boolean shellcallmemoryhooks (long *);

extern boolean shellpushfilehook (callback);

extern boolean shellcallfilehooks (void);

extern boolean shellpushwakeuphook (wakeuphookcallback);

extern boolean shellcallwakeuphooks (hdlprocessthread);


#endif /*shellhooksinclude*/

