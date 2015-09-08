// Listen.cpp : implementation file
//

#include "stdafx.h"
#include "..\VideoIntecomSrv.h"
#include "Listen.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CListen
CListen::CListen()
{
	m_iPort = 0;
}

CListen::~CListen()
{
}


// Do not edit the following lines, which are needed by ClassWizard.
#if 0
BEGIN_MESSAGE_MAP(CListen, CAsyncSocket)
	//{{AFX_MSG_MAP(CListen)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()
#endif	// 0

/////////////////////////////////////////////////////////////////////////////
// CListen member functions



void CListen::OnAccept(int nErrorCode) 
{
	// TODO: Add your specialized code here and/or call the base class
	g_pMainDlg->ProcessAccept(m_iPort);
	CAsyncSocket::OnAccept(nErrorCode);
}
