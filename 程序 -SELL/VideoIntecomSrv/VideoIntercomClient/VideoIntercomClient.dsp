# Microsoft Developer Studio Project File - Name="VideoIntercomClient" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=VideoIntercomClient - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "VideoIntercomClient.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "VideoIntercomClient.mak" CFG="VideoIntercomClient - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "VideoIntercomClient - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "VideoIntercomClient - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "VideoIntercomClient - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "E:\可视对讲\程序\VideoIntecomSrv\Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 GdiPlus.lib HCNetSDK.lib PlayCtrl.lib DsSdk.lib winmm.lib /nologo /subsystem:windows /machine:I386
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "VideoIntercomClient - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "E:\可视对讲\程序\VideoIntecomSrv\Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 GdiPlus.lib HCNetSDK.lib PlayCtrl.lib DsSdk.lib winmm.lib /nologo /subsystem:windows /debug /machine:I386 /nodefaultlib:"MSVCRT.lib" /nodefaultlib:"LIBC.lib" /pdbtype:sept
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "VideoIntercomClient - Win32 Release"
# Name "VideoIntercomClient - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\AlarmDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\common\Client.cpp
# End Source File
# Begin Source File

SOURCE=.\EDCLOCK.CPP
# End Source File
# Begin Source File

SOURCE=.\common\IniFile.cpp
# End Source File
# Begin Source File

SOURCE=.\MyListCtrl.cpp
# End Source File
# Begin Source File

SOURCE=.\RecordDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\SetUpDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\VideoIntercomClient.cpp
# End Source File
# Begin Source File

SOURCE=.\VideoIntercomClient.rc
# End Source File
# Begin Source File

SOURCE=.\VideoIntercomClientDlg.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\AlarmDlg.h
# End Source File
# Begin Source File

SOURCE=.\common\Client.h
# End Source File
# Begin Source File

SOURCE=.\common\DataType.h
# End Source File
# Begin Source File

SOURCE=.\common\DecodeCardSdk.h
# End Source File
# Begin Source File

SOURCE=.\EDCLOCK.H
# End Source File
# Begin Source File

SOURCE=.\common\GeneralDef.h
# End Source File
# Begin Source File

SOURCE=.\common\HCNetSDK.h
# End Source File
# Begin Source File

SOURCE=.\common\IniFile.h
# End Source File
# Begin Source File

SOURCE=.\MyListCtrl.h
# End Source File
# Begin Source File

SOURCE=.\common\plaympeg4.h
# End Source File
# Begin Source File

SOURCE=.\RecordDlg.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\SetUpDlg.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\VideoIntercomClient.h
# End Source File
# Begin Source File

SOURCE=.\VideoIntercomClientDlg.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\0.BMP
# End Source File
# Begin Source File

SOURCE=.\res\1.BMP
# End Source File
# Begin Source File

SOURCE=.\res\2.BMP
# End Source File
# Begin Source File

SOURCE=.\res\3.BMP
# End Source File
# Begin Source File

SOURCE=.\res\4.BMP
# End Source File
# Begin Source File

SOURCE=.\res\4.ico
# End Source File
# Begin Source File

SOURCE=.\res\5.BMP
# End Source File
# Begin Source File

SOURCE=.\res\6.BMP
# End Source File
# Begin Source File

SOURCE=.\res\6.ICO
# End Source File
# Begin Source File

SOURCE=.\res\7.BMP
# End Source File
# Begin Source File

SOURCE=.\res\7.ICO
# End Source File
# Begin Source File

SOURCE=.\res\8.BMP
# End Source File
# Begin Source File

SOURCE=.\res\9.BMP
# End Source File
# Begin Source File

SOURCE=.\res\9.ICO
# End Source File
# Begin Source File

SOURCE=.\res\BLACK.BMP
# End Source File
# Begin Source File

SOURCE=.\res\camera.ico
# End Source File
# Begin Source File

SOURCE=.\res\Camera1.ico
# End Source File
# Begin Source File

SOURCE=.\res\CLOSE.ICO
# End Source File
# Begin Source File

SOURCE=.\res\corona.smf
# End Source File
# Begin Source File

SOURCE=.\res\Devior.smf
# End Source File
# Begin Source File

SOURCE=.\res\fish.smf
# End Source File
# Begin Source File

SOURCE=.\res\green.ico
# End Source File
# Begin Source File

SOURCE=.\res\hblogo.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00001.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00002.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00003.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00004.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00006.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00007.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00008.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00009.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00010.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico00011.ico
# End Source File
# Begin Source File

SOURCE=.\res\ico1.ico
# End Source File
# Begin Source File

SOURCE=.\res\icon1.ico
# End Source File
# Begin Source File

SOURCE=.\res\icon2.ico
# End Source File
# Begin Source File

SOURCE=.\res\icon8.ico
# End Source File
# Begin Source File

SOURCE=.\res\King.smf
# End Source File
# Begin Source File

SOURCE=.\res\Kromo.smf
# End Source File
# Begin Source File

SOURCE=.\res\PAUSE_ENABLE.ICO
# End Source File
# Begin Source File

SOURCE=.\res\PLAY_DISABLE.ICO
# End Source File
# Begin Source File

SOURCE=.\res\PLAY_ENABLE.ICO
# End Source File
# Begin Source File

SOURCE=.\res\POINT.BMP
# End Source File
# Begin Source File

SOURCE=.\res\step_disable.ico
# End Source File
# Begin Source File

SOURCE=.\res\STOP.ICO
# End Source File
# Begin Source File

SOURCE=.\res\STOP_DISABLE.ICO
# End Source File
# Begin Source File

SOURCE=.\res\VideoIntercomClient.ico
# End Source File
# Begin Source File

SOURCE=.\res\VideoIntercomClient.rc2
# End Source File
# Begin Source File

SOURCE=".\res\x-plus.smf"
# End Source File
# Begin Source File

SOURCE=.\res\xpblue.smf
# End Source File
# Begin Source File

SOURCE=.\res\xpgrean.smf
# End Source File
# Begin Source File

SOURCE=.\res\xpsteel.smf
# End Source File
# Begin Source File

SOURCE=.\res\yellow.ico
# End Source File
# Begin Source File

SOURCE=".\res\按钮1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\按钮2.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\背景.bmp"
# End Source File
# Begin Source File

SOURCE=.\res\DETOURS.lib
# End Source File
# Begin Source File

SOURCE=.\res\SkinMagicLib.lib
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# Begin Source File

SOURCE=.\res\vc.avi
# End Source File
# End Target
# End Project
