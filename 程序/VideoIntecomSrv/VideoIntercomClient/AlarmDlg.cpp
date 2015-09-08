// AlarmDlg.cpp : implementation file
//

#include "stdafx.h"
#include "VideoIntercomClient.h"
#include "AlarmDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAlarmDlg dialog


CAlarmDlg::CAlarmDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAlarmDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAlarmDlg)
	m_strAlarmInfo = _T("");
	//}}AFX_DATA_INIT
}


void CAlarmDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAlarmDlg)
	DDX_Text(pDX, IDC_ALARM_INFO, m_strAlarmInfo);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAlarmDlg, CDialog)
	//{{AFX_MSG_MAP(CAlarmDlg)
	ON_BN_CLICKED(IDC_BTN_ACCEPT, OnBtnAccept)
	ON_WM_CTLCOLOR()
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BTN_RECV2, OnBtnRecv2)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAlarmDlg message handlers

void CAlarmDlg::OnBtnAccept() 
{
	// TODO: Add your control notification handler code here
	g_pMainDlg->PostMessage(WM_SEND_CONNECT,0,0);
	Close();
}

void CAlarmDlg::Close()
{
	g_pMainDlg->m_bShowAlarmHint = false;
	KillTimer(1);
	CDialog::OnOK();
}

BOOL CAlarmDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
		RemoveWindowSkin(GetDlgItem(IDC_ALARM_INFO)->m_hWnd);
		SetTimer(1,1000,NULL);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

HBRUSH CAlarmDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	
 // TODO: Change any attributes of the DC here
		switch   (nCtlColor)     
	{                 
	case   CTLCOLOR_STATIC:   //静态文本         
		{       
			pDC->SetBkMode(TRANSPARENT);                 
			HBRUSH   B   =   CreateSolidBrush(RGB(0,   0,   0));   //控件背景颜色   
			pDC->SetTextColor(RGB(26,167,250));   //控件中的文字的颜色   
		//	pDC->SetTextColor(RGB(229,88,5));   //控件中的文字的颜色
			return   B;   
		}
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
	return hbr;
}

void CAlarmDlg::OnClose() 
{
	// TODO: Add your message handler code here and/or call default
	Close();

}

void CAlarmDlg::OnBtnRecv2() 
{
	// TODO: Add your control notification handler code here
	Close();
}

void CAlarmDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	::MessageBeep(3);
	CDialog::OnTimer(nIDEvent);
}
