/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20130903)
 * Generated C source code from <procscri.prg>
 * Command: -oxbp\procscri.c -m -n -pOxbp\ -q -gc0 -B -Ic:\hwgui\include -ID:\xHarbour\include procscri.prg 
 * Created: 2015.06.17 15:51:32 (Borland C++ 5.8.2 (32 bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "procscri.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( OPENSCRIPT );
HB_FUNC( RDSCRIPT );
HB_FUNC_STATIC( COMPILESCR );
HB_FUNC_STATIC( MACROERROR );
HB_FUNC_STATIC( FOU_IF );
HB_FUNC_STATIC( FOU_DO );
HB_FUNC( DOSCRIPT );
HB_FUNC( CALLFUNC );
HB_FUNC( ENDSCRIPT );
HB_FUNC( COMPILEERR );
HB_FUNC( CODEBLOCK );
HB_FUNC( SETDEBUGINFO );
HB_FUNC( SETDEBUGGER );
HB_FUNC( SETDEBUGRUN );
HB_FUNC_STATIC( WNDOUT );
HB_FUNC_INITSTATICS();
HB_FUNC_INITLINES();

/* Forward declarations of all externally defined Functions. */
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( RDSTR );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( WCHOICE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( __PP_INIT );
HB_FUNC_EXTERN( __PP_FREE );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( __PREPROCESS );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( ERRORMESSAGE );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( PROCLINE );
HB_FUNC_EXTERN( MSGYESNO );
HB_FUNC_EXTERN( ENDWINDOW );
HB_FUNC_EXTERN( __QUIT );
HB_FUNC_EXTERN( BREAK );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( TYPE );
HB_FUNC_EXTERN( GETNEXTVAR );
HB_FUNC_EXTERN( HWG_SCRDEBUG );
HB_FUNC_EXTERN( HWG_PROCESSMESSAGE );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_PROCSCRI )
{ "OPENSCRIPT", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( OPENSCRIPT )}, &ModuleFakeDyn },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "RDSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDSTR )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "RDSCRIPT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RDSCRIPT )}, &ModuleFakeDyn },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "WCHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WCHOICE )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "__PP_INIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __PP_INIT )}, NULL },
{ "WNDOUT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WNDOUT )}, &ModuleFakeDyn },
{ "COMPILESCR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( COMPILESCR )}, &ModuleFakeDyn },
{ "__PP_FREE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __PP_FREE )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "__PREPROCESS", {HB_FS_PUBLIC}, {HB_FUNCNAME( __PREPROCESS )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "FOU_DO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( FOU_DO )}, &ModuleFakeDyn },
{ "FOU_IF", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( FOU_IF )}, &ModuleFakeDyn },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "MACROERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MACROERROR )}, &ModuleFakeDyn },
{ "ERRORMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORMESSAGE )}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "PROCLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCLINE )}, NULL },
{ "MSGYESNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGYESNO )}, NULL },
{ "ENDWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ENDWINDOW )}, NULL },
{ "__QUIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __QUIT )}, NULL },
{ "BREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( BREAK )}, NULL },
{ "DOSCRIPT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DOSCRIPT )}, &ModuleFakeDyn },
{ "ISCR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BOLDERROR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "TYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TYPE )}, NULL },
{ "ASCRIPTT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETDEBUGGER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETDEBUGGER )}, &ModuleFakeDyn },
{ "GETNEXTVAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETNEXTVAR )}, NULL },
{ "HWG_SCRDEBUG", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_SCRDEBUG )}, NULL },
{ "HWG_PROCESSMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HWG_PROCESSMESSAGE )}, NULL },
{ "EVAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CALLFUNC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CALLFUNC )}, &ModuleFakeDyn },
{ "ENDSCRIPT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ENDSCRIPT )}, &ModuleFakeDyn },
{ "COMPILEERR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( COMPILEERR )}, &ModuleFakeDyn },
{ "CODEBLOCK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CODEBLOCK )}, &ModuleFakeDyn },
{ "SETDEBUGINFO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETDEBUGINFO )}, &ModuleFakeDyn },
{ "SETDEBUGRUN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETDEBUGRUN )}, &ModuleFakeDyn },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITSTATICS00012)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_PROCSCRI )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_PROCSCRI
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_PROCSCRI )
   #include "hbiniseg.h"
#endif

HB_FUNC( OPENSCRIPT )
{
   static const BYTE pcode[] =
   {
	13,10,2,51,112,114,111,99,115,99,114,105,46,112,
	114,103,58,79,80,69,78,83,67,82,73,80,84,0,
	37,1,0,70,78,65,77,69,0,37,2,0,83,67,
	82,75,79,68,0,133,27,0,37,3,0,72,65,78,
	0,37,4,0,83,84,82,79,75,65,0,37,5,0,
	83,67,79,77,0,37,6,0,65,83,67,82,0,37,
	7,0,82,69,74,73,77,0,126,7,0,0,37,8,
	0,73,0,134,1,37,9,0,83,84,82,66,85,70,
	0,108,1,100,93,0,4,12,1,80,9,37,10,0,
	80,79,90,0,126,10,1,4,134,2,37,11,0,65,
	70,79,82,77,67,79,68,69,0,37,12,0,65,70,
	79,82,77,78,65,77,69,0,134,4,95,2,100,8,
	28,10,106,4,48,48,48,0,25,9,108,2,100,95,
	2,12,1,80,2,134,5,108,3,100,95,1,92,64,
	12,2,80,3,134,6,95,3,92,255,69,29,157,1,
	134,7,134,8,108,4,100,95,3,96,9,0,96,10,
	0,93,0,4,12,4,80,4,134,9,108,5,100,95,
	4,12,1,121,5,28,7,134,10,26,106,1,134,11,
	9,95,7,121,8,28,13,73,95,4,129,1,0,106,
	2,35,0,8,29,168,0,134,12,108,2,100,95,4,
	129,7,0,12,1,106,8,35,83,67,82,73,80,84,
	0,8,28,67,134,13,108,2,100,108,6,100,108,7,
	100,95,4,92,9,12,2,12,1,12,1,80,5,134,
	14,95,5,95,2,8,28,107,134,15,108,8,100,95,
	3,96,9,0,96,10,0,100,95,1,106,2,44,0,
	72,95,2,72,12,5,80,6,134,16,26,249,0,134,
	18,95,4,129,6,0,106,7,35,66,76,79,67,75,
	0,8,29,226,0,134,19,108,2,100,108,6,100,108,
	7,100,95,4,92,8,12,2,12,1,12,1,80,5,
	134,20,95,5,95,2,8,28,22,134,21,126,7,255,
	255,134,22,4,0,0,80,11,134,23,4,0,0,80,
	12,26,31,255,134,26,9,95,7,92,255,8,28,13,
	73,95,4,129,1,0,106,2,64,0,8,28,64,134,
	27,108,9,100,106,2,32,0,95,4,12,2,80,8,
	134,28,108,10,100,95,11,108,7,100,95,4,92,2,
	95,8,128,254,255,12,3,20,2,134,29,108,10,100,
	95,12,108,7,100,95,4,95,8,128,1,0,12,2,
	20,2,26,202,254,134,30,9,95,7,92,255,8,28,
	21,73,95,4,129,9,0,106,10,35,69,78,68,66,
	76,79,67,75,0,8,29,170,254,134,32,108,11,100,
	95,12,12,1,80,8,134,36,95,8,121,8,28,16,
	134,37,108,12,100,95,3,20,1,134,38,100,110,7,
	134,40,126,7,0,0,134,41,95,11,95,8,1,80,
	2,26,119,254,26,116,254,134,44,108,12,100,95,3,
	20,1,25,37,134,47,108,13,100,95,1,106,18,32,
	99,97,110,39,116,32,98,101,32,111,112,101,110,101,
	100,32,0,72,20,1,134,51,100,110,7,134,53,95,
	6,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( RDSCRIPT )
{
   static const BYTE pcode[] =
   {
	13,2,5,116,54,0,51,112,114,111,99,115,99,114,
	105,46,112,114,103,58,82,68,83,67,82,73,80,84,
	0,37,1,0,83,67,82,83,79,85,82,67,69,0,
	37,2,0,83,84,82,66,85,70,0,37,3,0,80,
	79,90,0,37,4,0,76,80,80,78,79,73,78,73,
	84,0,37,5,0,67,84,73,84,76,69,0,133,83,
	0,37,6,0,72,65,78,0,134,1,37,7,0,82,
	69,90,65,82,82,65,89,0,103,4,0,28,16,106,
	1,0,4,0,0,4,0,0,4,3,0,25,11,106,
	1,0,4,0,0,4,2,0,80,7,134,3,95,4,
	100,8,28,7,134,4,9,80,4,134,6,95,3,100,
	8,28,8,134,7,126,3,1,0,134,9,95,5,100,
	69,28,11,134,10,95,5,96,7,0,122,2,134,12,
	121,82,1,0,134,13,95,1,100,8,28,15,134,14,
	100,80,6,134,15,126,3,0,0,25,57,134,16,108,
	14,100,95,1,12,1,106,2,67,0,8,28,35,134,
	17,108,1,100,93,0,4,12,1,80,2,134,18,126,
	3,1,4,134,19,108,3,100,95,1,92,64,12,2,
	80,6,25,8,134,21,95,1,80,6,134,23,95,6,
	100,8,21,31,8,73,95,6,92,255,69,29,152,0,
	134,24,95,4,31,9,134,25,108,15,100,20,0,134,
	27,108,14,100,95,1,12,1,106,2,67,0,8,28,
	35,134,28,108,16,100,106,14,67,111,109,112,105,108,
	105,110,103,32,46,46,46,0,20,1,134,29,108,16,
	100,106,1,0,20,1,134,31,121,82,2,0,134,32,
	108,17,100,95,6,96,2,0,96,3,0,95,7,95,
	1,12,5,31,7,134,33,100,80,7,134,35,9,95,
	1,100,69,28,15,73,108,14,100,95,1,12,1,106,
	2,67,0,8,28,18,134,36,108,16,100,20,0,134,
	37,108,12,100,95,6,20,1,134,39,95,4,31,47,
	134,40,108,18,100,20,0,25,38,134,44,108,13,100,
	106,12,67,97,110,39,116,32,111,112,101,110,32,0,
	95,1,72,20,1,134,50,92,255,82,1,0,134,51,
	100,110,7,134,53,95,7,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( COMPILESCR )
{
   static const BYTE pcode[] =
   {
	13,9,5,116,54,0,51,112,114,111,99,115,99,114,
	105,46,112,114,103,58,67,79,77,80,73,76,69,83,
	67,82,0,37,1,0,72,65,78,0,37,2,0,83,
	84,82,66,85,70,0,37,3,0,80,79,90,0,37,
	4,0,82,69,90,65,82,82,65,89,0,37,5,0,
	83,67,82,83,79,85,82,67,69,0,133,139,0,37,
	6,0,83,67,79,77,0,37,7,0,80,79,90,49,
	0,37,8,0,83,84,82,79,75,65,0,37,9,0,
	83,84,82,70,85,76,76,0,127,9,1,0,0,37,
	10,0,66,79,76,68,69,82,82,79,82,0,37,11,
	0,73,0,37,12,0,84,77,80,65,82,82,65,89,
	0,4,0,0,80,12,134,1,37,13,0,67,76,73,
	78,69,0,37,14,0,76,68,69,66,85,71,0,108,
	5,100,95,4,12,1,92,3,16,80,14,134,3,134,
	4,108,4,100,95,1,96,2,0,96,3,0,93,0,
	4,12,4,80,13,134,5,108,5,100,95,13,12,1,
	121,5,28,7,134,6,26,49,7,134,8,103,2,0,
	23,82,2,0,134,9,95,13,130,1,0,106,2,59,
	0,8,28,27,134,10,108,19,100,95,13,108,5,100,
	95,13,12,1,128,255,255,12,2,167,9,134,11,25,
	170,134,13,108,20,100,95,9,12,1,31,11,134,14,
	95,9,95,13,72,80,13,134,16,127,9,1,0,0,
	134,18,108,21,100,108,6,100,95,13,12,1,12,1,
	80,8,134,19,95,8,130,1,0,106,2,26,0,8,
	28,23,134,20,108,19,100,95,8,108,5,100,95,8,
	12,1,128,255,255,12,2,80,8,134,22,9,108,20,
	100,95,8,12,1,31,14,73,95,8,129,2,0,106,
	3,47,47,0,69,29,66,255,134,24,95,8,129,1,
	0,106,2,35,0,8,29,193,0,134,25,108,2,100,
	95,8,129,7,0,12,1,106,8,35,69,78,68,83,
	67,82,0,8,28,7,134,26,120,110,7,134,27,108,
	2,100,95,8,129,6,0,12,1,106,7,35,68,69,
	66,85,71,0,8,28,124,134,28,9,95,14,31,15,
	73,108,5,100,95,4,92,2,1,12,1,121,8,28,
	97,134,29,120,80,14,134,30,108,10,100,95,4,4,
	0,0,20,2,134,31,108,7,100,95,8,92,7,92,
	3,12,3,106,4,71,69,82,0,8,28,58,134,32,
	108,10,100,95,4,92,2,1,95,8,20,2,134,33,
	108,10,100,95,12,106,1,0,20,2,134,34,108,10,
	100,95,4,92,3,1,108,22,100,103,2,0,92,4,
	12,2,106,2,58,0,72,95,13,72,20,2,134,37,
	26,131,254,134,40,108,23,100,95,8,20,1,134,41,
	26,117,254,134,46,108,23,100,95,8,12,1,80,8,
	134,50,108,9,100,106,2,32,0,95,8,12,2,80,
	7,134,51,108,2,100,108,7,100,95,8,122,95,7,
	121,69,28,9,95,7,128,255,255,25,5,93,231,3,
	12,3,12,1,80,6,134,52,134,53,95,6,106,8,
	80,82,73,86,65,84,69,0,8,21,31,34,73,95,
	6,106,11,80,65,82,65,77,69,84,69,82,83,0,
	8,21,31,14,73,95,6,106,6,76,79,67,65,76,
	0,8,29,209,0,134,55,108,5,100,95,4,92,2,
	1,12,1,121,8,21,31,35,73,108,14,100,95,4,
	92,2,1,92,255,1,12,1,21,80,11,106,2,67,
	0,8,21,31,10,73,95,11,106,2,65,0,8,29,
	145,0,134,56,95,6,129,2,0,106,3,76,79,0,
	8,28,35,134,57,108,10,100,95,4,92,2,1,106,
	2,32,0,108,24,100,108,7,100,95,8,92,7,12,
	2,12,1,72,20,2,25,81,134,58,95,6,129,2,
	0,106,3,80,82,0,8,28,35,134,59,108,10,100,
	95,4,92,2,1,106,2,32,0,108,24,100,108,7,
	100,95,8,92,9,12,2,12,1,72,20,2,25,33,
	134,61,108,10,100,95,4,92,2,1,106,2,47,0,
	108,24,100,108,7,100,95,8,92,12,12,2,12,1,
	72,20,2,134,63,108,10,100,95,12,106,1,0,20,
	2,26,86,4,134,65,122,82,1,0,134,66,9,110,
	7,134,69,9,95,6,106,3,68,79,0,8,28,28,
	73,108,2,100,108,7,100,95,8,92,4,92,5,12,
	3,12,1,106,6,87,72,73,76,69,0,8,21,31,
	14,73,95,6,106,6,87,72,73,76,69,0,8,28,
	29,134,70,108,10,100,95,12,95,8,20,2,134,71,
	108,10,100,95,4,92,2,1,9,20,2,26,248,3,
	134,72,95,6,106,6,69,78,68,68,79,0,8,28,
	31,134,73,108,25,100,95,4,92,2,1,95,12,12,
	2,32,216,3,134,74,92,2,82,1,0,134,75,9,
	110,7,134,77,95,6,106,5,69,88,73,84,0,8,
	28,34,134,78,108,10,100,95,12,106,5,69,88,73,
	84,0,20,2,134,79,108,10,100,95,4,92,2,1,
	9,20,2,26,158,3,134,80,95,6,106,5,76,79,
	79,80,0,8,28,34,134,81,108,10,100,95,12,106,
	5,76,79,79,80,0,20,2,134,82,108,10,100,95,
	4,92,2,1,9,20,2,26,112,3,134,83,95,6,
	106,3,73,70,0,8,28,29,134,84,108,10,100,95,
	12,95,8,20,2,134,85,108,10,100,95,4,92,2,
	1,9,20,2,26,73,3,134,86,95,6,106,7,69,
	76,83,69,73,70,0,8,28,62,134,87,108,26,100,
	95,4,95,12,120,12,3,31,14,134,88,92,3,82,
	1,0,134,89,9,110,7,134,91,108,10,100,95,12,
	108,7,100,95,8,92,5,12,2,20,2,134,92,108,
	10,100,95,4,92,2,1,9,20,2,26,253,2,134,
	93,95,6,106,5,69,76,83,69,0,8,28,61,134,
	94,108,26,100,95,4,95,12,120,12,3,31,13,134,
	95,122,82,1,0,134,96,9,110,7,134,98,108,10,
	100,95,12,106,7,73,70,32,46,84,46,0,20,2,
	134,99,108,10,100,95,4,92,2,1,9,20,2,26,
	180,2,134,100,95,6,106,6,69,78,68,73,70,0,
	8,28,28,134,101,108,26,100,95,4,95,12,9,12,
	3,32,150,2,134,102,122,82,1,0,134,103,9,110,
	7,134,105,95,6,106,7,82,69,84,85,82,78,0,
	8,29,218,0,134,106,108,27,100,89,63,0,1,0,
	1,0,8,0,51,112,114,111,99,115,99,114,105,46,
	112,114,103,58,67,79,77,80,73,76,69,83,67,82,
	0,37,255,255,83,84,82,79,75,65,0,37,1,0,
	69,0,36,245,0,108,28,100,122,95,1,95,255,12,
	3,6,12,1,80,10,113,61,0,0,134,108,108,10,
	100,95,4,92,2,1,106,14,123,124,124,69,110,100,
	83,99,114,105,112,116,40,0,108,6,100,108,7,100,
	95,8,92,7,12,2,12,1,72,106,3,41,125,0,
	72,41,11,108,10,20,2,114,62,0,0,134,109,115,
	73,134,110,9,95,5,100,69,28,15,73,108,14,100,
	95,5,12,1,106,2,67,0,8,28,18,134,111,108,
	16,100,20,0,134,112,108,12,100,95,1,20,1,134,
	114,108,27,100,95,10,20,1,134,115,9,110,7,134,
	117,108,27,100,95,10,20,1,134,118,108,10,100,95,
	12,106,1,0,20,2,26,163,1,134,119,95,6,106,
	9,70,85,78,67,84,73,79,78,0,8,29,159,0,
	134,120,108,6,100,108,7,100,95,8,95,7,128,1,
	0,12,2,12,1,80,8,134,121,108,9,100,106,2,
	40,0,95,8,12,2,80,7,134,122,108,2,100,108,
	19,100,95,8,95,7,121,69,28,9,95,7,128,255,
	255,25,5,93,231,3,12,2,12,1,80,6,134,123,
	108,10,100,95,4,92,2,1,95,14,28,15,95,6,
	4,0,0,4,0,0,4,3,0,25,10,95,6,4,
	0,0,4,2,0,20,2,134,124,108,10,100,95,12,
	106,1,0,20,2,134,125,108,17,100,95,1,96,2,
	0,96,3,0,95,4,92,2,1,108,5,100,95,4,
	92,2,1,12,1,1,12,4,32,249,0,134,126,9,
	110,7,134,128,95,6,106,11,35,69,78,68,83,67,
	82,73,80,84,0,8,21,31,19,73,95,6,129,7,
	0,106,8,69,78,68,70,85,78,67,0,8,28,7,
	134,129,120,110,7,134,130,134,131,108,27,100,89,63,
	0,1,0,1,0,8,0,51,112,114,111,99,115,99,
	114,105,46,112,114,103,58,67,79,77,80,73,76,69,
	83,67,82,0,37,255,255,83,84,82,79,75,65,0,
	37,1,0,69,0,36,14,1,108,28,100,122,95,1,
	95,255,12,3,6,12,1,80,10,113,43,0,0,134,
	133,108,10,100,95,4,92,2,1,106,4,123,124,124,
	0,108,24,100,95,8,12,1,72,106,2,125,0,72,
	41,11,108,10,20,2,114,62,0,0,134,134,115,73,
	134,135,9,95,5,100,69,28,15,73,108,14,100,95,
	5,12,1,106,2,67,0,8,28,18,134,136,108,16,
	100,20,0,134,137,108,12,100,95,1,20,1,134,139,
	108,27,100,95,10,20,1,134,140,9,110,7,134,142,
	108,27,100,95,10,20,1,134,143,108,10,100,95,12,
	106,1,0,20,2,134,145,9,95,14,28,24,73,108,
	5,100,95,4,92,3,1,12,1,108,5,100,95,4,
	92,2,1,12,1,35,28,32,134,146,108,10,100,95,
	4,92,3,1,108,22,100,103,2,0,92,4,12,2,
	106,2,58,0,72,95,13,72,20,2,26,173,248,134,
	150,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( MACROERROR )
{
   static const BYTE pcode[] =
   {
	13,2,3,51,112,114,111,99,115,99,114,105,46,112,
	114,103,58,77,65,67,82,79,69,82,82,79,82,0,
	37,1,0,78,77,0,37,2,0,69,0,37,3,0,
	83,84,82,79,75,65,0,133,36,1,37,4,0,78,
	0,37,5,0,67,84,73,84,76,69,0,134,3,95,
	1,122,8,28,79,134,5,108,29,100,95,2,12,1,
	106,2,10,0,72,106,2,13,0,72,106,3,105,110,
	0,72,106,2,10,0,72,106,2,13,0,72,108,24,
	100,95,3,12,1,72,80,3,134,6,127,5,23,0,
	83,99,114,105,112,116,32,99,111,109,112,105,108,105,
	110,103,32,101,114,114,111,114,0,26,201,0,134,7,
	95,1,92,2,8,28,45,134,8,108,29,100,95,2,
	12,1,80,3,134,9,127,5,23,0,83,99,114,105,
	112,116,32,118,97,114,105,97,98,108,101,115,32,101,
	114,114,111,114,0,26,149,0,134,10,95,1,92,3,
	8,29,139,0,134,11,126,4,2,0,134,12,108,20,
	100,108,30,100,95,4,12,1,12,1,31,63,134,13,
	106,15,13,10,67,97,108,108,101,100,32,102,114,111,
	109,32,0,108,30,100,95,4,12,1,72,106,2,40,
	0,72,108,24,100,108,22,100,108,31,100,95,4,173,
	4,12,1,12,1,12,1,72,106,2,41,0,72,167,
	3,25,181,134,15,108,29,100,95,2,12,1,106,2,
	10,0,72,106,2,13,0,72,95,3,72,80,3,134,
	16,127,5,23,0,83,99,114,105,112,116,32,101,120,
	101,99,117,116,105,111,110,32,101,114,114,111,114,0,
	134,18,106,15,13,10,13,10,67,111,110,116,105,110,
	117,101,32,63,0,167,3,134,19,108,32,100,95,3,
	95,5,12,2,31,16,134,20,108,33,100,20,0,134,
	21,108,34,100,20,0,134,37,108,35,100,20,0,134,
	38,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( FOU_IF )
{
   static const BYTE pcode[] =
   {
	13,3,3,116,54,0,51,112,114,111,99,115,99,114,
	105,46,112,114,103,58,70,79,85,95,73,70,0,37,
	1,0,82,69,90,65,82,82,65,89,0,37,2,0,
	84,77,80,65,82,82,65,89,0,37,3,0,80,82,
	74,85,0,133,77,1,37,4,0,73,0,37,5,0,
	74,0,37,6,0,66,79,76,68,69,82,82,79,82,
	0,134,2,95,3,28,76,134,3,108,10,100,95,2,
	106,5,74,85,77,80,0,20,2,134,4,108,10,100,
	95,1,92,2,1,9,20,2,134,5,108,5,100,95,
	1,12,1,92,3,16,28,33,134,6,108,10,100,95,
	1,92,3,1,108,22,100,103,2,0,92,4,12,2,
	106,6,58,74,85,77,80,0,72,20,2,134,9,108,
	5,100,95,1,92,2,1,12,1,80,5,134,10,95,
	5,80,4,95,4,122,92,255,10,29,80,1,134,11,
	108,2,100,95,2,95,4,1,129,2,0,12,1,106,
	3,73,70,0,8,29,49,1,134,12,108,27,100,89,
	71,0,1,0,2,0,2,0,4,0,51,112,114,111,
	99,115,99,114,105,46,112,114,103,58,70,79,85,95,
	73,70,0,37,255,255,84,77,80,65,82,82,65,89,
	0,37,254,255,73,0,37,1,0,69,0,36,89,1,
	108,28,100,122,95,1,95,255,95,254,1,12,3,6,
	12,1,80,6,113,84,0,0,134,15,106,8,123,124,
	124,73,73,70,40,0,108,24,100,108,7,100,95,2,
	95,4,1,92,4,12,2,12,1,72,106,12,44,46,
	84,46,44,105,115,99,114,58,61,0,72,108,6,100,
	108,22,100,95,5,92,5,12,2,12,1,72,106,3,
	41,125,0,72,40,11,95,1,92,2,168,95,4,2,
	114,22,0,0,134,16,115,73,134,17,108,27,100,95,
	6,20,1,134,18,9,110,7,134,20,108,27,100,95,
	6,20,1,134,21,106,1,0,96,2,0,95,4,2,
	134,22,174,4,134,23,9,95,4,121,15,28,16,73,
	95,2,95,4,1,106,5,74,85,77,80,0,8,28,
	68,134,24,106,10,123,124,124,105,115,99,114,58,61,
	0,108,6,100,108,22,100,95,3,28,9,95,5,128,
	255,255,25,4,95,5,92,5,12,2,12,1,72,106,
	2,125,0,72,40,11,95,1,92,2,168,95,4,2,
	134,25,106,1,0,96,2,0,95,4,2,134,27,120,
	110,7,134,29,174,4,26,173,254,134,30,9,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( FOU_DO )
{
   static const BYTE pcode[] =
   {
	13,5,2,51,112,114,111,99,115,99,114,105,46,112,
	114,103,58,70,79,85,95,68,79,0,37,1,0,82,
	69,90,65,82,82,65,89,0,37,2,0,84,77,80,
	65,82,82,65,89,0,133,110,1,37,3,0,73,0,
	37,4,0,74,0,37,5,0,73,76,79,79,80,0,
	126,5,0,0,37,6,0,73,80,79,83,0,37,7,
	0,66,79,76,68,69,82,82,79,82,0,134,2,108,
	5,100,95,1,12,1,80,4,134,3,95,4,80,3,
	95,3,122,92,255,10,29,54,2,134,4,9,108,20,
	100,95,2,95,3,1,12,1,31,19,73,95,2,95,
	3,1,129,4,0,106,5,69,88,73,84,0,8,28,
	58,134,5,106,10,123,124,124,105,115,99,114,58,61,
	0,108,6,100,108,22,100,95,4,128,1,0,92,5,
	12,2,12,1,72,106,2,125,0,72,40,11,96,1,
	0,95,3,2,134,6,106,1,0,96,2,0,95,3,
	2,134,8,9,108,20,100,95,2,95,3,1,12,1,
	31,19,73,95,2,95,3,1,129,4,0,106,5,76,
	79,79,80,0,8,28,8,134,9,95,3,80,5,134,
	13,9,108,20,100,95,2,95,3,1,12,1,31,54,
	73,108,2,100,95,2,95,3,1,129,8,0,12,1,
	106,9,68,79,32,87,72,73,76,69,0,5,21,31,
	25,73,108,2,100,95,2,95,3,1,129,5,0,12,
	1,106,6,87,72,73,76,69,0,5,29,103,1,134,
	14,108,27,100,89,71,0,1,0,2,0,2,0,3,
	0,51,112,114,111,99,115,99,114,105,46,112,114,103,
	58,70,79,85,95,68,79,0,37,255,255,84,77,80,
	65,82,82,65,89,0,37,254,255,73,0,37,1,0,
	69,0,36,124,1,108,28,100,122,95,1,95,255,95,
	254,1,12,3,6,12,1,80,7,113,109,0,0,134,
	18,106,8,123,124,124,73,73,70,40,0,108,24,100,
	108,7,100,95,2,95,3,1,108,2,100,95,2,95,
	3,1,129,1,0,12,1,106,2,68,0,8,28,6,
	92,10,25,4,92,7,12,2,12,1,72,106,12,44,
	46,84,46,44,105,115,99,114,58,61,0,72,108,6,
	100,108,22,100,95,4,128,1,0,92,5,12,2,12,
	1,72,106,3,41,125,0,72,40,11,96,1,0,95,
	3,2,114,22,0,0,134,19,115,73,134,20,108,27,
	100,95,7,20,1,134,21,9,110,7,134,23,108,27,
	100,95,7,20,1,134,24,106,1,0,96,2,0,95,
	3,2,134,25,108,10,100,95,1,106,10,123,124,124,
	105,115,99,114,58,61,0,108,6,100,108,22,100,95,
	3,128,255,255,92,5,12,2,12,1,72,106,2,125,
	0,72,41,11,108,10,20,2,134,26,108,10,100,95,
	2,106,1,0,20,2,134,27,95,5,121,15,28,58,
	134,28,106,10,123,124,124,105,115,99,114,58,61,0,
	108,6,100,108,22,100,95,3,128,255,255,92,5,12,
	2,12,1,72,106,2,125,0,72,40,11,96,1,0,
	95,5,2,134,29,106,1,0,96,2,0,95,5,2,
	134,31,120,110,7,134,33,174,3,26,199,253,134,34,
	9,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( DOSCRIPT )
{
   static const BYTE pcode[] =
   {
	13,9,2,116,54,0,51,112,114,111,99,115,99,114,
	105,46,112,114,103,58,68,79,83,67,82,73,80,84,
	0,37,1,0,65,83,67,82,73,80,84,0,37,2,
	0,65,80,65,82,65,77,83,0,133,147,1,37,3,
	0,65,82,76,69,78,0,37,4,0,83,84,82,79,
	75,65,0,37,5,0,86,65,82,78,65,77,69,0,
	37,6,0,86,65,82,86,65,76,85,69,0,37,7,
	0,76,68,69,66,85,71,0,37,8,0,76,80,65,
	82,65,77,0,37,9,0,74,0,37,10,0,82,69,
	84,86,65,76,85,69,0,37,11,0,76,83,69,84,
	68,69,66,85,71,71,69,82,0,9,80,11,134,2,
	122,108,39,100,108,37,108,38,20,2,81,37,0,134,
	4,100,82,3,0,134,5,108,40,100,106,9,97,83,
	99,114,105,112,116,116,0,92,11,12,2,106,2,65,
	0,69,28,16,134,6,95,1,108,39,100,108,41,20,
	1,81,41,0,134,8,95,1,100,8,21,31,18,73,
	108,5,100,95,1,92,2,1,12,1,21,80,3,121,
	8,28,7,134,9,120,110,7,134,11,108,5,100,95,
	1,12,1,92,3,16,80,7,134,12,108,14,100,95,
	1,92,2,1,98,37,0,1,12,1,106,2,66,0,
	69,29,71,1,134,13,108,14,100,95,1,92,2,1,
	98,37,0,1,12,1,106,2,67,0,8,29,35,1,
	134,14,95,1,92,2,1,98,37,0,1,129,1,0,
	106,2,35,0,8,28,25,134,15,103,5,0,32,6,
	1,134,16,120,80,11,134,17,108,42,100,20,0,26,
	247,0,134,20,108,7,100,95,1,92,2,1,98,37,
	0,1,92,2,12,2,80,4,134,21,95,1,92,2,
	1,98,37,0,1,129,1,0,106,2,47,0,8,80,
	8,134,22,108,27,100,89,48,0,1,0,0,0,51,
	112,114,111,99,115,99,114,105,46,112,114,103,58,68,
	79,83,67,82,73,80,84,0,37,1,0,69,0,36,
	169,1,108,28,100,92,2,95,1,12,2,6,12,1,
	81,38,0,113,109,0,0,134,24,126,9,1,0,134,
	25,108,20,100,108,43,100,96,4,0,96,6,0,12,
	2,21,80,5,12,1,31,74,134,26,108,39,100,95,
	5,20,1,134,27,95,6,100,69,28,12,134,28,95,
	6,40,11,95,5,38,11,134,30,9,95,8,28,21,
	73,9,95,2,100,69,28,13,73,108,5,100,95,2,
	12,1,95,9,16,28,13,134,31,95,2,95,9,1,
	95,5,38,11,134,33,173,9,25,163,114,30,0,0,
	134,35,115,73,134,36,108,16,100,20,0,134,37,108,
	27,100,98,38,0,20,1,134,38,9,110,7,134,40,
	108,27,100,98,38,0,20,1,134,43,98,37,0,23,
	81,37,0,26,167,254,134,45,95,7,28,84,134,46,
	108,27,100,89,70,0,1,0,1,0,1,0,51,112,
	114,111,99,115,99,114,105,46,112,114,103,58,68,79,
	83,67,82,73,80,84,0,37,255,255,65,83,67,82,
	73,80,84,0,37,1,0,69,0,36,193,1,108,28,
	100,92,3,95,1,95,255,92,3,1,98,37,0,1,
	12,3,6,12,1,81,38,0,25,73,134,48,108,27,
	100,89,61,0,1,0,0,0,51,112,114,111,99,115,
	99,114,105,46,112,114,103,58,68,79,83,67,82,73,
	80,84,0,37,1,0,69,0,36,195,1,108,28,100,
	92,3,95,1,108,6,100,108,22,100,98,37,0,12,
	1,12,1,12,3,6,12,1,81,38,0,113,182,0,
	0,134,51,9,95,7,28,6,73,103,5,0,28,116,
	134,52,9,98,37,0,121,15,28,9,73,98,37,0,
	95,3,34,28,71,134,54,103,5,0,28,36,134,55,
	9,82,6,0,134,56,108,44,100,95,1,98,37,0,
	20,2,134,57,103,6,0,31,11,134,58,108,45,100,
	20,0,25,242,134,62,48,46,0,95,1,92,2,1,
	98,37,0,1,112,0,73,134,63,98,37,0,23,81,
	37,0,25,170,134,66,108,44,100,95,1,121,20,2,
	134,67,95,11,28,59,134,68,108,42,100,9,20,1,
	25,49,134,72,9,98,37,0,121,15,28,9,73,98,
	37,0,95,3,34,28,30,134,73,48,46,0,95,1,
	92,2,1,98,37,0,1,112,0,73,134,74,98,37,
	0,23,81,37,0,25,211,114,53,0,0,134,77,115,
	73,134,78,108,16,100,20,0,134,79,108,27,100,98,
	38,0,20,1,134,81,9,95,7,28,6,73,103,5,
	0,28,12,134,82,108,44,100,95,1,121,20,2,134,
	85,9,110,7,134,87,108,27,100,98,38,0,20,1,
	134,88,108,16,100,20,0,134,90,103,3,0,80,10,
	134,91,100,82,3,0,134,92,95,10,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( CALLFUNC )
{
   static const BYTE pcode[] =
   {
	13,1,3,116,54,0,51,112,114,111,99,115,99,114,
	105,46,112,114,103,58,67,65,76,76,70,85,78,67,
	0,37,1,0,67,80,82,79,67,0,37,2,0,65,
	80,65,82,65,77,83,0,37,3,0,65,83,67,82,
	73,80,84,0,133,242,1,37,4,0,73,0,126,4,
	1,0,134,3,95,3,100,8,28,9,134,4,98,41,
	0,80,3,134,6,100,82,3,0,134,7,108,2,100,
	95,1,12,1,80,1,134,8,9,95,4,108,5,100,
	95,3,92,2,1,12,1,34,28,21,73,108,14,100,
	95,3,92,2,1,95,4,1,12,1,106,2,65,0,
	8,28,46,134,9,95,3,92,2,1,95,4,1,122,
	1,95,1,8,28,23,134,10,108,36,100,95,3,92,
	2,1,95,4,1,95,2,20,2,134,11,25,8,134,
	13,173,4,25,175,134,16,103,3,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( ENDSCRIPT )
{
   static const BYTE pcode[] =
   {
	13,0,1,116,54,0,51,112,114,111,99,115,99,114,
	105,46,112,114,103,58,69,78,68,83,67,82,73,80,
	84,0,37,1,0,88,82,69,84,86,65,76,85,69,
	0,133,5,2,95,1,82,3,0,134,1,92,157,81,
	37,0,134,2,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( COMPILEERR )
{
   static const BYTE pcode[] =
   {
	13,0,1,116,54,0,51,112,114,111,99,115,99,114,
	105,46,112,114,103,58,67,79,77,80,73,76,69,69,
	82,82,0,37,1,0,78,76,73,78,69,0,133,10,
	2,103,2,0,80,1,134,1,103,1,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( CODEBLOCK )
{
   static const BYTE pcode[] =
   {
	13,0,1,51,112,114,111,99,115,99,114,105,46,112,
	114,103,58,67,79,68,69,66,76,79,67,75,0,37,
	1,0,83,84,82,73,78,71,0,133,14,2,95,1,
	129,2,0,106,3,123,124,0,8,28,10,134,1,95,
	1,40,11,110,7,134,3,106,4,123,124,124,0,95,
	1,72,106,2,125,0,72,40,11,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( SETDEBUGINFO )
{
   static const BYTE pcode[] =
   {
	13,0,1,116,54,0,51,112,114,111,99,115,99,114,
	105,46,112,114,103,58,83,69,84,68,69,66,85,71,
	73,78,70,79,0,37,1,0,76,68,69,66,85,71,
	0,133,21,2,95,1,100,8,28,5,120,25,4,95,
	1,82,4,0,134,1,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( SETDEBUGGER )
{
   static const BYTE pcode[] =
   {
	13,0,1,116,54,0,51,112,114,111,99,115,99,114,
	105,46,112,114,103,58,83,69,84,68,69,66,85,71,
	71,69,82,0,37,1,0,76,68,69,66,85,71,0,
	133,26,2,95,1,100,8,28,5,120,25,4,95,1,
	82,5,0,134,1,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( SETDEBUGRUN )
{
   static const BYTE pcode[] =
   {
	116,54,0,51,112,114,111,99,115,99,114,105,46,112,
	114,103,58,83,69,84,68,69,66,85,71,82,85,78,
	0,133,31,2,120,82,6,0,134,1,120,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WNDOUT )
{
   static const BYTE pcode[] =
   {
	51,112,114,111,99,115,99,114,105,46,112,114,103,58,
	87,78,68,79,85,84,0,133,38,2,100,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,54,0,12,0,116,54,0,51,112,114,111,99,115,
	99,114,105,46,112,114,103,0,118,1,1,0,78,76,
	65,83,84,69,82,82,79,82,0,118,1,2,0,78,
	85,77,76,73,78,0,118,1,3,0,83,67,82,95,
	82,69,84,86,65,76,85,69,0,9,82,4,0,118,
	1,4,0,76,68,69,66,85,71,73,78,70,79,0,
	9,82,5,0,118,1,5,0,76,68,69,66,85,71,
	71,69,82,0,9,82,6,0,118,1,6,0,76,68,
	69,66,85,71,82,85,78,0,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	51,112,114,111,99,115,99,114,105,0,106,13,112,114,
	111,99,115,99,114,105,46,112,114,103,0,92,24,106,
	67,184,255,239,231,139,155,68,217,182,127,221,221,141,
	96,217,123,235,250,63,25,226,125,53,127,255,223,239,
	183,111,255,123,223,54,146,254,219,3,0,166,207,243,
	126,77,223,24,239,175,169,219,159,251,214,75,203,62,
	230,56,55,237,100,191,228,204,98,140,65,0,4,3,
	0,4,1,0,110,7
   };

   hb_vmExecute( pcode, symbols );
}

