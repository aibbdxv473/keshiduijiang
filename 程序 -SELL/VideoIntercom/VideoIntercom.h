// VideoIntercom.h : main header file for the VIDEOINTERCOM application
//

#if !defined(AFX_VIDEOINTERCOM_H__73064348_F5E0_4F18_A9F1_B40DD716AF20__INCLUDED_)
#define AFX_VIDEOINTERCOM_H__73064348_F5E0_4F18_A9F1_B40DD716AF20__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
#include "GeneralDef.h"
/////////////////////////////////////////////////////////////////////////////
// CVideoIntercomApp:
// See VideoIntercom.cpp for the implementation of this class
//
extern void g_StringLanType(char *szDstLan, char *szLanCn, char *szLanEn);

class CVideoIntercomApp : public CWinApp
{
public:
	CVideoIntercomApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVideoIntercomApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CVideoIntercomApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIDEOINTERCOM_H__73064348_F5E0_4F18_A9F1_B40DD716AF20__INCLUDED_)
