// VideoIntercomClientDlg.cpp : implementation file
//

#include "stdafx.h"
#include "VideoIntercomClient.h"
#include "VideoIntercomClientDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About
FILE* fp1 = NULL;
FILE* fp2 = NULL;
void CALLBACK fAudioTalkDataCallBack(LONG lVoiceComHandle,char *pRecvDataBuffer,DWORD dwBufSize,BYTE byAudioFlag,void* pUser)
{
	if (!fp1)
	{
		fp1 = fopen("c:\\local.264","wb");
	}

	if (!fp2)
	{
		fp2 = fopen("c:\\device.264","wb");
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
// CVideoIntercomClientDlg dialog

CVideoIntercomClientDlg::CVideoIntercomClientDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CVideoIntercomClientDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CVideoIntercomClientDlg)
//	m_strConsoleRev= "";
	m_lVoiceHandle = -1;
	m_iPlayMode = 0;
	m_bShowAlarmHint = false;
	m_iHasChannel = -1;
	m_lPlayHandle = -1;
	m_iConnectIndex = 0;
	m_bCheckConnect = false;
	m_bFirst = true;
	m_bStartRecord = false;
	m_bMin = false;
	lUserID = -1;
	m_bBloadCast = false;
		m_BMPPressed=true;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CVideoIntercomClientDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVideoIntercomClientDlg)
	DDX_Control(pDX, IDC_ANIMATE1, m_Anitmate);
	DDX_Control(pDX, IDC_LIST_ALL_LOG, m_listAllLog);
	DDX_Control(pDX, IDC_LIST_CHANNEL, m_listChannel);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CVideoIntercomClientDlg, CDialog)
	//{{AFX_MSG_MAP(CVideoIntercomClientDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_CLOSEVIDEO, OnClosevideo)
	ON_BN_CLICKED(IDC_BTN_CAPTURE, OnBtnCapture)
	ON_WM_TIMER()
	ON_WM_CLOSE()
	ON_NOTIFY(NM_DBLCLK, IDC_LIST_CHANNEL, OnDblclkListChannel)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_LIST_ALL_LOG, OnNMCustomdrawList)
	ON_WM_ERASEBKGND()
	ON_BN_CLICKED(IDC_CHECK_DISCONNECT, OnCheckDisconnect)
	ON_BN_CLICKED(IDC_BTN_RECORD, OnBtnRecord)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_NCPAINT()
	ON_WM_ACTIVATE()
	ON_WM_NCMOUSEMOVE()
	ON_WM_NCLBUTTONDOWN()
	ON_WM_NCLBUTTONUP()
	ON_BN_CLICKED(IDC_CHECK_AUDIO, OnCheckAudio)
	ON_BN_CLICKED(IDC_BTN_PLAY_RECORD, OnBtnPlayRecord)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST_ALL_LOG, OnDblclkListAllLog)
	ON_BN_CLICKED(IDC_SHOW_HIDE, OnShowHide)
	ON_WM_MOUSEMOVE()
	ON_MESSAGE(WM_SEND_CONNECT,OnSendConnect)
	ON_BN_CLICKED(IDC_BLOAD_CAST, OnBloadcast)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVideoIntercomClientDlg message handlers

BOOL CVideoIntercomClientDlg::OnInitDialog()
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
//	ScreenToClient(&m_ButtMinTips);//
	g_pMainDlg = this;

	// TODO: Add extra initialization here
	InitMainFrm();
	InitData();
	SetTimer(1,3000,0);//定时检测网络连接
	SetTimer(2,250,0);//定时检测通道状态
	RemoveDialogSkin();
//	m_BMPPressed=FALSE;//绘制按钮按下时的状态
//	DrawButton(); //绘制最小化按钮         
//	m_BMPPressed=TRUE;//绘制按钮的正常状态   
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CVideoIntercomClientDlg::InitMainFrm()
{
	CButton *pButton;
	RemoveWindowSkin(GetDlgItem(IDC_CHECK_AUDIO)->m_hWnd);
	RemoveWindowSkin(GetDlgItem(IDC_CHECK_DISCONNECT)->m_hWnd);
//	RemoveWindowSkin(GetDlgItem(IDC_BTN_CAPTURE)->m_hWnd);
	m_bitmap.LoadBitmap(IDB_BACK);
	m_hCaptureIcon=AfxGetApp()-> LoadIcon(IDI_PIC1);
	m_Anitmate.Open(IDR_AVI1);
	
	pButton = (CButton *)GetDlgItem(IDC_BTN_CAPTURE); 
	pButton->SetIcon(m_hCaptureIcon);

	CFont*   font   =   GetFont();   
	LOGFONT   lf;
	font->GetLogFont(&lf);
	lf.lfHeight = 14;
	lf.lfWeight   =   FW_BOLD;  
	strcpy(lf.lfFaceName,   "宋体"); 
	m_fontListChannel.CreateFontIndirect(&lf);
	GetDlgItem(IDC_LIST_CHANNEL)->SetFont(&m_fontListChannel);
	
	lf.lfHeight = 14;
	lf.lfWeight   =   FW_NORMAL;  
	strcpy(lf.lfFaceName,   "宋体"); 
	m_fontListLog.CreateFontIndirect(&lf);
	GetDlgItem(IDC_LIST_ALL_LOG)->SetFont(&m_fontListLog);

	HICON   hIcon; 
	m_imlist.Create(48,48,ILC_COLOR32,10,30);
	m_listChannel.SetImageList(&m_imlist,LVSIL_NORMAL );
	hIcon=AfxGetApp()-> LoadIcon(IDI_ICON6); 
	m_imlist.Add(hIcon);
		hIcon=AfxGetApp()-> LoadIcon(IDI_ICON5);
	m_imlist.Add(hIcon);
			hIcon=AfxGetApp()-> LoadIcon(IDI_ICON4);
	m_imlist.Add(hIcon);
	

	m_listAllLog.InsertColumn(0, "", LVCFMT_LEFT, 0, -1); 
	m_listAllLog.InsertColumn(1, "时间", LVCFMT_LEFT, 140);
	m_listAllLog.InsertColumn(2, "类型", LVCFMT_LEFT, 80);
	m_listAllLog.InsertColumn(3, "操作信息", LVCFMT_LEFT, 430);
	m_listAllLog.InsertColumn(4, "设备信息", LVCFMT_LEFT, 130);
	m_listAllLog.SetExtendedStyle(m_listAllLog.GetExtendedStyle()|LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT|LVS_EX_SUBITEMIMAGES);
	CRect rc;
	GetClientRect(&rc);
		if(!m_clock.Create("",WS_CHILD|WS_VISIBLE,CRect(rc.right - 145,5,rc.right - 10,55),this))
	{
		return ;
	}//动态创建时间控件	
	m_clock.SetStyle(CLEDClock::XDC_SECOND);
}


void CVideoIntercomClientDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CVideoIntercomClientDlg::OnPaint() 
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
HCURSOR CVideoIntercomClientDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

/*********************************************************
函数:	OnEraseBkgnd
描述:	背景设置
输入:	pDC 绘图DC
输出:	none
返回:	true 成功 false 失败
**********************************************************/
BOOL CVideoIntercomClientDlg::OnEraseBkgnd( CDC* pDC )
{
	CDC dc;   
     dc.CreateCompatibleDC(pDC);   
     dc.SelectObject(&m_bitmap);   
   
     //获取BITMAP对象   
     BITMAP hb;   
     m_bitmap.GetBitmap(&hb);   
   
     //获取窗口大小   
     CRect rt;   
     GetClientRect(&rt);   
     //显示位图   
     pDC->StretchBlt(0, 0, rt.Width(), rt.Height(),   
         &dc, 0, 0, hb.bmWidth, hb.bmHeight, SRCCOPY);   
   
     return  CDialog::OnEraseBkgnd(pDC);

}

HBRUSH CVideoIntercomClientDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
 // TODO: Change any attributes of the DC here
		switch   (nCtlColor)     
	{                 
/*	case   CTLCOLOR_STATIC:   //静态文本         
		{       
			pDC->SetBkMode(TRANSPARENT);                 
			//HBRUSH   B   =   CreateSolidBrush(RGB(233,   233,   233));   //控件背景颜色   
		//	pDC->SetTextColor(RGB(26,167,250));   //控件中的文字的颜色   
			pDC->SetTextColor(RGB(229,88,5));   //控件中的文字的颜色
			return   hbr;   
		}*/
	   case   CTLCOLOR_BTN://按钮？ 
		   pDC->SetBkMode(TRANSPARENT); 
			   	pDC->SetTextColor(RGB(229,88,5));   //控件中的文字的颜色
				return   (HBRUSH)::GetStockObject(HOLLOW_BRUSH); 
		   case   CTLCOLOR_STATIC://我们所需要改画的静态  
			   pDC->SetBkMode(TRANSPARENT); 
			   	pDC->SetTextColor(RGB(229,88,5));   //控件中的文字的颜色
				return   (HBRUSH)::GetStockObject(HOLLOW_BRUSH); 
		   case   CTLCOLOR_DLG:                     
			   {                             
				   pDC->SetBkMode(TRANSPARENT); 
				   	return   (HBRUSH)::GetStockObject(HOLLOW_BRUSH); 
			   }     
	case   CTLCOLOR_LISTBOX://列表框   
		{   
			pDC->SetBkMode(TRANSPARENT);                 
			HBRUSH   B   =   CreateSolidBrush(RGB(233,   233,   233));   //控件背景颜色   
		//	pDC->SetTextColor(RGB(26,167,250));   //控件中的文字的颜色   
			pDC->SetTextColor(RGB(229,88,5));   //控件中的文字的颜色
			return   (HBRUSH)   B;      
		}               
	case   CTLCOLOR_EDIT   :   //文本编辑框   
		{         
			pDC->SetBkMode(TRANSPARENT);                       
			HBRUSH   B   =   CreateSolidBrush(RGB(0,  0,   0));         
			pDC->SetTextColor(RGB(255,0,0));         
			return   (HBRUSH)   B;   
		}         
	default:   
		{       
		//	 pDC->SetBkMode(TRANSPARENT);   

			return  hbr;   
		}            
	  
	}    
	return   (HBRUSH)::GetStockObject(HOLLOW_BRUSH);   
}

/*********************************************************
函数:	StartPlay
描述:	开始可视对讲
输入:	iDeviceIndex 设备编号
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::StartPlay(int iDeviceIndex)
{
	if(iDeviceIndex > 50 || iDeviceIndex < 0 ) return;
	CString msg = "";
	NET_DVR_DEVICEINFO_V30 struDeviceInfo;
	lUserID= NET_DVR_Login_V30(m_struDeviceInfo.chDeviceIP,8000,"admin","12345",&struDeviceInfo);
	if(lUserID < 0 )
	{
		char szLan[1024] = {0};
		if (NET_DVR_GetLastError() == NET_DVR_PASSWORD_ERROR)
		{
			AddLog("FAIL","用户名密码错误!",m_struChannelInfo[iDeviceIndex].chChanName);
			MessageBox("用户名密码错误!","可视对讲",MB_ICONINFORMATION);
		//	g_StringLanType(szLan, "用户名密码错误!", "user name or password error!");
	//		AfxMessageBox(szLan);
		}
		else
		{		
			AddLog("FAIL","由于网络原因或其他原因, 注册失败!",m_struChannelInfo[iDeviceIndex].chChanName);
					MessageBox("由于网络原因或其他原因, 注册失败!","可视对讲",MB_ICONINFORMATION);
			//	g_StringLanType(szLan, "由于网络原因或DVR忙, 注册失败!", "net error or dvr is busy!");
		//	AfxMessageBox(szLan);
		}
		msg.Format("[CONNECT|FAILED|%d]",m_struDeviceInfo.iDeviceIndex);
				m_struConsoleInfo.bConChannel = false;
				m_struConsoleInfo.bLocalManualRec = false;
				m_struConsoleInfo.channelIndex = -1;
				m_struDeviceInfo.chDeviceIP[0] = '\0';
				m_struDeviceInfo.iDeviceIndex = -1;
				SendData(msg,msg.GetLength());
		return ;
	}	m_struDeviceInfo.lLoginID = lUserID;
/*	m_struDeviceInfo.iDeviceIndex = 0;
	m_struDeviceInfo.dwImageType = DEVICE_LOGIN;
	LOCAL_DEVICE_INFO temp, temp1;
	//initialize the information of device
	memcpy(&temp1, &(m_struDeviceInfo), sizeof(LOCAL_DEVICE_INFO));
	memcpy(&(m_struDeviceInfo), &temp, sizeof(LOCAL_DEVICE_INFO));
	
	m_struDeviceInfo.lLoginID = lUserID;// located ID from re-log in
	m_struDeviceInfo.iDeviceIndex = 0;
	sprintf(m_struDeviceInfo.chDeviceIP, "%s", temp1.chDeviceIP);
	sprintf(m_struDeviceInfo.chLocalNodeName, "%s", temp1.chLocalNodeName);
	m_struDeviceInfo.lDevicePort = temp1.lDevicePort;
	
	sprintf(m_struDeviceInfo.chLoginPwd, "%s", temp1.chLoginPwd);
	sprintf(m_struDeviceInfo.chLoginUserName, "%s", temp1.chLoginUserName);
	sprintf(m_struDeviceInfo.chLoginUserName, "%s", temp1.chLoginUserName);
	
	m_struDeviceInfo.dwImageType = DEVICE_LOGIN;
	m_struDeviceInfo.lLoginID = lUserID;
	sprintf(m_struDeviceInfo.chSerialNumber, "%s", struDeviceInfo.sSerialNumber);
	m_struDeviceInfo.iDeviceType = struDeviceInfo.byDVRType;
	m_struDeviceInfo.iDeviceChanNum = struDeviceInfo.byChanNum;
	m_struDeviceInfo.iStartChan = struDeviceInfo.byStartChan;
	m_struDeviceInfo.iDiskNum = struDeviceInfo.byDiskNum;
	m_struDeviceInfo.iAlarmOutNum = struDeviceInfo.byAlarmOutPortNum;
	m_struDeviceInfo.iAlarmInNum = struDeviceInfo.byAlarmInPortNum;
	m_struDeviceInfo.iAudioNum = struDeviceInfo.byAudioChanNum;
	m_struDeviceInfo.iIPChanNum = struDeviceInfo.byIPChanNum;*/

	NET_DVR_CLIENTINFO struPlayInfo;
	memset(&struPlayInfo, 0, sizeof(NET_DVR_CLIENTINFO));

	struPlayInfo.hPlayWnd = GetDlgItem(IDC_PIC1)->GetSafeHwnd();	
	struPlayInfo.lChannel =  1;
	//	struPlayInfo.lLinkMode = g_struDeviceInfo[iDeviceIndex].struChanInfo[iChanIndex].dwProtocol;
	//	struPlayInfo.sMultiCastIP = g_struDeviceInfo[iDeviceIndex].chDeviceMultiIP;
	
	m_lVoiceHandle = NET_DVR_StartVoiceCom_V30(m_struDeviceInfo.lLoginID,1,true,fAudioTalkDataCallBack,NULL);

	if (m_lVoiceHandle == -1)
	{	
		AddLog("FAIL","语音对讲打开失败!",m_struChannelInfo[iDeviceIndex].chChanName);
		AfxMessageBox("语音对讲打开失败");	
		msg.Format("[CONNECT|FAILED|%d]",iDeviceIndex);
	}
	else
	{
		m_Anitmate.Play(0,-1,-1);
		if(!m_iPlayMode)//只语音不视频
		{
			m_lPlayHandle = NET_DVR_RealPlay_V30(m_struDeviceInfo.lLoginID,&struPlayInfo,NULL,NULL,TRUE);
			if (m_lPlayHandle == -1) 
			{
				AddLog("FAIL","图像预览失败!",m_struChannelInfo[iDeviceIndex].chChanName);
				msg.Format("[CONNECT|FAILED|%d]",iDeviceIndex);
				
				//      return ;
			}
			else
			{
				m_struConsoleInfo.channelIndex = iDeviceIndex;
				m_struConsoleInfo.bConChannel = true;
				m_struConsoleInfo.bLocalManualRec = true;
				msg.Format("[CONNECT|SUCCESS|%d]",iDeviceIndex);
			}
		}
		m_struConsoleInfo.bConChannel = true;
		m_struConsoleInfo.bLocalManualRec = true;
		m_iConnectIndex = 0;
		AddLog("SUCC","连接到语音设备成功!",m_struChannelInfo[iDeviceIndex].chChanName);
        msg.Format("[CONNECT|SUCCESS|%d]",iDeviceIndex);
	}
	SendData(msg,msg.GetLength());
}

/*********************************************************
函数:	OnBtnCapture
描述:	关闭可视对讲
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::StopPlay()
{
	CString msg  = "";
	if(m_bStartRecord) OnBtnRecord();
	if(m_struConsoleInfo.bConChannel)
	{
		if(!NET_DVR_StopVoiceCom(m_lVoiceHandle))
			MessageBox("语音对讲关闭失败");
		else
		{
			m_Anitmate.Stop();
			AddLog("SUCC","断开语音设备!",m_struChannelInfo[m_struDeviceInfo.iDeviceIndex].chChanName);
			msg.Format("[CONNECT|END|%d]",m_struDeviceInfo.iDeviceIndex);
				m_struConsoleInfo.bConChannel = false;
				m_struConsoleInfo.bLocalManualRec = false;
				m_struConsoleInfo.channelIndex = -1;
				m_struDeviceInfo.chDeviceIP[0] = '\0';
				m_struDeviceInfo.iDeviceIndex = -1;
				Invalidate();
				SendData(msg,msg.GetLength());
		}
		if(m_lPlayHandle >= 0 )
		{
			if (!NET_DVR_StopRealPlay(m_lPlayHandle))
			{
				MessageBox("failed to stop");
			}
			else
			{
			m_lPlayHandle = -1;
				//	MessageBox("failed to stop");
			}
		}
			if (NET_DVR_Logout_V30(lUserID))//退出登录失败
		{
			//g_struDeviceInfo[iDeviceIndex].lLoginID = -1;
			lUserID= -1;	
		}
	}
	else
	{
		
	}
}


/*********************************************************
函数:	OnBtnCapture
描述:	关闭可视对讲按钮事件
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::OnClosevideo() 
{
	// TODO: Add your control notification handler code here
	/**/if(m_struConsoleInfo.bConChannel)
	{	
		StopPlay();
	}
	else
	{
		MessageBox("当前没有视频连接","可视对讲",MB_ICONINFORMATION);
	}
//	SendMessage(WM_SYSCOMMAND, SC_MINIMIZE, NULL);
}

/*********************************************************
函数:	OnBtnCapture
描述:	视频截图
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::OnBtnCapture() 
{
	// TODO: Add your control notification handler code here
	CString strLog;
	if(!m_struConsoleInfo.bConChannel)
	{
		
		AddLog("FAIL","没有连接到通道,请连接后截图!!",strLog);
		MessageBox("没有连接到通道,请连接后截图!!","可视对讲",MB_ICONWARNING );
		return;
	}	
	char cFilename[256] = {0};
	CTime time = CTime::GetCurrentTime();
	DWORD dwDirAttr;
	CString sTemp = "";
	sTemp.Format("%s\\%4d_%02d_%02d",m_strRecordPath,	time.GetYear(),time.GetMonth(), time.GetDay());
	dwDirAttr = GetFileAttributes(sTemp);
	if ((dwDirAttr == -1) || !(dwDirAttr & FILE_ATTRIBUTE_DIRECTORY))//目录不存在则创建目录
	{
		if (!CreateDirectory(sTemp, NULL))
		{
			AddLog("FAIL", "截图失败 创建年月日目录失败",m_struChannelInfo[m_struDeviceInfo.iDeviceIndex].chChanName);
			AfxMessageBox("创建年月日目录失败");
			return ;
		}	
	}

	NET_DVR_JPEGPARA struJpegPara;
	memset(&struJpegPara, 0, sizeof(NET_DVR_JPEGPARA));
	struJpegPara.wPicQuality = 0;
	struJpegPara.wPicSize = 0;
    sprintf(cFilename, "%s\\%4d_%02d_%02d\\JPEG_%s_%4d%02d%02d_%02d%02d%02d_%d.jpg",m_strPicPath,	
		time.GetYear(),time.GetMonth(), time.GetDay(), m_struDeviceInfo.chDeviceIP,	\
		time.GetYear(), time.GetMonth(), time.GetDay(), \
		time.GetHour(), time.GetMinute(), time.GetSecond(), GetTickCount());
	
	if (NET_DVR_CaptureJPEGPicture(m_struDeviceInfo.lLoginID, 1, &struJpegPara, cFilename))
	{
		strLog.Format("截图成功 路径为:%s",cFilename);
		AddLog("SUCC",strLog,m_struChannelInfo[m_struDeviceInfo.iDeviceIndex].chChanName);
		//			AfxMessageBox(sTemp); 
		return;
	}
	else
	{
		//	g_pMainDlg->AddLog(iDeviceIndex, OPERATION_FAIL_T, "NET_DVR_CaptureJPEGPicture");
		//	AfxMessageBox("JPEG capture failed!");
		AddLog("FAIL","截图失败!!",m_struDeviceInfo.chDeviceIP);
		MessageBox("截图失败!!","可视对讲",MB_ICONINFORMATION );
	}
	
}

/*********************************************************
函数:	DecodeVeidoSrv
描述:	解析来自服务端的数据
输入:	buff 信息内容，len  信息长度
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::DecodeVeidoSrv(const char *buff, int len)
{
	if(len <=1)
		return;
	CString m_strConsoleRev = buff;
	
	int i ,nCount ,iUpdateChannel,iDeviceIndex = -1,nLen = 0,index = 0,index1 = 0;//nCount 记录分隔符|数量 iDevieIndex 设备通道编号
	//iUpdateChannel 需要更新的通道数量
	//
	CString Temp = "",Temp1 = "",msg = "",msgTemp = "";
	if(m_strConsoleRev.Find('[') >= 0 && m_strConsoleRev.Find(']') >= 1)
	{
		if(m_strConsoleRev.Find(']') <m_strConsoleRev.ReverseFind(']'))//循环去[]里面的数据
			DecodeVeidoSrv(m_strConsoleRev.Mid(m_strConsoleRev.Find('['),m_strConsoleRev.ReverseFind('[')-m_strConsoleRev.Find('[')),
			m_strConsoleRev.ReverseFind('[')-m_strConsoleRev.Find('['));
		m_strConsoleRev = m_strConsoleRev.Mid(m_strConsoleRev.ReverseFind('['),m_strConsoleRev.ReverseFind(']')-m_strConsoleRev.ReverseFind('[')+1);
		nCount = CountChar(m_strConsoleRev,'|');
		switch(nCount)
		{
		case 0:
			Temp = m_strConsoleRev.Mid(1,m_strConsoleRev.GetLength()-2);
			if(Temp.Find("CLEAR")>=0)//客户端状态清零
			{		
				StopPlay();
				m_struConsoleInfo.bConChannel = false;
				m_struConsoleInfo.bLocalManualRec = false;
				m_struConsoleInfo.channelIndex = -1;
				SendData("[READCHANNELINFO]",strlen("[READCHANNELINFO]")+1);
			}
			else if(Temp.GetAt(0) == 'R')
			{
				
			}
			break;
		case 1:
			Temp = m_strConsoleRev.Mid(1,m_strConsoleRev.Find('|')-1);
			if(Temp.Find("BLOADCAST")>=0)//收到IO单键报警
			{
				Temp = m_strConsoleRev.Mid(m_strConsoleRev.Find('|')+1,
					m_strConsoleRev.ReverseFind(']')-m_strConsoleRev.Find('|')-1);
				if(Temp.Find("OK")>=0)
					BloadCast();
				else if(Temp.Find("ALLSTOP")>=0)
				{
					if(m_bBloadCast)
						BloadCast();
				}
				else
				{
					AddLog("FAIL",Temp,"ALL DEVICE");
					MessageBox(Temp,"可视对讲",MB_ICONINFORMATION);
				}
			}
			break;
		case 2:
			Temp = m_strConsoleRev.Mid(1,m_strConsoleRev.Find('|')-1);
			if(Temp.Find("ALARM")>=0)//收到IO单键报警
			{
				Temp = m_strConsoleRev.Mid(m_strConsoleRev.Find('|')+1,
					m_strConsoleRev.ReverseFind('|')-m_strConsoleRev.Find('|')-1);
				if(Temp.Find("STOP")>=0)
				{
					Temp = m_strConsoleRev.Mid(m_strConsoleRev.ReverseFind('|')+1,
						m_strConsoleRev.GetLength()-m_strConsoleRev.ReverseFind('|')-2);
					iDeviceIndex = atoi(Temp);
					AlarmStop(iDeviceIndex);
				}
				else
				{
					iDeviceIndex = atoi(Temp);
					Temp = m_strConsoleRev.Mid(m_strConsoleRev.ReverseFind('|')+1,
						m_strConsoleRev.GetLength()-m_strConsoleRev.ReverseFind('|')-2);
					strcpy(m_struDeviceInfo.chDeviceIP,Temp);
					m_struDeviceInfo.iDeviceIndex = iDeviceIndex;
					AlarmStart(iDeviceIndex);
				}
			}
			else if(Temp.Find("CONNECT") >= 0 )
			{
				Temp = m_strConsoleRev.Mid(m_strConsoleRev.Find('|')+1,
					m_strConsoleRev.ReverseFind('|')-m_strConsoleRev.Find('|')-1);
				if(Temp.Find("REQUEST")>=0)
				{
					Temp = m_strConsoleRev.Mid(m_strConsoleRev.ReverseFind('|')+1,
						m_strConsoleRev.GetLength()-m_strConsoleRev.ReverseFind('|')-2);
					MessageBox(Temp,"可视对讲",MB_ICONINFORMATION);
				}
			}
			else if(Temp.Find("CHANNELINFO") >= 0 )//更新通道信息
			{
				Temp = m_strConsoleRev.Mid(m_strConsoleRev.Find('|')+1,
					m_strConsoleRev.ReverseFind('|')-m_strConsoleRev.Find('|')-1);
				m_iHasChannel = atoi(Temp);//当前的通道数量
				ASSERT(m_iHasChannel);
				index = m_strConsoleRev.ReverseFind('|')+1;
				iUpdateChannel = CountChar(m_strConsoleRev,'+');
				for(i = 0; i <iUpdateChannel;i++)
				{
					Temp = m_strConsoleRev.Mid(index,m_strConsoleRev.Find('+',index)-index);
					Temp1 = Temp.Mid(0,Temp.Find(':'));					
					
					index1 = Temp.Find(':')+1;
					iDeviceIndex= atoi(Temp.Mid(index1,Temp.Find(':',index1)-index1));
					m_struChannelInfo[iDeviceIndex].iChanIndex = iDeviceIndex;
					strcpy(m_struChannelInfo[iDeviceIndex].chChanName,Temp1);

					if(Temp.Find('.',index1)>=0)
					{
					index1 = Temp.Find(':',index1)+1;
					Temp1 = Temp.Mid(index1,Temp.Find(':',index1)-index1);
					strcpy(m_struChannelInfo[iDeviceIndex].chAccessChanIP,Temp1);
					}
					index1 = Temp.Find(':',index1)+1;
					m_struChannelInfo[iDeviceIndex].bAlarm = atoi(Temp.Mid(index1,1)) == 1?TRUE:FALSE;

					index1 = Temp.Find(':',index1)+1;
					m_struChannelInfo[iDeviceIndex].bLocalManualRec = atoi(Temp.Mid(index1,1)) == 1?TRUE:FALSE;
					index = m_strConsoleRev.Find('+',index)+1;
					UpdateChannelStatus(iDeviceIndex);
				}
				
			}
			break;
		case 3:
			//接受客户端的可视对讲请求
			//[CONNECT|CHANNEL|NO|IP]
			//NO:通道编号
			//IP:通道IP地址

			Temp = m_strConsoleRev.Mid(1,m_strConsoleRev.Find('|')-1);
			if(Temp.Find("CONNECT") >= 0 )
			{
				index = m_strConsoleRev.Find('|')+1;
				Temp = m_strConsoleRev.Mid(m_strConsoleRev.Find('|')+1,
					m_strConsoleRev.Find('|',index)-m_strConsoleRev.Find('|')-1);
				if(Temp.Find("CHANNEL")>=0)
				{
					index = m_strConsoleRev.Find('|',index)+1;
					Temp = m_strConsoleRev.Mid(index,m_strConsoleRev.Find('|',index)-index);
					iDeviceIndex = atoi(Temp);
					Temp = m_strConsoleRev.Mid(m_strConsoleRev.ReverseFind('|')+1,
						m_strConsoleRev.GetLength()-m_strConsoleRev.ReverseFind('|')-2);
					m_struDeviceInfo.iDeviceIndex = iDeviceIndex;
					strcpy(m_struDeviceInfo.chDeviceIP,Temp);
			
					StartPlay(iDeviceIndex);
				}
			}
			break;
		default:
			break;
		}
	}
	m_strConsoleRev = "";
}

/*********************************************************
函数:	CountChar
描述:	计算字符串中某一字符的个数
输入:	temp目标字符串，ch 目标字符
输出:	none
返回:	int 字符出现个数
**********************************************************/
int CVideoIntercomClientDlg::CountChar(CString &temp, char ch)
{
	int count = 0;
	for(int i = 0 ;i<temp.GetLength();i++)
	{
		if(temp.GetAt(i) == ch)
			count++;
	}
	return count;
}

/*********************************************************
函数:	ProcessClose
描述:	网络连接断开
输入:	iPort 编号
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::ProcessClose(int iPort)
{
	AddLog("FAIL","服务端断开!",m_struConsoleInfo.chVideoSrvIP);
	m_struConsoleInfo.bConnected = false;
	m_struConsoleInfo.bLocalManualRec = false;
	m_struConsoleInfo.pConsoleClient->bConnected = false;
	for(int i = 0;i<MAXCHANNEL;i++)
	{
		if(m_struChannelInfo[i].bAlarm||m_struChannelInfo[i].bLocalManualRec)
		{
			m_struChannelInfo[i].bAlarm = false;
			m_struChannelInfo[i].bLocalManualRec = false;
			UpdateChannelStatus(i);
			
		}
	}
	StopPlay();

}

/*********************************************************
函数:	ProcessRcv
描述:	接受来自网络连接的数据
输入:	iPort 编号
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::ProcessRcv(int iPort)
{
	
	char buff[4096] = {0};	
	int len = m_struConsoleInfo.pConsoleClient->Receive(buff,4096);
	if(len>1)
		DecodeVeidoSrv(buff,len);
}

/*********************************************************
函数:	InitData
描述:	数据初始化
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::InitData()
{
	CIniFile inifile;
	inifile.OpenFile("VIClient.ini");
	CString strTemp;
	strTemp= inifile.ReadString("SYSTEM","IP","127.0.0.1");
	strcpy(m_struConsoleInfo.chVideoSrvIP,strTemp);
	m_strRecordPath = inifile.ReadString("SYSTEM","RecordPath","d:");
	m_strPicPath = inifile.ReadString("SYSTEM","PicPath","d:");
	m_iConnectTime = inifile.ReadInteger("SYSTEM","ConnectTime",1);
	m_iConnectTime *= 60; 
	m_struConsoleInfo.pConsoleClient = new CClient();
	m_struConsoleInfo.pConsoleClient->Create();
	m_struConsoleInfo.pConsoleClient->Connect(m_struConsoleInfo.chVideoSrvIP,34000);
}

/*********************************************************
函数:	OnTimer
描述:	定时器
输入:	nIDEvent 定时器编号
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CString Temp = "";
	int len  = -1;
	switch(nIDEvent)
	{
	case 1:
		if(!m_struConsoleInfo.bConnected)
		{
			delete m_struConsoleInfo.pConsoleClient;
			m_struConsoleInfo.pConsoleClient = new CClient();
			m_struConsoleInfo.pConsoleClient->Create();
			m_struConsoleInfo.pConsoleClient->Connect(m_struConsoleInfo.chVideoSrvIP,34000);
		}
		else
		{
			len = m_struConsoleInfo.pConsoleClient->Send("t",1,0);
			if(len<=0)
			{
				m_struConsoleInfo.pConsoleClient->bConnected = false;
				m_struConsoleInfo.bConnected = false;
			}
		}
		break;
	case 2:
		if(m_struConsoleInfo.bConChannel &&m_bCheckConnect)
		{
			m_iConnectIndex++;
			if(m_iConnectIndex >=m_iConnectTime*4)
			{
				StopPlay();

			}
		}
		if (m_bMin)
		{
			SendMessage(WM_SYSCOMMAND,SC_MINIMIZE,NULL);
			m_bMin = false;
		}
		break;
	default:
		break;
	}
	CDialog::OnTimer(nIDEvent);
}

/*********************************************************
函数:	OnClose
描述:	关闭系统
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::OnClose() 
{
	// TODO: Add your message handler code here and/or call default
	OnShowHide();
}

/*********************************************************
函数:	SendData
描述:	发送信息到服务端
输入:	buff 信息内容，len  信息长度
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::SendData(const char *buff, int len)
{
	if(m_struConsoleInfo.pConsoleClient->bConnected)
		m_struConsoleInfo.pConsoleClient->Send(buff,len);
	else
	{
		AddLog("FAIL","没有连接到服务端!",m_struConsoleInfo.chVideoSrvIP);
	//	MessageBox("没有连接到服务端,数据发送失败!");
	}
}

/*********************************************************
函数:	AlarmStart
描述:	开始报警
输入:	iDeviceIndex 设备 编号
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::AlarmStart(int iDeviceIndex)
{
	if(!m_struConsoleInfo.bLocalManualRec&&!m_bShowAlarmHint)
	{
		m_bShowAlarmHint = true;
		CString strLog;
		strLog.Format("%s+%s",m_struChannelInfo[iDeviceIndex].chChanName,m_struDeviceInfo.chDeviceIP);
		AddLog("ALARM","通道单键报警，等待用户处理...",strLog);
		strLog.Format("是否接受来自%s的呼叫请求......",m_struChannelInfo[iDeviceIndex].chChanName);
		m_alarmDlg.m_strAlarmInfo = strLog;
		m_alarmDlg.DoModal();
		
	}
}

/*********************************************************
函数:	AlarmStop
描述:	停止报警
输入:	iDeviceIndex 设备 编号
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::AlarmStop(int iDeviceIndex)
{
	if(m_bShowAlarmHint)
	{
		CString strLog;
		strLog.Format("%s+%s",m_struChannelInfo[iDeviceIndex].chChanName,m_struDeviceInfo.chDeviceIP);
		AddLog("ALARM","通道单键报警结束!",strLog);
		m_struDeviceInfo.bAlarm = false;
		m_struDeviceInfo.iDeviceIndex =  -1;
		m_struDeviceInfo.chDeviceIP[0] = '\0';
		m_alarmDlg.Close();
	}
}

/*********************************************************
函数:	OnSendConnect
描述:	接受来自通道的连接后发送请求到服务端
输入:	wParam,  lParam
输出:	none
返回:	LERSULT 结果
**********************************************************/
LRESULT CVideoIntercomClientDlg::OnSendConnect(WPARAM wParam, LPARAM lParam)
{
	CString msg = "";
	msg.Format("[CONNECT|CHANNEL|%d]",m_struDeviceInfo.iDeviceIndex);
	SendData(msg,msg.GetLength());
	m_struDeviceInfo.bAlarm = false;
	m_struConsoleInfo.bLocalManualRec = true;
	return NULL;
}

void CVideoIntercomClientDlg::OnDblclkListChannel(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
		if(!CheckConnectedSrv())return;
    NMLISTVIEW*   pp=   (NMLISTVIEW*)pNMHDR; 
	CString temp  = "",msg = "";
	temp = m_listChannel.GetItemText(pp->iItem,pp->iSubItem);
	int iDeviceIndex = pp->iItem;  
	if(iDeviceIndex < 0 ) return ;
	if(m_struConsoleInfo.bConChannel)
	{
		if(m_struDeviceInfo.iDeviceIndex == iDeviceIndex)
		{
			OnClosevideo();
			return;
		}
		else
		{
		AddLog("FAIL","当前用户处于连接状态，请先断开在连接!",m_struDeviceInfo.chDeviceIP);
		MessageBox("当前用户处于连接状态，\r\n请先断开在连接!","可视对讲",MB_ICONINFORMATION);
		return;
		}
	}
    
	msg.Format("[CONNECT|CHANNEL|%d]",iDeviceIndex);
	SendData(msg,msg.GetLength());
	*pResult = 0;
}

/*********************************************************
函数:	UpdateChannelStatus
描述:	更新通道状态信息
输入:	iChannelIndex 设备编号
输出:	none
返回:	none
**********************************************************/
VOID CVideoIntercomClientDlg::UpdateChannelStatus(int iChannelIndex)
{
	m_listChannel.SetRedraw(FALSE);
	
	if(iChannelIndex <0 ) return;
	int nCount  = m_listChannel.GetItemCount();
	if(m_struChannelInfo[iChannelIndex].bAlarm)
	{
		if(nCount < m_iHasChannel)
			m_listChannel.InsertItem(iChannelIndex,m_struChannelInfo[iChannelIndex].chChanName,0);
		LV_ITEM lvi; 
		
		lvi.iItem = iChannelIndex; 
		lvi.iSubItem = 0; 
		lvi.mask = LVIF_IMAGE; 
		
		VERIFY( m_listChannel.GetItem( &lvi ) ); 
		lvi.iImage = 2;
		m_listChannel.SetItem(&lvi);
		//	m_listChannel.SetItem(iChannelIndex,0,0,m_struChannelInfo[iChannelIndex].chChanName,2,0,0,NULL);
	}
	else if(m_struChannelInfo[iChannelIndex].bLocalManualRec)
	{
		if(nCount < m_iHasChannel)
			m_listChannel.InsertItem(iChannelIndex,m_struChannelInfo[iChannelIndex].chChanName,0);
		LV_ITEM lvi; 
		
		lvi.iItem = iChannelIndex; 
		lvi.iSubItem = 0; 
		lvi.mask = LVIF_IMAGE; 
		
		m_listChannel.GetItem( &lvi ) ; 
		lvi.iImage = 1;
		m_listChannel.SetItem(&lvi);
		
		//	m_listChannel.InsertItem(iChannelIndex,m_struChannelInfo[iChannelIndex].chChanName,1);
	}
	else
	{
		if(nCount < m_iHasChannel&&iChannelIndex>=nCount)
		{
			m_listChannel.InsertItem(iChannelIndex,m_struChannelInfo[iChannelIndex].chChanName,0);
		}
		else if (nCount == m_iHasChannel)
		{
			LV_ITEM lvi; 
			
			lvi.iItem = iChannelIndex; 
			lvi.iSubItem = 0; 
			lvi.mask = LVIF_IMAGE; 
			
			m_listChannel.GetItem( &lvi ) ; 
			lvi.iImage = 0;
			m_listChannel.SetItem(&lvi);
		}
		else
		{
			for(int i = m_iHasChannel; i<=nCount;i++)
				m_listChannel.DeleteItem(i);
		}
	}
	//更新内容
	m_listChannel.SetRedraw(TRUE);
	m_listChannel.Invalidate();
	m_listChannel.UpdateWindow();
}

/*********************************************************
函数:	AddLog
描述:	写入日志信息
输入:	strType 信息类型  strInfo 信息内容 strDevice 设备名称
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::AddLog( const char *strType, const char *strInfo,const char *strDevice)
{
	char szTime[64] = {0};
	int n = m_listAllLog.GetItemCount();
	if(n>300)
		m_listAllLog.DeleteAllItems();
	CTime cTime = CTime::GetCurrentTime();
	sprintf(szTime, "%s", cTime.Format("%y-%m-%d %H:%M:%S").GetBuffer(0));
	m_listAllLog.InsertItem(0, "", -1);
	m_listAllLog.SetItemText(0, 1, szTime);	
	m_listAllLog.SetItemText(0, 2, strType);
	m_listAllLog.SetItemText(0, 3, strInfo);
	m_listAllLog.SetItemText(0, 4, strDevice);
	//	m_listAllLog
}


void CVideoIntercomClientDlg::OnCheckDisconnect() 
{
	// TODO: Add your control notification handler code here
	m_bCheckConnect = ((CButton*)GetDlgItem(IDC_CHECK_DISCONNECT))->GetCheck() == 1?true:false;
}

/*********************************************************
函数:	OnNMCustomdrawList
描述:	Lisctrl控件背景颜色设置
输入:	pNMHDR listctrl控件信息 pResult  
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::OnNMCustomdrawList(NMHDR *pNMHDR, LRESULT *pResult)
{
	NMLVCUSTOMDRAW* pLVCD = reinterpret_cast<NMLVCUSTOMDRAW*>(pNMHDR);

*pResult = CDRF_DODEFAULT;

if( CDDS_PREPAINT == pLVCD->nmcd.dwDrawStage){
   *pResult = CDRF_NOTIFYITEMDRAW;
}else if( CDDS_ITEMPREPAINT == pLVCD->nmcd.dwDrawStage){
   *pResult = CDRF_NOTIFYSUBITEMDRAW;
}else if ( (CDDS_ITEMPREPAINT | CDDS_SUBITEM) == pLVCD->nmcd.dwDrawStage){
   COLORREF clrNewTextColor, clrNewBkColor;

   int nItem = static_cast<int>(pLVCD->nmcd.dwItemSpec);//取得当前的行号

   clrNewTextColor = RGB( 255, 0, 0 );//设置字体颜色为红色

   //设置背景色
   if(nItem%2 == 0){
    clrNewBkColor = RGB(240, 240, 240); //偶数行背景色为灰色
   }else{
    clrNewBkColor = RGB(255, 255, 255); //奇数行背景色为白色
   }

   pLVCD->clrText = clrNewTextColor;
   pLVCD->clrTextBk = clrNewBkColor;

   *pResult = CDRF_DODEFAULT;
}


}

/*********************************************************
函数:	OnBtnRecord
描述:	视频录像
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::OnBtnRecord() 
{
	// TODO: Add your control notification handler code here
	CString strLog= "";
		char cFilename[256];
	CTime time = CTime::GetCurrentTime();
	DWORD dwDirAttr;
	CString sTemp = "";
	sTemp.Format("%s\\%4d_%02d_%02d",m_strRecordPath,	time.GetYear(),time.GetMonth(), time.GetDay());
	dwDirAttr = GetFileAttributes(sTemp);
	if ((dwDirAttr == -1) || !(dwDirAttr & FILE_ATTRIBUTE_DIRECTORY))//目录不存在则创建目录
	{
		if (!CreateDirectory(sTemp, NULL))
		{
			AddLog("FAIL", "录像失败 创建年月日目录失败",m_struChannelInfo[m_struDeviceInfo.iDeviceIndex].chChanName);
			AfxMessageBox("创建年月日目录失败");
			return ;
		}	
	}
	sprintf(cFilename, "%s\\%4d_%02d_%02d\\%s_%4d%02d%02d%02d%02d%02d.mp4", m_strRecordPath,	time.GetYear(), 
		time.GetMonth(), time.GetDay(), m_struDeviceInfo.chDeviceIP,\
		time.GetYear(), time.GetMonth(), time.GetDay(), time.GetHour(), time.GetMinute(), time.GetSecond());
	if(m_lPlayHandle >= 0&&!m_bStartRecord)
	{
		m_bStartRecord = NET_DVR_SaveRealData_V30(m_lPlayHandle,0,cFilename);
		if(!m_bStartRecord)
			MessageBox("录像失败","可视对讲",MB_ICONINFORMATION);
		else
		{		
			GetDlgItem(IDC_BTN_RECORD)->SetWindowText("停止录像");
			strLog.Format("开始录像成功 路径为:%s",cFilename);
			AddLog("SUCC",strLog,m_struChannelInfo[m_struDeviceInfo.iDeviceIndex].chChanName);
		}
	}
	else if(m_bStartRecord&&m_lPlayHandle>=0)
	{
		
		if (NET_DVR_StopSaveRealData(m_lPlayHandle))
		{
			GetDlgItem(IDC_BTN_RECORD)->SetWindowText("开始录像");
			m_bStartRecord = false;
		}
		else
		{
		}
	}
	else
	{
		MessageBox("没有可以用于录像的视频,\r\n请检查视频连接状态!","录像失败",MB_ICONINFORMATION);
	}
}


/*********************************************************
函数:	OnLButtonDblClk
描述:	鼠标左键双击事件
输入:	 nFlags 标志位, point 鼠标单击位置(X,Y)
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::OnLButtonDblClk(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CSetUpDlg dlg;
	dlg.DoModal();
	CDialog::OnLButtonDblClk(nFlags, point);
}

void CVideoIntercomClientDlg::OnNcPaint() 
{
	// TODO: Add your message handler code here	 
	DrawButton(); //绘制最小化按钮
	CDialog::OnNcPaint();
	
		  // Do not call CDialog::OnNcPaint() for painting messages
}

void CVideoIntercomClientDlg::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized) 
{
	CDialog::OnActivate(nState, pWndOther, bMinimized);
	// TODO: Add your message handler code here
//	DrawButton(); //绘制最小化按钮
}

/*********************************************************
函数:	DrawButton
描述:	绘制按钮
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntercomClientDlg::DrawButton()
{        
	CDC* pDC = GetWindowDC();  
	CDC* pMemDC=new CDC;    
	CBitmap *pBitmap1=new CBitmap;     
	CBitmap *pBitmap2=new CBitmap;  
	CBitmap *pOldBitmap;   
	CRect rtWnd, rtButtons, rtTitle;     //创建一个内存设备环境     
	pMemDC->CreateCompatibleDC(pDC);    
	if(!pDC) return;     
	GetWindowRect(&rtWnd);     //取得标题栏的矩形    
	rtTitle.left = GetSystemMetrics(SM_CXFRAME);    
	rtTitle.top = GetSystemMetrics(SM_CYFRAME);    
	rtTitle.right = rtWnd.right - rtWnd.left - GetSystemMetrics(SM_CXFRAME);    
	rtTitle.bottom = rtTitle.top + GetSystemMetrics(SM_CYSIZE);     //计算最小化按钮的位置，位图大小为15X15     
	rtButtons.top=rtTitle.top-3;   
	rtButtons.bottom=rtButtons.top+19;    
	rtButtons.right = rtTitle.right-22;     
	rtButtons.left = rtButtons.right-18;
	m_rtButtMin = rtButtons;     
	pBitmap1->LoadBitmap(IDB_BITMAP02); //调入正常状态按钮的位图 /r/n    
	pBitmap2->LoadBitmap(IDB_BITMAP01);  //调入按钮按下状态的位图   
//	m_rtButtMin.OffsetRect(rtWnd.TopLeft());//记录最小化按钮的位置    
	//将按钮位图调入内存设备环境中，m_BMPPressed为TRUE//调入正常状态按钮的位图    
	pOldBitmap=pMemDC->SelectObject(m_BMPPressed ? pBitmap1: pBitmap2);     //将按钮位图复制到实际的内存设备环境中    
	pDC->BitBlt(rtButtons.left, rtButtons.top, rtButtons.Width(),       
		rtButtons.Height(), pMemDC, 0, 0, SRCCOPY);    
	pMemDC->SelectObject(pOldBitmap);//恢复原来的内存设备环境 //释放资源    
	ReleaseDC(pMemDC);     
	ReleaseDC(pDC);    
	delete pMemDC;
	delete pBitmap1;      
	delete pBitmap2;  
}

void CVideoIntercomClientDlg::OnNcMouseMove(UINT nHitTest, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default	
	CDialog::OnNcMouseMove(nHitTest, point);
			if (!(m_rtButtMin.top >point.x) && !(m_rtButtMin.bottom < point.x)
		&&!(m_rtButtMin.left >point.y) && !(m_rtButtMin.right < point.y))   
	{        
		m_BMPPressed=false;//绘制按钮按下时的状态
		DrawButton(); //绘制最小化按钮         

		m_bMin=true;
	}      


}

void CVideoIntercomClientDlg::OnNcLButtonDown(UINT nHitTest, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	//检测是否在最小化按钮区域内按下按钮 
	CDialog::OnNcLButtonDown(nHitTest, point);
	if (!(m_rtButtMin.top >point.x) && !(m_rtButtMin.bottom < point.x)
		&&!(m_rtButtMin.left >point.y) && !(m_rtButtMin.right < point.y))   
	{        
		m_BMPPressed=true;//绘制按钮按下时的状态
		DrawButton(); //绘制最小化按钮         

		m_bMin=true;
	}

}

void CVideoIntercomClientDlg::OnNcLButtonUp(UINT nHitTest, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
  
//	SendMessage(WM_SYSCOMMAND, SC_MINIMIZE, MAKELPARAM(point.x, point.y));//发送最小化消息 
	CDialog::OnNcLButtonUp(nHitTest, point);
}

void CVideoIntercomClientDlg::OnCheckAudio() 
{
	// TODO: Add your control notification handler code here
	m_iPlayMode = ((CButton*)GetDlgItem(IDC_CHECK_AUDIO))->GetCheck();
}

void CVideoIntercomClientDlg::OnBtnPlayRecord() 
{
	// TODO: Add your control notification handler code here
	CFileDialog dlg(TRUE,"*.mp4",NULL);
	if(dlg.DoModal() == IDOK)
	{
		CString fileName = dlg.GetPathName();
		CRecordDlg rdlg;
		rdlg.m_strPath = fileName;
		rdlg.DoModal();
	}
}

void CVideoIntercomClientDlg::OnDblclkListAllLog(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	int iItemSel = 0;
	CString csTxt;
	
	POSITION  iPos = m_listAllLog.GetFirstSelectedItemPosition();
	if (iPos == NULL)
	{
		return;
	}
	iItemSel = m_listAllLog.GetNextSelectedItem(iPos);//%s\t%s\tm_listAllLog.GetItemText(iItemSel,1),\m_listAllLog.GetItemText(iItemSel,2)
	csTxt.Format("%s\r\n\t设备---%s",m_listAllLog.GetItemText(iItemSel,3),m_listAllLog.GetItemText(iItemSel,4));
	if (csTxt.GetLength() > 3)
	{
		MessageBox(csTxt,"可视对讲");	
	}
	*pResult = 0;
}

void CVideoIntercomClientDlg::OnShowHide() 
{
	// TODO: Add your control notification handler code here
	if(1!=MessageBox("您确定要退出对讲系统?","语音对讲",MB_OKCANCEL))return;
	if(m_bBloadCast)BloadCast();
	if(m_struConsoleInfo.bConChannel)
	{
		StopPlay();
	}
	if(m_struConsoleInfo.bConnected)
	{
		m_struConsoleInfo.pConsoleClient->Close();
		delete m_struConsoleInfo.pConsoleClient;
	}
	CDialog::OnCancel();
}

void CVideoIntercomClientDlg::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	DrawButton();
	CDialog::OnMouseMove(nFlags, point);
}

void CVideoIntercomClientDlg::OnBloadcast() 
{
	// TODO: Add your control notification handler code here
	if(!CheckConnectedSrv())return;
	if(strlen(m_struChannelInfo[0].chAccessChanIP)<=7)
	{
			MessageBox("服务端版本不支持,请将升级服务端程序!","可视对讲",MB_ICONINFORMATION);
		return;
	}
	if(m_struConsoleInfo.bConChannel)
	{	
		AddLog("FAIL","当前用户处于连接状态，请先断开在连接!",m_struDeviceInfo.chDeviceIP);
		MessageBox("当前用户处于连接状态，\r\n请先断开在连接!","可视对讲",MB_ICONINFORMATION);
		return;
	}
	CString msg;
	if(!m_bBloadCast)
	{
		if(1!=MessageBox("您确定要进行系统广播?在您广播期间其它用户将无法进行任何连接!","语音对讲",MB_OKCANCEL))return;
		msg.Format("[BLOADCAST|QUEST]");
		SendData(msg,msg.GetLength());
	}
	else
	{
		BloadCast();
	}
}

void CVideoIntercomClientDlg::BloadCast()
{
		CString msg;
	if(!m_bBloadCast)
	{
		
		if (!NET_DVR_ClientAudioStart_V30(NULL, NULL))
		{
			//			AddLog(-1, OPERATION_FAIL_T, "NET_DVR_ClientAudioStart_V30");
		}
		else
		{
			//			AddLog(-1, OPERATION_SUCC_T, "NET_DVR_ClientAudioStart_V30");
		}
		NET_DVR_DEVICEINFO_V30 struDeviceInfo;
		for(int i =0; i< m_iHasChannel;i++)
		{
			m_lUserID[i] = NET_DVR_Login_V30(	m_struChannelInfo[i].chAccessChanIP,8000,"admin","12345",&struDeviceInfo);
			
			if(m_lUserID[i] >= 0 )
			{
				NET_DVR_AddDVR_V30(m_lUserID[i],i+1);
			}
		}
			
	msg.Format("[BLOADCAST|START]");
	SendData(msg,msg.GetLength());
	AddLog("BLOADCAST","开始向全体通道广播，广播最大时长为1分钟","ALL DEVICE");
		GetDlgItem(IDC_BLOAD_CAST)->SetWindowText("停止广播");
	}
	else
	{
		for(int i =0; i< m_iHasChannel;i++)
		{
			if(m_lUserID[i]>=0)
				if (NET_DVR_Logout_V30(m_lUserID[i] ))//退出登录失败
				{
					//g_struDeviceInfo[iDeviceIndex].lLoginID = -1;
					m_lUserID[i]= -1;	
				}
		}
		if (!NET_DVR_ClientAudioStop())
		{
	//		AddLog(-1, OPERATION_FAIL_T, "NET_DVR_ClientAudioStop");
		}
		else
		{
		//	AddLog(-1, OPERATION_SUCC_T, "NET_DVR_ClientAudioStop");
		}
		
		GetDlgItem(IDC_BLOAD_CAST)->SetWindowText("开始广播");
			msg.Format("[BLOADCAST|STOP]");
	SendData(msg,msg.GetLength());
		AddLog("BLOADCAST","停止向全体通道广播","ALL DEVICE");
	}
	m_bBloadCast = !m_bBloadCast;
}

bool CVideoIntercomClientDlg::CheckConnectedSrv()
{
	if(!m_struConsoleInfo.bConnected)
	{
		MessageBox("与服务器连接中断，请检查服务器!","可视对讲",MB_ICONINFORMATION);
		return false;
	}
	return true;
}
