// VideoIntecomSrvDlg.cpp : implementation file
//

#include "stdafx.h"
#include "VideoIntecomSrv.h"
#include "VideoIntecomSrvDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


typedef struct tagLOCAL_ALARM_INFO
{
	int iDeviceIndex;
	LONG lCommand;
	tagLOCAL_ALARM_INFO()
	{
		iDeviceIndex = -1;
		lCommand = -1;
	}
}LOCAL_ALARM_INFO, *LPLOCAL_ALARM_INFO;
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
	if (g_pMainDlg == NULL || g_pMainDlg->m_bExitDemo)
	{
		TRACE("exit ...\n");
		return;
	}
	
	for (i=0; i<MAXCHANNEL; i++)
	{//IP address that client have acquired
		if (strcmp( g_pMainDlg->m_struDeviceInfo[i].chDeviceIP, pAlarmer->sDeviceIP) == 0)
		{
			break;
		}
	}
	iDeviceIndex = i;
	if (iDeviceIndex >= MAXCHANNEL || iDeviceIndex < 0)
	{
		g_pMainDlg->AddLog(-1, ALARM_INFO_T, "alarm host get alarm[%x] from device[%s]", lCommand, pAlarmer->sDeviceIP);
		return;
	}
	g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T, "alarm host get alarm[%x] from device[%s] name[%s] mac:%x:%x:%x:%x:%x:%x serial:%s", \
		lCommand, pAlarmer->sDeviceIP, pAlarmer->sDeviceName, pAlarmer->byMacAddr[0], pAlarmer->byMacAddr[1], pAlarmer->byMacAddr[2],\
		pAlarmer->byMacAddr[3],  pAlarmer->byMacAddr[4],  pAlarmer->byMacAddr[5],
		pAlarmer->sSerialNumber);
	try
	{
		char *pAlarmMsg = new char[dwBufLen];
		if (pAlarmMsg == NULL)
		{
			return;
		}
		memcpy(pAlarmMsg, pAlarmInfo, dwBufLen);
		if (lCommand == COMM_ALARM_RULE)
		{
			((LPNET_VCA_RULE_ALARM)pAlarmMsg)->pImage = new BYTE[((LPNET_VCA_RULE_ALARM)pAlarmMsg)->dwPicDataLen];
			memset(((LPNET_VCA_RULE_ALARM)pAlarmMsg)->pImage, 0, ((LPNET_VCA_RULE_ALARM)pAlarmMsg)->dwPicDataLen);
			memcpy(((LPNET_VCA_RULE_ALARM)pAlarmMsg)->pImage, ((LPNET_VCA_RULE_ALARM)pAlarmInfo)->pImage, ((LPNET_VCA_RULE_ALARM)pAlarmMsg)->dwPicDataLen);
		}
		
		LPLOCAL_ALARM_INFO pAlarmDev = new LOCAL_ALARM_INFO;
		if (pAlarmDev == NULL)
		{
			delete [] pAlarmMsg;
			pAlarmMsg = NULL;
			return;
		}
		pAlarmDev->iDeviceIndex = iDeviceIndex;
		pAlarmDev->lCommand = lCommand;
		::PostMessage(g_pMainDlg->m_hWnd, WM_PROC_ALARM, (DWORD)pAlarmDev, (LONG)pAlarmMsg);	
	}
	catch (...)
	{
		OutputDebugString("New Alarm Exception!\n");
	}
		
//	AfxMessageBox(pAlarmer->sDeviceIP);
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
	UNREFERENCED_PARAMETER(pUser);
	if (g_pMainDlg->m_bExitDemo)
	{
		return;
	}
	int i = 0, j=0;
	int iDeviceIndex = -1;
	CString sTemp;
	//	char szTmpBuf[256] = {0};
	
	for (i = 0; i < MAXCHANNEL ; i++)
	{				
		if (g_pMainDlg->m_struDeviceInfo[i].lLoginID == lUserID)
		{
			iDeviceIndex = i;		
			break;
		}
	}
	
	switch (dwType) 
	{
	case EXCEPTION_EXCHANGE://the device is off line
		g_pMainDlg->AddLog(iDeviceIndex, OPERATION_FAIL_T, "EXCEPTION_EXCHANGE");
		break;
	case EXCEPTION_AUDIOEXCHANGE:	//network exception while voice talk
		break;
	case EXCEPTION_ALARM:			//network exception while uploading alarm
		for (i = 0; i < MAXCHANNEL; i++)
		{				
			if (g_pMainDlg->m_struDeviceInfo[i].lFortifyHandle >= 0)
			{
				if (lHandle == g_pMainDlg->m_struDeviceInfo[i].lFortifyHandle)
				{
					//	if (NET_DVR_CloseAlarmChan_V30(g_struDeviceInfo[i].lFortifyHandle))
					//	{
					g_pMainDlg->AddLog(i, OPERATION_FAIL_T, "alarm fortify exception!");
					g_pMainDlg->m_struDeviceInfo[i].lFortifyHandle = -1;
					g_pMainDlg->m_struDeviceInfo[i].lLoginID = -1;
					//		g_struDeviceInfo[i].lFortifyHandle = -1;
					//	}
					//	else
					//	{
					
					//	}			
					goto ExceptionOut;
				}
			}
		}	
		g_pMainDlg->AddLog(iDeviceIndex, OPERATION_FAIL_T, "ALARM dev[%d]exception[%d]", iDeviceIndex, dwType);
		break;
	case EXCEPTION_PREVIEW:			// exception while preview
		break;
	case EXCEPTION_SERIAL:			//exception while connecting in a transparent channel mode
		for (i = 0; i < MAXCHANNEL; i++)
		{				
			if (g_pMainDlg->m_struDeviceInfo[i].lTranHandle >= 0)
			{
				if (lHandle == g_pMainDlg->m_struDeviceInfo[i].lTranHandle)
				{
					g_pMainDlg->AddLog(i, OPERATION_FAIL_T, "serial transparent exception!!");		
					goto ExceptionOut;
				}
			}
		}
		g_pMainDlg->AddLog(iDeviceIndex, OPERATION_FAIL_T, "EXCEPTION_SERIAL dev[%d]", iDeviceIndex);
		break;
	case EXCEPTION_RECONNECT:		//reconnect while preview				
		break;
	case EXCEPTION_ALARMRECONNECT://reconnect alarm guard channel
		for (i = 0; i < MAX_DEVICES ; i++)
		{				
			if (g_pMainDlg->m_struDeviceInfo[i].lFortifyHandle >= 0)
			{
				if (lHandle == g_pMainDlg->m_struDeviceInfo[i].lFortifyHandle)
				{
					g_pMainDlg->AddLog(i, OPERATION_SUCC_T, "alarm Fortify reconnecting!!");		
					goto ExceptionOut;
				}
			}
		}
		g_pMainDlg->AddLog(iDeviceIndex, OPERATION_FAIL_T, "ALARMRECONNECT dev[%d]", iDeviceIndex);
		break;
	case EXCEPTION_SERIALRECONNECT://reconnect transparent channel
		for (i = 0; i < MAX_DEVICES ; i++)
		{				
			if (g_pMainDlg->m_struDeviceInfo[i].lLoginID == lUserID)
			{
				g_pMainDlg->AddLog(i, OPERATION_SUCC_T, "serial transparent reconnecting!");		
				goto ExceptionOut;
			}
		}
		g_pMainDlg->AddLog(iDeviceIndex, OPERATION_SUCC_T, "SERIALRECONNECT dev[%d]exception[0x%x]", iDeviceIndex, dwType);
		break;
	case EXCEPTION_PLAYBACK:
		g_pMainDlg->AddLog(iDeviceIndex, OPERATION_FAIL_T, "EXCEPTION_PLAYBACK dev[%d] exception[0x%x]", iDeviceIndex, dwType);
		break;
	case EXCEPTION_DISKFMT:
		g_pMainDlg->AddLog(iDeviceIndex, OPERATION_FAIL_T, "EXCEPTION_DISKFMT dev[%d]DISKFMT exception[0x%x]", iDeviceIndex, dwType);
		break;
    case EXCEPTION_PASSIVEDECODE:
        NET_DVR_MatrixStopPassiveDecode(lHandle);
		break;
	case EXCEPTION_SERIALRECONSUCCESS:
		g_pMainDlg->AddLog(iDeviceIndex, OPERATION_SUCC_T, "EXCEPTION_SERIALRECONSUCCESS dev[%d]", iDeviceIndex);
		break;
	default:
		g_pMainDlg->AddLog(iDeviceIndex, OPERATION_FAIL_T, "else exception dev[%d]exception[0x%x]", iDeviceIndex, dwType);
		break;
	}
ExceptionOut:
	return;
	return;
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
// CVideoIntecomSrvDlg dialog

CVideoIntecomSrvDlg::CVideoIntecomSrvDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CVideoIntecomSrvDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CVideoIntecomSrvDlg)
		// NOTE: the ClassWizard will add member initialization here
	m_iHasChannel = 0;
	m_bExitDemo = false;
	m_bAlarm = false;
	m_lListenHandle = -1;
	m_bBloadCast = false;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CVideoIntecomSrvDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVideoIntecomSrvDlg)
	DDX_Control(pDX, IDC_LIST_ALL_LOG, m_listAllLog);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CVideoIntecomSrvDlg, CDialog)
	//{{AFX_MSG_MAP(CVideoIntecomSrvDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_CLOSE()
	ON_NOTIFY(NM_DBLCLK, IDC_LIST_ALL_LOG, OnDblclkListAllLog)
	ON_NOTIFY(NM_CLICK, IDC_LIST_ALL_LOG, OnClickListAllLog)
	ON_WM_TIMER()
	ON_COMMAND(IDD_MENU_SETUP, OnMenuSetup)
	ON_COMMAND(IDC_MENU_CLEAR, OnMenuClear)
	ON_COMMAND(IDC_MENU_CLEAR_LOG, OnMenuClearLog)
	ON_COMMAND(IDC_MENU_EXIT, OnMenuExit)
	ON_COMMAND(IDC_MENU_RESTART, OnMenuRestart)
	ON_WM_CREATE()
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_LIST_ALL_LOG, OnNMCustomdrawList)
	ON_MESSAGE(WM_ADD_LOG, OnWMAddLog)
	ON_MESSAGE(WM_PROC_ALARM, OnWMProcAlarm)
	ON_COMMAND(IDC_BLOAD_CAST, OnMenuBloadCast)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVideoIntecomSrvDlg message handlers

BOOL CVideoIntecomSrvDlg::OnInitDialog()
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
	g_pMainDlg = this;
	InitMainWin();
	InitParamData();
	InitDevice();
	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	SetTimer(1,1000,0);
	SetTimer(2,1000*120,0);
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CVideoIntecomSrvDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CVideoIntecomSrvDlg::OnPaint() 
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
HCURSOR CVideoIntecomSrvDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
/*********************************************************
Function:	OnWMProcAlarm
Desc:		process alarm information when 
Input:	none
Output:	none
Return:	none
**********************************************************/
LRESULT CVideoIntecomSrvDlg::OnWMProcAlarm(WPARAM wParam, LPARAM lParam)
{	
	LPLOCAL_ALARM_INFO pAlarmDev = (LPLOCAL_ALARM_INFO)(wParam);
	char *pAlarmInfo = (char *)(lParam);		
	int iDeviceIndex = pAlarmDev->iDeviceIndex;
	if (iDeviceIndex < 0 && iDeviceIndex >= MAX_DEVICES)
	{
		delete [] pAlarmInfo;
		delete pAlarmDev;
		return NULL;
	}
	char szLan[128] ={0};
	char szInfoBuf[1024] = {0};
	switch (pAlarmDev->lCommand)
	{
	case COMM_ALARM:
//		ProcAlarm(wParam, lParam);
	//	break;
	case COMM_ALARM_V30:
		ProcAlarmV30(wParam, lParam);
		break;
	case COMM_TRADEINFO:
		NET_DVR_TRADEINFO m_TradeInfo;
		memcpy(&m_TradeInfo, pAlarmInfo, sizeof(NET_DVR_TRADEINFO));
		g_StringLanType(szLan, "收到卡号信息", "receive trade card number");
		sprintf(szInfoBuf, "%s%s", m_TradeInfo.CardNumber);
		g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T, szInfoBuf);  
		break;
	case COMM_IPCCFG://input parameters modified
//		ProcIPCfgAlarm(wParam, lParam);
		break;
	case COMM_IPCCFG_V31:
	//	ProcIPCfgAlarmV31(wParam, lParam);
		break;
	case COMM_ALARM_RULE:
	//	ProcRuleAlarm(wParam, lParam);
		break;
    case COMM_ALARM_PDC:
    //    ProcPdcAlarm(wParam, lParam);
        break;
		
	default:
		break;
	}
	if (pAlarmInfo != NULL)
	{
		delete[] pAlarmInfo;
		pAlarmInfo = NULL;
	}
	if (pAlarmDev != NULL)
	{
		delete pAlarmDev;
		pAlarmDev = NULL;
	}
	return NULL;
}
/*********************************************************
函数:	ProcAlarmV30
描述:		process alarm information for version 30
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::ProcAlarmV30(WPARAM wParam, LPARAM lParam)
{
	char szInfoBuf[1024] = {0};
	BOOL bDisk = FALSE;
	int i = 0;
	LPLOCAL_ALARM_INFO pAlarmDev = (LPLOCAL_ALARM_INFO)(wParam);
	char *pAlarmInfo = (char *)(lParam);		
	int iDeviceIndex = pAlarmDev->iDeviceIndex;
	char szLan[128] ={0};
	NET_DVR_ALARMINFO_V30 m_struAlarmInfoV30;
	memcpy(&m_struAlarmInfoV30, pAlarmInfo, sizeof(NET_DVR_ALARMINFO_V30));
	CString msg = "";
	switch (m_struAlarmInfoV30.dwAlarmType)
	{
	case 0://signal alarm
		g_StringLanType(szLan, "开关量报警 报警输入", "Switch alarm input");
		sprintf(szInfoBuf,"%s%d", szLan, m_struAlarmInfoV30.dwAlarmInputNumber+1); 
		g_StringLanType(szLan, ",触发通道录像:", "Invoke record Channel:");
		sprintf(szInfoBuf,"%s%s", szInfoBuf, szLan); 
		for (i=0; i<MAX_CHANNUM_V30; i++)
		{
			if (m_struAlarmInfoV30.byAlarmRelateChannel[i] == 1)
			{
				// 					if (i<MAX_ANALOG_CHANNUM)
				// 					{
				sprintf(szInfoBuf,"%s %d,", szInfoBuf, i+m_struDeviceInfo[iDeviceIndex].iStartChan); 	
				// 					}
				// 					else
				// 					{
				// 						sprintf(szInfoBuf,"%s %s%d,", szInfoBuf,"IPChan", i+g_struDeviceInfo[iDeviceIndex].iStartChan); 
				// 					}
				
			}
		}
		g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T,szInfoBuf);
		for(i = 0;i<MAXCONSOLE;i++)
		{
			if(!g_pMainDlg->m_struConsoleInfo[i].bConChannel&&!g_pMainDlg->m_struConsoleInfo[i].bLocalManualRec
				&&g_pMainDlg->m_struConsoleInfo[i].bConnected&&g_pMainDlg->m_struChannelInfo[iDeviceIndex].bEnable&&!m_bAlarm)
			{
				msg.Format("[ALARM|%d|%s]",iDeviceIndex,g_pMainDlg->m_struDeviceInfo[iDeviceIndex].chDeviceIP);
				m_struChannelInfo[iDeviceIndex].bAlarm = true;
				
				m_struDeviceInfo[iDeviceIndex].bAlarm  = true;
				g_pMainDlg->SendData(msg,msg.GetLength(),i);		
			}
		}
		if(m_struChannelInfo[iDeviceIndex].bAlarm) m_bAlarm = true;
		UpdateChannelInfo(iDeviceIndex);//更新通道信息
		break;
	case 1://hard disk full alarm
		g_StringLanType(szInfoBuf, "硬盘满报警", "HD is full:");
		for (i=0; i<MAX_DISKNUM_V30; i++)
		{
			if (m_struAlarmInfoV30.byDiskNumber[i] == 1)
			{
				sprintf(szInfoBuf, "%s HDD%d ", szInfoBuf, i);
			}
		}
		g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T,szInfoBuf);
		break;
	case 2://video loss alarm
		g_StringLanType(szInfoBuf, "视频信号丢失报警", "The signal lost");
		for (i=0; i<MAX_CHANNUM_V30; i++)
		{
			if (m_struAlarmInfoV30.byChannel[i] == 1)
			{
				if (!(m_struDeviceInfo[iDeviceIndex].struChanInfo[i].bAlarm))
				{
					m_struDeviceInfo[iDeviceIndex].struChanInfo[i].bAlarm = TRUE;
					::PostMessage(g_pMainDlg->m_hWnd, WM_CHANGE_CHANNEL_ITEM_IMAGE, WPARAM(iDeviceIndex), LPARAM(i));			
				}
				sprintf(szInfoBuf, "%s %s", szInfoBuf, m_struDeviceInfo[iDeviceIndex].struChanInfo[i].chChanName);		
			}
		}
		g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T,szInfoBuf);
		break;
	case 3://motion detection alarm
		g_StringLanType(szInfoBuf, "移动侦测报警", "motion detection");
		for (i=0; i<MAX_CHANNUM_V30; i++)
		{
			if (m_struAlarmInfoV30.byChannel[i] == 1)
			{
				if (!m_struDeviceInfo[iDeviceIndex].struChanInfo[i].bAlarm)
				{
					m_struDeviceInfo[iDeviceIndex].struChanInfo[i].bAlarm = TRUE;
					::PostMessage(g_pMainDlg->m_hWnd, WM_CHANGE_CHANNEL_ITEM_IMAGE, WPARAM(iDeviceIndex), LPARAM(i));		
				}
				sprintf(szInfoBuf, "%s %s", szInfoBuf, m_struDeviceInfo[iDeviceIndex].struChanInfo[i].chChanName);
			}
		}
		g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T, szInfoBuf);
		break;
	case 4://hard disk unformatted alarm
		g_StringLanType(szInfoBuf, "硬盘未格式化报警", "not formatted");
		for (i=0; i<MAX_DISKNUM_V30; i++)
		{
			if (m_struAlarmInfoV30.byDiskNumber[i] == 1)
			{
				sprintf(szInfoBuf, "%s HDD%d ", szInfoBuf, i);
			}
		}
		g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T, szInfoBuf);
		break;
	case 5://hard disk alarm
		for (i=0; i<MAX_DISKNUM_V30; i++)
		{
			if (m_struAlarmInfoV30.byDiskNumber[i] == 1)
			{
				bDisk = TRUE;
				g_StringLanType(szLan, "读写硬盘出错", "failed to read and write HDD");
				sprintf(szInfoBuf, "%sHDD%d ", szLan, i);
				g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T, szInfoBuf);
			}
		}
		if (bDisk == FALSE)
		{
			g_StringLanType(szInfoBuf, "未接硬盘出错报警", "No HDD");
			g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T, szInfoBuf);
		}
		bDisk = FALSE;
		break;
	case 6://mask alarm
		g_StringLanType(szInfoBuf, "发生遮挡报警", "Mask alarm");
		for (i=0; i<MAX_CHANNUM_V30; i++)
		{
			if (m_struAlarmInfoV30.byChannel[i] == 1)
			{
				if (!m_struDeviceInfo[iDeviceIndex].struChanInfo[i].bAlarm)
				{
					m_struDeviceInfo[iDeviceIndex].struChanInfo[i].bAlarm = TRUE;
					::PostMessage(g_pMainDlg->m_hWnd, WM_CHANGE_CHANNEL_ITEM_IMAGE, WPARAM(iDeviceIndex), LPARAM(i));		
				}
				sprintf(szInfoBuf, "%s %s", szInfoBuf, m_struDeviceInfo[iDeviceIndex].struChanInfo[i].chChanName);
			}
		}	
		g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T, szInfoBuf);
		break;
	case 7:	//type unmatched
		g_StringLanType(szInfoBuf, "制式不匹配", "input and output video standard not match");
		for (i=0; i<MAX_CHANNUM_V30; i++)
		{
			if (m_struAlarmInfoV30.byChannel[i] == 1)
			{
				if (!m_struDeviceInfo[iDeviceIndex].struChanInfo[i].bAlarm)
				{
					m_struDeviceInfo[iDeviceIndex].struChanInfo[i].bAlarm = TRUE;
					::PostMessage(g_pMainDlg->m_hWnd, WM_CHANGE_CHANNEL_ITEM_IMAGE, WPARAM(iDeviceIndex), LPARAM(i));		
				}
				sprintf(szInfoBuf, "%s %s", szInfoBuf, m_struDeviceInfo[iDeviceIndex].struChanInfo[i].chChanName);
			}
		}
		g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T, szInfoBuf);
		break;
	case 8:
		g_StringLanType(szInfoBuf, "非法访问", "illegal access");
		g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T, szInfoBuf);		
		break;
	default:
		g_StringLanType(szLan, "未知报警类型:", "Unknown Alarm Type:");
		sprintf(szInfoBuf, "%s 0x%x-htonl%d", szLan, m_struAlarmInfoV30.dwAlarmType, ntohl(m_struAlarmInfoV30.dwAlarmType));
		g_pMainDlg->AddLog(iDeviceIndex, ALARM_INFO_T, szInfoBuf);
		break;
	}
}

//设备的初始化
void CVideoIntecomSrvDlg::InitDevice()
{
	NET_DVR_SetConnectTime(300, 1);
	NET_DVR_SetReconnect(1000, FALSE);
	NET_DVR_SetDVRMessageCallBack_V30(MessageCallback, NULL);
	NET_DVR_SetExceptionCallBack_V30(WM_NULL/*WM_MYCOMMAND*/, NULL/*this->m_hWnd*/, g_ExceptionCallBack, NULL);
	if (!NET_DVR_SetShowMode(NORMALMODE, RGB(255, 255, 255)))
	{
	
		//	AddLog(-1, OPERATION_FAIL_T, "NET_DVR_SetShowMode");
	}
	if(m_lListenHandle<0)
		m_lListenHandle = NET_DVR_StartListen_V30(NULL,7200, MessageCallback, NULL); 
	if (m_lListenHandle < 0)	
	{
		AddLog(-1, OPERATION_FAIL_T, "NET_DVR_StartListen_V30-监听失败!");
	}
	else
		AddLog(-1, OPERATION_SUCC_T, "NET_DVR_StartListen_V30-监听成功!");
	DVRLogin();
	m_pConsoleListen = new CListen();
	m_pConsoleListen->Create(34000);
	m_pConsoleListen->Listen();
}

void CVideoIntecomSrvDlg::DVRLogin()
{
	for(int i = 0 ; i < m_iHasChannel; i++)
	{
		if(m_struDeviceInfo[i].lLoginID >= 0)
			continue;
		LONG lUserID = -1;
		NET_DVR_DEVICEINFO_V30 struDeviceInfo;
		lUserID = NET_DVR_Login_V30(m_struDeviceInfo[i].chDeviceIP,(WORD)m_struDeviceInfo[i].lDevicePort,
			m_struDeviceInfo[i].chLoginUserName,m_struDeviceInfo[i].chLoginPwd ,&struDeviceInfo);
		if(lUserID < 0 )
		{
			char szLan[1024] = {0};
			if (NET_DVR_GetLastError() == NET_DVR_PASSWORD_ERROR)
			{
			//	g_StringLanType(szLan, "用户名密码错误!", "user name or password error!");
				AddLog(i, OPERATION_FAIL_T, "NET_DVR_Login_V30-用户名密码错误!-[%s]",m_struDeviceInfo[i].chDeviceName);
			}
			else
			{				
			//	g_StringLanType(szLan, "由于网络原因或DVR忙, 注册失败!", "net error or dvr is busy!");
				AddLog(i, OPERATION_FAIL_T, "NET_DVR_Login_V30-由于网络原因或其他原因, 注册失败!-[%s]",m_struDeviceInfo[i].chDeviceName);
			
			}
			m_struDeviceInfo[i].lLoginID = -1;
			continue;
		}
		else
		{
			AddLog(i, OPERATION_SUCC_T, "NET_DVR_Login_V30-登录成功!-[%s]",m_struDeviceInfo[i].chDeviceName);
		}
		m_struDeviceInfo[i].lLoginID = lUserID;
		m_struDeviceInfo[i].iDeviceIndex = i;
	/*	m_struDeviceInfo[i].dwImageType = DEVICE_LOGIN;
		LOCAL_DEVICE_INFO temp, temp1;
		//initialize the information of device
		memcpy(&temp1, &(m_struDeviceInfo[i]), sizeof(LOCAL_DEVICE_INFO));
		memcpy(&(m_struDeviceInfo[i]), &temp, sizeof(LOCAL_DEVICE_INFO));
		
		m_struDeviceInfo[i].lLoginID = lUserID;// located ID from re-log in
		m_struDeviceInfo[i].iDeviceIndex = i;
		sprintf(m_struDeviceInfo[i].chDeviceIP, "%s", temp1.chDeviceIP);
		sprintf(m_struDeviceInfo[i].chLocalNodeName, "%s", temp1.chLocalNodeName);
		m_struDeviceInfo[i].lDevicePort = temp1.lDevicePort;
		
		sprintf(m_struDeviceInfo[i].chLoginPwd, "%s", temp1.chLoginPwd);
		sprintf(m_struDeviceInfo[i].chLoginUserName, "%s", temp1.chLoginUserName);
		sprintf(m_struDeviceInfo[i].chLoginUserName, "%s", temp1.chLoginUserName);
		
		m_struDeviceInfo[i].dwImageType = DEVICE_LOGIN;
		m_struDeviceInfo[i].lLoginID = lUserID;
		sprintf(m_struDeviceInfo[i].chSerialNumber, "%s", struDeviceInfo.sSerialNumber);
		m_struDeviceInfo[i].iDeviceType = struDeviceInfo.byDVRType;
		m_struDeviceInfo[i].iDeviceChanNum = struDeviceInfo.byChanNum;
		m_struDeviceInfo[i].iStartChan = struDeviceInfo.byStartChan;
		m_struDeviceInfo[i].iDiskNum = struDeviceInfo.byDiskNum;
		m_struDeviceInfo[i].iAlarmOutNum = struDeviceInfo.byAlarmOutPortNum;
		m_struDeviceInfo[i].iAlarmInNum = struDeviceInfo.byAlarmInPortNum;
		m_struDeviceInfo[i].iAudioNum = struDeviceInfo.byAudioChanNum;
		m_struDeviceInfo[i].iIPChanNum = struDeviceInfo.byIPChanNum;*/
		Fortify(i);
	}
}

///参数的初始化
void CVideoIntecomSrvDlg::InitParamData()
{

	CIniFile inifile;
	inifile.OpenFile("VISrv.ini");
	m_iHasChannel = inifile.ReadInteger("DEVICE","ChannelNum",0);
	if(m_iHasChannel <= 0)
	{
		MessageBox("通道数量不能小于等于0,请检查系统配置");
		return;
	}
//	char *buf = new char[256];
///	memset(buf,'/0',256);
	CString strTemp = "",strKey = "";
	for(int i = 0 ;i < m_iHasChannel;i++)
	{
		strKey.Format("DeviceAddress%d",i+1);
		strTemp= inifile.ReadString("DEVICE",strKey,"127.0.0.1");
		strcpy(m_struDeviceInfo[i].chDeviceIP,strTemp);
		strcpy(m_struChannelInfo[i].chAccessChanIP,strTemp);

		strKey.Format("DeviceName%d",i+1);
		strTemp = inifile.ReadString("DEVICE",strKey,"设备1");
		strcpy(m_struDeviceInfo[i].chDeviceName ,strTemp);

		strKey.Format("ChannelName%d",i+1);
		strTemp = inifile.ReadString("DEVICE",strKey,"通道1");
		strcpy(m_struChannelInfo[i].chChanName,strTemp);
		
		strTemp= inifile.ReadString("DEVICE","LoginUserName ","admin");
		strcpy(m_struDeviceInfo[i].chLoginUserName ,strTemp);
		
		strTemp= inifile.ReadString("DEVICE","LoginPwd ","12345");
		strcpy(m_struDeviceInfo[i].chLoginPwd ,strTemp);

		m_struDeviceInfo[i].lDevicePort = inifile.ReadInteger("DEVICE","DevicePort",8000);
		m_struDeviceInfo[i].iDeviceIndex = i+1;
	}
}

void CVideoIntecomSrvDlg::OnClose() 
{
	// TODO: Add your message handler code here and/or call default
		char szLan[128] = {0};
	m_bExitDemo = TRUE;//make not post message
	g_StringLanType(szLan, "确定要退出吗?", "Sure to exit?");
	if (IDOK != MessageBox(szLan,"Warning",IDOK))
	{
		return;
	}
	CloseSystem();
		::Shell_NotifyIcon(NIM_DELETE,&m_tnid);
	CDialog::OnClose();
}
void CVideoIntecomSrvDlg::OnMenuExit() 
{
	// TODO: Add your command handler code here
		char szLan[128] = {0};
	m_bExitDemo = TRUE;//make not post message
	g_StringLanType(szLan, "确定要退出吗?", "Sure to exit?");
	if (IDOK != MessageBox(szLan,"Warning",IDOK))
	{
		return;
	}
	CloseSystem();
		::Shell_NotifyIcon(NIM_DELETE,&m_tnid);
	CDialog::OnCancel();
}

/*********************************************************
函数:	CloseSystem
描述:		关闭系统
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::CloseSystem()
{
	
	for(int i = 0 ; i < m_iHasChannel; i++)
	{
		if(m_struDeviceInfo[i].lLoginID < 0)
			continue;
		Fortify(i);
		if (NET_DVR_Logout_V30(m_struDeviceInfo[i].lLoginID))//退出登录失败
		{
			//g_struDeviceInfo[iDeviceIndex].lLoginID = -1;
			m_struDeviceInfo[i].lLoginID = -1;	
		}
	}
	for(i = 0 ; i<MAXCONSOLE; i++)
	{
		if(m_struConsoleInfo[i].bConnected)
		{
			m_struConsoleInfo[i].pConsoleClient->Close();
			delete m_struConsoleInfo[i].pConsoleClient;
			m_struConsoleInfo[i].pConsoleClient = NULL;
			m_struConsoleInfo[i].bConnected = false;
		}
	}
	if(m_pConsoleListen != NULL)
	{
		delete m_pConsoleListen;
		m_pConsoleListen = NULL;
	}
}

/*********************************************************
函数:	Fortify
描述:		布防撤防
输入:	iDeviceIndex 对应设备编号;
输出:	
返回:	
**********************************************************/
void CVideoIntecomSrvDlg::Fortify(int iDeviceIndex)
{
	if(m_struDeviceInfo[iDeviceIndex].lFortifyHandle < 0 )
	{
		m_struDeviceInfo[iDeviceIndex].lFortifyHandle = NET_DVR_SetupAlarmChan_V30(m_struDeviceInfo[iDeviceIndex].lLoginID);
		if(m_struDeviceInfo[iDeviceIndex].lFortifyHandle == -1)
		{
			AddLog(iDeviceIndex, OPERATION_FAIL_T, "布防失败!-[%s]",m_struDeviceInfo[iDeviceIndex].chDeviceName);
		}
		else
		{
			AddLog(iDeviceIndex, OPERATION_SUCC_T, "布防成功!-[%s]",m_struDeviceInfo[iDeviceIndex].chDeviceName);
		}
	}
	else
	{
		
		if(NET_DVR_CloseAlarmChan_V30(m_struDeviceInfo[iDeviceIndex].lFortifyHandle))
		{
			m_struDeviceInfo[iDeviceIndex].lFortifyHandle = -1;
			AddLog(iDeviceIndex, OPERATION_SUCC_T, "撤防成功!-[%s]",m_struDeviceInfo[iDeviceIndex].chDeviceName);
		}
		else
		{
			AddLog(iDeviceIndex, OPERATION_FAIL_T, "撤防失败!-[%s]",m_struDeviceInfo[iDeviceIndex].chDeviceName);
		}
	}
}

/*********************************************************
函数:	InitMainWin
描述:		初始化LIST控件
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::InitMainWin()
{
	char szLan[128] = {0};
	m_listAllLog.InsertColumn(0, "", LVCFMT_LEFT, 0, -1); 
	g_StringLanType(szLan, "时间", "Time");
	m_listAllLog.InsertColumn(1, szLan, LVCFMT_LEFT, 140);
	g_StringLanType(szLan, "状态", "State");
	m_listAllLog.InsertColumn(2, szLan, LVCFMT_LEFT, 50);
	g_StringLanType(szLan, "操作信息", "Operation");
	m_listAllLog.InsertColumn(3, szLan, LVCFMT_LEFT, 290);
	g_StringLanType(szLan, "设备信息", "Device Info");
	m_listAllLog.InsertColumn(4,szLan,LVCFMT_LEFT,180);
	g_StringLanType(szLan, "错误信息", "Error Info");
	m_listAllLog.InsertColumn(5,szLan,LVCFMT_LEFT,130);
	m_listAllLog.SetExtendedStyle(m_listAllLog.GetExtendedStyle()|LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT|LVS_EX_SUBITEMIMAGES);

}

/*********************************************************
函数:	OnDbclkListAllLog
描述:		get current device fault info
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::OnDblclkListAllLog(NMHDR* pNMHDR, LRESULT* pResult) 
{
	int iItemSel = 0;
	CString csTxt;
	
	POSITION  iPos = m_listAllLog.GetFirstSelectedItemPosition();
	if (iPos == NULL)
	{
		return;
	}
	iItemSel = m_listAllLog.GetNextSelectedItem(iPos);//%s\t%s\tm_listAllLog.GetItemText(iItemSel,1),\m_listAllLog.GetItemText(iItemSel,2)
	csTxt.Format("%s--%s",m_listAllLog.GetItemText(iItemSel,3),m_listAllLog.GetItemText(iItemSel,5));
	if (csTxt.GetLength() > 3)
	{
		AfxMessageBox(csTxt);	
	}
	
	*pResult = 0;
}

/*********************************************************
函数:	OnNMClickListAllLog
描述:		Copy the contents to the clipboard
输入:	
输出:	
返回:	
**********************************************************/
void CVideoIntecomSrvDlg::OnClickListAllLog(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	int iItemSel = 0;
	CString csTxt;
	
	POSITION  iPos = m_listAllLog.GetFirstSelectedItemPosition();
	if (iPos == NULL)
	{
		return;
	}
	iItemSel = m_listAllLog.GetNextSelectedItem(iPos);
	csTxt.Format("%s",m_listAllLog.GetItemText(iItemSel,3));
	if (OpenClipboard())   
	{   
		HGLOBAL   clipbuffer;   
		char   *   buffer;   
		EmptyClipboard();   
		clipbuffer   =   GlobalAlloc(GMEM_DDESHARE,  csTxt.GetLength()+1);   
		buffer   =   (char*)GlobalLock(clipbuffer);   
		strcpy(buffer,   LPCSTR(csTxt));   
		GlobalUnlock(clipbuffer);   
		SetClipboardData(CF_TEXT,clipbuffer);   
		CloseClipboard();   
	}   
	*pResult = 0;
	*pResult = 0;
}

/*********************************************************
函数:	OnWMAddLog
描述:		responding to the message WM_ADD_LOG
输入:	wParam, parameter 1;lParam, parameter 2;
输出:	none
返回:	result code
**********************************************************/
LRESULT CVideoIntecomSrvDlg::OnWMAddLog(WPARAM wParam, LPARAM lParam)
{
	LPLOCAL_LOG_INFO pLogInfo = LPLOCAL_LOG_INFO(lParam);
	if (NULL == pLogInfo)
	{
		return 0;
	}
	char szLogType[32] = "FAIL";
	
	char szTime[64] = {0};
	char szLogInfo[512] = {0};
	char szDevInfo[128] = {0};
	char szErrInfo[256] = {0};
	memcpy(szTime, pLogInfo->szTime, 64);
	memcpy(szLogInfo, pLogInfo->szLogInfo, 512);
	memcpy(szDevInfo, pLogInfo->szDevInfo, 128);
	memcpy(szErrInfo, pLogInfo->szErrInfo, 256);
	if ( 2000 == m_listAllLog.GetItemCount())
	{
		m_listAllLog.DeleteAllItems();
	}
	int n = m_listAllLog.GetItemCount();
	switch (pLogInfo->iLogType)
	{
	case RECV_CLI_T://FANLONGJIA
		sprintf(szLogType, "RECV");
		m_listAllLog.InsertItem(n, "", -1);
		m_listAllLog.SetItemText(n, 1, szTime);	
		m_listAllLog.SetItemText(n, 2, szLogType);
		m_listAllLog.SetItemText(n, 3, szLogInfo);
		m_listAllLog.SetItemText(n, 4, szDevInfo);
		break;
	case SEND_CLI_T://FANLONGJIA
		sprintf(szLogType, "SEND");
		m_listAllLog.InsertItem(n, "", -1);
		m_listAllLog.SetItemText(n, 1, szTime);	
		m_listAllLog.SetItemText(n, 2, szLogType);
		m_listAllLog.SetItemText(n, 3, szLogInfo);
		m_listAllLog.SetItemText(n, 4, szDevInfo);
		break;
	case ALARM_INFO_T:
		sprintf(szLogType, "Alarm");
		m_listAllLog.InsertItem(n, "", -1);
		m_listAllLog.SetItemText(n, 1, szTime);	
		m_listAllLog.SetItemText(n, 2, szLogType);
		m_listAllLog.SetItemText(n, 3, szLogInfo);
		m_listAllLog.SetItemText(n, 4, szDevInfo);
		break;
	case OPERATION_SUCC_T:
		sprintf(szLogType, "SUCC");	
	//	if (g_struLocalParam.bSuccLog)
		{
			m_listAllLog.InsertItem(n, "", -1);
			m_listAllLog.SetItemText(n, 1, szTime);
			m_listAllLog.SetItemText(n, 2, szLogType);
			m_listAllLog.SetItemText(n, 3, szLogInfo);
			m_listAllLog.SetItemText(n, 4, szDevInfo);
			m_listAllLog.SetItemText(n, 5, szErrInfo);
		}
		break;
	case OPERATION_FAIL_T:
		sprintf(szLogType, "FAIL");		
	//	if (g_struLocalParam.bFailLog)
		{
			m_listAllLog.InsertItem(n, "", -1);
			m_listAllLog.SetItemText(n, 1, szTime);
			m_listAllLog.SetItemText(n, 2, szLogType);
			m_listAllLog.SetItemText(n, 3, szLogInfo);
			m_listAllLog.SetItemText(n, 4, szDevInfo);
			m_listAllLog.SetItemText(n, 5, szErrInfo);
		}
		break;
	case PLAY_SUCC_T:
		sprintf(szLogType, "SUCC");
	//	if (g_struLocalParam.bSuccLog)
		{
			m_listAllLog.InsertItem(0, "", -1);
			m_listAllLog.SetItemText(0, 1, szTime);
			m_listAllLog.SetItemText(0, 2, szLogType);
			m_listAllLog.SetItemText(0, 3, szLogInfo);
			m_listAllLog.SetItemText(0, 4, szDevInfo);
			m_listAllLog.SetItemText(0, 5, szErrInfo);
		}
		break;
	case PLAY_FAIL_T:
		sprintf(szLogType, "FAIL");	
	//	if (g_struLocalParam.bFailLog)
		{
			m_listAllLog.InsertItem(0, "", -1);
			m_listAllLog.SetItemText(0, 1, szTime);
			m_listAllLog.SetItemText(0, 2, szLogType);
			m_listAllLog.SetItemText(0, 3, szLogInfo);
			m_listAllLog.SetItemText(0, 4, szDevInfo);
			m_listAllLog.SetItemText(0, 5, szErrInfo);
		}
		break;
	default:
		sprintf(szLogType, "FAIL");	
	//	if (g_struLocalParam.bFailLog)
		{
			m_listAllLog.InsertItem(n, "", -1);
			m_listAllLog.SetItemText(n, 1, szTime);
			m_listAllLog.SetItemText(n, 2, szLogType);
			m_listAllLog.SetItemText(n, 3, szLogInfo);
			m_listAllLog.SetItemText(n, 4, szDevInfo);
			m_listAllLog.SetItemText(n, 5, szErrInfo);
		}
		break;
	}
	if (pLogInfo != NULL)
	{
		delete pLogInfo;
		pLogInfo = NULL;
	}
	return 0;
}
/*********************************************************
函数:	AddLog
描述:		add local log
输入:	iLogType, log type, 0-alam, 1-operate log, 2-debug info; csLogInfo log info
输出:	
返回:	
**********************************************************/
void CVideoIntecomSrvDlg::AddLog(int iDeviceIndex, int iLogType, const char* format, ...)
{	
	if (m_bExitDemo)
	{
		return;
	}
	CTime  cTime = CTime::GetCurrentTime();
	int iLen = 0;
	char szTime[64] = {0};
	char szLogType[32] = "FAIL";
	char szLogInfo[512] = {0};
	char szDevInfo[256] = {0};
	char szErrInfo[256] = {0};
	char szLog[1024] = {0};
	va_list arglist;
	va_start(arglist,format);
	vsprintf(szLogInfo,format,arglist); 
	va_end(arglist);
	
	sprintf(szTime, "%s", cTime.Format("%y-%m-%d %H:%M:%S").GetBuffer(0));
	
	if (iDeviceIndex != -1)
	{
		if(iLogType == RECV_CLI_T ||iLogType == SEND_CLI_T)//FANLONGJIA
			sprintf(szDevInfo, "[%s]-[%d]", m_struConsoleInfo[iDeviceIndex].chConsoleIP,m_struConsoleInfo[iDeviceIndex].iConsoleIndex);
			else
		sprintf(szDevInfo, "[%s]-[%s]", m_struDeviceInfo[iDeviceIndex].chDeviceIP, m_struDeviceInfo[iDeviceIndex].chLocalNodeName);
	}
	
	switch (iLogType)
	{
	case RECV_CLI_T://FANLONGJIA
		sprintf(szErrInfo, "");
		sprintf(szLogType, "RECV");
		break;
	case SEND_CLI_T://FANLONGJIA
		sprintf(szErrInfo, "");
		sprintf(szLogType, "SEND");
		break;
	case OPERATION_SUCC_T:
	case PLAY_SUCC_T:
		sprintf(szErrInfo, "");
		sprintf(szLogType, "SUCC");
		break;
	case PLAY_FAIL_T:
		sprintf(szErrInfo, "PLAY_M4 Eorror!!!");	
		break;
	case OPERATION_FAIL_T:
	default:
		sprintf(szErrInfo, "err[%d:%s]", NET_DVR_GetLastError(), NET_DVR_GetErrorMsg());	
		break;
	}
	sprintf(szErrInfo, "err[%d:%s]", NET_DVR_GetLastError(), NET_DVR_GetErrorMsg());
	if (iLogType == ALARM_INFO_T )
	{
	
	}
	else
	{
	
	}
	
	LPLOCAL_LOG_INFO pLogInfo = NULL;
	try
    {  
		
		pLogInfo = new LOCAL_LOG_INFO;
		memset(pLogInfo, 0, sizeof(LOCAL_LOG_INFO));
		if (pLogInfo == NULL)
		{
			return;
		}
		pLogInfo->iLogType = iLogType;
		memcpy(pLogInfo->szTime, szTime, 64);
		memcpy(pLogInfo->szLogInfo, szLogInfo, 512);
		memcpy(pLogInfo->szDevInfo, szDevInfo, 128);
		memcpy(pLogInfo->szErrInfo, szErrInfo, 256);
		::PostMessage(this->m_hWnd, WM_ADD_LOG, iDeviceIndex, (LONG)pLogInfo);
	}
	catch (...)
	{
		if (pLogInfo != NULL)
		{
			return;
		}
		OutputDebugString("New Log Exception!!\n");
	}
}

void CVideoIntecomSrvDlg::ProcessAccept(int iPort)
{
	for(int i = 0;i < MAXCONSOLE ; i++)
	{
		if(	!m_struConsoleInfo[i].bConnected)
		{
			m_struConsoleInfo[i].pConsoleClient = new CClient();
			m_struConsoleInfo[i].pConsoleClient->m_iPort = i;
			m_struConsoleInfo[i].pConsoleClient->bConnected = true;
			m_pConsoleListen->Accept(*m_struConsoleInfo[i].pConsoleClient);
			m_struConsoleInfo[i].bConnected = true;
			m_struConsoleInfo[iPort].iConsoleIndex = i;
			m_strConsoleRev[i] = "";
			SOCKADDR_IN addr;
			int len  = sizeof(SOCKADDR_IN);
			getpeername(m_struConsoleInfo[i].pConsoleClient->m_hSocket,(SOCKADDR*)&addr,&len);
			CString strTemp = inet_ntoa(addr.sin_addr);
			strcpy(m_struConsoleInfo[i].chConsoleIP ,strTemp);
			AddLog(i, RECV_CLI_T, "监视端连接!");
			SendData("[CLEAR]",7,i);
			m_struConsoleInfo[i].bConChannel = false;
			m_struConsoleInfo[i].bLocalManualRec = false;
			m_struConsoleInfo[i].channelIndex = -1;
			break;
		}
	}
}

/*********************************************************
函数:	ProcessClose
描述:	网络连接断开
输入:	iPort 编号
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::ProcessClose(int iPort)
{
	AddLog(iPort, RECV_CLI_T, "监视端断开!");
	if(m_struConsoleInfo[iPort].bLocalManualRec&&m_struConsoleInfo[iPort].channelIndex>=0)
	{
		m_struChannelInfo[m_struConsoleInfo[iPort].channelIndex].bEnable = true;
		m_struChannelInfo[m_struConsoleInfo[iPort].channelIndex].bLocalManualRec = false;
	}
	m_struConsoleInfo[iPort].bConnected = false;
	m_struConsoleInfo[iPort].bLocalManualRec = false;
	m_struConsoleInfo[iPort].bConChannel =false;
	m_struConsoleInfo[iPort].chConsoleIP[0] = '\0';
	m_struConsoleInfo[iPort].iConsoleIndex = -1;
	m_struConsoleInfo[iPort].channelIndex = -1;
	
	delete m_struConsoleInfo[iPort].pConsoleClient;
	m_struConsoleInfo[iPort].pConsoleClient = NULL;

}

/*********************************************************
函数:	ProcessRcv
描述:	接受来自网络连接的数据
输入:	iPort 编号
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::ProcessRcv(int iPort)
{
	char buff[4096] = {0};
	
	{
		int len = m_struConsoleInfo[iPort].pConsoleClient->Receive(buff,4096);
		if(len>0)
		{
			DecodeConsole(buff,len,iPort);
		}
	}//接收来自APPSERVER的数据
}

/*********************************************************
函数:	DecodeConsole
描述:	解析来自客户端的数据
输入:	buff 信息内容，len  信息长度 port  连接编号
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::DecodeConsole(char *buff, int len,int iPort)
{
	if(len <=1)
		return;
	m_strConsoleRev[iPort] += buff;
	
	AddLog(iPort, RECV_CLI_T, "监视端信息!-[%s]",buff);
	int nCount = 0,iDeviceIndex = -1,nLen = 0;
	CString Temp = "",msg = "",msgTemp = "";
	bool bQuestBloadCast = true;
	if(m_strConsoleRev[iPort].Find('[') >= 0 && m_strConsoleRev[iPort].Find(']') >= 1)
	{
		m_strConsoleRev[iPort] = m_strConsoleRev[iPort].Mid(m_strConsoleRev[iPort].Find('['),
			m_strConsoleRev[iPort].Find(']') - m_strConsoleRev[iPort].Find('[')+1);
		nCount = CountChar(m_strConsoleRev[iPort],'|');
		switch(nCount)
		{
		case 0:
			Temp = m_strConsoleRev[iPort].Mid(1,m_strConsoleRev[iPort].GetLength()-2);
			if(Temp.Find("READCHANNELINFO")>=0)
			{
				msg = "[CHANNELINFO|";
				msgTemp.Format("%d|",m_iHasChannel);
				msg += msgTemp;
				for(int i = 0 ; i<m_iHasChannel; i++)
				{
					msgTemp.Format("%s:%d:%s:%d:%d",m_struChannelInfo[i].chChanName,i,m_struChannelInfo[i].chAccessChanIP,
						m_struChannelInfo[i].bAlarm == true?1:0,
						m_struChannelInfo[i].bLocalManualRec == true?1:0);
					msg += msgTemp;
					msg += "+";
				}
				msg += "]";	
			}
			SendData(msg,msg.GetLength(),iPort);
			break;
		case 1:
				Temp =  m_strConsoleRev[iPort].Mid(1, m_strConsoleRev[iPort].Find('|')-1);
			if(Temp.Find("BLOADCAST")>=0)//收到IO单键报警
			{
				Temp =  m_strConsoleRev[iPort].Mid( m_strConsoleRev[iPort].Find('|')+1,
					 m_strConsoleRev[iPort].ReverseFind(']')- m_strConsoleRev[iPort].Find('|')-1);
				if(Temp.Find("QUEST")>=0)
				{
					for(int i = 0 ; i < m_iHasChannel;i++)
					{
						if(m_struChannelInfo[i].bEnable == false)//通道置于不可以连接状态
						{
							bQuestBloadCast = false;
						
						}
					}
					if(m_bBloadCast)
						msg="[BLOADCAST|当前有用户正在使用广播,\r\n请等待该用户操作完成后使用!]";
					else if(bQuestBloadCast)
					{	
						msg="[BLOADCAST|OK]";
						
					}
					else
					msg="[BLOADCAST|当前有用户正处于连接状态,广播功能不能使用，\r\n请等待所有用户操作完成后使用!]";
					SendData(msg,msg.GetLength(),iPort);
				}
				else if(Temp.Find("START")>=0)
				{
					SetTimer(3,60*1000,0);
					m_bBloadCast=true;
				}
				else if(Temp.Find("STOP")>=0)
				{
					m_bBloadCast=false;
					KillTimer(3);
				}
			}
			break;
		case 2:
			Temp = m_strConsoleRev[iPort].Mid(1,m_strConsoleRev[iPort].Find('|')-1);
			if(Temp.Find("CONNECT")>=0)
			{
				Temp = m_strConsoleRev[iPort].Mid(m_strConsoleRev[iPort].Find('|')+1,
					m_strConsoleRev[iPort].ReverseFind('|')-m_strConsoleRev[iPort].Find('|')-1);
				if(Temp.Find("CHANNEL")>=0)
				{
					Temp = m_strConsoleRev[iPort].Mid(m_strConsoleRev[iPort].ReverseFind('|')+1,
						m_strConsoleRev[iPort].GetLength()-m_strConsoleRev[iPort].ReverseFind('|')-2);
					iDeviceIndex = atoi(Temp);
					if(m_bBloadCast)
					{
						msg="[CONNECT|REQUEST|当前有用户正在使用广播功能,\r\n请等待该用户操作完成后使用!]";
						SendData(msg,msg.GetLength(),iPort);
					}
					else if(m_struChannelInfo[iDeviceIndex].bEnable&&!m_struChannelInfo[iDeviceIndex].bLocalManualRec
						&&m_struDeviceInfo[iDeviceIndex].lLoginID >= 0)
					{
						msg.Format("[CONNECT|CHANNEL|%d|%s]",iDeviceIndex,m_struDeviceInfo[iDeviceIndex].chDeviceIP);
						nLen = SendData(msg,msg.GetLength(),iPort);
						if(nLen > 0) 
						{
							m_struChannelInfo[iDeviceIndex].bEnable = false;
						
							
							
							m_struChannelInfo[iDeviceIndex].bLocalManualRec = true;
							m_struConsoleInfo[iPort].bLocalManualRec = true;
							m_struConsoleInfo[iPort].channelIndex = iDeviceIndex;
							if(m_struChannelInfo[iDeviceIndex].bAlarm)//通知其他控制端以后监控端处理报警
							{
								m_struChannelInfo[iDeviceIndex].bAlarm = false;
								m_struDeviceInfo[iDeviceIndex].bAlarm = false;
								m_bAlarm = false;
								for(int i = 0 ;i < MAXCONSOLE;i++)
								{
									if(m_struConsoleInfo[i].bConnected&&i!= iPort)
									{
										msg.Format("[ALARM|STOP|%d]",iDeviceIndex);
										SendData(msg,msg.GetLength(),i);
									}
								}
							}
							UpdateChannelInfo(iDeviceIndex);
						}
					}
					else
					{
						if(m_struDeviceInfo[iDeviceIndex].lLoginID >=0)
							msg="[CONNECT|REQUEST|当前通道已有用户连接,请等待!]";
						else
							msg="[CONNECT|REQUEST|由于网络原因或其他原因, 注册失败!]";
						SendData(msg,msg.GetLength(),iPort);
					}
				}
				else if(Temp.Find("FAILED")>=0 || Temp.Find("END")>=0)
				{
					Temp = m_strConsoleRev[iPort].Mid(m_strConsoleRev[iPort].ReverseFind('|')+1,
						m_strConsoleRev[iPort].GetLength()-m_strConsoleRev[iPort].ReverseFind('|')-2);
					iDeviceIndex = atoi(Temp);
					m_struChannelInfo[iDeviceIndex].bEnable = true;//通道置于可以连接状态
					m_struChannelInfo[iDeviceIndex].bLocalManualRec = false;//通道被人工处理结束
					m_struChannelInfo[iDeviceIndex].bAlarm = false;
				
					m_struDeviceInfo[iDeviceIndex].bAlarm = false;

					m_struConsoleInfo[iPort].bLocalManualRec = false;//监控人工处理结束
					m_struConsoleInfo[iPort].bConChannel = false;//监控端未连接设备
					m_struConsoleInfo[iPort].channelIndex = -1;//监控端连接设备序号置-1
					SendData("[R]",3,iPort);
					UpdateChannelInfo(iDeviceIndex);
				
				}
				else if(Temp.Find("SUCCESS")>=0)
				{
					Temp = m_strConsoleRev[iPort].Mid(m_strConsoleRev[iPort].ReverseFind('|')+1,
						m_strConsoleRev[iPort].GetLength()-m_strConsoleRev[iPort].ReverseFind('|')-2);
					iDeviceIndex = atoi(Temp);
					m_struChannelInfo[iDeviceIndex].bEnable = false;//通道置于不可以连接状态
					m_struConsoleInfo[iPort].bConChannel = true;//监控端为连接设备
					m_struConsoleInfo[iPort].channelIndex = iDeviceIndex;				
					SendData("[R]",3,iPort);
				//	UpdateChannelInfo(iDeviceIndex);
				}
			}
			break;
		case 3:
			break;
		default:
			break;
		}
	}
	m_strConsoleRev[iPort] = "";
}

int CVideoIntecomSrvDlg::CountChar(CString temp,char ch)
{
	int count = 0;
	for(int i = 0 ;i<temp.GetLength();i++)
	{
		if(temp.GetAt(i) == ch)
			count++;
	}
	return count;
}

int CVideoIntecomSrvDlg::SendData(const char *buff, int len, int iPort)
{
	int len1 =-1;
	if(m_struConsoleInfo[iPort].pConsoleClient == NULL) return len1;
	if(m_struConsoleInfo[iPort].pConsoleClient->bConnected)
	{
		AddLog(iPort, SEND_CLI_T, "监视端信息!-[%s]",buff);
		len1 = m_struConsoleInfo[iPort].pConsoleClient->Send(buff,len);
	}
	return len1;
}

//更新通道信息到客户端
void CVideoIntecomSrvDlg::UpdateChannelInfo(int index)
{
	Sleep(100);
	CString msg = "[CHANNELINFO|",msgTemp = "";
				msgTemp.Format("%d|",m_iHasChannel);
				msg += msgTemp;
					msgTemp.Format("%s:%d:%d:%d",m_struChannelInfo[index].chChanName,index,
						m_struChannelInfo[index].bAlarm == true?1:0,
						m_struChannelInfo[index].bLocalManualRec == true?1:0);
					msg += msgTemp;
					msg += "+";
					
					msg += "]";
					for(int i =0 ;i<MAXCONSOLE; i++)
					{
						SendData(msg,msg.GetLength(),i);
					}
}

/*********************************************************
函数:	OnMenuRestart
描述:	定时器
输入:	nIDEvent 定时器编号
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CTime time = CTime::GetCurrentTime();
	CString str,msg;
	int i;
	switch(nIDEvent)
	{
		case 1:
			if(m_bAlarm)
			{
				m_iAlarmCount++;
				if(m_iAlarmCount >25)
				{
					m_bAlarm = false;
					int iDeviceIndex = -1;
					CString msg = "";
					for(int i = 0 ; i<MAXCHANNEL;i++)
					{
						if(m_struChannelInfo[i].bAlarm)
						{
							iDeviceIndex = i;
							m_struChannelInfo[i].bAlarm = false;
							m_struDeviceInfo[i].bAlarm = false;
						}
					}
					if(iDeviceIndex == -1) return;
					for( i= 0 ;i < MAXCONSOLE;i++)
					{
						if(m_struConsoleInfo[i].bConnected)
						{
							msg.Format("[ALARM|STOP|%d]",iDeviceIndex);
							SendData(msg,msg.GetLength(),i);
						}
					}
					
					UpdateChannelInfo(iDeviceIndex);
				}
			}
			else
			{
				m_iAlarmCount = 0;
			}

			str.Format("%04d-%02d-%02d %02d:%02d:%02d",time.GetYear(),time.GetMonth(),time.GetDay(),time.GetHour(),time.GetMinute(),
				time.GetSecond());
			SetDlgItemText(IDC_STATIC_TIME,str);
			break;
		case 2:
			DVRLogin();
			break;
		case 3:
			if(m_bBloadCast)
			for(i = 0 ;i < MAXCONSOLE;i++)
			{
				if(m_struConsoleInfo[i].bConnected)
				{
					msg.Format("[BLOADCAST|ALLSTOP]");
					SendData(msg,msg.GetLength(),i);
				}
			}
			KillTimer(3);
			break;
		default:
			break;
	}
	CDialog::OnTimer(nIDEvent);
}

/*********************************************************
函数:	OnMenuSetup
描述:	系统设置菜单事件
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::OnMenuSetup() 
{
	// TODO: Add your command handler code here
	CSetUpDlg dlg;
	dlg.DoModal();
}

/*********************************************************
函数:	OnMenuClear
描述:	清除所有连接状态菜单事件
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::OnMenuClear() 
{
	// TODO: Add your command handler code here
	for(int i = 0;i < MAXCONSOLE ; i++)
	{
		if(	m_struConsoleInfo[i].bConnected)
		{
			SendData("[CLEAR]",7,i);
			m_struConsoleInfo[i].StatusEmpty();
		}
		
	}
	for(i = 0 ; i < m_iHasChannel;i++)
	{
		m_struChannelInfo[i].StatusEmpty();
		m_struChannelInfo[i].StatusEmpty();
	}
}

void CVideoIntecomSrvDlg::OnMenuClearLog() 
{
	// TODO: Add your command handler code here
	m_listAllLog.DeleteAllItems();
}

/*********************************************************
函数:	OnMenuRestart
描述:	重新启动服务菜单事件
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::OnMenuRestart() 
{
	// TODO: Add your command handler code here

	OnMenuClear();
	CloseSystem();
	InitParamData();
	InitDevice();
}

/*********************************************************
函数:	OnMenuRestart
描述:	重写创建窗体
输入:	lpCreateStruct 窗机对象信息结构
输出:	none
返回:	none
**********************************************************/
int CVideoIntecomSrvDlg::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	// TODO: Add your specialized creation code here
			m_tnid.cbSize=sizeof(NOTIFYICONDATA);
	m_tnid.hWnd=this->m_hWnd;
	
	m_tnid.uFlags=NIF_MESSAGE|NIF_ICON|NIF_TIP;
	
	m_tnid.uCallbackMessage=MYWM_NOTIFYICON; 
	CString szToolTip;
	
	szToolTip=_T("可视对讲服务");
	
	_tcscpy(m_tnid.szTip, szToolTip);
	
	m_tnid.uID=IDR_MAINFRAME;
	
	HICON hIcon;
	
	hIcon=AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	
	m_tnid.hIcon=hIcon;
	
	::Shell_NotifyIcon(NIM_ADD,&m_tnid);
	
	if(hIcon)
		::DestroyIcon(hIcon);
	return 0;
}

LRESULT CVideoIntecomSrvDlg::WindowProc(UINT message, WPARAM wParam, LPARAM lParam) 
{
	// TODO: Add your specialized code here and/or call the base class
		// TODO: Add your specialized creation code here
	switch(message)
	{
	case MYWM_NOTIFYICON: 
		if(lParam==WM_LBUTTONDBLCLK)
		{
			//鼠标双击时主窗口出现
			AfxGetApp()->m_pMainWnd->ShowWindow(SW_SHOW);
		}
		else if(lParam==WM_RBUTTONDOWN)
		{ 
			//鼠标右键单击弹出菜单
		//	CMenu menu;
		//	menu.LoadMenu(IDR_RIGHT_MENU); 
		//	//载入事先定义的菜单
		//	CMenu* pMenu=menu.GetSubMenu(0);
			
		/*	CPoint pos;
			GetCursorPos(&pos);
			
			::SetForegroundWindow(this->m_hWnd);
			pMenu->TrackPopupMenu(TPM_LEFTALIGN|TPM_RIGHTBUTTON,pos.x,pos.y,AfxGetMainWnd());*/
		}
		break;
	case WM_SYSCOMMAND: 
		//如果是系统消息
		if(wParam==SC_MINIMIZE){ 
			//接收到最小化消息时主窗口隐藏
			AfxGetApp()->m_pMainWnd->ShowWindow(SW_HIDE);
			return 0;
		}
		break;
	}
	return CDialog::WindowProc(message, wParam, lParam);
}

/*********************************************************
函数:	OnNMCustomdrawList
描述:	Lisctrl控件背景颜色设置
输入:	pNMHDR listctrl控件信息 pResult  
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::OnNMCustomdrawList(NMHDR *pNMHDR, LRESULT *pResult)
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
		
		clrNewTextColor = RGB( 0, 0, 223 );//设置字体颜色为红色
		
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
函数:	OnMenuBloadCast
描述:	广播菜单事件
输入:	none
输出:	none
返回:	none
**********************************************************/
void CVideoIntecomSrvDlg::OnMenuBloadCast() 
{
	// TODO: Add your command handler code here
	if(!m_bBloadCast)
	{
		OnMenuClear();
		
		if (!NET_DVR_ClientAudioStart_V30(NULL, NULL))
		{
			AddLog(-1, OPERATION_FAIL_T, "NET_DVR_ClientAudioStart_V30");
		}
		else
		{
			AddLog(-1, OPERATION_SUCC_T, "NET_DVR_ClientAudioStart_V30");
		}

		for(int i =0; i< m_iHasChannel;i++)
		{

			if(m_struDeviceInfo[i].lLoginID >= 0 )
			{
				if(!NET_DVR_AddDVR_V30(m_struDeviceInfo[i].lLoginID,i+1))
					AddLog(i, OPERATION_FAIL_T, "NET_DVR_AddDVR_V30 audio[%d]", i+1);
				else
					AddLog(i, OPERATION_SUCC_T, "NET_DVR_AddDVR_V30 audio[%d]", i+1);
			}
		}
//		GetDlgItem(IDC_BLOAD_CAST)->SetWindowText("停止广播");
	}
	else
	{
		if (!NET_DVR_ClientAudioStop())
		{
			AddLog(-1, OPERATION_FAIL_T, "NET_DVR_ClientAudioStop");
		}
		else
		{
			AddLog(-1, OPERATION_SUCC_T, "NET_DVR_ClientAudioStop");
		}
	
	//	GetDlgItem(IDC_BLOAD_CAST)->SetWindowText("开始广播[&B]");
	}
	m_bBloadCast = !m_bBloadCast;
}
