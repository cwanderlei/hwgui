/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20180529)
 * Generated C source code from <D:\\hwgui\\source\\activex\\h_activex.prg>
 * Command: D:\hwgui\source\activex\h_activex.prg /q /oD:\hwgui\source\activex\h_activex.c /M /N 
 * Created: 2022.04.18 16:58:38 (Borland/Embarcadero C++ 7.3 (32-bit))
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "D:\\hwgui\\source\\activex\\h_activex.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( HACTIVEX );
HB_FUNC_STATIC( HACTIVEX_NEW );
HB_FUNC_STATIC( HACTIVEX_RELEASE );
HB_FUNC_STATIC( HACTIVEX___ERROR );
HB_FUNC_STATIC( HACTIVEX_EVENTMAP );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HCONTROL );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HWG_CREATEACTIVEX );
HB_FUNC_EXTERN( HWG_ATLAXGETDISP );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( BREAK );
HB_FUNC_EXTERN( TOLEAUTO );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( HWG_SETUPCONNECTIONPOINT );
HB_FUNC_EXTERN( HWG_SHUTDOWNCONNECTIONPOINT );
HB_FUNC_EXTERN( HWG_RELEASEDISPATCH );
HB_FUNC_EXTERN( __GETMESSAGE );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( HB_EXECFROMARRAY );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( LEN );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_H_ACTIVEX )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "HACTIVEX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HACTIVEX )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HCONTROL )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HACTIVEX_RELEASE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HACTIVEX_RELEASE )}, &ModuleFakeDyn },
{ "HACTIVEX_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HACTIVEX_NEW )}, &ModuleFakeDyn },
{ "ADDDELEGATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETONERROR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HACTIVEX___ERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HACTIVEX___ERROR )}, &ModuleFakeDyn },
{ "HACTIVEX_EVENTMAP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HACTIVEX_EVENTMAP )}, &ModuleFakeDyn },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HCONTROL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_TITLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_CREATEACTIVEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_CREATEACTIVEX )}, NULL },
{ "STYLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NHEIGHT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HANDLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ID", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HOBJ", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_ATLAXGETDISP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_ATLAXGETDISP )}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "BREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( BREAK )}, NULL },
{ "_OOLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TOLEAUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOLEAUTO )}, NULL },
{ "HOBJ", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "DESCRIPTION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_SETUPCONNECTIONPOINT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_SETUPCONNECTIONPOINT )}, NULL },
{ "AAXEV", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "AAXEXEC", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_HSINK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_SHUTDOWNCONNECTIONPOINT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_SHUTDOWNCONNECTIONPOINT )}, NULL },
{ "HSINK", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HWG_RELEASEDISPATCH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_RELEASEDISPATCH )}, NULL },
{ "__GETMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETMESSAGE )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "HB_EXECFROMARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_EXECFROMARRAY )}, NULL },
{ "OOLE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_H_ACTIVEX, __PRG_SOURCE__,  0x000a )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_H_ACTIVEX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_H_ACTIVEX )
   #include "hbiniseg.h"
#endif

HB_FUNC( HACTIVEX )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 255,	/* locals, params */
	HB_P_SFRAME, 60, 0,	/* symbol (_INITSTATICS) */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* NSCOPE 1*/
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_POP,
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 201, 1,	/* 457 (abs: 00475) */
	HB_P_MESSAGE, 2, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 3,	/* HBCLASS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'H', 'A', 'c', 't', 'i', 'v', 'e', 'X', 0, 
	HB_P_MESSAGE, 4, 0,	/* CLASSH */
	HB_P_PUSHSYMNEAR, 5,	/* HCONTROL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_SENDSHORT, 2,
	HB_P_POPSTATIC, 1, 0,	/* S_OCLASS */
/* 00058 */ HB_P_BASELINE, 33, 0,	/* 33 */
	HB_P_MESSAGE, 6, 0,	/* ADDMULTICLSDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'C', 'T', 'I', 'V', 'E', 'X', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'w', 'i', 'n', 'c', 'l', 'a', 's', 's', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_SENDSHORT, 5,
	HB_P_POP,
/* 00098 */ HB_P_LINEOFFSET, 1,	/* 34 */
	HB_P_MESSAGE, 7, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'O', 'l', 'e', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00125 */ HB_P_LINEOFFSET, 2,	/* 35 */
	HB_P_MESSAGE, 7, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'h', 'S', 'i', 'n', 'k', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00153 */ HB_P_LINEOFFSET, 3,	/* 36 */
	HB_P_MESSAGE, 7, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'h', 'A', 't', 'l', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00180 */ HB_P_LINEOFFSET, 4,	/* 37 */
	HB_P_MESSAGE, 7, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'h', 'O', 'b', 'j', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00207 */ HB_P_LINEOFFSET, 6,	/* 39 */
	HB_P_MESSAGE, 8, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'e', 'l', 'e', 'a', 's', 'e', 0, 
	HB_P_PUSHSYMNEAR, 9,	/* HACTIVEX_RELEASE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00234 */ HB_P_LINEOFFSET, 7,	/* 40 */
	HB_P_MESSAGE, 8, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'e', 'w', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* HACTIVEX_NEW */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00257 */ HB_P_LINEOFFSET, 9,	/* 42 */
	HB_P_MESSAGE, 11, 0,	/* ADDDELEGATE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'O', 'l', 'e', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00284 */ HB_P_LINEOFFSET, 10,	/* 43 */
	HB_P_MESSAGE, 11, 0,	/* ADDDELEGATE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'G', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'O', 'l', 'e', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00311 */ HB_P_LINEOFFSET, 11,	/* 44 */
	HB_P_MESSAGE, 12, 0,	/* SETONERROR */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSYMNEAR, 13,	/* HACTIVEX___ERROR */
	HB_P_FUNCPTR,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00325 */ HB_P_LINEOFFSET, 13,	/* 46 */
	HB_P_MESSAGE, 7, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'a', 'A', 'x', 'E', 'v', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00355 */ HB_P_LINEOFFSET, 14,	/* 47 */
	HB_P_MESSAGE, 7, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'A', 'x', 'E', 'x', 'e', 'c', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00387 */ HB_P_LINEOFFSET, 15,	/* 48 */
	HB_P_MESSAGE, 8, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'E', 'v', 'e', 'n', 't', 'M', 'a', 'p', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* HACTIVEX_EVENTMAP */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
	HB_P_MESSAGE, 18, 0,	/* CREATE */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 19,	/* __CLSINST */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 20,	/* __OBJHASMSG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'I', 'n', 'i', 't', 'C', 'l', 'a', 's', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 00490) */
	HB_P_MESSAGE, 21, 0,	/* INITCLASS */
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 22,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00490) */
	HB_P_PUSHSYMNEAR, 19,	/* __CLSINST */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 16, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 23,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00507) */
	HB_P_PUSHSTATIC, 1, 0,	/* S_OCLASS */
	HB_P_PUSHSYMNEAR, 0,	/* DIVERTCONSTRUCTORCALL */
	HB_P_FUNCPTR,
	HB_P_ZERO,
	HB_P_DIVERTOF,
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00511 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HACTIVEX_NEW )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 7,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 8,	/* SELF */
/* 00006 */ HB_P_BASELINE, 57, 0,	/* 57 */
	HB_P_PUSHLONG, 0, 0, 0, 80, 	/* 1342177280 */
	HB_P_POPLOCALNEAR, 9,	/* NSTYLE */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 58 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* NEXSTYLE 0*/
/* 00022 */ HB_P_LINEOFFSET, 2,	/* 59 */
	HB_P_LOCALNEARSETSTR, 11, 9, 0,	/* CCLSNAME 9*/
	'A', 't', 'l', 'A', 'x', 'W', 'i', 'n', 0, 
/* 00037 */ HB_P_LINEOFFSET, 4,	/* 61 */
	HB_P_MESSAGE, 2, 0,	/* NEW */
	HB_P_MESSAGE, 24, 0,	/* HCONTROL */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* OWND */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* NSTYLE */
	HB_P_PUSHLOCALNEAR, 4,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 3,	/* NTOP */
	HB_P_PUSHLOCALNEAR, 5,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 6,	/* NHEIGHT */
	HB_P_SENDSHORT, 7,
	HB_P_POP,
/* 00065 */ HB_P_LINEOFFSET, 5,	/* 62 */
	HB_P_MESSAGE, 25, 0,	/* _TITLE */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_PUSHLOCALNEAR, 2,	/* CPROGID */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00077 */ HB_P_LINEOFFSET, 10,	/* 67 */
	HB_P_MESSAGE, 26, 0,	/* _HANDLE */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_PUSHSYMNEAR, 27,	/* HWG_CREATEACTIVEX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* NEXSTYLE */
	HB_P_PUSHLOCALNEAR, 11,	/* CCLSNAME */
	HB_P_PUSHLOCALNEAR, 2,	/* CPROGID */
	HB_P_MESSAGE, 28, 0,	/* STYLE */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 29, 0,	/* NLEFT */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 30, 0,	/* NTOP */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 31, 0,	/* NWIDTH */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 32, 0,	/* NHEIGHT */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 33, 0,	/* HANDLE */
	HB_P_MESSAGE, 34, 0,	/* OPARENT */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 35, 0,	/* ID */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 10,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00152 */ HB_P_LINEOFFSET, 12,	/* 69 */
	HB_P_MESSAGE, 36, 0,	/* INIT */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00162 */ HB_P_LINEOFFSET, 14,	/* 71 */
	HB_P_MESSAGE, 37, 0,	/* _HOBJ */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_PUSHSYMNEAR, 38,	/* HWG_ATLAXGETDISP */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 33, 0,	/* HANDLE */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00184 */ HB_P_LINEOFFSET, 17,	/* 74 */
	HB_P_PUSHSYMNEAR, 39,	/* ERRORBLOCK */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 40,	/* BREAK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 18,	/* BERRORBLOCK */
	HB_P_TRYBEGIN, 35, 0, 0,	/* 35 (abs: 00000243) */
/* 00212 */ HB_P_LINEOFFSET, 19,	/* 76 */
	HB_P_MESSAGE, 41, 0,	/* _OOLE */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_MESSAGE, 2, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 42,	/* TOLEAUTO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_MESSAGE, 43, 0,	/* HOBJ */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00239 */ HB_P_TRYEND, 24, 0, 0,	/* 24 (abs: 00000263) */
/* 00243 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000243) */
	HB_P_POPLOCALNEAR, 17,	/* OERROR */
/* 00249 */ HB_P_LINEOFFSET, 21,	/* 78 */
	HB_P_PUSHSYMNEAR, 44,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 45, 0,	/* DESCRIPTION */
	HB_P_PUSHLOCALNEAR, 17,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00263 */ HB_P_LINEOFFSET, 23,	/* 80 */
	HB_P_PUSHSYMNEAR, 39,	/* ERRORBLOCK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* BERRORBLOCK */
	HB_P_DOSHORT, 1,
/* 00272 */ HB_P_LINEOFFSET, 36,	/* 93 */
	HB_P_PUSHSYMNEAR, 46,	/* HWG_SETUPCONNECTIONPOINT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 43, 0,	/* HOBJ */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALREF, 12, 0,	/* HSINK */
	HB_P_MESSAGE, 47, 0,	/* AAXEV */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 48, 0,	/* AAXEXEC */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_DOSHORT, 4,
/* 00303 */ HB_P_LINEOFFSET, 37,	/* 94 */
	HB_P_MESSAGE, 49, 0,	/* _HSINK */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_PUSHLOCALNEAR, 12,	/* HSINK */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00315 */ HB_P_LINEOFFSET, 39,	/* 96 */
	HB_P_PUSHLOCALNEAR, 8,	/* SELF */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00321 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HACTIVEX_RELEASE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 1,	/* SELF */
/* 00006 */ HB_P_BASELINE, 101, 0,	/* 101 */
	HB_P_PUSHSYMNEAR, 50,	/* HWG_SHUTDOWNCONNECTIONPOINT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 51, 0,	/* HSINK */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00021 */ HB_P_LINEOFFSET, 1,	/* 102 */
	HB_P_PUSHSYMNEAR, 52,	/* HWG_RELEASEDISPATCH */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 43, 0,	/* HOBJ */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00035 */ HB_P_LINEOFFSET, 3,	/* 104 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00040 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HACTIVEX___ERROR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 255,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 1,	/* SELF */
/* 00006 */ HB_P_BASELINE, 110, 0,	/* 110 */
	HB_P_PUSHSYMNEAR, 53,	/* __GETMESSAGE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 112 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00042) */
/* 00029 */ HB_P_LINEOFFSET, 3,	/* 113 */
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00042 */ HB_P_LINEOFFSET, 7,	/* 117 */
	HB_P_PUSHSYMNEAR, 55,	/* HB_EXECFROMARRAY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 56, 0,	/* OOLE */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSYMNEAR, 22,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00065 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HACTIVEX_EVENTMAP )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 3,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 4,	/* SELF */
/* 00006 */ HB_P_BASELINE, 122, 0,	/* 122 */
	HB_P_PUSHSYMNEAR, 57,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 47, 0,	/* AAXEV */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* NMSG */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 5,	/* NAT */
/* 00025 */ HB_P_LINEOFFSET, 1,	/* 123 */
	HB_P_PUSHLOCALNEAR, 5,	/* NAT */
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 00084) */
/* 00033 */ HB_P_LINEOFFSET, 2,	/* 124 */
	HB_P_PUSHSYMNEAR, 58,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 47, 0,	/* AAXEV */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* NMSG */
	HB_P_DOSHORT, 2,
/* 00049 */ HB_P_LINEOFFSET, 3,	/* 125 */
	HB_P_PUSHSYMNEAR, 58,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 48, 0,	/* AAXEXEC */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_DOSHORT, 2,
/* 00068 */ HB_P_LINEOFFSET, 4,	/* 126 */
	HB_P_PUSHSYMNEAR, 59,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 47, 0,	/* AAXEV */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* NAT */
/* 00084 */ HB_P_LINEOFFSET, 6,	/* 128 */
	HB_P_PUSHLOCALNEAR, 2,	/* XEXEC */
	HB_P_PUSHLOCALNEAR, 3,	/* OSELF */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_MESSAGE, 48, 0,	/* AAXEXEC */
	HB_P_PUSHLOCALNEAR, 4,	/* SELF */
	HB_P_IVARREF,
	HB_P_PUSHLOCALNEAR, 5,	/* NAT */
	HB_P_ARRAYPOP,
/* 00102 */ HB_P_LINEOFFSET, 7,	/* 129 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00107 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 60, 0, 1, 0,	/* symbol (_INITSTATICS), 1 statics */
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols );
}
