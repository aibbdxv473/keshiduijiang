#if !defined(AFX_RECORDDLG_H__4F683428_A20C_4ED7_9CD8_FE100DC93760__INCLUDED_)
#define AFX_RECORDDLG_H__4F683428_A20C_4ED7_9CD8_FE100DC93760__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RecordDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRecordDlg dialog
#define TIMER_INTERVAL 500
#define USED_PORT 99		//card decode port
class CRecordDlg : public CDialog
{
// Construction
public:
	void UpdateScreen();
	BOOL m_bFullScreen;
	BOOL m_bCheck;
	bool m_bFileRefCreated;
	void StopPlayBack();
	void ShowPlayBackState();
	void SetStopState();
	void EnableFlashWnd(BOOL bEnable);
	void PlayBackShowNormal();
	CRect m_rcWnd;
	void SetStopSoundState();
	void SetPlaySoundState();
	BOOL m_bPause;
	void SetPauseState();
	bool m_bSound;
	int m_iTotalSeconds;
	void UpdateStepBackUI(BOOL bEnable);
	void Sound(BOOL bSound);
	void Pause();
	BOOL m_bStartRecord;
	void SetPlayState();

	HWND m_hPlayWnd;
	BOOL m_bStep;
	BOOL m_bPlay;
	void PlayBack();
	void InitUI();
	CString m_strPath;
	CRecordDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CRecordDlg)
	enum { IDD = IDD_DIALOG_RECORD };
	CSliderCtrl	m_sliderVolume;
	CSliderCtrl	m_sliderPlayProgress;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRecordDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
		HICON m_hSoundStartIcon;
	HICON m_hSoundStopIcon;

	HICON m_hPlayEnableIcon;
	HICON m_hPlayDisableIcon;

	HICON m_hPauseEnableIcon;
	HICON m_hPauseDisableIcon;

	HICON m_hStopEnableIcon;
	HICON m_hStopDisableIcon;

	HICON m_hGotoHeadDisableIcon;
	HICON m_hGotoHeadEnableIcon;

	HICON m_hGotoTailEnableIcon;
	HICON m_hGotoTailDisableIcon;

	HICON m_hFastDisableIcon;
	HICON m_hFastEnableIcon;

	HICON m_hSlowDisableIcon;
	HICON m_hSlowEnableIcon;

	HICON m_hStepEnableIcon;
	HICON m_hStepDisableIcon;

	HICON m_hStepBackEnableIcon;
	HICON m_hStepBackDisableIcon;
	HICON m_hCloseIcon;
		HICON m_hCaptureIcon;
	// Generated message map functions
	//{{AFX_MSG(CRecordDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnBtnLocalPlay();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnBtnLocalStop();
	afx_msg void OnBtnLocalSlow();
	afx_msg void OnBtnLocalFast();
	afx_msg void OnBtnLocalPicSnatch();
	afx_msg void OnBtnLocalStepBack();
	afx_msg void OnBtnLocalStepForward();
	afx_msg void OnBtnLocalSound();
	afx_msg void OnClose();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnBtnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RECORDDLG_H__4F683428_A20C_4ED7_9CD8_FE100DC93760__INCLUDED_)
