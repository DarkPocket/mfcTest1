// MyDialog2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�Ի���.h"
#include "MyDialog2.h"
#include "afxdialogex.h"


// CMyDialog2 �Ի���

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


// CMyDialog2 ��Ϣ�������


void CMyDialog2::OnBnClickedButton2()
{

	
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
