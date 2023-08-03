//================================================================//
// Programa......: Exemplo de uso da classe HAnimation
// Programador...: Marcos Antonio Gambeta
// Contato.......: marcosgambeta@uol.com.br
// Website.......: http://geocities.yahoo.com.br/marcosgambeta/
//================================================================//
// Linguagem.....: Harbour/xHarbour
// Bibliotecas...: HWGUI
// Plataforma....: Windows
// Criado em ....: 22/6/2004 10:12:13
// Atualizado em : 22/6/2004 10:15:58
//================================================================//
// Este exemplo demonstra como usar a classe HAnimation. Requer
// que o arquivo exemplo.avi esteja na mesma pasta da aplicação.
//================================================================//

#include "windows.ch"
#include "guilib.ch"

Function Main ()

   Local oWnd

   INIT WINDOW oWnd MAIN TITLE "Exemplo de uso da classe HAnimation" ;
      COLOR COLOR_3DLIGHT+1 ;
      AT 100,100 SIZE 640,480

   MENU OF oWnd
      MENUITEM "&Exemplo" ACTION Exemplo()
      MENUITEM "&Sair"    ACTION EndWindow()
   ENDMENU

   ACTIVATE WINDOW oWnd

   Return Nil

Function Exemplo ()

   Local oDlg
   Local oAnimation
   Local nSeek := 0

   INIT DIALOG oDlg TITLE "Exemplo" ;
      AT 20,20 SIZE 500,300

   @ 20,20 ANIMATION oAnimation SIZE 200,100 AUTOPLAY CENTER TRANSPARENT

   @ 300,020 BUTTON "Open"    ON CLICK {||oAnimation:Open("exemplo.avi")} SIZE 100,40
   @ 300,060 BUTTON "Play"    ON CLICK {||oAnimation:Play()} SIZE 100,40
   @ 300,100 BUTTON "Seek"    ON CLICK {||oAnimation:Seek(nSeek),++nSeek,nSeek:=if(nSeek==32,0,nSeek)} SIZE 100,40
   @ 300,140 BUTTON "Stop"    ON CLICK {||oAnimation:Stop()} SIZE 100,40
   @ 300,180 BUTTON "Close"   ON CLICK {||oAnimation:Close()} SIZE 100,40
   @ 300,220 BUTTON "Destroy" ON CLICK {||oAnimation:Destroy()} SIZE 100,40

   ACTIVATE DIALOG oDlg

   Return Nil

