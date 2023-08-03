#include "windows.ch"
#include "guilib.ch"
 
*---------------------------------------------------------------------------------------
Function Main
*---------------------------------------------------------------------------------------
Local Form_Main
Local oFontBtn
Local oFont := Nil
Local nColor

Public oDir := "\"+Curdir()+"\DADOS\"

SET DELETE ON
SET DATE BRIT

   PREPARE FONT oFontBtn NAME "MS Sans Serif" WIDTH 0 HEIGHT -12

   INIT WINDOW Form_Main MAIN TITLE "Sygecom"

   MENU OF Form_Main
      MENU TITLE "&Exemplos de"
         MENUITEM "&Demo de Cadastro"        ID 301 ACTION Cadastro()
         SEPARATOR
         MENUITEM "&Demo de Impressão"       ID 301 ACTION msginfo("Em desenvolvimento")
         SEPARATOR
         MENUITEM "&Sair"                    ID 310  ACTION EndWindow()
      ENDMENU

       MENU TITLE "&Ajuda"
         MENUITEM "&Sobre" ACTION MsgInfo(HWG_Version(1))
      ENDMENU
   ENDMENU

   Form_Main:Activate()

return nil

*---------------------------------------------------------------------------------------
Function Cadastro()   
*---------------------------------------------------------------------------------------
Local Tel_Ferramentas, oPanel, oFontBtn, Titulo:="Tela Cadastro de Demo"
Private oMod:=.f. //Esta Variavel controla alteracoes
Private Gt_CODIGO, Gt_NOME, Gt_TELEF
Private oCODIGO, oNOME, oTELEF //Declaracao das variaveis de tabela
Private oOper:=1

   PREPARE FONT oFontBtn NAME "MS Sans Serif" WIDTH 0 HEIGHT -12

   INIT DIALOG Tel_Ferramentas CLIPPER NOEXIT TITLE Titulo SIZE 530, 220 Font oFontBtn

   AbreTabela() //Efetua a abertura da Tabela com alias cad
   Select Cad
   Go Top
   PegaVariaveis() //Inicializa as variaveis
   MontaGets()

   //Barra de ferramentas

   @ 2,3 OWNERBUTTON OF Tel_Ferramentas ID 108 ON CLICK {|| MontaVariaveis(oMod) } ;
       SIZE 44,38 FLAT ;
       TEXT "Novo" FONT oFontBtn COORDINATES 0,20,0,0  ;
       BITMAP "NOVO" FROM RESOURCE COORDINATES 0,4,0,0

   @ 46,3 OWNERBUTTON OF Tel_Ferramentas ID 109 ON CLICK {||Alterar()} ;
       SIZE 44,38 FLAT ;
       TEXT "Alterar" FONT oFontBtn COORDINATES 0,20,0,0 ;
       BITMAP "ABRIR" FROM RESOURCE COORDINATES 0,4,0,0

   @ 89,3 OWNERBUTTON OF Tel_Ferramentas ID 110 ON CLICK {||GravaTabela(oOper)} ;
       SIZE 44,38 FLAT ;
       TEXT "Salvar" FONT oFontBtn COORDINATES 0,20,0,0 ;
       BITMAP "SALVAR" FROM RESOURCE COORDINATES 0,4,0,0


   @132,3 OWNERBUTTON OF Tel_Ferramentas ID 111 ON CLICK {||SkipTabela(1)} ;
       SIZE 44,38 FLAT ;
       TEXT "Anterior" FONT oFontBtn COORDINATES 0,20,0,0 ;
       BITMAP "ANTERIOR" FROM RESOURCE COORDINATES 0,4,0,0

   @175,3 OWNERBUTTON OF Tel_Ferramentas ID 112 ON CLICK {||SkipTabela(2)} ;
       SIZE 44,38 FLAT ;
       TEXT "Próximo" FONT oFontBtn COORDINATES 0,20,0,0 ;
       BITMAP "PROXIMO" FROM RESOURCE COORDINATES 0,4,0,0

   @218,3 OWNERBUTTON OF Tel_Ferramentas ID 113 ON CLICK {||SkipTabela(3)} ;
       SIZE 44,38 FLAT ;
       TEXT "Primeiro" FONT oFontBtn COORDINATES 0,20,0,0 ;
       BITMAP "PRIMEIRO" FROM RESOURCE COORDINATES 0,4,0,0

   @261,3 OWNERBUTTON OF Tel_Ferramentas ID 114 ON CLICK {||SkipTabela(4)} ;
       SIZE 44,38 FLAT ;
       TEXT "Último" FONT oFontBtn COORDINATES 0,20,0,0 ;
       BITMAP "ULTIMO" FROM RESOURCE COORDINATES 0,4,0,0

   @304,3 OWNERBUTTON OF Tel_Ferramentas ID 115 ON CLICK {||MsgInfo(" ")} ;
       SIZE 44,38 FLAT ;
       TEXT "Imprimir" FONT oFontBtn COORDINATES 0,20,0,0 ;
       BITMAP "PRINT" FROM RESOURCE COORDINATES 0,4,0,0

   @347,3 OWNERBUTTON OF Tel_Ferramentas ID 116 ON CLICK {||ExcluiRegistro()} ;
       SIZE 44,38 FLAT ;
       TEXT "Excluir" FONT oFontBtn COORDINATES 0,20,0,0 ;
       BITMAP "EXCLUIR" FROM RESOURCE COORDINATES 0,4,0,0
   

   Tel_Ferramentas:Activate()

Return Nil
 
Function MontaGets()
@ 2, 60 Say "Codigo"  SIZE 40,20
@60, 60 Get Gt_Codigo VAR oCODIGO PICTURE "99999" ID 2001 SIZE 50, 20

@ 2,100 Say "Nome" SIZE 40, 20
@60,100 Get Gt_Nome VAR oNOME     PICTURE REPLICATE("X",40) SIZE 200, 20

@ 2,140 Say "Telefone" SIZE 40, 20
@60,140 Get Gt_TELEF VAR oTELEF PICTURE REPLICATE("X",15) VALID {||Focaliza()} SIZE 80, 20

Return Nil

Function Focaliza()
Local oDlg:=GetModalHandle()
SetFocus(oDlg, 2001)
Return .T.


Function Alterar()
if !oMod
   oMod:=.T.
   oOper:=2 //Operacao para Alteracao
EndIf
Return Nil

Function MontaVariaveis()
if !oMod
   oCODIGO:=SPACE(5)
   oNOME:=SPACE(40)
   oTELEF:=SPACE(15)
   GetRefresh()
   oOper:=1 //Operacao para Inclusao
   oMod:=.T.
EndIf
Return Nil

Function GetRefresh()
Local oDlg:=GetModalHandle()
Gt_Codigo:Refresh()
Gt_Nome:Refresh()
Gt_TELEF:Refresh()
SetFocus(oDlg, 2001)
Return Nil

Function PegaVariaveis()
oCODIGO  :=CAD->CODIGO
oNOME    :=CAD->NOME
oTELEF   :=CAD->TELEF
Return Nil

 
Function GravaTabela()
If !oMod
   MsgInfo("Selecione Alterar ou Incluir","Mensagem")
   Return Nil
EndIf
if oOper=1
   Select CAD
   Seek oCODIGO
   If Found()
      MsgInfo("Codigo "+oCODIGO+" ja cadastrado...","Mensagem")
      Return Nil
   Endif
   Append Blank
   CAD->CODIGO  :=oCODIGO
EndIf
oOper:=1
SalvaTabela()
oMod:=.f.
Return Nil

Function SalvaTabela()
Rlock()
CAD->NOME    :=oNOME
CAD->TELEF:=oTELEF
Unlock
Return Nil

Function SkipTabela(oSalto)
Select Cad
If oSalto=1
   Skip -1
Elseif oSalto=2
   Skip
Elseif oSalto=3
   Go Top
Else
   Go Bottom
Endif 
PegaVariaveis()
GetRefresh()
Return Nil

Function ExcluiRegistro()
Select CAD
Seek oCODIGO
If Found()
   If MsgYesNo("Exclui o Codigo "+oCODIGO ,"Mensagem")
      RLock()
      Delete
      Unlock
   Endif
EndIf
Go Bottom
PegaVariaveis()
GetRefresh()
Return Nil


Function AbreTabela()
Local vTab:={}
Local vArq:=oDir+"Cadastro.dbf"
Local vInd:=oDir+"Cadastro.ntx"
If !File(vArq)
   AADD(vTab,{"CODIGO",  "C", 5, 0 })
   AADD(vTab,{"NOME  ",  "C",40, 0 })
   AADD(vTab,{"TELEF","C",15, 0 })
   dBCreate(vArq, vTab)
EndIf
Use (vArq) Shared Alias Cad
If !File(vInd)
   fLock()
   Index on Codigo to (vInd)
   Unlock
Else
   Set Index to (vInd)
EndIf
Return Nil



