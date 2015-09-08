// RecordDlg.cpp : implementation file
//

#include "stdafx.h"
#include "VideoIntercomClient.h"
#include "RecordDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRecordDlg dialog

void CALLBACK DisplayCBFun(long nPort,char * pBuf,long nSize,long nWidth,long nHeight,long nStamp,long nType,long nReserved)
{
/*	if (!g_bLocalCapPic)
	{
		return;
	}
	//switch function, of time-consuming; do not call it if you don't wanna save pic
	CString csDir;
	CString csFile;
	CTime time=CTime::GetCurrentTime();
	csDir.Format("%s",g_struLocalParam.chPictureSavePath);
	csFile.Format("%s\\Picture_%s_%02d_%4d%02d%02d_%02d%02d%02d_%d.bmp",csDir.GetBuffer(0), g_pDlgPlayLocalFile->m_csDeviceIP.GetBuffer(0),g_pDlgPlayLocalFile->m_iCurPlayChan,\
		time.GetYear(), time.GetMonth(), time.GetDay(), time.GetHour(), time.GetMinute(), time.GetSecond(), GetTickCount());
	if (!PlayM4_ConvertToBmpFile(pBuf, nSize, nWidth, nHeight, nType, csFile.GetBuffer(csFile.GetLength())))
	{
	}
	else
	{
	}
	g_bLocalCapPic=FALSE;*/
}

void CALLBACK FileRefDone(DWORD nReserved,DWORD nUser)
{
	CRecordDlg* pOwner=(CRecordDlg*)nUser;
	pOwner->UpdateStepBackUI(TRUE);	
}

CRecordDlg::CRecordDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRecordDlg::IDD, pParent)
	, m_bPlay(FALSE)
	, m_bPause(FALSE)
	, m_bSound(FALSE)
	, m_bStep(FALSE)
	, m_bFullScreen(FALSE)
	, m_iTotalSeconds(0)
	,m_bFileRefCreated(false)
{
	//{{AFX_DATA_INIT(CRecordDlg)
		m_hPlayEnableIcon =			AfxGetApp()->LoadIcon(IDI_PLAY_ENABLE);
	m_hPlayDisableIcon =		AfxGetApp()->LoadIcon(IDI_PLAY_DISABLE);
	m_hPauseEnableIcon =		AfxGetApp()->LoadIcon(IDI_PAUSE_ENABLE);
	m_hPauseDisableIcon =		AfxGetApp()->LoadIcon(IDI_PAUSE_DISABLE);
	m_hStopEnableIcon =			AfxGetApp()->LoadIcon(IDI_STOP_ENABLE);
	m_hStopDisableIcon =		AfxGetApp()->LoadIcon(IDI_STOP_DISABLE);
	m_hSoundStartIcon=			AfxGetApp()->LoadIcon(IDI_SOUND_ENABLE);
	m_hSoundStopIcon=			AfxGetApp()->LoadIcon(IDI_SOUND_DISABLE);
	m_hGotoHeadDisableIcon =	AfxGetApp()->LoadIcon(IDI_GOTOSTART_DISABLE);
	m_hGotoTailDisableIcon =	AfxGetApp()->LoadIcon(IDI_GOTOEND_DISABLE);
	m_hFastDisableIcon =		AfxGetApp()->LoadIcon(IDI_FASTFORWARD_DISABLE);
	m_hSlowDisableIcon=			AfxGetApp()->LoadIcon(IDI_FASTBACKWARD_DISABLE);
	m_hGotoHeadEnableIcon =		AfxGetApp()->LoadIcon(IDI_GOTOSTART_ENABLE);
	m_hGotoTailEnableIcon =		AfxGetApp()->LoadIcon(IDI_GOTOEND_ENABLE);
	m_hFastEnableIcon =			AfxGetApp()->LoadIcon(IDI_FASTFORWARD_ENABLE);
	m_hSlowEnableIcon =			AfxGetApp()->LoadIcon(IDI_FASTBACKWARD_ENABLE);
	m_hStepEnableIcon=			AfxGetApp()->LoadIcon(IDI_STEP_ENABLE);
	m_hStepDisableIcon =		AfxGetApp()->LoadIcon(IDI_STEP_DISABLE);
	m_hStepBackEnableIcon =		AfxGetApp()->LoadIcon(IDI_STEPBACK_ENABLE);
	m_hStepBackDisableIcon =	AfxGetApp()->LoadIcon(IDI_STEPBACK_DISABLE);
	m_hCaptureIcon	=			AfxGetApp()->LoadIcon(IDI_PIC);
	m_hCloseIcon =				AfxGetApp()->LoadIcon(IDI_CLOSE);
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CRecordDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRecordDlg)
	DDX_Control(pDX, IDC_SLIDER_LOCAL_VOLUME, m_sliderVolume);
	DDX_Control(pDX, IDC_SLIDER_LOCAL_PLAY_PROGRESS, m_sliderPlayProgress);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRecordDlg, CDialog)
	//{{AFX_MSG_MAP(CRecordDlg)
	ON_WM_LBUTTONDBLCLK()
	ON_BN_CLICKED(IDC_BTN_LOCAL_PLAY, OnBtnLocalPlay)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BTN_LOCAL_STOP, OnBtnLocalStop)
	ON_BN_CLICKED(IDC_BTN_LOCAL_SLOW, OnBtnLocalSlow)
	ON_BN_CLICKED(IDC_BTN_LOCAL_FAST, OnBtnLocalFast)
	ON_BN_CLICKED(IDC_BTN_LOCAL_PIC_SNATCH, OnBtnLocalPicSnatch)
	ON_BN_CLICKED(IDC_BTN_LOCAL_STEP_BACK, OnBtnLocalStepBack)
	ON_BN_CLICKED(IDC_BTN_LOCAL_STEP_FORWARD, OnBtnLocalStepForward)
	ON_BN_CLICKED(IDC_BTN_LOCAL_SOUND, OnBtnLocalSound)
	ON_WM_CLOSE()
	ON_WM_CTLCOLOR()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_HSCROLL()
	ON_BN_CLICKED(IDC_BTN_CLOSE, OnBtnClose)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRecordDlg message handlers

BOOL CRecordDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	RemoveWindowSkin(GetDlgItem(IDC_STATIC_LOCAL_FILE_WND)->m_hWnd);
	
	m_hPlayWnd = GetDlgItem(IDC_STATIC_LOCAL_FILE_WND)->m_hWnd;
	InitUI();
	SetStopState();
	OnBtnLocalPlay();
	UpdateScreen();
	//	EnableFlashWnd(false);
	UpdateData(FALSE);
	// TODO: Add extra initialization here
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CRecordDlg::OnLButtonDblClk(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	UpdateScreen();
	CDialog::OnLButtonDblClk(nFlags, point);
}

void CRecordDlg::InitUI()
{
		CButton *pButton;

//	m_rcScreen=CRect(0,0,GetSystemMetrics(SM_CXSCREEN),GetSystemMetrics(SM_CYSCREEN));
	//initialize scroll
	m_sliderPlayProgress.SetRange(0,100);
	m_sliderPlayProgress.SetPos(0);
	m_sliderVolume.SetRange(0,0xffff);
	m_sliderVolume.SetPos(0x7fff);
	m_sliderPlayProgress.EnableWindow(FALSE);
	m_sliderVolume.EnableWindow(FALSE);

	RemoveWindowSkin(GetDlgItem(IDC_BTN_LOCAL_PLAY)->m_hWnd);
	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_PLAY); 
	pButton->SetIcon(m_hPlayDisableIcon);
	pButton->EnableWindow(FALSE);

	RemoveWindowSkin(GetDlgItem(IDC_BTN_LOCAL_STOP)->m_hWnd);
	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_STOP);
	pButton->SetIcon(m_hStopDisableIcon);
	pButton->EnableWindow(FALSE);
	
	RemoveWindowSkin(GetDlgItem(IDC_BTN_LOCAL_FAST)->m_hWnd);
	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_FAST);
	pButton->SetIcon(m_hFastDisableIcon);
	pButton->EnableWindow(FALSE);

	RemoveWindowSkin(GetDlgItem(IDC_BTN_LOCAL_SLOW)->m_hWnd);
	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_SLOW);
	pButton->SetIcon(m_hSlowDisableIcon);
	pButton->EnableWindow(FALSE);

	RemoveWindowSkin(GetDlgItem(IDC_BTN_LOCAL_STEP_FORWARD)->m_hWnd);
	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_STEP_FORWARD);
	pButton->SetIcon(m_hStepDisableIcon);
	pButton->EnableWindow(FALSE);

	RemoveWindowSkin(GetDlgItem(IDC_BTN_LOCAL_STEP_BACK)->m_hWnd);
	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_STEP_BACK);
	pButton->SetIcon(m_hStepBackDisableIcon);
	pButton->EnableWindow(FALSE);

	RemoveWindowSkin(GetDlgItem(IDC_BTN_LOCAL_PIC_SNATCH)->m_hWnd);
	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_PIC_SNATCH);
	pButton->SetIcon(m_hCaptureIcon);
	pButton->EnableWindow(FALSE);

	RemoveWindowSkin(GetDlgItem(IDC_BTN_LOCAL_SOUND)->m_hWnd);
	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_SOUND);
	pButton->SetIcon(m_hSoundStopIcon);
	pButton->EnableWindow(FALSE);
	RemoveWindowSkin(GetDlgItem(IDC_BTN_CLOSE)->m_hWnd);
	pButton = (CButton *)GetDlgItem(IDC_BTN_CLOSE);
	pButton->SetIcon(m_hCloseIcon);
}

void CRecordDlg::OnBtnLocalPlay() 
{
	// TODO: Add your control notification handler code here
		if (m_bPlay)
	{
		if (m_bStep)
		{
			if (PlayM4_Play(USED_PORT,m_hPlayWnd))
			{
		}
			
			SetPlayState();
			m_bStep=FALSE;
		}
		else
		{
			Pause();
		}
		return;
	}

	PlayBack();

	if (m_bPlay)
	{
		SetPlayState();
		Sound(TRUE);
		SetTimer(PLAY_TIMER,TIMER_INTERVAL,NULL);
	}
}

void CRecordDlg::PlayBack()
{
	int iFilePosSel = 0;
	CString csFileName;//path of video file
	CString csDeviceIP;
	CString csTemp;
	CString sTemp1;
	int nPos = 0;
	char szLan[128] = {0};
	UpdateData(TRUE);
	if (m_strPath.GetLength() == 0)
	{
		AfxMessageBox("请选择要播放的文件");
		return;
	}

	PlayM4_SetFileRefCallBack(USED_PORT,FileRefDone,(DWORD)this);
	csFileName = m_strPath;
	if (csFileName.GetLength()==0)
	{
		return;
	}
	csTemp.Format("%s",csFileName);
	nPos=csTemp.Find("\\",0);
	while (nPos>=0)
	{
		csDeviceIP.Format("%s",csTemp.Right(csTemp.GetLength()-nPos-1));
		csTemp.Format("%s",csDeviceIP);
		nPos=csTemp.Find("\\",0);
	}
	nPos=csTemp.Find("_",0);
	csDeviceIP.Format("%s",csTemp.Left(nPos));

	if (!PlayM4_OpenFile(USED_PORT, csFileName.GetBuffer(csFileName.GetLength())))
	{
		MessageBox("PlayM4_OpenFile failed");
		return;
	}
//	sTemp1 = m_listFile.GetItemText(iFilePosSel, 1);
//	m_iChanIndex = atoi(sTemp1);
	m_iTotalSeconds=PlayM4_GetFileTime(USED_PORT);
	if (m_iTotalSeconds<=0)
	{
		PlayM4_CloseFile(USED_PORT);
		AfxMessageBox("文件大小为0");
		return;
	}

	if (!PlayM4_SetDisplayCallBack(USED_PORT,DisplayCBFun))
	{
	
	}

	if ((m_bPlay=PlayM4_Play(USED_PORT,m_hPlayWnd))==FALSE)
	{
		PlayM4_CloseFile(USED_PORT);
		return;
	}

}

void CRecordDlg::SetPlayState()
{
		CButton *pButton;

	m_sliderPlayProgress.EnableWindow(TRUE);
	m_sliderVolume.EnableWindow(TRUE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_PLAY);
	pButton->SetIcon(m_hPauseEnableIcon);
	pButton->EnableWindow(TRUE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_STOP);
	pButton->SetIcon(m_hStopEnableIcon);
	pButton->EnableWindow(TRUE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_FAST);
	pButton->SetIcon(m_hFastEnableIcon);
	pButton->EnableWindow(TRUE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_SLOW);
	pButton->SetIcon(m_hSlowEnableIcon);
	pButton->EnableWindow(TRUE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_PIC_SNATCH);
	pButton->SetIcon(m_hCaptureIcon);
	pButton->EnableWindow(TRUE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_SOUND);
	if (m_bSound)
	{
		pButton->SetIcon(m_hSoundStartIcon);
	}
	else
	{
		pButton->SetIcon(m_hSoundStopIcon);
	}
	pButton->EnableWindow(TRUE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_STEP_FORWARD);
	pButton->SetIcon(m_hStepEnableIcon);
	pButton->EnableWindow(TRUE);
}

void CRecordDlg::Pause()
{
		if (PlayM4_Pause(USED_PORT,!m_bPause))
	{
		m_bPause=!m_bPause;
	}
	else
	{
		MessageBox("PlayM4_Pause failed");
	}

	if (m_bPause)
	{
		SetPauseState();
	}
	else
	{
		SetPlayState();
	}
}

void CRecordDlg::Sound(BOOL bSound)
{
		if (!m_bPlay)
	{
		return;
	}

	if (bSound)
	{
		m_bSound=PlayM4_PlaySound(USED_PORT);
		PlayM4_SetVolume(USED_PORT,(WORD)m_sliderVolume.GetPos());
	}
	else
	{
		PlayM4_StopSound();
		m_bSound=FALSE;
	}

	if (m_bSound)
	{
		SetPlaySoundState();
	}
	else
	{
		SetStopSoundState();
	}
}

void CRecordDlg::UpdateStepBackUI(BOOL bEnable)
{
	m_bFileRefCreated=bEnable;
	CButton *pButton;
	if (m_bFileRefCreated)
	{
		pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_STEP_BACK);
		pButton->SetIcon(m_hStepBackEnableIcon);
		pButton->EnableWindow(TRUE);
	}
	else
	{
		pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_STEP_BACK);
		pButton->SetIcon(m_hStepBackDisableIcon);
		pButton->EnableWindow(FALSE);
	}
}

void CRecordDlg::SetPauseState()
{
	CButton *pButton;
	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_PLAY);
	pButton->SetIcon(m_hPlayEnableIcon);
	pButton->EnableWindow(TRUE);
}

void CRecordDlg::SetPlaySoundState()
{
		CButton *pButton;
	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_SOUND);
	pButton->SetIcon(m_hSoundStartIcon);
	pButton->EnableWindow(TRUE);
}

void CRecordDlg::SetStopSoundState()
{
		CButton *pButton;
	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_SOUND);
	pButton->SetIcon(m_hSoundStopIcon);
	pButton->EnableWindow(TRUE);
}

void CRecordDlg::PlayBackShowNormal()
{
	EnableFlashWnd(true);
		Invalidate(FALSE);
	UpdateWindow();
}

void CRecordDlg::EnableFlashWnd(BOOL bEnable)
{
		if (bEnable)
	{
		//THE same to multiplay
		GetDlgItem(IDC_STATIC_LOCAL_PLAY_STATUS)->ModifyStyle(0,WS_VISIBLE,0);
		GetDlgItem(IDC_BTN_LOCAL_PLAY)->ModifyStyle(0,WS_VISIBLE,0);
		GetDlgItem(IDC_BTN_LOCAL_STOP)->ModifyStyle(0,WS_VISIBLE,0);
		GetDlgItem(IDC_BTN_LOCAL_SLOW)->ModifyStyle(0,WS_VISIBLE,0);
		GetDlgItem(IDC_BTN_LOCAL_FAST)->ModifyStyle(0,WS_VISIBLE,0);
		GetDlgItem(IDC_BTN_LOCAL_SOUND)->ModifyStyle(0,WS_VISIBLE,0);
//		GetDlgItem(IDC_VOLUME_SLIDER)->ModifyStyle(0,WS_VISIBLE,0);
//		GetDlgItem(IDC_DATE_LOCAL_START)->ModifyStyle(0,WS_VISIBLE,0);
//		GetDlgItem(IDC_DATE_LOCAL_STOP)->ModifyStyle(0,WS_VISIBLE,0);
//		GetDlgItem(IDC_TIME_LOCAL_STOP)->ModifyStyle(0,WS_VISIBLE,0);
//		GetDlgItem(IDC_TIME_LOCAL_START)->ModifyStyle(0,WS_VISIBLE,0);
//		GetDlgItem(IDC_COMBO_LOCAL_FILE_TYPE)->ModifyStyle(0,WS_VISIBLE,0);
//		GetDlgItem(IDC_BTN_SEARCH_LOCAL_LIST)->ModifyStyle(0,WS_VISIBLE,0);
		GetDlgItem(IDC_SLIDER_LOCAL_PLAY_PROGRESS)->ModifyStyle(0,WS_VISIBLE,0);
		GetDlgItem(IDC_BTN_LOCAL_PIC_SNATCH)->ModifyStyle(0,WS_VISIBLE,0);

	GetDlgItem(IDC_BTN_LOCAL_STEP_FORWARD)->ModifyStyle(0,WS_VISIBLE,0);
		GetDlgItem(IDC_BTN_LOCAL_STEP_BACK)->ModifyStyle(0,WS_VISIBLE,0);
//		GetDlgItem(IDC_BTN_DELETE_ALL_LOCAL_FILE)->ModifyStyle(0,WS_VISIBLE,0);
//		GetDlgItem(IDC_BTN_DELETE_LOCAL_FILE)->ModifyStyle(0,WS_VISIBLE,0);
	}
	else
	{
		//THE same to multiplay
		GetDlgItem(IDC_STATIC_LOCAL_PLAY_STATUS)->ModifyStyle(WS_VISIBLE,0,0);
		GetDlgItem(IDC_BTN_LOCAL_PLAY)->ModifyStyle(WS_VISIBLE,0,0);
		GetDlgItem(IDC_BTN_LOCAL_STOP)->ModifyStyle(WS_VISIBLE,0,0);
		GetDlgItem(IDC_BTN_LOCAL_SLOW)->ModifyStyle(WS_VISIBLE,0,0);
		GetDlgItem(IDC_BTN_LOCAL_FAST)->ModifyStyle(WS_VISIBLE,0,0);
		GetDlgItem(IDC_BTN_LOCAL_SOUND)->ModifyStyle(WS_VISIBLE,0,0);
//		GetDlgItem(IDC_VOLUME_SLIDER)->ModifyStyle(WS_VISIBLE,0,0);
		GetDlgItem(IDC_SLIDER_LOCAL_PLAY_PROGRESS)->ModifyStyle(WS_VISIBLE,0,0);
//		GetDlgItem(IDC_DATE_LOCAL_START)->ModifyStyle(WS_VISIBLE,0,0);
//		GetDlgItem(IDC_DATE_LOCAL_STOP)->ModifyStyle(WS_VISIBLE,0,0);
//		GetDlgItem(IDC_TIME_LOCAL_STOP)->ModifyStyle(WS_VISIBLE,0,0);
//		GetDlgItem(IDC_TIME_LOCAL_START)->ModifyStyle(WS_VISIBLE,0,0);
//		GetDlgItem(IDC_COMBO_LOCAL_FILE_TYPE)->ModifyStyle(WS_VISIBLE,0,0);
//		GetDlgItem(IDC_BTN_SEARCH_LOCAL_LIST)->ModifyStyle(WS_VISIBLE,0,0);
		GetDlgItem(IDC_BTN_LOCAL_PIC_SNATCH)->ModifyStyle(WS_VISIBLE,0,0);

		GetDlgItem(IDC_BTN_LOCAL_STEP_FORWARD)->ModifyStyle(WS_VISIBLE,0,0);
		GetDlgItem(IDC_BTN_LOCAL_STEP_BACK)->ModifyStyle(WS_VISIBLE,0,0);
//		GetDlgItem(IDC_BTN_DELETE_ALL_LOCAL_FILE)->ModifyStyle(WS_VISIBLE,0,0);
//		GetDlgItem(IDC_BTN_DELETE_LOCAL_FILE)->ModifyStyle(WS_VISIBLE,0,0);
	}	
}

void CRecordDlg::SetStopState()
{
		CButton *pButton;

	m_sliderPlayProgress.SetPos(0);
	m_sliderPlayProgress.EnableWindow(FALSE);
	m_sliderVolume.EnableWindow(FALSE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_PLAY);
	pButton->SetIcon(m_hPlayEnableIcon);
	pButton->EnableWindow(TRUE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_STOP);
	pButton->SetIcon(m_hStopDisableIcon);
	pButton->EnableWindow(FALSE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_FAST);
	pButton->SetIcon(m_hFastDisableIcon);
	pButton->EnableWindow(FALSE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_SLOW);
	pButton->SetIcon(m_hSlowDisableIcon);
	pButton->EnableWindow(FALSE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_STEP_FORWARD);
	pButton->SetIcon(m_hStepDisableIcon);
	pButton->EnableWindow(FALSE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_STEP_BACK);
	pButton->SetIcon(m_hStepBackDisableIcon);
	pButton->EnableWindow(FALSE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_PIC_SNATCH);
	pButton->SetIcon(m_hCaptureIcon);
	pButton->EnableWindow(FALSE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_SOUND);
	pButton->SetIcon(m_hSoundStopIcon);
	pButton->EnableWindow(FALSE);

	pButton = (CButton *)GetDlgItem(IDC_BTN_LOCAL_STEP_FORWARD);
	pButton->SetIcon(m_hStepDisableIcon);
	pButton->EnableWindow(FALSE);

	UpdateStepBackUI(FALSE);	
}

void CRecordDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
		if (nIDEvent==PLAY_TIMER)
	{
		ShowPlayBackState();
	}
	CDialog::OnTimer(nIDEvent);
}

void CRecordDlg::ShowPlayBackState()
{
		if (m_iTotalSeconds == 0)
	{
		return;
	}

	DWORD nCurSecond=PlayM4_GetPlayedTime(USED_PORT);
	m_sliderPlayProgress.SetPos(nCurSecond*100/m_iTotalSeconds);
	CString csStatus;
	csStatus.Format("%02d:%02d:%02d/%02d:%02d:%02d",\
		nCurSecond/3600,(nCurSecond%3600)/60,nCurSecond%60,\
		m_iTotalSeconds/3600,(m_iTotalSeconds%3600)/60,m_iTotalSeconds%60);
	float fCurPos = PlayM4_GetPlayPos(USED_PORT);
	if (fCurPos <= 1.00+0.000001 && fCurPos >= 1.00-0.000001)
	{
		OnBtnLocalStop();
	}


	GetDlgItem(IDC_STATIC_LOCAL_PLAY_STATUS)->SetWindowText(csStatus);
}

void CRecordDlg::OnBtnLocalStop() 
{
	// TODO: Add your control notification handler code here
		if (!m_bPlay)
	{
		return;
	}
	m_sliderPlayProgress.SetPos(0); 
	CString csText;	
	GetDlgItem(IDC_STATIC_LOCAL_PLAY_STATUS)->SetWindowText(csText);
	KillTimer(PLAY_TIMER);
	csText.Format("%d/%d  %02d:%02d:%02d/%02d:%02d:%02d",0,0,0,0,0,0,0,0);
	UpdateData(FALSE);
	Invalidate(TRUE);
	StopPlayBack();
}

void CRecordDlg::StopPlayBack()
{
	m_bPause=FALSE;
	if (m_bPlay)
	{
		m_bPlay=FALSE;
		PlayM4_Stop(USED_PORT);
		PlayM4_CloseFile(USED_PORT);
		if (m_bSound)
		{
			Sound(FALSE);
		}
		SetStopState();
	}
}

void CRecordDlg::OnBtnLocalSlow() 
{
	// TODO: Add your control notification handler code here
	PlayM4_Slow(USED_PORT);
}

void CRecordDlg::OnBtnLocalFast() 
{
	// TODO: Add your control notification handler code here
	PlayM4_Fast(USED_PORT);
}

void CRecordDlg::OnBtnLocalPicSnatch() 
{
	// TODO: Add your control notification handler code here
	
}

void CRecordDlg::OnBtnLocalStepBack() 
{
	// TODO: Add your control notification handler code here
		if (m_bPause)
	{
		Pause();
	}
	PlayM4_OneByOneBack(USED_PORT);
	m_bStep=TRUE;
	SetPauseState();
}

void CRecordDlg::OnBtnLocalStepForward() 
{
	// TODO: Add your control notification handler code here
		if (m_bPause)
	{
		Pause();
	}
	PlayM4_OneByOne(USED_PORT);
	m_bStep=TRUE;
	SetPauseState();
}

void CRecordDlg::OnBtnLocalSound() 
{
	// TODO: Add your control notification handler code here
		Sound(!m_bSound);
}

void CRecordDlg::OnClose() 
{
	// TODO: Add your message handler code here and/or call default
	OnBtnLocalStop();

	CDialog::OnClose();
}

HBRUSH CRecordDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	// TODO: Change any attributes of the DC here
	switch   (nCtlColor)     
	{                 
	case   CTLCOLOR_DLG:                     
		{                             
			HBRUSH   B   =   CreateSolidBrush(RGB(0,   0,   0)); 
			return   B; 
		}          
	default:   
		{       
			//	 pDC->SetBkMode(TRANSPARENT);   
			
			return  hbr;   
		}            
		
	}    
	// TODO: Return a different brush if the default is not desired
	return hbr;
}

void CRecordDlg::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
		m_bCheck = true;
	CDialog::OnLButtonDown(nFlags, point);
}

void CRecordDlg::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
		m_bCheck = false;
	CDialog::OnLButtonUp(nFlags, point);
}

void CRecordDlg::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if (m_bCheck)
	{
		ReleaseCapture();
		SendMessage(WM_SYSCOMMAND,SC_MOVE+HTCAPTION,0);
	}
	CDialog::OnMouseMove(nFlags, point);
}

void CRecordDlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar) 
{
	// TODO: Add your message handler code here and/or call default
	if (pScrollBar->m_hWnd==m_sliderPlayProgress.m_hWnd&&m_bPlay)
	{
		nPos = m_sliderPlayProgress.GetPos();
		m_sliderPlayProgress.SetPos(nPos);
		PlayM4_SetPlayPos(USED_PORT,(float)nPos/100);
	}
	else if (pScrollBar->m_hWnd == m_sliderVolume.m_hWnd&&m_bSound)
	{
		nPos = m_sliderVolume.GetPos();
		m_sliderVolume.SetPos(nPos);
		PlayM4_SetVolume(USED_PORT,(WORD)m_sliderVolume.GetPos());
	}
	CDialog::OnHScroll(nSBCode, nPos, pScrollBar);
}

void CRecordDlg::UpdateScreen()
{
	int begin =0,width = 0,height = 0;
	int   screenX   =  0;
	 int   screenY = 0;
	 if(m_bFullScreen)
	 {
		 screenX   =   GetSystemMetrics(SM_CXFULLSCREEN);   
		 screenY   =   GetSystemMetrics(SM_CYFULLSCREEN);   
		 
		 begin = 10;
		 width = 24;
		 height = 24;
		 MoveWindow(0,0,
		 screenX,screenY,FALSE);
	 }
	 else
	 {
		 screenX   =   512;
		 screenY   =   376;
		 
		 begin = 10;
		 width = 24;
		 height = 24;
		 MoveWindow((GetSystemMetrics(SM_CXFULLSCREEN) - 512)/2,(GetSystemMetrics(SM_CYFULLSCREEN) - 376)/2,
		 512,376);
	 }
	 
	 CRect clientrect;
	 GetClientRect(&clientrect);
	 screenX = clientrect.Width();
	screenY = clientrect.Height();
	 GetDlgItem(IDC_STATIC_LOCAL_FILE_WND)->MoveWindow(0,0,
		 clientrect.Width(),clientrect.Height()-60);
	 GetDlgItem(IDC_SLIDER_LOCAL_PLAY_PROGRESS)->GetClientRect(&clientrect);
	 GetDlgItem(IDC_SLIDER_LOCAL_PLAY_PROGRESS)->MoveWindow(clientrect.left+10,screenY-55,
		 screenX - 20,clientrect.Height(),false);
	 
	 begin = 10; 
	 GetDlgItem(IDC_BTN_LOCAL_PLAY)->MoveWindow(begin,screenY-35,
		width,height,false);
	GetDlgItem(IDC_BTN_LOCAL_STOP)->MoveWindow(begin+width,screenY-35,
		width,height,false);
	GetDlgItem(IDC_BTN_LOCAL_SLOW)->MoveWindow(begin+width*2,screenY-35,
		width,height,false);
	GetDlgItem(IDC_BTN_LOCAL_FAST)->MoveWindow(begin+width*3,screenY-35,
		width,height,false);
	GetDlgItem(IDC_BTN_LOCAL_PIC_SNATCH)->MoveWindow(begin+width*4,screenY-35,
		width,height,false);
	GetDlgItem(IDC_BTN_LOCAL_STEP_BACK)->MoveWindow(begin+width*5,screenY-35,
		width,height,false);
	GetDlgItem(IDC_BTN_LOCAL_STEP_FORWARD)->MoveWindow(begin+width*6,screenY-35,
		width,height,false);
	GetDlgItem(IDC_BTN_LOCAL_SOUND)->MoveWindow(begin+width*7,screenY-35,
		width,height,false);
	begin= begin+width*8+5;
			GetDlgItem(IDC_SLIDER_LOCAL_VOLUME)->GetClientRect(&clientrect);
		GetDlgItem(IDC_SLIDER_LOCAL_VOLUME)->MoveWindow(begin,screenY-30,
		clientrect.Width(),clientrect.Height(),false);
		begin  = begin+clientrect.Width()+5;
		GetDlgItem(IDC_STATIC_LOCAL_PLAY_STATUS)->GetClientRect(&clientrect);
		GetDlgItem(IDC_STATIC_LOCAL_PLAY_STATUS)->MoveWindow(begin,screenY-35,
		screenX-begin- width-10,height,false);
		begin  = screenX - width - 5;
		GetDlgItem(IDC_BTN_CLOSE)->MoveWindow(begin,screenY-35,
		width,height,false);
		Invalidate();
		m_bFullScreen = !m_bFullScreen;
}

void CRecordDlg::OnBtnClose() 
{
	// TODO: Add your control notification handler code here
	OnBtnLocalStop();
	CDialog::OnOK();
}
