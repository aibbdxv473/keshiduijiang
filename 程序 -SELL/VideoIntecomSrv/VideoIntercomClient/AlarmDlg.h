#if !defined(AFX_ALARMDLG_H__F91538AE_B5C5_49F8_8A0E_CBC82FC957D9__INCLUDED_)
#define AFX_ALARMDLG_H__F91538AE_B5C5_49F8_8A0E_CBC82FC957D9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AlarmDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAlarmDlg dialog

class CAlarmDlg : public CDialog
{
// Construction
public:
	void Close();
	CAlarmDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAlarmDlg)
	enum { IDD = IDD_DLG_ALARM };
	CString	m_strAlarmInfo;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAlarmDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAlarmDlg)
	afx_msg void OnBtnAccept();
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnClose();
	afx_msg void OnBtnRecv2();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ALARMDLG_H__F91538AE_B5C5_49F8_8A0E_CBC82FC957D9__INCLUDED_)
