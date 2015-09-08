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
	CRect m_rtButtMin; //��¼��С����ťλ��! 
	void DrawButton(); //������С����ť!   
	BOOL m_BMPPressed;//��С����ť״̬��־!     
	CRect m_ButtMinTips;//��¼��С����ť��
	CBitmap m_bitmap;
	bool m_bStartRecord;//true  ��ʼ¼�� false ֹͣ¼��
	CString m_strRecordPath;//��Ƶ����·��
	CString m_strPicPath;//ͼ�񱣴�·��
	BOOL m_bFirst;//��һ�����ӷ����
	bool m_bCheckConnect;//2���Ӻ��Զ��Ͽ�ͨ��
	int m_iConnectIndex;//��������Ͽ�ʱ��
	CFont m_fontListLog;//ListBox������
	void AddLog(const char *strType, const char *strInfo,const char *strDevice);//�����־
	bool m_bShowAlarmHint;
	VOID UpdateChannelStatus(int iChannelIndex);
	void InitMainFrm();
	CFont m_fontListChannel;//listbox������
	CImageList m_imlist;//ͼ���б�
	int m_lVoiceHandle;
	CAlarmDlg m_alarmDlg;//������ʾ�Ի���
	void AlarmStop(int iDeviceIndex);//ֹͣ������ʾ
	void AlarmStart(int iDeviceIndex);//��ʼ������ʾ
	void SendData(const char* buff,int len);
	int CountChar(CString &temp,char ch);//�����ַ���temp�к����ַ�ch�ĸ���
//	CString m_strConsoleRev;
	void StopPlay();//ֹͣͨ��
	void InitData();//���ݳ�ʼ��
	void ProcessRcv(int iPort);//�յ������������Ӧ����
	void ProcessClose(int iPort);//����˶Ͽ���Ӧ����
	LRESULT OnSendConnect(WPARAM wParam, LPARAM lParam);
	void DecodeVeidoSrv(const char * buff,int len);//�������Է���˵���Ϣ
	int m_lPlayHandle;//��ƵԤ�����
	LOCAL_DEVICE_INFO m_struDeviceInfo;//�豸��Ϣ
	CHANNEL_INFO m_struChannelInfo[MAXCHANNEL];//ͨ����Ϣ����
	CONSOLE_INFO m_struConsoleInfo;//����̨��Ϣ
	void StartPlay(int iDeviceIndex);//��ʼͨ��
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
//	CToolTips m_ToolTip;//���幤����ʾ���ؼ�����
	void GetMinButRect();//��ȡ��С����ť��������
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
