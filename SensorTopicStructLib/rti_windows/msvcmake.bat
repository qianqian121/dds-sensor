@echo off
@rem ***************************************************************************
@rem Licensed Materials - Property of IBM
@rem (c) Copyright IBM Corporation 2008, 2015. All Rights Reserved.
@rem
@rem Note to U.S. Government Users Restricted Rights:  
@rem Use, duplication or disclosure restricted by GSA ADP Schedule 
@rem Contract with IBM Corp.
@rem ***************************************************************************
if "%2"=="" set target=all
if "%2"=="build" set target=all
if "%2"=="rebuild" set target=clean all
if "%2"=="clean" set target=clean
set MAKEFLAGS=
@echo if "%4"=="VC9" set VS_PATH=%VS_2008_PATH%
@echo if "%4"=="VC10" set VS_PATH=%VS_2010_PATH%
@echo if "%4"=="VC11" set VS_PATH=%VS_2012_PATH%

@echo if EXIST  "%VS_PATH%" goto :continueExecution

@echo Value of the property MSVC::IDEVersion corresponds to the version of Visual Studio. 
@echo VC9 - Visual Studio 2008
@echo VC10 - Visual Studio 2010
@echo VC11 - Visual Studio 2012
@rem Current value is "%4", but no Visual Studio installation was not found in the directory "%VS_PATH%".

@rem exit /b 1

:continueExecution
if "%3"=="x86" goto :x86set 
call ".\VcVarsall.bat" %3
goto :doMake
:x86set
call ".\VcVars32.bat" x86
:doMake
echo ``nmake.exe
nmake /nologo /S /F SensorTopicStructLib.mak %target% MS_VER="%4" CPU="%3" %5 %6 %7 %8 %9

