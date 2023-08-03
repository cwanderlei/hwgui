/*
 *$Id: hcwindow.prg 2147 2013-07-15 12:20:31Z alkresin $
 *
 * HWGUI - Harbour Win32 GUI library source code:
 * HCustomWindow class
 *
 * Copyright 2004 Alexander S.Kresin <alex@kresin.ru>
 * www - http://www.kresin.ru
*/

#include "windows.ch"
#include "hbclass.ch"
#include "guilib.ch"
#include "error.ch"

#define EVENTS_MESSAGES 1
#define EVENTS_ACTIONS  2

#ifndef __XHARBOUR__
REQUEST HB_GT_GUI_DEFAULT
#endif

STATIC aCustomEvents := { ;
      { WM_NOTIFY, WM_PAINT, WM_CTLCOLORSTATIC, WM_CTLCOLOREDIT, WM_CTLCOLORBTN, ;
      WM_COMMAND, WM_DRAWITEM, WM_SIZE, WM_DESTROY }, ;
      { ;
      { |o, w, l| onNotify( o, w, l ) }                                 , ;
      { |o, w|   iif( o:bPaint != NIL, Eval( o:bPaint, o, w ), - 1 ) }  , ;
      { |o, w, l| onCtlColor( o, w, l ) }                               , ;
      { |o, w, l| onCtlColor( o, w, l ) }                               , ;
      { |o, w, l| onCtlColor( o, w, l ) }                               , ;
      { |o, w, l| onCommand( o, w ) }                                   , ;
      { |o, w, l| onDrawItem( o, w, l ) }                               , ;
      { |o, w, l| onSize( o, w, l ) }                                   , ;
      { |o|     onDestroy( o ) }                                       ;
      } ;
      }

CLASS HObject

   // DATA classname

ENDCLASS

CLASS HCustomWindow INHERIT HObject

   CLASS VAR oDefaultParent SHARED

   DATA handle        INIT 0
   DATA oParent
   DATA title
   DATA TYPE
   DATA nTop, nLeft, nWidth, nHeight
   DATA tcolor, bcolor, brush
   DATA style
   DATA extStyle      INIT 0
   DATA lHide         INIT .F.
   DATA oFont
   DATA aEvents       INIT {}
   DATA aNotify       INIT {}
   DATA aControls     INIT {}
   DATA bInit
   DATA bDestroy
   DATA bSize
   DATA bPaint
   DATA bGetFocus
   DATA bLostFocus
   DATA bOther
   DATA cargo
   DATA HelpId        INIT 0
   DATA nHolder       INIT 0

   METHOD AddControl( oCtrl ) INLINE AAdd( ::aControls, oCtrl )
   METHOD DelControl( oCtrl )
   METHOD AddEvent( nEvent, nId, bAction, lNotify ) ;
      INLINE AAdd( iif( lNotify == NIL .OR. !lNotify, ;
      ::aEvents, ::aNotify ), ;
      { nEvent, nId, bAction } )
   METHOD FindControl( nId, nHandle )
   METHOD Hide()              INLINE ( ::lHide := .T. , hwg_Hidewindow( ::handle ) )
   METHOD Show()              INLINE ( ::lHide := .F. , hwg_Showwindow( ::handle ) )
   METHOD Move( x1, y1, width, height )
   METHOD onEvent( msg, wParam, lParam )
   METHOD End()
   ERROR HANDLER OnError()

ENDCLASS

METHOD FindControl( nId, nHandle ) CLASS HCustomWindow
   LOCAL i := iif( nId != NIL, Ascan( ::aControls, { |o| o:id == nId } ), ;
      Ascan( ::aControls, { |o| hwg_Isptreq( o:handle,nHandle) } ) )

   RETURN iif( i == 0, NIL, ::aControls[ i ] )

METHOD DelControl( oCtrl ) CLASS HCustomWindow
   LOCAL h := oCtrl:handle, id := oCtrl:id
   LOCAL i := Ascan( ::aControls, { |o| o:handle == h } )

   hwg_Sendmessage( h, WM_CLOSE, 0, 0 )
   IF i != 0
      ADel( ::aControls, i )
      ASize( ::aControls, Len( ::aControls ) - 1 )
   ENDIF

   h := 0
   FOR i := Len( ::aEvents ) TO 1 STEP - 1
      IF ::aEvents[ i, 2 ] == id
         ADel( ::aEvents, i )
         h ++
      ENDIF
   NEXT

   IF h > 0
      ASize( ::aEvents, Len( ::aEvents ) - h )
   ENDIF

   h := 0
   FOR i := Len( ::aNotify ) TO 1 STEP - 1
      IF ::aNotify[ i, 2 ] == id
         ADel( ::aNotify, i )
         h ++
      ENDIF
   NEXT

   IF h > 0
      ASize( ::aNotify, Len( ::aNotify ) - h )
   ENDIF

   RETURN NIL

METHOD Move( x1, y1, width, height )  CLASS HCustomWindow

   IF x1     != NIL
      ::nLeft   := x1
   ENDIF
   IF y1     != NIL
      ::nTop    := y1
   ENDIF
   IF width  != NIL
      ::nWidth  := width
   ENDIF
   IF height != NIL
      ::nHeight := height
   ENDIF
   hwg_Movewindow( ::handle, ::nLeft, ::nTop, ::nWidth, ::nHeight )

   RETURN NIL

METHOD onEvent( msg, wParam, lParam )  CLASS HCustomWindow
   LOCAL i

   // Writelog( "== "+::Classname()+Str(msg)+IIF(wParam!=NIL,Str(wParam),"NIL")+IIF(lParam!=NIL,Str(lParam),"NIL") )

   IF ( i := Ascan( aCustomEvents[ EVENTS_MESSAGES ], msg ) ) != 0
      RETURN Eval( aCustomEvents[ EVENTS_ACTIONS, i ], Self, wParam, lParam )

   ELSEIF ::bOther != NIL

      RETURN Eval( ::bOther, Self, msg, wParam, lParam )

   ENDIF

   RETURN - 1

METHOD End()  CLASS HCustomWindow
   LOCAL aControls, i, nLen

   IF ::nHolder != 0
      ::nHolder := 0
      hwg_DecreaseHolders( ::handle )
      aControls := ::aControls
      nLen := Len( aControls )
      FOR i := 1 TO nLen
         aControls[ i ]:End()
      NEXT
   ENDIF

   RETURN NIL

METHOD OnError() CLASS HCustomWindow

   LOCAL cMsg := __GetMessage()
   LOCAL oError
   LOCAL aControls := ::aControls, oItem

   FOR EACH oItem IN aControls
      IF !Empty( oItem:objname ) .AND. oItem:objname == cMsg
         RETURN oItem
      ENDIF
   NEXT

   oError := ErrorNew()
   oError:severity    := ES_ERROR
   oError:genCode     := EG_LIMIT
   oError:subSystem   := "HCUSTOMWINDOW"
   oError:subCode     := 0
   oError:description := "Invalid class member"
   oError:canRetry    := .F.
   oError:canDefault  := .F.
   oError:fileName    := ""
   oError:osCode      := 0

   Eval( ErrorBlock(), oError )
   __errInHandler()

   RETURN NIL

STATIC FUNCTION onNotify( oWnd, wParam, lParam )
   LOCAL iItem, oCtrl, nCode, res, n

   wParam := hwg_PtrToUlong( wParam )
   IF Empty( oCtrl := oWnd:FindControl( wParam ) )
      FOR n := 1 TO Len( oWnd:aControls )
         oCtrl := oWnd:aControls[ n ]:FindControl( wParam )
         IF oCtrl != NIL
            EXIT
         ENDIF
      NEXT
   ENDIF

   IF oCtrl != NIL

      IF __ObjHasMsg( oCtrl, "NOTIFY" )
         RETURN oCtrl:Notify( lParam )
      ELSE
         nCode := hwg_Getnotifycode( lParam )
         IF nCode == EN_PROTECTED
            RETURN 1
         ELSEIF oWnd:aNotify != NIL .AND. ;
               ( iItem := Ascan( oWnd:aNotify, { |a| a[ 1 ] == nCode .AND. ;
               a[ 2 ] == wParam } ) ) > 0
            IF ( res := Eval( oWnd:aNotify[ iItem, 3 ], oWnd, wParam ) ) != NIL
               RETURN res
            ENDIF
         ENDIF
      ENDIF
   ENDIF

   RETURN - 1

STATIC FUNCTION onDestroy( oWnd )
   LOCAL aControls := oWnd:aControls
   LOCAL i, nLen   := Len( aControls )

   FOR i := 1 TO nLen
      aControls[ i ]:End()
   NEXT
   oWnd:End()

   RETURN 1

STATIC FUNCTION onCtlColor( oWnd, wParam, lParam )
   LOCAL oCtrl := oWnd:FindControl( , lParam )

   IF oCtrl != NIL
      IF oCtrl:tcolor != NIL
         hwg_Settextcolor( wParam, oCtrl:tcolor )
      ENDIF

      //hwg_writelog( octrl:classname )
      IF hwg_bitand( oCtrl:extStyle, WS_EX_TRANSPARENT ) != 0
         hwg_SetTransparentMode( wParam, .T. )
         RETURN 0  //hwg_getBackBrush( oWnd:handle )
      ELSE
         IF oCtrl:bcolor != NIL
            hwg_Setbkcolor( wParam, oCtrl:bcolor )
            RETURN oCtrl:brush:handle
         ENDIF
      ENDIF
   ENDIF

   RETURN - 1

STATIC FUNCTION onDrawItem( oWnd, wParam, lParam )
   LOCAL oCtrl

   wParam := hwg_PtrToUlong( wParam )
   IF wParam != 0 .AND. ( oCtrl := oWnd:FindControl( wParam ) ) != NIL .AND. ;
         oCtrl:bPaint != NIL

      Eval( oCtrl:bPaint, oCtrl, lParam )
      RETURN 1

   ENDIF

   RETURN - 1

STATIC FUNCTION onCommand( oWnd, wParam )
   LOCAL iItem, iParHigh := hwg_Hiword( wParam ), iParLow := hwg_Loword( wParam )

   IF oWnd:aEvents != NIL .AND. ;
         ( iItem := Ascan( oWnd:aEvents, { |a| a[ 1 ] == iParHigh .AND. ;
         a[ 2 ] == iParLow } ) ) > 0

      Eval( oWnd:aEvents[ iItem, 3 ], oWnd, iParLow )

   ENDIF

   RETURN 1

STATIC FUNCTION onSize( oWnd, wParam, lParam )
   LOCAL aControls := oWnd:aControls, oItem

   FOR EACH oItem IN aControls
      IF oItem:bSize != NIL
         Eval( oItem:bSize, oItem, hwg_Loword( lParam ), hwg_Hiword( lParam ) )
      ENDIF
   NEXT

   RETURN - 1

FUNCTION hwg_onTrackScroll( oWnd, msg, wParam, lParam )

   LOCAL oCtrl := oWnd:FindControl( , lParam )

   IF oCtrl != NIL
      msg := hwg_Loword( wParam )
      IF msg == TB_ENDTRACK
         IF HB_ISBLOCK( oCtrl:bChange )
            Eval( oCtrl:bChange, oCtrl )
            RETURN 0
         ENDIF
      ELSEIF msg == TB_THUMBTRACK .OR. ;
            msg == TB_PAGEUP     .OR. ;
            msg == TB_PAGEDOWN

         IF HB_ISBLOCK( oCtrl:bThumbDrag )
            Eval( oCtrl:bThumbDrag, oCtrl )
            RETURN 0
         ENDIF
      ENDIF
   ELSE
      IF HB_ISBLOCK( oWnd:bScroll )
         Eval( oWnd:bScroll, oWnd, msg, wParam, lParam )
         RETURN 0
      ENDIF
   ENDIF

   RETURN - 1

CLASS HScrollArea INHERIT HObject

   DATA nCurWidth    INIT 0
   DATA nCurHeight   INIT 0
   DATA nVScrollPos   INIT 0
   DATA nHScrollPos   INIT 0
   DATA rect
   DATA nScrollBars INIT - 1
   DATA lAutoScroll INIT .T.
   DATA nHorzInc
   DATA nVertInc
   DATA nVscrollMax
   DATA nHscrollMax

   METHOD ResetScrollbars()
   METHOD SetupScrollbars()
   METHOD RedefineScrollbars()

ENDCLASS

METHOD RedefineScrollbars() CLASS HScrollArea

   ::rect := hwg_Getclientrect( ::handle )
   IF ::nScrollBars > - 1 .AND. ::bScroll = Nil
      IF  ::nVscrollPos = 0
         ::ncurHeight := 0                                                              //* 4
         AEval( ::aControls, { | o | ::ncurHeight := Int( Max( o:nTop + o:nHeight + VERT_PTS * 1, ;
            ::ncurHeight ) ) } )
      ENDIF
      IF  ::nHscrollPos = 0
         ::ncurWidth  := 0                                                           // * 4
         AEval( ::aControls, { | o | ::ncurWidth := Int( Max( o:nLeft + o:nWidth  + HORZ_PTS * 1, ;
            ::ncurWidth ) ) } )
      ENDIF
      ::ResetScrollbars()
      ::SetupScrollbars()
   ENDIF

   RETURN Nil

METHOD SetupScrollbars() CLASS HScrollArea
   LOCAL tempRect, nwMax, nhMax , aMenu, nPos

   tempRect := hwg_Getclientrect( ::handle )
   aMenu := iif( __objHasData( Self, "MENU" ), ::menu, Nil )
   // Calculate how many scrolling increments for the client area
   IF ::Type = WND_MDICHILD //.AND. ::aRectSave != Nil
      nwMax := Max( ::ncurWidth, tempRect[ 3 ] ) //::maxWidth
      nhMax := Max( ::ncurHeight , tempRect[ 4 ] ) //::maxHeight
      ::nHorzInc := Int( ( nwMax - tempRect[ 3 ] ) / HORZ_PTS )
      ::nVertInc := Int( ( nhMax - tempRect[ 4 ] ) / VERT_PTS )
   ELSE
      nwMax := Max( ::ncurWidth, ::Rect[ 3 ] )
      nhMax := Max( ::ncurHeight, ::Rect[ 4 ] )
      ::nHorzInc := Int( ( nwMax - tempRect[ 3 ] ) / HORZ_PTS + HORZ_PTS )
      ::nVertInc := Int( ( nhMax - tempRect[ 4 ] ) / VERT_PTS + VERT_PTS - ;
         iif( amenu != Nil, hwg_Getsystemmetrics( SM_CYMENU ), 0 ) )  // MENU
   ENDIF
   // Set the vertical and horizontal scrolling info
   IF ::nScrollBars = 0 .OR. ::nScrollBars = 2
      ::nHscrollMax := Max( 0, ::nHorzInc )
      IF ::nHscrollMax < HORZ_PTS / 2
         //-  hwg_Scrollwindow( ::Handle, ::nHscrollPos * HORZ_PTS, 0 )
      ELSEIF ::nHScrollMax <= HORZ_PTS
         ::nHScrollMax := 0
      ENDIF
      ::nHscrollPos := Min( ::nHscrollPos, ::nHscrollMax )
      hwg_Setscrollpos( ::handle, SB_HORZ, ::nHscrollPos, .T. )
      hwg_Setscrollinfo( ::Handle, SB_HORZ, 1, ::nHScrollPos , HORZ_PTS, ::nHscrollMax )
      IF ::nHscrollPos > 0
         nPos := hwg_Getscrollpos( ::handle, SB_HORZ )
         IF nPos < ::nHscrollPos
            hwg_Scrollwindow( ::Handle, 0, ( ::nHscrollPos - nPos ) * SB_HORZ )
            ::nVscrollPos := nPos
            hwg_Setscrollpos( ::Handle, SB_HORZ, ::nHscrollPos, .T. )
         ENDIF
      ENDIF
   ENDIF
   IF ::nScrollBars = 1 .OR. ::nScrollBars = 2
      ::nVscrollMax := Int( Max( 0, ::nVertInc ) )
      IF ::nVscrollMax < VERT_PTS / 2
         //-  hwg_Scrollwindow( ::Handle, 0, ::nVscrollPos * VERT_PTS )
      ELSEIF ::nVScrollMax <= VERT_PTS
         ::nVScrollMax := 0
      ENDIF
      hwg_Setscrollpos( ::Handle, SB_VERT, ::nVscrollPos, .T. )
      hwg_Setscrollinfo( ::Handle, SB_VERT, 1, ::nVscrollPos , VERT_PTS,  ::nVscrollMax )
      IF ::nVscrollPos > 0 //.AND. nPosVert != ::nVscrollPos
         nPos := hwg_Getscrollpos( ::handle, SB_VERT )
         IF nPos < ::nVscrollPos
            hwg_Scrollwindow( ::Handle, 0, ( ::nVscrollPos - nPos ) * VERT_PTS )
            ::nVscrollPos := nPos
            hwg_Setscrollpos( ::Handle, SB_VERT, ::nVscrollPos, .T. )
         ENDIF
      ENDIF
   ENDIF

   RETURN Nil

METHOD ResetScrollbars() CLASS HScrollArea

   // Reset our window scrolling information
   LOCAL lMaximized := hwg_Getwindowplacement( ::handle ) == SW_MAXIMIZE

   IF lMaximized
      hwg_Scrollwindow( ::Handle, ::nHscrollPos * HORZ_PTS, 0 )
      hwg_Scrollwindow( ::Handle, 0, ::nVscrollPos * VERT_PTS )
      ::nHscrollPos := 0
      ::nVscrollPos := 0
   ENDIF

   RETURN Nil

PROCEDURE HB_GT_DEFAULT_NUL()

   RETURN

   INIT PROCEDURE HWGINIT

   hwg_ErrSys()

   RETURN