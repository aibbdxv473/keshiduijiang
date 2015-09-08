; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDlgOutput
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "VideoIntercom.h"

ClassCount=4
Class1=CVideoIntercomApp
Class2=CVideoIntercomDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_VIDEOINTERCOM_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Class4=CDlgOutput
Resource4=IDD_DLG_OUTPUT

[CLS:CVideoIntercomApp]
Type=0
HeaderFile=VideoIntercom.h
ImplementationFile=VideoIntercom.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC

[CLS:CVideoIntercomDlg]
Type=0
HeaderFile=VideoIntercomDlg.h
ImplementationFile=VideoIntercomDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CVideoIntercomDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=VideoIntercomDlg.h
ImplementationFile=VideoIntercomDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_VIDEOINTERCOM_DIALOG]
Type=1
Class=CVideoIntercomDlg
ControlCount=10
Control1=IDC_OPEN,button,1342242816
Control2=IDC_PLAY,button,1342242816
Control3=IDC_OPEN_VOICE,button,1342242816
Control4=IDC_OPEN_INTERCOM,button,1342242816
Control5=IDC_EXIT,button,1342242816
Control6=IDC_STOP,button,1342242816
Control7=IDC_PIC1,button,1342177287
Control8=IDC_STOP_VOICE,button,1342242816
Control9=IDC_STOP_INTERCOM,button,1342242816
Control10=IDC_FORTIFY,button,1342242816

[DLG:IDD_DLG_OUTPUT]
Type=1
Class=CDlgOutput
ControlCount=0

[CLS:CDlgOutput]
Type=0
HeaderFile=DlgOutput.h
ImplementationFile=DlgOutput.cpp
BaseClass=CDialog
Filter=D
LastObject=CDlgOutput

