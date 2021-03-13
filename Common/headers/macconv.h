
/*	$Id: macconv.h 1292 2006-04-17 17:52:12Z andreradke $    */

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

/* Macintosh Conversion */ 
#undef pascal
#define pascal 

#define __APPLEEVENTS__

extern HINSTANCE shellinstance;
extern HINSTANCE hInst;
extern HWND shellframewindow;
extern HWND hwndMDIClient;
extern HWND hwndActive;
extern HANDLE hAccel;
extern LONG styleDefault;
extern CHAR szChild1[];
extern CHAR szChildFTop[];
extern CHAR szChildFTwp[];
extern CHAR szChildFTtb[];
extern CHAR szChildFTmb[];
extern CHAR szChildFTsc[];
extern CHAR szChildRoot[];

extern CHAR szFrame[];

#define noErr 0

#define keyDown			3
#define autoKey			5
#define mouseDown		1
#define mouseUp			2
#define activateEvt		8
#define jugglerEvt		15
#define updateEvt		6
#define menuEvt			31			//Windows Only
#define scrollEvt		32			//Windows Only
#define rmouseDown		33			//Windows Only
#define rmouseUp		34			//Windows Only
#define cmouseDown		35			//Windows Only
#define cmouseUp		36			//Windows Only
#define wmouseDown		37			//Windows Only
#define wmouseUp		38			//Windows Only
#define zoomEvt			39			//Windows Only

#define suspendResumeMessage	0x0001
#define resumeFlag				0x01

#define everyEvent		-1
#define activeFlag		256
#define activMask		256
#define updateMask		64
#define mDownMask		2
#define mUpMask			4
#define keyDownMask		8
#define keyUpMask		16
#define autoKeyMask		32
#define diskMask		128
#define highLevelEventMask 1024
#define osMask			0x8000

#define systemFont 0

#define LoWord(x) LOWORD(x)
#define HiWord(x) HIWORD(x)


enum {
/* Apple event descriptor types */
	typeBoolean					= 'bool',
	typeChar					= 'TEXT',
	typeSMInt					= 'shor',
	typeInteger					= 'long',
	typeSMFloat					= 'sing',
	typeFloat					= 'doub',
	typeLongInteger				= 'long',
	typeShortInteger			= 'shor',
	typeLongFloat				= 'doub',
	typeShortFloat				= 'sing',
	typeExtended				= 'exte',
	typeComp					= 'comp',
	typeMagnitude				= 'magn',
	typeAEList					= 'list',
	typeAERecord				= 'reco',
	typeAppleEvent				= 'aevt',
	typeTrue					= 'true',
	typeFalse					= 'fals',
	typeAlias					= 'alis',
	typeEnumerated				= 'enum',
	typeType					= 'type',
	typeAppParameters			= 'appa',
	typeProperty				= 'prop',
	typeFSS						= 'fss ',
	typeKeyword					= 'keyw',
	typeSectionH				= 'sect',
	typeWildCard				= '****',
	typeApplSignature			= 'sign',
	typeQDRectangle				= 'qdrt',
	typeFixed					= 'fixd',
	typeSessionID				= 'ssid',
	typeTargetID				= 'targ',
	typeProcessSerialNumber		= 'psn ',
	typeNull					= 'null',						/* null or nonexistent data */
/* Keywords for Apple event parameters */
	keyDirectObject				= '----',
	keyErrorNumber				= 'errn',
	keyErrorString				= 'errs',
	keyProcessSerialNumber		= 'psn ',
/* Keywords for Apple event attributes */
	keyTransactionIDAttr		= 'tran',
	keyReturnIDAttr				= 'rtid',
	keyEventClassAttr			= 'evcl',
	keyEventIDAttr				= 'evid',
	keyAddressAttr				= 'addr',
	keyOptionalKeywordAttr		= 'optk',
	keyTimeoutAttr				= 'timo',
	keyInteractLevelAttr		= 'inte',						/* this attribute is read only - will be set in AESend */
	keyEventSourceAttr			= 'esrc',						/* this attribute is read only */
	keyMissedKeywordAttr		= 'miss',						/* this attribute is read only */
	keyOriginalAddressAttr		= 'from',						/* new in 1.0.1 */
/* Keywords for special handlers */
	keyPreDispatch				= 'phac',						/* preHandler accessor call */
	keySelectProc				= 'selh',						/* more selector call */
/* Keyword for recording */
	keyAERecorderCount			= 'recr',						/* available only in vers 1.0.1 and greater */
/* Keyword for version information */
	keyAEVersion				= 'vers',						/* available only in vers 1.0.1 and greater */
/* Event Class */
	kCoreEventClass				= 'aevt',
/* Event ID�s */
	kAEOpenApplication			= 'oapp',
	kAEOpenDocuments			= 'odoc',
	kAEPrintDocuments			= 'pdoc',
	kAEQuitApplication			= 'quit',
	kAEAnswer					= 'ansr',
	kAEApplicationDied			= 'obit'
};
enum {
	cAEList						= 'list',						/*  0x6c697374  */
	cApplication				= 'capp',						/*  0x63617070  */
	cArc						= 'carc',						/*  0x63617263  */
	cBoolean					= 'bool',						/*  0x626f6f6c  */
	cCell						= 'ccel',						/*  0x6363656c  */
	cChar						= 'cha ',						/*  0x63686120  */
	cColorTable					= 'clrt',						/*  0x636c7274  */
	cColumn						= 'ccol',						/*  0x63636f6c  */
	cDocument					= 'docu',						/*  0x646f6375  */
	cDrawingArea				= 'cdrw',						/*  0x63647277  */
	cEnumeration				= 'enum',						/*  0x656e756d  */
	cFile						= 'file',						/*  0x66696c65  */
	cFixed						= 'fixd',						/*  0x66697864  */
	cFixedPoint					= 'fpnt',						/*  0x66706e74  */
	cFixedRectangle				= 'frct',						/*  0x66726374  */
	cGraphicLine				= 'glin',						/*  0x676c696e  */
	cGraphicObject				= 'cgob',						/*  0x63676f62  */
	cGraphicShape				= 'cgsh',						/*  0x63677368  */
	cGraphicText				= 'cgtx',						/*  0x63677478  */
	cGroupedGraphic				= 'cpic'
};

enum {
	cInsertionLoc				= 'insl',						/*  0x696e736c  */
	cInsertionPoint				= 'cins',						/*  0x63696e73  */
	cIntlText					= 'itxt',						/*  0x69747874  */
	cIntlWritingCode			= 'intl',						/*  0x696e746c  */
	cItem						= 'citm',						/*  0x6369746d  */
	cLine						= 'clin',						/*  0x636c696e  */
	cLongDateTime				= 'ldt ',						/*  0x6c647420  */
	cLongFixed					= 'lfxd',						/*  0x6c667864  */
	cLongFixedPoint				= 'lfpt',						/*  0x6c667074  */
	cLongFixedRectangle			= 'lfrc',						/*  0x6c667263  */
	cLongInteger				= 'long',						/*  0x6c6f6e67  */
	cLongPoint					= 'lpnt',						/*  0x6c706e74  */
	cLongRectangle				= 'lrct',						/*  0x6c726374  */
	cMachineLoc					= 'mLoc',						/*  0x6d4c6f63  */
	cMenu						= 'cmnu',						/*  0x636d6e75  */
	cMenuItem					= 'cmen',						/*  0x636d656e  */
	cObject						= 'cobj',						/*  0x636f626a  */
	cObjectSpecifier			= 'obj ',						/*  0x6f626a20  */
	cOpenableObject				= 'coob',						/*  0x636f6f62  */
	cOval						= 'covl'
};

enum {
	cParagraph					= 'cpar',						/*  0x63706172  */
	cPICT						= 'PICT',						/*  0x50494354  */
	cPixel						= 'cpxl',						/*  0x6370786c  */
	cPixelMap					= 'cpix',						/*  0x63706978  */
	cPolygon					= 'cpgn',						/*  0x6370676e  */
	cProperty					= 'prop',						/*  0x70726f70  */
	cQDPoint					= 'QDpt',						/*  0x51447074  */
	cQDRectangle				= 'qdrt',						/*  0x71647274  */
	cRectangle					= 'crec',						/*  0x63726563  */
	cRGBColor					= 'cRGB',						/*  0x63524742  */
	cRotation					= 'trot',						/*  0x74726f74  */
	cRoundedRectangle			= 'crrc',						/*  0x63727263  */
	cRow						= 'crow',						/*  0x63726f77  */
	cSelection					= 'csel',						/*  0x6373656c  */
	cShortInteger				= 'shor',						/*  0x73686f72  */
	cTable						= 'ctbl',						/*  0x6374626c  */
	cText						= 'ctxt',						/*  0x63747874  */
	cTextFlow					= 'cflo',						/*  0x63666c6f  */
	cTextStyles					= 'tsty',						/*  0x74737479  */
	cType						= 'type'
};

enum {
	cVersion					= 'vers',						/*  0x76657273  */
	cWindow						= 'cwin',						/*  0x6377696e  */
	cWord						= 'cwor',						/*  0x63776f72  */
	enumArrows					= 'arro',						/*  0x6172726f  */
	enumJustification			= 'just',						/*  0x6a757374  */
	enumKeyForm					= 'kfrm',						/*  0x6b66726d  */
	enumPosition				= 'posi',						/*  0x706f7369  */
	enumProtection				= 'prtn',						/*  0x7072746e  */
	enumQuality					= 'qual',						/*  0x7175616c  */
	enumSaveOptions				= 'savo',						/*  0x7361766f  */
	enumStyle					= 'styl',						/*  0x7374796c  */
	enumTransferMode			= 'tran',						/*  0x7472616e  */
	formUniqueID				= 'ID  ',						/*  0x49442020  */
	kAEAbout					= 'abou',						/*  0x61626f75  */
	kAEAfter					= 'afte',						/*  0x61667465  */
	kAEAliasSelection			= 'sali',						/*  0x73616c69  */
	kAEAllCaps					= 'alcp',						/*  0x616c6370  */
	kAEArrowAtEnd				= 'aren',						/*  0x6172656e  */
	kAEArrowAtStart				= 'arst',						/*  0x61727374  */
	kAEArrowBothEnds			= 'arbo'
};

enum {
	kAEAsk						= 'ask ',						/*  0x61736b20  */
	kAEBefore					= 'befo',						/*  0x6265666f  */
	kAEBeginning				= 'bgng',						/*  0x62676e67  */
	kAEBeginsWith				= 'bgwt',						/*  0x62677774  */
	kAEBeginTransaction			= 'begi',						/*  0x62656769  */
	kAEBold						= 'bold',						/*  0x626f6c64  */
	kAECaseSensEquals			= 'cseq',						/*  0x63736571  */
	kAECentered					= 'cent',						/*  0x63656e74  */
	kAEChangeView				= 'view',						/*  0x76696577  */
	kAEClone					= 'clon',						/*  0x636c6f6e  */
	kAEClose					= 'clos',						/*  0x636c6f73  */
	kAECondensed				= 'cond',						/*  0x636f6e64  */
	kAEContains					= 'cont',						/*  0x636f6e74  */
	kAECopy						= 'copy',						/*  0x636f7079  */
	kAECoreSuite				= 'core',						/*  0x636f7265  */
	kAECountElements			= 'cnte',						/*  0x636e7465  */
	kAECreateElement			= 'crel',						/*  0x6372656c  */
	kAECreatePublisher			= 'cpub',						/*  0x63707562  */
	kAECut						= 'cut ',						/*  0x63757420  */
	kAEDelete					= 'delo'
};

enum {
	kAEDoObjectsExist			= 'doex',						/*  0x646f6578  */
	kAEDoScript					= 'dosc',						/*  0x646f7363  */
	kAEDrag						= 'drag',						/*  0x64726167  */
	kAEDuplicateSelection		= 'sdup',						/*  0x73647570  */
	kAEEditGraphic				= 'edit',						/*  0x65646974  */
	kAEEmptyTrash				= 'empt',						/*  0x656d7074  */
	kAEEnd						= 'end ',						/*  0x656e6420  */
	kAEEndsWith					= 'ends',						/*  0x656e6473  */
	kAEEndTransaction			= 'endt',						/*  0x656e6474  */
	kAEEquals					= '=   ',						/*  0x3d202020  */
	kAEExpanded					= 'pexp',						/*  0x70657870  */
	kAEFast						= 'fast',						/*  0x66617374  */
	kAEFinderEvents				= 'FNDR',						/*  0x464e4452  */
	kAEFormulaProtect			= 'fpro',						/*  0x6670726f  */
	kAEFullyJustified			= 'full',						/*  0x66756c6c  */
	kAEGetClassInfo				= 'qobj',						/*  0x716f626a  */
	kAEGetData					= 'getd',						/*  0x67657464  */
	kAEGetDataSize				= 'dsiz',						/*  0x6473697a  */
	kAEGetEventInfo				= 'gtei',						/*  0x67746569  */
	kAEGetInfoSelection			= 'sinf'
};

enum {
	kAEGetPrivilegeSelection	= 'sprv',						/*  0x73707276  */
	kAEGetSuiteInfo				= 'gtsi',						/*  0x67747369  */
	kAEGreaterThan				= '>   ',						/*  0x3e202020  */
	kAEGreaterThanEquals		= '>=  ',						/*  0x3e3d2020  */
	kAEGrow						= 'grow',						/*  0x67726f77  */
	kAEHidden					= 'hidn',						/*  0x6869646e  */
	kAEHiQuality				= 'hiqu',						/*  0x68697175  */
	kAEImageGraphic				= 'imgr',						/*  0x696d6772  */
	kAEIsUniform				= 'isun',						/*  0x6973756e  */
	kAEItalic					= 'ital',						/*  0x6974616c  */
	kAELeftJustified			= 'left',						/*  0x6c656674  */
	kAELessThan					= '<   ',						/*  0x3c202020  */
	kAELessThanEquals			= '<=  ',						/*  0x3c3d2020  */
	kAELowercase				= 'lowc',						/*  0x6c6f7763  */
	kAEMakeObjectsVisible		= 'mvis',						/*  0x6d766973  */
	kAEMiscStandards			= 'misc',						/*  0x6d697363  */
	kAEModifiable				= 'modf',						/*  0x6d6f6466  */
	kAEMove						= 'move',						/*  0x6d6f7665  */
	kAENo						= 'no  ',						/*  0x6e6f2020  */
	kAENoArrow					= 'arno'
};

enum {
	kAENonmodifiable			= 'nmod',						/*  0x6e6d6f64  */
	kAEOpen						= 'odoc',						/*  0x6f646f63  */
	kAEOpenSelection			= 'sope',						/*  0x736f7065  */
	kAEOutline					= 'outl',						/*  0x6f75746c  */
	kAEPageSetup				= 'pgsu',						/*  0x70677375  */
	kAEPaste					= 'past',						/*  0x70617374  */
	kAEPlain					= 'plan',						/*  0x706c616e  */
	kAEPrint					= 'pdoc',						/*  0x70646f63  */
	kAEPrintSelection			= 'spri',						/*  0x73707269  */
	kAEPrintWindow				= 'pwin',						/*  0x7077696e  */
	kAEPutAwaySelection			= 'sput',						/*  0x73707574  */
	kAEQDAddOver				= 'addo',						/*  0x6164646f  */
	kAEQDAddPin					= 'addp',						/*  0x61646470  */
	kAEQDAdMax					= 'admx',						/*  0x61646d78  */
	kAEQDAdMin					= 'admn',						/*  0x61646d6e  */
	kAEQDBic					= 'bic ',						/*  0x62696320  */
	kAEQDBlend					= 'blnd',						/*  0x626c6e64  */
	kAEQDCopy					= 'cpy ',						/*  0x63707920  */
	kAEQDNotBic					= 'nbic',						/*  0x6e626963  */
	kAEQDNotCopy				= 'ncpy'
};

enum {
	kAEQDNotOr					= 'ntor',						/*  0x6e746f72  */
	kAEQDNotXor					= 'nxor',						/*  0x6e786f72  */
	kAEQDOr						= 'or  ',						/*  0x6f722020  */
	kAEQDSubOver				= 'subo',						/*  0x7375626f  */
	kAEQDSubPin					= 'subp',						/*  0x73756270  */
	kAEQDSupplementalSuite		= 'qdsp',						/*  0x71647370  */
	kAEQDXor					= 'xor ',						/*  0x786f7220  */
	kAEQuickdrawSuite			= 'qdrw',						/*  0x71647277  */
	kAEQuitAll					= 'quia',						/*  0x71756961  */
	kAERedo						= 'redo',						/*  0x7265646f  */
	kAERegular					= 'regl',						/*  0x7265676c  */
	kAEReplace					= 'rplc',						/*  0x72706c63  */
	kAERequiredSuite			= 'reqd',						/*  0x72657164  */
	kAERestart					= 'rest',						/*  0x72657374  */
	kAERevealSelection			= 'srev',						/*  0x73726576  */
	kAERevert					= 'rvrt',						/*  0x72767274  */
	kAERightJustified			= 'rght',						/*  0x72676874  */
	kAESave						= 'save',						/*  0x73617665  */
	kAESelect					= 'slct',						/*  0x736c6374  */
	kAESetData					= 'setd'
};

enum {
	kAESetPosition				= 'posn',						/*  0x706f736e  */
	kAEShadow					= 'shad',						/*  0x73686164  */
	kAEShowClipboard			= 'shcl',						/*  0x7368636c  */
	kAEShutDown					= 'shut',						/*  0x73687574  */
	kAESleep					= 'slep',						/*  0x736c6570  */
	kAESmallCaps				= 'smcp',						/*  0x736d6370  */
	kAESpecialClassProperties	= 'c@#!',						/*  0x63402321  */
	kAEStrikethrough			= 'strk',						/*  0x7374726b  */
	kAESubscript				= 'sbsc',						/*  0x73627363  */
	kAESuperscript				= 'spsc',						/*  0x73707363  */
	kAETableSuite				= 'tbls',						/*  0x74626c73  */
	kAETextSuite				= 'TEXT',						/*  0x54455854  */
	kAETransactionTerminated	= 'ttrm',						/*  0x7474726d  */
	kAEUnderline				= 'undl',						/*  0x756e646c  */
	kAEUndo						= 'undo',						/*  0x756e646f  */
	kAEWholeWordEquals			= 'wweq',						/*  0x77776571  */
	kAEYes						= 'yes ',						/*  0x79657320  */
	kAEZoom						= 'zoom',						/*  0x7a6f6f6d  */
	keyAEAngle					= 'kang',						/*  0x6b616e67  */
	keyAEArcAngle				= 'parc'
};

enum {
	keyAEBaseAddr				= 'badd',						/*  0x62616464  */
	keyAEBestType				= 'pbst',						/*  0x70627374  */
	keyAEBgndColor				= 'kbcl',						/*  0x6b62636c  */
	keyAEBgndPattern			= 'kbpt',						/*  0x6b627074  */
	keyAEBounds					= 'pbnd',						/*  0x70626e64  */
	keyAECellList				= 'kclt',						/*  0x6b636c74  */
	keyAEClassID				= 'clID',						/*  0x636c4944  */
	keyAEColor					= 'colr',						/*  0x636f6c72  */
	keyAEColorTable				= 'cltb',						/*  0x636c7462  */
	keyAECurveHeight			= 'kchd',						/*  0x6b636864  */
	keyAECurveWidth				= 'kcwd',						/*  0x6b637764  */
	keyAEDashStyle				= 'pdst',						/*  0x70647374  */
	keyAEData					= 'data',						/*  0x64617461  */
	keyAEDefaultType			= 'deft',						/*  0x64656674  */
	keyAEDefinitionRect			= 'pdrt',						/*  0x70647274  */
	keyAEDescType				= 'dstp',						/*  0x64737470  */
	keyAEDestination			= 'dest',						/*  0x64657374  */
	keyAEDoAntiAlias			= 'anta',						/*  0x616e7461  */
	keyAEDoDithered				= 'gdit',						/*  0x67646974  */
	keyAEDoRotate				= 'kdrt'
};

enum {
	keyAEDoScale				= 'ksca',						/*  0x6b736361  */
	keyAEDoTranslate			= 'ktra',						/*  0x6b747261  */
	keyAEEditionFileLoc			= 'eloc',						/*  0x656c6f63  */
	keyAEElements				= 'elms',						/*  0x656c6d73  */
	keyAEEndPoint				= 'pend',						/*  0x70656e64  */
	keyAEEventClass				= 'evcl',						/*  0x6576636c  */
	keyAEEventID				= 'evti',						/*  0x65767469  */
	keyAEFile					= 'kfil',						/*  0x6b66696c  */
	keyAEFileType				= 'fltp',						/*  0x666c7470  */
	keyAEFillColor				= 'flcl',						/*  0x666c636c  */
	keyAEFillPattern			= 'flpt',						/*  0x666c7074  */
	keyAEFlipHorizontal			= 'kfho',						/*  0x6b66686f  */
	keyAEFlipVertical			= 'kfvt',						/*  0x6b667674  */
	keyAEFont					= 'font',						/*  0x666f6e74  */
	keyAEFormula				= 'pfor',						/*  0x70666f72  */
	keyAEGraphicObjects			= 'gobs',						/*  0x676f6273  */
	keyAEID						= 'ID  ',						/*  0x49442020  */
	keyAEImageQuality			= 'gqua',						/*  0x67717561  */
	keyAEInsertHere				= 'insh',						/*  0x696e7368  */
	keyAEKeyForms				= 'keyf'
};

enum {
	keyAEKeyword				= 'kywd',						/*  0x6b797764  */
	keyAELevel					= 'levl',						/*  0x6c65766c  */
	keyAELineArrow				= 'arro',						/*  0x6172726f  */
	keyAEName					= 'pnam',						/*  0x706e616d  */
	keyAENewElementLoc			= 'pnel',						/*  0x706e656c  */
	keyAEObject					= 'kobj',						/*  0x6b6f626a  */
	keyAEObjectClass			= 'kocl',						/*  0x6b6f636c  */
	keyAEOffStyles				= 'ofst',						/*  0x6f667374  */
	keyAEOnStyles				= 'onst',						/*  0x6f6e7374  */
	keyAEParameters				= 'prms',						/*  0x70726d73  */
	keyAEParamFlags				= 'pmfg',						/*  0x706d6667  */
	keyAEPenColor				= 'ppcl',						/*  0x7070636c  */
	keyAEPenPattern				= 'pppa',						/*  0x70707061  */
	keyAEPenWidth				= 'ppwd',						/*  0x70707764  */
	keyAEPixelDepth				= 'pdpt',						/*  0x70647074  */
	keyAEPixMapMinus			= 'kpmm',						/*  0x6b706d6d  */
	keyAEPMTable				= 'kpmt',						/*  0x6b706d74  */
	keyAEPointList				= 'ptlt',						/*  0x70746c74  */
	keyAEPointSize				= 'ptsz',						/*  0x7074737a  */
	keyAEPosition				= 'kpos'
};

enum {
	keyAEPropData				= 'prdt',						/*  0x70726474  */
	keyAEProperties				= 'qpro',						/*  0x7170726f  */
	keyAEProperty				= 'kprp',						/*  0x6b707270  */
	keyAEPropFlags				= 'prfg',						/*  0x70726667  */
	keyAEPropID					= 'prop',						/*  0x70726f70  */
	keyAEProtection				= 'ppro',						/*  0x7070726f  */
	keyAERenderAs				= 'kren',						/*  0x6b72656e  */
	keyAERequestedType			= 'rtyp',						/*  0x72747970  */
	keyAEResult					= '----',						/*  0x2d2d2d2d  */
	keyAEResultInfo				= 'rsin',						/*  0x7273696e  */
	keyAERotation				= 'prot',						/*  0x70726f74  */
	keyAERotPoint				= 'krtp',						/*  0x6b727470  */
	keyAERowList				= 'krls',						/*  0x6b726c73  */
	keyAESaveOptions			= 'savo',						/*  0x7361766f  */
	keyAEScale					= 'pscl',						/*  0x7073636c  */
	keyAEScriptTag				= 'psct',						/*  0x70736374  */
	keyAEShowWhere				= 'show',						/*  0x73686f77  */
	keyAEStartAngle				= 'pang',						/*  0x70616e67  */
	keyAEStartPoint				= 'pstp',						/*  0x70737470  */
	keyAEStyles					= 'ksty'
};

enum {
	keyAESuiteID				= 'suit',						/*  0x73756974  */
	keyAEText					= 'ktxt',						/*  0x6b747874  */
	keyAETextColor				= 'ptxc',						/*  0x70747863  */
	keyAETextFont				= 'ptxf',						/*  0x70747866  */
	keyAETextPointSize			= 'ptps',						/*  0x70747073  */
	keyAETextStyles				= 'txst',						/*  0x74787374  */
	keyAETheText				= 'thtx',						/*  0x74687478  */
	keyAETransferMode			= 'pptm',						/*  0x7070746d  */
	keyAETranslation			= 'ptrs',						/*  0x70747273  */
	keyAETryAsStructGraf		= 'toog',						/*  0x746f6f67  */
	keyAEUniformStyles			= 'ustl',						/*  0x7573746c  */
	keyAEUpdateOn				= 'pupd',						/*  0x70757064  */
	keyAEUserTerm				= 'utrm',						/*  0x7574726d  */
	keyAEWindow					= 'wndw',						/*  0x776e6477  */
	keyAEWritingCode			= 'wrcd',						/*  0x77726364  */
	keyAETSMScriptTag			= 'sclg',
	keyAETSMTextFont			= 'ktxf',
	keyAETSMTextPointSize		= 'ktps',
	keyMiscellaneous			= 'fmsc'
};

enum {
	keySelection				= 'fsel',						/*  0x6673656c  */
	keyWindow					= 'kwnd'
};

enum {
	pArcAngle					= 'parc',						/*  0x70617263  */
	pBackgroundColor			= 'pbcl',						/*  0x7062636c  */
	pBackgroundPattern			= 'pbpt',						/*  0x70627074  */
	pBestType					= 'pbst',						/*  0x70627374  */
	pBounds						= 'pbnd',						/*  0x70626e64  */
	pClass						= 'pcls',						/*  0x70636c73  */
	pClipboard					= 'pcli',						/*  0x70636c69  */
	pColor						= 'colr',						/*  0x636f6c72  */
	pColorTable					= 'cltb',						/*  0x636c7462  */
	pContents					= 'pcnt',						/*  0x70636e74  */
	pCornerCurveHeight			= 'pchd',						/*  0x70636864  */
	pCornerCurveWidth			= 'pcwd',						/*  0x70637764  */
	pDashStyle					= 'pdst',						/*  0x70647374  */
	pDefaultType				= 'deft',						/*  0x64656674  */
	pDefinitionRect				= 'pdrt',						/*  0x70647274  */
	pEnabled					= 'enbl',						/*  0x656e626c  */
	pEndPoint					= 'pend',						/*  0x70656e64  */
	pFillColor					= 'flcl',						/*  0x666c636c  */
	pFillPattern				= 'flpt',						/*  0x666c7074  */
	pFont						= 'font'
};

enum {
	pFormula					= 'pfor',						/*  0x70666f72  */
	pGraphicObjects				= 'gobs',						/*  0x676f6273  */
	pHasCloseBox				= 'hclb',						/*  0x68636c62  */
	pHasTitleBar				= 'ptit',						/*  0x70746974  */
	pID							= 'ID  ',						/*  0x49442020  */
	pIndex						= 'pidx',						/*  0x70696478  */
	pInsertionLoc				= 'pins',						/*  0x70696e73  */
	pIsFloating					= 'isfl',						/*  0x6973666c  */
	pIsFrontProcess				= 'pisf',						/*  0x70697366  */
	pIsModal					= 'pmod',						/*  0x706d6f64  */
	pIsModified					= 'imod',						/*  0x696d6f64  */
	pIsResizable				= 'prsz',						/*  0x7072737a  */
	pIsStationeryPad			= 'pspd',						/*  0x70737064  */
	pIsZoomable					= 'iszm',						/*  0x69737a6d  */
	pIsZoomed					= 'pzum',						/*  0x707a756d  */
	pItemNumber					= 'itmn',						/*  0x69746d6e  */
	pJustification				= 'pjst',						/*  0x706a7374  */
	pLineArrow					= 'arro',						/*  0x6172726f  */
	pMenuID						= 'mnid',						/*  0x6d6e6964  */
	pName						= 'pnam'
};

enum {
	pNewElementLoc				= 'pnel',						/*  0x706e656c  */
	pPenColor					= 'ppcl',						/*  0x7070636c  */
	pPenPattern					= 'pppa',						/*  0x70707061  */
	pPenWidth					= 'ppwd',						/*  0x70707764  */
	pPixelDepth					= 'pdpt',						/*  0x70647074  */
	pPointList					= 'ptlt',						/*  0x70746c74  */
	pPointSize					= 'ptsz',						/*  0x7074737a  */
	pProtection					= 'ppro',						/*  0x7070726f  */
	pRotation					= 'prot',						/*  0x70726f74  */
	pScale						= 'pscl',						/*  0x7073636c  */
	pScript						= 'scpt',						/*  0x73637074  */
	pScriptTag					= 'psct',						/*  0x70736374  */
	pSelected					= 'selc',						/*  0x73656c63  */
	pSelection					= 'sele',						/*  0x73656c65  */
	pStartAngle					= 'pang',						/*  0x70616e67  */
	pStartPoint					= 'pstp',						/*  0x70737470  */
	pTextColor					= 'ptxc',						/*  0x70747863  */
	pTextFont					= 'ptxf',						/*  0x70747866  */
	pTextItemDelimiters			= 'txdl',						/*  0x7478646c  */
	pTextPointSize				= 'ptps'
};

enum {
	pTextStyles					= 'txst',						/*  0x74787374  */
	pTransferMode				= 'pptm',						/*  0x7070746d  */
	pTranslation				= 'ptrs',						/*  0x70747273  */
	pUniformStyles				= 'ustl',						/*  0x7573746c  */
	pUpdateOn					= 'pupd',						/*  0x70757064  */
	pUserSelection				= 'pusl',						/*  0x7075736c  */
	pVersion					= 'vers',						/*  0x76657273  */
	pVisible					= 'pvis'
};

enum {
	typeAEText					= 'tTXT',						/*  0x74545854  */
	typeArc						= 'carc',						/*  0x63617263  */
	typeBest					= 'best',						/*  0x62657374  */
	typeCell					= 'ccel',						/*  0x6363656c  */
	typeClassInfo				= 'gcli',						/*  0x67636c69  */
	typeColorTable				= 'clrt',						/*  0x636c7274  */
	typeColumn					= 'ccol',						/*  0x63636f6c  */
	typeDashStyle				= 'tdas',						/*  0x74646173  */
	typeData					= 'tdta',						/*  0x74647461  */
	typeDrawingArea				= 'cdrw',						/*  0x63647277  */
	typeElemInfo				= 'elin',						/*  0x656c696e  */
	typeEnumeration				= 'enum',						/*  0x656e756d  */
	typeEPS						= 'EPS ',						/*  0x45505320  */
	typeEventInfo				= 'evin'
};

enum {
	typeFinderWindow			= 'fwin',						/*  0x6677696e  */
	typeFixedPoint				= 'fpnt',						/*  0x66706e74  */
	typeFixedRectangle			= 'frct',						/*  0x66726374  */
	typeGraphicLine				= 'glin',						/*  0x676c696e  */
	typeGraphicText				= 'cgtx',						/*  0x63677478  */
	typeGroupedGraphic			= 'cpic',						/*  0x63706963  */
	typeInsertionLoc			= 'insl',						/*  0x696e736c  */
	typeIntlText				= 'itxt',						/*  0x69747874  */
	typeIntlWritingCode			= 'intl',						/*  0x696e746c  */
	typeLongDateTime			= 'ldt ',						/*  0x6c647420  */
	typeLongFixed				= 'lfxd',						/*  0x6c667864  */
	typeLongFixedPoint			= 'lfpt',						/*  0x6c667074  */
	typeLongFixedRectangle		= 'lfrc',						/*  0x6c667263  */
	typeLongPoint				= 'lpnt',						/*  0x6c706e74  */
	typeLongRectangle			= 'lrct',						/*  0x6c726374  */
	typeMachineLoc				= 'mLoc',						/*  0x6d4c6f63  */
	typeOval					= 'covl',						/*  0x636f766c  */
	typeParamInfo				= 'pmin',						/*  0x706d696e  */
	typePict					= 'PICT'
};

enum {
	typePixelMap				= 'cpix',						/*  0x63706978  */
	typePixMapMinus				= 'tpmm',						/*  0x74706d6d  */
	typePolygon					= 'cpgn',						/*  0x6370676e  */
	typePropInfo				= 'pinf',						/*  0x70696e66  */
	typeQDPoint					= 'QDpt',						/*  0x51447074  */
	typeRectangle				= 'crec',						/*  0x63726563  */
	typeRGB16					= 'tr16',						/*  0x74723136  */
	typeRGB96					= 'tr96',						/*  0x74723936  */
	typeRGBColor				= 'cRGB',						/*  0x63524742  */
	typeRotation				= 'trot',						/*  0x74726f74  */
	typeRoundedRectangle		= 'crrc',						/*  0x63727263  */
	typeRow						= 'crow',						/*  0x63726f77  */
	typeScrapStyles				= 'styl',						/*  0x7374796c  */
	typeScript					= 'scpt',						/*  0x73637074  */
	typeStyledText				= 'STXT',						/*  0x53545854  */
	typeSuiteInfo				= 'suin',						/*  0x7375696e  */
	typeTable					= 'ctbl',						/*  0x6374626c  */
	typeTextStyles				= 'tsty'
};

enum {
	typeTIFF					= 'TIFF',						/*  0x54494646  */
	typeVersion					= 'vers'
};

enum {	/* 2006-02-05 aradke: for filedialogverb in fileverbs.c */
	kNavGenericSignature		= '****'						/*  0x2a2a2a2a */
};

#define iBeamCursor -100
#define watchCursor -101

typedef char * Ptr;
typedef Ptr * Handle;

typedef unsigned long FourCharCode;

typedef FourCharCode OSType;
typedef FourCharCode DescType;
typedef FourCharCode ResType;

typedef OSType *OSTypePtr;
typedef ResType *ResTypePtr;

typedef HANDLE CGrafPtr; /*7.0b27 PBS: Now using CGrafPtr for Carbon compatibility.*/

#ifndef PGTRAPS_H

	typedef HANDLE GrafPtr;

	typedef struct tyPoint
		{
		short	v;
		short h;
		} Point, *PointPtr;

//	typedef struct tyRect
//		{
//		short top;
//		short left;
//		short bottom;
//		short right;
//		} Rect;

	typedef RECT Rect;

	typedef HRGN RgnHandle;
	//typedef Handle RgnHandle;
#endif
#ifndef PGMTRAPS_H
	extern void Debugger (void);

	extern void DebugStr (char *);
#endif

enum {
	normal			=	0,
	bold			=	1,
	italic			=	2,
	underline		=	4,
	outline			=	8,
	shadow			=	0x10,
	condense		=	0x20,
	extend			=	0x40,
	hidden			=	0x400,
	};

typedef unsigned char Style;


typedef struct tyFontInfo
	{
	short ascent, descent, leading;
	} FontInfo;

typedef unsigned long AEEventClass;

typedef unsigned long AEEventID;

typedef unsigned long AEKeyword;

typedef struct tyAEDesc
	{
	DescType descriptorType;
	Handle dataHandle;
	} AEDesc;

typedef AEDesc AEAddressDesc;

typedef AEDesc AEDescList;

typedef AEDescList AERecord;

typedef AERecord AppleEvent;

typedef struct tyTargetID
	{
	short foo;
	} TargetID;

typedef struct tyZone
	{
	short foo;
	} Zone, *THz;

typedef long AESendMode;

typedef short AESendPriority;

typedef struct tyAEIdleUPP
	{
	short foo;
	} AEIdleUPP;

typedef struct tyAEFilterUPP
	{
	short foo;
	} AEFilterUPP;


typedef struct tyfsfilespec
	{
	char fullSpecifier [256];
	} FSSpec;


typedef struct tyPattern
	{
	short foo;
	} Pattern;


typedef struct tyRGBColor
	{
	unsigned short red, blue, green;
	} RGBColor;

typedef struct tyFixed
	{
	short whole;
	short fract;
	} Fixed;


typedef struct tyEventRecord
	{
	long	what;
	long	message;
	long	when;
	Point	where;
	long	modifiers;
	/*The following is for windows only that allow for better handling at lower levels */
	WPARAM	wparam;
	LPARAM	lparam;
	UINT	winmsg;
	HWND	hwnd;
	INT		part;
	} EventRecord;

typedef struct tyCInfoPBRec
	{
	short foo;
	} CInfoPBRec;


typedef struct tySysEnvRec
	{
	short foo;
	} SysEnvRec;


#define nil 0
typedef Handle ControlHandle;
typedef Handle MenuHandle;
typedef HANDLE WindowPtr;
typedef Handle AliasHandle;
typedef Ptr DialogPtr;
typedef Ptr ProcPtr;
typedef Handle PicHandle;

typedef long ProcessSerialNumber;
typedef long OSErr;
typedef short Boolean;

typedef unsigned char ConstStr255Param[256];
typedef unsigned char Str63[64];


extern char * CALLBACK frontierLock (Handle m);
extern void CALLBACK frontierFree (Handle foo);
extern Handle CALLBACK frontierAlloc (long userSize);
extern long CALLBACK frontierSize (Handle foo);
extern Handle CALLBACK frontierReAlloc(Handle fooIn, long userSize);

//#define HLock(foo) GlobalLock(foo)
//#define HUnlock(foo) GlobalUnlock(foo)
#define HLock(foo) frontierLock(foo)
#define HUnlock(foo) 

#if (MEMTRACKER == 1)
	Handle CALLBACK debugfrontierReAlloc(Handle fooIn, long userSize);
	Handle CALLBACK debugfrontierAlloc (char * filename, unsigned long linenumber, unsigned long threadid, long userSize);
	void CALLBACK debugfrontierFree (Handle foo);

	#define GetHandleSize(foo) frontierSize(foo)
	#define NewHandle(fooSize) debugfrontierAlloc(__FILE__, __LINE__, GetCurrentThreadId(), fooSize)
	#define DisposeHandle(foo) debugfrontierFree(foo)
	#define SetHandleSize(h,foosize) debugfrontierReAlloc(h,foosize)
#else
	#define GetHandleSize(foo) frontierSize(foo)
	#define NewHandle(fooSize) frontierAlloc(fooSize)
	#define DisposeHandle(foo) frontierFree(foo)
	#define SetHandleSize(h,foosize) frontierReAlloc(h,foosize)
#endif

#define MemError() GetLastError()

//#define geneva 0
#define normal 0

extern void recttowinrect (Rect * rIn, RECT * rOut);
extern void winrecttorect (RECT * rIn, Rect * rOut);

#define DisposeRgn(rgn) DeleteObject(rgn)
#define NewRgn() CreateRectRgn(0,0,1,1)
#define SectRgn(a,b,dest) CombineRgn(dest, a, b, RGN_AND)

#undef CopyRgn
#define CopyRgn(src,dest) CombineRgn(dest, src, src, RGN_COPY)

extern Boolean EmptyRgn (RgnHandle);

typedef struct extended80 {
	
	unsigned char x80[10];
	} extended80;
 
void convertToMacExtended (double foo, extended80 * tenbytebuffer);
void convertFromMacExtended (double * foo, extended80 * tenbytebuffer);

long FreeMem (void);

void DrawPicture (Handle, const Rect *);
