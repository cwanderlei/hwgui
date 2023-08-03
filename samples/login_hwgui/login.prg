********************************************************************************
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

********************************************************************************
#include "windows.ch"
#include "guilib.ch"
#include "inkey.ch"

Function Main()
   Local ;
      oMain, ;
      oPanel, ;
      nLogoWidth, ;
      nLogoHeight, ;
      nCenterWidht, ;
      nCenterHeight, ;
      nColPanelButton, ;
      lControlLogin := .T.

PRIVATE oTelaPrincipal

   Public ;
      oMenu, ;
      oFont, ;
      oBmpLogo := HBitmap():AddFile( "res\sagi2.bmp"), ;
      cImagemDir := "res\"

REQUEST HB_LANG_PT
REQUEST HB_CODEPAGE_PT850

HB_LANGSELECT("PT")
HB_SETCODEPAGE( "PT850" )

SET DATE BRITISH
SET EPOCH TO 2000
SET CONFIRM ON
SET DELETED ON
SET EXCLUSIVE OFF
SET autopen off

IF ( hWnd := Hwg_FindWindow( oMain,"Faturamento Convenio" ) ) != 0
   Hwg_SetForegroundWindow( hWnd )
   Return
ENDIF

   PREPARE FONT oFont NAME "MS Sans Serif" WIDTH 8 HEIGHT -13

   INIT WINDOW oMain ;
      MAIN ;
      TITLE "Faturamento Convenio" ;
      SIZE GetDesktopWidth(), GetDesktopHeight() ;
      COLOR HBrush():Add( 8355711 ):handle;
      ON SIZE {|| Login() } ;
      ON EXIT {|| MsgYesNo( "Deseja sair do sistema ?" ) }

      @ 0,0 PANEL oPanel OF oMain SIZE 0,60
      @ ( nColPanelButton := 2 ),3 OWNERBUTTON OF oPanel ON CLICK {|| Login() } ;
       SIZE 90,55 ;
       TEXT "Login" FONT oFont COORDINATES 0,35,0,0 ;
       BITMAP "res\sygecom2.bmp" COORDINATES 0,5,25,25

      @ ( nColPanelButton += 90 ),3 OWNERBUTTON OF oPanel ON CLICK {|| .t. } ;
       SIZE 90,55 ;
       TEXT "Logoff" FONT oFont COORDINATES 0,35,0,0 ;
       BITMAP cImagemDir + "DOOR.BMP" COORDINATES 0,5,25,25

      @ ( nColPanelButton += 90 ),3 OWNERBUTTON OF oPanel ON CLICK {|| msginfo( "Botão 2" ) } ;
       SIZE 90,55 ;
       TEXT "Lançamento" FONT oFont COORDINATES 0,35,0,0 ;
       BITMAP cImagemDir + "edit_edit.bmp" COORDINATES 0,5,25,25

      @ ( nColPanelButton += 90 ),3 OWNERBUTTON OF oPanel ON CLICK {|| msginfo( "Botão 3" ) } ;
       SIZE 90,55 ;
       TEXT "Externo" FONT oFont COORDINATES 0,35,0,0 ;
       BITMAP cImagemDir + "edit_edit.bmp" COORDINATES 0,5,25,25

      @ ( nColPanelButton += 90 ),3 OWNERBUTTON OF oPanel ON CLICK {|| msginfo( "Botão 4" ) } ;
       SIZE 90,55 ;
       TEXT "Fechamento" FONT oFont COORDINATES 0,35,0,0 ;
       BITMAP cImagemDir + "edit_edit.bmp" COORDINATES 0,5,25,25

      @ ( nColPanelButton += 90 ),3 OWNERBUTTON OF oPanel ON CLICK {|| msginfo( "Botão 5" ) } ;
       SIZE 90,55 ;
       TEXT "Manutenção" FONT oFont COORDINATES 0,35,0,0 ;
       BITMAP cImagemDir + "edit_edit.bmp" COORDINATES 0,5,25,25

      @ ( nColPanelButton += 90 ),3 OWNERBUTTON OF oPanel ON CLICK {|| EndWindow() } ;
       SIZE 90,55 ;
       TEXT "Sair" FONT oFont COORDINATES 0,35,0,0 ;
       BITMAP cImagemDir + "edit_close.bmp" COORDINATES 0,5,25,25

      MENU Of oMain
         MENU TITLE "&Arquivos"
            MENUITEM "&Indexação"      ACTION msginfo( "Indexação" )
            MENUITEM "&Parametros"     ACTION msginfo( "Parametros" )
            MENUITEM "I&mpressoras"    ACTION msginfo( "Impressoras" )
            MENU TITLE "&Acessos do Usuario"
               MENUITEM "Principal" ACTION msginfo( "Configuração dos Acessos Principais dos Usuarios" )
               MENUITEM "Extra"     ACTION msginfo( "Configuração dos Acessos Extras dos Usuarios" )
            ENDMENU
            MENUITEM "&Trocar Usuario" ACTION msginfo( "LogOff" )
            MENUITEM "&Sair"           ACTION EndWindow()
         ENDMENU

         MENU TITLE "&Contas"
            MENUITEM "&Lançamentos"    ACTION msginfo( "Lançamento" )
            MENUITEM "&Externos"       ACTION msginfo( "Externos" )
            MENUITEM "&Fechamentos"    ACTION msginfo( "Fechamentos" )
            MENUITEM "&Manutenção"     ACTION msginfo( "Manutenção" )
         ENDMENU

         MENU TITLE "&Relatórios"
            MENU TITLE "&Faturas"
               MENUITEM "&Separa conta de U.T.I. - Araras" ACTION msginfo( "SEPARA GASTOS DOS SETORES COM OS GASTOS DE U.T.I. PARA ARARAS" )
               MENUITEM "&Espelho da Conta"                ACTION msginfo( "ESPELHO DA CONTA" )
               MENUITEM "E&spelho da Conta - SLS"          ACTION msginfo( "ESPELHO DA CONTA DE ACORDO COM AS EXIGENCIAS DO SLS" )
               MENUITEM "Es&pelho da Conta - Pirassununga" ACTION msginfo( "ESPELHO DA CONTA DE ACORDO COM AS EXIGENCIAS DE PIRASSUNUNGA" )
            ENDMENU

            MENU TITLE "F&aturamento"
               MENUITEM "&Listagem de Guias   "          ACTION msginfo( "LISTAGEM DE GUIAS POR NUMERO DE LOTE" )
               MENUITEM "L&istagem de Contas  "          ACTION msginfo( "LISTAGEM DAS CONTAS POR NUMERO DE LOTE" )
               MENUITEM "&Totalizando por Grupo"         ACTION msginfo( "LISTAGEM DAS CONTAS TOTALIZANDO POR GRUPO DE COBRANCA" )
               MENUITEM "&Plano X Setor        "         ACTION msginfo( "LISTAGEM DAS CONTAS TOTALIZANDO POR GRUPO DE COBRANCA SEPARANDO POR PLANO E SETOR" )
               MENUITEM "T&otalizando por Grupo e Setor" ACTION msginfo( "LISTAGEM DAS CONTAS TOTALIZANDO POR GRUPO DE COBRANCA E SETOR" )
               MENUITEM "&Honorarios Medicos"            ACTION msginfo( "RELATORIO DE HONORARIOS MEDICOS" )
            ENDMENU

            MENU TITLE "&Sadt - Externo"
               MENUITEM "&Listagem das Guias "  ACTION msginfo( "LISTAGEM DAS GUIAS DE SADT EXTERNO " )
               MENUITEM "&Totalizacao por SADT" ACTION msginfo( "TOTALIZA TODAS AS GUIAS POR SADT" )
            ENDMENU

            MENU TITLE "&Gerenciais"
               MENUITEM "&Totalizacao por Procedimento"     ACTION msginfo( "TOTALIZACAO DE TODOS OS GASTOS POR PROCEDIMENTO E CONVENIO" )
               MENUITEM "T&ot. por Procedimento Especifico" ACTION msginfo( "TOTALIZACAO DE TODOS OS GASTOS POR PROCEDIMENTO ESPECIFICO E CONVENIO" )
               MENUITEM "To&t. dos Gastos por Convenio"     ACTION msginfo( "TOTALIZACAO DE TODOS OS GASTOS POR CONVENIO" )
               MENUITEM "&Gastos por Grupos de Mat/Med"     ACTION msginfo( "TOTALIZACAO DE TODOS OS GASTOS DE MAT/MED POR CONVENIO E GRUPOS" )
            ENDMENU
         ENDMENU

         MENU TITLE "&Utilitarios"
            MENUITEM "&Sincroniza‡Æo"       ACTION msginfo( "SINCRONIZA€ÇO DO ARQUIVO FATURA COM OS DE CONSUMO" )
            MENUITEM "A&tribuicao de Guias" ACTION msginfo( "ATRIBUICAO DE GUIAS QUE FORAM DIGITADAS NO RECEP" )
            MENUITEM "&Conta sem plano"     ACTION msginfo( "ACERTO DOS PLANOS DAS CONTAS" )
            MENUITEM "&Converte"            ACTION msginfo( "Converte codigo" )
            MENU TITLE "&Recalculos"
               MENUITEM "&Diarias e Taxas"          ACTION msginfo( "Recalculo dos valores de Diarias e Taxas" )
               MENUITEM "&Sadt"                     ACTION msginfo( "Recalculo dos valores de SADT" )
               MENUITEM "&Honorarios Medicos"       ACTION msginfo( "Recalculo dos valores de Honorarios Medicos" )
               MENUITEM "&Materiais e Medicamentos" ACTION msginfo( "Recalculo dos valores de Materiais e Medicamentos" )
            ENDMENU
         ENDMENU

      ENDMENU

      CENTER WINDOW oMain

   ACTIVATE WINDOW oMain

Return Nil

*********************
Function Carrega_emp()
*********************
PUBLIC CLIPPER,VMDTSYS,VMSENHA,OPCAO,VMACAO,MACAO,VMV1,XCAL,YCAL,VFACAO, VMEMPRE
PUBLIC INDEXA
public cfant,cfilial,cend,ccompl,ccid,cest,cmail,cger,ccep,cdd1,cfon1,cdd2,cfon2,cdd3,cfon3,cdd4
public cfon4,cdd5,cfon5,cba1,cag1,cco1,cba2,cag2,cco2,cba3,cag3,cco3,cba4,cag4,cco4,cba5,cag5,cco5,cba6
public cag6,cco6,ccgc,cie,cP01040,cP10120,cP10150,cP101501,cP101502,cP10170,cP10185,cP10195,cP10240,cP10250,cP20176
public cP20177,cP20230,cP20395,cRESGA,cRESGATE
Return

Function Login( lControlLogin )

   Static ;
   lInitLogin := .f.

   Local ;
      oFormLogin,;
      nForLogin
      //lLoginOk.false

   Private ;
      oGetUsuario, ;
      cGetUsuario, ;
      oGetPassword, ;
      cGetPassword

   if pCount() == 1
      lInitLogin := lControlLogin
   endif

   if lInitLogin
      INIT DIALOG oFormLogin CLIPPER NOEXIT TITLE "Login";
           SIZE 200, 200 ;
           STYLE DS_CENTER + WS_VISIBLE + WS_POPUP + WS_VISIBLE + WS_CAPTION + WS_SYSMENU

         @ 50, 20 GET oGetUsuario VAR cGetUsuario ;
                  OF oFormLogin ;
                  SIZE 50, 22 ;
                  TOOLTIP "Entre com o nome do Usuario"

         @ 50, 50 GET oGetPassword VAR cGetPassword ;
                  OF oFormLogin ;
                  SIZE 50, 22 ;
                  PASSWORD ;
                  TOOLTIP "Entre com a senha do Usuario"

         @ 50,100 OWNERBUTTON OF oFormLogin ON CLICK {|| msginfo("Logado"), oFormLogin:Close() } ;
                  SIZE 80,30 ;
                  TEXT "OK" FONT oFont

      ACTIVATE DIALOG oFormLogin
   else
      lInitLogin := !lInitLogin
   endif
Return .T.

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
oDlgHabla:ACONTROLS[1]:SETTEXT("Aguarde.."+vMensagem)
RETURN NIL
********************************************************************************
***************FIM DA MENSAGEM RUM NA TELA**************************************
********************************************************************************


********************************************************************************
***************FIM DA ROTINA DE ABERTURA DE ARQUIVOS****************************
********************************************************************************
Function Inicia_Pesquisas
PRIVATE oJanela
PRIVATE oFont, oFont2
PRIVATE LBLtipo, Wtipo := "", Otipo ,r1 := 5

   PREPARE FONT oFont2 NAME "Arial" WIDTH 0 HEIGHT -18 WEIGHT 400
   PREPARE FONT oFont  NAME "Arial" WIDTH 0 HEIGHT -12 WEIGHT 400
   INIT DIALOG oJanela CLIPPER NOEXIT TITLE "Tipo de Pesquisa";
   AT 0,0 SIZE 750,120;
   FONT oFont ;
   STYLE DS_CENTER + WS_VISIBLE + WS_CAPTION + WS_SYSMENU

   SetColorinFocus( .t. )

   @ 5,5     GROUPBOX grpConfiguracao          CAPTION "Escolha uma das Opções Abaixo"      SIZE 740,100

   GET RADIOGROUP r1
   @ 10,40 RADIOBUTTON oRadio1 caption "Devedor"  ;
   SIZE 100,20;
   FONT oFont2 ;
   ON CLICK {||  oJanela:Close(), msginfo("devedor") }

   @ 170,40 RADIOBUTTON oRadio2 caption "Usuario" ;
   SIZE 100,20;
   FONT oFont2 ;
   ON CLICK {|| oJanela:Close(), msginfo("Usuario")}
   END RADIOGROUP

   @ 310,40 RADIOBUTTON oRadio2 caption "Processo" ;
   SIZE 100,20;
   FONT oFont2 ;
   ON CLICK {|| oJanela:Close(), msginfo("Processo")}
   END RADIOGROUP

   @ 460,40 RADIOBUTTON oRadio2 caption "Entrada" ;
   SIZE 100,20;
   FONT oFont2 ;
   ON CLICK {|| oJanela:Close(), msginfo("Entrada")}
   END RADIOGROUP

   @ 600,40 RADIOBUTTON oRadio2 caption "Agenda" ;
   SIZE 100,20;
   FONT oFont2 ;
   ON CLICK {|| oJanela:Close(), msginfo("Agenda")}
   END RADIOGROUP

   ACTIVATE DIALOG oJanela
Return

