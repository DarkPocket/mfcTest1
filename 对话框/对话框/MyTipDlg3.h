#pragma once


// CMyTipDlg3 �Ի���

class CMyTipDlg3 : public CDialogEx
{
	DECLARE_DYNAMIC(CMyTipDlg3)

public:
	CMyTipDlg3(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMyTipDlg3();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
