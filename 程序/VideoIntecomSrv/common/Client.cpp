// Client.cpp : implementation file
//

#include "stdafx.h"
#include "..\VideoIntecomSrv.h"
#include "Client.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClient
extern CVideoIntecomSrvDlg*pComdlg;
CClient::CClient()
{
	m_iPort = 0;
	bConnected = false;

}

CClient::~CClient()
{
}


// Do not edit the following lines, which are needed by ClassWizard.
#if 0
BEGIN_MESSAGE_MAP(CClient, CAsyncSocket)
	//{{AFX_MSG_MAP(CClient)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()
#endif	// 0

/////////////////////////////////////////////////////////////////////////////
// CClient member functions

void CClient::OnClose(int nErrorCode) 
{
	// TODO: Add your specialized code here and/or call the base class
	bConnected = false;
	g_pMainDlg->ProcessClose(m_iPort);
	CAsyncSocket::OnClose(nErrorCode);
}

void CClient::OnReceive(int nErrorCode) 
{
	// TODO: Add your specialized code here and/or call the base class
	g_pMainDlg->ProcessRcv(m_iPort);
	CAsyncSocket::OnReceive(nErrorCode);
}

void CClient::OnConnect(int nErrorCode) 
{
	// TODO: Add your specialized code here and/or call the base class
	bConnected = true;
	CAsyncSocket::OnConnect(nErrorCode);
}
