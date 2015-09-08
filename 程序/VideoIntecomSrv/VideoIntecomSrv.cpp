// VideoIntecomSrv.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "VideoIntecomSrv.h"
#include "VideoIntecomSrvDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

CVideoIntecomSrvDlg *g_pMainDlg = NULL;
void g_StringLanType(char *szDstLan, char *szLanCn, char *szLanEn);
/////////////////////////////////////////////////////////////////////////////
// CVideoIntecomSrvApp

BEGIN_MESSAGE_MAP(CVideoIntecomSrvApp, CWinApp)
	//{{AFX_MSG_MAP(CVideoIntecomSrvApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVideoIntecomSrvApp construction

CVideoIntecomSrvApp::CVideoIntecomSrvApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CVideoIntecomSrvApp object

CVideoIntecomSrvApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CVideoIntecomSrvApp initialization

BOOL CVideoIntecomSrvApp::InitInstance()
{
	m_Mutex = new CMutex(FALSE,"VedioIntercomSrv030407",NULL);
		if(m_Mutex->Lock(1) == 0)
	{
		AfxMessageBox("已经有另外一个实例在运行");
		return FALSE;
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
	SetDialogBkColor(RGB(233,233,233),RGB(0,0,0));
	CVideoIntecomSrvDlg dlg;
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

int CVideoIntecomSrvApp::ExitInstance() 
{
	// TODO: Add your specialized code here and/or call the base class
		m_Mutex->Unlock();
	delete m_Mutex;
	NET_DVR_Cleanup();
	return CWinApp::ExitInstance();
}
/*********************************************************
  Function:	g_StringLanType
  Desc:		get the current operation language string type
  Input:	szLanCn, Chinese string; szLanEn, English string;
  Output:	szDstLan, current string
  Return:	none
**********************************************************/
void g_StringLanType(char *szDstLan, char *szLanCn, char *szLanEn)
{
#ifdef DEMO_LAN_CN
		sprintf(szDstLan, "%s", szLanCn);	
#else	
		sprintf(szDstLan, "%s", szLanEn);
#endif
	return;
    WORD wLangID=(WORD)(PRIMARYLANGID(::GetSystemDefaultLangID()));
    switch(wLangID)
    {
        case LANG_ENGLISH:
			sprintf(szDstLan, "%s", szLanEn);
			break;
		case LANG_CHINESE:
			sprintf(szDstLan, "%s", szLanCn);
			break;
		default:
			sprintf(szDstLan, "%s", szLanEn);
			break;
	}	
}
