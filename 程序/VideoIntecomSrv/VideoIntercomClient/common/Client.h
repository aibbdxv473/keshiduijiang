#if !defined(AFX_CLIENT_H__E62474E8_3B86_475D_9362_D7F625D86F80__INCLUDED_)
#define AFX_CLIENT_H__E62474E8_3B86_475D_9362_D7F625D86F80__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Client.h : header file
//



/////////////////////////////////////////////////////////////////////////////
// CClient command target

class CClient : public CAsyncSocket
{
// Attributes
public:

// Operations
public:
	CClient();
	virtual ~CClient();

// Overrides
public:
	bool bConnected;
	int m_iPort;
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClient)
	public:
	virtual void OnClose(int nErrorCode);
	virtual void OnReceive(int nErrorCode);
	virtual void OnConnect(int nErrorCode);
	//}}AFX_VIRTUAL

	// Generated message map functions
	//{{AFX_MSG(CClient)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

// Implementation
protected:
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLIENT_H__E62474E8_3B86_475D_9362_D7F625D86F80__INCLUDED_)
