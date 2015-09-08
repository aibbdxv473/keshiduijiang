#if !defined(AFX_SETUPDLG_H__E5FBB70C_20E7_4CE2_B280_0CE3F8A10B36__INCLUDED_)
#define AFX_SETUPDLG_H__E5FBB70C_20E7_4CE2_B280_0CE3F8A10B36__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SetUpDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSetUpDlg dialog

class CSetUpDlg : public CDialog
{
// Construction
public:
	CString GetDirectoryPath();
	CSetUpDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSetUpDlg)
	enum { IDD = IDD_DLG_SETUP };
	CIPAddressCtrl	m_CtlSrvIP;
	CString	m_sPicPath;
	CString	m_sRecordPath;
	int		m_iConnTime;
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
	afx_msg void OnBtnPath1();
	afx_msg void OnBtnPath2();
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SETUPDLG_H__E5FBB70C_20E7_4CE2_B280_0CE3F8A10B36__INCLUDED_)
