#if !defined(AFX_LISTEN_H__5DEB64B5_109B_4DF0_8121_49C22F4E0B43__INCLUDED_)
#define AFX_LISTEN_H__5DEB64B5_109B_4DF0_8121_49C22F4E0B43__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Listen.h : header file
//



/////////////////////////////////////////////////////////////////////////////
// CListen command target

class CListen : public CAsyncSocket
{
// Attributes
public:

// Operations
public:
	CListen();
	virtual ~CListen();

// Overrides
public:
	int m_iPort;
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CListen)
	public:
	virtual void OnAccept(int nErrorCode);
	//}}AFX_VIRTUAL

	// Generated message map functions
	//{{AFX_MSG(CListen)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

// Implementation
protected:
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LISTEN_H__5DEB64B5_109B_4DF0_8121_49C22F4E0B43__INCLUDED_)
