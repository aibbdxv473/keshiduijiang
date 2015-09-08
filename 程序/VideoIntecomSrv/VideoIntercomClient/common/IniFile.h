// IniFile.h: interface for the CIniFile class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_INIFILE_H__698F9DF2_0410_4A54_BF07_B532970F26F6__INCLUDED_)
#define AFX_INIFILE_H__698F9DF2_0410_4A54_BF07_B532970F26F6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CIniFile  
{
public:
	void OpenFile(CString IniFileName);
	CString GetAppPath();

	CString  ReadString (CString Section, CString Key, CString  DefaultValue = "");
	int      ReadInteger(CString Section, CString Key, int      DefaultValue = 0);
	BOOL     ReadBool   (CString Section, CString Key, BOOL     DefaultValue = FALSE);
	FLOAT    ReadFloat  (CString Section, CString Key, FLOAT    DefaultValue = 0.0);
	CTime    ReadTime   (CString Section, CString Key, CTime    DefaultValue = NULL);
	COLORREF ReadColor  (CString Section, CString Key, COLORREF DefaultValue = NULL);
	DWORD    ReadBinary (CString Section, CString Key, LPBYTE Buff, DWORD dwSize);

	void WriteString (CString Section, CString Key, CString  Value);
	void WriteInteger(CString Section, CString Key, int      Value);
	void WriteBool   (CString Section, CString Key, BOOL     Value);
	void WriteFloat  (CString Section, CString Key, FLOAT    Value);
	void WriteTime   (CString Section, CString Key, CTime    Value);
	void WriteColor  (CString Section, CString Key, COLORREF Value);
	void WriteBinary (CString Section, CString Key, LPBYTE Buff, DWORD dwSize);
	
public:
	CString FileName;
	char  Buffer[1024];
	DWORD Len;
	
};

#endif // !defined(AFX_INIFILE_H__698F9DF2_0410_4A54_BF07_B532970F26F6__INCLUDED_)
