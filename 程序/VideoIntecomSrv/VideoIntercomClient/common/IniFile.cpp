// IniFile.cpp: implementation of the CIniFile class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "IniFile.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
void CIniFile::OpenFile(CString IniFileName)
{
	FileName=GetAppPath()+IniFileName;
}

CString CIniFile::GetAppPath()
{
	char curPath[256];
	int i;
#ifndef _DEBUG
	GetModuleFileName(AfxGetApp()->m_hInstance, curPath, sizeof(curPath));
	CString rBuf = curPath;
	i = rBuf.ReverseFind('\\');
	curPath[i +1] = 0;
#else
	GetCurrentDirectory(sizeof(curPath), curPath);
	i = strlen(curPath);
	if(curPath[i - 1] != '\\') 
	{
		curPath[i] = '\\';
		curPath[i + 1] = 0;
	}
#endif
	return curPath;
/*
	char Buffer[MAX_PATH];
	::GetModuleFileName(NULL, Buffer, MAX_PATH);
	CString Path;
	Path.Format("%s", Buffer);
	int pos=Path.ReverseFind('\\');
	pos++;
	return(Path.Left(pos));
*/
}

CString CIniFile::ReadString(CString Section, CString Key, CString DefaultValue)
{
	::GetPrivateProfileString(Section, Key, DefaultValue, Buffer, 1024, FileName);	

	CString Result(Buffer);
	return(Result);
}

int CIniFile::ReadInteger(CString Section, CString Key, int DefaultValue)
{
	return(::GetPrivateProfileInt(Section, Key, DefaultValue, FileName));
}

BOOL CIniFile::ReadBool(CString Section, CString Key, BOOL DefaultValue)
{
	BOOL b = (BOOL)::GetPrivateProfileInt(Section, Key, (int)DefaultValue, FileName);
	return(b);
}

FLOAT CIniFile::ReadFloat(CString Section, CString Key, FLOAT DefaultValue)
{
	try
	{
		return((FLOAT)atof(ReadString(Section, Key, "")));
	}
	catch(...)
	{
		return(DefaultValue);
	}
}

CTime CIniFile::ReadTime(CString Section, CString Key, CTime DefaultValue)
{
	time_t t = DefaultValue.GetTime();
	t = ReadInteger(Section, Key, t);
	return(CTime(t));
}

COLORREF CIniFile::ReadColor(CString Section, CString Key, COLORREF DefaultValue)
{
	return(ReadInteger(Section, Key, DefaultValue));
}

DWORD CIniFile::ReadBinary(CString Section, CString Key, LPBYTE Buff, DWORD dwSize)
{
	CString S;
	S = ReadString(Section, Key, "");
	int n, i, j;
	for (i=0, j=0; i<S.GetLength(); i+=2, j++)
	{
		if (i==(int)dwSize*2) break;
		n = S[i  ] - '0';
		n = n < 10 ? n : n-('A'-'0'-10);
		Buff[j] = n << 4;
		n = S[i+1] - '0';
		n = n < 10 ? n : n-('A'-'0'-10);	
		Buff[j] += n;
	}
	return(j);
}

void CIniFile::WriteString(CString Section, CString Key, CString  Value)
{
	::WritePrivateProfileString(Section, Key, Value, FileName);
}

void CIniFile::WriteInteger(CString Section, CString Key, int Value)
{
	CString S;
	S.Format("%d", Value);
	::WritePrivateProfileString(Section, Key, S, FileName);
}

void CIniFile::WriteBool(CString Section, CString Key, BOOL Value)
{
	WriteInteger(Section, Key, Value);
}

void CIniFile::WriteFloat(CString Section, CString Key, FLOAT Value)
{
	CString S;
	S.Format("%f", Value);
	::WritePrivateProfileString(Section, Key, S, FileName);
}

void CIniFile::WriteTime(CString Section, CString Key, CTime Value)
{
	WriteInteger(Section, Key, Value.GetTime());
}

void CIniFile::WriteColor(CString Section, CString Key, COLORREF Value)
{
	WriteInteger(Section, Key, Value);
}

void CIniFile::WriteBinary(CString Section, CString Key, LPBYTE Buff, DWORD dwSize)
{
	memcpy(Buffer, Buff, dwSize);
	Buffer[dwSize*2] = 0;
	int n;
	for (int i=0; i<(int)dwSize; i++)
	{
		n = Buff[i] >> 4;
		Buffer[i*2  ] = n < 10 ? n+'0' : n+'A'-10;
		n = Buff[i] & 0x0F;
		Buffer[i*2+1] = n < 10 ? n+'0' : n+'A'-10;	
	}
	::WritePrivateProfileString(Section, Key, Buffer, FileName);	
}

