/*
 * xHarbour build 1.0.0 Intl. (SimpLex)
 * Generated C source code from <graph.prg>
 * Command: C:\xHARBOUR\bin\harbour.exe graph.prg -n -iC:\xHARBOUR\include;..\..\include 
 * Created: 2011.11.29 22:08:18 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "graph.prg"

HB_FUNC( MAIN );
HB_FUNC_STATIC( GRAPH1 );
HB_FUNC_STATIC( GRAPH2 );
HB_FUNC_STATIC( GRAPH3 );
HB_FUNC_EXTERN( HMAINWINDOW );
HB_FUNC_EXTERN( HWG_BEGINMENU );
HB_FUNC_EXTERN( HWG_DEFINEMENUITEM );
HB_FUNC_EXTERN( ENDWINDOW );
HB_FUNC_EXTERN( HWG_ENDMENU );
HB_FUNC_EXTERN( HFONT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( HWG_COS );
HB_FUNC_EXTERN( HDIALOG );
HB_FUNC_EXTERN( HGRAPH );
HB_FUNC_EXTERN( HBUTTON );
HB_FUNC_EXTERN( ENDDIALOG );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 9

#include "hbapi.h"


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_GRAPH )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAIN )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HMAINWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HMAINWINDOW )}, NULL },
{ "HWG_BEGINMENU", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_BEGINMENU )}, NULL },
{ "HWG_DEFINEMENUITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_DEFINEMENUITEM )}, NULL },
{ "ENDWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ENDWINDOW )}, NULL },
{ "GRAPH1", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( GRAPH1 )}, &ModuleFakeDyn },
{ "GRAPH2", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( GRAPH2 )}, &ModuleFakeDyn },
{ "GRAPH3", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( GRAPH3 )}, &ModuleFakeDyn },
{ "HWG_ENDMENU", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_ENDMENU )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HFONT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "HWG_COS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_COS )}, NULL },
{ "HDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDIALOG )}, NULL },
{ "HGRAPH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HGRAPH )}, NULL },
{ "_NAME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBUTTON )}, NULL },
{ "ENDDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ENDDIALOG )}, NULL },
{ "_NTYPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_GRAPH )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_GRAPH
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_GRAPH = hb_vm_SymbolInit_GRAPH;
   #pragma data_seg()
#endif

HB_FUNC( MAIN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 2,	/* HMAINWINDOW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 200, 0,	/* 200 */
	HB_P_ZERO,
	HB_P_PUSHINT, 144, 1,	/* 400 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 'x', 'a', 'm', 'p', 'l', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 26,
	HB_P_POPLOCALNEAR, 1,	/* OMAINWINDOW */
/* 00059 */ HB_P_LINEOFFSET, 2,	/* 11 */
	HB_P_PUSHSYMNEAR, 3,	/* HWG_BEGINMENU */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* OMAINWINDOW */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 3,
/* 00070 */ HB_P_LINEOFFSET, 3,	/* 12 */
	HB_P_PUSHSYMNEAR, 4,	/* HWG_DEFINEMENUITEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'&', 'E', 'x', 'i', 't', 0, 
	HB_P_MACROTEXT,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 5,	/* ENDWINDOW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_DOSHORT, 9,
/* 00101 */ HB_P_LINEOFFSET, 4,	/* 13 */
	HB_P_PUSHSYMNEAR, 4,	/* HWG_DEFINEMENUITEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'&', 'G', 'r', 'a', 'p', 'h', '1', 0, 
	HB_P_MACROTEXT,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 6,	/* GRAPH1 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_DOSHORT, 9,
/* 00134 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_PUSHSYMNEAR, 4,	/* HWG_DEFINEMENUITEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'&', 'G', 'r', 'a', 'p', 'h', '2', 0, 
	HB_P_MACROTEXT,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 7,	/* GRAPH2 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_DOSHORT, 9,
/* 00167 */ HB_P_LINEOFFSET, 6,	/* 15 */
	HB_P_PUSHSYMNEAR, 4,	/* HWG_DEFINEMENUITEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'&', 'G', 'r', 'a', 'p', 'h', '3', 0, 
	HB_P_MACROTEXT,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 8,	/* GRAPH3 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_DOSHORT, 9,
/* 00200 */ HB_P_LINEOFFSET, 7,	/* 16 */
	HB_P_PUSHSYMNEAR, 9,	/* HWG_ENDMENU */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00207 */ HB_P_LINEOFFSET, 9,	/* 18 */
	HB_P_MESSAGE, 10, 0,	/* ACTIVATE */
	HB_P_PUSHLOCALNEAR, 1,	/* OMAINWINDOW */
	HB_P_TRUE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00223 */ HB_P_LINEOFFSET, 10,	/* 19 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00228 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( GRAPH1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 22, 0,	/* 22 */
	HB_P_MESSAGE, 11, 0,	/* ADD */
	HB_P_PUSHSYMNEAR, 12,	/* HFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'M', 'S', ' ', 'S', 'a', 'n', 's', ' ', 'S', 'e', 'r', 'i', 'f', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 243,	/* -13 */
	HB_P_SENDSHORT, 3,
	HB_P_POPLOCALNEAR, 2,	/* OFONT */
/* 00037 */ HB_P_LINEOFFSET, 1,	/* 23 */
	HB_P_ONE,
	HB_P_ARRAYDIM, 1, 0,	/* 1 */
	HB_P_POPLOCALNEAR, 5,	/* AGRAPH */
/* 00045 */ HB_P_LINEOFFSET, 3,	/* 25 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHLOCALREF, 5, 0,	/* AGRAPH */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 00055 */ HB_P_LINEOFFSET, 4,	/* 26 */
	HB_P_LOCALNEARSETINT, 4, 216, 255,	/* I -40*/
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00100) */
/* 00068 */ HB_P_LINEOFFSET, 5,	/* 27 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* AGRAPH */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHSYMNEAR, 14,	/* HWG_COS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DIVIDE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_DOSHORT, 2,
/* 00094 */ HB_P_LINEOFFSET, 6,	/* 28 */
	HB_P_LOCALNEARINC, 4,	/* I */
	HB_P_JUMPNEAR, 219,	/* -37 (abs: 00061) */
/* 00100 */ HB_P_LINEOFFSET, 10,	/* 32 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 15,	/* HDIALOG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHINT, 44, 1,	/* 300 */
	HB_P_PUSHINT, 44, 1,	/* 300 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'G', 'r', 'a', 'p', 'h', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* OFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 25,
	HB_P_POPLOCALNEAR, 1,	/* OMODDLG */
/* 00155 */ HB_P_LINEOFFSET, 12,	/* 34 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 16,	/* HGRAPH */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* AGRAPH */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHINT, 200, 0,	/* 200 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLONG, 0, 255, 0, 0, 	/* 65280 */
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 12,
	HB_P_POPLOCALNEAR, 3,	/* OGRAPH */
	HB_P_MESSAGE, 17, 0,	/* _NAME */
	HB_P_PUSHLOCALNEAR, 3,	/* OGRAPH */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'o', 'G', 'r', 'a', 'p', 'h', 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00208 */ HB_P_LINEOFFSET, 17,	/* 39 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 18,	/* HBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHINT, 250, 0,	/* 250 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'l', 'o', 's', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 19,	/* ENDDIALOG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 17,
	HB_P_POP,
	HB_P_MESSAGE, 10, 0,	/* ACTIVATE */
	HB_P_PUSHLOCALNEAR, 1,	/* OMODDLG */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00268 */ HB_P_LINEOFFSET, 21,	/* 43 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00273 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( GRAPH2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 46, 0,	/* 46 */
	HB_P_MESSAGE, 11, 0,	/* ADD */
	HB_P_PUSHSYMNEAR, 12,	/* HFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'M', 'S', ' ', 'S', 'a', 'n', 's', ' ', 'S', 'e', 'r', 'i', 'f', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 243,	/* -13 */
	HB_P_SENDSHORT, 3,
	HB_P_POPLOCALNEAR, 2,	/* OFONT */
/* 00037 */ HB_P_LINEOFFSET, 1,	/* 47 */
	HB_P_ONE,
	HB_P_ARRAYDIM, 1, 0,	/* 1 */
	HB_P_POPLOCALNEAR, 5,	/* AGRAPH */
/* 00045 */ HB_P_LINEOFFSET, 3,	/* 49 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHLOCALREF, 5, 0,	/* AGRAPH */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 00055 */ HB_P_LINEOFFSET, 4,	/* 50 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 00096) */
/* 00068 */ HB_P_LINEOFFSET, 5,	/* 51 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* AGRAPH */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_MULT,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_DOSHORT, 2,
/* 00090 */ HB_P_LINEOFFSET, 6,	/* 52 */
	HB_P_LOCALNEARINC, 4,	/* I */
	HB_P_JUMPNEAR, 223,	/* -33 (abs: 00061) */
/* 00096 */ HB_P_LINEOFFSET, 10,	/* 56 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 15,	/* HDIALOG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHINT, 44, 1,	/* 300 */
	HB_P_PUSHINT, 44, 1,	/* 300 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'G', 'r', 'a', 'p', 'h', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* OFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 25,
	HB_P_POPLOCALNEAR, 1,	/* OMODDLG */
/* 00151 */ HB_P_LINEOFFSET, 12,	/* 58 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 16,	/* HGRAPH */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* AGRAPH */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHINT, 200, 0,	/* 200 */
	HB_P_PUSHINT, 200, 0,	/* 200 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLONG, 0, 255, 0, 0, 	/* 65280 */
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 12,
	HB_P_POPLOCALNEAR, 3,	/* OGRAPH */
	HB_P_MESSAGE, 17, 0,	/* _NAME */
	HB_P_PUSHLOCALNEAR, 3,	/* OGRAPH */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'o', 'G', 'r', 'a', 'p', 'h', 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00205 */ HB_P_LINEOFFSET, 13,	/* 59 */
	HB_P_MESSAGE, 20, 0,	/* _NTYPE */
	HB_P_PUSHLOCALNEAR, 3,	/* OGRAPH */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00217 */ HB_P_LINEOFFSET, 17,	/* 63 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 18,	/* HBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHINT, 250, 0,	/* 250 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'l', 'o', 's', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 19,	/* ENDDIALOG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 17,
	HB_P_POP,
	HB_P_MESSAGE, 10, 0,	/* ACTIVATE */
	HB_P_PUSHLOCALNEAR, 1,	/* OMODDLG */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00277 */ HB_P_LINEOFFSET, 21,	/* 67 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00282 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( GRAPH3 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 70, 0,	/* 70 */
	HB_P_MESSAGE, 11, 0,	/* ADD */
	HB_P_PUSHSYMNEAR, 12,	/* HFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'M', 'S', ' ', 'S', 'a', 'n', 's', ' ', 'S', 'e', 'r', 'i', 'f', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 243,	/* -13 */
	HB_P_SENDSHORT, 3,
	HB_P_POPLOCALNEAR, 2,	/* OFONT */
/* 00037 */ HB_P_LINEOFFSET, 1,	/* 71 */
	HB_P_ONE,
	HB_P_ARRAYDIM, 1, 0,	/* 1 */
	HB_P_POPLOCALNEAR, 5,	/* AGRAPH */
/* 00045 */ HB_P_LINEOFFSET, 3,	/* 73 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHLOCALREF, 5, 0,	/* AGRAPH */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 00055 */ HB_P_LINEOFFSET, 4,	/* 74 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00090) */
/* 00068 */ HB_P_LINEOFFSET, 5,	/* 75 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* AGRAPH */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_MULT,
	HB_P_DOSHORT, 2,
/* 00084 */ HB_P_LINEOFFSET, 6,	/* 76 */
	HB_P_LOCALNEARINC, 4,	/* I */
	HB_P_JUMPNEAR, 229,	/* -27 (abs: 00061) */
/* 00090 */ HB_P_LINEOFFSET, 10,	/* 80 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 15,	/* HDIALOG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHINT, 44, 1,	/* 300 */
	HB_P_PUSHINT, 44, 1,	/* 300 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'G', 'r', 'a', 'p', 'h', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* OFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 25,
	HB_P_POPLOCALNEAR, 1,	/* OMODDLG */
/* 00145 */ HB_P_LINEOFFSET, 19,	/* 89 */
	HB_P_MESSAGE, 10, 0,	/* ACTIVATE */
	HB_P_PUSHLOCALNEAR, 1,	/* OMODDLG */
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00158 */ HB_P_LINEOFFSET, 21,	/* 91 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00163 */
   };

   hb_vmExecute( pcode, symbols );
}
