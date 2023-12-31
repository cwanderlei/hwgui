/*
 * xHarbour build 1.2.1 Intl. (SimpLex) (Rev. 9376)
 * Generated C source code from <source\\hsplash.prg>
 * Command: /D__EXPORT__ /DHB_FM_STATISTICS_OFF /iinclude;d:\xHarbour\include /q0 /w0 /es2 /n1 /gc0 source\hsplash.prg -osource\hsplash.c 
 * Created: 2012.04.25 20:42:49 (Borland C++ 5.5.1 (32 bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "source\\hsplash.prg"

HB_FUNC( HSPLASH );
HB_FUNC_STATIC( HSPLASH_CREATE );
HB_FUNC_STATIC( HSPLASH_COUNTSECONDS );
HB_FUNC_INITSTATICS();

/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( __CLSISACTIVE );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HBITMAP );
HB_FUNC_EXTERN( HDIALOG );
HB_FUNC_EXTERN( HSAYBMP );
HB_FUNC_EXTERN( HTIMER );
HB_FUNC_EXTERN( ENDDIALOG );
HB_FUNC_EXTERN( GETMODALHANDLE );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HSPLASH )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HSPLASH", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSPLASH )}, &ModuleFakeDyn },
{ "__CLSISACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSISACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MODMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HSPLASH_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSPLASH_CREATE )}, &ModuleFakeDyn },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HSPLASH_COUNTSECONDS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HSPLASH_COUNTSECONDS )}, &ModuleFakeDyn },
{ "MODINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CLOSE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "ADDFILE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBITMAP )}, NULL },
{ "ADDRESOURCE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_ODLG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDIALOG )}, NULL },
{ "COUNTSECONDS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HSAYBMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HSAYBMP )}, NULL },
{ "_NAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OTIMER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OTIMER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HTIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HTIMER )}, NULL },
{ "ENDDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ENDDIALOG )}, NULL },
{ "GETMODALHANDLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETMODALHANDLE )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_HSPLASH )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HSPLASH
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HSPLASH )
   #include "hbiniseg.h"
#endif

HB_FUNC( HSPLASH )
{
   static const BYTE pcode[] =
   {
	13,3,255,116,43,0,9,103,1,0,100,69,28,17,
	73,108,2,100,48,3,0,103,1,0,112,0,12,1,
	68,80,3,126,2,1,0,103,1,0,100,8,21,31,
	5,73,95,3,29,174,1,103,1,0,100,8,28,38,
	48,4,0,108,5,100,12,0,106,8,72,83,112,108,
	97,115,104,0,48,6,0,108,7,100,12,0,112,0,
	4,1,0,112,2,82,1,0,133,18,0,95,3,31,
	30,48,8,0,103,1,0,100,100,95,2,106,7,111,
	84,105,109,101,114,0,4,1,0,9,9,112,6,25,
	3,100,73,134,1,95,3,31,28,48,8,0,103,1,
	0,100,100,95,2,106,5,111,68,108,103,0,4,1,
	0,9,9,112,6,25,3,100,73,134,3,95,3,28,
	30,48,9,0,103,1,0,106,7,67,114,101,97,116,
	101,0,108,10,14,95,2,128,16,0,9,112,4,25,
	28,48,11,0,103,1,0,106,7,67,114,101,97,116,
	101,0,108,10,14,95,2,128,16,0,9,112,4,73,
	134,4,95,3,28,33,48,9,0,103,1,0,106,13,
	67,111,117,110,116,83,101,99,111,110,100,115,0,108,
	12,14,95,2,9,112,4,25,31,48,11,0,103,1,
	0,106,13,67,111,117,110,116,83,101,99,111,110,100,
	115,0,108,12,14,95,2,9,112,4,73,134,5,95,
	3,28,48,48,13,0,103,1,0,106,8,82,101,108,
	101,97,115,101,0,89,23,0,1,0,0,0,95,1,
	73,48,14,0,48,15,0,95,1,112,0,112,0,6,
	95,2,9,112,4,25,46,48,16,0,103,1,0,106,
	8,82,101,108,101,97,115,101,0,89,23,0,1,0,
	0,0,95,1,73,48,14,0,48,15,0,95,1,112,
	0,112,0,6,95,2,9,112,4,73,95,3,28,26,
	108,17,100,48,3,0,103,1,0,112,0,20,1,48,
	18,0,103,1,0,112,0,73,25,11,48,19,0,103,
	1,0,112,0,73,108,20,100,48,3,0,103,1,0,
	112,0,12,1,80,1,108,21,100,95,1,106,10,73,
	110,105,116,67,108,97,115,115,0,12,2,28,32,48,
	22,0,95,1,108,23,100,12,0,112,1,73,25,17,
	108,20,100,48,3,0,103,1,0,112,0,12,1,80,
	1,108,24,100,12,0,121,15,28,10,103,1,0,108,
	0,14,121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSPLASH_CREATE )
{
   static const BYTE pcode[] =
   {
	13,4,6,102,80,7,133,31,0,108,25,100,95,2,
	12,1,21,31,7,73,95,2,100,8,28,10,126,2,
	208,7,95,2,25,7,95,2,21,80,2,73,134,2,
	95,3,100,8,21,31,6,73,95,3,68,28,26,134,
	3,48,26,0,108,27,100,12,0,95,1,100,100,95,
	4,95,5,112,5,80,10,25,24,134,5,48,28,0,
	108,27,100,12,0,95,1,100,100,95,4,95,5,112,
	5,80,10,134,8,95,4,100,5,28,11,48,29,0,
	95,10,112,0,25,4,95,4,80,8,134,9,95,5,
	100,5,28,11,48,30,0,95,10,112,0,25,4,95,
	5,80,9,134,11,95,4,100,5,21,31,7,73,95,
	5,100,5,28,91,134,14,48,31,0,95,7,48,4,
	0,108,32,100,12,0,92,11,159,0,8,64,144,0,
	0,0,0,121,121,95,8,95,9,106,1,0,100,89,
	28,0,1,0,2,0,7,0,2,0,48,33,0,95,
	255,95,254,48,15,0,95,255,112,0,112,2,6,100,
	100,100,100,100,100,9,95,10,100,9,100,100,9,100,
	100,9,112,25,112,1,73,26,139,0,134,19,48,31,
	0,95,7,48,4,0,108,32,100,12,0,92,11,159,
	0,8,64,144,0,0,0,0,121,121,95,8,95,9,
	106,1,0,100,89,28,0,1,0,2,0,7,0,2,
	0,48,33,0,95,255,95,254,48,15,0,95,255,112,
	0,112,2,6,100,100,100,100,100,100,9,100,100,9,
	100,100,9,100,100,9,112,25,112,1,73,134,20,48,
	4,0,108,34,100,12,0,100,100,121,121,95,4,95,
	5,95,1,9,100,100,100,100,100,9,121,95,6,112,
	16,80,10,48,35,0,95,10,106,7,66,105,116,109,
	97,112,0,112,1,73,134,23,48,36,0,48,15,0,
	95,7,112,0,95,2,121,35,112,1,73,134,24,48,
	37,0,48,38,0,95,7,112,0,112,0,73,134,26,
	95,7,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HSPLASH_COUNTSECONDS )
{
   static const BYTE pcode[] =
   {
	13,1,2,102,80,3,133,61,0,48,39,0,95,3,
	48,4,0,108,40,100,12,0,95,2,100,95,1,89,
	18,0,1,0,0,0,108,41,100,108,42,100,12,0,
	12,1,6,112,4,112,1,73,48,35,0,48,38,0,
	95,3,112,0,106,9,58,58,111,84,105,109,101,114,
	0,112,1,73,134,2,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,43,0,1,0,7
   };

   hb_vmExecute( pcode, symbols );
}

