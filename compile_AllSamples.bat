SET PATH=%PATH%;d:\Borland\BCC55\BIN;d:\Borland\BCC55\LIB;d:\Borland\BCC55\INCLUDE;d:\xharbour\bin;d:\xharbour\lib;d:\xharbour\include;d:\hwgui\LIB;d:\hwgui\include
SET INCLUDE=%INCLUDE%;d:\Bcc55\include;d:\xHarbour\include;d:\hwgui\include
SET LIB=%LIB%;d:\Borland\Bcc55\lib;d:\xHarbour\lib;d:\hwgui\lib
SET HB_PATH=d:\xHARBOUR

cd exemplos_hwgui

cd agenda
call compile
cd..

cd agenda_res
call c
cd..

cd password 
call bld senha
cd..

cd avi
call bld exemplo_avi
cd..

cd cadastro
call bld cadastro
cd..

cd email
call compile
cd..

cd hanimation
call bld exemplo
cd..

cd login_hwgui
call bld login
cd..

cd mapa
call bld demo
cd..

cd tab_folder
call bld tab_folder
cd..

cd tray_hwgui
call bld teste
cd..
cd..

cd hwgui
cd samples

cd all
call bld a
call bld test1
cd..

cd animation
call bld tstAnimation
cd..

cd browse
call bld arbrow1
call bld arbrow2
call bld browse_1
call bld browse_2
call bld BROWSE_3
call bld browse_4
call bld colrbloc
call bld testbrw
cd..

cd browsefilter
call bld browsefilter
cd..

cd build
call bld buildpelles
cd..

cd combobox
call bld tstcombo
cd..

cd database
call bld DemoDbf
call bld dbview
cd..

cd flash
call bld flashocx
cd..

cd get
call bld testget1
call bld testget2
call bld testget3
call bld testget4
cd..

cd graph
call bld graph
cd..

cd grid
call bld grid_1
call bld grid_2
call bld grid_3
call bld grid_4
call bld grid_5
call bld grid_6
cd..

cd hbrun
call bld hbrun
cd..

cd hello
call bld hello
cd..

cd help
call bld helpdemo
cd..

cd hsplash
call bld tstsplash
cd..

cd ini
call bld testini
cd..

cd ipadress
call bld testip
cd..

cd listbox
call bld demoHList
cd..

cd maximize
call bld demomaximize
cd..

cd mdichild
call bld testchild
cd..

cd menu
call bld TestMenuBitmap
cd..

cd monthcalendar
call bld testhmonth
cd..

cd nicebutton
call bld nice
call bld nice2
cd..

cd ole
call bld hole
call bld iesample
cd..

cd pdf
call bld pdfreader
cd..

cd printdos
call bld tstprdos
cd..

cd progressbar
call bld progbars
cd..

cd propsh
call bld propsh
cd..

cd rmchart
call bld rmsample
cd..

cd rtf
call bld testrtf
cd..

cd scrollbar
call bld tstscrlbar
cd..

cd shadebtn
call bld shadebtn
cd..

cd spliter
call bld testspli
cd..

cd tab
call bld tab
call bld TAB3
cd..

cd trackbar
call bld trackbar
cd..

cd trayicon
call bld testtray
cd..

cd tree
call bld testsdi
call bld testtree
cd..

cd viewer
call bld viewer
cd..

cd winprn
call bld winprn
cd..

cd xml
call bld testxml
cd..