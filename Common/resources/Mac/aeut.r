
/*	$Id: aeut.r 355 2005-01-11 22:48:55Z andreradke $    */

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

#include "frontier.r"


resource 'aete' (0, "Frontier Suites") {
	0x1,
	0x0,
	english,
	roman,
	{	/* array Suites: 3 elements */
		/* [1] */
		"Required Suite",
		"",
		'reqd',
		1,
		1,
		{	/* array Events: 0 elements */
		},
		{	/* array Classes: 0 elements */
		},
		{	/* array ComparisonOps: 0 elements */
		},
		{	/* array Enumerations: 0 elements */
		},
		/* [2] */
		"Core Suite",
		"",
		'core',
		1,
		1,
		{	/* array Events: 0 elements */
		},
		{	/* array Classes: 0 elements */
		},
		{	/* array ComparisonOps: 0 elements */
		},
		{	/* array Enumerations: 0 elements */
		},
		/* [3] */
		"Subset of misc suite",
		"",
		'LAND',
		1,
		1,
		{	/* array Events: 1 elements */
			/* [1] */
			"Do Script",
			"Execute a script",
			'misc',
			'dosc',
			'****',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'TEXT',
			"The text of the Frontier script to be executed",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			}
		},
		{	/* array Classes: 2 elements */
			/* [1] */
			"Application",
			'capp',
			"A Macintosh application",
			{	/* array Properties: 0 elements */
			},
			{	/* array Elements: 1 elements */
				/* [1] */
				'ccel',
				{	/* array KeyForms: 1 elements */
					/* [1] */
					formName
				}
			},
			/* [2] */
			"Cell",
			'ccel',
			"A cell",
			{	/* array Properties: 0 elements */
			},
			{	/* array Elements: 0 elements */
			}
		},
		{	/* array ComparisonOps: 0 elements */
		},
		{	/* array Enumerations: 0 elements */
		}
	}
};

resource 'aeut' (0, "Standard Event Suites", sysheap) {
	0x0,
	-0x6A,
	english,
	roman,
	{	/* array Suites: 6 elements */
		/* [1] */
		"Required Suite",
		"Events that every application should support",
		'reqd',
		1,
		1,
		{	/* array Events: 4 elements */
			/* [1] */
			"run",
			"",
			'aevt',
			'oapp',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			noParams,
			"",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [2] */
			"open",
			"Open documents",
			'aevt',
			'odoc',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'alis',
			"",
			directParamRequired,
			listOfItems,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [3] */
			"print",
			"Print documents",
			'aevt',
			'pdoc',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'alis',
			"",
			directParamRequired,
			listOfItems,
			notEnumerated,
			doesntChangeState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [4] */
			"quit",
			"Quit application",
			'aevt',
			'quit',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			noParams,
			"",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			}
		},
		{	/* array Classes: 0 elements */
		},
		{	/* array ComparisonOps: 0 elements */
		},
		{	/* array Enumerations: 0 elements */
		},
		/* [2] */
		"Core Suite",
		"Suite that applies to all applications",
		'core',
		1,
		1,
		{	/* array Events: 16 elements */
			/* [1] */
			"duplicate",
			"Duplicate object(s)",
			'core',
			'clon',
			'obj ',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object(s) to duplicate",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 1 elements */
				/* [1] */
				"to",
				'insh',
				'insl',
				"the new location for the object(s)",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [2] */
			"close",
			"Close an object",
			'core',
			'clos',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object to close",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 2 elements */
				/* [1] */
				"saving",
				'savo',
				'savo',
				"Specifies whether or not changes should be saved before closing",
				optional,
				singleItem,
				enumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [2] */
				"saving in",
				'kfil',
				'alis',
				"the file in which to save the object",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [3] */
			"count elements",
			"Return the number of elements of a particular class within an object",
			'core',
			'cnte',
			'long',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object whose elements are to be counted",
			directParamRequired,
			singleItem,
			notEnumerated,
			doesntChangeState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 1 elements */
				/* [1] */
				"each",
				'kocl',
				'type',
				"the class of the elements to be counted",
				required,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [4] */
			"create",
			"Create a new element",
			'core',
			'crel',
			'obj ',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			noParams,
			"",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 4 elements */
				/* [1] */
				"new",
				'kocl',
				'type',
				"the class of the new element",
				required,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [2] */
				"at",
				'insh',
				'insl',
				"the location at which to insert the element",
				required,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [3] */
				"with data",
				'data',
				'****',
				"the initial data for the element",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [4] */
				"with properties",
				'prdt',
				'reco',
				"the initial values for the properties of the element",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [5] */
			"delete",
			"Delete an element from an object",
			'core',
			'delo',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the element to delete",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [6] */
			"exists",
			"Verify if an object exists",
			'core',
			'doex',
			'bool',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object in question",
			directParamRequired,
			singleItem,
			notEnumerated,
			doesntChangeState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [7] */
			"class info",
			"Get information about an object class",
			'core',
			'qobj',
			'clin',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'type',
			"the object class about which information is requested",
			directParamOptional,
			singleItem,
			notEnumerated,
			doesntChangeState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 1 elements */
				/* [1] */
				"in",
				'wrcd',
				'intl',
				"the human language and script system in which to return information",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [8] */
			"get",
			"Get the data for an object",
			'core',
			'getd',
			'****',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object whose data is to be returned",
			directParamRequired,
			singleItem,
			notEnumerated,
			doesntChangeState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 1 elements */
				/* [1] */
				"as",
				'rtyp',
				'type',
				"the desired types for the data, in order of preference",
				optional,
				listOfItems,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [9] */
			"data size",
			"Return the size in bytes of an object",
			'core',
			'dsiz',
			'long',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object whose data size is to be returned",
			directParamRequired,
			singleItem,
			notEnumerated,
			doesntChangeState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 1 elements */
				/* [1] */
				"as",
				'rtyp',
				'type',
				"the data type for which the size is calculated",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [10] */
			"event info",
			"Get information about the Apple events in a suite",
			'core',
			'gtei',
			'evin',
			"",
			replyRequired,
			listOfItems,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'type',
			"the event class of the Apple events for which to return information",
			directParamRequired,
			singleItem,
			notEnumerated,
			doesntChangeState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 1 elements */
				/* [1] */
				"in",
				'wrcd',
				'intl',
				"the human language and script system in which to return information",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [11] */
			"move",
			"Move object(s) to a new location",
			'core',
			'move',
			'obj ',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object(s) to move",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 1 elements */
				/* [1] */
				"to",
				'insh',
				'insl',
				"the new location for the object(s)",
				required,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [12] */
			"open",
			"Open object(s)",
			'aevt',
			'odoc',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object to open",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [13] */
			"print",
			"Print object(s)",
			'aevt',
			'pdoc',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object to print",
			directParamRequired,
			singleItem,
			notEnumerated,
			doesntChangeState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [14] */
			"quit",
			"Quit an application program",
			'aevt',
			'quit',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			noParams,
			"",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 1 elements */
				/* [1] */
				"saving",
				'savo',
				'savo',
				"Specifies whether or not to save currently open documents",
				optional,
				singleItem,
				enumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [15] */
			"save",
			"Save an object",
			'core',
			'save',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object to save",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 2 elements */
				/* [1] */
				"in",
				'kfil',
				'alis',
				"the file in which to save the object",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [2] */
				"as",
				'fltp',
				'type',
				"the file type of the document in which to save the data",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [16] */
			"set",
			"Set an object's data",
			'core',
			'setd',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object to change",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 1 elements */
				/* [1] */
				"to",
				'data',
				'****',
				"the new value",
				required,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			}
		},
		{	/* array Classes: 14 elements */
		},
		{	/* array ComparisonOps: 8 elements */
		},
		{	/* array Enumerations: 2 elements */
		},
		/* [3] */
		"Miscellaneous Standards",
		"Miscellaneous standard events and classes",
		'misc',
		1,
		1,
		{	/* array Events: 14 elements */
			/* [1] */
			"begin transaction",
			"Begin a transaction",
			'misc',
			'begi',
			'long',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			noParams,
			"",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [2] */
			"end transaction",
			"End a transaction",
			'misc',
			'endt',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			noParams,
			"",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [3] */
			"create publisher",
			"Create a publisher",
			'misc',
			'cpub',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"Object to publish",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 1 elements */
				/* [1] */
				"edition",
				'eloc',
				'alis',
				"Alias to the edition container file",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [4] */
			"cut",
			"Cut an object to the clipboard",
			'misc',
			'cut ',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			noParams,
			"",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [5] */
			"copy",
			"Copy an object to the clipboard",
			'misc',
			'copy',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			noParams,
			"",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [6] */
			"paste",
			"Paste an object from the clipboard",
			'misc',
			'past',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			noParams,
			"",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [7] */
			"edit graphic",
			"Edit the specified drawing area",
			'misc',
			'edit',
			'cdrw',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'cdrw',
			"the drawing area to be edited",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [8] */
			"image graphic",
			"Convert a graphic from one format to another",
			'misc',
			'imgr',
			'****',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'****',
			"the graphic to be converted or formatted",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 10 elements */
				/* [1] */
				"antialiasing",
				'anta',
				'bool',
				"use antialiasing",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [2] */
				"dithering",
				'gdit',
				'bool',
				"use dithering",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [3] */
				"rotate",
				'kdrt',
				'trot',
				"the rotation of the image",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [4] */
				"scale",
				'ksca',
				'fixd',
				"the factor by which to scale the image",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [5] */
				"translation",
				'ktra',
				'QDpt',
				"offset by which the image should be moved",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [6] */
				"flip horizontal",
				'kfho',
				'bool',
				"flip image horizontally?",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [7] */
				"flip vertical",
				'kfvt',
				'bool',
				"flip image vertically?",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [8] */
				"quality",
				'gqua',
				'qual',
				"image quality of the result",
				optional,
				singleItem,
				enumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [9] */
				"format",
				'kren',
				'type',
				"The format into which the data should be imaged",
				required,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [10] */
				"structured graphic",
				'toog',
				'bool',
				"Return a structured graphic, instead of a pixel map?",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [9] */
			"uniform",
			"Is the value of the specified property the same for all objects in the set?",
			'misc',
			'isun',
			'bool',
			"",
			replyRequired,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"The set of objects to be checked for uniformity",
			directParamRequired,
			singleItem,
			notEnumerated,
			doesntChangeState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 1 elements */
				/* [1] */
				"in",
				'kprp',
				'type',
				"The property ID for the property to be checked",
				required,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [10] */
			"show",
			"Bring an object into view",
			'misc',
			'mvis',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"the object to be made visible",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 2 elements */
				/* [1] */
				"in",
				'wndw',
				'obj ',
				"the window in which to display the object",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular,
				/* [2] */
				"at",
				'show',
				'QDpt',
				"the point at which to display the object",
				optional,
				singleItem,
				notEnumerated,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				reserved,
				notFeminine,
				notMasculine,
				singular
			},
			/* [11] */
			"redo",
			"Reverse the action of the immediately preceeding undo",
			'misc',
			'redo',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			noParams,
			"",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [12] */
			"revert",
			"Restore the object to its last saved state",
			'misc',
			'rvrt',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"The object to revert",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [13] */
			"undo",
			"Undo the action of the previous event or user interaction",
			'misc',
			'undo',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			noParams,
			"",
			directParamOptional,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			},
			/* [14] */
			"select",
			"Select object(s)",
			'misc',
			'slct',
			noReply,
			"",
			replyOptional,
			singleItem,
			notEnumerated,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			'obj ',
			"Object(s) to select",
			directParamRequired,
			singleItem,
			notEnumerated,
			changesState,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			reserved,
			{	/* array OtherParams: 0 elements */
			}
		},
		{	/* array Classes: 6 elements */
		},
		{	/* array ComparisonOps: 0 elements */
		},
		{	/* array Enumerations: 1 elements */
		}
	}
};
