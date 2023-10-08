
// MFCApplication3Dlg.h: head file
//

#pragma once
enum MFCApplication3_Flag {
	FLAG_Add,
	FLAG_Sub,
	FLAG_Mul,
	FLAG_Did,
	FLAG_Power,
	FLAG_Sinx,
	FLAG_Cosx,
	FLAG_Tanx,
	FLAG_Lnx,
};
class CMFCApplication3Dlg : public CDialogEx
{
// construction
private:
	CString str;
	CString str0;
	double num1=0;
	double num2=0;
	CString TempStr;
	MFCApplication3_Flag flag; //Define the variable corresponding to the operator
public:
	CMFCApplication3Dlg(CWnd* pParent = nullptr);	// construction function
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION3_DIALOG };
#endif
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// realize
protected:
	HICON m_hIcon;
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:

	afx_msg void OnEnChangeEdit1();
	void SaveFirstValue();   //save the first number
	void Calculator();   //calculate
	afx_msg void OnBnClickedButton23(); //automatic generator
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnEnChangeEdit2();
};
