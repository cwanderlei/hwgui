/*
 * $Id: hipedit.prg 2086 2013-06-23 12:57:56Z alkresin $
 *
 * HWGUI - Harbour Win32 GUI library source code:
 * HTab class
 *
 * Copyright 2002 Alexander S.Kresin <alex@kresin.ru>
 * www - http://www.kresin.ru
*/

#include "windows.ch"
#include "hbclass.ch"
#include "guilib.ch"

#define  IPN_FIELDCHANGED   4294966436

//- HIPedit

CLASS HIPedit INHERIT HControl

CLASS VAR winclass   INIT "SysIPAddress32"
   DATA bSetGet
   DATA bChange
   DATA bKillFocus
   DATA bGetFocus
   DATA lnoValid   INIT .F.

   METHOD New( oWndParent, nId, aValue, bSetGet, nStyle, nLeft, nTop, nWidth, nHeight, ;
               oFont, bGetFocus, bKillFocus )
   METHOD Activate()
   METHOD Init()
   METHOD SetValue( aValue )
   METHOD GetValue(  )
   METHOD Clear(  )
   METHOD END()

   HIDDEN:
   DATA  aValue           // Valor atual

ENDCLASS

METHOD New( oWndParent, nId, aValue, bSetGet, nStyle, nLeft, nTop, nWidth, nHeight, ;
            oFont, bGetFocus, bKillFocus ) CLASS HIPedit

   nStyle   := Hwg_BitOr( IIf( nStyle == Nil, 0, nStyle ), WS_TABSTOP )
   ::Super:New( oWndParent, nId, nStyle, nLeft, nTop, nWidth, nHeight, oFont )

   ::title   := ""

   ::bSetGet := bSetGet
   DEFAULT aValue := { 0, 0, 0, 0 }
   ::aValue  := aValue
   ::bGetFocus  := bGetFocus
   ::bKillFocus := bKillFocus

   HWG_InitCommonControlsEx()
   ::Activate()


   IF bGetFocus != Nil
      ::lnoValid := .T.
   ENDIF
   IF bKillFocus != Nil
      ::oParent:AddEvent( IPN_FIELDCHANGED, ::id, ::bKillFocus, .t., "onChange" )
   ENDIF
  * ENDIF

   // Notificacoes de Ganho e perda de foco
   ::oParent:AddEvent( EN_SETFOCUS , ::id, { | o, id | __GetFocus( o:FindControl( id ) ) },, "onGotFocus" )
   ::oParent:AddEvent( EN_KILLFOCUS, ::id, { | o, id | __KillFocus( o:FindControl( id ) ) },, "onLostFocus" )


   RETURN Self

METHOD Activate() CLASS HIPedit
   IF ! Empty( ::oParent:handle )
      ::handle := hwg_Initipaddress ( ::oParent:handle, ::id, ::style , ;
                                  ::nLeft, ::nTop, ::nWidth, ::nHeight )
      ::Init()
   ENDIF
   RETURN Nil

METHOD Init() CLASS HIPedit

   IF ! ::lInit
      ::Super:Init()
      ::SetValue( ::aValue )
      ::lInit := .t.
   ENDIF

   RETURN Nil

METHOD SetValue( aValue ) CLASS HIPedit
   hwg_Setipaddress( ::handle , aValue[ 1 ], aValue[ 2 ], aValue[ 3 ], aValue[ 4 ] )
   ::aValue := aValue
   RETURN Nil


METHOD GetValue( ) CLASS HIPedit
   ::aValue := hwg_Getipaddress( ::handle )
   RETURN ( ::aValue )

METHOD Clear( ) CLASS HIPedit
   hwg_Clearipaddress( ::handle )
   ::aValue := { 0, 0, 0, 0 }
   RETURN ( ::aValue )


METHOD END() CLASS HIPedit

   // Nothing to do here, yet!
   ::Super:END()

   RETURN Nil


STATIC FUNCTION __GetFocus( oCtrl )
   LOCAL xRet

   //IF ! CheckFocus( oCtrl, .f. )
   //   RETURN .t.
   //ENDIF

   IF ValType( oCtrl:bGetFocus ) == "B"
      //oCtrl:oparent:lSuspendMsgsHandling := .T.
      oCtrl:lnoValid := .T.
      xRet := Eval( oCtrl:bGetFocus, oCtrl )
      //oCtrl:oparent:lSuspendMsgsHandling := .F.
      oCtrl:lnoValid := xRet
   ENDIF

   RETURN xRet


STATIC FUNCTION __KillFocus( oCtrl )
   LOCAL xRet

   //IF ! CheckFocus( oCtrl, .t. ) .or. oCtrl:lNoValid
   //   RETURN .t.
   //ENDIF

   IF ValType( oCtrl:bKillFocus ) == "B"
      //oCtrl:oparent:lSuspendMsgsHandling := .T.
      xRet := Eval( oCtrl:bKillFocus, oCtrl )
      //oCtrl:oparent:lSuspendMsgsHandling := .F.
   ENDIF

   RETURN xRet
