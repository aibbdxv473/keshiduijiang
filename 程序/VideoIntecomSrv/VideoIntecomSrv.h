// VideoIntecomSrv.h : main header file for the VIDEOINTECOMSRV application
//

#if !defined(AFX_VIDEOINTECOMSRV_H__A643839E_A7C4_4808_895B_F49BC8310B5A__INCLUDED_)
#define AFX_VIDEOINTECOMSRV_H__A643839E_A7C4_4808_895B_F49BC8310B5A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
#include <afxmt.h>
#include "GeneralDef.h"
#include "IniFile.h"
#include "VideoIntecomSrvDlg.h"
/////////////////////////////////////////////////////////////////////////////
// CVideoIntecomSrvApp:
// See VideoIntecomSrv.cpp for the implementation of this class
//
#define DEMO_LAN_CN
extern CVideoIntecomSrvDlg *g_pMainDlg;
extern void g_StringLanType(char *szDstLan, char *szLanCn, char *szLanEn);
class CVideoIntecomSrvApp : public CWinApp
{
public:
	CMutex *m_Mutex;
	CVideoIntecomSrvApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVideoIntecomSrvApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CVideoIntecomSrvApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIDEOINTECOMSRV_H__A643839E_A7C4_4808_895B_F49BC8310B5A__INCLUDED_)
