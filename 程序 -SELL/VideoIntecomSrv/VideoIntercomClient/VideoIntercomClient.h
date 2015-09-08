// VideoIntercomClient.h : main header file for the VIDEOINTERCOMCLIENT application
//

#if !defined(AFX_VIDEOINTERCOMCLIENT_H__AE373444_8995_400D_9B83_D699C4D37606__INCLUDED_)
#define AFX_VIDEOINTERCOMCLIENT_H__AE373444_8995_400D_9B83_D699C4D37606__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
#include ".\\common\\IniFile.h"
#include ".\\common\\GeneralDef.h"
#include "VideoIntercomClientDlg.h"
/////////////////////////////////////////////////////////////////////////////
// CVideoIntercomClientApp:
// See VideoIntercomClient.cpp for the implementation of this class
//
extern CVideoIntercomClientDlg *g_pMainDlg;
class CVideoIntercomClientApp : public CWinApp
{
public:
	CMutex *m_Mutex;
	CVideoIntercomClientApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVideoIntercomClientApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CVideoIntercomClientApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIDEOINTERCOMCLIENT_H__AE373444_8995_400D_9B83_D699C4D37606__INCLUDED_)
