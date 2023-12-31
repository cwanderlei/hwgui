/*
 * xHarbour build 1.2.1 Intl. (SimpLex) (Rev. 9376)
 * Generated C source code from <source\\hrect.prg>
 * Command: /D__EXPORT__ /DHB_FM_STATISTICS_OFF /iinclude;d:\xHarbour\include /q0 /w0 /es2 /n1 /gc0 source\hrect.prg -osource\hrect.c 
 * Created: 2012.04.25 20:42:51 (Borland C++ 5.5.1 (32 bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "source\\hrect.prg"

HB_FUNC( HRECT );
HB_FUNC_STATIC( HRECT_NEW );
HB_FUNC( HRECT_LINE );
HB_FUNC_STATIC( HRECT_LINE_NEW );
HB_FUNC_STATIC( HRECT_LINE_ACTIVATE );
HB_FUNC_STATIC( HRECT_LINE_PAINT );
HB_FUNC( HSHAPE );
HB_FUNC_STATIC( HSHAPE_NEW );
HB_FUNC( HLCONTAINER );
HB_FUNC_STATIC( HLCONTAINER_NEW );
HB_FUNC( HDRAWSHAPE );
HB_FUNC_STATIC( HDRAWSHAPE_NEW );
HB_FUNC_STATIC( HDRAWSHAPE_ACTIVATE );
HB_FUNC_STATIC( HDRAWSHAPE_SETCOLOR );
HB_FUNC_STATIC( HDRAWSHAPE_CURVATURE );
HB_FUNC_STATIC( HDRAWSHAPE_PAINT );
HB_FUNC( RECT );
HB_FUNC( HCONTAINER );
HB_FUNC_STATIC( HCONTAINER_NEW );
HB_FUNC_STATIC( HCONTAINER_ACTIVATE );
HB_FUNC_STATIC( HCONTAINER_INIT );
HB_FUNC_STATIC( HCONTAINER_ONEVENT );
HB_FUNC_STATIC( HCONTAINER_VISIBLE );
HB_FUNC_STATIC( HCONTAINER_PAINT );
HB_FUNC_INITSTATICS();

/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( __CLSISACTIVE );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HCONTROL );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HPEN );
HB_FUNC_EXTERN( GETSYSCOLOR );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( CREATESTATIC );
HB_FUNC_EXTERN( GETDRAWITEMINFO );
HB_FUNC_EXTERN( SELECTOBJECT );
HB_FUNC_EXTERN( DRAWLINE );
HB_FUNC_EXTERN( HBRUSH );
HB_FUNC_EXTERN( REDRAWWINDOW );
HB_FUNC_EXTERN( INVALIDATERECT );
HB_FUNC_EXTERN( SETBKMODE );
HB_FUNC_EXTERN( GETSTOCKOBJECT );
HB_FUNC_EXTERN( ROUNDRECT );
HB_FUNC_EXTERN( HWG_BITAND );
HB_FUNC_EXTERN( ADDTOOLTIP );
HB_FUNC_EXTERN( SETWINDOWOBJECT );
HB_FUNC_EXTERN( HWG_INITSTATICPROC );
HB_FUNC_EXTERN( GETSKIP );
HB_FUNC_EXTERN( ISCTRLSHIFT );
HB_FUNC_EXTERN( DRAWEDGE );
HB_FUNC_EXTERN( FILLRECT );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HRECT )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HRECT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HRECT )}, &ModuleFakeDyn },
{ "__CLSISACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSISACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCONTROL )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MODMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HRECT_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HRECT_NEW )}, &ModuleFakeDyn },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "_OLINE1", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HRECT_LINE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HRECT_LINE )}, &ModuleFakeDyn },
{ "_OLINE3", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OLINE2", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OLINE4", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HRECT_LINE_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HRECT_LINE_NEW )}, &ModuleFakeDyn },
{ "HRECT_LINE_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HRECT_LINE_ACTIVATE )}, &ModuleFakeDyn },
{ "HRECT_LINE_PAINT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HRECT_LINE_PAINT )}, &ModuleFakeDyn },
{ "HCONTROL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "PAINT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LVERT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LVERT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OPEN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPEN )}, NULL },
{ "GETSYSCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETSYSCOLOR )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATESTATIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATESTATIC )}, NULL },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETDRAWITEMINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETDRAWITEMINFO )}, NULL },
{ "SELECTOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECTOBJECT )}, NULL },
{ "OPEN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DRAWLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DRAWLINE )}, NULL },
{ "HSHAPE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSHAPE )}, &ModuleFakeDyn },
{ "HSHAPE_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSHAPE_NEW )}, &ModuleFakeDyn },
{ "HDRAWSHAPE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDRAWSHAPE )}, &ModuleFakeDyn },
{ "HLCONTAINER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HLCONTAINER )}, &ModuleFakeDyn },
{ "HLCONTAINER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HLCONTAINER_NEW )}, &ModuleFakeDyn },
{ "HDRAWSHAPE_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDRAWSHAPE_NEW )}, &ModuleFakeDyn },
{ "HDRAWSHAPE_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDRAWSHAPE_ACTIVATE )}, &ModuleFakeDyn },
{ "HDRAWSHAPE_PAINT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDRAWSHAPE_PAINT )}, &ModuleFakeDyn },
{ "HDRAWSHAPE_SETCOLOR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDRAWSHAPE_SETCOLOR )}, &ModuleFakeDyn },
{ "HDRAWSHAPE_CURVATURE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HDRAWSHAPE_CURVATURE )}, &ModuleFakeDyn },
{ "_BPAINT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BPAINT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BACKSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LNOBORDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NBORDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NBSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NFSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NCURVATURE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BCOLOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NCSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NBSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NBORDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BRUSHFILL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBRUSH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBRUSH )}, NULL },
{ "NFSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REDRAWWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( REDRAWWINDOW )}, NULL },
{ "INVALIDATERECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INVALIDATERECT )}, NULL },
{ "SETBKMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETBKMODE )}, NULL },
{ "BACKSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BRUSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BRUSHFILL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETSTOCKOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETSTOCKOBJECT )}, NULL },
{ "ROUNDRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROUNDRECT )}, NULL },
{ "NCURVATURE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "RECT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RECT )}, &ModuleFakeDyn },
{ "HCONTAINER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCONTAINER )}, &ModuleFakeDyn },
{ "HCONTAINER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCONTAINER_NEW )}, &ModuleFakeDyn },
{ "HCONTAINER_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCONTAINER_ACTIVATE )}, &ModuleFakeDyn },
{ "HCONTAINER_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCONTAINER_INIT )}, &ModuleFakeDyn },
{ "MODINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LCREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTAINER_ONEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCONTAINER_ONEVENT )}, &ModuleFakeDyn },
{ "HCONTAINER_PAINT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCONTAINER_PAINT )}, &ModuleFakeDyn },
{ "HCONTAINER_VISIBLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HCONTAINER_VISIBLE )}, &ModuleFakeDyn },
{ "_LTABSTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_BITAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_BITAND )}, NULL },
{ "_NCSTYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BLOAD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BREFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_BOTHER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BLOAD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDTOOLTIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADDTOOLTIP )}, NULL },
{ "_NHOLDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETWINDOWOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETWINDOWOBJECT )}, NULL },
{ "HWG_INITSTATICPROC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_INITSTATICPROC )}, NULL },
{ "_LINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TYPE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LCREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BOTHER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LTABSTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETSKIP )}, NULL },
{ "NGETSKIP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ISCTRLSHIFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISCTRLSHIFT )}, NULL },
{ "ONEVENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SHOW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HIDE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_XVISIBLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "XVISIBLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LNOBORDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DRAWEDGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DRAWEDGE )}, NULL },
{ "FILLRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILLRECT )}, NULL },
{ "(_INITSTATICS00006)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_HRECT )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HRECT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HRECT )
   #include "hbiniseg.h"
#endif

HB_FUNC( HRECT )
{
   static const BYTE pcode[] =
   {
	13,3,255,116,132,0,9,103,1,0,100,69,28,17,
	73,108,2,100,48,3,0,103,1,0,112,0,12,1,
	68,80,3,126,2,1,0,103,1,0,100,8,21,31,
	5,73,95,3,29,70,1,103,1,0,100,8,28,36,
	48,4,0,108,5,100,12,0,106,6,72,82,101,99,
	116,0,48,6,0,108,7,100,12,0,112,0,4,1,
	0,112,2,82,1,0,133,21,0,95,3,31,30,48,
	8,0,103,1,0,100,100,95,2,106,7,111,76,105,
	110,101,49,0,4,1,0,9,9,112,6,25,3,100,
	73,134,1,95,3,31,30,48,8,0,103,1,0,100,
	100,95,2,106,7,111,76,105,110,101,50,0,4,1,
	0,9,9,112,6,25,3,100,73,134,2,95,3,31,
	30,48,8,0,103,1,0,100,100,95,2,106,7,111,
	76,105,110,101,51,0,4,1,0,9,9,112,6,25,
	3,100,73,134,3,95,3,31,30,48,8,0,103,1,
	0,100,100,95,2,106,7,111,76,105,110,101,52,0,
	4,1,0,9,9,112,6,25,3,100,73,134,5,95,
	3,28,24,48,9,0,103,1,0,106,4,78,101,119,
	0,108,10,14,95,2,9,112,4,25,22,48,11,0,
	103,1,0,106,4,78,101,119,0,108,10,14,95,2,
	9,112,4,73,95,3,28,26,108,12,100,48,3,0,
	103,1,0,112,0,20,1,48,13,0,103,1,0,112,
	0,73,25,11,48,14,0,103,1,0,112,0,73,108,
	15,100,48,3,0,103,1,0,112,0,12,1,80,1,
	108,16,100,95,1,106,10,73,110,105,116,67,108,97,
	115,115,0,12,2,28,32,48,17,0,95,1,108,18,
	100,12,0,112,1,73,25,17,108,15,100,48,3,0,
	103,1,0,112,0,12,1,80,1,108,19,100,12,0,
	121,15,28,10,103,1,0,108,0,14,121,178,95,1,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HRECT_NEW )
{
   static const BYTE pcode[] =
   {
	13,3,7,102,80,8,133,35,0,95,7,100,5,28,
	8,134,1,126,7,3,0,134,3,95,6,28,16,134,
	4,126,10,20,0,134,5,126,9,16,0,25,14,134,
	7,126,9,20,0,134,8,126,10,16,0,134,12,95,
	7,122,5,28,77,134,13,48,20,0,95,8,48,4,
	0,108,21,100,12,0,95,1,100,9,95,2,95,3,
	95,4,95,2,49,100,95,9,112,8,112,1,73,134,
	14,48,22,0,95,8,48,4,0,108,21,100,12,0,
	95,1,100,9,95,2,95,5,95,4,95,2,49,100,
	95,10,112,8,112,1,73,26,231,0,134,16,95,7,
	92,2,5,28,77,134,17,48,23,0,95,8,48,4,
	0,108,21,100,12,0,95,1,100,120,95,2,95,3,
	95,5,95,3,49,100,95,9,112,8,112,1,73,134,
	18,48,24,0,95,8,48,4,0,108,21,100,12,0,
	95,1,100,120,95,4,95,3,95,5,95,3,49,100,
	95,10,112,8,112,1,73,26,147,0,134,21,48,20,
	0,95,8,48,4,0,108,21,100,12,0,95,1,100,
	9,95,2,95,3,95,4,95,2,49,100,95,9,112,
	8,112,1,73,134,22,48,23,0,95,8,48,4,0,
	108,21,100,12,0,95,1,100,120,95,2,95,3,95,
	5,95,3,49,100,95,9,112,8,112,1,73,134,23,
	48,22,0,95,8,48,4,0,108,21,100,12,0,95,
	1,100,9,95,2,95,5,95,4,95,2,49,100,95,
	10,112,8,112,1,73,134,24,48,24,0,95,8,48,
	4,0,108,21,100,12,0,95,1,100,120,95,4,95,
	3,95,5,95,3,49,100,95,10,112,8,112,1,73,
	134,27,95,8,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HRECT_LINE )
{
   static const BYTE pcode[] =
   {
	13,3,255,116,132,0,9,103,2,0,100,69,28,17,
	73,108,2,100,48,3,0,103,2,0,112,0,12,1,
	68,80,3,126,2,1,0,103,2,0,100,8,21,31,
	5,73,95,3,29,157,1,103,2,0,100,8,28,41,
	48,4,0,108,5,100,12,0,106,11,72,82,101,99,
	116,95,76,105,110,101,0,48,6,0,108,7,100,12,
	0,112,0,4,1,0,112,2,82,2,0,133,67,0,
	95,3,31,39,48,25,0,103,2,0,100,106,7,83,
	84,65,84,73,67,0,95,2,106,9,119,105,110,99,
	108,97,115,115,0,4,1,0,9,112,5,25,3,100,
	73,134,1,95,3,31,29,48,8,0,103,2,0,100,
	100,95,2,106,6,108,86,101,114,116,0,4,1,0,
	9,9,112,6,25,3,100,73,134,2,95,3,31,28,
	48,8,0,103,2,0,100,100,95,2,106,5,111,80,
	101,110,0,4,1,0,9,9,112,6,25,3,100,73,
	134,4,95,3,28,24,48,9,0,103,2,0,106,4,
	78,101,119,0,108,26,14,95,2,9,112,4,25,22,
	48,11,0,103,2,0,106,4,78,101,119,0,108,26,
	14,95,2,9,112,4,73,134,5,95,3,28,29,48,
	9,0,103,2,0,106,9,65,99,116,105,118,97,116,
	101,0,108,27,14,95,2,9,112,4,25,27,48,11,
	0,103,2,0,106,9,65,99,116,105,118,97,116,101,
	0,108,27,14,95,2,9,112,4,73,134,6,95,3,
	28,26,48,9,0,103,2,0,106,6,80,97,105,110,
	116,0,108,28,14,95,2,9,112,4,25,24,48,11,
	0,103,2,0,106,6,80,97,105,110,116,0,108,28,
	14,95,2,9,112,4,73,95,3,28,26,108,12,100,
	48,3,0,103,2,0,112,0,20,1,48,13,0,103,
	2,0,112,0,73,25,11,48,14,0,103,2,0,112,
	0,73,108,15,100,48,3,0,103,2,0,112,0,12,
	1,80,1,108,16,100,95,1,106,10,73,110,105,116,
	67,108,97,115,115,0,12,2,28,32,48,17,0,95,
	1,108,18,100,12,0,112,1,73,25,17,108,15,100,
	48,3,0,103,2,0,112,0,12,1,80,1,108,19,
	100,12,0,121,15,28,10,103,2,0,108,0,14,121,
	178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HRECT_LINE_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,8,102,80,9,133,81,0,48,4,0,48,29,
	0,95,9,112,0,95,1,95,2,92,13,95,4,95,
	5,100,100,100,100,95,7,89,17,0,2,0,0,0,
	48,30,0,95,1,95,2,112,1,6,112,11,73,134,
	4,48,31,0,95,9,95,3,100,8,28,5,9,25,
	4,95,3,112,1,73,134,5,48,32,0,95,9,112,
	0,28,38,134,6,48,33,0,95,9,92,10,112,1,
	73,134,7,48,34,0,95,9,95,6,100,8,28,6,
	92,20,25,4,95,6,112,1,73,25,36,134,9,48,
	33,0,95,9,95,6,100,8,28,6,92,20,25,4,
	95,6,112,1,73,134,10,48,34,0,95,9,92,10,
	112,1,73,134,12,48,35,0,95,9,48,36,0,108,
	37,100,12,0,121,122,108,38,100,95,8,12,1,112,
	3,112,1,73,134,14,48,39,0,95,9,112,0,73,
	134,16,95,9,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HRECT_LINE_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,101,0,108,40,100,48,41,
	0,48,42,0,95,1,112,0,112,0,12,1,31,81,
	134,2,48,43,0,95,1,108,44,100,48,41,0,48,
	42,0,95,1,112,0,112,0,48,45,0,95,1,112,
	0,48,46,0,95,1,112,0,48,47,0,95,1,112,
	0,48,48,0,95,1,112,0,48,49,0,95,1,112,
	0,48,50,0,95,1,112,0,12,7,112,1,73,134,
	3,48,51,0,95,1,112,0,73,134,5,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HRECT_LINE_PAINT )
{
   static const BYTE pcode[] =
   {
	13,7,1,102,80,2,133,110,0,108,52,100,95,1,
	12,1,80,3,134,1,95,3,92,3,1,80,4,95,
	3,92,4,1,80,5,95,3,92,5,1,80,6,95,
	3,92,6,1,80,7,95,3,92,7,1,80,8,134,
	4,108,53,100,95,4,48,41,0,48,54,0,95,2,
	112,0,112,0,20,2,134,6,48,32,0,95,2,112,
	0,28,21,134,7,108,55,100,95,4,95,5,95,6,
	95,5,95,8,20,5,25,19,134,9,108,55,100,95,
	4,95,5,95,6,95,7,95,6,20,5,134,13,100,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HSHAPE )
{
   static const BYTE pcode[] =
   {
	13,3,255,116,132,0,9,103,3,0,100,69,28,17,
	73,108,2,100,48,3,0,103,3,0,112,0,12,1,
	68,80,3,126,2,1,0,103,3,0,100,8,21,31,
	5,73,95,3,29,183,0,103,3,0,100,8,28,37,
	48,4,0,108,5,100,12,0,106,7,72,83,104,97,
	112,101,0,48,6,0,108,7,100,12,0,112,0,4,
	1,0,112,2,82,3,0,133,131,0,95,3,28,24,
	48,9,0,103,3,0,106,4,78,101,119,0,108,57,
	14,95,2,9,112,4,25,22,48,11,0,103,3,0,
	106,4,78,101,119,0,108,57,14,95,2,9,112,4,
	73,95,3,28,26,108,12,100,48,3,0,103,3,0,
	112,0,20,1,48,13,0,103,3,0,112,0,73,25,
	11,48,14,0,103,3,0,112,0,73,108,15,100,48,
	3,0,103,3,0,112,0,12,1,80,1,108,16,100,
	95,1,106,10,73,110,105,116,67,108,97,115,115,0,
	12,2,28,32,48,17,0,95,1,108,18,100,12,0,
	112,1,73,25,17,108,15,100,48,3,0,103,3,0,
	112,0,12,1,80,1,108,19,100,12,0,121,15,28,
	10,103,3,0,108,0,14,121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSHAPE_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,15,102,80,16,133,138,0,95,7,100,5,28,
	5,122,25,4,95,7,80,7,134,1,95,9,100,5,
	28,5,121,25,4,95,9,80,9,134,2,95,10,100,
	5,28,6,92,10,25,4,95,10,80,10,134,3,95,
	8,80,8,134,6,48,4,0,108,58,100,12,0,95,
	1,95,2,95,3,95,4,95,5,95,6,95,13,95,
	11,95,12,100,100,95,7,95,8,95,9,95,10,95,
	14,95,15,112,17,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HLCONTAINER )
{
   static const BYTE pcode[] =
   {
	13,3,255,116,132,0,9,103,4,0,100,69,28,17,
	73,108,2,100,48,3,0,103,4,0,112,0,12,1,
	68,80,3,126,2,1,0,103,4,0,100,8,21,31,
	5,73,95,3,29,188,0,103,4,0,100,8,28,42,
	48,4,0,108,5,100,12,0,106,12,72,76,67,111,
	110,116,97,105,110,101,114,0,48,6,0,108,7,100,
	12,0,112,0,4,1,0,112,2,82,4,0,133,150,
	0,95,3,28,24,48,9,0,103,4,0,106,4,78,
	101,119,0,108,60,14,95,2,9,112,4,25,22,48,
	11,0,103,4,0,106,4,78,101,119,0,108,60,14,
	95,2,9,112,4,73,95,3,28,26,108,12,100,48,
	3,0,103,4,0,112,0,20,1,48,13,0,103,4,
	0,112,0,73,25,11,48,14,0,103,4,0,112,0,
	73,108,15,100,48,3,0,103,4,0,112,0,12,1,
	80,1,108,16,100,95,1,106,10,73,110,105,116,67,
	108,97,115,115,0,12,2,28,32,48,17,0,95,1,
	108,18,100,12,0,112,1,73,25,17,108,15,100,48,
	3,0,103,4,0,112,0,12,1,80,1,108,19,100,
	12,0,121,15,28,10,103,4,0,108,0,14,121,178,
	95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HLCONTAINER_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,10,102,80,11,133,157,0,95,7,100,5,28,
	6,92,3,25,4,95,7,80,7,134,1,95,9,100,
	5,28,5,9,25,4,95,9,80,9,134,3,48,4,
	0,108,58,100,12,0,95,1,95,2,95,3,95,4,
	95,5,95,6,95,8,100,100,95,7,95,9,100,100,
	100,100,95,10,112,16,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HDRAWSHAPE )
{
   static const BYTE pcode[] =
   {
	13,3,255,116,132,0,9,103,5,0,100,69,28,17,
	73,108,2,100,48,3,0,103,5,0,112,0,12,1,
	68,80,3,126,2,1,0,103,5,0,100,8,21,31,
	5,73,95,3,29,228,2,103,5,0,100,8,28,41,
	48,4,0,108,5,100,12,0,106,11,72,68,114,97,
	119,83,104,97,112,101,0,48,6,0,108,7,100,12,
	0,112,0,4,1,0,112,2,82,5,0,133,167,0,
	95,3,31,39,48,25,0,103,5,0,100,106,7,83,
	84,65,84,73,67,0,95,2,106,9,119,105,110,99,
	108,97,115,115,0,4,1,0,9,112,5,25,3,100,
	73,134,1,95,3,31,37,48,8,0,103,5,0,100,
	100,95,2,106,5,111,80,101,110,0,106,7,111,66,
	114,117,115,104,0,4,2,0,9,9,112,6,25,3,
	100,73,134,2,95,3,31,51,48,8,0,103,5,0,
	100,100,95,2,106,8,110,99,83,116,121,108,101,0,
	106,8,110,98,83,116,121,108,101,0,106,8,110,102,
	83,116,121,108,101,0,4,3,0,9,9,112,6,25,
	3,100,73,134,3,95,3,31,34,48,8,0,103,5,
	0,100,100,95,2,106,11,110,67,117,114,118,97,116,
	117,114,101,0,4,1,0,9,9,112,6,25,3,100,
	73,134,4,95,3,31,43,48,8,0,103,5,0,100,
	100,95,2,106,8,110,66,111,114,100,101,114,0,106,
	10,108,110,111,66,111,114,100,101,114,0,4,2,0,
	9,9,112,6,25,3,100,73,134,5,95,3,31,33,
	48,8,0,103,5,0,100,100,95,2,106,10,98,114,
	117,115,104,70,105,108,108,0,4,1,0,9,9,112,
	6,25,3,100,73,134,6,95,3,31,42,48,8,0,
	103,5,0,100,100,95,2,106,7,98,67,108,105,99,
	107,0,106,10,98,68,98,108,67,108,105,99,107,0,
	4,2,0,9,9,112,6,25,3,100,73,134,9,95,
	3,28,24,48,9,0,103,5,0,106,4,78,101,119,
	0,108,61,14,95,2,9,112,4,25,22,48,11,0,
	103,5,0,106,4,78,101,119,0,108,61,14,95,2,
	9,112,4,73,134,11,95,3,28,29,48,9,0,103,
	5,0,106,9,65,99,116,105,118,97,116,101,0,108,
	62,14,95,2,9,112,4,25,27,48,11,0,103,5,
	0,106,9,65,99,116,105,118,97,116,101,0,108,62,
	14,95,2,9,112,4,73,134,12,95,3,28,26,48,
	9,0,103,5,0,106,6,80,97,105,110,116,0,108,
	63,14,95,2,9,112,4,25,24,48,11,0,103,5,
	0,106,6,80,97,105,110,116,0,108,63,14,95,2,
	9,112,4,73,134,13,95,3,28,29,48,9,0,103,
	5,0,106,9,83,101,116,67,111,108,111,114,0,108,
	64,14,95,2,9,112,4,25,27,48,11,0,103,5,
	0,106,9,83,101,116,67,111,108,111,114,0,108,64,
	14,95,2,9,112,4,73,134,14,95,3,28,30,48,
	9,0,103,5,0,106,10,67,117,114,118,97,116,117,
	114,101,0,108,65,14,95,2,9,112,4,25,28,48,
	11,0,103,5,0,106,10,67,117,114,118,97,116,117,
	114,101,0,108,65,14,95,2,9,112,4,73,95,3,
	28,26,108,12,100,48,3,0,103,5,0,112,0,20,
	1,48,13,0,103,5,0,112,0,73,25,11,48,14,
	0,103,5,0,112,0,73,108,15,100,48,3,0,103,
	5,0,112,0,12,1,80,1,108,16,100,95,1,106,
	10,73,110,105,116,67,108,97,115,115,0,12,2,28,
	32,48,17,0,95,1,108,18,100,12,0,112,1,73,
	25,17,108,15,100,48,3,0,103,5,0,112,0,12,
	1,80,1,108,19,100,12,0,121,15,28,10,103,5,
	0,108,0,14,121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDRAWSHAPE_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,17,102,80,18,133,190,0,95,10,80,10,134,
	2,48,66,0,95,18,89,17,0,2,0,0,0,48,
	30,0,95,1,95,2,112,1,6,112,1,73,134,4,
	48,4,0,48,29,0,95,18,112,0,95,1,95,2,
	92,13,95,3,95,4,95,5,95,6,100,95,16,95,
	7,48,67,0,95,18,112,0,100,95,8,95,9,112,
	14,73,134,8,48,68,0,95,18,95,17,100,5,28,
	6,92,2,25,4,95,17,112,1,73,134,10,48,69,
	0,95,18,95,11,112,1,73,134,11,48,70,0,95,
	18,95,12,112,1,73,134,12,48,71,0,95,18,95,
	14,112,1,73,134,13,48,72,0,95,18,95,15,112,
	1,73,134,14,48,73,0,95,18,95,13,112,1,73,
	134,15,48,74,0,95,18,48,75,0,95,18,112,0,
	48,76,0,95,18,112,0,112,2,73,134,17,48,39,
	0,95,18,112,0,73,134,19,48,77,0,95,18,112,
	0,100,8,28,43,134,20,48,35,0,95,18,48,36,
	0,108,37,100,12,0,48,78,0,95,18,112,0,48,
	79,0,95,18,112,0,48,75,0,95,18,112,0,112,
	3,112,1,73,134,25,95,18,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDRAWSHAPE_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,220,0,108,40,100,48,41,
	0,48,42,0,95,1,112,0,112,0,12,1,31,81,
	134,2,48,43,0,95,1,108,44,100,48,41,0,48,
	42,0,95,1,112,0,112,0,48,45,0,95,1,112,
	0,48,46,0,95,1,112,0,48,47,0,95,1,112,
	0,48,48,0,95,1,112,0,48,49,0,95,1,112,
	0,48,50,0,95,1,112,0,12,7,112,1,73,134,
	3,48,51,0,95,1,112,0,73,134,5,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDRAWSHAPE_SETCOLOR )
{
   static const BYTE pcode[] =
   {
	13,1,3,102,80,4,133,230,0,48,80,0,95,4,
	48,36,0,108,81,100,12,0,95,1,48,82,0,95,
	4,112,0,112,2,112,1,73,134,1,48,74,0,48,
	29,0,95,4,112,0,95,1,95,2,112,2,73,134,
	2,108,40,100,95,3,12,1,31,18,134,3,108,83,
	100,48,41,0,95,4,112,0,92,5,20,2,134,5,
	100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDRAWSHAPE_CURVATURE )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,240,0,95,1,100,69,29,
	129,0,134,1,48,73,0,95,2,95,1,112,1,73,
	134,2,108,83,100,48,41,0,48,42,0,95,2,112,
	0,112,0,93,5,2,48,47,0,95,2,112,0,48,
	48,0,95,2,112,0,48,49,0,95,2,112,0,48,
	50,0,95,2,112,0,20,6,134,3,108,84,100,48,
	41,0,48,42,0,95,2,112,0,112,0,122,48,47,
	0,95,2,112,0,48,48,0,95,2,112,0,48,47,
	0,95,2,112,0,48,49,0,95,2,112,0,72,48,
	48,0,95,2,112,0,48,50,0,95,2,112,0,72,
	20,6,134,5,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HDRAWSHAPE_PAINT )
{
   static const BYTE pcode[] =
   {
	13,8,1,102,80,2,133,249,0,108,52,100,95,1,
	12,1,80,3,134,1,95,3,92,3,1,80,4,134,
	2,95,3,92,4,1,80,6,95,3,92,5,1,80,
	7,134,3,95,3,92,6,1,80,8,95,3,92,7,
	1,80,9,134,5,108,85,100,95,4,48,86,0,95,
	2,112,0,12,2,80,5,134,6,108,53,100,95,4,
	48,41,0,48,54,0,95,2,112,0,112,0,20,2,
	134,7,48,77,0,95,2,112,0,100,69,28,5,26,
	155,0,134,27,48,86,0,95,2,112,0,92,2,5,
	28,36,134,28,48,87,0,95,2,112,0,100,69,28,
	23,134,29,108,53,100,95,4,48,41,0,48,87,0,
	95,2,112,0,112,0,20,2,134,33,48,82,0,95,
	2,112,0,92,10,69,21,31,13,73,48,86,0,95,
	2,112,0,92,2,5,28,25,134,34,108,53,100,95,
	4,48,41,0,48,88,0,95,2,112,0,112,0,20,
	2,25,18,134,36,108,53,100,95,4,108,89,100,92,
	5,12,1,20,2,134,38,108,90,100,95,4,95,6,
	128,1,0,95,7,128,1,0,95,8,95,9,48,91,
	0,95,2,112,0,48,91,0,95,2,112,0,20,7,
	134,40,108,85,100,95,4,95,5,20,2,134,41,100,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( RECT )
{
   static const BYTE pcode[] =
   {
	13,0,7,133,42,1,95,6,100,5,28,7,134,1,
	9,80,6,134,4,48,4,0,108,1,100,12,0,95,
	1,95,2,95,3,95,4,95,5,95,6,95,7,112,
	7,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( HCONTAINER )
{
   static const BYTE pcode[] =
   {
	13,3,255,116,132,0,9,103,6,0,100,69,28,17,
	73,108,2,100,48,3,0,103,6,0,112,0,12,1,
	68,80,3,126,2,1,0,103,6,0,100,8,21,31,
	5,73,95,3,29,232,3,103,6,0,100,8,28,41,
	48,4,0,108,5,100,12,0,106,11,72,67,111,110,
	116,97,105,110,101,114,0,48,6,0,108,7,100,12,
	0,112,0,4,1,0,112,2,82,6,0,133,54,1,
	95,3,31,39,48,25,0,103,6,0,100,106,7,83,
	84,65,84,73,67,0,95,2,106,9,119,105,110,99,
	108,97,115,115,0,4,1,0,9,112,5,25,3,100,
	73,134,1,95,3,31,37,48,8,0,103,6,0,100,
	100,95,2,106,5,111,80,101,110,0,106,7,111,66,
	114,117,115,104,0,4,2,0,9,9,112,6,25,3,
	100,73,134,2,95,3,31,32,48,8,0,103,6,0,
	100,92,3,95,2,106,8,110,99,83,116,121,108,101,
	0,4,1,0,9,9,112,6,25,3,100,73,134,3,
	95,3,31,31,48,8,0,103,6,0,100,100,95,2,
	106,8,110,66,111,114,100,101,114,0,4,1,0,9,
	9,112,6,25,3,100,73,134,4,95,3,31,33,48,
	8,0,103,6,0,100,120,95,2,106,10,108,110,111,
	66,111,114,100,101,114,0,4,1,0,9,9,112,6,
	25,3,100,73,134,5,95,3,31,29,48,8,0,103,
	6,0,100,100,95,2,106,6,98,76,111,97,100,0,
	4,1,0,9,9,112,6,25,3,100,73,134,6,95,
	3,31,42,48,8,0,103,6,0,100,100,95,2,106,
	7,98,67,108,105,99,107,0,106,10,98,68,98,108,
	67,108,105,99,107,0,4,2,0,9,9,112,6,25,
	3,100,73,134,8,95,3,31,31,48,8,0,103,6,
	0,100,9,95,2,106,8,108,67,114,101,97,116,101,
	0,4,1,0,9,9,112,6,25,3,100,73,134,9,
	95,3,31,32,48,8,0,103,6,0,100,120,92,8,
	106,9,120,86,105,115,105,98,108,101,0,4,1,0,
	9,9,112,6,25,3,100,73,134,10,95,3,31,32,
	48,8,0,103,6,0,100,9,92,8,106,9,108,84,
	65,66,83,84,79,80,0,4,1,0,9,9,112,6,
	25,3,100,73,134,13,95,3,28,24,48,9,0,103,
	6,0,106,4,78,101,119,0,108,94,14,95,2,9,
	112,4,25,22,48,11,0,103,6,0,106,4,78,101,
	119,0,108,94,14,95,2,9,112,4,73,134,15,95,
	3,28,29,48,9,0,103,6,0,106,9,65,99,116,
	105,118,97,116,101,0,108,95,14,95,2,9,112,4,
	25,27,48,11,0,103,6,0,106,9,65,99,116,105,
	118,97,116,101,0,108,95,14,95,2,9,112,4,73,
	134,16,95,3,28,25,48,9,0,103,6,0,106,5,
	73,110,105,116,0,108,96,14,95,2,9,112,4,25,
	23,48,11,0,103,6,0,106,5,73,110,105,116,0,
	108,96,14,95,2,9,112,4,73,134,17,95,3,28,
	43,48,97,0,103,6,0,106,7,67,114,101,97,116,
	101,0,89,19,0,1,0,0,0,95,1,73,48,98,
	0,95,1,120,112,1,6,95,2,9,112,4,25,41,
	48,99,0,103,6,0,106,7,67,114,101,97,116,101,
	0,89,19,0,1,0,0,0,95,1,73,48,98,0,
	95,1,120,112,1,6,95,2,9,112,4,73,134,18,
	95,3,28,28,48,9,0,103,6,0,106,8,111,110,
	69,118,101,110,116,0,108,100,14,95,2,9,112,4,
	25,26,48,11,0,103,6,0,106,8,111,110,69,118,
	101,110,116,0,108,100,14,95,2,9,112,4,73,134,
	19,95,3,28,26,48,9,0,103,6,0,106,6,80,
	97,105,110,116,0,108,101,14,95,2,9,112,4,25,
	24,48,11,0,103,6,0,106,6,80,97,105,110,116,
	0,108,101,14,95,2,9,112,4,73,134,20,95,3,
	28,28,48,9,0,103,6,0,106,8,86,105,115,105,
	98,108,101,0,108,102,14,92,33,9,112,4,25,26,
	48,11,0,103,6,0,106,8,86,105,115,105,98,108,
	101,0,108,102,14,92,33,9,112,4,73,95,3,28,
	26,48,9,0,103,6,0,106,9,95,86,105,115,105,
	98,108,101,0,108,102,14,112,2,25,24,48,11,0,
	103,6,0,106,9,95,86,105,115,105,98,108,101,0,
	108,102,14,112,2,73,95,3,28,26,108,12,100,48,
	3,0,103,6,0,112,0,20,1,48,13,0,103,6,
	0,112,0,73,25,11,48,14,0,103,6,0,112,0,
	73,108,15,100,48,3,0,103,6,0,112,0,12,1,
	80,1,108,16,100,95,1,106,10,73,110,105,116,67,
	108,97,115,115,0,12,2,28,32,48,17,0,95,1,
	108,18,100,12,0,112,1,73,25,17,108,15,100,48,
	3,0,103,6,0,112,0,12,1,80,1,108,19,100,
	12,0,121,15,28,10,103,6,0,108,0,14,121,178,
	95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCONTAINER_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,17,102,80,18,133,81,1,48,103,0,95,18,
	95,3,97,0,0,1,0,5,112,1,73,134,1,48,
	66,0,95,18,89,17,0,2,0,0,0,48,30,0,
	95,1,95,2,112,1,6,112,1,73,134,2,92,13,
	95,3,97,0,0,1,0,5,28,9,97,0,0,1,
	0,25,3,121,72,108,104,100,95,3,93,0,1,12,
	2,72,80,3,134,4,48,4,0,48,29,0,95,18,
	112,0,95,1,95,2,95,3,95,4,95,5,95,6,
	95,7,100,95,11,95,9,48,67,0,95,18,112,0,
	100,95,13,95,14,112,14,73,134,7,48,105,0,95,
	18,9,95,8,100,5,28,11,73,95,3,97,0,0,
	1,0,35,28,6,92,3,25,4,95,8,112,1,73,
	134,8,48,69,0,95,18,95,10,100,5,28,5,9,
	25,4,95,10,112,1,73,134,10,48,68,0,95,18,
	95,12,100,5,28,6,92,2,25,4,95,12,112,1,
	73,134,11,48,106,0,95,18,95,15,112,1,73,134,
	12,48,107,0,95,18,95,16,112,1,73,134,13,48,
	108,0,95,18,95,17,112,1,73,134,15,48,74,0,
	95,18,48,75,0,95,18,112,0,48,76,0,95,18,
	112,0,112,2,73,134,16,48,39,0,95,18,112,0,
	73,134,17,48,109,0,95,18,112,0,100,69,28,19,
	134,19,48,110,0,48,109,0,95,18,112,0,95,18,
	112,1,73,134,21,48,35,0,95,18,48,36,0,108,
	37,100,12,0,121,122,108,38,100,92,20,12,1,112,
	3,112,1,73,134,23,95,18,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCONTAINER_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,109,1,108,40,100,48,41,
	0,48,42,0,95,1,112,0,112,0,12,1,32,231,
	0,134,2,48,43,0,95,1,108,44,100,48,41,0,
	48,42,0,95,1,112,0,112,0,48,45,0,95,1,
	112,0,48,46,0,95,1,112,0,48,47,0,95,1,
	112,0,48,48,0,95,1,112,0,48,49,0,95,1,
	112,0,48,50,0,95,1,112,0,12,7,112,1,73,
	134,3,48,111,0,95,1,112,0,32,140,0,134,4,
	108,112,100,48,41,0,95,1,112,0,48,41,0,95,
	1,112,0,106,1,0,20,3,134,5,48,113,0,95,
	1,122,112,1,73,134,6,108,114,100,48,41,0,95,
	1,112,0,95,1,20,2,134,7,108,115,100,48,41,
	0,95,1,112,0,20,1,134,8,48,116,0,95,1,
	120,112,1,73,134,9,9,108,40,100,48,42,0,48,
	42,0,95,1,112,0,112,0,12,1,28,18,73,48,
	117,0,48,42,0,95,1,112,0,112,0,92,10,16,
	28,23,134,10,48,14,0,95,1,112,0,73,134,11,
	48,98,0,95,1,120,112,1,73,134,14,48,51,0,
	95,1,112,0,73,134,16,48,118,0,95,1,112,0,
	31,23,134,17,48,14,0,95,1,112,0,73,134,18,
	48,98,0,95,1,120,112,1,73,134,20,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCONTAINER_INIT )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,133,1,48,111,0,95,1,
	112,0,31,82,134,1,48,51,0,48,29,0,95,1,
	112,0,112,0,73,134,2,108,112,100,48,41,0,95,
	1,112,0,48,41,0,95,1,112,0,106,1,0,20,
	3,134,3,48,113,0,95,1,122,112,1,73,134,4,
	108,114,100,48,41,0,95,1,112,0,95,1,20,2,
	134,5,108,115,100,48,41,0,95,1,112,0,20,1,
	134,8,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCONTAINER_ONEVENT )
{
   static const BYTE pcode[] =
   {
	13,2,3,102,80,4,133,147,1,48,119,0,95,4,
	112,0,100,69,28,45,134,1,9,48,110,0,48,119,
	0,95,4,112,0,95,4,95,1,95,2,95,3,112,
	4,21,80,5,100,69,28,8,73,95,5,92,255,69,
	28,7,134,2,121,110,7,134,5,95,1,92,15,8,
	28,8,134,6,92,255,110,7,134,7,95,1,92,20,
	8,28,7,134,8,121,110,7,134,10,48,120,0,95,
	4,112,0,29,182,0,134,11,95,1,92,7,8,28,
	34,134,12,108,121,100,48,42,0,95,4,112,0,48,
	41,0,95,4,112,0,100,48,122,0,95,4,112,0,
	20,4,26,141,0,134,13,95,1,93,1,1,8,28,
	121,134,14,95,2,92,40,5,28,27,134,15,108,121,
	100,48,42,0,95,4,112,0,48,41,0,95,4,112,
	0,100,122,20,4,25,82,134,16,95,2,92,38,5,
	28,28,134,17,108,121,100,48,42,0,95,4,112,0,
	48,41,0,95,4,112,0,100,92,255,20,4,25,47,
	134,18,95,2,92,9,5,28,38,134,19,108,121,100,
	48,42,0,95,4,112,0,48,41,0,95,4,112,0,
	100,108,123,100,9,120,12,2,28,6,92,255,25,3,
	122,20,4,134,21,121,110,7,134,22,95,1,93,5,
	1,5,73,134,25,48,124,0,48,29,0,95,4,112,
	0,95,1,95,2,95,3,112,3,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCONTAINER_VISIBLE )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,176,1,95,1,100,69,28,
	42,134,1,95,1,28,14,134,2,48,125,0,95,2,
	112,0,73,25,12,134,4,48,126,0,95,2,112,0,
	73,134,6,48,127,0,95,2,95,1,112,1,73,134,
	8,48,128,0,95,2,112,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HCONTAINER_PAINT )
{
   static const BYTE pcode[] =
   {
	13,7,1,102,80,2,133,192,1,108,52,100,95,1,
	12,1,80,3,134,1,95,3,92,3,1,80,4,134,
	2,95,3,92,4,1,80,5,134,3,95,3,92,5,
	1,80,6,134,4,95,3,92,6,1,80,7,134,5,
	95,3,92,7,1,80,8,134,7,108,53,100,95,4,
	48,41,0,48,54,0,95,2,112,0,112,0,20,2,
	134,9,48,77,0,95,2,112,0,100,69,29,93,1,
	134,10,108,85,100,95,4,48,86,0,95,2,112,0,
	20,2,134,11,48,129,0,95,2,112,0,32,197,0,
	134,12,48,77,0,95,2,112,0,121,8,28,26,134,
	13,108,130,100,95,4,95,5,95,6,95,7,95,8,
	92,5,92,15,20,7,26,179,0,134,14,48,77,0,
	95,2,112,0,122,8,28,26,134,15,108,130,100,95,
	4,95,5,95,6,95,7,95,8,92,10,92,15,20,
	7,26,142,0,134,16,48,77,0,95,2,112,0,92,
	2,8,28,25,134,17,108,130,100,95,4,95,5,95,
	6,95,7,95,8,92,6,92,15,20,7,25,104,134,
	19,108,130,100,95,4,95,5,95,6,95,7,95,8,
	92,8,92,2,20,7,134,20,108,130,100,95,4,95,
	5,95,6,95,7,95,8,122,92,8,20,7,134,21,
	108,130,100,95,4,95,5,95,8,95,7,95,6,92,
	8,122,20,7,134,22,108,130,100,95,4,95,5,95,
	8,95,7,95,6,122,92,4,20,7,25,21,134,25,
	108,130,100,95,4,95,5,95,6,95,7,95,8,121,
	121,20,7,134,27,48,86,0,95,2,112,0,122,69,
	28,58,134,28,48,87,0,95,2,112,0,100,69,28,
	81,134,29,108,131,100,95,4,95,5,128,2,0,95,
	6,128,2,0,95,7,128,254,255,95,8,128,254,255,
	48,41,0,48,87,0,95,2,112,0,112,0,20,6,
	25,38,134,32,108,131,100,95,4,95,5,128,2,0,
	95,6,128,2,0,95,7,128,254,255,95,8,128,254,
	255,108,89,100,92,5,12,1,20,6,134,37,122,110,
	7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,132,0,6,0,7
   };

   hb_vmExecute( pcode, symbols );
}

