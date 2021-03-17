
/*	$Id: versions.h 1380 2006-05-18 23:58:22Z creecode $    */

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

/*
	versions.h
	
	Defines version numbers for Frontier and Radio UserLand for all platforms.
	
	JES 12/04/2002
	
	2006-02-07 aradke: major overhaul
		about.c and shell.r don't contain any target-specific version info anymore.
		there is some target-specific info in the version resource in winland.rc left,
		but nothing that needs to be changed on a regular basis.
		to do: convert pascal to c strings? (see about.c)

	2021-03-13 rcade: version and copyright update
		Updated Frontier version and copyright details to indicate that the defunct
		Frontier Kernel Project is no longer the primary author of new updates and
		link to the new GitHub repo.
*/ 


/* common strings for all targets */

#define	APP_COPYRIGHT_FROM	"2004"
#define	APP_COPYRIGHT_TILL	"2021"


/* target-specific strings and version info */

#ifdef PIKE
#ifndef OPMLEDITOR

	/* version info for RADIO targets (formerly known as PIKE) */
	
	#define APPNAME							"Radio"
	#define APP_COPYRIGHT_HOLDER			"UserLand Software, Inc"
	
	#define bs_APP_NAME						BIGSTRING ("\x05" "Radio")
	#define bs_APP_SLOGAN					BIGSTRING ("\x2b" "The power of Web publishing on your desktop")
	#define bs_APP_COPYRIGHT				BIGSTRING ("\x23" "� " APP_COPYRIGHT_FROM "-" APP_COPYRIGHT_TILL " UserLand Software, Inc.")
	#define bs_APP_URL						BIGSTRING ("\x26" "http://frontierkernel.sourceforge.net/")

	#define	APP_MAJOR_VERSION				10
	#define	APP_MAJOR_VERSION_BCD			0x10 	/* major version in BCD notation */

	#define	APP_SUB_VERSION					1
	#define	APP_MINOR_VERSION				0
	#define	APP_SUBMINOR_VERSION_BCD		0x10  	/* sub and minor version in BCD notation */

	#define APP_STAGE_CODE					0x40	/* dev = 0x20, alpha = 0x40, beta = 0x60, final = 0x80 */
	#define	APP_REVISION_LEVEL				10		/* for non-final releases only */
	#define	APP_BUILD_NUMBER				10		/* increment by one for every release, final or not */

	#define	APP_VERSION_STRING				"10.1a10-rc-1"

#else

	/* version info for OPMLEDITOR targets */
	
	#define APPNAME							"OPML"

	#define APP_COPYRIGHT_HOLDER			"Scripting News, Inc"

	#define bs_APP_NAME						BIGSTRING ("\x04" "OPML")
	#define bs_APP_SLOGAN					BIGSTRING ("\x25" "Powerful OPML editing on your desktop")
	#define bs_APP_COPYRIGHT				BIGSTRING ("\x20" "� " APP_COPYRIGHT_FROM "-" APP_COPYRIGHT_TILL " Scripting News, Inc.")
	#define bs_APP_URL						BIGSTRING ("\x18" "http://support.opml.org/")

	#define	APP_MAJOR_VERSION				10
	#define	APP_MAJOR_VERSION_BCD			0x10 	/* major version in BCD notation */

	#define	APP_SUB_VERSION					1
	#define	APP_MINOR_VERSION				0
	#define	APP_SUBMINOR_VERSION_BCD		0x10  	/* sub and minor version in BCD notation */

	#define APP_STAGE_CODE					0x40	/* dev = 0x20, alpha = 0x40, beta = 0x60, final = 0x80 */
	#define	APP_REVISION_LEVEL				10		/* for non-final releases only */
	#define	APP_BUILD_NUMBER				10		/* increment by one for every release, final or not */

	#define	APP_VERSION_STRING				"10.1a10"

#endif
#else

	/* version info for FRONTIER targets */
	
	#define APPNAME							"Frontier"
	#define APP_COPYRIGHT_HOLDER			"Rogers Cadenhead"

	#define bs_APP_NAME						BIGSTRING ("\x08" "Frontier")
	#define bs_APP_SLOGAN					BIGSTRING ("\x25" "Powerful cross-platform web scripting")
	#define bs_APP_COPYRIGHT				BIGSTRING ("\x17" "� " APP_COPYRIGHT_TILL " " APP_COPYRIGHT_HOLDER)
	#define bs_APP_URL						BIGSTRING ("\x22" "https://github.com/rcaden/Frontier")

	#define	APP_MAJOR_VERSION				10
	#define	APP_MAJOR_VERSION_BCD			0x10 	/* major version in BCD notation */

	#define	APP_SUB_VERSION					1
	#define	APP_MINOR_VERSION				0
	#define	APP_SUBMINOR_VERSION_BCD		0x12  	/* sub and minor version in BCD notation */

	#define APP_STAGE_CODE					0x40	/* dev = 0x20, alpha = 0x40, beta = 0x60, final = 0x80 */
	#define	APP_REVISION_LEVEL				11		/* for non-final releases only */
	#define	APP_BUILD_NUMBER				11		/* increment by one for every release, final or not */

	#define	APP_VERSION_STRING				"10.1a12"

#endif

#define bs_APP_COPYRIGHT2	BIGSTRING ("\x22" "� 1992-2004 UserLand Software, Inc")
#define APP_COPYRIGHT		APP_COPYRIGHT_FROM "-" APP_COPYRIGHT_TILL " " APP_COPYRIGHT_HOLDER

#define APPNAME_SHORT	APPNAME		/* 2006-02-04 aradke */
#define	APPNAME_TM		APPNAME		/* 2005-01-12 aradke: app names no longer include trademark character */





/* 2006-02-07 aradke: old version switched off */

#if 0

/* Radio version information */

#define	radio_major_version				10
#define	radio_major_version_bcd			0x10 	/* major version in BCD notation */

#define	radio_sub_version				1
#define	radio_minor_version				0
#define	radio_subminor_version_bcd		0x10  	/* sub and minor version in BCD notation */

#define	radio_stage_code				0x40		/* dev = 0x20, alpha = 0x40, beta = 0x60, final = 0x80 */
#define	radio_revision_level			5		/* for non-final releases only */
#define	radio_build_number				5		/* increment by one for every release, final or not */

#define	radio_version_string				"10.1a5"


/* Frontier version information */

#define	frontier_major_version			10
#define	frontier_major_version_bcd		0x10 	/* major version in BCD notation */

#define	frontier_sub_version			1
#define	frontier_minor_version			0
#define	frontier_subminor_version_bcd	0x10  	/* sub and minor version in BCD notation */

#define	frontier_stage_code				0x40		/* dev = 0x20, alpha = 0x40, beta = 0x60, final = 0x80 */
#define	frontier_revision_level			5		/* for non-final releases only */
#define	frontier_build_number			5		/* increment by one for every release, final or not */

#define	frontier_version_string			"10.1a5"


/* OPML Editor version information */

#define	opml_major_version				10
#define	opml_major_version_bcd			0x10 	/* major version in BCD notation */

#define	opml_sub_version				1
#define	opml_minor_version				0
#define	opml_subminor_version_bcd		0x10  	/* sub and minor version in BCD notation */

#define opml_stage_code					0x40	/* dev = 0x20, alpha = 0x40, beta = 0x60, final = 0x80 */
#define	opml_revision_level				5		/* for non-final releases only */
#define	opml_build_number				5		/* increment by one for every release, final or not */

#define	opml_version_string			"10.1a5"

#endif	/* 2006-02-06 aradke: switched off, see below */

