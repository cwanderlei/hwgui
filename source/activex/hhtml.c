/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <D:\\hwgui\\source\\activex\\hhtml.prg>
 * Command: D:\hwgui\source\activex\hhtml.prg /q /oD:\hwgui\source\activex\hhtml.c /M /N 
 * Created: 2022.04.18 16:58:38 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "D:\\hwgui\\source\\activex\\hhtml.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( HHTML );
HB_FUNC_STATIC( HHTML_NEW );
HB_FUNC_STATIC( HHTML_ACTIVATE );
HB_FUNC_STATIC( HHTML_RESIZE );
HB_FUNC_STATIC( HHTML_END );
HB_FUNC_EXIT( EXITOLE );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_EXTERN( HWGAX_DISPLAYHTMLPAGE );
HB_FUNC_EXTERN( HWGAX_DISPLAYHTMLSTR );
HB_FUNC_EXTERN( HWGAX_DOPAGEACTION );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HWGAX_OLEINITIALIZE );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HWGAX_EMBEDBROWSEROBJECT );
HB_FUNC_EXTERN( HWGAX_RESIZEBROWSER );
HB_FUNC_EXTERN( HWGAX_UNEMBEDBROWSEROBJECT );
HB_FUNC_EXTERN( HWGAX_OLEUNINITIALIZE );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HHTML )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HHTML", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HHTML )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HHTML_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HHTML_NEW )}, &ModuleFakeDyn },
{ "ADDINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWGAX_DISPLAYHTMLPAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWGAX_DISPLAYHTMLPAGE )}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWGAX_DISPLAYHTMLSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWGAX_DISPLAYHTMLSTR )}, NULL },
{ "HHTML_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HHTML_ACTIVATE )}, &ModuleFakeDyn },
{ "HHTML_RESIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HHTML_RESIZE )}, &ModuleFakeDyn },
{ "HWGAX_DOPAGEACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWGAX_DOPAGEACTION )}, NULL },
{ "HHTML_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HHTML_END )}, &ModuleFakeDyn },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HWGAX_OLEINITIALIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWGAX_OLEINITIALIZE )}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "_OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "_OEMBEDDED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWGAX_EMBEDBROWSEROBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWGAX_EMBEDBROWSEROBJECT )}, NULL },
{ "HWGAX_RESIZEBROWSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWGAX_RESIZEBROWSER )}, NULL },
{ "HWGAX_UNEMBEDBROWSEROBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWGAX_UNEMBEDBROWSEROBJECT )}, NULL },
{ "EXITOLE$", {HB_FS_EXIT | HB_FS_LOCAL}, {HB_EXIT_FUNCNAME( EXITOLE )}, &ModuleFakeDyn },
{ "HWGAX_OLEUNINITIALIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWGAX_OLEUNINITIALIZE )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HHTML, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HHTML
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HHTML )
   #include "hbiniseg.h"
#endif

HB_FUNC( HHTML )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 255,	/* locals, params */
	HB_P_SFRAME, 38, 0,	/* symbol (_INITSTATICS) */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* NSCOPE 1*/
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_POP,
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 179, 2,	/* 691 (abs: 00709) */
	HB_P_MESSAGE, 2, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 3,	/* HBCLASS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'H', 'H', 't', 'm', 'l', 0, 
	HB_P_MESSAGE, 4, 0,	/* CLASSH */
	HB_P_PUSHSYMNEAR, 5,	/* HBOBJECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_SENDSHORT, 2,
	HB_P_POPSTATIC, 1, 0,	/* S_OCLASS */
/* 00055 */ HB_P_BASELINE, 23, 0,	/* 23 */
	HB_P_MESSAGE, 6, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'o', 'P', 'a', 'r', 'e', 'n', 't', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00086 */ HB_P_LINEOFFSET, 1,	/* 24 */
	HB_P_MESSAGE, 6, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'h', 'a', 'n', 'd', 'l', 'e', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00115 */ HB_P_LINEOFFSET, 3,	/* 26 */
	HB_P_MESSAGE, 7, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'e', 'w', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* HHTML_NEW */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00138 */ HB_P_LINEOFFSET, 4,	/* 27 */
	HB_P_MESSAGE, 9, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'D', 'i', 's', 'p', 'l', 'a', 'y', 'P', 'a', 'g', 'e', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 10,	/* HWGAX_DISPLAYHTMLPAGE */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00196 */ HB_P_LINEOFFSET, 5,	/* 28 */
	HB_P_MESSAGE, 9, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'D', 'i', 's', 'p', 'l', 'a', 'y', 'T', 'e', 'x', 't', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 13,	/* HWGAX_DISPLAYHTMLSTR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00254 */ HB_P_LINEOFFSET, 6,	/* 29 */
	HB_P_MESSAGE, 7, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'A', 'c', 't', 'i', 'v', 'a', 't', 'e', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* HHTML_ACTIVATE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00282 */ HB_P_LINEOFFSET, 7,	/* 30 */
	HB_P_MESSAGE, 7, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'R', 'e', 's', 'i', 'z', 'e', 0, 
	HB_P_PUSHSYMNEAR, 15,	/* HHTML_RESIZE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00308 */ HB_P_LINEOFFSET, 8,	/* 31 */
	HB_P_MESSAGE, 9, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'G', 'o', 'B', 'a', 'c', 'k', 0, 
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 16,	/* HWGAX_DOPAGEACTION */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00360 */ HB_P_LINEOFFSET, 9,	/* 32 */
	HB_P_MESSAGE, 9, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'G', 'o', 'F', 'o', 'r', 'w', 'a', 'r', 'd', 0, 
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 16,	/* HWGAX_DOPAGEACTION */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00415 */ HB_P_LINEOFFSET, 10,	/* 33 */
	HB_P_MESSAGE, 9, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'G', 'o', 'H', 'o', 'm', 'e', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 16,	/* HWGAX_DOPAGEACTION */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00468 */ HB_P_LINEOFFSET, 11,	/* 34 */
	HB_P_MESSAGE, 9, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'e', 'a', 'r', 'c', 'h', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 16,	/* HWGAX_DOPAGEACTION */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00521 */ HB_P_LINEOFFSET, 12,	/* 35 */
	HB_P_MESSAGE, 9, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'e', 'f', 'r', 'e', 's', 'h', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 16,	/* HWGAX_DOPAGEACTION */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00575 */ HB_P_LINEOFFSET, 13,	/* 36 */
	HB_P_MESSAGE, 9, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'S', 't', 'o', 'p', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 16,	/* HWGAX_DOPAGEACTION */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00626 */ HB_P_LINEOFFSET, 14,	/* 37 */
	HB_P_MESSAGE, 7, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'E', 'n', 'd', 0, 
	HB_P_PUSHSYMNEAR, 17,	/* HHTML_END */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
	HB_P_MESSAGE, 21, 0,	/* CREATE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 22,	/* __CLSINST */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 19, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 23,	/* __OBJHASMSG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'I', 'n', 'i', 't', 'C', 'l', 'a', 's', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 00724) */
	HB_P_MESSAGE, 24, 0,	/* INITCLASS */
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 25,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00724) */
	HB_P_PUSHSYMNEAR, 22,	/* __CLSINST */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 19, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 26,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00741) */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSYMNEAR, 0,	/* DIVERTCONSTRUCTORCALL */
	HB_P_FUNCPTR,
	HB_P_ZERO,
	HB_P_DIVERTOF,
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00745 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HHTML_NEW )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 2,	/* SELF */
/* 00006 */ HB_P_BASELINE, 42, 0,	/* 42 */
	HB_P_PUSHSYMNEAR, 27,	/* HWGAX_OLEINITIALIZE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 00062) */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 43 */
	HB_P_PUSHSYMNEAR, 28,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'a', 'n', 39, 't', ' ', 'o', 'p', 'e', 'n', ' ', 'O', 'L', 'E', '!', 0, 
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'H', 'H', 't', 'm', 'l', '(', ')', ':', 'N', 'e', 'w', '(', ')', 0, 
	HB_P_DOSHORT, 2,
/* 00057 */ HB_P_LINEOFFSET, 2,	/* 44 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00062 */ HB_P_LINEOFFSET, 5,	/* 47 */
	HB_P_MESSAGE, 29, 0,	/* _OPARENT */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* OPARENT */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00074 */ HB_P_LINEOFFSET, 7,	/* 49 */
	HB_P_MESSAGE, 30, 0,	/* ACTIVATE */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00084 */ HB_P_LINEOFFSET, 9,	/* 51 */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00090 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HHTML_ACTIVATE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 1,	/* SELF */
/* 00006 */ HB_P_BASELINE, 55, 0,	/* 55 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 88,	/* 88 (abs: 00114) */
/* 00028 */ HB_P_LINEOFFSET, 1,	/* 56 */
	HB_P_MESSAGE, 32, 0,	/* _OEMBEDDED */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00045 */ HB_P_LINEOFFSET, 2,	/* 57 */
	HB_P_PUSHSYMNEAR, 33,	/* HWGAX_EMBEDBROWSEROBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 50,	/* 50 (abs: 00114) */
/* 00066 */ HB_P_LINEOFFSET, 3,	/* 58 */
	HB_P_PUSHSYMNEAR, 28,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'a', 'n', 39, 't', ' ', 'e', 'm', 'b', 'e', 'd', ' ', 'I', 'E', ' ', 'o', 'b', 'j', 'e', 'c', 't', '!', 0, 
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'H', 'H', 't', 'm', 'l', '(', ')', ':', 'N', 'e', 'w', '(', ')', 0, 
	HB_P_DOSHORT, 2,
/* 00114 */ HB_P_LINEOFFSET, 6,	/* 61 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00119 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HHTML_RESIZE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 3,	/* SELF */
/* 00006 */ HB_P_BASELINE, 66, 0,	/* 66 */
	HB_P_PUSHSYMNEAR, 34,	/* HWGAX_RESIZEBROWSER */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* WIDTH */
	HB_P_PUSHLOCALNEAR, 2,	/* HEIGHT */
	HB_P_DOSHORT, 3,
/* 00030 */ HB_P_LINEOFFSET, 1,	/* 67 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00035 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HHTML_END )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 1,	/* SELF */
/* 00006 */ HB_P_BASELINE, 71, 0,	/* 71 */
	HB_P_PUSHSYMNEAR, 35,	/* HWGAX_UNEMBEDBROWSEROBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 11, 0,	/* HANDLE */
	HB_P_MESSAGE, 12, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00026 */ HB_P_LINEOFFSET, 1,	/* 72 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00031 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_EXIT( EXITOLE )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 75, 0,	/* 75 */
	HB_P_PUSHSYMNEAR, 37,	/* HWGAX_OLEUNINITIALIZE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00008 */ HB_P_LINEOFFSET, 1,	/* 76 */
	HB_P_ENDPROC
/* 00011 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 38, 0, 1, 0,	/* symbol (_INITSTATICS), 1 statics */
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols );
}

