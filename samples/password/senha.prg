#include "windows.ch"
#include "guilib.ch"
#include "inkey.ch"
#include "hwgui.ch"

Function main
Private vVALIDA := .F.
Private wSENHA:=""
Private oSENHA

INIT DIALOG oFrm2 CLIPPER NOEXIT TITLE "Senha Especial";
AT 0,0 SIZE 200,130;
STYLE DS_CENTER + WS_VISIBLE + WS_CAPTION + WS_SYSMENU

SetColorinFocus(.t.)
SetToolTipBalloon(.t.)

@ 15,10 SAY "Senha Especial.:" size 150,25 STYLE SS_CENTER

@ 15,30 GET oSENHA VAR wSENHA PICTURE "!!!!!!" VALID {||Focaliza()} ;
SIZE 150,25 PASSWORD;
Style WS_TABSTOP;
TOOLTIP "Informe a Senha Especial"

@ 5,80 BUTTON btnOk CAPTION "Entrar";
TOOLTIP "Clique aqui para entrar";
ON CLICK {|| MsgInfo(valtoprg(wSENHA)),oFrm2:Close()};
STYLE WS_TABSTOP

@ 105,80 BUTTON btnCancel CAPTION "Cancela";
ON CLICK {|| MsgInfo("Cancela"),oFrm2:Close() };
TOOLTIP "Clique aqui Sair do Sistema";
STYLE WS_TABSTOP

ACTIVATE DIALOG oFrm2

Return Nil

Function Focaliza()
btnOk:setfocus()
Return .T.

