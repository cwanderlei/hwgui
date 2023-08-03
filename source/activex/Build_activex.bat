@ECHO OFF
REM Gerado pela xDev Studio v0.70 as 18/04/2022 @ 16:58:38
REM Compilador .: xHB build 1.2.3 (SimpLex) & BCC 7.30 & HwGui 2.17
REM Destino ....: D:\hwgui\lib\activex.LIB
REM Perfil .....: Batch file (Relative Paths)

REM **************************************************************************
REM * Setamos abaixo os PATHs necessarios para o correto funcionamento deste *
REM * script. Se voce for executa-lo em  outra CPU, analise as proximas tres *
REM * linhas abaixo para refletirem as corretas configuracoes de sua maquina *
REM **************************************************************************
 SET PATH=D:\hwgui;D:\xharbour123_Bcc73\bin;D:\borland\BCC73\BIN;C:\Program Files (x86)\Common Files\Oracle\Java\javapath;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\TortoiseSVN\bin;C:\Users\cwand\AppData\Local\Microsoft\WindowsApps;;C:\Users\cwand\AppData\Local\Programs\Microsoft VS Code\bin
 SET INCLUDE=D:\hwgui\include;D:\xharbour123_Bcc73\include;D:\borland\BCC73\include;D:\hwgui\include;
 SET LIB=D:\hwgui\lib;D:\xharbour123_Bcc73\lib;D:\borland\BCC73\lib;D:\borland\BCC73\lib\psdk;D:\hwgui\lib;
 SET OBJ=obj;;

REM - HwGUI.xCompiler.prg(86) @ 16:58:38:533
ECHO .ÿ
ECHO * (01/12) Compilando h_activex.prg
 harbour.exe ".\h_activex.prg" /q /o".\h_activex.c"   /M  /N 
 IF ERRORLEVEL 1 GOTO FIM

REM - HwGUI.xCompiler.prg(122) @ 16:58:38:684
 echo -I"D:\hwgui\include;D:\xharbour123_Bcc73\include;D:\borland\BCC73\include;D:\hwgui\include;" > "b32.bc"
 echo -L"D:\hwgui\lib;D:\xharbour123_Bcc73\lib;D:\borland\BCC73\lib;D:\borland\BCC73\lib\psdk;D:\hwgui\lib;;obj;;" >> "b32.bc"
 echo -o".\h_activex.obj" >> "b32.bc"
 echo ".\h_activex.c" >> "b32.bc"

REM - HwGUI.xCompiler.prg(123) @ 16:58:38:684
ECHO .ÿ
ECHO * (02/12) Compilando h_activex.c
 BCC32 -M -c -tWM @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - HwGUI.xCompiler.prg(86) @ 16:58:38:808
ECHO .ÿ
ECHO * (03/12) Compilando hhtml.prg
 harbour.exe ".\hhtml.prg" /q /o".\hhtml.c"   /M  /N 
 IF ERRORLEVEL 1 GOTO FIM

REM - HwGUI.xCompiler.prg(122) @ 16:58:38:975
 echo -I"D:\hwgui\include;D:\xharbour123_Bcc73\include;D:\borland\BCC73\include;D:\hwgui\include;" > "b32.bc"
 echo -L"D:\hwgui\lib;D:\xharbour123_Bcc73\lib;D:\borland\BCC73\lib;D:\borland\BCC73\lib\psdk;D:\hwgui\lib;;obj;;" >> "b32.bc"
 echo -o".\hhtml.obj" >> "b32.bc"
 echo ".\hhtml.c" >> "b32.bc"

REM - HwGUI.xCompiler.prg(123) @ 16:58:38:976
ECHO .ÿ
ECHO * (04/12) Compilando hhtml.c
 BCC32 -M -c -tWM @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - HwGUI.xCompiler.prg(122) @ 16:58:39:097
 echo -I"D:\hwgui\include;D:\xharbour123_Bcc73\include;D:\borland\BCC73\include;D:\hwgui\include;" > "b32.bc"
 echo -L"D:\hwgui\lib;D:\xharbour123_Bcc73\lib;D:\borland\BCC73\lib;D:\borland\BCC73\lib\psdk;D:\hwgui\lib;;obj;;" >> "b32.bc"
 echo -o".\c_activex.obj" >> "b32.bc"
 echo ".\c_activex.c" >> "b32.bc"

REM - HwGUI.xCompiler.prg(123) @ 16:58:39:097
ECHO .ÿ
ECHO * (05/12) Compilando c_activex.c
 BCC32 -M -c -tWM @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - HwGUI.xCompiler.prg(122) @ 16:58:39:874
 echo -I"D:\hwgui\include;D:\xharbour123_Bcc73\include;D:\borland\BCC73\include;D:\hwgui\include;" > "b32.bc"
 echo -L"D:\hwgui\lib;D:\xharbour123_Bcc73\lib;D:\borland\BCC73\lib;D:\borland\BCC73\lib\psdk;D:\hwgui\lib;;obj;;" >> "b32.bc"
 echo -o".\htmlcore.obj" >> "b32.bc"
 echo ".\htmlcore.c" >> "b32.bc"

REM - HwGUI.xCompiler.prg(123) @ 16:58:39:874
ECHO .ÿ
ECHO * (06/12) Compilando htmlcore.c
 BCC32 -M -c -tWM @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - HwGUI.xCompiler.prg(122) @ 16:58:41:074
 echo -I"D:\hwgui\include;D:\xharbour123_Bcc73\include;D:\borland\BCC73\include;D:\hwgui\include;" > "b32.bc"
 echo -L"D:\hwgui\lib;D:\xharbour123_Bcc73\lib;D:\borland\BCC73\lib;D:\borland\BCC73\lib\psdk;D:\hwgui\lib;;obj;;" >> "b32.bc"
 echo -o".\htmlfunc.obj" >> "b32.bc"
 echo ".\htmlfunc.c" >> "b32.bc"

REM - HwGUI.xCompiler.prg(123) @ 16:58:41:074
ECHO .ÿ
ECHO * (07/12) Compilando htmlfunc.c
 BCC32 -M -c -tWM @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - HwGUI.xCompiler.prg(389) @ 16:58:42:249
ECHO .ÿ
ECHO * (08/12) Linkando c_activex.obj
 TLIB "D:\hwgui\lib\activex.LIB" +- ".\c_activex.obj"
 IF ERRORLEVEL 1 GOTO FIM

REM - HwGUI.xCompiler.prg(389) @ 16:58:42:249
ECHO .ÿ
ECHO * (09/12) Linkando h_activex.obj
 TLIB "D:\hwgui\lib\activex.LIB" +- ".\h_activex.obj"
 IF ERRORLEVEL 1 GOTO FIM

REM - HwGUI.xCompiler.prg(389) @ 16:58:42:249
ECHO .ÿ
ECHO * (10/12) Linkando hhtml.obj
 TLIB "D:\hwgui\lib\activex.LIB" +- ".\hhtml.obj"
 IF ERRORLEVEL 1 GOTO FIM

REM - HwGUI.xCompiler.prg(389) @ 16:58:42:249
ECHO .ÿ
ECHO * (11/12) Linkando htmlcore.obj
 TLIB "D:\hwgui\lib\activex.LIB" +- ".\htmlcore.obj"
 IF ERRORLEVEL 1 GOTO FIM

REM - HwGUI.xCompiler.prg(389) @ 16:58:42:249
ECHO .ÿ
ECHO * (12/12) Linkando htmlfunc.obj
 TLIB "D:\hwgui\lib\activex.LIB" +- ".\htmlfunc.obj"
 IF ERRORLEVEL 1 GOTO FIM

:FIM
 ECHO Fim do script de compilacao!
