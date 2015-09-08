// VideoIntecomSrvDlg.h : header file
//

#if !defined(AFX_VIDEOINTECOMSRVDLG_H__5A2B42DD_779E_487D_9F5F_BE29B69E1AEC__INCLUDED_)
#define AFX_VIDEOINTECOMSRVDLG_H__5A2B42DD_779E_487D_9F5F_BE29B69E1AEC__INCLUDED_

#include "GeneralDef.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include ".\\common\\Listen.h"
#include ".\\common\\client.h"
#include "SetUpDlg.h"
/////////////////////////////////////////////////////////////////////////////
// CVideoIntecomSrvDlg dialog
class CVideoIntecomSrvDlg : public CDialog
{
// Construction
public:
	bool m_bBloadCast;//广播标记
	void DVRLogin();
	BOOL m_bAlarm;
	int m_iAlarmCount;//报警计数
	void UpdateChannelInfo(int index);
	int SendData(const char* buff,int len,int iPort);
	int CountChar(CString temp,char ch);
	void DecodeConsole(char* buff,int len,int iPort);
	void ProcessRcv(int iPort);
	void ProcessClose(int iPort);
	void ProcessAccept(int iPort);
	bool m_bExitDemo;  //control post message when exit, so can release the buffer.
	void InitMainWin();
	void Fortify(int iDeviceIndex);
	void ProcAlarmV30(WPARAM wParam, LPARAM lParam);
	LRESULT OnWMAddLog(WPARAM wParam, LPARAM lParam);
	LRESULT OnWMProcAlarm(WPARAM wParam, LPARAM lParam);
	void CVideoIntecomSrvDlg::AddLog(int iDeviceIndex, int iLogType, const char* format, ...);
	long m_lListenHandle;
	int m_iHasChannel;
	void InitParamData();
	CListen *m_pConsoleListen;
	LOCAL_DEVICE_INFO m_struDeviceInfo[MAXCHANNEL];//设备信息
	CHANNEL_INFO m_struChannelInfo[MAXCHANNEL];//通道信息
	CONSOLE_INFO m_struConsoleInfo[MAXCONSOLE];//客户端信息
	CString  m_strConsoleRev[MAXCONSOLE];//保存接收到客户端的数据
	void InitDevice();
	CVideoIntecomSrvDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CVideoIntecomSrvDlg)
	enum { IDD = IDD_VIDEOINTECOMSRV_DIALOG };
	CListCtrl	m_listAllLog;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVideoIntecomSrvDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CVideoIntecomSrvDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	afx_msg void OnDblclkListAllLog(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnClickListAllLog(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnMenuSetup();
	afx_msg void OnMenuClear();
	afx_msg void OnMenuClearLog();
	afx_msg void OnMenuExit();
	afx_msg void OnMenuRestart();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnNMCustomdrawList(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnMenuBloadCast();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	NOTIFYICONDATA m_tnid;
	void CloseSystem();

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIDEOINTECOMSRVDLG_H__5A2B42DD_779E_487D_9F5F_BE29B69E1AEC__INCLUDED_)
