/*
 * $Id: htmlfunc.c 1615 2011-02-18 13:53:35Z mlacecilia $
 *
 * HWGUI - Harbour Win32 GUI library source code:
 * ActiveX container
 *
 * Copyright 2006 Alexander S.Kresin <alex@belacy.belgorod.su>
 * www - http://kresin.belgorod.su
*/

#define HB_OS_WIN_32_USED

#define _WIN32_WINNT 0x0400

#include <windows.h>
#include "htmlcore.h"           /* Declarations of the functions in DLL.c */

#include "hbapi.h"
#include "hbapiitm.h"
#include "hbvm.h"
#include "guilib.h"
static short int lOleInitialized = 0;

HB_FUNC( HWGAX_OLEINITIALIZE )
{
   if( !lOleInitialized )
   {
      if( OleInitialize( NULL ) == S_OK )
         lOleInitialized = 1;
   }
   hb_retl( lOleInitialized );
}

HB_FUNC( HWGAX_OLEUNINITIALIZE )
{
   if( lOleInitialized )
   {
      OleUninitialize(  );
      lOleInitialized = 0;
   }
}

HB_FUNC( HWGAX_EMBEDBROWSEROBJECT )
{
   hb_retl( !EmbedBrowserObject( ( HWND ) HB_PARHANDLE( 1 ) ) );
}

HB_FUNC( HWGAX_UNEMBEDBROWSEROBJECT )
{
   UnEmbedBrowserObject( ( HWND ) HB_PARHANDLE( 1 ) );
}

HB_FUNC( HWGAX_DISPLAYHTMLPAGE )
{
   DisplayHTMLPage( ( HWND ) HB_PARHANDLE( 1 ), hb_parc( 2 ) );
}

HB_FUNC( HWGAX_DISPLAYHTMLSTR )
{
   DisplayHTMLStr( ( HWND ) HB_PARHANDLE( 1 ), hb_parc( 2 ) );
}

HB_FUNC( HWGAX_RESIZEBROWSER )
{
   ResizeBrowser( ( HWND ) HB_PARHANDLE( 1 ), ( DWORD ) hb_parnl( 2 ),
         ( DWORD ) hb_parnl( 3 ) );
}

HB_FUNC( HWGAX_DOPAGEACTION )
{
   DoPageAction( ( HWND ) HB_PARHANDLE( 1 ), ( DWORD ) hb_parnl( 2 ) );
}
