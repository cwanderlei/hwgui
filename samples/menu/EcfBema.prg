/*
 * $Id: TestMenuBitmap.prg,v 1.1 2008/09/19 19:55:51 sandrorrfreire Exp $
 *
 * HWGUI - Harbour Win32 GUI library source code:
 * C level menu functions
 *
 * Copyright 2001 Alexander S.Kresin <alex@belacy.belgorod.su>
 * www - http://www.geocities.com/alkresin/
 * Copyright 2004 Sandro R. R. Freire <sandrorrfreire@yahoo.com.br>
 * Demo for use Bitmap in menu
*/
#include "windows.ch"
#include "guilib.ch"
#define DC_CALL_STD 0x0020

GLOBAL handle

INIT PROCEDURE InitDlls
  handle := LoadLibrary( "BemaFI32.dll" )
RETURN

EXIT PROCEDURE FreeDlls
  FreeLibrary( handle )
RETURN

Function Main()
Local oMain
Private oMenu

        INIT WINDOW oMain MAIN TITLE "Teste de Menu" ;
             AT 0,0 ;//BACKGROUND BITMAP OBMP;
             SIZE 500, 500 //GetDesktopWidth(), GetDesktopHeight() - 28

               MENU OF oMain
                  MENU TITLE "Exemplo"
                     MENUITEM "&Sair"            ID 1001 ACTION oMain:Close()   BITMAP "\hwgui\image\exit_m.bmp" 
                     SEPARATOR                      
                     //MENUITEM "&Novo "           ID 1002 ACTION msginfo("Novo Modulo")  BITMAP "\hwgui\image\new_m.bmp"  
                     //MENUITEM "&Abrir"           ID 1003 ACTION msginfo("Abrir modulo") BITMAP "\hwgui\image\open_m.bmp" 
                     //separator
                     MENUITEM "&Funções do ECF"  ID 1004 ACTION IMPRIME()               BITMAP "\hwgui\image\BUILD.BMP"
                  ENDMENU   
                ENDMENU                
                //The number ID is very important to use bitmap in menu
                //MENUITEMBITMAP oMain ID 1005 BITMAP "\hwgui\image\logo.bmp"                 
                //Hwg_InsertBitmapMenu(oMain:Menu, 1005, "\hwgui\sourceoBmp:handle)   //do not use bitmap empty
        ACTIVATE WINDOW oMain
Return Nil

FUNCTION IMPRIME()
****************************

  //iRetorno := DLLCall(handle,;
  //                     32,;
  //                     "Bematech_FI_ProgramaAliquota",;
  //                     "1700",;                        //Aliquota para cadastrar
  //                     0)                              //0=ICMS 1=ISSQN

  iRetorno := DLLCall(handle,;
                      32,;
                      "Bematech_FI_AbreCupomMFD",;
                      "1.111.111-1",;                  //CPF ou CNPJ do Cliente com até 29
                      "Fulano de Tal", ;               //Nome
                      "R. Sem Fim, 1000")              //Endereço
  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_AbreCupomMFD")
     return
  endif

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_VendeItem",;
                      "7896641803871",;                 //Codigo tamanho maximo de 13
                      "CANETA AZUL BICK 1.6",;          //Descricao tamanho maximo de 29
                      "FF",;                            //Aliquta tamanho de 4 ou 5 para valor ou 2 para percentual
                      "I",;                             //Tipo Quanidade I=Inteiro F=Fracionado
                      "10",;                            //Quantidade tamanho de 4 para inteiro ou 7 com 3 casas decimais
                      2,;                               //Casas Decimais para o valor unitario de 2 ou 3 casas decimais 
                      "1,25",;                          //Valor unitario
                      "%",;                             //Tipo Desconto $=valor %=Percentual
                      "0" )                             //valor do desconto

  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_VendeItem")
     return
  endif

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_VendeItem",;
                      "7891721100024",;                       //Codigo tamanho maximo de 13
                      "CADERNO CAPA COURO ONCA 15MT",;   //Descricao tamanho maximo de 29
                      "FF",;                             //Aliquta tamanho de 4 ou 5 para valor ou 2 para percentual
                      "I",;                              //Tipo Quanidade I=Inteiro F=Fracionado
                      "5",;                              //Quantidade tamanho de 4 para inteiro ou 7 com 3 casas decimais
                      2,;                                //Casas Decimais para o valor unitario de 2 ou 3 casas decimais 
                      "10,00",;                          //Valor unitario
                      "%",;                              //Tipo Desconto $=valor %=Percentual
                      "0" )                              //valor do desconto

  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_VendeItem")
     return
  endif

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_VendeItem",;
                      "7897322700847",;                     //Codigo tamanho maximo de 13
                      "LANCHEIRA INF. BEN 10 VERDE",;     //Descricao tamanho maximo de 29
                      "FF",;                              //Aliquta tamanho de 4 ou 5 para valor ou 2 para percentual
                      "I",;                               //Tipo Quanidade I=Inteiro F=Fracionado
                      "2",;                               //Quantidade tamanho de 4 para inteiro ou 7 com 3 casas decimais
                      2,;                                 //Casas Decimais para o valor unitario de 2 ou 3 casas decimais 
                      "13,25",;                           //Valor unitario
                      "%",;                               //Tipo Desconto $=valor %=Percentual
                      "0" )                               //valor do desconto


  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_VendeItem")
     return
  endif

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_VendeItem",;
                      "7897322700847",;                     //Codigo tamanho maximo de 13
                      "LAPIS FABER CASTEL 24CORES",;      //Descricao tamanho maximo de 29
                      "FF",;                              //Aliquta tamanho de 4 ou 5 para valor ou 2 para percentual
                      "I",;                               //Tipo Quanidade I=Inteiro F=Fracionado
                      "10",;                              //Quantidade tamanho de 4 para inteiro ou 7 com 3 casas decimais
                      2,;                                 //Casas Decimais para o valor unitario de 2 ou 3 casas decimais 
                      "22,00",;                           //Valor unitario
                      "%",;                               //Tipo Desconto $=valor %=Percentual
                      "0" )                               //valor do desconto


  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_VendeItem")
     return
  endif

  _SubTotal := Space(14) 
  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_SubTotal",;
                      _SubTotal)                          //Variavel para receber o valor do total

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_IniciaFechamentoCupom",;
                      "D",;                               //A=Acréscimo D=Desconto
                      "%",;                               //$=Valor %=Percentual
                      "0")                                //Valor do Desconto ou Acréscimo

  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_IniciaFechamentoCupom")
     return
  endif

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_EfetuaFormaPagamentoMFD",;
                      "Cartao",;                          //Forma de Pagamento no maximo 16 
                      _SubTotal,;                         //Valor Forma de Pagamento tamanho 14
                      "1",;                               //Numero de Parcelas de 1 até 24
                      "Cartao Visa")                      //Descrição da forma de pagamento tamanho maximo de 80

  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_EfetuaFormaPagamentoMFD")
     return
  endif

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_TerminaFechamentoCupom",;
                      "TK: 000001 - LOJA: 123 - FONE: 1234-5678        "+;
                      "BALCON.: 000001 - APARECIDO DA SILVA            "+;
                      "000001 - DATAREY INFORMATICA LTDA               "+;
                      "CNPJ: 12.456.890/2345-78 - IE: 12345678901      "+;
                      "000000000000001 - ABEL DE SOUSA BATISTA         "+;
                      "END.: RUA DO SABER, 5124 CENTRO CONDOMINIO HAL  "+;
                      "      SALA 110 / 111                            "+;
                      "CID.: APARECIDA DE GOIANIA              EST.: GO")


  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_TerminaFechamentoCupom")
     return
  endif

  iRetorno = DLLCall(handle,;
                     32,;
                     "Bematech_FI_CupomAdicionalMFD")
  if iRetorno <> 1
     TrataRetorno(iRetorno,"Bematech_FI_CupomAdicionalMFD")
  endif

  NumeroCupom := Space(6) 
  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_NumeroCupom",;
                      NumeroCupom)                            //Variavel para receber o numero do ultimo cupom

  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_NumeroCupom")
     return
  endif

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_AbreComprovanteNaoFiscalVinculadoMFD",;
                      "Cartao",;                              //Forma de Pagamento no maximo 16 caracter
                      _SubTotal,;                             //Valor com 14,2
                      NumeroCupom,;                           //Numero do cupom fiscal tamanho de 6
                      "1.111.111-1",;                         //CPF ou CNPJ do Cliente com até 29
                      "Fulano de Tal",;                       //Nome do Cliente com até 30
                      "R. Sem Fim, 1000")                     //Endereço com até 80 caracter


  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_AbreComprovanteNaoFiscalVinculadoMFD")
     return
  endif

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_UsaComprovanteNaoFiscalVinculado",;
                      "cupom vinculado da transacao TEF        "+;
                      "                                        "+;
                      "           _______________________      "+;
                      "           Wanderlei C Oliveira         "+;
                      "                                        "+;
                      " Data.: 01/01/2011   hora.: 01:01:00    "+;
                      "----------------------------------------")

  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_UsaComprovanteNaoFiscalVinculado")
     return
  endif

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_FechaComprovanteNaoFiscalVinculado")
  
  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_FechaComprovanteNaoFiscalVinculado")
     return
  endif

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_EstornoNaoFiscalVinculadoMFD",;
                      "11.111.111-11",;                        //CPF ou CNPJ do Cliente
                      "Fulano de Tal", ;                       //Nome do Cliente
                      "R. Sem Fim, 1000")                      //Endereço do Cliente

  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_EstornoNaoFiscalVinculadoMFD")
     return
  endif

  iRetorno := DLLCall(handle,;
                      32 ,;
                      "Bematech_FI_CancelaCupomMFD",;
                      "11.111.111-11",;                        //CPF ou CNPJ do Cliente
                      "Fulano de Tal",;                        //Nome do Cliente
                      "R. Sem Fim, 1000")                      //Endereço do Cliente

  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_CancelaCupomMFD")
     return
  endif
  

  iRetorno = DLLCall(handle,;
                     32,;
                     "Bematech_FI_LeituraX")

  if iRetorno <> 1
     TrataRetorno(iretorno,"Bematech_FI_LeituraX")
     return
  endif
RETURN
Function TrataRetorno(_retorno,nFuncao)
if _retorno == 0
   msginfo("Erro de Comunicação - "+nFuncao)
elseif _retorno == -2
   msginfo(" Parâmetro Inválido - "+nFuncao)
elseif _retorno == -4
   msginfo("Arquivo ini não encontrado ou parâmetro inválido para o nome da porta - "+nFuncao)
elseif _retorno == -5
   msginfo(" Erro ao abrir a porta de comunicação - "+nFuncao)
else
   msginfo("Erro de Desconhecido - "+str(_retorno)+" - "+nFuncao)
endif
return
