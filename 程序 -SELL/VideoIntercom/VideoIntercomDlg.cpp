// VideoIntercomDlg.cpp : implementation file
//

#include "stdafx.h"
#include "VideoIntercom.h"
#include "VideoIntercomDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About
/*********************************************************
  Function:	MessageCallback
  Desc:		alarm, callback functions dealing with the info of card in ATM
  Input:	lCommand,message type; pAlarmer,info of device which upload message;pAlarmInfo, message info content;dwBufLen,message length; pUser, user parameter
  Output:	
  Return:	
**********************************************************/

void CALLBACK MessageCallback(LONG lCommand, NET_DVR_ALARMER *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUser)
{
		UNREFERENCED_PARAMETER(pUser);	
	UINT iDeviceIndex = 0;
	UINT i = 0;

	
	AfxMessageBox(pAlarmer->sDeviceIP);
//	TRACE("IP:"+pAlarmer->sDeviceIP );

	return;
}

/*********************************************************
Function:	g_ExceptionCallBack
Desc:		exception callback function
Input:	dwType: message type;lUserID: log-in device ID;lHandle, handle of connected channel ; pUser, user data；
Output:	
Return:	
**********************************************************/
void CALLBACK g_ExceptionCallBack(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser)
{

	return;
}

FILE* fp1 = NULL;
FILE* fp2 = NULL;
void CALLBACK fAudioTalkDataCallBack(LONG lVoiceComHandle,char *pRecvDataBuffer,DWORD dwBufSize,BYTE byAudioFlag,void* pUser)
{
	if (!fp1)
	{
		fp1 = fopen("D:\\local.264","wb");
	}

	if (!fp2)
	{
		fp2 = fopen("D:\\device.264","wb");
	}
	
	if (byAudioFlag == 0)
	{
		fwrite(pRecvDataBuffer, 1, dwBufSize, fp1);
	}
	else if (byAudioFlag == 1)
	{
		fwrite(pRecvDataBuffer, 1, dwBufSize, fp2);
	}
}
void CALLBACK DrawPDCShow(LONG lRealHandle, HDC hDc, DWORD dwUser)
{
    SetBkMode(hDc, TRANSPARENT);
    SetTextColor(hDc, RGB(255, 255, 255));
    
}
class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVideoIntercomDlg dialog

CVideoIntercomDlg::CVideoIntercomDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CVideoIntercomDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CVideoIntercomDlg)
		// NOTE: the ClassWizard will add member initialization here
	m_lPlayHandle = -1;
	lUserID = -1;
	g_lVoiceHandle = -1;
	lFortifyHandle = -1;
	m_lListenHandle = -1;
	bInitCard = true;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CVideoIntercomDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVideoIntercomDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CVideoIntercomDlg, CDialog)
	//{{AFX_MSG_MAP(CVideoIntercomDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_OPEN, OnOpen)
	ON_BN_CLICKED(IDC_OPEN_VOICE, OnOpenVoice)
	ON_BN_CLICKED(IDC_STOP, OnStop)
	ON_BN_CLICKED(IDC_PLAY, OnPlay)
	ON_BN_CLICKED(IDC_STOP_VOICE, OnStopVoice)
	ON_BN_CLICKED(IDC_OPEN_INTERCOM, OnOpenIntercom)
	ON_BN_CLICKED(IDC_STOP_INTERCOM, OnStopIntercom)
	ON_BN_CLICKED(IDC_FORTIFY, OnFortify)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVideoIntercomDlg message handlers

BOOL CVideoIntercomDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	NET_DVR_SetConnectTime(5000, 1);
	NET_DVR_SetReconnect(30000, FALSE);
	NET_DVR_SetDVRMessageCallBack_V30(MessageCallback, NULL);
	NET_DVR_SetExceptionCallBack_V30(WM_NULL/*WM_MYCOMMAND*/, NULL/*this->m_hWnd*/, g_ExceptionCallBack, NULL);
	if (!NET_DVR_SetShowMode(NORMALMODE, RGB(255, 255, 255)))
	{
		MessageBox("设置失败");
		//	AddLog(-1, OPERATION_FAIL_T, "NET_DVR_SetShowMode");
	}
		m_lListenHandle = NET_DVR_StartListen_V30(NULL,7200, MessageCallback, NULL); 
	if (m_lListenHandle < 0)
	{
		
		AfxMessageBox("监听失败");
	}
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CVideoIntercomDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CVideoIntercomDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CVideoIntercomDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CVideoIntercomDlg::OnOpen() 
{
	// TODO: Add your control notification handler code here

	NET_DVR_DEVICEINFO_V30 struDeviceInfo;
	lUserID = NET_DVR_Login_V30("192.168.245.151",8000,"admin","12345",&struDeviceInfo);
	if(lUserID < 0 )
	{
		char szLan[1024] = {0};
		if (NET_DVR_GetLastError() == NET_DVR_PASSWORD_ERROR)
		{
			g_StringLanType(szLan, "用户名密码错误!", "user name or password error!");
			AfxMessageBox(szLan);
		}
		else
		{				
			g_StringLanType(szLan, "由于网络原因或DVR忙, 注册失败!", "net error or dvr is busy!");
			AfxMessageBox(szLan);
		}
		return ;
	}
	
}

void CVideoIntercomDlg::OnOpenVoice() 
{
	// TODO: Add your control notification handler code here
		int i = 0;
	WORD	wTemp = 0;
	WORD	wVolumevalue = 0;

	wTemp = (0xFFFF) / 100;
	wVolumevalue = (WORD)(90 * wTemp);
	StartSound(wVolumevalue);
}

void CVideoIntercomDlg::StartSound(WORD wVolumeValue)
{
	//[in] 声音播放模式：1－独占声卡，单路音频模式；2－共享声卡，多路音频模式 
//	if(!NET_DVR_SetAudioMode(1))
	{
//		MessageBox("failed to set audiomode");
//		return;
	}
	if(bInitCard)
	{
	if (!NET_DVR_OpenSound(m_lPlayHandle))
			{
				MessageBox("failed to NET_DVR_OpenSound_Card");
				return;
			}
			if (!NET_DVR_Volume(m_lPlayHandle, wVolumeValue))
			{
				
			}
	}
	else
	{
		if (!PlayM4_PlaySound(m_lPort))
				{
					return;
				}
			if (!PlayM4_SetVolume(m_lPort, wVolumeValue))
			{
			}
	}
}

void CVideoIntercomDlg::OnStop() 
{
	// TODO: Add your control notification handler code here
	if (!NET_DVR_StopRealPlay(m_lPlayHandle))
		{
			MessageBox("failed to stop");
		}
		else
		{
		//	MessageBox("failed to stop");
		}	
}

void CVideoIntercomDlg::OnPlay() 
{
	// TODO: Add your control notification handler code here
		NET_DVR_CLIENTINFO struPlayInfo;
	memset(&struPlayInfo, 0, sizeof(NET_DVR_CLIENTINFO));
		struPlayInfo.hPlayWnd = GetDlgItem(IDC_PIC1)->GetSafeHwnd();	
		struPlayInfo.lChannel = 1;
	//	struPlayInfo.lLinkMode = g_struDeviceInfo[iDeviceIndex].struChanInfo[iChanIndex].dwProtocol;
	//	struPlayInfo.sMultiCastIP = g_struDeviceInfo[iDeviceIndex].chDeviceMultiIP;
	m_lPlayHandle = NET_DVR_RealPlay_V30(lUserID,&struPlayInfo,NULL,NULL,TRUE);
	if (m_lPlayHandle == -1) 
    {
        AfxMessageBox("预览失败");
        return ;
    }
    else
    {
     //   if (!NET_DVR_RigisterDrawFun(m_lPlayHandle, DrawPDCShow, 0)) // 设置预览画图回调 
        {
         ///   g_pMainDlg->AddLog(m_iDevIndex, OPERATION_FAIL_T, "NET_DVR_RigisterDrawFun Fail");
     //      AfxMessageBox("设置预览画图回调失败");
        }
        
    }
}

void CVideoIntercomDlg::OnStopVoice() 
{
	// TODO: Add your control notification handler code here
	NET_DVR_CloseSound();
}

void CVideoIntercomDlg::OnOpenIntercom() 
{
	// TODO: Add your control notification handler code here
	char szLan[128] = {0};
//	bNeedCBNoEncData 
//[in] 需要回调的语音数据类型：0－编码后的语音数据，1－编码前的PCM原始数据 
	g_lVoiceHandle = NET_DVR_StartVoiceCom_V30(lUserID,1,true,fAudioTalkDataCallBack,NULL);
	if (g_lVoiceHandle == -1)
	{
	g_StringLanType(szLan, "语音对讲打开失败", "Voice talk failed");
		AfxMessageBox(szLan);	
	}
	else
	{
	}
}

void CVideoIntercomDlg::OnStopIntercom() 
{
	// TODO: Add your control notification handler code here
	if(!NET_DVR_StopVoiceCom(g_lVoiceHandle))
		MessageBox("语音对讲关闭失败");
}

void CVideoIntercomDlg::OnFortify() 
{
	// TODO: Add your control notification handler code here
	if(lFortifyHandle < 0 )
	{
		lFortifyHandle = NET_DVR_SetupAlarmChan_V30(lUserID);
		if(lFortifyHandle == -1)
		{
			MessageBox("设防失败");
		}
	}
	else
	{
		
		if(NET_DVR_CloseAlarmChan_V30(lFortifyHandle))
		{
			lFortifyHandle = -1;
		}
		else
		{
			AfxMessageBox("报警撤防失败");
		}
	}
}
