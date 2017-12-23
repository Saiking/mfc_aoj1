
// AOJ_MFCDlg.h : ヘッダー ファイル
//

#pragma once
#include "afxwin.h"
#include "UseCase\UseCase.h"



// CAOJ_MFCDlg ダイアログ
class CAOJ_MFCDlg : public CDialogEx
{
// コンストラクション
public:
	CAOJ_MFCDlg(CWnd* pParent = NULL);	// 標準コンストラクター

// ダイアログ データ
	enum { IDD = IDD_AOJ_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
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
