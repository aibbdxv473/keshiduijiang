// VideoIntercomClient.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "VideoIntercomClient.h"
#include "VideoIntercomClientDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVideoIntercomClientApp
CVideoIntercomClientDlg *g_pMainDlg = NULL;
BOOL g_bLocalCapPic = FALSE;
BEGIN_MESSAGE_MAP(CVideoIntercomClientApp, CWinApp)
	//{{AFX_MSG_MAP(CVideoIntercomClientApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVideoIntercomClientApp construction

CVideoIntercomClientApp::CVideoIntercomClientApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CVideoIntercomClientApp object

CVideoIntercomClientApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CVideoIntercomClientApp initialization

BOOL CVideoIntercomClientApp::InitInstance()
{

		VERIFY( 1 == InitSkinMagicLib( AfxGetInstanceHandle(), "VideoIntercomClient" , 
		NULL,
		NULL ) );
	VERIFY( 1 == LoadSkinFromResource( AfxGetInstanceHandle()  ,"IDR_SKINMAGIC8", "SKINMAGIC" ) ); 
	VERIFY( 1 == SetDialogSkin( "Dialog" ) );
		m_Mutex = new CMutex(FALSE,"VedioIntercomCli030407",NULL);
		if(m_Mutex->Lock(1) == 0)
	{
		AfxMessageBox("已经有另外一个实例在运行");
#ifndef _DEBUG
		return FALSE;
#endif
	}
	if (!AfxSocketInit())
	{
		AfxMessageBox(IDP_SOCKETS_INIT_FAILED);
		return FALSE;
	}

	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	NET_DVR_Init();
//	SetDialogBkColor(RGB(233,233,233),RGB(0,0,0));
	CVideoIntercomClientDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}

int CVideoIntercomClientApp::ExitInstance() 
{
	// TODO: Add your specialized code here and/or call the base class
	m_Mutex->Unlock();
	delete m_Mutex;
	NET_DVR_Cleanup();
	ExitSkinMagicLib();
	return CWinApp::ExitInstance();
}
