
/*	$Id: langsqlite.h,v 1.1.2.1 2006/03/24 01:31:35 davidgewirtz Exp $    */

/******************************************************************************

    UserLand Frontier(tm) -- High performance Web content management,
    object database, system-level and Internet scripting environment,
    including source code editing and debugging.

    Copyright (C) 2021 Rogers Cadenhead
	Copyright (C) 2004-2014 Frontier Kernel Project
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

/* prototypes */

extern boolean sqliteopenverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-03-15 gewirtz */

extern boolean sqlitecloseverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-03-17 gewirtz */

extern boolean sqlitecompilequeryverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-04-18 gewirtz */

extern boolean sqliteclearqueryverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-04-18 gewirtz */

extern boolean sqliteresetqueryverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-08-31 gewirtz */

extern boolean sqlitestepqueryverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-08-31 gewirtz */

extern boolean sqlitegetcolumncountverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-04-18 gewirtz */

extern boolean sqlitegetcolumntypeverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-04-18 gewirtz */

extern boolean sqlitegetcolumnintverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-04-18 gewirtz */

extern boolean sqlitegetcolumndoubleverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-04-18 gewirtz */

extern boolean sqlitegetcolumntextverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-04-18 gewirtz */

extern boolean sqlitegetcolumnnameverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-04-18 gewirtz */

extern boolean sqlitegetcolumnverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-04-20 gewirtz */

extern boolean sqlitegetrowverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-08-31 gewirtz */

extern boolean sqlitegeterrormessageverb (hdltreenode, tyvaluerecord *, bigstring); /* 2006-04-20 gewirtz */

extern boolean sqliteinitverbs (void); /* 2006-03-15 gewirtz */

/* boolean hmacmd5 (unsigned char *, int, unsigned char *, int, unsigned char *);*/ /* 2006-03-05 creedon */

/* boolean hmacsha1 (unsigned char *, int, unsigned char *, int, unsigned char *);*/ /* 2006-03-12 creedon */

/* SQLITE MESSAGES */
#define SQLITE_COLUMN_ERROR_0 "\xe9""SQLite column error. Frontier uses a base-1 index. Columns must be specified with 1 indicating the first column. This is different from the SQLite API, which requires that columns must be specified with 0 indicating the first column."
#define SQLITE_COLUMN_ERROR_MAX "\x50""SQLite column error. An attempt was made to access a column that does not exist."
#define SQLITE_COLUMN_ERROR_UNDEFINED "\x29""SQLite returned an undefined column type."