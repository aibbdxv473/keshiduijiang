// VideoIntercomDlg.h : header file
//

#if !defined(AFX_VIDEOINTERCOMDLG_H__B1D2763E_75B2_4145_8999_D9E6B148943E__INCLUDED_)
#define AFX_VIDEOINTERCOMDLG_H__B1D2763E_75B2_4145_8999_D9E6B148943E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CVideoIntercomDlg dialog

class CVideoIntercomDlg : public CDialog
{
// Construction
public:
	LONG m_lListenHandle;
	LONG lFortifyHandle;
	LONG g_lVoiceHandle;
	LONG m_lPort;
	bool bInitCard;
	LONG lUserID;
	LONG m_lPlayHandle;
	void StartSound(WORD wVolumeValue);
	CVideoIntercomDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CVideoIntercomDlg)
	enum { IDD = IDD_VIDEOINTERCOM_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVideoIntercomDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CVideoIntercomDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnOpen();
	afx_msg void OnOpenVoice();
	afx_msg void OnStop();
	afx_msg void OnPlay();
	afx_msg void OnStopVoice();
	afx_msg void OnOpenIntercom();
	afx_msg void OnStopIntercom();
	afx_msg void OnFortify();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIDEOINTERCOMDLG_H__B1D2763E_75B2_4145_8999_D9E6B148943E__INCLUDED_)
