; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CVideoIntercomClientDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "VideoIntercomClient.h"

ClassCount=7
Class1=CVideoIntercomClientApp
Class2=CVideoIntercomClientDlg
Class3=CAboutDlg

ResourceCount=6
Resource1=IDD_DLG_SETUP
Resource2=IDR_MAINFRAME
Resource3=IDD_DLG_ALARM
Class4=CAlarmDlg
Resource4=IDD_ABOUTBOX
Class5=CMyListCtrl
Class6=CSetUpDlg
Resource5=IDD_VIDEOINTERCOMCLIENT_DIALOG
Class7=CRecordDlg
Resource6=IDD_DIALOG_RECORD

[CLS:CVideoIntercomClientApp]
Type=0
HeaderFile=VideoIntercomClient.h
ImplementationFile=VideoIntercomClient.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC

[CLS:CVideoIntercomClientDlg]
Type=0
HeaderFile=VideoIntercomClientDlg.h
ImplementationFile=VideoIntercomClientDlg.cpp
Filter=W
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CVideoIntercomClientDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=VideoIntercomClientDlg.h
ImplementationFile=VideoIntercomClientDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_VIDEOINTERCOMCLIENT_DIALOG]
Type=1
Class=CVideoIntercomClientDlg
ControlCount=14
Control1=IDC_PIC1,static,1350565897
Control2=IDC_CLOSEVIDEO,button,1342275584
Control3=IDC_BTN_CAPTURE,button,1342275584
Control4=IDC_LIST_ALL_LOG,SysListView32,1350631425
Control5=IDC_BTN_RECORD,button,1342275584
Control6=IDC_LIST_CHANNEL,SysListView32,1350631428
Control7=IDC_CHECK_DISCONNECT,button,1342242819
Control8=IDC_ANIMATE1,SysAnimate32,1350631424
Control9=IDC_CHECK_AUDIO,button,1342242819
Control10=IDC_STATIC,button,1342177287
Control11=IDC_BTN_PLAY_RECORD,button,1342275584
Control12=IDC_SHOW_HIDE,button,1342275584
Control13=IDC_STATIC,static,1342308352
Control14=IDC_BLOAD_CAST,button,1342275584

[DLG:IDD_DLG_ALARM]
Type=1
Class=CAlarmDlg
ControlCount=3
Control1=IDC_BTN_ACCEPT,button,1342242816
Control2=IDC_BTN_RECV2,button,1342242816
Control3=IDC_ALARM_INFO,static,1342308352

[CLS:CAlarmDlg]
Type=0
HeaderFile=AlarmDlg.h
ImplementationFile=AlarmDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_ALARM_INFO
VirtualFilter=dWC

[CLS:CMyListCtrl]
Type=0
HeaderFile=MyListCtrl.h
ImplementationFile=MyListCtrl.cpp
BaseClass=CListCtrl
Filter=W
LastObject=CMyListCtrl

[DLG:IDD_DLG_SETUP]
Type=1
Class=CSetUpDlg
ControlCount=16
Control1=IDOK,button,1342275584
Control2=IDCANCEL,button,1342275584
Control3=IDC_STATIC,static,1342308352
Control4=IDC_IPADDRESS1,SysIPAddress32,1342242816
Control5=IDC_STATIC,button,1342177287
Control6=IDC_STATIC,button,1342177287
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_EDIT_PICPATH,edit,1350631552
Control10=IDC_EDIT_RECORDPATH,edit,1350631552
Control11=IDC_BTN_PATH1,button,1342242816
Control12=IDC_BTN_PATH2,button,1342242816
Control13=IDC_STATIC,static,1342308352
Control14=IDC_EDIT_CONNECT_TIME,edit,1350631552
Control15=IDC_SPIN1,msctls_updown32,1342177334
Control16=IDC_STATIC,static,1342308352

[CLS:CSetUpDlg]
Type=0
HeaderFile=SetUpDlg.h
ImplementationFile=SetUpDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT1

[DLG:IDD_DIALOG_RECORD]
Type=1
Class=CRecordDlg
ControlCount=13
Control1=IDC_STATIC_LOCAL_FILE_WND,static,1342177287
Control2=IDC_BTN_LOCAL_PLAY,button,1342242880
Control3=IDC_BTN_LOCAL_STOP,button,1342242880
Control4=IDC_BTN_LOCAL_SLOW,button,1342242880
Control5=IDC_BTN_LOCAL_FAST,button,1342242880
Control6=IDC_BTN_LOCAL_PIC_SNATCH,button,1342242880
Control7=IDC_BTN_LOCAL_STEP_BACK,button,1342242880
Control8=IDC_BTN_LOCAL_STEP_FORWARD,button,1342242880
Control9=IDC_BTN_LOCAL_SOUND,button,1342242880
Control10=IDC_SLIDER_LOCAL_PLAY_PROGRESS,msctls_trackbar32,1342242840
Control11=IDC_SLIDER_LOCAL_VOLUME,msctls_trackbar32,1342242840
Control12=IDC_STATIC_LOCAL_PLAY_STATUS,static,1342308352
Control13=IDC_BTN_CLOSE,button,1342242880

[CLS:CRecordDlg]
Type=0
HeaderFile=RecordDlg.h
ImplementationFile=RecordDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_BTN_LOCAL_FAST
VirtualFilter=dWC

