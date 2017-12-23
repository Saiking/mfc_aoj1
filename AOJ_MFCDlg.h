
// AOJ_MFCDlg.h : �w�b�_�[ �t�@�C��
//

#pragma once
#include "afxwin.h"
#include "UseCase\UseCase.h"



// CAOJ_MFCDlg �_�C�A���O
class CAOJ_MFCDlg : public CDialogEx
{
// �R���X�g���N�V����
public:
	CAOJ_MFCDlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^�[

// �_�C�A���O �f�[�^
	enum { IDD = IDD_AOJ_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g


// ����
protected:
	HICON m_hIcon;

	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	CEdit m_editRect;
	CEdit m_edit2;
	CEdit m_edit3;
	CEdit m_edit4;
private:
	Domain::Rect rect;
	Domain::Circle circle;
	Domain::Square square;
public:
	string input2string(CEdit& edit);
	void string2display(string str, CEdit& edit);
};
