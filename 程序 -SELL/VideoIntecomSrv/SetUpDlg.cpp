// SetUpDlg.cpp : implementation file
//

#include "stdafx.h"
#include "VideoIntecomSrv.h"
#include "SetUpDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSetUpDlg dialog


CSetUpDlg::CSetUpDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSetUpDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSetUpDlg)
	m_iChannelNum = 0;
	m_txtPwd = _T("");
	m_txtUser = _T("");
	//}}AFX_DATA_INIT
}


void CSetUpDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSetUpDlg)
	DDX_Control(pDX, IDC_EDIT_USER, m_editUser);
	DDX_Text(pDX, IDC_EDIT_CHANNEL_NUM, m_iChannelNum);
	DDX_Text(pDX, IDC_EDIT_PASSWORD, m_txtPwd);
	DDX_Text(pDX, IDC_EDIT_USER, m_txtUser);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSetUpDlg, CDialog)
	//{{AFX_MSG_MAP(CSetUpDlg)
	ON_WM_VSCROLL()
	ON_BN_CLICKED(IDC_BTN_OK, OnBtnOk)
	ON_BN_CLICKED(IDC_BTN_CANCEL, OnBtnCancel)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSetUpDlg message handlers

void CSetUpDlg::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar) 
{
	// TODO: Add your message handler code here and/or call default
	if(nSBCode==SB_ENDSCROLL)
		return;
	if(pScrollBar->GetDlgCtrlID()==IDC_SPIN)
	{
		CString str;
		CSpinButtonCtrl* pSpinBtCtrl=(CSpinButtonCtrl*)pScrollBar;
		pSpinBtCtrl->GetBuddy()->GetWindowText(str);
		 int pos=atoi(str);
		 m_iChannelNum = pos;
		 if(m_iChannelNum > 30)
		 {
			m_iChannelNum = 30;
			UpdateData(false);
		 }
		 else if(m_iChannelNum <=0)
		 {

		 }
		 else
		 {
			 UpdateChannel();
		 }
	}
		CDialog::OnVScroll(nSBCode, nPos, pScrollBar);

}

BOOL CSetUpDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
//	(CEdit*)GetDlgItem(IDC_EDIT_USER)->Set(WS_CHILD|WS_VISIBLE|WS_BORDER);
	InitData();
	(CEdit*)GetDlgItem(IDC_EDIT_USER)->ModifyStyle(0,WS_BORDER,0);
	(CEdit*)GetDlgItem(IDC_EDIT_CHANNEL_NUM)->ModifyStyle(0,WS_BORDER,0);
	(CEdit*)GetDlgItem(IDC_EDIT_PASSWORD)->ModifyStyle(0,WS_BORDER,0);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CSetUpDlg::InitData()
{
	for(int i = 0 ;i <MAXCHANNEL ; i++)
	{
		m_bCreat[i] = false;
	}

	inifile.OpenFile("VISrv.ini");
	m_iChannelNum = inifile.ReadInteger("DEVICE","ChannelNum",0);
	 m_txtUser= inifile.ReadString("DEVICE","LoginUserName ","admin");
	m_txtPwd= inifile.ReadString("DEVICE","LoginPwd ","12345");

	UpdateChannel();
	UpdateData(false);
}

void CSetUpDlg::UpdateChannel()
{
	CString sChannelNum,strKey = "",strTemp = "";
	for(int i = 0 ;i <m_iChannelNum ; i++)
	{
		if(!m_bCreat[i])
		{
			sChannelNum.Format("%d",i+1);
			m_staticNum[i].Create(sChannelNum,WS_CHILD|WS_VISIBLE,CRect(LEFT - 40,TOP+(HEIGHT+5)*i,LEFT-10,TOP+(5+HEIGHT)*i+HEIGHT),this,0);
			m_editChannelName[i].Create(WS_CHILD|WS_VISIBLE|WS_BORDER,CRect(LEFT ,TOP+(HEIGHT+5)*i,LEFT+WIDTH,TOP+(5+HEIGHT)*i+HEIGHT),this,0); 
			m_editDeviceName[i].Create(WS_CHILD|WS_VISIBLE|WS_BORDER,CRect(LEFT+WIDTH +10 ,TOP+(HEIGHT+5)*i,
				LEFT+2*WIDTH +10,TOP+(5+HEIGHT)*i+HEIGHT),this,0); 
			m_editDeviceIP[i].Create(WS_CHILD|WS_VISIBLE|WS_BORDER,CRect(LEFT+WIDTH*2 +20 ,TOP+(HEIGHT+5)*i,
				LEFT+3*WIDTH +20,TOP+(5+HEIGHT)*i+HEIGHT),this,0);
			m_bCreat[i] = true;
			
			strKey.Format("DeviceAddress%d",i+1);
			strTemp= inifile.ReadString("DEVICE",strKey,"127.0.0.1");
			m_editDeviceIP[i].SetWindowText(strTemp);
			
			strKey.Format("DeviceName%d",i+1);
			strTemp = inifile.ReadString("DEVICE",strKey,strKey);
			m_editDeviceName[i].SetWindowText(strTemp);
			
			strKey.Format("ChannelName%d",i+1);
			strTemp = inifile.ReadString("DEVICE",strKey,strKey);
			m_editChannelName[i].SetWindowText(strTemp);
		}
		else
		{
			m_staticNum[i].ShowWindow(SW_SHOW);
			m_editChannelName[i].ShowWindow(SW_SHOW);
			m_editDeviceName[i].ShowWindow(SW_SHOW);
			m_editDeviceIP[i].ShowWindow(SW_SHOW);
		}
	}
	for(i = m_iChannelNum; i < MAXCHANNEL;i++)
	{
		if(m_bCreat[i])
		{
			m_staticNum[i].ShowWindow(SW_HIDE);
			m_editChannelName[i].ShowWindow(SW_HIDE);
			m_editDeviceName[i].ShowWindow(SW_HIDE);
			m_editDeviceIP[i].ShowWindow(SW_HIDE);
		}
	}
}

void CSetUpDlg::OnBtnOk() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	CString sChannelNum,strKey = "",strTemp = "";
	inifile.WriteInteger("DEVICE","ChannelNum",m_iChannelNum);
	inifile.WriteString("DEVICE","LoginUserName ",m_txtUser);
	inifile.WriteString("DEVICE","LoginPwd ",m_txtPwd);
	for(int i = 0 ;i <m_iChannelNum ; i++)
	{
		if(m_bCreat[i])
		{
			
			m_bCreat[i] = true;
			
			strKey.Format("DeviceAddress%d",i+1);
			m_editDeviceIP[i].GetWindowText(strTemp);
			inifile.WriteString("DEVICE",strKey,strTemp);
			
			strKey.Format("DeviceName%d",i+1);
			m_editDeviceName[i].GetWindowText(strTemp);
			inifile.WriteString("DEVICE",strKey,strTemp);
			
			
			strKey.Format("ChannelName%d",i+1);
			m_editChannelName[i].GetWindowText(strTemp);
			inifile.WriteString("DEVICE",strKey,strTemp);
			
		}
	}
	MessageBox("系统设置成功");
	CDialog::OnOK();
}


void CSetUpDlg::OnBtnCancel() 
{
	// TODO: Add your control notification handler code here
	CDialog::OnCancel();
}
