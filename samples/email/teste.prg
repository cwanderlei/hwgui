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

#ifndef __XHARBOUR__
   #include "hbusrrdd.ch"
   #xcommand TRY              => s_bError := errorBlock( {|oErr| break( oErr ) } ) ;;
                                 BEGIN SEQUENCE
   #xcommand CATCH [<!oErr!>] => errorBlock( s_bError ) ;;
                                 RECOVER [USING <oErr>] <-oErr-> ;;
                                 errorBlock( s_bError )
   #command FINALLY           => ALWAYS
#else
   #include "usrrdd.ch"
#endif

*************
Function Main
*************
PRIVATE oJanela1
PRIVATE oFont, grpConfiguracao
PRIVATE oIcon := HIcon():AddResource("ICON_1")
**********variaveis***********************
PRIVATE LQuem, LSubject, LMsg1, LMsg2, LMsg3, LMsg4
PRIVATE LMsg5, LMsg6,    LMsg7, LMsg8, LMsg9, LMsg10
PRIVATE LServerIp, LFrom,LUser, LPass, LPass2

PRIVATE oQuem, oSubject, oMsg1, oMsg2, oMsg3, oMsg4
PRIVATE oMsg5, oMsg6,    oMsg7, oMsg8, oMsg9, oMsg10
PRIVATE oServerIp, oFrom,oUser, oPass, oPass2

PRIVATE wQuem    := SPACE(60)
PRIVATE wSubject := SPACE(60)
PRIVATE wMsg1    := SPACE(60)
PRIVATE wMsg2    := SPACE(60)
PRIVATE wMsg3    := SPACE(60)
PRIVATE wMsg4    := SPACE(60)
PRIVATE wMsg5    := SPACE(60)
PRIVATE wMsg6    := SPACE(60)
PRIVATE wMsg7    := SPACE(60)
PRIVATE wMsg8    := SPACE(60)
PRIVATE wMsg9    := SPACE(60)
PRIVATE wMsg10   := SPACE(60)
PRIVATE wServerIp:= SPACE(40)
PRIVATE wFrom    := SPACE(55)
PRIVATE wUser    := SPACE(40)
PRIVATE wPass    := SPACE(20)
PRIVATE wPass2   := SPACE(20)

PARA cARQ

wServerIp:="smtp.datarey.com.br"
wFrom    :="desenvolvimento5@datarey.com.br"
wUser    :="desenvolvimento5@datarey.com.br"
wPass    :="vitor01"
wPass2=Len(wPass)

IF EMPTY(wSERVERiP).OR. EMPTY(wFrom) .OR. EMPTY(wUser) .OR. EMPTY(wPass)
   MsgInfo("Os Dados dos Parametros estão Incompletos para Envio de Email, Favor Verificar nos Parametros do Sistema","Aviso do Sistema")
   RETURN
ENDIF

PREPARE FONT oFont NAME "Arial" WIDTH 0 HEIGHT -12 charset 255
INIT DIALOG oJanela1 CLIPPER NOEXIT TITLE "Envio de E-mail";
FONT oFont;
AT 0,0 SIZE 670,505;
ICON oIcon ;
STYLE DS_CENTER + WS_VISIBLE + WS_CAPTION + WS_SYSMENU

SetColorinFocus(.t.)
SetToolTipBalloon(.t.)

@ 5,5  GROUPBOX grpConfiguracao              CAPTION "Envio de Email"                                 SIZE 655,445
*******SAYS*******
@ 20 ,40   SAY LServerIp                     CAPTION "Nome do Servidor SMTP:"+wServerIp               SIZE 450,22
@ 20 ,70   SAY LFrom                         CAPTION "Meu E-mail........................:"+wFrom      SIZE 450,22
@ 20 ,100  SAY LUser                         CAPTION "Usuario..............................:"+wUser   SIZE 450,22
@ 20 ,130  SAY Lpass2                        CAPTION "Senha.................................:"+Replicate("*",wPass2) SIZE 400,22
@ 20 ,160  SAY LQuem                         CAPTION "Destinatario:"                     SIZE 120,22
@ 20 ,190  SAY LSubject                      CAPTION "Assunto:"                          SIZE 120,22
@ 10 ,220  SAY LMsg1                         CAPTION "Corpo da Msg:"                     SIZE 120,22
*******SAYS*******

*******GETS*******
@ 100,160    GET OQuem  VAR wQuem                                                        SIZE 460,22;
TOOLTIP "Digite aqui o e-mail do destinatario";
MAXLENGTH 60

@ 100,190    GET OSubject  VAR wSubject                                                  SIZE 460,22;
TOOLTIP "Digite aqui o Assunto do e-mail";
MAXLENGTH 60

@ 100,220    GET OMsg1   VAR wMsg1                                                       SIZE 460,22;
TOOLTIP "Digite aqui a Mensagem do corpo do e-mail";
MAXLENGTH 60

@ 100,240    GET OMsg2   VAR wMsg2                                                       SIZE 460,22;
TOOLTIP "Digite aqui a Mensagem do corpo do e-mail";
MAXLENGTH 60

@ 100,260    GET OMsg3   VAR wMsg3                                                       SIZE 460,22;
TOOLTIP "Digite aqui a Mensagem do corpo do e-mail";
MAXLENGTH 60

@ 100,280    GET OMsg4   VAR wMsg4                                                       SIZE 460,22;
TOOLTIP "Digite aqui a Mensagem do corpo do e-mail";
MAXLENGTH 60

@ 100,300    GET OMsg5   VAR wMsg5                                                       SIZE 460,22;
TOOLTIP "Digite aqui a Mensagem do corpo do e-mail";
MAXLENGTH 60

@ 100,320    GET OMsg6   VAR wMsg6                                                       SIZE 460,22;
TOOLTIP "Digite aqui a Mensagem do corpo do e-mail";
MAXLENGTH 60

@ 100,340    GET OMsg7   VAR wMsg7                                                       SIZE 460,22;
TOOLTIP "Digite aqui a Mensagem do corpo do e-mail";
MAXLENGTH 60

@ 100,360    GET OMsg8   VAR wMsg8                                                       SIZE 460,22;
TOOLTIP "Digite aqui a Mensagem do corpo do e-mail";
MAXLENGTH 60

@ 100,380    GET OMsg9   VAR wMsg9                                                       SIZE 460,22;
TOOLTIP "Digite aqui a Mensagem do corpo do e-mail";
MAXLENGTH 60

@ 100,400    GET OMsg10  VAR wMsg10                                                      SIZE 460,22;
TOOLTIP "Digite aqui a Mensagem do corpo do e-mail";
MAXLENGTH 60

*******GETS*******

*******Buttons****
@ 430,465  BUTTON btnOk CAPTION "&Enviar" SIZE 100, 28 ;
TOOLTIP "Enviar o Email";
ON CLICK {|| Verefica_ENVIO() };
STYLE WS_TABSTOP

@ 557,465  BUTTON "&Fechar" SIZE 100, 28 ;
TOOLTIP "Sair do Modulo e Voltar";
ON CLICK {|| oJanela1:Close() };
STYLE WS_TABSTOP

*******Buttons****

ACTIVATE DIALOG oJanela1

RETURN nil

****************************
Function Valida_Email(cmail)
****************************
Local oRegEx, bVal
TRY
   oRegEx := Createobject("VBScript.RegExp")
CATCH error
  RETURN .T.
END
oRegEx:Pattern :="^[\w-\.]{1,}\@([\da-zA-Z-_]{1,}\.){1,}[\da-zA-Z-_]{2,3}$"
cmail := ALLTRIM(cmail)
bVal := oRegEx:Test(cMail)
Release oRegEx
Return bVal

***********************
FUNCTION Verefica_ENVIO
***********************
IF EMPTY(wQuem)
   MsgInfo("Campo Obrigatorio !","Aviso do Sistema")
   OQUEM:setfocus()
   RETURN
ENDIF

if Valida_Email(wQuem)= .F.
   MsgInfo("Email Invalido, Favor Vereficar !!!","Aviso do Sistema")
   OQUEM:setfocus()
   RETURN
endif

oJanela1:Close()

wQuem=lower(alltrim(wQuem))

IF EMPTY(wSubject)
   wSubject="Sem Assunto"
ENDIF

wMsg=wMsg1+HB_OsNewLine()+;
     wMsg2+HB_OsNewLine()+;
     wMsg3+HB_OsNewLine()+;
     wMsg4+HB_OsNewLine()+;
     wMsg5+HB_OsNewLine()+;
     wMsg6+HB_OsNewLine()+;
     wMsg7+HB_OsNewLine()+;
     wMsg8+HB_OsNewLine()+;
     wMsg9+HB_OsNewLine()+;
     wMsg10+HB_OsNewLine()

RenameFile( cARQ, "ANEXO.TXT" )
cARQ3="ANEXO.TXT"

Envia_email(cARQ3,wSubject,wQuem,wMsg,wServerIp,wFrom,wUser,wPass)
RETURN

**************************************************************************
Function Envia_email(cARQ,cSubject,aQuem,cMsg,cServerIp,cFrom,cUser,cPass)
**************************************************************************
aFiles   :={cARQ}
aTo      :={aQuem}

IF SendMail( cServerIP,25,cFrom,aTo,   ,  ,cMsg,cSubject,aFiles,cUser,cPass,cServerIP , 3 , .F. , .T. ,.T.,)=.T.
   MsgInfo("Envio Concluido com sucesso","Aviso do Sistema")
Else
   MsGStop("Não foi possivel enviar o Email, Favor Verificar suas configurações nos Paramentros do Sistema ou verefique sua conexão com a Internet","Aviso do Sistema")
Endif
RETURN nil
********************************************************************************
****************INICIO DO ENVIO DE EMAIL****************************************
********************************************************************************
#include "common.ch"

*        SendMail( cServerIP,25    , cFrom , aTo,    ,     ,  cMsg, cSubject, aFiles, cUser, cPass, cServerIP , 3        , .F.  , .F.   ,.F.      , .T.    ,         )=.T.
FUNCTION SendMail( cServer  , nPort, cFrom , aTo, aCC, aBCC, cBody, cSubject, aFiles, cUser, cPass, cPopServer, nPriority, lRead, lTrace, lPopAuth, lnoauth, nTimeOut)
   /*
   cServer    -> Necessário. Nome IP ou o domínio do servidor de email
   nPort      -> Opcional.   A porta usada pelo o meu servidor de email
   cFro       -> Necessário. Endereço de email do remetente
   aTo        -> Necessário. Seqüência de caracteres ou matriz de endereços de email para enviar o email para
   aCC        -> Opcional.   Seqüência de caracteres ou matriz de email adresses para CC (Copia do email)
   aBCC       -> Opcional.   Seqüência de caracteres ou matriz de email adresses de Cco (copia oculta do email)
   cBody      -> Opcional.   A mensagem do corpo do email como texto, ou o nome do arquivo da mensagem em HTML para enviar.
   cSubject   -> Opcional.   Assunto do email
   aFiles     -> Opcional.   Matriz/arquivos de anexos para enviar com o email
   cUser      -> Necessário. Nome de usuário para o servidor POP3
   cPass      -> Necessário. Senha para cUser
   cPopServer -> Necessário. Nome IP ou o domínio do servidor de email POP3
   nPriority  -> Opcional.   Email de prioridade: 1 = alta, 3 = Normal (padrão), 5 = baixa
   lRead      -> Opcional.   Se definido como. T., uma solicitação de confirmação é enviada. A configuração padrão é. f.
   lTrace     -> Opcional.   Se definido como. T., um arquivo de log é criado (sendmail <nNr>.log). A configuração padrão é. f.
   lPopAuth   -> Opcional.   Sinalizador para indicar que Autentication POP3 é usado. A configuração padrão é. T.
   lnoauth    -> Opcional.   Servidores de email que nao precisam de autenticacao smtp
   nTimeOut   -> Opcional.   Numero de milesimos de segundos a Aguarda o envio - Padrão é 2000(2 segundos)
   */

   LOCAL oInMail, cBodyTemp, oUrl, oMail, oAttach, aThisFile, cFile, cFname, cFext, cData, oUrl1

   LOCAL cTmp          :=""
   LOCAL cMimeText     := ""
   LOCAL cTo           := ""
   LOCAL cCC           := ""
   LOCAL cBCC          := ""

   LOCAL lConnectPlain := .F.
   LOCAL lReturn       := .T.
   LOCAL lAuthLogin    := .F.
   LOCAL lAuthPlain    := .F.
   LOCAL lConnect      := .T.
   local oPop
   local adata:={},nCount,nSize,nSent

   DEFAULT cUser       TO ""
   DEFAULT cPass       TO ""
   DEFAULT nPort       TO 25
   DEFAULT aFiles      TO {}
   DEFAULT nPriority   TO 3
   DEFAULT lRead       TO .F.
   DEFAULT lTrace      TO .F.
   DEFAULT lPopAuth to .T.
   Default lNoAuth  TO .f.
   DEFAULT nTimeOut to 20000

   cUser := StrTran( cUser, "@", "&at;" )

   IF !( (".htm" IN Lower( cBody ) .OR. ".html" IN Lower( cBody ) ) .AND. File(cBody) )

      IF Right(cBody,2) != HB_OSNewLine()
         cBody += HB_OsNewLine()
      ENDIF

   ENDIF

   // cTo
   IF Valtype( aTo ) == "A"
      IF Len( aTo ) > 1
         FOR EACH cTo IN aTo
            IF HB_EnumIndex() != 1
               cTmp += cTo + ","
            ENDIF
         NEXT
         cTmp := Substr( cTmp, 1, Len( cTmp ) - 1 )
      ENDIF
      cTo := aTo[ 1 ]
      IF Len( cTmp ) > 0
         cTo += "," + cTmp
      ENDIF
   ELSE
      cTo := Alltrim( aTo )
   ENDIF


   // CC (Carbon Copy)
   IF Valtype(aCC) =="A"
      IF Len(aCC) >0
         FOR EACH cTmp IN aCC
            cCC += cTmp + ","
         NEXT
         cCC := Substr( cCC, 1, Len( cCC ) - 1 )
      ENDIF
   ELSEIF Valtype(aCC) =="C"
      cCC := Alltrim( aCC )
   ENDIF


   // BCC (Blind Carbon Copy)
   IF Valtype(aBCC) =="A"
      IF Len(aBCC)>0
         FOR EACH cTmp IN aBCC
            cBCC += cTmp + ","
         NEXT
         cBCC := Substr( cBCC, 1, Len( cBCC ) - 1 )
      ENDIF
   ELSEIF Valtype(aBCC) =="C"
      cBCC := Alltrim( aBCC )
   ENDIF

   IF cPopServer != NIL .AND. lPopAuth
      Try
         oUrl1 := tUrl():New( "pop://" + cUser + ":" + cPass + "@" + cPopServer + "/" )
         oUrl1:cUserid := Strtran( cUser, "&at;", "@" )
         opop:= tIPClientpop():New( oUrl1, lTrace )
         IF oPop:Open()
            oPop:Close()
         ENDIF
      Catch
         lReturn := .F.
      END

   ENDIF

   IF !lReturn
      RETURN .F.
   ENDIF

   TRY
    oUrl := tUrl():New( "smtp://" + cUser + "@" + cServer + '/' + cTo )
   CATCH
    lReturn := .F.
   END

   IF !lReturn
      RETURN .F.
   ENDIF

   oUrl:nPort   := nPort
   oUrl:cUserid := Strtran( cUser, "&at;", "@" )

   oMail   := tipMail():new()
   oAttach := tipMail():new()
   oAttach:SetEncoder( "7-bit" )

   IF (".htm" IN Lower( cBody ) .OR. ".html" IN Lower( cBody ) ) .AND. File(cBody)
      cMimeText := "text/html ; charset=ISO-8859-1"
      oAttach:hHeaders[ "Content-Type" ] := cMimeText
      cBodyTemp := cBody
      cBody     := MemoRead( cBodyTemp ) + chr( 13 ) + chr( 10 )

   ELSE
      oMail:hHeaders[ "Content-Type" ] := "text/plain; charset=iso8851"
   ENDIF

   oAttach:SetBody( cBody )
   oMail:Attach( oAttach )
   oUrl:cFile := cTo + If( Empty(cCC), "", "," + cCC ) + If( Empty(cBCC), "", "," + cBCC)

   oMail:hHeaders[ "Date" ] := tip_Timestamp()
   oMail:hHeaders[ "From" ] := cFrom

   IF !Empty(cCC)
      oMail:hHeaders[ "Cc" ] := cCC
   ENDIF
   IF !Empty(cBCC)
      oMail:hHeaders[ "Bcc" ] := cBCC
   ENDIF

   TRY
    oInmail := tIPClientsmtp():New( oUrl, lTrace)
   CATCH
    lReturn := .F.
   END

   IF !lReturn
      RETURN .F.
   ENDIF

   oInmail:nConnTimeout:= nTimeOut

   if !lNoAuth

      IF oInMail:Opensecure()

         WHILE .T.
            oInMail:GetOk()
            IF oInMail:cReply == NIL
               EXIT
            ELSEIF "LOGIN" IN oInMail:cReply
               lAuthLogin := .T.
            ELSEIF "PLAIN" IN oInMail:cReply
               lAuthPlain := .T.
            ENDIF
         ENDDO

         IF lAuthLogin
            IF !oInMail:Auth( cUser, cPass )
               lConnect := .F.
            ELSE
               lConnectPlain  := .T.
            ENDIF
         ENDIF

         IF lAuthPlain .AND. !lConnect
            IF !oInMail:AuthPlain( cUser, cPass )
               lConnect := .F.
            ENDIF
         ELSE
            IF !lConnectPlain
               oInmail:Getok()
               lConnect := .F.
            ENDIF
         ENDIF

      ELSE

         lConnect := .F.

      ENDIF
   else
         lConnect := .F.
   endif

   IF !lConnect

      if !lNoAuth
         oInMail:Close()
      endif
      TRY
       oInmail := tIPClientsmtp():New( oUrl, lTrace)
      CATCH
       lReturn := .F.
      END

      oInmail:nConnTimeout:=nTimeOut

      IF !oInMail:Open()
         lConnect := .F.
         oInmail:Close()
         RETURN .F.
      ENDIF

      WHILE .T.
         oInMail:GetOk()
         IF oInMail:cReply == NIL
            EXIT
         ENDIF
      ENDDO

   ENDIF

   oInMail:oUrl:cUserid := cFrom
   oMail:hHeaders[ "To" ]      := cTo
   oMail:hHeaders[ "Subject" ] := cSubject

   FOR EACH aThisFile IN AFiles

      IF Valtype( aThisFile ) == "C"
         cFile := aThisFile
         cData := Memoread( cFile ) + chr( 13 ) + chr( 10 )
      ELSEIF Valtype( aThisFile ) == "A" .AND. Len( aThisFile ) >= 2
         cFile := aThisFile[ 1 ]
         cData := aThisFile[ 2 ] + chr( 13 ) + chr( 10 )
      ELSE
         lReturn := .F.
         EXIT
      ENDIF

      oAttach := TipMail():New()

      HB_FNameSplit( cFile,, @cFname, @cFext )

      IF Lower( cFile ) LIKE ".+\.(vbd|asn|asz|asd|pqi|tsp|exe|sml|ofml)"    .OR. ;
         Lower( cFile ) LIKE ".+\.(pfr|frl|spl|gz||stk|ips|ptlk|hqx|mbd)"    .OR. ;
         Lower( cFile ) LIKE ".+\.(mfp|pot|pps|ppt|ppz|doc|n2p|bin|class)"   .OR. ;
         Lower( cFile ) LIKE ".+\.(lha|lzh|lzx|dbf|cdx|dbt|fpt|ntx|oda)"     .OR. ;
         Lower( cFile ) LIKE ".+\.(axs|zpa|pdf|ai|eps|ps|shw|qrt|rtc|rtf)"   .OR. ;
         Lower( cFile ) LIKE ".+\.(smp|dst|talk|tbk|vmd|vmf|wri|wid|rrf)"    .OR. ;
         Lower( cFile ) LIKE ".+\.(wis|ins|tmv|arj|asp|aabaam|aas|bcpio)"    .OR. ;
         Lower( cFile ) LIKE ".+\.(vcd|chat|cnc|coda|page|z|con|cpio|pqf)"   .OR. ;
         Lower( cFile ) LIKE ".+\.(csh|cu|csm|dcr|dir|dxr|swa|dvi|evy|ebk)"  .OR. ;
         Lower( cFile ) LIKE ".+\.(gtar|hdf|map|phtml|php3|ica|ipx|ips|js)"  .OR. ;
         Lower( cFile ) LIKE ".+\.(latex|bin|mif|mpl|mpire|adr|wlt|nc|cdf)"  .OR. ;
         Lower( cFile ) LIKE ".+\.(npx|nsc|pgp|css|sh||shar|swf|spr|sprite)" .OR. ;
         Lower( cFile ) LIKE ".+\.(sit|sca|sv4cpio|sv4crc|tar|tcl|tex)"      .OR. ;
         Lower( cFile ) LIKE ".+\.(texinfo|texi|tlk|t|tr|roff|man|mems)"     .OR. ;
         Lower( cFile ) LIKE ".+\.(alt|che|ustar|src|xls|xlt|zip|au|snd)"    .OR. ;
         Lower( cFile ) LIKE ".+\.(es|gsm|gsd|rmf|tsi|vox|wtx|aif|aiff)"     .OR. ;
         Lower( cFile ) LIKE ".+\.(aifc|cht|dus|mid|midi|mp3|mp2|m3u|ram)"   .OR. ;
         Lower( cFile ) LIKE ".+\.(ra|rpm|stream|rmf|vqf|vql|vqe|wav|wtx)"   .OR. ;
         Lower( cFile ) LIKE ".+\.(mol|pdb|dwf|ivr|cod|cpi|fif|gif|ief)"     .OR. ;
         Lower( cFile ) LIKE ".+\.(jpeg|jpg|jpe|rip|svh|tiff|tif|mcf|svf)"   .OR. ;
         Lower( cFile ) LIKE ".+\.(dwg|dxf|wi|ras|etf|fpx|fh5|fh4|fhc|dsf)"  .OR. ;
         Lower( cFile ) LIKE ".+\.(pnm|pbm|pgm|ppm|rgb|xbm|xpm|xwd|dig)"     .OR. ;
         Lower( cFile ) LIKE ".+\.(push|wan|waf||afl|mpeg|mpg|mpe|qt|mov)"   .OR. ;
         Lower( cFile ) LIKE ".+\.(viv|vivo|asf|asx|avi|movie|vgm|vgx)"      .OR. ;
         Lower( cFile ) LIKE ".+\.(xdr|vgp|vts|vtts|3dmf|3dm|qd3d|qd3)"      .OR. ;
         Lower( cFile ) LIKE ".+\.(svr|wrl|wrz|vrt)"                       .OR. Empty(cFExt)
         oAttach:SetEncoder( "base64" )
      ELSE
         oAttach:SetEncoder( "7-bit" )
      ENDIF

      cMimeText := HB_SetMimeType( cFile, cFname, cFext )
      // Some EMAIL readers use Content-Type to check for filename

      IF ".html" in lower( cFext) .OR. ".htm" in lower( cFext)
         cMimeText += "; charset=ISO-8859-1"
      ENDIF

      oAttach:hHeaders[ "Content-Type" ] := cMimeText
      // But usually, original filename is set here
      oAttach:hHeaders[ "Content-Disposition" ] := "attachment; filename=" + cFname + cFext
      oAttach:SetBody( cData )
      oMail:Attach( oAttach )

   NEXT

   IF lRead
      oMail:hHeaders[ "Disposition-Notification-To" ] := cUser
   ENDIF

   IF nPriority != 3
      oMail:hHeaders[ "X-Priority" ] := Str( nPriority, 1 )
   ENDIF

//   oInmail:Write( oMail:ToString() )
   cData := oMail:ToString()
   nSize := Len(cData)
   for nCount := 1 to len(cData) step 1024
       aadd(aData, substr( cData,nCount,1024))
   next
   nSent :=0
   for nCount :=1 to len(aData)
      nSent += oInmail:Write( aData[nCount],len(aData[nCount]))
   next
   oInMail:Commit()
   oInMail:Close()

RETURN lReturn
***********************************************
FUNCTION HB_SetMimeType( cFile, cFname, cFext )
***********************************************
cFile := Lower( cFile )
IF     cFile LIKE ".+\.vbd"                         ; RETURN "application/activexdocument="+cFname + cFext
ELSEIF cFile LIKE ".+\.(asn|asz|asd)"               ; RETURN "application/astound="+cFname + cFext
ELSEIF cFile LIKE ".+\.pqi"                         ; RETURN "application/cprplayer=" + cFname + cFext
ELSEIF cFile LIKE ".+\.tsp"                         ; RETURN "application/dsptype="+cFname + cFext
ELSEIF cFile LIKE ".+\.exe"                         ; RETURN "application/exe="+cFname + cFext
ELSEIF cFile LIKE ".+\.(sml|ofml)"                  ; RETURN "application/fml="+cFname + cFext
ELSEIF cFile LIKE ".+\.pfr"                         ; RETURN "application/font-tdpfr=" +cFname + cFext
ELSEIF cFile LIKE ".+\.frl"                         ; RETURN "application/freeloader=" +cFname + cFext
ELSEIF cFile LIKE ".+\.spl"                         ; RETURN "application/futuresplash =" + cFname + cFext
ELSEIF cFile LIKE ".+\.gz"                          ; RETURN "application/gzip =" + cFname + cFext
ELSEIF cFile LIKE ".+\.stk"                         ; RETURN "application/hstu =" + cFname + cFext
ELSEIF cFile LIKE ".+\.ips"                         ; RETURN "application/ips="+cFname + cFext
ELSEIF cFile LIKE ".+\.ptlk"                        ; RETURN "application/listenup =" + cFname + cFext
ELSEIF cFile LIKE ".+\.hqx"                         ; RETURN "application/mac-binhex40 =" + cFname + cFext
ELSEIF cFile LIKE ".+\.mbd"                         ; RETURN "application/mbedlet="+cFname + cFext
ELSEIF cFile LIKE ".+\.mfp"                         ; RETURN "application/mirage=" +cFname + cFext
ELSEIF cFile LIKE ".+\.(pot|pps|ppt|ppz)"           ; RETURN "application/mspowerpoint =" + cFname + cFext
ELSEIF cFile LIKE ".+\.doc"                         ; RETURN "application/msword=" +cFname + cFext
ELSEIF cFile LIKE ".+\.n2p"                         ; RETURN "application/n2p="+cFname + cFext
ELSEIF cFile LIKE ".+\.(bin|class|lha|lzh|lzx|dbf)" ; RETURN "application/octet-stream =" + cFname + cFext
ELSEIF cFile LIKE ".+\.oda"                         ; RETURN "application/oda="+cFname + cFext
ELSEIF cFile LIKE ".+\.axs"                         ; RETURN "application/olescript=" + cFname + cFext
ELSEIF cFile LIKE ".+\.zpa"                         ; RETURN "application/pcphoto="+cFname + cFext
ELSEIF cFile LIKE ".+\.pdf"                         ; RETURN "application/pdf="+cFname + cFext
ELSEIF cFile LIKE ".+\.(ai|eps|ps)"                 ; RETURN "application/postscript=" +cFname + cFext
ELSEIF cFile LIKE ".+\.shw"                         ; RETURN "application/presentations=" + cFname + cFext
ELSEIF cFile LIKE ".+\.qrt"                         ; RETURN "application/quest=" + cFname + cFext
ELSEIF cFile LIKE ".+\.rtc"                         ; RETURN "application/rtc="+cFname + cFext
ELSEIF cFile LIKE ".+\.rtf"                         ; RETURN "application/rtf="+cFname + cFext
ELSEIF cFile LIKE ".+\.smp"                         ; RETURN "application/studiom="+cFname + cFext
ELSEIF cFile LIKE ".+\.dst"                         ; RETURN "application/tajima=" +cFname + cFext
ELSEIF cFile LIKE ".+\.talk"                        ; RETURN "application/talker=" +cFname + cFext
ELSEIF cFile LIKE ".+\.tbk"                         ; RETURN "application/toolbook =" + cFname + cFext
ELSEIF cFile LIKE ".+\.vmd"                         ; RETURN "application/vocaltec-media-desc="+cFname + cFext
ELSEIF cFile LIKE ".+\.vmf"                         ; RETURN "application/vocaltec-media-file="+cFname + cFext
ELSEIF cFile LIKE ".+\.wri"                         ; RETURN "application/write=" + cFname + cFext
ELSEIF cFile LIKE ".+\.wid"                         ; RETURN "application/x-DemoShield =" + cFname + cFext
ELSEIF cFile LIKE ".+\.rrf"                         ; RETURN "application/x-InstallFromTheWeb="+cFname + cFext
ELSEIF cFile LIKE ".+\.wis"                         ; RETURN "application/x-InstallShield="+cFname + cFext
ELSEIF cFile LIKE ".+\.ins"                         ; RETURN "application/x-NET-Install=" + cFname + cFext
ELSEIF cFile LIKE ".+\.tmv"                         ; RETURN "application/x-Parable-Thing="+cFname + cFext
ELSEIF cFile LIKE ".+\.arj"                         ; RETURN "application/x-arj=" + cFname + cFext
ELSEIF cFile LIKE ".+\.asp"                         ; RETURN "application/x-asap=" +cFname + cFext
ELSEIF cFile LIKE ".+\.aab"                         ; RETURN "application/x-authorware-bin =" + cFname + cFext
ELSEIF cFile LIKE ".+\.(aam|aas)"                   ; RETURN "application/x-authorware-map =" + cFname + cFext
ELSEIF cFile LIKE ".+\.bcpio"                       ; RETURN "application/x-bcpio="+cFname + cFext
ELSEIF cFile LIKE ".+\.vcd"                         ; RETURN "application/x-cdlink =" + cFname + cFext
ELSEIF cFile LIKE ".+\.chat"                        ; RETURN "application/x-chat=" +cFname + cFext
ELSEIF cFile LIKE ".+\.cnc"                         ; RETURN "application/x-cnc=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(coda|page)"                 ; RETURN "application/x-coda=" +cFname + cFext
ELSEIF cFile LIKE ".+\.z"                           ; RETURN "application/x-compress=" +cFname + cFext
ELSEIF cFile LIKE ".+\.con"                         ; RETURN "application/x-connector="+cFname + cFext
ELSEIF cFile LIKE ".+\.cpio"                        ; RETURN "application/x-cpio=" +cFname + cFext
ELSEIF cFile LIKE ".+\.pqf"                         ; RETURN "application/x-cprplayer="+cFname + cFext
ELSEIF cFile LIKE ".+\.csh"                         ; RETURN "application/x-csh=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(cu|csm)"                    ; RETURN "application/x-cu-seeme=" +cFname + cFext
ELSEIF cFile LIKE ".+\.(dcr|dir|dxr|swa)"           ; RETURN "application/x-director=" +cFname + cFext
ELSEIF cFile LIKE ".+\.dvi"                         ; RETURN "application/x-dvi=" + cFname + cFext
ELSEIF cFile LIKE ".+\.evy"                         ; RETURN "application/x-envoy="+cFname + cFext
ELSEIF cFile LIKE ".+\.ebk"                         ; RETURN "application/x-expandedbook=" +cFname + cFext
ELSEIF cFile LIKE ".+\.gtar"                        ; RETURN "application/x-gtar=" +cFname + cFext
ELSEIF cFile LIKE ".+\.hdf"                         ; RETURN "application/x-hdf=" + cFname + cFext
ELSEIF cFile LIKE ".+\.map"                         ; RETURN "application/x-httpd-imap =" + cFname + cFext
ELSEIF cFile LIKE ".+\.phtml"                       ; RETURN "application/x-httpd-php="+cFname + cFext
ELSEIF cFile LIKE ".+\.php3"                        ; RETURN "application/x-httpd-php3 =" + cFname + cFext
ELSEIF cFile LIKE ".+\.ica"                         ; RETURN "application/x-ica=" + cFname + cFext
ELSEIF cFile LIKE ".+\.ipx"                         ; RETURN "application/x-ipix=" +cFname + cFext
ELSEIF cFile LIKE ".+\.ips"                         ; RETURN "application/x-ipscript=" +cFname + cFext
ELSEIF cFile LIKE ".+\.js"                          ; RETURN "application/x-javascript =" + cFname + cFext
ELSEIF cFile LIKE ".+\.latex"                       ; RETURN "application/x-latex="+cFname + cFext
ELSEIF cFile LIKE ".+\.bin"                         ; RETURN "application/x-macbinary="+cFname + cFext
ELSEIF cFile LIKE ".+\.mif"                         ; RETURN "application/x-mif=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(mpl|mpire)"                 ; RETURN "application/x-mpire="+cFname + cFext
ELSEIF cFile LIKE ".+\.adr"                         ; RETURN "application/x-msaddr =" + cFname + cFext
ELSEIF cFile LIKE ".+\.wlt"                         ; RETURN "application/x-mswallet=" +cFname + cFext
ELSEIF cFile LIKE ".+\.(nc|cdf)"                    ; RETURN "application/x-netcdf =" + cFname + cFext
ELSEIF cFile LIKE ".+\.npx"                         ; RETURN "application/x-netfpx =" + cFname + cFext
ELSEIF cFile LIKE ".+\.nsc"                         ; RETURN "application/x-nschat =" + cFname + cFext
ELSEIF cFile LIKE ".+\.pgp"                         ; RETURN "application/x-pgp-plugin =" + cFname + cFext
ELSEIF cFile LIKE ".+\.css"                         ; RETURN "application/x-pointplus="+cFname + cFext
ELSEIF cFile LIKE ".+\.sh"                          ; RETURN "application/x-sh =" + cFname + cFext
ELSEIF cFile LIKE ".+\.shar"                        ; RETURN "application/x-shar=" +cFname + cFext
ELSEIF cFile LIKE ".+\.swf"                         ; RETURN "application/x-shockwave-flash=" + cFname + cFext
ELSEIF cFile LIKE ".+\.spr"                         ; RETURN "application/x-sprite =" + cFname + cFext
ELSEIF cFile LIKE ".+\.sprite"                      ; RETURN "application/x-sprite =" + cFname + cFext
ELSEIF cFile LIKE ".+\.sit"                         ; RETURN "application/x-stuffit=" + cFname + cFext
ELSEIF cFile LIKE ".+\.sca"                         ; RETURN "application/x-supercard="+cFname + cFext
ELSEIF cFile LIKE ".+\.sv4cpio"                     ; RETURN "application/x-sv4cpio=" + cFname + cFext
ELSEIF cFile LIKE ".+\.sv4crc"                      ; RETURN "application/x-sv4crc =" + cFname + cFext
ELSEIF cFile LIKE ".+\.tar"                         ; RETURN "application/x-tar=" + cFname + cFext
ELSEIF cFile LIKE ".+\.tcl"                         ; RETURN "application/x-tcl=" + cFname + cFext
ELSEIF cFile LIKE ".+\.tex"                         ; RETURN "application/x-tex=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(texinfo|texi)"              ; RETURN "application/x-texinfo=" + cFname + cFext
ELSEIF cFile LIKE ".+\.tlk"                         ; RETURN "application/x-tlk=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(t|tr|roff)"                 ; RETURN "application/x-troff="+cFname + cFext
ELSEIF cFile LIKE ".+\.man"                         ; RETURN "application/x-troff-man="+cFname + cFext
ELSEIF cFile LIKE ".+\.me"                          ; RETURN "application/x-troff-me=" +cFname + cFext
ELSEIF cFile LIKE ".+\.ms"                          ; RETURN "application/x-troff-ms=" +cFname + cFext
ELSEIF cFile LIKE ".+\.alt"                         ; RETURN "application/x-up-alert=" +cFname + cFext
ELSEIF cFile LIKE ".+\.che"                         ; RETURN "application/x-up-cacheop =" + cFname + cFext
ELSEIF cFile LIKE ".+\.ustar"                       ; RETURN "application/x-ustar="+cFname + cFext
ELSEIF cFile LIKE ".+\.src"                         ; RETURN "application/x-wais-source=" + cFname + cFext
ELSEIF cFile LIKE ".+\.xls"                         ; RETURN "application/xls="+cFname + cFext
ELSEIF cFile LIKE ".+\.xlt"                         ; RETURN "application/xlt="+cFname + cFext
ELSEIF cFile LIKE ".+\.zip"                         ; RETURN "application/zip="+cFname + cFext
ELSEIF cFile LIKE ".+\.(au|snd)"                    ; RETURN "audio/basic="+cFname + cFext
ELSEIF cFile LIKE ".+\.es"                          ; RETURN "audio/echospeech =" + cFname + cFext
ELSEIF cFile LIKE ".+\.(gsm|gsd)"                   ; RETURN "audio/gsm=" + cFname + cFext
ELSEIF cFile LIKE ".+\.rmf"                         ; RETURN "audio/rmf=" + cFname + cFext
ELSEIF cFile LIKE ".+\.tsi"                         ; RETURN "audio/tsplayer=" +cFname + cFext
ELSEIF cFile LIKE ".+\.vox"                         ; RETURN "audio/voxware=" + cFname + cFext
ELSEIF cFile LIKE ".+\.wtx"                         ; RETURN "audio/wtx=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(aif|aiff|aifc)"             ; RETURN "audio/x-aiff =" + cFname + cFext
ELSEIF cFile LIKE ".+\.(cht|dus)"                   ; RETURN "audio/x-dspeech="+cFname + cFext
ELSEIF cFile LIKE ".+\.(mid|midi)"                  ; RETURN "audio/x-midi =" + cFname + cFext
ELSEIF cFile LIKE ".+\.mp3"                         ; RETURN "audio/x-mpeg =" + cFname + cFext
ELSEIF cFile LIKE ".+\.mp2"                         ; RETURN "audio/x-mpeg =" + cFname + cFext
ELSEIF cFile LIKE ".+\.m3u"                         ; RETURN "audio/x-mpegurl="+cFname + cFext
ELSEIF cFile LIKE ".+\.(ram|ra)"                    ; RETURN "audio/x-pn-realaudio =" + cFname + cFext
ELSEIF cFile LIKE ".+\.rpm"                         ; RETURN "audio/x-pn-realaudio-plugin="+cFname + cFext
ELSEIF cFile LIKE ".+\.stream"                      ; RETURN "audio/x-qt-stream=" + cFname + cFext
ELSEIF cFile LIKE ".+\.rmf"                         ; RETURN "audio/x-rmf="+cFname + cFext
ELSEIF cFile LIKE ".+\.(vqf|vql)"                   ; RETURN "audio/x-twinvq=" +cFname + cFext
ELSEIF cFile LIKE ".+\.vqe"                         ; RETURN "audio/x-twinvq-plugin=" + cFname + cFext
ELSEIF cFile LIKE ".+\.wav"                         ; RETURN "audio/x-wav="+cFname + cFext
ELSEIF cFile LIKE ".+\.wtx"                         ; RETURN "audio/x-wtx="+cFname + cFext
ELSEIF cFile LIKE ".+\.mol"                         ; RETURN "chemical/x-mdl-molfile=" +cFname + cFext
ELSEIF cFile LIKE ".+\.pdb"                         ; RETURN "chemical/x-pdb=" +cFname + cFext
ELSEIF cFile LIKE ".+\.dwf"                         ; RETURN "drawing/x-dwf=" + cFname + cFext
ELSEIF cFile LIKE ".+\.ivr"                         ; RETURN "i-world/i-vrml=" +cFname + cFext
ELSEIF cFile LIKE ".+\.cod"                         ; RETURN "image/cis-cod=" + cFname + cFext
ELSEIF cFile LIKE ".+\.cpi"                         ; RETURN "image/cpi=" + cFname + cFext
ELSEIF cFile LIKE ".+\.fif"                         ; RETURN "image/fif=" + cFname + cFext
ELSEIF cFile LIKE ".+\.gif"                         ; RETURN "image/gif=" + cFname + cFext
ELSEIF cFile LIKE ".+\.ief"                         ; RETURN "image/ief=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(jpeg|jpg|jpe)"              ; RETURN "image/jpeg=" +cFname + cFext
ELSEIF cFile LIKE ".+\.rip"                         ; RETURN "image/rip=" + cFname + cFext
ELSEIF cFile LIKE ".+\.svh"                         ; RETURN "image/svh=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(tiff|tif)"                  ; RETURN "image/tiff=" +cFname + cFext
ELSEIF cFile LIKE ".+\.mcf"                         ; RETURN "image/vasa=" +cFname + cFext
ELSEIF cFile LIKE ".+\.(svf|dwg|dxf)"               ; RETURN "image/vnd=" + cFname + cFext
ELSEIF cFile LIKE ".+\.wi"                          ; RETURN "image/wavelet=" + cFname + cFext
ELSEIF cFile LIKE ".+\.ras"                         ; RETURN "image/x-cmu-raster=" +cFname + cFext
ELSEIF cFile LIKE ".+\.etf"                         ; RETURN "image/x-etf="+cFname + cFext
ELSEIF cFile LIKE ".+\.fpx"                         ; RETURN "image/x-fpx="+cFname + cFext
ELSEIF cFile LIKE ".+\.(fh5|fh4|fhc)"               ; RETURN "image/x-freehand =" + cFname + cFext
ELSEIF cFile LIKE ".+\.dsf"                         ; RETURN "image/x-mgx-dsf="+cFname + cFext
ELSEIF cFile LIKE ".+\.pnm"                         ; RETURN "image/x-portable-anymap="+cFname + cFext
ELSEIF cFile LIKE ".+\.pbm"                         ; RETURN "image/x-portable-bitmap="+cFname + cFext
ELSEIF cFile LIKE ".+\.pgm"                         ; RETURN "image/x-portable-graymap =" + cFname + cFext
ELSEIF cFile LIKE ".+\.ppm"                         ; RETURN "image/x-portable-pixmap="+cFname + cFext
ELSEIF cFile LIKE ".+\.rgb"                         ; RETURN "image/x-rgb="+cFname + cFext
ELSEIF cFile LIKE ".+\.xbm"                         ; RETURN "image/x-xbitmap="+cFname + cFext
ELSEIF cFile LIKE ".+\.xpm"                         ; RETURN "image/x-xpixmap="+cFname + cFext
ELSEIF cFile LIKE ".+\.xwd"                         ; RETURN "image/x-xwindowdump="+cFname + cFext
ELSEIF cFile LIKE ".+\.dig"                         ; RETURN "multipart/mixed="+cFname + cFext
ELSEIF cFile LIKE ".+\.push"                        ; RETURN "multipart/x-mixed-replace=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(wan|waf)"                   ; RETURN "plugin/wanimate="+cFname + cFext
ELSEIF cFile LIKE ".+\.ccs"                         ; RETURN "text/ccs =" + cFname + cFext
ELSEIF cFile LIKE ".+\.(htm|html)"                  ; RETURN "text/html=" + cFname + cFext
ELSEIF cFile LIKE ".+\.pgr"                         ; RETURN "text/parsnegar-document="+cFname + cFext
ELSEIF cFile LIKE ".+\.txt"                         ; RETURN "text/plain=" +cFname + cFext
ELSEIF cFile LIKE ".+\.rtx"                         ; RETURN "text/richtext=" + cFname + cFext
ELSEIF cFile LIKE ".+\.tsv"                         ; RETURN "text/tab-separated-values=" + cFname + cFext
ELSEIF cFile LIKE ".+\.hdml"                        ; RETURN "text/x-hdml="+cFname + cFext
ELSEIF cFile LIKE ".+\.etx"                         ; RETURN "text/x-setext=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(talk|spc)"                  ; RETURN "text/x-speech=" + cFname + cFext
ELSEIF cFile LIKE ".+\.afl"                         ; RETURN "video/animaflex="+cFname + cFext
ELSEIF cFile LIKE ".+\.(mpeg|mpg|mpe)"              ; RETURN "video/mpeg=" +cFname + cFext
ELSEIF cFile LIKE ".+\.(qt|mov)"                    ; RETURN "video/quicktime="+cFname + cFext
ELSEIF cFile LIKE ".+\.(viv|vivo)"                  ; RETURN "video/vnd.vivo=" +cFname + cFext
ELSEIF cFile LIKE ".+\.(asf|asx)"                   ; RETURN "video/x-ms-asf=" +cFname + cFext
ELSEIF cFile LIKE ".+\.avi"                         ; RETURN "video/x-msvideo="+cFname + cFext
ELSEIF cFile LIKE ".+\.movie"                       ; RETURN "video/x-sgi-movie=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(vgm|vgx|xdr)"               ; RETURN "video/x-videogram=" + cFname + cFext
ELSEIF cFile LIKE ".+\.vgp"                         ; RETURN "video/x-videogram-plugin =" + cFname + cFext
ELSEIF cFile LIKE ".+\.vts"                         ; RETURN "workbook/formulaone="+cFname + cFext
ELSEIF cFile LIKE ".+\.vtts"                        ; RETURN "workbook/formulaone="+cFname + cFext
ELSEIF cFile LIKE ".+\.(3dmf|3dm|qd3d|qd3)"         ; RETURN "x-world/x-3dmf=" +cFname + cFext
ELSEIF cFile LIKE ".+\.svr"                         ; RETURN "x-world/x-svr=" + cFname + cFext
ELSEIF cFile LIKE ".+\.(wrl|wrz)"                   ; RETURN "x-world/x-vrml=" +cFname + cFext
ELSEIF cFile LIKE ".+\.vrt"                         ; RETURN "x-world/x-vrt=" + cFname + cFext
ENDIF
RETURN  "text/plain;filename=" + cFname + cFext
********************************************************************************
***************FIM DO ENVIO DE EMAIL********************************************
********************************************************************************



