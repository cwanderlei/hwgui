/*
 * $Id: hcombo.prg 2093 2013-06-24 08:30:58Z alkresin $
 *
 * HWGUI - Harbour Win32 GUI library source code:
 * HCombo class
 *
 * Copyright 2002 Alexander S.Kresin <alex@kresin.ru>
 * www - http://www.kresin.ru
*/

#include "windows.ch"
#include "hbclass.ch"
#include "guilib.ch"

CLASS HComboBox INHERIT HControl

   CLASS VAR winclass   INIT "COMBOBOX"
   DATA  aItems
   DATA  bSetGet
   DATA  value    INIT 1
   DATA  bValid   INIT { || .T. }
   DATA  bChangeSel
   DATA  nDisplay

   DATA  lText    INIT .F.
   DATA  lEdit    INIT .F.

   METHOD New( oWndParent, nId, vari, bSetGet, nStyle, nLeft, nTop, nWidth, nHeight, ;
      aItems, oFont, bInit, bSize, bPaint, bChange, ctooltip, lEdit, lText, bGFocus, tcolor, bcolor, bValid )
   METHOD Activate()
   METHOD Redefine( oWnd, nId, vari, bSetGet, aItems, oFont, bInit, bSize, bDraw, bChange, ctooltip, bGFocus )
   METHOD Init( aCombo, nCurrent )
   METHOD Refresh()
   METHOD Setitem( nPos )
   METHOD GetValue()

ENDCLASS

METHOD New( oWndParent, nId, vari, bSetGet, nStyle, nLeft, nTop, nWidth, nHeight, ;
      aItems, oFont, bInit, bSize, bPaint, bChange, ctooltip, lEdit, lText, ;
      bGFocus, tcolor, bcolor, bValid, nDisplay ) CLASS HComboBox

   IF lEdit == Nil; lEdit := .F. ; ENDIF
   IF lText == Nil; lText := .F. ; ENDIF

   nStyle := Hwg_BitOr( iif( nStyle == Nil,0,nStyle ), iif( lEdit,CBS_DROPDOWN,CBS_DROPDOWNLIST ) + WS_TABSTOP )
   IF !Empty( nDisplay )
      nStyle := Hwg_BitOr( nStyle, CBS_NOINTEGRALHEIGHT )
      ::nDisplay := nDisplay
   ENDIF
   ::Super:New( oWndParent, nId, nStyle, nLeft, nTop, nWidth, nHeight, oFont, bInit, bSize, bPaint, ctooltip, tcolor, bcolor )

   ::lEdit := lEdit
   ::lText := lText

   IF lEdit
      ::lText := .T.
   ENDIF

   if ::lText
      ::value := iif( vari == Nil .OR. ValType( vari ) != "C", "", Trim( vari ) )
   ELSE
      ::value := iif( vari == Nil .OR. ValType( vari ) != "N", 1, vari )
   ENDIF

   ::bSetGet := bSetGet
   ::aItems  := aItems

   ::Activate()

   IF bSetGet != Nil
      ::bChangeSel := bChange
      ::bGetFocus := bGFocus
      ::oParent:AddEvent( CBN_SETFOCUS, ::id, { |o, id|__When( o:FindControl(id ) ) } )

      // By Luiz Henrique dos Santos (luizhsantos@gmail.com) 03/06/2006
      if ::bSetGet <> nil
         ::oParent:AddEvent( CBN_SELCHANGE, ::id, { |o, id|__Valid( o:FindControl(id ) ) } )
      elseif ::bChangeSel != NIL
         ::oParent:AddEvent( CBN_SELCHANGE, ::id, { |o, id|__Valid( o:FindControl(id ) ) } )
      ENDIF

      IF bValid != NIL
         ::bValid := bValid
         ::oParent:AddEvent( CBN_KILLFOCUS, ::id, { |o, id|__Valid( o:FindControl(id ) ) } )
      ENDIF
      //---------------------------------------------------------------------------
   ELSEIF bChange != Nil
      ::oParent:AddEvent( CBN_SELCHANGE, ::id, bChange )
   ENDIF

   IF ::lEdit
      ::oParent:AddEvent( CBN_KILLFOCUS, ::id, { |o, id|__KillFocus( o:FindControl(id ) ) } )
   ENDIF

   IF bGFocus != Nil .AND. bSetGet == Nil
      ::oParent:AddEvent( CBN_SETFOCUS, ::id, { |o, id|__When( o:FindControl(id ) ) } )
   ENDIF

   RETURN Self

METHOD Activate CLASS HComboBox

   IF !Empty( ::oParent:handle )
      ::handle := hwg_Createcombo( ::oParent:handle, ::id, ;
         ::style, ::nLeft, ::nTop, ::nWidth, ::nHeight )
      ::Init()
   ENDIF

   RETURN Nil

METHOD Redefine( oWndParent, nId, vari, bSetGet, aItems, oFont, bInit, bSize, bPaint, ;
      bChange, ctooltip, bGFocus ) CLASS HComboBox

   ::Super:New( oWndParent, nId, 0, 0, 0, 0, 0, oFont, bInit, bSize, bPaint, ctooltip )

   if ::lText
      ::value := iif( vari == Nil .OR. ValType( vari ) != "C", "", Trim( vari ) )
   ELSE
      ::value := iif( vari == Nil .OR. ValType( vari ) != "N", 1, vari )
   ENDIF
   ::bSetGet := bSetGet
   ::aItems  := aItems

   IF bSetGet != Nil
      ::bChangeSel := bChange
      // By Luiz Henrique dos Santos (luizhsantos@gmail.com) 04/06/2006
      IF ::bChangeSel != NIL
         ::oParent:AddEvent( CBN_SELCHANGE, ::id, { |o, id|__Valid( o:FindControl(id ) ) } )
      ENDIF
   ELSEIF bChange != Nil
      ::oParent:AddEvent( CBN_SELCHANGE, ::id, bChange )
   ENDIF
   ::Refresh() // By Luiz Henrique dos Santos

   RETURN Self

METHOD Init() CLASS HComboBox
   LOCAL i, nHeightBox, nHeightItem

   IF !::lInit
      ::Super:Init()
      IF ::aItems != Nil
         IF ::value == Nil
            IF ::lText
               ::value := ::aItems[1]
            ELSE
               ::value := 1
            ENDIF
         ENDIF
         hwg_Sendmessage( ::handle, CB_RESETCONTENT, 0, 0 )
         FOR i := 1 TO Len( ::aItems )
            hwg_Comboaddstring( ::handle, ::aItems[i] )
         NEXT
         IF ::lText
            IF ::lEdit
               hwg_Setdlgitemtext( hwg_GetModalHandle(), ::id, ::value )
            ELSE
               hwg_Combosetstring( ::handle, AScan( ::aItems, ::value ) )
            ENDIF
         ELSE
            hwg_Combosetstring( ::handle, ::value )
         ENDIF
      ENDIF
      IF !Empty( ::nDisplay )
         nHeightBox := hwg_Sendmessage( ::handle, CB_GETITEMHEIGHT, - 1, 0 )
         nHeightItem := hwg_Sendmessage( ::handle, CB_GETITEMHEIGHT, - 1, 0 )
         ::nHeight := nHeightBox + nHeightItem * ( ::nDisplay )
         hwg_Movewindow( ::handle, ::nLeft, ::nTop, ::nWidth, ::nHeight )
      ENDIF
   ENDIF

   RETURN Nil

METHOD Refresh() CLASS HComboBox
   LOCAL vari, i

   IF ::bSetGet != Nil
      vari := Eval( ::bSetGet, , Self )
      if ::lText
         ::value := iif( vari == Nil .OR. ValType( vari ) != "C", "", Trim( vari ) )
      ELSE
         ::value := iif( vari == Nil .OR. ValType( vari ) != "N", 1, vari )
      ENDIF
   ENDIF

   hwg_Sendmessage( ::handle, CB_RESETCONTENT, 0, 0 )

   FOR i := 1 TO Len( ::aItems )
      hwg_Comboaddstring( ::handle, ::aItems[i] )
   NEXT

   IF ::lText
      IF ::lEdit
         hwg_Setdlgitemtext( hwg_GetModalHandle(), ::id, ::value )
      ELSE
         hwg_Combosetstring( ::handle, AScan( ::aItems, ::value ) )
      ENDIF
   ELSE
      hwg_Combosetstring( ::handle, ::value )
      ::SetItem( ::value )
   ENDIF

   RETURN Nil

METHOD SetItem( nPos ) CLASS HComboBox

   IF ::lText
      ::value := ::aItems[nPos]
   ELSE
      ::value := nPos
   ENDIF

   hwg_Sendmessage( ::handle, CB_SETCURSEL, nPos - 1, 0 )

   IF ::bSetGet != Nil
      Eval( ::bSetGet, ::value, self )
   ENDIF

   IF ::bChangeSel != Nil
      Eval( ::bChangeSel, nPos, Self )
   ENDIF

   RETURN Nil

METHOD GetValue() CLASS HComboBox
   LOCAL nPos := hwg_Sendmessage( ::handle, CB_GETCURSEL, 0, 0 ) + 1

   ::value := iif( ::lText, ::aItems[nPos], nPos )
   IF ::bSetGet != Nil
      Eval( ::bSetGet, ::value, Self )
   ENDIF

   Return ::value

STATIC FUNCTION __Valid( oCtrl )
   LOCAL nPos
   LOCAL lESC

   // by sauli
   IF __ObjHasMsg( oCtrl:oParent, "nLastKey" )
      // caso o PARENT seja HDIALOG
      lESC := oCtrl:oParent:nLastKey <> 27
   ELSE
      // caso o PARENT seja HTAB, HPANEL
      lESC := .T.
   end
   // end by sauli
   IF lESC // "if" by Luiz Henrique dos Santos (luizhsantos@gmail.com) 04/06/2006
      nPos := hwg_Sendmessage( oCtrl:handle, CB_GETCURSEL, 0, 0 ) + 1

      oCtrl:value := iif( oCtrl:lText, oCtrl:aItems[nPos], nPos )

      IF oCtrl:bSetGet != Nil
         Eval( oCtrl:bSetGet, oCtrl:value, oCtrl )
      ENDIF
      IF oCtrl:bChangeSel != Nil
         Eval( oCtrl:bChangeSel, nPos, oCtrl )
      ENDIF

      // By Luiz Henrique dos Santos (luizhsantos@gmail.com.br) 03/06/2006
      IF oCtrl:bValid != NIL
         IF ! Eval( oCtrl:bValid, oCtrl )
            hwg_Setfocus( oCtrl:handle )
            RETURN .F.
         ENDIF
      ENDIF
   ENDIF

   RETURN .T.

STATIC FUNCTION __KillFocus( oCtrl )

   oCtrl:value := hwg_Getedittext( hwg_GetModalHandle(), oCtrl:id )
   IF oCtrl:bSetGet != Nil
      Eval( oCtrl:bSetGet, oCtrl:value, oCtrl )
   ENDIF

   RETURN .T.

STATIC FUNCTION __When( oCtrl )
   LOCAL res

   oCtrl:Refresh()

   IF oCtrl:bGetFocus != Nil
      res := Eval( oCtrl:bGetFocus, Eval( oCtrl:bSetGet,, oCtrl ), oCtrl )
      IF !res
         hwg_GetSkip( oCtrl:oParent, oCtrl:handle, 1 )
      ENDIF
      RETURN res
   ENDIF

   RETURN .T.
