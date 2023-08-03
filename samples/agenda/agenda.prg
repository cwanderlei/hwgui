/*
EMPRESA......: SYGECOM INFORMÁTICA LTDA
SISTEMA .....: AGENDA DE CONTATOS
DATA CRIAÇÃO.: 24/03/2008
TIPO DE BANCO: DBF
PLATAFORMA...: WINDOWS
RESPONSAVEL..: LEONARDO MACHADO
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

#Include "guilib.ch"
#Include "inkey.ch"
#Include "windows.ch"
#include "hwgui.ch"

#define CORPADRAO  COLOR_3DLIGHT+3
#define BLUE 16711680

Function Main()
PRIVATE oJanela
PRIVATE oFont1, grpConfiguracao, o_Obtn1, btnPeso
PRIVATE oIcon := HIcon():AddResource("ICON_1"),;
        oBmp1 := HBitmap():AddFile("res\novo.bmp"),;
        oBmp2 := HBitmap():AddFile("res\sobre.bmp"),;
        oBmp3 := HBitmap():AddFile("res\excluir.bmp"),;
        oBmp4 := HBitmap():AddFile("res\calc.bmp"),;
        oBmp5 := HBitmap():AddFile("res\calendario.bmp"),;
        oBmp6 := HBitmap():AddFile("res\imp.bmp"),;
        oBmp7 := HBitmap():AddFile("res\atualizar.bmp"),;
        oBmp8 := HBitmap():AddFile("res\sair.bmp")

Private lNovo := .F.
Private GIndice
Private oBrowse

REQUEST DBFCDX
RDDSETDEFAULT("DBFCDX")
DBSETDRIVER("DBFCDX")

REQUEST HB_LANG_PT
REQUEST HB_CODEPAGE_PT850

HB_LANGSELECT("PT")
HB_SETCODEPAGE( "PT850" )

SET EXCLUSIVE OFF
SET CONFIRM Off
SET DELE ON
SET EPOCH TO 2000
SetKey( K_ALT_C, {|| Finaliza_Sistema() } )
SetKey( K_F9   , {|| ShellExecute("calc") } )

IF ( hWnd := Hwg_FindWindow( oJanela,"Sistema de Agenda de Contatos - Sygecom Informática Ltda" ) ) != 0
   Hwg_SetForegroundWindow( hWnd )
   Return
ENDIF

SetToolTipBalloon(.t.)
SetColorinFocus( .t. )

PREPARE FONT oFontBtn NAME "Arial" WIDTH 0 HEIGHT -12 charset 255
INIT DIALOG oJanela CLIPPER NOEXIT TITLE "Sistema de Agenda de Contatos - Sygecom Informática Ltda";
FONT oFontBtn;
AT 0,0 SIZE 500,480;
ICON oIcon ;
STYLE DS_CENTER + WS_VISIBLE + WS_CAPTION + WS_SYSMENU;
ON EXIT {|| Finaliza_Sistema()}

@ 10,460 Say "Web Site: http://www.sygecom.com.br";
LINK "http://www.sygecom.com.br" ;
SIZE 210,22

AgendaOpen()

SELE LETRA
@ 415,010 BROWSE GIndice DATABASE Of oJanela SIZE 50, 360;
STYLE  WS_VSCROLL + WS_HSCROLL;
ON CLICK {|| Pega_letra() }

GIndice:AddColumn( HColumn():New( "L",    FieldBlock(Fieldname(1)),"C",1,0,,,,,,,,,{|| Cancela_filtro(),DbGoTop(),oBrowse:Refresh()}) )
GIndice:bcolorSel := VColor( "800080" )
GIndice:ofont := HFont():Add( 'Arial',0,-9)

GIndice:aColumns[1]:nJusHead := DT_CENTER
GIndice:aColumns[1]:nJusLin  := DT_CENTER
GIndice:aColumns[1]:length := 3

SELE AGENDA
@ 010,010 BROWSE oBrowse DATABASE of oJanela SIZE  398, 360;
STYLE  WS_VSCROLL + WS_HSCROLL;
ON CLICK {||Novo_Registro(.F.)};
ON POSCHANGE {|| SetFocus(oBrowse:handle ) }

oBrowse:bKeyDown := {|o,key| BrowseKey1(o, key ) }

oBrowse:AddColumn( HColumn():New( "Codigo", FieldBlock(Fieldname(1)),"N",6,0) )
oBrowse:AddColumn( HColumn():New( "Nome",   FieldBlock(Fieldname(2)),"C",40,0) )

oBrowse:bcolorSel := VColor( "800080" )
oBrowse:ofont := HFont():Add( 'Arial',0,-12 )

oBrowse:aColumns[1]:nJusHead := DT_CENTER
oBrowse:aColumns[1]:nJusLin  := DT_CENTER

oBrowse:Refresh()

vPosicao=0

@ vPosicao+10,385  OWNERBUTTON Of oJanela      ;
ON CLICK {|| Novo_Registro(.T.)}  ;
SIZE 50,50;
TOOLTIP "Clique Aqui Para Cadastrar um Novo Registro"    ;
BITMAP oBmp1 FROM RESOURCE TRANSPARENT;
FLAT
vPosicao=vPosicao+60

@ vPosicao,385  OWNERBUTTON Of oJanela      ;
ON CLICK {|| Deleta_reg()} ;
SIZE 50,50;
TOOLTIP "Clique Aqui para Deletar o Registro de Contato"    ;
BITMAP oBmp3 FROM RESOURCE TRANSPARENT;
FLAT
vPosicao=vPosicao+60

@ vPosicao,385  OWNERBUTTON Of oJanela      ;
ON CLICK {|| Imp_Contato() } ;
SIZE 50,50;
TOOLTIP "Clique Aqui para Imprimir os dados do Contato";
BITMAP oBmp6 FROM RESOURCE TRANSPARENT;
FLAT
vPosicao=vPosicao+60

@ vPosicao,385  OWNERBUTTON Of oJanela;
ON CLICK {|| Sobre()} ;
SIZE 50,50;
TOOLTIP "Sobre a Sygecom Informática Ltda";
BITMAP oBmp2 FROM RESOURCE TRANSPARENT;
FLAT
vPosicao=vPosicao+60

@ vPosicao,385  OWNERBUTTON Of oJanela;
ON CLICK {|| Set_Calc()} ;
SIZE 50,50;
TOOLTIP "Clique Aqui para chamar a Calculadora";
BITMAP oBmp4 FROM RESOURCE TRANSPARENT;
FLAT
vPosicao=vPosicao+60

@ vPosicao,385  OWNERBUTTON Of oJanela;
ON CLICK {|| RunApplet( "timedate.cpl" ) } ;
SIZE 50,50;
TOOLTIP "Clique Aqui para ver o Calendario";
BITMAP oBmp5 FROM RESOURCE TRANSPARENT;
FLAT
vPosicao=vPosicao+60

@ vPosicao,385  OWNERBUTTON Of oJanela;
ON CLICK {|| MsgInfo("Em Desenvolvimento...")} ;
SIZE 50,50;
TOOLTIP "Clique Aqui para ver Atualizar o sistema";
BITMAP oBmp7 FROM RESOURCE TRANSPARENT;
FLAT
vPosicao=vPosicao+60

@ vPosicao,385  OWNERBUTTON Of oJanela      ;
ON CLICK {|| Finaliza_Sistema()}           ;
SIZE 50,50;
TOOLTIP "Sair do Sistema"    ;
BITMAP oBmp8 FROM RESOURCE TRANSPARENT;
FLAT

ACTIVATE DIALOG oJanela

RETURN nil

*******************
Function Pega_Letra
*******************
cLetra := LETRA->L
Pesquisa_Agenda(cLetra)
Return

******************************
Function Pesquisa_Agenda(cPesq)
******************************
if cPesq==Nil
   cPesq:= "A"
EndIf
SELE AGENDA
DBSETORDER(3)
ORDScope(0, cPesq)
ORDScope(1, cPesq)
DBGOTOP()
oBrowse:Refresh()
Return Nil

***********************
Function Cancela_Filtro
***********************
SELE AGENDA
DBSETORDER(2)
ORDScope(0, Nil)
ORDScope(1, Nil)
DBGOTOP()
oBrowse:Refresh()
Return Nil

*******************
Function Deleta_reg
*******************
cReg := AGENDA->CODIGO
cNome:= AGENDA->NOME
IF EMPTY(cNome)
   MsgInfo("Não foi possivel Localizar o registro","Aviso do Sistema")
   Return Nil
Endif
If MsgYesNo("Confirma Exclusão do Codigo: "+str(cReg)+" Nome: "+ALLTRIM(cNome) + " ?","Excluir Contato")
   SELE AGENDA
   DBSETORDER(1)
   DBSEEK(cReg)
   if Found()
      TRAVAREG()
      dbDELETE()
      DBCOMMIT()
      LIBERAREG()
   endif
   Dbgotop()
   oBrowse:Refresh()
endif
Return

***********************************
Function BrowseKey1( oBrowse, key )
***********************************
DO CASE
   CASE KEY= VK_ESCAPE
        EndDialog()
   CASE KEY = VK_RETURN
        Novo_Registro(.F.)
   CASE KEY = 1
        EndDialog()
   CASE KEY = VK_F9
        ShellExecute("calc")
   otherwise
   IF KEY = 46
      If MsgYesNo("Confirma Exclusão do Codigo ?","Excluir Contato")
         TRAVAREG()
         dele
         DBCOMMIT()
         LIBERAREG()
         DBGOTOP()
         oBrowse:Refresh()
      ENDIF
   ENDIF
ENDCASE
Return .T.

*****************************************
Function Novo_Registro( lNovo_Registro  )
*****************************************
Local lExc:=.F.
Local Botao_salvar, Botao_Cancelar, Botao_Deletar

PRIVATE oIcon := HIcon():AddResource("ICON_1")
Private Form_2
Private T_Codigo
Private T_Nome     
Private T_Endereco  
Private T_Bairro    
Private T_Cep       
Private T_Cidade    
Private T_Estado    
Private T_Fone1     
Private T_Fone2     
Private T_Email     

Private cCodigo   := 0
Private cNome     := ""
Private cEndereco := ""
Private cBairro   := ""
Private cCep      := ""
Private cCidade   := ""
Private cEstado   := ""
Private cFone1    := ""
Private cFone2    := ""
Private cEmail    := ""
Private aItens    := {"AC","AL","AP","AM","BA","CE","DF","GO","ES","MA","MT","MS","MG","PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SP","SC","SE","TO"}

lNovo := lNovo_Registro

If ! lNovo
   cCodigo:=codigo
   SELE AGENDA
   DBGOTOP()
   DBSetOrder(1)
   DBSeek(cCodigo)
   IF !FOUND()
      MsgSTOP("Registro "+STR(cCodigo)+" não localizado!!","Agenda")
      Return Nil
   EndIf
   cNome     := AllTrim( Agenda->Nome)
   cEndereco	:= AllTrim( Agenda->Endereco)
   cBairro   := AllTrim( Agenda->Bairro)
   cCep		    := AllTrim( Agenda->Cep)
   cCidade	  := AllTrim( Agenda->Cidade)
   cEstado	  := AllTrim( Agenda->Estado)
   cFone1    := AllTrim( Agenda->Fone1)
   cFone2    := AllTrim( Agenda->Fone2)
   cEmail    := AllTrim( Agenda->EMail)
else
   Agenda->(DBSetOrder(1))
   DbGoBottom()
   cCodigo:=CODIGO+1
EndIf

SetToolTipBalloon(.t.)
SetColorinFocus( .t. )

PREPARE FONT oFonte NAME "Arial" WIDTH 0 HEIGHT -12 charset 255
INIT DIALOG Form_2   ;
AT 0,0                   ;
SIZE 490, 300 ;
ICON oIcon ;
TITLE "Agenda de Contatos - "+Iif( lNovo , "Novo Registro" , "Alterando Registro");
CLIPPER NOEXIT;
FONT oFonte

@ 10 ,10   SAY 'Código:'   COLOR BLUE SIZE 140, 30
@ 10 ,40   SAY 'Nome:'     COLOR BLUE SIZE 140, 30
@ 10 ,70   SAY 'Endereço:' COLOR BLUE SIZE 140, 30
@ 10 ,100  SAY "Bairro:"   COLOR BLUE SIZE 140, 30
@ 360,100  SAY "Cep:"      COLOR BLUE SIZE 140, 30
@ 10 ,130  SAY "Cidade:"   COLOR BLUE SIZE 140, 30
@ 345,130  SAY "Estado:"   COLOR BLUE SIZE 140, 30
@ 10 ,160  SAY "TeleFone:" COLOR BLUE SIZE 140, 30
@ 300,160  SAY "Celular:"  COLOR BLUE SIZE 140, 30
@ 10 ,190  SAY "E-Mail:"   COLOR BLUE SIZE 140, 30

@ 70 , 13  GET T_Codigo   VAR cCodigo   picture "999999"                      SIZE 40 ,24;
STYLE WS_DISABLED;
TOOLTIP "Informe o Numero"

@ 70 , 43  GET T_Nome     VAR cNome     picture "@!"                          SIZE 400,24;
MAXLENGTH 40;
STYLE WS_TABSTOP;
TOOLTIP "Informe o Nome do Contato"

@ 70 , 73  GET T_Endereco VAR cEndereco picture Replicate("X",40)             SIZE 400,24;
STYLE WS_TABSTOP;
TOOLTIP "Informe o Endereço"

@ 70 ,103  GET T_Bairro   VAR cBairro   picture Replicate("X",25)             SIZE 250,24;
STYLE WS_TABSTOP;
TOOLTIP "Informe o Bairro"

@ 390,103  GET T_Cep      VAR cCep      PICTURE "@R 99999-999"                SIZE 80 ,24;
STYLE WS_TABSTOP;
TOOLTIP "Informe o Cep"

@ 70 ,133  GET T_Cidade   VAR cCidade   picture Replicate("X",25)             SIZE 250,24;
STYLE WS_TABSTOP;
TOOLTIP "Informe a Cidade"

@ 390,133  GET COMBOBOX T_Estado  VAR cEstado  ITEMS aItens                  SIZE 50,24 TEXT;
STYLE WS_TABSTOP;
TOOLTIP "Informe o Estado"

@ 70 ,163  GET T_Fone1    VAR cFone1    picture  "@R (99) 9999-9999"          SIZE 110,24;
STYLE WS_TABSTOP;
TOOLTIP "Informe o Telefone Convencional"

@ 360,163  GET T_Fone2    VAR cFone2    picture  "@R (99) 9999-9999"          SIZE 110,24;
STYLE WS_TABSTOP;
TOOLTIP "Informe o Telefone Celular"

@ 70 ,193  GET T_Email    VAR cEmail    picture Replicate("X",60)             SIZE 400,24;
STYLE WS_TABSTOP;
TOOLTIP "Informe o Bairro"

@ 70, 232 OWNERBUTTON Botao_Salvar  ;
TEXT 'Salvar' OF Form_2     ;
ON CLICK {||Salvar_Registro()}      ;
STYLE WS_TABSTOP;
TOOLTIP "Clique Aqui para Salvar";
SIZE 120, 35

@ 210,232 OWNERBUTTON Botao_Cancelar;
TEXT 'Cancelar' OF Form_2 ;
ON CLICK {|| EndDialog()};
SIZE 120, 35;
TOOLTIP "Clique Aqui para Sair";

ACTIVATE DIALOG Form_2
Return Nil

**************************
Function Salvar_Registro()
**************************
If Empty( cNome )
	  MsgINFO( "Nome Não foi Informado!!" , "Agenda" )
   T_Nome:SetFocus()
   Return Nil
EndIf
Form_2:Close()
If lNovo
   Agenda->(DBSetOrder(1))
   Agenda->(DBGoBottom())
   Agenda->(DBAppend())
   Agenda->Codigo   := cCodigo
   Agenda->Nome     := cNome
   Agenda->Endereco := cEndereco
   Agenda->Bairro   := cBairro
   Agenda->Cep      := cCep
   Agenda->Cidade   := cCidade
   Agenda->Estado   := cEstado
   Agenda->Fone1    := cFone1
   Agenda->Fone2    := cFone2
   Agenda->EMail    := cEmail
   lNovo:=.F.
Else
   SELE AGENDA
   cCodigo := cCodigo
   Agenda->(DBSetOrder(1))
   If ! Agenda->(DBSeek( cCodigo  ))
      MsgSTOP("Registro "+STR(cCodigo)+" não localizado!!","Agenda")
   EndIf
   TRAVAREG()
   Agenda->Nome      := cNome
   Agenda->Endereco  := cEndereco
   Agenda->Bairro    := cBairro
   Agenda->Cep       := cCep
   Agenda->Cidade    := cCidade
   Agenda->Estado    := cEstado
   Agenda->Fone1     := cFone1
   Agenda->Fone2     := cFone2
   Agenda->EMail     := cEmail
   Agenda->(DBUnlock())
   LIBERAREG()
EndIf
DBGOTOP()
oBrowse:Refresh()
Return Nil

*********************
Function AgendaOpen()
*********************
Local i, abcd:="ABCDEFGHIJKLMNOPQRSTWVXYZ"
PRIVATE oDlgHabla:=NIL

MsgRun("Aguarde Abrindo o Banco de Dados...")

If ! FILE( "AGENDA.DBF" )
   aArq	:= {}
   Aadd( aArq , { 'CODIGO' 	 , 'N' , 06	, 0 } )
   Aadd( aArq , { 'NOME '		  , 'C'	, 40	, 0 } )
   Aadd( aArq , { 'ENDERECO'	, 'C'	, 40	, 0 } )
   Aadd( aArq , { 'BAIRRO'	 	, 'C'	, 25	, 0 } )
   Aadd( aArq , { 'CEP' 		   , 'C'	, 08	, 0 } )
   Aadd( aArq , { 'CIDADE'	 	, 'C'	, 25	, 0 } )
   Aadd( aArq , { 'ESTADO'  	, 'C'	, 02	, 0 } )
   Aadd( aArq , { 'FONE1'		  , 'C' , 10	, 0 } )
   Aadd( aArq , { 'FONE2'		  , 'C' , 10	, 0 } )
   Aadd( aArq , { 'EMAIL'		  , 'C'	, 60	, 0 } )
   DBCreate( "AGENDA.DBF" , aArq ,"DBFCDX" )
EndIf

If ! FILE( "LETRA.DBF" )
   aArq	:= {}
   Aadd( aArq , { 'L' 	 , 'C' , 01	, 0 } )
   DBCreate( "LETRA.DBF" , aArq,"DBFCDX" )

   SELE 1
   Use LETRA Alias TEMP new shared
   SELE TEMP

   For i:=1 to Len(abcd)
       AppRede()
       REPL L  WITH Substr(abcd,i,1)
   NEXT
   LIBERAREG()
   DBCOMMIT()
   SELE TEMP
   USE
EndIf

If ! File( "AGENDA1.CDX" )
   SELE 2
   Use AGENDA Alias TEMP2 new shared
   Index on Codigo           TAG 1 to AGENDA1
   Index on Nome             TAG 2 to AGENDA1
   Index on Substr(Nome,1,1) TAG 3 to AGENDA1
   SELE TEMP2
   USE
Endif

SELE 1
Use AGENDA Alias Agenda SHARED NEW
SET INDEX TO AGENDA1

SELE 2
Use LETRA Alias LETRA SHARED NEW
Fim_Run()
Return Nil

********************************************************************************
***************INICIO DA MENSAGEM RUM NA TELA***********************************
********************************************************************************
//delclara a variavel do dialogo
*Private oDlgHabla:=nil

//Mostra a tela de dialogo
*MsgRun()

//inicia a impressão a cada linha
*HW_Atualiza_Dialogo(vMENSAGEM)

//fin do relatorio
*hw_FimDialogoTemporal()

// -----------------------------------
// Rutina para un diálogo temporizado.
// -----------------------------------
Function Inicia_Run()
Private oDlgHabla:=nil

FUNCTION MsgRun( cMsg,cTime )
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
static FUNCTION IniDlgHabla(cTime)
oDlgHabla:Center()
if cTime#nil
   SET TIMER oTimHabla OF oDlgHabla ID 9006 VALUE cTime ACTION {|| CierraDialogo() }
endif
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

Function logo_sygecom
LOCAL oSplash
if file("res\sygecom.bmp")
   SPLASH oSplash TO "res\sygecom.bmp" TIME 500
endif
Return NIL
********************************************************************************
***************INICIO DO TESTE DE CONEXÃO DE INTERNET***************************
********************************************************************************

********************************************************************************
***************FIM DO TESTE DE CONEXÃO DE INTERNET******************************
********************************************************************************

***************************
Function Finaliza_Sistema()
***************************
IF MsgYesNo("Confirma saída do sistema?")
   DBCLOSEALL()
   LIMPATEMP()
   Logo_sygecom()
   QUIT
ENDIF
**************
Func LiberaREG
**************
DBUNLOCK()
Return

*************
Func AppRede()
*************
PRIVATE oDlgHabla:=NIL
While .T.
   DbAppend()
   If !NetErr()
      Return(.T.)
   Else
      MilliSec(1000)
      Loop
   EndIf
Enddo
Return(Nil)

******************
Function TravaReg
******************
While .T.
   While .T. && Eternamente
     If Rlock()
        Return(.T.)
     Else // TENTA DE NOVO
        MilliSec(1000)
        Loop
     EndIf
   EndDo
   MsgINFO("Não foi possível Travar o registro, Tente mais tarde.","Aviso do Sistema")
   Return(.F.)
   Exit
EndDo
Return Nil

**************
FUNCTION Sobre
**************
LOCAL FormSobre
LOCAL Fonte   := HFont():Add( "Arial",0,-13 )
PRIVATE oIcon := HIcon():AddResource("ICON_1"),;
        oBmpLogo1 := HBitmap():AddFile("res\sygecom2.bmp")

   INIT DIALOG FormSobre TITLE "Informações da Sygecom Informática Ltda" ;
   AT 110,100  SIZE 700,320 ;
   ICON oIcon ;
  	FONT Fonte ;
  	STYLE WS_DLGFRAME + WS_SYSMENU + DS_CENTER

   @ 510,5 OWNERBUTTON o_Obtn1;
   SIZE 190,185 ;
   FLAT;
   BITMAP oBmpLogo1 FROM RESOURCE TRANSPARENT;
   TOOLTIP "Sygecom Informatica Ltda"

   @ 20,10  Say "Sygecom Informática Ltda - O Selo do Software    " SIZE 500,22
   @ 20,40  Say "Av. Artur Garcia, 271      Cep:94810-090         " SIZE 500,22
   @ 20,70  Say "Alvorada - RS                                    " SIZE 500,22
   @ 20,100 Say "Fone:51-3442-2345 / 51-3442-3975 / 51-9191-3474  " SIZE 500,22
   @ 20,130 Say "Web Site: http://www.sygecom.com.br";
   LINK "http://www.sygecom.com.br" ;
   SIZE 230,22
   @ 20,160 Say "E-mail-Msn:suporte@sygecom.com.br            "     SIZE 500,22
   @ 20,185 Say "Programador Responsavel.: Leonardo Machado   "     SIZE 500,22
   @ 20,210 Say "Versão Compilador.:"+version()+" + "+HWG_Version() SIZE 500,22

   @ 280,240 BUTTON "Sair" SIZE 100, 32 ;
  	ON CLICK {|| EndDialog() };
  	STYLE WS_TABSTOP

   ACTIVATE DIALOG FormSobre
Return Nil

*************************************
FUNCTION Set_Calc()   //Calculadora()
*************************************
LOCAL hWnd
If ( hWnd := SeekCalculadora() ) == 0
   WinExec( 'Calc.Exe', SW_NORMAL )
Else
   BringWindowToTop( hWnd )
   ShowWindow( hWnd, SW_RESTORE )
Endif
Return Nil
*********************************
STATIC FUNCTION SeekCalculadora()
*********************************
LOCAL aCaptions := { 'Calc', 'Calculator', 'Calculadora' }
LOCAL nPos, hWnd
For nPos = 1 to Len(aCaptions)
    If ( hWnd := FindWindow( 0, aCaptions[nPos] ) ) > 0
        Return hWnd
    EndIf
Next
RETURN hWnd

FUNCTION RunApplet( cApplet )
ShellExecute("rundll32.exe","open","shell32.dll, Control_RunDLL "+cApplet,"5")
RETURN Nil

*****************
Function CHAMAIMP
*****************
LOCAL cPrinterName, cPrinterPort
LOCAL aPrn    := GetPrinters()
PARA TAM,cARQ      // S=136 N=79

IF TAM=Nil
   TAM="S"
ENDIF

If Empty(aPrn)
   IF MsgYesNo("ATENÇÃO !!! Não foi possivel localizar Nenhuma impressora Instalada no Windows, Deseja Instalar uma Agora ?","Aviso do Sistema")
     RunApplet_imp( "AddPrinter" )
   Endif
   Return
EndIf

IF !EMPTY(cARQ)
   cFILE := cARQ
ELSE
   MsgInfo("Não foi possivel Gerar arquivo de impressão","Aviso do Sistema")
   Return
ENDIF

nPrn:=PrintSetup( @cPrinterName )

IF TAM="S"
   IF !EMPTY(nPrn)
      Imprime(cFILE,136,cPrinterName)
   ENDIF
ELSE
   IF !EMPTY(nPrn)
      Imprime(cFILE,80,cPrinterName)
   ENDIF
ENDIF
RETURN NIL

FUNCTION RunApplet_imp( cApplet ) //CONFIGURA IMPRESSORA NO WINDOWS
ShellExecute("rundll32.exe","open","shell32.dll, SHHelpShortcuts_RunDLL "+cApplet,"2")
RETURN Nil

******************************************
Function Imprime( cArq, tamrel ,cPrinter )
******************************************
local cTexto, nLinhas, nA, cLinha
local oPrinter := win32prn():New(cPrinter)

oPrinter:Landscape := .F.
oPrinter:FormType  := 9
oprinter:SetPrintQuality(-1) // qualidade da impressão

oPrinter:Copies    := 1

GERAFILE()
vARQ:={}
aadd( vARQ, {"LINHA","C",200,0} )
DBcreate(cFILE, vARQ,"DBFCDX")

SELE 40
USE (cFILE) alias TEMPIMP excl VIA "DBFCDX"
append from (cArq) sdf && nome completo do arquivo sdf

oPrinter:Create()
IF !oPrinter:Create()
   MsgStop("ATENÇÃO !!! Não foi possivel Iniciar a Impressão, Favor Verificar se a Impressora esta Ligada.","Aviso do Sistema")
   return NIL
ELSE
   IF !oPrinter:StartDoc("Impressao de Contato")
      MsgStop("ATENÇÃO !!! Não foi possivel Iniciar a Impressão, Favor Verificar o Spoll da Impressora","Aviso do Sistema")
      Return NIL
   endif

   IF FILE("res\logo.bmp")  // se tiver o arquivo logo.bmp dentro da mesma pasta ele vai imprimir o logo primeiro
      PrintBitMap( oPrinter )
      aTamlog := 9
   else
      aTamlog := 0
   endif

   FOR TT=1 TO aTamlog
      oPrinter:newline()
   NEXT

   IF TAMREL=80
      oPrinter:setfont('Courier New',,11,,,,255) // Normal
   ELSE
      oPrinter:SetFont("Courier New",11,{3,-50}) // Comprimida
   ENDIF
   oPrinter:Bold(0) // Normal

   dbgotop()
   Do while !eof()
      cLinha := Linha    // Busca linha de impressao
      oPrinter:newline() // Inicia nova linha

      oPrinter:SetFont("Courier New",11,{3,-50}) // Comprimida

      oPrinter:TextOut(HB_OemToAnsi(cLinha))
      oPrinter:Bold(0) // Normal
      dbskip()

      if !eof()
         if (oPrinter:MaxRow() - 2) <= oPrinter:Prow() // Usa "oPrinter:NewPage()" para iniciar nova pagina
            oPrinter:NewPage()
            IF FILE("res\logo.bmp")  // se tiver o arquivo logo.bmp dentro da mesma pasta ele vai imprimir o logo primeiro
               PrintBitMap( oPrinter )
               aTamlog := 9
            else
               aTamlog := 0
            endif

            FOR TT=1 TO aTamlog
               oPrinter:newline()
            NEXT
         endif
      endif
   enddo
   oPrinter:EndDoc()
   oPrinter:Destroy()
ENDIF
SELE TEMPIMP
USE
RETURN NIL

***************************
Function PrintBitMap( oPrn )  //função para imprimir imagem do logotipo
***************************
LOCAL oBMP
oBMP:= Win32BMP():new()
oBmp:loadFile( "res\logo.bmp" )
oBmp:Draw( oPrn,  { 200,200,500,500 } )
oBMP:Destroy()
RETURN

Function GERAFILE()
vSIS1 := GETENV("temp")
public cFILE := vSIS1+"\TEMP"+ ALLTRIM( STR( HB_RandomInt(9999) ))
RETURN cFILE

Function LIMPATEMP
Dbcloseall()
FClose()
vTEMP_L:= GETENV("temp")  // pasta temporaria do windows
IF FILE(vTEMP_L+"\*.PRN")
   MYRUN("DEL "+vTEMP_L+"\*.PRN")
ENDIF
IF FILE(vTEMP_L+"\*.CDX")
   MYRUN("DEL "+vTEMP_L+"\*.CDX")
ENDIF
IF FILE(vTEMP_L+"\*.DBF")
   MYRUN("DEL "+vTEMP_L+"\*.DBF")
ENDIF
RETURN

*********************
FUNC MYRUN( cComando )
**********************
local oShell, RET
oShell := CreateObject( "WScript.Shell" )
RET := oShell:Run( "%comspec% /c " + cComando, 0, .T. )
oShell := NIL
return iif( RET = 0, .T., .F. )
********************************************************************************
***********************ROTINAS UTEIS********************************************
********************************************************************************






