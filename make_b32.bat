@echo off
if "%1" == "clean" goto CLEAN
if "%1" == "CLEAN" goto CLEAN

SET PATH=%PATH%;d:\Borland\BCC7\BIN;D:\harbour320_bcc7_20190508\bin
SET INCLUDE=%INCLUDE%;d:\Borland\Bcc7\include;D:\harbour320_bcc7_20190508\include;d:\hwgui\include
SET LIB=%LIB%;d:\Borland\Bcc7\lib;D:\harbour320_bcc7_20190508\lib;d:\hwgui\lib
SET HB_PATH=D:\harbour320_bcc7_20190508


if not exist lib md lib
if not exist obj md obj
if not exist obj\b32 md obj\b32
if not exist obj\b32\mt md obj\b32\mt
:BUILD

rem   make -fmakefile.bc  > make_b32.log
rem   if errorlevel 1 goto BUILD_ERR
set ACTIVEX_SUPPORT=ON
make -l EXE_OBJ_DIR=obj\b32\bin OBJ_DIR=obj\b32 -fmakefile.bc %1 %2 %3 > make_b32.log
if errorlevel 1 goto BUILD_ERR
make -l OBJ_DIR=obj\b32\mt -DHB_THREAD_SUPPORT -DHB_MT=mt -fmakefile.bc %2 %3 >> make_b32.log
if errorlevel 1 goto BUILD_ERR


:BUILD_OK

   goto EXIT

:BUILD_ERR

   notepad make_b32.log
   goto EXIT

:CLEAN
   del lib\*.lib
   del lib\*.bak
   del obj\b32\*.obj
   del obj\b32\*.c
   del obj\b32\mt\*.obj
   del obj\b32\mt\*.c

   del make_b32.log

   goto EXIT

:EXIT

