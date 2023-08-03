#define x_BLUE       16711680
#define x_DARKBLUE   10027008
#define x_WHITE      16777215
#define x_CYAN       16776960
#define x_BLACK             0
#define x_RED             255
#define x_GREEN         32768
#define x_GRAY        8421504
#define x_YELLOW        65535
#define HB_EXT_INKEY

#include "windows.ch"
#include "guilib.ch"
#include "inkey.ch"
#include "hwgui.ch"
#include "common.ch"
#include "hbdll.ch"

**************
Function main
*************
PRIVATE oJanela
PRIVATE oFont, grpConfiguracao
**********variaveis***********************
PRIVATE LRUADE , LNUMDE, LCIDDE, LUFDE
PRIVATE LRUAPA , LNUMPA, LCIDPA, LUFPA

PRIVATE oRUADE , oNUMDE, oCIDDE, oUFDE
PRIVATE oRUAPA , oNUMPA, oCIDPA, oUFPA, aItens := {"AC","AL","AP","AM","BA","CE","DF","GO","ES","MA","MT","MS","MG","PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SP","SC","SE","TO"}

PRIVATE wRUADE := SPACE(50)
PRIVATE wNUMDE := SPACE(5)
PRIVATE wCIDDE := SPACE(50)
PRIVATE wUFDE  := SPACE(2)

PRIVATE wRUAPA := SPACE(50)
PRIVATE wNUMPA := SPACE(5)
PRIVATE wCIDPA := SPACE(50)
PRIVATE wUFPA  := SPACE(2)

IF Inetestaconectada()=.F.
   MsgStop("Para Usar Essa opção você deve ter conexão com a Internet,Favor Vereficar sua conexão com a Internet.","Aviso do Sistema")
   Return
Endif

PREPARE FONT oFontBtn NAME "Arial" WIDTH 0 HEIGHT -12 charset 255
INIT DIALOG oJanela CLIPPER NOEXIT TITLE "Rota de Mapa";
FONT oFontBtn;
AT 0,0 SIZE 610,320;
STYLE DS_CENTER + WS_VISIBLE + WS_CAPTION + WS_SYSMENU

SetColorinFocus( .t. )

@ 5,5   GROUPBOX grpConfiguracao           CAPTION "Local de Saida"             SIZE 600,100
@ 5,130 GROUPBOX grpConfiguracao           CAPTION "Local de Destino"           SIZE 600,100
*******SAYS*******
@ 20 ,40   SAY LRUADE                      CAPTION "Rua......:"                 SIZE 168,22
@ 405,40   SAY LNUMDE                      CAPTION "Nº.:"                       SIZE  68,22
@ 20 ,70   SAY LCIDDE                      CAPTION "Cidade.:"                   SIZE 168,22
@ 405,70   SAY LUFDE                       CAPTION "UF.:"                       SIZE  68,22

@ 20 ,160  SAY LRUAPA                      CAPTION "Rua......:"                 SIZE 168,22
@ 405,160  SAY LNUMPA                      CAPTION "Nº.:"                       SIZE  68,22
@ 20 ,190  SAY LCIDPA                      CAPTION "Cidade.:"                   SIZE 168,22
@ 405,190  SAY LUFPA                       CAPTION "UF.:"                       SIZE  68,22
*******SAYS*******

*******GETS*******
@ 80,40   GET ORUADE     VAR wRUADE        PICTURE "@!"                         SIZE 320,22;
STYLE WS_TABSTOP + ES_AUTOHSCROLL;
TOOLTIP "Informe o Endereço de Saida"

@ 430,40  GET ONUMDE     VAR wNUMDE        PICTURE "@!"                         SIZE  60,22;
STYLE WS_TABSTOP + ES_AUTOHSCROLL;
TOOLTIP "Informe o Numero do Endereço de Saida"

@ 80,70   GET OCIDDE     VAR wCIDDE        PICTURE "@!"                         SIZE 250,22;
STYLE WS_TABSTOP + ES_AUTOHSCROLL;
TOOLTIP "Informe a Cidade de Saida"

@ 430,70  GET COMBOBOX oUFDE VAR wUFDE     ITEMS aItens                         SIZE 50,150 TEXT;
STYLE WS_TABSTOP + ES_AUTOHSCROLL;
TOOLTIP "Informe a UF de Saida"

@ 80,160  GET ORUAPA     VAR wRUAPA        PICTURE "@!"                         SIZE 320,22;
STYLE WS_TABSTOP + ES_AUTOHSCROLL;
TOOLTIP "Informe o Endereço do Destino"

@ 430,160 GET ONUMPA     VAR wNUMPA        PICTURE "@!"                         SIZE  60,22;
STYLE WS_TABSTOP + ES_AUTOHSCROLL;
TOOLTIP "Informe o Numero do Endereço do Destino"

@ 80,190  GET OCIDPA     VAR wCIDPA        PICTURE "@!"                         SIZE 250,22;
STYLE WS_TABSTOP + ES_AUTOHSCROLL;
TOOLTIP "Informe a Cidade do Destino"

@ 430,190 GET COMBOBOX oUFPA VAR wUFPA     ITEMS aItens                         SIZE 50,150 TEXT;
STYLE WS_TABSTOP + ES_AUTOHSCROLL;
TOOLTIP "Informe a UF do Destino"
*******GETS*******

*******Buttons****
@ 10,240 BUTTON btnOk CAPTION "&Iniciar Busca" SIZE 150, 28 ;
TOOLTIP "Realizar Busca da Rota";
ON CLICK {|| Inicia_Busca_IE() };
STYLE WS_TABSTOP

@ 200,240  BUTTON "&Fechar" SIZE 100, 28 ;
TOOLTIP "Sair do Modulo e Voltar aos Menus";
ON CLICK {|| oJanela:Close() };
STYLE WS_TABSTOP
*******Buttons****

ACTIVATE DIALOG oJanela

RETURN nil

************************
Function Inicia_Busca_IE
************************
local oMapa, mweb

IF EMPTY(wRUADE)
   OBRIGA()
   oRUADE:SETFOCUS()
   RETURN
ENDIF

IF EMPTY(wNUMDE)
   OBRIGA()
   oNUMDE:SETFOCUS()
   RETURN
ENDIF

IF EMPTY(wCIDDE)
   OBRIGA()
   oCIDDE:SETFOCUS()
   RETURN
ENDIF

IF EMPTY(wUFDE)
   OBRIGA()
   oUFDE:SETFOCUS()
   RETURN
ENDIF

IF EMPTY(wRUAPA)
   OBRIGA()
   oRUAPA:SETFOCUS()
   RETURN
ENDIF

IF EMPTY(wNUMPA)
   OBRIGA()
   oNUMPA:SETFOCUS()
   RETURN
ENDIF

IF EMPTY(wCIDPA)
   OBRIGA()
   oCIDPA:SETFOCUS()
   RETURN
ENDIF

IF EMPTY(wUFPA)
   OBRIGA()
   oUFPA:SETFOCUS()
   RETURN
ENDIF

wRUADE  := alltrim( wRUADE )
wNUMDE  := alltrim( wNUMDE )
wCIDDE  := alltrim( wCIDDE )
wUFDE   := alltrim( wUFDE  )

wRUAPA  := alltrim( wRUAPA )
wNUMPA  := alltrim( wNUMPA )
wCIDPA  := alltrim( wCIDPA )
wUFPA   := alltrim( wUFPA  )

try
   oMapa := GetActiveObject( "InternetExplorer.Application" )
catch
   try
      oMapa := CreateObject( "InternetExplorer.Application" )
   catch
      MsgStop("ERRO ! Internet Explorer não disponivel","Aviso do Sistema")
      return
   end
end
mweb := "http://maps.google.com/maps?q=de "               +;
        wRUADE + "," + wNUMDE + " " + wCIDDE + " " + wUFDE + " para " +;
        wRUAPA + "," + wNUMPA + " " + wCIDPA + " " + wUFPA

oMapa:Visible := .T.
oMapa:Navigate( mweb )
oJanela:Close()
RETURN

Function OBRIGA
MsgINFO("OBRIGATORIO !!! Preencher este campo ou (ESC) para sair","Aviso do Sistema")
Return

**************************************
Function inetestaconectada( cAddress )
**************************************
LOCAL aHosts
LOCAL cName
InetInit()
IF cAddress == NIL
   cAddress := "www.google.com.br"
ENDIF
aHosts := InetGetHosts( cAddress )
IF aHosts == NIL .or. len(aHosts)=0
   InetCleanup()
   RETURN .f.
endif
InetCleanup()
RETURN .t.
