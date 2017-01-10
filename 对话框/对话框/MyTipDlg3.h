#pragma once


// CMyTipDlg3 对话框

class CMyTipDlg3 : public CDialogEx
{
	DECLARE_DYNAMIC(CMyTipDlg3)

public:
	CMyTipDlg3(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMyTipDlg3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
