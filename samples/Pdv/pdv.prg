
#Include "hwgui.ch"

FUNCTION pdv()

  LOCAL oDlg,  oStatus1, oContainer1, oContainer2, oContainer3, oContainer4, oContainer5 ;
        , oGroup1, oButtonex1, oButtonex2, oButtonex3, oButtonex4, oGroup2, oButtonex5, oButtonex6 ;
        , oLabel13, oBrowse1, oLabel6, oLabel20, oLabel66, oLabel5, oLabel10, oLabel3 ;
        , oLabel11, oLabel12, oLabel4, oPanel6, oLabel8, oLabel9, oLabel14 ;
        , oLabel15, oLabel16, oLabel17, oLabel18, oLabel7, oLabel19


  INIT DIALOG oDlg TITLE "Venda" ;
        COLOR 8404992  ;
    AT 0, 0 SIZE 812,522 ;
        FONT HFont():Add( 'Tahoma',0,-13,400,,,) NOEXIT  ;
     STYLE WS_POPUP+WS_CAPTION+WS_SYSMENU+WS_MAXIMIZEBOX+WS_SIZEBOX+DS_SYSMODAL +DS_CENTER  //	;
     //ON INIT {|This| This:windowstate := 3 }

   ADD STATUS oStatus1 TO oDlg
   @ 8,184 CONTAINER oContainer1 SIZE 150,50 ;
        STYLE 0 ;
         BACKSTYLE 2
        oContainer1:Anchor := 161
   @ 209,184 CONTAINER oContainer2 SIZE 150,50 ;
        STYLE 0 ;
         BACKSTYLE 2
        oContainer2:Anchor := 161
   @ 423,184 CONTAINER oContainer3 SIZE 150,50 ;
        STYLE 0 ;
         BACKSTYLE 2
        oContainer3:Anchor := 161
   @ 8,85 CONTAINER oContainer4 SIZE 782,62 ;
        STYLE 0 ;
         BACKSTYLE 2
        oContainer4:Anchor := 11
   @ 276,421 CONTAINER oContainer5 SIZE 300,73 ;
        STYLE 0 ;
         BACKSTYLE 2
        oContainer5:Anchor := 164
   @ 597,180 BUTTONEX oButtonex1 CAPTION "Cancela Cupom"   SIZE 183,38 ;
        STYLE BS_CENTER +WS_TABSTOP  NOTHEMES  ;
        ON CLICK {|| msginfo('cliquei') } ;
        ON GETFOCUS {|value,This| This:SetColor( 255, 12345678, .t.) } ;
        ON INIT {|This| This:blostfocus:={|t,this| this:bcolor := NIL, this:Setcolor( 0, NIL, .t. ) } }
        oButtonex1:Anchor := 225
//        oButtonex1:lNoThemes := .T.
   @ 597,229 BUTTONEX oButtonex2 CAPTION "Leitura X"   SIZE 183,38 ;
        STYLE BS_CENTER +WS_TABSTOP
        oButtonex2:Anchor := 240
   @ 597,276 BUTTONEX oButtonex3 CAPTION "Redu��o Z"   SIZE 183,38 ;
        STYLE BS_CENTER +WS_TABSTOP
        oButtonex3:Anchor := 240
   @ 597,322 BUTTONEX oButtonex4 CAPTION "Leitura Memoria Fiscal"   SIZE 184,38 ;
        STYLE BS_CENTER +WS_TABSTOP
        oButtonex4:Anchor := 240

   @ 587,153 GROUPBOX oGroup1 CAPTION "Cupom Fiscal"  SIZE 203,219 ;
        STYLE BS_LEFT ;
         COLOR 8421376   ;
        FONT HFont():Add( 'Arial Narrow',0,-15,400,,,)
        oGroup1:Anchor := 225
   @ 595,395 BUTTONEX oButtonex5 CAPTION "Procura Produto"   SIZE 188,38 ;
        STYLE BS_CENTER +WS_TABSTOP
        oButtonex5:Anchor := 240
   @ 595,443 BUTTONEX oButtonex6 CAPTION "Finaliza Pedido"   SIZE 188,38 ;
        STYLE BS_CENTER +WS_TABSTOP  ;
        ON CLICK {|| oButtonex6_onClick(  ) }
        oButtonex6:Anchor := 240

   @ 587,373 GROUPBOX oGroup2 CAPTION ""  SIZE 203,122 ;
        STYLE BS_LEFT
        oGroup2:Anchor := 240
   @ 283,425 SAY oLabel13 CAPTION "11.346,32"  TRANSPARENT SIZE 281,61 ;
        STYLE SS_RIGHT ;
         COLOR 255   ;
        FONT HFont():Add( 'Arial',0,-56,400,,,)
        oLabel13:Anchor := 164
   @ 8,245 BROWSE oBrowse1 ARRAY SIZE 565,169 ;
        STYLE WS_TABSTOP

    // CREATE oBrowse1   //  SCRIPT GENARATE BY DESIGNER
    oBrowse1:aArray := {}
    oBrowse1:AddColumn( HColumn():New(, ColumnArBlock() ,'U',, 0 ,.F.,0,,,,,,,,,,))
    oBrowse1:AddColumn( HColumn():New(, ColumnArBlock() ,'U',, 0 ,.F.,0,,,,,,,,,,))
    oBrowse1:AddColumn( HColumn():New(, ColumnArBlock() ,'U',, 0 ,.F.,0,,,,,,,,,,))
    oBrowse1:AddColumn( HColumn():New(, ColumnArBlock() ,'U',, 0 ,.F.,0,,,,,,,,,,))
    oBrowse1:AddColumn( HColumn():New(, ColumnArBlock() ,'U',, 0 ,.F.,0,,,,,,,,,,))

    // END BROWSE SCRIPT  -  oBrowse1
        oBrowse1:Anchor := 135
   @ 12,88 SAY oLabel6 CAPTION "BISCOITO RECHEADO BAUNILHA"  TRANSPARENT SIZE 771,53 ;
        STYLE SS_CENTER ;
         COLOR 65280   ;
        FONT HFont():Add( 'Arial',0,-48,400,,,)
        oLabel6:Anchor := 161
   @ 11,189 SAY oLabel20 CAPTION "2,00"  SIZE 142,40 ;
        STYLE SS_CENTER ;
         BACKCOLOR 65280  ;
        FONT HFont():Add( '',0,-32,400,,,)
        oLabel20:Anchor := 161
   @ 215,190 SAY oLabel66 CAPTION "12,50"  SIZE 140,40 ;
        STYLE SS_CENTER   ;
        FONT HFont():Add( '',0,-32,400,,,)
        oLabel66:Anchor := 161
   @ 426,189 SAY oLabel6 CAPTION "25,00"  SIZE 142,40 ;
        STYLE SS_CENTER   ;
        FONT HFont():Add( '',0,-32,400,,,)
        oLabel6:Anchor := 161
   @ 11,57 SAY oLabel5 CAPTION "Descri��o do Produto"  SIZE 777,27 ;
        STYLE SS_CENTER   ;
        FONT HFont():Add( 'Arial',0,-19,400,,,)
        oLabel5:Anchor := 11
   @ 11,155 SAY oLabel10 CAPTION "Quantidade"  TRANSPARENT SIZE 147,27 ;
        STYLE SS_CENTER ;
         COLOR 16777215   ;
        FONT HFont():Add( 'Arial',0,-19,400,,,)
        oLabel10:Anchor := 161
   @ 209,155 SAY oLabel3 CAPTION "Valor Unit�rio"  TRANSPARENT SIZE 150,27 ;
        STYLE SS_CENTER ;
         COLOR 16777215   ;
        FONT HFont():Add( 'Arial',0,-19,400,,,)
        oLabel3:Anchor := 161
   @ 423,154 SAY oLabel11 CAPTION "Total do Item"  TRANSPARENT SIZE 150,27 ;
        STYLE SS_CENTER ;
         COLOR 16777215   ;
        FONT HFont():Add( 'Arial',0,-19,400,,,)
        oLabel11:Anchor := 161
   @ 10,429 SAY oLabel12 CAPTION "Total Geral"  TRANSPARENT SIZE 257,62 ;
         COLOR 16777215   ;
        FONT HFont():Add( 'Arial',0,-47,400,,,)
        oLabel12:Anchor := 6
   @ 174,192 SAY oLabel2 CAPTION "X"  TRANSPARENT SIZE 25,36 ;
         COLOR 16776960   ;
        FONT HFont():Add( 'Arial',0,-29,400,,,)
        oLabel2:Anchor := 161
   @ 373,190 SAY oLabel4 CAPTION " ="  TRANSPARENT SIZE 32,36 ;
        STYLE SS_CENTER ;
         COLOR 16776960   ;
        FONT HFont():Add( 'Arial',0,-29,400,,,)
        oLabel4:Anchor := 161
   @ 8,1 PANEL oPanel6 SIZE 782,51 ;
         BACKCOLOR 8421504  ;
        ON SIZE {|| .t. }
        oPanel6:Anchor := 11
   @ 10,24 SAY oLabel6 CAPTION "07/09/2010" OF oPanel6  SIZE 75,19 ;
         COLOR 16777215  BACKCOLOR 8421504
   @ 278,4 SAY oLabel8 CAPTION "Prazo" OF oPanel6  SIZE 47,19 ;
         COLOR 16777215  BACKCOLOR 8421504
        oLabel8:Anchor := 161
   @ 278,24 SAY oLabel9 CAPTION "A VISTA" OF oPanel6  SIZE 80,19 ;
         COLOR 16777215  BACKCOLOR 8421504
        oLabel9:Anchor := 161
   @ 482,4 SAY oLabel14 CAPTION "Cliente" OF oPanel6  SIZE 61,19 ;
         COLOR 16777215  BACKCOLOR 8421504
        oLabel14:Anchor := 161
   @ 481,24 SAY oLabel15 CAPTION "CONSUMIDOR FINAL" OF oPanel6  SIZE 139,19 ;
         COLOR 16777215  BACKCOLOR 8421504
        oLabel15:Anchor := 161
   @ 722,4 SAY oLabel16 CAPTION "Venda" OF oPanel6  SIZE 52,19 ;
         COLOR 16777215  BACKCOLOR 8421504
        oLabel16:Anchor := 9
   @ 143,4 SAY oLabel17 CAPTION "Hora" OF oPanel6  SIZE 43,19 ;
         COLOR 16777215  BACKCOLOR 8421504
        oLabel17:Anchor := 161
   @ 142,24 SAY oLabel18 CAPTION "15:45:12" OF oPanel6  SIZE 67,19 ;
         COLOR 16777215  BACKCOLOR 8421504
        oLabel18:Anchor := 161
   @ 10,4 SAY oLabel7 CAPTION "Data" OF oPanel6  SIZE 43,19 ;
         COLOR 16777215  BACKCOLOR 8421504
   @ 722,25 SAY oLabel19 CAPTION "18238" OF oPanel6  SIZE 57,19 ;
         COLOR 16777215  BACKCOLOR 8421504
        oLabel19:Anchor := 9

   ACTIVATE DIALOG oDlg


RETURN oDlg:lresult

STATIC FUNCTION oButtonex6_onClick
IF MsgYESNO("Deseja sair do Pedido","Finaliza")
   ENDDIALOG()
ENDIF
 RETURN .T.


