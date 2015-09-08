// Client.cpp : implementation file
//

#include "stdafx.h"
#include "..\VideoIntercomClient.h"
#include "Client.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClient
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
	if(nErrorCode == 0 )
	{
		bConnected = true;
		g_pMainDlg->m_struConsoleInfo.bConnected = true;
		g_pMainDlg->AddLog("SUCC","连接到服务端成功!",g_pMainDlg->m_struConsoleInfo.chVideoSrvIP);
	}
	else
	{
		if(g_pMainDlg->m_bFirst)
		{
		g_pMainDlg->AddLog("FAIL","连接到服务端失败!",g_pMainDlg->m_struConsoleInfo.chVideoSrvIP);
			g_pMainDlg->m_bFirst = false;
		}
	}
/*	if (0 != nErrorCode)
   {
      switch( nErrorCode )
      {
         case WSAEADDRINUSE: 
            AfxMessageBox("The specified address is already in use.\n");
            break;
         case WSAEADDRNOTAVAIL: 
            AfxMessageBox("The specified address is not available from 
               the local machine.\n");
            break;
         case WSAEAFNOSUPPORT: 
            AfxMessageBox("Addresses in the specified family cannot be 
               used with this socket.\n");
            break;
         case WSAECONNREFUSED: 
            AfxMessageBox("The attempt to connect was forcefully 
               rejected.\n");
            break;
         case WSAEDESTADDRREQ: 
            AfxMessageBox("A destination address is required.\n");
            break;
         case WSAEFAULT: 
            AfxMessageBox("The lpSockAddrLen argument is incorrect.\n");
            break;
         case WSAEINVAL: 
            AfxMessageBox("The socket is already bound to an 
               address.\n");
            break;
         case WSAEISCONN: 
            AfxMessageBox("The socket is already connected.\n");
            break;
         case WSAEMFILE: 
            AfxMessageBox("No more file descriptors are available.\n");
            break;
         case WSAENETUNREACH: 
            AfxMessageBox("The network cannot be reached from this host 
               at this time.\n");
            break;
         case WSAENOBUFS: 
            AfxMessageBox("No buffer space is available. The socket 
               cannot be connected.\n");
            break;
         case WSAENOTCONN: 
            AfxMessageBox("The socket is not connected.\n");
            break;
         case WSAENOTSOCK: 
            AfxMessageBox("The descriptor is a file, not a socket.\n");
            break;
         case WSAETIMEDOUT: 
            AfxMessageBox("The attempt to connect timed out without 
               establishing a connection. \n");
            break;
         default:
            TCHAR szError[256];
            wsprintf(szError, "OnConnect error: %d", nErrorCode);
            AfxMessageBox(szError);
            break;
      }*/

	CAsyncSocket::OnConnect(nErrorCode);
}
