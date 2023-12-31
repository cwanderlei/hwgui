/*
 * xHarbour build 1.2.1 Intl. (SimpLex) (Rev. 9376)
 * Generated C source code from <source\\hwinprn.prg>
 * Command: /D__EXPORT__ /DHB_FM_STATISTICS_OFF /iinclude;d:\xHarbour\include /q0 /w0 /es2 /n1 /gc0 source\hwinprn.prg -osource\hwinprn.c 
 * Created: 2012.04.25 20:42:52 (Borland C++ 5.5.1 (32 bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "source\\hwinprn.prg"

HB_FUNC( HWINPRN );
HB_FUNC_STATIC( HWINPRN_NEW );
HB_FUNC_STATIC( HWINPRN_INITVALUES );
HB_FUNC_STATIC( HWINPRN_SETMODE );
HB_FUNC_STATIC( HWINPRN_STARTDOC );
HB_FUNC_STATIC( HWINPRN_NEXTPAGE );
HB_FUNC_STATIC( HWINPRN_PRINTLINE );
HB_FUNC_STATIC( HWINPRN_PRINTTEXT );
HB_FUNC_STATIC( HWINPRN_PUTCODE );
HB_FUNC_STATIC( HWINPRN_ENDDOC );
HB_FUNC_STATIC( HWINPRN_END );
HB_FUNC_INITSTATICS();

/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( __CLSISACTIVE );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HOBJECT );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HPRINTER );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( HB_TRANSLATE );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HWINPRN )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HWINPRN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWINPRN )}, &ModuleFakeDyn },
{ "__CLSISACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSISACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HOBJECT )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MODMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWINPRN_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWINPRN_NEW )}, &ModuleFakeDyn },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWINPRN_INITVALUES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWINPRN_INITVALUES )}, &ModuleFakeDyn },
{ "HWINPRN_SETMODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWINPRN_SETMODE )}, &ModuleFakeDyn },
{ "HWINPRN_STARTDOC", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWINPRN_STARTDOC )}, &ModuleFakeDyn },
{ "HWINPRN_NEXTPAGE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWINPRN_NEXTPAGE )}, &ModuleFakeDyn },
{ "HWINPRN_PRINTLINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWINPRN_PRINTLINE )}, &ModuleFakeDyn },
{ "HWINPRN_PRINTTEXT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWINPRN_PRINTTEXT )}, &ModuleFakeDyn },
{ "HWINPRN_PUTCODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWINPRN_PUTCODE )}, &ModuleFakeDyn },
{ "HWINPRN_ENDDOC", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWINPRN_ENDDOC )}, &ModuleFakeDyn },
{ "HWINPRN_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HWINPRN_END )}, &ModuleFakeDyn },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "_OPRINTER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HPRINTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPRINTER )}, NULL },
{ "OPRINTER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CPFROM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CPTO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LELITE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LCOND", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NLINEINCH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LBOLD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LITALIC", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LUNDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LCHANGED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INITVALUES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LPAGESTART", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NSTDHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CPRINTERNAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NSTDHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CPRINTERNAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHRES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NVRES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "GETTEXTWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "RELEASE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LELITE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LCOND", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NLINEHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NLINED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLINEINCH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLINEHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LBOLD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LITALIC", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LUNDER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_NCHARW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LDOCSTART", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STARTDOC", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NEXTPAGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LDOCSTART", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ENDPAGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LPAGESTART", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "STARTPAGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETMODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_Y", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLINED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_LFIRSTLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "Y", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_X", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LFIRSTLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "PRINTTEXT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "PUTCODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "LINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "X", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NCHARW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LCHANGED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SAY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CPFROM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CPTO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_TRANSLATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_TRANSLATE )}, NULL },
{ "ENDDOC", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LPREVIEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "PREVIEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "(_INITSTATICS00003)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_HWINPRN )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HWINPRN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HWINPRN )
   #include "hbiniseg.h"
#endif

HB_FUNC( HWINPRN )
{
   static const BYTE pcode[] =
   {
	13,3,255,116,103,0,9,103,2,0,100,69,28,17,
	73,108,2,100,48,3,0,103,2,0,112,0,12,1,
	68,80,3,126,2,1,0,103,2,0,100,8,21,31,
	5,73,95,3,29,18,6,103,2,0,100,8,28,38,
	48,4,0,108,5,100,12,0,106,8,72,87,105,110,
	80,114,110,0,48,6,0,108,7,100,12,0,112,0,
	4,1,0,112,2,82,2,0,133,28,0,95,3,31,
	36,48,8,0,103,2,0,100,100,95,2,128,64,0,
	106,11,110,83,116,100,72,101,105,103,104,116,0,4,
	1,0,9,112,5,25,3,100,73,134,1,95,3,31,
	38,48,8,0,103,2,0,100,100,95,2,128,64,0,
	106,13,99,80,114,105,110,116,101,114,78,97,109,101,
	0,4,1,0,9,112,5,25,3,100,73,134,2,95,
	3,31,32,48,9,0,103,2,0,100,100,95,2,106,
	9,111,80,114,105,110,116,101,114,0,4,1,0,9,
	9,112,6,25,3,100,73,134,3,95,3,31,29,48,
	9,0,103,2,0,100,100,95,2,106,6,111,70,111,
	110,116,0,4,1,0,9,9,112,6,25,3,100,73,
	134,4,95,3,31,44,48,9,0,103,2,0,100,100,
	95,2,106,12,110,76,105,110,101,72,101,105,103,104,
	116,0,106,7,110,76,105,110,101,100,0,4,2,0,
	9,9,112,6,25,3,100,73,134,5,95,3,31,30,
	48,9,0,103,2,0,100,100,95,2,106,7,110,67,
	104,97,114,87,0,4,1,0,9,9,112,6,25,3,
	100,73,134,6,95,3,31,29,48,9,0,103,2,0,
	100,100,95,2,106,2,120,0,106,2,121,0,4,2,
	0,9,9,112,6,25,3,100,73,134,7,95,3,31,
	30,48,9,0,103,2,0,100,9,95,2,106,7,108,
	69,108,105,116,101,0,4,1,0,9,9,112,6,25,
	3,100,73,134,8,95,3,31,29,48,9,0,103,2,
	0,100,9,95,2,106,6,108,67,111,110,100,0,4,
	1,0,9,9,112,6,25,3,100,73,134,9,95,3,
	31,34,48,9,0,103,2,0,100,92,6,95,2,106,
	10,110,76,105,110,101,73,110,99,104,0,4,1,0,
	9,9,112,6,25,3,100,73,134,10,95,3,31,29,
	48,9,0,103,2,0,100,9,95,2,106,6,108,66,
	111,108,100,0,4,1,0,9,9,112,6,25,3,100,
	73,134,11,95,3,31,31,48,9,0,103,2,0,100,
	9,95,2,106,8,108,73,116,97,108,105,99,0,4,
	1,0,9,9,112,6,25,3,100,73,134,12,95,3,
	31,30,48,9,0,103,2,0,100,9,95,2,106,7,
	108,85,110,100,101,114,0,4,1,0,9,9,112,6,
	25,3,100,73,134,13,95,3,31,32,48,9,0,103,
	2,0,100,9,95,2,106,9,108,67,104,97,110,103,
	101,100,0,4,1,0,9,9,112,6,25,3,100,73,
	134,15,95,3,31,37,48,9,0,103,2,0,100,100,
	95,2,106,7,99,112,70,114,111,109,0,106,5,99,
	112,84,111,0,4,2,0,9,9,112,6,25,3,100,
	73,134,16,95,3,31,29,48,9,0,103,2,0,100,
	92,5,95,2,106,5,110,84,111,112,0,4,1,0,
	9,9,112,6,25,3,100,73,134,17,95,3,31,32,
	48,9,0,103,2,0,100,92,5,95,2,106,8,110,
	66,111,116,116,111,109,0,4,1,0,9,9,112,6,
	25,3,100,73,134,18,95,3,31,30,48,9,0,103,
	2,0,100,92,5,95,2,106,6,110,76,101,102,116,
	0,4,1,0,9,9,112,6,25,3,100,73,134,19,
	95,3,31,31,48,9,0,103,2,0,100,92,5,95,
	2,106,7,110,82,105,103,104,116,0,4,1,0,9,
	9,112,6,25,3,100,73,134,22,95,3,28,24,48,
	10,0,103,2,0,106,4,78,101,119,0,108,11,14,
	95,2,9,112,4,25,22,48,12,0,103,2,0,106,
	4,78,101,119,0,108,11,14,95,2,9,112,4,73,
	134,23,95,3,28,31,48,10,0,103,2,0,106,11,
	73,110,105,116,86,97,108,117,101,115,0,108,13,14,
	95,2,9,112,4,25,29,48,12,0,103,2,0,106,
	11,73,110,105,116,86,97,108,117,101,115,0,108,13,
	14,95,2,9,112,4,73,134,24,95,3,28,28,48,
	10,0,103,2,0,106,8,83,101,116,77,111,100,101,
	0,108,14,14,95,2,9,112,4,25,26,48,12,0,
	103,2,0,106,8,83,101,116,77,111,100,101,0,108,
	14,14,95,2,9,112,4,73,134,25,95,3,28,29,
	48,10,0,103,2,0,106,9,83,116,97,114,116,68,
	111,99,0,108,15,14,95,2,9,112,4,25,27,48,
	12,0,103,2,0,106,9,83,116,97,114,116,68,111,
	99,0,108,15,14,95,2,9,112,4,73,134,26,95,
	3,28,29,48,10,0,103,2,0,106,9,78,101,120,
	116,80,97,103,101,0,108,16,14,95,2,9,112,4,
	25,27,48,12,0,103,2,0,106,9,78,101,120,116,
	80,97,103,101,0,108,16,14,95,2,9,112,4,73,
	134,27,95,3,28,30,48,10,0,103,2,0,106,10,
	80,114,105,110,116,76,105,110,101,0,108,17,14,95,
	2,9,112,4,25,28,48,12,0,103,2,0,106,10,
	80,114,105,110,116,76,105,110,101,0,108,17,14,95,
	2,9,112,4,73,134,28,95,3,28,30,48,10,0,
	103,2,0,106,10,80,114,105,110,116,84,101,120,116,
	0,108,18,14,95,2,9,112,4,25,28,48,12,0,
	103,2,0,106,10,80,114,105,110,116,84,101,120,116,
	0,108,18,14,95,2,9,112,4,73,134,29,95,3,
	28,28,48,10,0,103,2,0,106,8,80,117,116,67,
	111,100,101,0,108,19,14,95,2,9,112,4,25,26,
	48,12,0,103,2,0,106,8,80,117,116,67,111,100,
	101,0,108,19,14,95,2,9,112,4,73,134,30,95,
	3,28,27,48,10,0,103,2,0,106,7,69,110,100,
	68,111,99,0,108,20,14,95,2,9,112,4,25,25,
	48,12,0,103,2,0,106,7,69,110,100,68,111,99,
	0,108,20,14,95,2,9,112,4,73,134,31,95,3,
	28,24,48,10,0,103,2,0,106,4,69,110,100,0,
	108,21,14,95,2,9,112,4,25,22,48,12,0,103,
	2,0,106,4,69,110,100,0,108,21,14,95,2,9,
	112,4,73,126,2,8,0,134,34,95,3,31,33,48,
	9,0,103,2,0,100,9,95,2,106,10,108,68,111,
	99,83,116,97,114,116,0,4,1,0,9,9,112,6,
	25,3,100,73,134,35,95,3,31,34,48,9,0,103,
	2,0,100,9,95,2,106,11,108,80,97,103,101,83,
	116,97,114,116,0,4,1,0,9,9,112,6,25,3,
	100,73,134,36,95,3,31,34,48,9,0,103,2,0,
	100,100,95,2,106,11,108,70,105,114,115,116,76,105,
	110,101,0,4,1,0,9,9,112,6,25,3,100,73,
	95,3,28,26,108,22,100,48,3,0,103,2,0,112,
	0,20,1,48,23,0,103,2,0,112,0,73,25,11,
	48,24,0,103,2,0,112,0,73,108,25,100,48,3,
	0,103,2,0,112,0,12,1,80,1,108,26,100,95,
	1,106,10,73,110,105,116,67,108,97,115,115,0,12,
	2,28,32,48,27,0,95,1,108,28,100,12,0,112,
	1,73,25,17,108,25,100,48,3,0,103,2,0,112,
	0,12,1,80,1,108,29,100,12,0,121,15,28,10,
	103,2,0,108,0,14,121,178,95,1,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HWINPRN_NEW )
{
   static const BYTE pcode[] =
   {
	13,1,7,102,80,8,133,70,0,48,30,0,95,8,
	48,4,0,108,31,100,12,0,95,1,100,8,28,7,
	106,1,0,25,4,95,1,9,95,4,95,5,95,6,
	95,7,112,6,112,1,73,134,1,48,32,0,95,8,
	112,0,100,8,28,7,134,2,100,110,7,134,4,48,
	33,0,95,8,95,2,112,1,73,134,5,48,34,0,
	95,8,95,3,112,1,73,134,7,95,8,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HWINPRN_INITVALUES )
{
   static const BYTE pcode[] =
   {
	13,1,6,102,80,7,133,81,0,95,1,100,69,28,
	12,48,35,0,95,7,95,1,112,1,73,134,1,95,
	2,100,69,28,12,48,36,0,95,7,95,2,112,1,
	73,134,2,95,3,100,69,28,12,48,37,0,95,7,
	95,3,112,1,73,134,3,95,4,100,69,28,12,48,
	38,0,95,7,95,4,112,1,73,134,4,95,5,100,
	69,28,12,48,39,0,95,7,95,5,112,1,73,134,
	5,95,6,100,69,28,12,48,40,0,95,7,95,6,
	112,1,73,134,6,48,41,0,95,7,120,112,1,73,
	134,8,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HWINPRN_SETMODE )
{
   static const BYTE pcode[] =
   {
	13,7,6,102,80,7,133,95,0,127,8,15,0,76,
	117,99,105,100,97,32,67,111,110,115,111,108,101,0,
	134,2,122,101,133,235,81,184,30,133,243,63,10,2,
	101,92,143,194,245,40,92,251,63,10,2,92,2,4,
	4,0,80,9,134,3,126,10,0,0,134,5,48,42,
	0,95,7,95,1,95,2,95,3,95,4,95,5,95,
	6,112,6,73,134,7,48,43,0,95,7,112,0,29,
	65,2,134,9,48,44,0,95,7,112,0,100,8,21,
	31,23,73,48,45,0,95,7,112,0,48,45,0,48,
	32,0,95,7,112,0,112,0,69,29,247,0,134,10,
	48,46,0,95,7,92,4,112,1,73,134,11,48,47,
	0,95,7,48,45,0,48,32,0,95,7,112,0,112,
	0,112,1,73,134,12,48,48,0,48,32,0,95,7,
	112,0,112,0,48,49,0,48,32,0,95,7,112,0,
	112,0,18,128,246,255,80,13,134,13,95,13,93,210,
	0,15,21,31,9,73,95,13,93,190,0,35,28,8,
	134,14,126,13,200,0,134,19,48,50,0,48,32,0,
	95,7,112,0,95,8,48,44,0,95,7,112,0,48,
	51,0,48,32,0,95,7,112,0,112,0,65,112,2,
	80,11,134,21,48,52,0,48,32,0,95,7,112,0,
	95,11,112,1,73,134,22,48,53,0,48,32,0,95,
	7,112,0,108,54,100,106,2,65,0,92,80,12,2,
	112,1,48,49,0,48,32,0,95,7,112,0,112,0,
	18,80,12,134,23,95,12,95,13,128,2,0,15,21,
	31,11,73,95,12,95,13,128,241,255,35,28,25,134,
	24,48,46,0,95,7,48,44,0,95,7,112,0,95,
	13,95,12,18,65,112,1,73,134,26,48,55,0,95,
	11,112,0,73,134,29,48,56,0,95,7,112,0,28,
	4,173,10,134,30,48,57,0,95,7,112,0,28,6,
	125,10,2,0,134,32,48,58,0,95,7,48,44,0,
	95,7,112,0,95,9,95,10,128,1,0,1,18,48,
	51,0,48,32,0,95,7,112,0,112,0,65,112,1,
	73,134,33,48,59,0,95,7,101,102,102,102,102,102,
	102,57,64,10,1,48,51,0,48,32,0,95,7,112,
	0,112,0,65,48,60,0,95,7,112,0,18,48,61,
	0,95,7,112,0,49,112,1,73,134,41,48,50,0,
	48,32,0,95,7,112,0,106,15,76,117,99,105,100,
	97,32,67,111,110,115,111,108,101,0,48,61,0,95,
	7,112,0,48,62,0,95,7,112,0,48,63,0,95,
	7,112,0,48,64,0,95,7,112,0,93,204,0,112,
	6,80,11,134,44,48,65,0,95,7,112,0,100,69,
	28,17,134,45,48,55,0,48,65,0,95,7,112,0,
	112,0,73,134,47,48,66,0,95,7,95,11,112,1,
	73,134,49,48,52,0,48,32,0,95,7,112,0,48,
	65,0,95,7,112,0,112,1,73,134,50,48,67,0,
	95,7,48,53,0,48,32,0,95,7,112,0,106,11,
	65,66,67,68,69,70,71,72,73,74,0,112,1,92,
	10,18,112,1,73,134,51,48,41,0,95,7,9,112,
	1,73,134,55,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HWINPRN_STARTDOC )
{
   static const BYTE pcode[] =
   {
	13,1,2,102,80,3,133,154,0,48,68,0,95,3,
	120,112,1,73,134,1,48,69,0,48,32,0,95,3,
	112,0,95,1,95,2,112,2,73,134,2,48,70,0,
	95,3,112,0,73,134,4,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HWINPRN_NEXTPAGE )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,162,0,48,71,0,95,1,
	112,0,31,7,134,1,100,110,7,134,3,48,43,0,
	95,1,112,0,28,17,134,4,48,72,0,48,32,0,
	95,1,112,0,112,0,73,134,7,48,73,0,95,1,
	120,112,1,73,134,8,48,74,0,48,32,0,95,1,
	112,0,112,0,73,134,10,48,65,0,95,1,112,0,
	100,8,28,14,134,11,48,75,0,95,1,112,0,73,
	25,24,134,13,48,52,0,48,32,0,95,1,112,0,
	48,65,0,95,1,112,0,112,1,73,134,16,48,76,
	0,95,1,48,77,0,95,1,112,0,48,51,0,48,
	32,0,95,1,112,0,112,0,65,48,61,0,95,1,
	112,0,49,48,78,0,95,1,112,0,49,112,1,73,
	134,17,48,79,0,95,1,120,112,1,73,134,19,100,
	110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HWINPRN_PRINTLINE )
{
   static const BYTE pcode[] =
   {
	13,6,2,116,103,0,102,80,3,133,186,0,48,71,
	0,95,3,112,0,31,12,134,1,48,69,0,95,3,
	112,0,73,134,4,48,80,0,95,3,112,0,92,2,
	48,61,0,95,3,112,0,48,78,0,95,3,112,0,
	72,65,72,48,81,0,48,32,0,95,3,112,0,112,
	0,15,28,12,134,5,48,70,0,95,3,112,0,73,
	134,7,48,82,0,95,3,48,83,0,95,3,112,0,
	48,49,0,48,32,0,95,3,112,0,112,0,65,112,
	1,73,134,8,48,84,0,95,3,112,0,28,15,134,
	9,48,79,0,95,3,9,112,1,73,25,49,134,10,
	95,2,100,8,21,31,5,73,95,2,28,35,134,11,
	48,76,0,95,3,48,80,0,95,3,112,0,48,61,
	0,95,3,112,0,48,78,0,95,3,112,0,72,72,
	112,1,73,134,14,9,95,1,100,69,28,11,73,108,
	85,100,95,1,12,1,68,29,8,8,134,15,108,86,
	100,95,1,12,1,80,7,134,16,126,4,1,0,134,
	17,126,5,0,0,134,18,95,4,95,7,34,29,199,
	7,134,19,95,1,95,4,1,21,80,8,106,2,32,
	0,35,28,62,134,20,95,5,121,69,28,32,134,21,
	48,87,0,95,3,108,88,100,95,1,95,5,95,4,
	95,5,49,12,3,112,1,73,134,22,126,5,0,0,
	134,24,48,89,0,95,3,108,88,100,95,1,95,4,
	12,2,112,1,167,4,25,171,134,26,108,90,100,95,
	8,103,1,0,12,2,21,80,6,121,69,29,81,7,
	134,27,95,5,121,69,28,32,134,28,48,87,0,95,
	3,108,88,100,95,1,95,5,95,4,95,5,49,12,
	3,112,1,73,134,29,126,5,0,0,134,31,95,6,
	92,3,35,29,155,0,134,32,95,4,80,5,134,33,
	9,95,4,95,7,34,28,11,73,95,1,95,4,1,
	95,8,8,28,8,134,34,173,4,25,231,134,36,48,
	91,0,48,32,0,95,3,112,0,48,92,0,95,3,
	112,0,48,80,0,95,3,112,0,48,61,0,95,3,
	112,0,92,2,18,72,48,92,0,95,3,112,0,95,
	4,95,5,49,48,93,0,95,3,112,0,65,72,48,
	80,0,95,3,112,0,48,61,0,95,3,112,0,92,
	2,18,72,112,4,73,134,37,48,82,0,95,3,48,
	92,0,95,3,112,0,95,4,95,5,49,48,93,0,
	95,3,112,0,65,72,112,1,73,134,38,126,5,0,
	0,26,208,254,134,41,95,6,92,5,35,28,86,134,
	42,48,91,0,48,32,0,95,3,112,0,48,92,0,
	95,3,112,0,48,93,0,95,3,112,0,92,2,18,
	72,48,80,0,95,3,112,0,48,92,0,95,3,112,
	0,48,93,0,95,3,112,0,92,2,18,72,48,80,
	0,95,3,112,0,48,61,0,95,3,112,0,72,48,
	78,0,95,3,112,0,72,112,4,73,26,17,6,134,
	43,95,6,92,9,35,29,182,0,134,44,48,91,0,
	48,32,0,95,3,112,0,48,92,0,95,3,112,0,
	48,93,0,95,3,112,0,92,2,18,72,48,80,0,
	95,3,112,0,48,61,0,95,3,112,0,92,2,18,
	72,48,92,0,95,3,112,0,48,93,0,95,3,112,
	0,72,48,80,0,95,3,112,0,48,61,0,95,3,
	112,0,92,2,18,72,112,4,73,134,45,48,91,0,
	48,32,0,95,3,112,0,48,92,0,95,3,112,0,
	48,93,0,95,3,112,0,92,2,18,72,48,80,0,
	95,3,112,0,48,61,0,95,3,112,0,92,2,18,
	72,48,92,0,95,3,112,0,48,93,0,95,3,112,
	0,92,2,18,72,48,80,0,95,3,112,0,48,61,
	0,95,3,112,0,72,48,78,0,95,3,112,0,72,
	112,4,73,26,84,5,134,46,95,6,92,13,35,29,
	174,0,134,47,48,91,0,48,32,0,95,3,112,0,
	48,92,0,95,3,112,0,48,80,0,95,3,112,0,
	48,61,0,95,3,112,0,92,2,18,72,48,92,0,
	95,3,112,0,48,93,0,95,3,112,0,92,2,18,
	72,48,80,0,95,3,112,0,48,61,0,95,3,112,
	0,92,2,18,72,112,4,73,134,48,48,91,0,48,
	32,0,95,3,112,0,48,92,0,95,3,112,0,48,
	93,0,95,3,112,0,92,2,18,72,48,80,0,95,
	3,112,0,48,61,0,95,3,112,0,92,2,18,72,
	48,92,0,95,3,112,0,48,93,0,95,3,112,0,
	92,2,18,72,48,80,0,95,3,112,0,48,61,0,
	95,3,112,0,72,48,78,0,95,3,112,0,72,112,
	4,73,26,159,4,134,49,95,6,92,17,35,29,166,
	0,134,50,48,91,0,48,32,0,95,3,112,0,48,
	92,0,95,3,112,0,48,93,0,95,3,112,0,92,
	2,18,72,48,80,0,95,3,112,0,48,61,0,95,
	3,112,0,92,2,18,72,48,92,0,95,3,112,0,
	48,93,0,95,3,112,0,72,48,80,0,95,3,112,
	0,48,61,0,95,3,112,0,92,2,18,72,112,4,
	73,134,51,48,91,0,48,32,0,95,3,112,0,48,
	92,0,95,3,112,0,48,93,0,95,3,112,0,92,
	2,18,72,48,80,0,95,3,112,0,48,92,0,95,
	3,112,0,48,93,0,95,3,112,0,92,2,18,72,
	48,80,0,95,3,112,0,48,61,0,95,3,112,0,
	92,2,18,72,112,4,73,26,242,3,134,52,95,6,
	92,21,35,29,158,0,134,53,48,91,0,48,32,0,
	95,3,112,0,48,92,0,95,3,112,0,48,80,0,
	95,3,112,0,48,61,0,95,3,112,0,92,2,18,
	72,48,92,0,95,3,112,0,48,93,0,95,3,112,
	0,92,2,18,72,48,80,0,95,3,112,0,48,61,
	0,95,3,112,0,92,2,18,72,112,4,73,134,54,
	48,91,0,48,32,0,95,3,112,0,48,92,0,95,
	3,112,0,48,93,0,95,3,112,0,92,2,18,72,
	48,80,0,95,3,112,0,48,92,0,95,3,112,0,
	48,93,0,95,3,112,0,92,2,18,72,48,80,0,
	95,3,112,0,48,61,0,95,3,112,0,92,2,18,
	72,112,4,73,26,77,3,134,55,95,6,92,25,35,
	29,171,0,134,56,48,91,0,48,32,0,95,3,112,
	0,48,92,0,95,3,112,0,48,80,0,95,3,112,
	0,48,61,0,95,3,112,0,92,2,18,72,48,92,
	0,95,3,112,0,48,93,0,95,3,112,0,72,48,
	80,0,95,3,112,0,48,61,0,95,3,112,0,92,
	2,18,72,112,4,73,134,57,48,91,0,48,32,0,
	95,3,112,0,48,92,0,95,3,112,0,48,93,0,
	95,3,112,0,92,2,18,72,48,80,0,95,3,112,
	0,48,61,0,95,3,112,0,92,2,18,72,48,92,
	0,95,3,112,0,48,93,0,95,3,112,0,92,2,
	18,72,48,80,0,95,3,112,0,48,61,0,95,3,
	112,0,72,48,78,0,95,3,112,0,72,112,4,73,
	26,155,2,134,58,95,6,92,29,35,29,155,0,134,
	59,48,91,0,48,32,0,95,3,112,0,48,92,0,
	95,3,112,0,48,80,0,95,3,112,0,48,61,0,
	95,3,112,0,92,2,18,72,48,92,0,95,3,112,
	0,48,93,0,95,3,112,0,72,48,80,0,95,3,
	112,0,48,61,0,95,3,112,0,92,2,18,72,112,
	4,73,134,60,48,91,0,48,32,0,95,3,112,0,
	48,92,0,95,3,112,0,48,93,0,95,3,112,0,
	92,2,18,72,48,80,0,95,3,112,0,48,92,0,
	95,3,112,0,48,93,0,95,3,112,0,92,2,18,
	72,48,80,0,95,3,112,0,48,61,0,95,3,112,
	0,92,2,18,72,112,4,73,26,249,1,134,61,95,
	6,92,33,35,29,171,0,134,62,48,91,0,48,32,
	0,95,3,112,0,48,92,0,95,3,112,0,48,93,
	0,95,3,112,0,92,2,18,72,48,80,0,95,3,
	112,0,48,61,0,95,3,112,0,92,2,18,72,48,
	92,0,95,3,112,0,48,93,0,95,3,112,0,72,
	48,80,0,95,3,112,0,48,61,0,95,3,112,0,
	92,2,18,72,112,4,73,134,63,48,91,0,48,32,
	0,95,3,112,0,48,92,0,95,3,112,0,48,93,
	0,95,3,112,0,92,2,18,72,48,80,0,95,3,
	112,0,48,92,0,95,3,112,0,48,93,0,95,3,
	112,0,92,2,18,72,48,80,0,95,3,112,0,48,
	61,0,95,3,112,0,72,48,78,0,95,3,112,0,
	72,112,4,73,26,71,1,134,64,95,6,92,37,35,
	29,163,0,134,65,48,91,0,48,32,0,95,3,112,
	0,48,92,0,95,3,112,0,48,80,0,95,3,112,
	0,48,61,0,95,3,112,0,92,2,18,72,48,92,
	0,95,3,112,0,48,93,0,95,3,112,0,92,2,
	18,72,48,80,0,95,3,112,0,48,61,0,95,3,
	112,0,92,2,18,72,112,4,73,134,66,48,91,0,
	48,32,0,95,3,112,0,48,92,0,95,3,112,0,
	48,93,0,95,3,112,0,92,2,18,72,48,80,0,
	95,3,112,0,48,92,0,95,3,112,0,48,93,0,
	95,3,112,0,92,2,18,72,48,80,0,95,3,112,
	0,48,61,0,95,3,112,0,72,48,78,0,95,3,
	112,0,72,112,4,73,26,157,0,134,68,48,91,0,
	48,32,0,95,3,112,0,48,92,0,95,3,112,0,
	48,80,0,95,3,112,0,48,61,0,95,3,112,0,
	92,2,18,72,48,92,0,95,3,112,0,48,93,0,
	95,3,112,0,72,48,80,0,95,3,112,0,48,61,
	0,95,3,112,0,92,2,18,72,112,4,73,134,69,
	48,91,0,48,32,0,95,3,112,0,48,92,0,95,
	3,112,0,48,93,0,95,3,112,0,92,2,18,72,
	48,80,0,95,3,112,0,48,92,0,95,3,112,0,
	48,93,0,95,3,112,0,92,2,18,72,48,80,0,
	95,3,112,0,48,61,0,95,3,112,0,72,48,78,
	0,95,3,112,0,72,112,4,73,134,71,48,82,0,
	95,3,48,92,0,95,3,112,0,48,93,0,95,3,
	112,0,72,112,1,73,25,16,134,74,95,5,121,8,
	28,8,134,75,95,4,80,5,134,78,173,4,26,53,
	248,134,80,95,5,121,69,28,26,134,81,48,87,0,
	95,3,108,88,100,95,1,95,5,95,4,95,5,49,
	12,3,112,1,73,134,85,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HWINPRN_PRINTTEXT )
{
   static const BYTE pcode[] =
   {
	13,1,1,102,80,2,133,19,1,48,94,0,95,2,
	112,0,28,12,134,1,48,75,0,95,2,112,0,73,
	134,4,48,95,0,48,32,0,95,2,112,0,48,96,
	0,95,2,112,0,48,97,0,95,2,112,0,69,28,
	25,108,98,100,95,1,48,96,0,95,2,112,0,48,
	97,0,95,2,112,0,12,3,25,4,95,1,48,92,
	0,95,2,112,0,48,80,0,95,2,112,0,48,48,
	0,48,32,0,95,2,112,0,112,0,48,80,0,95,
	2,112,0,48,61,0,95,2,112,0,72,48,78,0,
	95,2,112,0,72,112,5,73,134,5,48,82,0,95,
	2,48,92,0,95,2,112,0,48,93,0,95,2,112,
	0,108,86,100,95,1,12,1,65,72,112,1,73,134,
	7,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HWINPRN_PUTCODE )
{
   static const BYTE pcode[] =
   {
	13,4,1,116,103,0,102,80,2,133,43,1,108,86,
	100,103,3,0,12,1,80,4,95,1,129,1,0,80,
	5,134,2,126,3,1,0,95,3,95,4,34,29,133,
	0,134,3,9,103,3,0,95,3,1,122,1,129,1,
	0,95,5,8,28,23,73,108,90,100,103,3,0,95,
	3,1,122,1,95,1,129,3,0,12,2,122,8,28,
	83,134,4,48,42,0,95,2,103,3,0,95,3,1,
	92,2,1,103,3,0,95,3,1,92,3,1,103,3,
	0,95,3,1,92,4,1,103,3,0,95,3,1,92,
	5,1,103,3,0,95,3,1,92,6,1,103,3,0,
	95,3,1,92,7,1,112,6,73,134,5,108,86,100,
	103,3,0,95,3,1,122,1,12,1,110,7,134,7,
	173,3,26,121,255,134,9,122,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HWINPRN_ENDDOC )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,56,1,48,43,0,95,1,
	112,0,28,28,134,1,48,72,0,48,32,0,95,1,
	112,0,112,0,73,134,2,48,73,0,95,1,9,112,
	1,73,134,4,48,71,0,95,1,112,0,28,85,134,
	5,48,99,0,48,32,0,95,1,112,0,112,0,73,
	134,6,48,68,0,95,1,9,112,1,73,134,7,9,
	108,26,100,48,32,0,95,1,112,0,106,8,80,82,
	69,86,73,69,87,0,12,2,28,15,73,48,100,0,
	48,32,0,95,1,112,0,112,0,28,17,134,8,48,
	101,0,48,32,0,95,1,112,0,112,0,73,134,12,
	100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HWINPRN_END )
{
   static const BYTE pcode[] =
   {
	13,1,0,102,80,1,133,72,1,48,99,0,95,1,
	112,0,73,134,1,48,55,0,48,65,0,95,1,112,
	0,112,0,73,134,2,48,102,0,48,32,0,95,1,
	112,0,112,0,73,134,3,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,103,0,3,0,116,103,0,106,41,196,205,179,186,
	218,201,213,214,191,187,183,184,192,200,211,212,217,188,
	189,190,194,203,209,210,193,202,207,208,195,204,198,199,
	180,185,181,182,197,206,215,216,0,82,1,0,106,3,
	27,64,0,9,9,92,6,9,9,9,4,7,0,106,
	3,27,77,0,120,100,100,100,100,100,4,7,0,106,
	2,15,0,100,120,100,100,100,100,4,7,0,106,2,
	18,0,100,9,100,100,100,100,4,7,0,106,3,27,
	48,0,100,100,92,8,100,100,100,4,7,0,106,3,
	27,50,0,100,100,92,6,100,100,100,4,7,0,106,
	4,27,45,49,0,100,100,100,100,100,120,4,7,0,
	106,4,27,45,48,0,100,100,100,100,100,9,4,7,
	0,106,3,27,52,0,100,100,100,100,120,100,4,7,
	0,106,3,27,53,0,100,100,100,100,9,100,4,7,
	0,106,3,27,71,0,100,100,100,100,120,100,4,7,
	0,106,3,27,72,0,100,100,100,9,100,100,4,7,
	0,4,12,0,82,3,0,7
   };

   hb_vmExecute( pcode, symbols );
}

