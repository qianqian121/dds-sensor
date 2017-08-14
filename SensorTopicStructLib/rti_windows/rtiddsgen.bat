@REM =========================================================================
@REM (c) 2005-2014 Copyright, Real-Time Innovations. All rights reserved.
@REM
@REM No duplications, whole or partial, manual or electronic, may be made
@REM without express written permission.  Any such copies, or
@REM revisions thereof, must display this notice unaltered.
@REM This code contains trade secrets of Real-Time Innovations, Inc.
@REM =========================================================================

@echo off
setlocal EnableDelayedExpansion

set appName=rtiddsgen
@REM set executableName -- Not needed since it is a Java Application
set scriptVersion=5.2.3

set dir=%~dp0

@REM If the rticommon.bat script is in a shipped location
if exist "%dir%..\resource\scripts\rticommon.bat" (
    set runWithinModule=false
    call "%dir%..\resource\scripts\rticommon.bat"
    if not %ERRORLEVEL% == 0  (
        exit /b 1
    )
    set "antJar=!appLibClassDir!\ant-contrib-1.0b3.jar"
    set "antlrJar=!appLibClassDir!\antlr-3.4-complete.jar"
    set "log4jJar=!appLibClassDir!\log4j-1.2.16.jar"
    set "velocityJar=!appLibClassDir!\velocity-1.7-dep.jar"
    set "rtiddsgenJar=!binClassDir!\rtiddsgen2.jar"
    set "rtiddsgen1Jar=!appLibClassDir!\rtiddsgen.jar"
    set "rtiddsgen1ResourceDir=!appSupportDir!"
) else (
    set runWithinModule=true
    call "%dir%..\..\ndds.4.1\resource\scripts\rticommon.bat"
    if not %ERRORLEVEL% == 0  (
        exit /b 1
    )
    set "appSupportDir=%dir%..\resource"
    set "antJar=%dir%..\class\ant-contrib-1.0b3.jar"
    set "antlrJar=%dir%..\class\antlr-3.4-complete.jar"
    set "log4jJar=%dir%..\class\log4j-1.2.16.jar"
    set "velocityJar=%dir%..\class\velocity-1.7-dep.jar"
    set "rtiddsgenJar=%dir%..\class\rtiddsgen2.jar"
    set "rtiddsgen1Jar=%dir%..\..\nddsgen.1.0\class\rtiddsgen.jar"
    set "rtiddsgen1ResourceDir=%dir%..\..\nddsgen.1.0\resource"
)

@REM Decide whether to run rtiddsgen1 
set runRtiddsgen1=false
set rtiddsgen1Arguments=-metp -corba -orb -typeSequenceSuffix -dataReaderSuffix -dataWriterSuffix
for %%A in (%*) do (
    for %%B in (%rtiddsgen1Arguments%) do (
        if /I "%%A" == "%%B" ( 
            set runRtiddsgen1=true
            break
        )
    )
)

if not defined JREHOME (
    if not exist "%jreDir%" (
      echo Warning: OS %os% may not be supported. Be sure JREHOME is set.
      exit /b 1
    )
) else (
	if not exist "%JREHOME%" (
        echo Warning: JREHOME points to a non-existing path "%JREHOME%". Please set JREHOME accordingly.
        exit /b 1
	)
)

if "!runRtiddsgen1!"=="false" (
    
    "%JREHOME%\bin\java.exe" -classpath "%antJar%";"%antlrJar%";"%log4jJar%";"%velocityJar%";"%rtiddsgenJar%"^
      -DNDDS_RESOURCE_DIR="%appSupportDir%\%appName%"^
      -DNDDSHOME="%NDDSHOME%"  -jar "%rtiddsgenJar%" %*
) else (
    if not exist "!rtiddsgen1Jar!" (
        echo Corba support requires a different version of rtiddsgen. Please contact
        echo support@rti.com for more information.
        exit /b 1
    )
    "%JREHOME%\bin\java" -DNDDS_RESOURCE_DIR="%rtiddsgen1ResourceDir%"^
      -jar "%rtiddsgen1Jar%" %*
)
