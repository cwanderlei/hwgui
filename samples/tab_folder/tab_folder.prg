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

FUNCTION CadastroFunc_GUI
PRIVATE oJanela
PRIVATE oFont, oGrupo1, oGrupo2, oGrupo3, oGrupo4, oGrupo5, oGrupo6, oGrupo7

PARA TIPO_CAD_FUN,Abre_Dbf

PRIVATE LCOD       , LNOM       , LSTATUS    , LTEL1
PRIVATE LTEL2      , LRUA       , LBAI       , LCID
PRIVATE LUF        , LCPL       , LCEP       , LINI
PRIVATE LTEL3      , LCEL       , LCTO       , LREFER
PRIVATE LDATACAD   , LOBS1      , LOBS2      , LLOCAL
PRIVATE LCPF       , LRG        , LEMISSOR   , LBANCO1
PRIVATE LAGENCIA1  , LCC1       , LBANCO2    , LAGENCIA2
PRIVATE LCC2       , LPAI       , LMAE       , LDTNASC
PRIVATE LDATA      , LCARTEIRA  , LPIS       , LADMISSAO
PRIVATE LDEMISSAO  , LCODSET    , LSETOR     , LCODFUNCA
PRIVATE LFUNCAO    , LCODCTA    , LCONTA     , LSALARIO
PRIVATE LT1_HORA1  , LT1_HORA2  , LT2_HORA1  , LT2_HORA2
PRIVATE LT3_HORA1  , LT3_HORA2  , LT4_HORA1  , LT4_HORA2
PRIVATE LJORNADA   , LFERIAS    , LDATAFER   , LPROFER
PRIVATE LOBSERVA   , LOCORRENCIA, LLIMITE    , LBLOQUEIO
PRIVATE LCNH_N     , LCNH_VENC  , LCNH_CATEGO, LRESERVISTA
PRIVATE LDATA_DIS  , LTITULO_NUM, LTIT_SECAO , LTIT_ZONA
PRIVATE LTIT_LOCAL , LTIT_EMISAO, LCOR_RACA  , LESTCIVIL
PRIVATE LSEXO      , LGRAU      , LNACIONAL  , LUFLOCAL
PRIVATE LDTCPF     , LDTRG      , LRGUF      , LSERIE_CTPS
PRIVATE LDTCTPS    , LCTPSUF    , LCNH_EMISAO, LDIAS_EXP
PRIVATE LNUM_CID   , LNUM_CT
PRIVATE Lnome1     , Lparen1    , Ldt_nasc1
PRIVATE Lnome2     , Lparen2    , Ldt_nasc2
PRIVATE Lnome3     , Lparen3    , Ldt_nasc3
PRIVATE Lnome4     , Lparen4    , Ldt_nasc4
PRIVATE Lnome5     , Lparen5    , Ldt_nasc5

PRIVATE oCOD       , oNOM       , oSTATUS    , oTEL1
PRIVATE oTEL2      , oRUA       , oBAI       , oCID
PRIVATE oUF        , oCPL       , oCEP       , oINI
PRIVATE oTEL3      , oCEL       , oCTO       , oREFER
PRIVATE oDATACAD   , oOBS1      , oOBS2      , oLOCAL
PRIVATE oCPF       , oRG        , oEMISSOR   , oBANCO1
PRIVATE oAGENCIA1  , oCC1       , oBANCO2    , oAGENCIA2
PRIVATE oCC2       , oPAI       , oMAE       , oDTNASC
PRIVATE oDATA      , oCARTEIRA  , oPIS       , oADMISSAO
PRIVATE oDEMISSAO  , oCODSET    , oSETOR     , oCODFUNCA
PRIVATE oFUNCAO    , oCODCTA    , oCONTA     , oSALARIO
PRIVATE oT1_HORA1  , oT1_HORA2  , oT2_HORA1  , oT2_HORA2
PRIVATE oT3_HORA1  , oT3_HORA2  , oT4_HORA1  , oT4_HORA2
PRIVATE oJORNADA   , oFERIAS    , oDATAFER   , oPROFER
PRIVATE oOBSERVA   , oOCORRENCIA, oLIMITE    , oBLOQUEIO
PRIVATE oCNH_N     , oCNH_VENC  , oCNH_CATEGO, oRESERVISTA
PRIVATE oDATA_DIS  , oTITULO_NUM, oTIT_SECAO , oTIT_ZONA
PRIVATE oTIT_LOCAL , oTIT_EMISAO, oCOR_RACA  , oESTCIVIL
PRIVATE oSEXO      , oGRAU      , oNACIONAL  , oUFLOCAL
PRIVATE oDTCPF     , oDTRG      , oRGUF      , oSERIE_CTPS
PRIVATE oDTCTPS    , oCTPSUF    , oCNH_EMISAO, oDIAS_EXP
PRIVATE oNUM_CID   , oNUM_CT
PRIVATE onome1     , oparen1    , odt_nasc1
PRIVATE onome2     , oparen2    , odt_nasc2
PRIVATE onome3     , oparen3    , odt_nasc3
PRIVATE onome4     , oparen4    , odt_nasc4
PRIVATE onome5     , oparen5    , odt_nasc5

Private oBTNsalvarretonar
Private oBTNlimpar
Private oBTNsair

PRIVATE aItens1 := {"AC","AL","AP","AM","BA","CE","DF","GO","ES","MA","MT","MS","MG","PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SP","SC","SE","TO"}
PRIVATE aItens2 := {"CASADO(A)","VIUVO(A)","SOLTEIRO(A)","DIVORCIADO(A)","SEPARADO(A)","NAMORANDO"}
PRIVATE aItens3 := {"MASCULINO","FEMININO"}
PRIVATE aItens4 := {"A","B","C","D","E","A+B","A+C","A+D","A+E"}
PRIVATE aItens5 := {"ATIVO","INATIVO"}
PRIVATE aItens6 := {"DIARIO","SEMANAL","QUINZENAL","MENSAL"}
PRIVATE aItens7 := {"SEGUNDA","TERÇA","QUARTA","QUINTA","SEXTA","SABADO","DOMINGO"}
PRIVATE aItens8 := {"CONJUGUE","FILHO(A)"}
PRIVATE aItens9 := {"AFRO-BRASILEIRO(NEGRO)","ASIATICO","CAUCASIANO(BRANCO)","MESTIÇO"}
PRIVATE aItens10:= {"ENSINO FUNDAMENTAL COMPLETO","ENSINO FUNDAMENTAL INCOMPLETO","ENSINO MÉDIO COMPLETO","ENSINO MÉDIO INCOMPLETO","SUPERIOR INCOMPLETO","SUPERIOR COMPLETO"}

PRIVATE wCOD        := 0
PRIVATE wNOM        := Space(50)
PRIVATE wSTATUS     := Space(7)
PRIVATE wTEL1       := Space(14)
PRIVATE wTEL2       := Space(14)
PRIVATE wRUA        := Space(64)
PRIVATE wBAI        := Space(24)
PRIVATE wCID        := Space(24)
PRIVATE wUF         := Space(2)
PRIVATE wCPL        := Space(30)
PRIVATE wCEP        := Space(9)
PRIVATE wINI        := DATE()
PRIVATE wTEL3       := Space(14)
PRIVATE wCEL        := Space(14)
PRIVATE wCTO        := Space(20)
PRIVATE wREFER      := Space(42)
PRIVATE wDATACAD    := DATE()
PRIVATE wOBS1       := Space(64)
PRIVATE wOBS2       := Space(64)
PRIVATE wLOCAL      := Space(37)
PRIVATE wCPF        := Space(14)
PRIVATE wRG         := Space(11)
PRIVATE wEMISSOR    := Space(10)
PRIVATE wBANCO1     := Space(28)
PRIVATE wAGENCIA1   := Space(5)
PRIVATE wCC1        := Space(15)
PRIVATE wBANCO2     := Space(28)
PRIVATE wAGENCIA2   := Space(5)
PRIVATE wCC2        := Space(15)
PRIVATE wPAI        := Space(51)
PRIVATE wMAE        := Space(51)
PRIVATE wDTNASC     := DATE()
PRIVATE wDATA       := DATE()
PRIVATE wCARTEIRA   := Space(15)
PRIVATE wPIS        := Space(11)
PRIVATE wADMISSAO   := DATE()
PRIVATE wDEMISSAO   := DATE()
PRIVATE wCODSET     := 0
PRIVATE wSETOR      := Space(20)
PRIVATE wCODFUNCA   := 0
PRIVATE wFUNCAO     := Space(30)
PRIVATE wCODCTA     := 0
PRIVATE wCONTA      := Space(30)
PRIVATE wSALARIO    := 0
PRIVATE wT1_HORA1   := Space(5)
PRIVATE wT1_HORA2   := Space(5)
PRIVATE wT2_HORA1   := Space(5)
PRIVATE wT2_HORA2   := Space(5)
PRIVATE wT3_HORA1   := Space(5)
PRIVATE wT3_HORA2   := Space(5)
PRIVATE wT4_HORA1   := Space(5)
PRIVATE wT4_HORA2   := Space(5)
PRIVATE wJORNADA    := Space(5)
PRIVATE wFERIAS     := Space(1)
PRIVATE wDATAFER    := DATE()
PRIVATE wPROFER     := DATE()
PRIVATE wOBSERVA    := Space(50)
PRIVATE wOCORRENCIA := Space(50)
PRIVATE wLIMITE     := 0
PRIVATE wBLOQUEIO   := Space(1)
PRIVATE wCNH_N      := 0
PRIVATE wCNH_VENC   := DATE()
PRIVATE wCNH_CATEGO := Space(10)
PRIVATE wRESERVISTA := Space(20)
PRIVATE wDATA_DIS   := DATE()
PRIVATE wTITULO_NUM := Space(20)
PRIVATE wTIT_SECAO  := Space(20)
PRIVATE wTIT_ZONA   := Space(20)
PRIVATE wTIT_LOCAL  := Space(20)
PRIVATE wTIT_EMISAO := DATE()
PRIVATE wCOR_RACA   := Space(25)
PRIVATE wESTCIVIL   := Space(20)
PRIVATE wSEXO       := Space(20)
PRIVATE wGRAU       := Space(30)
PRIVATE wNACIONAL   := Space(20)
PRIVATE wUFLOCAL    := Space(2)
PRIVATE wDTCPF      := DATE()
PRIVATE wDTRG       := DATE()
PRIVATE wRGUF       := Space(2)
PRIVATE wSERIE_CTPS := Space(20)
PRIVATE wDTCTPS     := DATE()
PRIVATE wCTPSUF     := Space(2)
PRIVATE wCNH_EMISAO := DATE()
PRIVATE wDIAS_EXP   := Space(3)
PRIVATE wNUM_CID    := 0
PRIVATE wNUM_CT     := 0
PRIVATE wNome1      := space(30)
PRIVATE wParen1     := space(20)
PRIVATE wDatanasc1  := DATE()
PRIVATE wNome2      := space(30)
PRIVATE wParen2     := space(20)
PRIVATE wDatanasc2  := DATE()
PRIVATE wNome3      := space(30)
PRIVATE wParen3     := space(20)
PRIVATE wDatanasc3  := DATE()
PRIVATE wNome4      := space(30)
PRIVATE wParen4     := space(20)
PRIVATE wDatanasc4  := DATE()
PRIVATE wNome5      := space(30)
PRIVATE wParen5     := space(20)
PRIVATE wDatanasc5  := DATE()

PREPARE FONT oFontForm NAME "Arial"  WIDTH 0 HEIGHT -12 charset 255
INIT DIALOG oJanela CLIPPER NOEXIT TITLE "Cadastro de Funcionario" ;
FONT oFontForm;
STYLE DS_CENTER + WS_VISIBLE + WS_CAPTION + WS_SYSMENU;
AT 0,0 SIZE 800,600;
ON INIT {|| onom:setfocus()}

SetColorinFocus(.t.)

@ 3,3 TAB oTab ITEMS {} SIZE 798,598

BEGIN PAGE "Dados Cadastrais" of oTab

   ***INICIO DOS SAY'S
   @ 10 ,30  SAY Lcod              CAPTION "Codigo:"              SIZE 52,22
   @ 150,30  SAY Lnom              CAPTION "Nome:"                SIZE 43,22
   @ 570,30  SAY LCTO              CAPTION "Apelido:"             SIZE 55,22

   @ 10 ,55  SAY Lpai              CAPTION "Pai: "                SIZE 30,22
   @ 411,55  SAY Lmae              CAPTION "Mae: "                SIZE 36,22
   @ 10 ,80  SAY Lrua              CAPTION "Endereço:"            SIZE 69,22
   @ 350,80  SAY Lbai              CAPTION "Bairro:"              SIZE 48,22
   @ 563,80  SAY Lcid              CAPTION "Cidade:"              SIZE 54,22
   @ 10 ,110 SAY Lcep              CAPTION "CEP: "                SIZE 35,22
   @ 170,110 SAY Luf               CAPTION "UF:  "                SIZE 26,22
   @ 265,110 SAY Ltel1             CAPTION "Telefone:"            SIZE 62,22
   @ 444,110 SAY Ltel2             CAPTION "Telefone:"            SIZE 63,22
   @ 630,110 SAY Lcel              CAPTION "Cel.:"                SIZE 32,22
   @ 10 ,140 SAY Lcor_raca         CAPTION "Raça/Cor:"            SIZE 66,22
   @ 265,140 SAY Lestcivil         CAPTION "Estado Civil:"        SIZE 85,22
   @ 520,140 SAY Lsexo             CAPTION "Sexo:"                SIZE 41,22
   @ 10 ,170 SAY Lgrau             CAPTION "Grau de Instrução:"   SIZE 123,22
   @ 444,170 SAY Lnacional         CAPTION "Nacionalidade:"       SIZE 101,22
   @ 10 ,200 SAY Ldtnasc           CAPTION "Dt. Nasc.:"           SIZE 100,22
   @ 185,200 SAY Llocal            CAPTION "Cidade:"              SIZE 55,22
   @ 460,200 SAY Luflocal          CAPTION "UF:"		   	           	SIZE 26,22

   *****INICIO DOS GET'S
   @ 75,30   GET ocod               VAR wCod     SIZE 65,22 ;
   TOOLTIP "Informe o Codigo";
   STYLE WS_DISABLED

   @ 195,30  GET onom               VAR wNom  PICTURE "@!"   SIZE 365,22;
   STYLE WS_TABSTOP;
   MAXLENGTH 50;
   TOOLTIP "Informe o Nome do Funcionario"

   @ 620,30  GET oCTO               VAR wCTO PICTURE "@!"    SIZE 160,22;
   STYLE WS_TABSTOP;
   MAXLENGTH 20;
   TOOLTIP "Informe o Apelido"

   @ 75,55   GET opai               VAR wPai PICTURE "@!"    SIZE 320,22;
   STYLE WS_TABSTOP + ES_AUTOHSCROLL;
   MAXLENGTH 51;
   TOOLTIP "Nome do Pai"

   @ 449,55  GET omae               VAR wMae  PICTURE "@!"   SIZE 332,22;
   STYLE WS_TABSTOP + ES_AUTOHSCROLL;
   MAXLENGTH 51;
   TOOLTIP "Nome da Mae"

   @ 75,80   GET orua               VAR wRUA  PICTURE "@!"   SIZE 270,22;
   STYLE WS_TABSTOP + ES_AUTOHSCROLL;
   MAXLENGTH 64;
   TOOLTIP "Informeo Endereço"

	  @ 404,80  GET obai               VAR wBai  PICTURE "@!"   SIZE 150,22;
   STYLE WS_TABSTOP + ES_AUTOHSCROLL;
   MAXLENGTH 24;
   TOOLTIP "Informe o Bairro"

   @ 620,80  GET ocid               VAR wCid  PICTURE "@!"   SIZE 161,22;
   STYLE WS_TABSTOP + ES_AUTOHSCROLL;
   MAXLENGTH 24;
   TOOLTIP "Informe a Cidade"

   @ 75,110  GET ocep               VAR wCep  PICTURE "@R 99.999-999"  SIZE 85,22;
   STYLE WS_TABSTOP;
   TOOLTIP "Informe o Cep"

   @ 200,110 GET COMBOBOX ouf       VAR wUf      ITEMS aItens1  SIZE 50,150 TEXT;
   TOOLTIP "Informe a Unidade Federativa"

   @ 325,110 GET otel1   		         VAR wTel1  PICTURE "@R (99) 9999-9999"  SIZE 110,22;
   STYLE WS_TABSTOP;
   TOOLTIP "Informe o Telefone"

   @ 511,110 GET otel2              VAR wTel2  PICTURE "@R (99) 9999-9999"  SIZE 110,22;
   STYLE WS_TABSTOP;
   TOOLTIP "Informe o Telefone"

   @ 670,110 GET ocel               VAR wCel   PICTURE "@R (99) 9999-9999"  SIZE 110,22;
   STYLE WS_TABSTOP;
   TOOLTIP "Informe o N°Celular"

   @ 75,139  GET COMBOBOX ocor_raca VAR wCor_raca ITEMS aItens9   SIZE 175,150 TEXT;
   STYLE WS_TABSTOP;
   TOOLTIP "Informe a Raça/Cor"

   @ 350,140 GET COMBOBOX oEstcivil VAR wEstcivil  ITEMS aItens2   SIZE 165,150 TEXT;
   STYLE WS_TABSTOP;
   TOOLTIP "Informe o Estado Civil"

   @ 550,140 GET COMBOBOX osexo         VAR wSexo  ITEMS aItens3 SIZE 110,150 TEXT;
   STYLE WS_TABSTOP;
   TOOLTIP "Informe o Sexo da Pessoa"

   @ 680,140 GET DATEPICKER odatacad     VAR wdatacad  SIZE 100,22;
   STYLE WS_DISABLED;
   TOOLTIP "Data do Cadastro"

   @ 133,170 GET COMBOBOX ograu         VAR wGrau  ITEMS aItens10 SIZE 300,150 TEXT;
   STYLE WS_TABSTOP;
   TOOLTIP "Informe o Grau de Escolaridade"

   @ 551,170 GET onacional              VAR wNacional       SIZE 229,22;
   STYLE WS_TABSTOP;
   MAXLENGTH 20;
   TOOLTIP "Informe a nacionalidade"

   @ 75,200 GET DATEPICKER odtnasc     VAR wdtnasc  SIZE 100,22;
   STYLE WS_TABSTOP;
   TOOLTIP "Informe a data de Nascimento"

   @ 235,200 GET olocal                 VAR wlocal          SIZE 220,22;
   STYLE WS_TABSTOP + ES_AUTOHSCROLL;
   MAXLENGTH 37;
   TOOLTIP "Informe a naturalidade"

   @ 490,200 GET COMBOBOX ouflocal      VAR wuflocal ITEMS aItens1     SIZE 50,150 TEXT;
   TOOLTIP "Informe a Unidade Federativa da Naturalidade"


END PAGE of oTab

BEGIN PAGE "Dependentes" of oTab
    vLinha2=60
    @ 5,30    GROUPBOX oGrupo7      CAPTION "Dependentes" SIZE 780,200

	   @ 15 ,vLinha2  SAY Lnome1       CAPTION "Nome:"        SIZE 45,22
    @ 324,vLinha2  SAY Lparen1      CAPTION "Parentesco:"  SIZE 80,22
    @ 525,vLinha2  SAY LDt_nasc1    CAPTION "Nascimento:"  SIZE 85,22

   	@ 64,vLinha2   GET oNome1               VAR wNome1   PICTURE "@!"   SIZE 252,22;
    STYLE WS_TABSTOP + ES_AUTOHSCROLL;
    MAXLENGTH 30;
    TOOLTIP "Informe o Nome do Dependente"

    @ 408,vLinha2  GET COMBOBOX oParen1     VAR wParen1 ITEMS aItens8   SIZE 110,150 TEXT;
    TOOLTIP "Informe o Parentesco"

    @ 605,vLinha2  GET DATEPICKER oDt_nasc1     VAR wDatanasc1               SIZE 90,22;
    TOOLTIP "Informe a Data de Nascimento do Dependente";
    STYLE WS_TABSTOP
    vLinha2=vLinha2+30

   	@ 15,vLinha2   SAY Lnome2       CAPTION "Nome:"        SIZE 45,22
   	@ 324,vLinha2  SAY Lparen2      CAPTION "Parentesco:"  SIZE 80,22
   	@ 525,vLinha2  SAY LDt_nasc2    CAPTION "Nascimento:"  SIZE 85,22

   	@ 64,vLinha2   GET oNome2               VAR wNome2   PICTURE "@!"      SIZE 252,22;
    STYLE WS_TABSTOP + ES_AUTOHSCROLL;
    MAXLENGTH 30;
    TOOLTIP "Informe o Nome do Dependente"

    @ 408,vLinha2  GET COMBOBOX oParen2     VAR wParen2 ITEMS aItens8   SIZE 110,150 TEXT;
    STYLE WS_TABSTOP;
    TOOLTIP "Informe o Parentesco"

    @ 605,vLinha2  GET DATEPICKER oDt_nasc2     VAR wDatanasc2               SIZE 90,22;
    TOOLTIP "Informe a Data de Nascimento do Dependente";
    STYLE WS_TABSTOP
    vLinha2=vLinha2+30

   	@ 15,vLinha2   SAY Lnome3       CAPTION "Nome:"        SIZE 45,22
   	@ 324,vLinha2  SAY Lparen3      CAPTION "Parentesco:"  SIZE 80,22
   	@ 525,vLinha2  SAY LDt_nasc3    CAPTION "Nascimento:"  SIZE 85,22

   	@ 64,vLinha2   GET oNome3               VAR wNome3  PICTURE "@!"   SIZE 252,22;
    STYLE WS_TABSTOP + ES_AUTOHSCROLL;
    MAXLENGTH 30;
    TOOLTIP "Informe o Nome do Dependente"

    @ 408,vLinha2  GET COMBOBOX oParen3     VAR wParen3 ITEMS aItens8   SIZE 110,150 TEXT;
    STYLE WS_TABSTOP;
    TOOLTIP "Informe o Parentesco"

    @ 605,vLinha2  GET DATEPICKER oDt_nasc3     VAR wDatanasc3               SIZE 90,22;
    TOOLTIP "Informe a Data de Nascimento do Dependente";
    STYLE WS_TABSTOP
    vLinha2=vLinha2+30

   	@ 15,vLinha2  SAY Lnome4       CAPTION "Nome:"        SIZE 45,22
   	@ 324,vLinha2 SAY Lparen4      CAPTION "Parentesco:"  SIZE 80,22
   	@ 525,vLinha2 SAY LDt_nasc4    CAPTION "Nascimento:"  SIZE 85,22

   	@ 65,vLinha2  GET oNome4               VAR wNome4   PICTURE "@!"   SIZE 252,22;
    STYLE WS_TABSTOP + ES_AUTOHSCROLL;
    MAXLENGTH 30;
    TOOLTIP "Informe o Nome do Dependente"

    @ 408,vLinha2 GET COMBOBOX oParen4     VAR wParen4 ITEMS aItens8   SIZE 110,150 TEXT;
    STYLE WS_TABSTOP;
    TOOLTIP "Informe o Parentesco"

    @ 605,vLinha2 GET DATEPICKER oDt_nasc4     VAR wDatanasc4               SIZE 90,22;
    TOOLTIP "Informe a Data de Nascimento do Dependente";
    STYLE WS_TABSTOP
    vLinha2=vLinha2+30

   	@ 15,vLinha2  SAY Lnome5       CAPTION "Nome:"        SIZE 45,22
   	@ 324,vLinha2 SAY Lparen5      CAPTION "Parentesco:"  SIZE 80,22
   	@ 525,vLinha2 SAY LDt_nasc5    CAPTION "Nascimento:"  SIZE 85,22

   	@ 64,vLinha2  GET oNome5               VAR wNome5   PICTURE "@!"   SIZE 252,22;
    STYLE WS_TABSTOP + ES_AUTOHSCROLL;
    MAXLENGTH 30;
    TOOLTIP "Informe o Nome do Dependente"

   	@ 408,vLinha2 GET COMBOBOX oParen5     VAR wParen5 ITEMS aItens8   SIZE 110,150 TEXT;
    STYLE WS_TABSTOP;
    TOOLTIP "Informe o Parentesco"

   	@ 605,vLinha2 GET oDt_nasc5   VAR  wDatanasc5 PICTURE "@D"      SIZE 90,22;
    TOOLTIP "Informe a Data de Nascimento do Dependente";
    STYLE WS_TABSTOP

   	@ 15,vLinha2+70 BUTTON oBTNsair   CAPTION "Limpar" SIZE 130,28;
    ON CLICK {|| msginfo("limpa") };
    STYLE WS_TABSTOP;
    TOOLTIP "Sai sem Salvar os Dados dos Dependentes"

END PAGE of oTab

   *** BUTTONS
   @ 656,558 BUTTON btnOk CAPTION "Salvar " SIZE 60,26;
   ON CLICK {|| msginfo("salva") };
   TOOLTIP "Salva o Cadastro de Funcionario"

   @ 729,558 BUTTON oBTNsair   CAPTION "Sair  "  SIZE 60,26;
   ON CLICK {|| oJanela:close() };
   TOOLTIP "Sair do Cadastro sem Salvar"

   ACTIVATE DIALOG oJanela
RETURN
