// SetUpDlg.cpp : implementation file
//

#include "stdafx.h"
#include "VideoIntercomClient.h"
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
	m_sPicPath = _T("");
	m_sRecordPath = _T("");
	m_iConnTime = 0;
	//}}AFX_DATA_INIT
}


void CSetUpDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSetUpDlg)
	DDX_Control(pDX, IDC_IPADDRESS1, m_CtlSrvIP);
	DDX_Text(pDX, IDC_EDIT_PICPATH, m_sPicPath);
	DDX_Text(pDX, IDC_EDIT_RECORDPATH, m_sRecordPath);
	DDX_Text(pDX, IDC_EDIT_CONNECT_TIME, m_iConnTime);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSetUpDlg, CDialog)
	//{{AFX_MSG_MAP(CSetUpDlg)
	ON_BN_CLICKED(IDC_BTN_PATH1, OnBtnPath1)
	ON_BN_CLICKED(IDC_BTN_PATH2, OnBtnPath2)
	ON_WM_CTLCOLOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSetUpDlg message handlers

CString CSetUpDlg::GetDirectoryPath()
{
	LPITEMIDLIST pidlRoot=NULL;
	SHGetSpecialFolderLocation(m_hWnd,CSIDL_DRIVES,&pidlRoot);
	BROWSEINFO bi;   //the input parameters needed
	CString strDisplayName;  
	bi.hwndOwner=GetSafeHwnd();   //get handle value of parent window 
	bi.pidlRoot=pidlRoot;   
	bi.pszDisplayName=strDisplayName.GetBuffer(MAX_PATH+1);   //get buffer pointer
	char szLan[32] = {0};
	bi.lpszTitle="ÎÄ¼þ¼Ð";   //set title
	bi.ulFlags=BIF_RETURNONLYFSDIRS;   //set flag
	bi.lpfn=NULL;
	bi.lParam=0;
	bi.iImage=0;   //The above parameters are not related to the settings, better set up,
	LPITEMIDLIST lpIDList= SHBrowseForFolder(&bi);	//open dialog
	strDisplayName.ReleaseBuffer();   //correspond to GetBuffer()
	char pPath[MAX_PATH];
	CString Str;
	if (lpIDList)
	{
		SHGetPathFromIDList (lpIDList, pPath);
		Str=pPath;
	}
	return Str;
}

void CSetUpDlg::OnBtnPath1() 
{
	// TODO: Add your control notification handler code here
	CString csPath = GetDirectoryPath();
	if (csPath != "")
	{
		m_sPicPath = csPath;
		UpdateData(FALSE);
	}
}

void CSetUpDlg::OnBtnPath2() 
{
	// TODO: Add your control notification handler code here
		CString csPath = GetDirectoryPath();
	if (csPath != "")
	{
		m_sRecordPath = csPath;
		UpdateData(FALSE);
	}
}

BOOL CSetUpDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();

	// TODO: Add extra initialization here
	CIniFile inifile;
	inifile.OpenFile("VIClient.ini");
	CString strTemp;
	strTemp= inifile.ReadString("SYSTEM","IP","127.0.0.1");
	m_CtlSrvIP.SetWindowText(strTemp);
	m_sRecordPath = inifile.ReadString("SYSTEM","RecordPath","d:");
	m_sPicPath = inifile.ReadString("SYSTEM","PicPath","d:");
	m_iConnTime = inifile.ReadInteger("SYSTEM","ConnectTime",2);
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CSetUpDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData();
	CIniFile inifile;
	inifile.OpenFile("VIClient.ini");
		CString strTemp;
		m_CtlSrvIP.GetWindowText(strTemp);
	inifile.WriteString("SYSTEM","IP",strTemp);
	inifile.WriteString("SYSTEM","RecordPath",m_sRecordPath);
	inifile.WriteString("SYSTEM","PicPath",m_sPicPath);
	inifile.WriteInteger("SYSTEM","ConnectTime",m_iConnTime);
	CDialog::OnOK();
}

HBRUSH CSetUpDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	// TODO: Change any attributes of the DC here
			switch   (nCtlColor)     
	{                 

	case   CTLCOLOR_DLG:                     
		{                             
			HBRUSH   B   =   CreateSolidBrush(RGB(223,  224,   216)); 
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
