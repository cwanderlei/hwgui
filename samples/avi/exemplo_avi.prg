/*
EXEMPLO DE USO:

Coloque no inicio do seu relatorio...
Private oDlgHabla:=nil
MsgRun("Aguarde...")

depois durante o processo de geração do relatorio:
HW_Atualiza_Dialogo("Produdo.:"+LEFT(xPRODUTO,35))

depois para finalizar o relatorio:
Fin_Run()

*/

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

Func Main
Private oDlgHabla:=nil
MsgRun("Aguarde....")
FOR nNum := 1 TO 50000
   HW_Atualiza_Dialogo("Numero.:"+str(nNum,35))
NEXT
Fim_Run()
Return

**********************
FUNCTION MsgRun( cMsg )
**********************
Local vMsg:=[Aguarde em processamento....]
Local oFonte:= oFonte:= HFont():Add( "Arial"     , 0 ,-18,550,255 )
Local oBmp      := HBitmap():AddFile("fundo.bmp")
PRIVATE oTimHabla
if cMsg#nil
   vMsg:=cMsg
endif

INIT DIALOG oDlgHabla TITLE "Processando relatorio..." ;
SIZE 485, 100  ;
STYLE DS_CENTER + WS_VISIBLE ;
ON INIT {|| IniDlgHabla() }  ;
ON EXIT {|| CierraDialogo() };
Background Bitmap oBmp

@ 45, 20  SAY vMsg SIZE 465, 20 FONT oFonte;
BACKCOLOR Rgb(255, 255, 255)

@ 5,20 ANIMATION oAnime ;
      OF oDlgHabla ;
      SIZE 32,32;
      FILE "proce.avi";
      AUTOPLAY
oAnime:Play()
GTprocessmessages()
ACTIVATE DIALOG oDlgHabla NOMODAL
Return .T.

Function Inicia_Run()
Private oDlgHabla:=nil

FUNCTION MsgRun2( cMsg,cTime )  // apenas mensagem
   Local vModal,vMsg:=[Aguarde em processamento....],vMsg2:=[]
   Local oFonte:= oFonte:= HFont():Add( "Arial"     , 0 ,-15,500,255 )
   PRIVATE oTimHabla
   if cMsg#nil
      vMsg:=cMsg
   endif

   INIT DIALOG oDlgHabla ;
   SIZE 485, 80  ;
   STYLE DS_CENTER + WS_VISIBLE ;
   ON INIT { || IniDlgHabla(cTime) } ;
   ON EXIT { || Hw_FimDialogoTemporal(cTime) }

   @ 0, 20  SAY vMsg SIZE 465, 20 STYLE SS_CENTER FONT oFonte

   if ctime=nil
      vModal:=.t.
   endif
   oDlgHabla:Activate(vModal)
Return .T.

// ----------------------
// Inicializar el diálogo
// ----------------------
FUNCTION IniDlgHabla()
   oDlgHabla:Center()
   SET TIMER oTimHabla OF oDlgHabla ID 9006 VALUE 2000 ACTION {|| CierraDialogo() }
Return .T.

// ---------------
// Fin del diálogo
// ---------------
FUNCTION Hw_FimDialogoTemporal(cTime)
if cTime#nil
   if oDlgHabla#nil
      oDlgHabla:close()
      oDlgHabla:=nil
   endif
endif
Return .T.

Function Fim_Run()
IF oDlgHabla#NIL
   oDlgHabla:CLOSE()
ENDIF

// ---------------
// Cerrar diálogo.
// ---------------
FUNCTION CierraDialogo()
   EndDialog()
RETURN .T.

FUNCTION HW_Atualiza_Dialogo(vMensagem)
GTprocessmessages()
oDlgHabla:ACONTROLS[1]:SETTEXT(vMensagem)
RETURN NIL
********************************************************************************
***************FIM DA MENSAGEM RUM NA TELA**************************************
********************************************************************************
