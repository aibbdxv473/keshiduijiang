; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CVideoIntecomSrvDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "VideoIntecomSrv.h"

ClassCount=4
Class1=CVideoIntecomSrvApp
Class2=CVideoIntecomSrvDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_VIDEOINTECOMSRV_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Resource4=IDD_DLG_SETUP
Class4=CSetUpDlg
Resource5=IDR_MENU1

[CLS:CVideoIntecomSrvApp]
Type=0
HeaderFile=VideoIntecomSrv.h
ImplementationFile=VideoIntecomSrv.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC

[CLS:CVideoIntecomSrvDlg]
Type=0
HeaderFile=VideoIntecomSrvDlg.h
ImplementationFile=VideoIntecomSrvDlg.cpp
Filter=W
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_BLOAD_CAST

[CLS:CAboutDlg]
Type=0
HeaderFile=VideoIntecomSrvDlg.h
ImplementationFile=VideoIntecomSrvDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_VIDEOINTECOMSRV_DIALOG]
Type=1
Class=CVideoIntecomSrvDlg
ControlCount=4
Control1=IDC_LIST_ALL_LOG,SysListView32,1350633473
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC_TIME,static,1342308352

[MNU:IDR_MENU1]
Type=1
Class=?
Command1=IDD_MENU_SETUP
Command2=IDC_BLOAD_CAST
Command3=IDC_MENU_CLEAR_LOG
Command4=IDC_MENU_CLEAR
Command5=IDC_MENU_RESTART
Command6=IDC_MENU_EXIT
CommandCount=6

[DLG:IDD_DLG_SETUP]
Type=1
Class=CSetUpDlg
ControlCount=14
Control1=IDC_STATIC,static,1342308352
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,button,1342177287
Control5=IDC_EDIT_USER,edit,1350631424
Control6=IDC_EDIT_PASSWORD,edit,1350631456
Control7=IDC_EDIT_CHANNEL_NUM,edit,1350631425
Control8=IDC_SPIN,msctls_updown32,1342177334
Control9=IDC_STATIC,static,1342308352
Control10=IDC_CHANNEL_INFO,button,1342177287
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC,static,1342308352
Control13=IDC_BTN_OK,button,1342275584
Control14=IDC_BTN_CANCEL,button,1342275584

[CLS:CSetUpDlg]
Type=0
HeaderFile=SetUpDlg.h
ImplementationFile=SetUpDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CSetUpDlg
VirtualFilter=dWC

