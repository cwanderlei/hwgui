#include "inkey.ch"
#include "ORD.CH"
********************
Function Imp_Contato
********************
SET EXCL OFF
set dele on

Private oDlgHabla:=nil

cReg := AGENDA->CODIGO
cNome:= AGENDA->NOME

DBSETORDER(1)
DBSEEK(cReg)
IF FOUND()
   MsgRun("Aguarde Gerando Impressão...")

   cFILE := GERAFILE()
   SET DEVICE TO PRINT
   set print to (cFile)

   @ PROW()+1,01      SAY "CODIGO..: " + STRZERO(CODIGO,6)
   @ PROW(),PCOL()+3  SAY "NOME.:"     + NOME
   @ PROW()+1,01      SAY "ENDEREÇO: " + ENDERECO
   @ PROW(),PCOL()+2  SAY "BAIRRO.:"   + BAIRRO
   @ PROW(),PCOL()+2  SAY "CEP.:"      + CEP
   @ PROW()+1,01      SAY "CIDADE..: " + CIDADE
   @ PROW(),PCOL()+2  SAY "UF.:"       + ESTADO
   @ PROW()+1,01      SAY "TELEFONE: " + FONE1
   @ PROW(),PCOL()+2  SAY "CELULAR:"   + FONE2
   @ PROW()+1,01      SAY "EMAIL...: " + EMAIL

   SET PRINTER TO
   set device to screen
   NETCANCEL("LPT1")

   Fim_Run()
   CHAMAIMP("S",cFILE+".PRN")
ELSE
   MsgInfo("Não foi possivel localizar o Registro","Aviso do Sistema")
ENDIF
RETURN
