/*
 * xHarbour build 1.2.1 Intl. (SimpLex) (Rev. 9376)
 * Generated C source code from <source\\hupdown.prg>
 * Command: /D__EXPORT__ /DHB_FM_STATISTICS_OFF /iinclude;d:\xHarbour\include /q0 /w0 /es2 /n1 /gc0 source\hupdown.prg -osource\hupdown.c 
 * Created: 2012.04.25 20:42:51 (Borland C++ 5.5.1 (32 bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "source\\hupdown.prg"

HB_FUNC( HUPDOWN );
HB_FUNC_STATIC( HUPDOWN_NEW );
HB_FUNC_STATIC( HUPDOWN_ACTIVATE );
HB_FUNC_STATIC( HUPDOWN_INIT );
HB_FUNC_STATIC( HUPDOWN_CREATEUPDOWN );
HB_FUNC_STATIC( HUPDOWN_DISABLEBACKCOLOR );
HB_FUNC_STATIC( HUPDOWN_VALUE );
HB_FUNC_STATIC( HUPDOWN_SETVALUE );
HB_FUNC_STATIC( HUPDOWN_REFRESH );
HB_FUNC_STATIC( HUPDOWN_VALID );
HB_FUNC( HEDITUPDOWN );
HB_FUNC_STATIC( HEDITUPDOWN_INIT );
HB_FUNC_STATIC( HEDITUPDOWN_NOTIFY );
HB_FUNC_STATIC( HEDITUPDOWN_REFRESH );
HB_FUNC_INITSTATICS();

/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( __CLSISACTIVE );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HCONTROL );
HB_FUNC_EXTERN( HIDEWINDOW );
HB_FUNC_EXTERN( SHOWWINDOW );
HB_FUNC_EXTERN( ENABLEWINDOW );
HB_FUNC_EXTERN( INVALIDATERECT );
HB_FUNC_EXTERN( GETCLIENTRECT );
HB_FUNC_EXTERN( SENDMESSAGE );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HWG_BITOR );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( ADDTOOLTIP );
HB_FUNC_EXTERN( SETWINDOWPOS );
HB_FUNC_EXTERN( DESTROYWINDOW );
HB_FUNC_EXTERN( SETWINDOWOBJECT );
HB_FUNC_EXTERN( HWG_INITEDITPROC );
HB_FUNC_EXTERN( CREATEUPDOWNCONTROL );
HB_FUNC_EXTERN( SETUPDOWN );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( HEDIT );
HB_FUNC_EXTERN( GETNOTIFYCODE );
HB_FUNC_EXTERN( GETNOTIFYDELTAPOS );
HB_FUNC_EXTERN( HWG_BITAND );
HB_FUNC_EXTERN( GETWINDOWLONG );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SETDLGITEMTEXT );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HUPDOWN )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HUPDOWN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HUPDOWN )}, &ModuleFakeDyn },
{ "__CLSISACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSISACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCONTROL )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MODMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HUPDOWN_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HUPDOWN_NEW )}, &ModuleFakeDyn },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HUPDOWN_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HUPDOWN_ACTIVATE )}, &ModuleFakeDyn },
{ "HUPDOWN_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HUPDOWN_INIT )}, &ModuleFakeDyn },
{ "HUPDOWN_SETVALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HUPDOWN_SETVALUE )}, &ModuleFakeDyn },
{ "HUPDOWN_VALUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HUPDOWN_VALUE )}, &ModuleFakeDyn },
{ "HUPDOWN_REFRESH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HUPDOWN_REFRESH )}, &ModuleFakeDyn },
{ "MODINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OEDITUPDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HUPDOWN_DISABLEBACKCOLOR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HUPDOWN_DISABLEBACKCOLOR )}, &ModuleFakeDyn },
{ "_LHIDE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HIDEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HIDEWINDOW )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SHOWWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( SHOWWINDOW )}, NULL },
{ "ENABLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ENABLEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ENABLEWINDOW )}, NULL },
{ "INVALIDATERECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INVALIDATERECT )}, NULL },
{ "DISABLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HUPDOWN_VALID", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HUPDOWN_VALID )}, &ModuleFakeDyn },
{ "HUPDOWN_CREATEUPDOWN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HUPDOWN_CREATEUPDOWN )}, &ModuleFakeDyn },
{ "MOVE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETCLIENTRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETCLIENTRECT )}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SENDMESSAGE )}, NULL },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HWG_BITOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_BITOR )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "EVAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NVALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NVALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_TITLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "_BSETGET", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_IDUPDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_INCREMENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_STYLEUPDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NLOWER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NUPPER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NUPDOWNWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NMAXLENGTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CPICTURE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "_LNOBORDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BKEYDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BCHANGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BGETFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BLOSTFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BCLICKDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BCLICKUP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BVALID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LNOVALID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LCREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OEDITUPDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HEDITUPDOWN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HEDITUPDOWN )}, &ModuleFakeDyn },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "TITLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BSETGET", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BSIZE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BPAINT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BGETFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BLOSTFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TOOLTIP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CPICTURE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LNOBORDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NMAXLENGTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BKEYDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BCHANGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BOTHER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CONTROLSOURCE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATEUPDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHOLDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LCREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDTOOLTIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADDTOOLTIP )}, NULL },
{ "GETPARENTFORM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETWINDOWPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETWINDOWPOS )}, NULL },
{ "DESTROYWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( DESTROYWINDOW )}, NULL },
{ "TYPE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CLASSNAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETWINDOWOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETWINDOWOBJECT )}, NULL },
{ "HWG_INITEDITPROC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITEDITPROC )}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HUPDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATEUPDOWNCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATEUPDOWNCONTROL )}, NULL },
{ "IDUPDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STYLEUPDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NUPDOWNWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OUPDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHOLDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DISABLEBACKCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_DISABLEBRUSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DISABLEBRUSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DISABLEBCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETVALUE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLOWER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NUPPER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETUPDOWN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETUPDOWN )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HEDIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HEDIT )}, NULL },
{ "HEDITUPDOWN_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HEDITUPDOWN_INIT )}, &ModuleFakeDyn },
{ "HEDITUPDOWN_NOTIFY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HEDITUPDOWN_NOTIFY )}, &ModuleFakeDyn },
{ "HEDITUPDOWN_REFRESH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HEDITUPDOWN_REFRESH )}, &ModuleFakeDyn },
{ "ADDEVENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ONCHANGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETNOTIFYCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETNOTIFYCODE )}, NULL },
{ "GETNOTIFYDELTAPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETNOTIFYDELTAPOS )}, NULL },
{ "OUPDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_BITAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_BITAND )}, NULL },
{ "GETWINDOWLONG", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETWINDOWLONG )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "UNTRANSFORM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INCREMENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "CPICFUNC", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CPICMASK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETDLGITEMTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETDLGITEMTEXT )}, NULL },
{ "BCLICKUP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BCLICKDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LSUSPENDMSGSHANDLING", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_HUPDOWN )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HUPDOWN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HUPDOWN )
   #include "hbiniseg.h"
#endif

HB_FUNC( HUPDOWN )
{
   static const BYTE pcode[] =
   {
	13,3,255,116,158,0,9,103,1,0,100,69,28,17,
	73,108,2,100,48,3,0,103,1,0,112,0,12,1,
	68,80,3,126,2,1,0,103,1,0,100,8,21,31,
	5,73,95,3,29,123,9,103,1,0,100,8,28,38,
	48,4,0,108,5,100,12,0,106,8,72,85,112,68,
	111,119,110,0,48,6,0,108,7,100,12,0,112,0,
	4,1,0,112,2,82,1,0,133,22,0,95,3,31,
	37,48,8,0,103,1,0,100,106,5,69,68,73,84,
	0,95,2,106,9,119,105,110,99,108,97,115,115,0,
	4,1,0,9,112,5,25,3,100,73,134,2,95,3,
	31,31,48,9,0,103,1,0,100,100,95,2,106,8,
	98,83,101,116,71,101,116,0,4,1,0,9,9,112,
	6,25,3,100,73,134,3,95,3,31,30,48,9,0,
	103,1,0,100,100,95,2,106,7,110,86,97,108,117,
	101,0,4,1,0,9,9,112,6,25,3,100,73,134,
	4,95,3,31,30,48,9,0,103,1,0,100,100,95,
	2,106,7,98,86,97,108,105,100,0,4,1,0,9,
	9,112,6,25,3,100,73,134,5,95,3,31,56,48,
	9,0,103,1,0,100,100,95,2,106,8,104,85,112,
	68,111,119,110,0,106,9,105,100,85,112,68,111,119,
	110,0,106,12,115,116,121,108,101,85,112,68,111,119,
	110,0,4,3,0,9,9,112,6,25,3,100,73,134,
	6,95,3,31,51,48,9,0,103,1,0,100,100,95,
	2,106,9,98,107,101,121,100,111,119,110,0,106,7,
	98,107,101,121,117,112,0,106,8,98,99,104,97,110,
	103,101,0,4,3,0,9,9,112,6,25,3,100,73,
	134,7,95,3,31,45,48,9,0,103,1,0,100,100,
	95,2,106,11,98,67,108,105,99,107,68,111,119,110,
	0,106,9,98,67,108,105,99,107,85,112,0,4,2,
	0,9,9,112,6,25,3,100,73,134,8,95,3,31,
	32,48,9,0,103,1,0,100,93,241,216,95,2,106,
	7,110,76,111,119,101,114,0,4,1,0,9,9,112,
	6,25,3,100,73,134,9,95,3,31,32,48,9,0,
	103,1,0,100,93,15,39,95,2,106,7,110,85,112,
	112,101,114,0,4,1,0,9,9,112,6,25,3,100,
	73,134,10,95,3,31,37,48,9,0,103,1,0,100,
	92,10,95,2,106,13,110,85,112,68,111,119,110,87,
	105,100,116,104,0,4,1,0,9,9,112,6,25,3,
	100,73,134,11,95,3,31,32,48,9,0,103,1,0,
	100,9,95,2,106,9,108,67,104,97,110,103,101,100,
	0,4,1,0,9,9,112,6,25,3,100,73,134,12,
	95,3,31,33,48,9,0,103,1,0,100,122,95,2,
	106,10,73,110,99,114,101,109,101,110,116,0,4,1,
	0,9,9,112,6,25,3,100,73,134,13,95,3,31,
	34,48,9,0,103,1,0,100,100,95,2,106,11,110,
	77,97,120,76,101,110,103,116,104,0,4,1,0,9,
	9,112,6,25,3,100,73,134,14,95,3,31,33,48,
	9,0,103,1,0,100,100,95,2,106,10,108,78,111,
	66,111,114,100,101,114,0,4,1,0,9,9,112,6,
	25,3,100,73,134,15,95,3,31,32,48,9,0,103,
	1,0,100,100,95,2,106,9,99,80,105,99,116,117,
	114,101,0,4,1,0,9,9,112,6,25,3,100,73,
	134,16,95,3,31,35,48,9,0,103,1,0,100,100,
	95,2,106,12,111,69,100,105,116,85,112,68,111,119,
	110,0,4,1,0,9,9,112,6,25,3,100,73,134,
	18,95,3,31,31,48,9,0,103,1,0,100,9,92,
	8,106,8,108,67,114,101,97,116,101,0,4,1,0,
	9,9,112,6,25,3,100,73,134,23,95,3,28,24,
	48,10,0,103,1,0,106,4,78,101,119,0,108,11,
	14,95,2,9,112,4,25,22,48,12,0,103,1,0,
	106,4,78,101,119,0,108,11,14,95,2,9,112,4,
	73,134,25,95,3,28,29,48,10,0,103,1,0,106,
	9,65,99,116,105,118,97,116,101,0,108,13,14,95,
	2,9,112,4,25,27,48,12,0,103,1,0,106,9,
	65,99,116,105,118,97,116,101,0,108,13,14,95,2,
	9,112,4,73,134,26,95,3,28,25,48,10,0,103,
	1,0,106,5,73,110,105,116,0,108,14,14,95,2,
	9,112,4,25,23,48,12,0,103,1,0,106,5,73,
	110,105,116,0,108,14,14,95,2,9,112,4,73,134,
	27,95,3,28,29,48,10,0,103,1,0,106,9,83,
	101,116,86,97,108,117,101,0,108,15,14,95,2,9,
	112,4,25,27,48,12,0,103,1,0,106,9,83,101,
	116,86,97,108,117,101,0,108,15,14,95,2,9,112,
	4,73,134,28,95,3,28,26,48,10,0,103,1,0,
	106,6,86,97,108,117,101,0,108,16,14,92,33,9,
	112,4,25,24,48,12,0,103,1,0,106,6,86,97,
	108,117,101,0,108,16,14,92,33,9,112,4,73,95,
	3,28,24,48,10,0,103,1,0,106,7,95,86,97,
	108,117,101,0,108,16,14,112,2,25,22,48,12,0,
	103,1,0,106,7,95,86,97,108,117,101,0,108,16,
	14,112,2,73,134,29,95,3,28,28,48,10,0,103,
	1,0,106,8,82,101,102,114,101,115,104,0,108,17,
	14,95,2,9,112,4,25,26,48,12,0,103,1,0,
	106,8,82,101,102,114,101,115,104,0,108,17,14,95,
	2,9,112,4,73,134,31,95,3,28,88,48,18,0,
	103,1,0,106,9,83,101,116,67,111,108,111,114,0,
	89,62,0,4,0,0,0,95,1,73,48,19,0,48,
	20,0,95,1,112,0,95,2,95,3,95,4,112,3,
	73,48,21,0,95,1,112,0,100,69,28,22,48,19,
	0,48,21,0,95,1,112,0,95,2,95,3,95,4,
	112,3,25,3,100,6,95,2,9,112,4,25,86,48,
	22,0,103,1,0,106,9,83,101,116,67,111,108,111,
	114,0,89,62,0,4,0,0,0,95,1,73,48,19,
	0,48,20,0,95,1,112,0,95,2,95,3,95,4,
	112,3,73,48,21,0,95,1,112,0,100,69,28,22,
	48,19,0,48,21,0,95,1,112,0,95,2,95,3,
	95,4,112,3,25,3,100,6,95,2,9,112,4,73,
	134,32,95,3,28,37,48,10,0,103,1,0,106,17,
	68,105,115,97,98,108,101,66,97,99,107,67,111,108,
	111,114,0,108,23,14,92,33,9,112,4,25,35,48,
	12,0,103,1,0,106,17,68,105,115,97,98,108,101,
	66,97,99,107,67,111,108,111,114,0,108,23,14,92,
	33,9,112,4,73,95,3,28,35,48,10,0,103,1,
	0,106,18,95,68,105,115,97,98,108,101,66,97,99,
	107,67,111,108,111,114,0,108,23,14,112,2,25,33,
	48,12,0,103,1,0,106,18,95,68,105,115,97,98,
	108,101,66,97,99,107,67,111,108,111,114,0,108,23,
	14,112,2,73,134,33,95,3,28,66,48,18,0,103,
	1,0,106,5,72,105,100,101,0,89,44,0,1,0,
	0,0,95,1,73,48,24,0,95,1,120,112,1,73,
	108,25,100,48,26,0,95,1,112,0,20,1,108,25,
	100,48,1,0,95,1,112,0,12,1,6,95,2,9,
	112,4,25,64,48,22,0,103,1,0,106,5,72,105,
	100,101,0,89,44,0,1,0,0,0,95,1,73,48,
	24,0,95,1,120,112,1,73,108,25,100,48,26,0,
	95,1,112,0,20,1,108,25,100,48,1,0,95,1,
	112,0,12,1,6,95,2,9,112,4,73,134,34,95,
	3,28,66,48,18,0,103,1,0,106,5,83,104,111,
	119,0,89,44,0,1,0,0,0,95,1,73,48,24,
	0,95,1,9,112,1,73,108,27,100,48,26,0,95,
	1,112,0,20,1,108,27,100,48,1,0,95,1,112,
	0,12,1,6,95,2,9,112,4,25,64,48,22,0,
	103,1,0,106,5,83,104,111,119,0,89,44,0,1,
	0,0,0,95,1,73,48,24,0,95,1,9,112,1,
	73,108,27,100,48,26,0,95,1,112,0,20,1,108,
	27,100,48,1,0,95,1,112,0,12,1,6,95,2,
	9,112,4,73,134,35,95,3,28,74,48,18,0,103,
	1,0,106,7,69,110,97,98,108,101,0,89,50,0,
	1,0,0,0,95,1,73,48,28,0,48,20,0,95,
	1,112,0,112,0,73,108,29,100,48,1,0,95,1,
	112,0,120,20,2,108,30,100,48,1,0,95,1,112,
	0,122,12,2,6,95,2,9,112,4,25,72,48,22,
	0,103,1,0,106,7,69,110,97,98,108,101,0,89,
	50,0,1,0,0,0,95,1,73,48,28,0,48,20,
	0,95,1,112,0,112,0,73,108,29,100,48,1,0,
	95,1,112,0,120,20,2,108,30,100,48,1,0,95,
	1,112,0,122,12,2,6,95,2,9,112,4,73,134,
	37,95,3,28,62,48,18,0,103,1,0,106,8,68,
	105,115,97,98,108,101,0,89,37,0,1,0,0,0,
	95,1,73,48,31,0,48,20,0,95,1,112,0,112,
	0,73,108,29,100,48,1,0,95,1,112,0,9,12,
	2,6,95,2,9,112,4,25,60,48,22,0,103,1,
	0,106,8,68,105,115,97,98,108,101,0,89,37,0,
	1,0,0,0,95,1,73,48,31,0,48,20,0,95,
	1,112,0,112,0,73,108,29,100,48,1,0,95,1,
	112,0,9,12,2,6,95,2,9,112,4,73,134,38,
	95,3,28,26,48,10,0,103,1,0,106,6,86,97,
	108,105,100,0,108,32,14,95,2,9,112,4,25,24,
	48,12,0,103,1,0,106,6,86,97,108,105,100,0,
	108,32,14,95,2,9,112,4,73,134,39,95,3,28,
	33,48,10,0,103,1,0,106,13,67,114,101,97,116,
	101,85,112,68,111,119,110,0,108,33,14,95,2,9,
	112,4,25,31,48,12,0,103,1,0,106,13,67,114,
	101,97,116,101,85,112,68,111,119,110,0,108,33,14,
	95,2,9,112,4,73,134,41,95,3,28,111,48,18,
	0,103,1,0,106,5,77,111,118,101,0,89,89,0,
	5,0,0,0,95,1,73,48,34,0,48,20,0,95,
	1,112,0,95,2,95,3,95,4,108,35,100,48,1,
	0,95,1,112,0,12,1,92,3,1,72,95,5,112,
	4,73,108,36,100,48,1,0,95,1,112,0,93,105,
	4,48,26,0,48,21,0,95,1,112,0,112,0,121,
	20,4,108,30,100,48,1,0,95,1,112,0,122,12,
	2,6,95,2,9,112,4,25,109,48,22,0,103,1,
	0,106,5,77,111,118,101,0,89,89,0,5,0,0,
	0,95,1,73,48,34,0,48,20,0,95,1,112,0,
	95,2,95,3,95,4,108,35,100,48,1,0,95,1,
	112,0,12,1,92,3,1,72,95,5,112,4,73,108,
	36,100,48,1,0,95,1,112,0,93,105,4,48,26,
	0,48,21,0,95,1,112,0,112,0,121,20,4,108,
	30,100,48,1,0,95,1,112,0,122,12,2,6,95,
	2,9,112,4,73,95,3,28,26,108,37,100,48,3,
	0,103,1,0,112,0,20,1,48,38,0,103,1,0,
	112,0,73,25,11,48,39,0,103,1,0,112,0,73,
	108,40,100,48,3,0,103,1,0,112,0,12,1,80,
	1,108,41,100,95,1,106,10,73,110,105,116,67,108,
	97,115,115,0,12,2,28,32,48,42,0,95,1,108,
	43,100,12,0,112,1,73,25,17,108,40,100,48,3,
	0,103,1,0,112,0,12,1,80,1,108,44,100,12,
	0,121,15,28,10,103,1,0,108,0,14,121,178,95,
	1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HUPDOWN_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,30,102,80,31,133,72,0,95,28,80,28,134,
	2,108,45,100,95,5,100,8,28,5,121,25,4,95,
	5,97,0,0,1,0,95,24,100,8,21,31,6,73,
	95,24,68,28,9,97,0,0,128,0,25,3,121,72,
	12,2,80,5,134,4,108,46,100,95,3,12,1,106,
	2,78,0,69,28,20,134,5,126,3,0,0,134,6,
	48,47,0,95,4,95,3,112,1,73,134,8,95,4,
	100,5,28,40,134,9,89,34,0,1,0,1,0,31,
	0,95,1,100,8,28,11,48,48,0,95,255,112,0,
	25,11,48,49,0,95,255,95,1,112,1,6,80,4,
	134,12,48,49,0,95,31,95,3,112,1,73,134,13,
	48,50,0,95,31,108,51,100,95,3,12,1,112,1,
	73,134,14,48,52,0,95,31,95,4,112,1,73,134,
	17,48,4,0,48,20,0,95,31,112,0,95,1,95,
	2,95,5,95,6,95,7,95,8,95,9,95,10,95,
	11,95,12,95,13,95,16,95,17,95,18,112,14,73,
	134,19,48,53,0,95,31,48,54,0,95,31,112,0,
	112,1,73,134,21,48,55,0,95,31,95,22,100,5,
	28,5,122,25,4,95,22,112,1,73,134,22,48,56,
	0,95,31,93,164,0,112,1,73,134,23,95,20,100,
	69,28,12,48,57,0,95,31,95,20,112,1,73,134,
	24,95,21,100,69,28,12,48,58,0,95,31,95,21,
	112,1,73,134,26,95,19,100,69,28,12,48,59,0,
	95,31,95,19,112,1,73,134,27,48,60,0,95,31,
	95,25,112,1,73,134,28,48,61,0,95,31,95,23,
	100,5,28,15,108,62,100,106,2,57,0,92,4,12,
	2,25,4,95,23,112,1,73,134,29,48,63,0,95,
	31,95,24,112,1,73,134,30,48,64,0,95,31,95,
	26,112,1,73,134,31,48,65,0,95,31,95,27,112,
	1,73,134,32,48,66,0,95,31,95,14,112,1,73,
	134,33,48,67,0,95,31,95,15,112,1,73,134,35,
	48,68,0,95,31,112,0,73,134,37,48,69,0,95,
	31,95,30,112,1,73,134,38,48,70,0,95,31,95,
	29,112,1,73,134,40,95,4,100,69,28,16,134,41,
	48,71,0,95,31,95,15,112,1,73,25,21,134,43,
	95,14,100,69,28,13,134,44,48,72,0,95,31,120,
	112,1,73,134,48,95,31,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HUPDOWN_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,124,0,108,73,100,48,26,
	0,48,74,0,95,1,112,0,112,0,12,1,32,254,
	0,134,1,48,75,0,95,1,120,112,1,73,134,4,
	48,76,0,95,1,48,4,0,108,77,100,12,0,48,
	74,0,95,1,112,0,48,54,0,95,1,112,0,108,
	78,100,48,79,0,95,1,112,0,12,1,48,80,0,
	95,1,112,0,48,81,0,95,1,112,0,48,82,0,
	95,1,112,0,48,83,0,95,1,112,0,48,84,0,
	95,1,112,0,48,85,0,95,1,112,0,48,86,0,
	95,1,112,0,48,87,0,95,1,112,0,48,88,0,
	95,1,112,0,48,89,0,95,1,112,0,48,90,0,
	95,1,112,0,48,91,0,95,1,112,0,48,92,0,
	95,1,112,0,48,93,0,95,1,112,0,48,94,0,
	95,1,112,0,48,95,0,95,1,112,0,48,96,0,
	95,1,112,0,48,97,0,95,1,112,0,100,48,98,
	0,95,1,112,0,48,99,0,95,1,112,0,48,100,
	0,95,1,112,0,48,101,0,95,1,112,0,112,26,
	112,1,73,134,5,48,102,0,48,21,0,95,1,112,
	0,106,12,111,69,100,105,116,85,112,68,111,119,110,
	0,112,1,73,134,7,48,103,0,95,1,112,0,73,
	134,10,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HUPDOWN_INIT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,138,0,48,104,0,95,1,
	112,0,31,37,134,1,48,103,0,48,20,0,95,1,
	112,0,112,0,73,134,2,48,105,0,95,1,112,0,
	73,134,3,48,38,0,95,1,112,0,73,134,5,100,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HUPDOWN_CREATEUPDOWN )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,151,0,48,106,0,95,1,
	121,112,1,73,134,1,48,107,0,95,1,112,0,31,
	120,134,2,48,68,0,95,1,112,0,73,134,3,108,
	108,100,48,26,0,48,109,0,95,1,112,0,112,0,
	48,26,0,48,21,0,95,1,112,0,112,0,48,92,
	0,95,1,112,0,20,3,134,4,48,110,0,48,21,
	0,95,1,112,0,48,86,0,95,1,112,0,112,1,
	73,134,5,108,111,100,48,26,0,48,21,0,95,1,
	112,0,112,0,48,26,0,95,1,112,0,121,121,121,
	121,92,3,20,7,134,6,108,112,100,48,26,0,95,
	1,112,0,20,1,25,101,134,7,9,48,113,0,48,
	109,0,95,1,112,0,112,0,92,10,35,28,23,73,
	48,114,0,48,74,0,95,1,112,0,112,0,106,5,
	72,84,65,66,0,5,28,58,134,9,48,106,0,95,
	1,122,112,1,73,134,10,108,115,100,48,26,0,48,
	21,0,95,1,112,0,112,0,48,21,0,95,1,112,
	0,20,2,134,11,108,116,100,48,26,0,48,21,0,
	95,1,112,0,112,0,20,1,134,13,48,117,0,95,
	1,48,26,0,48,21,0,95,1,112,0,112,0,112,
	1,73,134,15,48,118,0,95,1,108,119,100,48,26,
	0,48,74,0,95,1,112,0,112,0,48,120,0,95,
	1,112,0,48,121,0,95,1,112,0,121,121,48,122,
	0,95,1,112,0,121,48,26,0,95,1,112,0,97,
	1,0,0,128,97,255,255,255,127,108,78,100,48,79,
	0,95,1,112,0,12,1,12,11,112,1,73,134,17,
	48,123,0,48,21,0,95,1,112,0,95,1,112,1,
	73,134,18,48,124,0,48,21,0,95,1,112,0,120,
	112,1,73,134,19,48,125,0,95,1,112,0,121,5,
	28,48,134,20,48,106,0,95,1,122,112,1,73,134,
	21,108,115,100,48,26,0,95,1,112,0,48,21,0,
	95,1,112,0,20,2,134,22,108,116,100,48,26,0,
	95,1,112,0,20,1,134,24,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HUPDOWN_DISABLEBACKCOLOR )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,179,0,95,1,100,69,28,
	54,134,1,48,126,0,48,20,0,95,2,112,0,95,
	1,112,1,73,134,2,48,21,0,95,2,112,0,100,
	69,28,24,134,3,48,127,0,48,21,0,95,2,112,
	0,48,128,0,95,2,112,0,112,1,73,134,6,48,
	129,0,95,2,112,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HUPDOWN_VALUE )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,190,0,9,95,1,100,69,
	28,12,73,48,21,0,95,2,112,0,100,69,28,51,
	134,1,48,130,0,95,2,95,1,112,1,73,134,2,
	48,50,0,48,21,0,95,2,112,0,48,79,0,95,
	2,112,0,112,1,73,134,3,48,38,0,48,21,0,
	95,2,112,0,112,0,73,134,5,48,48,0,95,2,
	112,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HUPDOWN_SETVALUE )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,199,0,95,1,48,131,0,
	95,2,112,0,35,21,31,13,73,95,1,48,132,0,
	95,2,112,0,15,28,13,134,1,48,48,0,95,2,
	112,0,80,1,134,3,48,49,0,95,2,95,1,112,
	1,73,134,4,48,50,0,95,2,108,51,100,48,48,
	0,95,2,112,0,12,1,112,1,73,134,5,108,133,
	100,48,1,0,95,2,112,0,48,48,0,95,2,112,
	0,20,2,134,6,48,80,0,95,2,112,0,100,69,
	28,26,134,7,48,47,0,48,80,0,95,2,112,0,
	48,48,0,95,2,112,0,95,2,112,2,73,134,10,
	48,48,0,95,2,112,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HUPDOWN_REFRESH )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,213,0,9,48,80,0,95,
	1,112,0,100,69,28,12,73,48,48,0,95,1,112,
	0,100,69,28,67,134,1,48,49,0,95,1,48,47,
	0,48,80,0,95,1,112,0,112,0,112,1,73,134,
	2,108,51,100,48,48,0,95,1,112,0,12,1,48,
	79,0,95,1,112,0,69,28,47,134,5,48,130,0,
	95,1,48,48,0,95,1,112,0,112,1,73,25,28,
	134,8,108,133,100,48,1,0,95,1,112,0,108,78,
	100,48,79,0,95,1,112,0,12,1,20,2,134,10,
	48,50,0,48,21,0,95,1,112,0,48,79,0,95,
	1,112,0,112,1,73,134,11,48,38,0,48,21,0,
	95,1,112,0,112,0,73,134,12,108,30,100,48,1,
	0,95,1,112,0,122,20,2,134,14,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HUPDOWN_VALID )
{
   static const BYTE pcode[] =
   {
	13,2,0,102,80,1,133,239,0,9,48,48,0,95,
	1,112,0,48,132,0,95,1,112,0,34,28,18,73,
	48,48,0,95,1,112,0,48,131,0,95,1,112,0,
	16,80,2,134,1,95,2,32,143,0,134,2,48,49,
	0,95,1,48,48,0,95,1,112,0,48,132,0,95,
	1,112,0,15,28,23,108,134,100,48,48,0,95,1,
	112,0,48,132,0,95,1,112,0,12,2,25,21,108,
	135,100,48,48,0,95,1,112,0,48,131,0,95,1,
	112,0,12,2,112,1,73,134,3,48,130,0,95,1,
	48,48,0,95,1,112,0,112,1,73,134,4,48,38,
	0,48,21,0,95,1,112,0,112,0,73,134,5,108,
	36,100,48,26,0,48,21,0,95,1,112,0,112,0,
	93,177,0,121,92,255,20,4,134,6,48,136,0,95,
	1,112,0,73,134,7,95,2,110,7,134,9,95,2,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HEDITUPDOWN )
{
   static const BYTE pcode[] =
   {
	13,3,255,116,158,0,9,103,2,0,100,69,28,17,
	73,108,2,100,48,3,0,103,2,0,112,0,12,1,
	68,80,3,126,2,1,0,103,2,0,100,8,21,31,
	5,73,95,3,29,46,1,103,2,0,100,8,28,42,
	48,4,0,108,5,100,12,0,106,12,72,69,100,105,
	116,85,112,68,111,119,110,0,48,6,0,108,137,100,
	12,0,112,0,4,1,0,112,2,82,2,0,133,255,
	0,95,3,28,25,48,10,0,103,2,0,106,5,73,
	78,73,84,0,108,138,14,95,2,9,112,4,25,23,
	48,12,0,103,2,0,106,5,73,78,73,84,0,108,
	138,14,95,2,9,112,4,73,134,1,95,3,28,27,
	48,10,0,103,2,0,106,7,78,111,116,105,102,121,
	0,108,139,14,95,2,9,112,4,25,25,48,12,0,
	103,2,0,106,7,78,111,116,105,102,121,0,108,139,
	14,95,2,9,112,4,73,134,2,95,3,28,28,48,
	10,0,103,2,0,106,8,82,101,102,114,101,115,104,
	0,108,140,14,95,2,9,112,4,25,26,48,12,0,
	103,2,0,106,8,82,101,102,114,101,115,104,0,108,
	140,14,95,2,9,112,4,73,95,3,28,26,108,37,
	100,48,3,0,103,2,0,112,0,20,1,48,38,0,
	103,2,0,112,0,73,25,11,48,39,0,103,2,0,
	112,0,73,108,40,100,48,3,0,103,2,0,112,0,
	12,1,80,1,108,41,100,95,1,106,10,73,110,105,
	116,67,108,97,115,115,0,12,2,28,32,48,42,0,
	95,1,108,43,100,12,0,112,1,73,25,17,108,40,
	100,48,3,0,103,2,0,112,0,12,1,80,1,108,
	44,100,12,0,121,15,28,10,103,2,0,108,0,14,
	121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HEDITUPDOWN_INIT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,7,1,48,104,0,95,1,
	112,0,31,64,134,1,48,99,0,95,1,112,0,100,
	69,28,51,134,2,48,141,0,48,74,0,95,1,112,
	0,93,0,3,95,1,89,17,0,1,0,1,0,1,
	0,48,142,0,95,255,112,0,6,100,106,9,111,110,
	67,104,97,110,103,101,0,112,5,73,134,5,100,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HEDITUPDOWN_NOTIFY )
{
   static const BYTE pcode[] =
   {
	13,5,1,102,80,2,133,15,1,108,143,100,95,1,
	12,1,80,3,134,1,108,144,100,95,1,122,12,2,
	80,4,134,2,108,144,100,95,1,92,2,12,2,80,
	5,134,8,48,145,0,95,2,112,0,100,5,21,31,
	86,73,108,146,100,108,147,100,48,26,0,95,2,112,
	0,92,240,12,2,93,0,8,12,2,121,69,21,31,
	58,73,9,48,90,0,48,145,0,95,2,112,0,112,
	0,100,69,28,40,73,48,47,0,48,90,0,48,145,
	0,95,2,112,0,112,0,48,48,0,48,145,0,95,
	2,112,0,112,0,48,145,0,95,2,112,0,112,2,
	68,28,7,134,9,121,110,7,134,12,108,78,100,108,
	148,100,48,149,0,95,2,48,79,0,95,2,112,0,
	112,1,12,1,12,1,80,6,134,15,9,95,6,48,
	131,0,48,145,0,95,2,112,0,112,0,34,28,7,
	73,95,5,121,35,21,31,44,73,9,95,6,48,132,
	0,48,145,0,95,2,112,0,112,0,16,28,7,73,
	95,5,121,15,21,31,17,73,48,150,0,48,145,0,
	95,2,112,0,112,0,121,5,28,7,134,16,121,110,
	7,134,18,48,150,0,48,145,0,95,2,112,0,112,
	0,95,5,65,167,6,134,19,48,50,0,95,2,108,
	151,100,95,6,48,152,0,95,2,112,0,108,73,100,
	48,152,0,95,2,112,0,12,1,28,7,106,1,0,
	25,6,106,2,32,0,72,48,153,0,95,2,112,0,
	72,12,2,112,1,73,134,20,108,154,100,48,26,0,
	48,74,0,95,2,112,0,112,0,48,54,0,95,2,
	112,0,48,79,0,95,2,112,0,20,3,134,21,48,
	50,0,48,145,0,95,2,112,0,48,79,0,95,2,
	112,0,112,1,73,134,22,48,130,0,48,145,0,95,
	2,112,0,95,6,112,1,73,134,23,48,136,0,95,
	2,112,0,73,134,24,9,95,3,93,46,253,5,28,
	35,73,48,155,0,48,145,0,95,2,112,0,112,0,
	100,69,21,31,17,73,48,156,0,48,145,0,95,2,
	112,0,112,0,100,69,29,175,0,134,25,48,157,0,
	48,74,0,95,2,112,0,120,112,1,73,134,26,9,
	95,5,121,35,28,17,73,48,156,0,48,145,0,95,
	2,112,0,112,0,100,69,28,47,134,27,48,47,0,
	48,156,0,48,145,0,95,2,112,0,112,0,48,145,
	0,95,2,112,0,48,48,0,48,145,0,95,2,112,
	0,112,0,95,5,95,4,112,4,73,25,71,134,28,
	9,95,5,121,15,28,17,73,48,155,0,48,145,0,
	95,2,112,0,112,0,100,69,28,45,134,29,48,47,
	0,48,155,0,48,145,0,95,2,112,0,112,0,48,
	145,0,95,2,112,0,48,48,0,48,145,0,95,2,
	112,0,112,0,95,5,95,4,112,4,73,134,31,48,
	157,0,48,74,0,95,2,112,0,9,112,1,73,134,
	33,95,3,93,47,253,5,73,134,36,121,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HEDITUPDOWN_REFRESH )
{
   static const BYTE pcode[] =
   {
	13,2,0,102,80,1,133,56,1,48,48,0,48,145,
	0,95,1,112,0,112,0,80,2,134,1,9,48,80,
	0,95,1,112,0,100,69,28,12,73,48,79,0,95,
	1,112,0,100,69,28,58,134,2,48,50,0,95,1,
	108,151,100,95,2,48,152,0,95,1,112,0,108,73,
	100,48,152,0,95,1,112,0,12,1,28,7,106,1,
	0,25,6,106,2,32,0,72,48,153,0,95,1,112,
	0,72,12,2,112,1,73,134,4,108,154,100,48,26,
	0,48,74,0,95,1,112,0,112,0,48,54,0,95,
	1,112,0,48,79,0,95,1,112,0,20,3,134,6,
	100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,158,0,2,0,7
   };

   hb_vmExecute( pcode, symbols );
}

