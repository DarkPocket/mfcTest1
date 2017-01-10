// MyDialog2.cpp : 实现文件
//

#include "stdafx.h"
#include "对话框.h"
#include "MyDialog2.h"
#include "afxdialogex.h"


// CMyDialog2 对话框

IMPLEMENT_DYNAMIC(CMyDialog2, CDialogEx)

CMyDialog2::CMyDialog2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CMyDialog2::~CMyDialog2()
{
}

void CMyDialog2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyDialog2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &CMyDialog2::OnBnClickedButton2)
END_MESSAGE_MAP()


// CMyDialog2 消息处理程序


void CMyDialog2::OnBnClickedButton2()
{

	
	// TODO: 在此添加控件通知处理程序代码
}
