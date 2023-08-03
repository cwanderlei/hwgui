/* Modulo  : Funções MySQL
 * Arquivo : mysql_func.prg
 * Autor   : RESS
 */
#include "HwGui.ch"

/*------------------------------------------------------------------------------
 * Insere/Modifica dados na tabela
 * Parametros:
 *    oSocket - Conexão
 *    cTabela - Tabela que tera dados incluidos ou modificados
 *    vDados - Vetor contendo os campos e dados a serem incluidos ou mosificados
 *             ex.: {{"campo_1", valor_do_campo_1}, ;
 *                   {"campo_2", valor_do_campo_2}, ;
 *                   {"campo_n", valor_do_campo_n}}
 *    lInsere - se for .T., Inclui dados. Se for .F., Modifica os dados.
 */
function MySQL_Insert( oSocket, cTabela, vDados, lInsere, cCondicao, nHandle )
   local lError := FALSE, cCampos := "(", cValores := "(", nA, vDados1 := {}, ;
         cTemp := "", cQuery := "", cSet := "", oQuery := nil, cWhere := "", ;
         vCampos := {}, vValores := {}, vDados2 := {}
   DEFAULT lInsere TO TRUE
   
   if( oSocket == NIL .or. valtype( cTabela ) != "C" .or. valtype( vDados ) != "A" )
      return( FALSE )
   endif
   
   if( lInsere )
      cQuery := "INSERT INTO " + cTabela + ""
   else         
      cQuery := "UPDATE " + cTabela + " SET "
   endif
   
   for nA := 1 to len( vDados )
      cTemp := vDados[ nA, 2 ]
      
      if( valtype( cTemp ) == "N" )
         cTemp := ltrim( str( cTemp ) )
      elseif( valtype( cTemp ) == "L" )
         cTemp := iif( cTemp, "TRUE", "FALSE" )
      elseif( valtype( cTemp ) == "D" )
         cTemp := dtoc( cTemp )
         cTemp := iif( cTemp = "    -  -  ", "", cTemp )
      elseif( valtype( cTemp ) == "U" )
      endif
      
      //cTemp := strtran( cTemp, "'", "´" )
      cTemp := strtran( cTemp, '"', '´' )
      //cTemp := strtran( cTemp, '\', '\\' )
      //cTemp := alltrim( cTemp )
      
      if( len( cTemp ) > 0 )
         //aadd( vDados1, { vDados[ nA, 1 ], "'" + cTemp + "'" } )
         aadd( vDados1, { vDados[ nA, 1 ], '"' + cTemp + '"' } )
         aadd( vDados2, vDados[ nA, 1 ] + "|" + cTemp )
      endif

      if( nA == 1 )
         //cWhere := vDados[ nA, 1 ] + "=" + "'" + cTemp + "'"
      endif
      
   next nA
   
   if( lInsere )
      
      for nA := 1 to len( vDados1 )
         cCampos += vDados1[ nA, 1 ] + iif( nA != len( vDados1 ), ",", "" )
         cValores += vDados1[ nA, 2 ] + iif( nA != len( vDados1 ), ",", "" )
      next nA
      
      cCampos += ")"  ;  cValores += ")"
      cQuery += cCampos + " VALUES " + cValores
   else
      
      for nA := 1 to len( vDados1 )
         cSet += vDados1[ nA, 1 ] + "=" + vDados1[ nA, 2 ] + iif( nA != len( vDados1 ), ",", "" )
      next nA
      
      if( valtype( cCondicao ) == "C" )
         cWhere += " " + cCondicao
      endif

      cQuery += cSet + " WHERE " + cWhere
   endif
   
   if( nHandle != NIL )
      //GravaArquivo( nHandle, cQuery + ';' + hb_OSNewLine() )
   else
      // Remove acentos
      cQuery := Ansi2OEM( cQuery )
      oQuery := oSocket:Query( cQuery )
   
      if( oQuery:Neterr() )
         msgExclamation( str( len( cQuery ) ) + ":[" + cQuery + "]" + HB_OSNewLine() + ;
                         "" + oQuery:ErrorMsg(), "Erro MySQL-Query" )
      endif
   
      return( !oQuery:NetErr() )
   endif
   
return( TRUE )
/* FIM------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Modifica dados na tabela
 * Parametros:
 *    oSocket - Numero da conexão
 *    cTabela - Tabela que tera dados modificados
 *    vDados - Vetor contendo os campos e dados a serem mosificados
 *             ex.: {{"campo_1", valor_do_campo_1}, ;
 *                   {"campo_2", valor_do_campo_2}, ;
 *                   {"campo_n", valor_do_campo_n}}
 */
function MySQL_Update( oSocket, cTabela, vDados, cCondicao )
return( MySQL_Insert( oSocket, cTabela, vDados, .F., cCondicao ) )
/* FIM------------------------------------------------------------------------*/

//----------------------------------------------------------------------------//
// Exclui dados na tabela
function MySQL_Deleta_Dados( oSocket, cTabela, cCampo, var, cCondicao )
   local lError := .F., cQuery := "", oQuery := nil
   
   if( oSocket == nil .or. valtype( cTabela ) != "C" .or. ;
       valtype( cCampo ) != "C" .or. valtype( var ) != "C" )
      return( .T. )
   endif
   
   cQuery := "DELETE FROM " + cTabela + " WHERE " + cCampo + '="' + var + '"'
   cQuery += iif( valtype( cCondicao ) == "C", cCondicao, "" )
   oQuery := oSocket:Query( cQuery )
return( lError := oQuery:NetErr() )
//FIM-------------------------------------------------------------------------//

/*------------------------------------------------------------------------------
 * Faz uma busca na tabela e retorna TRUE se encontrado
 * oSocket     - Conexão
 * cTabela     - Tabela
 * [cCampo]    - Campo da tabela
 * [xVar]      - Variavel para ser comparada com o campo
 * [cCondicao] - A condição pode substituir os parametros: cCampo, xVar
 */ 
function MySQL_Seek( oSocket, cTabela, cCampo, xVar, cCondicao )
   local lRet := FALSE, oQuery, cWhere := "='"
   DEFAULT xVar := "", cCondicao := ""
   xVar := iif( valtype( xVar ) == "N", alltrim( str( xVar ) ), xVar )
   cWhere := iif( at( "%", xVar ) > 0, " LIKE '", cWhere )
   
   if( empty( xVar ) .and. !empty( cCondicao ) )
      oQuery := oSocket:Query( "SELECT EXISTS( SELECT 1 FROM " + cTabela + " WHERE " + cCondicao + " LIMIT 1) AS c_Resp" )
   else
      oQuery := oSocket:Query( "SELECT EXISTS( SELECT 1 FROM " + cTabela + " WHERE " + cCampo + cWhere + xVar + "' LIMIT 1) AS c_Resp" )
   endif
   
   lRet := ( oQuery:FieldGet( 'c_Resp' ) = 1 )
return( lRet )
/* FIM------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * oSocket  - Conexão
 * cTabela  - Tabela do banco
 * [cCampo] - Se especificado trarar o ultimo registro do mesmo, se não será o id
 */
function MySQL_GetLastID( oSocket, cTabela, cCampo )
   local nRet := 1, oQuery, cQuery
   DEFAULT cCampo := "id"
   oQuery := oSocket:Query( "SELECT max(" + cCampo + ") as ultimo FROM " + cTabela )
   
   if( oQuery:Neterr() )
      msg( oQuery:ErrorMsg(), .T. )
      return( NIL )
   endif
   
   nRet := oQuery:FieldGet( "ultimo" )
   nRet := iif( valtype( nRet ) == 'N', nRet, ; 
           iif( valtype( nRet ) == 'C', val( nRet ), 0 ) )
return( nRet )
/* FIM------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Executa varias Query's com o comando BEGIN se alguma linha der errado as linhas
 * anteriores serão desfeitas.
 */
function MySQL_Begin( oSocket, aQuery )
   local lRet := TRUE, oQuery, lErro := FALSE, cQuery := '', xQuery := ''
   
   if( valtype( aQuery ) == "A" )
      oQuery := oSocket:Query( "BEGIN" )
      
      for EACH cQuery IN aQuery
         //msg( cQuery )
         oQuery := oSocket:Query( cQuery )
         
         if( ( lErro := oQuery:lError ) )
            xQuery := cQuery
            exit
         endif
         
      next
      
      if( lErro ) // Se algo der errado as linhas anteriores serão desfeitas.
         oQuery := oSocket:Query( "ROLLBACK" )
         msg( xQuery + HB_OsNewLine() + oQuery:ErrorMsg(), .T. )
      else  // Se der tudo certo as linhas serão gravadas
         oQuery := oSocket:Query( "COMMIT" )
      endif
      
   endif
   
return( !lErro )
/* FIM------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 */
function MySQL_Pega_Dados( oSocket, cTabela, cCampo )
   
return( cDados )