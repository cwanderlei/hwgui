/*
 * xHarbour build 1.2.1 Intl. (SimpLex) (Rev. 9376)
 * Generated C source code from <source\\hgridex.prg>
 * Command: /D__EXPORT__ /DHB_FM_STATISTICS_OFF /iinclude;d:\xHarbour\include /q0 /w0 /es2 /n1 /gc0 source\hgridex.prg -osource\hgridex.c 
 * Created: 2012.04.25 20:42:44 (Borland C++ 5.5.1 (32 bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "source\\hgridex.prg"

HB_FUNC( HGRIDEX );
HB_FUNC_STATIC( HGRIDEX_NEW );
HB_FUNC_STATIC( HGRIDEX_ACTIVATE );
HB_FUNC_STATIC( HGRIDEX_INIT );
HB_FUNC_STATIC( HGRIDEX_REFRESH );
HB_FUNC_STATIC( HGRIDEX_ADDROW );
HB_FUNC_STATIC( HGRIDEX_NOTIFY );
HB_FUNC_STATIC( HGRIDEX_REDEFINE );
HB_FUNC_STATIC( HGRIDEX_UPDATEDATA );
HB_FUNC_INITSTATICS();

/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( __CLSISACTIVE );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HCONTROL );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( LISTVIEW_UPDATE );
HB_FUNC_EXTERN( LISTVIEW_GETFIRSTITEM );
HB_FUNC_EXTERN( LISTVIEW_SETITEMCOUNT );
HB_FUNC_EXTERN( SENDMESSAGE );
HB_FUNC_EXTERN( LISTVIEWSELECTALL );
HB_FUNC_EXTERN( LISTVIEWSELECTLASTITEM );
HB_FUNC_EXTERN( LISTVIEW_SETVIEW );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HWG_BITOR );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( HWG_INITCOMMONCONTROLSEX );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LISTVIEW_CREATE );
HB_FUNC_EXTERN( LOADIMAGE );
HB_FUNC_EXTERN( GETBITMAPSIZE );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( CREATEIMAGELIST );
HB_FUNC_EXTERN( IMAGELIST_ADD );
HB_FUNC_EXTERN( LISTVIEW_SETIMAGELIST );
HB_FUNC_EXTERN( LISTVIEW_INIT );
HB_FUNC_EXTERN( LISTVIEW_ADDCOLUMNEX );
HB_FUNC_EXTERN( LISTVIEW_INSERTITEMEX );
HB_FUNC_EXTERN( LISTVIEW_SETTEXTCOLOR );
HB_FUNC_EXTERN( LISTVIEW_SETBKCOLOR );
HB_FUNC_EXTERN( LISTVIEW_SETTEXTBKCOLOR );
HB_FUNC_EXTERN( LISTVIEW_GETTOPINDEX );
HB_FUNC_EXTERN( LISTVIEW_GETCOUNTPERPAGE );
HB_FUNC_EXTERN( LISTVIEW_REDRAWITEMS );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( RGB );
HB_FUNC_EXTERN( GETNOTIFYCODE );
HB_FUNC_EXTERN( GETNOTIFYCODEFROM );
HB_FUNC_EXTERN( PROCESSCUSTU );
HB_FUNC_EXTERN( HWG_SETDLGRESULT );
HB_FUNC_EXTERN( LISTVIEWSORTINFONEW );
HB_FUNC_EXTERN( LISTVIEWSORT );
HB_FUNC_EXTERN( LISTVIEWNOTIFY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HGRIDEX )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HGRIDEX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HGRIDEX )}, &ModuleFakeDyn },
{ "__CLSISACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSISACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCONTROL )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MODMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HGRIDEX_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HGRIDEX_NEW )}, &ModuleFakeDyn },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HGRIDEX_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HGRIDEX_ACTIVATE )}, &ModuleFakeDyn },
{ "HGRIDEX_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HGRIDEX_INIT )}, &ModuleFakeDyn },
{ "MODINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "ACOLUMNS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HGRIDEX_REFRESH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HGRIDEX_REFRESH )}, &ModuleFakeDyn },
{ "LISTVIEW_UPDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_UPDATE )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LISTVIEW_GETFIRSTITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_GETFIRSTITEM )}, NULL },
{ "LISTVIEW_SETITEMCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_SETITEMCOUNT )}, NULL },
{ "HGRIDEX_ADDROW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HGRIDEX_ADDROW )}, &ModuleFakeDyn },
{ "HGRIDEX_NOTIFY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HGRIDEX_NOTIFY )}, &ModuleFakeDyn },
{ "BFLAG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SENDMESSAGE )}, NULL },
{ "IROWSELECT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BFLAG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_AITEMS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_ACOLORS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LISTVIEWSELECTALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEWSELECTALL )}, NULL },
{ "LISTVIEWSELECTLASTITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEWSELECTLASTITEM )}, NULL },
{ "HGRIDEX_REDEFINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HGRIDEX_REDEFINE )}, &ModuleFakeDyn },
{ "HGRIDEX_UPDATEDATA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HGRIDEX_UPDATEDATA )}, &ModuleFakeDyn },
{ "LISTVIEW_SETVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_SETVIEW )}, NULL },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HWG_BITOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_BITOR )}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_ITEMCOUNT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "_ABITMAPS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BGFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BLFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_COLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BKCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LNOSCROLL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LNOBORDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LNOLINES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LNOHEADER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BENTER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BKEYDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BPOSCHG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BDISPINFO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_INITCOMMONCONTROLSEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITCOMMONCONTROLSEX )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LISTVIEW_CREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_CREATE )}, NULL },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LNOHEADER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LNOSCROLL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHOLDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ABITMAPS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LOADIMAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOADIMAGE )}, NULL },
{ "GETBITMAPSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETBITMAPSIZE )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "_HIM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATEIMAGELIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATEIMAGELIST )}, NULL },
{ "IMAGELIST_ADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMAGELIST_ADD )}, NULL },
{ "HIM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LISTVIEW_SETIMAGELIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_SETIMAGELIST )}, NULL },
{ "LISTVIEW_INIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_INIT )}, NULL },
{ "ITEMCOUNT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LNOLINES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LISTVIEW_ADDCOLUMNEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_ADDCOLUMNEX )}, NULL },
{ "AROW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "AROWBITMAP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LISTVIEW_INSERTITEMEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_INSERTITEMEX )}, NULL },
{ "COLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LISTVIEW_SETTEXTCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_SETTEXTCOLOR )}, NULL },
{ "BKCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LISTVIEW_SETBKCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_SETBKCOLOR )}, NULL },
{ "LISTVIEW_SETTEXTBKCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_SETTEXTBKCOLOR )}, NULL },
{ "LISTVIEW_GETTOPINDEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_GETTOPINDEX )}, NULL },
{ "LISTVIEW_GETCOUNTPERPAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_GETCOUNTPERPAGE )}, NULL },
{ "LISTVIEW_REDRAWITEMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEW_REDRAWITEMS )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "RGB", {HB_FS_PUBLIC}, {HB_FUNCNAME( RGB )}, NULL },
{ "ACOLORS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "UPDATEDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETNOTIFYCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETNOTIFYCODE )}, NULL },
{ "GETPARENTFORM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETNOTIFYCODEFROM", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETNOTIFYCODEFROM )}, NULL },
{ "PROCESSCUSTU", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCESSCUSTU )}, NULL },
{ "HWG_SETDLGRESULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_SETDLGRESULT )}, NULL },
{ "_IROWSELECT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HSORT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HSORT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LISTVIEWSORTINFONEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEWSORTINFONEW )}, NULL },
{ "LISTVIEWSORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEWSORT )}, NULL },
{ "LISTVIEWNOTIFY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTVIEWNOTIFY )}, NULL },
{ "_AROW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_HGRIDEX )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HGRIDEX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HGRIDEX )
   #include "hbiniseg.h"
#endif

HB_FUNC( HGRIDEX )
{
   static const BYTE pcode[] =
   {
	13,3,255,116,124,0,9,103,1,0,100,69,28,17,
	73,108,2,100,48,3,0,103,1,0,112,0,12,1,
	68,80,3,126,2,1,0,103,1,0,100,8,21,31,
	5,73,95,3,29,164,10,103,1,0,100,8,28,38,
	48,4,0,108,5,100,12,0,106,8,72,71,114,105,
	100,69,88,0,48,6,0,108,7,100,12,0,112,0,
	4,1,0,112,2,82,1,0,133,33,0,95,3,31,
	46,48,8,0,103,1,0,100,106,14,83,89,83,76,
	73,83,84,86,73,69,87,51,50,0,95,2,106,9,
	119,105,110,99,108,97,115,115,0,4,1,0,9,112,
	5,25,3,100,73,134,1,95,3,31,34,48,9,0,
	103,1,0,100,4,0,0,95,2,106,9,97,66,105,
	116,77,97,112,115,0,4,1,0,9,9,112,6,25,
	3,100,73,134,2,95,3,31,32,48,9,0,103,1,
	0,100,4,0,0,95,2,106,7,97,73,116,101,109,
	115,0,4,1,0,9,9,112,6,25,3,100,73,134,
	3,95,3,31,33,48,9,0,103,1,0,100,100,95,
	2,106,10,73,116,101,109,67,111,117,110,116,0,4,
	1,0,9,9,112,6,25,3,100,73,134,4,95,3,
	31,29,48,9,0,103,1,0,100,100,95,2,106,6,
	99,111,108,111,114,0,4,1,0,9,9,112,6,25,
	3,100,73,134,5,95,3,31,29,48,9,0,103,1,
	0,100,9,95,2,106,6,98,70,108,97,103,0,4,
	1,0,9,9,112,6,25,3,100,73,134,6,95,3,
	31,31,48,9,0,103,1,0,100,100,95,2,106,8,
	98,107,99,111,108,111,114,0,4,1,0,9,9,112,
	6,25,3,100,73,134,7,95,3,31,34,48,9,0,
	103,1,0,100,4,0,0,95,2,106,9,97,67,111,
	108,117,109,110,115,0,4,1,0,9,9,112,6,25,
	3,100,73,134,8,95,3,31,28,48,9,0,103,1,
	0,100,121,95,2,106,5,110,82,111,119,0,4,1,
	0,9,9,112,6,25,3,100,73,134,9,95,3,31,
	28,48,9,0,103,1,0,100,121,95,2,106,5,110,
	67,111,108,0,4,1,0,9,9,112,6,25,3,100,
	73,134,10,95,3,31,33,48,9,0,103,1,0,100,
	4,0,0,95,2,106,8,97,67,111,108,111,114,115,
	0,4,1,0,9,9,112,6,25,3,100,73,134,11,
	95,3,31,29,48,9,0,103,1,0,100,100,95,2,
	106,6,104,83,111,114,116,0,4,1,0,9,9,112,
	6,25,3,100,73,134,12,95,3,31,29,48,9,0,
	103,1,0,100,100,95,2,106,6,111,77,101,110,117,
	0,4,1,0,9,9,112,6,25,3,100,73,134,14,
	95,3,31,33,48,9,0,103,1,0,100,9,95,2,
	106,10,108,78,111,83,99,114,111,108,108,0,4,1,
	0,9,9,112,6,25,3,100,73,134,15,95,3,31,
	33,48,9,0,103,1,0,100,9,95,2,106,10,108,
	78,111,66,111,114,100,101,114,0,4,1,0,9,9,
	112,6,25,3,100,73,134,16,95,3,31,32,48,9,
	0,103,1,0,100,9,95,2,106,9,108,78,111,76,
	105,110,101,115,0,4,1,0,9,9,112,6,25,3,
	100,73,134,17,95,3,31,33,48,9,0,103,1,0,
	100,9,95,2,106,10,108,78,111,72,101,97,100,101,
	114,0,4,1,0,9,9,112,6,25,3,100,73,134,
	19,95,3,31,30,48,9,0,103,1,0,100,100,95,
	2,106,7,98,69,110,116,101,114,0,4,1,0,9,
	9,112,6,25,3,100,73,134,20,95,3,31,32,48,
	9,0,103,1,0,100,100,95,2,106,9,98,75,101,
	121,68,111,119,110,0,4,1,0,9,9,112,6,25,
	3,100,73,134,21,95,3,31,31,48,9,0,103,1,
	0,100,100,95,2,106,8,98,80,111,115,67,104,103,
	0,4,1,0,9,9,112,6,25,3,100,73,134,22,
	95,3,31,33,48,9,0,103,1,0,100,100,95,2,
	106,10,98,68,105,115,112,73,110,102,111,0,4,1,
	0,9,9,112,6,25,3,100,73,134,23,95,3,31,
	27,48,9,0,103,1,0,100,100,95,2,106,4,104,
	105,109,0,4,1,0,9,9,112,6,25,3,100,73,
	134,24,95,3,31,31,48,9,0,103,1,0,100,100,
	95,2,106,8,98,71,102,111,99,117,115,0,4,1,
	0,9,9,112,6,25,3,100,73,134,25,95,3,31,
	31,48,9,0,103,1,0,100,100,95,2,106,8,98,
	76,102,111,99,117,115,0,4,1,0,9,9,112,6,
	25,3,100,73,134,26,95,3,31,30,48,9,0,103,
	1,0,100,4,0,0,95,2,106,5,97,82,111,119,
	0,4,1,0,9,9,112,6,25,3,100,73,134,27,
	95,3,31,36,48,9,0,103,1,0,100,4,0,0,
	95,2,106,11,97,82,111,119,66,105,116,77,97,112,
	0,4,1,0,9,9,112,6,25,3,100,73,134,28,
	95,3,31,35,48,9,0,103,1,0,100,4,0,0,
	95,2,106,10,97,82,111,119,83,116,121,108,101,0,
	4,1,0,9,9,112,6,25,3,100,73,134,29,95,
	3,31,34,48,9,0,103,1,0,100,121,95,2,106,
	11,105,82,111,119,83,101,108,101,99,116,0,4,1,
	0,9,9,112,6,25,3,100,73,134,33,95,3,28,
	24,48,10,0,103,1,0,106,4,78,101,119,0,108,
	11,14,95,2,9,112,4,25,22,48,12,0,103,1,
	0,106,4,78,101,119,0,108,11,14,95,2,9,112,
	4,73,134,35,95,3,28,29,48,10,0,103,1,0,
	106,9,65,99,116,105,118,97,116,101,0,108,13,14,
	95,2,9,112,4,25,27,48,12,0,103,1,0,106,
	9,65,99,116,105,118,97,116,101,0,108,13,14,95,
	2,9,112,4,73,134,36,95,3,28,25,48,10,0,
	103,1,0,106,5,73,110,105,116,0,108,14,14,95,
	2,9,112,4,25,23,48,12,0,103,1,0,106,5,
	73,110,105,116,0,108,14,14,95,2,9,112,4,73,
	134,37,95,3,28,61,48,15,0,103,1,0,106,10,
	65,100,100,67,111,108,117,109,110,0,89,34,0,5,
	0,0,0,95,1,73,108,16,100,48,17,0,95,1,
	112,0,95,2,95,3,95,4,95,5,4,4,0,12,
	2,6,95,2,9,112,4,25,59,48,18,0,103,1,
	0,106,10,65,100,100,67,111,108,117,109,110,0,89,
	34,0,5,0,0,0,95,1,73,108,16,100,48,17,
	0,95,1,112,0,95,2,95,3,95,4,95,5,4,
	4,0,12,2,6,95,2,9,112,4,73,134,38,95,
	3,28,28,48,10,0,103,1,0,106,8,82,101,102,
	114,101,115,104,0,108,19,14,95,2,9,112,4,25,
	26,48,12,0,103,1,0,106,8,82,101,102,114,101,
	115,104,0,108,19,14,95,2,9,112,4,73,134,39,
	95,3,28,64,48,15,0,103,1,0,106,12,82,101,
	102,114,101,115,104,76,105,110,101,0,89,35,0,1,
	0,0,0,95,1,73,108,20,100,48,21,0,95,1,
	112,0,108,22,100,48,21,0,95,1,112,0,12,1,
	12,2,6,95,2,9,112,4,25,62,48,18,0,103,
	1,0,106,12,82,101,102,114,101,115,104,76,105,110,
	101,0,89,35,0,1,0,0,0,95,1,73,108,20,
	100,48,21,0,95,1,112,0,108,22,100,48,21,0,
	95,1,112,0,12,1,12,2,6,95,2,9,112,4,
	73,134,40,95,3,28,55,48,15,0,103,1,0,106,
	13,83,101,116,73,116,101,109,67,111,117,110,116,0,
	89,25,0,2,0,0,0,95,1,73,108,23,100,48,
	21,0,95,1,112,0,95,2,12,2,6,95,2,9,
	112,4,25,53,48,18,0,103,1,0,106,13,83,101,
	116,73,116,101,109,67,111,117,110,116,0,89,25,0,
	2,0,0,0,95,1,73,108,23,100,48,21,0,95,
	1,112,0,95,2,12,2,6,95,2,9,112,4,73,
	134,41,95,3,28,44,48,15,0,103,1,0,106,4,
	82,111,119,0,89,23,0,1,0,0,0,95,1,73,
	108,22,100,48,21,0,95,1,112,0,12,1,6,95,
	2,9,112,4,25,42,48,18,0,103,1,0,106,4,
	82,111,119,0,89,23,0,1,0,0,0,95,1,73,
	108,22,100,48,21,0,95,1,112,0,12,1,6,95,
	2,9,112,4,73,134,42,95,3,28,27,48,10,0,
	103,1,0,106,7,65,100,100,82,111,119,0,108,24,
	14,95,2,9,112,4,25,25,48,12,0,103,1,0,
	106,7,65,100,100,82,111,119,0,108,24,14,95,2,
	9,112,4,73,134,43,95,3,28,27,48,10,0,103,
	1,0,106,7,78,111,116,105,102,121,0,108,25,14,
	95,2,9,112,4,25,25,48,12,0,103,1,0,106,
	7,78,111,116,105,102,121,0,108,25,14,95,2,9,
	112,4,73,134,45,95,3,28,81,48,15,0,103,1,
	0,106,10,68,69,76,69,84,69,82,79,87,0,89,
	54,0,1,0,0,0,95,1,73,48,26,0,95,1,
	112,0,28,35,108,27,100,48,21,0,95,1,112,0,
	93,8,16,48,28,0,95,1,112,0,121,20,4,48,
	29,0,95,1,9,112,1,25,3,120,6,95,2,9,
	112,4,25,79,48,18,0,103,1,0,106,10,68,69,
	76,69,84,69,82,79,87,0,89,54,0,1,0,0,
	0,95,1,73,48,26,0,95,1,112,0,28,35,108,
	27,100,48,21,0,95,1,112,0,93,8,16,48,28,
	0,95,1,112,0,121,20,4,48,29,0,95,1,9,
	112,1,25,3,120,6,95,2,9,112,4,73,134,46,
	95,3,28,78,48,15,0,103,1,0,106,13,68,69,
	76,69,84,69,65,76,76,82,79,87,0,89,48,0,
	1,0,0,0,95,1,73,48,30,0,95,1,100,112,
	1,73,48,31,0,95,1,4,0,0,112,1,73,108,
	27,100,48,21,0,95,1,112,0,93,9,16,121,121,
	12,4,6,95,2,9,112,4,25,76,48,18,0,103,
	1,0,106,13,68,69,76,69,84,69,65,76,76,82,
	79,87,0,89,48,0,1,0,0,0,95,1,73,48,
	30,0,95,1,100,112,1,73,48,31,0,95,1,4,
	0,0,112,1,73,108,27,100,48,21,0,95,1,112,
	0,93,9,16,121,121,12,4,6,95,2,9,112,4,
	73,134,47,95,3,28,50,48,15,0,103,1,0,106,
	10,83,69,76,69,67,84,65,76,76,0,89,23,0,
	1,0,0,0,95,1,73,108,32,100,48,21,0,95,
	1,112,0,12,1,6,95,2,9,112,4,25,48,48,
	18,0,103,1,0,106,10,83,69,76,69,67,84,65,
	76,76,0,89,23,0,1,0,0,0,95,1,73,108,
	32,100,48,21,0,95,1,112,0,12,1,6,95,2,
	9,112,4,73,134,48,95,3,28,51,48,15,0,103,
	1,0,106,11,83,69,76,69,67,84,76,65,83,84,
	0,89,23,0,1,0,0,0,95,1,73,108,33,100,
	48,21,0,95,1,112,0,12,1,6,95,2,9,112,
	4,25,49,48,18,0,103,1,0,106,11,83,69,76,
	69,67,84,76,65,83,84,0,89,23,0,1,0,0,
	0,95,1,73,108,33,100,48,21,0,95,1,112,0,
	12,1,6,95,2,9,112,4,73,134,49,95,3,28,
	29,48,10,0,103,1,0,106,9,82,101,100,101,102,
	105,110,101,0,108,34,14,95,2,9,112,4,25,27,
	48,12,0,103,1,0,106,9,82,101,100,101,102,105,
	110,101,0,108,34,14,95,2,9,112,4,73,134,50,
	95,3,28,31,48,10,0,103,1,0,106,11,85,112,
	100,97,116,101,68,97,116,97,0,108,35,14,95,2,
	9,112,4,25,29,48,12,0,103,1,0,106,11,85,
	112,100,97,116,101,68,97,116,97,0,108,35,14,95,
	2,9,112,4,73,134,51,95,3,28,50,48,15,0,
	103,1,0,106,8,83,69,84,86,73,69,87,0,89,
	25,0,2,0,0,0,95,1,73,108,36,100,48,21,
	0,95,1,112,0,95,2,12,2,6,95,2,9,112,
	4,25,48,48,18,0,103,1,0,106,8,83,69,84,
	86,73,69,87,0,89,25,0,2,0,0,0,95,1,
	73,108,36,100,48,21,0,95,1,112,0,95,2,12,
	2,6,95,2,9,112,4,73,95,3,28,26,108,37,
	100,48,3,0,103,1,0,112,0,20,1,48,38,0,
	103,1,0,112,0,73,25,11,48,39,0,103,1,0,
	112,0,73,108,40,100,48,3,0,103,1,0,112,0,
	12,1,80,1,108,41,100,95,1,106,10,73,110,105,
	116,67,108,97,115,115,0,12,2,28,32,48,42,0,
	95,1,108,43,100,12,0,112,1,73,25,17,108,40,
	100,48,3,0,103,1,0,112,0,12,1,80,1,108,
	44,100,12,0,121,15,28,10,103,1,0,108,0,14,
	121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HGRIDEX_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,26,102,80,27,133,92,0,95,20,80,20,134,
	3,108,45,100,95,3,100,8,28,5,121,25,4,95,
	3,97,0,0,129,0,12,2,80,3,134,5,48,4,
	0,48,46,0,95,27,112,0,95,1,95,2,95,3,
	95,4,95,5,95,6,95,7,95,8,95,9,95,10,
	95,11,112,11,73,134,6,95,25,100,8,28,7,4,
	0,0,80,25,134,7,48,30,0,95,27,95,26,112,
	1,73,134,8,48,47,0,95,27,108,48,100,95,26,
	12,1,112,1,73,134,9,48,49,0,95,27,95,25,
	112,1,73,134,10,48,50,0,95,27,95,13,112,1,
	73,134,11,48,51,0,95,27,95,14,112,1,73,134,
	13,48,52,0,95,27,95,22,112,1,73,134,14,48,
	53,0,95,27,95,23,112,1,73,134,16,48,54,0,
	95,27,95,15,112,1,73,134,17,48,55,0,95,27,
	95,16,112,1,73,134,18,48,56,0,95,27,95,21,
	112,1,73,134,19,48,57,0,95,27,95,24,112,1,
	73,134,21,48,58,0,95,27,95,12,112,1,73,134,
	22,48,59,0,95,27,95,17,112,1,73,134,23,48,
	60,0,95,27,95,18,112,1,73,134,24,48,61,0,
	95,27,95,19,112,1,73,134,27,108,62,100,20,0,
	134,29,48,63,0,95,27,112,0,73,134,32,95,27,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HGRIDEX_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,127,0,108,64,100,48,21,
	0,48,65,0,95,1,112,0,112,0,12,1,31,118,
	134,1,48,66,0,95,1,48,67,0,95,1,112,0,
	97,0,0,128,0,49,112,1,73,134,2,48,68,0,
	95,1,108,69,100,48,21,0,48,65,0,95,1,112,
	0,112,0,48,70,0,95,1,112,0,48,71,0,95,
	1,112,0,48,72,0,95,1,112,0,48,73,0,95,
	1,112,0,48,74,0,95,1,112,0,48,67,0,95,
	1,112,0,48,75,0,95,1,112,0,48,76,0,95,
	1,112,0,12,9,112,1,73,134,3,48,77,0,95,
	1,112,0,73,134,5,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HGRIDEX_INIT )
{
   static const BYTE pcode[] =
   {
	13,10,0,102,80,1,133,136,0,4,0,0,80,4,
	134,6,48,78,0,95,1,112,0,32,5,3,134,7,
	48,77,0,48,46,0,95,1,112,0,112,0,73,134,
	8,48,79,0,95,1,122,112,1,73,134,10,126,6,
	1,0,95,6,108,48,100,48,80,0,95,1,112,0,
	12,1,34,28,39,134,11,108,16,100,95,4,108,81,
	100,100,48,80,0,95,1,112,0,95,6,1,121,121,
	121,93,64,32,12,6,20,2,134,12,173,6,25,204,
	134,14,108,48,100,95,4,12,1,121,15,29,56,1,
	134,16,108,82,100,95,4,122,1,12,1,80,5,134,
	17,95,5,92,3,1,80,10,134,18,126,6,2,0,
	95,6,108,48,100,95,4,12,1,34,28,38,134,19,
	108,82,100,95,4,95,6,1,12,1,80,5,134,20,
	108,83,100,95,10,95,5,92,3,1,12,2,80,10,
	134,21,173,6,25,210,134,24,95,10,92,4,8,28,
	34,134,25,48,84,0,95,1,108,85,100,4,0,0,
	95,5,122,1,95,5,92,2,1,122,92,5,12,5,
	112,1,73,25,83,134,26,95,10,92,8,8,28,34,
	134,27,48,84,0,95,1,108,85,100,4,0,0,95,
	5,122,1,95,5,92,2,1,122,92,9,12,5,112,
	1,73,25,42,134,28,95,10,92,24,8,28,33,134,
	29,48,84,0,95,1,108,85,100,4,0,0,95,5,
	122,1,95,5,92,2,1,122,93,255,0,12,5,112,
	1,73,134,32,126,3,1,0,95,3,108,48,100,95,
	4,12,1,34,28,74,134,34,108,82,100,95,4,95,
	3,1,12,1,80,5,134,36,95,5,92,3,1,92,
	24,8,28,23,134,37,108,86,100,48,87,0,95,1,
	112,0,95,4,95,3,1,20,2,25,21,134,39,108,
	86,100,48,87,0,95,1,112,0,95,4,95,3,1,
	20,2,134,42,173,3,25,174,134,44,108,88,100,48,
	21,0,95,1,112,0,48,87,0,95,1,112,0,20,
	2,134,48,108,89,100,48,21,0,95,1,112,0,48,
	90,0,95,1,112,0,48,91,0,95,1,112,0,20,
	3,134,50,126,2,1,0,95,2,108,48,100,48,17,
	0,95,1,112,0,12,1,34,28,96,134,51,108,92,
	100,48,21,0,95,1,112,0,95,2,48,17,0,95,
	1,112,0,95,2,1,122,1,48,17,0,95,1,112,
	0,95,2,1,92,2,1,48,17,0,95,1,112,0,
	95,2,1,92,3,1,48,17,0,95,1,112,0,95,
	2,1,92,4,1,100,69,28,17,48,17,0,95,1,
	112,0,95,2,1,92,4,1,25,4,92,255,20,6,
	134,53,173,2,25,147,134,54,108,48,100,48,93,0,
	95,1,112,0,12,1,121,15,28,111,134,55,126,6,
	1,0,95,6,108,48,100,48,93,0,95,1,112,0,
	12,1,34,28,88,134,56,48,93,0,95,1,112,0,
	95,6,1,80,8,134,57,48,94,0,95,1,112,0,
	95,6,1,80,9,134,58,126,7,1,0,95,7,108,
	48,100,95,8,12,1,34,28,36,134,59,108,95,100,
	48,21,0,95,1,112,0,95,6,95,7,95,8,95,
	7,1,95,9,95,7,1,20,5,134,60,173,7,25,
	212,134,61,173,6,25,155,134,64,48,96,0,95,1,
	112,0,100,69,28,23,134,65,108,97,100,48,21,0,
	95,1,112,0,48,96,0,95,1,112,0,20,2,134,
	69,48,98,0,95,1,112,0,100,69,28,44,134,70,
	108,99,100,48,21,0,95,1,112,0,48,98,0,95,
	1,112,0,20,2,134,71,108,100,100,48,21,0,95,
	1,112,0,48,98,0,95,1,112,0,20,2,134,74,
	100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HGRIDEX_REFRESH )
{
   static const BYTE pcode[] =
   {
	13,3,0,102,80,1,133,215,0,108,101,100,48,21,
	0,95,1,112,0,12,1,80,2,134,2,95,2,108,
	102,100,48,21,0,95,1,112,0,12,1,72,80,3,
	134,4,108,103,100,48,21,0,95,1,112,0,95,2,
	95,3,20,3,134,5,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HGRIDEX_ADDROW )
{
   static const BYTE pcode[] =
   {
	13,6,2,102,80,3,133,224,0,108,48,100,95,1,
	12,1,80,4,134,2,4,0,0,80,6,134,3,4,
	0,0,80,7,134,4,4,0,0,80,8,134,7,95,
	2,100,8,28,5,9,80,2,134,8,126,5,1,0,
	95,5,95,4,92,4,10,29,193,0,134,9,108,16,
	100,95,7,95,1,95,5,1,20,2,134,10,108,16,
	100,95,6,108,104,100,95,1,95,5,128,1,0,1,
	12,1,106,2,78,0,8,28,12,95,1,95,5,128,
	1,0,1,25,4,92,255,20,2,134,12,108,16,100,
	95,8,108,104,100,95,1,95,5,128,2,0,1,12,
	1,106,2,78,0,8,28,12,95,1,95,5,128,2,
	0,1,25,13,108,105,100,92,12,92,15,92,46,12,
	3,20,2,134,15,108,16,100,95,8,108,104,100,95,
	1,95,5,128,3,0,1,12,1,106,2,78,0,8,
	28,12,95,1,95,5,128,3,0,1,25,16,108,105,
	100,93,192,0,93,192,0,93,192,0,12,3,20,2,
	134,17,108,16,100,48,106,0,95,3,112,0,95,8,
	20,2,134,18,4,0,0,80,8,134,19,125,5,4,
	0,26,59,255,134,21,108,16,100,48,94,0,95,3,
	112,0,95,6,20,2,134,22,108,16,100,48,93,0,
	95,3,112,0,95,7,20,2,134,23,95,2,28,12,
	134,24,48,107,0,95,3,112,0,73,134,27,100,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HGRIDEX_NOTIFY )
{
   static const BYTE pcode[] =
   {
	13,5,1,102,80,2,133,254,0,108,108,100,95,1,
	12,1,80,3,134,1,48,109,0,95,2,112,0,80,
	6,134,3,9,95,3,92,244,8,28,18,73,108,110,
	100,95,1,12,1,48,21,0,95,2,112,0,8,28,
	49,134,4,108,111,100,48,21,0,95,2,112,0,95,
	1,48,106,0,95,2,112,0,12,3,80,4,134,5,
	108,112,100,48,21,0,95,6,112,0,95,4,20,2,
	134,6,95,4,110,7,134,9,95,3,92,254,8,28,
	66,134,10,108,27,100,48,21,0,95,2,112,0,93,
	12,16,92,255,122,12,4,80,5,134,12,95,5,92,
	255,8,28,7,134,13,121,110,7,134,16,48,113,0,
	95,2,95,5,112,1,73,134,17,48,29,0,95,2,
	120,112,1,73,134,18,122,110,7,134,21,95,3,92,
	148,8,28,64,134,22,108,64,100,48,114,0,95,2,
	112,0,12,1,28,20,134,23,48,115,0,95,2,108,
	116,100,95,1,100,12,2,112,1,73,134,25,108,117,
	100,48,21,0,95,2,112,0,95,1,48,114,0,95,
	2,112,0,20,3,134,26,121,110,7,134,28,95,3,
	92,249,8,28,4,25,10,134,29,95,3,92,248,8,
	73,134,31,95,3,92,252,8,73,134,33,95,3,93,
	101,255,8,73,134,36,108,118,100,95,2,95,1,12,
	2,80,4,134,37,108,104,100,95,4,12,1,106,2,
	78,0,8,28,18,134,38,108,112,100,48,21,0,95,
	6,112,0,95,4,20,2,134,41,95,4,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HGRIDEX_REDEFINE )
{
   static const BYTE pcode[] =
   {
	13,1,12,102,80,13,133,44,1,95,3,80,3,134,
	1,95,11,80,11,134,3,95,12,100,8,28,7,4,
	0,0,80,12,134,5,48,4,0,48,46,0,95,13,
	112,0,95,1,95,2,121,121,121,121,121,95,4,95,
	5,95,6,95,7,95,8,95,9,95,10,112,14,73,
	134,6,108,62,100,20,0,134,7,48,119,0,95,13,
	95,12,112,1,73,134,9,48,66,0,95,13,48,120,
	0,95,13,48,121,0,95,13,48,122,0,95,13,48,
	123,0,95,13,121,112,1,112,1,112,1,112,1,112,
	1,73,134,11,95,13,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HGRIDEX_UPDATEDATA )
{
   static const BYTE pcode[] =
   {
	13,5,0,102,80,1,133,58,1,108,48,100,48,93,
	0,95,1,112,0,12,1,80,2,134,3,48,93,0,
	95,1,112,0,95,2,1,80,4,134,4,48,94,0,
	95,1,112,0,95,2,1,80,5,134,6,126,3,1,
	0,95,3,108,48,100,95,4,12,1,34,28,36,134,
	8,108,95,100,48,21,0,95,1,112,0,95,2,95,
	3,95,4,95,3,1,95,5,95,3,1,20,5,134,
	9,173,3,25,212,134,11,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,124,0,1,0,7
   };

   hb_vmExecute( pcode, symbols );
}

