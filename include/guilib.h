/*
 *$Id: guilib.h,v 1.26 2010/02/15 13:18:34 druzus Exp $
 */

#include "hbapi.h"

#define WND_DLG_RESOURCE      10
#define WND_DLG_NORESOURCE    11
#define ST_ALIGN_HORIZ        0     // Icon/bitmap on the left, text on the right
#define ST_ALIGN_VERT         1     // Icon/bitmap on the top, text on the bottom
#define ST_ALIGN_HORIZ_RIGHT  2     // Icon/bitmap on the right, text on the left
#define ST_ALIGN_OVERLAP      3     // Icon/bitmap on the same space as text

#ifdef HWG_USE_POINTER_ITEM
   #define HB_RETHANDLE( h )        hb_retptr( ( void * ) ( h ) )
   #define HB_PARHANDLE( n )        hb_parptr( n )
   #define HB_STOREHANDLE( h, n )   hb_storptr( ( void * ) ( h ), n )
   #define HB_PUTHANDLE( i, h )     hb_itemPutPtr( i, ( void * ) ( h ) )
   #define HB_GETHANDLE( i )        hb_itemGetPtr( i )
   #define HB_GETPTRHANDLE( i ,n )  hb_arrayGetPtr( i , n )
   #define HB_PUSHITEM( i )         hb_vmPushPointer( ( void * )i ) 
#else
   #define HB_RETHANDLE( h )        hb_retnl( ( LONG ) ( h ) )
   #define HB_PARHANDLE( n )        ( ( LONG ) hb_parnl( n ) )
   #define HB_STOREHANDLE( h, n )   hb_stornl( ( LONG ) ( h ), n )
   #define HB_PUTHANDLE( i, h )     hb_itemPutNL( i, ( LONG ) ( h ) )
   #define HB_GETHANDLE( i )        ( ( LONG ) hb_itemGetNL( i ) )
   #define HB_GETPTRHANDLE( i ,n )  hb_arrayGetNL( i , n )
   #define HB_PUSHITEM( i )         hb_vmPushLong( ( LONG )i ) 
#endif

#ifndef HB_SIZEOFARRAY
   #define HB_SIZEOFARRAY( var )    ( sizeof( var ) / sizeof( *var ) )
#endif

#if defined( HARBOUR_2005 )
   #define hb_dynsymSymbol( h )     ( ( h )->pSymbol )
#endif
#if defined( HARBOUR_2005 ) || \
    ( defined( __XHARBOUR__ ) && !defined( hb_itemPutCLPtr ) )
   #define hb_dynsymIsFunction( h ) ( ( h )->pSymbol->value.pFunPtr != NULL )
   #define hb_itemPutCLPtr( pItem, szText, ulLen ) hb_itemPutCPtr( pItem, szText, ulLen )
#endif

#ifndef HB_PATH_MAX
   #define HB_PATH_MAX 264
#endif

#if !defined( FHANDLE ) && ( __HARBOUR__ - 0 < 0x020000 )
   typedef FHANDLE HB_FHANDLE;
#endif
#if defined( __XHARBOUR__ ) || ( __HARBOUR__ - 0 < 0x020000 )
   typedef ULONG HB_SIZE;
   #define hb_storvni hb_storni
#endif
