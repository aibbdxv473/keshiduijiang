#if !defined(AFX_SETUPDLG_H__698392FC_7291_45AE_B9E6_D3F3CC2B17B4__INCLUDED_)
#define AFX_SETUPDLG_H__698392FC_7291_45AE_B9E6_D3F3CC2B17B4__INCLUDED_

#include "IniFile.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SetUpDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSetUpDlg dialog
#define MAXCHANNEL 30
#define MAXCONSOLE 30
#define HEIGHT 21
#define WIDTH 120
#define TOP 210
#define LEFT  90
class CSetUpDlg : public CDialog
{
// Construction
public:
	CIniFile inifile;
	void UpdateChannel();
	void InitData();
	CEdit m_editChannelName[MAXCHANNEL];
	CEdit m_editDeviceName[MAXCHANNEL];
	CEdit m_editDeviceIP[MAXCHANNEL];
	CStatic m_staticNum[MAXCHANNEL];
	BOOL  m_bCreat[MAXCHANNEL];
	CSetUpDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSetUpDlg)
	enum { IDD = IDD_DLG_SETUP };
	CEdit	m_editUser;
	int		m_iChannelNum;
	CString	m_txtPwd;
	CString	m_txtUser;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSetUpDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSetUpDlg)
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	virtual BOOL OnInitDialog();
	afx_msg void OnBtnOk();
	afx_msg void OnBtnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SETUPDLG_H__698392FC_7291_45AE_B9E6_D3F3CC2B17B4__INCLUDED_)
