// VideoIntercomClientDlg.h : header file
//

#if !defined(AFX_VIDEOINTERCOMCLIENTDLG_H__B139E865_6BAC_495D_BD99_97813F1D8CCF__INCLUDED_)
#define AFX_VIDEOINTERCOMCLIENTDLG_H__B139E865_6BAC_495D_BD99_97813F1D8CCF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#define MAXCHANNEL 20
/////////////////////////////////////////////////////////////////////////////
// CVideoIntercomClientDlg dialog
#include ".\\common\\client.h"
#include "AlarmDlg.h"
#include "SetUpDlg.h"
#include "RecordDlg.h"
#include "EDCLOCK.H"	// Added by ClassView
class CVideoIntercomClientDlg : public CDialog
{
// Construction
public:
	void BloadCast();
	CRect m_rtButtMin; //记录最小化按钮位置! 
	void DrawButton(); //绘制最小化按钮!   
	BOOL m_BMPPressed;//最小化按钮状态标志!     
	CRect m_ButtMinTips;//记录最小化按钮区
	CBitmap m_bitmap;
	bool m_bStartRecord;//true  开始录像 false 停止录像
	CString m_strRecordPath;//视频保存路径
	CString m_strPicPath;//图像保存路径
	BOOL m_bFirst;//第一次连接服务端
	bool m_bCheckConnect;//2分钟后自动断开通话
	int m_iConnectIndex;//用来计算断开时间
	CFont m_fontListLog;//ListBox的字体
	void AddLog(const char *strType, const char *strInfo,const char *strDevice);//添加日志
	bool m_bShowAlarmHint;
	VOID UpdateChannelStatus(int iChannelIndex);
	void InitMainFrm();
	CFont m_fontListChannel;//listbox的字体
	CImageList m_imlist;//图像列表
	int m_lVoiceHandle;
	CAlarmDlg m_alarmDlg;//报警提示对话框
	void AlarmStop(int iDeviceIndex);//停止报警提示
	void AlarmStart(int iDeviceIndex);//开始报警提示
	void SendData(const char* buff,int len);
	int CountChar(CString &temp,char ch);//计算字符串temp中含有字符ch的个数
//	CString m_strConsoleRev;
	void StopPlay();//停止通话
	void InitData();//数据初始化
	void ProcessRcv(int iPort);//收到服务端数据响应函数
	void ProcessClose(int iPort);//服务端断开响应函数
	LRESULT OnSendConnect(WPARAM wParam, LPARAM lParam);
	void DecodeVeidoSrv(const char * buff,int len);//解析来自服务端的信息
	int m_lPlayHandle;//视频预览句柄
	LOCAL_DEVICE_INFO m_struDeviceInfo;//设备信息
	CHANNEL_INFO m_struChannelInfo[MAXCHANNEL];//通道信息数组
	CONSOLE_INFO m_struConsoleInfo;//控制台信息
	void StartPlay(int iDeviceIndex);//开始通话
	CVideoIntercomClientDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CVideoIntercomClientDlg)
	enum { IDD = IDD_VIDEOINTERCOMCLIENT_DIALOG };
	CAnimateCtrl	m_Anitmate;
	CListCtrl	m_listAllLog;
	CListCtrl	m_listChannel;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVideoIntercomClientDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	HICON m_hCaptureIcon;
//	CToolTips m_ToolTip;//定义工具提示条控件变量
	void GetMinButRect();//获取最小化按钮所在区域
	// Generated message map functions
	//{{AFX_MSG(CVideoIntercomClientDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnClosevideo();
	afx_msg void OnBtnCapture();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnClose();
	afx_msg void OnDblclkListChannel(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnNMCustomdrawList(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg BOOL OnEraseBkgnd( CDC* pDC ); 
	afx_msg void OnCheckDisconnect();
	afx_msg void OnBtnRecord();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnNcPaint();
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg void OnNcMouseMove(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonDown(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonUp(UINT nHitTest, CPoint point);
	afx_msg void OnCheckAudio();
	afx_msg void OnBtnPlayRecord();
	afx_msg void OnDblclkListAllLog(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnShowHide();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnBloadcast();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	bool CheckConnectedSrv();
	long m_lUserID[MAXCHANNEL];
	bool m_bBloadCast;
	long lUserID;
	bool m_bMin;
	int m_iConnectTime;
	int		m_iPlayMode;
	CLEDClock m_clock;
	int m_iHasChannel;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIDEOINTERCOMCLIENTDLG_H__B139E865_6BAC_495D_BD99_97813F1D8CCF__INCLUDED_)
